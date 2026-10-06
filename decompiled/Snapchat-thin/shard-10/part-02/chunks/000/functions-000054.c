/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107aacfe4; end: 107aad063; -[SCStreamingResourceLoadingRequestHandler _handleDataLoadingRequest:] */

void FUN_107aacfe4(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  _objc_retain(param_3);
  if (iVar1 == 3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eabf38;
    func_0x00010b291824(&PTR____CFConstantStringClassReference_110eabf38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf960(param_3,param_2,ppuVar2);
    _objc_release(param_3);
    param_3 = ppuVar2;
  }
  else {
    func_0x00010be269c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aad064; end: 107aad1c3; -[SCStreamingResourceLoadingRequestHandler _tearDown] */

long FUN_107aad064(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010bf4d380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2e440(unaff_x22);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar7;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c12adc0();
  if (*(char *)(param_1 + 0x45) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107aad1c4;
  lStack_160 = unaff_x24;
  uStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar7;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  if (*(long *)(lVar1 + 0x38) != 0) {
    lVar7 = *(long *)(lVar1 + 0x30);
    if ((lVar7 != 0) && (*(char *)(lVar1 + 0x28) == '\x01')) {
      func_0x00010befa120(lVar7);
      lVar1 = 0;
      goto LAB_107aad358;
    }
    lVar8 = lVar1;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      puVar2 = PTR_PTR_1126d6370;
      func_0x00010be750c0();
      if ((int)puVar2 != 0) {
        bVar5 = *(byte *)(lVar1 + 0x40);
        if ((lVar7 == 0) && ((bVar5 & 1) == 0)) {
          if (*(char *)(lVar1 + 0x28) != '\x01') goto LAB_107aad29c;
          uVar3 = *(ulong *)(lVar1 + 0x78);
          func_0x00010c24eba0();
          if ((uVar3 & 1) == 0) {
            bVar5 = *(byte *)(lVar1 + 0x40);
            goto LAB_107aad298;
          }
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(lVar1 + 0x30);
          *(undefined **)(lVar1 + 0x30) = puVar2;
          _objc_release(uVar6);
LAB_107aad2a8:
          _objc_initWeak(auStack_168,lVar1);
          uVar6 = *(undefined8 *)(lVar1 + 0x38);
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_170,auStack_168);
          func_0x00010c0e0780(uVar6);
          _objc_release(puVar2);
          *(undefined1 *)(lVar1 + 0x40) = 1;
          _objc_destroyWeak(auStack_170);
          _objc_destroyWeak(auStack_168);
        }
        else {
LAB_107aad298:
          if ((bVar5 & 1) == 0) {
LAB_107aad29c:
            if (*(char *)(lVar1 + 0x41) == '\x01') goto LAB_107aad2a8;
          }
        }
      }
    }
    _objc_release(lVar8);
  }
  lVar1 = 1;
LAB_107aad358:
  _objc_release(puVar4);
  return lVar1;
}



/* Entry: 107aad1c4; end: 107aad39f; -[SCStreamingResourceLoadingRequestHandler _shouldProceedFetching:] */

undefined8 FUN_107aad1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if ((lVar6 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
      func_0x00010befa120(lVar6);
      uVar5 = 0;
      goto LAB_107aad358;
    }
    lVar1 = param_1;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126d6370;
      func_0x00010be750c0();
      if ((int)puVar2 != 0) {
        bVar4 = *(byte *)(param_1 + 0x40);
        if ((lVar6 == 0) && ((bVar4 & 1) == 0)) {
          if (*(char *)(param_1 + 0x28) != '\x01') goto LAB_107aad29c;
          uVar3 = *(ulong *)(param_1 + 0x78);
          func_0x00010c24eba0();
          if ((uVar3 & 1) == 0) {
            bVar4 = *(byte *)(param_1 + 0x40);
            goto LAB_107aad298;
          }
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          *(undefined **)(param_1 + 0x30) = puVar2;
          _objc_release(uVar5);
LAB_107aad2a8:
          _objc_initWeak(auStack_48,param_1);
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_50,auStack_48);
          func_0x00010c0e0780(uVar5);
          _objc_release(puVar2);
          *(undefined1 *)(param_1 + 0x40) = 1;
          _objc_destroyWeak(auStack_50);
          _objc_destroyWeak(auStack_48);
        }
        else {
LAB_107aad298:
          if ((bVar4 & 1) == 0) {
LAB_107aad29c:
            if (*(char *)(param_1 + 0x41) == '\x01') goto LAB_107aad2a8;
          }
        }
      }
    }
    _objc_release(lVar1);
  }
  uVar5 = 1;
LAB_107aad358:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107aad3a0; end: 107aad3e7;  */

void FUN_107aad3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be751c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aad3e8; end: 107aad8a7; -[SCStreamingResourceLoadingRequestHandler _handleCMDataLoadingRequest:] */

void FUN_107aad3e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010beb50a0();
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_2 + 0x50);
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010bf4d380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc8f40();
      _objc_release(uVar4);
    }
    lVar3 = param_2;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar13 = 0x78;
    }
    else {
      lVar14 = lVar3;
      func_0x00010c14dea0();
      lVar13 = 0x70;
      if (lVar14 == 0) {
        lVar13 = 0x78;
      }
    }
    lVar14 = *(long *)(param_2 + lVar13);
    _objc_retain(lVar14);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c13b320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1372a0();
    uVar7 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1372a0();
    uVar8 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137280();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04340(PTR_PTR_1126bff98);
    puVar11 = PTR_PTR_1126bff98;
    func_0x00010bf18180();
    func_0x00010bf91180(lVar14);
    lVar13 = lVar14;
    func_0x00010bfaaa00();
    puVar5 = PTR_PTR_1126d6370;
    iVar1 = (int)lVar13;
    if (iVar1 == 4) {
      lVar13 = lVar14;
      func_0x00010bfb2200();
      if (0 < lVar13) {
        func_0x00010bfb2200(lVar14);
      }
    }
    else if (iVar1 == 3) {
      uVar4 = param_4;
      func_0x00010bf64280(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1372a0();
      func_0x00010bfa5a40(lVar14);
      uVar7 = param_1;
      func_0x00010bfa5a60(lVar14);
      uVar8 = uVar7;
      func_0x00010bfa5a20(lVar14);
      func_0x00010bfa8460(lVar14);
      func_0x00010be638a0(param_1,uVar7,uVar8,puVar5);
      _objc_release(uVar4);
    }
    else if (iVar1 == 2) {
      func_0x00010bfa5a40(lVar14);
    }
    _objc_initWeak(auStack_90,param_2);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107aad8a8;
    puStack_b0 = &UNK_110860190;
    _objc_copyWeak(auStack_a0,auStack_90);
    puStack_98 = puVar11;
    _objc_retain(param_4);
    ppuVar12 = &puStack_c8;
    uStack_a8 = param_4;
    _objc_retainBlock();
    puVar5 = PTR_PTR_1126d6358;
    _objc_alloc(PTR_PTR_1126d6358);
    func_0x00010c026800();
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    lVar13 = param_2;
    func_0x00010be4f1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar13);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010bf4d380(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef6a0(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(ppuVar12);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar14);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107aad8a8; end: 107aad913;  */

void FUN_107aad8a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf94960(PTR_PTR_1126bff98);
    func_0x00010be269e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107aad914; end: 107aadbfb; -[SCStreamingResourceLoadingRequestHandler _boostStreamingImportanceForActivePlayer] */

void FUN_107aad914(double param_1,long param_2,undefined8 param_3)

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
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  dVar17 = param_1;
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bfc4620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar12 = PTR_PTR_1126b1378;
  uVar1 = uVar13;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c46a0();
  uVar3 = uVar13;
  func_0x00010c27ef40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010c11fca0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f12c0();
  uVar6 = uVar13;
  func_0x00010c11fca0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf6db00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2a5480();
  uVar9 = uVar13;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c27bc40();
  uVar11 = uVar13;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2add40(puVar12,param_3,4,uVar2,uVar3,uVar5,uVar8,0x1f5,uVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010bf4d380(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a7a0();
  _objc_release(uVar13);
  puVar14 = PTR_PTR_1126bcb98;
  func_0x00010c25c860(PTR_PTR_1126bcb98);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010c0ff420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar13);
  _objc_release(uVar1);
  puVar14 = PTR_PTR_1126bcb98;
  func_0x00010c25c860(PTR_PTR_1126bcb98);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010c0ff420();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befc000(dVar17 - param_1,uVar13,param_3,puVar16);
  _objc_release(uVar13);
  _objc_release(uVar1);
  *(undefined2 *)(param_2 + 0x41) = 0x100;
  _objc_release(puVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 107aadbfc; end: 107aadd6f; -[SCStreamingResourceLoadingRequestHandler _handleCMWriteStreamCallback:error:] */

void FUN_107aadbfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4f1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58));
  uVar3 = uVar2;
  func_0x00010bf25ea0(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  _NSUnionRange(uVar4,uVar8,uVar3,param_2);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  if (param_4 != 0) {
    lVar5 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c135660();
    _objc_release(lVar5);
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  if (*(char *)(param_1 + 0x42) == '\x01') {
    puVar6 = PTR_PTR_1126bcb98;
    func_0x00010c25c860(PTR_PTR_1126bcb98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c0ff420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar8);
    *(undefined1 *)(param_1 + 0x42) = 0;
    _objc_release(puVar7);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aadd70; end: 107aadd9f; -[SCStreamingResourceLoadingRequestHandler _loadingRequestHash:] */

void FUN_107aadd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfde980(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_3);
  return;
}



/* Entry: 107aadda0; end: 107aade4b; -[SCStreamingResourceLoadingRequestHandler _regenerateConfigsWithFeatureProvidedSignals:] */

void FUN_107aadda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110eabfd8,0,param_3);
  *(char *)(param_1 + 0x45) = (char)uVar2;
  lVar1 = param_1;
  func_0x00010bde45c0(param_1,param_2,0,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bde45c0(param_1,param_2,1,*(undefined8 *)(param_1 + 0x78),param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aade4c; end: 107aae053; -[SCStreamingResourceLoadingRequestHandler _configForActive:defaultConfig:featureProvidedSignals:] */

void FUN_107aade4c(long param_1,undefined8 param_2,int param_3,undefined *param_4,undefined8 param_5
                  )

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR_PTR_1126d6388;
    func_0x00010c0cb140(PTR_PTR_1126d6388);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eabff8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eac018;
  }
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c46a0();
  func_0x00010b7f519c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar9 = *(long *)(param_1 + 8);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1195e0(lVar9,param_2,puVar5,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 8);
    func_0x00010c1195e0(lVar9,param_2,ppuVar1,0,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = lVar9;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  puVar8 = PTR_PTR_1126d6388;
  puVar5 = param_4;
  if (lVar7 == 0) {
    _objc_retain(param_4);
  }
  else {
    lVar6 = lVar9;
    func_0x00010c296d80(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar8,param_2,lVar6,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puVar5 = puVar8;
    }
    _objc_retain(puVar5);
    _objc_release(puVar8);
    _objc_release(lVar6);
  }
  _objc_release(lVar9);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107aae054; end: 107aae05b; -[SCStreamingResourceLoadingRequestHandler viewLocation] */

undefined8 FUN_107aae054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107aae05c; end: 107aae0fb; -[SCStreamingResourceLoadingRequestHandler .cxx_destruct] */

void FUN_107aae05c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aae0fc; end: 107aae1a7; -[SCStreamingResourceLoaderError initWithResourceId:error:] */

undefined1 *
FUN_107aae0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9a50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aae1a8; end: 107aae1cb; -[SCStreamingResourceLoaderError copyWithZone:] */

undefined8 FUN_107aae1a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107aae1cc; end: 107aae23f; -[SCStreamingResourceLoaderError hash] */

undefined8 * FUN_107aae1cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107aae2c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107aae2cc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107aae2cc;
        }
        goto LAB_107aae2c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107aae2cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107aae240; end: 107aae2e7; -[SCStreamingResourceLoaderError isEqual:] */

long FUN_107aae240(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107aae2c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107aae2cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107aae2cc;
        }
        goto LAB_107aae2c0;
      }
    }
    lVar3 = 0;
  }
LAB_107aae2cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107aae2e8; end: 107aae2ef; -[SCStreamingResourceLoaderError resourceId] */

undefined8 FUN_107aae2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aae2f0; end: 107aae2f7; -[SCStreamingResourceLoaderError error] */

undefined8 FUN_107aae2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aae2f8; end: 107aae3a3; -[SCStreamingResourceLoaderError .cxx_destruct] */

void FUN_107aae2f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aae3a4; end: 107aae3af;  */

bool FUN_107aae3a4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 107aae3b0; end: 107aae417; +[SCPBPlaybackIosStreamingResourceLoaderConfig descriptor] */

void FUN_107aae3b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b6eb20,
                        &PTR____CFConstantStringClassReference_110eac058,&PTR_DAT_11323f280,
                        &PTR_DAT_11323f298,9,0x28,0x1c);
    puRam00000001137274c8 = puVar1;
  }
  return;
}



/* Entry: 107aae418; end: 107aae4e3; -[SCDiscoverVideoCaption initWithUrl:language:type:] */

undefined1 *
FUN_107aae418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9a58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 107aae4e4; end: 107aae4eb; -[SCDiscoverVideoCaption language] */

undefined8 FUN_107aae4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aae4ec; end: 107aae4f3; -[SCDiscoverVideoCaption url] */

undefined8 FUN_107aae4ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aae4f4; end: 107aae4fb; -[SCDiscoverVideoCaption type] */

undefined8 FUN_107aae4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107aae4fc; end: 107aae537; -[SCDiscoverVideoCaption .cxx_destruct] */

void FUN_107aae4fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aae538; end: 107aae9ef; -[SCDiscoverVideoCatalog initWithDictionary:] */

undefined8 * FUN_107aae538(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_178 = PTR_PTR_1126f9a60;
  puVar16 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar16,PTR_s_init_1125d9248);
  if (puVar16 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar16[4];
    puVar16[4] = puVar2;
    _objc_release(uVar13);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar16[3];
    puVar16[3] = puVar2;
    _objc_release(uVar13);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar16[2];
    puVar16[2] = puVar2;
    _objc_release(uVar13);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(puVar5);
        }
        lVar18 = *(long *)((long)puVar17 * 8);
        lVar6 = lVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (lVar6 != 0) {
          lVar6 = lVar18;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          func_0x00010befa120(puVar15);
          lVar8 = lVar18;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar8);
              }
              lVar20 = *(long *)(lVar19 * 8);
              lVar9 = lVar20;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar9 != 0) {
                puVar10 = PTR_PTR_1126d6390;
                _objc_alloc();
                lVar9 = lVar20;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar20;
                func_0x00010c0e00e0(lVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05a160();
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar10);
                _objc_release(lVar20);
                _objc_release(lVar11);
                _objc_release(lVar9);
              }
              lVar19 = lVar19 + 1;
            } while (lVar6 != lVar19);
            lVar6 = lVar8;
            func_0x00010bf52a60();
          }
          _objc_release(lVar8);
          func_0x00010c0e00e0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(lVar18);
          _objc_release(puVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar2);
      puVar2 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar2 = puVar15;
    func_0x00010bf51e00();
    uVar13 = puVar16[1];
    puVar16[1] = puVar2;
    _objc_release(uVar13);
    puVar2 = puVar3;
    func_0x00010bf51e00();
    uVar13 = puVar16[6];
    puVar16[6] = puVar2;
    _objc_release(uVar13);
    puVar2 = puVar4;
    func_0x00010bf51e00();
    uVar13 = puVar16[7];
    puVar16[7] = puVar2;
    _objc_release(uVar13);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar16;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x00010c29bbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010beed460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar4 != (undefined *)0x0) {
        puVar2 = param_3;
        func_0x00010beed460(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar2);
        puVar2 = param_3;
        func_0x00010c29a440(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar2);
        puVar2 = param_3;
        func_0x00010c0d4f60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar2);
      }
    }
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c29bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(puVar4);
        }
        puVar5 = puVar3;
        func_0x00010c0d3c80(puVar3);
        puVar17 = param_3;
        func_0x00010c29bb80(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar17);
        puVar17 = PTR_PTR_1126c9cb8;
        func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar17;
        func_0x00010c0b5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        puVar17 = puVar5;
        func_0x00010bf51e00(puVar5);
        func_0x00010c1d0640(puVar12);
        _objc_release(puVar17);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar15 = puVar15 + 1;
      } while (puVar2 != puVar15);
      puVar2 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar16 = puVar12;
    func_0x00010bf51e00(puVar12);
    _objc_release(puVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return puVar16;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(puVar3 + 8);
}



/* Entry: 107aae9f0; end: 107aaecff; -[SCDiscoverVideoCatalog propertiesForCatalog] */

undefined * FUN_107aae9f0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  func_0x00010c29bbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  _objc_release();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010beed460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      if (puVar2 != (undefined *)0x0) {
        puVar8 = param_1;
        func_0x00010beed460(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar8,&PTR____CFConstantStringClassReference_110eac078);
        _objc_release(puVar8);
        puVar8 = param_1;
        func_0x00010c29a440(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar8,&PTR____CFConstantStringClassReference_110dbf6f8);
        _objc_release(puVar8);
        puVar8 = param_1;
        func_0x00010c0d4f60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar8,&PTR____CFConstantStringClassReference_110dbf1b8);
        _objc_release(puVar8);
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar8 = param_1;
    func_0x00010c29bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar8);
          }
          puVar4 = puVar1;
          func_0x00010c0d3c80(puVar1);
          puVar5 = param_1;
          func_0x00010c29bb80(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4,param_2,puVar6,&PTR____CFConstantStringClassReference_110f0ca18
                             );
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = PTR_PTR_1126c9cb8;
          func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0b5800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar4;
          func_0x00010bf51e00(puVar4);
          func_0x00010c1d0640(puVar2,param_2,puVar5,puVar6);
          _objc_release(puVar5);
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar7 = puVar7 + 1;
        } while (puVar3 != puVar7);
        puVar3 = puVar8;
        func_0x00010bf52a60(puVar8,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 8);
}



/* Entry: 107aaed00; end: 107aaed07; -[SCDiscoverVideoCatalog videoURLs] */

undefined8 FUN_107aaed00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aaed08; end: 107aaed0f; -[SCDiscoverVideoCatalog name] */

undefined8 FUN_107aaed08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aaed10; end: 107aaed17; -[SCDiscoverVideoCatalog accountID] */

undefined8 FUN_107aaed10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107aaed18; end: 107aaed1f; -[SCDiscoverVideoCatalog videoID] */

undefined8 FUN_107aaed18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107aaed20; end: 107aaed27; -[SCDiscoverVideoCatalog playlist] */

undefined8 FUN_107aaed20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107aaed28; end: 107aaed2f; -[SCDiscoverVideoCatalog videoURLToCaption] */

undefined8 FUN_107aaed28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107aaed30; end: 107aaed37; -[SCDiscoverVideoCatalog videoURLToCaptionPresent] */

undefined8 FUN_107aaed30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107aaed38; end: 107aaeda3; -[SCDiscoverVideoCatalog .cxx_destruct] */

void FUN_107aaed38(long param_1)

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



/* Entry: 107aaeda4; end: 107aaeed3; -[SCDiscoverVideoCatalogService initWithCircumstanceEngine:networkConnectivityAnnouncer:] */

undefined1 *
FUN_107aaeda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9a68;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1beb80(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2212e0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80(PTR__OBJC_CLASS___NSPointerArray_1126c4b90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be260(puVar1);
    _objc_release(puVar3);
    func_0x00010c285860(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aaeed4; end: 107aaef2f; -[SCDiscoverVideoCatalogService updateEndpointFromCircumstanceEngine] */

void FUN_107aaeed4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010846c550();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beaa680(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aaef30; end: 107aaf027; -[SCDiscoverVideoCatalogService _setupAdServiceEndpointFromCircumstanceEngine:] */

void FUN_107aaef30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25d760(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107aaf028; end: 107aaf06f;  */

void FUN_107aaf028(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc57e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aaf070; end: 107aaf123; -[SCDiscoverVideoCatalogService _adServiceEndpointFromCircumstanceEngine:] */

void FUN_107aaf070(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1088;
  _objc_alloc_init();
  puVar2 = puVar1;
  if ((param_3 == (undefined *)0x0) || (puVar2 = param_3, func_0x00010c0720c0(), (int)puVar2 != 0))
  {
    func_0x00010846c550();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad378;
  }
  else {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = param_3;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_release(uVar3);
  func_0x00010852b314(puVar1,ppuVar4,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aaf124; end: 107aaf2ff; -[SCDiscoverVideoCatalogService fetchCatalogForAdWithVideoId:withListener:] */

void FUN_107aaf124(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c09a480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
  }
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c09cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c09cc40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bef61e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d6398;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107aaf300;
    puStack_78 = &UNK_1109f9210;
    uStack_70 = param_1;
    _objc_retain(param_3);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107aaf4a8;
    puStack_a8 = &UNK_1109f9240;
    uStack_a0 = param_1;
    uStack_68 = param_3;
    _objc_retain(param_3);
    uStack_98 = param_3;
    func_0x00010bfa58e0(puVar2,param_2,0,param_3,uVar3,uVar5,&puStack_90,&puStack_c0);
    _objc_release(uStack_98);
    _objc_release(uStack_68);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107aaf300; end: 107aaf4a7;  */

/* WARNING: Possible PIC construction at 0x000107aaf468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107aaf46c) */
/* WARNING: Removing unreachable block (ram,0x000107aaf4a4) */
/* WARNING: Removing unreachable block (ram,0x000107aaf484) */

void FUN_107aaf300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ae18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR_PTR_1126d63a0;
      _objc_alloc(PTR_PTR_1126d63a0);
      func_0x00010c00c560();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2996a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c29a440(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09cc40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c135290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestDidSucceed__11262aec0,1);
  return;
}



/* Entry: 107aaf4a8; end: 107aaf4ef;  */

void FUN_107aaf4a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09cc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c135290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestDidSucceed__11262aec0,0);
  return;
}



/* Entry: 107aaf4f0; end: 107aaf577; -[SCDiscoverVideoCatalogService catalogForVideoId:] */

void FUN_107aaf4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c2996a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c118b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107aaf578; end: 107aaf66f; -[SCDiscoverVideoCatalogService requestDidSucceed:] */

void FUN_107aaf578(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf765e0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf32fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107aaf670; end: 107aaf673; -[SCDiscoverVideoCatalogService propertiesForVideoId:] */

void FUN_107aaf670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_catalogForVideoId__1125aa590);
  return;
}



/* Entry: 107aaf674; end: 107aaf72f; -[SCDiscoverVideoCatalogService fetchPropertiesForPage:listener:] */

void FUN_107aaf674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c06b7e0();
  if ((int)uVar1 == 0) {
    func_0x00010c135280(param_1,param_2,0);
  }
  else {
    uVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa58c0(param_1,param_2,uVar2,param_4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aaf730; end: 107aaf877; -[SCDiscoverVideoCatalogService adVideoCatalogEndpoint] */

void FUN_107aaf730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010bf51e00();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c04e820();
    puVar2 = puVar3;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    }
    else {
      puVar5 = puVar3;
      func_0x00010c11d4e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0d3c80();
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    func_0x00010c02dc20();
    func_0x00010befa120(puVar4,param_2,puVar5);
    func_0x00010c1e6460(puVar3,param_2,puVar4);
    puVar6 = puVar3;
    func_0x00010bdc2b80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107aaf878; end: 107aaf87f; -[SCDiscoverVideoCatalogService listeners] */

undefined8 FUN_107aaf878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107aaf880; end: 107aaf8af; -[SCDiscoverVideoCatalogService setListeners:] */

void FUN_107aaf880(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107aaf8b0; end: 107aaf8b7; -[SCDiscoverVideoCatalogService loadingCatalogs] */

undefined8 FUN_107aaf8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107aaf8b8; end: 107aaf8e7; -[SCDiscoverVideoCatalogService setLoadingCatalogs:] */

void FUN_107aaf8b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107aaf8e8; end: 107aaf8ef; -[SCDiscoverVideoCatalogService videoCatalogMap] */

undefined8 FUN_107aaf8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107aaf8f0; end: 107aaf91f; -[SCDiscoverVideoCatalogService setVideoCatalogMap:] */

void FUN_107aaf8f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107aaf920; end: 107aaf9af; -[SCDiscoverVideoCatalogService .cxx_destruct] */

void FUN_107aaf920(long param_1)

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



/* Entry: 107aaf9b0; end: 107aaf9f3; -[SCDiscoverVideoCatalogServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aaf9b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276983c);
  _objc_destroyWeak(param_1 + _DAT_112769838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112769840);
  return;
}



/* Entry: 107aaf9f4; end: 107aafaf3; -[SCDiscoverRemoteVideoSession initWithLogger:] */

undefined1 * FUN_107aaf9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    func_0x00010be92140(puVar1);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aafaf4; end: 107aafb5b; -[SCDiscoverRemoteVideoSession _reset] */

void FUN_107aafaf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c137fe0();
  *(undefined2 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aafb5c; end: 107aafcef; -[SCDiscoverRemoteVideoSession registeredEventsForOperaSession] */

void FUN_107aafb5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c0fffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7d68;
  puStack_a8 = puVar2;
  func_0x00010c100360();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7d68;
  puStack_a0 = puVar3;
  func_0x00010c0ffd20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7d68;
  puStack_98 = puVar4;
  func_0x00010c0fffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c7d68;
  puStack_90 = puVar5;
  func_0x00010c1003e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c7d68;
  puStack_88 = puVar6;
  func_0x00010c0ff000();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7d68;
  puStack_80 = puVar7;
  func_0x00010c0ff260();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c7d68;
  puStack_78 = puVar8;
  func_0x00010c0ff040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = &puStack_a8;
  uVar17 = 8;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar16);
  _objc_retain(uVar17);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126c9310;
  func_0x00010c0700c0(PTR_PTR_1126c9310,param_3,uVar17);
  if ((int)puVar3 == 0) goto LAB_107aafeb0;
  puVar3 = PTR_PTR_1126c7d68;
  func_0x00010c0fffa0(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar16;
  func_0x00010c0720c0(ppuVar16,param_3,puVar3);
  _objc_release(puVar3);
  if ((int)ppuVar11 != 0) {
    puVar2[0x39] = 1;
    goto LAB_107aafeb0;
  }
  puVar3 = PTR_PTR_1126c7d68;
  func_0x00010c100360(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar16;
  func_0x00010c0720c0(ppuVar16,param_3,puVar3);
  _objc_release(puVar3);
  if ((int)ppuVar11 == 0) {
    puVar3 = PTR_PTR_1126c7d68;
    func_0x00010c0ffd20(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar16;
    func_0x00010c0720c0(ppuVar16,param_3,puVar3);
    _objc_release(puVar3);
    if ((int)ppuVar11 == 0) {
      puVar3 = PTR_PTR_1126c7d68;
      func_0x00010c0fffc0(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar16;
      func_0x00010c0720c0(ppuVar16,param_3,puVar3);
      _objc_release(puVar3);
      if ((int)ppuVar11 == 0) {
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c1003e0(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar16;
        func_0x00010c0720c0(ppuVar16,param_3,puVar3);
        _objc_release(puVar3);
        if ((int)ppuVar11 != 0) {
          if (puVar2[0x39] == '\x01') {
            puVar2[0x39] = 0;
          }
          uVar12 = uVar17;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
          func_0x00010bf1f3c0();
          _objc_release(uVar13);
          _objc_release(uVar12);
          if ((int)uVar14 != 0) {
            func_0x00010beed820(*(undefined8 *)(puVar2 + 0x10));
            param_1 = param_1 + *(double *)(puVar2 + 0x58);
            *(double *)(puVar2 + 0x58) = param_1;
            *(long *)(puVar2 + 0x50) = *(long *)(puVar2 + 0x50) + 1;
            uVar18 = *(undefined8 *)(puVar2 + 8);
            uVar12 = uVar17;
            func_0x00010c118b40();
            fVar19 = SUB84(param_1,0);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126b2348;
            func_0x00010c0c4a80(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar19 = fVar19 / 1000.0;
            dVar25 = (double)fVar19;
            puVar4 = PTR_PTR_1126b2348;
            func_0x00010bf8b340(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            uVar20 = (ulong)(uint)(fVar19 / 1000.0);
            func_0x00010beed820(*(undefined8 *)(puVar2 + 0x18));
            uVar21 = uVar20;
            func_0x00010beed820(*(undefined8 *)(puVar2 + 0x20));
            uVar1 = puVar2[0x48];
            uVar22 = uVar21;
            func_0x00010bf0ace0(PTR_PTR_1126b2340,param_3,param_6);
            uVar23 = uVar22;
            func_0x00010beed820(*(undefined8 *)(puVar2 + 0x28));
            uVar24 = uVar23;
            func_0x00010beed820(*(undefined8 *)(puVar2 + 0x30));
            func_0x00010c0a8ae0(dVar25,(double)(fVar19 / 1000.0),uVar20,uVar21,uVar22,uVar23,uVar24,
                                uVar18,param_3,uVar13,uVar1);
            _objc_release(uVar15);
            _objc_release(puVar4);
            _objc_release(uVar14);
            _objc_release(puVar3);
            _objc_release(uVar13);
            _objc_release(uVar12);
          }
          func_0x00010be92140(puVar2);
          goto LAB_107aafeb0;
        }
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c0ff000(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar16;
        func_0x00010c0720c0(ppuVar16,param_3,puVar3);
        _objc_release(puVar3);
        if (((ulong)ppuVar11 & 1) != 0) goto LAB_107aafeb0;
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c0ff260(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar16;
        func_0x00010c0720c0(ppuVar16,param_3,puVar3);
        _objc_release(puVar3);
        if ((int)ppuVar11 != 0) goto LAB_107aafe20;
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c0ff040(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar16;
        func_0x00010c0720c0(ppuVar16,param_3,puVar3);
        _objc_release(puVar3);
        if ((int)ppuVar11 == 0) goto LAB_107aafeb0;
      }
      else {
        puVar2[0x38] = 0;
      }
    }
    else {
      puVar2[0x38] = 1;
    }
    func_0x00010bee3520(puVar2,param_3,param_6);
  }
  else {
    puVar2[0x38] = 0;
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bf30920(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1f3c0();
    puVar2[0x48] = (char)uVar13;
    _objc_release(uVar12);
    _objc_release(puVar3);
    func_0x00010bee3520(puVar2,param_3,param_6);
LAB_107aafe20:
    if (puVar2[0x39] == '\x01') {
      puVar2[0x39] = 0;
    }
  }
LAB_107aafeb0:
  _objc_release(param_6);
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar16);
  return;
}



/* Entry: 107aafcf0; end: 107ab018f; -[SCDiscoverRemoteVideoSession operaViewDidSendEvent:page:params:] */

void FUN_107aafcf0(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c0700c0(PTR_PTR_1126c9310,param_3,param_5);
  if ((int)puVar2 == 0) goto LAB_107aafeb0;
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c0fffa0(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    *(undefined1 *)(param_2 + 0x39) = 1;
    goto LAB_107aafeb0;
  }
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c100360(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126c7d68;
    func_0x00010c0ffd20(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 == 0) {
      puVar2 = PTR_PTR_1126c7d68;
      func_0x00010c0fffc0(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar2);
      _objc_release(puVar2);
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126c7d68;
        func_0x00010c1003e0(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 != 0) {
          if (*(char *)(param_2 + 0x39) == '\x01') {
            *(undefined1 *)(param_2 + 0x39) = 0;
          }
          uVar4 = param_5;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf1f3c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          if ((int)uVar6 != 0) {
            func_0x00010beed820(*(undefined8 *)(param_2 + 0x10));
            param_1 = param_1 + *(double *)(param_2 + 0x58);
            *(double *)(param_2 + 0x58) = param_1;
            *(long *)(param_2 + 0x50) = *(long *)(param_2 + 0x50) + 1;
            uVar9 = *(undefined8 *)(param_2 + 8);
            uVar4 = param_5;
            func_0x00010c118b40();
            fVar10 = SUB84(param_1,0);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126b2348;
            func_0x00010c0c4a80(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            fVar10 = fVar10 / 1000.0;
            dVar15 = (double)fVar10;
            puVar7 = PTR_PTR_1126b2348;
            func_0x00010bf8b340(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            uVar11 = (ulong)(uint)(fVar10 / 1000.0);
            func_0x00010beed820(*(undefined8 *)(param_2 + 0x18));
            uVar3 = uVar11;
            func_0x00010beed820(*(undefined8 *)(param_2 + 0x20));
            uVar1 = *(undefined1 *)(param_2 + 0x48);
            uVar12 = uVar3;
            func_0x00010bf0ace0(PTR_PTR_1126b2340,param_3,param_6);
            uVar13 = uVar12;
            func_0x00010beed820(*(undefined8 *)(param_2 + 0x28));
            uVar14 = uVar13;
            func_0x00010beed820(*(undefined8 *)(param_2 + 0x30));
            func_0x00010c0a8ae0(dVar15,(double)(fVar10 / 1000.0),uVar11,uVar3,uVar12,uVar13,uVar14,
                                uVar9,param_3,uVar5,uVar1);
            _objc_release(uVar8);
            _objc_release(puVar7);
            _objc_release(uVar6);
            _objc_release(puVar2);
            _objc_release(uVar5);
            _objc_release(uVar4);
          }
          func_0x00010be92140(param_2);
          goto LAB_107aafeb0;
        }
        puVar2 = PTR_PTR_1126c7d68;
        func_0x00010c0ff000(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((uVar3 & 1) != 0) goto LAB_107aafeb0;
        puVar2 = PTR_PTR_1126c7d68;
        func_0x00010c0ff260(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 != 0) goto LAB_107aafe20;
        puVar2 = PTR_PTR_1126c7d68;
        func_0x00010c0ff040(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 == 0) goto LAB_107aafeb0;
      }
      else {
        *(undefined1 *)(param_2 + 0x38) = 0;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x38) = 1;
    }
    func_0x00010bee3520(param_2,param_3,param_6);
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = 0;
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf30920(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    *(char *)(param_2 + 0x48) = (char)uVar5;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010bee3520(param_2,param_3,param_6);
LAB_107aafe20:
    if (*(char *)(param_2 + 0x39) == '\x01') {
      *(undefined1 *)(param_2 + 0x39) = 0;
    }
  }
LAB_107aafeb0:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ab0190; end: 107ab0413; -[SCDiscoverRemoteVideoSession _updateVideoTimers:] */

void FUN_107ab0190(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c075940(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    _objc_release(puVar2);
    if ((int)lVar4 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      func_0x00010c24d960();
    }
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c07a740(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(puVar2);
LAB_107ab02e4:
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      puVar5 = PTR_PTR_1126b2348;
      func_0x00010c07a740(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf1f3c0();
      _objc_release(lVar4);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(puVar2);
      if ((int)lVar6 != 0) goto LAB_107ab02e4;
      func_0x00010c24d960(*(undefined8 *)(param_1 + 0x28));
    }
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c074120(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_release(puVar2);
LAB_107ab0390:
      func_0x00010c24d960(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar5 = PTR_PTR_1126b2348;
      func_0x00010c074120(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf1f3c0();
      _objc_release(lVar4);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(puVar2);
      if ((int)lVar6 != 0) goto LAB_107ab0390;
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c24d960(*(undefined8 *)(param_1 + 0x20));
    }
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf30920(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    if ((int)lVar4 != 0) {
      func_0x00010c24d960(uVar1);
      goto LAB_107ab03f8;
    }
  }
  func_0x00010c0f5b20(uVar1);
LAB_107ab03f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab0414; end: 107ab041b; -[SCDiscoverRemoteVideoSession videoWithCaptionOnTimeViewedSeconds] */

void FUN_107ab0414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107ab041c; end: 107ab0423; -[SCDiscoverRemoteVideoSession videoInLandscapeModeTimeViewedSeconds] */

void FUN_107ab041c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 107ab0424; end: 107ab042b; -[SCDiscoverRemoteVideoSession startedWithCaptionOn] */

undefined1 FUN_107ab0424(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 107ab042c; end: 107ab0433; -[SCDiscoverRemoteVideoSession inlineVideosViewedCount] */

undefined8 FUN_107ab042c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107ab0434; end: 107ab043b; -[SCDiscoverRemoteVideoSession setInlineVideosViewedCount:] */

void FUN_107ab0434(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107ab043c; end: 107ab0443; -[SCDiscoverRemoteVideoSession inlineVideosTotalTimeViewedSec] */

undefined8 FUN_107ab043c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ab0444; end: 107ab044b; -[SCDiscoverRemoteVideoSession setInlineVideosTotalTimeViewedSec:] */

void FUN_107ab0444(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 107ab044c; end: 107ab04b7; -[SCDiscoverRemoteVideoSession .cxx_destruct] */

void FUN_107ab044c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107ab04b8; end: 107ab0513; +[SCDiscoverOperaPageTraits isDSnap:] */

bool FUN_107ab04b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 107ab0514; end: 107ab0597; +[SCDiscoverOperaPageTraits dSnapId:] */

void FUN_107ab0514(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0598; end: 107ab0603; +[SCDiscoverOperaPageTraits isCommerce:] */

undefined8 FUN_107ab0598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107ab0604; end: 107ab066f; +[SCDiscoverOperaPageTraits isCameos:] */

undefined8 FUN_107ab0604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107ab0670; end: 107ab06f3; +[SCDiscoverOperaPageTraits storyDedupeFp:] */

void FUN_107ab0670(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab06f4; end: 107ab0777; +[SCDiscoverOperaPageTraits storyCompositeId:] */

void FUN_107ab06f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0778; end: 107ab07fb; +[SCDiscoverOperaPageTraits uniqueIdentifier:] */

void FUN_107ab0778(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab07fc; end: 107ab087f; +[SCDiscoverOperaPageTraits publisherUniqueName:] */

void FUN_107ab07fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0880; end: 107ab0903; +[SCDiscoverOperaPageTraits isTopSnap:] */

void FUN_107ab0880(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0904; end: 107ab0987; +[SCDiscoverOperaPageTraits longformVideoId:] */

void FUN_107ab0904(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0988; end: 107ab0a0b; +[SCDiscoverOperaPageTraits editionId:] */

void FUN_107ab0988(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0a0c; end: 107ab0a8f; +[SCDiscoverOperaPageTraits publisherId:] */

void FUN_107ab0a0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0a90; end: 107ab0b13; +[SCDiscoverOperaPageTraits segmentId:] */

void FUN_107ab0a90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0b14; end: 107ab0b97; +[SCDiscoverOperaPageTraits showId:] */

void FUN_107ab0b14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0b98; end: 107ab0c2f; +[SCDiscoverOperaPageTraits isDSnapShareable:] */

ulong FUN_107ab0b98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107ab0c30; end: 107ab0cc7; +[SCDiscoverOperaPageTraits enableContentManager:] */

ulong FUN_107ab0c30(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107ab0cc8; end: 107ab0d4b; +[SCDiscoverOperaPageTraits editionTimestamp:] */

void FUN_107ab0cc8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab0d4c; end: 107ab0d57; +[SCDiscoverPublisherOperaDataSource announcerIdentifier] */

undefined ** FUN_107ab0d4c(void)

{
  return &PTR____CFConstantStringClassReference_110eac1d8;
}



/* Entry: 107ab0d58; end: 107ab0f87; -[SCDiscoverPublisherOperaDataSource initWithEnableAutoAdvance:loggingContext:snapDocConfigurer:discoverFeedDataFetcher:discoverFeedEventsController:pagePropertiesManager:cachedViewStateProvider:readReceiptCoordinator:viewLocation:circumstanceEngine:creatorSettingsFetcher:storiesConfigProvider:] */

undefined8 *
FUN_107ab0d58(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f9a78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0x13) = param_3;
    _objc_storeWeak(puVar1 + 7,param_4);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_storeWeak(puVar1 + 10,param_7);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_storeWeak(puVar1 + 9,param_10);
    puVar1[0x11] = param_11;
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_storeWeak(puVar1 + 0xc,param_13);
    _objc_storeWeak(puVar1 + 0xd,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107ab0f88; end: 107ab0f93; -[SCDiscoverPublisherOperaDataSource setPlaylistItemController:] */

void FUN_107ab0f88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107ab0f94; end: 107ab0f9f; -[SCDiscoverPublisherOperaDataSource setLoggingContext:] */

void FUN_107ab0f94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107ab0fa0; end: 107ab103b; -[SCDiscoverPublisherOperaDataSource _publisherStoryOperaGroupIdForPage:] */

void FUN_107ab0fa0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c2805a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    lVar4 = 0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c1014c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar4 = lVar3;
    func_0x00010be36bc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ab103c; end: 107ab10c7; -[SCDiscoverPublisherOperaDataSource canResolvePlaylistItemGroupDataModel:] */

uint FUN_107ab103c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == 0) || (uVar3 = param_3, func_0x00010bfd5020(), (uVar3 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bfd8720(param_3);
    uVar4 = (uint)uVar3 ^ 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107ab10c8; end: 107ab11e7; -[SCDiscoverPublisherOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_107ab10c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = uVar1;
    func_0x00010c280580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  uVar3 = uVar1;
  func_0x00010c280580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ade0(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ab11e8; end: 107ab1293; -[SCDiscoverPublisherOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_107ab11e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010bebc240(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13ac00();
    _objc_release(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab1294; end: 107ab131f; -[SCDiscoverPublisherOperaDataSource loadMediaForPlaylistItemGroup:] */

void FUN_107ab1294(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bebc240(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b940();
    _objc_release(param_1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab1320; end: 107ab1513; -[SCDiscoverPublisherOperaDataSource _singleDiscoverPublisherOperaDataSourceForStoryPlayableId:] */

void FUN_107ab1320(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  func_0x00010bf51e00();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = *(undefined **)(param_1 + 0x70);
      func_0x00010c0e00e0(puVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107ab14e8;
    }
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uStack_68 = 0;
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uStack_68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126d63b8;
  _objc_alloc();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar8 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  lVar9 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar10 = param_1 + 0x58;
  _objc_loadWeakRetained();
  func_0x00010c04de60(puVar2,param_2,uStack_68,lVar1,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,uVar11,
                      lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar2,param_3);
  }
  _objc_release(uStack_68);
LAB_107ab14e8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ab1514; end: 107ab15cf; -[SCDiscoverPublisherOperaDataSource dataModelFor:] */

void FUN_107ab1514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bebc240(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab15d0; end: 107ab1653; -[SCDiscoverPublisherOperaDataSource dataModelForGroup:] */

void FUN_107ab15d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  func_0x00010bebc240(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25a740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


