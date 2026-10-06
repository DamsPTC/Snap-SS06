/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ddc7cc; end: 106ddc86b; -[SCGallerySendItemsTask _fetchLocationForMedia:snapId:] */

void FUN_106ddc7cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x348);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ddc86c;
  puStack_40 = &UNK_1108e87f0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c135bc0(uVar1,param_2,param_4,1,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ddc86c; end: 106ddc877;  */

void FUN_106ddc86c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1df230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPostLocation__1126556b0,param_2);
  return;
}



/* Entry: 106ddc878; end: 106ddcdb7; -[SCGallerySendItemsTask _createEphemeralMediaWithPhotoSnap:ephemeralMedia:completionHandler:] */

void FUN_106ddc878(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = param_2;
  func_0x00010be1a3a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106dd5438;
  uStack_88 = 0x106dd5448;
  _objc_retain(param_5);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106dd5438;
  uStack_b8 = 0x106dd5448;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106dd5438;
  uStack_e8 = 0x106dd5448;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_106dd5438;
  uStack_118 = 0x106dd5448;
  uStack_110 = 0;
  iVar2 = (int)*(undefined8 *)(param_2 + 0x1c8);
  uStack_80 = param_5;
  func_0x000108c2bd8c();
  if (iVar2 == 0) {
    uStack_170 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x00010b5f8c08();
    uStack_170 = (undefined1)uVar4;
  }
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106ddcdb8;
  puStack_150 = &UNK_110848c48;
  ppuVar5 = &puStack_168;
  lStack_148 = param_2;
  uStack_140 = param_1;
  _objc_retainBlock();
  puStack_1d8 = puVar1;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_106ddce10;
  puStack_1c0 = &UNK_11097cdd0;
  _objc_retain(lVar3);
  puStack_190 = &uStack_a8;
  lStack_1b8 = lVar3;
  lStack_1b0 = param_2;
  _objc_retain(param_4);
  uStack_1a8 = param_4;
  _objc_retain(param_6);
  puStack_188 = &uStack_108;
  puStack_180 = &uStack_138;
  uStack_1a0 = param_6;
  _objc_retain(ppuVar5);
  puStack_178 = &uStack_d8;
  ppuVar6 = &puStack_1d8;
  ppuStack_198 = ppuVar5;
  _objc_retainBlock();
  uVar11 = *(ulong *)(param_2 + 8);
  uVar4 = param_4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c06cde0();
  _objc_release(uVar11);
  _objc_release();
  if ((uVar7 & 1) == 0) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar9 = *(undefined8 *)(param_2 + 0x340);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar8 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_retain(uVar4);
    func_0x00010c135800(uVar9);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _dispatch_group_enter(uVar4);
    _objc_retain(uVar4);
    func_0x00010be11b80(param_2);
    uVar8 = param_4;
    func_0x00010bfd9dc0();
    if ((int)uVar8 != 0) {
      _dispatch_group_enter(uVar4);
      uVar9 = *(undefined8 *)(param_2 + 0x340);
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar8 = param_4;
      func_0x00010c241220(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar4);
      func_0x00010c136020(uVar9);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    puVar1 = PTR___dispatch_main_q_11034be20;
    func_0x000100bc0718(uVar4,PTR___dispatch_main_q_11034be20,ppuVar6);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(lStack_1b8);
  _objc_release(ppuVar5);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106ddcdb8; end: 106ddce0f;  */

void FUN_106ddcdb8(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106ddce10; end: 106ddd6e3;  */

void FUN_106ddce10(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x28);
    func_0x00010beb4840();
    if ((uVar3 & 1) != 0) goto LAB_106ddced0;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x1d0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c241220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf560a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 8);
  uVar11 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar6;
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_106ddced0:
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  func_0x00010bf42a00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12440(uVar6);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  func_0x00010bf3cf60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196d20(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
  func_0x00010b5fa124(*(undefined8 *)(param_2 + 0x30),1);
  func_0x00010c21acc0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c214bc0((double)param_1,uVar4);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  func_0x00010bfed740(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c1ac2c0(uVar4);
  lVar12 = lVar2;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  if (lVar13 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
    lVar12 = lVar2;
    func_0x00010c23f480(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar13;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(uVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar13);
    _objc_release(lVar12);
  }
  lVar12 = lVar2;
  FUN_106dee010();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  if (lVar12 == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c23ff80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x000106dee390();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  else {
    func_0x00010c2208c0(uVar4);
  }
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0fd5e0();
  _objc_release(uVar4);
  _objc_release(uVar11);
  if ((int)uVar5 != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x78);
    func_0x00010c0ee3a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c159d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar11);
    func_0x00010c2208c0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
    _objc_release(uVar5);
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  func_0x00010bf42a00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0ef4a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x338);
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x350);
  func_0x00010bf5f400(uVar11);
  func_0x000107fdcfb8(uVar4,uVar14,uVar5,uVar15,uVar11,
                      *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x138),
                      *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x2f0));
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar10 = PTR_PTR_1126bf6e8;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c273740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298c40(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee860(uVar5);
  _objc_release(puVar10);
  _objc_release(uVar4);
  uVar3 = *(ulong *)(param_2 + 0x30);
  func_0x00010b697ae8(uVar3,2);
  puVar10 = PTR_PTR_1126bfb98;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0ef4a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b580();
  _objc_release(uVar4);
  if (((uVar3 & 1) == 0) && ((int)puVar10 == 0)) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x000109023d98();
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (iVar1 != 0) {
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12fbe0(0);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(*(long *)(param_2 + 0x50) + 8);
      uVar4 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined **)(lVar13 + 0x28) = puVar10;
      _objc_release(uVar4);
      _objc_release(puVar9);
    }
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x28);
    _UIImageJPEGRepresentation(0x3fe3333333333333,uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4480(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
    puVar10 = *(undefined **)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x28);
    func_0x00010c1511c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 != (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
      func_0x00010b5fa85c();
      if (iVar1 != 0) {
        if ((*(byte *)(*(long *)(param_2 + 0x28) + 0x148) & 1) == 0) {
          puVar9 = puVar10;
          _UIImagePNGRepresentation(puVar10);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar9 = PTR_PTR_1126b9658;
          func_0x00010bf92f60(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x150),PTR_PTR_1126b9658);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c1c4e00(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
        func_0x00010c1c4e20(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
        _objc_release(puVar9);
      }
    }
    if (*(char *)(param_2 + 0x68) == '\x01') {
      lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar13 == 0) {
        puVar9 = PTR_PTR_1126b2378;
        _objc_opt_new(PTR_PTR_1126b2378);
        func_0x00010c183080(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
        _objc_release(puVar9);
      }
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
      func_0x00010bf4e840(uVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_106e18a10();
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28);
    func_0x00010bf4e840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bf308c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18ae8(uVar4,lVar13);
    _objc_release(lVar13);
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))();
    func_0x00010be53e60(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c0c5280(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
    func_0x00010be1a460(*(undefined8 *)(param_2 + 0x28));
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))
              (*(long *)(param_2 + 0x38),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28),0);
    _objc_release(puVar10);
  }
  else {
    func_0x00010be53e60(*(undefined8 *)(param_2 + 0x28));
    func_0x00010b5fa088();
    func_0x00010c21acc0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28));
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x380);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0ef4a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x28);
    _objc_opt_class(uVar14);
    func_0x00010c22bde0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar15);
    func_0x00010bfe8be0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(0);
  }
  _objc_release(uVar15);
  _objc_release(lVar12);
  _objc_release(uVar6);
  _objc_release(lVar2);
  return;
}



/* Entry: 106ddd6e4; end: 106ddd83f;  */

void FUN_106ddd6e4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c2216a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  if (param_2 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      puVar1 = param_2;
      _UIImagePNGRepresentation(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126b9658;
      func_0x00010bf92f60(*(undefined8 *)(param_1 + 0x38),PTR_PTR_1126b9658);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1c4e00(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    func_0x00010c1c4e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010bfae700(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106ddd840; end: 106ddd977;  */

void FUN_106ddd840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ddd978;
  puStack_78 = &UNK_11097cd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = puVar1;
  uStack_68 = param_3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106ddd978; end: 106ddda77;  */

void FUN_106ddd978(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ade0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000106ddd9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106ddda78; end: 106dddb8b;  */

void FUN_106ddda78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dddb8c; end: 106dddd1b; -[SCGallerySendItemsTask _galleryStoreStoryWithSnapDetail:originalPhoto:photoSnapOverlayFormat:ephemeralMediaClientId:photoSnap:] */

void FUN_106dddb8c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar2 != 0)) {
    lVar3 = param_7;
    func_0x00010bfd9dc0();
    uVar1 = (uint)lVar3 ^ 1;
    if (param_5 != 0) {
      uVar1 = 1;
    }
    if ((param_6 != 0) && (uVar1 != 0)) {
      lVar3 = param_7;
      func_0x00010b5fa088();
      _objc_release(lVar2);
      if (lVar3 == 7) goto LAB_106dddcdc;
      lVar3 = param_3;
      func_0x00010c0ef4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_7;
      func_0x00010b5fa414(param_7);
      lVar5 = param_7;
      func_0x00010c15fa20(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010721f324(param_4,param_5,lVar3,0,lVar4,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x1f8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257c80();
      _objc_release(uVar6);
    }
  }
  _objc_release(lVar2);
LAB_106dddcdc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dddd1c; end: 106dddf4f; -[SCGallerySendItemsTask _fetchImageForPhotoSnap:snapDetail:resultHandler:] */

void FUN_106dddd1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar6 = param_4;
  func_0x00010b5fa85c();
  puVar4 = PTR_PTR_1126bfbc8;
  if ((int)uVar6 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x328);
    func_0x000108ec16c0(*(undefined8 *)(param_2 + 0x1c8));
    func_0x00010bf586e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c134cc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar1 = param_6;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x290);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c0ef4a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar2 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfbf380(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(lVar1);
    uVar6 = param_4;
    func_0x000109023c14();
    lVar1 = lVar3;
    if ((int)uVar6 != 0) {
      func_0x000109023c78(param_4);
      func_0x00010bf5c820(1.0 / param_1,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    (**(code **)(param_6 + 0x10))(param_6,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106dddf50; end: 106dddf5b;  */

void FUN_106dddf50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dddf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106dddf5c; end: 106dde097; -[SCGallerySendItemsTask _logGallerySnapSendForEphemeralMedia:snapDetail:clientId:] */

void FUN_106dddf5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010be24140(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be5efe0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x350);
      uVar1 = *(undefined8 *)(param_1 + 0x138);
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      uVar5 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010bec4820();
      func_0x00010846b638();
      func_0x00010846b6bc();
      func_0x00010c105440();
      func_0x00010c105460();
      func_0x00010c0a7300(uVar6,param_2,param_3,lVar3,param_5,uVar1,uVar2,uVar5,lVar4,(char)param_1)
      ;
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dde098; end: 106dde1df; -[SCGallerySendItemsTask _createEphemeralMediaWithSnapDocWrapper:completionHandler:] */

void FUN_106dde098(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfbd940(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = param_3;
    func_0x00010bfbcca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c276460(param_3);
  func_0x00010bded660(param_1,param_2,lVar2,uVar6,param_4);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dde1e0; end: 106dde2b3; -[SCGallerySendItemsTask _createEphemeralMediaWithSnapDocBasedSnap:completionHandler:] */

void FUN_106dde1e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010bf8b160(param_3);
  func_0x00010bded660(param_1,param_2,param_3,uVar3,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dde2b4; end: 106dde593; -[SCGallerySendItemsTask _createEphemeralMediaWithSnap:snapDoc:totalDuration:completionHandler:] */

void FUN_106dde2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be1a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfc8d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar7 = param_1;
  func_0x00010beb4840();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar7 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x1c8);
    func_0x000108f483e0();
    if (iVar2 != 0) {
      lVar7 = param_1;
      func_0x00010bdeffc0(0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106dde594;
      puStack_90 = &UNK_110841f80;
      lStack_88 = param_1;
      _objc_retain();
      lStack_80 = lVar7;
      func_0x000100162d98("APPSTORE",&puStack_a8);
      _objc_release(lStack_80);
      goto LAB_106dde428;
    }
  }
  lVar7 = 0;
LAB_106dde428:
  uVar5 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(lVar7);
  _objc_retain(uVar6);
  _objc_retain(puVar3);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c279ac0(uVar5);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106dde594; end: 106dde6cb;  */

void FUN_106dde594(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x1d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebf140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a360(lVar1);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106dde920;
  puStack_b8 = &UNK_11097ce60;
  uVar8 = *(undefined8 *)(lVar1 + 0x58);
  _objc_retain(uVar8);
  uStack_b0 = param_2;
  uStack_a8 = uVar8;
  _objc_retain(param_2);
  ppuVar6 = &puStack_d0;
  _objc_retainBlock();
  uVar15 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(*(undefined8 *)(lVar1 + 0x28));
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(lVar1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x40);
  _objc_retain(uVar5);
  uVar9 = *(undefined8 *)(lVar1 + 0x48);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x50);
  _objc_retain(uVar10);
  _objc_retain(ppuVar6);
  uVar16 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(*(undefined8 *)(lVar1 + 0x28));
  uVar11 = *(undefined8 *)(lVar1 + 0x30);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(lVar1 + 0x38);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(lVar1 + 0x40);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(lVar1 + 0x48);
  _objc_retain(uVar14);
  uVar8 = *(undefined8 *)(lVar1 + 0x50);
  _objc_retain(uVar8);
  _objc_retain(ppuVar6);
  func_0x00010c0bed00(param_2);
  _objc_release(ppuVar6);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(ppuVar6);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release(ppuVar6);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(param_2);
  return;
}



/* Entry: 106dde6cc; end: 106dde91f;  */

void FUN_106dde6cc(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106dde920;
  puStack_68 = &UNK_11097ce60;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  uStack_60 = param_2;
  uStack_58 = uVar2;
  _objc_retain(param_2);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  _objc_retain(ppuVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar11);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  _objc_retain(ppuVar1);
  func_0x00010c0bed00(param_2);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(ppuVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106dde920; end: 106dde94b;  */

void FUN_106dde920(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bf3a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cleanUpMedia_1125ac1c8);
  return;
}



/* Entry: 106dde94c; end: 106dde9b3;  */

void FUN_106dde94c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bded5e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dde9b4; end: 106ddea5b;  */

void FUN_106dde9b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c29bb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ef960(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bded6e0(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ddea5c; end: 106ddeacf;  */

void FUN_106ddea5c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106ddead0;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106ddead0; end: 106ddeae3;  */

void FUN_106ddead0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ddeae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 106ddeae4; end: 106ddecd3; -[SCGallerySendItemsTask _createEphemeralMediaWithImage:snapDoc:snap:snapDetail:entry:venueId:firstEphemeralMedia:completionHandler:] */

void FUN_106ddeae4(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_10 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bf8b160(param_6);
    func_0x00010bdeffc0((double)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
  }
  else {
    _objc_retain(param_10);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bf8b160(param_6);
    _objc_release(param_6);
    func_0x00010c214bc0((double)param_1,param_10);
    func_0x00010c21acc0(param_10);
    param_2 = param_10;
  }
  uVar1 = param_4;
  _UIImageJPEGRepresentation(0x3fe3333333333333,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1c4480(param_2);
  func_0x00010c0c5280(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ddecd4;
  puStack_78 = &UNK_11084aaa8;
  uStack_68 = param_11;
  lStack_70 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_11);
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(lStack_70);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(param_11);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 106ddecd4; end: 106dded63;  */

void FUN_106ddecd4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *unaff_x20;
  float fVar13;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  lVar11 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_30);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0;
  (**(code **)(lVar1 + 0x10))(lVar1,puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lStack_28;
  uVar3 = uStack_30;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar10);
  _objc_retain(lVar11);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(uVar3);
  _objc_retain(lVar1);
  _objc_retain(unaff_x20);
  func_0x00010bf8b160(param_7);
  fVar13 = SUB84(param_1,0);
  func_0x00010c23cf80(PTR_PTR_1126b6600);
  if ((double)fVar13 <= param_1) {
LAB_106ddee84:
    puVar4 = PTR_PTR_1126ae558;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_b8 = lVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_9;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((lVar5 == 8) || (puVar12 = puVar4, func_0x00010be42ce0(), ((ulong)puVar12 & 1) != 0))
    goto LAB_106ddee84;
    uVar6 = param_6;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf30e80();
    if (((int)uVar7 == 2) || (puVar4[0x3b0] == '\x01')) {
      _objc_release(uVar6);
      goto LAB_106ddee84;
    }
    cVar2 = puVar4[0x3d0];
    _objc_release(uVar6);
    if (cVar2 == '\x01') goto LAB_106ddee84;
    puStack_c0 = (undefined *)0x0;
    puVar12 = puVar4;
    func_0x00010be4c540(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_c0;
    _objc_retain(puStack_c0);
    if (puVar9 != (undefined *)0x0) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_106ddf1a4;
      puStack_d8 = &UNK_11084aaa8;
      puStack_d0 = puVar9;
      puStack_c8 = unaff_x20;
      _objc_retain(unaff_x20);
      _objc_retain(puVar9);
      func_0x000100162d98("APPSTORE",&puStack_f0);
      _objc_release(puStack_c8);
      puVar8 = puStack_d0;
      puVar4 = unaff_x20;
      goto LAB_106ddf020;
    }
    puVar9 = *(undefined **)(puVar4 + 0x380);
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010c0c9f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(puVar12);
  if (lVar11 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126b9658;
    func_0x00010bf92f60(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000107e629e4();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(uVar3);
  _objc_retain(lVar1);
  puVar9 = PTR_PTR_1126d2988;
  _objc_retain(unaff_x20);
  _objc_retain(puVar12);
  func_0x00010c22bde0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4);
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar12);
  puVar8 = unaff_x20;
  puVar9 = unaff_x20;
LAB_106ddf020:
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106ddf1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar10 + 0x28) + 0x10))(*(long *)(lVar10 + 0x28),0,0);
  return;
}



/* Entry: 106dded64; end: 106ddf1a3; -[SCGallerySendItemsTask _createEphemeralMediaWithVideoURL:overlayImage:snapDoc:snap:snapDetail:entry:venueId:firstEphemeralMedia:completionHandler:] */

void FUN_106dded64(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined *param_12)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010bf8b160(param_7);
  fVar9 = SUB84(param_1,0);
  func_0x00010c23cf80(PTR_PTR_1126b6600);
  if ((double)fVar9 <= param_1) {
LAB_106ddee84:
    puVar3 = PTR_PTR_1126ae558;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_9;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((lVar2 == 8) || (puVar3 = param_2, func_0x00010be42ce0(), ((ulong)puVar3 & 1) != 0))
    goto LAB_106ddee84;
    uVar4 = param_6;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf30e80();
    if (((int)uVar5 == 2) || (param_2[0x3b0] == '\x01')) {
      _objc_release(uVar4);
      goto LAB_106ddee84;
    }
    cVar1 = param_2[0x3d0];
    _objc_release(uVar4);
    if (cVar1 == '\x01') goto LAB_106ddee84;
    puStack_90 = (undefined *)0x0;
    puVar8 = param_2;
    func_0x00010be4c540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_90;
    _objc_retain(puStack_90);
    if (puVar7 != (undefined *)0x0) {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_106ddf1a4;
      puStack_a8 = &UNK_11084aaa8;
      puStack_a0 = puVar7;
      puStack_98 = param_12;
      _objc_retain(param_12);
      _objc_retain(puVar7);
      func_0x000100162d98("APPSTORE",&puStack_c0);
      _objc_release(puStack_98);
      puVar6 = puStack_a0;
      puVar3 = param_12;
      goto LAB_106ddf020;
    }
    puVar7 = *(undefined **)(param_2 + 0x380);
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0c9f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar8);
  if (param_5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b9658;
    func_0x00010bf92f60(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000107e629e4();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar7 = PTR_PTR_1126d2988;
  _objc_retain(param_12);
  _objc_retain(puVar8);
  func_0x00010c22bde0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3);
  _objc_release(puVar7);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar8);
  puVar6 = param_12;
  puVar7 = param_12;
LAB_106ddf020:
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106ddf1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x28) + 0x10))(*(long *)(param_4 + 0x28),0,0);
  return;
}



/* Entry: 106ddf1a4; end: 106ddf1b7;  */

void FUN_106ddf1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ddf1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 106ddf1b8; end: 106ddf20f;  */

void FUN_106ddf1b8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106ddf1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x60) + 0x10))(*(long *)(param_1 + 0x60),0,0);
    return;
  }
  func_0x00010bded640(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 106ddf210; end: 106ddf477; -[SCGallerySendItemsTask _createEphemeralMediaWithSegmentedVideoURLs:overlayImageData:snapDoc:snap:snapDetail:entry:mediaType:venueId:firstEphemeralMedia:completionHandler:] */

void FUN_106ddf210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = param_11 != 0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106ddf478;
  puStack_e8 = &UNK_11097cf50;
  puStack_90 = puStack_a8;
  _objc_retain(param_11);
  uStack_a0 = param_9;
  lStack_e0 = param_11;
  uStack_d8 = param_1;
  _objc_retain(param_6);
  uStack_d0 = param_6;
  _objc_retain(param_7);
  uStack_c8 = param_7;
  _objc_retain(param_8);
  uStack_c0 = param_8;
  _objc_retain(param_10);
  uStack_b8 = param_10;
  _objc_retain(param_4);
  uVar2 = param_3;
  uStack_b0 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106ddf594;
  puStack_118 = &UNK_11084aaa8;
  _objc_retain(param_12);
  uStack_108 = param_12;
  _objc_retain(uVar2);
  uStack_110 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_130);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uVar2);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(lStack_e0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ddf478; end: 106ddf593;  */

void FUN_106ddf478(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(param_3);
  func_0x00010c299e20(puVar1);
  if (*(char *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c214bc0(param_1,uVar2);
    func_0x00010c21acc0(uVar2);
    *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x58) + 8) + 0x18) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bdeffc0(param_1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c4480(uVar2);
  if (*(long *)(param_2 + 0x50) != 0) {
    func_0x00010c1c4e00(uVar2);
    func_0x00010c1c4e20(uVar2);
  }
  func_0x00010c0c70a0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ddf594; end: 106ddf5a7;  */

void FUN_106ddf594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ddf5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106ddf5a8; end: 106ddf9b3; -[SCGallerySendItemsTask _createMedialessEphemeralMediaForSnap:snapDetail:entry:mediaType:venueId:duration:] */

void FUN_106ddf5a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar10 = *(long *)(param_2 + 0x1d0);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bf560a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar10);
  lVar2 = lVar3;
  func_0x00010bf42a00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x338);
  uVar4 = *(undefined8 *)(param_2 + 0x350);
  func_0x00010bf5f400(uVar4);
  func_0x000107fdcfb8(lVar2,param_4,0,uVar11,uVar4,*(undefined8 *)(param_2 + 0x138),
                      *(undefined8 *)(param_2 + 0x2f0));
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf42a00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c214bc0(param_1,lVar3);
  func_0x00010bfed740(param_4);
  func_0x00010c1ac2c0(lVar3);
  func_0x00010c2208c0(lVar3);
  _objc_release(param_8);
  func_0x00010c21acc0(lVar3);
  func_0x00010c196d20(lVar3);
  lVar2 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12440(param_2);
  _objc_release(lVar2);
  uVar5 = param_6;
  func_0x00010bf977c0();
  uVar1 = (int)uVar5 - 0x39;
  if ((uVar1 < 0x16) && ((1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0)) {
    lVar2 = lVar3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar6 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(lVar3);
      _objc_release(puVar6);
    }
    uVar5 = param_6;
    func_0x00010bf3d240();
    if ((uVar5 & 0x7b40) != 0) {
      lVar2 = lVar3;
      func_0x00010bf4e840(lVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_106e18a10();
      _objc_release(lVar2);
    }
    func_0x00010bf3d240();
    lVar2 = lVar3;
    func_0x00010bf4e840(lVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18b80();
    _objc_release(lVar2);
  }
  lVar2 = lVar3;
  func_0x00010bf3cf60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53e60(param_2);
  _objc_release(param_5);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010b5f869c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c08fa60();
  if (lVar10 != 0) {
    lVar10 = lVar3;
    func_0x00010bf42a00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar10);
  }
  lVar10 = param_4;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    puVar6 = PTR_PTR_1126b25c0;
    _objc_alloc();
    func_0x00010c008360();
    puVar8 = puVar6;
    func_0x00010bf8c3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfdc300();
    _objc_release(puVar8);
    if ((int)puVar9 != 0) {
      func_0x00010be4d240();
      _objc_retainAutoreleasedReturnValue();
      if (param_2 != 0) {
        lVar7 = lVar3;
        func_0x00010bf42a00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107176780(param_2,lVar7);
        _objc_release(lVar7);
      }
      _objc_release(param_2);
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106ddf9b4; end: 106de0357; -[SCGallerySendItemsTask _createEphemeralMediaWithVideoSnap:ephemeralMedia:completionHandler:] */

void FUN_106ddf9b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106de0358;
  puStack_a0 = &UNK_110848c48;
  ppuVar2 = &puStack_b8;
  uStack_98 = param_3;
  uStack_90 = param_1;
  _objc_retainBlock();
  fVar21 = (float)param_1;
  if ((param_6 == 0) || (uVar3 = param_3, func_0x00010beb4840(), lVar6 = param_6, (uVar3 & 1) == 0))
  {
    lVar4 = *(long *)(param_3 + 0x1d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf560a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  lVar5 = lVar6;
  func_0x00010bf42a00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3e00(param_3);
  uVar3 = param_3;
  func_0x00010be1a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_3 + 8);
  lVar7 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar19 = uVar18;
  func_0x00010c06cde0();
  if (((int)uVar19 != 0) && (lVar7 = param_5, func_0x00010b5fa088(), lVar7 != 8)) {
    puVar8 = PTR_PTR_1126c3c70;
    _objc_alloc();
    func_0x00010c046e40();
    lVar7 = param_5;
    func_0x00010bfd9dc0();
    if ((int)lVar7 == 0) {
      uVar9 = uVar3;
      func_0x00010c0ef4a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5;
      func_0x00010b5fa414(param_5);
      lVar10 = param_5;
      func_0x00010c15fa20(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      FUN_10721f120(puVar8,0,uVar9,0,lVar7,lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(uVar9);
      uVar19 = *(undefined8 *)(param_3 + 0x1f8);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257c80();
      _objc_release(uVar19);
    }
    else {
      uVar19 = *(undefined8 *)(param_3 + 0x340);
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_106de03b0;
      puStack_e8 = &UNK_11097cf80;
      _objc_retain(puVar8);
      puStack_e0 = puVar8;
      _objc_retain(uVar3);
      uStack_d8 = uVar3;
      _objc_retain(param_5);
      lStack_d0 = param_5;
      uStack_c8 = param_3;
      _objc_retain(lVar5);
      lStack_c0 = lVar5;
      func_0x00010c136020(uVar19);
      _objc_release(lStack_c0);
      _objc_release(lStack_d0);
      _objc_release(uStack_d8);
      puVar11 = puStack_e0;
    }
    _objc_release(puVar11);
    _objc_release(puVar8);
  }
  func_0x00010bf8b160(param_5);
  dVar22 = (double)fVar21;
  func_0x00010c214bc0(dVar22,lVar6);
  lVar7 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12440(param_3);
  _objc_release(lVar7);
  func_0x00010c196d20(lVar6);
  func_0x00010b5fa124(param_5,1);
  func_0x00010c21acc0(lVar6);
  func_0x00010bfed740(param_5);
  func_0x00010c1ac2c0(lVar6);
  puVar8 = PTR_PTR_1126bf6e8;
  lVar7 = param_5;
  func_0x00010c273740(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298c40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee860(lVar6);
  _objc_release(puVar8);
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010bf42a00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c0ef4a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + 0x338);
  uVar19 = *(undefined8 *)(param_3 + 0x350);
  func_0x00010bf5f400(uVar19);
  func_0x000107fdcfb8(lVar7,param_5,uVar9,uVar20,uVar19,*(undefined8 *)(param_3 + 0x138),
                      *(undefined8 *)(param_3 + 0x2f0));
  _objc_release(uVar9);
  _objc_release(lVar7);
  uVar9 = uVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf529e0();
  _objc_release(uVar12);
  _objc_release(uVar9);
  if (uVar13 != 0) {
    uVar9 = uVar3;
    func_0x00010c0ef4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c23f480();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(lVar6);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar9);
  }
  uVar9 = uVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  FUN_106dee010();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (uVar12 == 0) {
    lVar7 = param_5;
    func_0x00010c23ff80(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x000106dee390();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(lVar6);
    _objc_release(lVar10);
    _objc_release(lVar7);
  }
  else {
    func_0x00010c2208c0(lVar6);
  }
  uVar16 = *(undefined8 *)(param_3 + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c0fd5e0();
  _objc_release(uVar19);
  _objc_release(uVar16);
  if ((int)uVar20 != 0) {
    uVar16 = *(undefined8 *)(param_3 + 0x78);
    func_0x00010c0ee3a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c159d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(uVar16);
    func_0x00010c2208c0(lVar6);
    _objc_release(uVar20);
  }
  func_0x00010b5fa088();
  uVar20 = *(undefined8 *)(param_3 + 0x380);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010becea60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar20;
  func_0x00010c0c9fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar20);
  func_0x00010c179260(uVar19);
  func_0x00010c2216a0(lVar6);
  func_0x00010be53e60(param_3);
  uVar9 = uVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bf5c920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar13 == 0) {
    _objc_release(uVar9);
  }
  else {
    uVar14 = uVar3;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf5c920();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x000106dd1a30();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar9);
    if ((uVar17 & 1) == 0) {
      dVar22 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      goto LAB_106de0184;
    }
  }
  func_0x000109023cdc(param_5);
LAB_106de0184:
  puVar8 = PTR_PTR_1126cf9c0;
  _objc_alloc(PTR_PTR_1126cf9c0);
  uVar20 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048b20(dVar22,param_2,puVar8);
  _objc_release(uVar20);
  uVar1 = *(undefined1 *)(param_3 + 0x148);
  uVar20 = *(undefined8 *)(param_3 + 0x150);
  _objc_initWeak(auStack_108,puVar8);
  _objc_copyWeak(auStack_120,auStack_108);
  uStack_118 = uVar20;
  uStack_110 = uVar1;
  _objc_retain(lVar6);
  _objc_retain(ppuVar2);
  _objc_retain(param_7);
  func_0x00010c17fb20(puVar8);
  lVar7 = param_3 + 0x368;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bf9d620();
  _objc_release(lVar7);
  _objc_release(param_7);
  _objc_release(ppuVar2);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar8);
  _objc_release(uVar19);
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(ppuVar2);
  _objc_release(param_7);
  _objc_release(lVar6);
  _objc_release(param_5);
  return;
}



/* Entry: 106de0358; end: 106de03af;  */

void FUN_106de0358(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de03b0; end: 106de073b;  */

void FUN_106de03b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0ef4a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010b5fa414(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c15fa20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10721f120(uVar3,param_2,uVar4,0,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1f8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257c80();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106de073c; end: 106de07cb;  */

void FUN_106de073c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ade0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000106de07c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 106de07cc; end: 106de0803;  */

void FUN_106de07cc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000106de0800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106de0804; end: 106de0aab; -[SCGallerySendItemsTask _createEphemeralMediasWithLongVideoSnap:ephemeralMedia:completionHandler:] */

void FUN_106de0804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3e00(param_1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126cf9c0;
  _objc_alloc(PTR_PTR_1126cf9c0);
  lVar6 = param_1;
  func_0x00010becea60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029d60(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_initWeak(auStack_68,puVar5);
  uVar1 = *(undefined1 *)(param_1 + 0x3b0);
  uVar2 = *(undefined1 *)(param_1 + 0x3d0);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_78 = uVar1;
  uStack_77 = uVar2;
  _objc_retain(param_4);
  func_0x00010c17fb20(puVar5);
  param_1 = param_1 + 0x368;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106de0aac; end: 106de0ec3;  */

void FUN_106de0aac(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **unaff_x28;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106de0ec4;
    puStack_88 = &UNK_110849530;
    puVar9 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar9);
    puStack_80 = puVar9;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    puVar9 = puStack_80;
  }
  else {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = uVar1 + 0x368;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c12e1e0(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    if ((param_3 == 0) || (param_4 != 0)) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x106de0ed4;
      puStack_b0 = &UNK_110849530;
      puVar9 = *(undefined **)(param_1 + 0x30);
      _objc_retain(puVar9);
      puStack_a8 = puVar9;
      func_0x000100162d98("APPSTORE",&puStack_c8);
      puVar9 = puStack_a8;
    }
    else {
      lVar2 = param_2;
      func_0x00010c0efa40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = (undefined *)0x0;
      if (lVar2 != 0) {
        lVar2 = param_2;
        func_0x00010c0efa40(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b9658;
        func_0x00010bf92f60(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      uVar4 = uVar1;
      func_0x00010be1a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010be42ce0();
      if ((((uVar5 & 1) == 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) &&
         (*(char *)(param_1 + 0x49) != '\x01')) {
        puVar7 = *(undefined **)(uVar1 + 0x380);
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0c9f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      else {
        puVar7 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        puVar8 = puVar7;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_78 = param_3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43d60(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar7);
      }
      _objc_initWeak(auStack_d0,uVar1);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_106de0ee4;
      puStack_108 = &UNK_1108a5fa8;
      _objc_copyWeak(auStack_d8,auStack_d0);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      uStack_e0 = uVar10;
      _objc_retain(uVar11);
      uStack_100 = uVar11;
      _objc_retain(uVar4);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uStack_f8 = uVar4;
      _objc_retain(uVar10);
      puVar7 = puVar9;
      uStack_f0 = uVar10;
      _objc_retain(puVar9);
      puStack_e8 = puVar9;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar8);
      _objc_release(puVar7);
      _objc_release(puStack_e8);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_release(uStack_e0);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(puVar8);
      _objc_release(uVar4);
      unaff_x28 = &puStack_120;
    }
  }
  _objc_release(puVar9);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x48));
  _objc_destroyWeak(auStack_d0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000106de0ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),0);
  return;
}



/* Entry: 106de0ec4; end: 106de0ee3;  */

void FUN_106de0ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106de0ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106de0ee4; end: 106de0f77;  */

void FUN_106de0ee4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    uVar2 = param_2;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(lVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    func_0x00010be81c60(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de0f78; end: 106de0fcb;  */

void FUN_106de0f78(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 106de0fcc; end: 106de130f; -[SCGallerySendItemsTask _createEphemeralMediaWithPhotoMemoriesSendPHAsset:ephemeralMedia:completionHandler:] */

void FUN_106de0fcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_4;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106de1310;
  puStack_90 = &UNK_110848c48;
  ppuVar3 = &puStack_a8;
  lStack_88 = param_2;
  uStack_80 = param_1;
  _objc_retainBlock();
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106dd5438;
  uStack_b8 = 0x106dd5448;
  puStack_d0 = &uStack_d8;
  _objc_retain(param_5);
  puStack_110 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_106dd5438;
  uStack_e8 = 0x106dd5448;
  uStack_e0 = 0;
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106de1368;
  puStack_148 = &UNK_11097d070;
  lStack_140 = param_2;
  puStack_118 = &uStack_d8;
  puStack_100 = puStack_110;
  uStack_b0 = param_5;
  _objc_retain(ppuVar3);
  uStack_138 = uVar2;
  ppuStack_128 = ppuVar3;
  _objc_retain(param_4);
  uStack_130 = param_4;
  _objc_retain(param_6);
  ppuVar4 = &puStack_160;
  uStack_120 = param_6;
  _objc_retainBlock();
  lVar5 = param_2;
  func_0x00010beb5280();
  if ((int)lVar5 == 0) {
    ppuVar6 = (undefined **)PTR_PTR_1126bf8a0;
    _objc_alloc(PTR_PTR_1126bf8a0);
    func_0x00010be5dc40(param_2);
    func_0x00010c03ffc0(ppuVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x208);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bdc1860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bfbc3e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    func_0x00010c297260(uVar7);
    _objc_release(uVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar8);
  }
  else {
    puStack_1a0 = puVar1;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x106de1ab4;
    puStack_188 = &UNK_11097ca50;
    puStack_168 = &uStack_108;
    uStack_180 = uVar2;
    _objc_retain(ppuVar4);
    lStack_178 = param_2;
    ppuStack_170 = ppuVar4;
    func_0x000107f6f148(uVar2,1,&puStack_1a0);
    ppuVar6 = ppuStack_170;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(uStack_120);
  _objc_release(uStack_130);
  _objc_release(ppuStack_128);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106de1310; end: 106de1367;  */

void FUN_106de1310(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de1368; end: 106de1a33;  */

void FUN_106de1368(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_a8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    (**(code **)(*(long *)(param_3 + 0x40) + 0x10))(*(long *)(param_3 + 0x40),0,0);
    goto LAB_106de1a08;
  }
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28) == 0) {
LAB_106de13cc:
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x1d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf56080();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_3 + 0x48) + 8);
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    _objc_release(uVar9);
    _objc_release(uVar3);
  }
  else {
    uVar2 = *(ulong *)(param_3 + 0x20);
    func_0x00010beb4840();
    if ((uVar2 & 1) == 0) goto LAB_106de13cc;
  }
  func_0x00010c196d20(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  func_0x00010c21acc0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
  func_0x00010bf2a7e0(PTR_PTR_1126b6600);
  func_0x00010c214bc0(uVar11);
  func_0x00010c1ac2c0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
  func_0x00010bf42a00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28);
  func_0x00010c0664c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010c0946a0();
  _objc_release(lVar4);
  if (lVar10 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
    func_0x00010bf42a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28);
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c094680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296de0();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar3);
  }
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  dVar12 = ABS(param_1 - param_2);
  lVar10 = param_4;
  if ((dVar12 < 2.2250738585072014e-308) ||
     (dVar12 < ABS(param_1 + param_2) * 2.220446049250313e-16)) {
    if (param_5 == 0) {
      func_0x00010bfe8a60(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    func_0x00010bfe8380(lVar10);
  }
  func_0x00010c1d6440(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  if (param_5 == 0) {
    dVar12 = 0.6;
    lVar4 = lVar10;
    _UIImageJPEGRepresentation(0x3fe3333333333333,lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4480(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
    _objc_release(lVar4);
  }
  else {
    func_0x00010c1c4480(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  }
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))();
  func_0x00010c0c5280(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
  func_0x00010bf42a00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010be5efe0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107fdf418(uVar9,uVar3,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar9);
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09da80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53e60(uVar3);
  _objc_release(uVar11);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010beb2980();
  if (iVar1 != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x270);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    func_0x00010795da60(1,1,0,0,uVar11,*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x2c0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x1b8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_3 + 0x28);
    func_0x00010bf5a700();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puStack_a8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0ed100();
    func_0x00010bf2a7e0(PTR_PTR_1126b6600);
    uVar9 = 0;
    func_0x000108dfcd80(0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    _objc_retain(uVar3);
    func_0x00010bef7060(dVar12,uVar11);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(uVar9);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puStack_a8);
    }
    _objc_release(puVar5);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar3);
  }
  uVar11 = 0;
  func_0x000108dfcd80(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xffffffffa9fc90cc;
  func_0x00010b77c6b4(0xffffffffa9fc90cc);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010721f324(lVar10,0,uVar11,0,0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x1f8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257c80(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar11);
  (**(code **)(*(long *)(param_3 + 0x40) + 0x10))
            (*(long *)(param_3 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28),0);
  _objc_release(lVar4);
  _objc_release(lVar10);
LAB_106de1a08:
  _objc_release(param_5);
  return;
}



/* Entry: 106de1a34; end: 106de1c6f;  */

void FUN_106de1a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x270);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795dd20(uVar1,param_4,param_5,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x2c0)
                     );
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106de1c70; end: 106de1d6f;  */

void FUN_106de1c70(long param_1,long param_2)

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



/* Entry: 106de1d70; end: 106de1f2b; -[SCGallerySendItemsTask _createEphemeralMediasWithVideoMemoriesSendPHAsset:ephemeralMedia:completionHandler:] */

void FUN_106de1d70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_4;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106de1f2c;
  puStack_90 = &UNK_110848c48;
  ppuVar6 = &puStack_a8;
  lStack_88 = param_2;
  uStack_80 = param_1;
  _objc_retainBlock();
  cVar2 = *(char *)(param_2 + 0x3b0);
  cVar3 = *(char *)(param_2 + 0x3d0);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x120);
  lVar8 = param_2;
  func_0x00010be42ce0(param_2);
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106de1f84;
  puStack_e8 = &UNK_11097d0a0;
  uVar1 = 0;
  if (cVar3 == '\0' && cVar2 == '\0') {
    uVar1 = (uint)lVar8 ^ 1;
  }
  lStack_e0 = param_2;
  uStack_d8 = param_4;
  uStack_d0 = uVar5;
  uStack_c8 = param_5;
  ppuStack_c0 = ppuVar6;
  uStack_b8 = param_6;
  uStack_b0 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(ppuVar6);
  func_0x00010c158560(uVar9,param_3,uVar5,uVar1,&puStack_100);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uStack_d8);
  _objc_release(ppuStack_c0);
  _objc_release(ppuVar6);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar5);
  return;
}



/* Entry: 106de1f2c; end: 106de1f83;  */

void FUN_106de1f2c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de1f84; end: 106de20c3;  */

void FUN_106de1f84(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    *(long *)(*(long *)(param_1 + 0x20) + 0xc0) = lVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c09da80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53e60(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0ed100(*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf5a700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be81c80(uVar4,uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de20c4; end: 106de2137; -[SCGallerySendItemsTask _isPostingToSpotlightOnly] */

undefined8 FUN_106de20c4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010becea60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07a900();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c07a8e0();
    if ((int)uVar2 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x1c8);
      func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e2a0b8,0,0);
      if ((uVar2 & 1) != 0) goto LAB_106de20ec;
    }
    uVar3 = 0;
  }
  else {
LAB_106de20ec:
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106de2138; end: 106de22ff; -[SCGallerySendItemsTask _createEphemeralMediasWithLongVideoSnapFromCameraRoll:ephemeralMedia:completionHandler:] */

void FUN_106de2138(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106de2300;
  puStack_88 = &UNK_110848c48;
  ppuVar2 = &puStack_a0;
  lStack_80 = param_2;
  uStack_78 = param_1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x120);
  uVar6 = *(undefined8 *)(param_2 + 0x340);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar4 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar7,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106de2358;
  puStack_d8 = &UNK_11097d0d0;
  lStack_d0 = param_2;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  ppuStack_b8 = ppuVar2;
  uStack_b0 = param_6;
  uStack_a8 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(ppuVar2);
  func_0x00010c158580(uVar5,param_3,param_4,uVar6,uVar7,&puStack_f0);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(uStack_c8);
  _objc_release(ppuStack_b8);
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106de2300; end: 106de2357;  */

void FUN_106de2300(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de2358; end: 106de243f;  */

void FUN_106de2358(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    *(long *)(*(long *)(param_1 + 0x20) + 0xc0) = lVar1;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xb8) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ed100(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be81c80(uVar2,uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de2440; end: 106de2f27; -[SCGallerySendItemsTask _processPendingUrlsForVideoAssetWithCompletionHandler:userSendStartTimestamp:videoAssetOrientation:ephemeralMedia:embeddedMetadata:externalMediaSource:creationTime:] */

void FUN_106de2440(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,ulong param_7,long param_8,int param_9,undefined *param_10)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  double dVar16;
  undefined *puStack_190;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  double dStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_3 + 0xc0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_3 + 200);
    func_0x00010bf51e00(uVar3);
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 200));
    uVar5 = *(undefined8 *)(param_3 + 0xb8);
    *(undefined8 *)(param_3 + 0xb8) = 0;
    _objc_release(uVar5);
    (**(code **)(param_5 + 0x10))(param_5,uVar3);
    _objc_release(uVar3);
  }
  else {
    _CACurrentMediaTime();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106de2f28;
    puStack_a0 = &UNK_110848c48;
    ppuVar2 = &puStack_b8;
    uStack_98 = param_3;
    dStack_90 = param_1;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_3 + 0xc0);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = param_1;
    if ((param_7 == 0) ||
       (uVar4 = param_3, func_0x00010beb4840(), uVar15 = param_7, dVar16 = param_1, (uVar4 & 1) == 0
       )) {
      lVar1 = *(long *)(param_3 + 0xb8);
      uVar4 = *(ulong *)(param_3 + 0x1d0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar4;
      if (lVar1 == 0) {
        func_0x00010bf56080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
      }
      else {
        uVar5 = *(undefined8 *)(param_3 + 0xb8);
        func_0x00010c241220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf560a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = *(ulong *)(param_3 + 0xb8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be12440(param_3);
      }
      _objc_release();
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar15;
    func_0x00010bf3cf60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec3e00(param_3);
    _objc_release(uVar6);
    uVar6 = uVar15;
    func_0x00010bf42a00(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ee0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010c196d20(uVar15);
    func_0x00010c21acc0(uVar15);
    func_0x00010c1d6440(uVar15);
    if (param_9 != 0) {
      puVar7 = PTR_PTR_1126c4548;
      _objc_alloc();
      func_0x00010c032420();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4de0(uVar15);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    func_0x00010c299e20(PTR_PTR_1126b0010);
    func_0x00010c214bc0(uVar15);
    func_0x00010c1ac2c0(uVar15);
    lVar1 = param_8;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c0946a0();
    _objc_release(lVar1);
    if (lVar9 != 0) {
      uVar6 = uVar15;
      func_0x00010bf42a00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar1 = param_8;
      func_0x00010c0664c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c094680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar9);
      _objc_release(lVar1);
      _objc_release(uVar6);
    }
    lVar1 = param_8;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c0d3a20();
    _objc_release(lVar1);
    if (lVar9 != 0) {
      puVar7 = PTR_PTR_1126bfac0;
      _objc_opt_new(PTR_PTR_1126bfac0);
      lVar1 = param_8;
      func_0x00010c0664c0(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d3a20();
      func_0x00010c218f80(puVar7);
      _objc_release(lVar1);
      uVar6 = uVar15;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar6 == 0) {
        puVar8 = PTR_PTR_1126b2378;
        _objc_opt_new(PTR_PTR_1126b2378);
        func_0x00010c183080(uVar15);
        _objc_release(puVar8);
      }
      uVar6 = uVar15;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar6);
      if (uVar10 == 0) {
        puVar8 = PTR_PTR_1126b5c10;
        _objc_opt_new(PTR_PTR_1126b5c10);
        uVar6 = uVar15;
        func_0x00010bf4e840(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21b4e0();
        _objc_release(uVar6);
        _objc_release(puVar8);
      }
      uVar6 = uVar15;
      func_0x00010bf4e840(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca400();
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(puVar7);
    }
    uVar11 = *(undefined8 *)(param_3 + 0x78);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c0fd5e0();
    _objc_release(uVar5);
    _objc_release(uVar11);
    if ((int)uVar12 != 0) {
      uVar11 = *(undefined8 *)(param_3 + 0x78);
      func_0x00010c0ee3a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c159d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar11);
      func_0x00010c2208c0(uVar15);
      _objc_release(uVar12);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x1b0);
    func_0x00010c29af00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if ((*(long *)(param_3 + 0xb8) == 0) &&
       (uVar6 = param_3, func_0x00010beb2980(), (int)uVar6 != 0)) {
      uVar12 = *(undefined8 *)(param_3 + 0x270);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 1;
      func_0x00010795da60(1,1,0,0,uVar12,*(undefined8 *)(param_3 + 0x2c0));
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + 0x1b8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_190 = param_10;
      if (param_10 == (undefined *)0x0) {
        puStack_190 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar14 = 0;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      _objc_retain(uVar12);
      _objc_retain(uVar11);
      func_0x00010bef7080(uVar13);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(uVar14);
      if (param_10 == (undefined *)0x0) {
        _objc_release(puStack_190);
      }
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar12);
      _objc_release(uVar11);
    }
    uVar13 = 0;
    func_0x000108dfcd80(0);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf3f040(uVar5);
    func_0x00010b5fbca8();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    FUN_10721f120(uVar5,0,uVar13,0,1,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar13);
    uVar12 = *(undefined8 *)(param_3 + 0x1f8);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar15;
    func_0x00010bf3cf60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257c80(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar12);
    uVar13 = *(undefined8 *)(param_3 + 0x380);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becea60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010c0c9fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar13);
    func_0x00010c221d20(uVar12);
    func_0x00010c16bc20(uVar12);
    func_0x00010c29b240(PTR_PTR_1126b0010);
    param_1 = 0.0;
    if (dVar16 != 0.0) {
      if (param_2 == 0.0) {
        param_1 = INFINITY;
      }
      else {
        param_1 = dVar16 / param_2;
      }
    }
    func_0x00010c222080(param_1,uVar12);
    func_0x00010c2220a0(uVar12);
    func_0x00010c2056c0(uVar12);
    uVar6 = uVar15;
    func_0x00010bf3cf60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(uVar12);
    _objc_release(uVar6);
    func_0x00010c179260(uVar12);
    func_0x00010c2216a0(uVar15);
    uVar6 = uVar15;
    func_0x00010bf42a00(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fdf5c0();
    _objc_release(uVar6);
    _objc_retain(uVar15);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(param_10);
    _objc_retain(ppuVar2);
    _objc_retain(uVar12);
    func_0x00010bfae700(uVar12);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(uVar15);
    _objc_release(ppuVar2);
    _objc_release(uVar12);
    _objc_release(ppuVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    param_7 = uVar15;
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  dVar16 = *(double *)(param_5 + 0x28);
  uVar15 = *(ulong *)(*(long *)(param_5 + 0x20) + 0xd8);
  uVar4 = uVar15;
  func_0x00010c279ba0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar15,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar4 + (param_1 - dVar16) * 1000.0));
  return;
}



/* Entry: 106de2f28; end: 106de2f7f;  */

void FUN_106de2f28(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de2f80; end: 106de2f9b;  */

void FUN_106de2f80(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x2c0);
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(uVar2);
  lVar3 = lVar11;
  _objc_retain();
  func_0x00010795d830();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010795d830();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (param_4 != 0) {
      puVar5 = PTR_PTR_1126c46c8;
      _objc_opt_new(PTR_PTR_1126c46c8);
      func_0x00010c20a620();
      func_0x00010c14b420(lVar4);
      func_0x00010c1d5de0(puVar5);
      func_0x00010c074980();
      func_0x00010c206c40(puVar5);
      func_0x00010c1f59c0(puVar5);
      func_0x00010c0b2e60(uVar2);
      _objc_release(puVar5);
    }
    _CACurrentMediaTime();
    func_0x00010c14c040(lVar4);
    lVar3 = lVar4;
    func_0x00010c14bee0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf51e00();
    _objc_release(lVar3);
    func_0x00010c1b92e0(lVar6);
    func_0x00010c1f5900(lVar6);
    lVar3 = param_5;
    func_0x00010bf6e340(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(lVar6);
    _objc_release(lVar3);
    func_0x00010c0b2e60(uVar2);
    lVar3 = lVar11;
    func_0x00010c269d40(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2438;
    func_0x00010bfbd520(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2ac460(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar5);
    func_0x00010bfec2a0(lVar7);
    func_0x00010befbfe0(lVar7);
    _objc_release(puVar9);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if (param_5 != 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_5,
                          &PTR____CFConstantStringClassReference_110ea68f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(uVar2);
      _objc_release(ppuVar10);
    }
    func_0x00010795d940(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  _objc_release(lVar11);
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de2f9c; end: 106de3193;  */

void FUN_106de2f9c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    func_0x00010bf51160(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ade0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106de3194;
    puStack_90 = &UNK_11097d130;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = uVar1;
    _objc_retain(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = uVar3;
    uStack_80 = uVar4;
    _objc_retain(uVar1);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = uVar1;
    _objc_retain(uVar3);
    uStack_48 = *(undefined4 *)(param_1 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = uVar3;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_60);
    _objc_release(uStack_80);
    uVar1 = uStack_68;
  }
  else {
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x106de3204;
    puStack_c0 = &UNK_11088fcb8;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uStack_b8 = uVar3;
    _objc_retain(uVar1);
    uStack_b0 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_d8);
    _objc_release(uStack_b0);
    uVar1 = uStack_b8;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106de3194; end: 106de3237;  */

void FUN_106de3194(long param_1)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
                    /* WARNING: Could not recover jumptable at 0x00010be81c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
             PTR_s__processPendingUrlsForVideoAsset_11257e0c0,*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x58),0,*(undefined8 *)(param_1 + 0x30),
             *(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106de3238; end: 106de399b; -[SCGallerySendItemsTask _processPendingUrlsForLongSnapSegmentsWithCompletionHandler:longVideoSnap:longVideoSnapDetail:ephemeralMedia:overlayDataToUpload:] */

void FUN_106de3238(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,ulong param_8,undefined8 param_9)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  double dStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_3 + 0xc0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_3 + 200);
    func_0x00010bf51e00(uVar3);
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 200));
    (**(code **)(param_5 + 0x10))(param_5,uVar3);
  }
  else {
    _CACurrentMediaTime();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106de399c;
    puStack_90 = &UNK_110848c48;
    ppuVar2 = &puStack_a8;
    uStack_88 = param_3;
    dStack_80 = param_1;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_3 + 0xc0);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((param_8 == 0) ||
       (uVar4 = param_3, func_0x00010beb4840(), uVar5 = param_8, (uVar4 & 1) == 0)) {
      uVar4 = *(ulong *)(param_3 + 0x1d0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_6;
      func_0x00010c241220(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf560a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_8);
      _objc_release(uVar8);
      _objc_release();
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf3cf60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec3e00(param_3);
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010bf42a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ee0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar5;
    func_0x00010bf3cf60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53e60(param_3);
    _objc_release(uVar6);
    func_0x00010c299e20(PTR_PTR_1126b0010);
    func_0x00010c214bc0(uVar5);
    uVar8 = param_6;
    func_0x00010c241220(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be12440(param_3);
    _objc_release(uVar8);
    func_0x00010c196d20(uVar5);
    func_0x00010b5fa124(param_6,1);
    func_0x00010c21acc0(uVar5);
    func_0x00010bfed740(param_6);
    func_0x00010c1ac2c0(uVar5);
    puVar7 = PTR_PTR_1126bf6e8;
    uVar8 = param_6;
    func_0x00010c273740(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298c40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee860(uVar5);
    _objc_release(puVar7);
    _objc_release(uVar8);
    uVar6 = uVar5;
    func_0x00010bf42a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_7;
    func_0x00010c0ef4a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + 0x338);
    uVar8 = *(undefined8 *)(param_3 + 0x350);
    func_0x00010bf5f400(uVar8);
    func_0x000107fdcfb8(uVar6,param_6,lVar1,uVar14,uVar8,*(undefined8 *)(param_3 + 0x138),
                        *(undefined8 *)(param_3 + 0x2f0));
    _objc_release(lVar1);
    _objc_release(uVar6);
    lVar1 = param_7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c23f480();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    _objc_release(lVar9);
    _objc_release(lVar1);
    if (lVar10 != 0) {
      lVar1 = param_7;
      func_0x00010c0ef4a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c23f480();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c2a2e80();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c2a2ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b3c0(uVar5);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar1);
    }
    lVar1 = param_7;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    FUN_106dee010();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar9 == 0) {
      uVar8 = param_6;
      func_0x00010c23ff80(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar8;
      func_0x000106dee390();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(uVar5);
      _objc_release(uVar14);
      _objc_release(uVar8);
    }
    else {
      func_0x00010c2208c0(uVar5);
    }
    uVar13 = *(undefined8 *)(param_3 + 0x78);
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar13;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c0fd5e0();
    _objc_release(uVar8);
    _objc_release(uVar13);
    if ((int)uVar14 != 0) {
      uVar13 = *(undefined8 *)(param_3 + 0x78);
      func_0x00010c0ee3a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar13;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar8;
      func_0x00010c159d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar13);
      func_0x00010c2208c0(uVar5);
      _objc_release(uVar14);
    }
    uVar14 = *(undefined8 *)(param_3 + 0x1b0);
    func_0x00010c29af00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x380);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becea60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar13;
    func_0x00010c0c9fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar13);
    func_0x00010c221d20(uVar8);
    func_0x00010c16bc20(uVar8);
    func_0x00010c29b240(PTR_PTR_1126b0010);
    dVar15 = 0.0;
    if (param_1 != 0.0) {
      if (param_2 == 0.0) {
        dVar15 = INFINITY;
      }
      else {
        dVar15 = param_1 / param_2;
      }
    }
    func_0x00010c222080(dVar15,uVar8);
    func_0x00010c2056c0(uVar8);
    func_0x00010c179260(uVar8);
    func_0x00010c2216a0(uVar5);
    _objc_retain(param_9);
    _objc_retain(uVar5);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(ppuVar2);
    _objc_retain(uVar8);
    func_0x00010bfae700(uVar8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(ppuVar2);
    _objc_release(uVar5);
    _objc_release(param_9);
    _objc_release(uVar8);
    _objc_release(ppuVar2);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(lVar9);
    _objc_release(uVar4);
    param_8 = uVar5;
  }
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106de399c; end: 106de39f3;  */

void FUN_106de399c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _CACurrentMediaTime();
  dVar3 = *(double *)(param_2 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x20) + 0xd8);
  uVar1 = uVar2;
  func_0x00010c279ba0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setTranscodeLatencyMs__112663fc0,
             (long)((double)uVar1 + (param_1 - dVar3) * 1000.0));
  return;
}



/* Entry: 106de39f4; end: 106de3c0b;  */

void FUN_106de39f4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    func_0x00010bf51160(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1c4e00(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1c4e20(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ade0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106de3c0c;
    puStack_80 = &UNK_11097d190;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar1);
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x30);
    uStack_50 = uVar1;
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x30));
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    uStack_70 = auVar5._8_8_;
    uStack_78 = auVar5._0_8_;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = uVar1;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = uVar3;
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar4;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_98);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_48);
    _objc_release(uStack_70);
    uVar1 = uStack_50;
  }
  else {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x106de3c64;
    puStack_b0 = &UNK_11088fcb8;
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    uStack_a8 = uVar3;
    _objc_retain(uVar1);
    uStack_a0 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_c8);
    _objc_release(uStack_a0);
    uVar1 = uStack_a8;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106de3c0c; end: 106de3c97;  */

void FUN_106de3c0c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
                    /* WARNING: Could not recover jumptable at 0x00010be81c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processPendingUrlsForLongSnapSe_11257e0b8,
             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106de3c98; end: 106de3e2f; -[SCGallerySendItemsTask _loadMusicSelectionForSnap:completion:] */

void FUN_106de3c98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c06cde0();
  if ((int)uVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x288);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135240(uVar3);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(param_4);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106de3e30; end: 106de3e3f;  */

void FUN_106de3e30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106de3e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 106de3e40; end: 106de3f9f; -[SCGallerySendItemsTask _platformAnalyticsWithSnapMetricInfos:clientMessageId:] */

void FUN_106de3e40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c3360;
    _objc_alloc(PTR_PTR_1126c3360);
    func_0x00010c048240();
  }
  puVar1 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdfb240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c2b3c60(puVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x3f0);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c2b8260(puVar1,param_2,*(undefined8 *)(param_1 + 0x3f0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106de3fa0; end: 106de4027; -[SCGallerySendItemsTask _additionalTextPlatformAnalytics] */

void FUN_106de3fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be744e0(param_1,param_2,0,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (*(long *)(param_1 + 0x98) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000108604db4(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106de4028; end: 106de406f; -[SCGallerySendItemsTask _destinationInfo] */

void FUN_106de4028(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x000108605534();
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  lVar8 = *(long *)(param_1 + 0x90);
  lVar3 = lVar3 + lVar2;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      _objc_retain(puVar6);
      _objc_retain(puVar4);
      _objc_retain(puVar5);
      func_0x00010c0be1e0(uVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126b5be8;
  _objc_alloc(PTR_PTR_1126b5be8);
  func_0x00010bff40a0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar8 + 0x20),PTR_s_addObject__11259c1f0,lVar3);
  return;
}



/* Entry: 106de4070; end: 106de41ef; -[SCGallerySendItemsTask _loadEditorCommonLoggingParamsFromValdiWithSnapDocData:] */

void FUN_106de4070(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1c8);
  func_0x00010bf1f440();
  uVar4 = 0;
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x3b8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    if ((param_3 != 0) && (lVar2 != 0)) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x3032000000;
      pcStack_48 = FUN_106dd5438;
      uStack_40 = 0x106dd5448;
      uStack_38 = 0;
      uVar3 = 0;
      _dispatch_semaphore_create();
      _objc_retain();
      _objc_retain(param_3);
      func_0x00010bfc69a0(lVar2);
      uVar4 = 0;
      _dispatch_time(0,2000000000);
      _dispatch_semaphore_wait(uVar3,uVar4);
      uVar4 = puStack_58[5];
      _objc_retain(uVar4);
      _objc_release(param_3);
      _objc_release(uVar3);
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(uStack_38);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106de41f0; end: 106de42a7;  */

void FUN_106de41f0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = PTR_PTR_1126bcf68;
    _objc_alloc(PTR_PTR_1126bcf68);
    func_0x00010bffa140();
    puVar2 = PTR_PTR_1126d2a50;
    func_0x00010bfbc0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfc3e00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de42a8; end: 106de4a67; -[SCGallerySendItemsTask _sendAllMediasForArroyoWithClientMessageId:] */

void FUN_106de42a8(undefined **param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_106de4a68;
  puStack_198 = &UNK_110855e40;
  ppuVar14 = &puStack_1b0;
  ppuStack_190 = param_1;
  _objc_retainBlock();
  puVar1 = param_1[0x30];
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puVar16 = param_1[0x30];
    _objc_retain(puVar16);
    puStack_2b8 = puVar16;
    func_0x00010bf52a60();
    if (puStack_2b8 != (undefined *)0x0) {
      lVar15 = *plStack_1e0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar15) {
            _objc_enumerationMutation(puVar16);
          }
          param_2 = *(undefined ***)(lStack_1e8 + (long)puVar18 * 8);
          ppuVar2 = param_2;
          func_0x00010c0c5160();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar2;
          func_0x00010c08fa60();
          if (ppuVar17 == (undefined **)0x0) {
            puVar4 = (undefined *)0x0;
            ppuVar17 = (undefined **)0x0;
          }
          else {
            ppuVar3 = (undefined **)param_1[0x2e];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar17 = ppuVar3;
            func_0x00010c23f880();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            puVar4 = param_1[0x2e];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar4 != (undefined *)0x0) {
              func_0x00010befa120(puVar1);
            }
          }
          puVar5 = puVar4;
          FUN_106e0c7f0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c1197a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 == (undefined *)0x0) {
            param_2 = (undefined **)0x1;
            FUN_106df244c(param_1[0x74]);
          }
          ppuVar3 = ppuVar2;
          func_0x00010c08fa60();
          if ((ppuVar3 == (undefined **)0x0) || (puVar6 = param_1[0x2f], puVar6 == (undefined *)0x0)
             ) {
            puVar6 = (undefined *)0x0;
          }
          else {
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar6 != (undefined *)0x0) &&
               (ppuVar3 = ppuVar2, func_0x00010c08fa60(), ppuVar3 != (undefined **)0x0)) {
              func_0x00010c12d3e0(param_1[0x2f]);
            }
          }
          puVar7 = puVar6;
          func_0x00010c08fa60();
          if (puVar7 != (undefined *)0x0) {
            puVar7 = PTR_PTR_1126b25c0;
            _objc_alloc();
            func_0x00010c008360();
            puVar8 = puVar7;
            func_0x00010bf8c3a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bfdc300();
            _objc_release(puVar8);
            if ((int)puVar9 != 0) {
              ppuVar3 = param_1;
              func_0x00010be4d240();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar17;
              if (ppuVar3 != (undefined **)0x0) {
                if (ppuVar17 == (undefined **)0x0) {
                  ppuVar10 = ppuVar3;
                  func_0x0001008e4748();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  ppuVar10 = (undefined **)PTR_PTR_1126c4588;
                  func_0x00010c23f8a0();
                  _objc_retainAutoreleasedReturnValue();
                }
                param_2 = ppuVar10;
                FUN_107176780(ppuVar3);
                ppuVar11 = ppuVar10;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar17);
                _objc_release(ppuVar10);
              }
              _objc_release(ppuVar3);
              ppuVar17 = ppuVar11;
            }
            _objc_release(puVar7);
          }
          ppuVar3 = param_1;
          func_0x00010bdce980(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar17);
          puVar7 = PTR_PTR_1126cdef8;
          _objc_alloc(PTR_PTR_1126cdef8);
          puVar8 = puVar7;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c028fc0(puVar7);
          _objc_release(puVar8);
          func_0x00010befa120(puVar12);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(ppuVar2);
          _objc_release(puVar4);
          _objc_release(ppuVar3);
          puVar18 = puVar18 + 1;
        } while (puStack_2b8 != puVar18);
        puStack_2b8 = puVar16;
        func_0x00010bf52a60();
      } while (puStack_2b8 != (undefined *)0x0);
    }
    _objc_release(puVar16);
    func_0x00010be5f1a0();
    puVar16 = PTR_PTR_1126cdf00;
    _objc_alloc(PTR_PTR_1126cdf00);
    puVar18 = puVar12;
    func_0x00010bf51e00(puVar12);
    func_0x00010c016f80(puVar16);
    _objc_release(puVar18);
    puVar4 = param_1[0x4a];
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010bf51e00(puVar1);
    ppuVar2 = param_1;
    func_0x00010be744e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bea0(puVar4);
    _objc_release(ppuVar2);
    _objc_release(puVar18);
    _objc_release(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(puVar1);
  }
  puVar12 = param_1[0x31];
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar12 != (undefined *)0x0) {
    puVar12 = param_1[0x31];
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    uStack_208 = 0x106de4b10;
    puStack_200 = &UNK_11097d220;
    ppuStack_1f8 = param_1;
    func_0x000100504554(puVar12,&puStack_218);
    puVar16 = param_1[0x31];
    puStack_240 = puVar1;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_106de4b68;
    puStack_228 = &UNK_11097d250;
    param_2 = &puStack_240;
    ppuStack_220 = param_1;
    func_0x000100504554(puVar16);
    puVar1 = PTR_PTR_1126cdf00;
    _objc_alloc(PTR_PTR_1126cdf00);
    func_0x00010c016f80();
    puVar18 = param_1[0x4a];
    func_0x00010c269d40(puVar18);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010be744e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15be60(puVar18);
    _objc_release(ppuVar2);
    _objc_release(puVar18);
    _objc_release(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar12);
  }
  puVar1 = param_1[0x32];
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    puVar12 = param_1[0x32];
    _objc_retain(puVar12);
    puVar1 = puVar12;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar15 = *plStack_270;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_270 != lVar15) {
            _objc_enumerationMutation(puVar12);
          }
          uVar20 = *(undefined8 *)(lStack_278 + (long)puVar16 * 8);
          func_0x00010c0c4900(uVar20);
          _objc_retainAutoreleasedReturnValue();
          puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2a0 = 0xc2000000;
          pcStack_298 = FUN_106de4c94;
          puStack_290 = &UNK_11097d280;
          param_2 = &puStack_2a8;
          uVar13 = uVar20;
          ppuStack_288 = param_1;
          func_0x000100504554();
          _objc_release(uVar20);
          puVar18 = param_1[0x4b];
          func_0x00010c269d40(puVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = param_1;
          func_0x00010be744e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c1a0(puVar18);
          _objc_release(ppuVar2);
          _objc_release(puVar18);
          _objc_release(uVar13);
          puVar16 = puVar16 + 1;
        } while (puVar1 != puVar16);
        puVar1 = puVar12;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar12);
  }
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar15 = *(long *)(param_3 + 0x20);
    if (param_2 == (undefined **)0x0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110dbbb98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebad40(lVar15);
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x70);
      func_0x00010bf529e0();
      lVar19 = *(long *)(param_3 + 0x20);
      if (lVar15 == 0) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e53418;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53418,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bebad20(lVar19);
      }
      else {
        ppuVar14 = *(undefined ***)(lVar19 + 0x398);
        func_0x00010c269d40(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86140();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
    return;
  }
  return;
}



/* Entry: 106de4a68; end: 106de4b67;  */

void FUN_106de4a68(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebad40(lVar2);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x70);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e53418;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53418,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebad20(lVar3);
    }
    else {
      ppuVar1 = *(undefined ***)(lVar3 + 0x398);
      func_0x00010c269d40(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86140();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106de4b68; end: 106de4c93;  */

void FUN_106de4b68(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c5160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c23f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdce980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126cdef8;
  _objc_alloc(PTR_PTR_1126cdef8);
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  FUN_106e0c1a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028fc0(puVar4);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106de4c94; end: 106de4d43;  */

void FUN_106de4c94(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2a58;
  _objc_opt_class(PTR_PTR_1126d2a58);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  uVar3 = uVar1;
  func_0x00010c0c5160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106de4d44; end: 106de4d63; -[SCGallerySendItemsTask _memoriesMediaChatSendingFormatWithMemoriesSnapMetricInfo:] */

undefined8 FUN_106de4d44(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb5960();
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106de4d64; end: 106de4e5b; -[SCGallerySendItemsTask _shouldSendAsSnapsWithMemoriesSnapMetricInfo:] */

char FUN_106de4d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010bf97e80(param_3);
  cVar1 = *(char *)(puStack_38 + 3);
  if ((cVar1 == '\x01') && ((*(byte *)(puStack_58 + 3) & 1) != 0)) {
    cVar1 = '\0';
  }
  __Block_object_dispose(&uStack_60,8);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return cVar1;
}



/* Entry: 106de4e5c; end: 106de4f57;  */

void FUN_106de4e5c(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    lVar2 = param_2;
    func_0x00010bfbd1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(*(long *)(lVar2 + 8) + 0x18) & 1) == 0) {
    lVar2 = param_2;
    func_0x00010c0fa960();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      *(undefined1 *)(*(long *)(lVar2 + 8) + 0x18) = 1;
      lVar2 = *(long *)(param_1 + 0x28);
    }
  }
  if (*(char *)(*(long *)(lVar2 + 8) + 0x18) == '\x01') {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
      *param_4 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de4f58; end: 106de501f; -[SCGallerySendItemsTask _applySendToLoggingParams:] */

void FUN_106de4f58(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x3f0);
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      func_0x0001008e4748();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126c4588;
      func_0x00010c23f8a0(PTR_PTR_1126c4588,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2b8260();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ae860(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106de5020; end: 106de642b; -[SCGallerySendItemsTask _processEphemeralMediaForStory:galleryMedia:creationDate:isFromCameraRoll:completionQueue:completion:] */

void FUN_106de5020(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lStack_360;
  long lStack_318;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0xb0));
  lVar4 = param_3;
  func_0x00010bf42a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae860();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar5 = param_4;
  func_0x000107adea60();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_106dd5438;
  uStack_100 = 0x106dd5448;
  uStack_f8 = 0;
  uVar6 = uVar5;
  _dispatch_group_create();
  if (((param_6 & 1) != 0) || (uVar5 == 0)) goto LAB_106de60ac;
  lVar4 = param_1;
  func_0x00010be24140();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar5;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (uVar23 == 0) {
LAB_106de51c4:
    _objc_retain(param_4);
    puVar8 = PTR_PTR_1126d29a8;
    _objc_opt_class(PTR_PTR_1126d29a8);
    uVar7 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar8);
    uVar23 = param_4;
    if ((uVar7 & 1) == 0) {
      uVar23 = 0;
    }
    _objc_retain(uVar23);
    _objc_release(param_4);
    uVar7 = uVar23;
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 == 0) {
      lStack_318 = 0;
    }
    else {
      lStack_318 = *(long *)(param_1 + 0x18);
      uVar10 = uVar23;
      func_0x00010bfbcca0(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar23);
    if (lStack_318 != 0) goto LAB_106de52a0;
    lStack_318 = 0;
    lStack_360 = 0;
    bVar2 = true;
  }
  else {
    lStack_318 = *(long *)(param_1 + 0x20);
    uVar7 = uVar5;
    func_0x00010c241220(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar23);
    if (lStack_318 == 0) goto LAB_106de51c4;
LAB_106de52a0:
    lStack_360 = lStack_318;
    func_0x000107e63ed0();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_360 == 0) {
      bVar2 = false;
      lStack_360 = 0;
    }
    else {
      lVar12 = param_3;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar12 == 0) {
        puVar8 = PTR_PTR_1126b2378;
        _objc_opt_new(PTR_PTR_1126b2378);
        func_0x00010c183080(param_3);
        _objc_release(puVar8);
      }
      lVar12 = lStack_360;
      func_0x00010bf51e00(lStack_360);
      lVar13 = param_3;
      func_0x00010bf4e840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21b4e0();
      _objc_release(lVar13);
      _objc_release(lVar12);
      bVar2 = false;
    }
  }
  lVar12 = lStack_318;
  func_0x000107e639a4(lStack_318);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  FUN_106defb6c(lVar4,PTR____NSArray0__struct_11034ab48,lVar12,*(undefined8 *)(param_1 + 0x1f0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = lVar13;
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    lVar12 = lVar13;
    func_0x00010c0b8600(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0b8600(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar13;
    func_0x00010c0b8600(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar15 == 0) {
      puVar8 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_3);
      _objc_release(puVar8);
    }
    lVar15 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106e17810();
    _objc_release(lVar15);
    _objc_release(lVar26);
    _objc_release(lVar14);
    _objc_release(lVar12);
  }
  lVar12 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 == 0) {
    puVar8 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_3);
    _objc_release(puVar8);
  }
  lVar12 = param_3;
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lStack_318;
  func_0x000107e639a4(lStack_318);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x388);
  func_0x00010c2542a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e19b34(lVar12,lVar4,lVar14,uVar16);
  _objc_release(uVar16);
  _objc_release(lVar14);
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  puVar8 = PTR_PTR_1126d2a18;
  func_0x00010bfdbfe0();
  if ((int)puVar8 != 0) {
    _dispatch_group_enter(uVar6);
    puVar8 = PTR_PTR_1126d2a18;
    lVar12 = lVar4;
    FUN_106dd3708(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x106de6444;
    puStack_130 = &UNK_11097c780;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_106de6450;
    puStack_178 = &UNK_11097c7b0;
    lStack_128 = param_1;
    _objc_retain(param_3);
    lStack_170 = param_3;
    _objc_retain(lVar4);
    lStack_168 = lVar4;
    _objc_retain(lStack_318);
    lStack_160 = lStack_318;
    lStack_158 = param_1;
    _objc_retain(uVar6);
    uStack_150 = uVar6;
    func_0x00010c109ee0(puVar8);
    _objc_release(lVar12);
    _objc_release(uStack_150);
    _objc_release(lStack_160);
    _objc_release(lStack_168);
    _objc_release(lStack_170);
  }
  uVar23 = uVar5;
  func_0x000106df0944(uVar5,*(undefined8 *)(param_1 + 0x338));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar23;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    lVar12 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) {
      puVar8 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_3);
      _objc_release(puVar8);
    }
    lVar12 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_3;
    func_0x00010bf30620(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e17a2c(lVar12,uVar23,0,lVar26);
    _objc_release(lVar26);
    _objc_release(lVar12);
  }
  uVar7 = uVar5;
  func_0x00010b5fa088();
  if (uVar7 == 0xc) {
    lVar12 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 == 0) {
      puVar8 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_3);
      _objc_release(puVar8);
    }
    lVar12 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar12;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aff80();
    _objc_release(lVar26);
    _objc_release(lVar12);
  }
  if (bVar2) {
    _dispatch_group_enter(uVar6);
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x106de6518;
    puStack_1b0 = &UNK_11097d380;
    puStack_198 = &uStack_120;
    _objc_retain(param_3);
    lStack_1a8 = param_3;
    _objc_retain(uVar6);
    uStack_1a0 = uVar6;
    func_0x00010be4e080(param_1);
    _objc_release(uStack_1a0);
    _objc_release(lStack_1a8);
  }
  lVar26 = *(long *)(param_1 + 0x10);
  uVar7 = uVar5;
  func_0x00010c241220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar26;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(uVar7);
  if (lVar12 != 0) {
    _dispatch_group_enter(uVar6);
    uVar7 = uVar5;
    func_0x00010c241220(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x000107e00ff0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_106de6714;
    puStack_1e0 = &UNK_11088c530;
    _objc_retain(param_3);
    lStack_1d8 = param_3;
    _objc_retain(uVar6);
    uVar10 = uVar9;
    uStack_1d0 = uVar6;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uStack_1d0);
    _objc_release(lStack_1d8);
  }
  uVar7 = uVar5;
  FUN_106df0b34(uVar5,*(undefined8 *)(param_1 + 0x338));
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 != 0) {
    puVar17 = PTR_PTR_1126c48a0;
    _objc_alloc();
    func_0x00010c0271a0();
    puVar8 = PTR_PTR_1126ae790;
    lVar26 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar26);
    _dispatch_group_enter(uVar6);
    puVar18 = PTR_PTR_1126c48a8;
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_106de6838;
    puStack_230 = &UNK_11097d3e0;
    _objc_retain(param_3);
    lStack_228 = param_3;
    _objc_retain(uVar7);
    uStack_220 = uVar7;
    _objc_retain(lVar4);
    lStack_218 = lVar4;
    _objc_retain(lStack_318);
    lStack_210 = lStack_318;
    lStack_208 = param_1;
    _objc_retain(uVar6);
    uStack_200 = uVar6;
    func_0x00010bf59420(puVar18);
    _objc_release(uStack_200);
    _objc_release(lStack_210);
    _objc_release(lStack_218);
    _objc_release(uStack_220);
    _objc_release(lStack_228);
    _objc_release(puVar8);
    _objc_release(puVar17);
  }
  lVar26 = lVar4;
  FUN_106df0db8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar26 != 0) {
    lVar15 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18910();
    _objc_release(lVar15);
  }
  lVar15 = param_3;
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar4;
  func_0x00010bf308c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_106e18ae8(lVar15,lVar27);
  _objc_release(lVar27);
  _objc_release(lVar15);
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar15 = lStack_318;
  func_0x000106def3a4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c4550;
  if (lVar15 == 0) {
    func_0x00010c0c5b60(lVar4);
    func_0x00010c0c5ba0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar18);
    _objc_release(puVar8);
  }
  else {
    func_0x00010befa160(puVar18);
  }
  uVar9 = uVar5;
  func_0x00010b5f7abc();
  _objc_retainAutoreleasedReturnValue();
  if (uVar9 != 0) {
    lVar27 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf8a7e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf8a400(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar9;
    func_0x00010c094540(uVar9);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18a10(lVar27,uVar10,uVar11,uVar28);
    _objc_release(uVar28);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar27);
    uVar10 = uVar9;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar11 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_106de6a00;
      puStack_258 = &UNK_110856a28;
      _objc_retain(uVar16);
      uVar11 = uVar10;
      uStack_250 = uVar16;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar10 = uVar11;
      func_0x00010bf529e0();
      if (uVar10 != 0) {
        lVar27 = param_3;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar27;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar20;
        func_0x00010c0ca760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar20);
        _objc_release(lVar27);
        if (lVar19 == 0) {
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          lVar27 = param_3;
          func_0x00010bf4e840(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar27;
          func_0x00010c27f9c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c6a60();
          _objc_release(lVar20);
          _objc_release(lVar27);
          _objc_release(puVar8);
        }
        uStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        lStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        plStack_2a0 = (long *)0x0;
        _objc_retain(uVar11);
        uVar10 = uVar11;
        func_0x00010bf52a60();
        if (uVar10 != 0) {
          lVar27 = *plStack_2a0;
          do {
            uVar28 = 0;
            do {
              if (*plStack_2a0 != lVar27) {
                _objc_enumerationMutation(uVar11);
              }
              lVar20 = *(long *)(lStack_2a8 + uVar28 * 8);
              func_0x000109189420();
              _objc_retainAutoreleasedReturnValue();
              if (lVar20 != 0) {
                lVar19 = param_3;
                func_0x00010bf4e840(param_3);
                _objc_retainAutoreleasedReturnValue();
                lVar21 = lVar19;
                func_0x00010c27f9c0();
                _objc_retainAutoreleasedReturnValue();
                lVar22 = lVar21;
                func_0x00010c0ca760();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120();
                _objc_release(lVar22);
                _objc_release(lVar21);
                _objc_release(lVar19);
              }
              _objc_release(lVar20);
              uVar28 = uVar28 + 1;
            } while (uVar10 != uVar28);
            uVar10 = uVar11;
            func_0x00010bf52a60();
          } while (uVar10 != 0);
        }
        _objc_release(uVar11);
      }
      _objc_release(uVar11);
      _objc_release(uStack_250);
      _objc_release(uVar16);
    }
    puVar8 = PTR_PTR_1126c4548;
    _objc_alloc(PTR_PTR_1126c4548);
    func_0x00010c032420();
    func_0x00010befa120(puVar18);
    _objc_release(puVar8);
  }
  uVar10 = uVar5;
  func_0x00010b5f88e4();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfd5900();
  if ((int)uVar11 != 0) {
    uVar11 = uVar10;
    func_0x00010bf45f00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar27;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb340();
    _objc_release(lVar20);
    _objc_release(lVar27);
    _objc_release(uVar11);
  }
  puVar8 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c0c5b00();
  uVar28 = uVar5;
  func_0x00010bf3d2a0();
  if (((uint)uVar28 < 0x11) && ((1 << (ulong)((uint)uVar28 & 0x1f) & 0x1f7c0U) != 0)) {
LAB_106de5fd8:
    puVar17 = PTR_PTR_1126c4548;
    _objc_alloc(PTR_PTR_1126c4548);
    func_0x00010c032420();
    func_0x00010befa120(puVar18);
    _objc_release(puVar17);
  }
  else {
    puVar17 = puVar8;
    func_0x00010bf977c0();
    uVar1 = (int)puVar17 - 0x39;
    if (((uVar1 < 0x16) && ((1 << (ulong)(uVar1 & 0x1f) & 0x3dd3c1U) != 0)) ||
       ((puVar17 = puVar8, func_0x00010bf3d240(), ((ulong)puVar17 & 0xffe0) != 0 ||
        ((int)uVar11 - 5U < 3)))) goto LAB_106de5fd8;
  }
  puVar17 = puVar18;
  func_0x00010bf529e0();
  if (puVar17 != (undefined *)0x0) {
    puVar17 = puVar18;
    func_0x00010bf51e00(puVar18);
    func_0x00010c1c4de0(param_3);
    _objc_release(puVar17);
  }
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar15);
  _objc_release(puVar18);
  _objc_release(lVar26);
  _objc_release(uVar7);
  _objc_release(lVar12);
  _objc_release(uVar23);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lStack_360);
  _objc_release(lStack_318);
  _objc_release(lVar4);
LAB_106de60ac:
  uVar23 = *(ulong *)(param_1 + 0x78);
  func_0x00010c22dd20();
  if ((uVar23 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      puVar8 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
      func_0x00010c183080(param_3);
      _objc_release(puVar8);
    }
    lVar4 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e18bfc();
    _objc_release(lVar4);
  }
  if ((uVar5 != 0) && (lVar4 = param_1, func_0x00010beeb0e0(), (int)lVar4 != 0)) {
    lVar4 = param_1;
    func_0x00010be24140(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    if (uVar23 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = uVar5;
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
    _objc_release(uVar23);
    uVar25 = *(undefined8 *)(param_1 + 0x60);
    uVar24 = uVar16;
    func_0x000107e639a4(uVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar4;
    FUN_106defb6c(lVar4,uVar25,uVar24,*(undefined8 *)(param_1 + 0x1f0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    lVar13 = lVar12;
    func_0x00010c0b8600(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce7e0(param_3);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar16);
    _objc_release(lVar4);
  }
  puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e0 = 0xc2000000;
  uStack_2d8 = 0x106de6a28;
  puStack_2d0 = &UNK_110883360;
  puStack_2b8 = &uStack_120;
  lStack_2c8 = param_3;
  uStack_2c0 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x000100bc0718(uVar6,param_7,&puStack_2e8);
  _objc_release(lStack_2c8);
  _objc_release(uStack_2c0);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar16 = 8;
    __Block_object_dispose(&uStack_120,8);
    __Unwind_Resume(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_username_112682b30);
    return;
  }
  return;
}



/* Entry: 106de642c; end: 106de644f;  */

void FUN_106de642c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 106de6450; end: 106de6713;  */

void FUN_106de6450(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1fef20(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4e840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107e639a4(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x388);
    func_0x00010c2542a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106e19b34(uVar3,uVar1,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106de6714; end: 106de6837;  */

void FUN_106de6714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106de6838; end: 106de69ff;  */

void FUN_106de6838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar1 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a5c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25b720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  FUN_106e18218(lVar2,param_3,param_4,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = lVar7;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4e840(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107e639a4(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x388);
    func_0x00010c2542a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106e19b34(uVar5,uVar3,uVar4,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf42a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba480();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106de6a00; end: 106de6a1f;  */

uint FUN_106de6a00(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  return (uint)param_2 ^ 1;
}



/* Entry: 106de6a20; end: 106de6a43;  */

void FUN_106de6a20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 106de6a44; end: 106de74e3; -[SCGallerySendItemsTask _postStoryWithEphemeralMedia:creationDate:isFromCameraRoll:lensAssetsUploadOperation:storyPostTimestamp:completionHandler:] */

void FUN_106de6a44(long param_1,undefined **param_2,ulong param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long lVar31;
  undefined **ppuVar32;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b4468;
  _objc_alloc();
  func_0x00010c05ce40();
  func_0x00010c1a10a0();
  func_0x00010c1856c0(puVar2);
  func_0x00010c203de0(puVar2);
  if (param_5 == 0) {
    func_0x00010c185620(puVar2);
  }
  else {
    func_0x00010c185600();
  }
  uVar3 = *(undefined8 *)(param_1 + 800);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bf529e0();
  if (uVar28 != 0) {
    uVar28 = 0;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x100);
      uVar9 = uVar7;
      func_0x00010bf3cf60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(uVar9);
      if (*(char *)(param_1 + 0x3d1) == '\x01') {
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b6680();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      uVar9 = uVar7;
      func_0x00010bf42a00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      uVar3 = param_8;
      _objc_retainBlock(param_8);
      uVar30 = *(undefined8 *)(param_1 + 0x198);
      uVar9 = uVar7;
      func_0x00010bf3cf60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar30);
      _objc_release(uVar9);
      _objc_release(uVar3);
      func_0x00010befa120(puVar5);
      uVar9 = param_3;
      func_0x00010bf529e0();
      if ((uVar9 != 0) && (uVar9 = uVar8, func_0x00010c0d22c0(), uVar9 == 0)) {
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(param_3);
        func_0x00010c2b4240(uVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b4260();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(param_3);
        func_0x00010c2b4200(uVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b4220();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(param_3);
        func_0x00010c2b4160(uVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010bf42a00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b41a0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar28 = uVar28 + 1;
      uVar7 = param_3;
      func_0x00010bf529e0();
    } while (uVar28 < uVar7);
  }
  puVar6 = puVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(ulong *)(param_1 + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar9;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar28;
  func_0x00010bf4b900();
  _objc_release(uVar28);
  _objc_release(uVar9);
  lVar10 = *(long *)(param_1 + 0x78);
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c24b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (((uVar7 & 1) != 0) && (lVar10 = lVar11, func_0x00010bf529e0(), lVar10 != 0)) {
    _objc_retain(puVar6);
    puVar12 = puVar6;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar6);
        }
        ppuVar13 = *(undefined ***)((long)puVar29 * 8);
        ppuVar14 = ppuVar13;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar15;
        func_0x00010c0ca780();
        ppuVar20 = ppuVar15;
        func_0x00010c0ca5c0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar14 != (undefined **)0x0) {
          ppuVar32 = (undefined **)0x0;
          do {
            ppuVar21 = ppuVar20;
            func_0x00010bf529e0();
            if ((ppuVar21 <= ppuVar32) ||
               (ppuVar21 = ppuVar20, func_0x00010c296de0(), (int)ppuVar21 != 3)) {
              ppuVar21 = ppuVar15;
              func_0x00010c0ca760(ppuVar15);
              _objc_retainAutoreleasedReturnValue();
              ppuVar22 = ppuVar21;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar23 = ppuVar22;
              func_0x000109189508();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar16);
              _objc_release(ppuVar23);
              _objc_release(ppuVar22);
              _objc_release(ppuVar21);
              ppuVar22 = ppuVar15;
              func_0x00010c0ca7c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar23 = ppuVar22;
              func_0x00010bf529e0();
              ppuVar21 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar32 < ppuVar23) {
                ppuVar23 = ppuVar15;
                func_0x00010c0ca7c0(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                ppuVar21 = ppuVar23;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                param_2 = ppuVar21;
                _objc_release(ppuVar23);
              }
              _objc_release(ppuVar22);
              func_0x00010befa120(puVar17);
              puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar18);
              _objc_release(puVar24);
              ppuVar22 = ppuVar15;
              func_0x00010c0ca660();
              _objc_retainAutoreleasedReturnValue();
              ppuVar23 = ppuVar22;
              func_0x00010bf529e0();
              if (ppuVar32 < ppuVar23) {
                ppuVar25 = ppuVar15;
                func_0x00010c0ca660(ppuVar15);
                _objc_retainAutoreleasedReturnValue();
                ppuVar23 = ppuVar25;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar25);
              }
              else {
                ppuVar23 = (undefined **)PTR_PTR_1126d2a60;
                _objc_opt_new(PTR_PTR_1126d2a60);
              }
              _objc_release(ppuVar22);
              func_0x00010befa120(puVar19);
              _objc_release(ppuVar23);
              _objc_release(ppuVar21);
            }
            ppuVar32 = (undefined **)((long)ppuVar32 + 1);
          } while (ppuVar14 != ppuVar32);
        }
        _objc_retain(lVar11);
        lVar26 = lVar11;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar26 != 0) {
          lVar31 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar11);
            }
            uVar30 = *(undefined8 *)(lVar31 * 8);
            uVar3 = uVar30;
            func_0x00010c2923e0(uVar30);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar16);
            _objc_release(uVar3);
            uVar3 = uVar30;
            func_0x00010c294420(uVar30);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar17);
            _objc_release(uVar3);
            func_0x00010befa120(puVar18);
            puVar24 = PTR_PTR_1126d2a60;
            _objc_opt_new(PTR_PTR_1126d2a60);
            uVar3 = uVar30;
            func_0x00010c11f2a0(uVar30);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c24d960();
            func_0x00010c209380(puVar24);
            _objc_release(uVar3);
            func_0x00010c11f2a0(uVar30);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf94880();
            func_0x00010c195f00(puVar24);
            _objc_release(uVar30);
            func_0x00010befa120(puVar19);
            _objc_release(puVar24);
            lVar31 = lVar31 + 1;
          } while (lVar26 != lVar31);
          lVar26 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        func_0x00010841fa68(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6a40();
        _objc_release(ppuVar13);
        _objc_release(ppuVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(ppuVar15);
        puVar29 = puVar29 + 1;
      } while (puVar29 != puVar12);
      puVar12 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
  }
  if (((*(char *)(param_1 + 0x3b0) == '\x01') && (*(long *)(param_1 + 0x3a8) != 0)) &&
     (puVar12 = puVar6, func_0x00010bf529e0(), puVar12 == (undefined *)0x1)) {
    func_0x00010bf11d40(*(undefined8 *)(param_1 + 0x3a8));
  }
  else {
    func_0x00010c1053c0(uVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x238);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x220);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08ef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106de74e4; end: 106de7553;  */

void FUN_106de74e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x220);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08ef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106de7554; end: 106de75c7; -[SCGallerySendItemsTask didUpdateMyStoriesDataRequest:] */

void FUN_106de7554(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106de75c8;
    puStack_20 = &UNK_1108dc368;
    uStack_18 = param_1;
    func_0x00010c0be260(param_3,param_2,0,0,0,0,&puStack_38,0,0,0,0,0);
  }
  return;
}



/* Entry: 106de75c8; end: 106de7663;  */

void FUN_106de75c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106de7664;
  puStack_50 = &UNK_110844b80;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106de7664; end: 106de777b;  */

void FUN_106de7664(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  puVar4 = auStack_d8;
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x100);
        func_0x00010bf4b900();
        if (iVar1 != 0) {
          func_0x00010be61160(*(undefined8 *)(param_1 + 0x28));
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar4 = auStack_d8;
      lVar2 = lVar6;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if ((puVar3 != (undefined8 *)0x0) && (puVar4 = puVar4 + 7, puVar4 < (undefined1 *)0xa)) {
    if ((1L << ((ulong)puVar4 & 0x3f) & 0x45U) == 0) {
      if ((1L << ((ulong)puVar4 & 0x3f) & 0x300U) == 0) goto LAB_106de7844;
    }
    else {
      lVar2 = lVar6;
      func_0x00010bfa0120();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar6 + 0x130);
      *(long *)(lVar6 + 0x130) = lVar2;
      _objc_release(uVar5);
    }
    lVar2 = *(long *)(lVar6 + 0x198);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,puVar3,1);
      func_0x00010c12d3e0(*(undefined8 *)(lVar6 + 0x198));
    }
    _objc_release(lVar2);
  }
LAB_106de7844:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106de777c; end: 106de7857; -[SCGallerySendItemsTask _monitorPostingStateChangeWithClientId:postingState:] */

void FUN_106de777c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (uVar1 = param_4 + 7, uVar1 < 10)) {
    if ((1L << (uVar1 & 0x3f) & 0x45U) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0x300U) == 0) goto LAB_106de7844;
    }
    else {
      lVar2 = param_1;
      func_0x00010bfa0120();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x130);
      *(long *)(param_1 + 0x130) = lVar2;
      _objc_release(uVar3);
    }
    lVar2 = *(long *)(param_1 + 0x198);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_3,1);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x198));
    }
    _objc_release(lVar2);
  }
LAB_106de7844:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106de7858; end: 106de7887; -[SCGallerySendItemsTask galleryMediaGroupDidSend:didSucceed:] */

void FUN_106de7858(long param_1)

{
  func_0x00010bf52a00(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bebb780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportEndToEndSendingMetricsIfN_112581770);
  return;
}



/* Entry: 106de7888; end: 106de78e7; -[SCGallerySendItemsTask galleryMediaDidPost:didSucceed:] */

void FUN_106de7888(long param_1)

{
  long lVar1;
  
  func_0x00010bf52a40(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bebb780(param_1);
  lVar1 = param_1 + 0x3d8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c15c040();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportEndToEndSendingMetricsIfN_112581770);
  return;
}



/* Entry: 106de78e8; end: 106de7917; -[SCGallerySendItemsTask galleryMediaDidSendSnap:didSucceed:] */

void FUN_106de78e8(long param_1)

{
  func_0x00010bf52a20(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010bebb780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportEndToEndSendingMetricsIfN_112581770);
  return;
}



/* Entry: 106de7918; end: 106de7b2b; -[SCGallerySendItemsTask _ephemeralDidPost:didSucceed:] */

void FUN_106de7918(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c4650;
  _objc_opt_class(PTR_PTR_1126c4650);
  uVar5 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  puVar2 = PTR_PTR_1126c4650;
  uVar3 = param_3;
  if ((uVar5 & 1) != 0) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar5 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    uVar4 = uVar5;
    func_0x00010bf0af00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar3 = uVar4;
    func_0x00010c09da80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  uVar5 = *(ulong *)(param_1 + 0xe0);
  func_0x00010bf4b900();
  puVar2 = PTR_DAT_1126a5228;
  if ((uVar5 & 1) != 0) goto LAB_106de7b00;
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010010fab4(uVar1,puVar2);
  uVar5 = uVar1;
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  func_0x00010bdd1860(param_1);
  func_0x00010be9f300(param_1);
  lVar6 = *(long *)(param_1 + 0xf0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf982a0();
  lVar7 = lVar6;
  func_0x00010c104c80();
  if (lVar7 == 2) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xe0));
    func_0x00010bfbd1a0(param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x350);
LAB_106de7aec:
    func_0x00010c0a7ec0(uVar8);
  }
  else if (lVar7 == 1) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xe0));
    func_0x00010bfbd1a0(param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x350);
    goto LAB_106de7aec;
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
LAB_106de7b00:
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106de7b2c; end: 106de7dc7; -[SCGallerySendItemsTask _showToastIfNeeded] */

void FUN_106de7b2c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  
  if ((*(char *)(param_1 + 0x40) != '\x01') || ((*(byte *)(param_1 + 0xd0) & 1) != 0)) {
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ed00(*(undefined8 *)(param_1 + 0xd8));
  lVar2 = *(long *)(param_1 + 0xd8);
  func_0x00010bf36f00();
  if (lVar2 == 1) {
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010c25a8c0();
    if (lVar2 != 0) goto LAB_106de7bb0;
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010c242fe0();
    if (lVar2 != 0) goto LAB_106de7bb0;
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36fc0();
    if (lVar2 != 1) {
      lVar2 = *(long *)(param_1 + 0xd8);
      func_0x00010bf36f40();
LAB_106de7dac:
      if (lVar2 != 1) goto LAB_106de7db4;
      goto LAB_106de7ccc;
    }
  }
  else {
LAB_106de7bb0:
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36f00();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a8c0();
      if (lVar2 == 1) {
        lVar2 = *(long *)(param_1 + 0xd8);
        func_0x00010c242fe0();
        if (lVar2 == 0) {
          lVar2 = *(long *)(param_1 + 0xd8);
          func_0x00010c25a940();
          if (lVar2 != 1) {
            lVar2 = *(long *)(param_1 + 0xd8);
            func_0x00010c25a900();
            goto LAB_106de7dac;
          }
          lVar2 = param_1;
          func_0x00010c083ba0();
          if ((int)lVar2 != 0) {
            uVar9 = *(ulong *)(param_1 + 1000);
            func_0x00010bf1f3c0();
            if ((uVar9 & 1) != 0) goto LAB_106de7db4;
          }
          goto LAB_106de7c6c;
        }
      }
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36f00();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a8c0();
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_1 + 0xd8);
        func_0x00010c242fe0();
        if (lVar2 == 1) {
          lVar2 = *(long *)(param_1 + 0xd8);
          func_0x00010c2431a0();
          if (lVar2 != 1) {
            lVar2 = *(long *)(param_1 + 0xd8);
            func_0x00010c243040();
            goto LAB_106de7dac;
          }
          goto LAB_106de7c6c;
        }
      }
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36f00();
    lVar3 = *(long *)(param_1 + 0xd8);
    func_0x00010c25a8c0();
    lVar4 = *(long *)(param_1 + 0xd8);
    func_0x00010c242fe0();
    lVar5 = *(long *)(param_1 + 0xd8);
    func_0x00010bf36fc0();
    lVar6 = *(long *)(param_1 + 0xd8);
    func_0x00010c25a940();
    lVar7 = *(long *)(param_1 + 0xd8);
    func_0x00010c2431a0();
    if (lVar3 + lVar2 + lVar4 != lVar6 + lVar5 + lVar7) {
      lVar2 = *(long *)(param_1 + 0xd8);
      func_0x00010bf36f00();
      lVar3 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a8c0();
      lVar4 = *(long *)(param_1 + 0xd8);
      func_0x00010c242fe0();
      lVar5 = *(long *)(param_1 + 0xd8);
      func_0x00010bf36f40();
      lVar6 = *(long *)(param_1 + 0xd8);
      func_0x00010c25a900();
      lVar7 = *(long *)(param_1 + 0xd8);
      func_0x00010c243040();
      if (lVar3 + lVar2 + lVar4 == lVar6 + lVar5 + lVar7) {
LAB_106de7ccc:
        ppuVar8 = &PTR____CFConstantStringClassReference_110e53418;
      }
      else {
        lVar2 = *(long *)(param_1 + 0xd8);
        func_0x00010bf36fc0();
        lVar3 = *(long *)(param_1 + 0xd8);
        func_0x00010c25a940();
        lVar4 = *(long *)(param_1 + 0xd8);
        func_0x00010c2431a0();
        if (lVar3 + lVar2 + lVar4 == 0) goto LAB_106de7db4;
        lVar2 = *(long *)(param_1 + 0xd8);
        func_0x00010bf36f40();
        lVar3 = *(long *)(param_1 + 0xd8);
        func_0x00010c25a900();
        lVar4 = *(long *)(param_1 + 0xd8);
        func_0x00010c243040();
        if (lVar3 + lVar2 + lVar4 == 0) goto LAB_106de7db4;
        ppuVar8 = &PTR____CFConstantStringClassReference_110e86db8;
      }
      func_0x00010bcbeaa8(ppuVar8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebad20(param_1);
      _objc_release(ppuVar8);
      goto LAB_106de7db4;
    }
  }
LAB_106de7c6c:
  func_0x00010bebad40(param_1);
LAB_106de7db4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106de7dc8; end: 106de7dfb; -[SCGallerySendItemsTask isWidgetEnabledAndPostingToSpotlightOnly] */

void FUN_106de7dc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bec4820();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x1c8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110f0b3b8,0,0);
    return;
  }
  return;
}



/* Entry: 106de7dfc; end: 106de7ecb; -[SCGallerySendItemsTask _showSentToast:] */

void FUN_106de7dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)(param_1 + 0xd0) = 1;
  puVar1 = PTR_PTR_1126afca8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar2,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238780(puVar1,param_2,param_3,puVar2,puVar3,
                      &PTR____CFConstantStringClassReference_110e22c98);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  param_1 = param_1 + 0x3d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106de7ecc; end: 106de7f8f; -[SCGallerySendItemsTask _showSentErrorToast:] */

void FUN_106de7ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)(param_1 + 0xd0) = 1;
  puVar1 = PTR_PTR_1126afca8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c14c440(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1,param_2,param_3,puVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  param_1 = param_1 + 0x3d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106de7f90; end: 106de800f; -[SCGallerySendItemsTask _initEndToEndSendingMetrics] */

void FUN_106de7f90(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x48) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined **)(param_2 + 0x50) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  *(undefined **)(param_2 + 0x118) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


