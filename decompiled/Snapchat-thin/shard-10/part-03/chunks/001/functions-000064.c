/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e16930; end: 107e16b17;  */

void FUN_107e16930(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
  lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  if (lVar7 != 0) {
    lVar1 = lVar7;
  }
  func_0x00010b5f6f04(uVar11,lVar4,lVar1,0x6d);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  func_0x00010bdc77c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = puVar8[0x38];
  uVar11 = *(undefined8 *)(puVar8 + 0x20);
  uVar9 = *(undefined8 *)(*(long *)(puVar8 + 0x28) + 0x40);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar11,uVar2,uVar9,*(undefined8 *)(*(long *)(puVar8 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  (**(code **)(*(long *)(puVar8 + 0x30) + 0x10))(*(long *)(puVar8 + 0x30),uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 107e16b18; end: 107e16b97;  */

void FUN_107e16b18(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2cdfc(uVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107e16b98; end: 107e16c0b; -[SCGalleryDataMutator addMultiSnapWithVideoUrls:metadataItems:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isAutosave:isInfiniteDuration:cameraFrontFacing:createTimeOfFirstSnap:timeRanges:userContext:currentEntry:completionHandler:] */

void FUN_107e16b98(void)

{
  func_0x00010bdc77c0();
  return;
}



/* Entry: 107e16c0c; end: 107e16f9f; -[SCGalleryDataMutator _addMultiSnapWithVideoUrls:metadataItems:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isInfiniteDuration:userContext:entryType:entrySource:currentEntry:externalId:title:attribution:cameraFrontFacing:isAutoSave:createTimeOfFirstSnap:timeRanges:completionHandler:] */

void FUN_107e16c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 uVar1;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined1 uStack_70;
  undefined1 uStack_6e;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  func_0x00010bf529e0(param_10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107e16fa0;
  puStack_118 = &UNK_110a0e038;
  uStack_100 = param_10;
  uStack_f8 = param_9;
  uStack_e8 = param_24;
  uStack_e0 = param_23;
  uStack_c8 = param_20;
  uStack_c0 = param_11;
  uStack_70 = param_12;
  uStack_6e = param_21;
  uStack_b8 = param_14;
  uStack_b0 = param_17;
  uStack_98 = param_25;
  uStack_a8 = param_18;
  uStack_a0 = param_19;
  uStack_80 = param_15;
  uStack_78 = param_16;
  uStack_110 = param_3;
  uStack_108 = param_8;
  uStack_f0 = param_4;
  lStack_d8 = param_1;
  uStack_d0 = param_6;
  uStack_90 = param_5;
  uStack_88 = param_7;
  _objc_retain();
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_25);
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_20);
  _objc_retain(param_6);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_130);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_98);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_25);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_20);
  _objc_release(param_6);
  _objc_release(param_23);
  _objc_release(param_24);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 107e16fa0; end: 107e1775b;  */

void FUN_107e16fa0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 uStack_1a0;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar22 = 0;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010010fab4();
      uVar15 = uVar5;
      if ((int)uVar7 == 0) {
        uVar15 = 0;
      }
      _objc_retain(uVar15);
      _objc_release(uVar5);
      uVar6 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
      uStack_1a0 = 0;
      if (uVar22 < uVar6) {
        uStack_1a0 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d7f10;
      _objc_alloc_init();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      lVar4 = *(long *)(param_1 + 0x48);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,lVar4);
      }
      uStack_c8 = uStack_a8;
      uStack_d0 = uStack_b0;
      uStack_c0 = uStack_a0;
      _CMTimeGetSeconds(&uStack_d0);
      func_0x00010bf655c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      lVar4 = *(long *)(param_1 + 0x58);
      FUN_107e2c3e0(uVar7);
      func_0x00010be1b0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      lVar12 = lVar4;
      func_0x00010bfbd760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar12 == 0) {
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_107e1775c;
        puStack_e8 = &UNK_11084aaa8;
        puVar21 = *(undefined **)(param_1 + 0x98);
        _objc_retain(puVar21);
        puStack_d8 = puVar21;
        _objc_retain(puVar8);
        puStack_e0 = puVar8;
        func_0x000100162d98("APPSTORE",&puStack_100);
        _objc_release(puStack_e0);
        puVar21 = puStack_d8;
      }
      else {
        puVar13 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c1d7460();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar14;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126d7f18;
        _objc_alloc(PTR_PTR_1126d7f18);
        func_0x00010c00e960();
        func_0x00010befa120(ppuVar2);
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x90);
        func_0x00010c269d40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c14bf80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(puVar11);
        func_0x00010c0aeb80(uVar15);
        _objc_release(uVar10);
        _objc_release(uVar15);
        _objc_release(puVar13);
      }
      _objc_release(puVar21);
      _objc_release(lVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(uVar5);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uStack_1a0);
      if (lVar12 == 0) goto LAB_107e17720;
      uVar22 = uVar22 + 1;
      uVar6 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar22 < uVar6);
  }
  ppuVar16 = *(undefined ***)(param_1 + 0x78);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_107e177a8;
  puStack_120 = &UNK_110a0da18;
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain();
  uVar15 = *(undefined8 *)(param_1 + 0x98);
  ppuStack_110 = ppuVar16;
  _objc_retain(uVar15);
  ppuVar17 = &puStack_138;
  uStack_108 = uVar15;
  _objc_retainBlock();
  ppuVar18 = ppuVar17;
  if (ppuVar16 != (undefined **)0x0) {
    ppuVar18 = ppuVar16;
    func_0x00010c08fa60();
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    FUN_107ee8bec();
    func_0x00010b5fa33c();
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(ppuVar17);
    _objc_retain(ppuVar18);
    func_0x00010bdc6a40(uVar15);
    _objc_release(ppuVar18);
    ppuVar19 = ppuVar17;
  }
  else {
    ppuVar18 = (undefined **)PTR_PTR_1126d7f20;
    _objc_alloc(PTR_PTR_1126d7f20);
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010440(ppuVar18);
    _objc_release(uVar15);
    ppuVar19 = ppuVar2;
    func_0x00010c0b8600(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = (undefined **)PTR_PTR_1126d7f28;
    func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x48);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar5);
    _objc_retain(ppuVar17);
    func_0x00010bf06e40(uVar15);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(ppuVar17);
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar20;
  }
  _objc_release(ppuVar17);
  _objc_release(ppuVar19);
  _objc_release(ppuVar18);
  _objc_release(uStack_108);
  _objc_release(ppuStack_110);
  _objc_release(ppuVar16);
LAB_107e17720:
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e1775c; end: 107e177a7;  */

void FUN_107e1775c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e177a8; end: 107e17903;  */

void FUN_107e177a8(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126af4c0;
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e17904;
  puStack_78 = &UNK_11097c050;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = (undefined1)param_2;
  puStack_68 = puVar1;
  puStack_60 = puVar2;
  uStack_58 = param_3;
  uStack_50 = uVar3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(puStack_68);
  _objc_release(uStack_50);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107e17904; end: 107e17983;  */

void FUN_107e17904(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c08fa60();
  }
                    /* WARNING: Could not recover jumptable at 0x000107e17938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107e17984; end: 107e179ef;  */

void FUN_107e17984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e179f0; end: 107e179ff;  */

void FUN_107e179f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107e179fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e17a00; end: 107e17b0b; -[SCGalleryDataMutator updatePrivacyForEntries:isPrivate:userContext:completionHandler:] */

void FUN_107e17a00(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
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
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e17b0c;
  puStack_70 = &UNK_110855c70;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bba80();
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e17b0c; end: 107e185eb;  */

void FUN_107e17b0c(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined *unaff_x22;
  undefined8 uVar23;
  undefined *puVar24;
  ulong unaff_x23;
  undefined8 uVar25;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar26;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  long lVar27;
  undefined *unaff_x28;
  undefined8 uVar28;
  undefined *puStack_530;
  undefined8 uStack_528;
  code *pcStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined1 **ppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  long lStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_468;
  long lStack_3e0;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  ulong uStack_370;
  undefined **ppuStack_368;
  long lStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x20) + 0xa0);
  puStack_310 = puVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_340 = puVar3;
  _dispatch_group_create();
  puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_348 = puVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar19 = *(long *)(param_1 + 0x28);
  puStack_350 = puVar24;
  lStack_2d8 = param_1;
  _objc_retain(lVar19);
  lStack_360 = lVar19;
  func_0x00010bf52a60();
  lStack_338 = lVar19;
  if (lVar19 != 0) {
    lStack_358 = *plStack_1c0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1c0 != lStack_358) {
          _objc_enumerationMutation(lStack_360);
        }
        lVar27 = lStack_2d8;
        uVar23 = *(undefined8 *)(lStack_1c8 + lVar19 * 8);
        puVar24 = PTR_PTR_1126af4d0;
        lStack_328 = lVar19;
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        puStack_2f0 = puVar3;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_2f8 = puVar4;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_300 = puVar3;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_308 = puVar4;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uStack_330 = uVar23;
        puStack_320 = puVar3;
        func_0x00010bf97200(uVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_350);
        _objc_release(uVar23);
        puVar3 = puVar24;
        func_0x00010b5f972c(puVar24,*(undefined8 *)(*(long *)(lVar27 + 0x20) + 0x38));
        _objc_retainAutoreleasedReturnValue();
        lStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        plStack_200 = (long *)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        puStack_2e0 = puVar3;
        _objc_retain(puVar24);
        puStack_318 = puVar24;
        func_0x00010bf52a60();
        puStack_2d0 = puVar24;
        if (puVar24 != (undefined *)0x0) {
          lStack_2e8 = *plStack_200;
          do {
            puVar24 = (undefined *)0x0;
            do {
              if (*plStack_200 != lStack_2e8) {
                _objc_enumerationMutation(puStack_318);
              }
              lVar27 = *(long *)(lStack_208 + (long)puVar24 * 8);
              lVar19 = lVar27;
              func_0x00010c241220(lVar27);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puStack_2e0;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar19);
              lVar19 = lVar27;
              func_0x00010c23ff80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar19 == 0) {
                lVar19 = 0;
LAB_107e17e98:
                lVar20 = lStack_2d8;
                uVar23 = *(undefined8 *)(*(long *)(lStack_2d8 + 0x20) + 0x58);
                func_0x00010c269d40(uVar23);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = *(ulong *)(*(long *)(lVar20 + 0x20) + 0x60);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar27;
                uStack_370 = uVar7;
                lStack_2c8 = lVar19;
                puStack_2c0 = puVar3;
                FUN_107e2cec0(lVar27,1,0,1,0,puVar3,lVar19,uVar23);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                _objc_release(uVar23);
                lVar19 = lVar5;
                func_0x00010c241220(lVar5);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = *(undefined1 *)(lVar20 + 0x40);
                uVar23 = *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x70);
                func_0x00010c269d40(uVar23);
                _objc_retainAutoreleasedReturnValue();
                uVar28 = *(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x68);
                puVar4 = PTR_PTR_1126bf788;
                _objc_alloc(PTR_PTR_1126bf788);
                func_0x00010c017ba0();
                puVar3 = puStack_2f8;
                uStack_370 = uStack_370 & 0xffffffffffffff00;
                FUN_107e2b7cc(lVar27,lVar19,uVar2,puStack_2f8,uVar23,uVar28,1,puVar4);
                _objc_release(puVar4);
                _objc_release(uVar23);
                _objc_release(lVar19);
                lVar19 = lVar5;
                func_0x00010c241220(lVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                FUN_107e2bf14();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar5);
                _objc_release(puVar3);
                _objc_release(lVar19);
                puVar3 = puVar4;
                func_0x00010c241220(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puStack_310);
                _objc_release(puVar3);
                puVar8 = PTR_PTR_1126bc7b8;
                func_0x00010bfa7160(PTR_PTR_1126bc7b8);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126bf8f8;
                func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar3;
                func_0x00010c1d0720();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar9;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar9);
                _objc_release(puVar3);
                puVar9 = PTR_PTR_1126bc7c8;
                func_0x00010bfa7220(PTR_PTR_1126bc7c8);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_PTR_1126bf900;
                func_0x00010c2aec40(PTR_PTR_1126bf900);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar3;
                func_0x00010c1d0720();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar11);
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126d7f18;
                _objc_alloc(PTR_PTR_1126d7f18);
                func_0x00010c00e960();
                func_0x00010befa120(puStack_2f0);
                _objc_release(puVar3);
                lVar19 = lVar27;
                func_0x00010c241220(lVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puStack_308);
                _objc_release(lVar19);
                puVar3 = puVar4;
                func_0x00010c241220(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puStack_300);
                _objc_release(puVar3);
                puVar3 = PTR_PTR_1126af4d0;
                func_0x00010c241220(lVar27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa7b40();
                _objc_release(lVar27);
                if ((int)puVar3 != 0) {
                  puVar3 = puVar4;
                  func_0x00010c241220(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puStack_320);
                  _objc_release(puVar3);
                }
                _objc_release(puVar12);
                _objc_release(puVar9);
                _objc_release(puVar10);
                _objc_release(puVar8);
                _objc_release(puVar4);
                lVar20 = lStack_2c8;
                puVar3 = puStack_2c0;
LAB_107e18240:
                _objc_release(lVar20);
              }
              else {
                lVar19 = lVar27;
                func_0x00010c23ff80();
                _objc_retainAutoreleasedReturnValue();
                lStack_218 = 0;
                lVar5 = lVar19;
                func_0x000108020568();
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lStack_218;
                _objc_retain(lStack_218);
                _objc_release(lVar19);
                if (lVar5 == 0) goto LAB_107e18240;
                bVar1 = *(byte *)(lStack_2d8 + 0x40);
                lVar6 = *(long *)(*(long *)(lStack_2d8 + 0x20) + 0x80);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                lVar19 = lVar6;
                if ((bVar1 & 1) == 0) {
                  uStack_228 = 0;
                  puVar21 = &uStack_228;
                  func_0x00010c0bc460();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  uStack_220 = 0;
                  puVar21 = &uStack_220;
                  func_0x00010c0bc480();
                  _objc_retainAutoreleasedReturnValue();
                }
                uVar23 = *puVar21;
                _objc_retain(uVar23);
                _objc_release(lVar6);
                _objc_release(uVar23);
                _objc_release(lVar5);
                _objc_release(lVar20);
                if (lVar19 != 0) goto LAB_107e17e98;
              }
              _objc_release(puVar3);
              puVar24 = puVar24 + 1;
            } while (puStack_2d0 != puVar24);
            puVar24 = puStack_318;
            func_0x00010bf52a60();
            puStack_2d0 = puVar24;
          } while (puVar24 != (undefined *)0x0);
        }
        _objc_release(puStack_318);
        puVar24 = PTR_PTR_1126d7f58;
        _objc_alloc();
        lVar19 = lStack_2d8;
        uVar28 = *(undefined8 *)(*(long *)(lStack_2d8 + 0x20) + 0x40);
        func_0x00010c269d40(uVar28);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = uStack_330;
        uVar23 = uStack_330;
        func_0x00010bf97200(uStack_330);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03aac0();
        puStack_2c0 = puVar24;
        _objc_release(uVar23);
        _objc_release(uVar28);
        puVar24 = PTR_PTR_1126d7f28;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = puStack_320;
        puVar4 = puStack_320;
        func_0x00010bf51e00(puStack_320);
        puVar8 = puStack_300;
        unaff_x27 = puStack_308;
        uStack_370 = 0;
        func_0x00010bf5a1e0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        unaff_x25 = puStack_348;
        _dispatch_group_enter(puStack_348);
        uVar23 = *(undefined8 *)(*(long *)(lVar19 + 0x20) + 0x48);
        func_0x00010c269d40(uVar23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = *(ulong *)(*(long *)(lVar19 + 0x20) + 8);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puStack_310;
        puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_278 = 0xc2000000;
        pcStack_270 = FUN_107e185ec;
        puStack_268 = &UNK_110a0e068;
        _objc_retain(puStack_310);
        puVar3 = puStack_340;
        uStack_258 = *(undefined8 *)(lVar19 + 0x20);
        puStack_260 = puVar4;
        uStack_230 = *(undefined1 *)(lVar19 + 0x40);
        _objc_retain(puStack_340);
        puStack_250 = puVar3;
        uStack_248 = unaff_x26;
        unaff_x24 = *(undefined8 *)(lVar19 + 0x30);
        _objc_retain(unaff_x24);
        uStack_240 = unaff_x24;
        _objc_retain(unaff_x25);
        unaff_x22 = puStack_2c0;
        puStack_238 = unaff_x25;
        ppuStack_368 = &puStack_280;
        uStack_370 = unaff_x23;
        func_0x00010bf06e40(uVar23);
        _objc_release(unaff_x23);
        _objc_release(uVar23);
        _objc_release(puStack_238);
        _objc_release(uStack_240);
        _objc_release(puStack_250);
        _objc_release(puStack_260);
        _objc_release(puVar24);
        _objc_release(unaff_x22);
        _objc_release(puStack_2e0);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        _objc_release(puVar8);
        _objc_release(puStack_2f8);
        _objc_release(puStack_2f0);
        _objc_release(puStack_318);
        lVar19 = lStack_328 + 1;
      } while (lVar19 != lStack_338);
      lVar19 = lStack_360;
      func_0x00010bf52a60();
      lStack_338 = lVar19;
    } while (lVar19 != 0);
  }
  _objc_release(lStack_360);
  lVar19 = lStack_2d8;
  uVar28 = *(undefined8 *)(*(long *)(lStack_2d8 + 0x20) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_107e188c8;
  puStack_2a0 = &UNK_11084a9e8;
  uVar23 = *(undefined8 *)(lVar19 + 0x38);
  _objc_retain(uVar23);
  puVar3 = puStack_350;
  uStack_290 = *(undefined8 *)(lVar19 + 0x20);
  puStack_298 = puStack_350;
  uStack_288 = uVar23;
  _objc_retain(puStack_350);
  puVar24 = puStack_348;
  ppuVar18 = &puStack_2b8;
  uVar23 = uVar28;
  func_0x000100bc0718(puStack_348);
  iVar17 = (int)uVar23;
  _objc_release(uVar28);
  _objc_release(puStack_298);
  _objc_release(uStack_288);
  _objc_release(puVar3);
  _objc_release(puVar24);
  _objc_release(puStack_340);
  puVar4 = puStack_310;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126af4d0;
  puStack_398 = puVar3;
  puStack_390 = puVar24;
  pcStack_378 = FUN_107e185ec;
  lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3d0 = unaff_x28;
  puStack_3c8 = unaff_x27;
  uStack_3c0 = unaff_x26;
  puStack_3b8 = unaff_x25;
  uStack_3b0 = unaff_x24;
  uStack_3a8 = unaff_x23;
  puStack_3a0 = unaff_x22;
  uStack_388 = uVar28;
  puStack_380 = &stack0xfffffffffffffff0;
  if ((iVar17 != 0) && (ppuVar18 == (undefined **)0x0)) {
    uVar23 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010bf002e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar23);
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    _objc_retain(puVar8);
    puStack_4c8 = puVar8;
    func_0x00010bf52a60();
    puStack_4b8 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      lStack_4c0 = *plStack_4a0;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lStack_4c0) {
            _objc_enumerationMutation(puStack_4c8);
          }
          uVar23 = *(undefined8 *)(lStack_4a8 + (long)puVar24 * 8);
          if (puVar4[0x50] == '\x01') {
            uVar28 = *(undefined8 *)(*(long *)(puVar4 + 0x28) + 0xa0);
            func_0x00010c269d40(uVar28);
            _objc_retainAutoreleasedReturnValue();
            uVar25 = uVar23;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_468 = uVar25;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6c900(uVar28);
            _objc_release(puVar3);
          }
          else {
            uVar26 = *(undefined8 *)(puVar4 + 0x30);
            uVar25 = *(undefined8 *)(puVar4 + 0x20);
            uVar28 = uVar23;
            func_0x00010c241220(uVar23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfecaa0(uVar26);
          }
          _objc_release(uVar25);
          _objc_release(uVar28);
          uVar25 = *(undefined8 *)(*(long *)(puVar4 + 0x28) + 0x50);
          uVar28 = 0xe;
          if (puVar4[0x50] == '\0') {
            uVar28 = 0xf;
          }
          uVar26 = *(undefined8 *)(puVar4 + 0x38);
          uVar13 = *(undefined8 *)(puVar4 + 0x40);
          func_0x00010bf4eae0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = *(undefined8 *)(puVar4 + 0x28);
          func_0x00010bf8a8c0(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar22 = *(undefined8 *)(*(long *)(puVar4 + 0x28) + 0x118);
          uVar15 = *(undefined8 *)(*(long *)(puVar4 + 0x28) + 0xc0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010c079c80();
          uStack_4d0 = 0;
          uStack_4d8 = (undefined1)uVar16;
          uStack_4e0 = uVar22;
          FUN_107e2c4bc(uVar25,uVar23,uVar26,0,uVar28,uVar13,0,uVar14);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          puVar24 = puVar24 + 1;
        } while (puStack_4b8 != puVar24);
        puVar24 = puStack_4c8;
        func_0x00010bf52a60();
        puStack_4b8 = puVar24;
      } while (puVar24 != (undefined *)0x0);
    }
    puVar24 = puStack_4c8;
    _objc_release(puStack_4c8);
    _objc_release(puVar24);
  }
  lVar19 = *(long *)(puVar4 + 0x48);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e0) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar19 + 0x30) != 0) {
    pcStack_4e8 = FUN_107e188c8;
    puVar3 = PTR_PTR_1126af4c0;
    puStack_500 = puVar24;
    puStack_4f8 = puVar4;
    ppuStack_4f0 = &puStack_380;
    func_0x00010bfa6ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_530 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_528 = 0xc2000000;
    pcStack_520 = FUN_107e18980;
    puStack_518 = &UNK_11084aaa8;
    uVar23 = *(undefined8 *)(lVar19 + 0x30);
    _objc_retain(uVar23);
    puStack_510 = puVar3;
    uStack_508 = uVar23;
    _objc_retain(puVar3);
    func_0x000100162d98("APPSTORE",&puStack_530);
    _objc_release(puStack_510);
    _objc_release(uStack_508);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 107e185ec; end: 107e188c7;  */

void FUN_107e185ec(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *unaff_x20;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar9 = PTR_PTR_1126af4d0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf002e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar9);
    puStack_158 = puVar9;
    func_0x00010bf52a60();
    puStack_148 = puVar9;
    if (puVar9 != (undefined *)0x0) {
      lStack_150 = *plStack_130;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_130 != lStack_150) {
            _objc_enumerationMutation(puStack_158);
          }
          uVar1 = *(undefined8 *)(lStack_138 + (long)puVar9 * 8);
          if (*(char *)(param_1 + 0x50) == '\x01') {
            uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar1;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_f8 = uVar11;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6c900(uVar2);
            _objc_release(puVar3);
          }
          else {
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            uVar11 = *(undefined8 *)(param_1 + 0x20);
            uVar2 = uVar1;
            func_0x00010c241220(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfecaa0(uVar12);
          }
          _objc_release(uVar11);
          _objc_release(uVar2);
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
          uVar2 = 0xe;
          if (*(char *)(param_1 + 0x50) == '\0') {
            uVar2 = 0xf;
          }
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010bf4eae0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf8a8c0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c079c80();
          uStack_160 = 0;
          uStack_168 = (undefined1)uVar7;
          uStack_170 = uVar10;
          FUN_107e2c4bc(uVar11,uVar1,uVar12,0,uVar2,uVar4,0,uVar5);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          puVar9 = puVar9 + 1;
        } while (puStack_148 != puVar9);
        puVar9 = puStack_158;
        func_0x00010bf52a60();
        puStack_148 = puVar9;
      } while (puVar9 != (undefined *)0x0);
    }
    unaff_x20 = puStack_158;
    _objc_release(puStack_158);
    _objc_release(unaff_x20);
  }
  lVar8 = *(long *)(param_1 + 0x48);
  _dispatch_group_leave();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar8 + 0x30) != 0) {
    pcStack_178 = FUN_107e188c8;
    puVar9 = PTR_PTR_1126af4c0;
    puStack_190 = unaff_x20;
    lStack_188 = param_1;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x00010bfa6ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_107e18980;
    puStack_1a8 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(lVar8 + 0x30);
    _objc_retain(uVar1);
    puStack_1a0 = puVar9;
    uStack_198 = uVar1;
    _objc_retain(puVar9);
    func_0x000100162d98("APPSTORE",&puStack_1c0);
    _objc_release(puStack_1a0);
    _objc_release(uStack_198);
    _objc_release(puVar9);
  }
  return;
}



/* Entry: 107e188c8; end: 107e1897f;  */

void FUN_107e188c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = PTR_PTR_1126af4c0;
    func_0x00010bfa6ee0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107e18980;
    puStack_38 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    puStack_30 = puVar1;
    uStack_28 = uVar2;
    _objc_retain(puVar1);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(puStack_30);
    _objc_release(uStack_28);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107e18980; end: 107e1898f;  */

void FUN_107e18980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e18990; end: 107e18b5b; -[SCGalleryDataMutator reorderEntry:entryTitle:snapsOrder:userContext:completionQueue:completionHandler:] */

void FUN_107e18990(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 == 0) ||
     ((lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0 &&
      (lVar1 = param_5, func_0x00010bf529e0(), lVar1 == 0)))) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107e18b5c;
    puStack_60 = &UNK_110849530;
    lStack_58 = param_8;
    _objc_retain(param_8);
    func_0x00010007380c(param_7,&puStack_78);
    lVar1 = lStack_58;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e18b5c; end: 107e18b77;  */

void FUN_107e18b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e18b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0);
  return;
}



/* Entry: 107e18b78; end: 107e18d83;  */

void FUN_107e18b78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126d7f38;
  _objc_alloc(PTR_PTR_1126d7f38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0103a0(puVar1,param_2,uVar2,uVar5,uVar6,uVar3,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d7f28;
  func_0x00010bf5a1e0(PTR_PTR_1126d7f28,param_2,0,0,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107e18d84;
  puStack_80 = &UNK_110a0e098;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar3;
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar7;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x00010bf06e40(uVar5,param_2,puVar1,0,7,0,puVar4,0,uVar6,&puStack_98);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 107e18d84; end: 107e18ff7;  */

void FUN_107e18d84(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  puVar7 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf4eae0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf8a8c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,0,puVar2,0,0x11,uVar4,0,uVar5,uVar9,(char)uVar1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    puVar7 = puVar2;
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf4eae0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf8a8c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x118);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,0,puVar2,0,0x12,uVar4,0,uVar5,uVar9,(char)uVar1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107e18ff8;
  puStack_88 = &UNK_110864938;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uStack_68 = (undefined1)param_2;
  puStack_80 = puVar7;
  lStack_78 = param_3;
  uStack_70 = uVar4;
  _objc_retain(param_3);
  _objc_retain(puVar7);
  func_0x00010007380c(uVar1,&puStack_a0);
  _objc_release(lStack_78);
  _objc_release(puStack_80);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(puVar7);
  return;
}



/* Entry: 107e18ff8; end: 107e19013;  */

void FUN_107e18ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e19010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0,
             *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e19014; end: 107e192b7; -[SCGalleryDataMutator saveStoryImageSnap:sojuMediaType:servletMediaFormat:source:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:entrySource:entryType:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e19014(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_23);
  _objc_retain(param_24);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107e192b8;
  puStack_110 = &UNK_110a0e0c8;
  uStack_100 = param_23;
  uStack_b8 = param_24;
  uStack_e8 = param_11;
  uStack_e0 = param_12;
  uStack_d8 = param_13;
  uStack_a0 = param_10;
  uStack_c0 = param_14;
  uStack_80 = param_15;
  uStack_7f = param_21;
  uStack_90 = param_17;
  uStack_88 = param_18;
  lStack_108 = param_2;
  uStack_f8 = param_4;
  uStack_f0 = param_6;
  uStack_d0 = param_8;
  uStack_c8 = param_9;
  uStack_b0 = param_5;
  uStack_a8 = param_7;
  uStack_98 = param_1;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_23);
  _objc_retain(param_24);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_128);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_b8);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_23);
  _objc_release(param_24);
  return;
}



/* Entry: 107e192b8; end: 107e19827;  */

void FUN_107e192b8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uStack_c0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  puVar16 = *(undefined **)(param_1 + 0x70);
  lVar15 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0x38);
  uVar10 = *(undefined8 *)(lVar15 + 0x40);
  uVar1 = *(undefined8 *)(lVar15 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107e29a58(puVar16,uVar10,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x000107e2c03c(puVar2,uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
                      PTR___dispatch_main_q_11034be20,puVar16);
  _objc_release(uVar3);
  if ((int)puVar4 == 0) goto LAB_107e197f8;
  func_0x00010c16d4e0(puVar2);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010be1b060(*(undefined8 *)(param_1 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar6;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar15 == 0) {
    if (*(long *)(param_1 + 0x70) != 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107e19828;
      puStack_80 = &UNK_11084aaa8;
      _objc_retain(puVar16);
      puStack_70 = puVar16;
      _objc_retain(puVar2);
      puStack_78 = puVar2;
      func_0x000100162d98("APPSTORE",&puStack_98);
      _objc_release(puStack_78);
      puVar9 = puStack_70;
      goto LAB_107e197dc;
    }
  }
  else {
    if (lVar5 != 0) {
      func_0x00010c08fa60(lVar5);
    }
    puVar7 = PTR_PTR_1126bf8f8;
    func_0x00010c2aebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c1d7460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (lVar5 != 0) {
      func_0x00010c08fa60(lVar5);
    }
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010c0ef4a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010bfbfb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar10);
    lVar6 = lVar15;
    func_0x00010c241220(lVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar8 = puVar7;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c08fa60();
    uVar10 = uVar3;
    if ((puVar12 != (undefined *)0x0) &&
       (puVar12 = puVar11, func_0x00010c08fa60(), puVar12 != (undefined *)0x0)) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010c0719c0();
      if ((int)puVar12 == 0) {
        uVar17 = 0;
      }
      else {
        uStack_c0 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uStack_c0;
        func_0x00010c0bc420();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar10 = uVar1;
      func_0x00010c156cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if ((int)puVar12 != 0) {
        _objc_release(uVar17);
        _objc_release(uStack_c0);
      }
      _objc_release(uVar1);
    }
    puVar12 = PTR_PTR_1126bf900;
    func_0x00010c2aec40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c213f60();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar12);
    if (lVar5 != 0) {
      func_0x00010c08fa60(lVar5);
    }
    puVar12 = PTR_PTR_1126d7f18;
    _objc_alloc(PTR_PTR_1126d7f18);
    func_0x00010c00e960();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010bdc6a20(uVar1);
    _objc_release(uVar3);
    _objc_release(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar10);
LAB_107e197dc:
    _objc_release(puVar9);
  }
  _objc_release(lVar15);
  _objc_release(puVar4);
  _objc_release(lVar5);
LAB_107e197f8:
  _objc_release(puVar2);
  _objc_release(puVar16);
  return;
}



/* Entry: 107e19828; end: 107e1983f;  */

void FUN_107e19828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e19840; end: 107e1a117; -[SCGalleryDataMutator saveStoryVideoSnap:videoProvider:sojuMediaType:servletMediaFormat:source:storySnapId:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:entrySource:entryType:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:] */

void FUN_107e19840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
                  undefined4 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined8 uVar1;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_24);
  _objc_retain(param_25);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x107e19b40;
  puStack_108 = &UNK_110a0e0f8;
  uStack_f8 = param_24;
  uStack_a0 = param_25;
  uStack_d8 = param_12;
  uStack_d0 = param_13;
  uStack_c8 = param_14;
  uStack_b8 = param_9;
  uStack_88 = param_11;
  uStack_b0 = param_10;
  uStack_a8 = param_15;
  uStack_70 = param_16;
  uStack_6f = param_22;
  uStack_80 = param_18;
  uStack_78 = param_19;
  lStack_100 = param_1;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  uStack_e0 = param_6;
  uStack_c0 = param_8;
  uStack_98 = param_5;
  uStack_90 = param_7;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_24);
  _objc_retain(param_25);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_120);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_a0);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_24);
  _objc_release(param_25);
  return;
}



/* Entry: 107e1a118; end: 107e1a12f;  */

void FUN_107e1a118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1a12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e1a130; end: 107e1a897; -[SCGalleryDataMutator _addEntryFromSnap:createTimeUtc:orientation:isPrivate:entrySource:entryType:isFromSavedMetadata:dataVaultEncryption:mediaSize:mutationInfo:userContext:completionHandler:] */

void FUN_107e1a130(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uStack_e8 = param_12;
  uStack_f8 = param_15;
  uStack_f0 = param_13;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = (undefined *)param_5;
  puStack_108 = (undefined *)param_8;
  uStack_fc = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puVar13 = PTR_PTR_1126bf8c8;
  _objc_retain(param_11);
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  func_0x00010c16d500(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lStack_e0 = param_4;
  func_0x00010c185360(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  iVar11 = 0;
  puVar2 = puVar1;
  func_0x00010b5fb890();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2062c0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar9);
  func_0x00010c222da0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d7f30;
  _objc_alloc();
  uVar9 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_11;
  func_0x00010c0e00e0(param_11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010480();
  puStack_110 = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  _objc_release(uVar7);
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126d7f28;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = 0;
  func_0x00010bf5a1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uStack_f0;
  uVar9 = uStack_f8;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x107e1a648;
  puStack_c0 = &UNK_110a0e128;
  uStack_a0 = param_14;
  uStack_98 = uStack_f0;
  uStack_90 = uStack_f8;
  uStack_88 = uStack_e8;
  uStack_b8 = param_3;
  lStack_b0 = param_1;
  puStack_a8 = puVar3;
  _objc_retain(uStack_f8);
  _objc_retain(uVar7);
  _objc_retain(param_14);
  _objc_retain(puVar3);
  _objc_retain(param_3);
  puVar2 = puStack_110;
  ppuStack_118 = &puStack_d8;
  puVar12 = puStack_110;
  uStack_120 = uVar4;
  func_0x00010bf06e40(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(param_14);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puStack_108);
  _objc_release(puVar2);
  _objc_release(puVar13);
  lVar6 = lStack_e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = uVar9;
  uStack_170 = param_14;
  uStack_168 = uVar7;
  puStack_148 = puVar2;
  uStack_128 = 0x107e1a648;
  puStack_178 = puVar3;
  puStack_160 = puVar13;
  uStack_158 = uVar4;
  uStack_150 = uVar5;
  uStack_140 = param_3;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar13 = PTR_PTR_1126af4d0;
  if ((iVar11 == 0) || (puVar12 != (undefined *)0x0)) {
    if (puVar12 != (undefined *)0x0) {
      func_0x00010c196ee0(*(undefined8 *)(lVar6 + 0x40));
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    func_0x00010c23f220(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar7);
    if (puVar13 != (undefined *)0x0) {
      uVar8 = *(ulong *)(lVar6 + 0x30);
      func_0x00010c07b240();
      if ((uVar8 & 1) == 0) {
        uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0xa0);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar9);
      }
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
      uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x50);
      uVar5 = *(undefined8 *)(lVar6 + 0x38);
      func_0x00010bf4eae0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(lVar6 + 0x50);
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      func_0x00010bf8a8c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x118);
      uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar15,puVar13,uVar9,1,0,uVar5,uVar16,uVar4,uVar17,(char)uVar7);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
  }
  lVar14 = *(long *)(lVar6 + 0x48);
  if (lVar14 != 0) {
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_107e1a898;
    puStack_1a8 = &UNK_1108465d0;
    _objc_retain(lVar14);
    lStack_188 = lVar14;
    _objc_retain(puVar13);
    uVar7 = *(undefined8 *)(lVar6 + 0x30);
    puStack_1a0 = puVar13;
    _objc_retain(uVar7);
    uVar9 = *(undefined8 *)(lVar6 + 0x40);
    uStack_198 = uVar7;
    _objc_retain(uVar9);
    uStack_190 = uVar9;
    func_0x000100162d98("APPSTORE",&puStack_1c0);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_release(puStack_1a0);
    _objc_release(lStack_188);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  return;
}



/* Entry: 107e1a898; end: 107e1a8ef;  */

void FUN_107e1a898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e1a8f0; end: 107e1ab33; -[SCGalleryDataMutator addSnapDocBasedSnapWithSnapDoc:source:saveSource:mediaAssets:additionalSaveData:orientation:location:isInfiniteDuration:cameraFrontFacing:createTimeOfFirstSnap:sojuMediaType:snapsOrder:userContext:completionHandler:] */

void FUN_107e1a8f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_90,auStack_70);
  _objc_retain(param_17);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uStack_78 = param_13;
  _objc_retain(param_12);
  uStack_74 = param_10;
  uStack_88 = param_8;
  _objc_retain(param_16);
  uStack_80 = param_5;
  _objc_retain(param_15);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_15);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_17);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107e1ab34; end: 107e1b3eb;  */

void FUN_107e1ab34(double param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar4 = param_2 + 0x60;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar24 = *(long *)(param_2 + 0x58);
    lVar7 = lVar4;
    func_0x000107e2d64c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar24 + 0x10))(lVar24,0,0,0,0,0,lVar7);
  }
  else {
    lVar24 = lVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar24;
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_2 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar20 != 0) {
        lVar7 = *(long *)(param_2 + 0x20);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar24);
      }
    }
    uVar8 = 0;
    func_0x000108dfcd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108020980(*(undefined8 *)(param_2 + 0x28));
    if (param_1 < 0.0) {
      func_0x0001080207d4(*(undefined8 *)(param_2 + 0x28));
    }
    func_0x000108020bf8(*(undefined8 *)(param_2 + 0x28));
    lVar24 = lVar4;
    func_0x00010bebf8a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = 0;
    uStack_90 = 0;
    lVar5 = lVar4;
    func_0x00010bed7740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uStack_98;
    _objc_retain();
    func_0x00010be097a0(lVar4);
    func_0x00010c073a00();
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf30e80();
    _objc_release(uVar9);
    lVar20 = lVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf2a8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080ca0();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf5a5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf5a580();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf3d240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf3f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bdf3660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar20);
    puVar16 = PTR_PTR_1126bf8f8;
    func_0x00010c2aebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c1d7460();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar16);
    puVar16 = PTR_PTR_1126bf900;
    func_0x00010c2aec40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar16 = PTR_PTR_1126d7f18;
    _objc_alloc();
    func_0x00010c00e960();
    puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = *(long *)(param_2 + 0x48);
    func_0x00010c14bf80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar20 != 0) {
      func_0x00010c08fa60(lVar20);
    }
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_107e1b3ec;
    puStack_d0 = &UNK_110a0e158;
    _objc_copyWeak(auStack_a8,param_2 + 0x60);
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uStack_b0 = uVar9;
    _objc_retain(uVar10);
    uStack_a0 = *(undefined8 *)(param_2 + 0x70);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    uStack_c8 = uVar10;
    _objc_retain(uVar9);
    uStack_c0 = uVar9;
    _objc_retain(lVar20);
    ppuVar21 = &puStack_e8;
    lStack_b8 = lVar20;
    _objc_retainBlock();
    lVar22 = *(long *)(param_2 + 0x20);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    if (lVar22 == 0) {
      lVar23 = lVar22;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar23 = *(long *)(param_2 + 0x20);
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar22);
    iVar3 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c14bec0();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccee0;
    if (iVar3 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain();
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf9e140(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06cce0();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bfa3220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar4;
    func_0x00010bded580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    iVar3 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c231aa0();
    if (iVar3 == 0) {
      ppuVar25 = *(undefined ***)(lVar4 + 0x38);
      _objc_retain(ppuVar25);
      uVar10 = *(undefined8 *)(lVar4 + 0xa0);
      _objc_retain(uVar10);
      uVar12 = *(undefined8 *)(lVar4 + 0x70);
      _objc_retain(uVar12);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c241300(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar6);
      uVar11 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar11);
      _objc_retain(ppuVar21);
      _objc_retain(lVar23);
      func_0x00010bdcd4a0(lVar4);
      _objc_release(lVar23);
      _objc_release(ppuVar21);
      _objc_release(uVar11);
      _objc_release(lVar6);
      _objc_release(uVar9);
      _objc_release(uVar12);
      _objc_release(uVar10);
    }
    else {
      _objc_retain(ppuVar21);
      _objc_retain(lVar23);
      func_0x00010be73300(lVar4);
      _objc_release(lVar23);
      ppuVar25 = ppuVar21;
    }
    _objc_release(ppuVar25);
    _objc_release(lVar22);
    _objc_release(ppuVar1);
    _objc_release(lVar23);
    _objc_release(ppuVar21);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lVar20);
    _objc_release(puVar19);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar18);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar24);
    _objc_release(uVar8);
  }
  _objc_release(lVar7);
  _objc_release(lVar4);
  return;
}



/* Entry: 107e1b3ec; end: 107e1b513;  */

void FUN_107e1b3ec(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,0,0,param_3);
  }
  else {
    if (param_2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,0,0,param_3);
    }
    else {
      func_0x00010c0711c0(*(undefined8 *)(param_1 + 0x20));
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf4eae0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be99aa0(lVar1);
      _objc_release(uVar2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c08fa60();
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e1b514; end: 107e1b523;  */

void FUN_107e1b514(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1b520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e1b524; end: 107e1b643;  */

void FUN_107e1b524(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  if (((int)param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar2 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecbe0();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c241220(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar1);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
    _objc_release(puVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(long *)(param_1 + 0x50),param_2,param_3,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e1b644; end: 107e1b9bf; -[SCGalleryDataMutator _appendSnapDocBaseMultiAssetEntryOperationForSnapDoc:addSnapEntity:snapIdToReplace:snapsOrder:entryPlaceHolder:dataVaultEncryption:userContext:approximateTotalMediaSizeInBytes:completionHandler:] */

void FUN_107e1b644(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar13 = param_4;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = 0;
  if (((param_5 != 0) && (param_6 != 0)) && (lVar1 != 0)) {
    lVar2 = param_6;
    func_0x00010c0d3c80();
    lVar13 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2);
    _objc_release(lVar13);
    func_0x00010c1d0640(lVar2);
    lVar3 = lVar2;
    func_0x00010bf51e00();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010b5fcecc(lVar3,0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126d7f60;
  _objc_alloc();
  uVar8 = param_8;
  func_0x00010c0e00e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047400();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d7f28;
  func_0x00010bf5a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  uVar11 = 1;
  puVar9 = puVar4;
  func_0x00010bf06e20(uVar8);
  _objc_release(param_11);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  _objc_retain(param_10);
  puVar4 = PTR_PTR_1126af4c0;
  _objc_retain(uVar11);
  uVar8 = uVar10;
  func_0x00010bf97200(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bfa7380(PTR_PTR_1126af4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  uVar8 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_5 + 0x38);
  uVar5 = *(undefined8 *)(param_5 + 8);
  _objc_retain(puVar9);
  _objc_retain(param_10);
  _objc_retain(puVar4);
  _objc_retain(uVar10);
  _objc_retain(uVar14);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8520(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(puVar9);
  _objc_release(param_10);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(puVar9);
  _objc_release(param_10);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(uVar8);
  return;
}



/* Entry: 107e1b9c0; end: 107e1c1d3; -[SCGalleryDataMutator _persistLocallyWithAddSnapEntity:entryPlaceHolder:additionalSaveData:completionHandler:] */

void FUN_107e1b9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain(param_6);
  uVar2 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar1,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x107e1bba8;
  puStack_a0 = &UNK_110853a60;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uStack_98 = param_4;
  uStack_90 = uVar2;
  puStack_88 = puVar1;
  uStack_80 = param_5;
  uStack_78 = param_3;
  uStack_70 = uVar3;
  uStack_68 = puVar1 == (undefined *)0x0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8520(uVar3,param_2,&puStack_b8,uVar4,param_6);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(uStack_98);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 107e1c1d4; end: 107e1c67f; -[SCGalleryDataMutator _createEntryPlaceholderWithSnap:entryId:externalId:autosaveTimeUtc:featuredExpirationTimeUtc:captureMode:viewType:seenInCarousel:snapsViewed:folderType:additionalSaveData:] */

void FUN_107e1c1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,long param_14,long param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined *puVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar13;
  undefined8 unaff_x26;
  undefined *puVar14;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x30;
  double dVar15;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  long lStack_110;
  undefined4 uStack_90;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_4);
  func_0x00010bf97860();
  func_0x00010b6fc1b0();
  puVar3 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf59960(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c19ada0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = 1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189c00(puVar3);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c192cc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c1968c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c199560(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(param_15);
  func_0x00010c196b00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c222da0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c07b240(param_15);
  func_0x00010c1b3960(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f9e80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c080ca0(param_15);
  func_0x00010c1b4ee0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar13 = param_15;
  func_0x00010c2711a0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_15;
  func_0x00010c260dc0(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_15;
  func_0x00010bf3d240(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  func_0x00010c17cee0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_15;
  func_0x00010c113c80(param_15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1e3380(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (param_7 != 0) {
    func_0x00010c16d500(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c19e3a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar13 = param_15;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    lVar13 = param_15;
    func_0x00010c26afc0(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar13);
  }
  lVar13 = param_15;
  func_0x00010bf3f9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    lVar13 = param_15;
    func_0x00010bf3f9e0(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar13);
  }
  lVar13 = param_15;
  func_0x00010bfa34a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c19ae80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  puVar6 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    uVar1 = CONCAT44(param_11,param_10);
    uVar2 = CONCAT44(param_13,param_12);
    puVar3 = (undefined *)(CONCAT44(param_13,param_12) & 0xffffffff000000ff);
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar7);
    _objc_retain(uVar9);
    _objc_retain(CONCAT44(param_10,uStack_90));
    _objc_retain(puVar3);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_retain(lVar11);
    _objc_retain(unaff_x28);
    _objc_retain(unaff_x27);
    _objc_retain(unaff_x26);
    _objc_retain(unaff_x25);
    _objc_retain(unaff_x24);
    _objc_retain(unaff_x22);
    _objc_retain(unaff_x20);
    _objc_retain(unaff_x19);
    _objc_retain(unaff_x30);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(param_14);
    func_0x00010b5fc850();
    func_0x00010bdf5e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_14 != 0) {
      func_0x00010c195c20(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar6 = param_5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 0.0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    puVar4 = puVar3;
    func_0x000109023474();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_1d0;
    puVar10 = auStack_190;
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar13 = *plStack_1c0;
      do {
        puVar14 = (undefined *)0x0;
        puVar12 = puVar6;
        do {
          if (*plStack_1c0 != lVar13) {
            _objc_enumerationMutation(puVar4);
          }
          puVar6 = *(undefined **)(lStack_1c8 + (long)puVar14 * 8);
          func_0x00010c067fc0();
          FUN_107e2e020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          puVar14 = puVar14 + 1;
          puVar12 = puVar6;
        } while (puVar5 != puVar14);
        puVar8 = &uStack_1d0;
        puVar10 = auStack_190;
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_14);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(unaff_x30);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    _objc_release(unaff_x22);
    _objc_release(unaff_x24);
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(unaff_x27);
    _objc_release(unaff_x28);
    _objc_release(lVar11);
    _objc_release(param_4);
    _objc_release(param_8);
    _objc_release(puVar3);
    _objc_release(CONCAT44(param_10,uStack_90));
    _objc_release(uVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_110) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      _objc_retain(puVar10);
      _objc_retain(param_8);
      _objc_retain(param_4);
      _objc_retain(lVar11);
      _objc_retain(unaff_x28);
      _objc_retain(unaff_x27);
      _objc_retain(unaff_x26);
      _objc_retain(unaff_x25);
      _objc_retain(unaff_x24);
      _objc_retain(unaff_x20);
      _objc_retain(unaff_x19);
      _objc_retain(unaff_x30);
      _objc_retain(uVar1);
      _objc_retain(uVar2);
      puVar6 = PTR_PTR_1126bf910;
      _objc_retain(puVar3);
      func_0x00010c2aebc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f40();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bf6e8;
      func_0x00010c273760(PTR_PTR_1126bf6e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216ee0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c206c40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c176e00(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1c97e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c199560(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c16b8e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c179340(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c185360(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c192d40((float)dVar15,puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a7d00(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2256c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a65c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a6360(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1ac2c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dca80(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206760(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c1d6440(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c204680(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_107e2b5c8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar4);
        puVar5 = puVar4;
      }
      _objc_release(puVar4);
      func_0x00010c2158c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c176700(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1f5ce0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c18c9a0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c18c900(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c179060(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1b4ee0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c185540(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c185520(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c17cf60(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c17e440(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c212c20(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1a49a0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(unaff_x30);
      _objc_release(unaff_x19);
      _objc_release(unaff_x20);
      _objc_release(unaff_x24);
      _objc_release(unaff_x25);
      _objc_release(unaff_x26);
      _objc_release(unaff_x27);
      _objc_release(unaff_x28);
      _objc_release(lVar11);
      _objc_release(param_4);
      _objc_release(param_8);
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107e1c680; end: 107e1ca7b; -[SCGalleryDataMutator _createSnapDocBasedSnapWithSnapId:snapDocData:captureMode:duration:height:width:source:overlayFormat:overlay:sojuMediaType:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:isTemporary:createdFromSnapIds:createdFromCameraRollItemIds:clientProcessingBitMaskType:collageUCOLensId:templateId:groupName:snapEncryption:] */

void FUN_107e1c680(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  func_0x00010b5fc850();
  func_0x00010bdf5e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (in_stack_000000a0 != 0) {
    func_0x00010c195c20(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = param_2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  dVar9 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar1 = in_stack_00000008;
  func_0x000109023474();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_140;
  puVar5 = auStack_100;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_130;
    do {
      puVar8 = (undefined *)0x0;
      puVar6 = puVar3;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = *(undefined **)(lStack_138 + (long)puVar8 * 8);
        func_0x00010c067fc0();
        FUN_107e2e020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar8 = puVar8 + 1;
        puVar6 = puVar3;
      } while (puVar2 != puVar8);
      puVar4 = &uStack_140;
      puVar5 = auStack_100;
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    _objc_retain(in_stack_00000018);
    _objc_retain(in_stack_00000020);
    _objc_retain(in_stack_00000028);
    _objc_retain(in_stack_00000030);
    _objc_retain(in_stack_00000038);
    _objc_retain(in_stack_00000040);
    _objc_retain(in_stack_00000048);
    _objc_retain(in_stack_00000050);
    _objc_retain(in_stack_00000070);
    _objc_retain(in_stack_00000078);
    _objc_retain(in_stack_00000088);
    _objc_retain(in_stack_00000090);
    _objc_retain(in_stack_00000098);
    puVar3 = PTR_PTR_1126bf910;
    _objc_retain(in_stack_00000008);
    func_0x00010c2aebc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bf6e8;
    func_0x00010c273760(PTR_PTR_1126bf6e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216ee0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c206c40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c176e00(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1c97e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c199560(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c16b8e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c179340(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185360(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c192d40((float)dVar9,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a7d00(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2256c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a65c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a6360(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1ac2c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dca80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206760(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1d6440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c204680(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = in_stack_00000008;
    FUN_107e2b5c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_stack_00000008);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
      func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      _objc_retain(puVar1);
      puVar8 = puVar1;
    }
    _objc_release(puVar1);
    func_0x00010c2158c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c176700(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c18c9a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c18c900(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c179060(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b4ee0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185540(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185520(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17cf60(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17e440(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c212c20(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a49a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(in_stack_00000098);
    _objc_release(in_stack_00000090);
    _objc_release(in_stack_00000088);
    _objc_release(in_stack_00000078);
    _objc_release(in_stack_00000070);
    _objc_release(in_stack_00000050);
    _objc_release(in_stack_00000048);
    _objc_release(in_stack_00000040);
    _objc_release(in_stack_00000038);
    _objc_release(in_stack_00000030);
    _objc_release(in_stack_00000028);
    _objc_release(in_stack_00000020);
    _objc_release(in_stack_00000018);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e1ca7c; end: 107e1d047; -[SCGalleryDataMutator _creationSnapDocBasedSnapWithSnapId:snapDocData:captureMode:duration:height:width:source:overlayFormat:overlay:sojuMediaType:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:isTemporary:createdFromSnapIds:createdFromCameraRollItemIds:snapClientProcessingType:collageUCOLensId:templateId:groupName:] */

void FUN_107e1ca7c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,long param_10,undefined *param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined4 param_22,undefined4 param_23,long param_24,
                  undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  puVar1 = PTR_PTR_1126bf910;
  _objc_retain(param_11);
  func_0x00010c2aebc0(puVar1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8,param_3,param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c206c40(puVar1,param_3,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c176e00(puVar1,param_3,param_14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c97e0(puVar1,param_3,param_16);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c199560(puVar1,param_3,param_15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar1,param_3,param_17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c179340(puVar1,param_3,param_20);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185360(puVar1,param_3,param_21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192d40((float)param_1,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a7d00(puVar1,param_3,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2256c0(puVar1,param_3,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar1,param_3,param_10 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a6360(puVar1,param_3,param_24 != 0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar1,param_3,(undefined1)param_25);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206760(puVar1,param_3,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1d6440(puVar1,param_3,param_22);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar1,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_11;
  FUN_107e2b5c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  _objc_release(puVar2);
  func_0x00010c2158c0(puVar1,param_3,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c176700(puVar1,param_3,param_25._1_1_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar1,param_3,*(undefined8 *)(param_2 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1,param_3,param_19);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c18c900(puVar1,param_3,param_18);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c179060(puVar1,param_3,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b4ee0(puVar1,param_3,param_25._2_1_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185540(puVar1,param_3,param_27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185520(puVar1,param_3,param_28);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17cf60(puVar1,param_3,param_29);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17e440(puVar1,param_3,param_30);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c212c20(puVar1,param_3,param_31);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a49a0(puVar1,param_3,param_32);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e1d048; end: 107e1d703; -[SCGalleryDataMutator _updateEncryptionDataWithSnapDoc:snapId:mediaAssets:isPrivate:location:approximateTotalMediaSizeInBytesRef:snapEncryptionRef:] */

void FUN_107e1d048(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  int param_6,long param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_3c0;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_107e1d704;
  uStack_198 = 0x107e1d714;
  _objc_retain(param_3);
  puStack_1e0 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3032000000;
  pcStack_1d0 = FUN_107e1d704;
  uStack_1c8 = 0x107e1d714;
  uStack_1c0 = 0;
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_107e1d704;
  uStack_1f8 = 0x107e1d714;
  uStack_1f0 = 0;
  lStack_190 = param_3;
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010c0bef00(*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  if (param_6 == 0) {
    lStack_3c0 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_3c0 = lVar3;
    func_0x00010c0bc420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = puStack_1e0[5];
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = puStack_210[5];
    func_0x00010c08fa60();
    puVar2 = puStack_1e0;
    puVar1 = puStack_210;
    if (lVar3 == 0) {
      uVar8 = puStack_1e0[5];
      uVar6 = puStack_210[5];
      func_0x00010c156d40(PTR_PTR_1126bec38);
      _objc_retain(uVar8);
      uVar4 = puVar2[5];
      puVar2[5] = uVar8;
      _objc_release(uVar4);
      _objc_retain(uVar6);
      uVar4 = puVar1[5];
      puVar1[5] = uVar6;
      _objc_release(uVar4);
      if (lStack_3c0 != 0) {
        uVar4 = puStack_1e0[5];
        lVar3 = lStack_3c0;
        func_0x00010bf93ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lStack_3c0;
        func_0x00010c0646e0(lStack_3c0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = puStack_1e0[5];
        puStack_1e0[5] = uVar4;
        _objc_release(uVar6);
        _objc_release(lVar7);
        _objc_release(lVar3);
        uVar4 = puStack_210[5];
        lVar3 = lStack_3c0;
        func_0x00010bf93ec0(lStack_3c0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lStack_3c0;
        func_0x00010c0646e0(lStack_3c0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = puStack_210[5];
        puStack_210[5] = uVar4;
        _objc_release(uVar6);
        _objc_release(lVar7);
        _objc_release(lVar3);
      }
    }
  }
  if (param_7 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9a80();
    _objc_release(uVar4);
  }
  if ((puStack_1e0[5] != 0) && (puStack_210[5] != 0)) {
    puVar5 = PTR_PTR_1126bf908;
    _objc_alloc();
    func_0x00010c020a60();
    _objc_autorelease();
    *param_9 = puVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bef9540();
    _objc_release(uVar6);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
      goto LAB_107e1d4c4;
    }
  }
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_5);
      }
      uVar4 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(param_4);
      _objc_retain(param_7);
      _objc_retain(lStack_3c0);
      _objc_retain(param_4);
      func_0x00010c0bef00(uVar4);
      _objc_release(param_4);
      _objc_release(lStack_3c0);
      _objc_release(param_7);
      _objc_release(param_4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  uVar4 = puStack_1b0[5];
  _objc_retain(uVar4);
LAB_107e1d4c4:
  _objc_release(lStack_3c0);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  __Block_object_dispose(&uStack_1e8,8);
  _objc_release(uStack_1c0);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(lStack_190);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_218,8);
  __Block_object_dispose(&uStack_1e8,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_1b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 107e1d704; end: 107e1d71b;  */

void FUN_107e1d704(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e1d71c; end: 107e1d78f;  */

void FUN_107e1d71c(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = in_x4;
  _objc_retain(in_x4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = in_x5;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107e1d790; end: 107e1d8cb;  */

void FUN_107e1d790(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be09660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_retain();
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010c08fa60();
  **(long **)(param_1 + 0x58) = (long)(puVar3 + **(long **)(param_1 + 0x58));
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c104980(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e1d8cc; end: 107e1d9a3;  */

void FUN_107e1d8cc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bee01a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  _objc_retain();
  _objc_release(uVar3);
  lVar2 = param_2;
  func_0x00010bfcb5a0();
  _objc_release(param_2);
  **(long **)(param_1 + 0x48) = **(long **)(param_1 + 0x48) + lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e1d9a4; end: 107e1daff; -[SCGalleryDataMutator _updateSnapDocWithReusedSnapDocAsset:snapDoc:snapId:key:iv:mediaListId:] */

void FUN_107e1d9a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d7f68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c003b20();
  _objc_release(param_3);
  lStack_58 = 0;
  uVar2 = param_4;
  func_0x00010801f3e8(param_4,param_8,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lStack_58;
  _objc_retain(lStack_58);
  if (lVar6 == 0) {
    uVar3 = param_5;
    func_0x000108017660(param_5,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c287980();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = 0;
    _objc_retain(0);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107e1db00; end: 107e1de03; -[SCGalleryDataMutator _encyptMediaContentAndUpdateSnapDocMediaMetadataWithSnapDoc:snapId:assetData:isPrivate:location:key:IV:masterKey:mediaListId:] */

void FUN_107e1db00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  uVar5 = param_5;
  if ((param_8 != 0) && (param_9 != 0)) {
    uVar4 = *(ulong *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c156cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(uVar4);
  }
  uVar10 = uVar2;
  func_0x00010bfad160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = 0;
  uVar4 = uVar5;
  func_0x00010c14e080();
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uVar10);
  if ((uVar4 & 1) == 0) {
    func_0x00010c196ee0(puVar3);
    uVar10 = 0;
  }
  else {
    lStack_70 = 0;
    func_0x00010801fe84(param_3,param_11,param_8,param_9,&lStack_70);
    lVar9 = lStack_70;
    _objc_retain(lStack_70);
    uVar8 = param_3;
    if (lVar9 == 0) {
      lStack_78 = 0;
      uVar6 = param_3;
      func_0x00010801f3e8(param_3,param_11,&lStack_78);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lStack_78;
      _objc_retain(lStack_78);
      if (lVar9 == 0) {
        uVar10 = param_4;
        func_0x000108017660(param_4,0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c287980();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 0;
        _objc_retain(0);
        _objc_release(param_3);
        _objc_release(uVar7);
        func_0x00010c11bda0(uVar2);
        _objc_retain(uVar8);
        _objc_release(uVar10);
        uVar10 = uVar8;
      }
      else {
        uVar10 = 0;
      }
      _objc_release(uVar6);
    }
    else {
      uVar10 = 0;
    }
    _objc_release(lVar9);
    param_3 = uVar8;
  }
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 107e1de04; end: 107e1e073; -[SCGalleryDataMutator _saveSnapDocBasedEntryCompleteSuccessWithEntryId:isEdit:isClientGenSnapSaving:contextMenuSource:additionalSaveData:completionHandler:] */

void FUN_107e1de04(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 == (undefined *)0x0) ||
     (puVar5 = puVar2, func_0x00010bf529e0(), puVar5 == (undefined *)0x0)) {
    pcVar10 = *(code **)(param_8 + 0x10);
    puVar5 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    if (param_5 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      puVar5 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf8a8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x118);
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,puVar5,puVar1,1,0x13,param_6,0,lVar3,uVar9,(char)uVar7);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(puVar5);
      func_0x00010be9f320(param_1);
    }
    if (param_4 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      puVar5 = puVar2;
      func_0x00010bfb1920(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf8a8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x118);
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c079c80();
      FUN_107e2c4bc(uVar8,puVar5,puVar1,1,1,param_6,0,lVar3,uVar9,(char)uVar7);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(puVar5);
    }
    pcVar10 = *(code **)(param_8 + 0x10);
    uVar7 = 1;
    puVar5 = puVar1;
    puVar6 = puVar2;
  }
  (*pcVar10)(param_8,puVar5,puVar6,0,0,uVar7,0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107e1e074; end: 107e1e543; -[SCGalleryDataMutator _sendGenAiAnalyticsIfApplicable:snaps:additionalSaveData:] */

void FUN_107e1e074(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  long param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 *puStack_138;
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
  puVar3 = param_3;
  puVar13 = param_4;
  lVar11 = param_5;
  _objc_retain(param_3);
  puStack_150 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010bf977c0();
  uVar1 = (int)puVar2 - 0x39;
  uVar1 = (uint)(uVar1 < 0x16) & 0x3dd3c1U >> (ulong)(uVar1 & 0x1f);
  puVar2 = param_3;
  func_0x00010bf977c0();
  if (((((int)puVar2 == 0x4e) || (puVar2 = param_3, func_0x00010bf977c0(), uVar1 != 0)) ||
      ((int)puVar2 == 0x4d)) || (puVar10 = (undefined8 *)0x0, (int)puVar2 == 0x39)) {
    unaff_x23 = (undefined8 *)PTR_PTR_1126c4608;
    _objc_alloc_init();
    puVar3 = param_3;
    func_0x00010bf977c0(param_3);
    func_0x00010c206740(unaff_x23,param_2,(long)(int)puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0xf0);
    func_0x00010bf8a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lStack_160 = lVar11;
    func_0x00010bf60020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    lStack_148 = lVar4;
    puStack_138 = unaff_x23;
    if (lVar4 == 0) {
      uVar5 = *(ulong *)(param_1 + 0xc0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0755c0();
      if ((uVar6 & 1) == 0) {
        puVar3 = param_3;
        func_0x00010bfbdda0();
        if ((int)puVar3 == 5) {
          uVar12 = 0xd4;
        }
        else {
          lVar11 = param_5;
          func_0x00010c0ed500();
          uVar12 = 0xd4;
          if (lVar11 != 5) {
            uVar12 = 9;
          }
        }
      }
      else {
        uVar12 = 0xd5;
      }
      unaff_x23 = puStack_138;
      func_0x00010c206c40(puStack_138,param_2,uVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      func_0x00010c206c40(unaff_x23,param_2,0xd3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = param_3;
    func_0x00010bf977c0(param_3);
    func_0x00010c1666e0(unaff_x23,param_2,(int)puVar3 == 0x46);
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x24 = param_5;
    func_0x00010bf3f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = unaff_x24;
    func_0x00010c08fa60();
    _objc_release(unaff_x24);
    if (lVar11 != 0) {
      unaff_x24 = param_5;
      func_0x00010bf3f9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(unaff_x23,param_2,unaff_x24);
      _objc_release(unaff_x24);
    }
    lStack_140 = param_1;
    if (uVar1 != 0) {
      unaff_x24 = param_5;
      func_0x00010bf9e140();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = unaff_x24;
      func_0x00010c08fa60();
      _objc_release(unaff_x24);
      if (lVar11 != 0) {
        unaff_x24 = param_5;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1a20(puStack_138,param_2,unaff_x24);
        _objc_release(unaff_x24);
      }
    }
    puVar7 = puStack_150;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_158 = param_5;
    _objc_retain(puStack_150);
    puVar3 = &uStack_130;
    puVar13 = auStack_f0;
    lVar11 = 0x10;
    func_0x00010bf52a60();
    puVar10 = puStack_138;
    if (puVar7 != (undefined1 *)0x0) {
      param_1 = *plStack_120;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != param_1) {
            _objc_enumerationMutation(puStack_150);
          }
          lVar14 = *(long *)(lStack_128 + (long)puVar13 * 8);
          lVar11 = lVar14;
          func_0x00010b5f7abc();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar11;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar8 != 0) {
            lVar4 = lVar11;
            func_0x00010c094540(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bbd60(puVar10,param_2,lVar4);
            _objc_release(lVar4);
          }
          puVar9 = PTR_PTR_1126c4610;
          _objc_alloc(PTR_PTR_1126c4610);
          func_0x00010c241220(lVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_3;
          func_0x00010bf97200(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf21f60(puVar10);
          _objc_retainAutoreleasedReturnValue();
          param_6 = 0;
          func_0x00010bff0a80(puVar9,param_2,3,lVar14,puVar3,0,0,puVar10);
          _objc_release(puVar10);
          _objc_release(puVar3);
          _objc_release(lVar14);
          unaff_x24 = *(long *)(lStack_140 + 0x110);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          if (lStack_148 == 0) {
            func_0x00010c0b3560(unaff_x24,param_2,puVar9);
          }
          else {
            func_0x00010bf8e260(unaff_x24,param_2,puVar9);
          }
          _objc_release(unaff_x24);
          _objc_release(puVar9);
          _objc_release(lVar11);
          puVar10 = puStack_138;
          puVar13 = puVar13 + 1;
        } while (puVar7 != puVar13);
        puVar3 = &uStack_130;
        puVar13 = auStack_f0;
        lVar11 = 0x10;
        puVar7 = puStack_150;
        func_0x00010bf52a60();
        unaff_x23 = param_3;
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(puStack_150);
    _objc_release(lStack_160);
    _objc_release(puVar10);
    param_5 = lStack_158;
  }
  _objc_release(param_5);
  _objc_release(puStack_150);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_107e1e544;
    lStack_1a0 = unaff_x24;
    puStack_198 = unaff_x23;
    lStack_190 = param_1;
    lStack_188 = param_5;
    puStack_180 = param_3;
    puStack_178 = puVar10;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(puVar13);
    _objc_retain(lVar11);
    _objc_retain(param_6);
    uVar12 = puVar2[1];
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_107e1e650;
    puStack_1d0 = &UNK_110852488;
    puStack_1c8 = puVar2;
    puStack_1c0 = puVar13;
    puStack_1b8 = puVar3;
    lStack_1b0 = lVar11;
    uStack_1a8 = param_6;
    _objc_retain(lVar11);
    _objc_retain(puVar3);
    _objc_retain(puVar13);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar12,param_2,&puStack_1e8);
    _objc_release(lStack_1b0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1c0);
    _objc_release(uStack_1a8);
    _objc_release(lVar11);
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(param_6);
    return;
  }
  return;
}



/* Entry: 107e1e544; end: 107e1e64f; -[SCGalleryDataMutator appendToDayStory:snapPlaceholder:userContext:completionHandler:] */

void FUN_107e1e544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e1e650;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 107e1e650; end: 107e1f24f;  */

void FUN_107e1e650(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined *unaff_x23;
  undefined8 uVar18;
  undefined *unaff_x25;
  undefined8 uVar19;
  undefined *unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_1 + 0x40);
  lVar12 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(lVar12 + 0x38);
  uVar4 = *(undefined8 *)(lVar12 + 0x40);
  uVar1 = *(undefined8 *)(lVar12 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e29e20(lVar14,uVar4,uVar8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar16 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)0x1;
  puVar5 = puVar16;
  puVar6 = puVar2;
  func_0x000107e2c164();
  iVar11 = (int)puVar5;
  puVar5 = puVar2;
  _objc_release(puVar2);
  if ((int)puVar3 == 0) goto LAB_107e1ee20;
  lStack_88 = 0;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c087aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  unaff_x28 = uVar8;
  func_0x00010c103d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar4);
  unaff_x27 = *(long *)(param_1 + 0x20);
  func_0x00010be1b040();
  _objc_retainAutoreleasedReturnValue();
  _objc_autoreleasePoolPop(puVar5);
  puVar2 = PTR_PTR_1126bf8f8;
  func_0x00010c2aebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  unaff_x23 = puVar2;
  puVar6 = puVar3;
  func_0x00010c1d7460();
  _objc_retainAutoreleasedReturnValue();
  unaff_x25 = unaff_x23;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x23);
  _objc_release(puVar3);
  puVar5 = puVar2;
  _objc_release();
  puStack_e8 = unaff_x25;
  if ((unaff_x27 == 0) || (unaff_x25 == (undefined *)0x0)) {
    puVar5 = puVar16;
    func_0x00010bf15060();
    if ((int)puVar5 != 0) {
      puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x00010c249020();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = *(undefined **)(param_1 + 0x28);
      func_0x00010c087aa0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = unaff_x23;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c0bb3a0(puVar3);
      _objc_release(param_1);
      _objc_release(unaff_x23);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
LAB_107e1ede4:
    if (lVar14 != 0) {
      iVar11 = 0;
      puVar6 = (undefined *)0x0;
      (**(code **)(lVar14 + 0x10))(lVar14,0,0,puVar16);
    }
  }
  else {
    _objc_autoreleasePoolPush();
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 200);
    puStack_100 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef4a0(unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    lStack_f0 = unaff_x27;
    func_0x00010bfbfb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(puVar2);
    lVar12 = lStack_88;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_88;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c08fa60();
    puVar2 = puVar3;
    uStack_f8 = unaff_x28;
    if ((lVar13 != 0) && (lVar13 = lVar9, func_0x00010c08fa60(), lVar13 != 0)) {
      puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x78);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lStack_88;
      func_0x00010c0719c0();
      if ((int)lVar13 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_108 = puVar6;
        func_0x00010c0bc420();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = puVar5;
      func_0x00010c156cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if ((int)lVar13 != 0) {
        _objc_release(puVar6);
        _objc_release(puStack_108);
      }
      _objc_release(puVar5);
      unaff_x28 = uStack_f8;
    }
    _objc_release(lVar9);
    _objc_release(lVar12);
    _objc_autoreleasePoolPop(puStack_100);
    puVar3 = PTR_PTR_1126bf900;
    func_0x00010c2aec40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar3;
    func_0x00010c213f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x23;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(puVar3);
    unaff_x25 = PTR_PTR_1126d7f18;
    _objc_alloc();
    unaff_x27 = lStack_f0;
    puVar6 = (undefined *)0x0;
    func_0x00010c00e960();
    _objc_release(unaff_x26);
    _objc_release(puVar2);
    if (unaff_x25 == (undefined *)0x0) goto LAB_107e1ede4;
    puVar2 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1d0720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = unaff_x25;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    _objc_release(puVar2);
    puVar7 = PTR_PTR_1126d7f30;
    _objc_alloc();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010480();
    _objc_release(uVar8);
    puVar2 = unaff_x25;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar6;
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d7f28;
    puVar3 = puVar5;
    puStack_100 = puVar5;
    func_0x00010c2711a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07b240(puVar5);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = (undefined *)0x0;
    func_0x00010bf5a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined **)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x107e1ee6c;
    puStack_c8 = &UNK_110a0e098;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uStack_c0 = uVar4;
    puStack_b0 = puVar7;
    _objc_retain(uVar1);
    puVar3 = puStack_108;
    puStack_a0 = puStack_108;
    uStack_a8 = uVar1;
    _objc_retain(lVar14);
    lStack_90 = lVar14;
    _objc_retain(puVar16);
    puStack_98 = puVar16;
    _objc_retain(puVar3);
    _objc_retain(puVar7);
    ppuStack_118 = &puStack_e0;
    puVar6 = puVar7;
    puStack_120 = unaff_x26;
    func_0x00010bf06e40(uVar8);
    _objc_release(unaff_x26);
    unaff_x27 = lStack_f0;
    _objc_release(uVar8);
    _objc_release(puStack_98);
    _objc_release(lStack_90);
    _objc_release(puStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(uStack_c0);
    _objc_release(puVar3);
    unaff_x28 = uStack_f8;
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puStack_110);
    _objc_release(puStack_100);
    _objc_release(unaff_x25);
  }
  _objc_release(puStack_e8);
  _objc_release(unaff_x28);
  _objc_release(unaff_x27);
  _objc_release(lStack_88);
LAB_107e1ee20:
  _objc_release(puVar16);
  lVar12 = lVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_128 = 0x107e1ee6c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = unaff_x28;
  lStack_178 = unaff_x27;
  puStack_170 = unaff_x26;
  puStack_168 = unaff_x25;
  puStack_160 = param_1;
  puStack_158 = unaff_x23;
  puStack_150 = puVar3;
  puStack_148 = puVar2;
  puStack_140 = puVar16;
  lStack_138 = lVar14;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = PTR_PTR_1126af4c0;
  puVar3 = (undefined *)0x0;
  if (iVar11 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = (undefined *)0x0;
    if (puVar6 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(lVar12 + 0x20);
      func_0x00010bf97200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      lStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      plStack_2c0 = (long *)0x0;
      lVar9 = *(long *)(lVar12 + 0x30);
      func_0x00010c2424c0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar9;
      func_0x00010bf52a60();
      if (lVar14 != 0) {
        lVar13 = *plStack_2c0;
        do {
          lVar17 = 0;
          do {
            if (*plStack_2c0 != lVar13) {
              _objc_enumerationMutation(lVar9);
            }
            uVar18 = *(undefined8 *)(lStack_2c8 + lVar17 * 8);
            uVar19 = *(undefined8 *)(*(long *)(lVar12 + 0x28) + 0x50);
            uVar4 = *(undefined8 *)(lVar12 + 0x38);
            func_0x00010bf4eae0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = *(undefined8 *)(lVar12 + 0x28);
            func_0x00010bf8a8c0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x28) + 0x118);
            uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x28) + 0xc0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar10;
            func_0x00010c079c80();
            FUN_107e2c4bc(uVar19,uVar18,puVar2,1,9,uVar4,0,uVar1,uVar15,(char)uVar8);
            _objc_release(uVar10);
            _objc_release(uVar1);
            _objc_release(uVar4);
            lVar17 = lVar17 + 1;
          } while (lVar14 != lVar17);
          lVar14 = lVar9;
          func_0x00010bf52a60();
        } while (lVar14 != 0);
      }
      _objc_release(lVar9);
      puVar3 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      plStack_300 = (long *)0x0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      _objc_retain();
      puVar16 = puVar3;
      func_0x00010bf52a60();
      if (puVar16 != (undefined *)0x0) {
        lVar14 = *plStack_300;
        do {
          puVar5 = (undefined *)0x0;
          do {
            if (*plStack_300 != lVar14) {
              _objc_enumerationMutation(puVar3);
            }
            uVar8 = *(undefined8 *)(lStack_308 + (long)puVar5 * 8);
            iVar11 = (int)*(undefined8 *)(lVar12 + 0x40);
            func_0x00010c241220(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            _objc_release(uVar8);
            if ((iVar11 != 0) && (puVar7 = puVar2, func_0x00010c07b240(), ((ulong)puVar7 & 1) == 0))
            {
              uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0x28) + 0xa0);
              func_0x00010c269d40(uVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfecbe0();
              _objc_release(uVar8);
            }
            puVar5 = puVar5 + 1;
          } while (puVar16 != puVar5);
          puVar16 = puVar3;
          func_0x00010bf52a60();
        } while (puVar16 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar16 = puVar2;
    }
  }
  lVar14 = *(long *)(lVar12 + 0x50);
  if (lVar14 != 0) {
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_107e1f250;
    puStack_338 = &UNK_1108465d0;
    _objc_retain(lVar14);
    lStack_318 = lVar14;
    _objc_retain(puVar16);
    puStack_330 = puVar16;
    _objc_retain(puVar3);
    uVar8 = *(undefined8 *)(lVar12 + 0x48);
    puStack_328 = puVar3;
    _objc_retain(uVar8);
    uStack_320 = uVar8;
    func_0x000100162d98("APPSTORE",&puStack_350);
    _objc_release(uStack_320);
    _objc_release(puStack_328);
    _objc_release(puStack_330);
    _objc_release(lStack_318);
  }
  _objc_release(puVar3);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e1f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar6 + 0x38) + 0x10))
            (*(long *)(puVar6 + 0x38),*(undefined8 *)(puVar6 + 0x20),*(undefined8 *)(puVar6 + 0x28),
             *(undefined8 *)(puVar6 + 0x30));
  return;
}



/* Entry: 107e1f250; end: 107e1f263;  */

void FUN_107e1f250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e1f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e1f264; end: 107e1fbe7; -[SCGalleryDataMutator _generateEncryptedDayStorySnapFromPlaceholder:dataVaultEncryption:mutationInfo:metadata:] */

void FUN_107e1f264(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5,
                  undefined8 *param_6,undefined8 param_7,undefined *param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puStack_78;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = param_8;
  func_0x00010c06f7e0();
  puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar2 != 0) {
    puVar2 = param_5;
    func_0x00010c087aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf4bc0(param_3);
    _objc_release(puVar17);
    _objc_release(puVar2);
    func_0x00010c16eae0(param_7);
    puVar17 = (undefined *)0x0;
    goto LAB_107e1fb10;
  }
  puStack_78 = param_5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_5;
  func_0x00010c087aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar17;
  func_0x00010c27dd80();
  _objc_release(puVar17);
  if (puVar2 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c27a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    uVar13 = uVar4;
    func_0x00010bfad160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_8;
    func_0x00010bf12460(param_8);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    puVar3 = puVar17;
    func_0x00010b5fd188(puVar17,uVar13,1,puVar2,&uStack_68);
    _objc_release(puVar2);
    puVar2 = puVar17;
    if ((int)puVar3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        _objc_retain(puVar3);
        _objc_release(puStack_78);
        puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
        func_0x00010c0082a0();
        _objc_release(puVar17);
        puStack_78 = puVar3;
      }
      _objc_release(puVar3);
    }
    func_0x00010c11bda0(uVar4);
    func_0x00010c29b200(PTR_PTR_1126b0010);
    puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    bVar1 = false;
    if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar1) {
      _objc_release(uVar13);
      _objc_release(uVar4);
      _objc_release(puVar2);
      goto LAB_107e1f524;
    }
    puVar3 = param_5;
    func_0x00010c087aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf4bc0(param_3);
    _objc_release(puVar17);
    _objc_release(puVar3);
    func_0x00010c16eae0(param_7);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = param_5;
    func_0x00010c087aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar17;
    func_0x00010c27dd80();
    _objc_release(puVar17);
    if ((param_8 != (undefined *)0x0) && (puVar2 == (undefined *)0x1)) {
      puVar17 = param_8;
      func_0x00010bfe7380();
      _objc_retainAutoreleasedReturnValue();
      if (puVar17 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010c14d040();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar2 == (undefined *)0x0) {
          puVar3 = param_5;
          func_0x00010c087aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf4bc0(param_3);
          _objc_release(puVar17);
          _objc_release(puVar3);
        }
        func_0x00010c16eae0(param_7);
        _objc_release(puVar2);
        puVar17 = (undefined *)0x0;
        goto LAB_107e1fb08;
      }
      _objc_release(puStack_78);
      puStack_78 = puVar17;
    }
LAB_107e1f524:
    puVar17 = param_5;
    func_0x00010bf5aa60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_3 + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_5;
      func_0x00010c09ea00(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010c241220(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(uVar4);
    }
    puVar2 = param_5;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bf910;
    func_0x00010c2aebc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bf908;
    _objc_alloc(PTR_PTR_1126bf908);
    func_0x00010c020a60();
    func_0x00010c195c20(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar6;
    func_0x00010c241220(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    if (puVar9 == (undefined *)0x0) {
      func_0x00010bef9540(uVar4);
    }
    else {
      puVar9 = puVar6;
      func_0x00010bf93d20(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010bef9540(uVar4);
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar17);
    _objc_release(uVar4);
    uVar11 = *(ulong *)(param_3 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c156cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010c27a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    uVar13 = uVar4;
    func_0x00010bfad160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c14e080();
    _objc_retain(0);
    _objc_release(uVar13);
    if ((uVar11 & 1) == 0) {
      func_0x00010c196ee0(param_7);
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = param_5;
      func_0x00010c087aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar17;
      func_0x00010bfc0dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      _objc_release(puVar7);
      _objc_release(puVar17);
      if (puVar8 != (undefined *)0x0) {
        puVar17 = param_5;
        func_0x00010c087aa0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_3;
        func_0x00010bdcf940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        lVar15 = lVar14;
        FUN_107e2d6ec(lVar14,param_7,puVar6,puVar2,puVar3,0,*(undefined8 *)(param_3 + 0x58),
                      *(undefined8 *)(param_3 + 0x78),*(undefined8 *)(param_3 + 0xd8));
        _objc_release(lVar14);
        puVar17 = (undefined *)0x0;
        if ((int)lVar15 == 0) goto LAB_107e1facc;
      }
      uVar16 = *(ulong *)(param_3 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar16;
      func_0x00010befb560();
      _objc_release(uVar16);
      func_0x00010c11bda0(uVar4);
      if ((uVar11 & 1) == 0) {
        puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196ee0(param_7);
        _objc_release(puVar17);
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c104980();
        _objc_release(puVar17);
        puVar17 = PTR_PTR_1126d7f70;
        _objc_alloc();
        puVar7 = param_5;
        func_0x00010c09ea00(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_5;
        func_0x00010c086560(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_5;
        func_0x00010bdc1800(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c026be0();
        uVar13 = *param_6;
        *param_6 = puVar17;
        _objc_release(uVar13);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_retain(puVar6);
        puVar17 = puVar6;
      }
    }
LAB_107e1facc:
    _objc_release(0);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
LAB_107e1fb08:
  _objc_release(puStack_78);
LAB_107e1fb10:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107e1fbe8; end: 107e1fdfb; -[SCGalleryDataMutator _assetMediasForContent:] */

void FUN_107e1fbe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_3;
  func_0x00010bfc0dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_130;
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar4);
        }
        lVar14 = *(long *)(lStack_128 + lVar15 * 8);
        lVar6 = param_3;
        func_0x00010bf63ae0(param_3,param_2,lVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126c4d00;
        _objc_alloc(PTR_PTR_1126c4d00);
        lVar8 = lVar14;
        func_0x00010bf0b760();
        lVar1 = lVar8;
        if (lVar8 != 3) {
          lVar1 = -0x4524111;
        }
        lVar2 = 0x10;
        if (lVar8 != 4) {
          lVar2 = lVar1;
        }
        func_0x00010bff4360(puVar7,param_2,lVar6,lVar2);
        puVar9 = PTR_PTR_1126c4ba8;
        func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf0b760(lVar14);
        func_0x00010c0df780(puVar10,param_2,lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,puVar9,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(lVar6);
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      puVar12 = &uStack_130;
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,puVar12,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  puVar7 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b3e90;
  _objc_retain(puVar12);
  _objc_opt_new(puVar3);
  func_0x00010c207640();
  uVar11 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar11,param_2,puVar3,0,puVar12,puVar7);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e1fdfc; end: 107e1fea7; -[SCGalleryDataMutator _createTicketForBadMediaWithMessage:] */

void FUN_107e1fdfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c207640();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar2,param_2,puVar1,0,param_3,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e1fea8; end: 107e200d3; -[SCGalleryDataMutator createStoryWithSnaps:photoAssets:photoAssetMediaURLs:photoAssetOrientations:storyDisplayName:isPrivate:userContext:completionHandler:] */

void FUN_107e1fea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_10;
  func_0x000107e29e20(param_10,uVar3,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e200d4; end: 107e20b67;  */

void FUN_107e200d4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  ulong uVar26;
  long lStack_378;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar4 + lVar3;
  func_0x000107e2c164(lVar4,puVar2,uVar5,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),
                      *(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar5);
  if ((int)lVar4 == 0) goto LAB_107e20ae0;
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (1000 < (ulong)(lVar3 + lVar4)) {
    FUN_107e2eb08(puVar2,*(undefined8 *)(param_1 + 0x70));
    goto LAB_107e20ae0;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010b5f972c(uVar5,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lStack_378 = lVar4;
  func_0x00010bf52a60();
  if (lStack_378 != 0) {
    lVar3 = *plStack_1b0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1b0 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        puVar23 = *(undefined **)(lStack_1b8 + lVar18 * 8);
        puVar10 = puVar23;
        func_0x00010c241220(puVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar23;
        uVar26 = uVar12;
        FUN_107e2cec0(puVar23,1,1,0,0,uVar17,0,uVar11,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar17);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126bc7b8;
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126bf8f8;
        func_0x00010c2aebe0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar19;
        func_0x00010c1d0720();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar25;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar25);
        _objc_release(puVar19);
        puVar19 = PTR_PTR_1126bc7c8;
        func_0x00010bfa7220(PTR_PTR_1126bc7c8);
        _objc_retainAutoreleasedReturnValue();
        puVar25 = PTR_PTR_1126bf900;
        func_0x00010c2aec40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar25;
        func_0x00010c1d0720();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar25);
        if (((puVar13 != (undefined *)0x0) && (puVar14 != (undefined *)0x0)) &&
           (puVar16 != (undefined *)0x0)) {
          func_0x00010befa120(puVar9);
          puVar25 = puVar13;
          func_0x00010c241220(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar25);
          puVar25 = puVar13;
          func_0x00010c241220(puVar13);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = *(byte *)(param_1 + 0x78);
          uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
          func_0x00010c269d40(uVar17);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68);
          puVar15 = PTR_PTR_1126bf788;
          _objc_alloc(PTR_PTR_1126bf788);
          func_0x00010c017ba0();
          FUN_107e2b7cc(puVar23,puVar25,bVar1 & 1,puVar8,uVar17,uVar11,1,puVar15,
                        uVar26 & 0xffffffffffffff00);
          _objc_release(puVar15);
          _objc_release(uVar17);
          _objc_release(puVar25);
          puVar25 = puVar13;
          func_0x00010c241220(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar8;
          func_0x00010c0e00e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar15;
          func_0x000107e2bf14();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          _objc_release(puVar15);
          _objc_release(puVar25);
          puVar13 = PTR_PTR_1126d7f18;
          _objc_alloc(PTR_PTR_1126d7f18);
          func_0x00010c00e960();
          func_0x00010befa120(puVar7);
          _objc_release(puVar13);
          puVar13 = puVar23;
        }
        _objc_release(puVar16);
        _objc_release(puVar19);
        _objc_release(puVar14);
        _objc_release(puVar10);
        _objc_release(puVar13);
        lVar18 = lVar18 + 1;
      } while (lStack_378 != lVar18);
      lStack_378 = lVar4;
      func_0x00010bf52a60();
    } while (lStack_378 != 0);
  }
  _objc_release(lVar4);
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_107e20b68;
  uStack_1d0 = 0x107e20b78;
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1e8 = &uStack_1f0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_107e20b80;
  puStack_240 = &UNK_110a0e248;
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  puStack_1c8 = puVar13;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uStack_238 = uVar20;
  uStack_230 = uVar22;
  _objc_retain(uVar11);
  uStack_1f8 = *(undefined1 *)(param_1 + 0x78);
  uStack_228 = uVar11;
  _objc_retain(puVar8);
  puStack_220 = puVar8;
  _objc_retain(puVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  puStack_218 = puVar2;
  _objc_retain(uVar11);
  uStack_210 = uVar11;
  puStack_200 = &uStack_1f0;
  _objc_retain(puVar7);
  puStack_208 = puVar7;
  func_0x00010bf97e80(uVar17);
  func_0x00010c246ba0(puVar7);
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  _objc_retain(puVar7);
  puVar19 = puVar7;
  func_0x00010bf52a60();
  if (puVar19 != (undefined *)0x0) {
    lVar4 = *plStack_290;
    do {
      puVar25 = (undefined *)0x0;
      do {
        if (*plStack_290 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        lVar21 = *(long *)(lStack_298 + (long)puVar25 * 8);
        lVar3 = lVar21;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        if (lVar18 != 0) {
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23f220(lVar21);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar21;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(lVar3);
          _objc_release(lVar21);
          _objc_release(puVar14);
        }
        puVar25 = puVar25 + 1;
      } while (puVar19 != puVar25);
      puVar19 = puVar7;
      func_0x00010bf52a60();
    } while (puVar19 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  puVar19 = puVar7;
  func_0x00010bf529e0();
  if (puVar19 == (undefined *)0x0) {
    puVar19 = *(undefined **)(param_1 + 0x70);
    if (puVar19 != (undefined *)0x0) {
      puStack_2d0 = puVar10;
      uStack_2c8 = 0xc2000000;
      pcStack_2c0 = FUN_107e20e3c;
      puStack_2b8 = &UNK_11084aaa8;
      _objc_retain(puVar19);
      puStack_2a8 = puVar19;
      _objc_retain(puVar2);
      puStack_2b0 = puVar2;
      func_0x000100162d98("APPSTORE",&puStack_2d0);
      _objc_release(puStack_2b0);
      puVar19 = puStack_2a8;
      goto LAB_107e20a60;
    }
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf8a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + 0x30);
    puVar10 = puVar13;
    func_0x00010bf51e00();
    _objc_retain(puVar19);
    _objc_retain(puVar6);
    _objc_retain(uVar17);
    uVar20 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar20);
    uVar22 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar22);
    _objc_retain(puVar2);
    func_0x00010bdc6a40(uVar24);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(uVar22);
    _objc_release(uVar20);
    _objc_release(uVar17);
    _objc_release(puVar6);
    _objc_release(puVar19);
    _objc_release(uVar11);
    _objc_release(uVar17);
LAB_107e20a60:
    _objc_release(puVar19);
  }
  _objc_release(puVar13);
  _objc_release(puStack_208);
  _objc_release(uStack_210);
  _objc_release(puStack_218);
  _objc_release(puStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(puStack_1c8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
LAB_107e20ae0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar4 = 8;
    __Block_object_dispose(&uStack_1f0);
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 107e20b68; end: 107e20b7f;  */

void FUN_107e20b68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e20b80; end: 107e20d7b;  */

void FUN_107e20b80(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  puVar2 = param_2;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be74360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126bf8f8;
    func_0x00010c2aebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x000108dfcd80(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1d7460();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
    if (puVar6 != (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28));
      puVar2 = PTR_PTR_1126d7f18;
      _objc_alloc(PTR_PTR_1126d7f18);
      func_0x00010c00e960();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x50));
      _objc_release(puVar2);
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e20d7c; end: 107e20e3b;  */

undefined8 FUN_107e20d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf59960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 107e20e3c; end: 107e20e53;  */

void FUN_107e20e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e20e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e20e54; end: 107e21167;  */

void FUN_107e20e54(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  _objc_retain(param_3);
  puVar11 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    if (param_3 == 0) {
      puVar11 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      puStack_178 = puVar8;
      func_0x00010bf52a60();
      if (puStack_178 != (undefined *)0x0) {
        lVar6 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(puVar8);
            }
            uVar12 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
            lVar10 = *(long *)(param_1 + 0x30);
            uVar7 = uVar12;
            func_0x00010c241220(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
              if (lVar10 == 0) {
                func_0x00010bfecbe0(*(undefined8 *)(param_1 + 0x38));
              }
              else {
                func_0x00010bfecaa0();
              }
            }
            uVar7 = *(undefined8 *)(param_1 + 0x40);
            uVar3 = *(undefined8 *)(param_1 + 0x48);
            func_0x00010bf4eae0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = *(undefined8 *)(param_1 + 0x50);
            uVar2 = *(undefined8 *)(param_1 + 0x58);
            uVar4 = *(undefined8 *)(param_1 + 0x60);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c079c80();
            FUN_107e2c4bc(uVar7,uVar12,puVar11,lVar10 == 0,6,uVar3,0,uVar1,uVar2,(char)uVar5);
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(lVar10);
            puVar9 = puVar9 + 1;
          } while (puStack_178 != puVar9);
          puStack_178 = puVar8;
          func_0x00010bf52a60();
        } while (puStack_178 != (undefined *)0x0);
      }
      _objc_release(puVar8);
    }
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 != 0) {
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_107e21168;
    puStack_158 = &UNK_1108465d0;
    _objc_retain(lVar6);
    lStack_138 = lVar6;
    _objc_retain(puVar11);
    puStack_150 = puVar11;
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    puStack_148 = puVar8;
    _objc_retain(uVar7);
    uStack_140 = uVar7;
    func_0x000100162d98("APPSTORE",&puStack_170);
    _objc_release(uStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(lStack_138);
  }
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e21178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 107e21168; end: 107e2117b;  */

void FUN_107e21168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e21178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e2117c; end: 107e2138b; -[SCGalleryDataMutator saveStoryWithId:storyDisplayName:entrySource:storySnaps:isPrivate:isFromSavedMetadataMap:userContext:completionHandler:] */

void FUN_107e2117c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107e2138c;
  puStack_c8 = &UNK_110a0e2f8;
  lStack_c0 = param_1;
  _objc_retain(param_3);
  uStack_98 = param_9;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_6;
  uStack_a0 = param_8;
  uStack_88 = param_5;
  uStack_80 = param_7;
  _objc_retain(param_10);
  uStack_90 = param_10;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  ppuVar1 = &puStack_e0;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107e21418;
  puStack_118 = &UNK_1108ac288;
  uStack_f0 = param_10;
  uStack_110 = param_3;
  lStack_108 = param_1;
  uStack_100 = uVar3;
  ppuStack_f8 = ppuVar1;
  uStack_e8 = param_7;
  _objc_retain(param_10);
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_130);
  _objc_release(uStack_f0);
  _objc_release(ppuStack_f8);
  _objc_release(uStack_110);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar3);
  _objc_release(param_10);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107e2138c; end: 107e21417;  */

void FUN_107e2138c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x00010be99e60(uVar1);
  }
  else {
    func_0x00010c07b240(param_2);
    func_0x00010be0d620(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e21418; end: 107e21557;  */

void FUN_107e21418(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
     ((puVar2 == (undefined *)0x0 || (puVar3 = puVar2, func_0x00010c07b240(), (int)puVar3 == 0)))) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar2);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107e21558;
    puStack_68 = &UNK_110a0e328;
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    _objc_retain(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puStack_58 = puVar2;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x000108de5e10(&puStack_80,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uStack_48);
    _objc_release(puStack_58);
    _objc_release(uStack_50);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 107e21558; end: 107e21623;  */

void FUN_107e21558(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107e21620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0,0,param_3);
  return;
}



/* Entry: 107e21624; end: 107e21633;  */

void FUN_107e21624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e21630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e21634; end: 107e21e73; -[SCGalleryDataMutator _saveStoriesWithStoriesId:storyDisplayName:entrySource:storySnaps:isPrivate:isFromSavedMetadataMap:userContext:completionHandler:] */

void FUN_107e21634(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_330;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined1 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = param_3;
  _objc_retain(param_3);
  uStack_1f8 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar7 = *(undefined **)(param_1 + 0x38);
  puVar17 = *(undefined **)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_10;
  puVar14 = puVar17;
  func_0x000107e29e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar16 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  puVar18 = param_6;
  func_0x00010bf529e0();
  if (puVar18 < (undefined *)0x3e9) {
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_220 = param_5;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_6;
    puStack_2c0 = puVar4;
    func_0x00010be75d40(param_1);
    puVar5 = puVar18;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e0 = 0xc2000000;
      uStack_1d8 = 0x107e21e88;
      puStack_1d0 = &UNK_11084aaa8;
      _objc_retain(puVar4);
      puStack_1c0 = puVar4;
      _objc_retain(puVar16);
      iVar13 = (int)&puStack_1e8;
      puStack_1c8 = puVar16;
      func_0x000100162d98("APPSTORE");
      _objc_release(puStack_1c8);
      lVar15 = lStack_1f0;
      uVar3 = uStack_1f8;
      param_5 = puStack_1c0;
    }
    else {
      puStack_238 = param_10;
      uStack_230 = param_9;
      puStack_250 = puVar17;
      puStack_248 = puVar16;
      puStack_240 = puVar4;
      puStack_228 = param_6;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0xa0);
      puStack_260 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 3;
      if (lStack_1f0 == 0) {
        uVar3 = 1;
      }
      uStack_268 = uVar6;
      func_0x00010b6fc1b0();
      uStack_270 = 2;
      if ((int)uVar6 == 0) {
        uStack_270 = uVar3;
      }
      uStack_200 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain();
      uStack_208 = *(undefined8 *)(param_1 + 0x118);
      _objc_retain();
      puVar7 = param_1;
      func_0x00010bf8a8c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_218 = *(undefined8 *)(param_1 + 0xc0);
      puStack_258 = param_1;
      puStack_210 = puVar7;
      _objc_retain();
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(puVar18);
      puVar7 = puVar18;
      func_0x00010bf52a60();
      iVar13 = (int)puVar14;
      if (puVar7 != (undefined *)0x0) {
        lVar15 = *plStack_130;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar15) {
              _objc_enumerationMutation(puVar18);
            }
            lVar19 = *(long *)(lStack_138 + (long)puVar17 * 8);
            lVar8 = lVar19;
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar8);
            if (lVar9 != 0) {
              puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c23f220(lVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar19;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(lVar8);
              _objc_release(lVar19);
              _objc_release(puVar16);
            }
            puVar17 = puVar17 + 1;
          } while (puVar7 != puVar17);
          puVar7 = puVar18;
          func_0x00010bf52a60();
          iVar13 = (int)puVar14;
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar18);
      puStack_278 = puVar5;
      func_0x00010bf51e00();
      param_9 = uStack_230;
      puVar14 = puStack_258;
      param_5 = puStack_260;
      uVar6 = uStack_268;
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      uStack_1a8 = 0x107e21bc0;
      puStack_1a0 = &UNK_110a0e358;
      puStack_198 = puStack_260;
      puStack_190 = puStack_258;
      uStack_188 = uStack_268;
      uStack_180 = uStack_200;
      uStack_148 = param_7;
      _objc_retain(uStack_230);
      puVar4 = puStack_240;
      uStack_178 = param_9;
      puStack_170 = puStack_210;
      uStack_168 = uStack_208;
      uStack_160 = uStack_218;
      _objc_retain(puStack_240);
      puVar16 = puStack_248;
      puStack_150 = puVar4;
      _objc_retain(puStack_248);
      puStack_158 = puVar16;
      _objc_retain(uVar6);
      _objc_retain(param_5);
      lVar15 = lStack_1f0;
      uVar3 = uStack_1f8;
      puVar17 = puStack_250;
      ppuStack_288 = &puStack_1b8;
      uStack_290 = param_9;
      puStack_298 = puStack_250;
      uStack_2a4 = 0;
      uStack_2a8 = 0;
      puStack_2c0 = (undefined *)0x2;
      puVar7 = param_5;
      puStack_2b8 = puVar18;
      puStack_2b0 = puVar5;
      uStack_2a0 = param_7;
      func_0x00010bdc6a40(puVar14);
      _objc_release(puVar5);
      _objc_release(puStack_158);
      _objc_release(puStack_150);
      _objc_release(uStack_178);
      _objc_release(uStack_188);
      _objc_release(puStack_198);
      _objc_release(puStack_278);
      _objc_release(uStack_218);
      _objc_release(puStack_210);
      _objc_release(uStack_208);
      _objc_release(uStack_200);
      _objc_release(uVar6);
      param_6 = puStack_228;
      param_10 = puStack_238;
    }
    _objc_release(param_5);
    _objc_release(puVar17);
    _objc_release(puVar18);
  }
  else {
    puVar18 = puVar4;
    FUN_107e2eb08(puVar16);
    iVar13 = (int)puVar18;
    lVar15 = lStack_1f0;
    uVar3 = uStack_1f8;
    puVar18 = param_1;
  }
  _objc_release(puVar16);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(uVar3);
  lVar8 = lVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uStack_2c8 = 0x107e21bc0;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_320 = puVar18;
  puStack_318 = param_10;
  puStack_310 = param_5;
  uStack_308 = param_9;
  puStack_300 = param_6;
  puStack_2f8 = puVar16;
  uStack_2f0 = uVar3;
  lStack_2e8 = lVar15;
  puStack_2e0 = puVar4;
  puStack_2d8 = puVar17;
  puStack_2d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar17 = (undefined *)0x0;
  if (iVar13 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = (undefined *)0x0;
    if (puVar7 == (undefined *)0x0) {
      puVar16 = PTR_PTR_1126af4c0;
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      plStack_3e0 = (long *)0x0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      _objc_retain();
      puVar4 = puVar17;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar15 = *plStack_3e0;
        do {
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_3e0 != lVar15) {
              _objc_enumerationMutation(puVar17);
            }
            uVar3 = *(undefined8 *)(lStack_3e8 + (long)puVar18 * 8);
            if ((*(byte *)(lVar8 + 0x70) & 1) == 0) {
              func_0x00010bfecbe0(*(undefined8 *)(lVar8 + 0x30));
            }
            uVar6 = *(undefined8 *)(lVar8 + 0x38);
            uVar10 = *(undefined8 *)(lVar8 + 0x40);
            func_0x00010bf4eae0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = *(undefined8 *)(lVar8 + 0x48);
            uVar2 = *(undefined8 *)(lVar8 + 0x50);
            uVar11 = *(undefined8 *)(lVar8 + 0x58);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c079c80();
            FUN_107e2c4bc(uVar6,uVar3,puVar16,1,7,uVar10,0,uVar1,uVar2,(char)uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            puVar18 = puVar18 + 1;
          } while (puVar4 != puVar18);
          puVar4 = puVar17;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar17);
    }
  }
  lVar15 = *(long *)(lVar8 + 0x68);
  if (lVar15 != 0) {
    puStack_430 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_428 = 0xc2000000;
    pcStack_420 = FUN_107e21e74;
    puStack_418 = &UNK_1108465d0;
    _objc_retain(lVar15);
    lStack_3f8 = lVar15;
    _objc_retain(puVar16);
    puStack_410 = puVar16;
    _objc_retain(puVar17);
    uVar3 = *(undefined8 *)(lVar8 + 0x60);
    puStack_408 = puVar17;
    _objc_retain(uVar3);
    uStack_400 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_430);
    _objc_release(uStack_400);
    _objc_release(puStack_408);
    _objc_release(puStack_410);
    _objc_release(lStack_3f8);
  }
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e21e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar7 + 0x38) + 0x10))
            (*(long *)(puVar7 + 0x38),*(undefined8 *)(puVar7 + 0x20),*(undefined8 *)(puVar7 + 0x28),
             *(undefined8 *)(puVar7 + 0x30));
  return;
}



/* Entry: 107e21e74; end: 107e21e9f;  */

void FUN_107e21e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e21e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e21ea0; end: 107e22217; -[SCGalleryDataMutator _extendStoriesForEntry:storySnaps:isPrivate:userContext:completionHandler:] */

void FUN_107e21ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126af4d0;
  _objc_retain(param_4);
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bebdac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    if (param_7 == 0) goto LAB_107e221d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107e22218;
    puStack_78 = &UNK_110849530;
    _objc_retain(param_7);
    lStack_70 = param_7;
    func_0x000100162d98("APPSTORE",&puStack_90);
    lVar5 = lStack_70;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_7;
    func_0x000107e29e20(param_7,uVar2,uVar1,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126d7f10;
    _objc_alloc_init();
    lVar11 = lVar4;
    func_0x00010bf529e0();
    puVar8 = puVar3;
    func_0x00010bf529e0();
    if (puVar8 + lVar11 < (undefined *)0x3e9) {
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be75d40(param_1);
      puVar10 = puVar8;
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)0x0) {
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        uStack_f8 = 0x107e22490;
        puStack_f0 = &UNK_11084aaa8;
        _objc_retain(lVar5);
        lStack_e0 = lVar5;
        _objc_retain(puVar7);
        puStack_e8 = puVar7;
        func_0x000100162d98("APPSTORE",&puStack_108);
        _objc_release(puStack_e8);
        lVar11 = lStack_e0;
      }
      else {
        lVar11 = *(long *)(param_1 + 0xa0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_107e22234;
        puStack_c0 = &UNK_110858238;
        _objc_retain(param_3);
        uStack_b8 = param_3;
        lStack_b0 = param_1;
        lStack_a8 = lVar11;
        _objc_retain(lVar5);
        lStack_98 = lVar5;
        _objc_retain(puVar7);
        puStack_a0 = puVar7;
        _objc_retain(lVar11);
        func_0x00010bdccfa0(param_1);
        _objc_release(puStack_a0);
        _objc_release(lStack_98);
        _objc_release(lStack_a8);
        _objc_release(uStack_b8);
      }
      _objc_release(lVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      FUN_107e2eb08(puVar7,lVar5);
    }
    _objc_release(puVar7);
  }
  _objc_release(lVar5);
LAB_107e221d0:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107e22218; end: 107e22233;  */

void FUN_107e22218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e22230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,1,0);
  return;
}



/* Entry: 107e22234; end: 107e2247b;  */

void FUN_107e22234(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  puVar4 = (undefined *)0x0;
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = (undefined *)0x0;
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c07b240();
      puVar3 = puVar2;
      if (((ulong)puVar6 & 1) == 0) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        plStack_110 = (long *)0x0;
        _objc_retain(puVar4);
        puVar2 = puVar4;
        func_0x00010bf52a60();
        if (puVar2 != (undefined *)0x0) {
          lVar5 = *plStack_110;
          do {
            puVar6 = (undefined *)0x0;
            do {
              if (*plStack_110 != lVar5) {
                _objc_enumerationMutation(puVar4);
              }
              func_0x00010bfecbe0(*(undefined8 *)(param_1 + 0x30));
              puVar6 = puVar6 + 1;
            } while (puVar2 != puVar6);
            puVar2 = puVar4;
            func_0x00010bf52a60();
          } while (puVar2 != (undefined *)0x0);
        }
        _objc_release(puVar4);
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_107e2247c;
    puStack_148 = &UNK_1108465d0;
    _objc_retain(lVar5);
    lStack_128 = lVar5;
    _objc_retain(puVar3);
    puStack_140 = puVar3;
    _objc_retain(puVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_138 = puVar4;
    _objc_retain(uVar1);
    uStack_130 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_160);
    _objc_release(uStack_130);
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(lStack_128);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e2248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 107e2247c; end: 107e224a7;  */

void FUN_107e2247c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e2248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107e224a8; end: 107e226d3; -[SCGalleryDataMutator _snapsToAppendForAllSnaps:entrySnaps:] */

/* WARNING: Possible PIC construction at 0x000107e225e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e225ec) */
/* WARNING: Removing unreachable block (ram,0x000107e22614) */
/* WARNING: Removing unreachable block (ram,0x000107e22620) */
/* WARNING: Removing unreachable block (ram,0x000107e2262c) */
/* WARNING: Removing unreachable block (ram,0x000107e225d4) */

void FUN_107e224a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  uVar8 = uRam0000000000000000;
  if (lVar6 == 0) {
    _objc_release(param_3);
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    uVar8 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_storySnapId_1126746a8);
  return;
}



/* Entry: 107e226d4; end: 107e226e3;  */

void FUN_107e226d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storySnapId_1126746a8);
  return;
}



/* Entry: 107e226e4; end: 107e233ab; -[SCGalleryDataMutator _populateFieldsForSnapsToAppend:isPrivate:addSnapEntities:mutationInfo:dataVaultEncryption:userContext:completionHandler:] */

void FUN_107e226e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_438;
  long lStack_430;
  long lStack_3f0;
  undefined *puStack_3a8;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar18 = *plStack_240;
    do {
      if (*plStack_240 != lVar18) {
        _objc_enumerationMutation(param_3);
      }
      lVar2 = lVar2 + -1;
    } while ((lVar2 != 0) || (lVar2 = param_3, func_0x00010bf52a60(), lVar2 != 0));
  }
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar18 = lVar2;
  func_0x00010bf529e0();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e2c164(lVar18,param_6,uVar6,*(undefined8 *)(param_1 + 0x38),param_9);
  _objc_release(uVar6);
  if ((int)lVar18 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    _objc_retain(lVar2);
    lStack_3f0 = lVar2;
    func_0x00010bf52a60();
    if (lStack_3f0 != 0) {
      lVar18 = *plStack_280;
      do {
        lVar17 = 0;
        do {
          if (*plStack_280 != lVar18) {
            _objc_enumerationMutation(lVar2);
          }
          lVar22 = *(long *)(lStack_288 + lVar17 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0ef840();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
          lVar8 = lVar22;
          func_0x00010c130560(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64ac0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010c0ef880();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(lVar8);
          _objc_release(uVar6);
          _objc_release(uVar7);
          lVar8 = lVar22;
          func_0x00010c130560(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc60(puVar4);
          _objc_release(lVar8);
          lVar8 = lVar22;
          func_0x00010bf0eb40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 == 0) {
            puStack_3a8 = (undefined *)0x0;
          }
          else {
            lVar20 = lVar22;
            func_0x00010bf0eb40();
            _objc_retainAutoreleasedReturnValue();
            puStack_3a8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            lStack_190 = lVar20;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar20);
          }
          _objc_release(lVar8);
          puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = 0;
          lStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2b8 = 0;
          plStack_2c0 = (long *)0x0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          lVar8 = lVar22;
          func_0x00010bf0b860();
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar8;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar8 = lVar20;
          func_0x00010bf52a60();
          if (lVar8 != 0) {
            lVar19 = *plStack_2c0;
            do {
              lVar21 = 0;
              do {
                if (*plStack_2c0 != lVar19) {
                  _objc_enumerationMutation(lVar20);
                }
                uVar7 = *(undefined8 *)(lStack_2c8 + lVar21 * 8);
                lVar10 = lVar22;
                func_0x00010bf0b860();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar10;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar10);
                lStack_2d8 = 0;
                puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x00010bf64ae0();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lStack_2d8;
                _objc_retain(lStack_2d8);
                if (puVar5 == (undefined *)0x0 || lVar10 != 0) {
                  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_308 = 0xc2000000;
                  pcStack_300 = FUN_107e233ac;
                  puStack_2f8 = &UNK_110848ba8;
                  _objc_retain(lVar11);
                  lStack_2f0 = lVar11;
                  _objc_retain(lVar10);
                  lStack_2e8 = lVar10;
                  _objc_retain(puVar4);
                  puStack_2e0 = puVar4;
                  func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_310);
                  _objc_release(puStack_2e0);
                  _objc_release(lStack_2e8);
                  _objc_release(lStack_2f0);
                }
                puVar12 = PTR_PTR_1126c4d00;
                _objc_alloc(PTR_PTR_1126c4d00);
                func_0x00010c067ec0(uVar7);
                func_0x00010bff4360(puVar12);
                puVar13 = PTR_PTR_1126c4ba8;
                func_0x00010bf0b0e0(PTR_PTR_1126c4ba8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar13);
                _objc_release(puVar12);
                _objc_release(puVar5);
                _objc_release(lVar10);
                _objc_release(lVar11);
                lVar21 = lVar21 + 1;
              } while (lVar8 != lVar21);
              lVar8 = lVar20;
              func_0x00010bf52a60();
            } while (lVar8 != 0);
          }
          _objc_release(lVar20);
          lVar8 = lVar22;
          func_0x00010c0c6c20();
          puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
          lVar20 = 0;
          if ((uint)lVar8 < 0x1b) {
            uVar1 = 1 << (ulong)((uint)lVar8 & 0x1f);
            if ((uVar1 & 0x6c6f066) == 0) {
              if ((uVar1 & 0x1210c01) != 0) {
                lVar8 = lVar22;
                func_0x00010c0ed6e0(lVar22);
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lVar8;
                func_0x00010c0f5800();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14d020();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar20);
                _objc_release(lVar8);
                if (puVar5 == (undefined *)0x0) {
                  puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_338 = 0xc2000000;
                  uStack_330 = 0x107e233b0;
                  puStack_328 = &UNK_110841f80;
                  lStack_320 = lVar22;
                  _objc_retain(puVar4);
                  puStack_318 = puVar4;
                  func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_340);
                  _objc_release(puStack_318);
                }
                func_0x00010c0c6c20();
                lVar8 = lVar22;
                func_0x00010c15fa20();
                _objc_retainAutoreleasedReturnValue();
                lVar19 = lVar22;
                func_0x00010c246660(lVar22);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar3;
                func_0x00010bf51e00(puVar3);
                func_0x00010c247520();
                lVar21 = lVar22;
                func_0x00010c25b200();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar22;
                func_0x00010bf313a0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar10 == 0) {
                  lStack_438 = lVar22;
                  func_0x00010bf59960();
                  _objc_retainAutoreleasedReturnValue();
                }
                lVar11 = lVar22;
                func_0x00010bf59960();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0ed100();
                func_0x00010bf8b160(lVar22);
                lVar15 = lVar22;
                func_0x00010c09ea00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed740();
                lVar16 = param_1;
                func_0x00010be1b060(uVar6);
                _objc_retainAutoreleasedReturnValue();
                lVar20 = lVar16;
                func_0x00010bfbd760();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar16);
                _objc_release(lVar15);
                _objc_release(lVar11);
                if (lVar10 == 0) {
                  _objc_release(lStack_438);
                }
                _objc_release(lVar10);
                _objc_release(lVar21);
                _objc_release(puVar12);
                _objc_release(lVar19);
                _objc_release(lVar8);
                _objc_release(puVar5);
              }
            }
            else {
              _objc_autoreleasePoolPush();
              puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
              lVar20 = lVar22;
              func_0x00010c0ed6e0(lVar22);
              _objc_retainAutoreleasedReturnValue();
              uStack_348 = 0;
              func_0x00010bf64ae0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uStack_348;
              _objc_retain(uStack_348);
              _objc_release(lVar20);
              puVar12 = puVar5;
              func_0x00010c08fa60();
              if (puVar12 == (undefined *)0x0) {
                puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_378 = 0xc2000000;
                uStack_370 = 0x107e233b4;
                puStack_368 = &UNK_110848ba8;
                lStack_360 = lVar22;
                _objc_retain(uVar7);
                uStack_358 = uVar7;
                _objc_retain(puVar4);
                puStack_350 = puVar4;
                func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_380);
                _objc_release(puStack_350);
                _objc_release(uStack_358);
              }
              func_0x00010c0c6c20();
              lVar19 = lVar22;
              func_0x00010c15fa20(lVar22);
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar22;
              func_0x00010c246660(lVar22);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar3;
              func_0x00010bf51e00();
              lVar10 = lVar22;
              func_0x00010c246660();
              _objc_retainAutoreleasedReturnValue();
              FUN_107e2c3e0();
              func_0x00010c247520();
              lVar11 = lVar22;
              func_0x00010c25b200();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar22;
              func_0x00010bf313a0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar15 == 0) {
                lStack_430 = lVar22;
                func_0x00010bf59960();
                _objc_retainAutoreleasedReturnValue();
              }
              lVar16 = lVar22;
              func_0x00010bf59960();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ed100();
              lVar14 = lVar22;
              func_0x00010c09ea00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfed740();
              lVar20 = param_1;
              func_0x00010be1b080(uVar6);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar14);
              _objc_release(lVar16);
              if (lVar15 == 0) {
                _objc_release(lStack_430);
              }
              _objc_release(lVar15);
              _objc_release(lVar11);
              _objc_release(lVar10);
              _objc_release(puVar12);
              _objc_release(lVar21);
              _objc_release(lVar19);
              _objc_release(puVar5);
              _objc_release(uVar7);
              _objc_autoreleasePoolPop(lVar8);
            }
          }
          puVar5 = PTR_PTR_1126bf8f8;
          func_0x00010c2aebe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c246660(lVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010c1d7460();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(lVar22);
          _objc_release(puVar5);
          if ((lVar20 != 0) && (puVar13 != (undefined *)0x0)) {
            puVar5 = PTR_PTR_1126d7f18;
            _objc_alloc(PTR_PTR_1126d7f18);
            func_0x00010c00e960();
            func_0x00010befa120(param_5);
            _objc_release(puVar5);
          }
          _objc_release(puVar13);
          _objc_release(puVar3);
          _objc_release(puStack_3a8);
          _objc_release(lVar20);
          _objc_release(uVar9);
          lVar17 = lVar17 + 1;
        } while (lVar17 != lStack_3f0);
        lStack_3f0 = lVar2;
        func_0x00010bf52a60();
      } while (lStack_3f0 != 0);
    }
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107e233ac; end: 107e233b7;  */

void FUN_107e233ac(void)

{
  return;
}



/* Entry: 107e233b8; end: 107e234df; -[SCGalleryDataMutator _attemptToLoadVideoAtrributions:retryCount:] */

void FUN_107e233b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc();
  func_0x00010c0082a0();
  puVar3 = PTR_PTR_1126b0010;
  puVar2 = puVar1;
  func_0x000108d4ad38();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  func_0x00010c266c80(puVar3,param_2,puVar2,puVar1,&uStack_58);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010c279200(puVar1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    if (param_4 < 3) {
      func_0x00010bdd0e40(param_1,param_2,param_3,param_4 + 1);
    }
  }
  else {
    func_0x00010c29b220(PTR_PTR_1126b0010,param_2,puVar1,1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107e234e0; end: 107e23beb; -[SCGalleryDataMutator initWithUserSession:dataObjectContext:profile:cloudSync:userBlizzard:cloudFS:snapDocManager:keyService:galleryEncryptedDatabase:encryptedContentManager:memoriesSnapDocEncryptionManager:gallerySavingLogger:gallerySearch:gallerySearchIndexer:userId:memoriesMergedDataSource:memoriesSearchDatabase:galleryLogger:crashLogger:overlayFormatServices:userInfoServices:memoriesCachingMediaHelper:spectaclesServices:spectaclesAuxiliaryContentServices:featureSettingsService:memoriesExperimentService:memoriesFeaturedStoryDataMutator:performer:dreamsSessionService:circumstanceEngine:backupDependencyEntriesResolver:memoriesCSAMKeyIvSaver:backgroundTaskWrapper:unifiedAnalyticsService:memoriesStorageQuotaManager:] */

undefined8 *
FUN_107e234e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

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
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_70 = PTR_PTR_1126fb478;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_30);
    uVar2 = puVar1[1];
    puVar1[1] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[3];
    puVar1[3] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[4];
    puVar1[4] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[5];
    puVar1[5] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[6];
    puVar1[6] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7f78;
    _objc_opt_new();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    _objc_release(uVar2);
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
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



/* Entry: 107e23bec; end: 107e23ca7; -[SCGalleryDataMutator _generateEncryptedVideoSnap:metadataItems:sojuMediaType:servletMediaFormat:overlayFormat:overlay:assetMedias:timeScale:source:cameraRollId:sharedSnapId:attribution:captureTimeUtc:createTimeUtc:orientation:location:isPrivate:isInfiniteDuration:dataVaultEncryption:mutationInfo:cameraFrontFacing:externalMetadata:userContext:fireMemoriesSaveGrapheneEvents:] */

void FUN_107e23bec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be1b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107e23ca8; end: 107e23d93; -[SCGalleryDataMutator _isOKToUseEncryptedMediaFile:isPrivate:] */

bool FUN_107e23ca8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (((param_3 != 0) && (lVar2 = param_3, func_0x00010bfd9c00(), (int)lVar2 != 0)) &&
     (lVar2 = param_3, func_0x00010c07b240(), param_4 == (int)lVar2)) {
    uVar3 = *(ulong *)(param_1 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c232f00();
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    if ((uVar4 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0c4e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bfad160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar6,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar6 != (undefined *)0x0;
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar2);
      goto LAB_107e23d18;
    }
  }
  bVar1 = false;
LAB_107e23d18:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107e23d94; end: 107e23d9f; -[SCGalleryDataMutator _shouldApplyFastStartOperation:isOKToUseEncryptedMediaFile:] */

uint FUN_107e23d94(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  return (param_3 | param_4) ^ 1;
}



/* Entry: 107e23da0; end: 107e23def; -[SCGalleryDataMutator _startBgTaskIfNeeded] */

void FUN_107e23da0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInteger__112615828,uVar2);
  return;
}



/* Entry: 107e23df0; end: 107e23e5f; -[SCGalleryDataMutator _endBgTaskIfNeeded:] */

void FUN_107e23df0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c282760(param_3);
    _objc_release(param_3);
    func_0x00010bf94260(uVar2,param_2,uVar1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107e253c8; end: 107e25df3; -[SCGalleryDataMutator _addVideo:metadataItems:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:externalId:title:entryType:entrySource:autosaveTimeUtc:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:autosave:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:encryptedMediaFile:hasOptimizedForNetworkUse:externalMetadata:deviceFirmwareInfo:deviceId:userContext:mediaOrigin:completionHandler:] */

void FUN_107e253c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined *in_stack_000000b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_000000a8);
  _objc_retain(in_stack_000000b8);
  FUN_107e2ef60(*(undefined8 *)(param_1 + 0x120),&PTR____CFConstantStringClassReference_110de7678,1)
  ;
  func_0x00010bdde2c0(param_1);
  puVar1 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000107e2c03c(puVar1,uVar2,*(undefined8 *)(param_1 + 0x38),PTR___dispatch_main_q_11034be20,
                      in_stack_000000b8);
  _objc_release(uVar2);
  if ((int)puVar3 == 0) goto LAB_107e25d10;
  func_0x00010c16d4e0(puVar1);
  lVar4 = in_stack_000000a8;
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  FUN_107e2c3e0(param_21);
  lVar5 = param_1;
  func_0x00010be1b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    if (in_stack_000000b8 != (undefined *)0x0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107e25df4;
      puStack_90 = &UNK_11084aaa8;
      _objc_retain(in_stack_000000b8);
      puStack_80 = in_stack_000000b8;
      _objc_retain(puVar1);
      puStack_88 = puVar1;
      func_0x000100162d98("APPSTORE",&puStack_a8);
      _objc_release(puStack_88);
      puVar9 = puStack_80;
      goto LAB_107e25cdc;
    }
  }
  else {
    func_0x00010c08fa60();
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeb80();
    _objc_release(uVar2);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    func_0x00010b5fa33c();
    puVar7 = PTR_PTR_1126bf8f8;
    func_0x00010c2aebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c1d7460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    puVar7 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_10;
    FUN_107e2ea9c(param_10,param_24._1_1_,param_12,*(undefined8 *)(param_1 + 0x38));
    if ((int)uVar2 == 0) {
      lVar5 = lVar6;
      func_0x00010c241220(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1968c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    else {
      func_0x00010c1968c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c16d500(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185360(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c216240(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c222da0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a1e00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c196b00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b3960(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c199560(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d7f18;
    _objc_alloc();
    func_0x00010c00e960();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126d7f30;
    _objc_alloc();
    lVar5 = lVar6;
    func_0x00010c241220(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010480();
    _objc_release(puVar12);
    _objc_release(lVar5);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    lVar5 = lVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar12 = PTR_PTR_1126d7f28;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08d00(puVar1);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    _objc_retain(param_23);
    _objc_retain(in_stack_000000a8);
    _objc_retain(lVar4);
    _objc_retain(in_stack_000000b8);
    _objc_retain(puVar1);
    _objc_retain(puVar8);
    func_0x00010bf06e20(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar1);
    _objc_release(in_stack_000000b8);
    _objc_release(lVar4);
    _objc_release(in_stack_000000a8);
    _objc_release(puVar8);
    _objc_release(param_23);
    _objc_release(lVar6);
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar2);
    _objc_release(puVar10);
    _objc_release(puVar7);
LAB_107e25cdc:
    _objc_release(puVar9);
  }
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(lVar4);
LAB_107e25d10:
  _objc_release(puVar1);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000080);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e25e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),0,0,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 107e25df4; end: 107e25e0b;  */

void FUN_107e25df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e25e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e25e0c; end: 107e260ab;  */

void FUN_107e25e0c(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar6 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    FUN_107e2fce0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120),
                  &PTR____CFConstantStringClassReference_110de7678,1);
    puVar6 = PTR_PTR_1126af4d0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar6 != (undefined *)0x0) {
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar1);
      }
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      if (*(long *)(param_1 + 0x60) - 1U < 2) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010bf4eae0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x68);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf8a8c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c079c80();
        FUN_107e2c4bc(uVar7,puVar6,uVar1,1,0,uVar2,uVar9,uVar3,uVar10,(char)uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c08fa60();
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107e260ac;
    puStack_88 = &UNK_1108465d0;
    _objc_retain(lVar8);
    lStack_68 = lVar8;
    _objc_retain(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = puVar6;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = uVar2;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(lStack_68);
  }
  _objc_release(puVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 107e260ac; end: 107e26103;  */

void FUN_107e260ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e26104; end: 107e274e3; -[SCGalleryDataMutator _generateEncryptedPhotoSnap:sojuMediaType:servletMediaFormat:overlayFormat:overlay:assetMedias:source:cameraRollId:sharedSnapId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:location:isPrivate:isInfiniteDuration:dataVaultEncryption:mutationInfo:cameraFrontFacing:fireMemoriesSaveGrapheneEvents:mediaOrigin:externalMetadata:] */

void FUN_107e26104(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined4 param_5,undefined *param_6,ulong param_7,undefined *param_8,
                  ulong param_9,undefined *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined *param_15,undefined *param_16,
                  long param_17,uint param_18,undefined4 param_19,undefined *param_20,
                  undefined8 param_21,uint param_22,undefined4 param_23,undefined8 param_24)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  ulong uStack_1b0;
  uint uStack_1a4;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  puStack_200 = (undefined *)CONCAT44(puStack_200._4_4_,param_5);
  uStack_198 = param_24;
  uStack_218 = CONCAT44(uStack_218._4_4_,param_23);
  uStack_1a4 = param_22 >> 8 & 0xff;
  uStack_220 = CONCAT44(uStack_220._4_4_,param_22) & 0xffffffff000000ff;
  uStack_1c8 = param_21;
  puStack_190 = param_20;
  uStack_230 = CONCAT44(uStack_230._4_4_,param_18 >> 8) & 0xffffffff000000ff;
  uStack_210 = (undefined *)(CONCAT44(uStack_210._4_4_,param_18) & 0xffffffff000000ff);
  puStack_228 = param_16;
  puStack_1f8 = param_10;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = param_4;
  puStack_188 = param_2;
  _objc_retain(param_4);
  puStack_1c0 = param_6;
  _objc_retain(param_6);
  uStack_1b0 = param_7;
  _objc_retain(param_7);
  puStack_1b8 = param_8;
  _objc_retain(param_8);
  uStack_1d8 = param_9;
  _objc_retain(param_9);
  uStack_1e8 = param_11;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_1a0 = param_15;
  _objc_retain(param_15);
  uVar8 = uStack_1c8;
  puVar13 = puStack_1d0;
  lStack_1e0 = param_17;
  _objc_retain(param_17);
  _objc_retain(puStack_190);
  _objc_retain(uVar8);
  _objc_retain(uStack_198);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_1f0 = param_13;
  if (puVar13 == (undefined *)0x0) {
    uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ebfdb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(uVar8);
    puVar19 = (undefined *)0x0;
    uVar10 = uStack_1b0;
    goto LAB_107e27420;
  }
  dVar21 = 0.5;
  puVar4 = puVar13;
  _UIImageJPEGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar4 == (undefined *)0x0) {
    uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ebfdd8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5,puVar2,&PTR____CFConstantStringClassReference_110ebfd98,
                        0xffffffffffffffff,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(uVar8);
    puVar19 = (undefined *)0x0;
    uVar10 = uStack_1b0;
  }
  else {
    puVar19 = puStack_188;
    func_0x00010bebf8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_1a0;
    func_0x00010c26f320(puStack_1a0);
    puVar5 = puVar2;
    puStack_268 = puVar19;
    if (dVar21 <= 0.0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar19 = puStack_188;
    puVar2 = puStack_1c0;
    puVar1 = puStack_188;
    func_0x00010bdde240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_248 = puVar1;
    func_0x00010bebddc0();
    puVar2 = puVar19;
    if (uStack_1a4 != 0) {
      puVar2 = *(undefined **)(puStack_188 + 0x120);
      FUN_107e2f0d4(puVar2,&PTR____CFConstantStringClassReference_110e45258,1);
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar4;
    puStack_1c0 = puVar2;
    if ((int)uStack_210 == 0) {
      lStack_240 = 0;
    }
    else {
      lVar3 = *(long *)(puStack_188 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar3;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
      lStack_240 = lVar20;
      _objc_release(lVar3);
    }
    puVar4 = puStack_190;
    puStack_1a0 = puVar5;
    func_0x00010bf529e0();
    puVar2 = puStack_190;
    if ((puStack_1f8 == (undefined *)0x6) && (puVar4 != (undefined *)0x0)) {
      puVar4 = puStack_190;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_1c0);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puStack_238 = puVar1;
      _objc_release(puVar4);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      uStack_210 = puVar4;
      _objc_release(puVar2);
      uVar18 = 0;
      lVar20 = lStack_1e0;
      puStack_1c0 = puVar5;
    }
    else {
      puStack_130 = (undefined *)0x0;
      puStack_128 = (undefined *)0x0;
      func_0x00010c156d40(PTR_PTR_1126bec38);
      puStack_238 = puStack_128;
      _objc_retain();
      uStack_210 = puStack_130;
      _objc_retain();
      lVar20 = lStack_1e0;
      uVar18 = 0;
      if (lStack_240 != 0) {
        puStack_250 = puVar19;
        if ((puStack_1f8 < (undefined *)0x8) && ((1L << ((ulong)puStack_1f8 & 0x3f) & 0x8aU) != 0))
        {
          puVar2 = puStack_238;
          func_0x00010bf51e00(puStack_238);
          puVar4 = puVar2;
          func_0x00010bf15d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = uStack_210;
          func_0x00010bf51e00(uStack_210);
          puVar19 = puVar2;
          func_0x00010bf15d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          uVar8 = *(undefined8 *)(puStack_188 + 0x100);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14a7c0();
          _objc_release(uVar8);
          _objc_release(puVar19);
          _objc_release(puVar4);
        }
        lVar3 = lStack_240;
        lVar6 = lStack_240;
        func_0x00010bf93ec0(lStack_240);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c0646e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puStack_238;
        puVar4 = puStack_238;
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(lVar7);
        _objc_release(lVar6);
        lVar6 = lVar3;
        func_0x00010bf93ec0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0646e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = uStack_210;
        puVar5 = uStack_210;
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(lVar3);
        _objc_release(lVar6);
        uVar18 = 1;
        puVar19 = puStack_250;
        puStack_238 = puVar4;
        uStack_210 = puVar5;
      }
    }
    puStack_250 = (undefined *)CONCAT44(puStack_250._4_4_,uVar18);
    if (uStack_1a4 != 0) {
      FUN_107e2f248(*(undefined8 *)(puStack_188 + 0x120),
                    &PTR____CFConstantStringClassReference_110e45258,1);
    }
    puVar4 = PTR_PTR_1126bf910;
    func_0x00010c2aebc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf6e8;
    func_0x00010c273760(PTR_PTR_1126bf6e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216ee0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c206c40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c176e00(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c199560(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c16b8e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c179340(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185360(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c192d40((float)param_1,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a65c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a6360(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c14d7a0(puVar13);
    func_0x00010c1a7d00(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1ac2c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dca80(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar20 != 0) {
      uVar8 = *(undefined8 *)(puStack_188 + 0x70);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80();
      _objc_release(uVar8);
    }
    func_0x00010c1c4880(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1fd840(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010b5f9f38((ulong)puStack_200 & 0xffffffff);
    func_0x00010c1c5440(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206760(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010b5fb5d4(puVar19);
    func_0x00010c1c4760(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d6440(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c204680(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puStack_1b8;
    puVar19 = puStack_1b8;
    FUN_107e2b5c8();
    _objc_retainAutoreleasedReturnValue();
    uStack_260 = param_14;
    uStack_258 = param_12;
    if (puVar19 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
      func_0x00010c09e0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      _objc_retain(puVar19);
      puVar1 = puVar19;
    }
    _objc_release(puVar19);
    puStack_228 = puVar1;
    func_0x00010c2158c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c14d7c0(puVar13);
    func_0x00010c2256c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214460(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c176700(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar10 = uStack_1d8;
    FUN_107e274e4(uStack_1d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203960(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c1c4cc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1996e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 0.0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    func_0x000109023474();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar20 = *plStack_160;
      do {
        puVar19 = (undefined *)0x0;
        do {
          if (*plStack_160 != lVar20) {
            _objc_enumerationMutation(puVar2);
          }
          uVar8 = *(undefined8 *)(lStack_168 + (long)puVar19 * 8);
          func_0x00010c067fc0(uVar8);
          func_0x00010b7786fc();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126d7f88;
          _objc_alloc(PTR_PTR_1126d7f88);
          func_0x00010bff4de0();
          func_0x00010befa120(puVar1);
          _objc_release(puVar5);
          _objc_release(uVar8);
          puVar19 = puVar19 + 1;
        } while (puVar13 != puVar19);
        puVar13 = puVar2;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf51e00(puVar1);
      func_0x00010c1c4140(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uStack_1b0;
    uVar8 = uStack_1c8;
    puVar9 = uStack_210;
    puVar5 = puStack_238;
    if (uStack_1a4 != 0) {
      FUN_107e2f3bc(*(undefined8 *)(puStack_188 + 0x120),
                    &PTR____CFConstantStringClassReference_110e45258,1);
    }
    _objc_retain(puStack_208);
    uStack_218 = CONCAT44(uStack_218._4_4_,
                          (uint)(puVar5 != (undefined *)0x0 && puVar9 != (undefined *)0x0));
    if (puVar5 != (undefined *)0x0 && puVar9 != (undefined *)0x0) {
      puVar13 = PTR_PTR_1126bf908;
      _objc_alloc(PTR_PTR_1126bf908);
      func_0x00010c020a60();
      func_0x00010c195c20(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar19 = *(undefined **)(puStack_188 + 0x70);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      puStack_1f8 = puVar19;
      func_0x00010c241220(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar13;
      func_0x00010bf93d20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar19;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010c08fa60();
      puStack_200 = puVar13;
      if (puVar12 == (undefined *)0x0) {
        func_0x00010bef9540(puStack_1f8);
      }
      else {
        func_0x00010bf93d20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar13;
        func_0x00010bdc1800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        func_0x00010bef9540(puStack_1f8);
        uVar8 = uStack_1c8;
        _objc_release(puVar12);
        uVar10 = uStack_1b0;
        _objc_release(puVar13);
      }
      _objc_release(puVar9);
      _objc_release(puVar19);
      _objc_release(puVar2);
      _objc_release(puStack_1f8);
      puVar9 = uStack_210;
      puVar2 = puStack_200;
    }
    puStack_200 = puVar2;
    puVar13 = puStack_1d0;
    if (uStack_1a4 != 0) {
      FUN_107e2f530(*(undefined8 *)(puStack_188 + 0x120),
                    &PTR____CFConstantStringClassReference_110e45258,1);
    }
    puVar2 = puStack_188;
    dVar23 = 0.0;
    puVar19 = puStack_208;
    dVar22 = dVar21;
    if ((int)uStack_218 != 0) {
      uVar10 = *(ulong *)(puStack_188 + 0xd8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c232f00();
      _objc_release(uVar10);
      puVar19 = puStack_208;
      puVar5 = puStack_238;
      uVar10 = uStack_1b0;
      puVar9 = uStack_210;
      dVar22 = dVar21;
      if ((uVar11 & 1) == 0) {
        _CACurrentMediaTime();
        puVar12 = *(undefined **)(puVar2 + 0x78);
        dVar22 = dVar21;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puStack_208;
        puVar9 = uStack_210;
        puVar5 = puStack_238;
        puVar19 = puVar12;
        func_0x00010c156cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar12);
        uVar10 = uStack_1b0;
        dVar23 = dVar21;
      }
    }
    puVar2 = puStack_268;
    puStack_1f8 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      func_0x00010be097a0(puStack_188);
      puVar19 = (undefined *)0x0;
    }
    else {
      func_0x00010c08fa60();
      func_0x00010bf08d00(uVar8);
      func_0x00010c169d20(uVar8);
      if ((uStack_1a4 != 0) &&
         (FUN_107e2f6a4(*(undefined8 *)(puStack_188 + 0x120),
                        &PTR____CFConstantStringClassReference_110e45258,1), dVar23 != 0.0)) {
        _CACurrentMediaTime();
        FUN_107e2f98c(dVar22 - dVar23,*(undefined8 *)(puStack_188 + 0x120),
                      &PTR____CFConstantStringClassReference_110e45258);
      }
      puVar13 = *(undefined **)(puStack_188 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      func_0x00010c27a620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010bfad160(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_178 = 0;
      puVar19 = puStack_1f8;
      func_0x00010c14e080();
      uVar11 = uStack_178;
      _objc_retain(uStack_178);
      _objc_release(puVar13);
      uVar8 = uStack_1c8;
      uStack_210 = puVar2;
      if (((ulong)puVar19 & 1) == 0) {
        func_0x00010c196ee0(uStack_1c8);
        puVar2 = puStack_268;
        func_0x00010be097a0(puStack_188);
        puVar19 = (undefined *)0x0;
        puVar13 = puStack_1d0;
      }
      else {
        func_0x00010c182c60(puVar2);
        if (uStack_1a4 != 0) {
          FUN_107e2f9f8(*(undefined8 *)(puStack_188 + 0x120),
                        &PTR____CFConstantStringClassReference_110e45258,1);
        }
        uVar14 = *(ulong *)(puStack_188 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c27a620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        uVar14 = uVar10;
        func_0x00010bf1d1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = 0;
        if ((int)uStack_218 != 0) {
          uVar16 = *(ulong *)(puStack_188 + 0xd8);
          uStack_218 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar16;
          func_0x00010c232f00();
          _objc_release(uVar16);
          if ((uVar14 & 1) == 0) {
            uVar17 = *(ulong *)(puStack_188 + 0x78);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uStack_218;
            uVar16 = uVar17;
            func_0x00010c156cc0();
            _objc_retainAutoreleasedReturnValue();
            uStack_220 = uVar16;
            _objc_release(uVar14);
            _objc_release(uVar17);
            uVar18 = 1;
            uVar14 = uStack_220;
          }
          else {
            uVar18 = 0;
            uVar14 = uStack_218;
          }
        }
        uStack_218 = uVar14;
        if (uVar14 == 0) {
          uStack_220 = uVar11;
LAB_107e2718c:
          puVar13 = puStack_1d0;
          func_0x00010c08fa60();
          uVar8 = uStack_1c8;
          func_0x00010bf08d00(uStack_1c8);
          func_0x00010c169d20(uVar8);
          uStack_270 = *(undefined8 *)(puStack_188 + 0xd8);
          uVar11 = uStack_1d8;
          FUN_107e2d6ec(uStack_1d8,uVar8,puStack_200,puVar5,puVar9,lStack_240,
                        *(undefined8 *)(puStack_188 + 0x58),*(undefined8 *)(puStack_188 + 0x78));
          puVar2 = puStack_268;
          if ((uVar11 & 1) == 0) {
            func_0x00010be097a0(puStack_188);
            puVar19 = (undefined *)0x0;
          }
          else {
            if (uStack_1a4 != 0) {
              FUN_107e2fb6c(*(undefined8 *)(puStack_188 + 0x120),
                            &PTR____CFConstantStringClassReference_110e45258,1);
            }
            uVar14 = *(ulong *)(puStack_188 + 0x58);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar14;
            func_0x00010befb560();
            _objc_release(uVar14);
            if ((uVar11 & 1) == 0) {
              puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c196ee0(uVar8);
              _objc_release(puVar2);
            }
            func_0x00010c11bda0(uStack_210);
            if (uStack_218 != 0) {
              func_0x00010c11bda0(uVar15);
            }
            puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
            func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c104980();
            _objc_release(puVar2);
            puVar2 = PTR_PTR_1126d7f70;
            _objc_alloc(PTR_PTR_1126d7f70);
            func_0x00010c026be0();
            puVar13 = puStack_200;
            func_0x00010c241220(puStack_200);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_190);
            _objc_release(puVar13);
            _objc_release(puVar2);
            puVar2 = puStack_268;
            func_0x00010be097a0(puStack_188);
            puVar19 = PTR_PTR_1126d7f80;
            _objc_alloc(PTR_PTR_1126d7f80);
            func_0x00010c017160();
            puVar13 = puStack_1d0;
          }
        }
        else {
          puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,uVar18);
          uStack_230 = uVar15;
          func_0x00010bfad160(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uStack_180 = uVar11;
          func_0x00010c14e080();
          uVar16 = uStack_180;
          _objc_retain(uStack_180);
          _objc_release(uVar11);
          _objc_release(uVar15);
          uVar15 = uStack_230;
          uStack_220 = uVar16;
          if ((uVar14 & 1) != 0) {
            func_0x00010c182c60(uStack_230);
            goto LAB_107e2718c;
          }
          func_0x00010c11bda0(puVar2);
          uVar8 = uStack_1c8;
          func_0x00010c196ee0(uStack_1c8);
          puVar2 = puStack_268;
          func_0x00010be097a0(puStack_188);
          puVar19 = (undefined *)0x0;
          puVar13 = puStack_1d0;
          uVar15 = uStack_230;
        }
        _objc_release(uStack_218);
        _objc_release(uVar15);
        uVar11 = uStack_220;
      }
      _objc_release(uVar11);
      _objc_release(uStack_210);
    }
    _objc_release(puStack_1f8);
    _objc_release(puStack_200);
    _objc_release(puVar1);
    _objc_release(puStack_228);
    _objc_release(puVar4);
    _objc_release(lStack_240);
    _objc_release(puStack_1c0);
    _objc_release(puVar9);
    puStack_1c0 = puStack_248;
    puVar4 = puStack_208;
    param_12 = uStack_258;
    param_14 = uStack_260;
  }
  _objc_release(puVar5);
LAB_107e27420:
  lVar20 = lStack_1e0;
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uStack_198);
  _objc_release(uVar8);
  _objc_release(puStack_190);
  _objc_release(lVar20);
  _objc_release(puStack_1a0);
  _objc_release(param_14);
  _objc_release(uStack_1f0);
  _objc_release(param_12);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1d8);
  _objc_release(puStack_1b8);
  _objc_release(uVar10);
  _objc_release(puStack_1c0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lStack_288 = lVar20;
    pcStack_278 = FUN_107e274e4;
    puStack_290 = puVar4;
    puStack_280 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar2 = puVar13;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puStack_2b8 = &uStack_2c0;
      uStack_2c0 = 0;
      uStack_2b0 = 0x3032000000;
      pcStack_2a8 = FUN_107e28f28;
      uStack_2a0 = 0x107e28f38;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_298 = puVar2;
      func_0x00010bf97ce0(puVar13);
      puVar19 = (undefined *)puStack_2b8[5];
      func_0x00010bf51e00(puVar19);
      __Block_object_dispose(&uStack_2c0,8);
      _objc_release(puStack_298);
    }
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 107e274e4; end: 107e275e3;  */

void FUN_107e274e4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_107e28f28;
    uStack_30 = 0x107e28f38;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_28 = puVar2;
    func_0x00010bf97ce0(param_1);
    uVar3 = puStack_48[5];
    func_0x00010bf51e00(uVar3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(puStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107e275e4; end: 107e27f4f; -[SCGalleryDataMutator _addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:externalId:title:entryType:entrySource:autosaveTimeUtc:captureTimeUtc:createTimeUtc:orientation:duration:isInfiniteDuration:overlayFormat:overlay:assetMedias:location:isPrivate:autosave:saveSource:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:completionHandler:] */

void FUN_107e275e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined *in_stack_00000098;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000098);
  FUN_107e2ef60(*(undefined8 *)(param_2 + 0x120),&PTR____CFConstantStringClassReference_110e45258,1)
  ;
  func_0x00010bdde2c0(param_2);
  puVar1 = PTR_PTR_1126d7f10;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000107e2c03c(puVar1,uVar2,*(undefined8 *)(param_2 + 0x38),PTR___dispatch_main_q_11034be20,
                      in_stack_00000098);
  _objc_release(uVar2);
  if ((int)puVar3 == 0) goto LAB_107e27e88;
  func_0x00010c16d4e0(puVar1);
  lVar4 = in_stack_00000088;
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010be1b060(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    if (in_stack_00000098 != (undefined *)0x0) {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107e27f50;
      puStack_a0 = &UNK_11084aaa8;
      _objc_retain(in_stack_00000098);
      puStack_90 = in_stack_00000098;
      _objc_retain(puVar1);
      puStack_98 = puVar1;
      func_0x000100162d98("APPSTORE",&puStack_b8);
      _objc_release(puStack_98);
      puVar9 = puStack_90;
      goto LAB_107e27e60;
    }
  }
  else {
    lVar5 = param_4;
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeb80();
    _objc_release(uVar2);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    func_0x00010b5fa33c();
    puVar7 = PTR_PTR_1126bf8f8;
    func_0x00010c2aebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c1d7460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    puVar7 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_10;
    FUN_107e2ea9c(param_10,in_stack_00000068._1_1_,param_12,*(undefined8 *)(param_2 + 0x38));
    if ((int)uVar2 == 0) {
      lVar5 = lVar6;
      func_0x00010c241220(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1968c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    else {
      func_0x00010c1968c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c16d500(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c185360(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c216240(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c222da0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a1e00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c196b00(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b3960(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c199560(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d7f18;
    _objc_alloc();
    func_0x00010c00e960();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126d7f30;
    _objc_alloc();
    lVar5 = lVar6;
    func_0x00010c241220(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010480();
    _objc_release(puVar12);
    _objc_release(lVar5);
    if (lVar4 != 0) {
      func_0x00010c08fa60(lVar4);
    }
    lVar5 = lVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar12 = PTR_PTR_1126d7f28;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a1e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    uVar15 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08d00(puVar1);
    uVar16 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    _objc_retain(in_stack_00000060);
    _objc_retain(in_stack_00000088);
    _objc_retain(lVar4);
    _objc_retain(in_stack_00000098);
    _objc_retain(puVar1);
    _objc_retain(puVar8);
    func_0x00010bf06e20(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar1);
    _objc_release(in_stack_00000098);
    _objc_release(lVar4);
    _objc_release(in_stack_00000088);
    _objc_release(puVar8);
    _objc_release(in_stack_00000060);
    _objc_release(lVar6);
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar2);
    _objc_release(puVar10);
    _objc_release(puVar7);
LAB_107e27e60:
    _objc_release(puVar9);
  }
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(lVar4);
LAB_107e27e88:
  _objc_release(puVar1);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e27f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x28) + 0x10))
            (*(long *)(param_4 + 0x28),0,0,*(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 107e27f50; end: 107e27f67;  */

void FUN_107e27f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e27f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e27f68; end: 107e28207;  */

void FUN_107e27f68(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar6 = (undefined *)0x0;
  if ((param_2 != 0) && (param_3 == 0)) {
    FUN_107e2fce0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120),
                  &PTR____CFConstantStringClassReference_110e45258,1);
    puVar6 = PTR_PTR_1126af4d0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar6 != (undefined *)0x0) {
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecbe0();
        _objc_release(uVar1);
      }
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a80(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      if (*(long *)(param_1 + 0x60) - 1U < 2) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010bf4eae0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x68);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf8a8c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118);
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c079c80();
        FUN_107e2c4bc(uVar7,puVar6,uVar1,1,0,uVar2,uVar9,uVar3,uVar10,(char)uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c08fa60();
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107e28208;
    puStack_88 = &UNK_1108465d0;
    _objc_retain(lVar8);
    lStack_68 = lVar8;
    _objc_retain(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = puVar6;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = uVar2;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(lStack_68);
  }
  _objc_release(puVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 107e28208; end: 107e2825f;  */

void FUN_107e28208(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e28260; end: 107e285b3; -[SCGalleryDataMutator _addEntryWithEntryId:externalId:title:autosaveTimeUtc:entryType:entrySource:viewType:addSnapEntities:snapsOrder:seenInCarousel:snapsViewed:isPrivate:dataVaultEncryption:userContext:completionHandler:] */

void FUN_107e28260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_19);
  _objc_retain(param_18);
  uVar3 = param_17;
  _objc_retain();
  iVar2 = (int)uVar3;
  func_0x00010b6fc1b0();
  uVar3 = param_11;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf59960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar5,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_11;
  func_0x00010c0b8620(param_11,param_2,&PTR___NSConcreteGlobalBlock_110a0e458,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189c00(puVar5,param_2,uVar3);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar5,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c1968c0(puVar5,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c199560(puVar5,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar5,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = 2;
  if (iVar2 == 0) {
    uVar1 = param_7;
  }
  func_0x00010c1a1e00(puVar5,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c222da0(puVar5,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar5,param_2,param_15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c216240(puVar5,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2062e0(puVar5,param_2,param_12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f9e80(puVar5,param_2,param_13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063c0(puVar5,param_2,param_14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_6 != 0) {
    func_0x00010c16d500(puVar5,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdccfa0(param_1,param_2,puVar6,param_11,0,param_17,param_12,param_18,param_19);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e285b4; end: 107e285bb;  */

void FUN_107e285b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107e285bc; end: 107e289b7; -[SCGalleryDataMutator _placeholderForPhotoAsset:mediaURL:orientation:creationDate:isPrivate:creatorUserId:sharedSnapId:multiSnapGroupId:attribution:source:dataVaultEncryption:mutationInfo:userContext:] */

void FUN_107e285bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 in_stack_fffffffffffffee0;
  undefined4 in_stack_fffffffffffffee8;
  ushort uVar8;
  
  uVar8 = (ushort)((uint)in_stack_fffffffffffffee8 >> 0x10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  lVar7 = param_4;
  func_0x00010c0c6c20();
  lVar5 = param_4;
  if (lVar7 == 1) {
    func_0x00010b6fc1b0();
    if ((int)lVar7 == 0) {
LAB_107e286ec:
      uVar6 = 0;
    }
    else {
      func_0x00010b6fc1a4();
      if (5 < lVar7 - 1U) goto LAB_107e286ec;
      uVar6 = *(undefined4 *)(&UNK_10dee78b0 + (lVar7 - 1U) * 4);
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = -0x56036f34;
    func_0x00010b77c6b4(0xffffffffa9fc90cc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a7e0(PTR_PTR_1126b6600);
    lVar4 = param_4;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b060(param_1,param_2,param_3,puVar2,uVar6,lVar3,0,0,0,param_13,lVar5,param_10,
                        param_12,param_7,param_7,param_6,lVar4,
                        CONCAT71((int7)((ulong)in_stack_fffffffffffffed0 >> 8),param_8) &
                        0xffffffffffff00ff,param_14,param_15,(ulong)uVar8 << 0x10,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010bfbd760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    param_2 = lVar4;
  }
  else {
    lVar7 = param_4;
    func_0x00010c0c6c20();
    if (lVar7 != 2) {
      lVar7 = 0;
      goto LAB_107e28948;
    }
    puVar1 = (undefined *)0xffffffff9f128b37;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010b6fc1b0();
    if ((int)puVar2 == 0) {
LAB_107e2881c:
      uVar6 = 1;
    }
    else {
      func_0x00010b6fc1a4();
      if ((undefined *)0x5 < puVar2 + -1) goto LAB_107e2881c;
      uVar6 = *(undefined4 *)(&UNK_10dee78c8 + (long)(puVar2 + -1) * 4);
    }
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b0a0(0x3ff0000000000000,param_2,param_3,puVar2,0,uVar6,puVar1,0,0,0,param_13,
                        lVar3,param_10,param_11,param_12,param_7,param_7,param_6,lVar5,
                        CONCAT71((int7)((ulong)in_stack_fffffffffffffee0 >> 8),param_8) &
                        0xffffffffffff00ff,param_14,param_15,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010bfbd760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_107e28948:
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107e289b8; end: 107e28f27; -[SCGalleryDataMutator _appendByteSizeOperationsForEntry:addSnapEntities:fromFailedEntry:dataVaultEncryption:snapsOrder:userContext:completionHandler:] */

void FUN_107e289b8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_9;
  _objc_retain();
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 1;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_107e28f28;
  uStack_140 = 0x107e28f38;
  uStack_138 = 0;
  _dispatch_group_create();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  _objc_retain(param_4);
  lVar10 = param_4;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar11 = *plStack_190;
    do {
      lVar13 = 0;
      do {
        if (*plStack_190 != lVar11) {
          _objc_enumerationMutation(param_4);
        }
        uVar12 = *(undefined8 *)(lStack_198 + lVar13 * 8);
        _dispatch_group_enter(uVar1);
        puVar2 = PTR_PTR_1126d7f30;
        _objc_alloc(PTR_PTR_1126d7f30);
        uVar9 = uVar12;
        func_0x00010c23f220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c010480(puVar2);
        _objc_release(uVar3);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar9);
        uVar9 = uVar12;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_108 = uVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar9);
        puVar5 = PTR_PTR_1126d7f28;
        func_0x00010bf5a1e0(PTR_PTR_1126d7f28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0xf8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_110 = uVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010bfc4ac0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        pcStack_1c8 = FUN_107e28f40;
        puStack_1c0 = &UNK_11098dc48;
        puStack_1b0 = &uStack_130;
        puStack_1a8 = &uStack_160;
        _objc_retain(uVar1);
        uStack_1b8 = uVar1;
        func_0x00010bf06e40(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uStack_1b8);
        _objc_release(uVar9);
        _objc_release(uVar12);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = param_4;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_4);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_107e28fd0;
  puStack_1f8 = &UNK_110849cb0;
  puStack_1e8 = &uStack_130;
  uStack_1f0 = param_9;
  puStack_1e0 = &uStack_160;
  _objc_retain();
  func_0x000100bc0718(uVar1,uVar9,&puStack_210);
  _objc_release(uVar9);
  _objc_release(uStack_1f0);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  _objc_release(param_9);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  lVar10 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 107e28f28; end: 107e28f3f;  */

void FUN_107e28f28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e28f40; end: 107e28fcf;  */

void FUN_107e28f40(long param_1,undefined1 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (*(char *)(lVar3 + 0x18) == '\x01') {
    uVar2 = uVar1;
  }
  *(undefined1 *)(lVar3 + 0x18) = uVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar3 = param_3;
  if (*(long *)(lVar5 + 0x28) != 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e28fd0; end: 107e28ff3;  */

void FUN_107e28fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e28ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 107e28ff4; end: 107e296b3; -[SCGalleryDataMutator _createSnapWithSnapId:mediaId:duration:source:height:width:overlayFormat:overlay:sojuMediaType:servletMediaFormat:sojuMediaFormat:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:assetMedias:mediaOrigin:externalMetadata:snapEncryption:] */

void FUN_107e28ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
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
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  puVar1 = (undefined8 *)PTR_PTR_1126bf910;
  func_0x00010c2aebc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf6e8;
  func_0x00010c273760(PTR_PTR_1126bf6e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c206c40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c176e00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c97e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c199560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c179340(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c185360(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192d40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a6360(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a7d00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1c4880(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1fd840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b5f9f38(in_stack_00000008);
  func_0x00010c1c5440(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206760(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010b5fb5d4(in_stack_00000018);
  func_0x00010c1c4760(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d6440(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c204680(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = in_stack_00000000;
  FUN_107e2b5c8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  _objc_release(puVar2);
  func_0x00010c2158c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2256c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214460(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c176700(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c18c900(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c4cc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1996e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = in_stack_00000078;
  FUN_107e274e4(in_stack_00000078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203960(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (in_stack_00000090 != 0) {
    func_0x00010c195c20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = in_stack_00000000;
  func_0x000109023474();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_140;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_130;
    do {
      puVar9 = (undefined *)0x0;
      puVar7 = puVar5;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        puVar5 = *(undefined8 **)(lStack_138 + (long)puVar9 * 8);
        func_0x00010c067fc0();
        FUN_107e2e020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar9 = puVar9 + 1;
        puVar7 = puVar5;
      } while (puVar3 != puVar9);
      puVar7 = &uStack_140;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000000);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    puVar5 = puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0xffffffff9f128b37;
      func_0x00010b77c6b4(0xffffffff9f128b37);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = 0;
    func_0x00010b77c6b4(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(puVar5);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


