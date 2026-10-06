/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dd31e8; end: 106dd32ab;  */

void FUN_106dd31e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x218);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106dd32ac;
  puStack_50 = &UNK_11097c750;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  _objc_retain(uVar4);
  uStack_38 = uVar4;
  func_0x00010c244f00(uVar3,param_2,uVar1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106dd32ac; end: 106dd353b;  */

void FUN_106dd32ac(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c12d360(puVar2);
      lVar8 = param_2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000109189420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar8);
      if (lVar5 != 0) {
        uVar6 = *(ulong *)(param_1 + 0x28);
        func_0x00010c0ca760();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf4b900();
        _objc_release(uVar6);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)(param_1 + 0x28);
          func_0x00010c0ca760();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 == 0) {
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            func_0x00010c1c6a60(*(undefined8 *)(param_1 + 0x28));
            _objc_release(puVar9);
          }
          else {
            func_0x00010c1c6a60(*(undefined8 *)(param_1 + 0x28));
          }
          _objc_release(lVar8);
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0ca760(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066b00();
          _objc_release(uVar10);
        }
      }
      _objc_release(lVar5);
      lVar15 = lVar15 + 1;
    } while (lVar3 != lVar15);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar11 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a80(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar9);
  _objc_release(puVar11);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x210);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar10);
  uVar14 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar14);
  func_0x00010c09d7a0(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(uVar10);
  return;
}



/* Entry: 106dd353c; end: 106dd3707;  */

void FUN_106dd353c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x210);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106dd35fc;
  puStack_48 = &UNK_11086fc78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  _objc_retain(uVar4);
  uStack_38 = uVar4;
  func_0x00010c09d7a0(uVar3,param_2,uVar1,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106dd3708; end: 106dd384b;  */

void FUN_106dd3708(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lVar6 * 8);
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c22b400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          lVar6 = lVar4;
          func_0x00010c118460(lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          goto LAB_106dd3808;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar6 = 0;
  }
LAB_106dd3808:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x310),PTR_s_target_112678178);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 106dd384c; end: 106dd3857;  */

void FUN_106dd384c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x310),PTR_s_target_112678178);
  return;
}



/* Entry: 106dd3858; end: 106dd38cb;  */

void FUN_106dd3858(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c08fa60();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x388);
    func_0x00010c2542a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18cc8(uVar1,uVar3,uVar2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106dd38cc; end: 106dd3bff;  */

void FUN_106dd38cc(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar4 = PTR_PTR_1126b2378;
    _objc_alloc_init(PTR_PTR_1126b2378);
    func_0x00010c21b4e0();
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x000108c2bd8c();
    if (iVar3 != 0 && lVar5 != 0) {
      lVar6 = lVar5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        lVar6 = lVar5;
        func_0x00010c094540(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b2880(uVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar5;
      func_0x00010bf8a7e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf8a400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c094540(lVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_106e18a10(puVar4,lVar6,lVar7,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      func_0x00010c2b0a40(*(undefined8 *)(param_1 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010b5f88e4();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bfd5900();
    if ((int)uVar13 != 0) {
      uVar13 = uVar9;
      func_0x00010bf45f00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bb340(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar13);
    }
    puVar10 = PTR_PTR_1126af4c0;
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf977c0();
    uVar2 = (int)puVar11 - 0x39;
    if (uVar2 < 0x16 && (1 << (ulong)(uVar2 & 0x1f) & 0x3dd3c1U) != 0) {
      puVar11 = puVar10;
      func_0x00010bf3d240();
      if (((ulong)puVar11 & 0x7b40) != 0) {
        FUN_106e18a10(puVar4,0,0,0);
      }
      puVar11 = puVar10;
      func_0x00010bf3d240();
      uVar2 = 2;
      if (((ulong)puVar11 & 0x40) == 0) {
        uVar2 = -((uint)puVar11 >> 7 & 1) & 3;
      }
      uVar1 = 1;
      if (((ulong)puVar11 & 0x8020) == 0) {
        uVar1 = uVar2;
      }
      FUN_106e18b80(puVar4,uVar1);
      func_0x00010c2b0a40(*(undefined8 *)(param_1 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = puVar10;
    func_0x00010bf977c0();
    uVar2 = (int)puVar11 - 0x39;
    if ((uVar2 < 0x16) && ((1 << (ulong)(uVar2 & 0x1f) & 0x3dd3c1U) != 0)) {
      func_0x00010c2b0a40(*(undefined8 *)(param_1 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    puVar11 = puVar4;
    func_0x00010bf63640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aafe0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf21f60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar13,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 106dd3c00; end: 106dd3df3; -[SCGallerySendItemsTask _freshTranscodeChatVideoForSnap:chatVideo:cloudFile:captureSessionId:useWebP:webPQuality:completionBlock:] */

void FUN_106dd3c00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126cf9c0;
  _objc_alloc(PTR_PTR_1126cf9c0);
  lVar2 = param_2;
  func_0x00010becea60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029d60(puVar1);
  _objc_release(lVar2);
  _objc_initWeak(auStack_78,puVar1);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_1;
  uStack_80 = param_8;
  _objc_retain(param_9);
  func_0x00010c17fb20(puVar1);
  param_2 = param_2 + 0x368;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf9d620();
  _objc_release(param_2);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106dd3df4; end: 106dd3f0f;  */

void FUN_106dd3df4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x368;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010c222260(*(undefined8 *)(param_1 + 0x40),uVar4);
  }
  else {
    uVar3 = param_2;
    func_0x00010c0efa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222260(*(undefined8 *)(param_1 + 0x40),uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd3f10; end: 106dd414b; -[SCGallerySendItemsTask _prepareUploadableChatMedia:withGallerySnap:snapDetail:completionBlock:] */

void FUN_106dd3f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3e00(param_1);
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x290);
  _objc_retain(uVar9);
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106dd414c;
  puStack_a8 = &UNK_11097c930;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = param_4;
  uStack_98 = param_3;
  uStack_90 = param_5;
  lStack_88 = param_1;
  uStack_80 = uVar1;
  uStack_78 = uVar9;
  uStack_70 = param_6;
  _objc_retain(uVar9);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  ppuVar3 = &puStack_c0;
  _objc_retainBlock();
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x340);
  uVar5 = *(undefined8 *)(param_1 + 0x338);
  uVar7 = *(undefined8 *)(param_1 + 0x1c8);
  uVar8 = *(undefined8 *)(param_1 + 0x330);
  uVar4 = *(undefined8 *)(param_1 + 0x328);
  uVar6 = *(undefined8 *)(param_1 + 0x360);
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar3[2])
            (*(undefined8 *)(param_1 + 0x150),ppuVar3,uVar11,uVar12,uVar5,uVar7,uVar8,uVar4,uVar6,
             uVar10,*(undefined8 *)(param_1 + 0xd8),*(undefined1 *)(param_1 + 0x148));
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uVar9);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 106dd414c; end: 106dd4e5f;  */

void FUN_106dd414c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  double dVar20;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  double dStack_258;
  undefined1 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  double dStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  double dStack_1b0;
  undefined1 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  double dStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  double dStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  
  dVar20 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _CACurrentMediaTime();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106dd4e60;
  puStack_a8 = &UNK_11085b7b0;
  dStack_90 = dVar20;
  _objc_retain(param_12);
  uStack_a0 = param_12;
  uVar17 = *(undefined8 *)(param_3 + 0x50);
  _objc_retain(uVar17);
  ppuVar2 = &puStack_c0;
  uStack_98 = uVar17;
  _objc_retainBlock();
  uVar17 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010b5fa088();
  puVar8 = PTR_PTR_1126bfb98;
  switch(uVar17) {
  case 0:
    uVar17 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0ef4a0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b580();
    if (((ulong)puVar8 & 1) == 0) {
      uVar9 = *(ulong *)(param_3 + 0x20);
      func_0x00010b697ae8(uVar9,2);
      _objc_release(uVar17);
      if ((uVar9 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x28);
        _objc_retain(uVar3);
        puVar8 = PTR_PTR_1126bfbc8;
        func_0x000108ec16c0(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x1c8));
        func_0x00010bf586e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_138 = 0xc2000000;
        pcStack_130 = FUN_106dd5014;
        puStack_128 = &UNK_110952538;
        uVar17 = *(undefined8 *)(param_3 + 0x20);
        uStack_120 = uVar3;
        _objc_retain(uVar17);
        uStack_118 = uVar17;
        _objc_retain(param_6);
        uStack_110 = param_6;
        _objc_retain(ppuVar2);
        uVar17 = *(undefined8 *)PTR__CGSizeZero_110347620;
        uVar11 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
        ppuStack_108 = ppuVar2;
        _objc_retain(uVar3);
        func_0x00010c134cc0(uVar17,uVar11,param_9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(ppuStack_108);
        _objc_release(uStack_110);
        _objc_release(uStack_118);
        _objc_release(uStack_120);
        break;
      }
    }
    else {
      _objc_release(uVar17);
    }
    uVar17 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x380);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d2988;
    func_0x00010c22bde0(PTR_PTR_1126d2988);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106dd4ec0;
    puStack_e8 = &UNK_11097c840;
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar11);
    uStack_c8 = param_13;
    uStack_e0 = uVar11;
    dStack_d0 = param_1;
    _objc_retain(ppuVar2);
    ppuStack_d8 = ppuVar2;
    func_0x00010bfe8be0(uVar17);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(ppuStack_d8);
    uVar3 = uStack_e0;
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar3);
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_106dd5158;
    puStack_188 = &UNK_11085b660;
    uStack_180 = *(undefined8 *)(param_3 + 0x38);
    uVar17 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar17);
    uStack_178 = uVar17;
    _objc_retain(uVar3);
    uStack_170 = uVar3;
    _objc_retain(param_11);
    uStack_168 = param_11;
    uVar17 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar17);
    uStack_148 = param_13;
    uStack_160 = uVar17;
    dStack_150 = param_1;
    _objc_retain(ppuVar2);
    ppuVar13 = &puStack_1a0;
    ppuStack_158 = ppuVar2;
    _objc_retainBlock();
    uVar9 = *(ulong *)(*(long *)(param_3 + 0x38) + 0x370);
    uVar17 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c241220(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010becea60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x106dd5174;
    puStack_1d0 = &UNK_11097c870;
    _objc_retain(uVar3);
    uStack_1a8 = param_13;
    uStack_1c8 = uVar3;
    dStack_1b0 = param_1;
    _objc_retain(ppuVar2);
    ppuStack_1c0 = ppuVar2;
    _objc_retain(ppuVar13);
    ppuStack_1b8 = ppuVar13;
    func_0x00010bf49a20();
    _objc_release(uVar11);
    _objc_release(uVar17);
    if ((uVar9 & 1) == 0) {
      (*(code *)ppuVar13[2])(ppuVar13);
    }
    _objc_release(ppuStack_1b8);
    _objc_release(ppuStack_1c0);
    _objc_release(uStack_1c8);
    _objc_release(ppuVar13);
    _objc_release(ppuStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    _objc_release(uStack_178);
    break;
  case 2:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xc:
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain();
    lVar4 = *(long *)(param_3 + 0x30);
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5c920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_release(lVar4);
code_r0x000106dd44d0:
      func_0x000109023cdc(*(undefined8 *)(param_3 + 0x20));
    }
    else {
      uVar6 = *(ulong *)(param_3 + 0x30);
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf5c920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x000106dd1a30();
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((uVar7 & 1) != 0) goto code_r0x000106dd44d0;
      dVar20 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    puVar8 = PTR_PTR_1126cf9c0;
    _objc_alloc(PTR_PTR_1126cf9c0);
    uVar11 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010becea60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029d80(dVar20,param_2,puVar8);
    _objc_release(uVar11);
    _objc_initWeak(&uStack_2c8,puVar8);
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_106dd51a8;
    puStack_230 = &UNK_11097c8a0;
    _objc_copyWeak(auStack_208,&uStack_2c8);
    uStack_228 = *(undefined8 *)(param_3 + 0x38);
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    uStack_200 = uVar17;
    _objc_retain(uVar11);
    uStack_220 = uVar11;
    _objc_retain(uVar3);
    uStack_1f0 = param_13;
    uStack_218 = uVar3;
    dStack_1f8 = param_1;
    _objc_retain(ppuVar2);
    ppuStack_210 = ppuVar2;
    func_0x00010c17fb20(puVar8);
    lVar5 = *(long *)(param_3 + 0x38) + 0x368;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf9d620();
    _objc_release(lVar5);
    _objc_release(ppuStack_210);
    _objc_release(uStack_218);
    _objc_release(uStack_220);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(&uStack_2c8);
    _objc_release(puVar8);
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 0xb:
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b580();
    if (((ulong)puVar8 & 1) == 0) {
      uVar9 = *(ulong *)(param_3 + 0x20);
      func_0x00010b697ae8(uVar9,2);
      _objc_release(uVar3);
      if ((uVar9 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x28);
        _objc_retain();
        puVar12 = *(undefined **)(param_3 + 0x48);
        func_0x00010c269d40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010c0ef4a0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar12;
        func_0x00010bfbf380(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        _objc_release(puVar12);
        iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
        func_0x00010bfd9dc0();
        if (iVar1 == 0) {
          uVar17 = 0;
        }
        else {
          puStack_2c0 = &uStack_2c8;
          uStack_2c8 = 0;
          dVar20 = 1.02270250269256e-312;
          uStack_2b8 = 0x3032000000;
          pcStack_2b0 = FUN_106dd5438;
          uStack_2a8 = 0x106dd5448;
          uStack_2a0 = 0;
          func_0x00010c136020(param_5);
          uVar17 = puStack_2c0[5];
          func_0x00010c1511c0(uVar17);
          _objc_retainAutoreleasedReturnValue();
          __Block_object_dispose(&uStack_2c8,8);
          _objc_release(uStack_2a0);
        }
        puVar12 = PTR_PTR_1126bc7b8;
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c23f480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar12);
        puVar12 = puVar15;
        func_0x00010bf529e0();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = puVar15;
          func_0x00010c0dfd40(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010c2a2e80();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar14;
          func_0x00010c2a2ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2039e0(uVar3);
          _objc_release(puVar16);
          _objc_release(puVar14);
          _objc_release(puVar12);
        }
        iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
        func_0x000109023c14();
        uVar11 = uVar17;
        puVar12 = puVar8;
        if (iVar1 != 0) {
          func_0x000109023c78(*(undefined8 *)(param_3 + 0x20));
          dVar20 = 1.0 / dVar20;
          func_0x00010bf5c820(dVar20,puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          func_0x00010bf5c820(dVar20,uVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
        }
        fVar19 = SUB84(dVar20,0);
        iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
        func_0x000109023d98();
        puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
        if (iVar1 != 0) {
          puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          fVar19 = 0.0;
          func_0x00010c12fbe0(0,puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar14);
          puVar12 = puVar8;
        }
        func_0x00010bf8b160(*(undefined8 *)(param_3 + 0x20));
        func_0x00010c1a9f60((double)fVar19,uVar3);
        func_0x000100162d98("APPSTORE",ppuVar2);
        _objc_release(puVar15);
        _objc_release(uVar11);
        _objc_release(puVar12);
        break;
      }
    }
    else {
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar3);
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x380);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0ef4a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d2988;
    func_0x00010c22bde0(PTR_PTR_1126d2988);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_106dd52c4;
    puStack_280 = &UNK_11097c900;
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uStack_260 = uVar17;
    _objc_retain(uVar18);
    uStack_250 = param_13;
    uStack_278 = uVar18;
    uStack_270 = uVar3;
    dStack_258 = param_1;
    _objc_retain(ppuVar2);
    ppuStack_268 = ppuVar2;
    _objc_retain(uVar3);
    func_0x00010bfe8be0(uVar11);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(ppuStack_268);
    _objc_release(uStack_270);
    _objc_release(uStack_278);
    break;
  default:
    goto LAB_106dd4644;
  }
  _objc_release(uVar3);
LAB_106dd4644:
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106dd4e60; end: 106dd4ebf;  */

void FUN_106dd4e60(long param_1)

{
  undefined8 uVar1;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c279ba0(uVar1);
  func_0x00010c219660(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000106dd4ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106dd4ec0; end: 106dd5013;  */

void FUN_106dd4ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bfae700(param_3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd5014; end: 106dd5157;  */

void FUN_106dd5014(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  puVar1 = PTR_PTR_1126bc7b8;
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010c23f480(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2039e0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  FUN_106dee010(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106dd5158; end: 106dd51a7;  */

void FUN_106dd5158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be191f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
             PTR_s__freshTranscodeChatVideoForSnap__112563e18,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x58),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106dd51a8; end: 106dd52c3;  */

void FUN_106dd51a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x368;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010c222260(*(undefined8 *)(param_1 + 0x50),uVar4);
  }
  else {
    uVar3 = param_2;
    func_0x00010c0efa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222260(*(undefined8 *)(param_1 + 0x50),uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd52c4; end: 106dd5437;  */

void FUN_106dd52c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bfae700(param_3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd5438; end: 106dd544f;  */

void FUN_106dd5438(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106dd5450; end: 106dd5487;  */

void FUN_106dd5450(long param_1,undefined8 param_2)

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



/* Entry: 106dd5488; end: 106dd563f; -[SCGallerySendItemsTask _prepareUploadableChatMediaForSnapDoc:gallerySnap:snapMetadata:completionBlock:] */

void FUN_106dd5488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc8d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106dd5640;
  puStack_98 = &UNK_11097c9f0;
  _objc_retain(param_6);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106dd5998;
  puStack_c0 = &UNK_110859a38;
  uStack_b8 = param_6;
  lStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = uVar3;
  uStack_68 = param_6;
  _objc_retain(param_6);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c279ac0(uVar2,param_2,param_3,0x27,&puStack_b0,&puStack_d8);
  _objc_release(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd5640; end: 106dd5833;  */

void FUN_106dd5640(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dd5834;
  puStack_68 = &UNK_11097c960;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  uStack_60 = param_2;
  uStack_58 = uVar2;
  _objc_retain(param_2);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  _objc_retain(ppuVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  func_0x00010c0bed00(param_2);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(ppuVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd5834; end: 106dd585f;  */

void FUN_106dd5834(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bf3a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cleanUpMedia_1125ac1c8);
  return;
}



/* Entry: 106dd5860; end: 106dd58d7;  */

void FUN_106dd5860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be796c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd58d8; end: 106dd5997;  */

void FUN_106dd58d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c29bb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0ef960(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be79780(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106dd5998; end: 106dd5a33;  */

void FUN_106dd5998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106dd5a34;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd5a34; end: 106dd5a47;  */

void FUN_106dd5a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dd5a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dd5a48; end: 106dd5bcf; -[SCGallerySendItemsTask _prepareUploadableChatImageForSnapDoc:gallerySnap:snapMetadata:venueId:image:completionBlock:] */

void FUN_106dd5a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126cfd18;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60();
  _objc_release(puVar2);
  FUN_106def8b0(puVar1,param_4,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c204e80(puVar1);
  _objc_release(param_5);
  func_0x00010c2208c0(puVar1);
  _objc_release(param_6);
  func_0x00010c1a9f00(puVar1);
  _objc_release(param_7);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dd5bd0;
  puStack_68 = &UNK_11084aaa8;
  puStack_60 = puVar1;
  uStack_58 = param_8;
  _objc_retain(puVar1);
  _objc_retain(param_8);
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(puStack_60);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_8);
  return;
}



/* Entry: 106dd5bd0; end: 106dd5be3;  */

void FUN_106dd5bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dd5be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106dd5be4; end: 106dd5e3f; -[SCGallerySendItemsTask _prepareUploadableChatVideoForSnapDoc:gallerySnap:snapMetadata:venueId:videoURL:overlayImage:completionBlock:] */

void FUN_106dd5be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lStack_68 = 0;
  lVar2 = param_1;
  func_0x00010be4c540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126d2a00;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ad60();
    _objc_release(puVar4);
    func_0x00010c204e80(puVar3);
    func_0x00010c2208c0(puVar3);
    FUN_106def8b0(puVar3,param_4,param_3);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106dd5e54;
    puStack_b0 = &UNK_11084aaa8;
    _objc_retain(param_9);
    puStack_a0 = param_9;
    puStack_a8 = puVar3;
    _objc_retain(puVar3);
    ppuVar5 = &puStack_c8;
    _objc_retainBlock(ppuVar5);
    func_0x00010c222260(*(undefined8 *)(param_1 + 0x150),puVar3);
    _objc_release(ppuVar5);
    _objc_release(puStack_a8);
    _objc_release(puStack_a0);
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106dd5e40;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_9);
    puStack_70 = param_9;
    _objc_retain(lVar1);
    lStack_78 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_98);
    _objc_release(lStack_78);
    puVar3 = puStack_70;
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd5e40; end: 106dd5e67;  */

void FUN_106dd5e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dd5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dd5e68; end: 106dd6403; -[SCGallerySendItemsTask _prepareUploadableChatMedia:withPhotoAsset:memoriesCRFeaturedStory:clientMessageId:completionBlock:] */

void FUN_106dd5e68(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0c5160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3e00(param_2);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106dd6404;
  puStack_98 = &UNK_11085b7b0;
  lStack_90 = param_2;
  uStack_80 = param_1;
  _objc_retain(param_8);
  ppuVar3 = &puStack_b0;
  uStack_88 = param_8;
  _objc_retainBlock();
  puVar4 = param_5;
  func_0x00010c0c6c20();
  if (puVar4 == (undefined *)0x1) {
    _objc_retain(param_4);
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_106dd5438;
    uStack_c0 = 0x106dd5448;
    uStack_b8 = 0;
    puStack_118 = puVar7;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_106dd646c;
    puStack_100 = &UNK_11097ca20;
    puStack_d8 = &uStack_e0;
    _objc_retain(param_4);
    uStack_f8 = param_4;
    puStack_e8 = &uStack_e0;
    _objc_retain(ppuVar3);
    ppuVar5 = &puStack_118;
    ppuStack_f0 = ppuVar3;
    _objc_retainBlock();
    lVar6 = param_2;
    func_0x00010beb5280();
    if ((int)lVar6 == 0) {
      puVar7 = PTR_PTR_1126bf8a0;
      _objc_alloc(PTR_PTR_1126bf8a0);
      func_0x00010be5dc40(param_2);
      func_0x00010c03ffc0(puVar7);
      uVar12 = *(undefined8 *)(param_2 + 0x208);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar12;
      func_0x00010bdc1860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      uVar12 = uVar10;
      func_0x00010bfbc3e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      uStack_170 = 0x106dd68b8;
      puStack_168 = &UNK_110878110;
      _objc_retain(ppuVar5);
      ppuStack_160 = ppuVar5;
      func_0x00010c297260(uVar12);
      _objc_release(uVar12);
      _objc_release(ppuStack_160);
      _objc_release(uVar10);
    }
    else {
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_106dd667c;
      puStack_140 = &UNK_11097ca50;
      _objc_retain(param_5);
      puStack_120 = &uStack_e0;
      puStack_138 = param_5;
      _objc_retain(ppuVar5);
      lStack_130 = param_2;
      ppuStack_128 = ppuVar5;
      func_0x000107f6f148(param_5,1,&puStack_158);
      _objc_release(ppuStack_128);
      puVar7 = puStack_138;
    }
    _objc_release(puVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuStack_f0);
    _objc_release(uStack_f8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
  }
  else {
    puVar4 = param_5;
    func_0x00010c0c6c20();
    puVar7 = PTR_PTR_1126d2a00;
    if (puVar4 != (undefined *)0x2) goto LAB_106dd6360;
    _objc_retain(param_4);
    _objc_opt_class(puVar7);
    uVar8 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar7);
    uVar2 = param_4;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    if (uVar2 == 0) goto LAB_106dd6360;
    puVar7 = PTR_PTR_1126c3268;
    _objc_alloc();
    func_0x00010c01dbe0();
    uVar9 = *(undefined8 *)(param_2 + 0x200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_188,param_2);
    puStack_d8 = *(undefined8 **)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_e0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    pcStack_c8 = *(code **)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_d0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    uVar12 = uVar9;
    func_0x00010bf9d3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(param_4);
    _objc_retain(ppuVar3);
    _objc_retain(uVar12);
    _objc_retain(param_7);
    func_0x00010c297260(uVar11);
    _objc_release(uVar11);
    _objc_release(param_7);
    _objc_release(uVar12);
    _objc_release(ppuVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_190);
    _objc_release(uVar12);
    _objc_destroyWeak(auStack_188);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar7);
  }
  _objc_release(param_4);
LAB_106dd6360:
  _objc_release(ppuVar3);
  _objc_release(uStack_88);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106dd6404; end: 106dd646b;  */

void FUN_106dd6404(long param_1)

{
  undefined8 uVar1;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  func_0x00010c279ba0(uVar1);
  func_0x00010c219660(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000106dd6468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 106dd646c; end: 106dd667b;  */

void FUN_106dd646c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  if (param_5 == 0) {
    func_0x00010bfe9680(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + 0x20));
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c23d0a0(param_4);
    dVar9 = param_1;
    func_0x00010c14e120(param_4);
    param_1 = param_1 * dVar9;
    func_0x00010c23d0a0(param_4);
    func_0x00010c14e120(param_4);
    func_0x00010c1aa1e0(param_1,param_2 * dVar9,uVar8);
  }
  puVar3 = PTR_PTR_1126c4918;
  _objc_opt_new(PTR_PTR_1126c4918);
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x28);
  func_0x00010c0664c0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x28);
  func_0x00010bfd7fc0();
  if ((iVar1 != 0) && (lVar5 = lVar4, func_0x00010c0946a0(), lVar5 != 0)) {
    lVar5 = lVar4;
    func_0x00010c094680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar4;
      func_0x00010c094680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      _objc_release(lVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
  }
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  puVar7 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204e80(uVar8);
  _objc_release(puVar7);
  func_0x000100162d98("APPSTORE",*(undefined8 *)(param_3 + 0x28));
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106dd667c; end: 106dd6837;  */

void FUN_106dd667c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126bf8a0;
    _objc_alloc(PTR_PTR_1126bf8a0);
    func_0x00010be5dc40(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c03ffc0(puVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x208);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bdc1860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010bfbc3e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cf9c8;
    func_0x00010bf8dc80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar1;
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3,0,param_5,0);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd6838; end: 106dd6937;  */

void FUN_106dd6838(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,param_2,0,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd6938; end: 106dd6cd3;  */

void FUN_106dd6938(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_3 == 0) && (lVar1 != 0)) && (puVar10 != (undefined *)0x0)) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf8dc60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar3 = PTR_PTR_1126c4918;
        _objc_opt_new(PTR_PTR_1126c4918);
        lVar4 = lVar2;
        func_0x00010c0664c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0946a0();
        _objc_release(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar5 != 0) {
          lVar4 = lVar2;
          func_0x00010c0664c0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c094680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296de0();
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b2880(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        lVar4 = lVar2;
        func_0x00010c0664c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0d3a20();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          puVar6 = PTR_PTR_1126b2378;
          _objc_alloc_init();
          puVar7 = PTR_PTR_1126b5c10;
          _objc_alloc_init(PTR_PTR_1126b5c10);
          puVar8 = PTR_PTR_1126bfac0;
          _objc_opt_new(PTR_PTR_1126bfac0);
          func_0x00010c1ca400(puVar7);
          _objc_release(puVar8);
          lVar4 = lVar2;
          func_0x00010c0664c0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d3a20();
          puVar8 = puVar7;
          func_0x00010c0d3a00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c218f80();
          _objc_release(puVar8);
          _objc_release(lVar4);
          func_0x00010c21b4e0(puVar6);
          puVar8 = puVar6;
          func_0x00010bf63640(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aafe0(puVar3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = puVar3;
        func_0x00010bf21f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c204e80(uVar11);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfea5e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ab140(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar11);
      _os_unfair_lock_lock(lVar1 + 0x160);
      uVar12 = *(undefined8 *)(lVar1 + 0x158);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c5160(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _os_unfair_lock_unlock(lVar1 + 0x160);
      func_0x00010be170c0(lVar1);
      _objc_release(uVar12);
      _objc_release(lVar2);
      goto LAB_106dd6ca0;
    }
  }
  func_0x00010c222260(0,*(undefined8 *)(param_1 + 0x20));
LAB_106dd6ca0:
  _objc_release(puVar10);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd6cd4; end: 106dd6ceb; -[SCGallerySendItemsTask _gallerySnapDetailForGallerySnap:] */

void FUN_106dd6cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc7b8,PTR_s_fetchGallerySnapDetailForSnap_op_1125c7600,param_3,0,
             *(undefined8 *)(param_1 + 0x338));
  return;
}



/* Entry: 106dd6cec; end: 106dd6d7f; -[SCGallerySendItemsTask _globalOverlayForEntryId:] */

void FUN_106dd6cec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be24160(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106dd6d80; end: 106dd6e13; -[SCGallerySendItemsTask _globalOverlayForSnapId:] */

void FUN_106dd6d80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be24160(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106dd6e14; end: 106dd6eef; -[SCGallerySendItemsTask _globalOverlayForSnapDoc:] */

void FUN_106dd6e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b0018;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047840(puVar1,param_2,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
  lStack_38 = 0;
  puVar3 = puVar1;
  func_0x00010c13e8e0(puVar1,param_2,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined *)0x0;
  if ((lStack_38 == 0) && (puVar3 != (undefined *)0x0)) {
    puVar4 = PTR_PTR_1126bcdd8;
    _objc_alloc(PTR_PTR_1126bcdd8);
    func_0x00010c0206e0();
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dd6ef0; end: 106dd70bb; -[SCGallerySendItemsTask _globalOverlayForGalleryMedia:] */

void FUN_106dd6ef0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x000107ade96c();
  puVar2 = PTR_PTR_1126d29a8;
  puVar1 = PTR_DAT_1126a5228;
  if (uVar4 == 4) {
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    uVar4 = param_3;
    if ((int)uVar3 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = uVar4;
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010be24180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
  }
  else if (uVar4 == 3) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = uVar4;
    func_0x00010bfbcca0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bf97200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be24120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_1;
  }
  else {
    if (uVar4 != 1) {
      uVar4 = 0;
      goto LAB_106dd70a0;
    }
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    uVar4 = param_3;
    if ((int)uVar3 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010be1a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_106dd70a0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106dd70bc; end: 106dd72f7; -[SCGallerySendItemsTask _finishPrepareWithUploadableChatVideo:videoURL:rotationOrientation:clientMessageId:captureSessionId:error:completionBlock:] */

void FUN_106dd70bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c0c4ba0(param_4);
  dVar6 = 60.0;
  uVar4 = 3;
  if (60.0 < param_1) {
    uVar4 = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x380);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010becea60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c9fa0(uVar1,param_3,uVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  func_0x00010c29af00(uVar4,param_3,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(uVar3,param_3,uVar4);
  _objc_release(uVar4);
  func_0x00010c16bc20(uVar3,param_3,1);
  func_0x00010c29b240(PTR_PTR_1126b0010,param_3,param_5);
  _objc_release(param_5);
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    if (dVar6 == 0.0) {
      dVar5 = INFINITY;
    }
    else {
      dVar5 = param_1 / dVar6;
    }
  }
  func_0x00010c222080(dVar5,uVar3);
  func_0x00010c2220a0(uVar3,param_3,param_6);
  func_0x00010c2056c0(uVar3,param_3,0xb);
  func_0x00010c1c4880(uVar3,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c179260(uVar3,param_3,param_8);
  _objc_release(param_8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106dd72f8;
  puStack_90 = &UNK_11097cab0;
  uStack_78 = param_10;
  uStack_88 = param_4;
  lStack_80 = param_2;
  _objc_retain(param_10);
  _objc_retain(param_4);
  func_0x00010bfae700(uVar3,param_3,&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 106dd72f8; end: 106dd73e3;  */

void FUN_106dd72f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106dd73e4;
  puStack_60 = &UNK_110852488;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_2;
  uStack_50 = param_3;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd73e4; end: 106dd744b;  */

void FUN_106dd73e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, *(long *)(param_1 + 0x28) != 0)) {
    lVar2 = 0;
  }
  func_0x00010c222260(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x150),
                      *(undefined8 *)(param_1 + 0x30),param_2,lVar2,0,
                      *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x148),
                      PTR___dispatch_main_q_11034be20,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dd744c; end: 106dd79d7; -[SCGallerySendItemsTask _createMediaSendTaskWithMediaGroup:uploadableChatMedias:] */

void FUN_106dd744c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uStack_348;
  undefined8 uStack_340;
  ulong uStack_258;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfcf460();
  lVar5 = param_4;
  func_0x00010bfcf460();
  if (lVar5 != 0) {
    func_0x00010bfcf460();
  }
  lVar3 = *(long *)(param_2 + 0x60);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_2 + 0x88);
  func_0x000108605534();
  lVar5 = *(long *)(param_2 + 0x70);
  func_0x00010bf529e0();
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010860560c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb2c0();
  func_0x00010beeb0e0();
  func_0x00010bec4800();
  func_0x00010bec4820();
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_4;
  func_0x00010bfcf460();
  if (lVar21 == 3) {
    lVar21 = param_4;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar21;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276460(param_4);
    lVar9 = param_2;
    func_0x00010bdf3800((float)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar21);
    uVar22 = 0;
    _objc_retain(lVar9);
    lVar21 = lVar9;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar9);
        }
        puVar16 = PTR_PTR_1126d2a20;
        uVar17 = *(ulong *)(lVar23 * 8);
        _objc_retain(uVar17);
        _objc_opt_class(puVar16);
        uVar8 = uVar17;
        _objc_opt_isKindOfClass(uVar17,puVar16);
        uVar11 = uVar17;
        if ((uVar8 & 1) == 0) {
          uVar11 = 0;
        }
        _objc_retain(uVar11);
        _objc_release(uVar17);
        if (uVar11 != 0) {
          func_0x00010c276460(param_4);
          func_0x00010c205880(uVar17);
        }
        _objc_release(uVar11);
        lVar23 = lVar23 + 1;
      } while (lVar21 != lVar23);
      lVar21 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    func_0x00010befa160(puVar19);
    uStack_258 = param_5;
  }
  else {
    uVar22 = 0;
    lVar9 = param_4;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar9;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar23 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar9);
        }
        uVar22 = 0;
        lVar10 = param_2;
        func_0x00010bdf3800(0,param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar19);
        _objc_release(lVar10);
        lVar23 = lVar23 + 1;
      } while (lVar21 != lVar23);
      lVar21 = lVar9;
      func_0x00010bf52a60();
      uStack_258 = param_5;
    }
  }
  _objc_release(lVar9);
  uVar18 = *(undefined8 *)(param_2 + 0x350);
  func_0x00010846b638();
  uVar11 = *(ulong *)(param_2 + 0x78);
  func_0x00010846b6bc();
  uVar1 = (undefined1)*(undefined8 *)(param_2 + 0x78);
  func_0x00010c105440();
  uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x78);
  func_0x00010c105460();
  uStack_258 = CONCAT71(CONCAT61(uStack_258._2_6_,uVar2),uVar1);
  lVar5 = lVar4 + lVar3 + lVar5;
  func_0x00010c261c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar19);
  puVar16 = PTR_PTR_1126d2a28;
  _objc_opt_new();
  puVar12 = puVar16;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212840(puVar16);
  _objc_release(puVar12);
  func_0x00010c1b4b60(puVar16);
  uVar20 = *(undefined8 *)(param_2 + 0x350);
  puVar12 = puVar19;
  func_0x00010bf51e00();
  puVar24 = puVar16;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bef8060(uVar20);
  _objc_release(puVar24);
  _objc_release(puVar12);
  _objc_release(uVar18);
  _objc_release(puVar19);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar14);
  _objc_retain(uVar11);
  _objc_retain(uStack_258);
  _objc_retain(lVar5);
  lVar15 = param_4;
  func_0x00010be24140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar14;
  func_0x000107ade96c();
  puVar16 = PTR_PTR_1126d29a8;
  puVar19 = PTR_DAT_1126a5228;
  if ((long)puVar12 < 3) {
    if (puVar12 == (undefined *)0x1) {
LAB_106dd7b00:
      _objc_retain(puVar14);
      puVar16 = puVar14;
      func_0x00010010fab4(puVar14,puVar19);
      puVar24 = puVar14;
      if ((int)puVar16 == 0) {
        puVar24 = (undefined *)0x0;
      }
      _objc_retain(puVar24);
      _objc_release(puVar14);
      puVar25 = PTR_PTR_1126af4c0;
      func_0x00010bfa7060();
      _objc_retainAutoreleasedReturnValue();
      if (puVar25 == (undefined *)0x0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR_PTR_1126af4d0;
        func_0x00010bfa7380(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar16 = puVar25;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar16;
      func_0x00010b5fca54();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(puVar16);
      puVar19 = puVar12;
      func_0x00010bfecde0();
      if (puVar19 != (undefined *)0x7fffffffffffffff) {
        func_0x00010bfecde0();
      }
      _objc_release(puVar12);
LAB_106dd7c80:
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      puVar25 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
      if (puVar12 == (undefined *)0x2) {
        lVar21 = param_4;
        func_0x00010be5efe0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar21;
        func_0x00010c0fa980();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfecde0();
        if (lVar4 != 0x7fffffffffffffff) {
          lVar4 = lVar21;
          func_0x00010c0fa980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0();
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        puVar25 = (undefined *)0x0;
        puVar24 = (undefined *)0x0;
      }
    }
  }
  else {
    if (puVar12 == (undefined *)0x3) {
      _objc_retain(puVar14);
      _objc_opt_class(puVar16);
      puVar12 = puVar14;
      _objc_opt_isKindOfClass(puVar14,puVar16);
      puVar19 = puVar14;
      if (((ulong)puVar12 & 1) == 0) {
        puVar19 = (undefined *)0x0;
      }
      _objc_retain(puVar19);
      _objc_release(puVar14);
      puVar16 = puVar19;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar25 = puVar19;
      func_0x00010bfbcca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      goto LAB_106dd7c80;
    }
    lVar21 = 0;
    puVar25 = (undefined *)0x0;
    puVar24 = (undefined *)0x0;
    if (puVar12 == (undefined *)0x4) goto LAB_106dd7b00;
  }
  uVar8 = uVar11;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010bfecde0();
  _objc_release(uVar8);
  lVar3 = *(long *)(param_4 + 0x68);
  func_0x00010bf529e0();
  uStack_340 = *(undefined8 *)(param_4 + 0x68);
  if (lVar3 < 0x10) {
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uStack_340;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_340);
    uStack_340 = uVar6;
  }
  uVar8 = uStack_258;
  func_0x00010bf529e0();
  if (uVar17 < uVar8) {
    uVar8 = uStack_258;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uStack_348 = uVar8;
    func_0x00010bfea5e0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_4 + 0x160);
    uVar6 = *(undefined8 *)(param_4 + 0x158);
    uVar13 = uVar8;
    func_0x00010c0c5160(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _os_unfair_lock_unlock(param_4 + 0x160);
    _objc_release(uVar8);
  }
  else {
    uStack_348 = 0;
    uVar6 = 0;
  }
  puVar16 = *(undefined **)(param_4 + 0x350);
  func_0x00010c29e220();
  func_0x00010846b638();
  func_0x00010846b6bc();
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010c261ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar8 = uStack_258;
  func_0x00010bf529e0();
  if (uVar17 < uVar8) {
    uVar8 = uStack_258;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_4 + 0x178) != 0) {
      puVar19 = puVar24;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar19;
      func_0x00010c08fa60();
      if (puVar12 != (undefined *)0x0) {
        uVar17 = uVar8;
        func_0x00010c0c5160();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar17;
        func_0x00010c08fa60();
        _objc_release(uVar17);
        _objc_release(puVar19);
        if (uVar13 == 0) goto LAB_106dd7fb4;
        puVar19 = puVar24;
        func_0x00010c23ff80(puVar24);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(param_4 + 0x178);
        uVar17 = uVar8;
        func_0x00010c0c5160(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar18);
        _objc_release(uVar17);
      }
      _objc_release(puVar19);
    }
LAB_106dd7fb4:
    uVar20 = *(undefined8 *)(param_4 + 0x350);
    uVar18 = *(undefined8 *)(param_4 + 0x88);
    func_0x00010860560c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    func_0x00010846b638();
    func_0x00010846b6bc();
    func_0x00010c105440();
    func_0x00010c105460();
    func_0x00010c261cc0(uVar22,uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_4 + 0x170);
    uVar17 = uVar8;
    func_0x00010c0c5160(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar22);
    _objc_release(uVar17);
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar8);
  }
  _objc_release(uVar6);
  _objc_release(uStack_340);
  _objc_release(uStack_348);
  _objc_release(lVar21);
  _objc_release(lVar15);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(uStack_258);
  _objc_release(uVar11);
  _objc_release(puVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106dd79d8; end: 106dd8187; -[SCGallerySendItemsTask _createSnapMetricsForGalleryMedia:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:storyCount:isInsideStory:mediaGroup:uploadableChatMedias:isStitched:totalDuration:] */

void FUN_106dd79d8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(param_7);
  lVar1 = param_2;
  func_0x00010be24140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x000107ade96c();
  puVar16 = PTR_PTR_1126d29a8;
  puVar11 = PTR_DAT_1126a5228;
  if ((long)puVar2 < 3) {
    if (puVar2 == (undefined *)0x1) {
LAB_106dd7b00:
      _objc_retain(param_4);
      puVar2 = param_4;
      func_0x00010010fab4(param_4,puVar11);
      puVar16 = param_4;
      if ((int)puVar2 == 0) {
        puVar16 = (undefined *)0x0;
      }
      _objc_retain(puVar16);
      _objc_release(param_4);
      puVar17 = PTR_PTR_1126af4c0;
      func_0x00010bfa7060();
      _objc_retainAutoreleasedReturnValue();
      if (puVar17 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR_PTR_1126af4d0;
        func_0x00010bfa7380(PTR_PTR_1126af4d0);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = puVar17;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010b5fca54();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar2);
      puVar11 = puVar4;
      func_0x00010bfecde0();
      if (puVar11 != (undefined *)0x7fffffffffffffff) {
        func_0x00010bfecde0();
      }
      _objc_release(puVar4);
LAB_106dd7c80:
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      puVar17 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      if (puVar2 == (undefined *)0x2) {
        lVar14 = param_2;
        func_0x00010be5efe0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar14;
        func_0x00010c0fa980();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010bfecde0();
        if (lVar3 != 0x7fffffffffffffff) {
          lVar3 = lVar14;
          func_0x00010c0fa980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0();
          _objc_release(lVar3);
        }
        _objc_release(lVar7);
        puVar17 = (undefined *)0x0;
        puVar16 = (undefined *)0x0;
      }
    }
  }
  else {
    if (puVar2 == (undefined *)0x3) {
      _objc_retain(param_4);
      _objc_opt_class(puVar16);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar16);
      puVar11 = param_4;
      if (((ulong)puVar2 & 1) == 0) {
        puVar11 = (undefined *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(param_4);
      puVar2 = puVar11;
      func_0x00010bfbd940();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar17 = puVar11;
      func_0x00010bfbcca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      goto LAB_106dd7c80;
    }
    lVar14 = 0;
    puVar17 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    if (puVar2 == (undefined *)0x4) goto LAB_106dd7b00;
  }
  uVar5 = in_stack_00000010;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfecde0();
  _objc_release(uVar5);
  lVar7 = *(long *)(param_2 + 0x68);
  func_0x00010bf529e0();
  uStack_d0 = *(undefined8 *)(param_2 + 0x68);
  if (lVar7 < 0x10) {
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uStack_d0;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_d0);
    uStack_d0 = uVar12;
  }
  uVar5 = in_stack_00000018;
  func_0x00010bf529e0();
  if (uVar6 < uVar5) {
    uVar5 = in_stack_00000018;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar5;
    func_0x00010bfea5e0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_2 + 0x160);
    uVar12 = *(undefined8 *)(param_2 + 0x158);
    uVar8 = uVar5;
    func_0x00010c0c5160(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _os_unfair_lock_unlock(param_2 + 0x160);
    _objc_release(uVar5);
  }
  else {
    uStack_d8 = 0;
    uVar12 = 0;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x350);
  func_0x00010c29e220();
  func_0x00010846b638();
  func_0x00010846b6bc();
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010c261ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar5 = in_stack_00000018;
  func_0x00010bf529e0();
  if (uVar5 <= uVar6) goto LAB_106dd8110;
  uVar5 = in_stack_00000018;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_2 + 0x178) != 0) {
    puVar11 = puVar16;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      uVar6 = uVar5;
      func_0x00010c0c5160();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c08fa60();
      _objc_release(uVar6);
      _objc_release(puVar11);
      if (uVar8 == 0) goto LAB_106dd7fb4;
      puVar11 = puVar16;
      func_0x00010c23ff80(puVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_2 + 0x178);
      uVar6 = uVar5;
      func_0x00010c0c5160(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar13);
      _objc_release(uVar6);
    }
    _objc_release(puVar11);
  }
LAB_106dd7fb4:
  uVar9 = *(undefined8 *)(param_2 + 0x350);
  uVar13 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010860560c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e220();
  func_0x00010846b638();
  func_0x00010846b6bc();
  func_0x00010c105440();
  func_0x00010c105460();
  func_0x00010c261cc0(param_1,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x170);
  uVar6 = uVar5;
  func_0x00010c0c5160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar5);
LAB_106dd8110:
  _objc_release(uVar12);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 106dd8188; end: 106dd834f; -[SCGallerySendItemsTask _createMediaSendTaskWithMediaGroup:clientMessageId:completionHandler:] */

void FUN_106dd8188(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bfcf460();
  if (lVar2 == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x230);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c255700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106dd8350;
    puStack_78 = &UNK_110923800;
    _objc_retain(param_3);
    uVar5 = uVar4;
    lStack_70 = param_3;
    lStack_68 = param_1;
    func_0x00010bfb2660(uVar4,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106dd85b4;
    puStack_b8 = &UNK_1108833c0;
    lStack_b0 = param_1;
    _objc_retain(param_3);
    lStack_a8 = param_3;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_4);
    uVar6 = uVar5;
    uStack_a0 = param_4;
    func_0x00010c25ff60(uVar5,param_2,&puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_a0);
    _objc_release(uStack_98);
    _objc_release(lStack_a8);
    _objc_release(lStack_70);
  }
  else {
    func_0x00010bdeff40(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd8350; end: 106dd8543;  */

void FUN_106dd8350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106dd5438;
  uStack_40 = 0x106dd5448;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106dd5438;
  uStack_70 = 0x106dd5448;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  puVar3 = PTR_PTR_1126ae6b8;
  if (puStack_88[5] == 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar2 = puVar3;
    func_0x00010010fab4(puVar3,PTR_DAT_1126a5228);
    puVar1 = puVar3;
    if ((int)puVar2 == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010bdebf00(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dd8544; end: 106dd85b3;  */

void FUN_106dd8544(long param_1,undefined8 param_2)

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



/* Entry: 106dd85b4; end: 106dd86cb;  */

void FUN_106dd85b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 106dd86cc; end: 106dd87a7;  */

void FUN_106dd86cc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdeff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed52e0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,0);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdeff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__createMediaSendTaskWithoutStitc_112559970,
             *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
             *(undefined8 *)(param_2 + 0x38));
  return;
}



/* Entry: 106dd87a8; end: 106dd87b7;  */

void FUN_106dd87a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createMediaSendTaskWithoutStitc_112559970,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106dd87b8; end: 106dd88df; -[SCGallerySendItemsTask _createMediaSendTaskWithoutStitchingWithMediaGroup:clientMessageId:completionHandler:] */

void FUN_106dd87b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bfbd240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dd88e0;
  puStack_68 = &UNK_1108be878;
  puStack_60 = puVar1;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010be79760(param_1,param_2,uVar2,0,param_4,puVar1,&puStack_80);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(puStack_60);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 106dd88e0; end: 106dd8977;  */

void FUN_106dd88e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dd8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdeff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed52e0(*(undefined8 *)(param_1 + 0x28));
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dd8978; end: 106dd8a8b; -[SCGallerySendItemsTask _createChatMediaFromVideoUrl:firstSnap:] */

void FUN_106dd8978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dd8a8c; end: 106dd8c17;  */

void FUN_106dd8a8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126bc7b8;
    func_0x00010bfa7160(PTR_PTR_1126bc7b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0ef4a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010be1dbc0(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dd8c18; end: 106dd8d53;  */

void FUN_106dd8c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2a00;
  _objc_alloc();
  func_0x00010c01ad60();
  func_0x00010c204e80();
  _objc_release(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106dd8d54;
  puStack_60 = &UNK_110848ba8;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = puVar2;
  _objc_retain(uVar4);
  uStack_50 = uVar4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  ppuVar3 = &puStack_78;
  _objc_retainBlock(ppuVar3);
  func_0x00010c222260(0x3ff0000000000000,puVar2);
  _objc_release(ppuVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106dd8d54; end: 106dd8dc3;  */

void FUN_106dd8d54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126af5d0;
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106dd8dc4; end: 106dd8f17; -[SCGallerySendItemsTask _updateChatMediasForArroyoWithMediaGroup:chatMedias:] */

void FUN_106dd8dc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfcf460();
  uVar2 = param_4;
  if (lVar1 == 0) {
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11097cb60);
    uVar6 = *(undefined8 *)(param_1 + 400);
    puVar3 = PTR_PTR_1126d2a38;
    _objc_alloc(PTR_PTR_1126d2a38);
    lVar1 = param_3;
    func_0x00010c259a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0292a0(puVar3);
    func_0x00010befa120(uVar6);
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x180);
    uVar6 = param_4;
    func_0x00010bfaea20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010bfaea20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar6);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dd8f18; end: 106dd8faf;  */

void FUN_106dd8f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2a30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_106e0c1a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f80(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dd8fb0; end: 106dd8fcb;  */

uint FUN_106dd8fb0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c23ee40(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106dd8fcc; end: 106dd8fd3;  */

void FUN_106dd8fcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_smartShareable_11266d5b8);
  return;
}



/* Entry: 106dd8fd4; end: 106dd91e7; -[SCGallerySendItemsTask _processAndPostOnePendingGalleryMediaForStoryWithCompletionBlock:] */

void FUN_106dd8fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  func_0x00010be64ec0(param_1);
  uVar1 = *(ulong *)(param_1 + 0xa8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar2;
  _dispatch_group_create();
  uVar6 = uVar1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      _dispatch_group_enter(puVar3);
      uVar4 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106dd91e8;
      puStack_98 = &UNK_11097cbe0;
      uStack_90 = uVar4;
      _objc_retain(puVar2);
      puStack_88 = puVar2;
      puStack_80 = puVar5;
      _objc_retain(puVar3);
      puStack_78 = puVar3;
      _objc_retain(puVar5);
      _objc_retain(uVar4);
      func_0x00010bded760(param_1);
      _objc_release(puStack_78);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
      _objc_release(uStack_90);
      _objc_release(puVar5);
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
      uVar4 = uVar1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar4);
  }
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106dd9280;
  puStack_d0 = &UNK_11084a9e8;
  puStack_c8 = puVar2;
  lStack_c0 = param_1;
  uStack_b8 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x000100bc0718(puVar3,PTR___dispatch_main_q_11034be20,&puStack_e8);
  _objc_release(uStack_b8);
  _objc_release(puStack_c8);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 106dd91e8; end: 106dd927f;  */

void FUN_106dd91e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2a40;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1a1b40();
  func_0x00010c196d40(puVar1);
  _objc_release(param_2);
  func_0x00010c1baac0(puVar1);
  _objc_release(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dd9280; end: 106dd93ef;  */

void FUN_106dd9280(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar2 = *(undefined **)(param_1 + 0x20);
  if (lVar1 == 1) {
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010be2d420(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar2 < (undefined *)0x2) goto LAB_106dd93c0;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf0a0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar5 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        func_0x00010befa120(puVar3);
        _objc_release(uVar6);
        uVar5 = uVar5 + 1;
        uVar4 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
      } while (uVar5 < uVar4);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010be2c700(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
LAB_106dd93c0:
  func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x000106dd93ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106dd93f0; end: 106dd94ff; -[SCGallerySendItemsTask _sendGenAIAnalyticsIfApplicable:] */

void FUN_106dd93f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = param_1;
    func_0x00010beeb0e0();
    _objc_opt_class(param_1);
    func_0x00010c22bde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = (undefined1)uVar1;
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106dd9500; end: 106dd98ab;  */

void FUN_106dd9500(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 == 0) goto LAB_106dd9854;
  puVar6 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(lVar5 + 0x338));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf977c0();
  uVar1 = (int)puVar7 - 0x39;
  if ((uVar1 < 0x16) && ((0x3dd3c1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    bVar3 = true;
  }
  else {
    puVar7 = puVar6;
    func_0x00010bf3d240();
    bVar3 = ((ulong)puVar7 & 0xffe0) != 0;
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x2d0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(lVar5 + 0x2d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar10;
  func_0x00010c08fa60();
  if ((lVar9 == 0) && (puVar7 = puVar6, func_0x00010bf977c0(), (int)puVar7 != 0x4e)) {
    puVar7 = puVar6;
    func_0x00010bf977c0();
    iVar4 = (int)puVar7;
    bVar2 = iVar4 == 0x4d || iVar4 == 0x39;
    if (((bVar3) || (iVar4 == 0x4d)) || (iVar4 == 0x39)) goto LAB_106dd95f4;
  }
  else {
    bVar2 = true;
LAB_106dd95f4:
    lVar9 = lVar5;
    func_0x00010bdee240(lVar5,param_2,puVar6,*(undefined8 *)(param_1 + 0x20),bVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(lVar5 + 0x68);
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      puVar7 = PTR_PTR_1126c4610;
      _objc_alloc(PTR_PTR_1126c4610);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010bf97200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff0a80(puVar7,param_2,0,uVar12,puVar13,*(undefined8 *)(lVar5 + 0x68),0,lVar9);
      _objc_release(puVar13);
      _objc_release(uVar12);
      if (bVar2 == false) {
        if (bVar3) {
          func_0x00010c0b3560(uVar8,param_2,puVar7);
        }
      }
      else {
        func_0x00010bf8e260(uVar8,param_2,puVar7);
      }
      _objc_release(puVar7);
    }
    lVar11 = *(long *)(lVar5 + 0x88);
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(lVar5 + 0x88);
      func_0x00010c0b8600(uVar12,param_2,&PTR___NSConcreteGlobalBlock_11097cc10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c4610;
      _objc_alloc(PTR_PTR_1126c4610);
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010bf97200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff0a80(puVar7,param_2,1,uVar14,puVar13,0,uVar12,lVar9);
      _objc_release(puVar13);
      _objc_release(uVar14);
      if (bVar2 == false) {
        if (bVar3) {
          func_0x00010c0b3560(uVar8,param_2,puVar7);
        }
      }
      else {
        func_0x00010bf8e260(uVar8,param_2,puVar7);
      }
      _objc_release(puVar7);
      _objc_release(uVar12);
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      puVar7 = PTR_PTR_1126c4610;
      _objc_alloc(PTR_PTR_1126c4610);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010bf97200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff0a80(puVar7,param_2,2,uVar12,puVar13,0,0,lVar9);
      _objc_release(puVar13);
      _objc_release(uVar12);
      if (bVar2 == false) {
        if (bVar3) {
          func_0x00010c0b3560(uVar8,param_2,puVar7);
        }
      }
      else {
        func_0x00010bf8e260(uVar8,param_2,puVar7);
      }
      _objc_release(puVar7);
    }
    _objc_release(lVar9);
  }
  _objc_release(lVar10);
  _objc_release(uVar8);
  _objc_release(puVar6);
LAB_106dd9854:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106dd98ac; end: 106dd98b3;  */

void FUN_106dd98ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 106dd98b4; end: 106dd9ab7; -[SCGallerySendItemsTask _createGenAIFeatureActionParamsWithEntry:snap:isAISnapsTab:] */

void FUN_106dd98b4(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4608;
  _objc_alloc_init(PTR_PTR_1126c4608);
  if ((param_5 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x350);
    func_0x00010c0755c0();
    if ((uVar2 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010bfbdda0();
      uVar7 = 0xd4;
      if ((int)lVar3 != 5) {
        uVar7 = 9;
      }
    }
    else {
      uVar7 = 0xd5;
    }
  }
  else {
    uVar7 = 0xd3;
  }
  func_0x00010c206c40(puVar1,param_2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf977c0(param_3);
  func_0x00010c206740(puVar1,param_2,(long)(int)lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfbdda0();
  if ((int)lVar3 == 5) {
    lVar3 = param_3;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_3;
      func_0x00010bf9e140(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a20(puVar1,param_2,lVar3);
      _objc_release(lVar3);
    }
  }
  lVar3 = param_4;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = lVar3;
    func_0x00010c094540(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1,param_2,lVar4);
    _objc_release(lVar4);
  }
  lVar4 = param_3;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_3;
    func_0x00010bf3f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1,param_2,lVar4);
    _objc_release(lVar4);
  }
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dd9ab8; end: 106dd9c23; -[SCGallerySendItemsTask _autoSaveSnap:savingAsDraft:] */

void FUN_106dd9ab8(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x390);
    _objc_release();
    if (lVar1 != lVar3) {
      lVar1 = param_3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x390);
      *(long *)(param_1 + 0x390) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_1 + 0x3d8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c15c020();
      _objc_release(lVar1);
      _objc_initWeak(auStack_48,param_1);
      _objc_opt_class(param_1);
      func_0x00010c22bde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_3);
      uStack_50 = param_4;
      func_0x00010c0f7fc0(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106dd9c24; end: 106dda21b;  */

void FUN_106dd9c24(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 == 0) goto LAB_106dda1d0;
  puVar4 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3d2a0(uVar5);
  func_0x00010b5fca08((long)(int)uVar5);
  uVar5 = *(undefined8 *)(lVar3 + 0x2c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010bfbdda0();
  if ((int)puVar15 == 5) {
    puVar15 = puVar4;
    func_0x00010bf3d240();
    uVar2 = (uint)puVar15;
    func_0x00010b5faba4();
  }
  else {
    uVar2 = 0;
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x2e0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x000107dfde50(uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar15 = puVar4;
  func_0x00010bfb3860();
  _objc_retainAutoreleasedReturnValue();
  if (puVar15 == (undefined *)0x0) {
    uVar1 = uVar2 ^ 0xffffffff;
joined_r0x000106dd9d78:
    if ((((uint)uVar13 | uVar1) & 1) == 0) goto LAB_106dd9d7c;
  }
  else {
    puVar8 = puVar4;
    func_0x00010bfb3860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c067ec0();
    _objc_release(puVar8);
    _objc_release(puVar15);
    if ((int)puVar11 != 1) {
      uVar1 = uVar2 ^ 1;
      goto joined_r0x000106dd9d78;
    }
LAB_106dd9d7c:
    lVar9 = *(long *)(param_1 + 0x20);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if (lVar10 != 0) {
      if (uVar2 == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x2a8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar6;
        func_0x00010bf90fc0();
        _objc_release(uVar6);
        if ((int)uVar13 == 0) goto LAB_106dd9f6c;
        puVar11 = *(undefined **)(lVar3 + 0x2a0);
        func_0x00010c269d40(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar4;
        func_0x00010bf97200(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = *(undefined **)(param_1 + 0x20);
        func_0x00010c241220(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar11;
        func_0x00010c14a420(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260();
      }
      else {
        _objc_initWeak(auStack_70,lVar3);
        uVar6 = *(undefined8 *)(lVar3 + 0x2a0);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        func_0x00010bf31200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3d2a0();
        uVar13 = uVar6;
        func_0x00010c14aa40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_78,auStack_70);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        _objc_retain(uVar5);
        func_0x00010c297260(uVar13);
        _objc_release(uVar13);
        _objc_release(lVar9);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_70);
LAB_106dd9f6c:
        puVar11 = PTR_PTR_1126b25b8;
        _objc_alloc();
        puVar15 = puVar11;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011280();
        _objc_release(puVar15);
        uVar13 = *(undefined8 *)(lVar3 + 0x30);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf10660();
        puVar15 = (undefined *)0x0;
        _objc_retain(0);
        _objc_release(uVar13);
        lVar9 = lVar10;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf30e80();
        _objc_release(lVar9);
        puVar12 = PTR_PTR_1126bf820;
        _objc_alloc(PTR_PTR_1126bf820);
        puVar8 = puVar4;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010bfa34a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfbdda0();
        func_0x00010c046fa0(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar8);
        puVar14 = *(undefined **)(lVar3 + 0x298);
        func_0x00010c269d40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar14;
        func_0x00010c14ade0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_retain(lVar10);
        puVar14 = puVar8;
        func_0x00010c25ff60(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(puVar14);
        _objc_release(lVar10);
      }
      _objc_release(puVar8);
      _objc_release(puVar12);
      _objc_release(puVar15);
      _objc_release(puVar11);
    }
    _objc_release(lVar10);
  }
  _objc_release(uVar5);
  _objc_release(puVar4);
LAB_106dda1d0:
  _objc_release(lVar3);
  return;
}



/* Entry: 106dda21c; end: 106dda32f;  */

void FUN_106dda21c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x2e0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106dda330;
    puStack_60 = &UNK_11085adb8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x106dda388;
    puStack_90 = &UNK_110848bd8;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_88 = uVar5;
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    func_0x00010c0f8500(uVar3,param_2,&puStack_78,0,&puStack_a8);
    _objc_release(uVar3);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_58);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106dda330; end: 106dda3cb;  */

void FUN_106dda330(long param_1,undefined8 param_2)

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



/* Entry: 106dda3cc; end: 106dda3cf;  */

void FUN_106dda3cc(void)

{
  return;
}



/* Entry: 106dda3d0; end: 106dda49f;  */

void FUN_106dda3d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106dda4a0; end: 106dda527;  */

void FUN_106dda4a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dda528; end: 106dda7c7; -[SCGallerySendItemsTask _shouldCreateEphemeralMediaAndNavigateToSpotlight:] */

void FUN_106dda528(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  undefined *puVar16;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010846ba3c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  uVar4 = *(ulong *)(param_1 + 0x1d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    bVar1 = false;
    bVar15 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0xd8);
    func_0x00010c25a8c0(lVar5);
    bVar1 = lVar5 == 1;
    bVar15 = *(byte *)(param_1 + 0x3d0);
  }
  uVar6 = uVar4;
  func_0x00010c231a00(uVar4,param_2,uVar3,bVar1,bVar15 & 1);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0xd8);
  func_0x00010bf36f00();
  if ((lVar5 == 0) &&
     (((uVar6 & 1) != 0 || (((int)uVar3 != 0 && (*(char *)(param_1 + 0x3b0) == '\x01')))))) {
    puVar7 = *(undefined **)(param_1 + 0x1d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    if (param_3 == 0) {
      func_0x00010bf56080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf560a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bebf140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar11 = puVar16;
    func_0x00010c27dd80(puVar16);
    func_0x00010c0df780(puVar7,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a360(uVar8,param_2,0x53,puVar10,lVar5,puVar11,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
  }
  else {
    puVar16 = (undefined *)0x0;
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar13 = *(long *)(param_3 + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar13);
  lVar5 = lVar14;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
LAB_106dda874:
    puVar16 = *(undefined **)(param_3 + 0x3c8);
    _objc_retain(puVar16);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) goto LAB_106dda874;
    puVar16 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(lVar14);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106dda7c8; end: 106dda89b; -[SCGallerySendItemsTask _spotlightWidgetThumbnailFuture] */

void FUN_106dda7c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24c6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_106dda880;
    }
  }
  puVar5 = *(undefined **)(param_1 + 0x3c8);
  _objc_retain(puVar5);
LAB_106dda880:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dda89c; end: 106dda96b; -[SCGallerySendItemsTask _shouldNavigateToSpotlight] */

uint FUN_106dda89c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010846ba3c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x1d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((uint)uVar3 == 0) {
    bVar1 = false;
    bVar7 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0xd8);
    func_0x00010c25a8c0(lVar5);
    bVar1 = lVar5 == 1;
    bVar7 = *(byte *)(param_1 + 0x3d0);
  }
  uVar6 = uVar4;
  func_0x00010c231a00(uVar4,param_2,uVar3,bVar1,bVar7 & 1);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0xd8);
  func_0x00010bf36f00();
  uVar8 = (uint)(lVar5 != 0);
  uVar9 = uVar8 ^ (uVar8 | (uint)uVar6);
  if ((uVar8 == 0 && (uVar6 & 1) == 0) && ((((uint)uVar3 ^ 1) & 1) == 0)) {
    uVar9 = (uint)*(byte *)(param_1 + 0x3b0);
  }
  return uVar9 & 1;
}



/* Entry: 106dda96c; end: 106ddaa27; -[SCGallerySendItemsTask _wrappedCompletionHandlerForSpotlightNavigation:] */

void FUN_106dda96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ddaa28;
  puStack_50 = &UNK_11097cca0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ddaa28; end: 106ddac43;  */

ulong FUN_106ddaa28(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (uVar2 = param_2, func_0x00010bf529e0(), uVar2 != 0)) {
    uVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x1d8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bebf140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(uVar2);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010c0ee3a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a360(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar2);
  uVar12 = uVar2;
  func_0x000107ade96c();
  puVar6 = PTR_PTR_1126c4650;
  if (uVar12 == 2) {
    _objc_retain(uVar2);
    _objc_opt_class(puVar6);
    uVar10 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar6);
    uVar12 = uVar2;
    if ((uVar10 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar2);
    uVar10 = uVar12;
    func_0x00010bf0af00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar12 = (ulong)(uVar10 != 0);
    _objc_release(uVar10);
  }
  else if (uVar12 == 1) {
    uVar12 = uVar2;
    func_0x00010b5f9aa8(uVar2);
  }
  else {
    uVar12 = 0;
  }
  _objc_release(uVar2);
  return uVar12;
}



/* Entry: 106ddac44; end: 106ddad13; -[SCGallerySendItemsTask _isFromCameraRollForGalleryMedia:] */

ulong FUN_106ddac44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000107ade96c();
  puVar1 = PTR_PTR_1126c4650;
  if (uVar3 == 2) {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar2 = uVar3;
    func_0x00010bf0af00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = (ulong)(uVar2 != 0);
    _objc_release(uVar2);
  }
  else if (uVar3 == 1) {
    uVar3 = param_3;
    func_0x00010b5f9aa8(param_3);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106ddad14; end: 106ddae63; -[SCGallerySendItemsTask _creationDateForGalleryMedia:] */

void FUN_106ddad14(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x000107ade96c();
  puVar3 = PTR_PTR_1126c4650;
  puVar2 = PTR_DAT_1126a5228;
  puVar4 = (undefined *)0x0;
  if ((long)puVar1 < 3) {
    if (puVar1 == (undefined *)0x1) goto LAB_106ddadd0;
    if (puVar1 != (undefined *)0x2) goto LAB_106ddae48;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    puVar3 = param_3;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_3);
    puVar2 = puVar3;
    func_0x00010bf0af00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = puVar2;
    func_0x00010bf5a700(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar1 == (undefined *)0x3) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106ddae48;
    }
    if (puVar1 != (undefined *)0x4) goto LAB_106ddae48;
LAB_106ddadd0:
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    puVar2 = param_3;
    if ((int)puVar3 == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(param_3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = param_3;
      func_0x00010b5f7a24(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
LAB_106ddae48:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ddae64; end: 106ddb2df; -[SCGallerySendItemsTask _handleOneGalleryMediaEphemeral:] */

/* WARNING: Possible PIC construction at 0x000106ddaf7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106ddaf80) */
/* WARNING: Removing unreachable block (ram,0x000106ddafb0) */

void FUN_106ddae64(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  long lStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfbd180();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf98480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdf5de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be40a80();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c075ca0();
  if (iVar1 != 0) {
    _objc_release(lVar11);
    lVar11 = 0;
  }
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(lVar11);
  lVar5 = lVar11;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    _objc_release(lVar11);
    lVar5 = lVar11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d2a48;
    _objc_alloc();
    func_0x00010c010680();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0));
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar9 = puVar8;
    _dispatch_group_create();
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    _objc_retain(lVar11);
    lVar10 = lVar11;
    func_0x00010bf52a60();
    puVar6 = PTR___dispatch_main_q_11034be20;
    if (lVar10 != 0) {
      lVar12 = 0;
      lVar14 = *plStack_1f0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1f0 != lVar14) {
            _objc_enumerationMutation(lVar11);
          }
          _dispatch_group_enter(puVar9);
          _objc_initWeak(auStack_208,param_1);
          _objc_retain(puVar6);
          puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_240 = 0xc2000000;
          pcStack_238 = FUN_106ddb2e8;
          puStack_230 = &UNK_11097cd10;
          _objc_copyWeak(auStack_218,auStack_208);
          _objc_retain(puVar8);
          puStack_228 = puVar8;
          lStack_210 = lVar12;
          _objc_retain(puVar9);
          puStack_220 = puVar9;
          func_0x00010be80ea0(param_1);
          _objc_release(puVar6);
          _objc_release(puStack_220);
          _objc_release(puStack_228);
          _objc_destroyWeak(auStack_218);
          _objc_destroyWeak(auStack_208);
          lVar12 = lVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar10 != lVar13);
        lVar10 = lVar11;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(lVar11);
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_106ddb3ac;
    puStack_288 = &UNK_110853a60;
    uStack_250 = (undefined1)lVar4;
    lStack_280 = param_1;
    puStack_278 = puVar8;
    lStack_270 = lVar11;
    lStack_268 = lVar3;
    lStack_260 = param_3;
    lStack_258 = lVar2;
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(lVar11);
    _objc_retain(puVar8);
    puVar6 = PTR___dispatch_main_q_11034be20;
    func_0x000100bc0718(puVar9,PTR___dispatch_main_q_11034be20,&puStack_2a0);
    _objc_release(lStack_258);
    _objc_release(lStack_260);
    _objc_release(lStack_268);
    _objc_release(lStack_270);
    _objc_release(puStack_278);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(lVar3);
    _objc_release(lVar11);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
    _objc_destroyWeak(lVar11 + 0x30);
    _objc_destroyWeak(auStack_208);
    __Unwind_Resume(lVar5);
  }
  else {
    if (*plStack_1b0 != *plStack_1b0) {
      _objc_enumerationMutation(lVar11);
    }
    puVar6 = (undefined *)*puStack_1b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 106ddb2e0; end: 106ddb2e7;  */

void FUN_106ddb2e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 106ddb2e8; end: 106ddb3ab;  */

void FUN_106ddb2e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    puVar2 = puVar1;
    func_0x00010beeb0e0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) goto LAB_106ddb390;
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be64ec0();
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
  }
  else {
    func_0x00010be64ec0();
  }
  _objc_release(puVar1);
LAB_106ddb390:
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ddb3ac; end: 106ddb5a3;  */

void FUN_106ddb3ac(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  puVar7 = &uStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106ddb5a4;
  puStack_e8 = &UNK_110848678;
  uStack_e0 = *(undefined8 *)(param_1 + 0x20);
  ppuVar2 = &puStack_100;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beeb0e0();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar3 != lVar4) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar3 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar3);
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar8 = *plStack_130;
        do {
          lVar9 = 0;
          do {
            if (*plStack_130 != lVar8) {
              _objc_enumerationMutation(lVar3);
            }
            uVar6 = *(undefined8 *)(lStack_138 + lVar9 * 8);
            func_0x00010bf3cf60(uVar6);
            _objc_retainAutoreleasedReturnValue();
            param_2 = uVar6;
            (*(code *)ppuVar2[2])(ppuVar2,uVar6,0);
            _objc_release(uVar6);
            lVar9 = lVar9 + 1;
          } while (lVar4 != lVar9);
          lVar4 = lVar3;
          puVar7 = &uStack_140;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      goto LAB_106ddb4a4;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c090060(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76940(uVar6);
  _objc_release(uVar5);
LAB_106ddb4a4:
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (ppuVar2[4],PTR_s__ephemeralDidPost_didSucceed__1125604d0,param_2,puVar7);
    return;
  }
  return;
}



/* Entry: 106ddb5a4; end: 106ddb5b3;  */

void FUN_106ddb5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__ephemeralDidPost_didSucceed__1125604d0,param_2,
             param_3);
  return;
}



/* Entry: 106ddb5b4; end: 106ddba17; -[SCGallerySendItemsTask _handleMultiGalleryEphemerals:] */

void FUN_106ddb5b4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lStack_1e8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar2;
  _dispatch_group_create();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lStack_1e8 = param_3;
  func_0x00010bf52a60();
  if (lStack_1e8 != 0) {
    lVar15 = 0;
    lVar13 = *plStack_140;
    do {
      lVar16 = 0;
      do {
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_148 + lVar16 * 8);
        _dispatch_group_enter(puVar3);
        lVar4 = lVar14;
        func_0x00010bfbd180(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf98480();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bdf5de0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be40a80(param_1);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
        func_0x00010c075ca0();
        if (iVar1 != 0) {
          _dispatch_group_leave(puVar3);
          _objc_release(lVar5);
          _objc_release(lVar14);
          _objc_release(lVar4);
          goto LAB_106ddb91c;
        }
        lVar6 = lVar14;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0xf8);
        lVar7 = lVar6;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar17);
        _objc_release(lVar7);
        lVar7 = lVar6;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        puVar9 = PTR____NSArray0__struct_11034ab48;
        if (lVar8 != 0) {
          lVar8 = lVar6;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_108 = lVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
        puVar10 = PTR_PTR_1126d2a48;
        _objc_alloc(PTR_PTR_1126d2a48);
        func_0x00010c010680();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0));
        _objc_initWeak(auStack_158,param_1);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_190 = 0xc2000000;
        pcStack_188 = FUN_106ddba18;
        puStack_180 = &UNK_11097cd10;
        _objc_copyWeak(auStack_168,auStack_158);
        _objc_retain(puVar2);
        puStack_178 = puVar2;
        lStack_160 = lVar15;
        _objc_retain(puVar3);
        puVar11 = PTR___dispatch_main_q_11034be20;
        puStack_170 = puVar3;
        func_0x00010be80ea0(param_1);
        _objc_release(puVar11);
        _objc_release(puStack_170);
        _objc_release(puStack_178);
        _objc_destroyWeak(auStack_168);
        _objc_destroyWeak(auStack_158);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar14);
        _objc_release(lVar4);
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 1;
      } while (lStack_1e8 != lVar16);
      lStack_1e8 = param_3;
      func_0x00010bf52a60();
    } while (lStack_1e8 != 0);
  }
LAB_106ddb91c:
  _objc_release(param_3);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_106ddbab4;
  puStack_1b8 = &UNK_110848ba8;
  lStack_1b0 = param_1;
  puStack_1a8 = puVar2;
  lStack_1a0 = param_3;
  _objc_retain();
  _objc_retain(puVar2);
  ppuVar12 = &puStack_1d0;
  puVar9 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar3,PTR___dispatch_main_q_11034be20);
  _objc_release(lStack_1a0);
  _objc_release(puStack_1a8);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_158);
    __Unwind_Resume();
    _objc_retain(puVar9);
    if (ppuVar12 == (undefined **)0x0) {
      puVar2 = puVar3 + 0x30;
      _objc_loadWeakRetained();
      puVar11 = puVar2;
      func_0x00010beeb0e0();
      _objc_release(puVar2);
      if ((int)puVar11 != 0) {
        uVar17 = *(undefined8 *)(puVar3 + 0x20);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar17);
        _objc_release(puVar2);
      }
    }
    _dispatch_group_leave(*(undefined8 *)(puVar3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 106ddba18; end: 106ddbab3;  */

void FUN_106ddba18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010beeb0e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(puVar3);
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ddbab4; end: 106ddbdd3;  */

void FUN_106ddbab4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106ddbdd4;
  puStack_100 = &UNK_110848678;
  uStack_f8 = *(undefined8 *)(param_1 + 0x20);
  ppuVar2 = &puStack_118;
  _objc_retainBlock();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beeb0e0();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar3 != lVar4) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      lVar4 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar4);
      puVar12 = &uStack_160;
      lVar3 = lVar4;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar14 = *plStack_150;
        do {
          lVar15 = 0;
          do {
            if (*plStack_150 != lVar14) {
              _objc_enumerationMutation(lVar4);
            }
            uVar10 = *(undefined8 *)(lStack_158 + lVar15 * 8);
            func_0x00010bf98480(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            uVar10 = uVar11;
            func_0x00010bf3cf60(uVar11);
            _objc_retainAutoreleasedReturnValue();
            param_2 = uVar10;
            (*(code *)ppuVar2[2])(ppuVar2,uVar10,0);
            _objc_release(uVar10);
            _objc_release(uVar11);
            lVar15 = lVar15 + 1;
          } while (lVar3 != lVar15);
          puVar12 = &uStack_160;
          lVar3 = lVar4;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      goto LAB_106ddbc9c;
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bfbd180();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bdf5de0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbd180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be40a80(uVar16);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfb1920(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010c090060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfb1920(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfbd180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76940(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(lVar3);
LAB_106ddbc9c:
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (ppuVar2[4],PTR_s__ephemeralDidPost_didSucceed__1125604d0,param_2,puVar12);
    return;
  }
  return;
}



/* Entry: 106ddbdd4; end: 106ddbde3;  */

void FUN_106ddbdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__ephemeralDidPost_didSucceed__1125604d0,param_2,
             param_3);
  return;
}



/* Entry: 106ddbde4; end: 106ddc35f; -[SCGallerySendItemsTask _createEphermalMediasForGalleryMedia:completionHandler:] */

void FUN_106ddbde4(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000107ade96c();
  puVar2 = PTR_PTR_1126c4650;
  if ((long)uVar1 < 3) {
    if (uVar1 == 1) {
      _objc_retain(param_3);
      uVar1 = param_1;
      func_0x00010beb4840();
      if ((int)uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar1 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010beb2ea0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
      uVar1 = param_3;
      func_0x00010b5fa088();
      if (uVar1 < 0xd) {
        uVar3 = param_4;
        if ((1L << (uVar1 & 0x3f) & 0xa99U) == 0) {
          if ((1L << (uVar1 & 0x3f) & 0x1564U) == 0) {
            uVar1 = param_3;
            func_0x000107ade900();
            if ((int)uVar1 == 0) {
              _objc_retain(param_4);
              func_0x00010bded6c0(param_1);
            }
            else {
              _objc_retain(param_4);
              func_0x00010bded700(param_1);
            }
          }
          else {
            uVar1 = param_1;
            func_0x00010be1a3a0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar1;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            uVar1 = uVar3;
            func_0x00010bfaebe0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            func_0x00010c249dc0();
            _objc_release(uVar1);
            uVar1 = param_3;
            func_0x000107ade900();
            if ((((int)uVar1 == 0) || (uVar4 == 0xffffffff91f66c27)) ||
               (uVar1 = param_3, func_0x00010b5f9aa8(), (int)uVar1 == 0)) {
              _objc_retain(param_4);
              func_0x00010bded6c0(param_1);
            }
            else {
              _objc_retain(param_4);
              func_0x00010bded720(param_1);
            }
            _objc_release(param_4);
          }
        }
        else {
          _objc_retain(param_4);
          func_0x00010bded620(param_1);
        }
        _objc_release(uVar3);
      }
      _objc_release(param_3);
    }
    else {
      if (uVar1 != 2) goto LAB_106ddc288;
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      uVar1 = param_3;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_3);
      uVar3 = uVar1;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010beb4840();
      uVar5 = 0;
      if ((int)uVar4 != 0) {
        uVar5 = param_1;
        func_0x00010beb2ea0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar4 = uVar3;
      func_0x00010c0c6c20();
      if (uVar4 == 1) {
        _objc_retain(param_4);
        func_0x00010bded600(param_1);
LAB_106ddc0a0:
        _objc_release(param_4);
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0c6c20();
        if (uVar4 == 2) {
          _objc_retain(param_4);
          func_0x00010bded740(param_1);
          goto LAB_106ddc0a0;
        }
      }
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_4;
    _objc_retainBlock(param_4);
    uVar3 = param_1;
    func_0x00010beb4840();
    uVar5 = uVar1;
    if ((int)uVar3 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x1c8);
      func_0x000108f483e0();
      if ((uVar3 & 1) == 0) {
        uVar5 = param_1;
        func_0x00010beeb760(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
    }
    func_0x00010bded6a0(param_1);
  }
  else {
    if (uVar1 != 4) goto LAB_106ddc288;
    _objc_retain(param_3);
    uVar1 = param_4;
    _objc_retainBlock(param_4);
    uVar3 = param_1;
    func_0x00010beb4840();
    uVar5 = uVar1;
    if ((int)uVar3 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x1c8);
      func_0x000108f483e0();
      if ((uVar3 & 1) == 0) {
        uVar5 = param_1;
        func_0x00010beeb760(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
    }
    func_0x00010bded680(param_1);
    _objc_release(uVar5);
    uVar5 = param_3;
  }
  _objc_release(uVar5);
LAB_106ddc288:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ddc360; end: 106ddc437;  */

void FUN_106ddc360(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    pcVar5 = *(code **)(lVar6 + 0x10);
    _objc_retain(0);
    puVar3 = (undefined *)0x0;
    (*pcVar5)(lVar6,0,0);
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    (**(code **)(lVar6 + 0x10))(lVar6,puVar7,0);
    _objc_release(param_2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  (**(code **)(*(long *)(puVar7 + 0x20) + 0x10))(*(long *)(puVar7 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106ddc438; end: 106ddc487;  */

void FUN_106ddc438(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ddc488; end: 106ddc54b;  */

void FUN_106ddc488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (**(code **)(lVar6 + 0x10))(lVar6,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  (**(code **)(*(long *)(puVar2 + 0x20) + 0x10))(*(long *)(puVar2 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106ddc54c; end: 106ddc59b;  */

void FUN_106ddc54c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ddc59c; end: 106ddc68b;  */

void FUN_106ddc59c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    pcVar4 = *(code **)(lVar5 + 0x10);
    _objc_retain(0);
    puVar2 = (undefined *)0x0;
    (*pcVar4)(lVar5,0,0);
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    (**(code **)(lVar5 + 0x10))(lVar5,puVar6,param_3);
    _objc_release(param_2);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  puVar6 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    puVar6 = puVar2;
  }
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ddc68c; end: 106ddc6db;  */

void FUN_106ddc68c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ddc6dc; end: 106ddc7cb;  */

void FUN_106ddc6dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    pcVar3 = *(code **)(lVar4 + 0x10);
    _objc_retain(0);
    lVar1 = 0;
    (*pcVar3)(lVar4,0);
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    (**(code **)(lVar4 + 0x10))(lVar4,puVar6);
    _objc_release(param_2);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  uVar5 = *(undefined8 *)(param_3 + 0x348);
  _objc_retain(lVar1);
  func_0x00010c135bc0(uVar5);
  _objc_release(lVar1);
  _objc_release(lVar1);
  return;
}


