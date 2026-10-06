/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070ef258; end: 1070ef4eb; -[PreviewViewController _containsBurnInEffects] */

ulong FUN_1070ef258(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar1 = param_1;
  func_0x00010c112180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ea80();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c094ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c077380();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x0001070c5bf0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010befec80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c06bcc0();
      if ((uVar10 & 1) == 0) {
        uVar10 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x0001070c5bf0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0f7f60();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c079d60();
        if ((uVar14 & 1) == 0) {
          uVar14 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x0001070c5bf0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010bf5ce40();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c07c2e0();
          if ((uVar18 & 1) == 0) {
            func_0x00010bfa3600();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = param_1;
            func_0x00010c23fc40();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar18;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar19;
            func_0x00010befeb60();
            _objc_release(uVar19);
            _objc_release(uVar18);
            _objc_release(param_1);
          }
          else {
            uVar20 = 1;
          }
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
        }
        else {
          uVar20 = 1;
        }
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
      }
      else {
        uVar20 = 1;
      }
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      uVar20 = 1;
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar20 = 1;
  }
  _objc_release(uVar1);
  return uVar20;
}



/* Entry: 1070ef4ec; end: 1070ef8ab; -[PreviewViewController _saveBatchCaptureSnapsChangeWithSavedToken:gallerySavingEventId:captureSessionId:completion:] */

void FUN_1070ef4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fa80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fac0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16ae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c09e0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070ef8ac;
  puStack_98 = &UNK_11098e718;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = param_1;
  uStack_88 = uVar5;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_3;
  uStack_68 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar5);
  ppuVar6 = &puStack_b0;
  _objc_retainBlock(ppuVar6);
  uVar1 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efea0(uVar1,param_2,uVar4,ppuVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(ppuVar6);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar5);
  return;
}



/* Entry: 1070ef8ac; end: 1070ef98b;  */

void FUN_1070ef8ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010be8ea40(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1070ef98c; end: 1070ef99f;  */

void FUN_1070ef98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001070ef99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20),param_4,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070ef9a0; end: 1070f0257; -[PreviewViewController _saveSingleVideoSnap:previewBlob:videoTranscodingLoadingIndicator:overlayFormat:gallerySnapOverlay:cloudSyncTriggerSource:dismissOnSave:gallerySavingEventId:captureSessionId:savedToken:saveCompletionBlock:] */

void FUN_1070ef9a0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar22 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar22;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar22);
  uVar22 = param_1;
  func_0x00010c112180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar22;
  func_0x00010c27eaa0();
  _objc_release(uVar22);
  if ((uVar2 & 1) == 0) {
    uVar22 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar22;
    func_0x0001070c5a88();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8c440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf3e220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_DAT_1126a5938;
    _objc_retain(param_6);
    uVar12 = param_6;
    func_0x00010010fab4(param_6,puVar19);
    uVar1 = param_6;
    if ((int)uVar12 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    uVar13 = param_1;
    func_0x00010c1111c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf008e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_1;
    func_0x00010c1111c0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf00140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed740();
    puVar19 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar20 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1070f0258;
    puStack_a8 = &UNK_11098e5a8;
    uStack_80 = param_9;
    uStack_a0 = param_1;
    _objc_retain(param_14);
    uStack_88 = param_14;
    _objc_retain(param_13);
    uStack_98 = param_13;
    _objc_retain(param_4);
    uStack_90 = param_4;
    func_0x00010c131240(uVar4);
    _objc_release(uVar1);
    _objc_release(puVar19);
    _objc_release(puVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar22);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_88);
    goto LAB_1070f01a4;
  }
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_1070ced0c;
  uStack_d0 = 0x1070ced1c;
  uVar22 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar22;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar2;
  _objc_release(uVar22);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1070ced0c;
  uStack_100 = 0x1070ced1c;
  _objc_retain(param_4);
  uVar22 = param_1;
  uStack_f8 = param_4;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar22;
  func_0x00010c29a9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar22);
  uVar22 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar22;
  func_0x00010c29a9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar22);
  uVar22 = uVar4;
  func_0x00010c0818c0();
  uVar2 = uVar3;
  func_0x00010c0818a0();
  if ((int)uVar2 == 0) {
    if ((int)uVar22 != 0) goto LAB_1070eff6c;
LAB_1070eff84:
    uVar22 = 0;
  }
  else {
    uVar2 = uVar3;
    func_0x00010c0778e0();
    if ((uVar22 & 1) == 0) {
      if ((int)uVar2 == 0) goto LAB_1070eff84;
      uVar22 = uVar3;
      func_0x00010c100500();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_1070eff6c:
      uVar22 = uVar4;
      func_0x00010c27c960();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1070f02d4;
  puStack_1a0 = &UNK_11098e778;
  _objc_retain(param_5);
  uStack_198 = param_5;
  uStack_190 = param_1;
  _objc_retain(param_3);
  puStack_138 = &uStack_f0;
  uStack_188 = param_3;
  _objc_retain(uVar22);
  uStack_180 = uVar22;
  _objc_retain(param_6);
  uStack_178 = param_6;
  _objc_retain(param_7);
  puStack_130 = &uStack_120;
  uStack_170 = param_7;
  _objc_retain(param_8);
  uStack_168 = param_8;
  _objc_retain(param_11);
  uStack_160 = param_11;
  _objc_retain(param_12);
  uStack_158 = param_12;
  _objc_retain(uVar6);
  uStack_128 = param_9;
  uStack_150 = uVar6;
  _objc_retain(param_14);
  uStack_140 = param_14;
  _objc_retain(param_13);
  uStack_148 = param_13;
  ppuVar21 = &puStack_1b8;
  _objc_retainBlock();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(ppuVar21);
  func_0x00010c279e00(param_1);
  _objc_release(ppuVar21);
  _objc_release(param_13);
  _objc_release(param_14);
  _objc_release(ppuVar21);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_198);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
LAB_1070f01a4:
  _objc_release(uVar6);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070f0258; end: 1070f02d3;  */

void FUN_1070f0258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001070f02d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070f02d4; end: 1070f067b;  */

void FUN_1070f02d4(long param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf124c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb3dc0();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf3e220();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_DAT_1126a5938;
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar20);
  uVar13 = uVar20;
  func_0x00010010fab4(uVar20,puVar18);
  uVar1 = uVar20;
  if ((int)uVar13 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar20);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar14;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar13;
  func_0x00010bf008e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf00140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfed740();
  puVar18 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  uVar21 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar21);
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar22);
  func_0x00010c131260(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar20);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar22);
  _objc_release(uVar21);
  return;
}



/* Entry: 1070f067c; end: 1070f06ff;  */

void FUN_1070f067c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c244100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001070f06fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  return;
}



/* Entry: 1070f0700; end: 1070f07a3;  */

void FUN_1070f0700(long param_1,long param_2)

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
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),7);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  return;
}



/* Entry: 1070f07a4; end: 1070f0913;  */

void FUN_1070f07a4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = param_2;
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  else {
    if (*(char *)(param_1 + 0x50) == '\x01') {
      puVar1 = *(undefined **)(param_1 + 0x20);
      func_0x00010c244100(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7a2e0();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf46560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,uVar4,*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f0914; end: 1070f0ae7; -[PreviewViewController _getOverlaysForGalleryWithTimeRanges:gallerySnapOverlay:overlayFormat:multiSnapDrawingCache:completion:] */

void FUN_1070f0914(undefined *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 0) {
    puVar2 = param_1;
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d2180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0efee0(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        if (param_5 == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar3);
        }
        else {
          func_0x00010befa120(puVar2);
        }
        func_0x00010befa120(param_1);
        uVar6 = uVar6 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
      } while (uVar6 < uVar1);
    }
    (**(code **)(param_7 + 0x10))(param_7,puVar2,param_1);
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f0ae8; end: 1070f0c4f; -[PreviewViewController _savedTooltipWithSaveToCameraRoll:] */

void FUN_1070f0ae8(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d080();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    func_0x00010c149f40();
    if ((param_3 == 0) || ((int)param_1 == 0)) {
      if (param_3 == 0) {
        func_0x000108edf050();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108edee28();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000108edee40();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = puVar3;
    func_0x00010c0df340();
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar1 < (undefined *)0x2) {
      func_0x000108ede5e8();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar1;
    }
    else {
      func_0x000108edea98();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df340();
      func_0x00010c14de00(param_1,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1070f0c50; end: 1070f0ca3; -[PreviewViewController saveAssetChangesAsNewCopy:] */

void FUN_1070f0c50(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1070f0ca4;
  puStack_28 = &UNK_110857498;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bdde120(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 1070f0ca4; end: 1070f0d67;  */

void FUN_1070f0ca4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  if (param_2 != 0) {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = *(undefined1 *)(param_1 + 0x28);
    func_0x00010c149f80(uVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1070f0d68; end: 1070f0fcb;  */

void FUN_1070f0d68(long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar8 = lVar2;
    if (param_2 == 0) {
      lVar7 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar7);
      func_0x00010beff600(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df8544();
    }
    else {
      func_0x00010c10a100();
      lVar7 = lVar2;
      func_0x00010c13b540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x0001070c4598();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7700();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c15df80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5140();
      _objc_release(lVar3);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c15df80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0afc20();
      _objc_release(lVar3);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010bfa3600(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c242ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ea20();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar7);
      cVar1 = *(char *)(param_1 + 0x28);
      func_0x00010c244100(lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (cVar1 == '\x01') {
        func_0x00010c1122e0();
      }
      else {
        func_0x00010c112300();
      }
    }
    _objc_release(lVar8);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f0fcc; end: 1070f16c7; -[PreviewViewController saveAssetChangesAsNewCopy:completionHandler:] */

void FUN_1070f0fcc(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010beb7c40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bf4c420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b92c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b92e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(ppuVar2);
  puVar9 = PTR_PTR_1126d4bf8;
  _objc_alloc_init(PTR_PTR_1126d4bf8);
  func_0x00010c0d7160();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070f16c8;
  puStack_98 = &UNK_110866910;
  _objc_retain(ppuVar1);
  ppuStack_90 = ppuVar1;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(ppuVar4);
  ppuVar7 = &puStack_b0;
  ppuStack_88 = ppuVar4;
  _objc_retainBlock();
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c075020();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if ((int)ppuVar6 == 0) {
    ppuVar3 = ppuVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010c0830e0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((int)ppuVar6 == 0) {
      (*(code *)ppuVar7[2])(ppuVar7,0);
    }
    else {
      ppuVar2 = param_1;
      func_0x00010c0d2440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 == (undefined **)0x0) {
        func_0x00010c13b420(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_1;
        func_0x00010bf9d440();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar7);
        _objc_retain(ppuVar4);
        _objc_retain(ppuVar5);
        func_0x00010c29bba0(ppuVar2);
        _objc_release(ppuVar2);
        _objc_release(param_1);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
      }
      else {
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_1;
        func_0x00010c0d20c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar7);
        _objc_retain(ppuVar4);
        _objc_retain(ppuVar5);
        func_0x00010bf9cf00(ppuVar3);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(param_1);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
      }
      _objc_release(ppuVar7);
    }
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c600();
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    ppuVar2 = param_1;
    func_0x00010bfd4160();
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_1;
    func_0x00010bf9d440();
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar2 == 0) {
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar5);
      _objc_retain(ppuVar7);
      _objc_retain(ppuVar3);
      func_0x00010bfe9420(ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(param_1);
      _objc_release(ppuVar7);
      _objc_release(ppuVar3);
      _objc_release(ppuVar5);
      ppuVar2 = ppuVar4;
    }
    else {
      _objc_retain(ppuVar7);
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar5);
      _objc_retain(ppuVar3);
      func_0x00010c29a0e0(ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(param_1);
      _objc_release(ppuVar3);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      ppuVar2 = ppuVar7;
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuStack_88);
  _objc_release(uStack_80);
  _objc_release(ppuStack_90);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1070f16c8; end: 1070f177f;  */

void FUN_1070f16c8(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070f1780;
  puStack_58 = &UNK_110864938;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  return;
}



/* Entry: 1070f1780; end: 1070f17af;  */

void FUN_1070f1780(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001070f17ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1070f17b0; end: 1070f193b;  */

void FUN_1070f17b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010bfae700(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    func_0x00010bfc0320(param_2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1070f193c; end: 1070f19ef;  */

void FUN_1070f193c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar3 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107f6fad4(uVar1,uVar2,lVar3,*(undefined1 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar3);
    }
  }
  else {
    func_0x00010be2f900(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f19f0; end: 1070f1a27;  */

void FUN_1070f19f0(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x40);
  puVar7 = *(undefined **)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar3);
  _objc_retain(puVar7);
  _objc_retain(param_2);
  _objc_retain(uVar2);
  uVar8 = lVar4 - 1;
  puVar6 = param_2;
  puVar5 = puVar7;
  if (uVar8 < 3) {
    uVar9 = *(undefined8 *)(&UNK_10deeb6d0 + uVar8 * 8);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(puVar6);
  _objc_retain(uVar1);
  _objc_retain(puVar5);
  func_0x00010c0f84e0(puVar7);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar5);
  return;
}



/* Entry: 1070f1a28; end: 1070f1aa3;  */

void FUN_1070f1a28(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107f6fad4(uVar1,uVar2,param_2,*(undefined1 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001070f1aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1070f1aa4; end: 1070f1ad7;  */

void FUN_1070f1aa4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if ((param_2 == 0) || (param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001070f1ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(lVar5);
  if (param_2 == 0) {
    if (lVar5 == 0) goto code_r0x000107f6fc48;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_107f6fc88;
    puStack_70 = &UNK_110849530;
    _objc_retain(lVar5);
    lStack_68 = lVar5;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    lVar4 = lStack_68;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(lVar5);
    func_0x00010c0f84e0(puVar3);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar4 = param_2;
  }
  _objc_release(lVar4);
code_r0x000107f6fc48:
  _objc_release(lVar5);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070f1ad8; end: 1070f1eff; -[PreviewViewController updateGalleryConfigurationWithSnap:entryId:cloudFS:] */

void FUN_1070f1ad8(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  long unaff_x28;
  undefined8 uStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [128];
  long lStack_480;
  long lStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined *puStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 ***pppuStack_420;
  code *pcStack_418;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  long lStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  long lStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af4c0;
  ppuVar21 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar21;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = param_4;
  ppuVar18 = ppuVar24;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar24);
  _objc_release(ppuVar23);
  _objc_release(ppuVar1);
  _objc_release(ppuVar21);
  if (((param_5 != 0) && (param_3 != (undefined **)0x0)) && (puVar2 != (undefined *)0x0)) {
    puVar3 = PTR_PTR_1126b5fa8;
    ppuStack_138 = param_4;
    _objc_alloc_init(PTR_PTR_1126b5fa8);
    ppuVar18 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205d00();
    _objc_release(ppuVar18);
    _objc_release(puVar3);
    ppuVar18 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar18;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar2;
    func_0x00010c196760();
    _objc_release(ppuVar23);
    _objc_release(ppuVar18);
    ppuVar18 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar18;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203860();
    _objc_release(ppuVar23);
    _objc_release(ppuVar18);
    lVar16 = param_5;
    func_0x00010c13a8c0(param_5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_140 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d7c0();
    _objc_release(ppuVar18);
    _objc_release(param_1);
    _objc_release(lVar16);
    ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
    ppuVar23 = param_3;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = apuStack_f0;
    lVar16 = 0x10;
    ppuVar24 = ppuVar23;
    func_0x00010bf52a60();
    if (ppuVar24 != (undefined **)0x0) {
      lVar20 = *plStack_120;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar20) {
            _objc_enumerationMutation(ppuVar23);
          }
          uVar4 = *(undefined8 *)(lStack_128 + (long)ppuVar18 * 8);
          func_0x00010bf0b760();
          if ((uint)uVar4 < 0x16) {
            func_0x00010b697928();
          }
          else {
            uVar4 = 0xfffffffffbadbeef;
          }
          unaff_x28 = param_5;
          func_0x00010c13a8e0(param_5,param_2,param_3,uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar21,param_2,unaff_x28,puVar2);
          _objc_release(puVar2);
          _objc_release(unaff_x28);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar24 != ppuVar18);
        ppuVar18 = apuStack_f0;
        lVar16 = 0x10;
        ppuVar24 = ppuVar23;
        func_0x00010bf52a60(ppuVar23,param_2,&uStack_130);
      } while (ppuVar24 != (undefined **)0x0);
    }
    _objc_release(ppuVar23);
    ppuVar1 = ppuVar21;
    func_0x00010bf51e00(ppuVar21);
    param_1 = ppuStack_140;
    ppuVar23 = ppuStack_140;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar23;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a820();
    _objc_release(ppuVar24);
    _objc_release(ppuVar23);
    _objc_release(ppuVar1);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)0x0;
    func_0x00010c21e120();
    _objc_release(ppuVar1);
    _objc_release(param_1);
    _objc_release(ppuVar21);
    param_4 = ppuStack_138;
    puVar2 = puStack_148;
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1070f1f00;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_380 = ppuVar5;
  lStack_1b0 = unaff_x28;
  ppuStack_1a8 = ppuVar24;
  ppuStack_1a0 = ppuVar23;
  ppuStack_198 = ppuVar1;
  ppuStack_190 = ppuVar21;
  puStack_188 = puVar2;
  ppuStack_180 = param_1;
  lStack_178 = param_5;
  ppuStack_170 = param_4;
  ppuStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  ppuStack_348 = ppuVar18;
  _objc_retain(ppuVar18);
  lStack_370 = lVar16;
  _objc_retain(lVar16);
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_378 = puVar2;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_350 = puVar3;
  _objc_opt_new();
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  ppuStack_368 = ppuVar12;
  puStack_358 = puVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_360 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    lVar16 = *plStack_2f0;
    ppuVar21 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_2f0 != lVar16) {
          _objc_enumerationMutation(ppuStack_360);
        }
        lVar17 = *(long *)(lStack_2f8 + (long)ppuVar23 * 8);
        lVar20 = lVar17;
        func_0x00010bfb4f60();
        ppuVar18 = ppuStack_348;
        func_0x00010c25e980(ppuStack_348,param_2,ppuVar24,lVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar6 = lVar17;
        func_0x00010c280560(lVar17);
        func_0x00010c0df780(puVar2,param_2,lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puStack_350,param_2,ppuVar18,puVar2);
        _objc_release(puVar2);
        lVar6 = lVar17;
        func_0x00010bfb4f40(lVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c280560(lVar17);
        func_0x00010c0df780(puVar2,param_2,lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puStack_358,param_2,lVar6,puVar2);
        _objc_release(puVar2);
        _objc_release(lVar6);
        ppuVar24 = (undefined **)((long)ppuVar24 + lVar20);
        _objc_release(ppuVar18);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar12 != ppuVar23);
      ppuVar12 = ppuStack_360;
      func_0x00010bf52a60(ppuStack_360,param_2,&uStack_300,auStack_240,0x10);
      unaff_x28 = 0;
    } while (ppuVar12 != (undefined **)0x0);
  }
  _objc_release(ppuStack_360);
  lVar16 = lStack_370;
  puVar2 = puStack_378;
  func_0x00010c196760(puStack_378,param_2,lStack_370);
  func_0x00010c16f780(puVar2,param_2,ppuStack_348);
  func_0x00010c16f720(puVar2,param_2,puStack_350);
  func_0x00010c16f700(puVar2,param_2,puStack_358);
  func_0x00010c21e120(puVar2,param_2,0);
  ppuVar12 = ppuStack_380;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar12;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(ppuVar1);
  _objc_release(ppuVar18);
  _objc_release(ppuVar12);
  ppuVar1 = ppuStack_368;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  ppuVar5 = ppuStack_368;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_2c0;
  uVar4 = 0x10;
  ppuVar7 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar12 = (undefined **)*puStack_330;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_330 != ppuVar12) {
          _objc_enumerationMutation(ppuVar5);
        }
        func_0x00010c1f5b00(*(undefined8 *)(lStack_338 + (long)ppuVar18 * 8),param_2,1);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar7 != ppuVar18);
      puVar14 = auStack_2c0;
      uVar4 = 0x10;
      ppuVar7 = ppuVar5;
      func_0x00010bf52a60(ppuVar5,param_2,&uStack_340,puVar14,0x10);
      ppuVar23 = (undefined **)0x0;
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  uVar13 = 1;
  func_0x00010c1f5b00(ppuVar1);
  _objc_release(puStack_358);
  _objc_release(puStack_350);
  _objc_release(puVar2);
  _objc_release(lVar16);
  _objc_release(ppuStack_348);
  ppuVar7 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  puStack_3b8 = puVar2;
  lStack_3b0 = lVar16;
  ppuStack_3a8 = ppuVar1;
  pcStack_388 = FUN_1070f22a0;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_3e0 = unaff_x28;
  ppuStack_3d8 = ppuVar24;
  ppuStack_3d0 = ppuVar23;
  ppuStack_3c8 = ppuVar5;
  ppuStack_3c0 = ppuVar21;
  ppuStack_3a0 = ppuVar18;
  ppuStack_398 = ppuVar12;
  ppuStack_390 = &puStack_160;
  _objc_retain(uVar4);
  _objc_retain(puVar14);
  _objc_retain(uVar13);
  uVar8 = uVar13;
  func_0x00010bfb4f40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c196760();
  _objc_release(uVar4);
  func_0x00010c16f780(puVar3,param_2,puVar14);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = uVar13;
  func_0x00010c280560(uVar13);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3f8 = puVar2;
  puStack_3f0 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_3f0,&puStack_3f8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f720(puVar3,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = uVar13;
  func_0x00010c280560(uVar13);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_408 = puVar2;
  uStack_400 = uVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_400,&puStack_408,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  func_0x00010c16f700(puVar3,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  func_0x00010c21e120(puVar3,param_2,0);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar7;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010c1a1a80();
  _objc_release(ppuVar23);
  _objc_release(ppuVar18);
  _objc_release(ppuVar7);
  lVar16 = 1;
  func_0x00010c1f5b00(uVar13);
  _objc_release(uVar13);
  _objc_release(puVar3);
  uVar4 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_468 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_460 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_418 = FUN_1070f24d4;
  lStack_480 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_470 = unaff_x28;
  puStack_458 = puVar9;
  ppuStack_450 = ppuVar23;
  ppuStack_448 = ppuVar18;
  ppuStack_440 = ppuVar7;
  puStack_438 = puVar3;
  uStack_430 = uVar8;
  uStack_428 = uVar13;
  pppuStack_420 = &ppuStack_390;
  _objc_retain(lVar16);
  _objc_retain(uVar15);
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c21e120();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  plStack_530 = (long *)0x0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  lVar20 = lVar16;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar20;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar17 = 0;
    lVar22 = *plStack_530;
    do {
      lVar19 = 0;
      do {
        if (*plStack_530 != lVar22) {
          _objc_enumerationMutation(lVar20);
        }
        uVar25 = *(undefined8 *)(lStack_538 + lVar19 * 8);
        uVar13 = uVar15;
        func_0x00010c0dfd40(uVar15,param_2,lVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar13;
        func_0x00010bfbcca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        uVar13 = uVar15;
        func_0x00010c0dfd40(uVar15,param_2,lVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar13;
        func_0x00010bfbd940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8c20(uVar4,param_2,uVar25,uVar10,uVar8);
        _objc_release(uVar10);
        _objc_release(uVar13);
        func_0x00010befa120(puVar3,param_2,uVar8);
        lVar17 = lVar17 + 1;
        _objc_release(uVar8);
        lVar19 = lVar19 + 1;
      } while (lVar6 != lVar19);
      lVar6 = lVar20;
      func_0x00010bf52a60(lVar20,param_2,&uStack_540,auStack_500,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar20);
  func_0x00010c16f640(puVar2,param_2,puVar3);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar4);
  lVar20 = 1;
  func_0x00010c1f5b00(lVar16);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar15);
  _objc_release(lVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_480) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar20);
  lVar6 = lVar20;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = lVar16;
    func_0x00010c13b540(lVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar6;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar17;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar20;
    func_0x00010c23fe00(lVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar20;
    func_0x00010c240320(lVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139f00(lVar22,param_2,lVar19,lVar11);
    _objc_release(lVar11);
    _objc_release(lVar19);
    _objc_release(lVar22);
    _objc_release(lVar17);
    _objc_release(lVar6);
    lVar6 = lVar16;
    func_0x00010c13b540(lVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar6;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar17;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar22);
    _objc_release(lVar17);
    _objc_release(lVar6);
  }
  lVar6 = lVar20;
  func_0x00010bfbd940(lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar20;
  func_0x00010bfbcca0(lVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8c80(lVar16,param_2,lVar6,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar20);
  return;
}



/* Entry: 1070f1f00; end: 1070f229f; -[PreviewViewController _updateGalleryConfigurationForBatchCaptureConfiguration:withSnaps:entry:] */

void FUN_1070f1f00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **unaff_x24;
  long lVar16;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar17;
  undefined8 unaff_x28;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [128];
  long lStack_330;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_230 = param_1;
  _objc_retain(param_3);
  uStack_1f8 = param_4;
  _objc_retain(param_4);
  uStack_220 = param_5;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_228 = puVar1;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_200 = puVar2;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_218 = param_3;
  puStack_208 = puVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    unaff_x27 = 0;
    lVar15 = *plStack_1a0;
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(lStack_210);
        }
        lVar13 = *(long *)(lStack_1a8 + unaff_x26 * 8);
        lVar3 = lVar13;
        func_0x00010bfb4f60();
        uVar4 = uStack_1f8;
        func_0x00010c25e980(uStack_1f8,param_2,unaff_x27,lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar12 = lVar13;
        func_0x00010c280560(lVar13);
        func_0x00010c0df780(puVar1,param_2,lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puStack_200,param_2,uVar4,puVar1);
        _objc_release(puVar1);
        lVar12 = lVar13;
        func_0x00010bfb4f40(lVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c280560(lVar13);
        func_0x00010c0df780(puVar1,param_2,lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puStack_208,param_2,lVar12,puVar1);
        _objc_release(puVar1);
        _objc_release(lVar12);
        unaff_x27 = lVar3 + unaff_x27;
        _objc_release(uVar4);
        unaff_x26 = unaff_x26 + 1;
      } while (param_3 != unaff_x26);
      param_3 = lStack_210;
      func_0x00010bf52a60(lStack_210,param_2,&uStack_1b0,auStack_f0,0x10);
      unaff_x28 = 0;
    } while (param_3 != 0);
  }
  _objc_release(lStack_210);
  uVar4 = uStack_220;
  puVar1 = puStack_228;
  func_0x00010c196760(puStack_228,param_2,uStack_220);
  func_0x00010c16f780(puVar1,param_2,uStack_1f8);
  func_0x00010c16f720(puVar1,param_2,puStack_200);
  func_0x00010c16f700(puVar1,param_2,puStack_208);
  func_0x00010c21e120(puVar1,param_2,0);
  lVar12 = lStack_230;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar12);
  lVar3 = lStack_218;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar13 = lStack_218;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_170;
  uVar11 = 0x10;
  lVar16 = lVar13;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar12 = *plStack_1e0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1e0 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010c1f5b00(*(undefined8 *)(lStack_1e8 + lVar15 * 8),param_2,1);
        lVar15 = lVar15 + 1;
      } while (lVar16 != lVar15);
      puVar9 = auStack_170;
      uVar11 = 0x10;
      lVar16 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_1f0,puVar9,0x10);
      unaff_x26 = 0;
    } while (lVar16 != 0);
  }
  _objc_release(lVar13);
  uVar8 = 1;
  func_0x00010c1f5b00(lVar3);
  _objc_release(puStack_208);
  _objc_release(puStack_200);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uStack_1f8);
  lVar16 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_268 = puVar1;
  uStack_260 = uVar4;
  lStack_258 = lVar3;
  pcStack_238 = FUN_1070f22a0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_290 = unaff_x28;
  lStack_288 = unaff_x27;
  lStack_280 = unaff_x26;
  lStack_278 = lVar13;
  ppuStack_270 = unaff_x24;
  lStack_250 = lVar15;
  lStack_248 = lVar12;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  _objc_retain(puVar9);
  _objc_retain(uVar8);
  uVar4 = uVar8;
  func_0x00010bfb4f40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c196760();
  _objc_release(uVar11);
  func_0x00010c16f780(puVar2,param_2,puVar9);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = uVar8;
  func_0x00010c280560(uVar8);
  func_0x00010c0df780(puVar1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2a0,&puStack_2a8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f720(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = uVar8;
  func_0x00010c280560(uVar8);
  func_0x00010c0df780(puVar1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2b8 = puVar1;
  uStack_2b0 = uVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_2b0,&puStack_2b8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c16f700(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010c21e120(puVar2,param_2,0);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar16;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c1a1a80();
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar16);
  lVar12 = 1;
  func_0x00010c1f5b00(uVar8);
  _objc_release(uVar8);
  _objc_release(puVar2);
  uVar11 = uVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_318 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_310 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_2c8 = FUN_1070f24d4;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_320 = unaff_x28;
  puStack_308 = puVar5;
  lStack_300 = lVar3;
  lStack_2f8 = lVar15;
  lStack_2f0 = lVar16;
  puStack_2e8 = puVar2;
  uStack_2e0 = uVar4;
  uStack_2d8 = uVar8;
  ppuStack_2d0 = &puStack_240;
  _objc_retain(lVar12);
  _objc_retain(uVar10);
  puVar1 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c21e120();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lVar15 = lVar12;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = 0;
    lVar16 = *plStack_3e0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_3e0 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        uVar17 = *(undefined8 *)(lStack_3e8 + lVar14 * 8);
        uVar4 = uVar10;
        func_0x00010c0dfd40(uVar10,param_2,lVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bfbcca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar10;
        func_0x00010c0dfd40(uVar10,param_2,lVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bfbd940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8c20(uVar11,param_2,uVar17,uVar6,uVar8);
        _objc_release(uVar6);
        _objc_release(uVar4);
        func_0x00010befa120(puVar2,param_2,uVar8);
        lVar13 = lVar13 + 1;
        _objc_release(uVar8);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = lVar15;
      func_0x00010bf52a60(lVar15,param_2,&uStack_3f0,auStack_3b0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar15);
  func_0x00010c16f640(puVar1,param_2,puVar2);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar11);
  lVar15 = 1;
  func_0x00010c1f5b00(lVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar15);
  lVar3 = lVar15;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar13;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c23fe00(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar15;
    func_0x00010c240320(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139f00(lVar16,param_2,lVar14,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar14);
    _objc_release(lVar16);
    _objc_release(lVar13);
    _objc_release(lVar3);
    lVar3 = lVar12;
    func_0x00010c13b540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar13;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar16);
    _objc_release(lVar13);
    _objc_release(lVar3);
  }
  lVar3 = lVar15;
  func_0x00010bfbd940(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  func_0x00010bfbcca0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8c80(lVar12,param_2,lVar3,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 1070f22a0; end: 1070f24d3; -[PreviewViewController _updateGalleryConfigurationForBatchCaptureSegment:withSnaps:entry:] */

void FUN_1070f22a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  long lStack_100;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb4f40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c196760();
  _objc_release(param_5);
  func_0x00010c16f780(puVar2,param_2,param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar4;
  uStack_70 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f720(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar4;
  uStack_80 = uVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_80,&puStack_88,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c16f700(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c21e120(puVar2,param_2,0);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c1a1a80();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_1);
  lVar10 = 1;
  func_0x00010c1f5b00(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar10);
  _objc_retain(uVar12);
  puVar4 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c21e120();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar11 = lVar10;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar11;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar15 = 0;
    lVar14 = *plStack_1b0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1b0 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar16 = *(undefined8 *)(lStack_1b8 + lVar13 * 8);
        uVar3 = uVar12;
        func_0x00010c0dfd40(uVar12,param_2,lVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bfbcca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar12;
        func_0x00010c0dfd40(uVar12,param_2,lVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bfbd940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8c20(uVar1,param_2,uVar16,uVar8,uVar6);
        _objc_release(uVar8);
        _objc_release(uVar3);
        func_0x00010befa120(puVar2,param_2,uVar6);
        lVar15 = lVar15 + 1;
        _objc_release(uVar6);
        lVar13 = lVar13 + 1;
      } while (lVar7 != lVar13);
      lVar7 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_1c0,auStack_180,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar11);
  func_0x00010c16f640(puVar4,param_2,puVar2);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar11 = 1;
  func_0x00010c1f5b00(lVar10);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar11);
  lVar7 = lVar11;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    lVar7 = lVar10;
    func_0x00010c13b540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar7;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010c23fe00(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c240320(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139f00(lVar14,param_2,lVar13,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar13);
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(lVar7);
    lVar7 = lVar10;
    func_0x00010c13b540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar7;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(lVar7);
  }
  lVar7 = lVar11;
  func_0x00010bfbd940(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010bfbcca0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8c80(lVar10,param_2,lVar7,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 1070f24d4; end: 1070f2753; -[PreviewViewController _updateGalleryConfigurationForBatchCaptureConfiguration:galleryItems:] */

void FUN_1070f24d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
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
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5fa8;
  _objc_alloc_init();
  func_0x00010c21e120();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar8 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = 0;
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = param_4;
        func_0x00010c0dfd40(param_4,param_2,lVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfbcca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = param_4;
        func_0x00010c0dfd40(param_4,param_2,lVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bfbd940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed8c20(param_1,param_2,uVar12,uVar6,uVar5);
        _objc_release(uVar6);
        _objc_release(uVar4);
        func_0x00010befa120(puVar2,param_2,uVar5);
        lVar11 = lVar11 + 1;
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  func_0x00010c16f640(puVar1,param_2,puVar2);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  lVar8 = 1;
  func_0x00010c1f5b00(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c13b540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c23fe00(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c240320(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139f00(lVar10,param_2,lVar9,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c13b540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar3);
  }
  lVar3 = lVar8;
  func_0x00010bfbd940(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bfbcca0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8c80(param_3,param_2,lVar3,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 1070f2754; end: 1070f28e3; -[PreviewViewController _updateGalleryConfigurationForTimelineWithSnapdocSaveResult:] */

void FUN_1070f2754(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c240320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139f00(uVar4,param_2,lVar1,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010bfbd940(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8c80(param_1,param_2,lVar1,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f28e4; end: 1070f2a7f; -[PreviewViewController _updateGalleryConfigurationForTimelineWithSnaps:entry:] */

void FUN_1070f28e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5fa8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205d00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196760();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203860();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215b00();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e120();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070f2a80; end: 1070f2cc3; -[PreviewViewController _updateGalleryConfigurationForTimelineWithSingleLongSnap:entryId:] */

void FUN_1070f2a80(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined *puVar23;
  undefined8 unaff_x26;
  undefined **ppuStack_318;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long lStack_60;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar23 = PTR_PTR_1126af4c0;
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  puVar21 = puVar4;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_3 != 0) && (puVar23 != (undefined *)0x0)) {
    puVar1 = PTR_PTR_1126b5fa8;
    _objc_alloc_init(PTR_PTR_1126b5fa8);
    puVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205d00();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196760();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar21 = (undefined *)0x1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215b00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 0;
    func_0x00010c21e120();
    _objc_release(puVar1);
    _objc_release(param_1);
    lStack_60 = param_3;
  }
  _objc_release(puVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar20);
  _objc_retain(puVar21);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(lStack_60);
  _objc_retain(lVar22);
  _objc_retain(unaff_x26);
  _objc_retain(unaff_x25);
  _objc_retain(unaff_x24);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x22);
  _objc_retain(unaff_x21);
  _objc_retain(unaff_x20);
  lVar5 = param_3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001070c4724();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar12;
  _dispatch_group_create();
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 1;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_1070ced0c;
  uStack_108 = 0x1070ced1c;
  uStack_100 = 0;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110f314b8;
  for (puVar23 = (undefined *)0x0; puVar2 = unaff_x25, func_0x00010bf529e0(), puVar23 < puVar2;
      puVar23 = puVar23 + 1) {
    if (puVar21 == (undefined *)0x0) {
      func_0x00010bef92c0(puVar1);
      puVar2 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar18 = ppuStack_318;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar12);
      _objc_release(ppuVar18);
    }
    else {
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1070f37f4;
      puStack_140 = &UNK_11098e928;
      _objc_retain(unaff_x25);
      uStack_130 = SUB84(puVar23,0);
      lVar5 = param_5;
      puStack_138 = unaff_x25;
      func_0x00010bfece40();
      if (lVar5 == 0x7fffffffffffffff) {
        func_0x00010bef92c0(puVar1);
        puVar2 = PTR_PTR_1126b1350;
        _objc_alloc(PTR_PTR_1126b1350);
        func_0x00010bfeee60();
        ppuVar18 = ppuStack_318;
        func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                            &PTR____CFConstantStringClassReference_110dbab38,1,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar12);
      }
      else {
        _dispatch_group_enter(ppuVar13);
        puVar2 = puVar21;
        func_0x00010c0dfd40(puVar21);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010bf8c440();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar8;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar22;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010010fab4();
        lVar5 = lVar15;
        if ((int)lVar16 == 0) {
          lVar5 = 0;
        }
        _objc_retain();
        _objc_release(lVar15);
        uVar19 = unaff_x26;
        func_0x00010c0dfd40(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_3;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c081200();
        puVar3 = PTR_PTR_1126b2220;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560();
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_1070f38ac;
        puStack_178 = &UNK_11098e958;
        puStack_168 = &uStack_f8;
        puStack_160 = &uStack_128;
        _objc_retain(ppuVar13);
        ppuStack_170 = ppuVar13;
        func_0x00010c131240(lVar10);
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(uVar19);
        _objc_release(lVar5);
        _objc_release(lVar14);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar7);
        _objc_release(lVar6);
        ppuVar18 = ppuStack_170;
      }
      _objc_release(ppuVar18);
      _objc_release(puVar2);
      puVar2 = puStack_138;
    }
    _objc_release(puVar2);
  }
  puVar23 = puVar1;
  func_0x00010bf529e0();
  if (puVar23 != (undefined *)0x0) {
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_1070f3954;
    puStack_208 = &UNK_11098e988;
    lStack_200 = param_3;
    _objc_retain(lVar22);
    lStack_1f8 = lVar22;
    _objc_retain(puVar1);
    puStack_1f0 = puVar1;
    _objc_retain(unaff_x26);
    uStack_1e8 = unaff_x26;
    _objc_retain(unaff_x21);
    uStack_1e0 = unaff_x21;
    _objc_retain(uVar20);
    uStack_1d8 = uVar20;
    uStack_198 = param_8;
    _objc_retain(lStack_60);
    lStack_1d0 = lStack_60;
    _objc_retain(unaff_x25);
    puStack_1c8 = unaff_x25;
    _objc_retain(unaff_x24);
    uStack_1c0 = unaff_x24;
    _objc_retain(unaff_x23);
    puStack_1a8 = &uStack_f8;
    puStack_1a0 = &uStack_128;
    uStack_1b8 = unaff_x23;
    _objc_retain(ppuVar13);
    ppuVar18 = &puStack_220;
    ppuStack_1b0 = ppuVar13;
    _objc_retainBlock();
    _dispatch_group_enter(ppuVar13);
    puVar23 = PTR_PTR_1126c4ad0;
    _objc_alloc(PTR_PTR_1126c4ad0);
    uVar19 = param_6;
    func_0x00010c0d9500(param_6);
    lVar5 = param_3;
    func_0x00010c13b540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060b80(puVar23);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar19);
    puVar2 = PTR_PTR_1126c4ac8;
    _objc_alloc(PTR_PTR_1126c4ac8);
    puVar3 = unaff_x25;
    func_0x00010c0e0320(unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb3dc0(param_3);
    func_0x00010c0525e0(puVar2);
    _objc_release(puVar3);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_1070f3f40;
    puStack_248 = &UNK_11098e9b8;
    _objc_retain(ppuVar18);
    puStack_230 = &uStack_f8;
    puStack_228 = &uStack_128;
    ppuStack_238 = ppuVar18;
    _objc_retain(ppuVar13);
    ppuStack_240 = ppuVar13;
    func_0x00010bf16e60(puVar23);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(ppuStack_240);
    _objc_release(ppuStack_238);
    _objc_release(puVar2);
    _objc_release(puVar23);
    _objc_release(ppuVar18);
    _objc_release(ppuStack_1b0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1c0);
    _objc_release(puStack_1c8);
    _objc_release(lStack_1d0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1e8);
    _objc_release(puStack_1f0);
    _objc_release(lStack_1f8);
  }
  puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_1070f3fe8;
  puStack_2c0 = &UNK_11098e9e8;
  puStack_270 = &uStack_f8;
  puStack_268 = &uStack_128;
  uStack_2b8 = uVar20;
  lStack_2b0 = param_3;
  lStack_2a8 = param_5;
  puStack_2a0 = unaff_x25;
  ppuStack_298 = ppuVar13;
  puStack_290 = puVar21;
  uStack_288 = unaff_x24;
  uStack_280 = unaff_x23;
  uStack_278 = unaff_x20;
  _objc_retain(unaff_x20);
  _objc_retain(unaff_x23);
  _objc_retain(unaff_x24);
  _objc_retain(puVar21);
  _objc_retain(ppuVar13);
  _objc_retain(unaff_x25);
  _objc_retain(param_5);
  _objc_retain(uVar20);
  func_0x000100bc0718(ppuVar13,PTR___dispatch_main_q_11034be20,&puStack_2d8);
  _objc_release(uStack_278);
  _objc_release(uStack_280);
  _objc_release(uStack_288);
  _objc_release(puStack_290);
  _objc_release(ppuStack_298);
  _objc_release(puStack_2a0);
  _objc_release(lStack_2a8);
  _objc_release(uStack_2b8);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  _objc_release(unaff_x20);
  _objc_release(unaff_x23);
  _objc_release(unaff_x24);
  _objc_release(puVar21);
  _objc_release(ppuVar13);
  _objc_release(unaff_x25);
  _objc_release(param_5);
  _objc_release(uVar20);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(ppuVar12);
  _objc_release(puVar1);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(unaff_x21);
  _objc_release(unaff_x22);
  _objc_release(unaff_x26);
  _objc_release(lVar22);
  _objc_release(lStack_60);
  _objc_release(param_6);
  return;
}



/* Entry: 1070f2cc4; end: 1070f37f3; -[PreviewViewController _replaceBatchCaptureVideoSnapGalleryEntry:gallerySnaps:timeRanges:forVideoProvider:codecType:fromFrontFacingCamera:creationTime:withOverlayFormats:overlays:newTimeRanges:gallerySavingEventId:captureSessionId:snapAssets:assetMedias:completionHandler:] */

void FUN_1070f2cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined *param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuStack_2b8;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4724();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar8 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  _dispatch_group_create();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 1;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1070ced0c;
  uStack_a8 = 0x1070ced1c;
  uStack_a0 = 0;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110f314b8;
  for (puVar21 = (undefined *)0x0; puVar11 = param_12, func_0x00010bf529e0(), puVar21 < puVar11;
      puVar21 = puVar21 + 1) {
    if (param_4 == (undefined *)0x0) {
      func_0x00010bef92c0(puVar8);
      puVar11 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar19 = ppuStack_2b8;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar9);
      _objc_release(ppuVar19);
    }
    else {
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_1070f37f4;
      puStack_e0 = &UNK_11098e928;
      _objc_retain(param_12);
      uStack_d0 = SUB84(puVar21,0);
      lVar12 = param_5;
      puStack_d8 = param_12;
      func_0x00010bfece40();
      if (lVar12 == 0x7fffffffffffffff) {
        func_0x00010bef92c0(puVar8);
        puVar11 = PTR_PTR_1126b1350;
        _objc_alloc(PTR_PTR_1126b1350);
        func_0x00010bfeee60();
        ppuVar19 = ppuStack_2b8;
        func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                            &PTR____CFConstantStringClassReference_110dbab38,1,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar9);
      }
      else {
        _dispatch_group_enter(ppuVar10);
        puVar11 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf8c440();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar4;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010010fab4();
        uVar1 = uVar14;
        if ((int)uVar15 == 0) {
          uVar1 = 0;
        }
        _objc_retain();
        _objc_release(uVar14);
        uVar14 = param_11;
        func_0x00010c0dfd40(param_11);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c2705e0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c081200();
        puVar20 = PTR_PTR_1126b2220;
        _objc_alloc();
        puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560();
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_1070f38ac;
        puStack_118 = &UNK_11098e958;
        puStack_108 = &uStack_98;
        puStack_100 = &uStack_c8;
        _objc_retain(ppuVar10);
        ppuStack_110 = ppuVar10;
        func_0x00010c131240(uVar6);
        _objc_release(puVar20);
        _objc_release(puVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar1);
        _objc_release(uVar13);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        ppuVar19 = ppuStack_110;
      }
      _objc_release(ppuVar19);
      _objc_release(puVar11);
      puVar11 = puStack_d8;
    }
    _objc_release(puVar11);
  }
  puVar21 = puVar8;
  func_0x00010bf529e0();
  if (puVar21 != (undefined *)0x0) {
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1070f3954;
    puStack_1a8 = &UNK_11098e988;
    uStack_1a0 = param_1;
    _objc_retain(param_10);
    uStack_198 = param_10;
    _objc_retain(puVar8);
    puStack_190 = puVar8;
    _objc_retain(param_11);
    uStack_188 = param_11;
    _objc_retain(param_16);
    uStack_180 = param_16;
    _objc_retain(param_3);
    uStack_178 = param_3;
    uStack_138 = param_8;
    _objc_retain(param_9);
    uStack_170 = param_9;
    _objc_retain(param_12);
    puStack_168 = param_12;
    _objc_retain(param_13);
    uStack_160 = param_13;
    _objc_retain(param_14);
    puStack_148 = &uStack_98;
    uStack_158 = param_14;
    puStack_140 = &uStack_c8;
    _objc_retain(ppuVar10);
    ppuVar19 = &puStack_1c0;
    ppuStack_150 = ppuVar10;
    _objc_retainBlock();
    _dispatch_group_enter(ppuVar10);
    puVar21 = PTR_PTR_1126c4ad0;
    _objc_alloc(PTR_PTR_1126c4ad0);
    uVar1 = param_6;
    func_0x00010c0d9500(param_6);
    uVar2 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060b80(puVar21);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar11 = PTR_PTR_1126c4ac8;
    _objc_alloc(PTR_PTR_1126c4ac8);
    puVar20 = param_12;
    func_0x00010c0e0320(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb3dc0(param_1);
    func_0x00010c0525e0(puVar11);
    _objc_release(puVar20);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_1070f3f40;
    puStack_1e8 = &UNK_11098e9b8;
    _objc_retain(ppuVar19);
    puStack_1d0 = &uStack_98;
    puStack_1c8 = &uStack_c8;
    ppuStack_1d8 = ppuVar19;
    _objc_retain(ppuVar10);
    ppuStack_1e0 = ppuVar10;
    func_0x00010bf16e60(puVar21);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(ppuStack_1e0);
    _objc_release(ppuStack_1d8);
    _objc_release(puVar11);
    _objc_release(puVar21);
    _objc_release(ppuVar19);
    _objc_release(ppuStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(puStack_168);
    _objc_release(uStack_170);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(puStack_190);
    _objc_release(uStack_198);
  }
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_1070f3fe8;
  puStack_260 = &UNK_11098e9e8;
  uStack_228 = param_13;
  uStack_220 = param_14;
  puStack_210 = &uStack_98;
  uStack_218 = param_17;
  puStack_208 = &uStack_c8;
  uStack_258 = param_3;
  uStack_250 = param_1;
  lStack_248 = param_5;
  puStack_240 = param_12;
  ppuStack_238 = ppuVar10;
  puStack_230 = param_4;
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_4);
  _objc_retain(ppuVar10);
  _objc_retain(param_12);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000100bc0718(ppuVar10,PTR___dispatch_main_q_11034be20,&puStack_278);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(uStack_228);
  _objc_release(puStack_230);
  _objc_release(ppuStack_238);
  _objc_release(puStack_240);
  _objc_release(lStack_248);
  _objc_release(uStack_258);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_4);
  _objc_release(ppuVar10);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(ppuVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  return;
}



/* Entry: 1070f37f4; end: 1070f38ab;  */

bool FUN_1070f37f4(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar1);
  }
  puVar2 = &uStack_60;
  _CMTimeRangeEqual(puVar2,&uStack_90);
  _objc_release(lVar1);
  _objc_release(param_2);
  return (int)puVar2 != 0;
}



/* Entry: 1070f38ac; end: 1070f3953;  */

void FUN_1070f38ac(long param_1,long param_2,undefined8 param_3,byte param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_2 != 0) {
    bVar1 = param_4 & *(byte *)(lVar3 + 0x18);
  }
  bVar2 = 0;
  if (param_5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x18) = bVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar3 = param_5;
  if (param_5 == 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f3954; end: 1070f3e03;  */

void FUN_1070f3954(long param_1,long param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
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
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  long lVar29;
  byte bVar30;
  long lVar31;
  long lVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar33 = *(undefined ***)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar33;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fd0;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar28 = ppuVar4;
  }
  _objc_retain(ppuVar28);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar33);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d22a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar28;
  func_0x00010c067ec0();
  lVar32 = (long)(int)ppuVar2;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf3f040();
  func_0x00010b5fbca8();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  uVar34 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x0001070c5674();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240();
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  uVar25 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  uVar36 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar36);
  bVar30 = 0;
  lVar29 = param_2;
  func_0x00010bef9e60(uVar8);
  _objc_release(param_2);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar34);
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
  _objc_release(uVar36);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  bVar1 = 0;
  if (lVar29 != 0) {
    bVar1 = bVar30 & *(byte *)(*(long *)(ppuVar28[5] + 8) + 0x18);
  }
  bVar30 = 0;
  if (lVar32 == 0) {
    bVar30 = bVar1;
  }
  *(byte *)(*(long *)(ppuVar28[5] + 8) + 0x18) = bVar30;
  lVar35 = *(long *)(ppuVar28[6] + 8);
  lVar31 = lVar32;
  if (lVar32 == 0) {
    lVar31 = *(long *)(lVar35 + 0x28);
  }
  _objc_retain(lVar31);
  uVar34 = *(undefined8 *)(lVar35 + 0x28);
  *(long *)(lVar35 + 0x28) = lVar31;
  _objc_retain(lVar32);
  _objc_retain(lVar29);
  _objc_release(uVar34);
  _dispatch_group_leave(ppuVar28[4]);
  _objc_release(lVar32);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar29);
  return;
}



/* Entry: 1070f3e04; end: 1070f3eab;  */

void FUN_1070f3e04(long param_1,undefined8 param_2,long param_3,byte param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = param_4 & *(byte *)(lVar3 + 0x18);
  }
  bVar2 = 0;
  if (param_5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x18) = bVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar3 = param_5;
  if (param_5 == 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f3eac; end: 1070f3f3f;  */

void FUN_1070f3eac(long param_1,long param_2)

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
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  return;
}



/* Entry: 1070f3f40; end: 1070f3fe7;  */

void FUN_1070f3f40(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_3 == 0) || (param_4 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    lVar1 = param_4;
    if (param_4 == 0) {
      lVar1 = *(long *)(lVar4 + 0x28);
    }
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
    _objc_retain(param_4);
    _objc_release(uVar3);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar2 = *(code **)(lVar1 + 0x10);
    _objc_retain(0);
    (*pcVar2)(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070f3fe8; end: 1070f431b;  */

void FUN_1070f3fe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar8 = 0;
    do {
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uVar7 = *(ulong *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar9);
      if ((uVar7 & 1) == 0) {
        _dispatch_group_enter(*(undefined8 *)(param_1 + 0x40));
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c13b540(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar1;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar9;
        func_0x00010bf6d080();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c0dfd40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2220;
        _objc_alloc(PTR_PTR_1126b2220);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560(puVar5);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1070f431c;
        puStack_90 = &UNK_110943a18;
        uStack_80 = *(undefined8 *)(param_1 + 0x68);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar10);
        uStack_88 = uVar10;
        func_0x00010bf6c840(uVar12);
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(uVar2);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar9);
        _objc_release(uVar1);
        _objc_release(uStack_88);
      }
      uVar8 = uVar8 + 1;
      uVar7 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (uVar8 < uVar7);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1070f4340;
  puStack_d8 = &UNK_11084be40;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  uStack_c8 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar11;
  _objc_retain(uVar12);
  uStack_b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = uVar12;
  func_0x000100bc0718(uVar9,PTR___dispatch_main_q_11034be20,&puStack_f0);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(puVar3);
  return;
}



/* Entry: 1070f431c; end: 1070f433f;  */

void FUN_1070f431c(long param_1,byte param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 == 0) {
    bVar1 = param_2 & *(byte *)(lVar2 + 0x18);
  }
  *(byte *)(lVar2 + 0x18) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070f4340; end: 1070f44d3;  */

void FUN_1070f4340(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar6 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),puVar6,puVar7,
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1070f44d4; end: 1070f482f; -[PreviewViewController _replaceLongVideoSnapWithOverlayFormat:overlay:timeRange:gallerySavingEventId:captureSessionId:saveSessionId:completionHandler:] */

void FUN_1070f44d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c14c060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_9 != 0) {
      param_2 = 0;
      (**(code **)(param_9 + 0x10))(param_9,0,0,0,puVar3);
    }
    _objc_release(puVar3);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010be1ab00(param_1);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(lVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8eba0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f4830; end: 1070f494f; -[PreviewViewController _generateAssetMediasForMultiSnapStateWithOriginalVideo:completion:] */

void FUN_1070f4830(undefined8 param_1,undefined *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    param_2 = PTR____NSArray0__struct_11034ab48;
    puVar3 = PTR____NSArray0__struct_11034ab48;
    (**(code **)(param_4 + 0x10))
              (param_4,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar3 = puVar1;
    func_0x00010be1ab20(param_1);
    _objc_release(puVar1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  lVar4 = *(long *)(param_3 + 0x20);
  func_0x00010be6e660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar1);
  }
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,puVar3);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f4950; end: 1070f4a03;  */

void FUN_1070f4950(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be6e660();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f4a04; end: 1070f4a73; -[PreviewViewController _originalSnapAssetMedia] */

void FUN_1070f4a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bee8f00(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1070f4a74; end: 1070f531f; -[PreviewViewController _replaceLongVideoSnapWithOverlayFormat:overlay:timeRange:gallerySavingEventId:captureSessionId:saveSessionId:assetMedias:outSegmentSnapAssets:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070f4a74(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_288;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070f5320;
  puStack_98 = &UNK_110848438;
  _objc_retain(param_11);
  uStack_90 = param_11;
  ppuVar1 = &puStack_b0;
  _objc_retainBlock();
  ppuVar2 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0d22a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar3;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar3);
  if (ppuVar2 == (undefined **)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1,&PTR____CFConstantStringClassReference_110ea03f8);
    goto LAB_1070f5224;
  }
  if (param_5 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,&PTR____CFConstantStringClassReference_110ea0418);
    goto LAB_1070f5224;
  }
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_238 = ppuVar3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (ppuStack_238 == (undefined **)0x0) {
    (*(code *)ppuVar1[2])(ppuVar1,&PTR____CFConstantStringClassReference_110ea0438);
    goto LAB_1070f521c;
  }
  if (param_9 == 0) {
    puStack_250 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    lStack_88 = param_9;
    puStack_250 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_258 = ppuVar3;
  func_0x00010c0d2400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010be62760();
  _objc_initWeak(auStack_b8,param_1);
  ppuStack_260 = param_1;
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_268 = param_1;
  func_0x00010bf14280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0d20c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_270 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  if ((int)ppuVar2 != 0) {
    puStack_240 = PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar2 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) goto LAB_1070f52c4;
    uVar8 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_1127641f8);
    while( true ) {
      _objc_retain(uVar8);
      uVar6 = uVar8;
      func_0x00010c071800();
      _objc_release(uVar8);
      _objc_release(ppuVar2);
      if ((int)uVar6 != 0) {
        puVar7 = PTR_PTR_1126d4c10;
        _objc_alloc();
        ppuVar2 = param_1;
        func_0x00010c1122a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c14a0e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar3;
        if (ppuVar3 == (undefined **)0x0) {
          ppuStack_288 = param_1;
          func_0x00010c1122a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuStack_288;
          func_0x00010c22a7c0(ppuStack_288);
          _objc_retainAutoreleasedReturnValue();
        }
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_1070f5388;
        puStack_e0 = &UNK_11084c4a0;
        _objc_retain(ppuStack_268);
        ppuStack_d8 = ppuStack_268;
        _objc_retain(ppuStack_260);
        ppuStack_d0 = ppuStack_260;
        _objc_retain(param_8);
        uStack_c8 = param_8;
        _objc_retain(ppuStack_270);
        ppuStack_c0 = ppuStack_270;
        func_0x00010c038f20();
        if (ppuVar3 == (undefined **)0x0) {
          _objc_release(ppuVar5);
          _objc_release(ppuStack_288);
        }
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        ppuVar2 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 == (undefined **)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_1127641f8);
        }
        _objc_retain(uVar8);
        func_0x00010bf9d620(uVar8);
        _objc_release(uVar8);
        _objc_release(ppuVar2);
        _objc_release(puVar7);
        _objc_release(ppuStack_c0);
        _objc_release(uStack_c8);
        _objc_release(ppuStack_d0);
        _objc_release(ppuStack_d8);
      }
LAB_1070f4f70:
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1070f5460;
      puStack_110 = &UNK_11098ea48;
      _objc_copyWeak(auStack_100,auStack_b8);
      _objc_retain(param_11);
      ppuVar3 = &puStack_128;
      uStack_108 = param_11;
      _objc_retainBlock();
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_1070f5570;
      puStack_190 = &UNK_11098eaa8;
      _objc_copyWeak(auStack_130,auStack_b8);
      _objc_retain(ppuVar4);
      ppuStack_188 = ppuVar4;
      ppuStack_180 = param_1;
      _objc_retain(param_3);
      uStack_178 = param_3;
      _objc_retain(param_4);
      uStack_170 = param_4;
      _objc_retain(puStack_250);
      puStack_168 = puStack_250;
      _objc_retain(ppuStack_238);
      ppuStack_160 = ppuStack_238;
      _objc_retain(param_5);
      lStack_158 = param_5;
      _objc_retain(param_6);
      uStack_150 = param_6;
      _objc_retain(param_7);
      uStack_148 = param_7;
      _objc_retain(ppuStack_258);
      ppuStack_140 = ppuStack_258;
      _objc_retain(ppuVar3);
      ppuVar2 = &puStack_1a8;
      ppuStack_138 = ppuVar3;
      _objc_retainBlock();
      _objc_retain(puStack_240);
      _objc_retain(ppuVar3);
      _objc_retain(puStack_240);
      _objc_retain(ppuVar2);
      func_0x00010be0c800(param_1);
      _objc_release(ppuVar2);
      _objc_release(puStack_240);
      _objc_release(ppuVar3);
      _objc_release(puStack_240);
      _objc_release(ppuVar2);
      _objc_release(ppuStack_138);
      _objc_release(ppuStack_140);
      _objc_release(uStack_148);
      _objc_release(uStack_150);
      _objc_release(lStack_158);
      _objc_release(ppuStack_160);
      _objc_release(puStack_168);
      _objc_release(uStack_170);
      _objc_release(uStack_178);
      _objc_release(ppuStack_188);
      _objc_destroyWeak(auStack_130);
      _objc_release(ppuVar3);
      _objc_release(uStack_108);
      _objc_destroyWeak(auStack_100);
      _objc_release(puStack_240);
      _objc_release(ppuStack_270);
      _objc_release(ppuStack_268);
      _objc_release(ppuStack_260);
      _objc_destroyWeak(auStack_b8);
      _objc_release(ppuStack_258);
      _objc_release(puStack_250);
LAB_1070f521c:
      _objc_release(ppuStack_238);
LAB_1070f5224:
      _objc_release(ppuVar4);
      _objc_release(ppuVar1);
      _objc_release(uStack_90);
      _objc_release(param_11);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
      ___stack_chk_fail();
LAB_1070f52c4:
      uVar8 = 0;
    }
    return;
  }
  puStack_240 = (undefined *)0x0;
  goto LAB_1070f4f70;
}



/* Entry: 1070f5320; end: 1070f5387;  */

void FUN_1070f5320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e9fff8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070f5388; end: 1070f5433;  */

void FUN_1070f5388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1070f5434;
  puStack_50 = &UNK_110848ba8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1070f5434; end: 1070f545f;  */

void FUN_1070f5434(long param_1,undefined8 param_2)

{
  func_0x00010bf72de0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf2e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_cancelOngoingTranscoding_1125a93c0);
  return;
}



/* Entry: 1070f5460; end: 1070f556f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070f5460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_1127641f8);
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3,param_4,param_5);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f5570; end: 1070f5b9f;  */

void FUN_1070f5570(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar2 = (undefined **)(param_1 + 0x78);
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fd0;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_1070ced0c;
  uStack_a0 = 0x1070ced1c;
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_98 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar33;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c067ec0();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar9;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar29;
  func_0x00010bf3f040();
  func_0x00010b5fbca8();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar10;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar39;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x0001070c5674();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240();
  uVar19 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  uVar22 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbabe0();
  uVar23 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_1 + 0x50);
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  lVar32 = (long)(int)ppuVar3;
  uVar35 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar35);
  uVar36 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar36);
  uVar37 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar37);
  uVar38 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar38);
  uVar34 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar34);
  iVar31 = 0;
  puVar30 = puVar8;
  func_0x00010bef9e60(uVar7);
  _objc_release(puVar26);
  _objc_release(puVar27);
  _objc_release(puVar25);
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
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar39);
  _objc_release(uVar10);
  _objc_release(uVar28);
  _objc_release(uVar29);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar33);
  _objc_release(uVar7);
  _objc_release(uVar34);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(lStack_98);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar29 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  _objc_retain(uVar29);
  _objc_retain(puVar30);
  _objc_retain(lVar32);
  if (iVar31 == 0) {
    lVar33 = *(long *)(param_2 + 0x48);
    if (lVar33 != 0) {
      (**(code **)(lVar33 + 0x10))(lVar33,0,0,0,lVar32);
    }
  }
  else {
    uVar28 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar29);
    uVar39 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar39);
    func_0x00010bdfa800(uVar28);
    _objc_release(uVar39);
    _objc_release(uVar29);
  }
  lVar33 = *(long *)(*(long *)(param_2 + 0x50) + 8);
  uVar28 = *(undefined8 *)(lVar33 + 0x28);
  *(undefined8 *)(lVar33 + 0x28) = 0;
  _objc_release(uVar28);
  _objc_release(lVar32);
  _objc_release(puVar30);
  _objc_release(uVar29);
  return;
}



/* Entry: 1070f5ba0; end: 1070f5ce3;  */

void FUN_1070f5ba0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,param_5);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    func_0x00010bdfa800(uVar1);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070f5ce4; end: 1070f5cfb;  */

void FUN_1070f5ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleReplaceSnapsForLongVideoE_112569560,
             *(undefined8 *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070f5cfc; end: 1070f5d3f;  */

void FUN_1070f5cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070f5d40; end: 1070f5e13;  */

void FUN_1070f5d40(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,0);
      }
    }
    else {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
    }
    _objc_release(lVar1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f5e14; end: 1070f605f; -[PreviewViewController _handleReplaceSnapsForLongVideoEntry:completedSuccessfully:error:completionHandler:] */

void FUN_1070f5e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = PTR_PTR_1126af4c0;
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126af4d0;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1070f6060;
  puStack_90 = &UNK_110855c70;
  uStack_88 = param_3;
  puStack_80 = puVar7;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_4;
  _objc_retain(param_5);
  _objc_retain(puVar7);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x000100162d98("APPSTORE",&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(puVar6);
  return;
}



/* Entry: 1070f6060; end: 1070f6083;  */

void FUN_1070f6060(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001070f607c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 1070f6084; end: 1070f6267; -[PreviewViewController _deleteSnaps:galleryEntry:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070f6084(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6d080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  if (param_4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0,puVar5);
    }
  }
  else {
    puVar5 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar5);
    _objc_release(puVar4);
    func_0x00010bf6c980(uVar3);
  }
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f6268; end: 1070f6827; -[PreviewViewController replaceMultiSnapsV2WithOverlayFormats:overlays:timeRanges:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070f6268(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar13 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010c14c060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(uVar1);
  func_0x00010bffc4a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(uVar1);
  func_0x00010bffc4a0();
  puVar4 = puVar3;
  _dispatch_group_create();
  uVar13 = uVar1;
  func_0x00010bf529e0();
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar3);
      uVar7 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x000107e00808();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if (uVar9 != 0) {
        _dispatch_group_enter(puVar4);
        uVar7 = uVar9;
        func_0x00010bf377a0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c254140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06c000(uVar9);
        uVar10 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf3f860();
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_1070f6828;
        puStack_98 = &UNK_11098eb08;
        _objc_retain(puVar5);
        puStack_90 = puVar5;
        _objc_retain(puVar6);
        puStack_88 = puVar6;
        _objc_retain(puVar4);
        puStack_80 = puVar4;
        func_0x00010be1c5e0(param_1);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(puStack_80);
        _objc_release(puStack_88);
        _objc_release(puStack_90);
      }
      _dispatch_group_enter(puVar4);
      uVar7 = uVar1;
      func_0x00010c0dfd40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0d36c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x1070f68b8;
      puStack_d0 = &UNK_11098eb08;
      _objc_retain(puVar5);
      puStack_c8 = puVar5;
      _objc_retain(puVar6);
      puStack_c0 = puVar6;
      _objc_retain(puVar4);
      puStack_b8 = puVar4;
      func_0x00010be1c5c0(param_1);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _dispatch_group_enter(puVar4);
      uVar7 = uVar1;
      func_0x00010c0dfd40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2a09a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf0ed00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      puStack_120 = puVar12;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x1070f6948;
      puStack_108 = &UNK_11098eb08;
      puStack_100 = puVar5;
      puStack_f8 = puVar6;
      _objc_retain(puVar4);
      puStack_f0 = puVar4;
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      func_0x00010be1c600(param_1);
      _objc_release(puStack_f0);
      _objc_release(puStack_f8);
      _objc_release(puStack_100);
      _objc_release(uVar10);
      _objc_release(puStack_b8);
      _objc_release(puStack_c0);
      _objc_release(puStack_c8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar9);
      uVar13 = uVar13 + 1;
      uVar7 = uVar1;
      func_0x00010bf529e0();
    } while (uVar13 < uVar7);
  }
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1070f69d8;
  puStack_170 = &UNK_11086e848;
  puStack_188 = puVar12;
  uStack_168 = param_1;
  uStack_160 = param_5;
  uStack_158 = param_3;
  uStack_150 = param_4;
  puStack_148 = puVar3;
  puStack_140 = puVar2;
  uStack_138 = param_6;
  uStack_130 = param_7;
  uStack_128 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x000100bc0718(puVar4,PTR___dispatch_main_q_11034be20,&puStack_188);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(puStack_140);
  _objc_release(puStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070f6828; end: 1070f69d7;  */

void FUN_1070f6828(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = 4;
    func_0x00010b697c6c(4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070f69d8; end: 1070f74c7;  */

void FUN_1070f69d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined **ppuStack_2a0;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar1;
  func_0x0001070c4724();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar21;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar21);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar21;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(uVar1);
  puVar4 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d2400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar7 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar8;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar21;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar22;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar22);
  _objc_release(uVar1);
  _objc_release(uVar21);
  _objc_release(uVar8);
  puVar5 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  _dispatch_group_create();
  uVar23 = 0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 1;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1070ced0c;
  uStack_a8 = 0x1070ced1c;
  uStack_a0 = 0;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110f314b8;
  do {
    uVar13 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (uVar13 <= uVar23) {
      puVar7 = puVar5;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a8 = 0xc2000000;
        pcStack_1a0 = FUN_1070f7628;
        puStack_198 = &UNK_11098eb38;
        uStack_190 = *(undefined8 *)(param_1 + 0x20);
        uVar21 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar21);
        uStack_188 = uVar21;
        _objc_retain(puVar5);
        uVar21 = *(undefined8 *)(param_1 + 0x38);
        puStack_180 = puVar5;
        _objc_retain(uVar21);
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        uStack_178 = uVar21;
        _objc_retain(uVar1);
        uStack_170 = uVar1;
        _objc_retain(uVar2);
        uVar21 = *(undefined8 *)(param_1 + 0x28);
        uStack_168 = uVar2;
        _objc_retain(uVar21);
        uVar1 = *(undefined8 *)(param_1 + 0x50);
        uStack_160 = uVar21;
        _objc_retain(uVar1);
        uVar21 = *(undefined8 *)(param_1 + 0x58);
        uStack_158 = uVar1;
        _objc_retain(uVar21);
        puStack_140 = &uStack_98;
        puStack_138 = &uStack_c8;
        uStack_150 = uVar21;
        _objc_retain(ppuVar12);
        ppuVar19 = &puStack_1b0;
        ppuStack_148 = ppuVar12;
        _objc_retainBlock();
        _dispatch_group_enter(ppuVar12);
        puVar7 = PTR_PTR_1126c4ad0;
        _objc_alloc(PTR_PTR_1126c4ad0);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf46560(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar8;
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar21;
        func_0x00010c0d9500();
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c13b540(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar16;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar22;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060b80(puVar7);
        _objc_release(uVar9);
        _objc_release(uVar22);
        _objc_release(uVar16);
        _objc_release(uVar1);
        _objc_release(uVar21);
        _objc_release(uVar8);
        puVar20 = PTR_PTR_1126c4ac8;
        _objc_alloc(PTR_PTR_1126c4ac8);
        uVar21 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e0320(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb3dc0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c0525e0(puVar20);
        _objc_release(uVar21);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e8 = 0xc2000000;
        pcStack_1e0 = FUN_1070f7c28;
        puStack_1d8 = &UNK_11098e9b8;
        _objc_retain(ppuVar19);
        puStack_1c0 = &uStack_98;
        puStack_1b8 = &uStack_c8;
        ppuStack_1c8 = ppuVar19;
        _objc_retain(ppuVar12);
        ppuStack_1d0 = ppuVar12;
        func_0x00010bf16e60(puVar7);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(ppuStack_1d0);
        _objc_release(ppuStack_1c8);
        _objc_release(puVar20);
        _objc_release(puVar7);
        _objc_release(ppuVar19);
        _objc_release(ppuStack_148);
        _objc_release(uStack_150);
        _objc_release(uStack_158);
        _objc_release(uStack_160);
        _objc_release(uStack_168);
        _objc_release(uStack_170);
        _objc_release(uStack_178);
        _objc_release(puStack_180);
        _objc_release(uStack_188);
      }
      uVar1 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_1070f7cd0;
      puStack_250 = &UNK_11098e9e8;
      uStack_240 = *(undefined8 *)(param_1 + 0x20);
      uVar21 = *(undefined8 *)(param_1 + 0x28);
      uStack_248 = uVar2;
      puStack_238 = puVar4;
      puStack_230 = puVar6;
      _objc_retain(uVar21);
      uVar22 = *(undefined8 *)(param_1 + 0x50);
      uStack_228 = uVar21;
      ppuStack_220 = ppuVar12;
      _objc_retain(uVar22);
      uVar21 = *(undefined8 *)(param_1 + 0x58);
      uStack_218 = uVar22;
      _objc_retain(uVar21);
      puStack_200 = &uStack_98;
      uVar22 = *(undefined8 *)(param_1 + 0x60);
      uStack_210 = uVar21;
      _objc_retain(uVar22);
      puStack_1f8 = &uStack_c8;
      uStack_208 = uVar22;
      _objc_retain(ppuVar12);
      _objc_retain(puVar6);
      _objc_retain(puVar4);
      _objc_retain(uVar2);
      func_0x000100bc0718(ppuVar12,uVar1,&puStack_268);
      _objc_release(uVar1);
      _objc_release(uStack_208);
      _objc_release(uStack_210);
      _objc_release(uStack_218);
      _objc_release(ppuStack_220);
      _objc_release(uStack_228);
      _objc_release(puStack_230);
      _objc_release(puStack_238);
      _objc_release(uStack_248);
      __Block_object_dispose(&uStack_c8,8);
      _objc_release(uStack_a0);
      _objc_release(ppuVar12);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(uVar2);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(ppuVar11);
      _objc_release(puVar5);
      _objc_release(uVar10);
      _objc_release(uVar3);
      return;
    }
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1070f74c8;
    puStack_e0 = &UNK_11098e928;
    uVar21 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar21);
    uStack_d0 = (undefined4)uVar23;
    puVar7 = puVar4;
    uStack_d8 = uVar21;
    func_0x00010bfece40();
    if (puVar7 == (undefined *)0x7fffffffffffffff) {
      func_0x00010bef92c0(puVar5);
      puVar7 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar19 = ppuStack_2a0;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar11);
LAB_1070f6fe0:
      _objc_release(ppuVar19);
      _objc_release(puVar7);
    }
    else {
      puVar20 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 < puVar20) {
        _dispatch_group_enter(ppuVar12);
        puVar7 = puVar6;
        func_0x00010c0dfd40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar14;
        func_0x0001070c5a88();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar1;
        func_0x00010bf8c440();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar22;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010010fab4();
        uVar21 = uVar15;
        if ((int)uVar16 == 0) {
          uVar21 = 0;
        }
        _objc_retain(uVar21);
        _objc_release(uVar15);
        uVar16 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c0dfd40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0dfd40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR_PTR_1126b2220;
        _objc_alloc();
        puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560();
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_1070f7580;
        puStack_118 = &UNK_11098e958;
        puStack_108 = &uStack_98;
        puStack_100 = &uStack_c8;
        _objc_retain(ppuVar12);
        ppuStack_110 = ppuVar12;
        func_0x00010c131240(uVar9);
        _objc_release(puVar20);
        _objc_release(puVar18);
        _objc_release(uVar17);
        _objc_release(uVar15);
        _objc_release(uVar16);
        _objc_release(uVar21);
        _objc_release(uVar8);
        _objc_release(uVar9);
        _objc_release(uVar22);
        _objc_release(uVar1);
        _objc_release(uVar14);
        ppuVar19 = ppuStack_110;
        goto LAB_1070f6fe0;
      }
    }
    _objc_release(uStack_d8);
    uVar23 = uVar23 + 1;
  } while( true );
}



/* Entry: 1070f74c8; end: 1070f757f;  */

bool FUN_1070f74c8(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_60,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar1);
  }
  puVar2 = &uStack_60;
  _CMTimeRangeEqual(puVar2,&uStack_90);
  _objc_release(lVar1);
  _objc_release(param_2);
  return (int)puVar2 != 0;
}



/* Entry: 1070f7580; end: 1070f7627;  */

void FUN_1070f7580(long param_1,long param_2,undefined8 param_3,byte param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_2 != 0) {
    bVar1 = param_4 & *(byte *)(lVar3 + 0x18);
  }
  bVar2 = 0;
  if (param_5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x18) = bVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar3 = param_5;
  if (param_5 == 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070f7628; end: 1070f7af3;  */

void FUN_1070f7628(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined8 uVar33;
  
  ppuVar32 = *(undefined ***)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar32;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9fd0;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar32);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d22a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf3f040();
  func_0x00010b5fbca8();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c600();
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x0001070c5674();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240();
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081200();
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbabe0();
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e0320();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar31 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  uVar33 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar33);
  func_0x00010bef9e60(uVar8);
  _objc_release(param_2);
  _objc_release(puVar30);
  _objc_release(puVar31);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
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
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar33);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1070f7af4; end: 1070f7b9b;  */

void FUN_1070f7af4(long param_1,undefined8 param_2,long param_3,byte param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = param_4 & *(byte *)(lVar3 + 0x18);
  }
  bVar2 = 0;
  if (param_5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(lVar3 + 0x18) = bVar2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar3 = param_5;
  if (param_5 == 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
  }
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070f7b9c; end: 1070f7c27;  */

void FUN_1070f7b9c(long param_1,long param_2)

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
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 1070f7c28; end: 1070f7ccf;  */

void FUN_1070f7c28(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_3 == 0) || (param_4 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    lVar1 = param_4;
    if (param_4 == 0) {
      lVar1 = *(long *)(lVar4 + 0x28);
    }
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
    _objc_retain(param_4);
    _objc_release(uVar3);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar2 = *(code **)(lVar1 + 0x10);
    _objc_retain(0);
    (*pcVar2)(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1070f7cd0; end: 1070f8033;  */

void FUN_1070f7cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar9 = 0;
    do {
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (uVar9 < uVar5) {
        uVar5 = *(ulong *)(param_1 + 0x40);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar6);
        if ((uVar5 & 1) == 0) {
          _dispatch_group_enter(*(undefined8 *)(param_1 + 0x48));
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar1;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar6;
          func_0x00010bf6d080();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c0dfd40(uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b2220;
          _objc_alloc(PTR_PTR_1126b2220);
          puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560(puVar7);
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0xc2000000;
          pcStack_98 = FUN_1070f8034;
          puStack_90 = &UNK_110943a18;
          uStack_80 = *(undefined8 *)(param_1 + 0x68);
          uVar11 = *(undefined8 *)(param_1 + 0x48);
          _objc_retain(uVar11);
          uStack_88 = uVar11;
          func_0x00010bf6c840(uVar12);
          _objc_release(puVar7);
          _objc_release(puVar8);
          _objc_release(uVar2);
          _objc_release(uVar12);
          _objc_release(uVar10);
          _objc_release(uVar6);
          _objc_release(uVar1);
          _objc_release(uStack_88);
        }
      }
      uVar9 = uVar9 + 1;
      uVar5 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (uVar9 < uVar5);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1070f8058;
  puStack_d8 = &UNK_11084be40;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar12);
  uStack_c8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = uVar12;
  _objc_retain(uVar1);
  uStack_b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = uVar1;
  func_0x000100bc0718(uVar10,uVar6,&puStack_f0);
  _objc_release(uVar6);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(puVar3);
  return;
}



/* Entry: 1070f8034; end: 1070f8057;  */

void FUN_1070f8034(long param_1,byte param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  bVar1 = 0;
  if (param_3 == 0) {
    bVar1 = param_2 & *(byte *)(lVar2 + 0x18);
  }
  *(byte *)(lVar2 + 0x18) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070f8058; end: 1070f8253;  */

void FUN_1070f8058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1070f8254;
  puStack_80 = &UNK_11084be40;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar6;
  _objc_retain(uVar7);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar7;
  puStack_70 = puVar5;
  _objc_retain(puVar5);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(puStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1070f8254; end: 1070f827b;  */

void FUN_1070f8254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070f8278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  return;
}



/* Entry: 1070f827c; end: 1070f8787; -[PreviewViewController _replaceTimelineSnapsWithBlob:overlayFormat:overlay:savedToken:gallerySavingEventId:captureSessionId:completionHandler:] */

void FUN_1070f827c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  _dispatch_group_create();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000107e00808();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    _dispatch_group_enter(lVar1);
    lVar2 = lVar3;
    func_0x00010bf377a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c254140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c000();
    lVar8 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf3f860();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1070f8788;
    puStack_98 = &UNK_11098eb08;
    _objc_retain(puVar5);
    puStack_90 = puVar5;
    _objc_retain(puVar6);
    puStack_88 = puVar6;
    _objc_retain(lVar1);
    lStack_80 = lVar1;
    func_0x00010be1c5e0(param_1);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lStack_80);
    _objc_release(puStack_88);
    _objc_release(puStack_90);
  }
  _dispatch_group_enter(lVar1);
  lVar2 = lVar4;
  func_0x00010c0d36c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1070f8818;
  puStack_d0 = &UNK_11098eb08;
  puStack_e8 = puVar10;
  _objc_retain(puVar5);
  puStack_c8 = puVar5;
  _objc_retain(puVar6);
  puStack_c0 = puVar6;
  _objc_retain(lVar1);
  lStack_b8 = lVar1;
  func_0x00010be1c5c0(param_1);
  _objc_release(lVar2);
  _dispatch_group_enter(lVar1);
  lVar2 = lVar4;
  func_0x00010c2a09a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf0ed00();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1070f88a8;
  puStack_108 = &UNK_11098eb08;
  puStack_120 = puVar10;
  _objc_retain(puVar5);
  puStack_100 = puVar5;
  _objc_retain(puVar6);
  puStack_f8 = puVar6;
  lStack_f0 = lVar1;
  _objc_retain(lVar1);
  func_0x00010be1c600(param_1);
  _objc_release(lVar7);
  _objc_release(lVar2);
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1070f8938;
  puStack_178 = &UNK_11098eb68;
  uStack_128 = param_9;
  puStack_190 = puVar10;
  lStack_170 = param_1;
  uStack_168 = param_3;
  uStack_160 = param_4;
  uStack_158 = param_5;
  uStack_150 = param_7;
  uStack_148 = param_8;
  uStack_140 = param_6;
  puStack_138 = puVar6;
  puStack_130 = puVar5;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20,&puStack_190);
  _objc_release(puStack_130);
  _objc_release(puStack_138);
  _objc_release(uStack_128);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(lStack_f0);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_release(lStack_b8);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar4);
  return;
}



/* Entry: 1070f8788; end: 1070f8937;  */

void FUN_1070f8788(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126c4ba8;
    func_0x00010bf0b0e0(PTR_PTR_1126c4ba8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = 4;
    func_0x00010b697c6c(4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1070f8938; end: 1070f9113;  */

void FUN_1070f8938(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lStack_268;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001070c4724();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar4;
  func_0x00010c270320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lStack_268 = *(long *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lStack_268;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010c07f160();
  _objc_release(lVar3);
  _objc_release();
  if (((int)lVar15 == 0) || (lStack_268 = lVar4, func_0x00010c1581e0(), lStack_268 != 1)) {
    _dispatch_group_create();
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uStack_138 = 1;
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_1070ced0c;
    uStack_160 = 0x1070ced1c;
    uStack_158 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(uVar8);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(lVar19);
    lVar15 = 0x10;
    lVar3 = lVar19;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar16 = *plStack_1b0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1b0 != lVar16) {
            _objc_enumerationMutation(lVar19);
          }
          _dispatch_group_enter(lStack_268);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar10;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x00010bf8c440();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar5;
          func_0x00010c13a8c0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_1 + 0x30);
          _objc_retain(uVar17);
          uVar8 = uVar17;
          func_0x00010010fab4(uVar17,PTR_DAT_1126a5938);
          uVar14 = uVar17;
          if ((int)uVar8 == 0) {
            uVar14 = 0;
          }
          _objc_retain();
          _objc_release(uVar17);
          uVar8 = *(undefined8 *)(param_1 + 0x58);
          func_0x00010bf51e00();
          puVar12 = PTR_PTR_1126b2220;
          _objc_alloc();
          puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560();
          puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1f0 = 0xc2000000;
          uStack_1e8 = 0x1070f91ec;
          puStack_1e0 = &UNK_11098e958;
          puStack_1d0 = &uStack_150;
          puStack_1c8 = &uStack_180;
          _objc_retain(lStack_268);
          lStack_1d8 = lStack_268;
          func_0x00010c131240(uVar18);
          _objc_release(puVar12);
          _objc_release(puVar13);
          _objc_release(uVar8);
          _objc_release(uVar14);
          _objc_release(lVar11);
          _objc_release(uVar18);
          _objc_release(uVar9);
          _objc_release(uVar6);
          _objc_release(uVar10);
          _objc_release(lStack_1d8);
          lVar15 = lVar15 + 1;
        } while (lVar3 != lVar15);
        lVar15 = 0x10;
        lVar3 = lVar19;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar19);
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_1070f9294;
    puStack_228 = &UNK_11084be40;
    uStack_218 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x68);
    uStack_220 = uVar7;
    _objc_retain(uVar14);
    puStack_208 = &uStack_150;
    puStack_200 = &uStack_180;
    uStack_210 = uVar14;
    _objc_retain(uVar7);
    func_0x000100bc0718(lStack_268,PTR___dispatch_main_q_11034be20,&puStack_240);
    _objc_release(uStack_210);
    _objc_release(uStack_220);
    _objc_release(uVar20);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_150,8);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c112180();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c27eaa0();
    if ((int)uVar14 == 0) {
      lStack_268 = 0;
    }
    else {
      lStack_268 = *(long *)(param_1 + 0x20);
      func_0x00010bdd5c80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar6);
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    uVar14 = uVar18;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1070f9114;
    puStack_118 = &UNK_11098e4b8;
    uVar20 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar20);
    uStack_110 = uVar7;
    uStack_108 = uVar20;
    _objc_retain();
    lVar15 = lStack_268;
    func_0x00010be999e0(uVar18);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(uStack_110);
    _objc_release(uStack_108);
    _objc_release(uVar7);
  }
  _objc_release(lStack_268);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_180,8);
  uVar14 = 8;
  __Block_object_dispose(&uStack_150);
  __Unwind_Resume();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar5 + 0x20);
  lVar19 = *(long *)(lVar5 + 0x28);
  _objc_retain(lVar15);
  _objc_retain(uVar14);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  bVar2 = lVar15 == 0;
  lVar5 = lVar15;
  (**(code **)(lVar19 + 0x10))(lVar19,lVar4,puVar12);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  bVar1 = 0;
  if (lVar4 != 0) {
    bVar1 = bVar2 & *(byte *)(*(long *)(*(long *)(puVar12 + 0x28) + 8) + 0x18);
  }
  bVar2 = 0;
  if (lVar5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(*(long *)(*(long *)(puVar12 + 0x28) + 8) + 0x18) = bVar2;
  lVar3 = *(long *)(*(long *)(puVar12 + 0x30) + 8);
  lVar19 = lVar5;
  if (lVar5 == 0) {
    lVar19 = *(long *)(lVar3 + 0x28);
  }
  _objc_retain(lVar19);
  uVar14 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar19;
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  _objc_release(uVar14);
  _dispatch_group_leave(*(undefined8 *)(puVar12 + 0x20));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1070f9114; end: 1070f9293;  */

void FUN_1070f9114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  bVar2 = param_5 == 0;
  lVar5 = param_5;
  (**(code **)(lVar7 + 0x10))(lVar7,lVar4,puVar3);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  bVar1 = 0;
  if (lVar4 != 0) {
    bVar1 = bVar2 & *(byte *)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x18);
  }
  bVar2 = 0;
  if (lVar5 == 0) {
    bVar2 = bVar1;
  }
  *(byte *)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x18) = bVar2;
  lVar6 = *(long *)(*(long *)(puVar3 + 0x30) + 8);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = *(long *)(lVar6 + 0x28);
  }
  _objc_retain(lVar7);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar7;
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  _objc_release(uVar8);
  _dispatch_group_leave(*(undefined8 *)(puVar3 + 0x20));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1070f9294; end: 1070f9427;  */

void FUN_1070f9294(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar6 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c5aac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),puVar7,
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1070f9428; end: 1070f9797; -[PreviewViewController _reSaveTimelineDraftAsNewCopy:globalGallerySnapOverlay:globalOverlayFormat:localGallerySnapOverlays:localOverlayFormats:savedToken:saveSessionId:gallerySavingEventId:captureSessionId:mediaOrigin:completionHandler:] */

void FUN_1070f9428(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
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
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
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
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf926c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar7 == 0) {
    uVar4 = param_1;
    func_0x00010be6ea60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1070f9798;
    puStack_78 = &UNK_11098eb98;
    _objc_retain(puVar2);
    puStack_70 = puVar2;
    func_0x00010c297260(uVar4,param_2,&puStack_90,puVar3);
    _objc_release(uVar4);
    _objc_release(puStack_70);
  }
  else {
    func_0x00010bf43d60(puVar2,param_2,0);
  }
  puVar8 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1070f97ac;
  puStack_f8 = &UNK_11098ebc8;
  uStack_c8 = param_9;
  uStack_b8 = param_10;
  uStack_b0 = param_11;
  uStack_a8 = param_12;
  uStack_a0 = param_13;
  uStack_f0 = param_1;
  uStack_e8 = param_4;
  uStack_e0 = param_5;
  uStack_d8 = param_6;
  uStack_d0 = param_7;
  uStack_c0 = param_8;
  uStack_98 = param_3;
  _objc_retain();
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_13);
  func_0x00010c297260(puVar8,param_2,&puStack_110,puVar3);
  _objc_release(puVar8);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_a0);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_13);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1070f9798; end: 1070f97ab;  */

void FUN_1070f9798(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1070f97ac; end: 1070f9bdf;  */

void FUN_1070f97ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
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
  undefined *puStack_a0;
  
  _objc_retain(param_2);
  lVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b1c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_a0 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c270320();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar6 != 0) {
      puVar7 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c270320();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_a0);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puStack_a0 = puVar11;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar12);
    func_0x00010bf3d240();
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be9d6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x0001070c5674();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240();
    func_0x00010be99ac0(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = *(undefined **)(param_1 + 0x70);
    _objc_retain(puStack_a0);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  _objc_release(puStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070f9be0; end: 1070f9bf3;  */

void FUN_1070f9be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070f9bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070f9bf4; end: 1070f9c4b; -[PreviewViewController cloudSyncTriggerSourceWithSavingSource:] */

void FUN_1070f9bf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 5) {
    ppuVar1 = &PTR_PTR_110a11f60;
  }
  else {
    if (param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_1070f9c3c;
    }
    ppuVar1 = &PTR_PTR_110a11f98;
  }
  ppuVar1 = (undefined **)*ppuVar1;
  _objc_retain(ppuVar1);
LAB_1070f9c3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1070f9c4c; end: 1070f9dcf; -[PreviewViewController _segmentsSmartTemplateFeatureTagDictionary] */

void FUN_1070f9c4c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar7 = 0;
  while( true ) {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar5 <= uVar7) break;
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010bf5ac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar5;
      func_0x00010bf5ac00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,uVar2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar2);
    }
    _objc_release(uVar5);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070f9dd0; end: 1070f9f53; -[PreviewViewController _showAssetChangesSaveProgress] */

void FUN_1070f9dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1070f9f54;
  puStack_50 = &UNK_1108471b0;
  uStack_48 = param_1;
  func_0x00010c0bbfc0(puVar1,param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afd30;
  _objc_alloc(PTR_PTR_1126afd30);
  func_0x00010bfffc60();
  func_0x00010befbb60(puVar1,param_2,puVar4);
  puStack_90 = puVar2;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1070f9fdc;
  puStack_78 = &UNK_1108471b0;
  _objc_retain(puVar1);
  puStack_70 = puVar1;
  func_0x00010c0bbfc0(puVar4,param_2,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c24dbc0(puVar4);
  puVar2 = puStack_70;
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070f9f54; end: 1070fa043;  */

void FUN_1070f9f54(long param_1,long param_2)

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



/* Entry: 1070fa044; end: 1070fa19b; -[PreviewViewController _setLatestEditStatesOfMultiSnapManuallySaved] */

void FUN_1070fa044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  long lVar15;
  long lVar16;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar15 = *plStack_110;
    do {
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar16 * 8);
        func_0x00010bf51e00();
        func_0x00010befa120(puVar1,param_2,uVar4);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  func_0x00010c1b9420(param_1,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar5;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c14bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c07d220();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar5);
    if ((int)puVar8 != 0) {
      puVar5 = puVar1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar14;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfbda60();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar14);
      _objc_release(puVar5);
      if ((int)puVar8 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        puVar14 = puVar1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar14;
        func_0x00010bf167e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar14);
        puVar14 = puVar7;
        func_0x00010bf529e0();
        if (puVar14 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            puVar8 = puVar7;
            func_0x00010c0dfd40(puVar7,param_2,puVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar1;
            func_0x00010bf16ce0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar6;
            func_0x00010c0d2420();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar10 = puVar9;
            func_0x00010c09df80(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010bf51e00();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar13 = puVar8;
            func_0x00010c280560(puVar8);
            func_0x00010c0df780(puVar6,param_2,puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar5,param_2,puVar12,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            puVar14 = puVar14 + 1;
            puVar6 = puVar7;
            func_0x00010bf529e0();
          } while (puVar14 < puVar6);
        }
        func_0x00010c1b9400(puVar1,param_2,puVar5);
        _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1070fa19c; end: 1070fa457; -[PreviewViewController _setLatestEditStatesOfBatchCaptureSnapsManuallySaved] */

void FUN_1070fa19c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  uVar10 = param_1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar10 != 0) {
    uVar10 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c14bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07d220();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar10);
    if ((int)uVar4 != 0) {
      uVar10 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar10;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfbda60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar10);
      if ((int)uVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar10 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar10;
        func_0x00010bf167e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar10);
        uVar10 = uVar2;
        func_0x00010bf529e0();
        if (uVar10 != 0) {
          uVar10 = 0;
          do {
            uVar1 = uVar2;
            func_0x00010c0dfd40(uVar2,param_2,uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_1;
            func_0x00010bf16ce0(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0d2420();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            uVar3 = uVar4;
            func_0x00010c09df80(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bf51e00();
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar8 = uVar1;
            func_0x00010c280560(uVar1);
            func_0x00010c0df780(puVar9,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar5,param_2,uVar7,puVar9);
            _objc_release(puVar9);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar3);
            _objc_release(uVar4);
            _objc_release(uVar1);
            uVar10 = uVar10 + 1;
            uVar1 = uVar2;
            func_0x00010bf529e0();
          } while (uVar10 < uVar1);
        }
        func_0x00010c1b9400(param_1,param_2,puVar5);
        _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1070fa458; end: 1070fa647; -[PreviewViewController _updateSaveButtonAndSnapEditingState] */

void FUN_1070fa458(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07e920();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed8cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateGallerySnapEditingStates_112593cd0);
    return;
  }
  uVar1 = param_1;
  func_0x00010c2440a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7a20(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c111a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7a20(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07cfa0();
    if ((uVar5 & 1) == 0) {
      uVar5 = param_1;
      func_0x00010c2440a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c07e6a0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar6 != 0) {
        uVar1 = param_1;
        func_0x00010c1122a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c14a120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137fe0();
        _objc_release(uVar2);
        _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__removeTransparentExternalShareS_112581098);
        return;
      }
      return;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070fa648; end: 1070fa69f; -[PreviewViewController _updateGallerySnapEditingStates] */

void FUN_1070fa648(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee66e0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c244120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7a20(param_1,param_2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1070fa6a0; end: 1070fa883; -[PreviewViewController _saveAssetDataPackagesWithCompletion:] */

void FUN_1070fa6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
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
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1070fa884;
  puStack_60 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  func_0x00010be99de0(param_1);
  _dispatch_group_enter(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1070fa88c;
  puStack_88 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  func_0x00010be996e0(param_1);
  _dispatch_group_enter(uVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1070fa894;
  puStack_b0 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_a8 = uVar2;
  func_0x00010be99460(param_1);
  _dispatch_group_enter(uVar2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1070fa89c;
  puStack_d8 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_d0 = uVar2;
  func_0x00010c14b5e0(param_1);
  _dispatch_group_enter(uVar2);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x1070fa8a4;
  puStack_100 = &UNK_110842e18;
  uStack_f8 = uVar2;
  _objc_retain(uVar2);
  func_0x00010be9a480(param_1);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1070fa8ac;
  puStack_128 = &UNK_110849530;
  uStack_120 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_140);
  _objc_release(uStack_120);
  _objc_release(uStack_f8);
  _objc_release(uStack_d0);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1070fa884; end: 1070fa8bf;  */

void FUN_1070fa884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070fa8c0; end: 1070faa0b; -[PreviewViewController _saveLensAssetDataPackageWithCompletion:] */

void FUN_1070fa8c0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08fec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c1111c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b2c0();
  }
  else {
    puVar4 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
    func_0x00010c1111c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28f1a0();
    _objc_release(puVar2);
    puVar2 = param_1;
    param_1 = puVar4;
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070faa0c; end: 1070fad13; -[PreviewViewController _saveStickerAssetDataPackageWithCompletion:] */

void FUN_1070faa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  lVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _dispatch_group_create();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        func_0x00010c253880(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c271a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        lVar5 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c07faa0();
        _objc_release(lVar5);
        if ((int)lVar6 != 0) {
          lVar5 = param_1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c231f00();
          _objc_release(lVar5);
          if ((int)lVar6 != 0) {
            _dispatch_group_enter(lVar1);
            lVar5 = param_1;
            func_0x00010c269d40(param_1);
            _objc_retainAutoreleasedReturnValue();
            puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_160 = 0xc2000000;
            pcStack_158 = FUN_1070fad14;
            puStack_150 = &UNK_110842e18;
            _objc_retain(lVar1);
            lStack_148 = lVar1;
            func_0x00010c109fc0(lVar5);
            _objc_release(lVar5);
            _objc_release(lStack_148);
          }
        }
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x1070fad1c;
  puStack_178 = &UNK_110849530;
  uStack_170 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(lVar1,PTR___dispatch_main_q_11034be20,&puStack_190);
  _objc_release(uStack_170);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar3 + 0x20));
  return;
}



/* Entry: 1070fad14; end: 1070fad2f;  */

void FUN_1070fad14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1070fad30; end: 1070faf4b; -[PreviewViewController _didCompleteSavingToGalleryFromPreviewWithSessionId:manualSave:saveToCameraRoll:isCustomStory:success:error:gallerySnaps:entryId:galleryType:captureSessionId:savingType:] */

void FUN_1070fad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5
                  ,int param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_8);
  lVar7 = param_9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  if ((param_6 != 0) && (param_4 == 0)) {
    lVar2 = param_9;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  lVar7 = 0;
  bVar1 = false;
  if (((int)param_7 != 0) && (lVar2 != 0)) {
    lVar7 = lVar2;
    func_0x00010b5fa088();
    bVar1 = lVar7 - 2U < 0xb;
    lVar7 = lVar2;
    func_0x00010b5fa34c();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((param_5 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010be5f2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73f00();
    _objc_release(uVar3);
  }
  func_0x00010be5f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c241220(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_9;
  func_0x00010bf529e0();
  func_0x00010bf73fa0(param_1,param_2,param_3,param_7,param_8,param_10,param_11,lVar4,param_13,lVar5
                      ,lVar7,bVar1,(int)lVar6,0);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070faf4c; end: 1070fafe7; -[PreviewViewController _useGalleryEditingStateForTrackingEdits] */

ulong FUN_1070faf4c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    param_1 = 1;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07f160();
    if ((uVar4 & 1) == 0) {
      func_0x00010be44a20(param_1);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1070fafe8; end: 1070fb0df; -[PreviewViewController _getGenericAssetMediasIfAvailable] */

void FUN_1070fafe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2325e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8240();
    _objc_release(puVar3);
  }
  func_0x00010c1111c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070fb0e0; end: 1070fb0e7;  */

void FUN_1070fb0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeUcoGenericAssetsDataPackag_112629590);
  return;
}



/* Entry: 1070fb0e8; end: 1070fb173; -[PreviewViewController _shouldConfigureSaveDismissAnimation:savingSource:lens:] */

undefined4
FUN_1070fb0e8(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_5 == 0) {
    lVar3 = param_1;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c07e840();
      _objc_release(param_1);
      uVar1 = 0;
      if (param_4 == 1) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((int)lVar3 != 0) {
        uVar2 = uVar1;
      }
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 1070fb174; end: 1070fb45f; -[PreviewViewController _saveMusicAssetDataPackageWithCompletion:] */

void FUN_1070fb174(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar1 = PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_78 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  if (lVar8 == 0) {
    uVar11 = *(uint *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar10 = uVar9;
  }
  else {
    func_0x00010bdc1120(&uStack_b0,lVar8);
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    uVar10 = uStack_a0;
    uVar11 = uStack_a4;
  }
  lVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = lVar7;
  if ((lVar7 != 0) && ((uVar11 & 1) != 0)) {
    uStack_b0 = uStack_80;
    uStack_a8 = uStack_78;
    uStack_c8 = *(undefined8 *)(puVar1 + 8);
    uStack_d0 = *(undefined8 *)puVar1;
    iVar2 = (int)&uStack_b0;
    param_2 = &uStack_d0;
    uStack_c0 = uVar9;
    uStack_a4 = uVar11;
    uStack_a0 = uVar10;
    _CMTimeCompare();
    if (0 < iVar2) {
      func_0x00010bf0ffa0(&uStack_d0,lVar7);
      uStack_e8 = uStack_80;
      uStack_e0 = uStack_78;
      uStack_dc = uVar11;
      uStack_d8 = uVar10;
      _CMTimeAdd(&uStack_b0,&uStack_d0,&uStack_e8);
      uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
      uStack_d0 = uStack_b0;
      uStack_c0 = uStack_a0;
      param_2 = &uStack_d0;
      func_0x0001084532b0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
    }
  }
  _objc_retain(param_3);
  _objc_retain(lVar4);
  func_0x00010be1c5c0(param_1);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010c12b2c0(*(undefined8 *)(lVar8 + 0x20));
  }
  else {
    func_0x00010c28f1a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001070fb4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x28) + 0x10))();
  return;
}



/* Entry: 1070fb460; end: 1070fb4a3;  */

void FUN_1070fb460(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010c12b2c0(*(undefined8 *)(param_1 + 0x20),0,2);
  }
  else {
    func_0x00010c28f1a0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001070fb4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1070fb4a4; end: 1070fb5b7; -[PreviewViewController _genericAssetForMusicSelection:completion:] */

void FUN_1070fb4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2518;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1070fb53c;
  puStack_40 = &UNK_11086f048;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfc01c0(puVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}


