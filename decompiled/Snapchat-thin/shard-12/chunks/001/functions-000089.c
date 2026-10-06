/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d4b484; end: 108d4b7c3;  */

undefined8 *** FUN_108d4b484(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  ulong uVar14;
  undefined *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined **ppuStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined *puStack_270;
  undefined8 **ppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 **ppuStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 **appuStack_178 [17];
  undefined8 *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_178[0] = (undefined8 ***)0x0;
  pppuVar10 = appuStack_178;
  puVar1 = PTR_PTR_1126dbd70;
  func_0x00010c13a9a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = (undefined8 ***)appuStack_178[0];
  _objc_retain(appuStack_178[0]);
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = puVar1;
    func_0x00010c293500();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      ppuStack_230 = pppuVar9;
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puStack_240 = unaff_x22;
      puStack_238 = puVar1;
      func_0x00010bfad300();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x28);
      puStack_248 = puVar2;
      puStack_208 = puVar1;
      func_0x00010c298c00();
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      param_2 = &uStack_1c0;
      pppuVar10 = (undefined8 ***)apuStack_f0;
      lStack_228 = lVar3;
      func_0x00010bf52a60();
      lStack_218 = lVar3;
      if (lVar3 != 0) {
        lStack_220 = *plStack_1b0;
        do {
          lVar3 = 0;
          do {
            if (*plStack_1b0 != lStack_220) {
              _objc_enumerationMutation(lStack_228);
            }
            lVar4 = *(long *)(param_1 + 0x28);
            lStack_210 = lVar3;
            func_0x00010c298c00();
            _objc_retainAutoreleasedReturnValue();
            lStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            lVar3 = lVar4;
            func_0x00010bf52a60();
            if (lVar3 != 0) {
              unaff_x24 = *plStack_1f0;
              unaff_x23 = lVar3;
              do {
                unaff_x26 = 0;
                do {
                  if (*plStack_1f0 != unaff_x24) {
                    _objc_enumerationMutation(lVar4);
                  }
                  uVar14 = *(ulong *)(lStack_1f8 + unaff_x26 * 8);
                  func_0x00010c0f5860();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar14;
                  func_0x00010bf529e0();
                  if (1 < uVar5) {
                    uVar5 = uVar14;
                    func_0x00010c089820(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = &PTR__OBJC_CLASS___NSConstantArray_111183008;
                    func_0x00010bf4b900();
                    _objc_release(uVar5);
                    if ((int)unaff_x25 != 0) {
                      func_0x00010bf529e0(uVar14);
                      uVar5 = uVar14;
                      func_0x00010c0dfd20(uVar14);
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x00010bdc2600();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = *(ulong *)(param_1 + 0x20);
                      func_0x00010bf4b900();
                      if ((uVar6 & 1) == 0) {
                        func_0x00010c12cc60(puStack_208);
                      }
                      _objc_release(unaff_x25);
                      _objc_release(uVar5);
                    }
                  }
                  _objc_release(uVar14);
                  unaff_x26 = unaff_x26 + 1;
                } while (unaff_x23 != unaff_x26);
                unaff_x23 = lVar4;
                func_0x00010bf52a60();
              } while (unaff_x23 != 0);
            }
            _objc_release(lVar4);
            lVar3 = lStack_210 + 1;
          } while (lVar3 != lStack_218);
          param_2 = &uStack_1c0;
          pppuVar10 = (undefined8 ***)apuStack_f0;
          lVar3 = lStack_228;
          func_0x00010bf52a60();
          lStack_218 = lVar3;
        } while (lVar3 != 0);
      }
      _objc_release(lStack_228);
      _objc_release(puStack_208);
      _objc_release(puStack_248);
      pppuVar9 = (undefined8 ***)ppuStack_230;
      puVar1 = puStack_238;
      unaff_x22 = puStack_240;
    }
    _objc_release(unaff_x22);
  }
  _objc_release(puVar1);
  pppuVar7 = pppuVar9;
  _objc_release(pppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  ppuVar8 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  pcStack_258 = FUN_108d4b7c4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_290 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puStack_280 = unaff_x22;
  lStack_278 = param_1;
  puStack_270 = puVar1;
  ppuStack_268 = pppuVar9;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar10);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar10;
  puVar12 = param_2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar10);
  _objc_release(param_2);
  ppuVar13 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar9);
    return pppuVar9;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_108d4b8a4;
  lStack_2e0 = unaff_x26;
  ppuStack_2d8 = unaff_x25;
  lStack_2d0 = unaff_x24;
  lStack_2c8 = unaff_x23;
  puStack_2c0 = ppuVar8;
  puStack_2b8 = param_2;
  ppuStack_2b0 = pppuVar10;
  ppuStack_2a8 = pppuVar9;
  ppuStack_2a0 = &puStack_260;
  _objc_retain(puVar12);
  puStack_2e8 = PTR_PTR_1126fe768;
  pppuVar10 = (undefined8 ***)&puStack_2f0;
  puStack_2f0 = ppuVar13;
  _objc_msgSendSuper2(pppuVar10,PTR_s_init_1125d9248);
  ppuVar8 = (undefined8 **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (pppuVar10 != (undefined8 ***)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = pppuVar10[1];
    pppuVar10[1] = ppuVar8;
    _objc_release(ppuVar13);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar10;
    func_0x00010c141620(pppuVar10);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar9;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(pppuVar7);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf55da0(puVar1);
    }
    pppuVar7 = pppuVar9;
    func_0x00010befb520(pppuVar9);
    FUN_108d4af50();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = pppuVar7;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    pppuVar7 = pppuVar11;
    func_0x00010c0f5800(pppuVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(pppuVar7);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf55da0(puVar1);
    }
    _objc_release(pppuVar11);
    _objc_release(pppuVar9);
    _objc_release(puVar1);
  }
  _objc_release(puVar12);
  return pppuVar10;
}



/* Entry: 108d4b7c4; end: 108d4b8a3; +[SCGalleryFilePathManager versionDirectoriesAtFileUrl:fileManager:] */

undefined **
FUN_108d4b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_4;
  uVar7 = param_3;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  puStack_98 = PTR_PTR_1126fe768;
  ppuVar2 = &puStack_a0;
  puStack_a0 = puVar1;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_1125d9248);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = ppuVar2[1];
    ppuVar2[1] = puVar1;
    _objc_release(puVar9);
    _objc_release(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c141620(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(ppuVar5);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bf55da0(puVar1);
    }
    ppuVar5 = ppuVar4;
    func_0x00010befb520(ppuVar4);
    FUN_108d4af50();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar6;
    func_0x00010c0f5800(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(ppuVar5);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010bf55da0(puVar1);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(puVar1);
  }
  _objc_release(uVar7);
  return ppuVar2;
}



/* Entry: 108d4b8a4; end: 108d4ba77; -[SCGalleryFilePathManager initWithUserId:] */

undefined8 * FUN_108d4b8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fe768;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c141620(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfacbe0();
    _objc_release(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf55da0(puVar3);
    }
    puVar5 = puVar4;
    func_0x00010befb520(puVar4);
    FUN_108d4af50();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c0f5800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfacbe0();
    _objc_release(puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf55da0(puVar3);
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108d4ba78; end: 108d4bac3; -[SCGalleryFilePathManager rootDocumentURL] */

void FUN_108d4ba78(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108d4b36c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d4bac4; end: 108d4bacf; -[SCGalleryFilePathManager .cxx_destruct] */

void FUN_108d4bac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4bad0; end: 108d4bccb;  */

void FUN_108d4bad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
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
  
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e5b0;
  puRam000000011372e5b0 = puVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puRam000000011372e5b0;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfacbe0(puVar3,param_2,puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010bf55da0(puVar3,param_2,puRam000000011372e5b0,1,0,0);
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar5 = puVar3;
    func_0x00010bf4dfc0(puVar3,param_2,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar8 = *plStack_110;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar8) {
            _objc_enumerationMutation(puVar5);
          }
          puVar7 = puVar4;
          func_0x00010c25ce00(puVar4,param_2,*(undefined8 *)(lStack_118 + (long)puVar9 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc40(puVar3,param_2,puVar7,0);
          _objc_release(puVar7);
          puVar9 = puVar9 + 1;
        } while (puVar6 != puVar9);
        puVar6 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar4,param_2,puVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bdc2c60(puVar4,param_2,&PTR____CFConstantStringClassReference_110dcc338);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e5c0;
  puRam000000011372e5c0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108d4bccc; end: 108d4bdcf;  */

void FUN_108d4bccc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar2,param_2,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bdc2c60(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcc338);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e5c0;
  puRam000000011372e5c0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108d4bdd0; end: 108d4c0c7; -[SCMemoriesLegacyContentManagingServiceProvider _buildEncryptedContentManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4bdd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_a0;
  
  puVar1 = PTR_PTR_1126dbd60;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11277b6b0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar11;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11277b6a4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar12;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11277b6ac;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar13;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_a0 = 0;
    lVar14 = 0;
  }
  else {
    uStack_a0 = param_1 + _DAT_11277b6a8;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_11277b6b4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar14;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11277b6b8;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar15;
  func_0x00010c299d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11277b6bc;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010bf93d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11277b6c0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11277b6c4;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010c0c9860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11277b6c8;
    _objc_loadWeakRetained();
  }
  lVar10 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fd20(puVar1,param_2,lVar2,lVar3,lVar4,uStack_a0,lVar5,lVar6,lVar7,lVar8,lVar9,
                      lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d4c0c8; end: 108d4c163; -[SCMemoriesLegacyContentManagingServiceProvider _buildFilePathManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c0c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b24f0;
  _objc_alloc(PTR_PTR_1126b24f0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11277b6a0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c293740(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d4c164; end: 108d4c207; -[SCMemoriesLegacyContentManagingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c164(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b6c8);
  _objc_destroyWeak(param_1 + _DAT_11277b6c4);
  _objc_destroyWeak(param_1 + _DAT_11277b6c0);
  _objc_destroyWeak(param_1 + _DAT_11277b6bc);
  _objc_destroyWeak(param_1 + _DAT_11277b6b8);
  _objc_destroyWeak(param_1 + _DAT_11277b6b4);
  _objc_destroyWeak(param_1 + _DAT_11277b6b0);
  _objc_destroyWeak(param_1 + _DAT_11277b6ac);
  _objc_destroyWeak(param_1 + _DAT_11277b6a8);
  _objc_destroyWeak(param_1 + _DAT_11277b6a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b6a0);
  return;
}



/* Entry: 108d4c208; end: 108d4c277; -[SCMemoriesLegacyContentManagingServices .cxx_destruct] */

void FUN_108d4c208(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4c278; end: 108d4c29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c278(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11277b6e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d4c29c; end: 108d4c54b; -[SCMemoriesDataObjectStorageServiceProvider _galleryProfileHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c29c(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar19 = (long)_DAT_11277b6d8;
  _os_unfair_lock_lock(param_1 + lVar19);
  lVar20 = param_1;
  FUN_108d4c278();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  lVar21 = (long)_DAT_11277b6e0;
  lVar20 = *(long *)(param_1 + lVar21);
  if (lVar20 == 0) {
    puVar2 = PTR_PTR_1126dbd90;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_11277b6ec;
    _objc_loadWeakRetained();
    lVar4 = lVar20;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11277b6ec;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf8d6c0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010be19fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11277b6f4;
    _objc_loadWeakRetained(lVar13);
    lVar14 = param_1 + _DAT_11277b6fc;
    _objc_loadWeakRetained(lVar14);
    lVar15 = lVar14;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_11277b6f8;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c2a0(puVar2,param_2,lVar3,lVar6,lVar11,lVar12,lVar13,lVar15,lVar17);
    uVar18 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar2;
    _objc_release(uVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar20);
    _objc_release(lVar3);
    lVar20 = *(long *)(param_1 + lVar21);
  }
  _objc_retain(lVar20);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar20);
  return;
}



/* Entry: 108d4c54c; end: 108d4c627; -[SCMemoriesDataObjectStorageServiceProvider end] */

void FUN_108d4c54c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b24d8;
  uVar2 = param_1;
  FUN_108d4c278();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb4a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c12bca0(PTR_PTR_1126aef90);
  puStack_48 = PTR_PTR_1126fe778;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d4c628; end: 108d4c71f; -[SCMemoriesDataObjectStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c628(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b708);
  _objc_destroyWeak(param_1 + _DAT_11277b704);
  _objc_destroyWeak(param_1 + _DAT_11277b700);
  _objc_destroyWeak(param_1 + _DAT_11277b6fc);
  _objc_destroyWeak(param_1 + _DAT_11277b6f8);
  _objc_destroyWeak(param_1 + _DAT_11277b6f4);
  _objc_destroyWeak(param_1 + _DAT_11277b6f0);
  _objc_destroyWeak(param_1 + _DAT_11277b6ec);
  _objc_destroyWeak(param_1 + _DAT_11277b6e8);
  _objc_destroyWeak(param_1 + _DAT_11277b6e4);
  _objc_storeStrong(param_1 + _DAT_11277b6e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b6dc,0);
  return;
}



/* Entry: 108d4c720; end: 108d4cc67; -[SCMemoriesEncryptedDatabaseServiceProvider _galleryEncryptedDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4c720(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbda0;
  _objc_alloc();
  lVar3 = param_1;
  FUN_108d4cca8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000108d4cccc();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000108d4ccf0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000108d4cd14(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000108d4cd38(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11277b724;
    _objc_loadWeakRetained(lVar20);
  }
  lVar15 = lVar20;
  func_0x00010c149980(lVar20);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000108d4cccc();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000108d4cd5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f6c0();
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar20);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x000108d4cd5c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c235480();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if ((int)lVar6 == 0) {
    _objc_retain(puVar2);
    puVar19 = puVar2;
  }
  else {
    puVar19 = PTR_PTR_1126dbda8;
    _objc_alloc();
    lVar3 = param_1;
    FUN_108d4cca8();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d82c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x000108d4cccc();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0c9500();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x000108d4cd14(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x000108d4cd38(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x000108d4cccc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x000108d4cd5c(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + _DAT_11277b72c;
      _objc_loadWeakRetained();
    }
    lVar15 = param_1;
    func_0x00010c2798e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f6e0(puVar19);
    _objc_release(lVar15);
    _objc_release(param_1);
    _objc_release(lVar20);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 108d4cc68; end: 108d4cca7;  */

void FUN_108d4cc68(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108d4cca8; end: 108d4cd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4cca8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11277b714);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d4cd80; end: 108d4ce3b; -[SCMemoriesEncryptedDatabaseServiceProvider _memoriesEncryptedDatabaseLogger] */

void FUN_108d4cd80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dbdb0;
  _objc_alloc(PTR_PTR_1126dbdb0);
  uVar2 = param_1;
  func_0x000108d4ccf0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d4cd38(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f200(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d4ce3c; end: 108d4cec7; -[SCMemoriesEncryptedDatabaseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d4ce3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b72c);
  _objc_destroyWeak(param_1 + _DAT_11277b728);
  _objc_destroyWeak(param_1 + _DAT_11277b724);
  _objc_destroyWeak(param_1 + _DAT_11277b720);
  _objc_destroyWeak(param_1 + _DAT_11277b71c);
  _objc_destroyWeak(param_1 + _DAT_11277b718);
  _objc_destroyWeak(param_1 + _DAT_11277b714);
  _objc_destroyWeak(param_1 + _DAT_11277b710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b70c);
  return;
}



/* Entry: 108d4cec8; end: 108d4ceef; -[SCGalleryDataObjectLogger _convertCoreDataExceptionType:] */

undefined ** FUN_108d4cec8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 9) {
    return (undefined **)(&PTR_PTR_110ac3238)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ef6f98;
}



/* Entry: 108d4cef0; end: 108d4cfc7; -[SCGalleryDataObjectLogger _logGalleryException:errorMessage:extraParams:] */

void FUN_108d4cef0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126d80e8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  func_0x00010c197f20();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  func_0x00010c1971a0(puVar2,param_2,ppuVar1);
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  func_0x00010c1999c0(puVar2,param_2,ppuVar1);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108d4cfc8; end: 108d4d01b; -[SCGalleryDataObjectLogger _logGalleryDBStuck] */

void FUN_108d4cfc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dbdb8;
  _objc_opt_new(PTR_PTR_1126dbdb8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d01c; end: 108d4d0e7; -[SCGalleryDataObjectLogger logDataObjectContextError:errorMessage:extraParams:] */

void FUN_108d4d01c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bde90c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb01e0(PTR_PTR_1126b24e0,param_2,lVar1,*(undefined8 *)(param_1 + 0x10));
  if (param_3 < 10) {
    if ((1L << (param_3 & 0x3f) & 0x29fU) == 0) {
      if (param_3 == 8) {
        func_0x00010be53d80(param_1);
      }
    }
    else {
      func_0x00010be53da0(param_1,param_2,lVar1,param_4,param_5);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108d4d0e8; end: 108d4d117; -[SCGalleryDataObjectLogger .cxx_destruct] */

void FUN_108d4d0e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4d118; end: 108d4d1bb; -[SCMemoriesEncryptedDatabaseLogger initWithUserTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_108d4d118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe788;
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



/* Entry: 108d4d1bc; end: 108d4d25b; -[SCMemoriesEncryptedDatabaseLogger _callsitesWithMemoriesGrapheneContext:] */

void FUN_108d4d1bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc94b8;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bfca780();
    lVar1 = param_3;
    func_0x00010bf93a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c14de00(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110ef70f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108d4d25c; end: 108d4d417; -[SCMemoriesEncryptedDatabaseLogger _emitEncryptedDatabaseErrorGrapheneWithMethodName:errorName:memoriesGrapheneContext:] */

void FUN_108d4d25c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf93aa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfca780();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ef7118,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = param_5;
  func_0x00010bf93a40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef7138,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d418; end: 108d4d4db; -[SCMemoriesEncryptedDatabaseLogger _emitEncryptedDatabaseErrorGrapheneWithMethod:error:memoriesGrapheneContext:] */

void FUN_108d4d418(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d80e8;
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  func_0x00010c197f20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef7318;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef7338;
  }
  _objc_retain(ppuVar1);
  FUN_108d4d4dc(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07b20(param_1,param_2,ppuVar1,param_4,param_5);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108d4d4dc; end: 108d4d503;  */

undefined ** FUN_108d4d4dc(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return (undefined **)(&PTR_PTR_110ac3280)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ef7358;
}



/* Entry: 108d4d504; end: 108d4d62b; -[SCMemoriesEncryptedDatabaseLogger _emitGalleryExceptionBlizzardMetricWithMethod:error:description:] */

void FUN_108d4d504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d80e8;
  _objc_opt_new(PTR_PTR_1126d80e8);
  func_0x00010c197f20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef7318;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef7338;
  }
  _objc_retain(ppuVar1);
  FUN_108d4d4dc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c1999c0(puVar2,param_2,puVar3);
  lVar4 = param_5;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1971a0(puVar2,param_2,param_5);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108d4d62c; end: 108d4d777; -[SCMemoriesEncryptedDatabaseLogger _emitAllErrorMetricsWithMethod:error:description:memoriesGrapheneContext:] */

void FUN_108d4d62c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef7318;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef7338;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar2 = param_4;
  FUN_108d4d4dc();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_1;
  func_0x00010bdd8fe0(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110ef7158);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar3);
  func_0x00010be07b20(param_1,param_2,ppuVar1,uVar2,param_6);
  _objc_release(ppuVar1);
  _objc_release(param_6);
  func_0x00010be07c40(param_1,param_2,param_3,param_4,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108d4d778; end: 108d4d823; -[SCMemoriesEncryptedDatabaseLogger failedToInvokeRequestKeyResultHandlerForSnapId:keyIVLength:validIsEncryptedField:hasResultHandler:memoriesGrapheneContext:] */

void FUN_108d4d778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint in_w5;
  undefined8 in_x6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(in_x6);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,0,in_w5 ^ 1,puVar1,in_x6);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d824; end: 108d4d8cb; -[SCMemoriesEncryptedDatabaseLogger failedToRequestKeyForEmptySnapIdWithSnapId:memoriesGrapheneContext:] */

void FUN_108d4d824(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = (ulong)(param_3 == 0);
  _objc_retain(param_4);
  func_0x00010c08fa60();
  uVar2 = (ulong)(param_3 == 0);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,0,2,puVar1,param_4,param_7,param_8,uVar3,uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d8cc; end: 108d4d953; -[SCMemoriesEncryptedDatabaseLogger missingEGOCipherForRequestingKeyForSnapId:memoriesGrapheneContext:] */

void FUN_108d4d8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef71b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,0,3,puVar1,param_4,param_7,param_8,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d954; end: 108d4d9db; -[SCMemoriesEncryptedDatabaseLogger missingQueueForRequestingKeyForSnapId:memoriesGrapheneContext:] */

void FUN_108d4d954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef71d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,0,4,puVar1,param_4,param_7,param_8,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4d9dc; end: 108d4da77; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFailedGetSnapsNetworkCallForSnapIds:statusCode:isSynchronous:memoriesGrapheneContext:] */

void FUN_108d4d9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef71f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,5,puVar1,param_6,param_7,param_8,param_3,param_4,param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4da78; end: 108d4daff; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFailedToFetchKeyIVForNoNetworkerForSnapIds:memoriesGrapheneContext:] */

void FUN_108d4da78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,6,puVar1,param_4,param_7,param_8,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4db00; end: 108d4db93; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundNoResultsInEGOCipherForSnapId:isLocalOnly:memoriesGrapheneContext:] */

void FUN_108d4db00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,7,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4db94; end: 108d4dc27; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundNoResultsInInMemoryCacheForSnapId:isLocalOnly:memoriesGrapheneContext:] */

void FUN_108d4db94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,8,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4dc28; end: 108d4dcbb; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundResultButNoKeyIVInEGOCipherForSnapId:isLocalOnly:memoriesGrapheneContext:] */

void FUN_108d4dc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,9,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4dcbc; end: 108d4dd4f; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundResultButNoKeyIVInInMemoryCacheForSnapId:isLocalOnly:memoriesGrapheneContext:] */

void FUN_108d4dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef7298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,10,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4dd50; end: 108d4ddeb; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVGotUnsuccessfulStatusCodeForSnapIds:statusCode:isSynchronous:memoriesGrapheneContext:] */

void FUN_108d4dd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef72b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,0xb,puVar1,param_6,param_7,param_8,param_3,param_4,param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4ddec; end: 108d4de7f; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVResponseFromGetSnapsHadNoEncryptionBlobForSnapId:isSynchronous:memoriesGrapheneContext:] */

void FUN_108d4ddec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef72d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,0xc,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4de80; end: 108d4df13; -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVSucceededInFetchingKeyIVButFailedToDeserializeResponseForSnapIds:isSynchronous:memoriesGrapheneContext:] */

void FUN_108d4de80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef72f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be077c0(param_1,param_2,1,0xd,puVar1,param_5,param_7,param_8,param_3,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4df14; end: 108d4df43; -[SCMemoriesEncryptedDatabaseLogger .cxx_destruct] */

void FUN_108d4df14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4df44; end: 108d4e0f3; -[SCGalleryProfileUserSessionHandler initWithUserId:username:userEmail:dataObjectContext:userInstallServices:userTrackedLogger:applicatonDocObject:] */

undefined1 *
FUN_108d4df44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_58 = PTR_PTR_1126fe790;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
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



/* Entry: 108d4e0f4; end: 108d4e1a7; -[SCGalleryProfileUserSessionHandler _setupGalleryProfileOnce] */

void FUN_108d4e0f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf851c0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d4e1a8; end: 108d4e3bb;  */

void FUN_108d4e1a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b2500;
    func_0x00010bfa70c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 8) == 0) {
      uStack_80 = 0;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_108d4e3bc;
      puStack_60 = &UNK_110842e18;
      lStack_58 = param_1;
      func_0x00010c0f8540(*(undefined8 *)(param_1 + 0x20));
      uVar2 = uStack_80;
      _objc_retain(uStack_80);
      puVar1 = PTR_PTR_1126b2500;
      func_0x00010bfa70c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar1;
      _objc_release(uVar3);
      func_0x00010c072f80(*(undefined8 *)(param_1 + 0x28));
      puVar1 = PTR_PTR_1126dbdc8;
      _objc_opt_new(PTR_PTR_1126dbdc8);
      func_0x00010c226820();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
      _objc_release(puVar1);
      _objc_release(uVar2);
    }
    _objc_initWeak(auStack_88,param_1);
    puVar1 = PTR_PTR_1126b2500;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c0e0700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108d4e3bc; end: 108d4e56f;  */

void FUN_108d4e3bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf5a980(PTR_PTR_1126b2508,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620();
  func_0x00010c205960(puVar1,param_2,500000000);
  func_0x00010c220e20(puVar1,param_2,1);
  puVar2 = PTR_PTR_1126dbdc0;
  func_0x00010bf5aa40(PTR_PTR_1126dbdc0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0fd940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e200(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4e570; end: 108d4e57b;  */

void FUN_108d4e570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBackupStatusInfoWithProfi_1125928d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d4e57c; end: 108d4e757; -[SCGalleryProfileUserSessionHandler _updateBackupStatusInfoWithProfile:] */

void FUN_108d4e57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfab280(puVar3,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bf52d40(PTR_PTR_1126af4c0,param_2,param_3,0,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  if ((long)(puVar3 + (long)puVar1) < 1) {
    FUN_108dcd194(0);
    puVar1 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    FUN_108dcd194(*(undefined8 *)(param_1 + 0x48));
    FUN_108dcd294(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000108dcd374(puVar1);
  func_0x000108dcd464(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
  _objc_release(uVar2);
  return;
}



/* Entry: 108d4e758; end: 108d4e79f; -[SCGalleryProfileUserSessionHandler dealloc] */

void FUN_108d4e758(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126fe790;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d4e7a0; end: 108d4e86f; -[SCGalleryProfileUserSessionHandler memoriesProfile] */

void FUN_108d4e7a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010beacbe0();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108d4e870;
  uStack_30 = 0x108d4e880;
  uStack_28 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d4e870; end: 108d4e887;  */

void FUN_108d4e870(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d4e888; end: 108d4e8bb;  */

void FUN_108d4e888(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d4e8bc; end: 108d4e8eb; -[SCGalleryProfileUserSessionHandler _updateWithProfile:] */

void FUN_108d4e8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d4e8ec; end: 108d4e97b; -[SCGalleryProfileUserSessionHandler .cxx_destruct] */

void FUN_108d4e8ec(long param_1)

{
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



/* Entry: 108d4e97c; end: 108d4e9c3; -[SCGalleryDataObjectContextHandler _shouldForceUsingPerUserCoreDataDB:dataObjectContext:] */

bool FUN_108d4e97c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc7e0;
  func_0x00010bfa5a80(PTR_PTR_1126bc7e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 108d4e9c4; end: 108d4ea47; -[SCGalleryDataObjectContextHandler .cxx_destruct] */

void FUN_108d4e9c4(long param_1)

{
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



/* Entry: 108d4ea48; end: 108d4eb4f; -[SCGalleryEGOCipherKeyProvider initWithUserId:] */

undefined8 * FUN_108d4ea48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe7a0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    puVar1[6] = 0x4014000000000000;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108d4eb50; end: 108d4eb5b;  */

void FUN_108d4eb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retrieveMasterKeysFromKeychainW_1125833b8,0);
  return;
}



/* Entry: 108d4eb5c; end: 108d4ebb3; -[SCGalleryEGOCipherKeyProvider _applicationProtectedDataDidBecomeAvailable:] */

void FUN_108d4eb5c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108d4ebb4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 108d4ebb4; end: 108d4ebbf;  */

void FUN_108d4ebb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retrieveMasterKeysFromKeychainW_1125833b8,1);
  return;
}



/* Entry: 108d4ebc0; end: 108d4ec2b; -[SCGalleryEGOCipherKeyProvider _observeApplication] */

void FUN_108d4ebc0(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  return;
}



/* Entry: 108d4ec2c; end: 108d4ec6b; -[SCGalleryEGOCipherKeyProvider _unobserveApplication] */

void FUN_108d4ec2c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4ec6c; end: 108d4ed13; -[SCGalleryEGOCipherKeyProvider _retrieveMasterKeysFromKeychainWhenAllowed:] */

void FUN_108d4ec6c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bed1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobserveApplication_112592058);
    return;
  }
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__searchKeysAndUpdate_112584b68);
    return;
  }
  _objc_initWeak(auStack_28);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108d4ed14;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108d4ed14; end: 108d4ee5b;  */

void FUN_108d4ed14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07b5e0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_108d4ee5c;
      puStack_48 = &UNK_1108434b0;
      ppuVar4 = &puStack_60;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(uVar3);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x108d4ee90;
      puStack_70 = &UNK_1108434b0;
      ppuVar4 = &puStack_88;
      _objc_copyWeak(auStack_68,auStack_38);
      func_0x00010c0f7fc0(uVar3);
    }
    _objc_destroyWeak(ppuVar4 + 4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108d4ee5c; end: 108d4eec3;  */

void FUN_108d4ee5c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be65b20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d4eec4; end: 108d4f05b; -[SCGalleryEGOCipherKeyProvider _searchKeysAndUpdate] */

void FUN_108d4eec4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar1 = PTR_PTR_1126aef90;
  func_0x00010bf63b20(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7538,
                      (long)&uStack_48 + 4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef90;
  func_0x00010bf63b20(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110ef7558,
                      &uStack_48);
  _objc_retainAutoreleasedReturnValue();
  if ((uStack_48._4_4_ == -0x62d4 || uStack_48._4_4_ == 0) &&
     ((int)uStack_48 == 0 || (int)uStack_48 == -0x62d4)) {
    if (uStack_48._4_4_ == 0) {
      puVar4 = puVar1;
      func_0x00010c08fa60();
      puVar3 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        puVar3 = PTR_PTR_1126dbde0;
        _objc_alloc();
        func_0x00010c008240();
      }
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar6);
    if (((int)uStack_48 == 0) &&
       (puVar3 = puVar2, func_0x00010c08fa60(), puVar3 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126dbde0;
      _objc_alloc();
      puVar3 = puVar2;
      func_0x00010c271dc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a620(puVar4,param_2,puVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar6);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08fa60();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if ((puVar3 != (undefined *)0x0 || puVar4 != (undefined *)0x0) ||
       (lVar5 = param_1, func_0x00010bdd0de0(), (int)lVar5 != 0)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      func_0x00010bdcc060(param_1);
      goto LAB_108d4f034;
    }
  }
  func_0x00010be9b380(param_1);
LAB_108d4f034:
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 108d4f05c; end: 108d4f0b7; -[SCGalleryEGOCipherKeyProvider _scheduleNextRetrievalAttempt] */

void FUN_108d4f05c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108d4f0b8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),param_2,
                      &puStack_38);
  return;
}



/* Entry: 108d4f0b8; end: 108d4f0df;  */

void FUN_108d4f0b8(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = *(double *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar2 = NEON_fminnm(dVar1 + dVar1,0x4082c00000000000);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010be96870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__retrieveMasterKeysFromKeychainW_1125833b8,0);
  return;
}



/* Entry: 108d4f0e0; end: 108d4f1f7; -[SCGalleryEGOCipherKeyProvider _attemptToCreateAndPersistNewKey] */

undefined * FUN_108d4f0e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _SecRandomCopyBytes(*(undefined8 *)PTR__kSecRandomDefault_110347808,0x20,auStack_68);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef90;
  func_0x00010c1894c0();
  if ((int)puVar2 == 0) {
    puVar5 = *(undefined **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    puVar3 = PTR_PTR_1126dbde0;
    _objc_alloc();
    puVar5 = puVar1;
    func_0x00010c271dc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a620();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = puVar1 + 0x38;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bdc1440();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__unobserveApplication_112592058);
  return puVar1;
}



/* Entry: 108d4f1f8; end: 108d4f237; -[SCGalleryEGOCipherKeyProvider _announceKeysAvailableAndUnobserve] */

void FUN_108d4f1f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc1440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unobserveApplication_112592058);
  return;
}



/* Entry: 108d4f238; end: 108d4f24f; -[SCGalleryEGOCipherKeyProvider delegate] */

void FUN_108d4f238(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d4f250; end: 108d4f25b; -[SCGalleryEGOCipherKeyProvider setDelegate:] */

void FUN_108d4f250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 108d4f25c; end: 108d4f2ab; -[SCGalleryEGOCipherKeyProvider .cxx_destruct] */

void FUN_108d4f25c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4f2ac; end: 108d4f357; -[SCGalleryEncryptedDatabasePendingEncryptionReadingRequest initWithSnapIds:resultHandler:] */

undefined1 *
FUN_108d4f2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe7a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d4f358; end: 108d4f35f; -[SCGalleryEncryptedDatabasePendingEncryptionReadingRequest snapIds] */

undefined8 FUN_108d4f358(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d4f360; end: 108d4f367; -[SCGalleryEncryptedDatabasePendingEncryptionReadingRequest resultHandler] */

undefined8 FUN_108d4f360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d4f368; end: 108d4f397; -[SCGalleryEncryptedDatabasePendingEncryptionReadingRequest .cxx_destruct] */

void FUN_108d4f368(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d4f398; end: 108d4f4d7; -[SCGalleryEncryptedDatabaseDebouncer initWithBatchSize:completionPerformer:timeOutInSeconds:] */

undefined1 *
FUN_108d4f398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fe7b0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108d4f4d8; end: 108d4f5bb; -[SCGalleryEncryptedDatabaseDebouncer addSnapIds:readThroughResultHandler:memoriesGrapheneContext:] */

void FUN_108d4f4d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d4f5bc;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d4f5bc; end: 108d4f76f;  */

void FUN_108d4f5bc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bdda520(*(undefined8 *)(param_1 + 0x20));
  func_0x00010befa160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR_PTR_1126dbde8;
  _objc_alloc(PTR_PTR_1126dbde8);
  func_0x00010c048020();
  func_0x00010befa120(uVar3);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  *(undefined8 *)(lVar5 + 0x40) = uVar4;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d4f770;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = 0;
  func_0x000107c27d90(0,&puStack_60);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar3;
  _objc_release(uVar4);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf529e0();
  lVar5 = *(long *)(param_1 + 0x20);
  if (uVar2 < *(ulong *)(lVar5 + 8)) {
    uVar3 = 0;
    _dispatch_time(0,(long)(*(double *)(lVar5 + 0x50) * 1000000000.0));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d84(uVar3,uVar4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
    _objc_release(uVar4);
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d4f770; end: 108d4f8df;  */

void FUN_108d4f770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (*(char *)(param_1 + 0x38) != '\x01')) goto LAB_108d4f8c0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_108d4f864:
    *(undefined1 *)(param_1 + 0x38) = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar4;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf51e00();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_108d4f8e0;
      puStack_68 = &UNK_11084c4a0;
      lStack_60 = param_1;
      lStack_58 = lVar1;
      uStack_50 = uVar3;
      uStack_48 = uVar5;
      _objc_retain(uVar5);
      _objc_retain(uVar3);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar6,param_2,&puStack_80);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(lStack_58);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(lVar1);
      goto LAB_108d4f864;
    }
  }
  _objc_release(lVar1);
LAB_108d4f8c0:
  _objc_release(param_1);
  return;
}



/* Entry: 108d4f8e0; end: 108d4f8f7;  */

void FUN_108d4f8e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000108d4f8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108d4f8f8; end: 108d4f987; -[SCGalleryEncryptedDatabaseDebouncer setCompletionBlockIfNeeded:] */

void FUN_108d4f8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d4f988;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108d4f988; end: 108d4f9d7;  */

void FUN_108d4f988(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(*(long *)(param_1 + 0x20) + 0x10) == 0) &&
     (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(long *)(*(long *)(param_1 + 0x20) + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108d4f9d8; end: 108d4f9f3; -[SCGalleryEncryptedDatabaseDebouncer _cancelBlockIfNeeded] */

void FUN_108d4f9d8(long param_1)

{
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x48) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbde68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_block_cancel_11034c028)();
    return;
  }
  return;
}



/* Entry: 108d4f9f4; end: 108d4facf; -[SCGalleryEncryptedDatabaseDebouncer .cxx_destruct] */

void FUN_108d4f9f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108d4fad0; end: 108d4fc17;  */

undefined1 FUN_108d4fad0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d4fc18;
  puStack_50 = &UNK_110ac3348;
  _objc_retain(param_2);
  uVar2 = param_1;
  uStack_48 = param_2;
  func_0x00010b5edefc(param_1,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  func_0x00010c0c0800();
  uVar1 = *(undefined1 *)(puStack_80 + 3);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108d4fc18; end: 108d4fca7;  */

undefined * FUN_108d4fc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 108d4fca8; end: 108d4fd73;  */

void FUN_108d4fca8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf51c80(param_5);
  func_0x00010c0df720(param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf51c80(param_5);
  _objc_release(param_5);
  func_0x00010c0df720(param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108dfb81c(uVar3,param_4,puVar1,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d4fd74; end: 108d4fd97;  */

void FUN_108d4fd74(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108d4fd98; end: 108d4ff73;  */

void FUN_108d4fd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108d4ff74;
  puStack_88 = &UNK_110ac3378;
  _objc_retain(param_2);
  uStack_80 = param_2;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uVar1 = param_1;
  uStack_68 = param_5;
  func_0x000107c30748(param_1,0,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  uStack_b8 = 0x108d4ff88;
  uStack_b0 = 0x108d4ff98;
  uStack_a8 = 0;
  func_0x00010c0c0800();
  uVar2 = puStack_c8[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d4ff74; end: 108d4ff9f;  */

void FUN_108d4ff74(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_54;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(uVar4);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar5 = param_2 + 0x10;
      func_0x000107c30770(lVar5,*(undefined8 *)(param_2 + 8),&UNK_10dfa339b,0xc1);
      uStack_54 = 1;
      func_0x00010b5eeb94();
      func_0x00010b5eeb94(lVar5,&uStack_54,uVar3);
      func_0x00010b5eeb94(lVar5,&uStack_54,uVar2);
      func_0x00010b5eeb94(lVar5,&uStack_54,uVar4);
      func_0x000107c30760(lVar5,FUN_108dfb524);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfb430;
    }
  }
  lVar5 = 0;
LAB_108dfb430:
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108d4ffa0; end: 108d4ffd7;  */

void FUN_108d4ffa0(long param_1,undefined8 param_2)

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



/* Entry: 108d4ffd8; end: 108d4ffdb;  */

void FUN_108d4ffd8(void)

{
  return;
}



/* Entry: 108d4ffdc; end: 108d5012f;  */

void FUN_108d4ffdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d50130;
  puStack_50 = &UNK_110ac3348;
  _objc_retain(param_2);
  uVar1 = param_1;
  uStack_48 = param_2;
  func_0x000107c30748(param_1,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  uStack_80 = 0x108d4ff88;
  uStack_78 = 0x108d4ff98;
  uStack_70 = 0;
  func_0x00010c0c0800();
  uVar2 = puStack_90[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d50130; end: 108d5013f;  */

void FUN_108d50130(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dfa345d,0x4c);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_108dfb76c);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfb6b0;
    }
  }
  lVar1 = 0;
LAB_108dfb6b0:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


