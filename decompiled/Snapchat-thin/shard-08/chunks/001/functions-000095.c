/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d6fc1c; end: 105d6ffbb; -[SCGalleryLogger _logSnapViewAiFeatureAction:withGalleryEntry:gallerySnap:] */

void FUN_105d6fc1c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010bf977c0();
  uVar1 = (int)lVar2 - 0x39;
  if (0x15 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) == 0) {
    lVar2 = param_5;
    func_0x00010bf3d2a0();
    if ((0x10 < (uint)lVar2) || ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x1f7c0U) == 0))
    goto LAB_105d6ff64;
  }
  lVar3 = *(long *)(param_1 + 0x118);
  func_0x00010bf8a8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126c4608;
  _objc_alloc_init(PTR_PTR_1126c4608);
  lVar2 = param_4;
  func_0x00010bf977c0(param_4);
  func_0x00010c206740(puVar6,param_2,(long)(int)lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf977c0(param_4);
  func_0x00010c1666e0(puVar6,param_2,(int)lVar2 == 0x46);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf3f9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar6,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_5;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar3 != 0) {
    lVar4 = lVar2;
    func_0x00010c094540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar6,param_2,lVar4);
    _objc_release(lVar4);
  }
  lVar4 = param_4;
  func_0x00010bfbdda0();
  if ((int)lVar4 == 5) {
    lVar4 = param_4;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar3 != 0) {
      lVar4 = param_4;
      func_0x00010bf9e140(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a20(puVar6,param_2,lVar4);
      _objc_release(lVar4);
    }
  }
  if (lVar5 == 0) {
    uVar7 = param_1;
    func_0x00010c0755c0();
    if ((uVar7 & 1) == 0) {
      lVar4 = param_4;
      func_0x00010bfbdda0();
      uVar10 = 0xd4;
      if ((int)lVar4 != 5) {
        uVar10 = 9;
      }
    }
    else {
      uVar10 = 0xd5;
    }
  }
  else {
    uVar10 = 0xd3;
  }
  func_0x00010c206c40(puVar6,param_2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c4610;
  _objc_alloc(PTR_PTR_1126c4610);
  lVar4 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0a80(puVar8,param_2,param_3,lVar4,lVar3,0,0,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010c0b3560();
  }
  else {
    func_0x00010bf8e260();
  }
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar6);
LAB_105d6ff64:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d6ffbc; end: 105d702c3; -[SCGalleryLogger _logBrowseStoryView:viewTimeSec:itemPosition:numberOfStories:viewSource:] */

void FUN_105d6ffbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar2 != 0) {
      lVar2 = param_4;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR_PTR_1126af4d0;
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x148);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7380(puVar4,param_3,param_4,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar5 = puVar4;
        func_0x00010bf529e0();
        lVar2 = param_4;
        func_0x00010bf3d240();
        lVar6 = (long)(int)lVar2;
        func_0x00010b5f5ca0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010bf97200();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_2;
        func_0x00010bebcd40(param_2,param_3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_105d702c4;
        puStack_b0 = &UNK_1108e7588;
        lStack_a8 = param_2;
        _objc_retain(param_4);
        lStack_a0 = param_4;
        lStack_98 = lVar7;
        uStack_90 = uVar3;
        uStack_88 = param_1;
        uStack_80 = param_7;
        func_0x00010be155e0(param_2,param_3,&puStack_c8);
        lVar8 = param_4;
        func_0x00010bfbdda0(param_4);
        lVar9 = param_4;
        func_0x00010bf977c0(param_4);
        lVar10 = param_4;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_4;
        func_0x00010c26afc0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_4;
        func_0x00010bf3f9e0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_4;
        func_0x00010bfa34a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be50e00(param_1,param_2,param_3,lVar2,param_5,param_6,puVar5,lVar8,lVar9,lVar10,
                            lVar6,param_7,lVar11,lVar12,lVar13,param_4);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        lVar8 = param_4;
        func_0x00010bfbdda0();
        func_0x000108dfcb04();
        if (lVar8 == 6) {
          lVar8 = param_4;
          func_0x00010bf977c0();
          uVar1 = (int)lVar8 - 0x39;
          if ((uVar1 < 0x16) && ((1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0)) {
            puVar5 = puVar4;
            func_0x00010bfb1920(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be58cc0(param_2,param_3,5,param_4,puVar5);
            _objc_release(puVar5);
          }
        }
        _objc_release(lStack_a0);
        _objc_release(uVar3);
        _objc_release(lVar7);
        _objc_release(lVar2);
        _objc_release(lVar6);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105d702c4; end: 105d7040b;  */

void FUN_105d702c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(lVar6 + 0x160);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(lVar6 + 0x150);
  uVar2 = *(undefined8 *)(lVar6 + 0x158);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_1 + 0x40) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(lVar6 + 0x140);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe0680(uVar2,uVar7,uVar1,0,uVar8,uVar3,uVar13,0x10,uVar9,0,0,puVar4,0,uVar10,param_2,
                      0,uVar11,uVar5,uVar12,lVar6);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d7040c; end: 105d7064b; -[SCGalleryLogger _logBrowseStoryView:viewTimeSec:itemPosition:numberOfStories:numberOfItems:galleryType:entrySource:externalId:clientProccessingType:viewSource:templateId:collageUCOLensId:featuredStoryTemplateName:entry:] */

void FUN_105d7040c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,int param_9,
                  undefined8 param_10,undefined8 param_11,undefined4 param_12,undefined4 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2360;
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1968c0();
  _objc_release(param_4);
  func_0x000108dfcb04(param_8);
  func_0x00010c196b80(puVar1);
  func_0x00010c199560(puVar1);
  func_0x00010c203cc0(puVar1);
  func_0x00010c222d20(param_1,puVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0x40));
  func_0x00010c1cf460(puVar1);
  lVar2 = (long)param_9;
  func_0x00010b5f5864(lVar2,param_17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar1);
  func_0x00010c1a1a20(puVar1);
  _objc_release(param_10);
  func_0x00010c17cf60(puVar1);
  _objc_release(param_11);
  func_0x00010c212c20(puVar1);
  _objc_release(param_14);
  func_0x00010c1bbd60(puVar1);
  _objc_release(param_15);
  func_0x00010c19ae80(puVar1);
  _objc_release(param_16);
  uVar3 = param_17;
  func_0x00010bfa3440(param_17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_17);
  func_0x00010c19ae20(puVar1);
  _objc_release(uVar3);
  if (param_5 != 0x7fffffffffffffff) {
    func_0x00010c1b61a0(puVar1);
  }
  if (param_6 != 0) {
    func_0x00010c20cda0(puVar1);
  }
  func_0x00010c222c00(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d7064c; end: 105d70743; -[SCGalleryLogger logBoomboxBrowseSnapView:snapOverlay:entryId:viewTimeSec:pageHeight:] */

void FUN_105d7064c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105d70744;
  puStack_88 = &UNK_1108e75b8;
  uStack_80 = param_5;
  lStack_78 = param_3;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_4,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105d70744; end: 105d70877;  */

void FUN_105d70744(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  puVar2 = PTR_PTR_1126af4c0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7060(puVar2,param_2,uVar4,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  dVar5 = *(double *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf21500(lVar3,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(lVar3 + 0x1a8),puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(lVar3,param_2,uVar4);
  _objc_release(uVar4);
  func_0x00010c1968c0(lVar3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c222d20((double)(long)(dVar5 * 10.0) / 10.0,lVar3);
  func_0x00010c1a1aa0(lVar3,param_2,0x10);
  func_0x00010c1d81e0(*(undefined8 *)(param_1 + 0x48),lVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d70878; end: 105d7092f; -[SCGalleryLogger didSaveToGallerySuccess:mediaType:isSpectacles:latencyInSec:] */

void FUN_105d70878(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d70930;
  puStack_78 = &UNK_1108e75e8;
  lStack_70 = param_2;
  uStack_68 = param_5;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_57 = param_6;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_90);
  _objc_release(uStack_68);
  _objc_release(param_5);
  return;
}



/* Entry: 105d70930; end: 105d70a0b;  */

void FUN_105d70930(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = 0x4059000000000000;
    if (*(char *)(param_1 + 0x39) == '\0') {
      uVar3 = 0x3ff0000000000000;
    }
  }
  else {
    uVar3 = 0x4059000000000000;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb54a0(uVar3);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126c4618;
  _objc_opt_new(PTR_PTR_1126c4618);
  func_0x00010c1b91e0();
  func_0x00010c226c20(puVar2,param_2,*(undefined1 *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c1c5440(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d70a0c; end: 105d70a4f; -[SCGalleryLogger cancelledCreateStory] */

void FUN_105d70a0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbda80(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0xd0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d70a50; end: 105d70b9f; -[SCGalleryLogger createStoryWithSnaps:contextMenuSourceString:] */

void FUN_105d70a50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105d70b08;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105d70ba0; end: 105d70c83; -[SCGalleryLogger logExitPreviewWithCommonLoggingParams:galleryEntry:gallerySnap:] */

void FUN_105d70ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d70c84;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d70c84; end: 105d70df7;  */

void FUN_105d70c84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c4628;
  _objc_opt_new(PTR_PTR_1126c4628);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6c20();
  uVar1 = lVar3 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar1 = lVar3 + 1;
      if (uVar1 < 0x1c && (1L << (uVar1 & 0x3f) & 0xb4b5dbbU) != 0) {
        if (uVar1 < 0x1b) {
          uVar5 = *(undefined8 *)(&UNK_10ddd06c8 + uVar1 * 8);
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 1;
      }
      goto LAB_105d70d14;
    }
    if (uVar1 == 8) {
      uVar5 = 5;
      goto LAB_105d70d14;
    }
    if (uVar1 == 10) {
      uVar5 = 0xe;
      goto LAB_105d70d14;
    }
  }
  uVar5 = 2;
LAB_105d70d14:
  func_0x00010c1c5440(puVar2,param_2,uVar5);
  func_0x00010c1ddc60(puVar2,param_2,1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0c9fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c9fe0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    _objc_release(uVar4);
  }
  func_0x00010c1a1aa0(puVar2,param_2,uVar5);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  func_0x00010be58cc0(*(undefined8 *)(param_1 + 0x28),param_2,6,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d70df8; end: 105d70e0b; -[SCGalleryLogger setTabType:] */

void FUN_105d70df8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0xb0)) {
    *(long *)(param_1 + 0xb0) = param_3;
  }
  return;
}



/* Entry: 105d70e0c; end: 105d70eff; -[SCGalleryLogger logBlizzardSnapFavoriteWithAsset:isFavorite:crFeaturedStory:contextMenuSource:] */

void FUN_105d70e0c(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105d70f00;
    puStack_70 = &UNK_110878f70;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_5);
    uStack_60 = param_5;
    uStack_48 = param_4;
    _objc_retain(param_6);
    uStack_58 = param_6;
    lStack_50 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105d70f00; end: 105d7143f;  */

void FUN_105d70f00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_248;
  
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c4630;
    _objc_opt_new();
    puVar2 = puVar4;
    func_0x00010c09da80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar3);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe5ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar3);
    _objc_release(uVar1);
    func_0x00010bf97860(*(undefined8 *)(param_1 + 0x28));
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar3);
    func_0x00010c1b0e60(puVar3);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010bafa2c4();
      func_0x00010c1a1aa0(puVar3);
    }
    lVar12 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar12 + 0xb0) != -1) {
      func_0x00010c1d84e0(puVar3);
      lVar12 = *(long *)(param_1 + 0x38);
    }
    uVar1 = *(undefined8 *)(lVar12 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
    func_0x00010c29e220();
    puVar2 = PTR_PTR_1126c45b8;
    _objc_alloc();
    func_0x00010bff41a0();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = PTR_PTR_1126c45b8;
        _objc_alloc();
        func_0x00010bff41a0();
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(puVar5);
    func_0x00010be155e0(uVar16);
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x158);
  lVar12 = *(long *)(*(long *)(puVar4 + 0x20) + 0x130);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(puVar4 + 0x28);
  lVar11 = *(long *)(puVar4 + 0x38);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    puStack_248 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_248 = *(undefined **)(puVar4 + 0x38);
  }
  uVar8 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  puVar3 = puStack_248;
  func_0x000107fe1b6c(uVar14,lVar12);
  _objc_release(param_2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  if (lVar11 == 0) {
    _objc_release(puStack_248);
  }
  _objc_release(uVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(uVar1);
  _objc_retain(puVar3);
  uVar16 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain(puVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar10);
  func_0x00010c0f7fc0(uVar16);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar10);
  return;
}



/* Entry: 105d71440; end: 105d7152b; -[SCGalleryLogger logBlizzardSnapFavoriteWithSnap:entry:isFavorite:contextMenuSource:] */

void FUN_105d71440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105d7152c;
  puStack_70 = &UNK_110878f70;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_6;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d7152c; end: 105d7184b;  */

void FUN_105d7152c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    puVar2 = PTR_PTR_1126c4630;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf97200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar2);
    _objc_release(uVar3);
    func_0x00010bfbdda0(*(undefined8 *)(param_1 + 0x28));
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar2);
    func_0x00010c1b0e60(puVar2);
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010bafa2c4();
      func_0x00010c1a1aa0(puVar2);
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar4 + 0xb0) != -1) {
      func_0x00010c1d84e0(puVar2);
      lVar4 = *(long *)(param_1 + 0x38);
    }
    func_0x00010bf8a880();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c191e80(puVar2);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x00010bf8a7e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe120(puVar2);
      _objc_release(lVar6);
      lVar6 = lVar5;
      func_0x00010bf8a400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212c20(puVar2);
      _objc_release(lVar6);
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    lVar6 = *(long *)(param_1 + 0x38);
    func_0x00010c29e220();
    if (lVar6 != 0x65) {
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
    }
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebcd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar3 = uVar14;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    func_0x00010be155e0(uVar17);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)(puVar2 + 0x20);
    uVar11 = *(undefined8 *)(puVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar10 + 0x158);
    uVar17 = *(undefined8 *)(lVar10 + 0x160);
    uVar14 = *(undefined8 *)(puVar2 + 0x30);
    uVar1 = *(undefined8 *)(puVar2 + 0x38);
    uVar12 = *(undefined8 *)(lVar10 + 0x150);
    _objc_retain(param_2);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(puVar2 + 0x20);
    uVar13 = *(undefined8 *)(lVar10 + 0x170);
    uVar16 = *(undefined8 *)(puVar2 + 0x40);
    uVar18 = *(undefined8 *)(lVar10 + 0xd0);
    uVar9 = *(undefined8 *)(lVar10 + 0x148);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(puVar2 + 0x20);
    uVar15 = *(undefined8 *)(lVar10 + 0x140);
    func_0x00010bee6e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fe0680(uVar3,uVar17,uVar11,uVar14,uVar1,uVar12,uVar8,0x13,uVar13,0,0,0,0,uVar16,
                        param_2,0,uVar18,uVar9,uVar15,lVar10);
    _objc_release(param_2);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar12);
    return;
  }
  return;
}



/* Entry: 105d7184c; end: 105d71983;  */

void FUN_105d7184c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(lVar8 + 0x158);
  uVar4 = *(undefined8 *)(lVar8 + 0x160);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(lVar8 + 0x150);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(lVar8 + 0x170);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(lVar8 + 0xd0);
  uVar7 = *(undefined8 *)(lVar8 + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(lVar8 + 0x140);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe0680(uVar1,uVar4,uVar3,uVar2,uVar5,uVar9,uVar6,0x13,uVar10,0,0,0,0,uVar12,param_2,0
                      ,uVar13,uVar7,uVar11,lVar8);
  _objc_release(param_2);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105d71984; end: 105d71b3f; -[SCGalleryLogger setItemAsPrivate:subItems:] */

void FUN_105d71984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105d71a3c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d71b40; end: 105d71cef; -[SCGalleryLogger setItemAsPublic:subItems:] */

void FUN_105d71b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105d71bf8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d71cf0; end: 105d71d47; -[SCGalleryLogger finishPrivateGallerySetup] */

void FUN_105d71cf0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d71d48;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d71d48; end: 105d71db3;  */

void FUN_105d71d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfb0320(PTR_PTR_1126b24e0,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
  puVar1 = PTR_PTR_1126c4640;
  _objc_opt_new(PTR_PTR_1126c4640);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d71db4; end: 105d71e0b; -[SCGalleryLogger finishPrivateGalleryForgetPasscodeFlow:] */

void FUN_105d71db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105d71e0c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 105d71e0c; end: 105d71eb3;  */

void FUN_105d71e0c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = (undefined **)0x0;
  if (*(long *)(param_1 + 0x28) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29bd8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e29bf8;
  if (*(long *)(param_1 + 0x28) != 1) {
    ppuVar2 = ppuVar1;
  }
  func_0x00010bfb0340(PTR_PTR_1126b24e0,param_2,ppuVar2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
  puVar3 = PTR_PTR_1126c4648;
  _objc_opt_new(PTR_PTR_1126c4648);
  func_0x00010c19eb20();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d71eb4; end: 105d72127; -[SCGalleryLogger sendToChatBlizzardEventsWithSnaps:phAssets:conversationId:recipientCount:sendToFriend:mischiefIds:userContext:correspondentGuids:] */

void FUN_105d71eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105d6b330;
  uStack_78 = 0x105d6b340;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_105d6b330;
  uStack_a8 = 0x105d6b340;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  _objc_initWeak(auStack_d0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_f0,auStack_d0);
  _objc_retain(param_3);
  uStack_e8 = param_6;
  uStack_d8 = param_7;
  _objc_retain(param_8);
  uStack_e0 = param_9;
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f8240(uVar2);
  uVar2 = puStack_c0[5];
  func_0x00010bf51e00(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(puStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d72128; end: 105d72813;  */

void FUN_105d72128(long param_1,undefined *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_230;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (uint)*(undefined8 *)(lVar2 + 0x160);
    func_0x000108ec0158();
    puStack_230 = PTR_PTR_1126af4c0;
    if (uVar1 == 0) {
      puStack_230 = (undefined *)0x0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x148);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    lVar11 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar11);
    lVar14 = lVar11;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        puVar5 = PTR_PTR_1126bc7b8;
        uVar17 = *(undefined8 *)(lVar16 * 8);
        uVar4 = *(undefined8 *)(lVar2 + 0x148);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126af4c0;
        if ((uVar1 & 1) == 0) {
          uVar17 = *(undefined8 *)(lVar2 + 0x148);
          func_0x00010c269d40(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c241220(uVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puStack_230;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar17);
        puVar13 = PTR_PTR_1126af4d0;
        if (puVar6 == (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          uVar4 = *(undefined8 *)(lVar2 + 0x148);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380(puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
        }
        puVar7 = puVar6;
        func_0x00010c245800();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        param_2 = puVar13;
        func_0x00010b5fca54();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar7);
        puVar13 = puVar8;
        func_0x00010bfecde0();
        if (puVar13 != (undefined *)0x7fffffffffffffff) {
          func_0x00010bfecde0();
        }
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        puVar13 = puVar5;
        func_0x00010c0ef4a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c261ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        func_0x00010befa160(puVar3);
        uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
        uVar17 = *(undefined8 *)(param_1 + 0x28);
        puVar13 = puVar5;
        func_0x00010c0ef4a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c9a80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar12);
        _objc_release(uVar17);
        _objc_release(puVar13);
        _objc_release(uVar4);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
      lVar14 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    lVar11 = *(long *)(param_1 + 0x40);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar11;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        uVar17 = *(undefined8 *)(lVar16 * 8);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c261ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf0af00(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c9aa0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar15);
        _objc_release(uVar12);
        _objc_release(uVar17);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar14 != lVar16);
      lVar14 = lVar11;
      func_0x00010bf52a60();
    }
    lVar9 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar14 = lVar11;
    if (lVar9 != 0) {
      lVar14 = *(long *)(param_1 + 0x20);
    }
    _objc_retain(lVar14);
    puVar6 = PTR_PTR_1126c4658;
    _objc_alloc(PTR_PTR_1126c4658);
    uVar4 = *(undefined8 *)(lVar2 + 0x148);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7480(puVar6);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c261c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar17 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined **)(lVar9 + 0x28) = puVar5;
    _objc_release(uVar17);
    func_0x00010bef8060(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(lVar14);
    _objc_release(lVar11);
    _objc_release(puStack_230);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c4650;
  _objc_retain(param_2);
  _objc_alloc(puVar3);
  func_0x00010bff41e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d72814; end: 105d72863;  */

void FUN_105d72814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4650;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff41e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d72864; end: 105d7291b; -[SCGalleryLogger logIfSendFromGalleryWithMessageId:failureReason:] */

void FUN_105d72864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d7291c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d7291c; end: 105d72a1b;  */

void FUN_105d7291c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
    func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010be586a0(lVar1,param_2,uVar2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    if (lVar4 == 0) {
      func_0x00010c1d0640(uVar5,param_2,lVar1);
    }
    else {
      func_0x00010c12d3e0(uVar5,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),param_2,
                        *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d72a1c; end: 105d72aab; -[SCGalleryLogger _snapInfosFromSnaps:] */

void FUN_105d72a1c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d72aac;
  puStack_30 = &UNK_1108e7688;
  uStack_28 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  _objc_retain(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d72aac; end: 105d72b77;  */

void FUN_105d72aac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc7b8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c45b0;
  _objc_alloc(PTR_PTR_1126c45b0);
  puVar3 = puVar1;
  func_0x00010c0ef4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047100(puVar2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d72b78; end: 105d7372b; -[SCGalleryLogger logGallerySnapSendForPostToStory:snapOverlay:clientId:memSessionId:memTabSessionId:userContext:memoriesCRFeaturedStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:] */

void FUN_105d72b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x105d72d18;
  puStack_c8 = &UNK_1108e76b8;
  uStack_70 = param_10;
  uStack_80 = param_12;
  uStack_78 = param_13;
  uStack_6f = param_14;
  uStack_98 = param_9;
  uStack_c0 = param_3;
  lStack_b8 = param_1;
  uStack_b0 = param_4;
  uStack_a8 = param_6;
  uStack_a0 = param_5;
  uStack_90 = param_7;
  uStack_88 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_e0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c0);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d7372c; end: 105d73abf; -[SCGalleryLogger successfulSendToChatMemoriesSnapMetricInfoOnSnapLevelWithMedia:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:smartShared:storyCount:isInsideStory:userContext:isStitched:totalDuration:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:memoriesSnapIndexInStory:importedContentId:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:] */

void FUN_105d7372c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  uVar1 = param_4;
  func_0x000107ade96c();
  puVar2 = PTR_PTR_1126c4650;
  uVar4 = 0;
  if ((long)uVar1 < 3) {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        _objc_retain(param_4);
        _objc_opt_class(puVar2);
        uVar3 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar2);
        uVar1 = param_4;
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(param_4);
        uVar3 = uVar1;
        func_0x00010bf0af00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        func_0x00010c0c9aa0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar4 = param_2;
      }
      goto LAB_105d73a48;
    }
  }
  else {
    if (uVar1 == 3) {
      func_0x00010c0c9ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      goto LAB_105d73a48;
    }
    if (uVar1 != 4) goto LAB_105d73a48;
  }
  func_0x00010c0c9a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
LAB_105d73a48:
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105d73ac0; end: 105d740d7; -[SCGalleryLogger successfulSendToChatBlizzardEventsOnSnapLevelWithMedia:snapOverlay:entry:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:smartShared:isInsideStory:userContext:memSessionId:memTabSessionId:viewSource:memoriesCRFeaturedStory:memoriesSnapIndexInStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:correspondentGuids:captureSessionId:] */

void FUN_105d73ac0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000107ade96c();
  puVar3 = PTR_PTR_1126c4650;
  if (uVar2 == 4) {
    if (in_stack_00000020 != 0x65) {
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
    }
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar5 = param_3;
  }
  else {
    uVar5 = param_1;
    if (uVar2 == 2) {
      _objc_retain(param_3);
      _objc_opt_class(puVar3);
      uVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      uVar2 = param_3;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_3);
      uVar4 = uVar2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bfbd8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(in_stack_00000028);
      _objc_retain(uVar4);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(in_stack_00000028);
      _objc_release(uVar4);
      _objc_release(uVar4);
    }
    else {
      if (uVar2 != 1) goto LAB_105d7406c;
      if (in_stack_00000020 != 0x65) {
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
      }
      _objc_retain(param_3);
      func_0x00010bfbd8a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 400);
      uVar2 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar6 != 0) {
        func_0x00010c067fc0(lVar6);
        func_0x00010c199b80(uVar5);
      }
      func_0x00010befa120(puVar1);
      uVar2 = param_1;
      func_0x00010bfd7680();
      if ((int)uVar2 != 0) {
        uVar2 = param_1;
        func_0x00010bfc1640();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(uVar2);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(lVar6);
    }
  }
  _objc_release(uVar5);
LAB_105d7406c:
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d740d8; end: 105d74227;  */

void FUN_105d740d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puVar2 = PTR_PTR_1126c45b0;
  _objc_alloc();
  func_0x00010c047100();
  puVar4 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x148);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar4,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bebcd40(uVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105d74228;
  puStack_98 = &UNK_1108e76e8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar3;
  _objc_retain(uVar1);
  uStack_58 = *(undefined1 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar1;
  puStack_80 = puVar2;
  uStack_78 = uVar5;
  uStack_70 = uVar6;
  func_0x00010be155e0(uVar3,param_2,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 105d74228; end: 105d7477b;  */

void FUN_105d74228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(lVar9 + 0x160);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(lVar9 + 0x150);
  uVar4 = *(undefined8 *)(lVar9 + 0x158);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(lVar9 + 0x140);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe0680(uVar4,uVar11,uVar2,uVar1,uVar3,uVar5,uVar10,0xf,uVar12,puVar6,puVar7,0,0,
                      uVar13,param_2,0,uVar14,uVar8,uVar15,lVar9);
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105d7477c; end: 105d748cb;  */

void FUN_105d7477c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  puVar2 = PTR_PTR_1126c45b0;
  _objc_alloc();
  func_0x00010c047100();
  puVar4 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x148);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar4,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bebcd40(uVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105d748cc;
  puStack_98 = &UNK_1108e76e8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar3;
  _objc_retain(uVar1);
  uStack_58 = *(undefined1 *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar1;
  puStack_80 = puVar2;
  uStack_78 = uVar5;
  uStack_70 = uVar6;
  func_0x00010be155e0(uVar3,param_2,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 105d748cc; end: 105d74a2b;  */

void FUN_105d748cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(lVar9 + 0x160);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(lVar9 + 0x150);
  uVar4 = *(undefined8 *)(lVar9 + 0x158);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(lVar9 + 0x140);
  func_0x00010bee6e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fe0680(uVar4,uVar11,uVar2,uVar1,uVar3,uVar5,uVar10,0xf,uVar12,puVar6,puVar7,0,0,
                      uVar13,param_2,0,uVar14,uVar8,uVar15,lVar9);
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105d74a2c; end: 105d74deb; -[SCGalleryLogger successfulSendToChatBlizzardEventsOnGroupLevelWithMediaGroup:smartSharedSnapCount:userContext:recipientCount:sendToFriend:mischiefIds:postToStory:includeSpotlight:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:] */

void FUN_105d74a2c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  uint param_13)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  uint uStack_8c;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  uStack_8c = param_13 >> 8 & 0xff;
  uStack_90 = param_13 & 0xff;
  uStack_98 = param_12;
  uStack_a0 = param_11;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_6;
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_8);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f57a8(param_5);
  ppuVar1 = param_3;
  func_0x00010bfcf460();
  if (ppuVar1 == (undefined **)0x3) {
    ppuVar10 = (undefined **)0x1;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bfbd240(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar1;
    ppuStack_b0 = param_3;
    func_0x00010bf529e0();
    param_3 = ppuStack_b0;
    _objc_release(ppuVar1);
  }
  ppuVar1 = param_3;
  func_0x00010c0ca9c0(param_3);
  uStack_b7 = (undefined1)uStack_8c;
  uStack_b8 = (undefined1)uStack_90;
  uStack_c8 = uStack_a0;
  uStack_c0 = uStack_98;
  uStack_d8 = 0;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_e0 = param_9;
  uVar2 = param_1;
  func_0x00010bfbcb20(0,param_1,param_2,ppuVar10,param_4,ppuVar1,param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010bfcf460();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010c259a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 != (undefined **)0x0) {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e29c18;
      ppuVar1 = param_3;
      func_0x00010c259a20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar1;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar10 != (undefined **)0x0) {
        ppuStack_78 = ppuVar10;
      }
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e29c38;
      ppuVar4 = param_3;
      func_0x00010c259a20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bfbdda0();
      func_0x000108dfc9dc();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_70 = ppuVar5;
      }
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&ppuStack_88
                          ,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar10);
      _objc_release(ppuVar1);
      param_4 = param_1;
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010c196740(uVar2,param_2,puVar7);
  _objc_release(puVar7);
  uVar8 = uVar2;
  func_0x00010befa120(puVar9);
  ppuVar1 = param_3;
  func_0x00010bfcf460();
  if (ppuVar1 == (undefined **)0x0) {
    func_0x00010bf55d20(param_1,param_2,param_3,uStack_a8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010befa120(puVar9);
    _objc_release(param_1);
  }
  puVar7 = puVar9;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar9);
  ppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105d74dec;
  uStack_110 = param_4;
  puStack_108 = puVar7;
  puStack_100 = puVar9;
  ppuStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  puVar9 = ppuVar1[4];
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105d74e7c;
  puStack_128 = &UNK_110841f80;
  uStack_120 = uVar8;
  ppuStack_118 = ppuVar1;
  _objc_retain(uVar8);
  func_0x00010c0f7fc0(puVar9,param_2,&puStack_140);
  _objc_release(uStack_120);
  _objc_release(uVar8);
  return;
}



/* Entry: 105d74dec; end: 105d74fab; -[SCGalleryLogger attemptToPostStoryToStoriesWithMediaGroup:] */

void FUN_105d74dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105d74e7c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105d74fac; end: 105d75003; -[SCGalleryLogger attemptToPostToStoriesFromPreview] */

void FUN_105d74fac(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d75004;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d75004; end: 105d75043;  */

void FUN_105d75004(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfbd720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2425a0();
  func_0x00010c205020(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d75044; end: 105d7509b; -[SCGalleryLogger attemptToSendToChatFromPreview] */

void FUN_105d75044(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d7509c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d7509c; end: 105d750db;  */

void FUN_105d7509c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfbd720(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242fe0();
  func_0x00010c2054c0(lVar1,param_2,lVar2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d750dc; end: 105d75193; -[SCGalleryLogger addEvent:withConversationId:] */

void FUN_105d750dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d75194;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105d75194; end: 105d751fb;  */

void FUN_105d75194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),param_2,
                        *(undefined8 *)(param_1 + 0x30));
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58),param_2,puVar1,
                        *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105d751fc; end: 105d754b3; -[SCGalleryLogger _logSendingBlizzardEvents:failureReason:startTime:] */

void FUN_105d751fc(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (0.0 < param_1) {
    _CACurrentMediaTime();
  }
  lVar3 = param_5;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar11 = auStack_100;
  lVar10 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar10 == 0) {
      _objc_release(param_4);
      puVar5 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(param_5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
        return;
      }
      ___stack_chk_fail();
      _objc_retain(puVar11);
      puVar9 = puVar11;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if ((puVar9 == (undefined1 *)0x5) &&
         (puVar9 = puVar11, func_0x00010c080ca0(), (int)puVar9 != 0)) {
        puVar4 = PTR_PTR_1126c4668;
        _objc_opt_new(PTR_PTR_1126c4668);
        func_0x00010c161620();
        func_0x00010bfbdda0(puVar11);
        func_0x000108dfcb04();
        func_0x00010c196b80(puVar4);
        puVar9 = puVar11;
        func_0x00010bf97200(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1968c0(puVar4);
        _objc_release(puVar9);
        puVar9 = puVar11;
        func_0x00010bf9e140(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199560(puVar4);
        _objc_release(puVar9);
        puVar9 = puVar11;
        func_0x00010bf977c0(puVar11);
        lVar10 = (long)(int)puVar9;
        func_0x00010b5f5864(lVar10,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1a00(puVar4);
        _objc_release(lVar10);
        puVar9 = puVar11;
        func_0x00010bf9e140(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1a20(puVar4);
        _objc_release(puVar9);
        uVar8 = *(undefined8 *)(param_4 + 0xe8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar8);
        _objc_release(puVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      puVar5 = PTR_PTR_1126c4660;
      uVar13 = *(ulong *)(lVar12 * 8);
      _objc_retain(uVar13);
      _objc_opt_class(puVar5);
      uVar6 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar5);
      uVar1 = uVar13;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar13);
      puVar5 = PTR_PTR_1126c4598;
      _objc_retain(uVar13);
      _objc_opt_class(puVar5);
      uVar7 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar5);
      uVar6 = uVar13;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar13);
      if ((uVar1 == 0) && (uVar6 == 0)) {
        if (lVar3 == 0) {
          uVar8 = *(undefined8 *)(param_2 + 0xe8);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b2e60();
          _objc_release(uVar8);
        }
        else {
LAB_105d753c8:
          func_0x00010befa120(puVar4);
        }
      }
      else {
        func_0x00010c19a060(uVar13);
        func_0x00010c1b92e0(uVar13);
        uVar8 = *(undefined8 *)(param_2 + 0xe8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar8);
        if (lVar3 != 0) {
          func_0x00010bfec760(uVar13);
          goto LAB_105d753c8;
        }
      }
      _objc_release(uVar6);
      _objc_release(uVar1);
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    puVar11 = auStack_100;
    lVar10 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105d754b4; end: 105d75613; -[SCGalleryLogger logGalleryCollectionAction:entry:] */

void FUN_105d754b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if ((lVar2 == 5) && (lVar2 = param_4, func_0x00010c080ca0(), (int)lVar2 != 0)) {
    puVar1 = PTR_PTR_1126c4668;
    _objc_opt_new(PTR_PTR_1126c4668);
    func_0x00010c161620();
    func_0x00010bfbdda0(param_4);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar1);
    lVar2 = param_4;
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar1);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf977c0(param_4);
    lVar2 = (long)(int)lVar2;
    func_0x00010b5f5864(lVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d75614; end: 105d756f7; -[SCGalleryLogger logGalleryCollectionSnapClientStart:imageCount:videoCount:] */

void FUN_105d75614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4670;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bde6ae0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c2827c0(param_4);
  _objc_release(param_4);
  func_0x00010c1aa160(puVar1,param_2,uVar2);
  uVar2 = param_5;
  func_0x00010c2827c0(param_5);
  _objc_release(param_5);
  func_0x00010c221460(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d756f8; end: 105d75933; -[SCGalleryLogger logGalleryCollectionSnapClientCreate:isGenerated:errorInfo:generatedSnapsCount:totalGenerationsCount:clientExpectedTotalGenerationsCount:imageCount:videoCount:] */

void FUN_105d756f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4678;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010bde6ae0(param_1,param_2,param_3,puVar1);
  func_0x00010c204600(puVar1,param_2,param_4);
  func_0x00010c197120(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar3 = param_6;
  func_0x00010c2827c0(param_6);
  _objc_release(param_6);
  func_0x00010c1a27c0(puVar1,param_2,uVar3);
  func_0x00010c2183e0(puVar1,param_2,param_7);
  func_0x00010c17cc20(puVar1,param_2,param_8);
  uVar3 = param_9;
  func_0x00010c2827c0(param_9);
  _objc_release(param_9);
  func_0x00010c1aa160(puVar1,param_2,uVar3);
  uVar3 = param_10;
  func_0x00010c2827c0(param_10);
  _objc_release(param_10);
  func_0x00010c221460(puVar1,param_2,uVar3);
  lVar2 = param_3;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bfcef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8180(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  lVar2 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_3;
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_105d7590c;
    func_0x00010bf53c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
LAB_105d7590c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d75934; end: 105d75bdf; -[SCGalleryLogger _constructGalleryCollectionSnapClientEventWithEventDataModel:event:] */

void FUN_105d75934(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfce8c0(param_3);
  func_0x00010c1a46e0(param_4);
  lVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(param_4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(param_4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c1a9900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe120(param_4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfc0980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2840(param_4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_3;
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = 0;
    if (lVar3 == 0) goto LAB_105d75b50;
    lVar3 = param_3;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf977c0();
    lVar2 = (long)(int)lVar2;
    func_0x00010b5f5864(lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_3;
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf977c0();
    lVar1 = param_3;
    func_0x00010bfbcca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)(int)lVar2;
    func_0x00010b5f5864(lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  if (lVar2 != 0) {
    func_0x00010c1a1a00(param_4);
  }
  if (lVar3 != 0) {
    func_0x00010c1a1a20(param_4);
    _objc_release(lVar3);
  }
LAB_105d75b50:
  func_0x00010bf3d240(param_3);
  func_0x00010b5fc78c();
  func_0x00010c17cf60(param_4);
  lVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(param_4);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c299be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221480(param_4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d75be0; end: 105d75c37; -[SCGalleryLogger importPHAsset:] */

void FUN_105d75be0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105d75c38;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 105d75c38; end: 105d75c9b;  */

void FUN_105d75c38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4680;
  _objc_opt_new(PTR_PTR_1126c4680);
  func_0x00010c226940();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d75c9c; end: 105d75ca3; -[SCGalleryLogger memoriesDataObjectContext] */

void FUN_105d75c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x148),PTR_s_target_112678178);
  return;
}



/* Entry: 105d75ca4; end: 105d75ca7; -[SCGalleryLogger currentMemoriesTab] */

void FUN_105d75ca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentGalleryTab_1125b5528);
  return;
}



/* Entry: 105d75ca8; end: 105d75da3; -[SCGalleryLogger logGalleryLowDiskAlertWithContext:] */

void FUN_105d75ca8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b24e8;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(param_3);
  func_0x00010bfb7480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108e00074(&PTR____CFConstantStringClassReference_110e29c58,ppuVar1,puVar3,
                      *(undefined8 *)(param_1 + 0xe8));
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f7fc0(*(undefined8 *)(puVar2 + 0x20));
  return;
}



/* Entry: 105d75da4; end: 105d75dff; -[SCGalleryLogger logSnapTabLoadLatency:] */

void FUN_105d75da4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105d75e00;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_40);
  return;
}



/* Entry: 105d75e00; end: 105d75e0f;  */

void FUN_105d75e00(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 105d75e10; end: 105d75e6b; -[SCGalleryLogger logStoriesTabLoadLatency:] */

void FUN_105d75e10(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105d75e6c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_40);
  return;
}



/* Entry: 105d75e6c; end: 105d75f03;  */

void FUN_105d75e6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf4c9a0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befbfe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),param_2,puVar2,
                      (long)(*(double *)(param_1 + 0x28) * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d75f04; end: 105d75f5f; -[SCGalleryLogger logCameraRollTabLoadLatency:] */

void FUN_105d75f04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105d75f60;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_40);
  return;
}



/* Entry: 105d75f60; end: 105d75f6f;  */

void FUN_105d75f60(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 105d75f70; end: 105d75fb7; -[SCGalleryLogger lensInfoForSnapOverlay:] */

void FUN_105d75f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107fdf170(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d75fb8; end: 105d75fd7; -[SCGalleryLogger shouldEntryTypeBeDreams:] */

uint FUN_105d75fb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(param_3 - 0x39U < 0x16) & 0x3dd3c1U >> (ulong)((uint)(param_3 - 0x39U) & 0x1f);
}



/* Entry: 105d75fd8; end: 105d7603b; -[SCGalleryLogger mediaDownloadEntityRequestCompelte:canceled:latency:] */

void FUN_105d75fd8(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d7603c;
  puStack_30 = &UNK_110861e98;
  lStack_28 = param_2;
  uStack_20 = param_1;
  uStack_18 = param_4;
  uStack_17 = param_5;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_48);
  return;
}



/* Entry: 105d7603c; end: 105d76113;  */

void FUN_105d7603c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbcc60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (ulong)*(byte *)(param_1 + 0x30);
  func_0x000108dfcbf0(uVar2,*(undefined1 *)(param_1 + 0x31));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0));
  func_0x00010befc000(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76114; end: 105d761cf; -[SCGalleryLogger retrieveImageWithStep:generationId:latency:] */

void FUN_105d76114(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108dfc9b4(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28af60(uVar2,param_3,param_5,param_4,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d761d0; end: 105d763b3; -[SCGalleryLogger SCAMediaTypeOfItem:subItems:] */

undefined8 FUN_105d761d0(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfbd100();
  if (lVar1 == 2) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c0c6c20();
    if (lVar1 == 1) {
      _objc_release(param_3);
      uVar3 = 2;
    }
    else {
      lVar1 = param_3;
      func_0x00010c0c6c20();
      _objc_release(param_3);
      uVar3 = 0xffffffffffffffff;
      if (lVar1 == 2) {
        uVar3 = 1;
      }
    }
    goto LAB_105d76390;
  }
  if (lVar1 == 1) {
    _objc_retain(param_3);
    puVar2 = param_4;
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126af4d0;
    if (puVar2 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x148);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380(puVar4,param_2,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(uVar3);
      param_4 = puVar4;
    }
    lVar1 = param_3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar1 < 7) {
      if (lVar1 - 1U < 6) {
        uVar3 = 0xb;
      }
      else {
        if (lVar1 != 0) {
LAB_105d76384:
          _objc_release(param_3);
          goto LAB_105d7638c;
        }
LAB_105d76314:
        puVar4 = param_4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        func_0x00010b5fa088();
        if (puVar2 < (undefined *)0xd) {
          if ((1L << ((ulong)puVar2 & 0x3f) & 0x1566U) == 0) {
            uVar3 = 2;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          if (puVar2 != (undefined *)0x270f) {
            _objc_release(puVar4);
            goto LAB_105d76384;
          }
          uVar3 = 0xffffffffffffffff;
        }
        _objc_release(puVar4);
      }
    }
    else {
      if ((lVar1 != 9999) && (lVar1 != 8)) {
        if (lVar1 == 7) goto LAB_105d76314;
        goto LAB_105d76384;
      }
      uVar3 = 0xffffffffffffffff;
    }
    _objc_release(param_3);
  }
  else {
LAB_105d7638c:
    uVar3 = 0xffffffffffffffff;
  }
LAB_105d76390:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105d763b4; end: 105d76487; -[SCGalleryLogger _galleryInitialStateMetricWithMetric:connectivityStatus:backupOnCellularEnabled:] */

void FUN_105d763b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba4e8;
  _objc_retain(param_3);
  func_0x00010c272260(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e29cb8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110e29cd8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105d76488; end: 105d76493; -[SCGalleryLogger _shouldReportBlizzardEvent:] */

void FUN_105d76488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIDevice_1126aeb10,PTR_s_shouldReportForPercentage__11266a3e8);
  return;
}



/* Entry: 105d76494; end: 105d76507; -[SCGalleryLogger logAddLensBannerImpression:] */

void FUN_105d76494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4688;
  _objc_opt_new(PTR_PTR_1126c4688);
  func_0x00010c1c5900();
  func_0x00010c206c40(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76508; end: 105d76607; -[SCGalleryLogger logBrowseFromCameraRollCameraMediaPickerWithItemIndex:entryId:lensId:lensSource:lensSessionId:mediaType:] */

void FUN_105d76508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105d76608;
  puStack_90 = &UNK_1108e3ad8;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_7;
  uStack_68 = param_3;
  uStack_60 = param_6;
  uStack_58 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d76608; end: 105d7661f;  */

void FUN_105d76608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be50db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logBrowseFromCameraRollCameraMe_112571d08,
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 105d76620; end: 105d7677f; -[SCGalleryLogger _logBrowseFromCameraRollCameraMediaPickerWithItemIndex:entryId:lensId:lensSource:lensSessionId:mediaType:] */

void FUN_105d76620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2350;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1c5840();
  func_0x00010c1968c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c19c240(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1bcca0(puVar1,param_2,param_6);
  func_0x00010c1bcc00(puVar1,param_2,param_7);
  _objc_release(param_7);
  if (*(long *)(param_1 + 0x200) == 3) {
    uVar3 = 0xc;
  }
  else {
    if (*(long *)(param_1 + 0x200) != 4) goto LAB_105d766f8;
    uVar3 = 0xb;
  }
  func_0x00010c206c40(puVar1,param_2,uVar3);
LAB_105d766f8:
  lVar2 = param_1;
  func_0x00010c29e220(param_1);
  func_0x00010c222c00(puVar1,param_2,lVar2);
  func_0x00010c1c5440(puVar1,param_2,param_8);
  func_0x00010c160a00(puVar1,param_2,0);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    func_0x00010c1c58e0(puVar1);
    func_0x00010c1c5920(puVar1,param_2,*(undefined8 *)(param_1 + 0x1b0));
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76780; end: 105d767e7; -[SCGalleryLogger dreamsSessionId] */

void FUN_105d76780(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bf8a8a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d767e8; end: 105d7684b; -[SCGalleryLogger logGalleryOperaExitWithViewSource:snapFeedExitSnapPos:snapFeedExitStoryPos:] */

void FUN_105d767e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0x65) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105d7684c;
    puStack_30 = &UNK_110858dc0;
    lStack_28 = param_1;
    uStack_20 = param_4;
    uStack_18 = param_5;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  }
  return;
}



/* Entry: 105d7684c; end: 105d7685b;  */

void FUN_105d7684c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be53dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logGalleryOperaExit_snapFeedExi_112572910,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105d7685c; end: 105d7695f; -[SCGalleryLogger _logGalleryOperaExit:snapFeedExitStoryPos:] */

void FUN_105d7685c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c4690;
  _objc_opt_new(PTR_PTR_1126c4690);
  lVar3 = param_1;
  func_0x00010c240f20();
  if (lVar3 == 2) {
    lVar3 = param_1;
    func_0x00010c240f20(param_1);
  }
  else {
    lVar3 = 1;
  }
  func_0x00010c1983e0(puVar1,param_2,lVar3);
  func_0x00010c1c58e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c204540(puVar1,param_2,param_3);
  func_0x00010c204560(puVar1,param_2,param_4);
  lVar3 = param_1;
  func_0x00010c276c20(param_1);
  func_0x00010c2188e0(puVar1,param_2,lVar3);
  lVar3 = param_1;
  func_0x00010c276c40(param_1);
  func_0x00010c218900(puVar1,param_2,lVar3);
  func_0x00010c222c00(puVar1,param_2,0x65);
  func_0x00010c222ca0((double)*(long *)(param_1 + 0xa8) / 1000.0,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76960; end: 105d76a7f; -[SCGalleryLogger logScreenshotEventWithMediaType:snapId:galleryCollectionId:galleryCollectionCategory:clientProcessingType:groupName:] */

void FUN_105d76960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105d76a80;
  puStack_90 = &UNK_1108a4fb0;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_8;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d76a80; end: 105d76b1f;  */

void FUN_105d76a80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4698;
  _objc_opt_new(PTR_PTR_1126c4698);
  func_0x00010c1c5440();
  func_0x00010c204680(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a1a20(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1a1a00(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c17cf60(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c1e8180(puVar1);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76b20; end: 105d76bc7; -[SCGalleryLogger _userLocation] */

void FUN_105d76b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x198) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f3204();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d76bc8; end: 105d76c97; -[SCGalleryLogger logGallerySnapSelectWithEntryAction:exitAction:videoCreateSessionId:snapCount:cameraRollCount:imageCount:videoCount:source:] */

void FUN_105d76bc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105d76c98;
  puStack_b0 = &UNK_1108a6788;
  uStack_70 = param_9;
  uStack_68 = param_10;
  uStack_a8 = param_5;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  return;
}



/* Entry: 105d76c98; end: 105d76d4f;  */

void FUN_105d76c98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c46a0;
  _objc_opt_new(PTR_PTR_1126c46a0);
  func_0x00010c1967a0();
  func_0x00010c1981e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c221480(puVar1);
  }
  func_0x00010c203cc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c176d80(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1aa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c221460(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d76d50; end: 105d76f0f; -[SCGalleryLogger logGalleryVideoCreateActionWithType:videoCreateSessionId:lensId:soundId:templateSource:contextSessionId:sessionTimeDuration:imageCount:videoCount:latencyMs:] */

void FUN_105d76d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105d76f10;
  puStack_c8 = &UNK_1108e77a8;
  uStack_a0 = param_9;
  uStack_98 = param_10;
  uStack_90 = param_11;
  uStack_88 = param_12;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_a8 = param_8;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_7;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_e0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d76f10; end: 105d77017;  */

void FUN_105d76f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c46a8;
  _objc_opt_new(PTR_PTR_1126c46a8);
  func_0x00010c161fe0();
  func_0x00010c221480(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1bbd60(puVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c206a40(puVar1);
  }
  func_0x00010c212cc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c1833c0(puVar1);
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    func_0x00010c0b4ca0();
    func_0x00010c1fde00(puVar1,param_2,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    func_0x00010c0b4ca0();
    func_0x00010c1aa160(puVar1,param_2,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    func_0x00010c0b4ca0();
    func_0x00010c221460(puVar1,param_2,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    func_0x00010c0b4ca0();
    func_0x00010c1b91e0(puVar1,param_2,lVar2);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d77018; end: 105d7701f; -[SCGalleryLogger memSessionId] */

undefined8 FUN_105d77018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 105d77020; end: 105d77027; -[SCGalleryLogger memTabSessionId] */

undefined8 FUN_105d77020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 105d77028; end: 105d7702f; -[SCGalleryLogger setViewSource:] */

void FUN_105d77028(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 105d77030; end: 105d77037; -[SCGalleryLogger notificationId] */

undefined8 FUN_105d77030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 105d77038; end: 105d77067; -[SCGalleryLogger setNotificationId:] */

void FUN_105d77038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d77068; end: 105d7706f; -[SCGalleryLogger notificationName] */

undefined8 FUN_105d77068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 105d77070; end: 105d7709f; -[SCGalleryLogger setNotificationName:] */

void FUN_105d77070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d770a0; end: 105d770a7; -[SCGalleryLogger isInSnapFeed] */

undefined1 FUN_105d770a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x199);
}



/* Entry: 105d770a8; end: 105d770af; -[SCGalleryLogger setIsInSnapFeed:] */

void FUN_105d770a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x199) = param_3;
  return;
}



/* Entry: 105d770b0; end: 105d770b7; -[SCGalleryLogger enteredMemoriesWithSnapFeed] */

undefined1 FUN_105d770b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19a);
}



/* Entry: 105d770b8; end: 105d770bf; -[SCGalleryLogger memoriesOpenSource] */

undefined8 FUN_105d770b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 105d770c0; end: 105d770c7; -[SCGalleryLogger memoriesInitialOpenSourceBeforeBackground] */

undefined8 FUN_105d770c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 105d770c8; end: 105d770cf; -[SCGalleryLogger setMemoriesInitialOpenSourceBeforeBackground:] */

void FUN_105d770c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  return;
}



/* Entry: 105d770d0; end: 105d770d7; -[SCGalleryLogger snapFeedExitGesture] */

undefined8 FUN_105d770d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



/* Entry: 105d770d8; end: 105d770df; -[SCGalleryLogger setSnapFeedExitGesture:] */

void FUN_105d770d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
  return;
}


