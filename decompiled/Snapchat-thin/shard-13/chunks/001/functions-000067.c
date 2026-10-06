/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fe5ac8; end: 109fe5c03;  */

void FUN_109fe5ac8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_109fe9fc0(param_1,(*(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80) >> 4) *
                          0x6db6db6db6db6db7);
    lVar1 = *param_1;
    lVar3 = param_1[1];
    if (lVar3 != lVar1) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(param_2 + 0x80) + uVar4 * 0x70;
        if ((*(char *)(lVar2 + 0x68) == '\x01') && (*(long *)(lVar2 + 0x58) != 0)) {
          lVar3 = *(long *)(lVar2 + 0x50);
          lVar2 = *(long *)(lVar2 + 0x58) * 0x14;
          do {
            if (*(uint *)(lVar3 + 4) < 8 && (1 << (ulong)(*(uint *)(lVar3 + 4) & 0x1f) & 0xa8U) != 0
               ) {
              func_0x000107270fb0(lVar1 + uVar4 * 0x28,lVar3,lVar3);
            }
            lVar3 = lVar3 + 0x14;
            lVar2 = lVar2 + -0x14;
          } while (lVar2 != 0);
          lVar1 = *param_1;
          lVar3 = param_1[1];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)((lVar3 - lVar1 >> 3) * -0x3333333333333333));
    }
  }
  return;
}



/* Entry: 109fe5c04; end: 109fe6fef;  */

/* WARNING: Removing unreachable block (ram,0x000109fe64a0) */
/* WARNING: Removing unreachable block (ram,0x000109fe6338) */
/* WARNING: Removing unreachable block (ram,0x000109fe6460) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109fe5c04(long param_1,uint *******param_2,long *param_3)

{
  uint *******pppppppuVar1;
  uint ******ppppppuVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  long lVar10;
  uint *******pppppppuVar11;
  uint *******pppppppuVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  uint ******ppppppuVar18;
  uint ******ppppppuVar19;
  uint ******ppppppuVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 *extraout_x8;
  ulong uVar23;
  uint *******unaff_x20;
  uint *******unaff_x21;
  uint *******pppppppuVar24;
  uint *******unaff_x22;
  long lVar25;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f8;
  uint *******pppppppuStack_4f0;
  uint *******pppppppuStack_4e8;
  uint *******pppppppuStack_4e0;
  long lStack_4d8;
  undefined1 *puStack_4d0;
  code *pcStack_4c8;
  uint *******pppppppuStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  uint *******pppppppuStack_498;
  long lStack_490;
  undefined8 *******pppppppuStack_488;
  undefined8 *******pppppppuStack_480;
  undefined8 *******pppppppuStack_478;
  undefined8 *******pppppppuStack_470;
  uint *******pppppppuStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *******pppppppuStack_448;
  uint *******pppppppuStack_440;
  long *plStack_438;
  long lStack_430;
  uint *******pppppppuStack_428;
  uint uStack_41c;
  uint *******pppppppuStack_418;
  uint *******pppppppuStack_410;
  uint *******pppppppuStack_408;
  uint auStack_400 [2];
  uint *******pppppppuStack_3f8;
  uint *******pppppppuStack_3f0;
  uint *******pppppppuStack_3e0;
  uint *******pppppppuStack_3d8;
  uint *******pppppppuStack_3c8;
  uint *******pppppppuStack_3c0;
  uint *******pppppppuStack_3b0;
  uint *******pppppppuStack_3a8;
  uint *******pppppppuStack_398;
  uint *******pppppppuStack_390;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  uint ******ppppppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  uint uStack_31c;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *******pppppppuStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  uint *******pppppppuStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long alStack_258 [2];
  char cStack_241;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 *******pppppppuStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 *******pppppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint ******ppppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_4b8 = param_2;
  plStack_438 = param_3;
  _objc_retain();
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  _objc_retain(param_1);
  lStack_4b0 = param_1;
  func_0x00010bf52a60();
  lStack_4a0 = param_1;
  if (param_1 != 0) {
    pppppppuStack_470 = &pppppppuStack_3f8;
    pppppppuStack_488 = &pppppppuStack_3e0;
    lStack_4a8 = *plStack_370;
    pppppppuStack_478 = &pppppppuStack_3c8;
    pppppppuStack_480 = &pppppppuStack_3b0;
    pppppppuStack_448 = &pppppppuStack_398;
    pppppppuStack_468 = &ppppppuStack_e0;
    uStack_458 = 0x100000000;
    uStack_460 = 0xffffffff;
    lStack_4a0 = param_1;
    do {
      lStack_490 = 0;
      do {
        if (*plStack_370 != lStack_4a8) {
          _objc_enumerationMutation(lStack_4b0);
        }
        pppppppuVar8 = *(uint ********)(lStack_378 + lStack_490 * 8);
        pppppppuStack_498 = pppppppuVar8;
        func_0x00010c27dd80();
        if (pppppppuVar8 == (uint *******)0x0) {
          unaff_x20 = pppppppuStack_498;
          func_0x00010bf21d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = unaff_x20;
          func_0x00010bf8d1e0();
          _objc_release(unaff_x20);
          pppppppuVar8 = pppppppuStack_498;
          if ((int)unaff_x21 != 0) {
            _objc_retain(pppppppuStack_498);
            auStack_400[0] = 0;
            pppppppuStack_470[1] = (undefined8 ******)0x0;
            *pppppppuStack_470 = (undefined8 ******)0x0;
            pppppppuStack_470[3] = (undefined8 ******)0x0;
            pppppppuStack_470[2] = (undefined8 ******)0x0;
            pppppppuStack_470[5] = (undefined8 ******)0x0;
            pppppppuStack_470[4] = (undefined8 ******)0x0;
            pppppppuStack_470[7] = (undefined8 ******)0x0;
            pppppppuStack_470[6] = (undefined8 ******)0x0;
            pppppppuStack_470[9] = (undefined8 ******)0x0;
            pppppppuStack_470[8] = (undefined8 ******)0x0;
            pppppppuStack_470[0xb] = (undefined8 ******)0x0;
            pppppppuStack_470[10] = (undefined8 ******)0x0;
            pppppppuStack_470[0xd] = (undefined8 ******)0x0;
            pppppppuStack_470[0xc] = (undefined8 ******)0x0;
            pppppppuStack_470[0xe] = (undefined8 ******)0x0;
            pppppppuVar9 = pppppppuVar8;
            func_0x00010bfec9e0();
            auStack_400[0] = (uint)pppppppuVar9;
            lStack_2f8 = 0;
            uStack_300 = 0;
            uStack_2e8 = 0;
            plStack_2f0 = (long *)0x0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            func_0x00010bf21e20();
            _objc_retainAutoreleasedReturnValue();
            pppppppuVar9 = pppppppuVar8;
            func_0x00010c0c7900();
            _objc_retainAutoreleasedReturnValue();
            pppppppuStack_440 = pppppppuVar9;
            _objc_release(pppppppuVar8);
            pppppppuVar9 = pppppppuStack_440;
            func_0x00010bf52a60();
            if (pppppppuVar9 != (uint *******)0x0) {
              lStack_430 = *plStack_2f0;
              do {
                unaff_x22 = (uint *******)0x0;
                pppppppuStack_428 = pppppppuVar9;
                do {
                  if (*plStack_2f0 != lStack_430) {
                    _objc_enumerationMutation(pppppppuStack_440);
                  }
                  pppppppuVar8 = *(uint ********)(lStack_2f8 + (long)unaff_x22 * 8);
                  unaff_x21 = pppppppuVar8;
                  func_0x00010c0d4f60();
                  _objc_retainAutoreleasedReturnValue();
                  FUN_109fe5184(auStack_318);
                  _objc_release(unaff_x21);
                  pppppppuVar9 = pppppppuVar8;
                  func_0x00010bf09e20();
                  uStack_31c = (uint)pppppppuVar9;
                  uVar22 = (ulong)auStack_400[0];
                  uVar23 = (plStack_438[1] - *plStack_438 >> 3) * -0x3333333333333333;
                  if (uVar23 < uVar22 || uVar23 - uVar22 == 0) {
                    uStack_41c = 0;
                  }
                  else {
                    lVar10 = *plStack_438 + uVar22 * 0x28;
                    param_2 = (uint *******)&uStack_31c;
                    func_0x0001072720a4(lVar10,param_2);
                    uStack_41c = (uint)(lVar10 != 0);
                  }
                  pppppppuVar9 = pppppppuVar8;
                  func_0x00010bf64880();
                  pppppppuVar24 = pppppppuVar8;
                  func_0x00010c102e80();
                  _objc_retainAutoreleasedReturnValue();
                  pppppppuVar11 = pppppppuVar8;
                  pppppppuStack_408 = pppppppuVar24;
                  func_0x00010c26cf00();
                  _objc_retainAutoreleasedReturnValue();
                  pppppppuVar24 = pppppppuVar8;
                  pppppppuStack_410 = pppppppuVar11;
                  func_0x00010bf64880();
                  if (pppppppuVar24 == (uint *******)0x2) {
                    pppppppuVar24 = pppppppuVar8;
                    func_0x00010bf0a080();
                    _objc_retainAutoreleasedReturnValue();
                    pppppppuVar9 = pppppppuVar24;
                    func_0x00010bf8d280();
                    pppppppuVar11 = pppppppuVar24;
                    func_0x00010bf0a040();
                    pppppppuVar12 = pppppppuVar24;
                    pppppppuStack_418 = pppppppuVar11;
                    func_0x00010bf8d220();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(pppppppuStack_408);
                    pppppppuVar11 = pppppppuVar24;
                    pppppppuStack_408 = pppppppuVar12;
                    func_0x00010bf8d260();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(pppppppuStack_410);
                    _objc_release(pppppppuVar24);
                    pppppppuStack_410 = pppppppuVar11;
                    pppppppuStack_408 = pppppppuVar12;
                  }
                  else {
                    pppppppuStack_418 = (uint *******)0x1;
                  }
                  pppppppuVar24 = pppppppuStack_408;
                  if (pppppppuVar9 == (uint *******)0x3a) {
                    pppppppuVar9 = pppppppuStack_410;
                    func_0x00010beecc00();
                    if (pppppppuVar9 == (uint *******)0x0 && (uStack_41c & 1) == 0) {
                      uStack_f8 = 0;
                      uStack_100 = 0;
                      pppppppuStack_108 = (undefined8 *******)0x0;
                      uStack_f0 = 0xffffffff;
                      uStack_e8._0_4_ = 1;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (&pppppppuStack_108,auStack_318);
                      uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_31c);
                      pppppppuVar9 = pppppppuStack_410;
                      func_0x00010c26cf40();
                      uVar7 = SUB84(pppppppuVar9,0);
                      FUN_109fe5300();
                      uStack_f0 = CONCAT44(uVar7,(undefined4)uStack_f0);
                      uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)pppppppuStack_418);
                      param_2 = (uint *******)&pppppppuStack_108;
                      func_0x000109240d78(pppppppuStack_478,param_2);
                    }
                    else {
                      pppppppuStack_108 = (undefined8 *******)0x0;
                      uStack_100 = 0;
                      uStack_f8 = 0;
                      uStack_e8 = uStack_458;
                      uStack_f0 = uStack_460;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (&pppppppuStack_108,auStack_318);
                      uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_31c);
                      pppppppuVar9 = pppppppuStack_410;
                      func_0x00010c26cf40();
                      uVar7 = SUB84(pppppppuVar9,0);
                      FUN_109fe5300();
                      uStack_f0 = CONCAT44(uVar7,(undefined4)uStack_f0);
                      pppppppuVar9 = pppppppuStack_410;
                      func_0x00010beecc00();
                      if (pppppppuVar9 < (uint *******)0x3) {
                        uVar7 = *(undefined4 *)(&UNK_10e4825a8 + (long)pppppppuVar9 * 4);
                      }
                      else {
                        uVar7 = 0;
                      }
                      uStack_e8 = CONCAT44((int)pppppppuStack_418,uVar7);
                      param_2 = (uint *******)&pppppppuStack_108;
                      func_0x000109240e28(pppppppuStack_480,param_2);
                    }
                  }
                  else if (pppppppuVar9 == (uint *******)0x3b) {
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    pppppppuStack_108 = (undefined8 *******)0x0;
                    uStack_f0 = 0xffffffff;
                    uStack_e8._0_4_ = 1;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&pppppppuStack_108,auStack_318);
                    uStack_f0 = (ulong)uStack_31c;
                    uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)pppppppuStack_418);
                    param_2 = (uint *******)&pppppppuStack_108;
                    func_0x000109241028(pppppppuStack_448,param_2);
                  }
                  else if (pppppppuVar9 == (uint *******)0x3c) {
                    _objc_retain(pppppppuStack_408);
                    uStack_338 = 0;
                    uStack_330 = 0;
                    ppppppuStack_340 = (uint ******)0x0;
                    uStack_328 = 0;
                    pppppppuVar8 = pppppppuVar24;
                    func_0x00010bf643a0();
                    uStack_328 = SUB84(pppppppuVar8,0);
                    func_0x00010bf8d280();
                    if (pppppppuVar24 == (uint *******)0x1) {
                      uStack_278 = 0;
                      uStack_280 = 0;
                      uStack_268 = 0;
                      uStack_270 = 0;
                      lStack_298 = 0;
                      pppppppuStack_2a0 = (uint *******)0x0;
                      uStack_288 = 0;
                      plStack_290 = (long *)0x0;
                      pppppppuVar8 = pppppppuStack_408;
                      func_0x00010bf8d240();
                      _objc_retainAutoreleasedReturnValue();
                      pppppppuVar9 = pppppppuVar8;
                      func_0x00010c0c7900();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(pppppppuVar8);
                      pppppppuVar8 = pppppppuVar9;
                      func_0x00010bf52a60();
                      if (pppppppuVar8 != (uint *******)0x0) {
                        lVar10 = *plStack_290;
                        do {
                          pppppppuVar24 = (uint *******)0x0;
                          do {
                            if (*plStack_290 != lVar10) {
                              _objc_enumerationMutation(pppppppuVar9);
                            }
                            lVar25 = *(long *)(lStack_298 + (long)pppppppuVar24 * 8);
                            lVar13 = lVar25;
                            func_0x00010bf64880();
                            if (lVar13 == 1) {
                              func_0x000107c31940(&pppppppuStack_2b8,"");
                              _objc_retain(lVar25);
                              lVar13 = lVar25;
                              func_0x00010c25de60(lVar25);
                              _objc_retainAutoreleasedReturnValue();
                              lVar14 = lVar25;
                              func_0x00010c0d4f60(lVar25);
                              _objc_retainAutoreleasedReturnValue();
                              FUN_109fe5184(alStack_258);
                              uVar22 = uStack_2b0;
                              pppppppuVar17 = pppppppuStack_2b8;
                              if (-1 < (char)bStack_2a1) {
                                uVar22 = (ulong)bStack_2a1;
                                pppppppuVar17 = &pppppppuStack_2b8;
                              }
                              plVar15 = alStack_258;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                        (plVar15,0,pppppppuVar17,uVar22);
                              lStack_238 = plVar15[1];
                              lStack_240 = *plVar15;
                              lStack_230 = plVar15[2];
                              plVar15[1] = 0;
                              plVar15[2] = 0;
                              *plVar15 = 0;
                              plVar15 = &lStack_240;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (plVar15,&DAT_10f62a9de,1);
                              lStack_218 = plVar15[1];
                              pppppppuStack_220 = (undefined8 *******)*plVar15;
                              lStack_210 = plVar15[2];
                              plVar15[1] = 0;
                              plVar15[2] = 0;
                              *plVar15 = 0;
                              lVar16 = lVar25;
                              func_0x00010c0e1c40(lVar25);
                              FUN_109fea794(&pppppppuStack_220,lVar16,lVar13,&ppppppuStack_340);
                              if (lStack_210 < 0) {
                                __ZdlPv(pppppppuStack_220);
                              }
                              if (lStack_230 < 0) {
                                __ZdlPv(lStack_240);
                              }
                              if (cStack_241 < '\0') {
                                __ZdlPv(alStack_258[0]);
                              }
                              _objc_release(lVar14);
                              _objc_release(lVar13);
                              _objc_release(lVar25);
                              pppppppuVar17 = pppppppuStack_2b8;
                              if ((char)bStack_2a1 < '\0') {
LAB_109fe6194:
                                __ZdlPv(pppppppuVar17);
                              }
                            }
                            else {
                              lVar13 = lVar25;
                              func_0x00010bf64880();
                              if (lVar13 == 2) {
                                func_0x000107c31940(&pppppppuStack_220,"");
                                FUN_109fea158(&pppppppuStack_220,0,lVar25,&ppppppuStack_340);
                              }
                              else {
                                func_0x000107c31940(&pppppppuStack_220,"");
                                FUN_109fea2c8(&pppppppuStack_220,0,lVar25,&ppppppuStack_340);
                              }
                              pppppppuVar17 = pppppppuStack_220;
                              if (lStack_210 < 0) goto LAB_109fe6194;
                            }
                            pppppppuVar24 = (uint *******)((long)pppppppuVar24 + 1);
                          } while (pppppppuVar8 != pppppppuVar24);
                          pppppppuVar8 = pppppppuVar9;
                          func_0x00010bf52a60();
                        } while (pppppppuVar8 != (uint *******)0x0);
                      }
                      _objc_release(pppppppuVar9);
                    }
                    else {
                      pppppppuVar8 = pppppppuStack_408;
                      func_0x00010bf8d280();
                      if (pppppppuVar8 == (uint *******)0x2) {
                        func_0x000107c31940(&pppppppuStack_108,"");
                        pppppppuVar8 = pppppppuStack_408;
                        func_0x00010bf8d1a0(pppppppuStack_408);
                        _objc_retainAutoreleasedReturnValue();
                        FUN_109fea414(&pppppppuStack_108,0,pppppppuVar8,&ppppppuStack_340);
                        _objc_release(pppppppuVar8);
                      }
                    }
                    _objc_release(pppppppuStack_408);
                    pppppppuVar8 = pppppppuStack_408;
                    func_0x00010beecc00();
                    unaff_x21 = pppppppuStack_468;
                    if (pppppppuVar8 == (uint *******)0x0 && (uStack_41c & 1) == 0) {
                      uStack_f8 = 0;
                      uStack_100 = 0;
                      pppppppuStack_108 = (undefined8 *******)0x0;
                      uStack_f0 = 0xffffffff;
                      uStack_e8._0_4_ = 1;
                      pppppppuStack_468[1] = (uint ******)0x0;
                      pppppppuStack_468[2] = (uint ******)0x0;
                      *pppppppuStack_468 = (uint ******)0x0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (&pppppppuStack_108,auStack_318);
                      uStack_f0 = CONCAT44(uStack_328,uStack_31c);
                      uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)pppppppuStack_418);
                      func_0x000109241da0(unaff_x21);
                      uStack_d8 = uStack_338;
                      ppppppuStack_e0 = ppppppuStack_340;
                      uStack_d0 = uStack_330;
                      uStack_338 = 0;
                      uStack_330 = 0;
                      ppppppuStack_340 = (uint ******)0x0;
                      param_2 = (uint *******)&pppppppuStack_108;
                      func_0x000109240478(pppppppuStack_470,param_2);
                    }
                    else {
                      pppppppuStack_108 = (undefined8 *******)0x0;
                      uStack_100 = 0;
                      uStack_f8 = 0;
                      uStack_e8 = uStack_458;
                      uStack_f0 = uStack_460;
                      pppppppuStack_468[1] = (uint ******)0x0;
                      pppppppuStack_468[2] = (uint ******)0x0;
                      *pppppppuStack_468 = (uint ******)0x0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (&pppppppuStack_108,auStack_318);
                      uStack_f0 = CONCAT44(uStack_328,uStack_31c);
                      uStack_e8 = CONCAT44((int)pppppppuStack_418,(undefined4)uStack_e8);
                      func_0x000109241da0(unaff_x21);
                      uStack_d8 = uStack_338;
                      ppppppuStack_e0 = ppppppuStack_340;
                      uStack_d0 = uStack_330;
                      uStack_338 = 0;
                      uStack_330 = 0;
                      ppppppuStack_340 = (uint ******)0x0;
                      param_2 = (uint *******)&pppppppuStack_108;
                      func_0x000109240b88(pppppppuStack_488,param_2);
                    }
                    pppppppuStack_2a0 = unaff_x21;
                    pppppppuVar8 = (uint *******)&pppppppuStack_108;
                    func_0x00010922df48(&pppppppuStack_2a0);
                    pppppppuStack_108 = (undefined8 *******)&ppppppuStack_340;
                    func_0x00010922df48(&pppppppuStack_108);
                  }
                  _objc_release(pppppppuStack_410);
                  _objc_release(pppppppuStack_408);
                  if (cStack_301 < '\0') {
                    __ZdlPv(auStack_318[0]);
                  }
                  unaff_x22 = (uint *******)((long)unaff_x22 + 1);
                } while (unaff_x22 != pppppppuStack_428);
                pppppppuVar9 = pppppppuStack_440;
                func_0x00010bf52a60();
              } while (pppppppuVar9 != (uint *******)0x0);
            }
            _objc_release(pppppppuStack_440);
            _objc_release(pppppppuStack_498);
            unaff_x20 = pppppppuStack_3f8;
            uVar5 = auStack_400[0];
            pppppppuVar9 = (uint *******)*pppppppuStack_4b8;
            pppppppuVar24 = (uint *******)pppppppuStack_4b8[1];
            if (pppppppuVar9 == pppppppuVar24) {
LAB_109fe6530:
              if (pppppppuVar9 == pppppppuVar24) goto LAB_109fe65bc;
              ppppppuVar20 = pppppppuVar9[1];
              ppppppuVar2 = pppppppuVar9[2];
              pppppppuStack_418 = pppppppuStack_3f0;
              pppppppuVar24 = pppppppuStack_3f8;
              pppppppuVar8 = pppppppuStack_3e0;
              if ((long)ppppppuVar2 - (long)ppppppuVar20 ==
                  (long)pppppppuStack_3f0 - (long)pppppppuStack_3f8) {
                for (; pppppppuStack_3e0 = pppppppuVar8, ppppppuVar20 != ppppppuVar2;
                    ppppppuVar20 = ppppppuVar20 + 8) {
                  ppppppuVar18 = ppppppuVar20;
                  param_2 = pppppppuVar24;
                  FUN_109feab88(ppppppuVar20,pppppppuVar24);
                  unaff_x22 = pppppppuVar24;
                  if ((int)ppppppuVar18 == 0) goto LAB_109fe66f4;
                  pppppppuVar24 = pppppppuVar24 + 8;
                  pppppppuVar8 = pppppppuStack_3e0;
                }
                ppppppuVar20 = pppppppuVar9[4];
                ppppppuVar2 = pppppppuVar9[5];
                unaff_x22 = pppppppuVar8;
                if ((long)ppppppuVar2 - (long)ppppppuVar20 !=
                    (long)pppppppuStack_3d8 - (long)pppppppuVar8) goto LAB_109fe66f4;
                for (; ppppppuVar20 != ppppppuVar2; ppppppuVar20 = ppppppuVar20 + 8) {
                  ppppppuVar18 = ppppppuVar20;
                  param_2 = pppppppuVar8;
                  FUN_109fead48(ppppppuVar20,pppppppuVar8);
                  unaff_x22 = pppppppuVar8;
                  if ((int)ppppppuVar18 == 0) goto LAB_109fe66f4;
                  pppppppuVar8 = pppppppuVar8 + 8;
                }
                ppppppuVar20 = pppppppuVar9[7];
                ppppppuVar2 = pppppppuVar9[8];
                unaff_x22 = pppppppuStack_3c8;
                if ((long)ppppppuVar2 - (long)ppppppuVar20 !=
                    (long)pppppppuStack_3c0 - (long)pppppppuStack_3c8) goto LAB_109fe66f4;
                for (; ppppppuVar20 != ppppppuVar2; ppppppuVar20 = ppppppuVar20 + 5) {
                  ppppppuVar18 = ppppppuVar20;
                  param_2 = unaff_x22;
                  FUN_109feae54(ppppppuVar20,unaff_x22);
                  if ((int)ppppppuVar18 == 0) goto LAB_109fe66f4;
                  unaff_x22 = unaff_x22 + 5;
                }
                ppppppuVar20 = pppppppuVar9[10];
                ppppppuVar2 = pppppppuVar9[0xb];
                unaff_x22 = pppppppuStack_3b0;
                if ((long)ppppppuVar2 - (long)ppppppuVar20 !=
                    (long)pppppppuStack_3a8 - (long)pppppppuStack_3b0) goto LAB_109fe66f4;
                for (; ppppppuVar20 != ppppppuVar2; ppppppuVar20 = ppppppuVar20 + 5) {
                  ppppppuVar18 = ppppppuVar20;
                  param_2 = unaff_x22;
                  func_0x000109feaf04(ppppppuVar20,unaff_x22);
                  if ((int)ppppppuVar18 == 0) goto LAB_109fe66f4;
                  unaff_x22 = unaff_x22 + 5;
                }
                unaff_x21 = (uint *******)pppppppuVar9[0xd];
                pppppppuVar8 = (uint *******)pppppppuVar9[0xe];
                unaff_x22 = pppppppuStack_398;
                if ((long)pppppppuVar8 - (long)unaff_x21 !=
                    (long)pppppppuStack_390 - (long)pppppppuStack_398) goto LAB_109fe66f4;
                for (; unaff_x21 != pppppppuVar8; unaff_x21 = unaff_x21 + 5) {
                  pppppppuVar24 = unaff_x21;
                  param_2 = unaff_x22;
                  func_0x000109feafb4(unaff_x21,unaff_x22);
                  if ((int)pppppppuVar24 == 0) goto LAB_109fe66f4;
                  unaff_x22 = unaff_x22 + 5;
                }
                if (*(uint *)pppppppuVar9 != uVar5) goto LAB_109fe66f4;
              }
              else {
LAB_109fe66f4:
                pppppppuVar8 = pppppppuStack_3c0;
                pppppppuStack_410 = pppppppuVar9;
                if (pppppppuStack_3c8 != pppppppuStack_3c0) {
                  pppppppuVar24 = (uint *******)pppppppuVar9[7];
                  pppppppuVar11 = (uint *******)pppppppuVar9[8];
                  pppppppuVar9 = pppppppuStack_3c8;
                  do {
                    unaff_x22 = pppppppuVar24;
                    if (pppppppuVar24 != pppppppuVar11) {
                      bVar3 = *(byte *)((long)pppppppuVar9 + 0x17);
                      ppppppuVar20 = pppppppuVar9[1];
                      if (-1 < (char)bVar3) {
                        ppppppuVar20 = (uint ******)(ulong)bVar3;
                      }
                      do {
                        bVar4 = *(byte *)((long)unaff_x22 + 0x17);
                        ppppppuVar2 = unaff_x22[1];
                        if (-1 < (char)bVar4) {
                          ppppppuVar2 = (uint ******)(ulong)bVar4;
                        }
                        if (ppppppuVar2 == ppppppuVar20) {
                          pppppppuVar12 = (uint *******)*unaff_x22;
                          if (-1 < (char)bVar4) {
                            pppppppuVar12 = unaff_x22;
                          }
                          pppppppuVar1 = (uint *******)*pppppppuVar9;
                          if (-1 < (char)bVar3) {
                            pppppppuVar1 = pppppppuVar9;
                          }
                          _memcmp(pppppppuVar12,pppppppuVar1,ppppppuVar20);
                          if ((int)pppppppuVar12 == 0) break;
                        }
                        unaff_x22 = unaff_x22 + 5;
                        if (unaff_x22 == pppppppuVar11) goto LAB_109fe6ce4;
                      } while( true );
                    }
                    if ((unaff_x22 == pppppppuVar11) ||
                       (pppppppuVar12 = unaff_x22, param_2 = pppppppuVar9,
                       FUN_109feae54(unaff_x22,pppppppuVar9), ((ulong)pppppppuVar12 & 1) == 0))
                    goto LAB_109fe6ce4;
                    pppppppuVar9 = pppppppuVar9 + 5;
                  } while (pppppppuVar9 != pppppppuVar8);
                }
                pppppppuVar8 = pppppppuStack_3a8;
                if (pppppppuStack_3b0 != pppppppuStack_3a8) {
                  pppppppuVar24 = (uint *******)pppppppuStack_410[10];
                  pppppppuVar11 = (uint *******)pppppppuStack_410[0xb];
                  pppppppuVar9 = pppppppuStack_3b0;
                  do {
                    unaff_x22 = pppppppuVar24;
                    if (pppppppuVar24 != pppppppuVar11) {
                      bVar3 = *(byte *)((long)pppppppuVar9 + 0x17);
                      ppppppuVar20 = pppppppuVar9[1];
                      if (-1 < (char)bVar3) {
                        ppppppuVar20 = (uint ******)(ulong)bVar3;
                      }
                      do {
                        bVar4 = *(byte *)((long)unaff_x22 + 0x17);
                        ppppppuVar2 = unaff_x22[1];
                        if (-1 < (char)bVar4) {
                          ppppppuVar2 = (uint ******)(ulong)bVar4;
                        }
                        if (ppppppuVar2 == ppppppuVar20) {
                          pppppppuVar12 = (uint *******)*unaff_x22;
                          if (-1 < (char)bVar4) {
                            pppppppuVar12 = unaff_x22;
                          }
                          pppppppuVar1 = (uint *******)*pppppppuVar9;
                          if (-1 < (char)bVar3) {
                            pppppppuVar1 = pppppppuVar9;
                          }
                          _memcmp(pppppppuVar12,pppppppuVar1,ppppppuVar20);
                          if ((int)pppppppuVar12 == 0) break;
                        }
                        unaff_x22 = unaff_x22 + 5;
                        if (unaff_x22 == pppppppuVar11) goto LAB_109fe6ce4;
                      } while( true );
                    }
                    if ((unaff_x22 == pppppppuVar11) ||
                       (pppppppuVar12 = unaff_x22, param_2 = pppppppuVar9,
                       func_0x000109feaf04(unaff_x22,pppppppuVar9), ((ulong)pppppppuVar12 & 1) == 0)
                       ) goto LAB_109fe6ce4;
                    pppppppuVar9 = pppppppuVar9 + 5;
                  } while (pppppppuVar9 != pppppppuVar8);
                }
                pppppppuVar8 = pppppppuStack_390;
                unaff_x21 = pppppppuStack_398;
                if (pppppppuStack_398 != pppppppuStack_390) {
                  pppppppuVar9 = (uint *******)pppppppuStack_410[0xd];
                  pppppppuVar24 = (uint *******)pppppppuStack_410[0xe];
                  do {
                    unaff_x22 = pppppppuVar9;
                    if (pppppppuVar9 != pppppppuVar24) {
                      bVar3 = *(byte *)((long)unaff_x21 + 0x17);
                      ppppppuVar20 = unaff_x21[1];
                      if (-1 < (char)bVar3) {
                        ppppppuVar20 = (uint ******)(ulong)bVar3;
                      }
                      do {
                        bVar4 = *(byte *)((long)unaff_x22 + 0x17);
                        ppppppuVar2 = unaff_x22[1];
                        if (-1 < (char)bVar4) {
                          ppppppuVar2 = (uint ******)(ulong)bVar4;
                        }
                        if (ppppppuVar2 == ppppppuVar20) {
                          pppppppuVar11 = (uint *******)*unaff_x22;
                          if (-1 < (char)bVar4) {
                            pppppppuVar11 = unaff_x22;
                          }
                          pppppppuVar12 = (uint *******)*unaff_x21;
                          if (-1 < (char)bVar3) {
                            pppppppuVar12 = unaff_x21;
                          }
                          _memcmp(pppppppuVar11,pppppppuVar12,ppppppuVar20);
                          if ((int)pppppppuVar11 == 0) break;
                        }
                        unaff_x22 = unaff_x22 + 5;
                        if (unaff_x22 == pppppppuVar24) goto LAB_109fe6cfc;
                      } while( true );
                    }
                    if ((unaff_x22 == pppppppuVar24) ||
                       (pppppppuVar11 = unaff_x22, param_2 = unaff_x21,
                       func_0x000109feafb4(unaff_x22,unaff_x21), ((ulong)pppppppuVar11 & 1) == 0)) {
LAB_109fe6cfc:
                      puVar21 = &UNK_10f630502;
                      goto LAB_109fe6d04;
                    }
                    unaff_x21 = unaff_x21 + 5;
                  } while (unaff_x21 != pppppppuVar8);
                }
                for (; unaff_x20 != pppppppuStack_418; unaff_x20 = unaff_x20 + 8) {
                  unaff_x21 = (uint *******)pppppppuStack_410[1];
                  pppppppuVar8 = (uint *******)pppppppuStack_410[2];
                  if (unaff_x21 != pppppppuVar8) {
                    bVar3 = *(byte *)((long)unaff_x20 + 0x17);
                    unaff_x22 = (uint *******)unaff_x20[1];
                    if (-1 < (char)bVar3) {
                      unaff_x22 = (uint *******)(ulong)bVar3;
                    }
                    do {
                      bVar4 = *(byte *)((long)unaff_x21 + 0x17);
                      pppppppuVar9 = (uint *******)unaff_x21[1];
                      if (-1 < (char)bVar4) {
                        pppppppuVar9 = (uint *******)(ulong)bVar4;
                      }
                      if (pppppppuVar9 == unaff_x22) {
                        pppppppuVar9 = (uint *******)*unaff_x21;
                        if (-1 < (char)bVar4) {
                          pppppppuVar9 = unaff_x21;
                        }
                        pppppppuVar24 = (uint *******)*unaff_x20;
                        if (-1 < (char)bVar3) {
                          pppppppuVar24 = unaff_x20;
                        }
                        _memcmp(pppppppuVar9,pppppppuVar24,unaff_x22);
                        if ((int)pppppppuVar9 == 0) break;
                      }
                      unaff_x21 = unaff_x21 + 8;
                      if (unaff_x21 == pppppppuVar8) goto LAB_109fe6cf0;
                    } while( true );
                  }
                  if (unaff_x21 == pppppppuVar8) goto LAB_109fe6cf0;
                  pppppppuVar8 = unaff_x21;
                  param_2 = unaff_x20;
                  FUN_109feab88(unaff_x21,unaff_x20);
                  if (((ulong)pppppppuVar8 & 1) == 0) {
                    if (*(int *)(unaff_x21 + 3) != *(int *)(unaff_x20 + 3)) goto LAB_109fe6d18;
                    pppppppuStack_408 = unaff_x21 + 5;
                    pppppppuVar8 = (uint *******)*pppppppuStack_408;
                    uVar5 = *(uint *)((long)unaff_x21 + 0x1c);
                    if (*(uint *)((long)unaff_x21 + 0x1c) <= *(uint *)((long)unaff_x20 + 0x1c)) {
                      uVar5 = *(uint *)((long)unaff_x20 + 0x1c);
                    }
                    *(uint *)((long)unaff_x21 + 0x1c) = uVar5;
                    unaff_x22 = (uint *******)unaff_x21[6];
                    pppppppuVar9 = (uint *******)unaff_x20[5];
                    pppppppuVar24 = (uint *******)unaff_x20[6];
                    pppppppuVar11 = pppppppuVar9;
                    if ((long)unaff_x22 - (long)pppppppuVar8 !=
                        (long)pppppppuVar24 - (long)pppppppuVar9) {
LAB_109fe6aa0:
                      do {
                        if (pppppppuVar9 == pppppppuVar24) goto LAB_109fe6aa8;
                        ppppppuVar20 = unaff_x21[5];
                        ppppppuVar2 = unaff_x21[6];
                        param_2 = pppppppuVar9;
                        if (ppppppuVar20 == ppppppuVar2) {
LAB_109fe6a74:
                          if (ppppppuVar20 == ppppppuVar2) goto LAB_109fe6a90;
                          FUN_109feac88(ppppppuVar20,pppppppuVar9);
                          if ((int)ppppppuVar20 == 0) goto LAB_109fe6d0c;
                        }
                        else {
                          uVar5 = (uint)(char)*(byte *)((long)pppppppuVar9 + 0x17);
                          unaff_x22 = (uint *******)(ulong)uVar5;
                          ppppppuVar18 = pppppppuVar9[1];
                          if (-1 < (int)uVar5) {
                            ppppppuVar18 = (uint ******)(ulong)*(byte *)((long)pppppppuVar9 + 0x17);
                          }
                          do {
                            bVar3 = *(byte *)((long)ppppppuVar20 + 0x17);
                            ppppppuVar19 = (uint ******)ppppppuVar20[1];
                            if (-1 < (char)bVar3) {
                              ppppppuVar19 = (uint ******)(ulong)bVar3;
                            }
                            if (ppppppuVar19 == ppppppuVar18) {
                              ppppppuVar19 = (uint ******)*ppppppuVar20;
                              if (-1 < (char)bVar3) {
                                ppppppuVar19 = ppppppuVar20;
                              }
                              pppppppuVar8 = (uint *******)*pppppppuVar9;
                              if (-1 < (int)uVar5) {
                                pppppppuVar8 = pppppppuVar9;
                              }
                              _memcmp(ppppppuVar19,pppppppuVar8,ppppppuVar18);
                              if ((int)ppppppuVar19 == 0) goto LAB_109fe6a74;
                            }
                            ppppppuVar20 = ppppppuVar20 + 5;
                          } while (ppppppuVar20 != ppppppuVar2);
LAB_109fe6a90:
                          func_0x00010923dc88(pppppppuStack_408,pppppppuVar9);
                        }
                        pppppppuVar9 = pppppppuVar9 + 5;
                      } while( true );
                    }
                    for (; pppppppuVar8 != unaff_x22; pppppppuVar8 = pppppppuVar8 + 5) {
                      pppppppuVar12 = pppppppuVar8;
                      param_2 = pppppppuVar11;
                      FUN_109feac88(pppppppuVar8,pppppppuVar11);
                      if ((int)pppppppuVar12 == 0) goto LAB_109fe6aa0;
                      pppppppuVar11 = pppppppuVar11 + 5;
                    }
                  }
LAB_109fe6aa8:
                }
                pppppppuStack_418 = pppppppuStack_3d8;
                for (unaff_x20 = pppppppuStack_3e0; unaff_x20 != pppppppuStack_418;
                    unaff_x20 = unaff_x20 + 8) {
                  unaff_x21 = (uint *******)pppppppuStack_410[4];
                  pppppppuVar8 = (uint *******)pppppppuStack_410[5];
                  if (unaff_x21 != pppppppuVar8) {
                    bVar3 = *(byte *)((long)unaff_x20 + 0x17);
                    unaff_x22 = (uint *******)unaff_x20[1];
                    if (-1 < (char)bVar3) {
                      unaff_x22 = (uint *******)(ulong)bVar3;
                    }
                    do {
                      bVar4 = *(byte *)((long)unaff_x21 + 0x17);
                      pppppppuVar9 = (uint *******)unaff_x21[1];
                      if (-1 < (char)bVar4) {
                        pppppppuVar9 = (uint *******)(ulong)bVar4;
                      }
                      if (pppppppuVar9 == unaff_x22) {
                        pppppppuVar9 = (uint *******)*unaff_x21;
                        if (-1 < (char)bVar4) {
                          pppppppuVar9 = unaff_x21;
                        }
                        pppppppuVar24 = (uint *******)*unaff_x20;
                        if (-1 < (char)bVar3) {
                          pppppppuVar24 = unaff_x20;
                        }
                        _memcmp(pppppppuVar9,pppppppuVar24,unaff_x22);
                        if ((int)pppppppuVar9 == 0) break;
                      }
                      unaff_x21 = unaff_x21 + 8;
                      if (unaff_x21 == pppppppuVar8) goto LAB_109fe6cf0;
                    } while( true );
                  }
                  if (unaff_x21 == pppppppuVar8) goto LAB_109fe6cf0;
                  pppppppuVar8 = unaff_x21;
                  param_2 = unaff_x20;
                  FUN_109fead48(unaff_x21,unaff_x20);
                  if (((ulong)pppppppuVar8 & 1) == 0) {
                    if (*(int *)(unaff_x21 + 3) != *(int *)(unaff_x20 + 3)) goto LAB_109fe6d18;
                    pppppppuStack_408 = unaff_x21 + 5;
                    pppppppuVar8 = (uint *******)*pppppppuStack_408;
                    uVar5 = *(uint *)((long)unaff_x21 + 0x1c);
                    if (*(uint *)((long)unaff_x21 + 0x1c) <= *(uint *)((long)unaff_x20 + 0x1c)) {
                      uVar5 = *(uint *)((long)unaff_x20 + 0x1c);
                    }
                    *(uint *)((long)unaff_x21 + 0x1c) = uVar5;
                    unaff_x22 = (uint *******)unaff_x21[6];
                    pppppppuVar9 = (uint *******)unaff_x20[5];
                    pppppppuVar24 = (uint *******)unaff_x20[6];
                    pppppppuVar11 = pppppppuVar9;
                    if ((long)unaff_x22 - (long)pppppppuVar8 !=
                        (long)pppppppuVar24 - (long)pppppppuVar9) {
LAB_109fe6c68:
                      do {
                        if (pppppppuVar9 == pppppppuVar24) goto LAB_109fe6c70;
                        ppppppuVar20 = unaff_x21[5];
                        ppppppuVar2 = unaff_x21[6];
                        param_2 = pppppppuVar9;
                        if (ppppppuVar20 == ppppppuVar2) {
LAB_109fe6c3c:
                          if (ppppppuVar20 == ppppppuVar2) goto LAB_109fe6c58;
                          FUN_109feac88(ppppppuVar20,pppppppuVar9);
                          if ((int)ppppppuVar20 == 0) goto LAB_109fe6d0c;
                        }
                        else {
                          uVar5 = (uint)(char)*(byte *)((long)pppppppuVar9 + 0x17);
                          unaff_x22 = (uint *******)(ulong)uVar5;
                          ppppppuVar18 = pppppppuVar9[1];
                          if (-1 < (int)uVar5) {
                            ppppppuVar18 = (uint ******)(ulong)*(byte *)((long)pppppppuVar9 + 0x17);
                          }
                          do {
                            bVar3 = *(byte *)((long)ppppppuVar20 + 0x17);
                            ppppppuVar19 = (uint ******)ppppppuVar20[1];
                            if (-1 < (char)bVar3) {
                              ppppppuVar19 = (uint ******)(ulong)bVar3;
                            }
                            if (ppppppuVar19 == ppppppuVar18) {
                              ppppppuVar19 = (uint ******)*ppppppuVar20;
                              if (-1 < (char)bVar3) {
                                ppppppuVar19 = ppppppuVar20;
                              }
                              pppppppuVar8 = (uint *******)*pppppppuVar9;
                              if (-1 < (int)uVar5) {
                                pppppppuVar8 = pppppppuVar9;
                              }
                              _memcmp(ppppppuVar19,pppppppuVar8,ppppppuVar18);
                              if ((int)ppppppuVar19 == 0) goto LAB_109fe6c3c;
                            }
                            ppppppuVar20 = ppppppuVar20 + 5;
                          } while (ppppppuVar20 != ppppppuVar2);
LAB_109fe6c58:
                          func_0x00010923dc88(pppppppuStack_408,pppppppuVar9);
                        }
                        pppppppuVar9 = pppppppuVar9 + 5;
                      } while( true );
                    }
                    for (; pppppppuVar8 != unaff_x22; pppppppuVar8 = pppppppuVar8 + 5) {
                      pppppppuVar12 = pppppppuVar8;
                      param_2 = pppppppuVar11;
                      FUN_109feac88(pppppppuVar8,pppppppuVar11);
                      if ((int)pppppppuVar12 == 0) goto LAB_109fe6c68;
                      pppppppuVar11 = pppppppuVar11 + 5;
                    }
                  }
LAB_109fe6c70:
                }
              }
            }
            else {
              do {
                if (*(uint *)pppppppuVar9 == auStack_400[0]) goto LAB_109fe6530;
                pppppppuVar9 = pppppppuVar9 + 0x10;
              } while (pppppppuVar9 != pppppppuVar24);
LAB_109fe65bc:
              param_2 = (uint *******)auStack_400;
              func_0x00010923b61c(pppppppuStack_4b8,param_2);
              unaff_x20 = pppppppuVar8;
            }
            pppppppuStack_108 = pppppppuStack_448;
            func_0x00010922dcf0(&pppppppuStack_108);
            pppppppuStack_108 = pppppppuStack_480;
            func_0x00010922dd7c(&pppppppuStack_108);
            pppppppuStack_108 = pppppppuStack_478;
            func_0x00010922de08(&pppppppuStack_108);
            pppppppuStack_108 = pppppppuStack_488;
            func_0x00010922de94(&pppppppuStack_108);
            pppppppuStack_108 = pppppppuStack_470;
            func_0x00010922dfd4(&pppppppuStack_108);
          }
        }
        lStack_490 = lStack_490 + 1;
      } while (lStack_490 != lStack_4a0);
      lVar10 = lStack_4b0;
      func_0x00010bf52a60();
      lStack_4a0 = lVar10;
    } while (lVar10 != 0);
  }
  _objc_release(lStack_4b0);
  lVar10 = lStack_4b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(lStack_4b0);
    _objc_release(lStack_4b0);
    lVar13 = lVar10;
    __Unwind_Resume();
    pcStack_4c8 = FUN_109fe6ff0;
    pppppppuStack_4f0 = unaff_x22;
    pppppppuStack_4e8 = unaff_x21;
    pppppppuStack_4e0 = unaff_x20;
    lStack_4d8 = lVar10;
    puStack_4d0 = &stack0xfffffffffffffff0;
    _objc_retain();
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    if (lVar13 == 0) {
      FUN_109fe56a0(&uStack_510,param_2);
      func_0x00010923fd80(extraout_x8);
      extraout_x8[1] = uStack_508;
      *extraout_x8 = uStack_510;
      extraout_x8[2] = uStack_500;
      uStack_508 = 0;
      uStack_500 = 0;
      uStack_510 = 0;
      puStack_4f8 = (undefined1 *)&uStack_510;
      func_0x00010922dc0c(&puStack_4f8);
    }
    else {
      FUN_109fe5ac8(&uStack_510,param_2);
      lVar10 = lVar13;
      func_0x00010bf09e40(lVar13);
      _objc_retainAutoreleasedReturnValue();
      FUN_109fe5c04();
      _objc_release(lVar10);
      puStack_4f8 = (undefined1 *)&uStack_510;
      FUN_109fea0e8(&puStack_4f8);
    }
    _objc_release(lVar13);
    return;
  }
  return;
LAB_109fe6ce4:
  puVar21 = &UNK_10f6304c5;
  goto LAB_109fe6d04;
LAB_109fe6cf0:
  puVar21 = &UNK_10f630539;
  goto LAB_109fe6d04;
LAB_109fe6d18:
  puVar21 = &UNK_10f63056d;
  goto LAB_109fe6d04;
LAB_109fe6d0c:
  puVar21 = &UNK_10f6305a5;
LAB_109fe6d04:
  func_0x000109243bf8(puVar21);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109fe6d0c);
  (*pcVar6)();
}



/* Entry: 109fe6ff0; end: 109fe710f;  */

void FUN_109fe6ff0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    FUN_109fe56a0(&uStack_50,param_3);
    func_0x00010923fd80(param_1);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    puStack_38 = (undefined1 *)&uStack_50;
    func_0x00010922dc0c(&puStack_38);
  }
  else {
    FUN_109fe5ac8(&uStack_50,param_3);
    lVar1 = param_2;
    func_0x00010bf09e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5c04();
    _objc_release(lVar1);
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_109fea0e8(&puStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 109fe7110; end: 109fe7b87;  */

void FUN_109fe7110(long param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_70;
  
  puVar6 = PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240);
  func_0x00010c220f80();
  func_0x00010c19f060(puVar6);
  _objc_retain(puVar6);
  puVar7 = PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248);
  if (*(long *)(param_1 + 0x228) != 0) {
    uVar12 = 0;
    uVar13 = 1;
    do {
      puVar8 = puVar7;
      func_0x00010bf0e700(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1741c0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = puVar7;
      func_0x00010bf0e700(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0bc0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      if (0x26 < *(int *)(param_1 + uVar12 * 0x10 + 0x34) - 1U) {
        func_0x000109243bf8(&UNK_10f55e5d5);
        goto LAB_109fe7a1c;
      }
      puVar8 = puVar7;
      func_0x00010bf0e700(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ec40();
      _objc_release(puVar9);
      _objc_release(puVar8);
      bVar1 = uVar13 < *(ulong *)(param_1 + 0x228);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar1);
  }
  if (*(long *)(param_1 + 0x2b0) != 0) {
    puStack_70 = &UNK_10f6305e0;
    uVar12 = 0;
    uVar13 = 1;
    do {
      lVar14 = param_1 + 0x230 + uVar12 * 0x10;
      if (*(int *)(lVar14 + 8) == -1) {
LAB_109fe79f4:
        func_0x000109243bf8(puStack_70);
        goto LAB_109fe7a1c;
      }
      puVar8 = puVar7;
      if (*(int *)(lVar14 + 0xc) == 2) {
        puVar9 = puVar7;
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e740();
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = puVar7;
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a740();
        _objc_release(puVar10);
        _objc_release(puVar9);
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a6e0();
      }
      else {
        puVar9 = puVar7;
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a740();
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = puVar7;
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e740();
        _objc_release(puVar10);
        _objc_release(puVar9);
        if ((*(int *)(lVar14 + 0xc) != 0) && (*(int *)(lVar14 + 0xc) != 1)) {
          puStack_70 = &UNK_10f63060d;
          goto LAB_109fe79f4;
        }
        func_0x00010c08d240(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a6e0();
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      bVar1 = uVar13 < *(ulong *)(param_1 + 0x2b0);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar1);
  }
  func_0x00010c220f60(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_retain(puVar6);
  if (4 < *(uint *)(param_1 + 0x2b8)) {
    func_0x000109243bf8(&UNK_10f6302c8);
LAB_109fe7a1c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109fe7a20);
    (*pcVar5)();
  }
  func_0x00010c1ad5c0(puVar6);
  _objc_release(puVar6);
  func_0x00010c1e7600(puVar6);
  _objc_retain(puVar6);
  func_0x00010c1f5380(puVar6);
  func_0x00010c167840(puVar6);
  func_0x00010c167860(puVar6);
  _objc_release(puVar6);
  _objc_retain(puVar6);
  if (*(long *)(param_1 + 0x420) != 0) {
    uVar12 = 0;
    uVar13 = 1;
    do {
      lVar14 = param_1 + 800 + uVar12 * 0x20;
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1719c0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      FUN_109feb064(*(undefined4 *)(lVar14 + 4));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206fe0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      FUN_109feb064(*(undefined4 *)(lVar14 + 0x10));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206c60();
      _objc_release(puVar8);
      _objc_release(puVar7);
      FUN_109feb064(*(undefined4 *)(lVar14 + 8));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c360();
      _objc_release(puVar8);
      _objc_release(puVar7);
      FUN_109feb064(*(undefined4 *)(lVar14 + 0x14));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c2c0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x000109feb090(*(undefined4 *)(lVar14 + 0xc));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1edfe0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x000109feb090(*(undefined4 *)(lVar14 + 0x18));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167800();
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227420();
      _objc_release(puVar8);
      _objc_release(puVar7);
      bVar1 = uVar13 < *(ulong *)(param_1 + 0x420);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar1);
  }
  _objc_release(puVar6);
  lVar14 = *(long *)(param_1 + 0x428);
  if (lVar14 == 0) {
    _objc_retain(puVar6);
    if (*(long *)(param_1 + 0x460) != 0) {
      uVar12 = 0;
      uVar13 = 1;
      do {
        FUN_109fe4e08(*(undefined4 *)(param_1 + 0x440 + uVar12 * 4));
        puVar7 = puVar6;
        func_0x00010bf40cc0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dc0a0();
        _objc_release(puVar8);
        _objc_release(puVar7);
        bVar1 = uVar13 < *(ulong *)(param_1 + 0x460);
        uVar12 = uVar13;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (bVar1);
    }
    if (*(int *)(param_1 + 0x468) != 0) {
      FUN_109fe4e08();
      func_0x00010c18be00(puVar6);
    }
    if (*(int *)(param_1 + 0x46c) != 0) {
      FUN_109fe4e08();
      func_0x00010c20a580(puVar6);
    }
    goto LAB_109fe79ac;
  }
  uVar3 = *(uint *)(param_1 + 0x430);
  bVar4 = *(byte *)(param_1 + 0x2e8);
  _objc_retain(puVar6);
  if (*(ulong *)(lVar14 + 0x6d0) <= (ulong)uVar3) {
    func_0x000109243bf8(&UNK_10f630620);
    goto LAB_109fe7a1c;
  }
  lVar11 = lVar14 + (ulong)uVar3 * 0xd0;
  if (*(long *)(lVar11 + 0x3f8) != 0) {
    uVar12 = 0;
    uVar13 = 1;
    do {
      FUN_109fe4e08(*(undefined4 *)
                     (lVar14 + 0x38 + (ulong)*(uint *)(lVar11 + 0x3b8 + uVar12 * 8) * 0x30));
      puVar7 = puVar6;
      func_0x00010bf40cc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc0a0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      bVar1 = uVar13 < *(ulong *)(lVar11 + 0x3f8);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar1);
  }
  if (*(uint *)(lVar11 + 0x448) == 0xffffffff) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)*(uint *)(lVar14 + (ulong)*(uint *)(lVar11 + 0x448) * 0x30 + 0x38);
    FUN_109fe4e08(uVar12);
    func_0x00010c18be00(puVar6);
  }
  if ((bVar4 & 1) == 0) {
    ppuVar2 = &PTR_DAT_110ae4700 + uVar12 * 4;
    if (0x56 < (uint)uVar12) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) != 0) goto LAB_109fe7998;
  }
  else {
LAB_109fe7998:
    func_0x00010bf6dbe0(puVar6);
  }
  func_0x00010c20a580(puVar6);
LAB_109fe79ac:
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109fe7b88; end: 109fe7bdf;  */

void FUN_109fe7b88(long *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_2 = param_2 << 3;
    do {
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x94) == param_3) {
        func_0x000109fe3fa0(lVar1);
        uVar2 = *(undefined8 *)(lVar1 + 0x108);
        _objc_retain(uVar2);
        goto LAB_109fe7bd0;
      }
      param_2 = param_2 + -8;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  uVar2 = 0;
LAB_109fe7bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109fe7be0; end: 109fe8bb3;  */

void FUN_109fe7be0(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  uint param_6,long param_7)

{
  byte *pbVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined *puStack_e0;
  
  puVar16 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
  _objc_opt_new();
  lVar17 = param_1 + (ulong)param_6 * 0xd0;
  if (*(long *)(lVar17 + 0x3d0) != 0) {
    puStack_e0 = &UNK_10f6306f9;
    uVar22 = 1;
    uVar21 = 0;
    do {
      uVar19 = uVar22;
      uVar22 = (ulong)*(uint *)(lVar17 + 0x390 + uVar21 * 8);
      piVar20 = (int *)(param_1 + uVar22 * 0x30);
      iVar5 = *piVar20;
      if (param_7 == 0) {
        iVar6 = piVar20[1];
      }
      else {
        pbVar1 = (byte *)(param_7 + uVar22 * 2);
        if (param_6 != *pbVar1) {
          iVar5 = 1;
        }
        iVar6 = piVar20[1];
        if (param_6 != pbVar1[1]) {
          iVar6 = 1;
        }
      }
      lVar18 = *(long *)(param_2 + uVar22 * 8);
      FUN_109fe8bb4();
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c1c0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      func_0x000109fe8bfc(iVar5);
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be600();
      _objc_release(puVar14);
      _objc_release(puVar13);
      if (iVar5 == 2) {
        pfVar2 = (float *)(param_4 + uVar22 * 0x10);
        ppuVar3 = &PTR_DAT_110ae4700 + (ulong)(uint)piVar20[4] * 4;
        if (0x56 < (uint)piVar20[4]) {
          ppuVar3 = &PTR_DAT_110ae4700;
        }
        puVar13 = puVar16;
        if (*(char *)(ppuVar3 + 2) == '\x03') {
          fVar30 = *pfVar2;
          fVar29 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar27 = pfVar2[3];
          func_0x00010bf40cc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = NEON_ucvtf((ulong)(uint)fVar30);
          uVar24 = NEON_ucvtf((ulong)(uint)fVar29);
          uVar25 = NEON_ucvtf((ulong)(uint)fVar28);
          uVar26 = NEON_ucvtf((ulong)(uint)fVar27);
          func_0x00010c17c800(uVar23,uVar24,uVar25,uVar26);
        }
        else if (*(char *)(ppuVar3 + 2) == '\x04') {
          fVar27 = *pfVar2;
          fVar29 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar30 = pfVar2[3];
          func_0x00010bf40cc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c800((double)(int)fVar27,(double)(int)fVar29,(double)(int)fVar28,
                              (double)(int)fVar30);
        }
        else {
          fVar27 = *pfVar2;
          fVar28 = pfVar2[1];
          fVar29 = pfVar2[2];
          fVar30 = pfVar2[3];
          func_0x00010bf40cc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c800((double)fVar27,(double)fVar28,(double)fVar29,(double)fVar30);
        }
        _objc_release(puVar14);
        _objc_release(puVar13);
      }
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139e0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bd800();
      _objc_release(puVar14);
      _objc_release(puVar13);
      uVar7 = *(uint *)(lVar18 + 0x34);
      if ((1 < uVar7) && (1 < uVar7 - 2)) {
LAB_109fe8958:
        func_0x000109243bf8(puStack_e0);
        goto LAB_109fe89c8;
      }
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203240();
      _objc_release(puVar14);
      _objc_release(puVar13);
      iVar5 = *(int *)(lVar18 + 0x34);
      if ((1 < iVar5 - 2U) && ((iVar5 != 0 && (iVar5 != 1)))) {
        puStack_e0 = &UNK_10f63070f;
        goto LAB_109fe8958;
      }
      puVar13 = puVar16;
      func_0x00010bf40cc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf00();
      _objc_release(puVar14);
      _objc_release(puVar13);
      if (uVar21 < *(ulong *)(lVar17 + 0x418)) {
        uVar7 = *(uint *)(lVar17 + 0x3d8 + uVar21 * 8);
        if (uVar7 != 0xffffffff) {
          lVar18 = *(long *)(param_2 + (ulong)uVar7 * 8);
          puVar13 = puVar16;
          func_0x00010bf40cc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecb40();
          _objc_release(puVar14);
          _objc_release(puVar13);
          puVar13 = puVar16;
          func_0x00010bf40cc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecae0();
          _objc_release(puVar14);
          _objc_release(puVar13);
          uVar8 = *(uint *)(lVar18 + 0x34);
          if ((uVar8 < 2) || (uVar8 - 2 < 2)) {
            puVar13 = puVar16;
            func_0x00010bf40cc0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecb20();
            _objc_release(puVar14);
            _objc_release(puVar13);
            iVar5 = *(int *)(lVar18 + 0x34);
            if ((iVar5 - 2U < 2) || ((iVar5 == 0 || (iVar5 == 1)))) {
              puVar13 = puVar16;
              func_0x00010bf40cc0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ecaa0();
              _objc_release(puVar14);
              _objc_release(puVar13);
              if (((param_7 != 0) && (param_6 != *(byte *)(param_7 + (ulong)uVar7 * 2 + 1))) ||
                 (*(int *)(param_1 + (ulong)uVar7 * 0x30 + 4) != 0)) {
                puVar13 = puVar16;
                if (iVar6 == 1) {
                  func_0x00010bf40cc0(puVar16);
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar13;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c20c1c0();
                }
                else {
                  if (iVar6 != 0) goto LAB_109fe81f4;
                  func_0x00010bf40cc0(puVar16);
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar13;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c20c1c0();
                }
                _objc_release(puVar14);
                _objc_release(puVar13);
                goto LAB_109fe81f4;
              }
              puStack_e0 = &UNK_10f630323;
            }
            else {
              puStack_e0 = &UNK_10f63070f;
            }
          }
          func_0x000109243bf8(puStack_e0);
          goto LAB_109fe89c8;
        }
      }
LAB_109fe81f4:
      uVar22 = (ulong)((int)uVar19 + 1);
      uVar21 = uVar19;
    } while (uVar19 < *(ulong *)(lVar17 + 0x3d0));
  }
  uVar7 = *(uint *)(lVar17 + 0x420);
  uVar22 = (ulong)uVar7;
  if (uVar7 == 0xffffffff) goto LAB_109fe8914;
  lVar18 = *(long *)(param_2 + uVar22 * 8);
  piVar20 = (int *)(param_1 + (ulong)uVar7 * 0x30);
  iVar5 = *piVar20;
  if (param_7 == 0) {
    iVar4 = piVar20[1];
    iVar6 = piVar20[2];
    iVar9 = piVar20[3];
  }
  else {
    pbVar1 = (byte *)(param_7 + uVar22 * 2);
    bVar12 = param_6 != *pbVar1;
    if (bVar12) {
      iVar5 = 1;
    }
    iVar4 = piVar20[1];
    iVar6 = piVar20[2];
    if (bVar12) {
      iVar6 = 1;
    }
    bVar12 = param_6 != pbVar1[1];
    if (bVar12) {
      iVar4 = 1;
    }
    iVar9 = piVar20[3];
    if (bVar12) {
      iVar9 = 1;
    }
  }
  puVar13 = puVar16;
  func_0x00010bf6dbc0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139e0();
  _objc_release(puVar13);
  puVar13 = puVar16;
  func_0x00010bf6dbc0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd800();
  _objc_release(puVar13);
  if ((*(uint *)(lVar18 + 0x34) < 2) || (*(uint *)(lVar18 + 0x34) - 2 < 2)) {
    puVar13 = puVar16;
    func_0x00010bf6dbc0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203240();
    _objc_release(puVar13);
    iVar10 = *(int *)(lVar18 + 0x34);
    if ((iVar10 - 2U < 2 || iVar10 == 0) || (iVar10 == 1)) {
      puVar13 = puVar16;
      func_0x00010bf6dbc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf00();
      _objc_release(puVar13);
      func_0x000109fe8bfc(iVar5);
      puVar13 = puVar16;
      func_0x00010bf6dbc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be600();
      _objc_release(puVar13);
      FUN_109fe8bb4(iVar4);
      puVar13 = puVar16;
      func_0x00010bf6dbc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c1c0();
      _objc_release(puVar13);
      if (iVar5 == 2) {
        fVar27 = *(float *)(param_4 + uVar22 * 0x10);
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17c860((double)fVar27);
        _objc_release(puVar13);
      }
      ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar18 + 0x40) * 4;
      if (0x56 < *(uint *)(lVar18 + 0x40)) {
        ppuVar3 = &PTR_DAT_110ae4700;
      }
      if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) != 0) {
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c26ce20();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139e0();
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c098a00();
        puVar14 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bd800();
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23e860();
        puVar14 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203240();
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6dde0();
        puVar14 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18bf00();
        _objc_release(puVar14);
        _objc_release(puVar13);
        func_0x000109fe8bfc(iVar6);
        puVar13 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1be600();
        _objc_release(puVar13);
        FUN_109fe8bb4(iVar9);
        puVar13 = puVar16;
        func_0x00010c2536a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20c1c0();
        _objc_release(puVar13);
        if (iVar6 == 2) {
          puVar13 = puVar16;
          func_0x00010c2536a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c8c0();
          _objc_release(puVar13);
        }
      }
      uVar7 = *(uint *)(lVar17 + 0x428);
      uVar22 = (ulong)uVar7;
      if (uVar7 == 0xffffffff) goto LAB_109fe8914;
      lVar17 = *(long *)(param_2 + uVar22 * 8);
      puVar13 = puVar16;
      func_0x00010bf6dbc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ecb40();
      param_1 = param_1 + (ulong)uVar7 * 0x30;
      _objc_release(puVar13);
      puVar13 = puVar16;
      func_0x00010bf6dbc0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ecae0();
      _objc_release(puVar13);
      if ((*(uint *)(lVar17 + 0x34) < 2) || (*(uint *)(lVar17 + 0x34) - 2 < 2)) {
        puVar13 = puVar16;
        func_0x00010bf6dbc0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ecb20();
        _objc_release(puVar13);
        iVar5 = *(int *)(lVar17 + 0x34);
        if ((iVar5 - 2U < 2) || ((iVar5 == 0 || (iVar5 == 1)))) {
          puVar13 = puVar16;
          func_0x00010bf6dbc0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecaa0();
          _objc_release(puVar13);
          ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar17 + 0x40) * 4;
          if (0x56 < *(uint *)(lVar17 + 0x40)) {
            ppuVar3 = &PTR_DAT_110ae4700;
          }
          if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) != 0) {
            puVar13 = puVar16;
            func_0x00010bf6dbc0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c13ae60();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar16;
            func_0x00010c2536a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecb40();
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            puVar13 = puVar16;
            func_0x00010bf6dbc0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13aa80();
            puVar14 = puVar16;
            func_0x00010c2536a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecae0();
            _objc_release(puVar14);
            _objc_release(puVar13);
            puVar13 = puVar16;
            func_0x00010bf6dbc0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13ad60();
            puVar14 = puVar16;
            func_0x00010c2536a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecb20();
            _objc_release(puVar14);
            _objc_release(puVar13);
            puVar13 = puVar16;
            func_0x00010bf6dbc0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13a7e0();
            puVar14 = puVar16;
            func_0x00010c2536a0(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecaa0();
            _objc_release(puVar14);
            _objc_release(puVar13);
            if (((param_7 == 0) || (param_6 == *(byte *)(param_7 + uVar22 * 2 + 1))) &&
               (*(int *)(param_1 + 0xc) == 0)) {
              puVar16 = &UNK_10f630377;
              goto LAB_109fe89c4;
            }
            puVar13 = puVar16;
            if (iVar9 == 1) {
              func_0x00010c2536a0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            else {
              if (iVar9 != 0) goto LAB_109fe88a0;
              func_0x00010c2536a0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            _objc_release(puVar13);
          }
LAB_109fe88a0:
          if (((param_7 != 0) && (param_6 != *(byte *)(param_7 + uVar22 * 2 + 1))) ||
             (*(int *)(param_1 + 4) != 0)) {
            puVar13 = puVar16;
            if (iVar4 == 1) {
              func_0x00010bf6dbc0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            else {
              if (iVar4 != 0) goto LAB_109fe8914;
              func_0x00010bf6dbc0(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            _objc_release(puVar13);
LAB_109fe8914:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
            return;
          }
          puVar16 = &UNK_10f630323;
        }
        else {
          puVar16 = &UNK_10f63070f;
        }
      }
      else {
        puVar16 = &UNK_10f6306f9;
      }
LAB_109fe89c4:
      func_0x000109243bf8(puVar16);
      goto LAB_109fe89c8;
    }
    puVar16 = &UNK_10f63070f;
  }
  else {
    puVar16 = &UNK_10f6306f9;
  }
  func_0x000109243bf8(puVar16);
LAB_109fe89c8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109fe89cc);
  (*pcVar11)();
}



/* Entry: 109fe8bb4; end: 109fe8c5b;  */

/* WARNING: Possible PIC construction at 0x000109fe8d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109fe92a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109fe9554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109fe92a8) */
/* WARNING: Removing unreachable block (ram,0x000109fe930c) */
/* WARNING: Removing unreachable block (ram,0x000109fe9334) */
/* WARNING: Removing unreachable block (ram,0x000109fe933c) */
/* WARNING: Removing unreachable block (ram,0x000109fe93a8) */
/* WARNING: Removing unreachable block (ram,0x000109fe9398) */
/* WARNING: Removing unreachable block (ram,0x000109fe97c4) */
/* WARNING: Removing unreachable block (ram,0x000109fe93a0) */
/* WARNING: Removing unreachable block (ram,0x000109fe93ac) */
/* WARNING: Removing unreachable block (ram,0x000109fe93e4) */
/* WARNING: Removing unreachable block (ram,0x000109fe93e8) */
/* WARNING: Removing unreachable block (ram,0x000109fe97d0) */
/* WARNING: Removing unreachable block (ram,0x000109fe97d8) */
/* WARNING: Removing unreachable block (ram,0x000109fe93f0) */
/* WARNING: Removing unreachable block (ram,0x000109fe93f4) */
/* WARNING: Removing unreachable block (ram,0x000109fe9448) */
/* WARNING: Removing unreachable block (ram,0x000109fe9424) */
/* WARNING: Removing unreachable block (ram,0x000109fe9428) */
/* WARNING: Removing unreachable block (ram,0x000109fe9464) */
/* WARNING: Removing unreachable block (ram,0x000109fe8d20) */
/* WARNING: Removing unreachable block (ram,0x000109fe8d70) */
/* WARNING: Removing unreachable block (ram,0x000109fe8d84) */
/* WARNING: Removing unreachable block (ram,0x000109fe8de4) */
/* WARNING: Removing unreachable block (ram,0x000109fe8d94) */
/* WARNING: Removing unreachable block (ram,0x000109fe8e2c) */
/* WARNING: Removing unreachable block (ram,0x000109fe8d9c) */
/* WARNING: Removing unreachable block (ram,0x000109fe8e70) */
/* WARNING: Removing unreachable block (ram,0x000109fe8e80) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f24) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f14) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f1c) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f28) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f7c) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f80) */
/* WARNING: Removing unreachable block (ram,0x000109fe975c) */
/* WARNING: Removing unreachable block (ram,0x000109fe9768) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f88) */
/* WARNING: Removing unreachable block (ram,0x000109fe8f8c) */
/* WARNING: Removing unreachable block (ram,0x000109fe8fd4) */
/* WARNING: Removing unreachable block (ram,0x000109fe9078) */
/* WARNING: Removing unreachable block (ram,0x000109fe9068) */
/* WARNING: Removing unreachable block (ram,0x000109fe9070) */
/* WARNING: Removing unreachable block (ram,0x000109fe907c) */
/* WARNING: Removing unreachable block (ram,0x000109fe90d0) */
/* WARNING: Removing unreachable block (ram,0x000109fe90d4) */
/* WARNING: Removing unreachable block (ram,0x000109fe9774) */
/* WARNING: Removing unreachable block (ram,0x000109fe9780) */
/* WARNING: Removing unreachable block (ram,0x000109fe90dc) */
/* WARNING: Removing unreachable block (ram,0x000109fe90e0) */
/* WARNING: Removing unreachable block (ram,0x000109fe9164) */
/* WARNING: Removing unreachable block (ram,0x000109fe912c) */
/* WARNING: Removing unreachable block (ram,0x000109fe9130) */
/* WARNING: Removing unreachable block (ram,0x000109fe9194) */
/* WARNING: Removing unreachable block (ram,0x000109fe91a4) */
/* WARNING: Removing unreachable block (ram,0x000109fe9558) */
/* WARNING: Removing unreachable block (ram,0x000109fe95bc) */
/* WARNING: Removing unreachable block (ram,0x000109fe95e4) */
/* WARNING: Removing unreachable block (ram,0x000109fe95ec) */
/* WARNING: Removing unreachable block (ram,0x000109fe9658) */
/* WARNING: Removing unreachable block (ram,0x000109fe9648) */
/* WARNING: Removing unreachable block (ram,0x000109fe97e0) */
/* WARNING: Removing unreachable block (ram,0x000109fe9650) */
/* WARNING: Removing unreachable block (ram,0x000109fe965c) */
/* WARNING: Removing unreachable block (ram,0x000109fe9694) */
/* WARNING: Removing unreachable block (ram,0x000109fe9698) */
/* WARNING: Removing unreachable block (ram,0x000109fe97ec) */
/* WARNING: Removing unreachable block (ram,0x000109fe97f4) */
/* WARNING: Removing unreachable block (ram,0x000109fe96a0) */
/* WARNING: Removing unreachable block (ram,0x000109fe96a4) */
/* WARNING: Removing unreachable block (ram,0x000109fe96f8) */
/* WARNING: Removing unreachable block (ram,0x000109fe96d4) */
/* WARNING: Removing unreachable block (ram,0x000109fe96d8) */
/* WARNING: Removing unreachable block (ram,0x000109fe9714) */

ulong FUN_109fe8bb4(int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong *unaff_x28;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  puVar7 = &stack0xfffffffffffffff0;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        func_0x000109243bf8(&UNK_10f630657);
      }
      puVar6 = &UNK_10f63068f;
      uVar8 = 0x109fe8bfc;
      func_0x000109243bf8();
      puVar2 = &stack0xfffffffffffffff0;
      do {
        while( true ) {
          while( true ) {
            *(undefined1 **)(puVar2 + -0x10) = puVar7;
            *(undefined8 *)(puVar2 + -8) = uVar8;
            iVar3 = (int)puVar6;
            if (iVar3 < 2) {
              if (iVar3 == 0) {
                return 0;
              }
              if (iVar3 == 1) {
                return (ulong)puVar6 & 0xffffffff;
              }
            }
            else {
              if (iVar3 == 2) {
                return 2;
              }
              if (iVar3 == 3) {
                func_0x000109243bf8(&UNK_10f6306a9);
              }
            }
            puVar6 = &UNK_10f6306e0;
            func_0x000109243bf8();
            *(undefined8 *)(puVar2 + -0x90) = unaff_d11;
            *(undefined8 *)(puVar2 + -0x88) = unaff_d10;
            *(undefined8 *)(puVar2 + -0x80) = unaff_d9;
            *(undefined8 *)(puVar2 + -0x78) = unaff_d8;
            *(ulong **)(puVar2 + -0x70) = unaff_x28;
            *(undefined8 *)(puVar2 + -0x68) = unaff_x27;
            *(undefined8 *)(puVar2 + -0x60) = unaff_x26;
            *(long *)(puVar2 + -0x58) = unaff_x25;
            *(ulong *)(puVar2 + -0x50) = unaff_x24;
            *(long *)(puVar2 + -0x48) = unaff_x23;
            *(undefined8 *)(puVar2 + -0x40) = unaff_x22;
            *(ulong *)(puVar2 + -0x38) = unaff_x21;
            *(undefined8 *)(puVar2 + -0x30) = unaff_x20;
            *(undefined **)(puVar2 + -0x28) = unaff_x19;
            *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
            *(code **)(puVar2 + -0x18) = FUN_109fe8c5c;
            puVar7 = puVar2 + -0x20;
            puVar5 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
            _objc_opt_new();
            *(undefined **)(puVar2 + -0x98) = puVar5;
            unaff_x19 = puVar6;
            if (*(long *)(puVar6 + 0x248) == 0) break;
            unaff_x22 = 0;
            *(undefined **)(puVar2 + -0xa8) = puVar6;
            *(undefined **)(puVar2 + -0xa0) = puVar6 + 8;
            unaff_x27 = 1;
            *(undefined **)(puVar2 + -0xb0) = &UNK_10f6306f9;
            unaff_x28 = *(ulong **)(puVar2 + -0xa0);
            unaff_x21 = *unaff_x28;
            unaff_x24 = (ulong)*(uint *)((long)unaff_x28 + 0x24);
            FUN_109fe8bb4();
            unaff_x23 = *(long *)(puVar2 + -0x98);
            func_0x00010bf40cc0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x23;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20c1c0();
            _objc_release(unaff_x25);
            _objc_release(unaff_x23);
            puVar6 = (undefined *)(ulong)(uint)unaff_x28[4];
            uVar8 = 0x109fe8d20;
            puVar2 = puVar2 + -0xb0;
          }
          unaff_x23 = *(long *)(puVar6 + 0x250);
          if (unaff_x23 != 0) break;
          unaff_x23 = *(long *)(puVar6 + 0x298);
          if (unaff_x23 == 0) {
            uVar4 = *(ulong *)(puVar2 + -0x98);
            _objc_retain(uVar4);
            _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
            return uVar4;
          }
          uVar8 = *(undefined8 *)(puVar2 + -0x98);
          func_0x00010c2536a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2139e0();
          _objc_release(uVar8);
          uVar8 = *(undefined8 *)(puVar2 + -0x98);
          func_0x00010c2536a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bd800();
          _objc_release(uVar8);
          if ((1 < *(uint *)(unaff_x23 + 0x34)) && (1 < *(uint *)(unaff_x23 + 0x34) - 2)) {
            puVar6 = &UNK_10f6306f9;
LAB_109fe97bc:
            func_0x000109243bf8(puVar6);
            goto LAB_109fe97f8;
          }
          uVar8 = *(undefined8 *)(puVar2 + -0x98);
          func_0x00010c2536a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203240();
          _objc_release(uVar8);
          unaff_x21 = 0;
          iVar3 = *(int *)(unaff_x23 + 0x34);
          if ((1 < iVar3 - 2U) && (iVar3 != 0)) {
            if (iVar3 != 1) {
              puVar6 = &UNK_10f63070f;
              goto LAB_109fe97bc;
            }
            unaff_x21 = (ulong)*(uint *)(puVar6 + 0x2a4);
          }
          unaff_x22 = *(undefined8 *)(puVar2 + -0x98);
          func_0x00010c2536a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18bf00();
          _objc_release(unaff_x22);
          puVar6 = (undefined *)(ulong)*(uint *)(puVar6 + 0x2b8);
          uVar8 = 0x109fe9558;
          puVar2 = puVar2 + -0xb0;
        }
        uVar8 = *(undefined8 *)(puVar2 + -0x98);
        func_0x00010bf6dbc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139e0();
        _objc_release(uVar8);
        uVar8 = *(undefined8 *)(puVar2 + -0x98);
        func_0x00010bf6dbc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bd800();
        _objc_release(uVar8);
        if ((1 < *(uint *)(unaff_x23 + 0x34)) && (1 < *(uint *)(unaff_x23 + 0x34) - 2)) {
          puVar6 = &UNK_10f6306f9;
LAB_109fe97a0:
          func_0x000109243bf8(puVar6);
LAB_109fe97f8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe97fc);
          (*pcVar1)();
        }
        uVar8 = *(undefined8 *)(puVar2 + -0x98);
        func_0x00010bf6dbc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203240();
        _objc_release(uVar8);
        unaff_x21 = 0;
        iVar3 = *(int *)(unaff_x23 + 0x34);
        if ((1 < iVar3 - 2U) && (iVar3 != 0)) {
          if (iVar3 != 1) {
            puVar6 = &UNK_10f63070f;
            goto LAB_109fe97a0;
          }
          unaff_x21 = (ulong)*(uint *)(puVar6 + 0x25c);
        }
        unaff_x22 = *(undefined8 *)(puVar2 + -0x98);
        func_0x00010bf6dbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18bf00();
        _objc_release(unaff_x22);
        puVar6 = (undefined *)(ulong)*(uint *)(puVar6 + 0x270);
        uVar8 = 0x109fe92a8;
        puVar2 = puVar2 + -0xb0;
      } while( true );
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 109fe8c5c; end: 109fe9947;  */

void FUN_109fe8c5c(long param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  undefined *puStack_a0;
  
  puVar8 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
  _objc_opt_new();
  if (*(long *)(param_1 + 0x248) != 0) {
    puStack_a0 = &UNK_10f6306f9;
    uVar12 = 0;
    uVar13 = 1;
    do {
      plVar14 = (long *)(param_1 + 8 + uVar12 * 0x48);
      lVar11 = *plVar14;
      FUN_109fe8bb4(*(undefined4 *)((long)plVar14 + 0x24));
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c1c0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x000109fe8bfc((int)plVar14[4]);
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be600();
      _objc_release(puVar10);
      _objc_release(puVar9);
      if ((int)plVar14[4] == 2) {
        ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar11 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar11 + 0x40)) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        puVar9 = puVar8;
        if (*(char *)(ppuVar2 + 2) == '\x03') {
          uVar25 = *(uint *)(plVar14 + 6);
          uVar23 = *(uint *)((long)plVar14 + 0x34);
          uVar21 = *(uint *)(plVar14 + 7);
          uVar19 = *(uint *)((long)plVar14 + 0x3c);
          func_0x00010bf40cc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = NEON_ucvtf((ulong)uVar25);
          uVar16 = NEON_ucvtf((ulong)uVar23);
          uVar17 = NEON_ucvtf((ulong)uVar21);
          uVar18 = NEON_ucvtf((ulong)uVar19);
          func_0x00010c17c800(uVar15,uVar16,uVar17,uVar18);
        }
        else if (*(char *)(ppuVar2 + 2) == '\x04') {
          lVar5 = plVar14[6];
          iVar3 = *(int *)((long)plVar14 + 0x34);
          lVar6 = plVar14[7];
          iVar4 = *(int *)((long)plVar14 + 0x3c);
          func_0x00010bf40cc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c800((double)(int)lVar5,(double)iVar3,(double)(int)lVar6,(double)iVar4);
        }
        else {
          fVar20 = *(float *)(plVar14 + 6);
          fVar22 = *(float *)((long)plVar14 + 0x34);
          fVar24 = *(float *)(plVar14 + 7);
          fVar26 = *(float *)((long)plVar14 + 0x3c);
          func_0x00010bf40cc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c800((double)fVar20,(double)fVar22,(double)fVar24,(double)fVar26);
        }
        _objc_release(puVar10);
        _objc_release(puVar9);
      }
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139e0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bd800();
      _objc_release(puVar10);
      _objc_release(puVar9);
      if ((1 < *(uint *)(lVar11 + 0x34)) && (1 < *(uint *)(lVar11 + 0x34) - 2)) {
LAB_109fe9768:
        func_0x000109243bf8(puStack_a0);
        goto LAB_109fe97f8;
      }
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203240();
      _objc_release(puVar10);
      _objc_release(puVar9);
      iVar3 = *(int *)(lVar11 + 0x34);
      if ((1 < iVar3 - 2U) && ((iVar3 != 0 && (iVar3 != 1)))) {
        puStack_a0 = &UNK_10f63070f;
        goto LAB_109fe9768;
      }
      puVar9 = puVar8;
      func_0x00010bf40cc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf00();
      _objc_release(puVar10);
      _objc_release(puVar9);
      lVar11 = plVar14[2];
      if (lVar11 != 0) {
        puVar9 = puVar8;
        func_0x00010bf40cc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ecb40();
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bf40cc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ecae0();
        _objc_release(puVar10);
        _objc_release(puVar9);
        if ((*(uint *)(lVar11 + 0x34) < 2) || (*(uint *)(lVar11 + 0x34) - 2 < 2)) {
          puVar9 = puVar8;
          func_0x00010bf40cc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecb20();
          _objc_release(puVar10);
          _objc_release(puVar9);
          iVar3 = *(int *)(lVar11 + 0x34);
          if ((iVar3 - 2U < 2) || ((iVar3 == 0 || (iVar3 == 1)))) {
            puVar9 = puVar8;
            func_0x00010bf40cc0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecaa0();
            _objc_release(puVar10);
            _objc_release(puVar9);
            puVar9 = puVar8;
            if (*(int *)((long)plVar14 + 0x24) == 1) {
              func_0x00010bf40cc0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            else {
              if (*(int *)((long)plVar14 + 0x24) != 0) goto LAB_109fe91a4;
              func_0x00010bf40cc0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            _objc_release(puVar10);
            _objc_release(puVar9);
            goto LAB_109fe91a4;
          }
          puStack_a0 = &UNK_10f63070f;
        }
        func_0x000109243bf8(puStack_a0);
        goto LAB_109fe97f8;
      }
LAB_109fe91a4:
      bVar1 = uVar13 < *(ulong *)(param_1 + 0x248);
      uVar12 = uVar13;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (bVar1);
  }
  lVar11 = *(long *)(param_1 + 0x250);
  if (lVar11 == 0) goto LAB_109fe946c;
  puVar9 = puVar8;
  func_0x00010bf6dbc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139e0();
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf6dbc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd800();
  _objc_release(puVar9);
  if ((*(uint *)(lVar11 + 0x34) < 2) || (*(uint *)(lVar11 + 0x34) - 2 < 2)) {
    puVar9 = puVar8;
    func_0x00010bf6dbc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203240();
    _objc_release(puVar9);
    iVar3 = *(int *)(lVar11 + 0x34);
    if (((iVar3 - 2U < 2) || (iVar3 == 0)) || (iVar3 == 1)) {
      puVar9 = puVar8;
      func_0x00010bf6dbc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf00();
      _objc_release(puVar9);
      func_0x000109fe8bfc(*(undefined4 *)(param_1 + 0x270));
      puVar9 = puVar8;
      func_0x00010bf6dbc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be600();
      _objc_release(puVar9);
      FUN_109fe8bb4(*(undefined4 *)(param_1 + 0x274));
      puVar9 = puVar8;
      func_0x00010bf6dbc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c1c0();
      _objc_release(puVar9);
      if (*(int *)(param_1 + 0x270) == 2) {
        fVar20 = *(float *)(param_1 + 0x280);
        puVar9 = puVar8;
        func_0x00010bf6dbc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17c860((double)fVar20);
        _objc_release(puVar9);
      }
      lVar11 = *(long *)(param_1 + 0x260);
      if (lVar11 == 0) {
LAB_109fe946c:
        lVar11 = *(long *)(param_1 + 0x298);
        if (lVar11 == 0) goto LAB_109fe971c;
        puVar9 = puVar8;
        func_0x00010c2536a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139e0();
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010c2536a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bd800();
        _objc_release(puVar9);
        if ((*(uint *)(lVar11 + 0x34) < 2) || (*(uint *)(lVar11 + 0x34) - 2 < 2)) {
          puVar9 = puVar8;
          func_0x00010c2536a0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203240();
          _objc_release(puVar9);
          iVar3 = *(int *)(lVar11 + 0x34);
          if (((iVar3 - 2U < 2) || (iVar3 == 0)) || (iVar3 == 1)) {
            puVar9 = puVar8;
            func_0x00010c2536a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18bf00();
            _objc_release(puVar9);
            func_0x000109fe8bfc(*(undefined4 *)(param_1 + 0x2b8));
            puVar9 = puVar8;
            func_0x00010c2536a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1be600();
            _objc_release(puVar9);
            FUN_109fe8bb4(*(undefined4 *)(param_1 + 700));
            puVar9 = puVar8;
            func_0x00010c2536a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20c1c0();
            _objc_release(puVar9);
            if (*(int *)(param_1 + 0x2b8) == 2) {
              puVar9 = puVar8;
              func_0x00010c2536a0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c17c8c0();
              _objc_release(puVar9);
            }
            lVar11 = *(long *)(param_1 + 0x2a8);
            if (lVar11 == 0) {
LAB_109fe971c:
              _objc_retain(puVar8);
              _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
              return;
            }
            puVar9 = puVar8;
            func_0x00010c2536a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecb40();
            _objc_release(puVar9);
            puVar9 = puVar8;
            func_0x00010c2536a0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecae0();
            _objc_release(puVar9);
            if ((*(uint *)(lVar11 + 0x34) < 2) || (*(uint *)(lVar11 + 0x34) - 2 < 2)) {
              puVar9 = puVar8;
              func_0x00010c2536a0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ecb20();
              _objc_release(puVar9);
              iVar3 = *(int *)(lVar11 + 0x34);
              if (((iVar3 - 2U < 2) || (iVar3 == 0)) || (iVar3 == 1)) {
                puVar9 = puVar8;
                func_0x00010c2536a0(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1ecaa0();
                _objc_release(puVar9);
                puVar9 = puVar8;
                if (*(int *)(param_1 + 700) == 1) {
                  func_0x00010c2536a0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c20c1c0();
                }
                else {
                  if (*(int *)(param_1 + 700) != 0) goto LAB_109fe971c;
                  func_0x00010c2536a0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c20c1c0();
                }
                _objc_release(puVar9);
                goto LAB_109fe971c;
              }
              puVar8 = &UNK_10f63070f;
            }
            else {
              puVar8 = &UNK_10f6306f9;
            }
            func_0x000109243bf8(puVar8);
            goto LAB_109fe97f8;
          }
          puVar8 = &UNK_10f63070f;
        }
        else {
          puVar8 = &UNK_10f6306f9;
        }
        func_0x000109243bf8(puVar8);
      }
      else {
        puVar9 = puVar8;
        func_0x00010bf6dbc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ecb40();
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bf6dbc0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ecae0();
        _objc_release(puVar9);
        if ((*(uint *)(lVar11 + 0x34) < 2) || (*(uint *)(lVar11 + 0x34) - 2 < 2)) {
          puVar9 = puVar8;
          func_0x00010bf6dbc0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecb20();
          _objc_release(puVar9);
          iVar3 = *(int *)(lVar11 + 0x34);
          if (((iVar3 - 2U < 2) || (iVar3 == 0)) || (iVar3 == 1)) {
            puVar9 = puVar8;
            func_0x00010bf6dbc0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecaa0();
            _objc_release(puVar9);
            puVar9 = puVar8;
            if (*(int *)(param_1 + 0x274) == 1) {
              func_0x00010bf6dbc0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            else {
              if (*(int *)(param_1 + 0x274) != 0) goto LAB_109fe946c;
              func_0x00010bf6dbc0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20c1c0();
            }
            _objc_release(puVar9);
            goto LAB_109fe946c;
          }
          puVar8 = &UNK_10f63070f;
        }
        else {
          puVar8 = &UNK_10f6306f9;
        }
        func_0x000109243bf8(puVar8);
      }
      goto LAB_109fe97f8;
    }
    puVar8 = &UNK_10f63070f;
  }
  else {
    puVar8 = &UNK_10f6306f9;
  }
  func_0x000109243bf8(puVar8);
LAB_109fe97f8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109fe97fc);
  (*pcVar7)();
}



/* Entry: 109fe9948; end: 109fe9a8b;  */

void FUN_109fe9948(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar5 = *(long *)(param_2 + 0x58) * 0x14;
    piVar6 = (int *)(*(long *)(param_2 + 0x50) + 4);
    do {
      puVar3 = PTR__OBJC_CLASS___MTLArgumentDescriptor_1126de050;
      _objc_opt_new(PTR__OBJC_CLASS___MTLArgumentDescriptor_1126de050);
      if (7 < *piVar6 - 1U) {
        func_0x000109243bf8(&UNK_10f6302d9);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109fe9a60);
        (*pcVar1)();
      }
      func_0x00010c189920(puVar3);
      func_0x00010c1abfe0(puVar3);
      func_0x00010c160da0(puVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
      piVar6 = piVar6 + 5;
      lVar5 = lVar5 + -0x14;
    } while (lVar5 != 0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x8d8);
  func_0x00010c0d84a0(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109fe9a8c; end: 109fe9aef;  */

long * FUN_109fe9a8c(int param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      plVar2 = (long *)0x2;
      if ((int)param_2 != 1) {
        plVar2 = (long *)0x4;
      }
      return plVar2;
    }
    if (param_1 == 1) {
      return (long *)0x7;
    }
  }
  else {
    if (param_1 == 2) {
      return (long *)0x3;
    }
    if (param_1 == 3) {
      return (long *)0x5;
    }
  }
  plVar2 = (long *)&UNK_10f6303d2;
  func_0x000109243bf8();
  lVar11 = plVar2[1] - *plVar2;
  uVar9 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar10 = lVar6 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    plStack_48 = plVar2;
    if (uVar10 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      func_0x00010923f1a0();
    }
    plStack_60 = (long *)((long)plVar3 + lVar11);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    plStack_60[2] = param_2[2];
    plStack_60[1] = uVar12;
    *plStack_60 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar7 = param_2[3];
    plStack_60[4] = param_2[4];
    plStack_60[3] = uVar7;
    plVar1 = plStack_60 + 5;
    lVar11 = (long)plStack_60 + (*plVar2 - plVar2[1]);
    plStack_68 = plVar3;
    plStack_58 = plVar1;
    plStack_50 = plVar3 + uVar10 * 5;
    func_0x00010923f1e4(plVar2,*plVar2,plVar2[1],lVar11);
    plStack_68 = (long *)*plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)plVar1;
    plStack_50 = (long *)plVar2[2];
    plVar2[2] = (long)(plVar3 + uVar10 * 5);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    func_0x00010923f314(&plStack_68);
    return plVar1;
  }
  func_0x00010923f18c();
  func_0x00010923f314(&plStack_68);
  __Unwind_Resume();
  lVar11 = plVar2[1] - *plVar2;
  uVar9 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar10 = lVar6 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    plStack_a8 = plVar2;
    if (uVar10 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      func_0x000107c2abb0();
    }
    plStack_c0 = (long *)((long)plVar3 + lVar11);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    plStack_c0[2] = param_2[2];
    plStack_c0[1] = uVar12;
    *plStack_c0 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar7 = param_2[3];
    *(undefined4 *)(plStack_c0 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_c0[3] = uVar7;
    plVar1 = plStack_c0 + 5;
    lVar11 = (long)plStack_c0 + (*plVar2 - plVar2[1]);
    plStack_c8 = plVar3;
    plStack_b8 = plVar1;
    plStack_b0 = plVar3 + uVar10 * 5;
    func_0x000107c2abb4(plVar2,*plVar2,plVar2[1],lVar11);
    plStack_c8 = (long *)*plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)plVar1;
    plStack_b0 = (long *)plVar2[2];
    plVar2[2] = (long)(plVar3 + uVar10 * 5);
    plStack_c0 = plStack_c8;
    plStack_b8 = plStack_c8;
    func_0x000107c2abbc(&plStack_c8);
    return plVar1;
  }
  func_0x00010923bc7c();
  func_0x000107c2abbc(&plStack_c8);
  __Unwind_Resume();
  lVar11 = plVar2[1] - *plVar2;
  uVar9 = (lVar11 >> 6) + 1;
  if (uVar9 >> 0x3a == 0) {
    uVar4 = plVar2[2] - *plVar2;
    uVar10 = (long)uVar4 >> 5;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar10 = 0x3ffffffffffffff;
    }
    plStack_108 = plVar2;
    if (uVar10 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      func_0x00010923f07c();
    }
    plStack_120 = (long *)((long)plVar3 + lVar11);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    plStack_120[2] = param_2[2];
    plStack_120[1] = uVar12;
    *plStack_120 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar7 = param_2[3];
    plStack_120[4] = param_2[4];
    plStack_120[3] = uVar7;
    plStack_120[6] = 0;
    plStack_120[7] = 0;
    plStack_120[5] = 0;
    uVar7 = param_2[5];
    plStack_120[6] = param_2[6];
    plStack_120[5] = uVar7;
    plStack_120[7] = param_2[7];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    plVar1 = plStack_120 + 8;
    lVar11 = (long)plStack_120 + (*plVar2 - plVar2[1]);
    plStack_128 = plVar3;
    plStack_118 = plVar1;
    plStack_110 = plVar3 + uVar10 * 8;
    func_0x00010923f0b0(plVar2,*plVar2,plVar2[1],lVar11);
    plStack_128 = (long *)*plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)plVar1;
    plStack_110 = (long *)plVar2[2];
    plVar2[2] = (long)(plVar3 + uVar10 * 8);
    plStack_120 = plStack_128;
    plStack_118 = plStack_128;
    func_0x00010923f140(&plStack_128);
    return plVar1;
  }
  func_0x00010923f068();
  func_0x00010923f140(&plStack_128);
  __Unwind_Resume();
  lVar11 = plVar2[1] - *plVar2;
  uVar9 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar10 = lVar6 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    plStack_168 = plVar2;
    if (uVar10 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      func_0x000107c2abc4();
    }
    plStack_180 = (long *)((long)plVar3 + lVar11);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    plStack_180[2] = param_2[2];
    plStack_180[1] = uVar12;
    *plStack_180 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar7 = param_2[3];
    *(undefined4 *)(plStack_180 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_180[3] = uVar7;
    plVar1 = plStack_180 + 5;
    lVar11 = (long)plStack_180 + (*plVar2 - plVar2[1]);
    plStack_188 = plVar3;
    plStack_178 = plVar1;
    plStack_170 = plVar3 + uVar10 * 5;
    func_0x000107c2abc8(plVar2,*plVar2,plVar2[1],lVar11);
    plStack_188 = (long *)*plVar2;
    *plVar2 = lVar11;
    plVar2[1] = (long)plVar1;
    plStack_170 = (long *)plVar2[2];
    plVar2[2] = (long)(plVar3 + uVar10 * 5);
    plStack_180 = plStack_188;
    plStack_178 = plStack_188;
    func_0x000107c2abd0(&plStack_188);
    return plVar1;
  }
  func_0x00010923bd1c();
  func_0x000107c2abd0(&plStack_188);
  __Unwind_Resume();
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fea048(plVar2);
    puVar5 = (undefined8 *)plVar2[1];
    puVar8 = puVar5 + (long)param_2 * 5;
    do {
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 4) = 0x3f800000;
      puVar5 = puVar5 + 5;
    } while (puVar5 != puVar8);
    plVar2[1] = (long)puVar8;
  }
  return plVar2;
}



/* Entry: 109fe9af0; end: 109fe9c1f;  */

long * FUN_109fe9af0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar8 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010923f1a0();
    }
    plStack_50 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar11;
    *plStack_50 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    plStack_50[4] = param_2[4];
    plStack_50[3] = uVar6;
    plVar1 = plStack_50 + 5;
    lVar10 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar9 * 5;
    func_0x00010923f1e4(param_1,*param_1,param_1[1],lVar10);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010923f314(&plStack_58);
    return plVar1;
  }
  func_0x00010923f18c();
  func_0x00010923f314(&plStack_58);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar8 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_98 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abb0();
    }
    plStack_b0 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_b0[2] = param_2[2];
    plStack_b0[1] = uVar11;
    *plStack_b0 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(plStack_b0 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_b0[3] = uVar6;
    plVar1 = plStack_b0 + 5;
    lVar10 = (long)plStack_b0 + (*param_1 - param_1[1]);
    plStack_b8 = plVar2;
    plStack_a8 = plVar1;
    plStack_a0 = plVar2 + uVar9 * 5;
    func_0x000107c2abb4(param_1,*param_1,param_1[1],lVar10);
    plStack_b8 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 5);
    plStack_b0 = plStack_b8;
    plStack_a8 = plStack_b8;
    func_0x000107c2abbc(&plStack_b8);
    return plVar1;
  }
  func_0x00010923bc7c();
  func_0x000107c2abbc(&plStack_b8);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 6) + 1;
  if (uVar8 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar9 = (long)uVar3 >> 5;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar9 = 0x3ffffffffffffff;
    }
    plStack_f8 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010923f07c();
    }
    plStack_110 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_110[2] = param_2[2];
    plStack_110[1] = uVar11;
    *plStack_110 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    plStack_110[4] = param_2[4];
    plStack_110[3] = uVar6;
    plStack_110[6] = 0;
    plStack_110[7] = 0;
    plStack_110[5] = 0;
    uVar6 = param_2[5];
    plStack_110[6] = param_2[6];
    plStack_110[5] = uVar6;
    plStack_110[7] = param_2[7];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    plVar1 = plStack_110 + 8;
    lVar10 = (long)plStack_110 + (*param_1 - param_1[1]);
    plStack_118 = plVar2;
    plStack_108 = plVar1;
    plStack_100 = plVar2 + uVar9 * 8;
    func_0x00010923f0b0(param_1,*param_1,param_1[1],lVar10);
    plStack_118 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_100 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 8);
    plStack_110 = plStack_118;
    plStack_108 = plStack_118;
    func_0x00010923f140(&plStack_118);
    return plVar1;
  }
  func_0x00010923f068();
  func_0x00010923f140(&plStack_118);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar8 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_158 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abc4();
    }
    plStack_170 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_170[2] = param_2[2];
    plStack_170[1] = uVar11;
    *plStack_170 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(plStack_170 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_170[3] = uVar6;
    plVar1 = plStack_170 + 5;
    lVar10 = (long)plStack_170 + (*param_1 - param_1[1]);
    plStack_178 = plVar2;
    plStack_168 = plVar1;
    plStack_160 = plVar2 + uVar9 * 5;
    func_0x000107c2abc8(param_1,*param_1,param_1[1],lVar10);
    plStack_178 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_160 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 5);
    plStack_170 = plStack_178;
    plStack_168 = plStack_178;
    func_0x000107c2abd0(&plStack_178);
    return plVar1;
  }
  func_0x00010923bd1c();
  func_0x000107c2abd0(&plStack_178);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fea048(param_1);
    puVar4 = (undefined8 *)param_1[1];
    puVar7 = puVar4 + (long)param_2 * 5;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 4) = 0x3f800000;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    param_1[1] = (long)puVar7;
  }
  return param_1;
}



/* Entry: 109fe9c20; end: 109fe9d57;  */

long * FUN_109fe9c20(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar8 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abb0();
    }
    plStack_50 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar11;
    *plStack_50 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(plStack_50 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_50[3] = uVar6;
    plVar1 = plStack_50 + 5;
    lVar10 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar9 * 5;
    func_0x000107c2abb4(param_1,*param_1,param_1[1],lVar10);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000107c2abbc(&plStack_58);
    return plVar1;
  }
  func_0x00010923bc7c();
  func_0x000107c2abbc(&plStack_58);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 6) + 1;
  if (uVar8 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar9 = (long)uVar3 >> 5;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar9 = 0x3ffffffffffffff;
    }
    plStack_98 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010923f07c();
    }
    plStack_b0 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_b0[2] = param_2[2];
    plStack_b0[1] = uVar11;
    *plStack_b0 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    plStack_b0[4] = param_2[4];
    plStack_b0[3] = uVar6;
    plStack_b0[6] = 0;
    plStack_b0[7] = 0;
    plStack_b0[5] = 0;
    uVar6 = param_2[5];
    plStack_b0[6] = param_2[6];
    plStack_b0[5] = uVar6;
    plStack_b0[7] = param_2[7];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    plVar1 = plStack_b0 + 8;
    lVar10 = (long)plStack_b0 + (*param_1 - param_1[1]);
    plStack_b8 = plVar2;
    plStack_a8 = plVar1;
    plStack_a0 = plVar2 + uVar9 * 8;
    func_0x00010923f0b0(param_1,*param_1,param_1[1],lVar10);
    plStack_b8 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 8);
    plStack_b0 = plStack_b8;
    plStack_a8 = plStack_b8;
    func_0x00010923f140(&plStack_b8);
    return plVar1;
  }
  func_0x00010923f068();
  func_0x00010923f140(&plStack_b8);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar8 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar5 * -0x6666666666666666;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar9 = 0x666666666666666;
    }
    plStack_f8 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abc4();
    }
    plStack_110 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_110[2] = param_2[2];
    plStack_110[1] = uVar11;
    *plStack_110 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(plStack_110 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_110[3] = uVar6;
    plVar1 = plStack_110 + 5;
    lVar10 = (long)plStack_110 + (*param_1 - param_1[1]);
    plStack_118 = plVar2;
    plStack_108 = plVar1;
    plStack_100 = plVar2 + uVar9 * 5;
    func_0x000107c2abc8(param_1,*param_1,param_1[1],lVar10);
    plStack_118 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_100 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 5);
    plStack_110 = plStack_118;
    plStack_108 = plStack_118;
    func_0x000107c2abd0(&plStack_118);
    return plVar1;
  }
  func_0x00010923bd1c();
  func_0x000107c2abd0(&plStack_118);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fea048(param_1);
    puVar4 = (undefined8 *)param_1[1];
    puVar7 = puVar4 + (long)param_2 * 5;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 4) = 0x3f800000;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    param_1[1] = (long)puVar7;
  }
  return param_1;
}



/* Entry: 109fe9d58; end: 109fe9e87;  */

long * FUN_109fe9d58(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar9 = (lVar10 >> 6) + 1;
  if (uVar9 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar8 = (long)uVar3 >> 5;
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar8 = 0x3ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010923f07c();
    }
    plStack_50 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar11;
    *plStack_50 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    plStack_50[4] = param_2[4];
    plStack_50[3] = uVar6;
    plStack_50[6] = 0;
    plStack_50[7] = 0;
    plStack_50[5] = 0;
    uVar6 = param_2[5];
    plStack_50[6] = param_2[6];
    plStack_50[5] = uVar6;
    plStack_50[7] = param_2[7];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    plVar1 = plStack_50 + 8;
    lVar10 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar8 * 8;
    func_0x00010923f0b0(param_1,*param_1,param_1[1],lVar10);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 8);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010923f140(&plStack_58);
    return plVar1;
  }
  func_0x00010923f068();
  func_0x00010923f140(&plStack_58);
  __Unwind_Resume();
  lVar10 = param_1[1] - *param_1;
  uVar9 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
      uVar8 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_98 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abc4();
    }
    plStack_b0 = (long *)((long)plVar2 + lVar10);
    uVar11 = param_2[1];
    uVar6 = *param_2;
    plStack_b0[2] = param_2[2];
    plStack_b0[1] = uVar11;
    *plStack_b0 = uVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar6 = param_2[3];
    *(undefined4 *)(plStack_b0 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_b0[3] = uVar6;
    plVar1 = plStack_b0 + 5;
    lVar10 = (long)plStack_b0 + (*param_1 - param_1[1]);
    plStack_b8 = plVar2;
    plStack_a8 = plVar1;
    plStack_a0 = plVar2 + uVar8 * 5;
    func_0x000107c2abc8(param_1,*param_1,param_1[1],lVar10);
    plStack_b8 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)plVar1;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 5);
    plStack_b0 = plStack_b8;
    plStack_a8 = plStack_b8;
    func_0x000107c2abd0(&plStack_b8);
    return plVar1;
  }
  func_0x00010923bd1c();
  func_0x000107c2abd0(&plStack_b8);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fea048(param_1);
    puVar4 = (undefined8 *)param_1[1];
    puVar7 = puVar4 + (long)param_2 * 5;
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 4) = 0x3f800000;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    param_1[1] = (long)puVar7;
  }
  return param_1;
}



/* Entry: 109fe9e88; end: 109fe9fbf;  */

long * FUN_109fe9e88(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar7 = (lVar9 >> 3) * -0x3333333333333333 + 1;
  if (uVar7 < 0x666666666666667) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar4 * -0x6666666666666666;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x000107c2abc4();
    }
    plStack_50 = (long *)((long)plVar2 + lVar9);
    uVar10 = param_2[1];
    uVar5 = *param_2;
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar10;
    *plStack_50 = uVar5;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar5 = param_2[3];
    *(undefined4 *)(plStack_50 + 4) = *(undefined4 *)(param_2 + 4);
    plStack_50[3] = uVar5;
    plVar1 = plStack_50 + 5;
    lVar9 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar8 * 5;
    func_0x000107c2abc8(param_1,*param_1,param_1[1],lVar9);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000107c2abd0(&plStack_58);
    return plVar1;
  }
  func_0x00010923bd1c();
  func_0x000107c2abd0(&plStack_58);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_109fea048(param_1);
    puVar3 = (undefined8 *)param_1[1];
    puVar6 = puVar3 + (long)param_2 * 5;
    do {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = 0x3f800000;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar6);
    param_1[1] = (long)puVar6;
  }
  return param_1;
}



/* Entry: 109fe9fc0; end: 109fea047;  */

undefined8 * FUN_109fe9fc0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109fea048(param_1);
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = puVar1 + param_2 * 5;
    do {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
      puVar1 = puVar1 + 5;
    } while (puVar1 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 109fea048; end: 109fea08f;  */

void FUN_109fea048(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_109fea0a4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    return;
  }
  FUN_109fea090();
  plVar1 = (long *)&UNK_10f630400;
  func_0x000104c4f6cc();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010726f2e4();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109fea090; end: 109fea0a3;  */

void FUN_109fea090(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f630400;
  func_0x000104c4f6cc();
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010726f2e4();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109fea0a4; end: 109fea0e7;  */

void FUN_109fea0a4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010726f2e4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109fea0e8; end: 109fea157;  */

void FUN_109fea0e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010726f2e4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109fea158; end: 109fea2c7;  */

void FUN_109fea158(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf0a080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_109fe5184(auStack_78);
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  puVar5 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar5,0,puVar2,uVar1);
  uStack_58 = puVar5[1];
  uStack_60 = *puVar5;
  lStack_50 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar6 = param_3;
  func_0x00010c0e1c40(param_3);
  FUN_109fea414(&uStack_60,param_2 + (int)uVar6,uVar3,param_4);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 109fea2c8; end: 109fea413;  */

void FUN_109fea2c8(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_109fe5184(auStack_78);
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  puVar4 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar4,0,puVar2,uVar1);
  uStack_58 = puVar4[1];
  uStack_60 = *puVar4;
  lStack_50 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0e1c40(param_3);
  uVar5 = param_3;
  func_0x00010bf64880(param_3);
  FUN_109fea954(&uStack_60,param_2 + (int)uVar3,uVar5,param_4);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109fea414; end: 109fea793;  */

void FUN_109fea414(long *param_1,int param_2,ulong param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long alStack_e8 [2];
  char cStack_d1;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010bf8d280();
  if (uVar7 != 1) {
    uStack_70 = 0;
    uStack_88 = 0;
    ppuStack_90 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppuStack_90,param_1);
    uStack_78 = CONCAT44(uStack_78._4_4_,param_2);
    uVar7 = param_3;
    func_0x00010bf8d280();
    uVar3 = (undefined4)uVar7;
    FUN_109fea9f4();
    uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
    uVar7 = param_3;
    func_0x00010bf8d280();
    uVar3 = (undefined4)uVar7;
    func_0x000109feaa88();
    uVar7 = param_3;
    uStack_70._4_4_ = uVar3;
    func_0x00010bf0a040();
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uVar7);
    func_0x00010923dc88(param_4,&ppuStack_90);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  for (uVar7 = 0; uVar4 = param_3, func_0x00010bf0a040(), uVar7 < uVar4; uVar7 = uVar7 + 1) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_90,*param_1,param_1[1]);
    }
    else {
      uStack_88 = param_1[1];
      ppuStack_90 = (undefined8 **)*param_1;
      uStack_80 = param_1[2];
    }
    __ZNSt3__19to_stringEm(alStack_e8,uVar7);
    plVar5 = alStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar5,0,&DAT_10f62a9e8,1);
    lStack_c8 = plVar5[1];
    lStack_d0 = *plVar5;
    lStack_c0 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    plVar5 = &lStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar5,&DAT_10f62a9ea,1);
    uStack_a8 = plVar5[1];
    ppuStack_b0 = (undefined8 **)*plVar5;
    uStack_a0 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    uVar4 = uStack_a8;
    pppuVar1 = (undefined8 ***)ppuStack_b0;
    if (-1 < (long)uStack_a0) {
      uVar4 = uStack_a0 >> 0x38;
      pppuVar1 = &ppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppuStack_90,pppuVar1,uVar4);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(ppuStack_b0);
    }
    if (lStack_c0 < 0) {
      __ZdlPv(lStack_d0);
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(alStack_e8[0]);
    }
    uVar4 = param_3;
    func_0x00010bf8d280();
    if (uVar4 == 1) {
      uVar4 = uStack_88;
      if (-1 < (long)uStack_80) {
        uVar4 = uStack_80 >> 0x38;
      }
      func_0x000104c4f768(&ppuStack_b0,uVar4 + 1,&lStack_d0);
      pppuVar1 = (undefined8 ***)ppuStack_b0;
      if (-1 < (long)uStack_a0) {
        pppuVar1 = &ppuStack_b0;
      }
      if (uVar4 != 0) {
        pppuVar2 = (undefined8 ***)ppuStack_90;
        if (-1 < (long)uStack_80) {
          pppuVar2 = &ppuStack_90;
        }
        _memmove(pppuVar1,pppuVar2,uVar4);
      }
      *(undefined2 *)((long)pppuVar1 + uVar4) = 0x2e;
      uVar4 = param_3;
      func_0x00010c25cbe0(param_3);
      uVar6 = param_3;
      func_0x00010bf8d240(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_109fea794(&ppuStack_b0,param_2 + (int)uVar4 * (int)uVar7,uVar6,param_4);
      _objc_release(uVar6);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010c25cbe0(param_3);
      uVar6 = param_3;
      func_0x00010bf8d280(param_3);
      FUN_109fea954(&ppuStack_90,param_2 + (int)uVar4 * (int)uVar7,uVar6,param_4);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109fea794; end: 109fea953;  */

void FUN_109fea794(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar6 = param_2;
  func_0x00010c0c7900();
  uVar5 = (undefined4)uVar6;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = (uint)&uStack_130;
  puVar7 = auStack_e8;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_150,*param_1,param_1[1]);
        }
        else {
          uStack_148 = param_1[1];
          uStack_150 = *param_1;
          lStack_140 = param_1[2];
        }
        lVar4 = lVar8;
        func_0x00010bf64880();
        if (lVar4 == 2) {
          uVar6 = param_2;
          FUN_109fea158(param_1,param_2,lVar8,param_4);
          uVar5 = (undefined4)uVar6;
        }
        else {
          uVar6 = param_2;
          FUN_109fea2c8(param_1,param_2,lVar8,param_4);
          uVar5 = (undefined4)uVar6;
        }
        if (lStack_140 < 0) {
          __ZdlPv(uStack_150);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      uVar2 = (uint)&uStack_130;
      puVar7 = auStack_e8;
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  lVar9 = lVar3;
  __Unwind_Resume(lVar3);
  pcStack_158 = FUN_109fea954;
  lStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  lStack_1a0 = 0;
  puStack_180 = param_1;
  uStack_178 = param_2;
  lStack_170 = lVar3;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_1b0,lVar9);
  uStack_198 = CONCAT44(uStack_198._4_4_,uVar5);
  uVar1 = uVar2;
  FUN_109fea9f4();
  uStack_198 = CONCAT44(uVar1,(undefined4)uStack_198);
  func_0x000109feaa88();
  lStack_190 = (ulong)uVar2 << 0x20;
  func_0x00010923dc88(puVar7,&uStack_1b0);
  if (lStack_1a0 < 0) {
    __ZdlPv(uStack_1b0);
  }
  return;
}



/* Entry: 109fea954; end: 109fea9f3;  */

void FUN_109fea954(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  lStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_60,param_1);
  uStack_48 = CONCAT44(uStack_48._4_4_,param_2);
  uVar1 = param_3;
  FUN_109fea9f4();
  uStack_48 = CONCAT44(uVar1,(undefined4)uStack_48);
  func_0x000109feaa88();
  lStack_40 = (ulong)param_3 << 0x20;
  func_0x00010923dc88(param_4,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 109fea9f4; end: 109feab87;  */

long FUN_109fea9f4(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 < 0x35) {
    switch(param_1) {
    case 3:
    case 0x1d:
    case 0x21:
      return 4;
    case 4:
    case 0x1e:
    case 0x22:
      return 8;
    case 5:
    case 6:
    case 7:
    case 0x1f:
    case 0x20:
    case 0x23:
    case 0x24:
      return 0x10;
    case 0xb:
    case 0xc:
      return 0x30;
    case 0xe:
    case 0xf:
      return 0x40;
    }
  }
  else {
    if (param_1 - 0x37U < 2) {
      return 4;
    }
    if (param_1 == 0x35) {
      return 1;
    }
    if (param_1 == 0x36) {
      return 2;
    }
  }
  puVar7 = &UNK_10f63046c;
  func_0x000109243bf8();
  if ((long)puVar7 < 0x35) {
    switch(puVar7) {
    case (undefined *)0x3:
      return 0xd;
    case (undefined *)0x4:
      return 0xe;
    case (undefined *)0x5:
      return 0xf;
    case (undefined *)0x6:
      return 0x10;
    case (undefined *)0x7:
      return 0x11;
    case (undefined *)0xb:
      return 0x12;
    case (undefined *)0xf:
      return 0x13;
    case (undefined *)0x1d:
      return 5;
    case (undefined *)0x1e:
      return 6;
    case (undefined *)0x1f:
      return 7;
    case (undefined *)0x20:
      return 8;
    case (undefined *)0x21:
      return 9;
    case (undefined *)0x22:
      return 10;
    case (undefined *)0x23:
      return 0xb;
    case (undefined *)0x24:
      return 0xc;
    }
  }
  else if ((long)puVar7 < 0x37) {
    if (puVar7 == (undefined *)0x35) {
      return 1;
    }
    if (puVar7 == (undefined *)0x36) {
      return 2;
    }
  }
  else {
    if (puVar7 == (undefined *)0x37) {
      return 3;
    }
    if (puVar7 == (undefined *)0x38) {
      return 4;
    }
  }
  puVar8 = (undefined8 *)&UNK_10f630494;
  func_0x000109243bf8();
  bVar5 = *(byte *)((long)puVar8 + 0x17);
  uVar1 = puVar8[1];
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  if (uVar1 == uVar2) {
    puVar9 = (undefined8 *)*puVar8;
    if (-1 < (char)bVar5) {
      puVar9 = puVar8;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar6) {
      plVar3 = param_2;
    }
    _memcmp(puVar9,plVar3);
    if (((((int)puVar9 == 0) && (*(int *)(puVar8 + 3) == (int)param_2[3])) &&
        (*(int *)((long)puVar8 + 0x1c) == *(int *)((long)param_2 + 0x1c))) &&
       (*(int *)(puVar8 + 4) == (int)param_2[4])) {
      lVar12 = puVar8[5];
      lVar4 = puVar8[6];
      lVar11 = param_2[5];
      if (lVar4 - lVar12 == param_2[6] - lVar11) {
        if (lVar12 == lVar4) {
          return 1;
        }
        do {
          lVar10 = lVar12;
          FUN_109feac88(lVar12,lVar11);
          if ((int)lVar10 == 0) {
            return lVar10;
          }
          lVar12 = lVar12 + 0x28;
          lVar11 = lVar11 + 0x28;
        } while (lVar12 != lVar4);
        return lVar10;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 109feab88; end: 109feac87;  */

long FUN_109feab88(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar5) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar6) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if (((((int)plVar7 == 0) && ((int)param_1[3] == (int)param_2[3])) &&
        (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))) &&
       ((int)param_1[4] == (int)param_2[4])) {
      lVar10 = param_1[5];
      lVar4 = param_1[6];
      lVar9 = param_2[5];
      if (lVar4 - lVar10 == param_2[6] - lVar9) {
        if (lVar10 == lVar4) {
          return 1;
        }
        do {
          lVar8 = lVar10;
          FUN_109feac88(lVar10,lVar9);
          if ((int)lVar8 == 0) {
            return lVar8;
          }
          lVar10 = lVar10 + 0x28;
          lVar9 = lVar9 + 0x28;
        } while (lVar10 != lVar4);
        return lVar8;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 109feac88; end: 109fead47;  */

bool FUN_109feac88(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if (((((int)plVar7 == 0) && ((int)param_1[3] == (int)param_2[3])) &&
        ((int)param_1[4] == (int)param_2[4])) &&
       (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))) {
      bVar6 = *(int *)((long)param_1 + 0x24) == *(int *)((long)param_2 + 0x24);
    }
    else {
      bVar6 = false;
    }
    return bVar6;
  }
  return false;
}



/* Entry: 109fead48; end: 109feae53;  */

ulong FUN_109fead48(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar7 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar7 == uVar2) {
    plVar5 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar5 = param_1;
    }
    plVar1 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar1 = param_2;
    }
    _memcmp(plVar5,plVar1);
    if (((((int)plVar5 == 0) && ((int)param_1[3] == (int)param_2[3])) &&
        (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))) &&
       (*(int *)((long)param_1 + 0x24) == *(int *)((long)param_2 + 0x24))) {
      uVar7 = param_1[5];
      uVar2 = param_1[6];
      lVar8 = param_2[5];
      if (uVar2 - uVar7 == param_2[6] - lVar8) {
        while( true ) {
          if (uVar7 == uVar2) {
            return (ulong)((int)param_1[4] == (int)param_2[4]);
          }
          uVar6 = uVar7;
          FUN_109feac88(uVar7,lVar8);
          if ((int)uVar6 == 0) break;
          uVar7 = uVar7 + 0x28;
          lVar8 = lVar8 + 0x28;
        }
        return uVar6;
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 109feae54; end: 109feb063;  */

bool FUN_109feae54(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if ((((int)plVar7 == 0) && ((int)param_1[3] == (int)param_2[3])) &&
       (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))) {
      bVar6 = (int)param_1[4] == (int)param_2[4];
    }
    else {
      bVar6 = false;
    }
    return bVar6;
  }
  return false;
}



/* Entry: 109feb064; end: 109feb0b3;  */

/* WARNING: Removing unreachable block (ram,0x000109feb160) */

ulong FUN_109feb064(uint param_1,long param_2,ulong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long **pplVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 auStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  if (param_1 < 0xf) {
    return *(ulong *)(&UNK_10e482780 + (ulong)param_1 * 8);
  }
  puVar9 = &UNK_10f55ebe8;
  func_0x000109243bf8();
  if ((uint)puVar9 < 5) {
    return (ulong)puVar9 & 0xffffffff;
  }
  puVar10 = (undefined4 *)&UNK_10f55ebd0;
  func_0x000109243bf8();
  uVar13 = *param_3;
  iVar6 = *(int *)(param_2 + uVar13);
  *param_3 = uVar13 + 4;
  __ZNSt3__19to_stringEj(auStack_98,iVar6);
  puVar11 = auStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar11,0,&UNK_10f630722,0x16);
  lStack_1f8 = puVar11[1];
  plStack_200 = (long *)*puVar11;
  uStack_1f0 = puVar11[2];
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  lStack_78 = (long)uStack_1f0._7_1_;
  if (lStack_78 < 0) {
    plStack_80 = plStack_200;
    lStack_78 = lStack_1f8;
    pplVar7 = (long **)plStack_80;
    if (iVar6 == 2) {
      __ZdlPv();
      goto LAB_109feb158;
    }
  }
  else {
    plStack_80 = (long *)&plStack_200;
    pplVar7 = &plStack_200;
    if (iVar6 == 2) {
LAB_109feb158:
      puVar1 = (undefined4 *)(param_2 + *param_3);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      uVar3 = puVar1[2];
      uVar5 = puVar1[3];
      *param_3 = *param_3 + 0x10;
      func_0x000109a8261c(&plStack_200,uVar2,uVar4,uVar3);
      *puVar10 = 0x42ff0000;
      *(undefined8 *)(puVar10 + 0xe) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      *(undefined8 *)(puVar10 + 0xb) = 0;
      *(undefined8 *)(puVar10 + 9) = 0;
      *(undefined8 *)(puVar10 + 7) = 0;
      *(undefined8 *)(puVar10 + 5) = 0;
      *(undefined8 *)(puVar10 + 3) = 0;
      *(undefined8 *)(puVar10 + 1) = 0;
      *(undefined8 *)(puVar10 + 0x14) = 0;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 2;
      *(undefined4 **)(puVar10 + 0x12) = puVar10 + 0x14;
      *(undefined8 *)(puVar10 + 0x16) = 0;
      (**(code **)(*plStack_200 + 0x18))(plStack_200,&plStack_200,puVar10,0xffffffff);
      func_0x00010918eb6c(&plStack_200);
      uVar12 = *(ulong *)(puVar10 + 4);
      _memcpy(uVar12,param_2 + *param_3,(ulong)uVar5);
      *param_3 = ((ulong)uVar5 + ~uVar13 + *param_3 & 0xfffffffffffffffc) + uVar13 + 4;
      return uVar12;
    }
  }
  plStack_80 = (long *)pplVar7;
  FUN_10a0edfc4(&plStack_80);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109feb234);
  (*pcVar8)();
}



/* Entry: 109feb0b4; end: 109feb27f;  */

/* WARNING: Removing unreachable block (ram,0x000109feb160) */

void FUN_109feb0b4(undefined4 *param_1,long param_2,ulong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long **pplVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 auStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  uVar10 = *param_3;
  iVar6 = *(int *)(param_2 + uVar10);
  *param_3 = uVar10 + 4;
  __ZNSt3__19to_stringEj(auStack_78,iVar6);
  puVar9 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar9,0,&UNK_10f630722,0x16);
  lStack_1d8 = puVar9[1];
  plStack_1e0 = (long *)*puVar9;
  uStack_1d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  lStack_58 = (long)uStack_1d0._7_1_;
  if (lStack_58 < 0) {
    plStack_60 = plStack_1e0;
    lStack_58 = lStack_1d8;
    pplVar7 = (long **)plStack_60;
    if (iVar6 == 2) {
      __ZdlPv();
      goto LAB_109feb158;
    }
  }
  else {
    plStack_60 = (long *)&plStack_1e0;
    pplVar7 = &plStack_1e0;
    if (iVar6 == 2) {
LAB_109feb158:
      puVar1 = (undefined4 *)(param_2 + *param_3);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      uVar3 = puVar1[2];
      uVar5 = puVar1[3];
      *param_3 = *param_3 + 0x10;
      func_0x000109a8261c(&plStack_1e0,uVar2,uVar4,uVar3);
      *param_1 = 0x42ff0000;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0xb) = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      *(undefined8 *)(param_1 + 7) = 0;
      *(undefined8 *)(param_1 + 5) = 0;
      *(undefined8 *)(param_1 + 3) = 0;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
      *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
      *(undefined8 *)(param_1 + 0x16) = 0;
      (**(code **)(*plStack_1e0 + 0x18))(plStack_1e0,&plStack_1e0,param_1,0xffffffff);
      func_0x00010918eb6c(&plStack_1e0);
      _memcpy(*(undefined8 *)(param_1 + 4),param_2 + *param_3,(ulong)uVar5);
      *param_3 = ((ulong)uVar5 + ~uVar10 + *param_3 & 0xfffffffffffffffc) + uVar10 + 4;
      return;
    }
  }
  plStack_60 = (long *)pplVar7;
  FUN_10a0edfc4(&plStack_60);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109feb234);
  (*pcVar8)();
}



/* Entry: 109feb280; end: 109feb2db;  */

void FUN_109feb280(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (param_3,0,param_2,uVar1);
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 109feb2dc; end: 109feb737;  */

void FUN_109feb2dc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong auStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar8 < 0) {
    piVar7 = *(int **)param_2;
    if (*piVar7 == 1) {
      uVar8 = *(ulong *)(param_2 + 2);
      param_2 = piVar7;
      goto LAB_109feb340;
    }
LAB_109feb398:
    auStack_88[0] = 0;
    FUN_109feb0b4(param_1,piVar7,auStack_88);
    uVar8 = *(ulong *)(param_2 + 2);
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar8 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    uStack_60 = (undefined8 *)&UNK_10f630739;
    uStack_58 = 0x1d;
    if (auStack_88[0] != uVar8) {
      FUN_10a0edfc4(&uStack_60);
      goto LAB_109feb6ac;
    }
LAB_109feb658:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    piVar7 = param_2;
    if (*param_2 != 1) goto LAB_109feb398;
LAB_109feb340:
    __ZNSt3__19to_stringEm(auStack_88,uVar8);
    puVar5 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar5,0,&UNK_10f6307c3,0x12);
    uStack_58 = puVar5[1];
    uStack_60 = (undefined8 *)*puVar5;
    uStack_50 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uStack_68 = (ulong)uStack_50._7_1_;
    if (-1 < (long)uStack_68) {
      puStack_70 = &uStack_60;
      if (uVar8 < 4) goto LAB_109feb68c;
LAB_109feb3fc:
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      iVar3 = *param_2;
      __ZNSt3__19to_stringEi(auStack_88,iVar3);
      puVar5 = auStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar5,0,&UNK_10f630b8d,0x1d);
      uStack_58 = puVar5[1];
      uStack_60 = (undefined8 *)*puVar5;
      uStack_50 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uStack_68 = (ulong)uStack_50._7_1_;
      if ((long)uStack_68 < 0) {
        puStack_70 = uStack_60;
        uStack_68 = uStack_58;
        if (iVar3 == 1) {
          __ZdlPv();
          goto LAB_109feb47c;
        }
LAB_109feb698:
        FUN_10a0edfc4(&puStack_70);
        goto LAB_109feb6ac;
      }
      puStack_70 = &uStack_60;
      if (iVar3 != 1) goto LAB_109feb698;
LAB_109feb47c:
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      iVar3 = param_2[1];
      if (iVar3 != 0) {
        iVar1 = param_2[2];
        uVar2 = param_2[3];
        *param_1 = 0x42ff0000;
        puVar9 = param_1 + 1;
        *(undefined8 *)(param_1 + 3) = 0;
        puVar9[0] = 0;
        puVar9[1] = 0;
        *(undefined8 *)(param_1 + 7) = 0;
        *(undefined8 *)(param_1 + 5) = 0;
        *(undefined8 *)(param_1 + 0xb) = 0;
        *(undefined8 *)(param_1 + 9) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
        *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
        *(undefined8 *)(param_1 + 0x16) = 0;
        uStack_60 = (undefined8 *)CONCAT44(iVar1,iVar3);
        func_0x000109a83fd0(param_1,2,&uStack_60,uVar2 & 0xfff);
        uVar2 = *puVar9;
        uVar6 = (ulong)uVar2;
        if ((int)uVar2 < 1) {
          lVar10 = 0;
LAB_109feb574:
          lVar11 = (long)(int)param_1[3] * (long)(int)param_1[2];
        }
        else {
          lVar10 = *(long *)(*(long *)(param_1 + 0x12) + uVar6 * 8 + -8);
          if (uVar2 < 3) goto LAB_109feb574;
          lVar11 = 1;
          piVar7 = *(int **)(param_1 + 0x10);
          do {
            lVar11 = lVar11 * *piVar7;
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 1;
          } while (uVar6 != 0);
        }
        __ZNSt3__19to_stringEm(auStack_88,uVar8);
        puVar5 = auStack_88;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar5,0,&UNK_10f630bab,0xe);
        uVar6 = lVar11 * lVar10 + 0x10;
        uStack_58 = puVar5[1];
        uStack_60 = (undefined8 *)*puVar5;
        uStack_50 = puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uStack_68 = (ulong)uStack_50._7_1_;
        if ((long)uStack_68 < 0) {
          puStack_70 = uStack_60;
          uStack_68 = uStack_58;
          if (uVar6 == uVar8) {
            __ZdlPv();
            goto LAB_109feb5f0;
          }
        }
        else {
          puStack_70 = &uStack_60;
          if (uVar6 == uVar8) {
LAB_109feb5f0:
            if (cStack_71 < '\0') {
              __ZdlPv(auStack_88[0]);
            }
            uVar2 = param_1[1];
            uVar8 = (ulong)uVar2;
            if ((int)uVar2 < 1) {
              lVar10 = 0;
LAB_109feb644:
              lVar11 = (long)(int)param_1[3] * (long)(int)param_1[2];
            }
            else {
              lVar10 = *(long *)(*(long *)(param_1 + 0x12) + uVar8 * 8 + -8);
              if (uVar2 < 3) goto LAB_109feb644;
              lVar11 = 1;
              piVar7 = *(int **)(param_1 + 0x10);
              do {
                lVar11 = lVar11 * *piVar7;
                uVar8 = uVar8 - 1;
                piVar7 = piVar7 + 1;
              } while (uVar8 != 0);
            }
            _memcpy(*(undefined8 *)(param_1 + 4),param_2 + 4,lVar11 * lVar10);
            goto LAB_109feb658;
          }
        }
        FUN_10a0edfc4(&puStack_70);
        goto LAB_109feb6ac;
      }
      uVar2 = param_2[3];
      *param_1 = 0x42ff0000;
      *(undefined8 *)(param_1 + 3) = 0;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 7) = 0;
      *(undefined8 *)(param_1 + 5) = 0;
      *(undefined8 *)(param_1 + 0xb) = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
      *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
      *(undefined8 *)(param_1 + 0x16) = 0;
      uStack_60 = (undefined8 *)0x0;
      func_0x000109a83fd0(param_1,2,&uStack_60,uVar2 & 0xfff);
      goto LAB_109feb658;
    }
    puStack_70 = uStack_60;
    uStack_68 = uStack_58;
    if (3 < uVar8) {
      __ZdlPv();
      goto LAB_109feb3fc;
    }
  }
LAB_109feb68c:
  FUN_10a0edfc4(&puStack_70);
LAB_109feb6ac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109feb6b0);
  (*pcVar4)();
}



/* Entry: 109feb738; end: 109febc43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109feb738(long param_1,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  int iStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulong uStack_218;
  int *piStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  int *piStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  uint auStack_188 [2];
  undefined **appuStack_180 [2];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  FUN_109febc44(appuStack_180);
  auStack_188[1] = 2;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_170,auStack_188 + 1,4);
  auStack_188[0] = (uint)param_2[1];
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_170,auStack_188,4);
  uStack_18c = *(uint *)((long)param_2 + 0xc);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_170,&uStack_18c,4);
  uStack_190 = (uint)*param_2 & 0xfff;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_170,&uStack_190,4);
  uStack_1e8 = param_2[1];
  uStack_1f0 = *param_2;
  uStack_1d8 = param_2[3];
  uStack_1e0 = param_2[2];
  piVar11 = (int *)((ulong)&uStack_1f0 | 8);
  uVar2 = *(uint *)((long)param_2 + 4);
  uStack_1c8 = param_2[5];
  uStack_1d0 = param_2[4];
  uStack_1b8 = param_2[7];
  uStack_1c0 = param_2[6];
  uStack_1a0 = 0;
  uStack_198 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = *(uint *)((long)param_2 + 4);
  }
  piStack_1b0 = piVar11;
  puStack_1a8 = &uStack_1a0;
  if ((int)uVar2 < 3) {
    uStack_1a0 = *(undefined8 *)param_2[9];
    uStack_198 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_1f0 = uStack_1f0 & 0xffffffff;
    func_0x000109a84868(&uStack_1f0,param_2);
  }
  if (((uint)uStack_1f0 >> 0xe & 1) == 0) {
    iStack_250 = 0x42ff0000;
    uStack_244 = 0;
    uStack_240 = 0;
    iStack_24c = 0;
    uStack_248 = 0;
    piStack_210 = (int *)((ulong)&iStack_250 | 8);
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_224 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    auStack_68[0] = 0x2010000;
    uStack_58 = 0;
    puStack_208 = &uStack_200;
    puStack_60 = (undefined1 *)&iStack_250;
    func_0x000109a479a0(&uStack_1f0,auStack_68);
    if (uStack_1b8 != 0) {
      piVar1 = (int *)(uStack_1b8 + 0x14);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    if (0 < (int)uStack_1f0._4_4_) {
      lVar6 = 0;
      do {
        piStack_1b0[lVar6] = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uStack_1f0._4_4_);
    }
    uStack_1e8 = CONCAT44(uStack_244,uStack_248);
    uStack_1f0 = CONCAT44(iStack_24c,iStack_250);
    uStack_1d8 = CONCAT44(uStack_234,uStack_238);
    uStack_1e0 = CONCAT44(uStack_23c,uStack_240);
    uStack_1c8 = CONCAT44(uStack_224,uStack_228);
    uStack_1d0 = CONCAT44(uStack_22c,uStack_230);
    uStack_1c0 = CONCAT44(uStack_21c,uStack_220);
    uStack_1b8 = uStack_218;
    piVar1 = piStack_1b0;
    puVar7 = puStack_1a8;
    if ((puStack_1a8 != &uStack_1a0) &&
       (piVar1 = piVar11, puVar7 = &uStack_1a0, puStack_1a8 != (undefined8 *)0x0)) {
      _free(puStack_1a8[-1]);
    }
    puStack_1a8 = puVar7;
    piStack_1b0 = piVar1;
    if (iStack_24c < 3) {
      puVar7 = (undefined8 *)((ulong)&iStack_250 | 4);
      *puStack_1a8 = *puStack_208;
      puStack_1a8[1] = puStack_208[1];
      iStack_250 = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_208 != &uStack_200) {
        _free(puStack_208[-1]);
      }
    }
    else {
      piStack_1b0 = piStack_210;
      puStack_1a8 = puStack_208;
    }
  }
  if ((((uint)uStack_1f0 >> 0xe & 1) == 0) && (uStack_1e0 != 0)) {
    uVar8 = (ulong)uStack_1f0._4_4_;
    if ((int)uStack_1f0._4_4_ < 3) {
      lVar6 = (long)uStack_1e8._4_4_ * (long)(int)uStack_1e8;
    }
    else {
      lVar6 = 1;
      piVar11 = piStack_1b0;
      do {
        lVar6 = lVar6 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
    }
    iStack_250 = 0xf630757;
    iStack_24c = 1;
    uStack_248 = 0x1f;
    uStack_244 = 0;
    if (lVar6 != 0) {
      FUN_10a0edfc4(&iStack_250);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109febbdc);
      (*pcVar5)();
    }
  }
  if ((int)uStack_1f0._4_4_ < 1) {
    iVar9 = 0;
LAB_109feba14:
    iStack_250 = uStack_1e8._4_4_ * (int)uStack_1e8;
  }
  else {
    iVar9 = (int)puStack_1a8[(ulong)uStack_1f0._4_4_ - 1];
    if (uStack_1f0._4_4_ < 3) goto LAB_109feba14;
    uVar8 = (ulong)uStack_1f0._4_4_;
    iStack_250 = 1;
    piVar11 = piStack_1b0;
    do {
      iStack_250 = iStack_250 * *piVar11;
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 1;
    } while (uVar8 != 0);
  }
  iStack_250 = iStack_250 * iVar9;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_170,&iStack_250,4);
  uVar8 = (ulong)uStack_1f0._4_4_;
  if ((int)uStack_1f0._4_4_ < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = puStack_1a8[uVar8 - 1];
    if (2 < uStack_1f0._4_4_) {
      lVar10 = 1;
      piVar11 = piStack_1b0;
      do {
        lVar10 = lVar10 * *piVar11;
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar8 != 0);
      goto LAB_109feba80;
    }
  }
  lVar10 = (long)uStack_1e8._4_4_ * (long)(int)uStack_1e8;
LAB_109feba80:
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
            (&ppuStack_170,uStack_1e0,lVar10 * lVar6);
  func_0x00010a002480(param_1,&ppuStack_168,auStack_68);
  uVar8 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar8 = (ulong)*(byte *)(param_1 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_1,uVar8 + 3 & 0xfffffffffffffffc,0);
  if (uStack_1b8 != 0) {
    piVar11 = (int *)(uStack_1b8 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_1f0);
    }
  }
  uStack_1b8 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  if (0 < (int)uStack_1f0._4_4_) {
    lVar6 = 0;
    do {
      piStack_1b0[lVar6] = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_1f0._4_4_);
  }
  if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
    _free(puStack_1a8[-1]);
  }
  appuStack_180[0] = &PTR_SUB_1108a5a38;
  ppuStack_170 = &PTR_DAT_1108a5a60;
  appuStack_100[0] = &PTR_DAT_1108a5a88;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_180,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 109febc44; end: 109febd03;  */

undefined8 * FUN_109febc44(undefined8 *param_1)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_10a0022d0(param_1 + 3,0x18);
  return param_1;
}



/* Entry: 109febd04; end: 109febe8b;  */

void FUN_109febd04(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x000109ffdfac();
      uStack_38 = 0x109febdc8;
      ppuStack_70 = &puStack_40;
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 < (undefined4 *)param_1[2]) {
        puVar10 = puVar2 + 1;
        *puVar2 = *param_2;
      }
      else {
        lVar9 = (long)puVar2 - *param_1;
        uVar1 = (lVar9 >> 2) + 1;
        puStack_40 = &stack0xfffffffffffffff0;
        if (uVar1 >> 0x3e != 0) {
          plVar5 = param_1;
          func_0x000109ffdfac();
          puStack_90 = (undefined1 *)&lStack_b0;
          pcStack_68 = FUN_109febe8c;
          uVar1 = plVar5[1];
          plVar4 = (long *)*plVar5;
          if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)plVar5 + 0x17);
            plVar4 = plVar5;
          }
          lStack_a8 = 0;
          uStack_a0 = 0;
          lStack_b0 = 0;
          puStack_80 = param_2;
          plStack_78 = param_1;
          FUN_109ffdff4(&lStack_b0,plVar4,(long)plVar4 + uVar1);
          uStack_88 = 0;
          auStack_98[0] = 0x81030000;
          func_0x000109b7eff4(extraout_x8,auStack_98,0xffffffff);
          if (lStack_b0 != 0) {
            lStack_a8 = lStack_b0;
            __ZdlPv();
          }
          return;
        }
        uVar6 = param_1[2] - *param_1;
        uVar7 = (long)uVar6 >> 1;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar6) {
          uVar7 = 0x3fffffffffffffff;
        }
        plVar4 = param_1;
        FUN_109ffdfc0();
        lVar3 = *param_1;
        puVar2 = (undefined4 *)((long)plVar4 + lVar9);
        lVar8 = (long)puVar2 - (param_1[1] - lVar3);
        puVar10 = puVar2 + 1;
        *puVar2 = *param_2;
        _memcpy(lVar8,lVar3);
        lVar9 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)puVar10;
        param_1[2] = (long)plVar4 + uVar7 * 4;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar10;
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_109ffdfc0();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar9);
    lVar8 = (long)puVar2 - (param_1[1] - lVar3);
    puVar10 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar8,lVar3);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)plVar4 + uVar7 * 4;
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 109febe8c; end: 109febf27;  */

void FUN_109febe8c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109ffdff4(&lStack_50,puVar2,(long)puVar2 + uVar1);
  uStack_28 = 0;
  auStack_38[0] = 0x81030000;
  puStack_30 = (undefined1 *)&lStack_50;
  func_0x000109b7eff4(param_1,auStack_38,0xffffffff);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  return;
}



/* Entry: 109febf28; end: 109fec1e7;  */

void FUN_109febf28(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 **ppuStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  uVar4 = *param_2 >> 3;
  uStack_34 = param_3;
  __ZNSt3__19to_stringEi(&lStack_68,(uVar4 & 0x1ff) + 1);
  plVar7 = &lStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar7,0,&UNK_10f63079a,0x14);
  puStack_48 = (undefined8 *)plVar7[1];
  ppuStack_50 = (undefined8 **)*plVar7;
  uStack_40 = plVar7[2];
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  puStack_88 = (uint *)(long)uStack_40._7_1_;
  if ((long)puStack_88 < 0) {
    ppuStack_90 = ppuStack_50;
    puStack_88 = (uint *)puStack_48;
    if ((uVar4 & 0x1fd) == 0) {
      __ZdlPv();
      goto LAB_109febfbc;
    }
  }
  else {
    ppuStack_90 = &ppuStack_50;
    if ((uVar4 & 0x1fd) == 0) {
LAB_109febfbc:
      if (uStack_58 < 0) {
        __ZdlPv(lStack_68);
      }
      uVar4 = *param_2 & 7;
      __ZNSt3__19to_stringEi(&lStack_68,uVar4);
      plVar7 = &lStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar7,0,&UNK_10f630777,0x11);
      puStack_48 = (undefined8 *)plVar7[1];
      ppuStack_50 = (undefined8 **)*plVar7;
      uStack_40 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      puStack_88 = (uint *)(long)uStack_40._7_1_;
      if ((long)puStack_88 < 0) {
        ppuStack_90 = ppuStack_50;
        puStack_88 = (uint *)puStack_48;
        if (uVar4 == 0) {
          __ZdlPv();
          goto LAB_109fec038;
        }
      }
      else {
        ppuStack_90 = &ppuStack_50;
        if (uVar4 == 0) {
LAB_109fec038:
          if (uStack_58._7_1_ < '\0') {
            __ZdlPv(lStack_68);
          }
          ppuStack_50 = (undefined8 **)0x0;
          puStack_48 = (undefined8 *)0x0;
          uStack_40 = 0;
          lStack_68 = CONCAT44(lStack_68._4_4_,1);
          FUN_109febd04(&ppuStack_50,&lStack_68);
          func_0x000109febdc8(&ppuStack_50,&uStack_34);
          lStack_68 = 0;
          lStack_60 = 0;
          uStack_58 = 0;
          puVar8 = (undefined8 *)0xc;
          func_0x000107c2ae8c();
          alStack_78[0] = (long)puVar8 + 4;
          alStack_78[1] = 4;
          *(undefined1 *)(puVar8 + 1) = 0;
          *puVar8 = 0x67706a2e00000001;
          uStack_80 = 0;
          ppuStack_90 = (undefined8 **)CONCAT44(ppuStack_90._4_4_,0x1010000);
          puStack_88 = param_2;
          func_0x000109b7fb60(alStack_78,&ppuStack_90,&lStack_68,&ppuStack_50);
          lVar5 = alStack_78[0];
          alStack_78[0] = 0;
          alStack_78[1] = 0;
          if (lVar5 != 0) {
            piVar9 = (int *)(lVar5 + -4);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              _free(*(undefined8 *)(lVar5 + -0xc));
            }
          }
          FUN_109ffe064(param_1,lStack_68,lStack_60 - lStack_68);
          if (lStack_68 != 0) {
            lStack_60 = lStack_68;
            __ZdlPv();
          }
          if (ppuStack_50 != (undefined8 **)0x0) {
            puStack_48 = ppuStack_50;
            __ZdlPv();
          }
          return;
        }
      }
      FUN_10a0edfc4(&ppuStack_90);
      goto LAB_109fec140;
    }
  }
  FUN_10a0edfc4(&ppuStack_90);
LAB_109fec140:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109fec144);
  (*pcVar6)();
}



/* Entry: 109fec1e8; end: 109fecbbb;  */

/* WARNING: Removing unreachable block (ram,0x000109fec3f0) */

void FUN_109fec1e8(long *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  code *pcVar9;
  undefined8 *****pppppuVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined8 ***pppuVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *****pppppuVar24;
  undefined8 *puVar25;
  undefined8 ***pppuVar26;
  ulong uVar27;
  undefined8 ***pppuVar28;
  undefined8 *puVar29;
  undefined4 auStack_1d0 [2];
  undefined8 ****ppppuStack_1c8;
  undefined8 uStack_1c0;
  undefined4 auStack_1b8 [2];
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  long alStack_150 [2];
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined4 *puStack_110;
  undefined4 *puStack_108;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 auStack_90 [2];
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  
  uVar27 = *param_3;
  iVar11 = *(int *)(param_2 + uVar27);
  *param_3 = uVar27 + 4;
  __ZNSt3__19to_stringEj(&uStack_1a0,iVar11);
  puVar29 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar29,0,&UNK_10f630722,0x16);
  ppppuStack_d8 = (undefined8 ****)puVar29[1];
  uStack_e0 = (undefined8 *****)*puVar29;
  uStack_d0 = (undefined8 ****)puVar29[2];
  puVar29[1] = 0;
  puVar29[2] = 0;
  *puVar29 = 0;
  ppppuStack_78 = (undefined8 ****)(long)uStack_d0._7_1_;
  if ((long)ppppuStack_78 < 0) {
    ppppuStack_80 = uStack_e0;
    ppppuStack_78 = ppppuStack_d8;
    if (iVar11 == 0) {
      __ZdlPv();
      goto LAB_109fec288;
    }
  }
  else {
    ppppuStack_80 = (undefined8 ****)&uStack_e0;
    if (iVar11 == 0) {
LAB_109fec288:
      if ((long)puStack_190 < 0) {
        __ZdlPv(uStack_1a0);
      }
      uVar4 = *(uint *)(param_2 + *param_3);
      uVar23 = (ulong)uVar4;
      *param_3 = *param_3 + 4;
      FUN_109ffe100(&puStack_110,uVar23);
      FUN_109ffe1f4(&puStack_128,uVar23);
      uVar12 = *param_3;
      if (uVar4 != 0) {
        lVar14 = 0;
        lVar20 = (long)puStack_108 - (long)puStack_110 >> 2;
        lVar22 = (long)puStack_120 - (long)puStack_128 >> 2;
        lVar13 = uVar12 + param_2 + 4;
        puVar19 = puStack_110;
        puVar21 = puStack_128;
        do {
          if (lVar20 == 0) {
            uVar27 = uVar12 + lVar14 + 4;
LAB_109feca28:
            *param_3 = uVar27;
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x109feca30);
            (*pcVar9)();
          }
          *puVar19 = *(undefined4 *)(lVar13 + lVar14 + -4);
          if (lVar22 == 0) {
            uVar27 = uVar12 + lVar14 + 8;
            goto LAB_109feca28;
          }
          *puVar21 = *(undefined4 *)(lVar13 + lVar14);
          lVar14 = lVar14 + 8;
          lVar22 = lVar22 + -1;
          lVar20 = lVar20 + -1;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar23 * 8 - lVar14 != 0);
        uVar12 = uVar12 + lVar14;
        *param_3 = uVar12;
      }
      uVar5 = *(undefined4 *)(param_2 + uVar12);
      *param_3 = uVar12 + 4;
      FUN_109ffe2a0(&ppuStack_140,uVar5);
      ppuVar8 = ppuStack_138;
      pppuVar28 = (undefined8 ***)ppuStack_138;
      if (ppuStack_140 != ppuStack_138) {
        puVar29 = (undefined8 *)((ulong)&uStack_1a0 | 4);
        pppuVar26 = (undefined8 ***)ppuStack_140;
        do {
          uVar12 = *param_3;
          iVar11 = *(int *)(param_2 + uVar12);
          *param_3 = uVar12 + 4;
          __ZNSt3__19to_stringEj(&ppppuStack_80,iVar11);
          pppppuVar10 = &ppppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppuVar10,0,&UNK_10f630722,0x16);
          ppppuStack_d8 = pppppuVar10[1];
          uStack_e0 = (undefined8 *****)*pppppuVar10;
          uStack_d0 = pppppuVar10[2];
          pppppuVar10[1] = (undefined8 ****)0x0;
          pppppuVar10[2] = (undefined8 ****)0x0;
          *pppppuVar10 = (undefined8 ****)0x0;
          ppppuStack_f0 = (undefined8 ****)(long)uStack_d0._7_1_;
          if ((long)ppppuStack_f0 < 0) {
            ppppuStack_f8 = uStack_e0;
            ppppuStack_f0 = ppppuStack_d8;
            if (iVar11 != 0) goto LAB_109feca30;
            __ZdlPv();
          }
          else {
            ppppuStack_f8 = (undefined8 ****)&uStack_e0;
            if (iVar11 != 0) {
LAB_109feca30:
              FUN_10a0edfc4(&ppppuStack_f8);
              goto LAB_109feca50;
            }
          }
          puVar19 = (undefined4 *)(param_2 + *param_3);
          uVar5 = *puVar19;
          uVar3 = (ulong)(uint)puVar19[1];
          uVar17 = *param_3 + 8;
          *param_3 = uVar17;
          lVar13 = param_2 + uVar17;
          ppppuStack_f8 = (undefined8 *****)0x0;
          ppppuStack_f0 = (undefined8 *****)0x0;
          uStack_e8 = 0;
          func_0x000107c2b048(&ppppuStack_f8,lVar13,lVar13 + uVar3,uVar3);
          ppppuStack_80 = (undefined8 ****)CONCAT44(ppppuStack_80._4_4_,0x81030000);
          ppppuStack_78 = &ppppuStack_f8;
          uStack_70 = 0;
          func_0x000109b7eff4(&uStack_e0,&ppppuStack_80,0xffffffff);
          if ((undefined8 *****)ppppuStack_f8 != (undefined8 *****)0x0) {
            ppppuStack_f0 = ppppuStack_f8;
            __ZdlPv();
          }
          *param_3 = (uVar3 + ~uVar12 + *param_3 & 0xfffffffffffffffc) + uVar12 + 4;
          uStack_70 = 0;
          ppppuStack_80 = (undefined8 ****)CONCAT44(ppppuStack_80._4_4_,0x1010000);
          ppppuStack_78 = (undefined8 ****)&uStack_e0;
          FUN_10a0f4340(&uStack_1a0,&ppppuStack_80,uVar5);
          if (lStack_a8 != 0) {
            piVar1 = (int *)(lStack_a8 + 0x14);
            do {
              iVar11 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar11 + -1 == 0) {
              func_0x000109a848d4(&uStack_e0);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          uStack_d0 = (undefined8 ****)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          if (0 < uStack_e0._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(lStack_a0 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_e0._4_4_);
          }
          if (puStack_98 != auStack_90 && puStack_98 != (undefined8 *)0x0) {
            _free(puStack_98[-1]);
          }
          if (pppuVar26[7] != (undefined8 **)0x0) {
            piVar1 = (int *)((long)pppuVar26[7] + 0x14);
            do {
              iVar11 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar11 + -1 == 0) {
              func_0x000109a848d4(pppuVar26);
            }
          }
          pppuVar26[7] = (undefined8 **)0x0;
          pppuVar26[3] = (undefined8 **)0x0;
          pppuVar26[2] = (undefined8 **)0x0;
          pppuVar26[5] = (undefined8 **)0x0;
          pppuVar26[4] = (undefined8 **)0x0;
          if (0 < *(int *)((long)pppuVar26 + 4)) {
            lVar13 = 0;
            ppuVar15 = pppuVar26[8];
            do {
              *(undefined4 *)((long)ppuVar15 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)((long)pppuVar26 + 4));
          }
          pppuVar26[1] = (undefined8 **)puStack_198;
          *pppuVar26 = uStack_1a0;
          pppuVar26[3] = (undefined8 **)puStack_188;
          pppuVar26[2] = (undefined8 **)puStack_190;
          pppuVar26[5] = (undefined8 **)puStack_178;
          pppuVar26[4] = (undefined8 **)puStack_180;
          pppuVar26[7] = (undefined8 **)puStack_168;
          pppuVar26[6] = (undefined8 **)puStack_170;
          pppuVar16 = (undefined8 ***)pppuVar26[9];
          pppuVar28 = pppuVar26 + 10;
          iVar11 = uStack_1a0._4_4_;
          if (pppuVar16 != pppuVar28) {
            if (pppuVar16 != (undefined8 ***)0x0) {
              _free(pppuVar16[-1]);
              iVar11 = uStack_1a0._4_4_;
            }
            pppuVar26[8] = pppuVar26 + 1;
            pppuVar26[9] = pppuVar28;
            pppuVar16 = pppuVar28;
          }
          if (iVar11 < 3) {
            *pppuVar16 = (undefined8 **)*plStack_158;
            pppuVar16[1] = (undefined8 **)plStack_158[1];
            uStack_1a0 = (undefined8 ***)CONCAT44(uStack_1a0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (plStack_158 != alStack_150) {
              _free((undefined8 *)plStack_158[-1]);
            }
          }
          else {
            pppuVar26[8] = (undefined8 **)puStack_160;
            pppuVar26[9] = (undefined8 **)plStack_158;
          }
          pppuVar26 = pppuVar26 + 0xc;
          pppuVar28 = (undefined8 ***)ppuStack_138;
        } while (pppuVar26 != (undefined8 ***)ppuVar8);
      }
      uStack_1a0 = (undefined8 ***)0x0;
      puStack_198 = (undefined8 **)0x0;
      puStack_190 = (undefined8 **)0x0;
      if ((undefined8 ***)ppuStack_140 != pppuVar28) {
        pppuVar26 = (undefined8 ***)ppuStack_140;
        do {
          ppppuStack_80 = (undefined8 *****)0x0;
          ppppuStack_78 = (undefined8 *****)0x0;
          uStack_70 = 0;
          uStack_1a8 = 0;
          auStack_1b8[0] = 0x1010000;
          ppuStack_1b0 = pppuVar26;
          FUN_10a0f4340(&uStack_e0,auStack_1b8,0);
          uStack_e8 = 0;
          ppppuStack_f8 = (undefined8 ****)CONCAT44(ppppuStack_f8._4_4_,0x1010000);
          auStack_1d0[0] = 0x2050000;
          uStack_1c0 = 0;
          ppppuStack_1c8 = &ppppuStack_80;
          ppppuStack_f0 = (undefined8 ****)&uStack_e0;
          func_0x000109a3dcec(&ppppuStack_f8,auStack_1d0);
          if (lStack_a8 != 0) {
            piVar1 = (int *)(lStack_a8 + 0x14);
            do {
              iVar11 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar11 + -1 == 0) {
              func_0x000109a848d4(&uStack_e0);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          uStack_d0 = (undefined8 ****)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          if (0 < uStack_e0._4_4_) {
            lVar13 = 0;
            do {
              *(undefined4 *)(lStack_a0 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < uStack_e0._4_4_);
          }
          pppppuVar24 = (undefined8 *****)ppppuStack_80;
          pppppuVar10 = (undefined8 *****)ppppuStack_78;
          if (puStack_98 != auStack_90 && puStack_98 != (undefined8 *)0x0) {
            _free(puStack_98[-1]);
            pppppuVar24 = (undefined8 *****)ppppuStack_80;
            pppppuVar10 = (undefined8 *****)ppppuStack_78;
          }
          for (; pppppuVar24 != pppppuVar10; pppppuVar24 = pppppuVar24 + 0xc) {
            FUN_109fed894(&uStack_1a0,pppppuVar24);
          }
          uStack_e0 = &ppppuStack_80;
          FUN_109ffe3e8(&uStack_e0);
          pppuVar26 = pppuVar26 + 0xc;
        } while (pppuVar26 != pppuVar28);
      }
      FUN_109ffe2a0(param_1,uVar23);
      if (uVar4 != 0) {
        uVar12 = 0;
        puVar29 = (undefined8 *)((ulong)&uStack_e0 | 4);
        uVar17 = 0;
        do {
          if ((ulong)((long)puStack_108 - (long)puStack_110 >> 2) <= uVar12) goto LAB_109feca50;
          uVar3 = uVar17 + (uint)puStack_110[uVar12];
          uStack_e0 = (undefined8 *****)&UNK_10f6307af;
          ppppuStack_d8 = (undefined8 *****)0x13;
          if ((ulong)(((long)puStack_198 - (long)uStack_1a0 >> 5) * -0x5555555555555555) < uVar3) {
            FUN_10a0edfc4(&uStack_e0);
            goto LAB_109feca50;
          }
          ppppuStack_80 = (undefined8 *****)0x0;
          ppppuStack_78 = (undefined8 *****)0x0;
          uStack_70 = 0;
          FUN_109ffe4f8(&ppppuStack_80,uStack_1a0 + uVar17 * 0xc,
                        uStack_1a0 + uVar17 * 0xc + (ulong)(uint)puStack_110[uVar12] * 0xc);
          uStack_d0 = (undefined8 ****)0x0;
          uStack_e0 = (undefined8 *****)CONCAT44(uStack_e0._4_4_,0x1050000);
          uVar17 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
          ppppuStack_d8 = &ppppuStack_80;
          if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_109feca50;
          ppppuStack_f8 = (undefined8 ****)CONCAT44(ppppuStack_f8._4_4_,0x2010000);
          ppppuStack_f0 = (undefined8 ****)(*param_1 + uVar12 * 0x60);
          uStack_e8 = 0;
          func_0x000109a3ecac(&uStack_e0,&ppppuStack_f8);
          uVar17 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
          if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_109feca50;
          ppppuStack_f0 = (undefined8 ****)(*param_1 + uVar12 * 0x60);
          uStack_e8 = 0;
          ppppuStack_f8 = (undefined8 ****)CONCAT44(ppppuStack_f8._4_4_,0x1010000);
          if ((ulong)((long)puStack_120 - (long)puStack_128 >> 2) <= uVar12) goto LAB_109feca50;
          FUN_10a0f4340(&uStack_e0,&ppppuStack_f8,puStack_128[uVar12]);
          uVar17 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
          if (uVar17 < uVar12 || uVar17 - uVar12 == 0) goto LAB_109feca50;
          puVar25 = (undefined8 *)(*param_1 + uVar12 * 0x60);
          if (puVar25[7] != 0) {
            piVar1 = (int *)(puVar25[7] + 0x14);
            do {
              iVar11 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar11 + -1 == 0) {
              func_0x000109a848d4(puVar25);
            }
          }
          puVar25[7] = 0;
          puVar25[3] = 0;
          puVar25[2] = 0;
          puVar25[5] = 0;
          puVar25[4] = 0;
          if (0 < *(int *)((long)puVar25 + 4)) {
            lVar13 = 0;
            lVar14 = puVar25[8];
            do {
              *(undefined4 *)(lVar14 + lVar13 * 4) = 0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)((long)puVar25 + 4));
          }
          puVar25[1] = ppppuStack_d8;
          *puVar25 = uStack_e0;
          puVar25[3] = uStack_c8;
          puVar25[2] = uStack_d0;
          puVar25[5] = uStack_b8;
          puVar25[4] = uStack_c0;
          puVar25[7] = lStack_a8;
          puVar25[6] = uStack_b0;
          puVar18 = (undefined8 *)puVar25[9];
          puVar2 = puVar25 + 10;
          iVar11 = uStack_e0._4_4_;
          if (puVar18 != puVar2) {
            if (puVar18 != (undefined8 *)0x0) {
              _free(puVar18[-1]);
              iVar11 = uStack_e0._4_4_;
            }
            puVar25[8] = puVar25 + 1;
            puVar25[9] = puVar2;
            puVar18 = puVar2;
          }
          if (iVar11 < 3) {
            *puVar18 = *puStack_98;
            puVar18[1] = puStack_98[1];
            uStack_e0 = (undefined8 *****)CONCAT44(uStack_e0._4_4_,0x42ff0000);
            puVar29[1] = 0;
            *puVar29 = 0;
            puVar29[3] = 0;
            puVar29[2] = 0;
            puVar29[5] = 0;
            puVar29[4] = 0;
            *(undefined8 *)((long)puVar29 + 0x34) = 0;
            *(undefined8 *)((long)puVar29 + 0x2c) = 0;
            if (puStack_98 != auStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            puVar25[9] = puStack_98;
            puVar25[8] = lStack_a0;
          }
          uStack_e0 = &ppppuStack_80;
          FUN_109ffe3e8(&uStack_e0);
          uVar12 = uVar12 + 1;
          uVar17 = uVar3;
        } while (uVar12 != uVar23);
      }
      *param_3 = ((uVar27 - *param_3 ^ 0xffffffffffffffff) & 0xfffffffffffffffc) + uVar27 + 4;
      uStack_e0 = (undefined8 *****)&uStack_1a0;
      FUN_109ffe3e8(&uStack_e0);
      uStack_e0 = (undefined8 *****)&ppuStack_140;
      FUN_109ffe3e8(&uStack_e0);
      if (puStack_128 != (undefined4 *)0x0) {
        puStack_120 = puStack_128;
        __ZdlPv();
      }
      if (puStack_110 != (undefined4 *)0x0) {
        puStack_108 = puStack_110;
        __ZdlPv();
      }
      return;
    }
  }
  FUN_10a0edfc4(&ppppuStack_80);
LAB_109feca50:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109feca54);
  (*pcVar9)();
}



/* Entry: 109fecbbc; end: 109fed7df;  */

void FUN_109fecbbc(long param_1,long *****param_2)

{
  long ****pppplVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long *******ppppppplVar4;
  int iVar5;
  long ****pppplVar6;
  uint uVar7;
  char cVar8;
  undefined4 *puVar9;
  long ******pppppplVar10;
  code *pcVar11;
  bool bVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  undefined8 *puVar22;
  long *****ppppplVar23;
  ulong uVar24;
  long **pplVar25;
  undefined8 uVar26;
  ulong uStack_3f0;
  int iStack_3e4;
  undefined8 uStack_3e0;
  long ******pppppplStack_3d8;
  undefined8 uStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3a8;
  long ******pppppplStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  char cStack_371;
  undefined **appuStack_360 [29];
  undefined8 uStack_278;
  long *****ppppplStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_240;
  long *****ppppplStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long ******pppppplStack_210;
  ulong uStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  undefined8 uStack_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  char cStack_181;
  undefined **appuStack_170 [19];
  undefined8 uStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  undefined8 uStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  pppplVar21 = *param_2;
  if (pppplVar21 == param_2[1]) {
    bVar12 = false;
  }
  else {
    pppplVar6 = pppplVar21;
    do {
      bVar12 = pppplVar6 + 0xc == param_2[1];
      if (bVar12) break;
      pppplVar1 = pppplVar6 + 0x14;
      pppplVar6 = pppplVar6 + 0xc;
    } while (*(int *)((long)*pppplVar1 + 4) == *(int *)((long)pppplVar21[8] + 4) &&
             *(int *)*pppplVar1 == *(int *)pppplVar21[8]);
  }
  FUN_109fed7e0(&ppuStack_1e0);
  uStack_1e4 = 0;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_1e0,&uStack_1e4,4);
  iStack_1e8 = (int)((ulong)((long)param_2[1] - (long)*param_2) >> 5) * -0x55555555;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_1e0,&iStack_1e8,4);
  pppplVar6 = param_2[1];
  for (pppplVar21 = *param_2; pppplVar21 != pppplVar6; pppplVar21 = pppplVar21 + 0xc) {
    uStack_3e0 = (undefined **)CONCAT44(uStack_3e0._4_4_,(*(uint *)pppplVar21 >> 3 & 0x1ff) + 1);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_1e0,&uStack_3e0,4);
    uStack_278 = (long ******)(CONCAT44(uStack_278._4_4_,*(uint *)pppplVar21) & 0xffffffff00000fff);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_1e0,&uStack_278,4);
  }
  pppplStack_200 = (long ****)0x0;
  pppplStack_1f8 = (long ****)0x0;
  uStack_1f0 = 0;
  if (bVar12) {
    pppplVar21 = *param_2;
    pppplVar6 = param_2[1];
    if (pppplVar6 == pppplVar21) {
LAB_109fed60c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x109fed610);
      (*pcVar11)();
    }
    pplVar25 = *pppplVar21[8];
    pppppplStack_a0 = (long ******)0x0;
    pppppplStack_a8 = (long ******)0x0;
    uStack_98 = 0;
    do {
      uStack_278 = (long ******)0x0;
      ppppplStack_270 = (long *****)0x0;
      lStack_268 = 0;
      uStack_c8 = 0;
      uStack_d8 = (long ****)CONCAT44(uStack_d8._4_4_,0x1010000);
      ppplStack_d0 = (long ***)pppplVar21;
      FUN_10a0f4340(&uStack_3e0,&uStack_d8,0);
      uStack_b0 = 0;
      uStack_c0 = (long ******)CONCAT44(uStack_c0._4_4_,0x1010000);
      uStack_218 = 0x2050000;
      uStack_208 = 0;
      pppppplStack_210 = (long ******)&uStack_278;
      pppplStack_b8 = (long ****)&uStack_3e0;
      func_0x000109a3dcec(&uStack_c0,&uStack_218);
      if (lStack_3a8 != 0) {
        piVar18 = (int *)(lStack_3a8 + 0x14);
        do {
          iVar5 = *piVar18;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar12) {
            *piVar18 = iVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_3e0);
        }
      }
      lStack_3a8 = 0;
      ppuStack_3c8 = (undefined **)0x0;
      uStack_3d0 = (undefined **)0x0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      if (0 < uStack_3e0._4_4_) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)pppppplStack_3a0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_3e0._4_4_);
      }
      pppppplVar20 = uStack_278;
      pppppplVar10 = (long ******)ppppplStack_270;
      if (puStack_398 != &uStack_390 && puStack_398 != (undefined8 *)0x0) {
        _free(puStack_398[-1]);
        pppppplVar20 = uStack_278;
        pppppplVar10 = (long ******)ppppplStack_270;
      }
      for (; pppppplVar20 != pppppplVar10; pppppplVar20 = pppppplVar20 + 0xc) {
        FUN_109fed894(&pppppplStack_a8,pppppplVar20);
      }
      uStack_3e0 = (undefined **)&uStack_278;
      FUN_109ffe3e8(&uStack_3e0);
      pppplVar21 = pppplVar21 + 0xc;
    } while (pppplVar21 != pppplVar6);
    if ((long)pppppplStack_a0 - (long)pppppplStack_a8 != 0) {
      lVar14 = 0;
      uVar15 = ((long)pppppplStack_a0 - (long)pppppplStack_a8 >> 5) * -0x5555555555555555;
      puVar22 = (undefined8 *)((ulong)&uStack_278 | 4);
      puVar19 = (undefined8 *)((ulong)&uStack_3e0 | 4);
      uVar26 = NEON_rev64(pplVar25,4);
      uStack_3f0 = 4;
      uVar24 = 0;
      do {
        uVar2 = uVar24 + 4;
        pppplStack_b8 = (long ****)0x0;
        uVar17 = uVar15;
        if (uVar2 <= uVar15) {
          uVar17 = uVar2;
        }
        uStack_c0 = (long ******)0x0;
        uStack_b0 = 0;
        if (uVar17 <= uVar24) goto LAB_109fecee4;
        lVar16 = lVar14;
        if (uStack_3f0 <= uVar15) {
          uVar15 = uStack_3f0;
        }
        do {
          uVar17 = ((long)pppppplStack_a0 - (long)pppppplStack_a8 >> 5) * -0x5555555555555555;
          if (uVar17 < uVar24 || uVar17 - uVar24 == 0) goto LAB_109fed60c;
          FUN_109fed894(&uStack_c0,(long)pppppplStack_a8 + lVar16);
          uVar24 = uVar24 + 1;
          lVar16 = lVar16 + 0x60;
        } while (uVar15 != uVar24);
        lVar16 = (long)pppplStack_b8 - (long)uStack_c0;
        while ((ulong)((lVar16 >> 5) * -0x5555555555555555) < 3) {
LAB_109fecee4:
          uStack_d8 = (long ****)uVar26;
          func_0x000109a829e8(&uStack_3e0,&uStack_d8,0);
          uStack_278 = (long ******)CONCAT44(uStack_278._4_4_,0x42ff0000);
          *(undefined8 *)((long)puVar22 + 0x34) = 0;
          *(undefined8 *)((long)puVar22 + 0x2c) = 0;
          puVar22[3] = 0;
          puVar22[2] = 0;
          puVar22[5] = 0;
          puVar22[4] = 0;
          puVar22[1] = 0;
          *puVar22 = 0;
          uStack_228 = 0;
          uStack_220 = 0;
          ppppplStack_238 = (long *****)&ppppplStack_270;
          puStack_230 = &uStack_228;
          (*(code *)*(long ******)((long)*uStack_3e0 + 0x18))
                    (uStack_3e0,&uStack_3e0,&uStack_278,0xffffffff);
          FUN_109fed8e4(&uStack_c0,&uStack_278);
          if (lStack_240 != 0) {
            piVar18 = (int *)(lStack_240 + 0x14);
            do {
              iVar5 = *piVar18;
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar12) {
                *piVar18 = iVar5 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar5 + -1 == 0) {
              func_0x000109a848d4(&uStack_278);
            }
          }
          lStack_240 = 0;
          uStack_260 = 0;
          lStack_268 = 0;
          uStack_250 = 0;
          uStack_258 = 0;
          if (0 < uStack_278._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)((long)ppppplStack_238 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_278._4_4_);
          }
          if (puStack_230 != &uStack_228 && puStack_230 != (undefined8 *)0x0) {
            _free(puStack_230[-1]);
          }
          func_0x00010918eb6c(&uStack_3e0);
          lVar16 = (long)pppplStack_b8 - (long)uStack_c0;
        }
        uStack_d8._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
        uStack_278._4_4_ = (int)((ulong)uStack_278 >> 0x20);
        ppplStack_d0 = (long ***)&uStack_3e0;
        uStack_3e0._4_4_ = (int)((ulong)uStack_3e0 >> 0x20);
        uStack_3e0 = (undefined **)CONCAT44(uStack_3e0._4_4_,0x42ff0000);
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        uStack_390 = 0;
        uStack_388 = 0;
        lStack_268 = 0;
        uStack_278 = (long ******)CONCAT44(uStack_278._4_4_,0x1050000);
        ppppplStack_270 = (long *****)&uStack_c0;
        uStack_c8 = 0;
        uStack_d8 = (long ****)CONCAT44(uStack_d8._4_4_,0x2010000);
        pppppplStack_3a0 = (long ******)&pppppplStack_3d8;
        puStack_398 = &uStack_390;
        func_0x000109a3ecac(&uStack_278,&uStack_d8);
        FUN_109fed894(&pppplStack_200,&uStack_3e0);
        if (lStack_3a8 != 0) {
          piVar18 = (int *)(lStack_3a8 + 0x14);
          do {
            iVar5 = *piVar18;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar12) {
              *piVar18 = iVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_3e0);
          }
        }
        lStack_3a8 = 0;
        ppuStack_3c8 = (undefined **)0x0;
        uStack_3d0 = (undefined **)0x0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        if (0 < uStack_3e0._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)((long)pppppplStack_3a0 + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_3e0._4_4_);
        }
        if (puStack_398 != &uStack_390 && puStack_398 != (undefined8 *)0x0) {
          _free(puStack_398[-1]);
        }
        uStack_3e0 = (undefined **)&uStack_c0;
        FUN_109ffe3e8(&uStack_3e0);
        uVar15 = ((long)pppppplStack_a0 - (long)pppppplStack_a8 >> 5) * -0x5555555555555555;
        uStack_3f0 = uStack_3f0 + 4;
        lVar14 = lVar14 + 0x180;
        uVar24 = uVar2;
      } while (uVar2 < uVar15);
    }
    uStack_3e0 = (undefined **)&pppppplStack_a8;
    FUN_109ffe3e8(&uStack_3e0);
  }
  else if (&pppplStack_200 != param_2) {
    FUN_109ffe85c(&pppplStack_200,*param_2,param_2[1],
                  ((long)param_2[1] - (long)*param_2 >> 5) * -0x5555555555555555);
  }
  iStack_3e4 = (int)((ulong)((long)pppplStack_1f8 - (long)pppplStack_200) >> 5) * -0x55555555;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_1e0,&iStack_3e4,4);
  pppplVar21 = pppplStack_1f8;
  if (pppplStack_200 != pppplStack_1f8) {
    ppuVar3 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    ppppplVar23 = (long *****)pppplStack_200;
    do {
      uVar7 = *(uint *)ppppplVar23;
      __ZNSt3__19to_stringEi(&uStack_278,(ulong)(uVar7 & 7));
      puVar13 = &uStack_278;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar13,0,&UNK_10f630777,0x11);
      uVar7 = 0x61 >> (ulong)(uVar7 & 7);
      pppppplStack_3d8 = (long ******)puVar13[1];
      uStack_3e0 = (undefined **)*puVar13;
      uStack_3d0 = (undefined **)puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      pppppplStack_a0 = (long ******)(long)uStack_3d0._7_1_;
      pppppplStack_a8 = (long ******)&uStack_3e0;
      if ((long)pppppplStack_a0 < 0) {
        pppppplStack_a8 = (long ******)uStack_3e0;
        pppppplStack_a0 = pppppplStack_3d8;
        if ((uVar7 & 1) == 0) goto LAB_109fed604;
        __ZdlPv();
      }
      else if ((uVar7 & 1) == 0) {
LAB_109fed604:
        FUN_10a0edfc4(&pppppplStack_a8);
        goto LAB_109fed60c;
      }
      if (lStack_268 < 0) {
        __ZdlPv(uStack_278);
      }
      uVar7 = *(uint *)((long)ppppplVar23 + 4);
      __ZNSt3__19to_stringEi(&uStack_278,uVar7);
      puVar13 = &uStack_278;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar13,0,&UNK_10f630789,0x10);
      pppppplStack_3d8 = (long ******)puVar13[1];
      uStack_3e0 = (undefined **)*puVar13;
      uStack_3d0 = (undefined **)puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      pppppplStack_a0 = (long ******)(long)uStack_3d0._7_1_;
      if ((long)pppppplStack_a0 < 0) {
        pppppplStack_a8 = (long ******)uStack_3e0;
        pppppplStack_a0 = pppppplStack_3d8;
        if (uVar7 != 2) goto LAB_109fed5f8;
        __ZdlPv();
      }
      else {
        pppppplStack_a8 = (long ******)&uStack_3e0;
        if (uVar7 != 2) {
LAB_109fed5f8:
          FUN_10a0edfc4(&pppppplStack_a8);
          goto LAB_109fed60c;
        }
      }
      if (lStack_268 < 0) {
        __ZdlPv(uStack_278);
      }
      uStack_278 = (long ******)0x0;
      ppppplStack_270 = (long *****)0x0;
      lStack_268 = 0;
      uStack_88 = 0;
      lStack_90 = 0;
      puVar19 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      lStack_90 = (long)puVar19 + 4;
      uStack_88 = 4;
      *(undefined1 *)(puVar19 + 1) = 0;
      *puVar19 = 0x676e702e00000001;
      uStack_b0 = 0;
      uStack_c0 = (long ******)CONCAT44(uStack_c0._4_4_,0x1010000);
      pppplStack_b8 = (long ****)ppppplVar23;
      FUN_10a0f4340(&uStack_3e0,&uStack_c0,0);
      uStack_98 = 0;
      pppppplStack_a8 = (long ******)CONCAT44(pppppplStack_a8._4_4_,0x1010000);
      ppplStack_d0 = (long ***)0x0;
      uStack_d8 = (long ****)0x0;
      uStack_c8 = 0;
      pppppplStack_a0 = (long ******)&uStack_3e0;
      func_0x000109b7fb60(&lStack_90,&pppppplStack_a8,&uStack_278,&uStack_d8);
      if (uStack_d8 != (long ****)0x0) {
        ppplStack_d0 = (long ***)uStack_d8;
        __ZdlPv();
      }
      if (lStack_3a8 != 0) {
        piVar18 = (int *)(lStack_3a8 + 0x14);
        do {
          iVar5 = *piVar18;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar12) {
            *piVar18 = iVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar5 + -1 == 0) {
          func_0x000109a848d4(&uStack_3e0);
        }
      }
      lStack_3a8 = 0;
      ppuStack_3c8 = (undefined **)0x0;
      uStack_3d0 = (undefined **)0x0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      if (0 < uStack_3e0._4_4_) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)pppppplStack_3a0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_3e0._4_4_);
      }
      if (puStack_398 != &uStack_390 && puStack_398 != (undefined8 *)0x0) {
        _free(puStack_398[-1]);
      }
      lVar14 = lStack_90;
      uStack_88 = 0;
      lStack_90 = 0;
      if (lVar14 != 0) {
        piVar18 = (int *)(lVar14 + -4);
        do {
          iVar5 = *piVar18;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar12) {
            *piVar18 = iVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar5 + -1 == 0) {
          _free(*(undefined8 *)(lVar14 + -0xc));
        }
      }
      FUN_109febc44(&uStack_3e0);
      pppppplStack_a8 = (long ******)((ulong)pppppplStack_a8 & 0xffffffff00000000);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_3d0,&pppppplStack_a8,4);
      uStack_c0 = (long ******)(CONCAT44(uStack_c0._4_4_,*(uint *)ppppplVar23) & 0xffffffff00000fff)
      ;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_3d0,&uStack_c0,4);
      uStack_d8 = (long ****)CONCAT44(uStack_d8._4_4_,(int)ppppplStack_270 - (int)uStack_278);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_3d0,&uStack_d8,4);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&uStack_3d0,uStack_278,(long)ppppplStack_270 - (long)uStack_278);
      func_0x00010a002480(&uStack_218,&ppuStack_3c8,&lStack_90);
      ppppppplVar4 = (long *******)pppppplStack_210;
      if (-1 < (long)uStack_208) {
        ppppppplVar4 = (long *******)(uStack_208 >> 0x38);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&uStack_218,(long)ppppppplVar4 + 3U & 0xfffffffffffffffc,0);
      appuStack_360[0] = &PTR_DAT_1108a5a88;
      uStack_3e0 = &PTR_SUB_1108a5a38;
      uStack_3d0 = &PTR_DAT_1108a5a60;
      ppuStack_3c8 = &PTR_DAT_11088d7b0;
      if (cStack_371 < '\0') {
        __ZdlPv(uStack_388);
      }
      ppuStack_3c8 = ppuVar3;
      __ZNSt3__16localeD1Ev(&uStack_3c0);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_3e0,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_360);
      if (uStack_278 != (long ******)0x0) {
        ppppplStack_270 = (long *****)uStack_278;
        __ZdlPv();
      }
      ppppppplVar4 = (long *******)pppppplStack_210;
      puVar9 = (undefined4 *)CONCAT44(uStack_214,uStack_218);
      if (-1 < (long)uStack_208) {
        ppppppplVar4 = (long *******)(uStack_208 >> 0x38);
        puVar9 = &uStack_218;
      }
      FUN_10a002568(&ppuStack_1e0,puVar9,ppppppplVar4);
      if ((long)uStack_208 < 0) {
        __ZdlPv(CONCAT44(uStack_214,uStack_218));
      }
      ppppplVar23 = ppppplVar23 + 0xc;
    } while (ppppplVar23 != (long *****)pppplVar21);
  }
  func_0x00010a002480(param_1,&ppuStack_1d8,&uStack_3e0);
  uVar24 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar24 = (ulong)*(byte *)(param_1 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (param_1,uVar24 + 3 & 0xfffffffffffffffc,0);
  uStack_3e0 = (undefined **)&pppplStack_200;
  FUN_109ffe3e8(&uStack_3e0);
  ppuStack_1e0 = &PTR_DAT_11088d6e0;
  appuStack_170[0] = &PTR_DAT_11088d708;
  ppuStack_1d8 = &PTR_DAT_11088d7b0;
  if (cStack_181 < '\0') {
    __ZdlPv(uStack_198);
  }
  ppuStack_1d8 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_1d0);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1e0,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_170);
  return;
}



/* Entry: 109fed7e0; end: 109fed893;  */

undefined8 * FUN_109fed7e0(undefined8 *param_1)

{
  param_1[0xe] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
  param_1[0x14] = 0;
  *param_1 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xe,param_1 + 1);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *param_1 = &PTR_DAT_11088d6e0;
  param_1[0xe] = &PTR_DAT_11088d708;
  FUN_10a0022d0(param_1 + 1,0x10);
  return param_1;
}



/* Entry: 109fed894; end: 109fed8e3;  */

void FUN_109fed894(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000109ffe69c(uVar1);
    lVar2 = uVar1 + 0x60;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    func_0x00010919d830();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109fed8e4; end: 109fed933;  */

void FUN_109fed8e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109ffe7d8(uVar1);
    lVar2 = uVar1 + 0x60;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    func_0x00010938efac();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109fed934; end: 109fedee3;  */

void FUN_109fed934(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 ***pppuVar8;
  long **pplVar9;
  long lVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 ***pppuVar18;
  long *plVar19;
  long lVar20;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 *puStack_c0;
  char cStack_b1;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  
  iVar3 = *(int *)(param_2 + *param_3 + 4);
  *param_3 = *param_3 + 8;
  __ZNSt3__19to_stringEj(&ppuStack_b0,iVar3);
  pppuVar8 = &ppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f630722,0x16);
  puStack_88 = pppuVar8[1];
  ppuStack_90 = *pppuVar8;
  uStack_80 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  puStack_c0 = (undefined8 *)(long)uStack_80._7_1_;
  if ((long)puStack_c0 < 0) {
    ppuStack_c8 = ppuStack_90;
    puStack_c0 = puStack_88;
    if (iVar3 == 2) {
      __ZdlPv();
      goto LAB_109fed9e0;
    }
  }
  else {
    ppuStack_c8 = &ppuStack_90;
    if (iVar3 == 2) {
LAB_109fed9e0:
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppuStack_b0);
      }
      plVar19 = param_1 + 1;
      param_1[2] = 0;
      *plVar19 = 0;
      *param_1 = (long)plVar19;
      param_1[3] = 0;
      lVar20 = *param_3;
      iVar3 = *(int *)(param_2 + lVar20);
      *param_3 = lVar20 + 4;
      __ZNSt3__19to_stringEj(&ppuStack_b0,iVar3);
      pppuVar8 = &ppuStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppuVar8,0,&UNK_10f630722,0x16);
      puStack_88 = pppuVar8[1];
      ppuStack_90 = *pppuVar8;
      uStack_80 = pppuVar8[2];
      pppuVar8[1] = (undefined8 **)0x0;
      pppuVar8[2] = (undefined8 **)0x0;
      *pppuVar8 = (undefined8 **)0x0;
      puStack_c0 = (undefined8 *)(long)uStack_80._7_1_;
      if ((long)puStack_c0 < 0) {
        ppuStack_c8 = ppuStack_90;
        puStack_c0 = puStack_88;
        if (iVar3 == 0) {
          __ZdlPv();
          goto LAB_109feda80;
        }
      }
      else {
        ppuStack_c8 = &ppuStack_90;
        if (iVar3 == 0) {
LAB_109feda80:
          if ((long)uStack_a0 < 0) {
            __ZdlPv(ppuStack_b0);
          }
          uVar4 = *(uint *)(param_2 + *param_3);
          uVar17 = (ulong)uVar4;
          *param_3 = *param_3 + 4;
          if (uVar4 == 0) {
            lVar15 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = uVar17;
            FUN_109ffeb1c();
            _bzero();
            uVar13 = 0;
            lVar15 = uVar16 + uVar17 * 4;
            lVar10 = *param_3;
            lVar2 = param_2 + lVar10;
            do {
              if (uVar17 == uVar13) {
                *param_3 = lVar10 + 4;
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x109fedddc);
                (*pcVar7)();
              }
              *(undefined4 *)(uVar16 + uVar13 * 4) = *(undefined4 *)(lVar2 + uVar13 * 4);
              uVar13 = uVar13 + 1;
              lVar10 = lVar10 + 4;
            } while (uVar17 != uVar13);
            *param_3 = lVar10;
          }
          FUN_109fec1e8(&ppuStack_90,param_2,param_3);
          lVar10 = ((long)puStack_88 - (long)ppuStack_90 >> 5) * -0x5555555555555555;
          __ZNSt3__19to_stringEm(&ppuStack_c8,lVar10);
          pppuVar8 = &ppuStack_c8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppuVar8,0,&UNK_10f630dd3,0x13);
          puStack_a8 = pppuVar8[1];
          ppuStack_b0 = *pppuVar8;
          uStack_a0 = pppuVar8[2];
          pppuVar8[1] = (undefined8 **)0x0;
          pppuVar8[2] = (undefined8 **)0x0;
          *pppuVar8 = (undefined8 **)0x0;
          puStack_70 = (undefined8 *)(long)uStack_a0._7_1_;
          if ((long)puStack_70 < 0) {
            ppuStack_78 = ppuStack_b0;
            puStack_70 = puStack_a8;
            if (lVar10 - uVar17 == 0) {
              __ZdlPv();
              goto LAB_109fedb94;
            }
          }
          else {
            ppuStack_78 = &ppuStack_b0;
            if (lVar10 - uVar17 == 0) {
LAB_109fedb94:
              if (cStack_b1 < '\0') {
                __ZdlPv(ppuStack_c8);
              }
              lStack_d8 = 0;
              lStack_d0 = 0;
              plStack_e0 = &lStack_d8;
              if (uVar4 != 0) {
                uVar13 = 0;
                do {
                  ppuVar12 = ppuStack_90;
                  uVar11 = ((long)puStack_88 - (long)ppuStack_90 >> 5) * -0x5555555555555555;
                  if ((uVar11 < uVar13 || uVar11 - uVar13 == 0) ||
                     (uVar13 == (long)(lVar15 - uVar16) >> 2)) goto LAB_109feddfc;
                  pplVar9 = &plStack_e0;
                  FUN_10a0028e8(pplVar9,*(undefined4 *)(uVar16 + uVar13 * 4));
                  pppuVar18 = (undefined8 ***)(ppuVar12 + uVar13 * 0xc);
                  pppuVar8 = (undefined8 ***)(pplVar9 + 5);
                  if (pppuVar8 != pppuVar18) {
                    if (pppuVar18[7] != (undefined8 **)0x0) {
                      piVar1 = (int *)((long)pppuVar18[7] + 0x14);
                      do {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar6) {
                          *piVar1 = *piVar1 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    if (pplVar9[0xc] != (long *)0x0) {
                      piVar1 = (int *)((long)pplVar9[0xc] + 0x14);
                      do {
                        iVar3 = *piVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar6) {
                          *piVar1 = iVar3 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar3 + -1 == 0) {
                        func_0x000109a848d4(pppuVar8);
                      }
                    }
                    pplVar9[0xc] = (long *)0x0;
                    pplVar9[8] = (long *)0x0;
                    pplVar9[7] = (long *)0x0;
                    pplVar9[10] = (long *)0x0;
                    pplVar9[9] = (long *)0x0;
                    if (*(int *)((long)pplVar9 + 0x2c) < 1) {
                      *(undefined4 *)pppuVar8 = *(undefined4 *)pppuVar18;
LAB_109fedcb0:
                      if (2 < *(int *)((long)pppuVar18 + 4)) goto LAB_109fedce4;
                      *(int *)((long)pplVar9 + 0x2c) = *(int *)((long)pppuVar18 + 4);
                      pplVar9[6] = (long *)pppuVar18[1];
                      ppuVar12 = pppuVar18[9];
                      plVar14 = pplVar9[0xe];
                      *plVar14 = (long)*ppuVar12;
                      plVar14[1] = (long)ppuVar12[1];
                    }
                    else {
                      lVar10 = 0;
                      plVar14 = pplVar9[0xd];
                      do {
                        *(undefined4 *)((long)plVar14 + lVar10 * 4) = 0;
                        lVar10 = lVar10 + 1;
                      } while (lVar10 < *(int *)((long)pplVar9 + 0x2c));
                      *(undefined4 *)pppuVar8 = *(undefined4 *)pppuVar18;
                      if (*(int *)((long)pplVar9 + 0x2c) < 3) goto LAB_109fedcb0;
LAB_109fedce4:
                      func_0x000109a84868(pppuVar8,pppuVar18);
                    }
                    ppuVar12 = pppuVar18[2];
                    pplVar9[8] = (long *)pppuVar18[3];
                    pplVar9[7] = (long *)ppuVar12;
                    ppuVar12 = pppuVar18[4];
                    pplVar9[10] = (long *)pppuVar18[5];
                    pplVar9[9] = (long *)ppuVar12;
                    ppuVar12 = pppuVar18[6];
                    pplVar9[0xc] = (long *)pppuVar18[7];
                    pplVar9[0xb] = (long *)ppuVar12;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar17);
              }
              *param_3 = ((lVar20 - *param_3 ^ 0xffffffffffffffffU) & 0xfffffffffffffffc) +
                         lVar20 + 4;
              ppuStack_b0 = &ppuStack_90;
              FUN_109ffe3e8(&ppuStack_b0);
              if (uVar16 != 0) {
                __ZdlPv(uVar16);
              }
              FUN_109fff0a0(param_1,param_1[1]);
              *param_1 = (long)plStack_e0;
              param_1[1] = lStack_d8;
              param_1[2] = lStack_d0;
              if (lStack_d0 == 0) {
                *param_1 = (long)plVar19;
              }
              else {
                *(long **)(lStack_d8 + 0x10) = plVar19;
                lStack_d8 = 0;
                lStack_d0 = 0;
                plStack_e0 = &lStack_d8;
              }
              FUN_109fff0a0(&plStack_e0,lStack_d8);
              lVar20 = *param_3;
              *param_3 = lVar20 + 8;
              param_1[3] = *(long *)(param_2 + lVar20);
              return;
            }
          }
          FUN_10a0edfc4(&ppuStack_78);
          goto LAB_109feddfc;
        }
      }
      FUN_10a0edfc4(&ppuStack_c8);
      goto LAB_109feddfc;
    }
  }
  FUN_10a0edfc4(&ppuStack_c8);
LAB_109feddfc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109fede00);
  (*pcVar7)();
}



/* Entry: 109fedee4; end: 109fedfb7;  */

void FUN_109fedee4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  long **pplVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long **pplVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  long **pplVar18;
  undefined4 auStack_1d8 [2];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [16];
  undefined4 auStack_148 [2];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined4 auStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long alStack_80 [4];
  
  uVar10 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar10 < 0) {
    plVar14 = (long *)*param_2;
    if (*(int *)((long)plVar14 + 4) != 1) goto LAB_109fedf44;
    uVar10 = param_2[1];
    param_2 = plVar14;
  }
  else {
    plVar14 = param_2;
    if (*(int *)((long)param_2 + 4) != 1) {
LAB_109fedf44:
      FUN_109fed934(param_1,plVar14,&stack0xffffffffffffffc8);
      uVar10 = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      if (uVar10 == 0) {
        return;
      }
      FUN_10a0edfc4(&stack0xffffffffffffffd0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x109fedfa0);
      (*pcVar7)();
    }
  }
  __ZNSt3__19to_stringEm(&uStack_1a8,uVar10);
  puVar8 = (undefined8 *)&uStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,&UNK_10f6307c3,0x12);
  lStack_128 = puVar8[1];
  uStack_130 = (long *)*puVar8;
  uStack_120 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  alStack_80[0] = (long)uStack_120._7_1_;
  if (alStack_80[0] < 0) {
    plStack_88 = uStack_130;
    alStack_80[0] = lStack_128;
    if (7 < uVar10) {
      __ZdlPv();
      goto LAB_109fee05c;
    }
  }
  else {
    plStack_88 = &uStack_130;
    if (7 < uVar10) {
LAB_109fee05c:
      if (lStack_198 < 0) {
        __ZdlPv(CONCAT44(iStack_1a4,uStack_1a8));
      }
      iVar4 = *(int *)((long)param_2 + 4);
      __ZNSt3__19to_stringEi(&uStack_1a8,iVar4);
      puVar8 = (undefined8 *)&uStack_1a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f6307d6,0x1c);
      lStack_128 = puVar8[1];
      uStack_130 = (long *)*puVar8;
      uStack_120 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      alStack_80[0] = (long)uStack_120._7_1_;
      if (alStack_80[0] < 0) {
        plStack_88 = uStack_130;
        alStack_80[0] = lStack_128;
        if (iVar4 == 1) {
          __ZdlPv();
          goto LAB_109fee0dc;
        }
      }
      else {
        plStack_88 = &uStack_130;
        if (iVar4 == 1) {
LAB_109fee0dc:
          if (lStack_198 < 0) {
            __ZdlPv(CONCAT44(iStack_1a4,uStack_1a8));
          }
          uVar11 = (ulong)(int)param_2[1];
          if ((int)param_2[1] == 0) {
            param_1[2] = 0;
            param_1[1] = 0;
            *param_1 = param_1 + 1;
            param_1[3] = 0;
          }
          else {
            plStack_88 = alStack_80;
            alStack_80[0] = 0;
            alStack_80[1] = 0;
            uVar16 = 0;
            do {
              uVar1 = uVar16 + 1;
              uVar13 = uVar10;
              if (uVar1 < uVar11) {
                uVar13 = (ulong)*(int *)((long)param_2 + uVar1 * 0x14 + 0xc);
              }
              piVar17 = (int *)((long)param_2 + uVar16 * 0x14 + 0xc);
              lVar12 = (long)*piVar17;
              lStack_a0 = 0;
              lStack_98 = 0;
              uStack_90 = 0;
              func_0x000107c2b048(&lStack_a0,(long)param_2 + lVar12,(long)param_2 + uVar13,
                                  uVar13 - lVar12);
              lStack_b8 = 0;
              lStack_b0 = 0;
              uStack_a8 = 0;
              auStack_1c0[0] = 0x81030000;
              plStack_1b8 = &lStack_a0;
              uStack_1b0 = 0;
              func_0x000109b7eff4(&uStack_1a8,auStack_1c0,0xffffffff);
              uStack_138 = 0;
              auStack_148[0] = 0x1010000;
              puStack_140 = (undefined8 *)&uStack_1a8;
              FUN_10a0f4340(&uStack_130,auStack_148,0);
              uStack_c0 = 0;
              auStack_d0[0] = 0x1010000;
              auStack_1d8[0] = 0x2050000;
              uStack_1c8 = 0;
              plStack_1d0 = &lStack_b8;
              puStack_c8 = &uStack_130;
              func_0x000109a3dcec(auStack_d0,auStack_1d8);
              if (lStack_f8 != 0) {
                piVar2 = (int *)(lStack_f8 + 0x14);
                do {
                  iVar4 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  func_0x000109a848d4(&uStack_130);
                }
              }
              lStack_f8 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              if (0 < uStack_130._4_4_) {
                lVar12 = 0;
                do {
                  *(undefined4 *)(lStack_f0 + lVar12 * 4) = 0;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < uStack_130._4_4_);
              }
              if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_e8 + -8));
              }
              if (lStack_170 != 0) {
                piVar2 = (int *)(lStack_170 + 0x14);
                do {
                  iVar4 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1a8);
                }
              }
              lStack_170 = 0;
              uStack_190 = 0;
              lStack_198 = 0;
              uStack_180 = 0;
              uStack_188 = 0;
              if (0 < iStack_1a4) {
                lVar12 = 0;
                do {
                  *(undefined4 *)(lStack_168 + lVar12 * 4) = 0;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < iStack_1a4);
              }
              if (puStack_160 != auStack_158 && puStack_160 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_160 + -8));
              }
              uStack_130 = (long *)&UNK_10f6307f3;
              lStack_128 = 0x25;
              if (lStack_b8 == lStack_b0) {
                FUN_10a0edfc4(&uStack_130);
                goto LAB_109fee538;
              }
              uVar11 = 0;
              do {
                lVar12 = lStack_b8;
                if (piVar17[uVar11 + 1] != 9) {
                  uStack_130 = (long *)&UNK_10f630819;
                  lStack_128 = 0x3b;
                  if ((ulong)((lStack_b0 - lStack_b8 >> 5) * -0x5555555555555555) <= uVar11) {
                    FUN_10a0edfc4(&uStack_130);
                    goto LAB_109fee538;
                  }
                  pplVar9 = &plStack_88;
                  FUN_10a0028e8();
                  pplVar18 = (long **)(lVar12 + uVar11 * 0x60);
                  pplVar3 = pplVar9 + 5;
                  if (pplVar3 == pplVar18) goto LAB_109fee454;
                  if (pplVar18[7] != (long *)0x0) {
                    piVar2 = (int *)((long)pplVar18[7] + 0x14);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar6) {
                        *piVar2 = *piVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  if (pplVar9[0xc] != (long *)0x0) {
                    piVar2 = (int *)((long)pplVar9[0xc] + 0x14);
                    do {
                      iVar4 = *piVar2;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar6) {
                        *piVar2 = iVar4 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar4 + -1 == 0) {
                      func_0x000109a848d4(pplVar3);
                    }
                  }
                  pplVar9[0xc] = (long *)0x0;
                  pplVar9[8] = (long *)0x0;
                  pplVar9[7] = (long *)0x0;
                  pplVar9[10] = (long *)0x0;
                  pplVar9[9] = (long *)0x0;
                  if (*(int *)((long)pplVar9 + 0x2c) < 1) {
                    *(undefined4 *)pplVar3 = *(undefined4 *)pplVar18;
LAB_109fee3fc:
                    if (2 < *(int *)((long)pplVar18 + 4)) goto LAB_109fee430;
                    *(int *)((long)pplVar9 + 0x2c) = *(int *)((long)pplVar18 + 4);
                    pplVar9[6] = pplVar18[1];
                    plVar14 = pplVar18[9];
                    plVar15 = pplVar9[0xe];
                    *plVar15 = *plVar14;
                    plVar15[1] = plVar14[1];
                  }
                  else {
                    lVar12 = 0;
                    plVar14 = pplVar9[0xd];
                    do {
                      *(undefined4 *)((long)plVar14 + lVar12 * 4) = 0;
                      lVar12 = lVar12 + 1;
                    } while (lVar12 < *(int *)((long)pplVar9 + 0x2c));
                    *(undefined4 *)pplVar3 = *(undefined4 *)pplVar18;
                    if (*(int *)((long)pplVar9 + 0x2c) < 3) goto LAB_109fee3fc;
LAB_109fee430:
                    func_0x000109a84868(pplVar3,pplVar18);
                  }
                  plVar14 = pplVar18[2];
                  pplVar9[8] = pplVar18[3];
                  pplVar9[7] = plVar14;
                  plVar14 = pplVar18[4];
                  pplVar9[10] = pplVar18[5];
                  pplVar9[9] = plVar14;
                  plVar14 = pplVar18[6];
                  pplVar9[0xc] = pplVar18[7];
                  pplVar9[0xb] = plVar14;
                }
LAB_109fee454:
                uVar11 = uVar11 + 1;
              } while (uVar11 != 4);
              uStack_130 = &lStack_b8;
              FUN_109ffe3e8(&uStack_130);
              if (lStack_a0 != 0) {
                lStack_98 = lStack_a0;
                __ZdlPv();
              }
              uVar11 = (ulong)(int)param_2[1];
              uVar16 = uVar1;
            } while (uVar1 < uVar11);
            uStack_130 = (long *)NEON_rev64(*(undefined8 *)plStack_88[0xd],4);
            FUN_109fee848(param_1,&plStack_88,&uStack_130);
            FUN_109fff0a0(&plStack_88,alStack_80[0]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&plStack_88);
      goto LAB_109fee538;
    }
  }
  FUN_10a0edfc4(&plStack_88);
LAB_109fee538:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109fee53c);
  (*pcVar7)();
}



/* Entry: 109fedfb8; end: 109fee5eb;  */

void FUN_109fedfb8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  long **pplVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long **pplVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long **pplVar17;
  undefined4 auStack_1d8 [2];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [16];
  undefined4 auStack_148 [2];
  undefined4 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined4 auStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long alStack_80 [4];
  
  __ZNSt3__19to_stringEm(&uStack_1a8,param_3);
  puVar8 = &uStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,&UNK_10f6307c3,0x12);
  lStack_128 = puVar8[1];
  uStack_130 = (long *)*puVar8;
  uStack_120 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  alStack_80[0] = (long)uStack_120._7_1_;
  if (alStack_80[0] < 0) {
    plStack_88 = uStack_130;
    alStack_80[0] = lStack_128;
    if (7 < param_3) {
      __ZdlPv();
      goto LAB_109fee05c;
    }
  }
  else {
    plStack_88 = &uStack_130;
    if (7 < param_3) {
LAB_109fee05c:
      if (lStack_198 < 0) {
        __ZdlPv(CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8));
      }
      iVar4 = *(int *)(param_2 + 4);
      __ZNSt3__19to_stringEi(&uStack_1a8,iVar4);
      puVar8 = &uStack_1a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f6307d6,0x1c);
      lStack_128 = puVar8[1];
      uStack_130 = (long *)*puVar8;
      uStack_120 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      alStack_80[0] = (long)uStack_120._7_1_;
      if (alStack_80[0] < 0) {
        plStack_88 = uStack_130;
        alStack_80[0] = lStack_128;
        if (iVar4 == 1) {
          __ZdlPv();
          goto LAB_109fee0dc;
        }
      }
      else {
        plStack_88 = &uStack_130;
        if (iVar4 == 1) {
LAB_109fee0dc:
          if (lStack_198 < 0) {
            __ZdlPv(CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8));
          }
          uVar10 = (ulong)*(int *)(param_2 + 8);
          if (*(int *)(param_2 + 8) == 0) {
            param_1[2] = 0;
            param_1[1] = 0;
            *param_1 = param_1 + 1;
            param_1[3] = 0;
          }
          else {
            plStack_88 = alStack_80;
            alStack_80[0] = 0;
            alStack_80[1] = 0;
            uVar15 = 0;
            do {
              uVar1 = uVar15 + 1;
              uVar12 = param_3;
              if (uVar1 < uVar10) {
                uVar12 = (ulong)*(int *)(param_2 + 0xc + uVar1 * 0x14);
              }
              piVar16 = (int *)(param_2 + 0xc + uVar15 * 0x14);
              lVar11 = (long)*piVar16;
              lStack_a0 = 0;
              lStack_98 = 0;
              uStack_90 = 0;
              func_0x000107c2b048(&lStack_a0,param_2 + lVar11,param_2 + uVar12,uVar12 - lVar11);
              lStack_b8 = 0;
              lStack_b0 = 0;
              uStack_a8 = 0;
              auStack_1c0[0] = 0x81030000;
              plStack_1b8 = &lStack_a0;
              uStack_1b0 = 0;
              func_0x000109b7eff4(&uStack_1a8,auStack_1c0,0xffffffff);
              uStack_138 = 0;
              auStack_148[0] = 0x1010000;
              puStack_140 = (undefined4 *)&uStack_1a8;
              FUN_10a0f4340(&uStack_130,auStack_148,0);
              uStack_c0 = 0;
              auStack_d0[0] = 0x1010000;
              auStack_1d8[0] = 0x2050000;
              uStack_1c8 = 0;
              plStack_1d0 = &lStack_b8;
              puStack_c8 = &uStack_130;
              func_0x000109a3dcec(auStack_d0,auStack_1d8);
              if (lStack_f8 != 0) {
                piVar2 = (int *)(lStack_f8 + 0x14);
                do {
                  iVar4 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  func_0x000109a848d4(&uStack_130);
                }
              }
              lStack_f8 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              if (0 < uStack_130._4_4_) {
                lVar11 = 0;
                do {
                  *(undefined4 *)(lStack_f0 + lVar11 * 4) = 0;
                  lVar11 = lVar11 + 1;
                } while (lVar11 < uStack_130._4_4_);
              }
              if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_e8 + -8));
              }
              if (lStack_170 != 0) {
                piVar2 = (int *)(lStack_170 + 0x14);
                do {
                  iVar4 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1a8);
                }
              }
              lStack_170 = 0;
              uStack_190 = 0;
              lStack_198 = 0;
              uStack_180 = 0;
              uStack_188 = 0;
              if (0 < uStack_1a8._4_4_) {
                lVar11 = 0;
                do {
                  *(undefined4 *)(lStack_168 + lVar11 * 4) = 0;
                  lVar11 = lVar11 + 1;
                } while (lVar11 < uStack_1a8._4_4_);
              }
              if (puStack_160 != auStack_158 && puStack_160 != (undefined1 *)0x0) {
                _free(*(undefined8 *)(puStack_160 + -8));
              }
              uStack_130 = (long *)&UNK_10f6307f3;
              lStack_128 = 0x25;
              if (lStack_b8 == lStack_b0) {
                FUN_10a0edfc4(&uStack_130);
                goto LAB_109fee538;
              }
              uVar10 = 0;
              do {
                lVar11 = lStack_b8;
                if (piVar16[uVar10 + 1] != 9) {
                  uStack_130 = (long *)&UNK_10f630819;
                  lStack_128 = 0x3b;
                  if ((ulong)((lStack_b0 - lStack_b8 >> 5) * -0x5555555555555555) <= uVar10) {
                    FUN_10a0edfc4(&uStack_130);
                    goto LAB_109fee538;
                  }
                  pplVar9 = &plStack_88;
                  FUN_10a0028e8();
                  pplVar17 = (long **)(lVar11 + uVar10 * 0x60);
                  pplVar3 = pplVar9 + 5;
                  if (pplVar3 == pplVar17) goto LAB_109fee454;
                  if (pplVar17[7] != (long *)0x0) {
                    piVar2 = (int *)((long)pplVar17[7] + 0x14);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar6) {
                        *piVar2 = *piVar2 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  if (pplVar9[0xc] != (long *)0x0) {
                    piVar2 = (int *)((long)pplVar9[0xc] + 0x14);
                    do {
                      iVar4 = *piVar2;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar6) {
                        *piVar2 = iVar4 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar4 + -1 == 0) {
                      func_0x000109a848d4(pplVar3);
                    }
                  }
                  pplVar9[0xc] = (long *)0x0;
                  pplVar9[8] = (long *)0x0;
                  pplVar9[7] = (long *)0x0;
                  pplVar9[10] = (long *)0x0;
                  pplVar9[9] = (long *)0x0;
                  if (*(int *)((long)pplVar9 + 0x2c) < 1) {
                    *(undefined4 *)pplVar3 = *(undefined4 *)pplVar17;
LAB_109fee3fc:
                    if (2 < *(int *)((long)pplVar17 + 4)) goto LAB_109fee430;
                    *(int *)((long)pplVar9 + 0x2c) = *(int *)((long)pplVar17 + 4);
                    pplVar9[6] = pplVar17[1];
                    plVar13 = pplVar17[9];
                    plVar14 = pplVar9[0xe];
                    *plVar14 = *plVar13;
                    plVar14[1] = plVar13[1];
                  }
                  else {
                    lVar11 = 0;
                    plVar13 = pplVar9[0xd];
                    do {
                      *(undefined4 *)((long)plVar13 + lVar11 * 4) = 0;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < *(int *)((long)pplVar9 + 0x2c));
                    *(undefined4 *)pplVar3 = *(undefined4 *)pplVar17;
                    if (*(int *)((long)pplVar9 + 0x2c) < 3) goto LAB_109fee3fc;
LAB_109fee430:
                    func_0x000109a84868(pplVar3,pplVar17);
                  }
                  plVar13 = pplVar17[2];
                  pplVar9[8] = pplVar17[3];
                  pplVar9[7] = plVar13;
                  plVar13 = pplVar17[4];
                  pplVar9[10] = pplVar17[5];
                  pplVar9[9] = plVar13;
                  plVar13 = pplVar17[6];
                  pplVar9[0xc] = pplVar17[7];
                  pplVar9[0xb] = plVar13;
                }
LAB_109fee454:
                uVar10 = uVar10 + 1;
              } while (uVar10 != 4);
              uStack_130 = &lStack_b8;
              FUN_109ffe3e8(&uStack_130);
              if (lStack_a0 != 0) {
                lStack_98 = lStack_a0;
                __ZdlPv();
              }
              uVar10 = (ulong)*(int *)(param_2 + 8);
              uVar15 = uVar1;
            } while (uVar1 < uVar10);
            uStack_130 = (long *)NEON_rev64(*(undefined8 *)plStack_88[0xd],4);
            FUN_109fee848(param_1,&plStack_88,&uStack_130);
            FUN_109fff0a0(&plStack_88,alStack_80[0]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&plStack_88);
      goto LAB_109fee538;
    }
  }
  FUN_10a0edfc4(&plStack_88);
LAB_109fee538:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109fee53c);
  (*pcVar7)();
}



/* Entry: 109fee5ec; end: 109fee68b;  */

void FUN_109fee5ec(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  plVar3 = (long *)*param_2;
  while (plVar3 != param_2 + 1) {
    FUN_10a002b40(param_1,plVar3 + 4,plVar3 + 4);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109fee68c; end: 109fee847;  */

void FUN_109fee68c(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  plVar10 = (long *)(param_2 + 8);
  plVar6 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar6 == (long *)0x0) {
LAB_109fee6e4:
    plVar11 = plVar10;
  }
  else {
    do {
      lVar8 = 8;
      if (param_3 <= *(uint *)(plVar6 + 4)) {
        lVar8 = 0;
        plVar11 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar8);
    } while (plVar6 != (long *)0x0);
    if ((plVar11 == plVar10) || (param_3 < *(uint *)(plVar11 + 4))) goto LAB_109fee6e4;
  }
  func_0x000107c2b054(alStack_78,(&PTR_DAT_110b99eb0)[param_3]);
  plVar6 = alStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar6,0,&UNK_10f6308bb,0x1f);
  lStack_58 = plVar6[1];
  ppuStack_60 = (undefined8 **)*plVar6;
  uStack_50 = plVar6[2];
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = 0;
  lStack_38 = (long)uStack_50._7_1_;
  if (lStack_38 < 0) {
    ppuStack_40 = ppuStack_60;
    lStack_38 = lStack_58;
    if (plVar11 != plVar10) {
      __ZdlPv();
      goto LAB_109fee75c;
    }
  }
  else {
    ppuStack_40 = &ppuStack_60;
    if (plVar11 != plVar10) {
LAB_109fee75c:
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      lVar8 = plVar11[5];
      iVar2 = *(int *)((long)plVar11 + 0x2c);
      lVar13 = plVar11[8];
      lVar12 = plVar11[7];
      param_1[1] = plVar11[6];
      *param_1 = lVar8;
      param_1[3] = lVar13;
      param_1[2] = lVar12;
      lVar8 = plVar11[9];
      param_1[5] = plVar11[10];
      param_1[4] = lVar8;
      lVar8 = plVar11[0xc];
      lVar12 = plVar11[0xb];
      param_1[7] = plVar11[0xc];
      param_1[6] = lVar12;
      param_1[10] = 0;
      param_1[8] = (long)(param_1 + 1);
      param_1[9] = (long)(param_1 + 10);
      param_1[0xb] = 0;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar2 = *(int *)((long)plVar11 + 0x2c);
      }
      if (iVar2 < 3) {
        puVar7 = (undefined8 *)plVar11[0xe];
        puVar9 = (undefined8 *)param_1[9];
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
      }
      else {
        *(undefined4 *)((long)param_1 + 4) = 0;
        func_0x000109a84868(param_1);
      }
      return;
    }
  }
  FUN_10a0edfc4(&ppuStack_40);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109fee814);
  (*pcVar5)();
}



/* Entry: 109fee848; end: 109fee89b;  */

undefined8 * FUN_109fee848(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  param_1[3] = *param_3;
  FUN_109fee89c();
  return param_1;
}



/* Entry: 109fee89c; end: 109feeabf;  */

undefined8 * FUN_109fee89c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 auStack_d8 [2];
  long *plStack_d0;
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
  undefined8 *puStack_78;
  undefined8 auStack_70 [2];
  
  puVar14 = param_1 + 1;
  plVar9 = (long *)*puVar14;
  puVar8 = param_1;
  FUN_109fff0a0();
  *param_1 = puVar14;
  param_1[2] = 0;
  *puVar14 = 0;
  plVar16 = (long *)*param_2;
  if (plVar16 != param_2 + 1) {
    puVar15 = (undefined8 *)((ulong)&uStack_c0 | 4);
    do {
      uStack_c0 = &UNK_10f6308db;
      uStack_b8 = 0x23;
      if (((int *)plVar16[0xd])[1] != *(int *)(param_1 + 3) ||
          *(int *)plVar16[0xd] != *(int *)((long)param_1 + 0x1c)) {
        puVar8 = &uStack_c0;
        FUN_10a0edfc4();
        func_0x00010567aa40(&uStack_c0);
        puVar15 = puVar8;
        __Unwind_Resume();
        pcStack_e8 = FUN_109feeac0;
        puStack_100 = param_1;
        puStack_f8 = puVar8;
        puStack_f0 = &stack0xfffffffffffffff0;
        puVar15[2] = 0;
        puVar15[1] = 0;
        *puVar15 = puVar15 + 1;
        puVar15[3] = 0;
        puStack_110 = &UNK_10f630887;
        uStack_108 = 0x10;
        if (plVar9[2] != 0) {
          uVar18 = NEON_rev64(**(undefined8 **)(*plVar9 + 0x68),4);
          puVar15[3] = uVar18;
          FUN_109fee89c(puVar15);
          return puVar15;
        }
        FUN_10a0edfc4(&puStack_110);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109feeb40);
        (*pcVar5)();
      }
      plStack_d0 = plVar16 + 5;
      uStack_c8 = 0;
      auStack_d8[0] = 0x1010000;
      FUN_10a0f4340(&uStack_c0,auStack_d8,0);
      plVar9 = (long *)(ulong)*(uint *)(plVar16 + 4);
      puVar7 = param_1;
      FUN_10a0028e8();
      puVar8 = puVar7;
      if (puVar7[0xc] != 0) {
        piVar1 = (int *)(puVar7[0xc] + 0x14);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar8 = puVar7 + 5;
          func_0x000109a848d4(puVar8);
        }
      }
      puVar7[0xc] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      if (0 < *(int *)((long)puVar7 + 0x2c)) {
        lVar11 = 0;
        lVar12 = puVar7[0xd];
        do {
          *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((long)puVar7 + 0x2c));
      }
      puVar7[6] = uStack_b8;
      puVar7[5] = uStack_c0;
      puVar7[8] = uStack_a8;
      puVar7[7] = uStack_b0;
      puVar7[10] = uStack_98;
      puVar7[9] = uStack_a0;
      puVar7[0xc] = uStack_88;
      puVar7[0xb] = uStack_90;
      puVar13 = (undefined8 *)puVar7[0xe];
      puVar2 = puVar7 + 0xf;
      iVar10 = uStack_c0._4_4_;
      if (puVar13 != puVar2) {
        if (puVar13 != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)puVar13[-1];
          _free(puVar8);
          iVar10 = uStack_c0._4_4_;
        }
        puVar7[0xd] = puVar7 + 6;
        puVar7[0xe] = puVar2;
        puVar13 = puVar2;
      }
      if (iVar10 < 3) {
        *puVar13 = *puStack_78;
        puVar13[1] = puStack_78[1];
        uStack_c0 = (undefined *)CONCAT44(uStack_c0._4_4_,0x42ff0000);
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        if (puStack_78 != auStack_70) {
          puVar8 = (undefined8 *)puStack_78[-1];
          _free(puVar8);
        }
      }
      else {
        puVar7[0xd] = uStack_80;
        puVar7[0xe] = puStack_78;
      }
      plVar4 = (long *)plVar16[1];
      plVar17 = plVar16;
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar16 = (long *)plVar17[2];
          bVar6 = (long *)*plVar16 != plVar17;
          plVar17 = plVar16;
        } while (bVar6);
      }
      else {
        do {
          plVar16 = plVar4;
          plVar4 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
    } while (plVar16 != param_2 + 1);
  }
  return puVar8;
}



/* Entry: 109feeac0; end: 109feeb57;  */

undefined8 * FUN_109feeac0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  param_1[3] = 0;
  puStack_30 = &UNK_10f630887;
  uStack_28 = 0x10;
  if (param_2[2] != 0) {
    uVar2 = NEON_rev64(**(undefined8 **)(*param_2 + 0x68),4);
    param_1[3] = uVar2;
    FUN_109fee89c(param_1);
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109feeb40);
  (*pcVar1)();
}



/* Entry: 109feeb58; end: 109feee2f;  */

void FUN_109feeb58(long param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 auStack_80 [3];
  int iStack_68;
  int iStack_64;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uStack_44 = (undefined4)param_3;
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_109feebd8:
    FUN_109ffeb50(param_1,param_2);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    return;
  }
  uVar5 = (ulong)*(uint *)(param_4 + 4);
  if ((int)*(uint *)(param_4 + 4) < 3) {
    lVar8 = (long)*(int *)(param_4 + 0xc) * (long)*(int *)(param_4 + 8);
  }
  else {
    lVar8 = 1;
    piVar12 = *(int **)(param_4 + 0x40);
    do {
      lVar8 = lVar8 * *piVar12;
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar5 != 0);
  }
  if (lVar8 == 0) goto LAB_109feebd8;
  if (*(long *)(param_2 + 0x10) == 0) {
    puVar9 = *(undefined4 **)(param_4 + 0x40);
    puVar6 = puVar9 + 1;
  }
  else {
    puVar6 = (undefined4 *)(param_2 + 0x18);
    puVar9 = (undefined4 *)(param_2 + 0x1c);
  }
  uStack_d0 = (undefined *)CONCAT44(*puVar9,*puVar6);
  FUN_109fee848(param_1,param_2,&uStack_d0);
  if (param_5 != 0) {
    if ((*(int **)(param_4 + 0x40))[1] != *(int *)(param_1 + 0x18) ||
        **(int **)(param_4 + 0x40) != *(int *)(param_1 + 0x1c)) {
      uStack_c0 = 0;
      uStack_d0 = (undefined *)CONCAT44(uStack_d0._4_4_,0x1010000);
      auStack_60[0] = 0x2010000;
      uStack_50 = 0;
      lStack_c8 = param_4;
      iStack_68 = *(int *)(param_1 + 0x18);
      iStack_64 = *(int *)(param_1 + 0x1c);
      lStack_58 = param_4;
      func_0x000109b0f718(0,0,&uStack_d0,auStack_60,&iStack_68,1);
      goto LAB_109feec9c;
    }
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    uStack_d0 = &UNK_10f630898;
    lStack_c8 = 0x22;
    if (*(int *)(param_2 + 0x18) != (*(int **)(param_4 + 0x40))[1] ||
        *(int *)(param_2 + 0x1c) != **(int **)(param_4 + 0x40)) {
      FUN_10a0edfc4(&uStack_d0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109feee00);
      (*pcVar3)();
    }
  }
LAB_109feec9c:
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  lStack_58 = param_4;
  FUN_10a0f4340(&uStack_d0,auStack_60,0);
  FUN_10a0028e8(param_1,param_3,&uStack_44);
  if (*(long *)(param_1 + 0x60) != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
    do {
      iVar4 = *piVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar2) {
        *piVar12 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x28);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar8 = 0;
    lVar10 = *(long *)(param_1 + 0x68);
    do {
      *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x2c));
  }
  *(long *)(param_1 + 0x30) = lStack_c8;
  *(undefined **)(param_1 + 0x28) = uStack_d0;
  *(undefined8 *)(param_1 + 0x40) = uStack_b8;
  *(undefined8 *)(param_1 + 0x38) = uStack_c0;
  *(undefined8 *)(param_1 + 0x50) = uStack_a8;
  *(undefined8 *)(param_1 + 0x48) = uStack_b0;
  *(undefined8 *)(param_1 + 0x60) = uStack_98;
  *(undefined8 *)(param_1 + 0x58) = uStack_a0;
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  puVar7 = (undefined8 *)(param_1 + 0x78);
  iVar4 = uStack_d0._4_4_;
  if (puVar11 != puVar7) {
    if (puVar11 != (undefined8 *)0x0) {
      _free(puVar11[-1]);
    }
    *(long *)(param_1 + 0x68) = param_1 + 0x30;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar11 = puVar7;
    iVar4 = uStack_d0._4_4_;
  }
  if (iVar4 < 3) {
    puVar7 = (undefined8 *)((ulong)&uStack_d0 | 4);
    *puVar11 = *puStack_88;
    puVar11[1] = puStack_88[1];
    uStack_d0 = (undefined *)CONCAT44(uStack_d0._4_4_,0x42ff0000);
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined8 *)((long)puVar7 + 0x2c) = 0;
    if (puStack_88 == auStack_80) {
      return;
    }
    _free(puStack_88[-1]);
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_90;
  *(undefined8 **)(param_1 + 0x70) = puStack_88;
  return;
}



/* Entry: 109feee30; end: 109ff025b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109feee30(undefined8 *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  int *******pppppppiVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int *******pppppppiVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  ulong uStack_3f0;
  long *plStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  ulong uStack_390;
  long *plStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  ulong uStack_330;
  long *plStack_328;
  long lStack_320;
  long lStack_318;
  int *******pppppppiStack_310;
  int *******pppppppiStack_308;
  int *******pppppppiStack_300;
  int *******pppppppiStack_2f8;
  int *******pppppppiStack_2f0;
  int *******pppppppiStack_2e8;
  undefined8 uStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  int *piStack_2a0;
  long *plStack_298;
  long alStack_290 [2];
  undefined8 uStack_280;
  int iStack_278;
  int iStack_274;
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  ulong uStack_240;
  long *plStack_238;
  long alStack_230 [2];
  undefined8 uStack_220;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  long alStack_1d0 [2];
  uint uStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  uint *puStack_180;
  long *plStack_178;
  long alStack_170 [2];
  int *******pppppppiStack_160;
  int *******pppppppiStack_158;
  uint *puStack_150;
  uint auStack_148 [3];
  undefined4 uStack_13c;
  int iStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  int *******pppppppiStack_128;
  int *******pppppppiStack_120;
  int *******pppppppiStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  int *piStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_2 & 0xfff;
  __ZNSt3__19to_stringEi(&uStack_1c0,uVar15);
  puVar8 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar8,0,&UNK_10f6308ff,0x12);
  uStack_100 = (undefined4)*(undefined8 *)(puVar8 + 4);
  uStack_fc = (int)((ulong)*(undefined8 *)(puVar8 + 4) >> 0x20);
  iStack_108 = (int)*(undefined8 *)(puVar8 + 2);
  iStack_104 = (int)((ulong)*(undefined8 *)(puVar8 + 2) >> 0x20);
  iStack_110 = (int)*(undefined8 *)puVar8;
  iStack_10c = (int)((ulong)*(undefined8 *)puVar8 >> 0x20);
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[0] = 0;
  puVar8[1] = 0;
  if (uStack_fc < 0) {
    uStack_220._0_4_ = iStack_110;
    uStack_220._4_4_ = iStack_10c;
    iStack_218 = iStack_108;
    iStack_214 = iStack_104;
    puVar9 = (undefined8 *)CONCAT44(iStack_10c,iStack_110);
    if (uVar15 == 0x10) {
      __ZdlPv();
      goto LAB_109feef00;
    }
  }
  else {
    uStack_220 = (undefined8 *)&iStack_110;
    iStack_218 = (int)uStack_fc._3_1_;
    iStack_214 = (int)(uStack_fc._3_1_ >> 7);
    puVar9 = uStack_220;
    if (uVar15 == 0x10) {
LAB_109feef00:
      if (iStack_1ac < 0) {
        __ZdlPv(CONCAT44(iStack_1bc,uStack_1c0));
      }
      lStack_188 = 0;
      uStack_18c = 0;
      puStack_180 = (uint *)((ulong)&uStack_1c0 | 8);
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      iStack_1ac = 0;
      uStack_1a8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      iStack_1bc = 0;
      uStack_1b8 = 0;
      alStack_170[1] = 0;
      alStack_170[0] = 0;
      uStack_1c0 = 0x42ff0010;
      plStack_178 = alStack_170;
      FUN_10a002c4c(&uStack_1c0,param_2);
      uVar15 = *param_3 & 0xfff;
      __ZNSt3__19to_stringEi(&uStack_220,uVar15);
      puVar9 = &uStack_220;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar9,0,&UNK_10f630912,0x13);
      uStack_100 = (undefined4)puVar9[2];
      uStack_fc = (int)((ulong)puVar9[2] >> 0x20);
      iStack_108 = (int)puVar9[1];
      iStack_104 = (int)((ulong)puVar9[1] >> 0x20);
      iStack_110 = (int)*puVar9;
      iStack_10c = (int)((ulong)*puVar9 >> 0x20);
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      if (uStack_fc < 0) {
        uStack_280._0_4_ = iStack_110;
        uStack_280._4_4_ = iStack_10c;
        iStack_278 = iStack_108;
        iStack_274 = iStack_104;
        puVar9 = (undefined8 *)CONCAT44(iStack_10c,iStack_110);
        if (uVar15 == 0) {
          __ZdlPv();
          goto LAB_109feefd0;
        }
      }
      else {
        uStack_280 = (undefined8 *)&iStack_110;
        iStack_278 = (int)uStack_fc._3_1_;
        iStack_274 = (int)(uStack_fc._3_1_ >> 7);
        puVar9 = uStack_280;
        if (uVar15 == 0) {
LAB_109feefd0:
          if (iStack_20c < 0) {
            __ZdlPv(uStack_220);
          }
          lStack_1e8 = 0;
          uStack_1ec = 0;
          piStack_1e0 = &iStack_218;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          uStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_204 = 0;
          uStack_200 = 0;
          iStack_20c = 0;
          uStack_208 = 0;
          iStack_214 = 0;
          uStack_210 = 0;
          uStack_220._4_4_ = 0;
          iStack_218 = 0;
          alStack_1d0[1] = 0;
          alStack_1d0[0] = 0;
          uStack_220._0_4_ = 0x42ff0000;
          plStack_1d8 = alStack_1d0;
          func_0x0001093910bc(&uStack_220,param_3);
          uVar15 = *param_4 & 0xfff;
          __ZNSt3__19to_stringEi(&uStack_280,uVar15);
          puVar9 = &uStack_280;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar9,0,&UNK_10f630926,0x19);
          uStack_100 = (undefined4)puVar9[2];
          uStack_fc = (int)((ulong)puVar9[2] >> 0x20);
          iStack_108 = (int)puVar9[1];
          iStack_104 = (int)((ulong)puVar9[1] >> 0x20);
          iStack_110 = (int)*puVar9;
          iStack_10c = (int)((ulong)*puVar9 >> 0x20);
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          if (uStack_fc < 0) {
            uStack_2e0._0_4_ = iStack_110;
            uStack_2e0._4_4_ = iStack_10c;
            iStack_2d8 = iStack_108;
            iStack_2d4 = iStack_104;
            puVar9 = (undefined8 *)CONCAT44(iStack_10c,iStack_110);
            if (uVar15 == 0) {
              __ZdlPv();
              goto LAB_109fef090;
            }
          }
          else {
            uStack_2e0 = (undefined8 *)&iStack_110;
            iStack_2d8 = (int)uStack_fc._3_1_;
            iStack_2d4 = (int)(uStack_fc._3_1_ >> 7);
            puVar9 = uStack_2e0;
            if (uVar15 == 0) {
LAB_109fef090:
              if (iStack_26c < 0) {
                __ZdlPv(uStack_280);
              }
              lStack_248 = 0;
              uStack_24c = 0;
              uStack_240 = (ulong)&uStack_280 | 8;
              uStack_254 = 0;
              uStack_250 = 0;
              uStack_25c = 0;
              uStack_258 = 0;
              uStack_264 = 0;
              uStack_260 = 0;
              iStack_26c = 0;
              uStack_268 = 0;
              iStack_274 = 0;
              uStack_270 = 0;
              uStack_280._4_4_ = 0;
              iStack_278 = 0;
              alStack_230[1] = 0;
              alStack_230[0] = 0;
              uStack_280._0_4_ = 0x42ff0000;
              plStack_238 = alStack_230;
              func_0x0001093910bc(&uStack_280,param_4);
              uVar15 = *param_5 & 0xfff;
              __ZNSt3__19to_stringEi(&uStack_2e0,uVar15);
              puVar9 = &uStack_2e0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (puVar9,0,&UNK_10f630940,0x1e);
              uStack_100 = (undefined4)puVar9[2];
              uStack_fc = (int)((ulong)puVar9[2] >> 0x20);
              iStack_108 = (int)puVar9[1];
              iStack_104 = (int)((ulong)puVar9[1] >> 0x20);
              iStack_110 = (int)*puVar9;
              iStack_10c = (int)((ulong)*puVar9 >> 0x20);
              puVar9[1] = 0;
              puVar9[2] = 0;
              *puVar9 = 0;
              lStack_368 = (long)uStack_fc._3_1_;
              if (lStack_368 < 0) {
                uStack_370 = (undefined8 *)CONCAT44(iStack_10c,iStack_110);
                lStack_368 = CONCAT44(iStack_104,iStack_108);
                if (uVar15 == 0) {
                  __ZdlPv();
                  goto LAB_109fef150;
                }
              }
              else {
                uStack_370 = (undefined8 *)&iStack_110;
                if (uVar15 == 0) {
LAB_109fef150:
                  if (iStack_2cc < 0) {
                    __ZdlPv(uStack_2e0);
                  }
                  lStack_2a8 = 0;
                  uStack_2ac = 0;
                  piStack_2a0 = &iStack_2d8;
                  uStack_2b4 = 0;
                  uStack_2b0 = 0;
                  uStack_2bc = 0;
                  uStack_2b8 = 0;
                  uStack_2c4 = 0;
                  uStack_2c0 = 0;
                  iStack_2cc = 0;
                  uStack_2c8 = 0;
                  iStack_2d4 = 0;
                  uStack_2d0 = 0;
                  uStack_2e0._4_4_ = 0;
                  iStack_2d8 = 0;
                  alStack_290[1] = 0;
                  alStack_290[0] = 0;
                  uStack_2e0._0_4_ = 0x42ff0000;
                  plStack_298 = alStack_290;
                  func_0x0001093910bc(&uStack_2e0,param_5);
                  FUN_109ff025c(&pppppppiStack_2f8,&uStack_220,0xff);
                  FUN_109ff025c(&pppppppiStack_310,&uStack_220,0);
                  iVar17 = (int)((ulong)((long)pppppppiStack_308 - (long)pppppppiStack_310) >> 3) +
                           (int)((ulong)((long)pppppppiStack_2f0 - (long)pppppppiStack_2f8) >> 3);
                  pppppppiStack_128 = (int *******)CONCAT44(pppppppiStack_128._4_4_,1);
                  iStack_10c = piStack_1e0[1] + -1;
                  iStack_110 = 0;
                  uStack_370 = (undefined8 *)((ulong)(*piStack_1e0 - 1) << 0x20);
                  if (0 < iVar17) {
                    do {
                      puVar9 = (undefined8 *)&iStack_110;
                      func_0x000109c14590(puVar9,&pppppppiStack_128,&iStack_110);
                      pppppppiStack_160 = (int *******)CONCAT44(pppppppiStack_160._4_4_,(int)puVar9)
                      ;
                      puVar9 = &uStack_370;
                      func_0x000109c14590(puVar9,&pppppppiStack_128,&uStack_370);
                      iVar7 = (int)puVar9;
                      lStack_448 = CONCAT44(lStack_448._4_4_,iVar7);
                      cVar3 = *(char *)(CONCAT44(iStack_20c,uStack_210) + *plStack_1d8 * (long)iVar7
                                       + (long)(int)pppppppiStack_160);
                      if (cVar3 == -1) {
                        if (pppppppiStack_2f0 < pppppppiStack_2e8) {
                          *(int *)pppppppiStack_2f0 = (int)pppppppiStack_160;
                          *(int *)((long)pppppppiStack_2f0 + 4) = iVar7;
                          pppppppiStack_2f0 = pppppppiStack_2f0 + 1;
                        }
                        else {
                          pppppppiVar19 = (int *******)&pppppppiStack_2f8;
                          FUN_109fff0e8(pppppppiVar19,&pppppppiStack_160,&lStack_448);
                          pppppppiStack_2f0 = pppppppiVar19;
                        }
                      }
                      else if (cVar3 == '\0') {
                        if (pppppppiStack_308 < pppppppiStack_300) {
                          *(int *)pppppppiStack_308 = (int)pppppppiStack_160;
                          *(int *)((long)pppppppiStack_308 + 4) = iVar7;
                          pppppppiStack_308 = pppppppiStack_308 + 1;
                        }
                        else {
                          pppppppiVar19 = (int *******)&pppppppiStack_310;
                          FUN_109fff0e8(pppppppiVar19,&pppppppiStack_160,&lStack_448);
                          pppppppiStack_308 = pppppppiVar19;
                        }
                      }
                      iVar17 = iVar17 + -1;
                    } while (iVar17 != 0);
                  }
                  if ((pppppppiStack_2f8 == pppppppiStack_2f0) ||
                     (pppppppiStack_310 == pppppppiStack_308)) {
                    param_1[1] = CONCAT44(iStack_274,iStack_278);
                    *param_1 = CONCAT44(uStack_280._4_4_,(int)uStack_280);
                    param_1[3] = CONCAT44(uStack_264,uStack_268);
                    param_1[2] = CONCAT44(iStack_26c,uStack_270);
                    param_1[5] = CONCAT44(uStack_254,uStack_258);
                    param_1[4] = CONCAT44(uStack_25c,uStack_260);
                    param_1[7] = lStack_248;
                    param_1[6] = CONCAT44(uStack_24c,uStack_250);
                    param_1[10] = 0;
                    param_1[8] = param_1 + 1;
                    param_1[9] = param_1 + 10;
                    param_1[0xb] = 0;
                    if (lStack_248 != 0) {
                      piVar18 = (int *)(lStack_248 + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = *piVar18 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    if (uStack_280._4_4_ < 3) {
                      plVar11 = (long *)param_1[9];
                      *plVar11 = *plStack_238;
                      plVar11[1] = plStack_238[1];
                    }
                    else {
                      *(undefined4 *)((long)param_1 + 4) = 0;
                      func_0x000109a84868(param_1,&uStack_280);
                    }
LAB_109fefd90:
                    if (pppppppiStack_310 != (int *******)0x0) {
                      pppppppiStack_308 = pppppppiStack_310;
                      __ZdlPv();
                    }
                    if (pppppppiStack_2f8 != (int *******)0x0) {
                      pppppppiStack_2f0 = pppppppiStack_2f8;
                      __ZdlPv();
                    }
                    if (lStack_2a8 != 0) {
                      piVar18 = (int *)(lStack_2a8 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_2e0);
                      }
                    }
                    lStack_2a8 = 0;
                    uStack_2c8 = 0;
                    uStack_2c4 = 0;
                    uStack_2d0 = 0;
                    iStack_2cc = 0;
                    uStack_2b8 = 0;
                    uStack_2b4 = 0;
                    uStack_2c0 = 0;
                    uStack_2bc = 0;
                    if (0 < uStack_2e0._4_4_) {
                      lVar12 = 0;
                      do {
                        piStack_2a0[lVar12] = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < uStack_2e0._4_4_);
                    }
                    if (plStack_298 != alStack_290 && plStack_298 != (long *)0x0) {
                      _free(plStack_298[-1]);
                    }
                    if (lStack_248 != 0) {
                      piVar18 = (int *)(lStack_248 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_280);
                      }
                    }
                    lStack_248 = 0;
                    uStack_268 = 0;
                    uStack_264 = 0;
                    uStack_270 = 0;
                    iStack_26c = 0;
                    uStack_258 = 0;
                    uStack_254 = 0;
                    uStack_260 = 0;
                    uStack_25c = 0;
                    if (0 < uStack_280._4_4_) {
                      lVar12 = 0;
                      do {
                        *(undefined4 *)(uStack_240 + lVar12 * 4) = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < uStack_280._4_4_);
                    }
                    if (plStack_238 != alStack_230 && plStack_238 != (long *)0x0) {
                      _free(plStack_238[-1]);
                    }
                    if (lStack_1e8 != 0) {
                      piVar18 = (int *)(lStack_1e8 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_220);
                      }
                    }
                    lStack_1e8 = 0;
                    uStack_208 = 0;
                    uStack_204 = 0;
                    uStack_210 = 0;
                    iStack_20c = 0;
                    uStack_1f8 = 0;
                    uStack_1f4 = 0;
                    uStack_200 = 0;
                    uStack_1fc = 0;
                    if (0 < uStack_220._4_4_) {
                      lVar12 = 0;
                      do {
                        piStack_1e0[lVar12] = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < uStack_220._4_4_);
                    }
                    if (plStack_1d8 != alStack_1d0 && plStack_1d8 != (long *)0x0) {
                      _free(plStack_1d8[-1]);
                    }
                    if (lStack_188 != 0) {
                      piVar18 = (int *)(lStack_188 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_1c0);
                      }
                    }
                    lStack_188 = 0;
                    uStack_1a8 = 0;
                    uStack_1a4 = 0;
                    uStack_1b0 = 0;
                    iStack_1ac = 0;
                    uStack_198 = 0;
                    uStack_194 = 0;
                    uStack_1a0 = 0;
                    uStack_19c = 0;
                    if (0 < iStack_1bc) {
                      lVar12 = 0;
                      do {
                        puStack_180[lVar12] = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < iStack_1bc);
                    }
                    if (plStack_178 != alStack_170 && plStack_178 != (long *)0x0) {
                      _free(plStack_178[-1]);
                    }
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                      return;
                    }
                    ___stack_chk_fail();
                  }
                  else {
                    uStack_330 = (ulong)&uStack_370 | 8;
                    lStack_368 = CONCAT44(uStack_1b4,uStack_1b8);
                    uStack_370 = (undefined8 *)CONCAT44(iStack_1bc,uStack_1c0);
                    uStack_358 = CONCAT44(uStack_1a4,uStack_1a8);
                    uStack_360 = CONCAT44(iStack_1ac,uStack_1b0);
                    uStack_348 = CONCAT44(uStack_194,uStack_198);
                    uStack_350 = CONCAT44(uStack_19c,uStack_1a0);
                    uStack_340 = CONCAT44(uStack_18c,uStack_190);
                    lStack_338 = lStack_188;
                    lStack_320 = 0;
                    lStack_318 = 0;
                    if (lStack_188 != 0) {
                      piVar18 = (int *)(lStack_188 + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = *piVar18 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plStack_328 = &lStack_320;
                    if (iStack_1bc < 3) {
                      lStack_320 = *plStack_178;
                      lStack_318 = plStack_178[1];
                    }
                    else {
                      uStack_370 = (undefined8 *)(ulong)uStack_1c0;
                      func_0x000109a84868(&uStack_370,&uStack_1c0);
                    }
                    pppppppiVar22 = pppppppiStack_2f0;
                    pppppppiVar19 = pppppppiStack_2f8;
                    lStack_3c8 = lStack_368;
                    uStack_3d0 = uStack_370;
                    uStack_3b8 = uStack_358;
                    uStack_3c0 = uStack_360;
                    uStack_3a8 = uStack_348;
                    uStack_3b0 = uStack_350;
                    uStack_390 = (ulong)&uStack_3d0 | 8;
                    lStack_398 = lStack_338;
                    uStack_3a0 = uStack_340;
                    lStack_380 = 0;
                    lStack_378 = 0;
                    if (lStack_338 != 0) {
                      piVar18 = (int *)(lStack_338 + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = *piVar18 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plStack_388 = &lStack_380;
                    if (uStack_370._4_4_ < 3) {
                      lStack_380 = *plStack_328;
                      lStack_378 = plStack_328[1];
                    }
                    else {
                      uStack_3d0 = (undefined8 *)((ulong)uStack_370 & 0xffffffff);
                      func_0x000109a84868(&uStack_3d0,&uStack_370);
                    }
                    lVar12 = 0;
                    if (pppppppiVar22 != pppppppiVar19) {
                      lVar12 = LZCOUNT((long)pppppppiVar22 - (long)pppppppiVar19 >> 3) * -2 + 0x7e;
                    }
                    FUN_109fff250(pppppppiVar19,pppppppiVar22,&uStack_3d0,lVar12,1);
                    if (lStack_398 != 0) {
                      piVar18 = (int *)(lStack_398 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_3d0);
                      }
                    }
                    lStack_398 = 0;
                    uStack_3b8 = 0;
                    uStack_3c0 = 0;
                    uStack_3a8 = 0;
                    uStack_3b0 = 0;
                    if (0 < uStack_3d0._4_4_) {
                      lVar12 = 0;
                      do {
                        *(undefined4 *)(uStack_390 + lVar12 * 4) = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < uStack_3d0._4_4_);
                    }
                    if (plStack_388 != &lStack_380 && plStack_388 != (long *)0x0) {
                      _free(plStack_388[-1]);
                    }
                    pppppppiVar22 = pppppppiStack_308;
                    pppppppiVar19 = pppppppiStack_310;
                    uStack_3f0 = (ulong)&uStack_430 | 8;
                    lStack_428 = lStack_368;
                    uStack_430 = uStack_370;
                    uStack_418 = uStack_358;
                    uStack_420 = uStack_360;
                    uStack_408 = uStack_348;
                    uStack_410 = uStack_350;
                    lStack_3f8 = lStack_338;
                    uStack_400 = uStack_340;
                    lStack_3e0 = 0;
                    lStack_3d8 = 0;
                    if (lStack_338 != 0) {
                      piVar18 = (int *)(lStack_338 + 0x14);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = *piVar18 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    plStack_3e8 = &lStack_3e0;
                    if (uStack_370._4_4_ < 3) {
                      lStack_3e0 = *plStack_328;
                      lStack_3d8 = plStack_328[1];
                    }
                    else {
                      uStack_430 = (undefined8 *)((ulong)uStack_370 & 0xffffffff);
                      func_0x000109a84868(&uStack_430,&uStack_370);
                    }
                    lVar12 = 0;
                    if (pppppppiVar22 != pppppppiVar19) {
                      lVar12 = LZCOUNT((long)pppppppiVar22 - (long)pppppppiVar19 >> 3) * -2 + 0x7e;
                    }
                    FUN_109fff250(pppppppiVar19,pppppppiVar22,&uStack_430,lVar12,1);
                    if (lStack_3f8 != 0) {
                      piVar18 = (int *)(lStack_3f8 + 0x14);
                      do {
                        iVar17 = *piVar18;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                        if (bVar4) {
                          *piVar18 = iVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar17 + -1 == 0) {
                        func_0x000109a848d4(&uStack_430);
                      }
                    }
                    lStack_3f8 = 0;
                    uStack_418 = 0;
                    uStack_420 = 0;
                    uStack_408 = 0;
                    uStack_410 = 0;
                    if (0 < uStack_430._4_4_) {
                      lVar12 = 0;
                      do {
                        *(undefined4 *)(uStack_3f0 + lVar12 * 4) = 0;
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < uStack_430._4_4_);
                    }
                    if (plStack_3e8 != &lStack_3e0 && plStack_3e8 != (long *)0x0) {
                      _free(plStack_3e8[-1]);
                    }
                    iStack_110 = 0xf630bc1;
                    iStack_10c = 1;
                    iStack_108 = 0x1b;
                    iStack_104 = 0;
                    if (pppppppiStack_2f8 != pppppppiStack_2f0) {
                      iStack_110 = 0xf630bdd;
                      iStack_10c = 1;
                      iStack_108 = 0x1b;
                      iStack_104 = 0;
                      if (pppppppiStack_310 != pppppppiStack_308) {
                        uVar15 = puStack_180[1];
                        uVar2 = *puStack_180;
                        uStack_134 = 1;
                        iStack_138 = (int)((ulong)((long)pppppppiStack_2f0 - (long)pppppppiStack_2f8
                                                  ) >> 3) + -1;
                        uStack_13c = 0;
                        auStack_148[2] =
                             (int)((ulong)((long)pppppppiStack_308 - (long)pppppppiStack_310) >> 3)
                             + -1;
                        auStack_148[1] = 0;
                        pppppppiStack_120 = (int *******)0x0;
                        pppppppiStack_128 = (int *******)0x0;
                        pppppppiStack_118 = (int *******)0x0;
                        iVar17 = uVar2 * uVar15;
                        lStack_448 = 0;
                        lStack_440 = 0;
                        lStack_438 = 0;
                        auStack_148[0] = uVar15;
                        uStack_130 = uVar2;
                        uStack_12c = uVar15;
                        if (iVar17 == 0) {
                          lVar12 = 0;
                        }
                        else {
                          if (iVar17 < 0) {
                            FUN_10a00056c();
                            goto LAB_109ff0008;
                          }
                          lVar12 = (long)iVar17 * 0x18;
                          __Znwm();
                          lStack_438 = lVar12 + (long)iVar17 * 0x18;
                          lStack_448 = lVar12;
                          _bzero();
                          lStack_440 = lVar12 + (((long)iVar17 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18
                          ;
                        }
                        if ((int)uVar2 < 1) {
                          pppppppiVar19 = (int *******)0x0;
                        }
                        else {
                          pppppppiVar19 = (int *******)0x0;
                          uVar21 = 0;
                          uVar25 = (lStack_440 - lVar12 >> 3) * -0x5555555555555555;
                          do {
                            if (0 < (int)uVar15) {
                              uVar24 = 0;
                              do {
                                if (*(char *)(CONCAT44(iStack_20c,uStack_210) +
                                              *plStack_1d8 * uVar21 + uVar24) == -0x80) {
                                  puVar10 = &uStack_13c;
                                  iStack_110 = (int)uVar24;
                                  iStack_10c = (int)uVar21;
                                  func_0x000109c14590(puVar10,&uStack_134,&uStack_13c);
                                  iVar17 = uVar15 * (int)uVar21 + (int)uVar24;
                                  uStack_220 = (undefined8 *)
                                               CONCAT44(uStack_220._4_4_,(int)uStack_220);
                                  uStack_280 = (undefined8 *)
                                               CONCAT44(uStack_280._4_4_,(int)uStack_280);
                                  uStack_2e0 = (undefined8 *)
                                               CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
                                  if (uVar25 < (ulong)(long)iVar17 || uVar25 - (long)iVar17 == 0)
                                  goto LAB_109ff0008;
                                  puVar20 = (undefined4 *)(lVar12 + (long)iVar17 * 0x18);
                                  *puVar20 = (int)puVar10;
                                  puVar8 = auStack_148 + 1;
                                  func_0x000109c14590(puVar8,&uStack_134,auStack_148 + 1);
                                  puVar20[1] = (int)puVar8;
                                  if (pppppppiStack_2f8 == pppppppiStack_2f0) {
                                    fVar26 = 2.1474836e+09;
                                  }
                                  else {
                                    pppppppiVar19 = pppppppiStack_2f8;
                                    iVar17 = 0x7fffffff;
                                    do {
                                      pppppppiVar22 = pppppppiVar19 + 1;
                                      iVar7 = *(int *)((long)pppppppiVar19 + 4) - iStack_10c;
                                      iVar7 = (*(int *)pppppppiVar19 - iStack_110) *
                                              (*(int *)pppppppiVar19 - iStack_110) + iVar7 * iVar7;
                                      if (iVar17 <= iVar7) {
                                        iVar7 = iVar17;
                                      }
                                      pppppppiVar19 = pppppppiVar22;
                                      iVar17 = iVar7;
                                    } while (pppppppiVar22 != pppppppiStack_2f0);
                                    fVar26 = (float)iVar7;
                                  }
                                  puVar20[2] = SQRT(fVar26);
                                  if (pppppppiStack_310 == pppppppiStack_308) {
                                    fVar26 = 2.1474836e+09;
                                  }
                                  else {
                                    pppppppiVar19 = pppppppiStack_310;
                                    iVar17 = 0x7fffffff;
                                    do {
                                      pppppppiVar22 = pppppppiVar19 + 1;
                                      iVar7 = *(int *)((long)pppppppiVar19 + 4) - iStack_10c;
                                      iVar7 = (*(int *)pppppppiVar19 - iStack_110) *
                                              (*(int *)pppppppiVar19 - iStack_110) + iVar7 * iVar7;
                                      if (iVar17 <= iVar7) {
                                        iVar7 = iVar17;
                                      }
                                      pppppppiVar19 = pppppppiVar22;
                                      iVar17 = iVar7;
                                    } while (pppppppiVar22 != pppppppiStack_308);
                                    fVar26 = (float)iVar7;
                                  }
                                  puVar20[3] = SQRT(fVar26);
                                  puVar20[4] = 0x7f800000;
                                  if (pppppppiStack_120 < pppppppiStack_118) {
                                    pppppppiVar19 = pppppppiStack_120 + 1;
                                    *pppppppiStack_120 = (int ******)CONCAT44(iStack_10c,iStack_110)
                                    ;
                                    pppppppiStack_120 = pppppppiVar19;
                                  }
                                  else {
                                    pppppppiVar19 = (int *******)&pppppppiStack_128;
                                    func_0x0001092c78ec(pppppppiVar19,&iStack_110);
                                    pppppppiStack_120 = pppppppiVar19;
                                  }
                                }
                                uVar24 = uVar24 + 1;
                              } while (uVar24 != uVar15);
                            }
                            uVar21 = uVar21 + 1;
                          } while (uVar21 != uVar2);
                        }
                        pppppppiStack_160 = (int *******)&pppppppiStack_2f8;
                        pppppppiStack_158 = (int *******)&pppppppiStack_310;
                        iStack_110 = 0xa000580;
                        iStack_10c = 1;
                        iStack_108 = 0x10b99e10;
                        iStack_104 = 1;
                        plVar11 = (long *)0x48;
                        puStack_150 = &uStack_1c0;
                        __Znwm();
                        *plVar11 = (long)&pppppppiStack_128;
                        plVar11[1] = (long)&uStack_134;
                        plVar11[2] = (long)&uStack_1c0;
                        plVar11[3] = (long)&lStack_448;
                        plVar11[4] = (long)auStack_148;
                        plVar11[5] = (long)&uStack_12c;
                        plVar11[6] = (long)&uStack_130;
                        plVar11[7] = (long)&uStack_220;
                        plVar11[8] = (long)&pppppppiStack_160;
                        uStack_100 = SUB84(plVar11,0);
                        uStack_fc = (int)((ulong)plVar11 >> 0x20);
                        if (pppppppiStack_128 != pppppppiVar19) {
                          uVar21 = (long)pppppppiStack_2f0 - (long)pppppppiStack_2f8 >> 3;
                          uVar25 = (long)pppppppiStack_308 - (long)pppppppiStack_310 >> 3;
                          if (uVar21 <= uVar25) {
                            uVar21 = uVar25;
                          }
                          pppppppiVar22 = pppppppiStack_128;
                          do {
                            iVar17 = *(int *)pppppppiVar22;
                            iVar7 = *(int *)((long)pppppppiVar22 + 4);
                            uVar25 = (long)iVar17 + (long)(int)auStack_148[0] * (long)iVar7;
                            uVar24 = (lStack_440 - lStack_448 >> 3) * -0x5555555555555555;
                            uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(int)uStack_220);
                            uStack_280 = (undefined8 *)CONCAT44(uStack_280._4_4_,(int)uStack_280);
                            uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
                            if (uVar24 < uVar25 || uVar24 - uVar25 == 0) goto LAB_109ff0008;
                            if (0 < (int)uVar21) {
                              lVar12 = CONCAT44(iStack_1ac,uStack_1b0);
                              lVar13 = *plStack_178;
                              piVar18 = (int *)(lStack_448 + uVar25 * 0x18);
                              fVar26 = (float)(int)uVar21;
                              do {
                                uVar15 = (uStack_134 % 0xadc8) * 0xbc8f;
                                iVar23 = 0x7fffffff;
                                iVar1 = iVar23;
                                if ((uStack_134 / 0xadc8) * 0xd47 <= uVar15) {
                                  iVar1 = 0;
                                }
                                uVar15 = iVar1 + uVar15 + (uStack_134 / 0xadc8) * -0xd47;
                                uVar2 = (uVar15 % 0xadc8) * 0xbc8f;
                                if ((uVar15 / 0xadc8) * 0xd47 <= uVar2) {
                                  iVar23 = 0;
                                }
                                uStack_134 = iVar23 + uVar2 + (uVar15 / 0xadc8) * -0xd47;
                                uVar15 = *piVar18 +
                                         (int)(fVar26 * (((float)(uVar15 - 1) / 2.1474836e+09) * 2.0
                                                        + -1.0));
                                uVar2 = piVar18[1] +
                                        (int)(fVar26 * (((float)(uStack_134 - 1) / 2.1474836e+09) *
                                                        2.0 + -1.0));
                                uVar5 = (int)((ulong)((long)pppppppiStack_2f0 -
                                                     (long)pppppppiStack_2f8) >> 3) - 1;
                                if ((int)uVar5 <= (int)uVar15) {
                                  uVar15 = uVar5;
                                }
                                uVar5 = (int)((ulong)((long)pppppppiStack_308 -
                                                     (long)pppppppiStack_310) >> 3) - 1;
                                if ((int)uVar5 <= (int)uVar2) {
                                  uVar2 = uVar5;
                                }
                                FUN_10a000774(&pppppppiStack_160,*(int *)pppppppiVar22,
                                              *(int *)((long)pppppppiVar22 + 4),
                                              lVar12 + lVar13 * iVar7 + (long)iVar17 * 3,
                                              uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU),
                                              uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),piVar18);
                                fVar26 = fVar26 * 0.3;
                              } while (1.0 <= fVar26);
                            }
                            pppppppiVar22 = pppppppiVar22 + 1;
                          } while (pppppppiVar22 != pppppppiVar19);
                        }
                        FUN_10a000580(&iStack_110);
                        __ZdlPv(plVar11);
                        if (pppppppiStack_128 != (int *******)0x0) {
                          pppppppiStack_120 = pppppppiStack_128;
                          __ZdlPv();
                        }
                        iStack_110 = 0x42ff0000;
                        pppppppiStack_120 = (int *******)&iStack_110;
                        iStack_104 = 0;
                        uStack_100 = 0;
                        iStack_10c = 0;
                        iStack_108 = 0;
                        piStack_d0 = &iStack_108;
                        uStack_f4 = 0;
                        uStack_f0 = 0;
                        uStack_fc = 0;
                        uStack_f8 = 0;
                        uStack_e4 = 0;
                        uStack_ec = 0;
                        uStack_e8 = 0;
                        lStack_d8 = 0;
                        uStack_e0 = 0;
                        uStack_dc = 0;
                        uStack_c0 = 0;
                        uStack_b8 = 0;
                        pppppppiStack_128 = (int *******)CONCAT44(pppppppiStack_128._4_4_,0x2010000)
                        ;
                        pppppppiStack_118 = (int *******)0x0;
                        puStack_c8 = &uStack_c0;
                        func_0x000109a479a0(&uStack_220,&pppppppiStack_128);
                        piVar18 = (int *)(param_1 + 1);
                        param_1[7] = 0;
                        param_1[6] = 0;
                        *(undefined8 *)((long)param_1 + 0x2c) = 0;
                        *(undefined8 *)((long)param_1 + 0x24) = 0;
                        *(undefined8 *)((long)param_1 + 0x1c) = 0;
                        *(undefined8 *)((long)param_1 + 0x14) = 0;
                        *(undefined8 *)((long)param_1 + 0xc) = 0;
                        *(undefined8 *)((long)param_1 + 4) = 0;
                        param_1[10] = 0;
                        param_1[8] = piVar18;
                        param_1[9] = param_1 + 10;
                        param_1[0xb] = 0;
                        *(undefined4 *)param_1 = 0x42ff0000;
                        func_0x0001093910bc(param_1,&iStack_110);
                        if (lStack_d8 != 0) {
                          piVar16 = (int *)(lStack_d8 + 0x14);
                          do {
                            iVar17 = *piVar16;
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                            if (bVar4) {
                              *piVar16 = iVar17 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar17 + -1 == 0) {
                            func_0x000109a848d4(&iStack_110);
                          }
                        }
                        lStack_d8 = 0;
                        uStack_f8 = 0;
                        uStack_f4 = 0;
                        uStack_100 = 0;
                        uStack_fc = 0;
                        uStack_e8 = 0;
                        uStack_e4 = 0;
                        uStack_f0 = 0;
                        uStack_ec = 0;
                        if (0 < iStack_10c) {
                          lVar12 = 0;
                          do {
                            piStack_d0[lVar12] = 0;
                            lVar12 = lVar12 + 1;
                          } while (lVar12 < iStack_10c);
                        }
                        if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
                          _free(puStack_c8[-1]);
                        }
                        iVar17 = *piVar18;
                        if (0 < iVar17) {
                          lVar12 = 0;
                          iVar7 = *(int *)((long)param_1 + 0xc);
                          do {
                            if (0 < iVar7) {
                              lVar13 = 0;
                              do {
                                if (*(char *)(CONCAT44(iStack_20c,uStack_210) +
                                              lVar12 * *plStack_1d8 + lVar13) == -0x80) {
                                  iVar17 = (int)lVar13 + (int)lVar12 * iVar7;
                                  uVar21 = (lStack_440 - lStack_448 >> 3) * -0x5555555555555555;
                                  uStack_220 = (undefined8 *)
                                               CONCAT44(uStack_220._4_4_,(int)uStack_220);
                                  uStack_280 = (undefined8 *)
                                               CONCAT44(uStack_280._4_4_,(int)uStack_280);
                                  uStack_2e0 = (undefined8 *)
                                               CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
                                  if (uVar21 < (ulong)(long)iVar17 || uVar21 - (long)iVar17 == 0)
                                  goto LAB_109ff0008;
                                  piVar16 = (int *)(lStack_448 + (long)iVar17 * 0x18);
                                  uVar21 = (ulong)*piVar16;
                                  uStack_220 = (undefined8 *)
                                               CONCAT44(uStack_220._4_4_,(int)uStack_220);
                                  uStack_280 = (undefined8 *)
                                               CONCAT44(uStack_280._4_4_,(int)uStack_280);
                                  uStack_2e0 = (undefined8 *)
                                               CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
                                  if ((ulong)((long)pppppppiStack_2f0 - (long)pppppppiStack_2f8 >> 3
                                             ) <= uVar21) goto LAB_109ff0008;
                                  if (*(char *)(CONCAT44(iStack_2cc,uStack_2d0) +
                                                *plStack_298 *
                                                (long)*(int *)((long)(pppppppiStack_2f8 + uVar21) +
                                                              4) +
                                               (long)*(int *)(pppppppiStack_2f8 + uVar21)) == '\0')
                                  {
                                    uVar14 = *(undefined1 *)
                                              (CONCAT44(iStack_26c,uStack_270) +
                                               lVar12 * *plStack_238 + lVar13);
                                  }
                                  else {
                                    uVar15 = (uint)(long)(float)(int)((float)piVar16[5] * 255.0);
                                    uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
                                    if (0xfe < (int)uVar15) {
                                      uVar15 = 0xff;
                                    }
                                    uVar14 = (undefined1)uVar15;
                                  }
                                  *(undefined1 *)
                                   (param_1[2] + lVar12 * *(long *)param_1[9] + lVar13) = uVar14;
                                  iVar7 = *(int *)((long)param_1 + 0xc);
                                }
                                lVar13 = lVar13 + 1;
                              } while (lVar13 < iVar7);
                              iVar17 = *piVar18;
                            }
                            lVar12 = lVar12 + 1;
                          } while (lVar12 < iVar17);
                        }
                        if (lStack_448 != 0) {
                          lStack_440 = lStack_448;
                          __ZdlPv();
                        }
                        if (lStack_338 != 0) {
                          piVar18 = (int *)(lStack_338 + 0x14);
                          do {
                            iVar17 = *piVar18;
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                            if (bVar4) {
                              *piVar18 = iVar17 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar17 + -1 == 0) {
                            func_0x000109a848d4(&uStack_370);
                          }
                        }
                        lStack_338 = 0;
                        uStack_358 = 0;
                        uStack_360 = 0;
                        uStack_348 = 0;
                        uStack_350 = 0;
                        if (0 < uStack_370._4_4_) {
                          lVar12 = 0;
                          do {
                            *(undefined4 *)(uStack_330 + lVar12 * 4) = 0;
                            lVar12 = lVar12 + 1;
                          } while (lVar12 < uStack_370._4_4_);
                        }
                        if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
                          _free(plStack_328[-1]);
                        }
                        goto LAB_109fefd90;
                      }
                    }
                  }
                  FUN_10a0edfc4(&iStack_110);
                  goto LAB_109ff0008;
                }
              }
              FUN_10a0edfc4(&uStack_370);
              uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(int)uStack_220);
              uStack_280 = (undefined8 *)CONCAT44(uStack_280._4_4_,(int)uStack_280);
              goto LAB_109ff0008;
            }
          }
          uStack_2e0 = puVar9;
          FUN_10a0edfc4(&uStack_2e0);
          uStack_220 = (undefined8 *)CONCAT44(uStack_220._4_4_,(int)uStack_220);
          goto LAB_109ff0008;
        }
      }
      uStack_280 = puVar9;
      FUN_10a0edfc4(&uStack_280);
      uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
      goto LAB_109ff0008;
    }
  }
  uStack_220 = puVar9;
  FUN_10a0edfc4(&uStack_220);
  uStack_280 = (undefined8 *)CONCAT44(uStack_280._4_4_,(int)uStack_280);
  uStack_2e0 = (undefined8 *)CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0);
LAB_109ff0008:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109ff000c);
  (*pcVar6)();
}



/* Entry: 109ff025c; end: 109ff0387;  */

void FUN_109ff025c(undefined8 *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar5 = *(int *)(param_2 + 0xc);
  if (2 < iVar5) {
    puVar2 = (undefined8 *)0x0;
    iVar4 = *(int *)(param_2 + 8);
    lVar8 = 1;
    do {
      if (2 < iVar4) {
        lVar9 = 1;
        puVar3 = puVar2;
        do {
          lVar6 = *(long *)(param_2 + 0x10);
          lVar7 = **(long **)(param_2 + 0x48);
          pbVar1 = (byte *)(lVar6 + lVar7 * lVar9 + lVar8);
          puVar2 = puVar3;
          if ((*pbVar1 == param_3) &&
             ((((*(char *)(lVar6 + lVar7 * (lVar9 + -1) + lVar8) == -0x80 ||
                (*(char *)(lVar6 + lVar7 + lVar7 * lVar9 + lVar8) == -0x80)) || (pbVar1[-1] == 0x80)
               ) || (pbVar1[1] == 0x80)))) {
            if (puVar3 < (undefined8 *)param_1[2]) {
              puVar2 = puVar3 + 1;
              *(int *)puVar3 = (int)lVar8;
              *(int *)((long)puVar3 + 4) = (int)lVar9;
            }
            else {
              puVar2 = param_1;
              FUN_10a000968(param_1,lVar8,lVar9);
              iVar4 = *(int *)(param_2 + 8);
            }
            param_1[1] = puVar2;
          }
          lVar9 = lVar9 + 1;
          puVar3 = puVar2;
        } while (lVar9 < iVar4 + -1);
        iVar5 = *(int *)(param_2 + 0xc);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5 + -1);
  }
  return;
}



/* Entry: 109ff0388; end: 109ff0423;  */

long FUN_109ff0388(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109ff0424; end: 109ff04bf;  */

long FUN_109ff0424(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109ff04c0; end: 109ff055b;  */

long FUN_109ff04c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109ff055c; end: 109ff0db3;  */

/* WARNING: Removing unreachable block (ram,0x000109ff0600) */
/* WARNING: Removing unreachable block (ram,0x000109ff072c) */

void FUN_109ff055c(uint *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  long *plVar10;
  int ****ppppiVar11;
  int ****ppppiVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iStack_2ac;
  int ***pppiStack_2a8;
  int ***pppiStack_2a0;
  int ***pppiStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long alStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long alStack_1e0 [34];
  undefined8 uStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long alStack_80 [4];
  
  uVar13 = *param_1 & 0xfff;
  __ZNSt3__19to_stringEi(&uStack_d0,uVar13);
  plVar10 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar10,0,&UNK_10f63095f,0xf);
  uStack_228 = plVar10[1];
  uStack_230 = (undefined8 *)*plVar10;
  uStack_220 = plVar10[2];
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  lStack_288 = (long)uStack_220._7_1_;
  if (lStack_288 < 0) {
    uStack_290 = uStack_230;
    lStack_288 = uStack_228;
    if (uVar13 == 0x10) {
      __ZdlPv();
      goto LAB_109ff05f8;
    }
  }
  else {
    uStack_290 = &uStack_230;
    if (uVar13 == 0x10) {
LAB_109ff05f8:
      uVar13 = **(uint **)(param_2 + 0x40);
      uVar3 = (*(uint **)(param_2 + 0x40))[1];
      pppiStack_2a8 = (int ***)0x0;
      pppiStack_2a0 = (int ***)0x0;
      pppiStack_298 = (int ***)0x0;
      if (0 < (int)uVar3) {
        uVar19 = 0;
        ppppiVar11 = (int ****)0x0;
        do {
          if (0 < (int)uVar13) {
            uVar20 = 0;
            ppppiVar12 = ppppiVar11;
            do {
              ppppiVar11 = ppppiVar12;
              if (*(char *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * uVar20 +
                           uVar19) == -0x80) {
                if (ppppiVar12 < pppiStack_298) {
                  ppppiVar11 = ppppiVar12 + 1;
                  *(int *)ppppiVar12 = (int)uVar19;
                  *(int *)((long)ppppiVar12 + 4) = (int)uVar20;
                  pppiStack_2a0 = (int ***)ppppiVar11;
                }
                else {
                  ppppiVar11 = &pppiStack_2a8;
                  FUN_10a000968(ppppiVar11,uVar19,uVar20);
                  pppiStack_2a0 = (int ***)ppppiVar11;
                }
              }
              uVar20 = uVar20 + 1;
              ppppiVar12 = ppppiVar11;
            } while (uVar13 != uVar20);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar3);
      }
      puVar15 = (undefined8 *)((ulong)&uStack_230 | 4);
      iStack_2ac = 2;
      iVar18 = 0;
      do {
        uVar13 = *param_1 & 0xfff;
        __ZNSt3__19to_stringEi(&uStack_d0,uVar13);
        plVar10 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar10,0,&UNK_10f6308ff,0x12);
        uStack_228 = plVar10[1];
        uStack_230 = (undefined8 *)*plVar10;
        uStack_220 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        lStack_288 = (long)uStack_220._7_1_;
        if (lStack_288 < 0) {
          uStack_290 = uStack_230;
          lStack_288 = uStack_228;
          if (uVar13 != 0x10) goto LAB_109ff0ca0;
          __ZdlPv();
        }
        else {
          uStack_290 = &uStack_230;
          if (uVar13 != 0x10) {
LAB_109ff0ca0:
            FUN_10a0edfc4(&uStack_290);
            goto LAB_109ff0cb4;
          }
        }
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        alStack_1e0[0] = 0;
        alStack_1e0[1] = 0;
        uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x42ff0010);
        puStack_1f0 = &uStack_228;
        plStack_1e8 = alStack_1e0;
        FUN_10a002c4c(&uStack_230,param_1);
        iVar1 = iVar18 + 1;
        ppppiVar11 = (int ****)pppiStack_2a8;
        if (pppiStack_2a8 != pppiStack_2a0) {
          ppppiVar12 = (int ****)pppiStack_2a8;
          do {
            iVar4 = *(int *)ppppiVar12;
            lVar14 = (long)iVar4;
            iVar5 = *(int *)((long)ppppiVar12 + 4);
            lVar17 = *(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * (long)iVar5;
            if (*(char *)(lVar17 + lVar14) == -0x80) {
              uVar13 = iVar5 - iVar1;
              do {
                uVar3 = iVar4 - iVar1;
                do {
                  if (((((-1 < (int)uVar3) && (-1 < (int)uVar13)) && ((int)uVar3 < uStack_228._4_4_)
                       ) && (((int)uVar13 < (int)uStack_228 &&
                             (cVar6 = *(char *)(*(long *)(param_2 + 0x10) +
                                                **(long **)(param_2 + 0x48) * (ulong)uVar13 +
                                               (ulong)uVar3), cVar6 == -1 || cVar6 == '\0')))) &&
                     ((iVar5 - uVar13) * (iVar5 - uVar13) + (iVar4 - uVar3) * (iVar4 - uVar3) <=
                      (uint)(iVar1 * iVar1))) {
                    lVar22 = 0;
                    uVar21 = 0;
                    do {
                      iVar8 = (uint)*(byte *)(uStack_220 + *plStack_1e8 * (long)iVar5 + lVar14 * 3 +
                                             lVar22) -
                              (uint)*(byte *)(uStack_220 + *plStack_1e8 * (ulong)uVar13 +
                                              (ulong)uVar3 * 3 + lVar22);
                      uVar21 = uVar21 + iVar8 * iVar8;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                    if (uVar21 <= (uint)((9 - iVar18) * (9 - iVar18))) {
                      uVar16 = 1;
                      if (cVar6 != '\0') {
                        uVar16 = 0xfe;
                      }
                      *(undefined1 *)(lVar17 + lVar14) = uVar16;
                      goto LAB_109ff0890;
                    }
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 != iVar4 + iStack_2ac);
                uVar13 = uVar13 + 1;
              } while (uVar13 != iVar5 + iStack_2ac);
            }
LAB_109ff0890:
            ppppiVar12 = ppppiVar12 + 1;
          } while (ppppiVar12 != (int ****)pppiStack_2a0);
        }
        for (; ppppiVar11 != (int ****)pppiStack_2a0; ppppiVar11 = ppppiVar11 + 1) {
          lVar14 = *(long *)(param_2 + 0x10) +
                   **(long **)(param_2 + 0x48) * (long)*(int *)((long)ppppiVar11 + 4);
          cVar6 = *(char *)(lVar14 + *(int *)ppppiVar11);
          if (cVar6 == '\x01') {
            uVar16 = 0;
LAB_109ff08e0:
            *(undefined1 *)(lVar14 + *(int *)ppppiVar11) = uVar16;
          }
          else if (cVar6 == -2) {
            uVar16 = 0xff;
            goto LAB_109ff08e0;
          }
        }
        if (lStack_1f8 != 0) {
          piVar2 = (int *)(lStack_1f8 + 0x14);
          do {
            iVar18 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar18 + -1 == 0) {
            func_0x000109a848d4(&uStack_230);
          }
        }
        lStack_1f8 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        if (0 < uStack_230._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)puStack_1f0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_230._4_4_);
        }
        if (plStack_1e8 != alStack_1e0 && plStack_1e8 != (long *)0x0) {
          _free(plStack_1e8[-1]);
        }
        iStack_2ac = iStack_2ac + 1;
        iVar18 = iVar1;
        if (iVar1 == 9) {
          func_0x000109a7e87c(&uStack_230,0x406fe00000000000,param_2);
          FUN_10a003124(&uStack_d0,&uStack_230);
          func_0x00010918eb6c(&uStack_230);
          func_0x000109a7e87c(&uStack_230,0,param_2);
          FUN_10a003124(&uStack_290,&uStack_230);
          func_0x00010918eb6c(&uStack_230);
          FUN_10a000a80(&uStack_230,&uStack_290);
          func_0x000109396208(&uStack_290,&uStack_230);
          if (lStack_1f8 != 0) {
            piVar2 = (int *)(lStack_1f8 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_230);
            }
          }
          lStack_1f8 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          if (0 < uStack_230._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)puStack_1f0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_230._4_4_);
          }
          if (plStack_1e8 != alStack_1e0 && plStack_1e8 != (long *)0x0) {
            _free(plStack_1e8[-1]);
          }
          FUN_10a000a80(&uStack_230,&uStack_d0);
          func_0x000109396208(&uStack_d0,&uStack_230);
          if (lStack_1f8 != 0) {
            piVar2 = (int *)(lStack_1f8 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_230);
            }
          }
          lStack_1f8 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          if (0 < uStack_230._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)((long)puStack_1f0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_230._4_4_);
          }
          if (plStack_1e8 != alStack_1e0 && plStack_1e8 != (long *)0x0) {
            _free(plStack_1e8[-1]);
          }
          uVar13 = *(uint *)(param_2 + 8);
          if (0 < (int)uVar13) {
            uVar19 = 0;
            uVar3 = *(uint *)(param_2 + 0xc);
            do {
              if (0 < (int)uVar3) {
                uVar20 = 0;
                do {
                  if ((*(char *)(lStack_280 + uVar19 * *plStack_248 + uVar20) == '\0') &&
                     (*(char *)(lStack_c0 + uVar19 * *plStack_88 + uVar20) == '\0')) {
                    *(undefined1 *)
                     (*(long *)(param_2 + 0x10) + uVar19 * **(long **)(param_2 + 0x48) + uVar20) =
                         0x80;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar3 != uVar20);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar13);
          }
          if (lStack_258 != 0) {
            piVar2 = (int *)(lStack_258 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_290);
            }
          }
          lStack_258 = 0;
          uStack_278 = 0;
          lStack_280 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          if (0 < uStack_290._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lStack_250 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_290._4_4_);
          }
          if (plStack_248 != alStack_240 && plStack_248 != (long *)0x0) {
            _free(plStack_248[-1]);
          }
          if (lStack_98 != 0) {
            piVar2 = (int *)(lStack_98 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_d0);
            }
          }
          lStack_98 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          if (0 < uStack_d0._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lStack_90 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_d0._4_4_);
          }
          if (plStack_88 != alStack_80 && plStack_88 != (long *)0x0) {
            _free(plStack_88[-1]);
          }
          if ((int ****)pppiStack_2a8 != (int ****)0x0) {
            pppiStack_2a0 = pppiStack_2a8;
            __ZdlPv();
          }
          return;
        }
      } while( true );
    }
  }
  FUN_10a0edfc4(&uStack_290);
LAB_109ff0cb4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109ff0cb8);
  (*pcVar9)();
}



/* Entry: 109ff0db4; end: 109ff130f;  */

void FUN_109ff0db4(undefined8 param_1,long param_2,undefined8 param_3,uint *param_4,uint *param_5,
                  int param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_5f0 [4];
  int iStack_5ec;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5b8;
  long lStack_5b0;
  undefined1 *puStack_5a8;
  undefined1 auStack_5a0 [16];
  undefined4 uStack_590;
  undefined8 uStack_58c;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_478;
  long lStack_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [216];
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined4 *puStack_348;
  undefined8 uStack_340;
  undefined4 auStack_338 [2];
  undefined4 *puStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [8];
  int iStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_218;
  long lStack_210;
  int *piStack_208;
  int iStack_200;
  int iStack_1fc;
  int *piStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [16];
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 **ppuStack_a0;
  undefined4 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iVar10 = **(int **)(param_2 + 0x40);
  iVar3 = (*(int **)(param_2 + 0x40))[1];
  if (iVar3 != (*(int **)(param_4 + 0x10))[1] || iVar10 != **(int **)(param_4 + 0x10)) {
LAB_109ff1290:
    puStack_358 = (uint *)0xe;
    uStack_360 = &UNK_10f63096f;
    puVar8 = &uStack_360;
    FUN_10a0edfc4(puVar8);
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    FUN_109ff0424();
    func_0x00010567aa40(&iStack_198);
    do {
      func_0x00010567aa40(&uStack_138);
      func_0x00010567aa40(&uStack_d8);
      __Unwind_Resume(puVar8);
    } while( true );
  }
  uStack_360 = &UNK_10f63096f;
  puStack_358 = (uint *)0xe;
  if (iVar3 != (*(int **)(param_5 + 0x10))[1] || iVar10 != **(int **)(param_5 + 0x10))
  goto LAB_109ff1290;
  iVar12 = iVar3;
  if (iVar3 <= iVar10) {
    iVar12 = iVar10;
  }
  fVar14 = (float)param_6 / (float)iVar12;
  if (fVar14 < 1.0) {
    iVar12 = (int)(fVar14 * (float)iVar3);
    iVar13 = (int)(fVar14 * (float)iVar10);
    uStack_d8 = 0x42ff0000;
    uStack_130 = &uStack_d8;
    puStack_98 = &uStack_d0;
    uStack_cc = 0;
    uStack_c8 = 0;
    iStack_d4 = 0;
    uStack_d0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    ppuStack_a0 = (undefined4 **)0x0;
    uStack_a8._0_4_ = 0;
    uStack_a8._4_4_ = 0;
    puStack_380 = &uStack_88;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_350 = 0;
    uStack_360._0_4_ = 0x1010000;
    uStack_360._4_4_ = 1;
    uStack_138 = 0x2010000;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_378 = param_7;
    uStack_370 = param_3;
    uStack_368 = param_1;
    puStack_358 = (uint *)param_2;
    iStack_198 = iVar12;
    iStack_194 = iVar13;
    puStack_90 = puStack_380;
    func_0x000109b0f718(0,0,&uStack_360,&uStack_138,&iStack_198,3);
    uStack_138 = 0x42ff0000;
    puStack_f8 = &uStack_130;
    uStack_130._4_4_ = 0;
    uStack_128 = 0;
    iStack_134 = 0;
    uStack_130._0_4_ = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_10c = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    puStack_388 = &uStack_e8;
    iStack_e0 = 0;
    iStack_dc = 0;
    uStack_e8._0_4_ = 0;
    uStack_e8._4_4_ = 0;
    uStack_350 = 0;
    uStack_360._0_4_ = 0x1010000;
    iStack_198 = 0x2010000;
    uStack_188 = 0;
    uStack_184 = 0;
    puStack_358 = param_4;
    iStack_200 = iVar12;
    iStack_1fc = iVar13;
    puStack_f0 = puStack_388;
    uStack_190 = &uStack_138;
    func_0x000109b0f718(0,0,&uStack_360,&iStack_198,&iStack_200,1);
    iStack_198 = 0x42ff0000;
    puStack_158 = &uStack_190;
    uStack_190._4_4_ = 0;
    uStack_188 = 0;
    iStack_194 = 0;
    uStack_190._0_4_ = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_16c = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    lStack_160 = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_350 = 0;
    uStack_360 = (undefined *)CONCAT44(uStack_360._4_4_,0x1010000);
    iStack_200 = 0x2010000;
    uStack_1f0 = 0;
    puStack_358 = param_5;
    piStack_1f8 = &iStack_198;
    iStack_1a0 = iVar12;
    iStack_19c = iVar13;
    puStack_150 = &uStack_148;
    func_0x000109b0f718(0,0,&uStack_360,&iStack_200,&iStack_1a0,1);
    func_0x000109a7d904(&uStack_360,(double)fVar14,uStack_370);
    uVar6 = uStack_368;
    FUN_10a003260(&iStack_200,&uStack_360);
    FUN_109ff1310(uVar6,&uStack_d8,&iStack_200,&uStack_138,&iStack_198,uStack_378);
    if (lStack_1c8 != 0) {
      piVar1 = (int *)(lStack_1c8 + 0x14);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(&iStack_200);
      }
    }
    lStack_1c8 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    if (0 < iStack_1fc) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lStack_1c0 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_1fc);
    }
    if (puStack_1b8 != auStack_1b0 && puStack_1b8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_1b8 + -8));
    }
    func_0x00010918eb6c(&uStack_360);
    puStack_358 = (uint *)uVar6;
    uStack_350 = 0;
    uStack_360 = (undefined *)CONCAT44(uStack_360._4_4_,0x81010000);
    iStack_200 = -0x7dff0000;
    piStack_1f8 = (int *)uVar6;
    uStack_1f0 = 0;
    iStack_1a0 = iVar3;
    iStack_19c = iVar10;
    func_0x000109b0f718(0,0,&uStack_360,&iStack_200,&iStack_1a0,1);
    if (lStack_160 != 0) {
      piVar1 = (int *)(lStack_160 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&iStack_198);
      }
    }
    lStack_160 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    if (0 < iStack_194) {
      lVar11 = 0;
      do {
        *(undefined4 *)((long)puStack_158 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_194);
    }
    if (puStack_150 != &uStack_148 && puStack_150 != (undefined8 *)0x0) {
      _free(puStack_150[-1]);
    }
    if (lStack_100 != 0) {
      piVar1 = (int *)(lStack_100 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_138);
      }
    }
    lStack_100 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    if (0 < iStack_134) {
      lVar11 = 0;
      do {
        *(undefined4 *)((long)puStack_f8 + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_134);
    }
    if (puStack_f0 != puStack_388 && puStack_f0 != (undefined8 *)0x0) {
      _free(puStack_f0[-1]);
    }
    if (ppuStack_a0 != (undefined4 **)0x0) {
      piVar1 = (int *)((long)ppuStack_a0 + 0x14);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        func_0x000109a848d4(&uStack_d8);
      }
    }
    ppuStack_a0 = (undefined4 **)0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    if (0 < iStack_d4) {
      lVar11 = 0;
      do {
        puStack_98[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iStack_d4);
    }
    if (puStack_90 != puStack_380 && puStack_90 != (undefined8 *)0x0) {
      _free(puStack_90[-1]);
    }
    return;
  }
  uVar2 = *param_4 & 7;
  __ZNSt3__19to_stringEi(&uStack_4b0,uVar2);
  plVar9 = &uStack_4b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar9,0,&UNK_10f630bf9,0x17);
  lStack_248 = plVar9[1];
  uStack_250 = (long *)*plVar9;
  uStack_240 = plVar9[2];
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  if (uStack_240 < 0) {
    iStack_e0 = (int)lStack_248;
    iStack_dc = (int)((ulong)lStack_248 >> 0x20);
    uStack_e8 = uStack_250;
    if (uVar2 == 5) {
      __ZdlPv();
      goto LAB_109ff13c4;
    }
  }
  else {
    uStack_e8 = &uStack_250;
    iStack_e0 = (int)uStack_240._7_1_;
    iStack_dc = (int)(uStack_240._7_1_ >> 7);
    if (uVar2 == 5) {
LAB_109ff13c4:
      if (uStack_4a0 < 0) {
        __ZdlPv(CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0));
      }
      lStack_4f8 = 0;
      uStack_4fc = 0;
      uStack_504 = 0;
      uStack_500 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      lStack_4f0 = (long)&uStack_52c + 4;
      uStack_514 = 0;
      uStack_510 = 0;
      uStack_51c = 0;
      uStack_518 = 0;
      uStack_524 = 0;
      uStack_520 = 0;
      uStack_52c = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_530 = 0x42ff0005;
      puStack_4e8 = &uStack_4e0;
      func_0x000109390e94(&uStack_530,param_4);
      uVar2 = *param_5 & 7;
      __ZNSt3__19to_stringEi(&uStack_4b0,uVar2);
      plVar9 = &uStack_4b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar9,0,&UNK_10f630c11,0x17);
      lStack_248 = plVar9[1];
      uStack_250 = (long *)*plVar9;
      uStack_240 = plVar9[2];
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = 0;
      if (uStack_240 < 0) {
        iStack_e0 = (int)lStack_248;
        iStack_dc = (int)((ulong)lStack_248 >> 0x20);
        uStack_e8 = uStack_250;
        if (uVar2 == 5) {
          __ZdlPv();
          goto LAB_109ff1490;
        }
      }
      else {
        uStack_e8 = &uStack_250;
        iStack_e0 = (int)uStack_240._7_1_;
        iStack_dc = (int)(uStack_240._7_1_ >> 7);
        if (uVar2 == 5) {
LAB_109ff1490:
          if (uStack_4a0._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0));
          }
          lStack_558 = 0;
          uStack_55c = 0;
          lStack_550 = (long)&uStack_58c + 4;
          uStack_564 = 0;
          uStack_560 = 0;
          uStack_56c = 0;
          uStack_568 = 0;
          uStack_574 = 0;
          uStack_570 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_584 = 0;
          uStack_580 = 0;
          uStack_58c = 0;
          uStack_540 = 0;
          uStack_538 = 0;
          uStack_590 = 0x42ff0005;
          puStack_548 = &uStack_540;
          func_0x000109390e94(&uStack_590,param_5);
          func_0x000109a7ead4(&uStack_250,0x3fecccccc0000000,&uStack_530);
          FUN_10a003124(&uStack_e8,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          func_0x000109a7ead4(&uStack_250,0x3fb99999a0000000,&uStack_530);
          FUN_10a003124(&uStack_2b0,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          uStack_320 = 0;
          iStack_31c = 0x44;
          uStack_4d0 = 0x7fffffff80000000;
          func_0x000109a84930(&uStack_250,param_3,&uStack_320,&uStack_4d0);
          uStack_4a0 = 0;
          uStack_4b0._0_4_ = 0x1010000;
          puStack_4a8 = &uStack_250;
          func_0x000109b42928(auStack_2c0,&uStack_4b0);
          if (lStack_218 != 0) {
            piVar1 = (int *)(lStack_218 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_250);
            }
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          if (0 < uStack_250._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_210 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_250._4_4_);
          }
          if (piStack_208 != &iStack_200 && piStack_208 != (int *)0x0) {
            _free(*(undefined8 *)(piStack_208 + -2));
          }
          iVar10 = (int)(((float)(iStack_2b4 + iStack_2b8) / 2.0) * 0.1);
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          uStack_250 = (long *)CONCAT44(iVar10,iVar10);
          uStack_320 = 0xffffffff;
          iStack_31c = 0xffffffff;
          func_0x000109b32bf8(&uStack_4b0,2,&uStack_250,&uStack_320);
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          puStack_2e0 = &uStack_318;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_320 = 0x42ff0000;
          uStack_4c0 = 0;
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x81010000);
          puStack_4c8 = &uStack_e8;
          auStack_338[0] = 0x82010000;
          uStack_328 = 0;
          uStack_340 = 0;
          uStack_350 = CONCAT44(uStack_350._4_4_,0x1010000);
          lStack_248 = 0x7fefffffffffffff;
          uStack_250 = (long *)0x7fefffffffffffff;
          uStack_238 = 0x7fefffffffffffff;
          uStack_240 = 0x7fefffffffffffff;
          uStack_88 = 0xffffffffffffffff;
          puStack_348 = (undefined4 *)&uStack_4b0;
          puStack_330 = &uStack_320;
          puStack_2d8 = &uStack_2d0;
          func_0x000109b32fd4(1,&uStack_4d0,auStack_338,&uStack_350,&uStack_88,1,0,&uStack_250);
          func_0x000109a7ef1c(&uStack_250,&uStack_2b0,&uStack_320);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_2b0,0);
          func_0x00010918eb6c(&uStack_250);
          puVar8 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar8 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar11 = 0;
            do {
              puStack_2e0[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_31c);
          }
          uStack_e8 = puVar8;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_4b0);
            }
          }
          lStack_478 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          if (0 < uStack_4b0._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_470 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_4b0._4_4_);
          }
          if (puStack_468 != auStack_460 && puStack_468 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_468 + -8));
          }
          func_0x000109a7ead4(&uStack_4b0,0x3fb99999a0000000,&uStack_590);
          uStack_320 = 0x42ff0000;
          puStack_2e0 = &uStack_318;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          puStack_2d8 = &uStack_2d0;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_320,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,&uStack_2b0,&uStack_320);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_2b0,0);
          func_0x00010918eb6c(&uStack_250);
          puVar8 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar8 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar11 = 0;
            do {
              puStack_2e0[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_31c);
          }
          uStack_e8 = puVar8;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          uStack_4d0 = 0x4060000000000000;
          puStack_4c8 = (undefined8 *)0x0;
          uStack_4c0 = 0;
          uStack_4b8 = 0;
          func_0x000109a7efec(&uStack_4b0,&uStack_2b0,&uStack_4d0);
          uStack_320 = 0x42ff0000;
          puStack_2e0 = &uStack_318;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          puStack_2d8 = &uStack_2d0;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_320,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,&uStack_e8,&uStack_320);
          FUN_10a003124(auStack_5f0,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          puVar8 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar8 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar11 = 0;
            do {
              puStack_2e0[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_31c);
          }
          uStack_e8 = puVar8;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          if (lStack_278 != 0) {
            piVar1 = (int *)(lStack_278 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_2b0);
            }
          }
          lStack_278 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          if (0 < iStack_2ac) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_270 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_2ac);
          }
          if (puStack_268 != auStack_260 && puStack_268 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_268 + -8));
          }
          puVar8 = uStack_e8;
          if (CONCAT44(uStack_ac,uStack_b0) != 0) {
            piVar1 = (int *)(CONCAT44(uStack_ac,uStack_b0) + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
              puVar8 = uStack_e8;
            }
          }
          uStack_e8._4_4_ = (int)((ulong)puVar8 >> 0x20);
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          iStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8) + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_e8._4_4_);
          }
          uStack_e8 = puVar8;
          if (ppuStack_a0 != &puStack_98 && ppuStack_a0 != (undefined4 **)0x0) {
            _free(ppuStack_a0[-1]);
          }
          FUN_109ff055c(param_2,auStack_5f0);
          uStack_2a0 = 0;
          uStack_2b0 = 0x81010005;
          puStack_2a8 = &uStack_530;
          FUN_10a0f4340(&uStack_4b0,&uStack_2b0,0);
          func_0x000109a7ead4(&uStack_250,0x3fb99999a0000000,&uStack_590);
          uStack_e8._0_4_ = 0x42ff0000;
          uStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_d4 = 0;
          uStack_d0 = 0;
          puStack_98 = (undefined4 *)0x0;
          puStack_90 = (undefined8 *)0x0;
          ppuStack_a0 = &puStack_98;
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_e8,0xffffffff);
          FUN_109feee30(param_1,param_2,auStack_5f0,&uStack_4b0,&uStack_e8);
          if (CONCAT44(uStack_ac,uStack_b0) != 0) {
            piVar1 = (int *)(CONCAT44(uStack_ac,uStack_b0) + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          iStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar11 = 0;
            do {
              uStack_a8[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_e8._4_4_);
          }
          if (ppuStack_a0 != &puStack_98 && ppuStack_a0 != (undefined4 **)0x0) {
            _free(ppuStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_250);
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_4b0);
            }
          }
          lStack_478 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          if (0 < uStack_4b0._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_470 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_4b0._4_4_);
          }
          if (puStack_468 != auStack_460 && puStack_468 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_468 + -8));
          }
          FUN_10a000c08(&uStack_250,param_7,param_2,param_1);
          func_0x000109396208(param_1,&uStack_250);
          if (lStack_218 != 0) {
            piVar1 = (int *)(lStack_218 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_250);
            }
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          if (0 < uStack_250._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_210 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_250._4_4_);
          }
          if (piStack_208 != &iStack_200 && piStack_208 != (int *)0x0) {
            _free(*(undefined8 *)(piStack_208 + -2));
          }
          func_0x000109a7e944(&uStack_4b0,0,auStack_5f0);
          uStack_e8._0_4_ = 0x42ff0000;
          uStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_d4 = 0;
          uStack_d0 = 0;
          puStack_98 = (undefined4 *)0x0;
          puStack_90 = (undefined8 *)0x0;
          ppuStack_a0 = &puStack_98;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_e8,0xffffffff);
          func_0x000109a7ef1c(&uStack_250,param_1,&uStack_e8);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,param_1,0);
          func_0x00010918eb6c(&uStack_250);
          if (CONCAT44(uStack_ac,uStack_b0) != 0) {
            piVar1 = (int *)(CONCAT44(uStack_ac,uStack_b0) + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          iStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar11 = 0;
            do {
              uStack_a8[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_e8._4_4_);
          }
          if (ppuStack_a0 != &puStack_98 && ppuStack_a0 != (undefined4 **)0x0) {
            _free(ppuStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          func_0x000109a7e87c(&uStack_4b0,0x406fe00000000000,auStack_5f0);
          uStack_e8._0_4_ = 0x42ff0000;
          uStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_d4 = 0;
          uStack_d0 = 0;
          puStack_98 = (undefined4 *)0x0;
          puStack_90 = (undefined8 *)0x0;
          ppuStack_a0 = &puStack_98;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_e8,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,param_1,&uStack_e8);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,param_1,0);
          func_0x00010918eb6c(&uStack_250);
          if (CONCAT44(uStack_ac,uStack_b0) != 0) {
            piVar1 = (int *)(CONCAT44(uStack_ac,uStack_b0) + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          iStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar11 = 0;
            do {
              uStack_a8[lVar11] = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_e8._4_4_);
          }
          if (ppuStack_a0 != &puStack_98 && ppuStack_a0 != (undefined4 **)0x0) {
            _free(ppuStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          if (lStack_5b8 != 0) {
            piVar1 = (int *)(lStack_5b8 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(auStack_5f0);
            }
          }
          lStack_5b8 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          if (0 < iStack_5ec) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_5b0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_5ec);
          }
          if (puStack_5a8 != auStack_5a0 && puStack_5a8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_5a8 + -8));
          }
          if (lStack_558 != 0) {
            piVar1 = (int *)(lStack_558 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_590);
            }
          }
          lStack_558 = 0;
          uStack_578 = 0;
          uStack_574 = 0;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_568 = 0;
          uStack_564 = 0;
          uStack_570 = 0;
          uStack_56c = 0;
          if (0 < (int)uStack_58c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_550 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uStack_58c);
          }
          if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
            _free(puStack_548[-1]);
          }
          if (lStack_4f8 != 0) {
            piVar1 = (int *)(lStack_4f8 + 0x14);
            do {
              iVar10 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              func_0x000109a848d4(&uStack_530);
            }
          }
          lStack_4f8 = 0;
          uStack_518 = 0;
          uStack_514 = 0;
          uStack_520 = 0;
          uStack_51c = 0;
          uStack_508 = 0;
          uStack_504 = 0;
          uStack_510 = 0;
          uStack_50c = 0;
          if (0 < (int)uStack_52c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_4f0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)uStack_52c);
          }
          if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
            _free(puStack_4e8[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&uStack_e8);
      goto LAB_109ff2118;
    }
  }
  FUN_10a0edfc4(&uStack_e8);
LAB_109ff2118:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff211c);
  (*pcVar7)();
}



/* Entry: 109ff1310; end: 109ff2353;  */

void FUN_109ff1310(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint *param_5,undefined8 param_6)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined1 auStack_5f0 [4];
  int iStack_5ec;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5b8;
  long lStack_5b0;
  undefined1 *puStack_5a8;
  undefined1 auStack_5a0 [16];
  undefined4 uStack_590;
  undefined8 uStack_58c;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_478;
  long lStack_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [272];
  undefined4 auStack_350 [2];
  undefined4 *puStack_348;
  undefined8 uStack_340;
  undefined4 auStack_338 [2];
  undefined4 *puStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [8];
  int iStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  undefined4 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_218;
  long lStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [280];
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  int *piStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  
  uVar2 = *param_4 & 7;
  __ZNSt3__19to_stringEi(&uStack_4b0,uVar2);
  plVar7 = &uStack_4b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar7,0,&UNK_10f630bf9,0x17);
  lStack_248 = plVar7[1];
  uStack_250 = (long *)*plVar7;
  uStack_240 = plVar7[2];
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  if (uStack_240 < 0) {
    iStack_e0 = (int)lStack_248;
    iStack_dc = (int)((ulong)lStack_248 >> 0x20);
    uStack_e8 = uStack_250;
    if (uVar2 == 5) {
      __ZdlPv();
      goto LAB_109ff13c4;
    }
  }
  else {
    uStack_e8 = &uStack_250;
    iStack_e0 = (int)uStack_240._7_1_;
    iStack_dc = (int)(uStack_240._7_1_ >> 7);
    if (uVar2 == 5) {
LAB_109ff13c4:
      if (uStack_4a0 < 0) {
        __ZdlPv(CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0));
      }
      lStack_4f8 = 0;
      uStack_4fc = 0;
      uStack_504 = 0;
      uStack_500 = 0;
      uStack_50c = 0;
      uStack_508 = 0;
      lStack_4f0 = (long)&uStack_52c + 4;
      uStack_514 = 0;
      uStack_510 = 0;
      uStack_51c = 0;
      uStack_518 = 0;
      uStack_524 = 0;
      uStack_520 = 0;
      uStack_52c = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_530 = 0x42ff0005;
      puStack_4e8 = &uStack_4e0;
      func_0x000109390e94(&uStack_530,param_4);
      uVar2 = *param_5 & 7;
      __ZNSt3__19to_stringEi(&uStack_4b0,uVar2);
      plVar7 = &uStack_4b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar7,0,&UNK_10f630c11,0x17);
      lStack_248 = plVar7[1];
      uStack_250 = (long *)*plVar7;
      uStack_240 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      if (uStack_240 < 0) {
        iStack_e0 = (int)lStack_248;
        iStack_dc = (int)((ulong)lStack_248 >> 0x20);
        uStack_e8 = uStack_250;
        if (uVar2 == 5) {
          __ZdlPv();
          goto LAB_109ff1490;
        }
      }
      else {
        uStack_e8 = &uStack_250;
        iStack_e0 = (int)uStack_240._7_1_;
        iStack_dc = (int)(uStack_240._7_1_ >> 7);
        if (uVar2 == 5) {
LAB_109ff1490:
          if (uStack_4a0._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0));
          }
          lStack_558 = 0;
          uStack_55c = 0;
          lStack_550 = (long)&uStack_58c + 4;
          uStack_564 = 0;
          uStack_560 = 0;
          uStack_56c = 0;
          uStack_568 = 0;
          uStack_574 = 0;
          uStack_570 = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_584 = 0;
          uStack_580 = 0;
          uStack_58c = 0;
          uStack_540 = 0;
          uStack_538 = 0;
          uStack_590 = 0x42ff0005;
          puStack_548 = &uStack_540;
          func_0x000109390e94(&uStack_590,param_5);
          func_0x000109a7ead4(&uStack_250,0x3fecccccc0000000,&uStack_530);
          FUN_10a003124(&uStack_e8,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          func_0x000109a7ead4(&uStack_250,0x3fb99999a0000000,&uStack_530);
          FUN_10a003124(&uStack_2b0,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          uStack_320 = 0;
          iStack_31c = 0x44;
          uStack_4d0 = 0x7fffffff80000000;
          func_0x000109a84930(&uStack_250,param_3,&uStack_320,&uStack_4d0);
          uStack_4a0 = 0;
          uStack_4b0._0_4_ = 0x1010000;
          puStack_4a8 = &uStack_250;
          func_0x000109b42928(auStack_2c0,&uStack_4b0);
          if (lStack_218 != 0) {
            piVar1 = (int *)(lStack_218 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_250);
            }
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          if (0 < uStack_250._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_210 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_250._4_4_);
          }
          if (puStack_208 != auStack_200 && puStack_208 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_208 + -8));
          }
          iVar8 = (int)(((float)(iStack_2b4 + iStack_2b8) / 2.0) * 0.1);
          if (iVar8 < 2) {
            iVar8 = 1;
          }
          uStack_250 = (long *)CONCAT44(iVar8,iVar8);
          uStack_320 = 0xffffffff;
          iStack_31c = 0xffffffff;
          func_0x000109b32bf8(&uStack_4b0,2,&uStack_250,&uStack_320);
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          puStack_2e0 = &uStack_318;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_320 = 0x42ff0000;
          uStack_4c0 = 0;
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x81010000);
          puStack_4c8 = &uStack_e8;
          auStack_338[0] = 0x82010000;
          uStack_328 = 0;
          uStack_340 = 0;
          auStack_350[0] = 0x1010000;
          lStack_248 = 0x7fefffffffffffff;
          uStack_250 = (long *)0x7fefffffffffffff;
          uStack_238 = 0x7fefffffffffffff;
          uStack_240 = 0x7fefffffffffffff;
          auStack_88[0] = 0xffffffffffffffff;
          puStack_348 = (undefined4 *)&uStack_4b0;
          puStack_330 = &uStack_320;
          puStack_2d8 = &uStack_2d0;
          func_0x000109b32fd4(1,&uStack_4d0,auStack_338,auStack_350,auStack_88,1,0,&uStack_250);
          func_0x000109a7ef1c(&uStack_250,&uStack_2b0,&uStack_320);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_2b0,0);
          func_0x00010918eb6c(&uStack_250);
          puVar5 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar5 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar9 = 0;
            do {
              puStack_2e0[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_31c);
          }
          uStack_e8 = puVar5;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_4b0);
            }
          }
          lStack_478 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          if (0 < uStack_4b0._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_470 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_4b0._4_4_);
          }
          if (puStack_468 != auStack_460 && puStack_468 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_468 + -8));
          }
          func_0x000109a7ead4(&uStack_4b0,0x3fb99999a0000000,&uStack_590);
          uStack_320 = 0x42ff0000;
          puStack_2e0 = &uStack_318;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          puStack_2d8 = &uStack_2d0;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_320,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,&uStack_2b0,&uStack_320);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_2b0,0);
          func_0x00010918eb6c(&uStack_250);
          puVar5 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar5 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar9 = 0;
            do {
              puStack_2e0[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_31c);
          }
          uStack_e8 = puVar5;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          uStack_4d0 = 0x4060000000000000;
          puStack_4c8 = (undefined8 *)0x0;
          uStack_4c0 = 0;
          uStack_4b8 = 0;
          func_0x000109a7efec(&uStack_4b0,&uStack_2b0,&uStack_4d0);
          uStack_320 = 0x42ff0000;
          puStack_2e0 = &uStack_318;
          uStack_314 = 0;
          uStack_310 = 0;
          iStack_31c = 0;
          uStack_318 = 0;
          lStack_2e8 = 0;
          uStack_2ec = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2fc = 0;
          uStack_2f8 = 0;
          uStack_304 = 0;
          uStack_300 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          puStack_2d8 = &uStack_2d0;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_320,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,&uStack_e8,&uStack_320);
          FUN_10a003124(auStack_5f0,&uStack_250);
          func_0x00010918eb6c(&uStack_250);
          puVar5 = uStack_e8;
          if (lStack_2e8 != 0) {
            piVar1 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
              puVar5 = uStack_e8;
            }
          }
          lStack_2e8 = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          uStack_2f8 = 0;
          uStack_2f4 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          if (0 < iStack_31c) {
            lVar9 = 0;
            do {
              puStack_2e0[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_31c);
          }
          uStack_e8 = puVar5;
          if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
            _free(puStack_2d8[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          if (lStack_278 != 0) {
            piVar1 = (int *)(lStack_278 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_2b0);
            }
          }
          lStack_278 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          if (0 < iStack_2ac) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_270 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_2ac);
          }
          if (puStack_268 != auStack_260 && puStack_268 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_268 + -8));
          }
          puVar5 = uStack_e8;
          if (lStack_b0 != 0) {
            piVar1 = (int *)(lStack_b0 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
              puVar5 = uStack_e8;
            }
          }
          uStack_e8._4_4_ = (int)((ulong)puVar5 >> 0x20);
          lStack_b0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)((long)piStack_a8 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_e8._4_4_);
          }
          uStack_e8 = puVar5;
          if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
            _free(puStack_a0[-1]);
          }
          FUN_109ff055c(param_2,auStack_5f0);
          uStack_2a0 = 0;
          uStack_2b0 = 0x81010005;
          puStack_2a8 = &uStack_530;
          FUN_10a0f4340(&uStack_4b0,&uStack_2b0,0);
          func_0x000109a7ead4(&uStack_250,0x3fb99999a0000000,&uStack_590);
          uStack_e8._0_4_ = 0x42ff0000;
          piStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          lStack_b0 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          puStack_a0 = &uStack_98;
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,&uStack_e8,0xffffffff);
          FUN_109feee30(param_1,param_2,auStack_5f0,&uStack_4b0,&uStack_e8);
          if (lStack_b0 != 0) {
            piVar1 = (int *)(lStack_b0 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          lStack_b0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar9 = 0;
            do {
              piStack_a8[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_e8._4_4_);
          }
          if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
            _free(puStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_250);
          if (lStack_478 != 0) {
            piVar1 = (int *)(lStack_478 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_4b0);
            }
          }
          lStack_478 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          uStack_490 = 0;
          if (0 < uStack_4b0._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_470 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_4b0._4_4_);
          }
          if (puStack_468 != auStack_460 && puStack_468 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_468 + -8));
          }
          FUN_10a000c08(&uStack_250,param_6,param_2,param_1);
          func_0x000109396208(param_1,&uStack_250);
          if (lStack_218 != 0) {
            piVar1 = (int *)(lStack_218 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_250);
            }
          }
          lStack_218 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          uStack_230 = 0;
          if (0 < uStack_250._4_4_) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_210 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_250._4_4_);
          }
          if (puStack_208 != auStack_200 && puStack_208 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_208 + -8));
          }
          func_0x000109a7e944(&uStack_4b0,0,auStack_5f0);
          uStack_e8._0_4_ = 0x42ff0000;
          piStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          lStack_b0 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          puStack_a0 = &uStack_98;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_e8,0xffffffff);
          func_0x000109a7ef1c(&uStack_250,param_1,&uStack_e8);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,param_1,0);
          func_0x00010918eb6c(&uStack_250);
          if (lStack_b0 != 0) {
            piVar1 = (int *)(lStack_b0 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          lStack_b0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar9 = 0;
            do {
              piStack_a8[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_e8._4_4_);
          }
          if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
            _free(puStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          func_0x000109a7e87c(&uStack_4b0,0x406fe00000000000,auStack_5f0);
          uStack_e8._0_4_ = 0x42ff0000;
          piStack_a8 = &iStack_e0;
          iStack_dc = 0;
          uStack_d8 = 0;
          uStack_e8._4_4_ = 0;
          iStack_e0 = 0;
          lStack_b0 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          puStack_a0 = &uStack_98;
          (**(code **)(*(long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0) + 0x18))
                    ((long *)CONCAT44(uStack_4b0._4_4_,(undefined4)uStack_4b0),&uStack_4b0,
                     &uStack_e8,0xffffffff);
          func_0x000109a7f0b8(&uStack_250,param_1,&uStack_e8);
          (**(code **)(*uStack_250 + 0x18))(uStack_250,&uStack_250,param_1,0);
          func_0x00010918eb6c(&uStack_250);
          if (lStack_b0 != 0) {
            piVar1 = (int *)(lStack_b0 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_e8);
            }
          }
          lStack_b0 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          if (0 < uStack_e8._4_4_) {
            lVar9 = 0;
            do {
              piStack_a8[lVar9] = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < uStack_e8._4_4_);
          }
          if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
            _free(puStack_a0[-1]);
          }
          func_0x00010918eb6c(&uStack_4b0);
          if (lStack_5b8 != 0) {
            piVar1 = (int *)(lStack_5b8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(auStack_5f0);
            }
          }
          lStack_5b8 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5c8 = 0;
          uStack_5d0 = 0;
          if (0 < iStack_5ec) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_5b0 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iStack_5ec);
          }
          if (puStack_5a8 != auStack_5a0 && puStack_5a8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_5a8 + -8));
          }
          if (lStack_558 != 0) {
            piVar1 = (int *)(lStack_558 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_590);
            }
          }
          lStack_558 = 0;
          uStack_578 = 0;
          uStack_574 = 0;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_568 = 0;
          uStack_564 = 0;
          uStack_570 = 0;
          uStack_56c = 0;
          if (0 < (int)uStack_58c) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_550 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uStack_58c);
          }
          if (puStack_548 != &uStack_540 && puStack_548 != (undefined8 *)0x0) {
            _free(puStack_548[-1]);
          }
          if (lStack_4f8 != 0) {
            piVar1 = (int *)(lStack_4f8 + 0x14);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&uStack_530);
            }
          }
          lStack_4f8 = 0;
          uStack_518 = 0;
          uStack_514 = 0;
          uStack_520 = 0;
          uStack_51c = 0;
          uStack_508 = 0;
          uStack_504 = 0;
          uStack_510 = 0;
          uStack_50c = 0;
          if (0 < (int)uStack_52c) {
            lVar9 = 0;
            do {
              *(undefined4 *)(lStack_4f0 + lVar9 * 4) = 0;
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uStack_52c);
          }
          if (puStack_4e8 != &uStack_4e0 && puStack_4e8 != (undefined8 *)0x0) {
            _free(puStack_4e8[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&uStack_e8);
      goto LAB_109ff2118;
    }
  }
  FUN_10a0edfc4(&uStack_e8);
LAB_109ff2118:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109ff211c);
  (*pcVar6)();
}



/* Entry: 109ff2354; end: 109ff28df;  */

void FUN_109ff2354(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long **pplVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_408;
  undefined1 auStack_400 [4];
  int iStack_3fc;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined8 uStack_370;
  int iStack_368;
  int iStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long lStack_338;
  int *piStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long lStack_2d8;
  int *piStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_2 & 0xfff;
  __ZNSt3__19to_stringEi(&plStack_1a8,uVar2);
  pplVar7 = &plStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pplVar7,0,&UNK_10f630c29,0x11);
  uStack_300 = SUB84(pplVar7[2],0);
  uStack_2fc = (int)((ulong)pplVar7[2] >> 0x20);
  iStack_308 = (int)pplVar7[1];
  iStack_304 = (int)((ulong)pplVar7[1] >> 0x20);
  uStack_310 = SUB84(*pplVar7,0);
  iStack_30c = (int)((ulong)*pplVar7 >> 0x20);
  pplVar7[1] = (long *)0x0;
  pplVar7[2] = (long *)0x0;
  *pplVar7 = (long *)0x0;
  if (uStack_2fc < 0) {
    uStack_370._0_4_ = uStack_310;
    uStack_370._4_4_ = iStack_30c;
    iStack_368 = iStack_308;
    iStack_364 = iStack_304;
    puVar9 = (undefined4 *)CONCAT44(iStack_30c,uStack_310);
    if (uVar2 == 0x10) {
      __ZdlPv();
      goto LAB_109ff2400;
    }
  }
  else {
    uStack_370 = &uStack_310;
    iStack_368 = (int)uStack_2fc._3_1_;
    iStack_364 = (int)(uStack_2fc._3_1_ >> 7);
    puVar9 = uStack_370;
    if (uVar2 == 0x10) {
LAB_109ff2400:
      if (uStack_198._7_1_ < '\0') {
        __ZdlPv(plStack_1a8);
      }
      FUN_109ff055c(param_2,param_3);
      piStack_2d0 = &iStack_308;
      plStack_1a8 = (long *)**(undefined8 **)(param_2 + 0x10);
      uStack_310 = 0x42ff0000;
      iStack_304 = 0;
      uStack_300 = 0;
      iStack_30c = 0;
      iStack_308 = 0;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      uStack_2e4 = 0;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      puStack_2c8 = &uStack_2c0;
      func_0x000109a83fd0(&uStack_310,2,&plStack_1a8,0);
      plStack_1a8 = (long *)0x406fe00000000000;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x000109a48880(&uStack_310,&plStack_1a8);
      FUN_109feee30(param_1,param_2,param_3,param_3,&uStack_310);
      if (lStack_2d8 != 0) {
        piVar1 = (int *)(lStack_2d8 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(&uStack_310);
        }
      }
      lStack_2d8 = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      if (0 < iStack_30c) {
        lVar11 = 0;
        do {
          piStack_2d0[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_30c);
      }
      if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
        _free(puStack_2c8[-1]);
      }
      FUN_10a000c08(&uStack_310,param_4,param_2,param_1);
      func_0x000109396208(param_1,&uStack_310);
      if (lStack_2d8 != 0) {
        piVar1 = (int *)(lStack_2d8 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(&uStack_310);
        }
      }
      lStack_2d8 = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      if (0 < iStack_30c) {
        lVar11 = 0;
        do {
          piStack_2d0[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_30c);
      }
      if (puStack_2c8 != &uStack_2c0 && puStack_2c8 != (undefined8 *)0x0) {
        _free(puStack_2c8[-1]);
      }
      func_0x000109a7e944(&plStack_1a8,0,param_3);
      uStack_370._0_4_ = 0x42ff0000;
      piStack_330 = &iStack_368;
      iStack_364 = 0;
      uStack_360 = 0;
      uStack_370._4_4_ = 0;
      iStack_368 = 0;
      lStack_338 = 0;
      uStack_33c = 0;
      uStack_344 = 0;
      uStack_340 = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      uStack_354 = 0;
      uStack_350 = 0;
      uStack_35c = 0;
      uStack_358 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      puStack_328 = &uStack_320;
      (**(code **)(*plStack_1a8 + 0x18))(plStack_1a8,&plStack_1a8,&uStack_370,0xffffffff);
      func_0x000109a7ef1c(&uStack_310,param_1,&uStack_370);
      (**(code **)(*(long *)CONCAT44(iStack_30c,uStack_310) + 0x18))
                ((long *)CONCAT44(iStack_30c,uStack_310),&uStack_310,param_1,0);
      func_0x00010918eb6c(&uStack_310);
      if (lStack_338 != 0) {
        piVar1 = (int *)(lStack_338 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(&uStack_370);
        }
      }
      lStack_338 = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      if (0 < uStack_370._4_4_) {
        lVar11 = 0;
        do {
          piStack_330[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_370._4_4_);
      }
      if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
        _free(puStack_328[-1]);
      }
      func_0x00010918eb6c(&plStack_1a8);
      func_0x000109a7e87c(&plStack_1a8,0x406fe00000000000,param_3);
      uStack_370._0_4_ = 0x42ff0000;
      piStack_330 = &iStack_368;
      iStack_364 = 0;
      uStack_360 = 0;
      uStack_370._4_4_ = 0;
      iStack_368 = 0;
      lStack_338 = 0;
      uStack_33c = 0;
      uStack_344 = 0;
      uStack_340 = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      uStack_354 = 0;
      uStack_350 = 0;
      uStack_35c = 0;
      uStack_358 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      puStack_328 = &uStack_320;
      (**(code **)(*plStack_1a8 + 0x18))(plStack_1a8,&plStack_1a8,&uStack_370,0xffffffff);
      func_0x000109a7f0b8(&uStack_310,param_1,&uStack_370);
      puVar9 = &uStack_310;
      uVar10 = param_1;
      (**(code **)(*(long *)CONCAT44(iStack_30c,uStack_310) + 0x18))
                ((long *)CONCAT44(iStack_30c,uStack_310),puVar9,param_1,0);
      iVar8 = (int)puVar9;
      func_0x00010918eb6c(&uStack_310);
      if (lStack_338 != 0) {
        piVar1 = (int *)(lStack_338 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_370);
        }
      }
      lStack_338 = 0;
      uVar12 = 0;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      if (0 < uStack_370._4_4_) {
        lVar11 = 0;
        do {
          piStack_330[lVar11] = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_370._4_4_);
      }
      if (puStack_328 != &uStack_320 && puStack_328 != (undefined8 *)0x0) {
        _free(puStack_328[-1]);
      }
      pplVar7 = &plStack_1a8;
      func_0x00010918eb6c();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      if (iVar8 != 0) {
        func_0x000104bd46a0();
        func_0x00010918eb6c(&uStack_310);
        func_0x00010567aa40(&uStack_370);
        func_0x00010918eb6c(&plStack_1a8);
        FUN_109ff0424(param_1);
      }
      __Unwind_Resume();
      uStack_408 = NEON_rev64(*pplVar7[8],4);
      FUN_109ff29d8(auStack_400,&uStack_408);
      FUN_109ff2cd0(uVar12,pplVar7,auStack_400,uVar10);
      if (lStack_3c8 != 0) {
        piVar1 = (int *)(lStack_3c8 + 0x14);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          func_0x000109a848d4(auStack_400);
        }
      }
      lStack_3c8 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      if (0 < iStack_3fc) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_3c0 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_3fc);
      }
      if (puStack_3b8 != auStack_3b0 && puStack_3b8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_3b8 + -8));
      }
      return;
    }
  }
  uStack_370 = puVar9;
  FUN_10a0edfc4(&uStack_370);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109ff2808);
  (*pcVar6)();
}



/* Entry: 109ff28e0; end: 109ff29d7;  */

void FUN_109ff28e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  uStack_98 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
  FUN_109ff29d8(auStack_90,&uStack_98);
  FUN_109ff2cd0(param_1,param_2,auStack_90,param_4);
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_90);
    }
  }
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (0 < iStack_8c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_50 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_8c);
  }
  if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_48 + -8));
  }
  return;
}



/* Entry: 109ff29d8; end: 109ff2ccf;  */

void FUN_109ff29d8(undefined4 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  uint uVar6;
  code *pcVar7;
  uint ****ppppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  long **pplVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined4 auStack_888 [2];
  undefined4 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined4 *puStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_838;
  undefined4 **ppuStack_830;
  undefined8 *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined4 uStack_710;
  int iStack_70c;
  undefined8 uStack_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  int iStack_6ac;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_650;
  int iStack_64c;
  undefined8 uStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  long lStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long ***ppplStack_5e8;
  undefined8 uStack_5e0;
  long ***ppplStack_490;
  undefined4 *puStack_488;
  undefined8 uStack_480;
  undefined4 uStack_330;
  undefined8 uStack_32c;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_240;
  long alStack_238 [3];
  uint auStack_220 [2];
  long *plStack_218;
  undefined8 uStack_210;
  undefined4 auStack_208 [2];
  long *plStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  uint ***pppuStack_1d8;
  uint ***pppuStack_1d0;
  uint ***pppuStack_1c8;
  long *plStack_1c0;
  uint ***pppuStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1d8 = (uint ***)*param_4;
  func_0x000109a829e8(&plStack_1c0,&pppuStack_1d8,0);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  (**(code **)(*plStack_1c0 + 0x18))(plStack_1c0,&plStack_1c0,param_1,0xffffffff);
  func_0x00010918eb6c(&plStack_1c0);
  pppuStack_1d8 = (uint ***)0x0;
  pppuStack_1d0 = (uint ***)0x0;
  pppuStack_1c8 = (uint ***)0x0;
  func_0x0001092c8954(&pppuStack_1d8,(long)*(int *)(param_5 + 8));
  iVar12 = *(int *)(param_5 + 8);
  if (0 < iVar12) {
    lVar16 = 0;
    do {
      puVar10 = (undefined8 *)(*(long *)(param_5 + 0x10) + **(long **)(param_5 + 0x48) * lVar16);
      if (pppuStack_1d0 < pppuStack_1c8) {
        ppppuVar8 = (uint ****)(pppuStack_1d0 + 1);
        *pppuStack_1d0 =
             (uint **)CONCAT44((int)(float)((ulong)*puVar10 >> 0x20),(int)(float)*puVar10);
      }
      else {
        ppppuVar8 = &pppuStack_1d8;
        FUN_10a000e78(ppppuVar8,puVar10,(long)puVar10 + 4);
        iVar12 = *(int *)(param_5 + 8);
      }
      lVar16 = lVar16 + 1;
      pppuStack_1d0 = (uint ***)ppppuVar8;
    } while (lVar16 < iVar12);
  }
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  uStack_1e0 = 0;
  plStack_1c0 = (long *)CONCAT44(plStack_1c0._4_4_,0x8103000c);
  pppuStack_1b8 = (uint ***)&pppuStack_1d8;
  plStack_1b0 = (long *)0x0;
  auStack_208[0] = 0x8203000c;
  plStack_200 = &lStack_1f0;
  uStack_1f8 = 0;
  func_0x000109ae2358(&plStack_1c0,auStack_208,0,1);
  FUN_10a0f4240(0);
  auStack_208[0] = 0x3010000;
  uStack_1f8 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  plStack_200 = (long *)param_1;
  FUN_10a000fa0(&lStack_60,lStack_1f0,lStack_1e8,lStack_1e8 - lStack_1f0 >> 3);
  alStack_238[0] = 0;
  alStack_238[1] = 0;
  alStack_238[2] = 0;
  FUN_10a001048(alStack_238,&lStack_60,&lStack_48,1);
  fVar18 = 0.0;
  uStack_210 = 0;
  auStack_220[0] = 0x8104000c;
  uStack_240 = 0;
  puVar11 = auStack_220;
  pplVar13 = &plStack_1c0;
  plStack_218 = alStack_238;
  plStack_1c0 = param_3;
  pppuStack_1b8 = (uint ***)param_3;
  plStack_1b0 = param_3;
  plStack_1a8 = param_3;
  func_0x000109aefd90(auStack_208,puVar11,pplVar13,8,0,&uStack_240);
  iVar12 = (int)pplVar13;
  plStack_1c0 = alStack_238;
  func_0x00010a001298(&plStack_1c0);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  ppppuVar8 = (uint ****)pppuStack_1d8;
  if ((uint ****)pppuStack_1d8 != (uint ****)0x0) {
    pppuStack_1d0 = pppuStack_1d8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  plStack_1c0 = alStack_238;
  func_0x00010a001298(&plStack_1c0);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  if ((uint ****)pppuStack_1d8 != (uint ****)0x0) {
    pppuStack_1d0 = pppuStack_1d8;
    __ZdlPv();
  }
  func_0x00010567aa40(param_1);
  __Unwind_Resume();
  uVar14 = *(uint *)ppppuVar8 & 0xfff;
  __ZNSt3__19to_stringEi(&uStack_5f0,uVar14);
  plVar9 = &uStack_5f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar9,0,&UNK_10f630c3b,0x12);
  uStack_480 = plVar9[2];
  puStack_488 = (undefined4 *)plVar9[1];
  ppplStack_490 = (long ***)*plVar9;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  puStack_868 = (undefined4 *)(long)uStack_480._7_1_;
  if ((long)puStack_868 < 0) {
    uStack_870 = (long ****)ppplStack_490;
    puStack_868 = puStack_488;
    if (uVar14 == 5) {
      __ZdlPv();
      goto LAB_109ff2d80;
    }
  }
  else {
    uStack_870 = &ppplStack_490;
    if (uVar14 == 5) {
LAB_109ff2d80:
      if (uStack_5e0 < 0) {
        __ZdlPv(CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0));
      }
      uVar14 = *puVar11 & 0xfff;
      __ZNSt3__19to_stringEi(&uStack_5f0,uVar14);
      plVar9 = &uStack_5f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar9,0,&UNK_10f630c4e,0x16);
      puStack_488 = (undefined4 *)plVar9[1];
      ppplStack_490 = (long ***)*plVar9;
      uStack_480 = plVar9[2];
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = 0;
      puStack_868 = (undefined4 *)(long)uStack_480._7_1_;
      if ((long)puStack_868 < 0) {
        uStack_870 = (long ****)ppplStack_490;
        puStack_868 = puStack_488;
        if (uVar14 == 0) {
          __ZdlPv();
          goto LAB_109ff2e00;
        }
      }
      else {
        uStack_870 = &ppplStack_490;
        if (uVar14 == 0) {
LAB_109ff2e00:
          if (uStack_5e0._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0));
          }
          uStack_330 = 0x42ff0000;
          uStack_324 = 0;
          uStack_320 = 0;
          uStack_32c = 0;
          lStack_2f0 = (long)&uStack_32c + 4;
          uStack_314 = 0;
          uStack_310 = 0;
          uStack_31c = 0;
          uStack_318 = 0;
          uStack_304 = 0;
          uStack_30c = 0;
          uStack_308 = 0;
          lStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2fc = 0;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          puStack_2e8 = &uStack_2e0;
          func_0x000109a7ead4(&ppplStack_490,(double)fVar18,ppppuVar8);
          uStack_5e0 = 0;
          uStack_5f0._0_4_ = 0xc1060000;
          uStack_870 = (long ****)CONCAT44(uStack_870._4_4_,0x2010000);
          uStack_860 = 0;
          puVar10 = &uStack_5f0;
          puStack_868 = &uStack_330;
          ppplStack_5e8 = (long ***)&ppplStack_490;
          func_0x000109adde6c(puVar10,&uStack_870,8,4);
          func_0x00010918eb6c(&ppplStack_490);
          puVar17 = (undefined8 *)CONCAT44(uStack_648._4_4_,(undefined4)uStack_648);
          if (1 < (int)(uint)puVar10) {
            puVar17 = (undefined8 *)((ulong)&uStack_870 | 4);
            uVar15 = 0xffffffff;
            uVar14 = 1;
            dVar19 = -1.0;
            do {
              func_0x000109a7e87c(&uStack_5f0,(double)uVar14,&uStack_330);
              uStack_870 = (long ****)CONCAT44(uStack_870._4_4_,0x42ff0000);
              *(undefined8 *)((long)puVar17 + 0x34) = 0;
              *(undefined8 *)((long)puVar17 + 0x2c) = 0;
              puVar17[3] = 0;
              puVar17[2] = 0;
              puVar17[5] = 0;
              puVar17[4] = 0;
              puVar17[1] = 0;
              *puVar17 = 0;
              uStack_820 = 0;
              uStack_818 = 0;
              ppuStack_830 = &puStack_868;
              puStack_828 = &uStack_820;
              (**(code **)(*(long *)CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0) + 0x18))
                        ((long *)CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0),&uStack_5f0,
                         &uStack_870,0xffffffff);
              func_0x000109a7ef1c(&ppplStack_490,&uStack_870,puVar11);
              uStack_6a0 = 0;
              uStack_69c = 0;
              uStack_6b0 = 0xc1060000;
              uStack_6a8 = &ppplStack_490;
              func_0x000109ab74d4(&uStack_650,&uStack_6b0);
              dVar20 = (double)CONCAT44(iStack_64c,uStack_650);
              func_0x00010918eb6c(&ppplStack_490);
              pppplVar5 = uStack_6a8;
              if (lStack_838 != 0) {
                piVar1 = (int *)(lStack_838 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_870);
                  pppplVar5 = uStack_6a8;
                }
              }
              lStack_838 = 0;
              uStack_858 = 0;
              uStack_860 = 0;
              uStack_848 = 0;
              uStack_850 = 0;
              if (0 < uStack_870._4_4_) {
                lVar16 = 0;
                do {
                  *(undefined4 *)((long)ppuStack_830 + lVar16 * 4) = 0;
                  lVar16 = lVar16 + 1;
                } while (lVar16 < uStack_870._4_4_);
              }
              uStack_6a8 = pppplVar5;
              if (puStack_828 != &uStack_820 && puStack_828 != (undefined8 *)0x0) {
                _free(puStack_828[-1]);
              }
              func_0x00010918eb6c(&uStack_5f0);
              uVar6 = uVar14;
              if (dVar20 <= dVar19) {
                dVar20 = dVar19;
                uVar6 = uVar15;
              }
              uVar15 = uVar6;
              uVar14 = uVar14 + 1;
              dVar19 = dVar20;
            } while (uVar14 != (uint)puVar10);
            puVar17 = (undefined8 *)CONCAT44(uStack_648._4_4_,(undefined4)uStack_648);
            if (uVar15 != 0xffffffff) {
              if (iVar12 == 0) {
                func_0x000109a7e944(&uStack_5f0,(double)(int)uVar15,&uStack_330);
                uStack_6b0 = 0x42ff0000;
                puStack_670 = &uStack_6a8;
                uStack_6a8._4_4_ = 0;
                uStack_6a0 = 0;
                iStack_6ac = 0;
                uStack_6a8._0_4_ = 0;
                lStack_678 = 0;
                uStack_67c = 0;
                uStack_684 = 0;
                uStack_680 = 0;
                uStack_68c = 0;
                uStack_688 = 0;
                uStack_694 = 0;
                uStack_690 = 0;
                uStack_69c = 0;
                uStack_698 = 0;
                uStack_658 = 0;
                uStack_660 = 0;
                puStack_668 = &uStack_660;
                (**(code **)(*(long *)CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0) + 0x18))
                          ((long *)CONCAT44(uStack_5f0._4_4_,(undefined4)uStack_5f0),&uStack_5f0,
                           &uStack_6b0,0xffffffff);
                func_0x000109a7e944(&uStack_870,0,&uStack_330);
                uStack_710 = 0x42ff0000;
                puStack_6d0 = &uStack_708;
                uStack_708._4_4_ = 0;
                uStack_700 = 0;
                iStack_70c = 0;
                uStack_708._0_4_ = 0;
                lStack_6d8 = 0;
                uStack_6dc = 0;
                uStack_6e4 = 0;
                uStack_6e0 = 0;
                uStack_6ec = 0;
                uStack_6e8 = 0;
                uStack_6f4 = 0;
                uStack_6f0 = 0;
                uStack_6fc = 0;
                uStack_6f8 = 0;
                uStack_6c0 = 0;
                uStack_6b8 = 0;
                puStack_6c8 = &uStack_6c0;
                (**(code **)((long)*uStack_870 + 0x18))
                          (uStack_870,&uStack_870,&uStack_710,0xffffffff);
                func_0x000109a7ef1c(&ppplStack_490,&uStack_6b0,&uStack_710);
                uStack_650 = 0x42ff0000;
                puStack_610 = &uStack_648;
                uStack_648._4_4_ = 0;
                uStack_640 = 0;
                iStack_64c = 0;
                uStack_648._0_4_ = 0;
                lStack_618 = 0;
                uStack_61c = 0;
                uStack_624 = 0;
                uStack_620 = 0;
                uStack_62c = 0;
                uStack_628 = 0;
                uStack_634 = 0;
                uStack_630 = 0;
                uStack_63c = 0;
                uStack_638 = 0;
                uStack_5f8 = 0;
                uStack_600 = 0;
                puStack_608 = &uStack_600;
                (*(code *)(*ppplStack_490)[3])(ppplStack_490,&ppplStack_490,&uStack_650,0xffffffff);
                func_0x00010918eb6c(&ppplStack_490);
                if (lStack_6d8 != 0) {
                  piVar1 = (int *)(lStack_6d8 + 0x14);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    func_0x000109a848d4(&uStack_710);
                  }
                }
                lStack_6d8 = 0;
                uStack_6f8 = 0;
                uStack_6f4 = 0;
                uStack_700 = 0;
                uStack_6fc = 0;
                uStack_6e8 = 0;
                uStack_6e4 = 0;
                uStack_6f0 = 0;
                uStack_6ec = 0;
                if (0 < iStack_70c) {
                  lVar16 = 0;
                  do {
                    *(undefined4 *)((long)puStack_6d0 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < iStack_70c);
                }
                if (puStack_6c8 != &uStack_6c0 && puStack_6c8 != (undefined8 *)0x0) {
                  _free(puStack_6c8[-1]);
                }
                func_0x00010918eb6c(&uStack_870);
                if (lStack_678 != 0) {
                  piVar1 = (int *)(lStack_678 + 0x14);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    func_0x000109a848d4(&uStack_6b0);
                  }
                }
                lStack_678 = 0;
                uStack_698 = 0;
                uStack_694 = 0;
                uStack_6a0 = 0;
                uStack_69c = 0;
                uStack_688 = 0;
                uStack_684 = 0;
                uStack_690 = 0;
                uStack_68c = 0;
                if (0 < iStack_6ac) {
                  lVar16 = 0;
                  do {
                    *(undefined4 *)((long)puStack_670 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < iStack_6ac);
                }
                if (puStack_668 != &uStack_660 && puStack_668 != (undefined8 *)0x0) {
                  _free(puStack_668[-1]);
                }
                func_0x00010918eb6c(&uStack_5f0);
                uStack_6b0 = 0;
                iStack_6ac = 0x3ff00000;
                uStack_6a8._0_4_ = 0;
                uStack_6a8._4_4_ = 0;
                uStack_698 = 0;
                uStack_694 = 0;
                uStack_6a0 = 0;
                uStack_69c = 0;
                auStack_888[0] = 0x1010000;
                puStack_880 = &uStack_650;
                uStack_878 = 0;
                FUN_10a0f4340(&uStack_870,auStack_888,5);
                func_0x000109a7cf94(&uStack_5f0,&uStack_6b0,&uStack_870);
                uStack_700 = 0;
                uStack_6fc = 0;
                uStack_710 = 0xc1060000;
                uStack_708 = &uStack_5f0;
                func_0x000109a8239c(&ppplStack_490,0x3ff0000000000000,ppppuVar8,&uStack_710);
                (*(code *)(*ppplStack_490)[3])(ppplStack_490,&ppplStack_490,ppppuVar8,0xffffffff);
                func_0x00010918eb6c(&ppplStack_490);
                func_0x00010918eb6c(&uStack_5f0);
                puVar10 = uStack_708;
                if (lStack_838 != 0) {
                  piVar1 = (int *)(lStack_838 + 0x14);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    func_0x000109a848d4(&uStack_870);
                    puVar10 = uStack_708;
                  }
                }
                lStack_838 = 0;
                uStack_858 = 0;
                uStack_860 = 0;
                uStack_848 = 0;
                uStack_850 = 0;
                if (0 < uStack_870._4_4_) {
                  lVar16 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_830 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < uStack_870._4_4_);
                }
                uStack_708 = puVar10;
                if (puStack_828 != &uStack_820 && puStack_828 != (undefined8 *)0x0) {
                  _free(puStack_828[-1]);
                }
                if (lStack_618 != 0) {
                  piVar1 = (int *)(lStack_618 + 0x14);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    func_0x000109a848d4(&uStack_650);
                  }
                }
                puVar17 = (undefined8 *)CONCAT44(uStack_648._4_4_,(undefined4)uStack_648);
                lStack_618 = 0;
                uStack_638 = 0;
                uStack_634 = 0;
                uStack_640 = 0;
                uStack_63c = 0;
                uStack_628 = 0;
                uStack_624 = 0;
                uStack_630 = 0;
                uStack_62c = 0;
                if (0 < iStack_64c) {
                  lVar16 = 0;
                  do {
                    *(undefined4 *)((long)puStack_610 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < iStack_64c);
                }
                if (puStack_608 != &uStack_600 && puStack_608 != (undefined8 *)0x0) {
                  _free(puStack_608[-1]);
                  puVar17 = (undefined8 *)CONCAT44(uStack_648._4_4_,(undefined4)uStack_648);
                }
              }
              else {
                func_0x000109a7e87c(&uStack_5f0,&uStack_330);
                uStack_6a0 = 0;
                uStack_69c = 0;
                uStack_6b0 = 0xc1060000;
                uStack_6a8 = (long ****)&uStack_5f0;
                FUN_10a0f4340(&uStack_870,&uStack_6b0,5);
                uStack_640 = 0;
                uStack_63c = 0;
                uStack_650 = 0x1010000;
                uStack_648 = &uStack_870;
                func_0x000109a8239c(&ppplStack_490,0x3ff0000000000000,ppppuVar8,&uStack_650);
                (*(code *)(*ppplStack_490)[3])(ppplStack_490,&ppplStack_490,ppppuVar8,0xffffffff);
                func_0x00010918eb6c(&ppplStack_490);
                pppplVar5 = uStack_6a8;
                puVar10 = uStack_648;
                if (lStack_838 != 0) {
                  piVar1 = (int *)(lStack_838 + 0x14);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    func_0x000109a848d4(&uStack_870);
                    pppplVar5 = uStack_6a8;
                    puVar10 = uStack_648;
                  }
                }
                lStack_838 = 0;
                uStack_858 = 0;
                uStack_860 = 0;
                uStack_848 = 0;
                uStack_850 = 0;
                if (0 < uStack_870._4_4_) {
                  lVar16 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_830 + lVar16 * 4) = 0;
                    lVar16 = lVar16 + 1;
                  } while (lVar16 < uStack_870._4_4_);
                }
                uStack_6a8 = pppplVar5;
                uStack_648 = puVar10;
                if (puStack_828 != &uStack_820 && puStack_828 != (undefined8 *)0x0) {
                  _free(puStack_828[-1]);
                }
                func_0x00010918eb6c(&uStack_5f0);
                puVar17 = uStack_648;
              }
            }
          }
          uStack_648 = puVar17;
          if (lStack_2f8 != 0) {
            piVar1 = (int *)(lStack_2f8 + 0x14);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(&uStack_330);
            }
          }
          lStack_2f8 = 0;
          uStack_318 = 0;
          uStack_314 = 0;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_308 = 0;
          uStack_304 = 0;
          uStack_310 = 0;
          uStack_30c = 0;
          if (0 < (int)uStack_32c) {
            lVar16 = 0;
            do {
              *(undefined4 *)(lStack_2f0 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < (int)uStack_32c);
          }
          if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
            _free(puStack_2e8[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&uStack_870);
      goto LAB_109ff3544;
    }
  }
  FUN_10a0edfc4(&uStack_870);
LAB_109ff3544:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff3548);
  (*pcVar7)();
}



/* Entry: 109ff2cd0; end: 109ff3687;  */

void FUN_109ff2cd0(float param_1,uint *param_2,uint *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  undefined4 auStack_638 [2];
  undefined4 *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined4 *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5e8;
  undefined4 **ppuStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_4c0;
  int iStack_4bc;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  int iStack_45c;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  int iStack_3fc;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long ***ppplStack_398;
  undefined8 uStack_390;
  long ***ppplStack_240;
  undefined4 *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar11 = *param_2 & 0xfff;
  __ZNSt3__19to_stringEi(&uStack_3a0,uVar11);
  plVar8 = &uStack_3a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar8,0,&UNK_10f630c3b,0x12);
  puStack_238 = (undefined4 *)plVar8[1];
  ppplStack_240 = (long ***)*plVar8;
  uStack_230 = plVar8[2];
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = 0;
  puStack_618 = (undefined4 *)(long)uStack_230._7_1_;
  if ((long)puStack_618 < 0) {
    uStack_620 = (long ****)ppplStack_240;
    puStack_618 = puStack_238;
    if (uVar11 == 5) {
      __ZdlPv();
      goto LAB_109ff2d80;
    }
  }
  else {
    uStack_620 = &ppplStack_240;
    if (uVar11 == 5) {
LAB_109ff2d80:
      if (uStack_390 < 0) {
        __ZdlPv(CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0));
      }
      uVar11 = *param_3 & 0xfff;
      __ZNSt3__19to_stringEi(&uStack_3a0,uVar11);
      plVar8 = &uStack_3a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar8,0,&UNK_10f630c4e,0x16);
      puStack_238 = (undefined4 *)plVar8[1];
      ppplStack_240 = (long ***)*plVar8;
      uStack_230 = plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      puStack_618 = (undefined4 *)(long)uStack_230._7_1_;
      if ((long)puStack_618 < 0) {
        uStack_620 = (long ****)ppplStack_240;
        puStack_618 = puStack_238;
        if (uVar11 == 0) {
          __ZdlPv();
          goto LAB_109ff2e00;
        }
      }
      else {
        uStack_620 = &ppplStack_240;
        if (uVar11 == 0) {
LAB_109ff2e00:
          if (uStack_390._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0));
          }
          uStack_e0 = 0x42ff0000;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_dc = 0;
          lStack_a0 = (long)&uStack_dc + 4;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          puStack_98 = &uStack_90;
          func_0x000109a7ead4(&ppplStack_240,(double)param_1,param_2);
          uStack_390 = 0;
          uStack_3a0._0_4_ = 0xc1060000;
          uStack_620 = (long ****)CONCAT44(uStack_620._4_4_,0x2010000);
          uStack_610 = 0;
          puVar9 = &uStack_3a0;
          puStack_618 = &uStack_e0;
          ppplStack_398 = (long ***)&ppplStack_240;
          func_0x000109adde6c(puVar9,&uStack_620,8,4);
          func_0x00010918eb6c(&ppplStack_240);
          puVar13 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(undefined4)uStack_3f8);
          if (1 < (int)(uint)puVar9) {
            puVar13 = (undefined8 *)((ulong)&uStack_620 | 4);
            uVar12 = 0xffffffff;
            uVar11 = 1;
            dVar14 = -1.0;
            do {
              func_0x000109a7e87c(&uStack_3a0,(double)uVar11,&uStack_e0);
              uStack_620 = (long ****)CONCAT44(uStack_620._4_4_,0x42ff0000);
              *(undefined8 *)((long)puVar13 + 0x34) = 0;
              *(undefined8 *)((long)puVar13 + 0x2c) = 0;
              puVar13[3] = 0;
              puVar13[2] = 0;
              puVar13[5] = 0;
              puVar13[4] = 0;
              puVar13[1] = 0;
              *puVar13 = 0;
              uStack_5d0 = 0;
              uStack_5c8 = 0;
              ppuStack_5e0 = &puStack_618;
              puStack_5d8 = &uStack_5d0;
              (**(code **)(*(long *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0) + 0x18))
                        ((long *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0),&uStack_3a0,
                         &uStack_620,0xffffffff);
              func_0x000109a7ef1c(&ppplStack_240,&uStack_620,param_3);
              uStack_450 = 0;
              uStack_44c = 0;
              uStack_460 = 0xc1060000;
              uStack_458 = &ppplStack_240;
              func_0x000109ab74d4(&uStack_400,&uStack_460);
              dVar15 = (double)CONCAT44(iStack_3fc,uStack_400);
              func_0x00010918eb6c(&ppplStack_240);
              pppplVar5 = uStack_458;
              if (lStack_5e8 != 0) {
                piVar1 = (int *)(lStack_5e8 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_620);
                  pppplVar5 = uStack_458;
                }
              }
              lStack_5e8 = 0;
              uStack_608 = 0;
              uStack_610 = 0;
              uStack_5f8 = 0;
              uStack_600 = 0;
              if (0 < uStack_620._4_4_) {
                lVar10 = 0;
                do {
                  *(undefined4 *)((long)ppuStack_5e0 + lVar10 * 4) = 0;
                  lVar10 = lVar10 + 1;
                } while (lVar10 < uStack_620._4_4_);
              }
              uStack_458 = pppplVar5;
              if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
                _free(puStack_5d8[-1]);
              }
              func_0x00010918eb6c(&uStack_3a0);
              uVar6 = uVar11;
              if (dVar15 <= dVar14) {
                dVar15 = dVar14;
                uVar6 = uVar12;
              }
              uVar12 = uVar6;
              uVar11 = uVar11 + 1;
              dVar14 = dVar15;
            } while (uVar11 != (uint)puVar9);
            puVar13 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(undefined4)uStack_3f8);
            if (uVar12 != 0xffffffff) {
              if (param_4 == 0) {
                func_0x000109a7e944(&uStack_3a0,(double)(int)uVar12,&uStack_e0);
                uStack_460 = 0x42ff0000;
                puStack_420 = &uStack_458;
                uStack_458._4_4_ = 0;
                uStack_450 = 0;
                iStack_45c = 0;
                uStack_458._0_4_ = 0;
                lStack_428 = 0;
                uStack_42c = 0;
                uStack_434 = 0;
                uStack_430 = 0;
                uStack_43c = 0;
                uStack_438 = 0;
                uStack_444 = 0;
                uStack_440 = 0;
                uStack_44c = 0;
                uStack_448 = 0;
                uStack_408 = 0;
                uStack_410 = 0;
                puStack_418 = &uStack_410;
                (**(code **)(*(long *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0) + 0x18))
                          ((long *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0),&uStack_3a0,
                           &uStack_460,0xffffffff);
                func_0x000109a7e944(&uStack_620,0,&uStack_e0);
                uStack_4c0 = 0x42ff0000;
                puStack_480 = &uStack_4b8;
                uStack_4b8._4_4_ = 0;
                uStack_4b0 = 0;
                iStack_4bc = 0;
                uStack_4b8._0_4_ = 0;
                lStack_488 = 0;
                uStack_48c = 0;
                uStack_494 = 0;
                uStack_490 = 0;
                uStack_49c = 0;
                uStack_498 = 0;
                uStack_4a4 = 0;
                uStack_4a0 = 0;
                uStack_4ac = 0;
                uStack_4a8 = 0;
                uStack_470 = 0;
                uStack_468 = 0;
                puStack_478 = &uStack_470;
                (**(code **)((long)*uStack_620 + 0x18))
                          (uStack_620,&uStack_620,&uStack_4c0,0xffffffff);
                func_0x000109a7ef1c(&ppplStack_240,&uStack_460,&uStack_4c0);
                uStack_400 = 0x42ff0000;
                puStack_3c0 = &uStack_3f8;
                uStack_3f8._4_4_ = 0;
                uStack_3f0 = 0;
                iStack_3fc = 0;
                uStack_3f8._0_4_ = 0;
                lStack_3c8 = 0;
                uStack_3cc = 0;
                uStack_3d4 = 0;
                uStack_3d0 = 0;
                uStack_3dc = 0;
                uStack_3d8 = 0;
                uStack_3e4 = 0;
                uStack_3e0 = 0;
                uStack_3ec = 0;
                uStack_3e8 = 0;
                uStack_3a8 = 0;
                uStack_3b0 = 0;
                puStack_3b8 = &uStack_3b0;
                (*(code *)(*ppplStack_240)[3])(ppplStack_240,&ppplStack_240,&uStack_400,0xffffffff);
                func_0x00010918eb6c(&ppplStack_240);
                if (lStack_488 != 0) {
                  piVar1 = (int *)(lStack_488 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_4c0);
                  }
                }
                lStack_488 = 0;
                uStack_4a8 = 0;
                uStack_4a4 = 0;
                uStack_4b0 = 0;
                uStack_4ac = 0;
                uStack_498 = 0;
                uStack_494 = 0;
                uStack_4a0 = 0;
                uStack_49c = 0;
                if (0 < iStack_4bc) {
                  lVar10 = 0;
                  do {
                    *(undefined4 *)((long)puStack_480 + lVar10 * 4) = 0;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iStack_4bc);
                }
                if (puStack_478 != &uStack_470 && puStack_478 != (undefined8 *)0x0) {
                  _free(puStack_478[-1]);
                }
                func_0x00010918eb6c(&uStack_620);
                if (lStack_428 != 0) {
                  piVar1 = (int *)(lStack_428 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_460);
                  }
                }
                lStack_428 = 0;
                uStack_448 = 0;
                uStack_444 = 0;
                uStack_450 = 0;
                uStack_44c = 0;
                uStack_438 = 0;
                uStack_434 = 0;
                uStack_440 = 0;
                uStack_43c = 0;
                if (0 < iStack_45c) {
                  lVar10 = 0;
                  do {
                    *(undefined4 *)((long)puStack_420 + lVar10 * 4) = 0;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iStack_45c);
                }
                if (puStack_418 != &uStack_410 && puStack_418 != (undefined8 *)0x0) {
                  _free(puStack_418[-1]);
                }
                func_0x00010918eb6c(&uStack_3a0);
                uStack_460 = 0;
                iStack_45c = 0x3ff00000;
                uStack_458._0_4_ = 0;
                uStack_458._4_4_ = 0;
                uStack_448 = 0;
                uStack_444 = 0;
                uStack_450 = 0;
                uStack_44c = 0;
                auStack_638[0] = 0x1010000;
                puStack_630 = &uStack_400;
                uStack_628 = 0;
                FUN_10a0f4340(&uStack_620,auStack_638,5);
                func_0x000109a7cf94(&uStack_3a0,&uStack_460,&uStack_620);
                uStack_4b0 = 0;
                uStack_4ac = 0;
                uStack_4c0 = 0xc1060000;
                uStack_4b8 = &uStack_3a0;
                func_0x000109a8239c(&ppplStack_240,0x3ff0000000000000,param_2,&uStack_4c0);
                (*(code *)(*ppplStack_240)[3])(ppplStack_240,&ppplStack_240,param_2,0xffffffff);
                func_0x00010918eb6c(&ppplStack_240);
                func_0x00010918eb6c(&uStack_3a0);
                puVar9 = uStack_4b8;
                if (lStack_5e8 != 0) {
                  piVar1 = (int *)(lStack_5e8 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_620);
                    puVar9 = uStack_4b8;
                  }
                }
                lStack_5e8 = 0;
                uStack_608 = 0;
                uStack_610 = 0;
                uStack_5f8 = 0;
                uStack_600 = 0;
                if (0 < uStack_620._4_4_) {
                  lVar10 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_5e0 + lVar10 * 4) = 0;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < uStack_620._4_4_);
                }
                uStack_4b8 = puVar9;
                if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
                  _free(puStack_5d8[-1]);
                }
                if (lStack_3c8 != 0) {
                  piVar1 = (int *)(lStack_3c8 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_400);
                  }
                }
                puVar13 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(undefined4)uStack_3f8);
                lStack_3c8 = 0;
                uStack_3e8 = 0;
                uStack_3e4 = 0;
                uStack_3f0 = 0;
                uStack_3ec = 0;
                uStack_3d8 = 0;
                uStack_3d4 = 0;
                uStack_3e0 = 0;
                uStack_3dc = 0;
                if (0 < iStack_3fc) {
                  lVar10 = 0;
                  do {
                    *(undefined4 *)((long)puStack_3c0 + lVar10 * 4) = 0;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iStack_3fc);
                }
                if (puStack_3b8 != &uStack_3b0 && puStack_3b8 != (undefined8 *)0x0) {
                  _free(puStack_3b8[-1]);
                  puVar13 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(undefined4)uStack_3f8);
                }
              }
              else {
                func_0x000109a7e87c(&uStack_3a0,&uStack_e0);
                uStack_450 = 0;
                uStack_44c = 0;
                uStack_460 = 0xc1060000;
                uStack_458 = (long ****)&uStack_3a0;
                FUN_10a0f4340(&uStack_620,&uStack_460,5);
                uStack_3f0 = 0;
                uStack_3ec = 0;
                uStack_400 = 0x1010000;
                uStack_3f8 = &uStack_620;
                func_0x000109a8239c(&ppplStack_240,0x3ff0000000000000,param_2,&uStack_400);
                (*(code *)(*ppplStack_240)[3])(ppplStack_240,&ppplStack_240,param_2,0xffffffff);
                func_0x00010918eb6c(&ppplStack_240);
                pppplVar5 = uStack_458;
                puVar9 = uStack_3f8;
                if (lStack_5e8 != 0) {
                  piVar1 = (int *)(lStack_5e8 + 0x14);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    func_0x000109a848d4(&uStack_620);
                    pppplVar5 = uStack_458;
                    puVar9 = uStack_3f8;
                  }
                }
                lStack_5e8 = 0;
                uStack_608 = 0;
                uStack_610 = 0;
                uStack_5f8 = 0;
                uStack_600 = 0;
                if (0 < uStack_620._4_4_) {
                  lVar10 = 0;
                  do {
                    *(undefined4 *)((long)ppuStack_5e0 + lVar10 * 4) = 0;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < uStack_620._4_4_);
                }
                uStack_458 = pppplVar5;
                uStack_3f8 = puVar9;
                if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
                  _free(puStack_5d8[-1]);
                }
                func_0x00010918eb6c(&uStack_3a0);
                puVar13 = uStack_3f8;
              }
            }
          }
          uStack_3f8 = puVar13;
          if (lStack_a8 != 0) {
            piVar1 = (int *)(lStack_a8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_e0);
            }
          }
          lStack_a8 = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          if (0 < (int)uStack_dc) {
            lVar10 = 0;
            do {
              *(undefined4 *)(lStack_a0 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < (int)uStack_dc);
          }
          if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
            _free(puStack_98[-1]);
          }
          return;
        }
      }
      FUN_10a0edfc4(&uStack_620);
      goto LAB_109ff3544;
    }
  }
  FUN_10a0edfc4(&uStack_620);
LAB_109ff3544:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff3548);
  (*pcVar7)();
}



/* Entry: 109ff3688; end: 109ff3823;  */

void FUN_109ff3688(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_378;
  undefined1 auStack_370 [352];
  long *aplStack_210 [44];
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_378 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
  func_0x000109a82ba4(auStack_370,&uStack_378,0);
  func_0x000109a7de28(aplStack_210,0x406fe00000000000,auStack_370);
  uStack_b0 = 0x42ff0000;
  lStack_70 = (long)&uStack_ac + 4;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  lStack_78 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &uStack_60;
  (**(code **)(*aplStack_210[0] + 0x18))(aplStack_210[0],aplStack_210,&uStack_b0,0xffffffff);
  func_0x00010918eb6c(aplStack_210);
  func_0x00010918eb6c(auStack_370);
  FUN_109ff2cd0(param_1,param_2,&uStack_b0,param_3);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (0 < (int)uStack_ac) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_ac);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109ff3824; end: 109ff6b37;  */

void FUN_109ff3824(uint *param_1,uint *param_2,long param_3,long param_4,undefined4 param_5,
                  uint *param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined4 *extraout_x8;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uStack_c88;
  undefined8 uStack_c78;
  undefined8 ***pppuStack_c70;
  uint *puStack_c68;
  undefined8 uStack_c60;
  undefined8 ***pppuStack_c50;
  undefined8 uStack_c48;
  double dStack_c38;
  undefined8 *puStack_c30;
  int *piStack_c28;
  uint *puStack_c20;
  uint *puStack_c18;
  undefined1 *puStack_c10;
  code *pcStack_c08;
  undefined8 *puStack_bf8;
  undefined8 *puStack_bf0;
  undefined8 *puStack_be8;
  uint *puStack_be0;
  undefined8 *puStack_bd8;
  long lStack_bd0;
  undefined8 *puStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 *puStack_bb8;
  undefined8 *puStack_bb0;
  uint *puStack_ba8;
  uint *puStack_ba0;
  uint *puStack_b98;
  int iStack_b90;
  int iStack_b8c;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  undefined4 uStack_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined8 uStack_b58;
  ulong uStack_b50;
  undefined8 *puStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  long lStack_af8;
  undefined8 *puStack_af0;
  undefined8 *puStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  uint uStack_9d0;
  int iStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  long lStack_998;
  undefined4 *puStack_990;
  undefined8 *puStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  uint uStack_970;
  undefined8 uStack_96c;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  long lStack_938;
  long lStack_930;
  undefined8 *puStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  uint uStack_910;
  int iStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  long lStack_8d8;
  undefined4 *puStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  uint uStack_8b0;
  int iStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  long lStack_878;
  undefined4 *puStack_870;
  undefined8 *puStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  uint uStack_850;
  undefined8 uStack_84c;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  long lStack_818;
  long lStack_810;
  undefined8 *puStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  uint uStack_7f0;
  undefined8 uStack_7ec;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  long lStack_7b8;
  long lStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  uint uStack_790;
  int iStack_78c;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_758;
  long lStack_750;
  undefined1 *puStack_748;
  undefined1 auStack_740 [16];
  uint uStack_730;
  int iStack_72c;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_6f8;
  long lStack_6f0;
  undefined1 *puStack_6e8;
  undefined1 auStack_6e0 [16];
  uint uStack_6d0;
  int iStack_6cc;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long lStack_698;
  long lStack_690;
  undefined1 *puStack_688;
  undefined1 auStack_680 [16];
  uint uStack_670;
  int iStack_66c;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_638;
  int *piStack_630;
  undefined1 *puStack_628;
  undefined1 auStack_620 [16];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  int iStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  long lStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 auStack_4a8 [2];
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  double adStack_490 [4];
  undefined4 uStack_470;
  int iStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long lStack_438;
  undefined4 *puStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  int iStack_410;
  int iStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  int iStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  long lStack_3d8;
  ulong uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  uint uStack_2b0;
  int iStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  uint *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = *param_2 & 0xfff;
  __ZNSt3__19to_stringEi(&iStack_410,uVar20);
  piVar9 = &iStack_410;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (piVar9,0,&UNK_10f6309b1,0x12);
  uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
  uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
  uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
  uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
  uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
  uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
  piVar9[2] = 0;
  piVar9[3] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  if (uStack_23c < 0) {
    uStack_610._0_4_ = (int)uStack_250;
    uStack_610._4_4_ = uStack_250._4_4_;
    uStack_608._0_4_ = (int)uStack_248;
    uStack_608._4_4_ = uStack_248._4_4_;
    plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
    if (uVar20 == 0x10) {
      __ZdlPv();
      goto LAB_109ff38f0;
    }
  }
  else {
    uStack_610 = &uStack_250;
    uStack_608._0_4_ = (int)uStack_23c._3_1_;
    uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
    plVar12 = uStack_610;
    if (uVar20 == 0x10) {
LAB_109ff38f0:
      if (iStack_3fc < 0) {
        __ZdlPv(CONCAT44(iStack_40c,iStack_410));
      }
      iVar13 = **(int **)(param_2 + 0x10);
      iVar2 = (*(int **)(param_2 + 0x10))[1];
      uStack_250._0_4_ = 0xf630c65;
      uStack_250._4_4_ = 1;
      uStack_248._0_4_ = 0x22;
      uStack_248._4_4_ = 0;
      if ((iVar2 != *(int *)(param_3 + 0x18)) || (iVar13 != *(int *)(param_3 + 0x1c))) {
        FUN_10a0edfc4(&uStack_250);
        goto LAB_109ff64e4;
      }
      uStack_250._0_4_ = iVar2;
      uStack_250._4_4_ = iVar13;
      FUN_109ff29d8(&uStack_670,&uStack_250,param_4);
      FUN_109fee68c(&uStack_6d0,param_3,0);
      FUN_109fee68c(&uStack_730,param_3,3);
      FUN_109fee68c(&uStack_790,param_3,1);
      FUN_109fee68c(&iStack_410,param_3,10);
      func_0x000109a7d904(&uStack_250,0x4000000000000000,&iStack_410);
      uStack_7f0 = 0x42ff0000;
      lStack_7b0 = (long)&uStack_7ec + 4;
      uStack_7e4 = 0;
      uStack_7e0 = 0;
      uStack_7ec = 0;
      lStack_7b8 = 0;
      uStack_7bc = 0;
      uStack_7c4 = 0;
      uStack_7c0 = 0;
      uStack_7cc = 0;
      uStack_7c8 = 0;
      uStack_7d4 = 0;
      uStack_7d0 = 0;
      uStack_7dc = 0;
      uStack_7d8 = 0;
      uStack_798 = 0;
      uStack_7a0 = 0;
      puStack_7a8 = &uStack_7a0;
      (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,(int)uStack_250) + 0x18))
                ((long *)CONCAT44(uStack_250._4_4_,(int)uStack_250),&uStack_250,&uStack_7f0,
                 0xffffffff);
      func_0x00010918eb6c(&uStack_250);
      if (lStack_3d8 != 0) {
        piVar9 = (int *)(lStack_3d8 + 0x14);
        do {
          iVar13 = *piVar9;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar8) {
            *piVar9 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          func_0x000109a848d4(&iStack_410);
        }
      }
      lStack_3d8 = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      iStack_3fc = 0;
      uStack_3e8 = 0;
      uStack_3e4 = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      if (0 < iStack_40c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(uStack_3d0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iStack_40c);
      }
      if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
        _free(puStack_3c8[-1]);
      }
      uVar20 = uStack_6d0 & 0xfff;
      __ZNSt3__19to_stringEi(&iStack_410,uVar20);
      piVar9 = &iStack_410;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (piVar9,0,&UNK_10f630c88,0x11);
      uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
      uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
      uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
      uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
      uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
      uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[0] = 0;
      piVar9[1] = 0;
      if (uStack_23c < 0) {
        uStack_610._0_4_ = (int)uStack_250;
        uStack_610._4_4_ = uStack_250._4_4_;
        uStack_608._0_4_ = (int)uStack_248;
        uStack_608._4_4_ = uStack_248._4_4_;
        plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
        if (uVar20 == 0) {
          __ZdlPv();
          goto LAB_109ff3af0;
        }
      }
      else {
        uStack_610 = &uStack_250;
        uStack_608._0_4_ = (int)uStack_23c._3_1_;
        uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
        plVar12 = uStack_610;
        if (uVar20 == 0) {
LAB_109ff3af0:
          if (iStack_3fc < 0) {
            __ZdlPv(CONCAT44(iStack_40c,iStack_410));
          }
          uVar20 = uStack_730 & 0xfff;
          __ZNSt3__19to_stringEi(&iStack_410,uVar20);
          piVar9 = &iStack_410;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (piVar9,0,&UNK_10f630c9a,0x11);
          uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
          uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
          uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
          uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
          uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
          uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
          piVar9[2] = 0;
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar9[5] = 0;
          piVar9[0] = 0;
          piVar9[1] = 0;
          if (uStack_23c < 0) {
            uStack_610._0_4_ = (int)uStack_250;
            uStack_610._4_4_ = uStack_250._4_4_;
            uStack_608._0_4_ = (int)uStack_248;
            uStack_608._4_4_ = uStack_248._4_4_;
            plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
            if (uVar20 == 0) {
              __ZdlPv();
              goto LAB_109ff3b78;
            }
          }
          else {
            uStack_610 = &uStack_250;
            uStack_608._0_4_ = (int)uStack_23c._3_1_;
            uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
            plVar12 = uStack_610;
            if (uVar20 == 0) {
LAB_109ff3b78:
              if (iStack_3fc < 0) {
                __ZdlPv(CONCAT44(iStack_40c,iStack_410));
              }
              uVar20 = uStack_790 & 0xfff;
              __ZNSt3__19to_stringEi(&iStack_410,uVar20);
              piVar9 = &iStack_410;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (piVar9,0,&UNK_10f630cac,0x11);
              uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
              uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
              uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
              uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
              uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
              uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
              piVar9[2] = 0;
              piVar9[3] = 0;
              piVar9[4] = 0;
              piVar9[5] = 0;
              piVar9[0] = 0;
              piVar9[1] = 0;
              if (uStack_23c < 0) {
                uStack_610._0_4_ = (int)uStack_250;
                uStack_610._4_4_ = uStack_250._4_4_;
                uStack_608._0_4_ = (int)uStack_248;
                uStack_608._4_4_ = uStack_248._4_4_;
                plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                if (uVar20 == 0) {
                  __ZdlPv();
                  goto LAB_109ff3c00;
                }
              }
              else {
                uStack_610 = &uStack_250;
                uStack_608._0_4_ = (int)uStack_23c._3_1_;
                uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                plVar12 = uStack_610;
                if (uVar20 == 0) {
LAB_109ff3c00:
                  if (iStack_3fc < 0) {
                    __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                  }
                  uVar20 = uStack_7f0 & 0xfff;
                  __ZNSt3__19to_stringEi(&iStack_410,uVar20);
                  piVar9 = &iStack_410;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (piVar9,0,&UNK_10f630cbe,0x18);
                  uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                  uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
                  uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                  uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                  uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                  uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
                  piVar9[2] = 0;
                  piVar9[3] = 0;
                  piVar9[4] = 0;
                  piVar9[5] = 0;
                  piVar9[0] = 0;
                  piVar9[1] = 0;
                  if (uStack_23c < 0) {
                    uStack_610._0_4_ = (int)uStack_250;
                    uStack_610._4_4_ = uStack_250._4_4_;
                    uStack_608._0_4_ = (int)uStack_248;
                    uStack_608._4_4_ = uStack_248._4_4_;
                    plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                    if (uVar20 == 0) {
                      __ZdlPv();
                      goto LAB_109ff3c88;
                    }
                  }
                  else {
                    uStack_610 = &uStack_250;
                    uStack_608._0_4_ = (int)uStack_23c._3_1_;
                    uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                    plVar12 = uStack_610;
                    if (uVar20 == 0) {
LAB_109ff3c88:
                      puStack_ba0 = (uint *)CONCAT44(puStack_ba0._4_4_,param_5);
                      if (iStack_3fc < 0) {
                        __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                      }
                      iVar13 = **(int **)(param_2 + 0x10);
                      iVar2 = (*(int **)(param_2 + 0x10))[1];
                      iVar23 = *(int *)(param_4 + 8);
                      puStack_b98 = param_2;
                      __ZNSt3__19to_stringEi(&iStack_410,1);
                      piVar9 = &iStack_410;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                (piVar9,0,&UNK_10f630cd7,0x16);
                      uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                      uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
                      uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                      uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                      uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                      uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
                      piVar9[2] = 0;
                      piVar9[3] = 0;
                      piVar9[4] = 0;
                      piVar9[5] = 0;
                      piVar9[0] = 0;
                      piVar9[1] = 0;
                      if (uStack_23c < 0) {
                        uStack_610._0_4_ = (int)uStack_250;
                        uStack_610._4_4_ = uStack_250._4_4_;
                        uStack_608._0_4_ = (int)uStack_248;
                        uStack_608._4_4_ = uStack_248._4_4_;
                        plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                        if (1 < iVar23) {
                          __ZdlPv();
                          goto LAB_109ff3d24;
                        }
                      }
                      else {
                        uStack_610 = &uStack_250;
                        uStack_608._0_4_ = (int)uStack_23c._3_1_;
                        uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                        plVar12 = uStack_610;
                        if (1 < iVar23) {
LAB_109ff3d24:
                          if (iStack_3fc < 0) {
                            __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                          }
                          iVar23 = *(int *)(param_4 + 8);
                          __ZNSt3__19to_stringEi(&iStack_410,0xf);
                          piVar9 = &iStack_410;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                    (piVar9,0,&UNK_10f630cee,0x16);
                          uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                          uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
                          uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                          uStack_248._4_4_ = (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                          uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                          uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
                          piVar9[2] = 0;
                          piVar9[3] = 0;
                          piVar9[4] = 0;
                          piVar9[5] = 0;
                          piVar9[0] = 0;
                          piVar9[1] = 0;
                          if (uStack_23c < 0) {
                            uStack_610._0_4_ = (int)uStack_250;
                            uStack_610._4_4_ = uStack_250._4_4_;
                            uStack_608._0_4_ = (int)uStack_248;
                            uStack_608._4_4_ = uStack_248._4_4_;
                            plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                            if (0xf < iVar23) {
                              __ZdlPv();
                              goto LAB_109ff3db0;
                            }
                          }
                          else {
                            uStack_610 = &uStack_250;
                            uStack_608._0_4_ = (int)uStack_23c._3_1_;
                            uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                            plVar12 = uStack_610;
                            if (0xf < iVar23) {
LAB_109ff3db0:
                              if (iStack_3fc < 0) {
                                __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                              }
                              pfVar21 = (float *)(*(long *)(param_4 + 0x10) +
                                                 **(long **)(param_4 + 0x48));
                              uStack_8b0 = (uint)*pfVar21;
                              iStack_8ac = (int)pfVar21[1];
                              pfVar21 = (float *)(*(long *)(param_4 + 0x10) +
                                                 **(long **)(param_4 + 0x48) * 0xf);
                              uVar20 = (uint)*pfVar21;
                              iVar23 = (int)pfVar21[1];
                              uStack_910 = uVar20;
                              iStack_90c = iVar23;
                              if ((int)uVar20 < (int)uStack_8b0) {
                                uStack_910 = uStack_8b0;
                                iStack_90c = iStack_8ac;
                                uStack_8b0 = uVar20;
                                iStack_8ac = iVar23;
                              }
                              iStack_410 = iVar2;
                              iStack_40c = iVar13;
                              func_0x000109a829e8(&uStack_250,&iStack_410,0);
                              uStack_850 = 0x42ff0000;
                              lStack_810 = (long)&uStack_84c + 4;
                              uStack_844 = 0;
                              uStack_840 = 0;
                              uStack_84c = 0;
                              lStack_818 = 0;
                              uStack_81c = 0;
                              uStack_824 = 0;
                              uStack_820 = 0;
                              uStack_82c = 0;
                              uStack_828 = 0;
                              uStack_834 = 0;
                              uStack_830 = 0;
                              uStack_83c = 0;
                              uStack_838 = 0;
                              puStack_bb0 = &uStack_800;
                              uStack_7f8 = 0;
                              uStack_800 = 0;
                              puStack_808 = puStack_bb0;
                              (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,(int)uStack_250) +
                                          0x18))((long *)CONCAT44(uStack_250._4_4_,(int)uStack_250),
                                                 &uStack_250,&uStack_850,0xffffffff);
                              func_0x00010918eb6c(&uStack_250);
                              if ((uStack_910 != uStack_8b0) || (iStack_90c != iStack_8ac)) {
                                iVar23 = uStack_910 - uStack_8b0;
                                if (iVar23 == 0) {
                                  uVar20 = 0;
                                }
                                else {
                                  iVar4 = -iVar23;
                                  if (-1 < iVar23) {
                                    iVar4 = iVar23;
                                  }
                                  uVar20 = 0;
                                  if (iVar4 != 0) {
                                    uVar20 = (iVar2 + iVar4 + -1) / iVar4;
                                  }
                                  uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                                }
                                iVar4 = iStack_90c - iStack_8ac;
                                if (iStack_90c != iStack_8ac) {
                                  iVar1 = -iVar4;
                                  if (-1 < iVar4) {
                                    iVar1 = iVar4;
                                  }
                                  uVar26 = 0;
                                  if (iVar1 != 0) {
                                    uVar26 = (iVar13 + iVar1 + -1) / iVar1;
                                  }
                                  if ((int)uVar20 <= (int)uVar26) {
                                    uVar20 = uVar26;
                                  }
                                }
                                uStack_8b0 = uStack_8b0 - uVar20 * iVar23;
                                iStack_8ac = iStack_8ac - uVar20 * iVar4;
                                uStack_910 = uVar20 * iVar23 + uStack_910;
                                iStack_90c = uVar20 * iVar4 + iStack_90c;
                                puVar22 = &uStack_250;
                                uStack_250._0_4_ = iVar2;
                                uStack_250._4_4_ = iVar13;
                                func_0x000109aed5bc(puVar22,&uStack_8b0,&uStack_910);
                                if ((int)puVar22 != 0) {
                                  uStack_408._0_4_ = 0;
                                  uStack_408._4_4_ = 0;
                                  iStack_410 = 0;
                                  iStack_40c = 0;
                                  uStack_400 = 0;
                                  iStack_3fc = 0;
                                  uStack_250._0_4_ = 0;
                                  uStack_610._0_4_ = 0;
                                  piVar9 = &iStack_410;
                                  func_0x0001094c5dd8(piVar9,&uStack_250,&uStack_610);
                                  piVar15 = (int *)CONCAT44(iStack_3fc,uStack_400);
                                  uStack_408._0_4_ = (int)piVar9;
                                  uStack_408._4_4_ = (int)((ulong)piVar9 >> 0x20);
                                  if (piVar9 < piVar15) {
                                    piVar10 = piVar9 + 2;
                                    *(ulong *)piVar9 = CONCAT44(iStack_8ac,uStack_8b0);
                                  }
                                  else {
                                    piVar10 = &iStack_410;
                                    FUN_10a00132c(piVar10,&uStack_8b0);
                                    piVar15 = (int *)CONCAT44(iStack_3fc,uStack_400);
                                  }
                                  uStack_408._0_4_ = (int)piVar10;
                                  uStack_408._4_4_ = (int)((ulong)piVar10 >> 0x20);
                                  if (piVar10 < piVar15) {
                                    piVar9 = piVar10 + 2;
                                    *(ulong *)piVar10 = CONCAT44(iStack_90c,uStack_910);
                                  }
                                  else {
                                    piVar9 = &iStack_410;
                                    FUN_10a00132c(piVar9,&uStack_910);
                                    piVar15 = (int *)CONCAT44(iStack_3fc,uStack_400);
                                  }
                                  uStack_408._0_4_ = (int)piVar9;
                                  uStack_408._4_4_ = (int)((ulong)piVar9 >> 0x20);
                                  uStack_250._0_4_ = iVar2 + -1;
                                  uStack_610._0_4_ = 0;
                                  if (piVar9 < piVar15) {
                                    *piVar9 = (int)uStack_250;
                                    piVar9[1] = 0;
                                    piVar9 = piVar9 + 2;
                                  }
                                  else {
                                    piVar9 = &iStack_410;
                                    func_0x0001094c5dd8(piVar9,&uStack_250,&uStack_610);
                                  }
                                  uStack_408._0_4_ = (int)piVar9;
                                  uStack_408._4_4_ = (int)((ulong)piVar9 >> 0x20);
                                  uStack_610._0_4_ = 0x3010000;
                                  uStack_608 = &uStack_850;
                                  uStack_600 = 0;
                                  iStack_5fc = 0;
                                  uStack_e8 = 0;
                                  iStack_e4 = 0;
                                  uStack_e0._0_4_ = 0;
                                  uStack_e0._4_4_ = 0;
                                  uStack_d8 = 0;
                                  uStack_d4 = 0;
                                  FUN_10a000fa0(&uStack_e8,CONCAT44(iStack_40c,iStack_410),piVar9,
                                                (long)piVar9 - CONCAT44(iStack_40c,iStack_410) >> 3)
                                  ;
                                  uStack_2a8._0_4_ = 0;
                                  uStack_2a8._4_4_ = 0;
                                  uStack_2b0 = 0;
                                  iStack_2ac = 0;
                                  uStack_2a0 = 0;
                                  uStack_29c = 0;
                                  FUN_10a001048(&uStack_2b0,&uStack_e8,&uStack_d0,1);
                                  uStack_b20 = 0;
                                  uStack_b1c = 0;
                                  uStack_b30._0_4_ = 0x8104000c;
                                  uStack_250._0_4_ = 0;
                                  uStack_250._4_4_ = 0x406fe000;
                                  uStack_248._0_4_ = 0;
                                  uStack_248._4_4_ = 0;
                                  uStack_238 = 0;
                                  uStack_234 = 0;
                                  uStack_240 = 0;
                                  uStack_23c = 0;
                                  uStack_470 = 0;
                                  iStack_46c = 0;
                                  uStack_b28 = &uStack_2b0;
                                  func_0x000109aefd90(&uStack_610,&uStack_b30,&uStack_250,8,0,
                                                      &uStack_470);
                                  uStack_250 = &uStack_2b0;
                                  func_0x00010a001298(&uStack_250);
                                  if (CONCAT44(iStack_e4,uStack_e8) != 0) {
                                    uStack_e0._0_4_ = uStack_e8;
                                    uStack_e0._4_4_ = iStack_e4;
                                    __ZdlPv();
                                  }
                                  if (CONCAT44(iStack_40c,iStack_410) != 0) {
                                    uStack_408._0_4_ = iStack_410;
                                    uStack_408._4_4_ = iStack_40c;
                                    __ZdlPv();
                                  }
                                }
                              }
                              func_0x000109a7ead4(&iStack_410,0x4069800000000000,&uStack_790);
                              uStack_2b0 = 0x42ff0000;
                              puStack_270 = &uStack_2a8;
                              uStack_2a8._4_4_ = 0;
                              uStack_2a0 = 0;
                              iStack_2ac = 0;
                              uStack_2a8._0_4_ = 0;
                              lStack_278 = 0;
                              uStack_27c = 0;
                              uStack_284 = 0;
                              uStack_280 = 0;
                              uStack_28c = 0;
                              uStack_288 = 0;
                              uStack_294 = 0;
                              uStack_290 = 0;
                              uStack_29c = 0;
                              uStack_298 = 0;
                              uStack_258 = 0;
                              uStack_260 = 0;
                              puStack_268 = &uStack_260;
                              (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410) + 0x18))
                                        ((long *)CONCAT44(iStack_40c,iStack_410),&iStack_410,
                                         &uStack_2b0,0xffffffff);
                              uVar20 = uStack_2b0 & 0xfff;
                              __ZNSt3__19to_stringEi(&uStack_610,uVar20);
                              puVar22 = &uStack_610;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                        (puVar22,0,&UNK_10f630d05,0x11);
                              uStack_240 = (undefined4)puVar22[2];
                              uStack_23c = (int)((ulong)puVar22[2] >> 0x20);
                              uStack_248._0_4_ = (int)puVar22[1];
                              uStack_248._4_4_ = (int)((ulong)puVar22[1] >> 0x20);
                              uStack_250._0_4_ = (int)*puVar22;
                              uStack_250._4_4_ = (int)((ulong)*puVar22 >> 0x20);
                              puVar22[1] = 0;
                              puVar22[2] = 0;
                              *puVar22 = 0;
                              if (uStack_23c < 0) {
                                uStack_b30._0_4_ = (int)uStack_250;
                                uStack_b30._4_4_ = uStack_250._4_4_;
                                uStack_b28._0_4_ = (int)uStack_248;
                                uStack_b28._4_4_ = uStack_248._4_4_;
                                puVar22 = (undefined8 *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                                if (uVar20 == 0) {
                                  __ZdlPv();
                                  goto LAB_109ff41ac;
                                }
                              }
                              else {
                                uStack_b30 = &uStack_250;
                                uStack_b28._0_4_ = (int)uStack_23c._3_1_;
                                uStack_b28._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                                puVar22 = uStack_b30;
                                if (uVar20 == 0) {
LAB_109ff41ac:
                                  if (iStack_5fc < 0) {
                                    __ZdlPv(uStack_610);
                                  }
                                  uStack_b30._0_4_ = 0;
                                  uStack_b30._4_4_ = 1;
                                  uStack_470 = 0x80000000;
                                  iStack_46c = 0x7fffffff;
                                  func_0x000109a84930(&uStack_610,param_4,&uStack_b30,&uStack_470);
                                  dVar28 = 3.60739284543147e-313;
                                  uStack_470 = 0x10;
                                  iStack_46c = 0x11;
                                  uStack_910 = 0x80000000;
                                  iStack_90c = 0x7fffffff;
                                  func_0x000109a84930(&uStack_b30,param_4,&uStack_470,&uStack_910);
                                  puVar22 = &uStack_610;
                                  func_0x000109a7cd1c(&uStack_250,puVar22,&uStack_b30);
                                  uStack_d8 = 0;
                                  uStack_d4 = 0;
                                  uStack_e8 = 0xc1060000;
                                  uStack_e0 = &uStack_250;
                                  func_0x000109a91d90();
                                  func_0x000109ab9654(&uStack_e8,4,puVar22);
                                  func_0x00010918eb6c(&uStack_250);
                                  if (lStack_af8 != 0) {
                                    piVar9 = (int *)(lStack_af8 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_b30);
                                    }
                                  }
                                  lStack_af8 = 0;
                                  uStack_b18 = 0;
                                  uStack_b14 = 0;
                                  uStack_b20 = 0;
                                  uStack_b1c = 0;
                                  uStack_b08 = 0;
                                  uStack_b04 = 0;
                                  uStack_b10 = 0;
                                  uStack_b0c = 0;
                                  if (0 < uStack_b30._4_4_) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_af0 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < uStack_b30._4_4_);
                                  }
                                  if (puStack_ae8 != &uStack_ae0 && puStack_ae8 != (undefined8 *)0x0
                                     ) {
                                    _free(puStack_ae8[-1]);
                                  }
                                  plVar12 = uStack_610;
                                  if (lStack_5d8 != 0) {
                                    piVar9 = (int *)(lStack_5d8 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_610);
                                      plVar12 = uStack_610;
                                    }
                                  }
                                  uStack_610._4_4_ = (int)((ulong)plVar12 >> 0x20);
                                  lStack_5d8 = 0;
                                  uStack_5f8 = 0;
                                  uStack_5f4 = 0;
                                  uStack_600 = 0;
                                  iStack_5fc = 0;
                                  uStack_5e8 = 0;
                                  uStack_5e4 = 0;
                                  uStack_5f0 = 0;
                                  uStack_5ec = 0;
                                  if (0 < uStack_610._4_4_) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_5d0 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < uStack_610._4_4_);
                                  }
                                  if (puStack_5c8 != &uStack_5c0 && puStack_5c8 != (undefined8 *)0x0
                                     ) {
                                    uStack_610 = plVar12;
                                    _free(puStack_5c8[-1]);
                                  }
                                  uStack_8b0 = 0x42ff0000;
                                  uStack_8a4 = 0;
                                  uStack_8a0 = 0;
                                  iStack_8ac = 0;
                                  uStack_8a8 = 0;
                                  puStack_870 = &uStack_8a8;
                                  uStack_894 = 0;
                                  uStack_890 = 0;
                                  uStack_89c = 0;
                                  uStack_898 = 0;
                                  uStack_884 = 0;
                                  uStack_88c = 0;
                                  uStack_888 = 0;
                                  lStack_878 = 0;
                                  uStack_880 = 0;
                                  uStack_87c = 0;
                                  puStack_bb8 = &uStack_860;
                                  uStack_858 = 0;
                                  uStack_860 = 0;
                                  uStack_240 = 0;
                                  uStack_23c = 0;
                                  uStack_250._0_4_ = 0x1010000;
                                  uStack_248 = &uStack_2b0;
                                  uStack_610._0_4_ = 0x2010000;
                                  uStack_600 = 0;
                                  iStack_5fc = 0;
                                  uStack_b30._0_4_ = 0;
                                  uStack_b30._4_4_ = 0;
                                  puStack_868 = puStack_bb8;
                                  uStack_608 = &uStack_8b0;
                                  func_0x000109b44a6c(dVar28 * 0.025,dVar28 * 0.025,&uStack_250,
                                                      &uStack_610,&uStack_b30,0);
                                  uStack_250._0_4_ = 0x2010000;
                                  uStack_240 = 0;
                                  uStack_23c = 0;
                                  uStack_248 = &uStack_8b0;
                                  func_0x000109a41858(0x4024000000000000,0xc08be40000000000,
                                                      &uStack_8b0,&uStack_250,0);
                                  puVar22 = uStack_e0;
                                  puVar11 = uStack_248;
                                  if (lStack_278 != 0) {
                                    piVar9 = (int *)(lStack_278 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_2b0);
                                      puVar22 = uStack_e0;
                                      puVar11 = uStack_248;
                                    }
                                  }
                                  lStack_278 = 0;
                                  uStack_298 = 0;
                                  uStack_294 = 0;
                                  uStack_2a0 = 0;
                                  uStack_29c = 0;
                                  uStack_288 = 0;
                                  uStack_284 = 0;
                                  uStack_290 = 0;
                                  uStack_28c = 0;
                                  if (0 < iStack_2ac) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_270 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < iStack_2ac);
                                  }
                                  uStack_e0 = puVar22;
                                  uStack_248 = puVar11;
                                  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0
                                     ) {
                                    _free(puStack_268[-1]);
                                  }
                                  puStack_ba8 = param_6;
                                  func_0x00010918eb6c(&iStack_410);
                                  func_0x000109a7f0b8(&iStack_410,&uStack_850,&uStack_8b0);
                                  uStack_610._0_4_ = 0x42ff0000;
                                  puStack_5d0 = &uStack_608;
                                  uStack_608._4_4_ = 0;
                                  uStack_600 = 0;
                                  uStack_610._4_4_ = 0;
                                  uStack_608._0_4_ = 0;
                                  lStack_5d8 = 0;
                                  uStack_5dc = 0;
                                  uStack_5e4 = 0;
                                  uStack_5e0 = 0;
                                  uStack_5ec = 0;
                                  uStack_5e8 = 0;
                                  uStack_5f4 = 0;
                                  uStack_5f0 = 0;
                                  iStack_5fc = 0;
                                  uStack_5f8 = 0;
                                  uStack_5b8 = 0;
                                  uStack_5c0 = 0;
                                  puStack_5c8 = &uStack_5c0;
                                  (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410) + 0x18))
                                            ((long *)CONCAT44(iStack_40c,iStack_410),&iStack_410,
                                             &uStack_610,0xffffffff);
                                  func_0x000109a7eb9c(&uStack_250,&uStack_790,&uStack_610);
                                  uStack_910 = 0x42ff0000;
                                  puStack_8d0 = &uStack_908;
                                  uStack_904 = 0;
                                  uStack_900 = 0;
                                  iStack_90c = 0;
                                  uStack_908 = 0;
                                  lStack_8d8 = 0;
                                  uStack_8dc = 0;
                                  uStack_8e4 = 0;
                                  uStack_8e0 = 0;
                                  uStack_8ec = 0;
                                  uStack_8e8 = 0;
                                  uStack_8f4 = 0;
                                  uStack_8f0 = 0;
                                  uStack_8fc = 0;
                                  uStack_8f8 = 0;
                                  puStack_bc0 = &uStack_8c0;
                                  uStack_8b8 = 0;
                                  uStack_8c0 = 0;
                                  puStack_8c8 = puStack_bc0;
                                  (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,(int)uStack_250) +
                                              0x18))((long *)CONCAT44(uStack_250._4_4_,
                                                                      (int)uStack_250),&uStack_250,
                                                     &uStack_910,0xffffffff);
                                  func_0x00010918eb6c(&uStack_250);
                                  puVar22 = uStack_e0;
                                  puVar11 = uStack_248;
                                  if (lStack_5d8 != 0) {
                                    piVar9 = (int *)(lStack_5d8 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_610);
                                      puVar22 = uStack_e0;
                                      puVar11 = uStack_248;
                                    }
                                  }
                                  lStack_5d8 = 0;
                                  uStack_5f8 = 0;
                                  uStack_5f4 = 0;
                                  uStack_600 = 0;
                                  iStack_5fc = 0;
                                  uStack_5e8 = 0;
                                  uStack_5e4 = 0;
                                  uStack_5f0 = 0;
                                  uStack_5ec = 0;
                                  if (0 < uStack_610._4_4_) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_5d0 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < uStack_610._4_4_);
                                  }
                                  uStack_e0 = puVar22;
                                  uStack_248 = puVar11;
                                  if (puStack_5c8 != &uStack_5c0 && puStack_5c8 != (undefined8 *)0x0
                                     ) {
                                    _free(puStack_5c8[-1]);
                                  }
                                  func_0x00010918eb6c(&iStack_410);
                                  func_0x000109a7f0b8(&uStack_610,&uStack_6d0,&uStack_910);
                                  uStack_2b0 = 0x42ff0000;
                                  puStack_270 = &uStack_2a8;
                                  uStack_2a8._4_4_ = 0;
                                  uStack_2a0 = 0;
                                  iStack_2ac = 0;
                                  uStack_2a8._0_4_ = 0;
                                  lStack_278 = 0;
                                  uStack_27c = 0;
                                  uStack_284 = 0;
                                  uStack_280 = 0;
                                  uStack_28c = 0;
                                  uStack_288 = 0;
                                  uStack_294 = 0;
                                  uStack_290 = 0;
                                  uStack_29c = 0;
                                  uStack_298 = 0;
                                  uStack_258 = 0;
                                  uStack_260 = 0;
                                  puStack_268 = &uStack_260;
                                  (**(code **)(*(long *)CONCAT44(uStack_610._4_4_,(int)uStack_610) +
                                              0x18))((long *)CONCAT44(uStack_610._4_4_,
                                                                      (int)uStack_610),&uStack_610,
                                                     &uStack_2b0,0xffffffff);
                                  func_0x000109a7f0b8(&iStack_410,&uStack_2b0,&uStack_7f0);
                                  uStack_b30._0_4_ = 0x42ff0000;
                                  puStack_af0 = &uStack_b28;
                                  uStack_b28._4_4_ = 0;
                                  uStack_b20 = 0;
                                  uStack_b30._4_4_ = 0;
                                  uStack_b28._0_4_ = 0;
                                  lStack_af8 = 0;
                                  uStack_afc = 0;
                                  uStack_b04 = 0;
                                  uStack_b00 = 0;
                                  uStack_b0c = 0;
                                  uStack_b08 = 0;
                                  uStack_b14 = 0;
                                  uStack_b10 = 0;
                                  uStack_b1c = 0;
                                  uStack_b18 = 0;
                                  uStack_ae0 = 0;
                                  uStack_ad8 = 0;
                                  puStack_ae8 = &uStack_ae0;
                                  (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410) + 0x18))
                                            ((long *)CONCAT44(iStack_40c,iStack_410),&iStack_410,
                                             &uStack_b30,0xffffffff);
                                  func_0x000109a7eb9c(&uStack_250,&uStack_730,&uStack_b30);
                                  uStack_970 = 0x42ff0000;
                                  lStack_930 = (long)&uStack_96c + 4;
                                  uStack_964 = 0;
                                  uStack_960 = 0;
                                  uStack_96c = 0;
                                  lStack_938 = 0;
                                  uStack_93c = 0;
                                  uStack_944 = 0;
                                  uStack_940 = 0;
                                  uStack_94c = 0;
                                  uStack_948 = 0;
                                  uStack_954 = 0;
                                  uStack_950 = 0;
                                  uStack_95c = 0;
                                  uStack_958 = 0;
                                  puStack_bd8 = &uStack_920;
                                  uStack_918 = 0;
                                  uStack_920 = 0;
                                  puStack_928 = puStack_bd8;
                                  (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,(int)uStack_250) +
                                              0x18))((long *)CONCAT44(uStack_250._4_4_,
                                                                      (int)uStack_250),&uStack_250,
                                                     &uStack_970,0xffffffff);
                                  func_0x00010918eb6c(&uStack_250);
                                  puVar22 = uStack_e0;
                                  puVar11 = uStack_248;
                                  if (lStack_af8 != 0) {
                                    piVar9 = (int *)(lStack_af8 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_b30);
                                      puVar22 = uStack_e0;
                                      puVar11 = uStack_248;
                                    }
                                  }
                                  lStack_af8 = 0;
                                  uStack_b18 = 0;
                                  uStack_b14 = 0;
                                  uStack_b20 = 0;
                                  uStack_b1c = 0;
                                  uStack_b08 = 0;
                                  uStack_b04 = 0;
                                  uStack_b10 = 0;
                                  uStack_b0c = 0;
                                  if (0 < uStack_b30._4_4_) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_af0 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < uStack_b30._4_4_);
                                  }
                                  uStack_e0 = puVar22;
                                  uStack_248 = puVar11;
                                  if (puStack_ae8 != &uStack_ae0 && puStack_ae8 != (undefined8 *)0x0
                                     ) {
                                    _free(puStack_ae8[-1]);
                                  }
                                  func_0x00010918eb6c(&iStack_410);
                                  puVar5 = puStack_b98;
                                  puVar22 = uStack_e0;
                                  puVar11 = uStack_248;
                                  if (lStack_278 != 0) {
                                    piVar9 = (int *)(lStack_278 + 0x14);
                                    do {
                                      iVar13 = *piVar9;
                                      cVar3 = '\x01';
                                      bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                      if (bVar8) {
                                        *piVar9 = iVar13 + -1;
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                    if (iVar13 + -1 == 0) {
                                      func_0x000109a848d4(&uStack_2b0);
                                      puVar22 = uStack_e0;
                                      puVar11 = uStack_248;
                                    }
                                  }
                                  lStack_278 = 0;
                                  uStack_298 = 0;
                                  uStack_294 = 0;
                                  uStack_2a0 = 0;
                                  uStack_29c = 0;
                                  uStack_288 = 0;
                                  uStack_284 = 0;
                                  uStack_290 = 0;
                                  uStack_28c = 0;
                                  if (0 < iStack_2ac) {
                                    lVar14 = 0;
                                    do {
                                      *(undefined4 *)((long)puStack_270 + lVar14 * 4) = 0;
                                      lVar14 = lVar14 + 1;
                                    } while (lVar14 < iStack_2ac);
                                  }
                                  lStack_bd0 = param_4;
                                  puStack_bc8 = &uStack_7a0;
                                  uStack_e0 = puVar22;
                                  uStack_248 = puVar11;
                                  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0
                                     ) {
                                    _free(puStack_268[-1]);
                                  }
                                  func_0x00010918eb6c(&uStack_610);
                                  iVar13 = **(int **)(puVar5 + 0x10);
                                  iVar2 = (*(int **)(puVar5 + 0x10))[1];
                                  uVar20 = uStack_970 & 0xfff;
                                  __ZNSt3__19to_stringEi(&iStack_410,uVar20);
                                  piVar9 = &iStack_410;
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                            (piVar9,0,&UNK_10f63097e,0x17);
                                  uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                                  uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20);
                                  uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                                  uStack_248._4_4_ =
                                       (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                                  uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                                  uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
                                  piVar9[2] = 0;
                                  piVar9[3] = 0;
                                  piVar9[4] = 0;
                                  piVar9[5] = 0;
                                  piVar9[0] = 0;
                                  piVar9[1] = 0;
                                  if (uStack_23c < 0) {
                                    uStack_610._0_4_ = (int)uStack_250;
                                    uStack_610._4_4_ = uStack_250._4_4_;
                                    uStack_608._0_4_ = (int)uStack_248;
                                    uStack_608._4_4_ = uStack_248._4_4_;
                                    plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250);
                                    if (uVar20 == 0) {
                                      __ZdlPv();
                                      goto LAB_109ff488c;
                                    }
                                  }
                                  else {
                                    uStack_610 = &uStack_250;
                                    uStack_608._0_4_ = (int)uStack_23c._3_1_;
                                    uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                                    plVar12 = uStack_610;
                                    if (uVar20 == 0) {
LAB_109ff488c:
                                      if (iStack_3fc < 0) {
                                        __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                                      }
                                      lStack_b0 = 0;
                                      uStack_b4 = 0;
                                      puStack_a8 = (uint *)&uStack_e0;
                                      uStack_bc = 0;
                                      uStack_b8 = 0;
                                      uStack_c4 = 0;
                                      uStack_c0 = 0;
                                      uStack_cc = 0;
                                      uStack_c8 = 0;
                                      uStack_d4 = 0;
                                      uStack_d0 = 0;
                                      uStack_e0._4_4_ = 0;
                                      uStack_d8 = 0;
                                      iStack_e4 = 0;
                                      uStack_e0._0_4_ = 0;
                                      uStack_98 = 0;
                                      uStack_90 = 0;
                                      uStack_e8 = 0x42ff0000;
                                      puStack_a0 = &uStack_98;
                                      func_0x0001093910bc(&uStack_e8,&uStack_970);
                                      func_0x000109a7ead4(&uStack_250,0x406cb00000000000,&uStack_e8)
                                      ;
                                      FUN_10a003124(&uStack_610,&uStack_250);
                                      func_0x00010918eb6c(&uStack_250);
                                      func_0x000109a7ead4(&uStack_250,0x4039800000000000,&uStack_e8)
                                      ;
                                      FUN_10a003124(&uStack_b30,&uStack_250);
                                      func_0x00010918eb6c(&uStack_250);
                                      iStack_b90 = 0;
                                      iStack_b8c = 0x40600000;
                                      uStack_b88 = 0;
                                      uStack_b84 = 0;
                                      uStack_b80 = 0;
                                      uStack_b7c = 0;
                                      uStack_b78 = 0;
                                      uStack_b74 = 0;
                                      func_0x000109a7efec(&iStack_410,&uStack_b30,&iStack_b90);
                                      uStack_2b0 = 0x42ff0000;
                                      puStack_270 = &uStack_2a8;
                                      uStack_2a8._4_4_ = 0;
                                      uStack_2a0 = 0;
                                      iStack_2ac = 0;
                                      uStack_2a8._0_4_ = 0;
                                      lStack_278 = 0;
                                      uStack_27c = 0;
                                      uStack_284 = 0;
                                      uStack_280 = 0;
                                      uStack_28c = 0;
                                      uStack_288 = 0;
                                      uStack_294 = 0;
                                      uStack_290 = 0;
                                      uStack_29c = 0;
                                      uStack_298 = 0;
                                      uStack_258 = 0;
                                      uStack_260 = 0;
                                      puStack_268 = &uStack_260;
                                      (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410) + 0x18))
                                                ((long *)CONCAT44(iStack_40c,iStack_410),&iStack_410
                                                 ,&uStack_2b0,0xffffffff);
                                      func_0x000109a7f0b8(&uStack_250,&uStack_610,&uStack_2b0);
                                      FUN_10a003124(&uStack_470,&uStack_250);
                                      func_0x00010918eb6c(&uStack_250);
                                      if (lStack_278 != 0) {
                                        piVar9 = (int *)(lStack_278 + 0x14);
                                        do {
                                          iVar23 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar23 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar23 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_2b0);
                                        }
                                      }
                                      lStack_278 = 0;
                                      uStack_298 = 0;
                                      uStack_294 = 0;
                                      uStack_2a0 = 0;
                                      uStack_29c = 0;
                                      uStack_288 = 0;
                                      uStack_284 = 0;
                                      uStack_290 = 0;
                                      uStack_28c = 0;
                                      if (0 < iStack_2ac) {
                                        lVar14 = 0;
                                        do {
                                          *(undefined4 *)((long)puStack_270 + lVar14 * 4) = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_2ac);
                                      }
                                      if (puStack_268 != &uStack_260 &&
                                          puStack_268 != (undefined8 *)0x0) {
                                        _free(puStack_268[-1]);
                                      }
                                      func_0x00010918eb6c(&iStack_410);
                                      plVar12 = uStack_610;
                                      if (lStack_af8 != 0) {
                                        piVar9 = (int *)(lStack_af8 + 0x14);
                                        do {
                                          iVar23 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar23 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar23 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_b30);
                                          plVar12 = uStack_610;
                                        }
                                      }
                                      lStack_af8 = 0;
                                      uStack_b18 = 0;
                                      uStack_b14 = 0;
                                      uStack_b20 = 0;
                                      uStack_b1c = 0;
                                      uStack_b08 = 0;
                                      uStack_b04 = 0;
                                      uStack_b10 = 0;
                                      uStack_b0c = 0;
                                      if (0 < uStack_b30._4_4_) {
                                        lVar14 = 0;
                                        do {
                                          *(undefined4 *)((long)puStack_af0 + lVar14 * 4) = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < uStack_b30._4_4_);
                                      }
                                      uStack_610 = plVar12;
                                      if (puStack_ae8 != &uStack_ae0 &&
                                          puStack_ae8 != (undefined8 *)0x0) {
                                        _free(puStack_ae8[-1]);
                                      }
                                      plVar12 = uStack_610;
                                      if (lStack_5d8 != 0) {
                                        piVar9 = (int *)(lStack_5d8 + 0x14);
                                        do {
                                          iVar23 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar23 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar23 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_610);
                                          plVar12 = uStack_610;
                                        }
                                      }
                                      uStack_610._4_4_ = (int)((ulong)plVar12 >> 0x20);
                                      lStack_5d8 = 0;
                                      uStack_5f8 = 0;
                                      uStack_5f4 = 0;
                                      uStack_600 = 0;
                                      iStack_5fc = 0;
                                      uStack_5e8 = 0;
                                      uStack_5e4 = 0;
                                      uStack_5f0 = 0;
                                      uStack_5ec = 0;
                                      if (0 < uStack_610._4_4_) {
                                        lVar14 = 0;
                                        do {
                                          *(undefined4 *)((long)puStack_5d0 + lVar14 * 4) = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < uStack_610._4_4_);
                                      }
                                      if (puStack_5c8 != &uStack_5c0 &&
                                          puStack_5c8 != (undefined8 *)0x0) {
                                        uStack_610 = plVar12;
                                        _free(puStack_5c8[-1]);
                                        plVar12 = uStack_610;
                                      }
                                      uStack_610._4_4_ = (int)((ulong)plVar12 >> 0x20);
                                      iVar23 = iVar2;
                                      if (iVar2 <= iVar13) {
                                        iVar23 = iVar13;
                                      }
                                      fVar27 = (float)(int)puStack_ba0 / (float)iVar23;
                                      puStack_ba0 = param_1;
                                      if (1.0 <= fVar27) {
                                        puStack_210 = (undefined8 *)((ulong)&uStack_250 | 8);
                                        uStack_248._0_4_ = uStack_468;
                                        uStack_248._4_4_ = uStack_464;
                                        uStack_250._0_4_ = uStack_470;
                                        uStack_250._4_4_ = iStack_46c;
                                        lStack_218 = lStack_438;
                                        uStack_220 = uStack_440;
                                        uStack_21c = uStack_43c;
                                        uStack_1f8 = 0;
                                        uStack_200 = 0;
                                        if (lStack_438 != 0) {
                                          piVar9 = (int *)(lStack_438 + 0x14);
                                          do {
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = *piVar9 + 1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                        }
                                        puStack_208 = &uStack_200;
                                        uStack_610 = plVar12;
                                        if (iStack_46c < 3) {
                                          uStack_200 = *puStack_428;
                                          uStack_1f8 = puStack_428[1];
                                        }
                                        else {
                                          uStack_250._4_4_ = 0;
                                          func_0x000109a84868(&uStack_250,&uStack_470);
                                        }
                                        FUN_109ff2354(&uStack_9d0,puStack_b98,&uStack_250,
                                                      puStack_ba8);
                                        if (lStack_218 != 0) {
                                          piVar9 = (int *)(lStack_218 + 0x14);
                                          do {
                                            iVar13 = *piVar9;
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = iVar13 + -1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                          if (iVar13 + -1 == 0) {
                                            func_0x000109a848d4(&uStack_250);
                                          }
                                        }
                                        if (0 < uStack_250._4_4_) {
                                          lVar14 = 0;
                                          do {
                                            *(undefined4 *)((long)puStack_210 + lVar14 * 4) = 0;
                                            lVar14 = lVar14 + 1;
                                          } while (lVar14 < uStack_250._4_4_);
                                        }
                                        bVar8 = puStack_208 == &uStack_200;
                                      }
                                      else {
                                        uStack_250._0_4_ = 0x42ff0000;
                                        uStack_608 = (uint *)&uStack_250;
                                        puStack_210 = &uStack_248;
                                        uStack_248._4_4_ = 0;
                                        uStack_240 = 0;
                                        uStack_250._4_4_ = 0;
                                        uStack_248._0_4_ = 0;
                                        uStack_234 = 0;
                                        uStack_230 = 0;
                                        uStack_23c = 0;
                                        uStack_238 = 0;
                                        uStack_224 = 0;
                                        uStack_22c = 0;
                                        uStack_228 = 0;
                                        lStack_218 = 0;
                                        uStack_220 = 0;
                                        uStack_21c = 0;
                                        uStack_1f8 = 0;
                                        uStack_200 = 0;
                                        uStack_400 = 0;
                                        iStack_3fc = 0;
                                        iStack_410 = 0x1010000;
                                        uStack_408._0_4_ = (int)puStack_b98;
                                        uStack_408._4_4_ = (int)((ulong)puStack_b98 >> 0x20);
                                        uStack_610._0_4_ = 0x2010000;
                                        uStack_600 = 0;
                                        iStack_5fc = 0;
                                        uStack_b30._0_4_ = (int)(fVar27 * (float)iVar2);
                                        uStack_b30._4_4_ = (int)(fVar27 * (float)iVar13);
                                        puStack_208 = &uStack_200;
                                        func_0x000109b0f718(0,0,&iStack_410,&uStack_610,&uStack_b30,
                                                            3);
                                        lStack_3d8 = 0;
                                        uStack_3dc = 0;
                                        uStack_3d0 = (ulong)&iStack_410 | 8;
                                        uStack_3e4 = 0;
                                        uStack_3e0 = 0;
                                        uStack_3ec = 0;
                                        uStack_3e8 = 0;
                                        uStack_3f4 = 0;
                                        uStack_3f0 = 0;
                                        iStack_3fc = 0;
                                        uStack_3f8 = 0;
                                        uStack_408._4_4_ = 0;
                                        uStack_400 = 0;
                                        iStack_40c = 0;
                                        uStack_408._0_4_ = 0;
                                        uStack_3b8 = 0;
                                        uStack_3c0 = 0;
                                        iStack_410 = 0x42ff0000;
                                        uStack_600 = 0;
                                        iStack_5fc = 0;
                                        uStack_610._0_4_ = 0x81010000;
                                        uStack_608 = &uStack_470;
                                        uStack_b30._0_4_ = 0x82010000;
                                        uStack_b20 = 0;
                                        uStack_b1c = 0;
                                        puStack_3c8 = &uStack_3c0;
                                        uStack_2b0 = (int)(fVar27 * (float)iVar2);
                                        iStack_2ac = (int)(fVar27 * (float)iVar13);
                                        uStack_b28 = (uint *)&iStack_410;
                                        func_0x000109b0f718(0,0,&uStack_610,&uStack_b30,&uStack_2b0,
                                                            0);
                                        puStack_5d0 = (undefined8 *)((ulong)&uStack_610 | 8);
                                        uStack_608._0_4_ = (int)uStack_408;
                                        uStack_608._4_4_ = uStack_408._4_4_;
                                        uStack_610._0_4_ = iStack_410;
                                        uStack_610._4_4_ = iStack_40c;
                                        uStack_5f8 = uStack_3f8;
                                        uStack_5f4 = uStack_3f4;
                                        uStack_600 = uStack_400;
                                        iStack_5fc = iStack_3fc;
                                        uStack_5e8 = uStack_3e8;
                                        uStack_5e4 = uStack_3e4;
                                        uStack_5f0 = uStack_3f0;
                                        uStack_5ec = uStack_3ec;
                                        lStack_5d8 = lStack_3d8;
                                        uStack_5e0 = uStack_3e0;
                                        uStack_5dc = uStack_3dc;
                                        uStack_5b8 = 0;
                                        uStack_5c0 = 0;
                                        if (lStack_3d8 != 0) {
                                          piVar9 = (int *)(lStack_3d8 + 0x14);
                                          do {
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = *piVar9 + 1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                        }
                                        puStack_5c8 = &uStack_5c0;
                                        if (iStack_40c < 3) {
                                          uStack_5c0 = *puStack_3c8;
                                          uStack_5b8 = puStack_3c8[1];
                                        }
                                        else {
                                          uStack_610._4_4_ = 0;
                                          func_0x000109a84868(&uStack_610,&iStack_410);
                                        }
                                        FUN_109ff2354(&uStack_9d0,&uStack_250,&uStack_610,
                                                      puStack_ba8);
                                        if (lStack_5d8 != 0) {
                                          piVar9 = (int *)(lStack_5d8 + 0x14);
                                          do {
                                            iVar23 = *piVar9;
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = iVar23 + -1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                          if (iVar23 + -1 == 0) {
                                            func_0x000109a848d4(&uStack_610);
                                          }
                                        }
                                        param_1 = puStack_ba0;
                                        lStack_5d8 = 0;
                                        uStack_5f8 = 0;
                                        uStack_5f4 = 0;
                                        uStack_600 = 0;
                                        iStack_5fc = 0;
                                        uStack_5e8 = 0;
                                        uStack_5e4 = 0;
                                        uStack_5f0 = 0;
                                        uStack_5ec = 0;
                                        if (0 < uStack_610._4_4_) {
                                          lVar14 = 0;
                                          do {
                                            *(undefined4 *)((long)puStack_5d0 + lVar14 * 4) = 0;
                                            lVar14 = lVar14 + 1;
                                          } while (lVar14 < uStack_610._4_4_);
                                        }
                                        if (puStack_5c8 != &uStack_5c0 &&
                                            puStack_5c8 != (undefined8 *)0x0) {
                                          _free(puStack_5c8[-1]);
                                        }
                                        uStack_b30._0_4_ = 0x81010000;
                                        uStack_b28 = &uStack_9d0;
                                        uStack_b20 = 0;
                                        uStack_b1c = 0;
                                        uStack_2b0 = 0x82010000;
                                        uStack_2a0 = 0;
                                        uStack_29c = 0;
                                        iStack_b90 = iVar2;
                                        iStack_b8c = iVar13;
                                        uStack_2a8 = uStack_b28;
                                        func_0x000109b0f718(0,0,&uStack_b30,&uStack_2b0,&iStack_b90,
                                                            1);
                                        if (lStack_3d8 != 0) {
                                          piVar9 = (int *)(lStack_3d8 + 0x14);
                                          do {
                                            iVar13 = *piVar9;
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = iVar13 + -1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                          if (iVar13 + -1 == 0) {
                                            func_0x000109a848d4(&iStack_410);
                                          }
                                        }
                                        lStack_3d8 = 0;
                                        uStack_3f8 = 0;
                                        uStack_3f4 = 0;
                                        uStack_400 = 0;
                                        iStack_3fc = 0;
                                        uStack_3e8 = 0;
                                        uStack_3e4 = 0;
                                        uStack_3f0 = 0;
                                        uStack_3ec = 0;
                                        if (0 < iStack_40c) {
                                          lVar14 = 0;
                                          do {
                                            *(undefined4 *)(uStack_3d0 + lVar14 * 4) = 0;
                                            lVar14 = lVar14 + 1;
                                          } while (lVar14 < iStack_40c);
                                        }
                                        if (puStack_3c8 != &uStack_3c0 &&
                                            puStack_3c8 != (undefined8 *)0x0) {
                                          _free(puStack_3c8[-1]);
                                        }
                                        if (lStack_218 != 0) {
                                          piVar9 = (int *)(lStack_218 + 0x14);
                                          do {
                                            iVar13 = *piVar9;
                                            cVar3 = '\x01';
                                            bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                            if (bVar8) {
                                              *piVar9 = iVar13 + -1;
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                          if (iVar13 + -1 == 0) {
                                            func_0x000109a848d4(&uStack_250);
                                          }
                                        }
                                        if (0 < uStack_250._4_4_) {
                                          lVar14 = 0;
                                          do {
                                            *(undefined4 *)((long)puStack_210 + lVar14 * 4) = 0;
                                            lVar14 = lVar14 + 1;
                                          } while (lVar14 < uStack_250._4_4_);
                                        }
                                        bVar8 = puStack_208 == &uStack_200;
                                      }
                                      lStack_218 = 0;
                                      uStack_224 = 0;
                                      uStack_228 = 0;
                                      uStack_22c = 0;
                                      uStack_230 = 0;
                                      uStack_234 = 0;
                                      uStack_238 = 0;
                                      uStack_23c = 0;
                                      uStack_240 = 0;
                                      if (!bVar8 && puStack_208 != (undefined8 *)0x0) {
                                        _free(puStack_208[-1]);
                                      }
                                      if (lStack_438 != 0) {
                                        piVar9 = (int *)(lStack_438 + 0x14);
                                        do {
                                          iVar13 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar13 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar13 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_470);
                                        }
                                      }
                                      lStack_438 = 0;
                                      uStack_458 = 0;
                                      uStack_454 = 0;
                                      uStack_460 = 0;
                                      uStack_45c = 0;
                                      uStack_448 = 0;
                                      uStack_444 = 0;
                                      uStack_450 = 0;
                                      uStack_44c = 0;
                                      if (0 < iStack_46c) {
                                        lVar14 = 0;
                                        do {
                                          puStack_430[lVar14] = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_46c);
                                      }
                                      if (puStack_428 != &uStack_420 &&
                                          puStack_428 != (undefined8 *)0x0) {
                                        _free(puStack_428[-1]);
                                      }
                                      if (lStack_b0 != 0) {
                                        piVar9 = (int *)(lStack_b0 + 0x14);
                                        do {
                                          iVar13 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar13 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar13 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_e8);
                                        }
                                      }
                                      lStack_b0 = 0;
                                      uStack_d0 = 0;
                                      uStack_cc = 0;
                                      uStack_d8 = 0;
                                      uStack_d4 = 0;
                                      uStack_c0 = 0;
                                      uStack_bc = 0;
                                      uStack_c8 = 0;
                                      uStack_c4 = 0;
                                      if (0 < iStack_e4) {
                                        lVar14 = 0;
                                        do {
                                          *(undefined4 *)((long)puStack_a8 + lVar14 * 4) = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_e4);
                                      }
                                      if (puStack_a0 != &uStack_98 &&
                                          puStack_a0 != (undefined8 *)0x0) {
                                        _free(puStack_a0[-1]);
                                      }
                                      *(ulong *)(param_1 + 2) = CONCAT44(uStack_9c4,uStack_9c8);
                                      *(ulong *)param_1 = CONCAT44(iStack_9cc,uStack_9d0);
                                      *(ulong *)(param_1 + 6) = CONCAT44(uStack_9b4,uStack_9b8);
                                      *(ulong *)(param_1 + 4) = CONCAT44(uStack_9bc,uStack_9c0);
                                      puVar11 = param_1 + 0x14;
                                      puVar11[0] = 0;
                                      puVar11[1] = 0;
                                      *(ulong *)(param_1 + 10) = CONCAT44(uStack_9a4,uStack_9a8);
                                      *(ulong *)(param_1 + 8) = CONCAT44(uStack_9ac,uStack_9b0);
                                      *(long *)(param_1 + 0xe) = lStack_998;
                                      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_99c,uStack_9a0);
                                      *(uint **)(param_1 + 0x10) = param_1 + 2;
                                      *(uint **)(param_1 + 0x12) = puVar11;
                                      param_1[0x16] = 0;
                                      param_1[0x17] = 0;
                                      if (iStack_9cc < 3) {
                                        puVar22 = (undefined8 *)((ulong)&uStack_9d0 | 4);
                                        *(undefined8 *)(param_1 + 0x14) = *puStack_988;
                                        *(undefined8 *)(param_1 + 0x16) = puStack_988[1];
                                        uStack_9d0 = 0x42ff0000;
                                        puVar22[1] = 0;
                                        *puVar22 = 0;
                                        puVar22[3] = 0;
                                        puVar22[2] = 0;
                                        puVar22[5] = 0;
                                        puVar22[4] = 0;
                                        *(undefined8 *)((long)puVar22 + 0x34) = 0;
                                        *(undefined8 *)((long)puVar22 + 0x2c) = 0;
                                        if (puStack_988 != &uStack_980) {
                                          _free(puStack_988[-1]);
                                        }
                                      }
                                      else {
                                        *(undefined4 **)(param_1 + 0x10) = puStack_990;
                                        *(undefined8 **)(param_1 + 0x12) = puStack_988;
                                      }
                                      func_0x000109a7ead4(&uStack_250,0,&uStack_8b0);
                                      uStack_9d0 = 0x42ff0000;
                                      puStack_990 = &uStack_9c8;
                                      uStack_9c4 = 0;
                                      uStack_9c0 = 0;
                                      iStack_9cc = 0;
                                      uStack_9c8 = 0;
                                      lStack_998 = 0;
                                      uStack_99c = 0;
                                      uStack_9a4 = 0;
                                      uStack_9a0 = 0;
                                      uStack_9ac = 0;
                                      uStack_9a8 = 0;
                                      uStack_9b4 = 0;
                                      uStack_9b0 = 0;
                                      uStack_9bc = 0;
                                      uStack_9b8 = 0;
                                      puVar22 = &uStack_980;
                                      uStack_978 = 0;
                                      uStack_980 = 0;
                                      puStack_988 = puVar22;
                                      (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,
                                                                     (int)uStack_250) + 0x18))
                                                ((long *)CONCAT44(uStack_250._4_4_,(int)uStack_250),
                                                 &uStack_250,&uStack_9d0,0xffffffff);
                                      func_0x00010918eb6c(&uStack_250);
                                      func_0x000109a7ef1c(&iStack_410,&uStack_9d0,&uStack_8b0);
                                      uStack_2b0 = 0x42ff0000;
                                      puStack_270 = &uStack_2a8;
                                      uStack_2a8._4_4_ = 0;
                                      uStack_2a0 = 0;
                                      iStack_2ac = 0;
                                      uStack_2a8._0_4_ = 0;
                                      lStack_278 = 0;
                                      uStack_27c = 0;
                                      uStack_284 = 0;
                                      uStack_280 = 0;
                                      uStack_28c = 0;
                                      uStack_288 = 0;
                                      uStack_294 = 0;
                                      uStack_290 = 0;
                                      uStack_29c = 0;
                                      uStack_298 = 0;
                                      uStack_258 = 0;
                                      uStack_260 = 0;
                                      puStack_268 = &uStack_260;
                                      (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410) + 0x18))
                                                ((long *)CONCAT44(iStack_40c,iStack_410),&iStack_410
                                                 ,&uStack_2b0,0xffffffff);
                                      puStack_ba8 = param_1 + 2;
                                      func_0x000109a7f188(&uStack_b30,&uStack_9d0);
                                      uStack_470 = 0x42ff0000;
                                      puStack_430 = &uStack_468;
                                      uStack_464 = 0;
                                      uStack_460 = 0;
                                      iStack_46c = 0;
                                      uStack_468 = 0;
                                      lStack_438 = 0;
                                      uStack_43c = 0;
                                      uStack_444 = 0;
                                      uStack_440 = 0;
                                      uStack_44c = 0;
                                      uStack_448 = 0;
                                      uStack_454 = 0;
                                      uStack_450 = 0;
                                      uStack_45c = 0;
                                      uStack_458 = 0;
                                      uStack_418 = 0;
                                      uStack_420 = 0;
                                      puStack_428 = &uStack_420;
                                      (**(code **)(*(long *)CONCAT44(uStack_b30._4_4_,
                                                                     (uint)uStack_b30) + 0x18))
                                                ((long *)CONCAT44(uStack_b30._4_4_,(uint)uStack_b30)
                                                 ,&uStack_b30,&uStack_470,0xffffffff);
                                      func_0x000109a7ef1c(&uStack_610,&uStack_470,param_1);
                                      uStack_e8 = 0x42ff0000;
                                      puStack_a8 = (uint *)&uStack_e0;
                                      uStack_e0._4_4_ = 0;
                                      uStack_d8 = 0;
                                      iStack_e4 = 0;
                                      uStack_e0._0_4_ = 0;
                                      lStack_b0 = 0;
                                      uStack_b4 = 0;
                                      uStack_bc = 0;
                                      uStack_b8 = 0;
                                      uStack_c4 = 0;
                                      uStack_c0 = 0;
                                      uStack_cc = 0;
                                      uStack_c8 = 0;
                                      uStack_d4 = 0;
                                      uStack_d0 = 0;
                                      uStack_98 = 0;
                                      uStack_90 = 0;
                                      puStack_a0 = &uStack_98;
                                      (**(code **)(*uStack_610 + 0x18))
                                                (uStack_610,&uStack_610,&uStack_e8,0xffffffff);
                                      func_0x000109a7f0b8(&uStack_250,&uStack_2b0,&uStack_e8);
                                      (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,
                                                                     (int)uStack_250) + 0x18))
                                                ((long *)CONCAT44(uStack_250._4_4_,(int)uStack_250),
                                                 &uStack_250,param_1,0xffffffff);
                                      func_0x00010918eb6c(&uStack_250);
                                      if (lStack_b0 != 0) {
                                        piVar9 = (int *)(lStack_b0 + 0x14);
                                        do {
                                          iVar13 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar13 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar13 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_e8);
                                        }
                                      }
                                      lStack_b0 = 0;
                                      uStack_d0 = 0;
                                      uStack_cc = 0;
                                      uStack_d8 = 0;
                                      uStack_d4 = 0;
                                      uStack_c0 = 0;
                                      uStack_bc = 0;
                                      uStack_c8 = 0;
                                      uStack_c4 = 0;
                                      if (0 < iStack_e4) {
                                        lVar14 = 0;
                                        do {
                                          puStack_a8[lVar14] = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_e4);
                                      }
                                      if (puStack_a0 != &uStack_98 &&
                                          puStack_a0 != (undefined8 *)0x0) {
                                        _free(puStack_a0[-1]);
                                      }
                                      func_0x00010918eb6c(&uStack_610);
                                      if (lStack_438 != 0) {
                                        piVar9 = (int *)(lStack_438 + 0x14);
                                        do {
                                          iVar13 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar13 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar13 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_470);
                                        }
                                      }
                                      lStack_438 = 0;
                                      uStack_458 = 0;
                                      uStack_454 = 0;
                                      uStack_460 = 0;
                                      uStack_45c = 0;
                                      uStack_448 = 0;
                                      uStack_444 = 0;
                                      uStack_450 = 0;
                                      uStack_44c = 0;
                                      if (0 < iStack_46c) {
                                        lVar14 = 0;
                                        do {
                                          puStack_430[lVar14] = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_46c);
                                      }
                                      if (puStack_428 != &uStack_420 &&
                                          puStack_428 != (undefined8 *)0x0) {
                                        _free(puStack_428[-1]);
                                      }
                                      func_0x00010918eb6c(&uStack_b30);
                                      if (lStack_278 != 0) {
                                        piVar9 = (int *)(lStack_278 + 0x14);
                                        do {
                                          iVar13 = *piVar9;
                                          cVar3 = '\x01';
                                          bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                          if (bVar8) {
                                            *piVar9 = iVar13 + -1;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                        if (iVar13 + -1 == 0) {
                                          func_0x000109a848d4(&uStack_2b0);
                                        }
                                      }
                                      lStack_278 = 0;
                                      uStack_298 = 0;
                                      uStack_294 = 0;
                                      uStack_2a0 = 0;
                                      uStack_29c = 0;
                                      uStack_288 = 0;
                                      uStack_284 = 0;
                                      uStack_290 = 0;
                                      uStack_28c = 0;
                                      if (0 < iStack_2ac) {
                                        lVar14 = 0;
                                        do {
                                          *(undefined4 *)((long)puStack_270 + lVar14 * 4) = 0;
                                          lVar14 = lVar14 + 1;
                                        } while (lVar14 < iStack_2ac);
                                      }
                                      if (puStack_268 != &uStack_260 &&
                                          puStack_268 != (undefined8 *)0x0) {
                                        _free(puStack_268[-1]);
                                      }
                                      func_0x00010918eb6c(&iStack_410);
                                      uStack_250._0_4_ = 0xf630d17;
                                      uStack_250._4_4_ = 1;
                                      uStack_248._0_4_ = 0x1d;
                                      uStack_248._4_4_ = 0;
                                      if ((*(int **)(param_1 + 0x10))[1] != piStack_630[1] ||
                                          **(int **)(param_1 + 0x10) != *piStack_630) {
                                        FUN_10a0edfc4(&uStack_250);
                                        goto LAB_109ff64e4;
                                      }
                                      uVar20 = *param_1 & 0xfff;
                                      __ZNSt3__19to_stringEi(&iStack_410,uVar20);
                                      piVar9 = &iStack_410;
                                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                                (piVar9,0,&UNK_10f630d35,0x10);
                                      uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                                      uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >> 0x20)
                                      ;
                                      uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                                      uStack_248._4_4_ =
                                           (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                                      uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                                      uStack_250._4_4_ = (int)((ulong)*(undefined8 *)piVar9 >> 0x20)
                                      ;
                                      piVar9[2] = 0;
                                      piVar9[3] = 0;
                                      piVar9[4] = 0;
                                      piVar9[5] = 0;
                                      piVar9[0] = 0;
                                      piVar9[1] = 0;
                                      if (uStack_23c < 0) {
                                        uStack_610._0_4_ = (int)uStack_250;
                                        uStack_610._4_4_ = uStack_250._4_4_;
                                        uStack_608._0_4_ = (int)uStack_248;
                                        uStack_608._4_4_ = uStack_248._4_4_;
                                        plVar12 = (long *)CONCAT44(uStack_250._4_4_,(int)uStack_250)
                                        ;
                                        if (uVar20 == 0) {
                                          __ZdlPv();
                                          goto LAB_109ff5544;
                                        }
                                      }
                                      else {
                                        uStack_610 = &uStack_250;
                                        uStack_608._0_4_ = (int)uStack_23c._3_1_;
                                        uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                                        plVar12 = uStack_610;
                                        if (uVar20 == 0) {
LAB_109ff5544:
                                          if (iStack_3fc < 0) {
                                            __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                                          }
                                          uVar20 = uStack_670 & 0xfff;
                                          __ZNSt3__19to_stringEi(&iStack_410,uVar20);
                                          piVar9 = &iStack_410;
                                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                                    (piVar9,0,&UNK_10f630d46,0x11);
                                          uStack_240 = (undefined4)*(undefined8 *)(piVar9 + 4);
                                          uStack_23c = (int)((ulong)*(undefined8 *)(piVar9 + 4) >>
                                                            0x20);
                                          uStack_248._0_4_ = (int)*(undefined8 *)(piVar9 + 2);
                                          uStack_248._4_4_ =
                                               (int)((ulong)*(undefined8 *)(piVar9 + 2) >> 0x20);
                                          uStack_250._0_4_ = (int)*(undefined8 *)piVar9;
                                          uStack_250._4_4_ =
                                               (int)((ulong)*(undefined8 *)piVar9 >> 0x20);
                                          piVar9[2] = 0;
                                          piVar9[3] = 0;
                                          piVar9[4] = 0;
                                          piVar9[5] = 0;
                                          piVar9[0] = 0;
                                          piVar9[1] = 0;
                                          if (uStack_23c < 0) {
                                            uStack_610._0_4_ = (int)uStack_250;
                                            uStack_610._4_4_ = uStack_250._4_4_;
                                            uStack_608._0_4_ = (int)uStack_248;
                                            uStack_608._4_4_ = uStack_248._4_4_;
                                            plVar12 = (long *)CONCAT44(uStack_250._4_4_,
                                                                       (int)uStack_250);
                                            if (uVar20 == 0) {
                                              __ZdlPv();
                                              goto LAB_109ff55cc;
                                            }
                                          }
                                          else {
                                            uStack_610 = &uStack_250;
                                            uStack_608._0_4_ = (int)uStack_23c._3_1_;
                                            uStack_608._4_4_ = (int)(uStack_23c._3_1_ >> 7);
                                            plVar12 = uStack_610;
                                            if (uVar20 == 0) {
LAB_109ff55cc:
                                              if (iStack_3fc < 0) {
                                                __ZdlPv(CONCAT44(iStack_40c,iStack_410));
                                              }
                                              uVar29 = NEON_rev64(**(undefined8 **)(param_1 + 0x10),
                                                                  4);
                                              iStack_410 = (int)uVar29;
                                              iStack_40c = (int)((ulong)uVar29 >> 0x20);
                                              func_0x000109a829e8(&uStack_250,&iStack_410,0);
                                              uStack_b30._0_4_ = 0x42ff0000;
                                              puStack_af0 = &uStack_b28;
                                              uStack_b28._4_4_ = 0;
                                              uStack_b20 = 0;
                                              uStack_b30._4_4_ = 0;
                                              uStack_b28._0_4_ = 0;
                                              lStack_af8 = 0;
                                              uStack_afc = 0;
                                              uStack_b04 = 0;
                                              uStack_b00 = 0;
                                              uStack_b0c = 0;
                                              uStack_b08 = 0;
                                              uStack_b14 = 0;
                                              uStack_b10 = 0;
                                              uStack_b1c = 0;
                                              uStack_b18 = 0;
                                              uStack_ae0 = 0;
                                              uStack_ad8 = 0;
                                              puStack_ae8 = &uStack_ae0;
                                              (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,
                                                                             (int)uStack_250) + 0x18
                                                          ))((long *)CONCAT44(uStack_250._4_4_,
                                                                              (int)uStack_250),
                                                             &uStack_250,&uStack_b30,0xffffffff);
                                              puStack_bf0 = &uStack_ae0;
                                              puStack_be0 = puVar11;
                                              func_0x00010918eb6c(&uStack_250);
                                              uStack_2b0 = 0x42ff0000;
                                              puStack_270 = &uStack_2a8;
                                              uStack_2a8._4_4_ = 0;
                                              uStack_2a0 = 0;
                                              iStack_2ac = 0;
                                              uStack_2a8._0_4_ = 0;
                                              uStack_294 = 0;
                                              uStack_290 = 0;
                                              uStack_29c = 0;
                                              uStack_298 = 0;
                                              uStack_284 = 0;
                                              uStack_28c = 0;
                                              uStack_288 = 0;
                                              lStack_278 = 0;
                                              uStack_280 = 0;
                                              uStack_27c = 0;
                                              puStack_be8 = &uStack_260;
                                              uStack_258 = 0;
                                              uStack_260 = 0;
                                              puStack_268 = puStack_be8;
                                              func_0x000109a7ead4(&uStack_250,0,param_1);
                                              uStack_400 = 0;
                                              iStack_3fc = 0;
                                              iStack_410 = -0x3efa0000;
                                              uStack_610._0_4_ = 0x2010000;
                                              uStack_600 = 0;
                                              iStack_5fc = 0;
                                              piVar9 = &iStack_410;
                                              uStack_408 = &uStack_250;
                                              uStack_608 = &uStack_2b0;
                                              func_0x000109adde6c(piVar9,&uStack_610,8,4);
                                              func_0x00010918eb6c(&uStack_250);
                                              if (1 < (int)(uint)piVar9) {
                                                puVar25 = (undefined8 *)((ulong)&uStack_e8 | 4);
                                                puStack_b98 = (uint *)&uStack_e0;
                                                puVar24 = (undefined8 *)((ulong)&uStack_470 | 4);
                                                uVar26 = 0xffffffff;
                                                uVar20 = 1;
                                                dVar30 = -1.0;
                                                puStack_bf8 = puVar22;
                                                do {
                                                  func_0x000109a7e87c(&iStack_410,(double)uVar20,
                                                                      &uStack_2b0);
                                                  uStack_e8 = 0x42ff0000;
                                                  *(undefined8 *)((long)puVar25 + 0x34) = 0;
                                                  *(undefined8 *)((long)puVar25 + 0x2c) = 0;
                                                  puVar25[3] = 0;
                                                  puVar25[2] = 0;
                                                  puVar25[5] = 0;
                                                  puVar25[4] = 0;
                                                  puVar25[1] = 0;
                                                  *puVar25 = 0;
                                                  puStack_a8 = puStack_b98;
                                                  uStack_98 = 0;
                                                  uStack_90 = 0;
                                                  puStack_a0 = &uStack_98;
                                                  (**(code **)(*(long *)CONCAT44(iStack_40c,
                                                                                 iStack_410) + 0x18)
                                                  )((long *)CONCAT44(iStack_40c,iStack_410),
                                                    &iStack_410,&uStack_e8,0xffffffff);
                                                  func_0x000109a7ead4(&uStack_610,0,&uStack_670);
                                                  uStack_470 = 0x42ff0000;
                                                  *(undefined8 *)((long)puVar24 + 0x34) = 0;
                                                  *(undefined8 *)((long)puVar24 + 0x2c) = 0;
                                                  puVar24[3] = 0;
                                                  puVar24[2] = 0;
                                                  puVar24[5] = 0;
                                                  puVar24[4] = 0;
                                                  puVar24[1] = 0;
                                                  *puVar24 = 0;
                                                  uStack_420 = 0;
                                                  uStack_418 = 0;
                                                  puStack_430 = &uStack_468;
                                                  puStack_428 = &uStack_420;
                                                  (**(code **)(*(long *)CONCAT44(uStack_610._4_4_,
                                                                                 (int)uStack_610) +
                                                              0x18))((long *)CONCAT44(uStack_610.
                                                                                      _4_4_,(int)
                                                  uStack_610),&uStack_610,&uStack_470,0xffffffff);
                                                  func_0x000109a7ef1c(&uStack_250,&uStack_e8,
                                                                      &uStack_470);
                                                  uStack_498 = 0;
                                                  auStack_4a8[0] = 0xc1060000;
                                                  puStack_4a0 = &uStack_250;
                                                  func_0x000109ab74d4(adStack_490,auStack_4a8);
                                                  dVar28 = adStack_490[0];
                                                  func_0x00010918eb6c(&uStack_250);
                                                  puVar22 = uStack_408;
                                                  if (lStack_438 != 0) {
                                                    piVar15 = (int *)(lStack_438 + 0x14);
                                                    do {
                                                      iVar13 = *piVar15;
                                                      cVar3 = '\x01';
                                                      bVar8 = (bool)ExclusiveMonitorPass
                                                                              (piVar15,0x10);
                                                      if (bVar8) {
                                                        *piVar15 = iVar13 + -1;
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    if (iVar13 + -1 == 0) {
                                                      func_0x000109a848d4(&uStack_470);
                                                      puVar22 = uStack_408;
                                                    }
                                                  }
                                                  lStack_438 = 0;
                                                  uStack_458 = 0;
                                                  uStack_454 = 0;
                                                  uStack_460 = 0;
                                                  uStack_45c = 0;
                                                  uStack_448 = 0;
                                                  uStack_444 = 0;
                                                  uStack_450 = 0;
                                                  uStack_44c = 0;
                                                  if (0 < iStack_46c) {
                                                    lVar14 = 0;
                                                    do {
                                                      puStack_430[lVar14] = 0;
                                                      lVar14 = lVar14 + 1;
                                                    } while (lVar14 < iStack_46c);
                                                  }
                                                  uStack_408 = puVar22;
                                                  if (puStack_428 != &uStack_420 &&
                                                      puStack_428 != (undefined8 *)0x0) {
                                                    _free(puStack_428[-1]);
                                                  }
                                                  func_0x00010918eb6c(&uStack_610);
                                                  if (lStack_b0 != 0) {
                                                    piVar15 = (int *)(lStack_b0 + 0x14);
                                                    do {
                                                      iVar13 = *piVar15;
                                                      cVar3 = '\x01';
                                                      bVar8 = (bool)ExclusiveMonitorPass
                                                                              (piVar15,0x10);
                                                      if (bVar8) {
                                                        *piVar15 = iVar13 + -1;
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    if (iVar13 + -1 == 0) {
                                                      func_0x000109a848d4(&uStack_e8);
                                                    }
                                                  }
                                                  lStack_b0 = 0;
                                                  uStack_d0 = 0;
                                                  uStack_cc = 0;
                                                  uStack_d8 = 0;
                                                  uStack_d4 = 0;
                                                  uStack_c0 = 0;
                                                  uStack_bc = 0;
                                                  uStack_c8 = 0;
                                                  uStack_c4 = 0;
                                                  if (0 < iStack_e4) {
                                                    lVar14 = 0;
                                                    do {
                                                      puStack_a8[lVar14] = 0;
                                                      lVar14 = lVar14 + 1;
                                                    } while (lVar14 < iStack_e4);
                                                  }
                                                  if (puStack_a0 != &uStack_98 &&
                                                      puStack_a0 != (undefined8 *)0x0) {
                                                    _free(puStack_a0[-1]);
                                                  }
                                                  func_0x00010918eb6c(&iStack_410);
                                                  param_1 = puStack_ba0;
                                                  puVar22 = puStack_bf8;
                                                  uVar6 = uVar20;
                                                  if (dVar28 <= dVar30) {
                                                    dVar28 = dVar30;
                                                    uVar6 = uVar26;
                                                  }
                                                  uVar26 = uVar6;
                                                  uVar20 = uVar20 + 1;
                                                  dVar30 = dVar28;
                                                } while (uVar20 != (uint)piVar9);
                                                if (uVar26 != 0xffffffff) {
                                                  func_0x000109a7e944(&iStack_410,
                                                                      (double)(int)uVar26,
                                                                      &uStack_2b0);
                                                  uStack_e8 = 0x42ff0000;
                                                  puStack_a8 = (uint *)&uStack_e0;
                                                  uStack_e0._4_4_ = 0;
                                                  uStack_d8 = 0;
                                                  iStack_e4 = 0;
                                                  uStack_e0._0_4_ = 0;
                                                  lStack_b0 = 0;
                                                  uStack_b4 = 0;
                                                  uStack_bc = 0;
                                                  uStack_b8 = 0;
                                                  uStack_c4 = 0;
                                                  uStack_c0 = 0;
                                                  uStack_cc = 0;
                                                  uStack_c8 = 0;
                                                  uStack_d4 = 0;
                                                  uStack_d0 = 0;
                                                  uStack_98 = 0;
                                                  uStack_90 = 0;
                                                  puStack_a0 = &uStack_98;
                                                  (**(code **)(*(long *)CONCAT44(iStack_40c,
                                                                                 iStack_410) + 0x18)
                                                  )((long *)CONCAT44(iStack_40c,iStack_410),
                                                    &iStack_410,&uStack_e8,0xffffffff);
                                                  func_0x000109a7e944(&uStack_610,0,&uStack_2b0);
                                                  uStack_470 = 0x42ff0000;
                                                  puStack_430 = &uStack_468;
                                                  uStack_464 = 0;
                                                  uStack_460 = 0;
                                                  iStack_46c = 0;
                                                  uStack_468 = 0;
                                                  lStack_438 = 0;
                                                  uStack_43c = 0;
                                                  uStack_444 = 0;
                                                  uStack_440 = 0;
                                                  uStack_44c = 0;
                                                  uStack_448 = 0;
                                                  uStack_454 = 0;
                                                  uStack_450 = 0;
                                                  uStack_45c = 0;
                                                  uStack_458 = 0;
                                                  uStack_418 = 0;
                                                  uStack_420 = 0;
                                                  puStack_428 = &uStack_420;
                                                  (**(code **)(*(long *)CONCAT44(uStack_610._4_4_,
                                                                                 (int)uStack_610) +
                                                              0x18))((long *)CONCAT44(uStack_610.
                                                                                      _4_4_,(int)
                                                  uStack_610),&uStack_610,&uStack_470,0xffffffff);
                                                  func_0x000109a7ef1c(&uStack_250,&uStack_e8,
                                                                      &uStack_470);
                                                  (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,
                                                                                 (int)uStack_250) +
                                                              0x18))((long *)CONCAT44(uStack_250.
                                                                                      _4_4_,(int)
                                                  uStack_250),&uStack_250,&uStack_b30,0xffffffff);
                                                  func_0x00010918eb6c(&uStack_250);
                                                  puVar24 = uStack_408;
                                                  if (lStack_438 != 0) {
                                                    piVar9 = (int *)(lStack_438 + 0x14);
                                                    do {
                                                      iVar13 = *piVar9;
                                                      cVar3 = '\x01';
                                                      bVar8 = (bool)ExclusiveMonitorPass
                                                                              (piVar9,0x10);
                                                      if (bVar8) {
                                                        *piVar9 = iVar13 + -1;
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    if (iVar13 + -1 == 0) {
                                                      func_0x000109a848d4(&uStack_470);
                                                      puVar24 = uStack_408;
                                                    }
                                                  }
                                                  lStack_438 = 0;
                                                  uStack_458 = 0;
                                                  uStack_454 = 0;
                                                  uStack_460 = 0;
                                                  uStack_45c = 0;
                                                  uStack_448 = 0;
                                                  uStack_444 = 0;
                                                  uStack_450 = 0;
                                                  uStack_44c = 0;
                                                  if (0 < iStack_46c) {
                                                    lVar14 = 0;
                                                    do {
                                                      puStack_430[lVar14] = 0;
                                                      lVar14 = lVar14 + 1;
                                                    } while (lVar14 < iStack_46c);
                                                  }
                                                  uStack_408 = puVar24;
                                                  if (puStack_428 != &uStack_420 &&
                                                      puStack_428 != (undefined8 *)0x0) {
                                                    _free(puStack_428[-1]);
                                                  }
                                                  func_0x00010918eb6c(&uStack_610);
                                                  if (lStack_b0 != 0) {
                                                    piVar9 = (int *)(lStack_b0 + 0x14);
                                                    do {
                                                      iVar13 = *piVar9;
                                                      cVar3 = '\x01';
                                                      bVar8 = (bool)ExclusiveMonitorPass
                                                                              (piVar9,0x10);
                                                      if (bVar8) {
                                                        *piVar9 = iVar13 + -1;
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    if (iVar13 + -1 == 0) {
                                                      func_0x000109a848d4(&uStack_e8);
                                                    }
                                                  }
                                                  lStack_b0 = 0;
                                                  uStack_d0 = 0;
                                                  uStack_cc = 0;
                                                  uStack_d8 = 0;
                                                  uStack_d4 = 0;
                                                  uStack_c0 = 0;
                                                  uStack_bc = 0;
                                                  uStack_c8 = 0;
                                                  uStack_c4 = 0;
                                                  if (0 < iStack_e4) {
                                                    lVar14 = 0;
                                                    do {
                                                      puStack_a8[lVar14] = 0;
                                                      lVar14 = lVar14 + 1;
                                                    } while (lVar14 < iStack_e4);
                                                  }
                                                  if (puStack_a0 != &uStack_98 &&
                                                      puStack_a0 != (undefined8 *)0x0) {
                                                    _free(puStack_a0[-1]);
                                                  }
                                                  func_0x00010918eb6c(&iStack_410);
                                                }
                                              }
                                              func_0x000109a7f188(&iStack_410,&uStack_b30);
                                              uStack_610._0_4_ = 0x42ff0000;
                                              puStack_5d0 = &uStack_608;
                                              uStack_608._4_4_ = 0;
                                              uStack_600 = 0;
                                              uStack_610._4_4_ = 0;
                                              uStack_608._0_4_ = 0;
                                              lStack_5d8 = 0;
                                              uStack_5dc = 0;
                                              uStack_5e4 = 0;
                                              uStack_5e0 = 0;
                                              uStack_5ec = 0;
                                              uStack_5e8 = 0;
                                              uStack_5f4 = 0;
                                              uStack_5f0 = 0;
                                              iStack_5fc = 0;
                                              uStack_5f8 = 0;
                                              uStack_5b8 = 0;
                                              uStack_5c0 = 0;
                                              puStack_5c8 = &uStack_5c0;
                                              (**(code **)(*(long *)CONCAT44(iStack_40c,iStack_410)
                                                          + 0x18))
                                                        ((long *)CONCAT44(iStack_40c,iStack_410),
                                                         &iStack_410,&uStack_610,0xffffffff);
                                              puVar25 = puStack_bc8;
                                              lVar14 = lStack_bd0;
                                              puVar11 = puStack_be0;
                                              func_0x000109a7ef1c(&uStack_250,param_1,&uStack_610);
                                              iStack_b90 = 0x42ff0000;
                                              uStack_b50 = (ulong)&iStack_b90 | 8;
                                              uStack_b84 = 0;
                                              uStack_b80 = 0;
                                              iStack_b8c = 0;
                                              uStack_b88 = 0;
                                              uStack_b58 = 0;
                                              uStack_b5c = 0;
                                              uStack_b64 = 0;
                                              uStack_b60 = 0;
                                              uStack_b6c = 0;
                                              uStack_b68 = 0;
                                              uStack_b74 = 0;
                                              uStack_b70 = 0;
                                              uStack_b7c = 0;
                                              uStack_b78 = 0;
                                              uStack_b40 = 0;
                                              uStack_b38 = 0;
                                              puStack_b48 = &uStack_b40;
                                              (**(code **)(*(long *)CONCAT44(uStack_250._4_4_,
                                                                             (int)uStack_250) + 0x18
                                                          ))((long *)CONCAT44(uStack_250._4_4_,
                                                                              (int)uStack_250),
                                                             &uStack_250,&iStack_b90,0xffffffff);
                                              func_0x00010918eb6c(&uStack_250);
                                              puVar24 = uStack_408;
                                              if (lStack_5d8 != 0) {
                                                piVar9 = (int *)(lStack_5d8 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  func_0x000109a848d4(&uStack_610);
                                                  puVar24 = uStack_408;
                                                }
                                              }
                                              lStack_5d8 = 0;
                                              uStack_5f8 = 0;
                                              uStack_5f4 = 0;
                                              uStack_600 = 0;
                                              iStack_5fc = 0;
                                              uStack_5e8 = 0;
                                              uStack_5e4 = 0;
                                              uStack_5f0 = 0;
                                              uStack_5ec = 0;
                                              if (0 < uStack_610._4_4_) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)((long)puStack_5d0 + lVar16 * 4) =
                                                       0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < uStack_610._4_4_);
                                              }
                                              uStack_408 = puVar24;
                                              if (puStack_5c8 != &uStack_5c0 &&
                                                  puStack_5c8 != (undefined8 *)0x0) {
                                                _free(puStack_5c8[-1]);
                                              }
                                              func_0x00010918eb6c(&iStack_410);
                                              puVar5 = puStack_ba8;
                                              if (lStack_278 != 0) {
                                                piVar9 = (int *)(lStack_278 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  func_0x000109a848d4(&uStack_2b0);
                                                }
                                              }
                                              lStack_278 = 0;
                                              uStack_298 = 0;
                                              uStack_294 = 0;
                                              uStack_2a0 = 0;
                                              uStack_29c = 0;
                                              uStack_288 = 0;
                                              uStack_284 = 0;
                                              uStack_290 = 0;
                                              uStack_28c = 0;
                                              if (0 < iStack_2ac) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)((long)puStack_270 + lVar16 * 4) =
                                                       0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_2ac);
                                              }
                                              if (puStack_268 != puStack_be8 &&
                                                  puStack_268 != (undefined8 *)0x0) {
                                                _free(puStack_268[-1]);
                                              }
                                              if (lStack_af8 != 0) {
                                                piVar9 = (int *)(lStack_af8 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  func_0x000109a848d4(&uStack_b30);
                                                }
                                              }
                                              lStack_af8 = 0;
                                              uStack_b18 = 0;
                                              uStack_b14 = 0;
                                              uStack_b20 = 0;
                                              uStack_b1c = 0;
                                              uStack_b08 = 0;
                                              uStack_b04 = 0;
                                              uStack_b10 = 0;
                                              uStack_b0c = 0;
                                              if (0 < uStack_b30._4_4_) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)((long)puStack_af0 + lVar16 * 4) =
                                                       0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < uStack_b30._4_4_);
                                              }
                                              if (puStack_ae8 != puStack_bf0 &&
                                                  puStack_ae8 != (undefined8 *)0x0) {
                                                _free(puStack_ae8[-1]);
                                              }
                                              if (*(long *)(param_1 + 0xe) != 0) {
                                                piVar9 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  func_0x000109a848d4(param_1);
                                                }
                                              }
                                              if (0 < (int)param_1[1]) {
                                                lVar16 = 0;
                                                lVar17 = *(long *)(param_1 + 0x10);
                                                do {
                                                  *(undefined4 *)(lVar17 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < (int)param_1[1]);
                                              }
                                              *(ulong *)(param_1 + 2) =
                                                   CONCAT44(uStack_b84,uStack_b88);
                                              *(ulong *)param_1 = CONCAT44(iStack_b8c,iStack_b90);
                                              *(ulong *)(param_1 + 6) =
                                                   CONCAT44(uStack_b74,uStack_b78);
                                              *(ulong *)(param_1 + 4) =
                                                   CONCAT44(uStack_b7c,uStack_b80);
                                              *(ulong *)(param_1 + 10) =
                                                   CONCAT44(uStack_b64,uStack_b68);
                                              *(ulong *)(param_1 + 8) =
                                                   CONCAT44(uStack_b6c,uStack_b70);
                                              *(undefined8 *)(param_1 + 0xe) = uStack_b58;
                                              *(ulong *)(param_1 + 0xc) =
                                                   CONCAT44(uStack_b5c,uStack_b60);
                                              puVar18 = *(uint **)(param_1 + 0x12);
                                              if (puVar18 != puVar11) {
                                                if (puVar18 != (uint *)0x0) {
                                                  _free(*(undefined8 *)(puVar18 + -2));
                                                }
                                                *(uint **)(param_1 + 0x10) = puVar5;
                                                *(uint **)(param_1 + 0x12) = puVar11;
                                                puVar18 = puVar11;
                                              }
                                              if (iStack_b8c < 3) {
                                                puVar24 = (undefined8 *)((ulong)&iStack_b90 | 4);
                                                *(undefined8 *)puVar18 = *puStack_b48;
                                                *(undefined8 *)(puVar18 + 2) = puStack_b48[1];
                                                iStack_b90 = 0x42ff0000;
                                                puVar24[1] = 0;
                                                *puVar24 = 0;
                                                puVar24[3] = 0;
                                                puVar24[2] = 0;
                                                puVar24[5] = 0;
                                                puVar24[4] = 0;
                                                *(undefined8 *)((long)puVar24 + 0x34) = 0;
                                                *(undefined8 *)((long)puVar24 + 0x2c) = 0;
                                                if (puStack_b48 != &uStack_b40) {
                                                  _free(puStack_b48[-1]);
                                                }
                                              }
                                              else {
                                                *(ulong *)(param_1 + 0x10) = uStack_b50;
                                                *(undefined8 **)(param_1 + 0x12) = puStack_b48;
                                              }
                                              puVar18 = param_1;
                                              FUN_109ff6b38(&uStack_250,0x3ff0000000000000);
                                              if (*(long *)(param_1 + 0xe) != 0) {
                                                piVar9 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = param_1;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              if (0 < (int)param_1[1]) {
                                                lVar16 = 0;
                                                lVar17 = *(long *)(param_1 + 0x10);
                                                do {
                                                  *(undefined4 *)(lVar17 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < (int)param_1[1]);
                                              }
                                              *(ulong *)(param_1 + 2) =
                                                   CONCAT44(uStack_248._4_4_,(int)uStack_248);
                                              *(ulong *)param_1 =
                                                   CONCAT44(uStack_250._4_4_,(int)uStack_250);
                                              *(ulong *)(param_1 + 6) =
                                                   CONCAT44(uStack_234,uStack_238);
                                              *(ulong *)(param_1 + 4) =
                                                   CONCAT44(uStack_23c,uStack_240);
                                              *(ulong *)(param_1 + 10) =
                                                   CONCAT44(uStack_224,uStack_228);
                                              *(ulong *)(param_1 + 8) =
                                                   CONCAT44(uStack_22c,uStack_230);
                                              *(long *)(param_1 + 0xe) = lStack_218;
                                              *(ulong *)(param_1 + 0xc) =
                                                   CONCAT44(uStack_21c,uStack_220);
                                              puVar19 = *(uint **)(param_1 + 0x12);
                                              if (puVar19 != puVar11) {
                                                if (puVar19 != (uint *)0x0) {
                                                  puVar18 = *(uint **)(puVar19 + -2);
                                                  _free();
                                                }
                                                *(uint **)(param_1 + 0x10) = puVar5;
                                                *(uint **)(param_1 + 0x12) = puVar11;
                                                puVar19 = puVar11;
                                              }
                                              if (uStack_250._4_4_ < 3) {
                                                puVar24 = (undefined8 *)((ulong)&uStack_250 | 4);
                                                *(undefined8 *)puVar19 = *puStack_208;
                                                *(undefined8 *)(puVar19 + 2) = puStack_208[1];
                                                uStack_250._0_4_ = 0x42ff0000;
                                                puVar24[1] = 0;
                                                *puVar24 = 0;
                                                puVar24[3] = 0;
                                                puVar24[2] = 0;
                                                puVar24[5] = 0;
                                                puVar24[4] = 0;
                                                *(undefined8 *)((long)puVar24 + 0x34) = 0;
                                                *(undefined8 *)((long)puVar24 + 0x2c) = 0;
                                                if (puStack_208 != &uStack_200) {
                                                  puVar18 = (uint *)puStack_208[-1];
                                                  _free();
                                                }
                                              }
                                              else {
                                                *(undefined8 **)(param_1 + 0x10) = puStack_210;
                                                *(undefined8 **)(param_1 + 0x12) = puStack_208;
                                              }
                                              if (lStack_998 != 0) {
                                                piVar9 = (int *)(lStack_998 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_9d0;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_998 = 0;
                                              uStack_9b8 = 0;
                                              uStack_9b4 = 0;
                                              uStack_9c0 = 0;
                                              uStack_9bc = 0;
                                              uStack_9a8 = 0;
                                              uStack_9a4 = 0;
                                              uStack_9b0 = 0;
                                              uStack_9ac = 0;
                                              if (0 < iStack_9cc) {
                                                lVar16 = 0;
                                                do {
                                                  puStack_990[lVar16] = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_9cc);
                                              }
                                              if (puStack_988 != puVar22 &&
                                                  puStack_988 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_988[-1];
                                                _free();
                                              }
                                              if (lStack_938 != 0) {
                                                piVar9 = (int *)(lStack_938 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_970;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_938 = 0;
                                              uStack_958 = 0;
                                              uStack_954 = 0;
                                              uStack_960 = 0;
                                              uStack_95c = 0;
                                              uStack_948 = 0;
                                              uStack_944 = 0;
                                              uStack_950 = 0;
                                              uStack_94c = 0;
                                              if (0 < (int)uStack_96c) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_930 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < (int)uStack_96c);
                                              }
                                              if (puStack_928 != puStack_bd8 &&
                                                  puStack_928 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_928[-1];
                                                _free();
                                              }
                                              if (lStack_8d8 != 0) {
                                                piVar9 = (int *)(lStack_8d8 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_910;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_8d8 = 0;
                                              uStack_8f8 = 0;
                                              uStack_8f4 = 0;
                                              uStack_900 = 0;
                                              uStack_8fc = 0;
                                              uStack_8e8 = 0;
                                              uStack_8e4 = 0;
                                              uStack_8f0 = 0;
                                              uStack_8ec = 0;
                                              if (0 < iStack_90c) {
                                                lVar16 = 0;
                                                do {
                                                  puStack_8d0[lVar16] = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_90c);
                                              }
                                              if (puStack_8c8 != puStack_bc0 &&
                                                  puStack_8c8 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_8c8[-1];
                                                _free();
                                              }
                                              if (lStack_878 != 0) {
                                                piVar9 = (int *)(lStack_878 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_8b0;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_878 = 0;
                                              uStack_898 = 0;
                                              uStack_894 = 0;
                                              uStack_8a0 = 0;
                                              uStack_89c = 0;
                                              uStack_888 = 0;
                                              uStack_884 = 0;
                                              uStack_890 = 0;
                                              uStack_88c = 0;
                                              if (0 < iStack_8ac) {
                                                lVar16 = 0;
                                                do {
                                                  puStack_870[lVar16] = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_8ac);
                                              }
                                              if (puStack_868 != puStack_bb8 &&
                                                  puStack_868 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_868[-1];
                                                _free();
                                              }
                                              if (lStack_818 != 0) {
                                                piVar9 = (int *)(lStack_818 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_850;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_818 = 0;
                                              uStack_838 = 0;
                                              uStack_834 = 0;
                                              uStack_840 = 0;
                                              uStack_83c = 0;
                                              uStack_828 = 0;
                                              uStack_824 = 0;
                                              uStack_830 = 0;
                                              uStack_82c = 0;
                                              if (0 < (int)uStack_84c) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_810 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < (int)uStack_84c);
                                              }
                                              if (puStack_808 != puStack_bb0 &&
                                                  puStack_808 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_808[-1];
                                                _free();
                                              }
                                              if (lStack_7b8 != 0) {
                                                piVar9 = (int *)(lStack_7b8 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_7f0;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_7b8 = 0;
                                              uStack_7d8 = 0;
                                              uStack_7d4 = 0;
                                              uStack_7e0 = 0;
                                              uStack_7dc = 0;
                                              uStack_7c8 = 0;
                                              uStack_7c4 = 0;
                                              uStack_7d0 = 0;
                                              uStack_7cc = 0;
                                              if (0 < (int)uStack_7ec) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_7b0 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < (int)uStack_7ec);
                                              }
                                              if (puStack_7a8 != puVar25 &&
                                                  puStack_7a8 != (undefined8 *)0x0) {
                                                puVar18 = (uint *)puStack_7a8[-1];
                                                _free();
                                              }
                                              if (lStack_758 != 0) {
                                                piVar9 = (int *)(lStack_758 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_790;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_758 = 0;
                                              uStack_778 = 0;
                                              uStack_780 = 0;
                                              uStack_768 = 0;
                                              uStack_770 = 0;
                                              if (0 < iStack_78c) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_750 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_78c);
                                              }
                                              if (puStack_748 != auStack_740 &&
                                                  puStack_748 != (undefined1 *)0x0) {
                                                puVar18 = *(uint **)(puStack_748 + -8);
                                                _free();
                                              }
                                              if (lStack_6f8 != 0) {
                                                piVar9 = (int *)(lStack_6f8 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_730;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_6f8 = 0;
                                              uStack_718 = 0;
                                              uStack_720 = 0;
                                              uStack_708 = 0;
                                              uStack_710 = 0;
                                              if (0 < iStack_72c) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_6f0 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_72c);
                                              }
                                              if (puStack_6e8 != auStack_6e0 &&
                                                  puStack_6e8 != (undefined1 *)0x0) {
                                                puVar18 = *(uint **)(puStack_6e8 + -8);
                                                _free();
                                              }
                                              if (lStack_698 != 0) {
                                                piVar9 = (int *)(lStack_698 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_6d0;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_698 = 0;
                                              uStack_6b8 = 0;
                                              uStack_6c0 = 0;
                                              uStack_6a8 = 0;
                                              uStack_6b0 = 0;
                                              if (0 < iStack_6cc) {
                                                lVar16 = 0;
                                                do {
                                                  *(undefined4 *)(lStack_690 + lVar16 * 4) = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_6cc);
                                              }
                                              if (puStack_688 != auStack_680 &&
                                                  puStack_688 != (undefined1 *)0x0) {
                                                puVar18 = *(uint **)(puStack_688 + -8);
                                                _free();
                                              }
                                              if (lStack_638 != 0) {
                                                piVar9 = (int *)(lStack_638 + 0x14);
                                                do {
                                                  iVar13 = *piVar9;
                                                  cVar3 = '\x01';
                                                  bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                                                  if (bVar8) {
                                                    *piVar9 = iVar13 + -1;
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                                if (iVar13 + -1 == 0) {
                                                  puVar18 = &uStack_670;
                                                  func_0x000109a848d4();
                                                }
                                              }
                                              lStack_638 = 0;
                                              dVar30 = 0.0;
                                              uStack_658 = 0;
                                              uStack_660 = 0;
                                              uStack_648 = 0;
                                              uStack_650 = 0;
                                              if (0 < iStack_66c) {
                                                lVar16 = 0;
                                                do {
                                                  piStack_630[lVar16] = 0;
                                                  lVar16 = lVar16 + 1;
                                                } while (lVar16 < iStack_66c);
                                              }
                                              if (puStack_628 != auStack_620 &&
                                                  puStack_628 != (undefined1 *)0x0) {
                                                puVar18 = *(uint **)(puStack_628 + -8);
                                                _free();
                                              }
                                              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                                                  lStack_88) {
                                                return;
                                              }
                                              ___stack_chk_fail();
                                              if ((int)lVar14 != 0) {
                                                func_0x000104bd46a0();
                                                func_0x00010567aa40(&uStack_2b0);
                                                func_0x00010567aa40(&uStack_b30);
                                                func_0x00010567aa40(&uStack_9d0);
                                                func_0x00010567aa40(puStack_ba0);
                                                func_0x00010567aa40(&uStack_970);
                                                func_0x00010567aa40(&uStack_910);
                                                func_0x00010567aa40(&uStack_8b0);
                                                func_0x00010567aa40(&uStack_850);
                                                func_0x00010567aa40(&uStack_7f0);
                                                func_0x00010567aa40(&uStack_790);
                                                func_0x00010567aa40(&uStack_730);
                                                func_0x00010567aa40(&uStack_6d0);
                                                func_0x00010567aa40(&uStack_670);
                                              }
                                              puVar11 = puVar18;
                                              __Unwind_Resume();
                                              puStack_c30 = puVar25;
                                              puStack_c18 = puVar5;
                                              pcStack_c08 = FUN_109ff6b38;
                                              uVar20 = *puVar11 >> 3 & 0x1ff;
                                              dStack_c38 = dVar28;
                                              piStack_c28 = &iStack_b90;
                                              puStack_c20 = puVar18;
                                              puStack_c10 = &stack0xfffffffffffffff0;
                                              __ZNSt3__19to_stringEi(&uStack_c88,uVar20 + 1);
                                              plVar12 = &uStack_c88;
                                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                                        (plVar12,0,&UNK_10f630996,0x1a);
                                              puStack_c68 = (uint *)plVar12[1];
                                              pppuStack_c70 = (undefined8 ***)*plVar12;
                                              uStack_c60 = plVar12[2];
                                              plVar12[1] = 0;
                                              plVar12[2] = 0;
                                              *plVar12 = 0;
                                              uStack_c48 = (long)uStack_c60._7_1_;
                                              if (uStack_c48 < 0) {
                                                pppuStack_c50 = pppuStack_c70;
                                                uStack_c48 = (long)puStack_c68;
                                                if (uVar20 == 0) {
                                                  __ZdlPv();
                                                  goto LAB_109ff6bcc;
                                                }
                                              }
                                              else {
                                                pppuStack_c50 = &pppuStack_c70;
                                                if (uVar20 == 0) {
LAB_109ff6bcc:
                                                  if (uStack_c78._7_1_ < '\0') {
                                                    __ZdlPv(CONCAT44(uStack_c88._4_4_,
                                                                     (undefined4)uStack_c88));
                                                  }
                                                  uStack_c60 = 0;
                                                  pppuStack_c70._0_4_ = 0x81010005;
                                                  puStack_c68 = (uint *)lVar14;
                                                  func_0x000109b42928(&pppuStack_c50,&pppuStack_c70)
                                                  ;
                                                  iVar13 = (int)(dVar30 * (double)(uStack_c48._4_4_
                                                                                  + (int)uStack_c48)
                                                                          * 0.01);
                                                  if (iVar13 < 4) {
                                                    iVar13 = 3;
                                                  }
                                                  *extraout_x8 = 0x42ff0000;
                                                  *(undefined8 *)(extraout_x8 + 3) = 0;
                                                  *(undefined8 *)(extraout_x8 + 1) = 0;
                                                  *(undefined8 *)(extraout_x8 + 7) = 0;
                                                  *(undefined8 *)(extraout_x8 + 5) = 0;
                                                  *(undefined8 *)(extraout_x8 + 0xb) = 0;
                                                  *(undefined8 *)(extraout_x8 + 9) = 0;
                                                  *(undefined8 *)(extraout_x8 + 0xe) = 0;
                                                  *(undefined8 *)(extraout_x8 + 0xc) = 0;
                                                  *(undefined8 *)(extraout_x8 + 0x14) = 0;
                                                  *(undefined4 **)(extraout_x8 + 0x10) =
                                                       extraout_x8 + 2;
                                                  *(undefined4 **)(extraout_x8 + 0x12) =
                                                       extraout_x8 + 0x14;
                                                  *(undefined8 *)(extraout_x8 + 0x16) = 0;
                                                  uStack_c60 = 0;
                                                  pppuStack_c70 =
                                                       (undefined8 ***)
                                                       CONCAT44(pppuStack_c70._4_4_,0x1010000);
                                                  uStack_c88._0_4_ = 0x2010000;
                                                  uStack_c78 = 0;
                                                  puStack_c68 = puVar11;
                                                  func_0x000109b451b4(&pppuStack_c70,&uStack_c88,
                                                                      iVar13 << 1 | 1);
                                                  return;
                                                }
                                              }
                                              FUN_10a0edfc4(&pppuStack_c50);
                    /* WARNING: Does not return */
                                              pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff6ca4);
                                              (*pcVar7)();
                                            }
                                          }
                                          uStack_610 = plVar12;
                                          FUN_10a0edfc4(&uStack_610);
                                          goto LAB_109ff64e4;
                                        }
                                      }
                                      uStack_610 = plVar12;
                                      FUN_10a0edfc4(&uStack_610);
                                      goto LAB_109ff64e4;
                                    }
                                  }
                                  uStack_610 = plVar12;
                                  FUN_10a0edfc4(&uStack_610);
                                  goto LAB_109ff64e4;
                                }
                              }
                              uStack_b30 = puVar22;
                              FUN_10a0edfc4(&uStack_b30);
                              goto LAB_109ff64e4;
                            }
                          }
                          uStack_610 = plVar12;
                          FUN_10a0edfc4(&uStack_610);
                          goto LAB_109ff64e4;
                        }
                      }
                      uStack_610 = plVar12;
                      FUN_10a0edfc4(&uStack_610);
                      goto LAB_109ff64e4;
                    }
                  }
                  uStack_610 = plVar12;
                  FUN_10a0edfc4(&uStack_610);
                  goto LAB_109ff64e4;
                }
              }
              uStack_610 = plVar12;
              FUN_10a0edfc4(&uStack_610);
              goto LAB_109ff64e4;
            }
          }
          uStack_610 = plVar12;
          FUN_10a0edfc4(&uStack_610);
          goto LAB_109ff64e4;
        }
      }
      uStack_610 = plVar12;
      FUN_10a0edfc4(&uStack_610);
      goto LAB_109ff64e4;
    }
  }
  uStack_610 = plVar12;
  FUN_10a0edfc4(&uStack_610);
LAB_109ff64e4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff64e8);
  (*pcVar7)();
}



/* Entry: 109ff6b38; end: 109ff6cef;  */

void FUN_109ff6b38(undefined4 *param_1,double param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_3 >> 3 & 0x1ff;
  __ZNSt3__19to_stringEi(&uStack_88,uVar1 + 1);
  plVar3 = (long *)&uStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar3,0,&UNK_10f630996,0x1a);
  puStack_68 = (uint *)plVar3[1];
  ppuStack_70 = (undefined8 **)*plVar3;
  uStack_60 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  uStack_48 = (long)uStack_60._7_1_;
  if (uStack_48 < 0) {
    ppuStack_50 = ppuStack_70;
    uStack_48 = (long)puStack_68;
    if (uVar1 == 0) {
      __ZdlPv();
      goto LAB_109ff6bcc;
    }
  }
  else {
    ppuStack_50 = &ppuStack_70;
    if (uVar1 == 0) {
LAB_109ff6bcc:
      if (uStack_78._7_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_84,uStack_88));
      }
      uStack_60 = 0;
      ppuStack_70._0_4_ = 0x81010005;
      puStack_68 = (uint *)param_4;
      func_0x000109b42928(&ppuStack_50,&ppuStack_70);
      iVar4 = (int)(param_2 * (double)(uStack_48._4_4_ + (int)uStack_48) * 0.01);
      if (iVar4 < 4) {
        iVar4 = 3;
      }
      *param_1 = 0x42ff0000;
      *(undefined8 *)(param_1 + 3) = 0;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 7) = 0;
      *(undefined8 *)(param_1 + 5) = 0;
      *(undefined8 *)(param_1 + 0xb) = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
      *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
      *(undefined8 *)(param_1 + 0x16) = 0;
      uStack_60 = 0;
      ppuStack_70 = (undefined8 **)CONCAT44(ppuStack_70._4_4_,0x1010000);
      uStack_88 = 0x2010000;
      uStack_78 = 0;
      puStack_80 = param_1;
      puStack_68 = param_3;
      func_0x000109b451b4(&ppuStack_70,&uStack_88,iVar4 << 1 | 1);
      return;
    }
  }
  FUN_10a0edfc4(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109ff6ca4);
  (*pcVar2)();
}



/* Entry: 109ff6cf0; end: 109ff709f;  */

undefined8 *
FUN_109ff6cf0(undefined8 *param_1,uint *param_2,undefined8 *param_3,long param_4,undefined8 *param_5
             ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_98 [2];
  char cStack_81;
  undefined8 ***pppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
  uVar11 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 4);
  param_1[3] = *(undefined8 *)(param_2 + 6);
  param_1[2] = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 8);
  param_1[5] = *(undefined8 *)(param_2 + 10);
  param_1[4] = uVar11;
  lVar6 = *(long *)(param_2 + 0xe);
  uVar11 = *(undefined8 *)(param_2 + 0xc);
  param_1[7] = *(undefined8 *)(param_2 + 0xe);
  param_1[6] = uVar11;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar6 != 0) {
    piVar10 = (int *)(lVar6 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((int)param_2[1] < 3) {
    puVar7 = *(undefined8 **)(param_2 + 0x12);
    puVar9 = (undefined8 *)param_1[9];
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar13 = param_3[2];
  param_1[0xf] = param_3[3];
  param_1[0xe] = uVar13;
  uVar13 = param_3[4];
  param_1[0x11] = param_3[5];
  param_1[0x10] = uVar13;
  lVar6 = param_3[7];
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  param_1[0x16] = 0;
  param_1[0x13] = uVar14;
  param_1[0x12] = uVar13;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar12;
  param_1[0xc] = uVar11;
  if (lVar6 != 0) {
    piVar10 = (int *)(lVar6 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_3 + 4) < 3) {
    puVar7 = (undefined8 *)param_3[9];
    puVar9 = (undefined8 *)param_1[0x15];
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc,param_3);
  }
  FUN_109ffeb50(param_1 + 0x18,param_4);
  uVar11 = *(undefined8 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0x42ff0005;
  param_1[0x1b] = uVar11;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[0x26] = 0;
  param_1[0x24] = param_1 + 0x1d;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x27] = 0;
  param_1[0x28] = *param_5;
  (**(code **)(param_5[1] + 0x18))(param_1 + 0x29,param_5 + 1);
  *(undefined4 *)(param_1 + 0x30) = param_6;
  *(undefined4 *)((long)param_1 + 0x184) = param_7;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = param_1 + 0x32;
  if (*(long *)(param_2 + 4) != 0) {
    uVar8 = (ulong)param_2[1];
    if ((int)param_2[1] < 3) {
      lVar6 = (long)(int)param_2[3] * (long)(int)param_2[2];
    }
    else {
      lVar6 = 1;
      piVar10 = *(int **)(param_2 + 0x10);
      do {
        lVar6 = lVar6 * *piVar10;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar8 != 0);
    }
    pppuStack_80 = (undefined8 ***)&UNK_10f55aafc;
    lStack_78 = 0xe;
    if (lVar6 != 0) {
      uVar1 = *param_2 & 0xfff;
      __ZNSt3__19to_stringEi(alStack_98,uVar1);
      plVar5 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar5,0,&UNK_10f6309b1,0x12);
      lStack_78 = plVar5[1];
      pppuStack_80 = (undefined8 ***)*plVar5;
      uStack_70 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      lStack_58 = (long)uStack_70._7_1_;
      if (lStack_58 < 0) {
        pppuStack_60 = pppuStack_80;
        lStack_58 = lStack_78;
        if (uVar1 == 0x10) {
          __ZdlPv();
          goto LAB_109ff6f74;
        }
      }
      else {
        pppuStack_60 = &pppuStack_80;
        if (uVar1 == 0x10) {
LAB_109ff6f74:
          if (cStack_81 < '\0') {
            __ZdlPv(alStack_98[0]);
          }
          pppuStack_80 = (undefined8 ***)&UNK_10f6309c4;
          lStack_78 = 0x22;
          if (((*(int **)(param_2 + 0x10))[1] == *(int *)(param_4 + 0x18)) &&
             (**(int **)(param_2 + 0x10) == *(int *)(param_4 + 0x1c))) {
            return param_1;
          }
          FUN_10a0edfc4(&pppuStack_80);
          goto LAB_109ff7000;
        }
      }
      FUN_10a0edfc4(&pppuStack_60);
      goto LAB_109ff7000;
    }
  }
  lStack_78 = 0xe;
  pppuStack_80 = (undefined8 ***)&UNK_10f55aafc;
  FUN_10a0edfc4(&pppuStack_80);
LAB_109ff7000:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109ff7004);
  (*pcVar4)();
}



/* Entry: 109ff70a0; end: 109ff8057;  */

void FUN_109ff70a0(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  undefined8 uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  undefined8 *puStack_398;
  undefined8 auStack_390 [2];
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  uint uStack_314;
  undefined8 uStack_310;
  undefined4 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [16];
  int iStack_2b0;
  int iStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined4 auStack_208 [2];
  ulong *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 auStack_130 [21];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_314 = (uint)param_3;
  puVar12 = (ulong *)param_2[0x32];
  if (puVar12 == (ulong *)0x0) {
LAB_109ff7120:
    uStack_380._0_4_ = 0x42ff0000;
    uStack_374 = 0;
    uStack_370 = 0;
    uStack_380._4_4_ = 0;
    uStack_380 = (undefined8 *)0x42ff0000;
    uStack_378 = 0;
    uVar16 = (ulong)&uStack_380 | 8;
    uStack_364 = 0;
    uStack_360 = 0;
    uStack_36c = 0;
    uStack_368 = 0;
    uStack_354 = 0;
    uStack_35c = 0;
    uStack_358 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_340 = uVar16;
    puStack_338 = &uStack_330;
    if (uStack_314 != 0) goto LAB_109ff7e84;
    uVar5 = *(undefined4 *)((long)param_2 + 0x184);
    iVar3 = *(int *)param_2[8];
    iVar4 = ((int *)param_2[8])[1];
    iVar17 = iVar4;
    if (iVar4 <= iVar3) {
      iVar17 = iVar3;
    }
    fVar23 = (float)(int)param_2[0x30] / (float)iVar17;
    if (1.0 <= fVar23) {
      FUN_109ff3824(&uStack_3e0,param_2,param_2 + 0x18,param_2 + 0xc,uVar5,param_2 + 0x28);
    }
    else {
      iVar18 = (int)(fVar23 * (float)iVar4);
      iVar17 = (int)(fVar23 * (float)iVar3);
      uStack_290 = 0x42ff0000;
      puStack_308 = &uStack_290;
      puStack_250 = &uStack_288;
      uStack_284 = 0;
      uStack_280 = 0;
      iStack_28c = 0;
      uStack_288 = 0;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_27c = 0;
      uStack_278 = 0;
      uStack_264 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_1e0 = 0;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x1010000);
      uStack_310 = (undefined4 **)CONCAT44(uStack_310._4_4_,0x2010000);
      uStack_300 = 0;
      iStack_2b0 = iVar18;
      iStack_2ac = iVar17;
      puStack_248 = &uStack_240;
      iStack_230 = iVar18;
      iStack_22c = iVar17;
      puStack_1e8 = param_2;
      func_0x000109b0f718(0,0,&uStack_1f0,&uStack_310,&iStack_2b0,3);
      uStack_310 = &puStack_308;
      puStack_308 = (undefined4 *)0x0;
      uStack_300 = 0;
      puVar12 = (ulong *)param_2[0x18];
      if (puVar12 != param_2 + 0x19) {
        puVar19 = (undefined8 *)((ulong)&uStack_1f0 | 4);
        do {
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x42ff0000);
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          puStack_200 = puVar12 + 5;
          uStack_1f8 = 0;
          auStack_208[0] = 0x1010000;
          iStack_220 = 0x2010000;
          uStack_210 = 0;
          iStack_228 = iVar18;
          iStack_224 = iVar17;
          puStack_218 = &uStack_1f0;
          ppuStack_1b0 = &puStack_1e8;
          puStack_1a8 = &uStack_1a0;
          func_0x000109b0f718(0,0,auStack_208,&iStack_220,&iStack_228,1);
          puVar14 = &uStack_310;
          FUN_10a0028e8(puVar14,(int)puVar12[4]);
          puVar11 = puVar14 + 5;
          uVar20 = uStack_1b8;
          if (puVar11 != &uStack_1f0) {
            if (uStack_1b8 != 0) {
              piVar1 = (int *)(uStack_1b8 + 0x14);
              do {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (puVar14[0xc] != 0) {
              piVar1 = (int *)(puVar14[0xc] + 0x14);
              do {
                iVar2 = *piVar1;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar2 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(puVar11);
              }
            }
            puVar14[0xc] = 0;
            puVar14[8] = 0;
            puVar14[7] = 0;
            puVar14[10] = 0;
            puVar14[9] = 0;
            if (*(int *)((long)puVar14 + 0x2c) < 1) {
              *(undefined4 *)puVar11 = (undefined4)uStack_1f0;
LAB_109ff738c:
              if (2 < uStack_1f0._4_4_) goto LAB_109ff73c0;
              *(int *)((long)puVar14 + 0x2c) = uStack_1f0._4_4_;
              puVar14[6] = puStack_1e8;
              puVar11 = (undefined8 *)puVar14[0xe];
              *puVar11 = *puStack_1a8;
              puVar11[1] = puStack_1a8[1];
            }
            else {
              lVar10 = 0;
              lVar13 = puVar14[0xd];
              do {
                *(undefined4 *)(lVar13 + lVar10 * 4) = 0;
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)((long)puVar14 + 0x2c));
              *(undefined4 *)puVar11 = (undefined4)uStack_1f0;
              if (*(int *)((long)puVar14 + 0x2c) < 3) goto LAB_109ff738c;
LAB_109ff73c0:
              func_0x000109a84868(puVar11,&uStack_1f0);
            }
            uVar22 = uStack_1c8;
            uVar21 = uStack_1d0;
            uVar20 = uStack_1e0;
            puVar14[8] = uStack_1d8;
            puVar14[7] = uVar20;
            puVar14[10] = uVar22;
            puVar14[9] = uVar21;
            uVar20 = uStack_1b8;
            uVar21 = uStack_1c0;
            puVar14[0xc] = uStack_1b8;
            puVar14[0xb] = uVar21;
          }
          if (uVar20 != 0) {
            piVar1 = (int *)(uVar20 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_1f0);
            }
          }
          uStack_1b8 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          if (0 < uStack_1f0._4_4_) {
            lVar10 = 0;
            do {
              *(undefined4 *)((long)ppuStack_1b0 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < uStack_1f0._4_4_);
          }
          if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
            _free(puStack_1a8[-1]);
          }
          puVar9 = (ulong *)puVar12[1];
          puVar15 = puVar12;
          if ((ulong *)puVar12[1] == (ulong *)0x0) {
            do {
              puVar12 = (ulong *)puVar15[2];
              bVar8 = (ulong *)*puVar12 != puVar15;
              puVar15 = puVar12;
            } while (bVar8);
          }
          else {
            do {
              puVar12 = puVar9;
              puVar9 = (ulong *)*puVar12;
            } while ((ulong *)*puVar12 != (ulong *)0x0);
          }
        } while (puVar12 != param_2 + 0x19);
      }
      FUN_109fee848(&iStack_2b0,&uStack_310,&iStack_230);
      FUN_109fff0a0(&uStack_310,puStack_308);
      func_0x000109a7d904(&uStack_1f0,(double)fVar23,param_2 + 0xc);
      FUN_10a003260(&uStack_310,&uStack_1f0);
      func_0x00010918eb6c(&uStack_1f0);
      FUN_109ff3824(&uStack_3e0,&uStack_290,&iStack_2b0,&uStack_310,uVar5,param_2 + 0x28);
      uStack_1e0 = 0;
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x1010000);
      auStack_208[0] = 0x2010000;
      uStack_1f8 = 0;
      iStack_220 = iVar4;
      iStack_21c = iVar3;
      puStack_200 = &uStack_3e0;
      puStack_1e8 = &uStack_3e0;
      func_0x000109b0f718(0,0,&uStack_1f0,auStack_208,&iStack_220,1);
      if (lStack_2d8 != 0) {
        piVar1 = (int *)(lStack_2d8 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_310);
        }
      }
      lStack_2d8 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      if (0 < uStack_310._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_2d0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_310._4_4_);
      }
      if (puStack_2c8 != auStack_2c0 && puStack_2c8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_2c8 + -8));
      }
      FUN_109fff0a0(&iStack_2b0,uStack_2a8);
      if (lStack_258 != 0) {
        piVar1 = (int *)(lStack_258 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_290);
        }
      }
      lStack_258 = 0;
      uStack_278 = 0;
      uStack_274 = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      uStack_268 = 0;
      uStack_264 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      if (0 < iStack_28c) {
        lVar10 = 0;
        do {
          puStack_250[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_28c);
      }
      if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
        _free(puStack_248[-1]);
      }
    }
    if (uStack_348 != 0) {
      piVar1 = (int *)(uStack_348 + 0x14);
      do {
        iVar17 = *piVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_380);
      }
    }
    if (0 < uStack_380._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_340 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_380._4_4_);
    }
    uStack_378 = (undefined4)uStack_3d8;
    uStack_374 = (undefined4)((ulong)uStack_3d8 >> 0x20);
    uStack_380._0_4_ = (undefined4)uStack_3e0;
    uStack_380._4_4_ = uStack_3e0._4_4_;
    uStack_368 = (undefined4)uStack_3c8;
    uStack_364 = (undefined4)((ulong)uStack_3c8 >> 0x20);
    uStack_370 = (undefined4)uStack_3d0;
    uStack_36c = (undefined4)((ulong)uStack_3d0 >> 0x20);
    uStack_358 = (undefined4)uStack_3b8;
    uStack_354 = (undefined4)((ulong)uStack_3b8 >> 0x20);
    uStack_360 = (undefined4)uStack_3c0;
    uStack_35c = (undefined4)((ulong)uStack_3c0 >> 0x20);
    uStack_348 = uStack_3a8;
    uStack_350 = (undefined4)uStack_3b0;
    uStack_34c = (undefined4)((ulong)uStack_3b0 >> 0x20);
    uVar20 = uStack_340;
    puVar19 = puStack_338;
    if ((puStack_338 != &uStack_330) &&
       (uVar20 = uVar16, puVar19 = &uStack_330, puStack_338 != (undefined8 *)0x0)) {
      _free(puStack_338[-1]);
    }
    puStack_338 = puVar19;
    uStack_340 = uVar20;
    if (uStack_3e0._4_4_ < 3) {
      puVar19 = (undefined8 *)((ulong)&uStack_3e0 | 4);
      *puStack_338 = *puStack_398;
      puStack_338[1] = puStack_398[1];
      uStack_3e0._0_4_ = 0x42ff0000;
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[3] = 0;
      puVar19[2] = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      *(undefined8 *)((long)puVar19 + 0x34) = 0;
      *(undefined8 *)((long)puVar19 + 0x2c) = 0;
      if (puStack_398 != auStack_390) {
        _free(puStack_398[-1]);
      }
    }
    else {
      uStack_340 = uStack_3a0;
      puStack_338 = puStack_398;
    }
    puVar12 = param_2 + 0x31;
    FUN_10a003968(puVar12,0,&uStack_314);
    puVar9 = puVar12 + 5;
    if (puVar9 == &uStack_380) {
      uStack_428 = puVar12[8];
      uStack_430 = puVar12[7];
      uStack_418 = puVar12[10];
      uStack_420 = puVar12[9];
      uStack_410 = puVar12[0xb];
      uStack_408 = puVar12[0xc];
    }
    else {
      if (uStack_348 != 0) {
        piVar1 = (int *)(uStack_348 + 0x14);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (puVar12[0xc] != 0) {
        piVar1 = (int *)(puVar12[0xc] + 0x14);
        do {
          iVar17 = *piVar1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(puVar9);
        }
      }
      puVar12[0xc] = 0;
      puVar12[8] = 0;
      puVar12[7] = 0;
      puVar12[10] = 0;
      puVar12[9] = 0;
      if (*(int *)((long)puVar12 + 0x2c) < 1) {
        *(undefined4 *)puVar9 = (undefined4)uStack_380;
LAB_109ff7880:
        if (2 < uStack_380._4_4_) goto LAB_109ff78b4;
        *(int *)((long)puVar12 + 0x2c) = uStack_380._4_4_;
        puVar12[6] = CONCAT44(uStack_374,uStack_378);
        puVar19 = (undefined8 *)puVar12[0xe];
        *puVar19 = *puStack_338;
        puVar19[1] = puStack_338[1];
      }
      else {
        lVar10 = 0;
        uVar16 = puVar12[0xd];
        do {
          *(undefined4 *)(uVar16 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((long)puVar12 + 0x2c));
        *(undefined4 *)puVar9 = (undefined4)uStack_380;
        if (*(int *)((long)puVar12 + 0x2c) < 3) goto LAB_109ff7880;
LAB_109ff78b4:
        func_0x000109a84868(puVar9,&uStack_380);
      }
      uStack_428 = CONCAT44(uStack_364,uStack_368);
      uStack_430 = CONCAT44(uStack_36c,uStack_370);
      uStack_418 = CONCAT44(uStack_354,uStack_358);
      uStack_420 = CONCAT44(uStack_35c,uStack_360);
      puVar12[8] = uStack_428;
      puVar12[7] = uStack_430;
      puVar12[10] = uStack_418;
      puVar12[9] = uStack_420;
      uStack_410 = CONCAT44(uStack_34c,uStack_350);
      puVar12[0xb] = uStack_410;
      puVar12[0xc] = uStack_348;
      uStack_408 = uStack_348;
    }
    uStack_438 = puVar12[6];
    uStack_440 = puVar12[5];
    uStack_400 = (ulong)&uStack_440 | 8;
    puStack_3f8 = &uStack_3f0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    if (uStack_408 != 0) {
      piVar1 = (int *)(uStack_408 + 0x14);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar12 + 0x2c) < 3) {
      uStack_3f0 = *(undefined8 *)puVar12[0xe];
      uStack_3e8 = ((undefined8 *)puVar12[0xe])[1];
    }
    else {
      uStack_440 = uStack_440 & 0xffffffff;
      func_0x000109a84868(&uStack_440,puVar9);
    }
    if (uStack_348 != 0) {
      piVar1 = (int *)(uStack_348 + 0x14);
      do {
        iVar17 = *piVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_380);
      }
    }
    uStack_348 = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    uStack_358 = 0;
    uStack_354 = 0;
    uStack_360 = 0;
    uStack_35c = 0;
    if (0 < uStack_380._4_4_) {
      lVar10 = 0;
      do {
        *(undefined4 *)(uStack_340 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < uStack_380._4_4_);
    }
    if (puStack_338 != &uStack_330 && puStack_338 != (undefined8 *)0x0) {
      _free(puStack_338[-1]);
    }
  }
  else {
    puVar9 = param_2 + 0x32;
    do {
      lVar10 = 8;
      if (uStack_314 <= (uint)puVar12[4]) {
        lVar10 = 0;
        puVar9 = puVar12;
      }
      puVar12 = *(ulong **)((long)puVar12 + lVar10);
    } while (puVar12 != (ulong *)0x0);
    if ((puVar9 == param_2 + 0x32) || (uStack_314 < (uint)puVar9[4])) goto LAB_109ff7120;
    uStack_438 = puVar9[6];
    uStack_440 = puVar9[5];
    uStack_400 = (ulong)&uStack_440 | 8;
    uStack_428 = puVar9[8];
    uStack_430 = puVar9[7];
    uStack_418 = puVar9[10];
    uStack_420 = puVar9[9];
    uStack_408 = puVar9[0xc];
    uStack_410 = puVar9[0xb];
    puStack_3f8 = &uStack_3f0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    if (puVar9[0xc] != 0) {
      piVar1 = (int *)(puVar9[0xc] + 0x14);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar9 + 0x2c) < 3) {
      uStack_3f0 = *(undefined8 *)puVar9[0xe];
      uStack_3e8 = ((undefined8 *)puVar9[0xe])[1];
    }
    else {
      uStack_440 = uStack_440 & 0xffffffff;
      func_0x000109a84868(&uStack_440);
    }
  }
  puStack_1e8 = (ulong *)param_2[1];
  uStack_1f0 = *param_2;
  uStack_1d8 = param_2[3];
  uStack_1e0 = param_2[2];
  ppuStack_1b0 = (ulong **)((ulong)&uStack_1f0 | 8);
  iVar17 = *(int *)((long)param_2 + 4);
  uStack_1c8 = param_2[5];
  uStack_1d0 = param_2[4];
  uStack_1b8 = param_2[7];
  uStack_1c0 = param_2[6];
  puStack_1a8 = &uStack_1a0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar17 = *(int *)((long)param_2 + 4);
  }
  if (iVar17 < 3) {
    uStack_1a0 = *(undefined8 *)param_2[9];
    uStack_198 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_1f0 = uStack_1f0 & 0xffffffff;
    func_0x000109a84868(&uStack_1f0,param_2);
  }
  puStack_150 = &uStack_188;
  uStack_188 = uStack_438;
  uStack_190 = uStack_440;
  uStack_178 = uStack_428;
  uStack_180 = uStack_430;
  uStack_168 = uStack_418;
  uStack_170 = uStack_420;
  uStack_158 = uStack_408;
  uStack_160 = uStack_410;
  puStack_148 = &uStack_140;
  uStack_138 = 0;
  uStack_140 = 0;
  if (uStack_408 != 0) {
    piVar1 = (int *)(uStack_408 + 0x14);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (uStack_440._4_4_ < 3) {
    uStack_140 = *puStack_3f8;
    uStack_138 = puStack_3f8[1];
  }
  else {
    uStack_190 = uStack_440 & 0xffffffff;
    func_0x000109a84868(&uStack_190,&uStack_440);
  }
  uStack_310 = (undefined4 **)0x0;
  puStack_308 = (undefined4 *)0x0;
  uStack_300 = 0;
  FUN_10a001444(&uStack_310,&uStack_1f0,auStack_130,2);
  FUN_10a0f4834(&uStack_290,&uStack_310);
  param_1[1] = CONCAT44(uStack_284,uStack_288);
  *param_1 = CONCAT44(iStack_28c,uStack_290);
  param_1[3] = CONCAT44(uStack_274,uStack_278);
  param_1[2] = CONCAT44(uStack_27c,uStack_280);
  param_1[5] = CONCAT44(uStack_264,uStack_268);
  param_1[4] = CONCAT44(uStack_26c,uStack_270);
  param_1[7] = lStack_258;
  param_1[6] = CONCAT44(uStack_25c,uStack_260);
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lStack_258 != 0) {
    piVar1 = (int *)(lStack_258 + 0x14);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (iStack_28c < 3) {
    puVar19 = (undefined8 *)param_1[9];
    *puVar19 = *puStack_248;
    puVar19[1] = puStack_248[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,&uStack_290);
  }
  uVar21 = param_2[0xc];
  uVar20 = param_2[0xf];
  uVar16 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar21;
  iVar17 = *(int *)((long)param_2 + 100);
  uVar22 = param_2[0x11];
  uVar21 = param_2[0x10];
  param_1[0xf] = uVar20;
  param_1[0xe] = uVar16;
  param_1[0x11] = uVar22;
  param_1[0x10] = uVar21;
  uVar16 = param_2[0x13];
  uVar20 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar20;
  param_1[0x16] = 0;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  if (uVar16 != 0) {
    piVar1 = (int *)(uVar16 + 0x14);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar17 = *(int *)((long)param_2 + 100);
  }
  if (iVar17 < 3) {
    puVar19 = (undefined8 *)param_2[0x15];
    puVar14 = (undefined8 *)param_1[0x15];
    *puVar14 = *puVar19;
    puVar14[1] = puVar19[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc,param_2 + 0xc);
  }
  param_3 = param_2 + 0x18;
  FUN_109ffeb50(param_1 + 0x18,param_3);
  param_1[0x1d] = param_2[0x1d];
  uVar16 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar16;
  uVar16 = param_2[0x1e];
  uVar21 = param_2[0x21];
  uVar20 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar16;
  iVar17 = *(int *)((long)param_2 + 0xe4);
  param_1[0x21] = uVar21;
  param_1[0x20] = uVar20;
  uVar16 = param_2[0x23];
  uVar20 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar20;
  param_1[0x26] = 0;
  param_1[0x24] = param_1 + 0x1d;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x27] = 0;
  if (uVar16 != 0) {
    piVar1 = (int *)(uVar16 + 0x14);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar17 = *(int *)((long)param_2 + 0xe4);
  }
  if (iVar17 < 3) {
    puVar19 = (undefined8 *)param_2[0x25];
    puVar14 = (undefined8 *)param_1[0x25];
    *puVar14 = *puVar19;
    puVar14[1] = puVar19[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
    param_3 = param_2 + 0x1c;
    func_0x000109a84868(param_1 + 0x1c,param_3);
  }
  if (lStack_258 != 0) {
    piVar1 = (int *)(lStack_258 + 0x14);
    do {
      iVar17 = *piVar1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar10 = 0;
    do {
      puStack_250[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  uStack_380 = &uStack_310;
  FUN_109ffe3e8(&uStack_380);
  puVar19 = auStack_130;
  do {
    puVar14 = puVar19 + -0xc;
    if (puVar19[-5] != 0) {
      piVar1 = (int *)(puVar19[-5] + 0x14);
      do {
        iVar17 = *piVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(puVar14);
      }
    }
    puVar19[-5] = 0;
    puVar19[-9] = 0;
    puVar19[-10] = 0;
    puVar19[-7] = 0;
    puVar19[-8] = 0;
    if (0 < *(int *)((long)puVar19 + -0x5c)) {
      lVar10 = 0;
      lVar13 = puVar19[-4];
      do {
        *(undefined4 *)(lVar13 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((long)puVar19 + -0x5c));
    }
    puVar11 = (undefined8 *)puVar19[-3];
    if (puVar11 != puVar19 + -2 && puVar11 != (undefined8 *)0x0) {
      _free(puVar11[-1]);
    }
    puVar19 = puVar14;
  } while (puVar14 != &uStack_1f0);
  if (uStack_408 != 0) {
    piVar1 = (int *)(uStack_408 + 0x14);
    do {
      iVar17 = *piVar1;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_440);
    }
  }
  uStack_408 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  if (0 < uStack_440._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_400 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_440._4_4_);
  }
  if (puStack_3f8 != &uStack_3f0 && puStack_3f8 != (undefined8 *)0x0) {
    _free(puStack_3f8[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109ff7e84:
  __ZNSt3__19to_stringEj(&uStack_290,param_3);
  FUN_109feb280(&uStack_1f0,&UNK_10f6309e7,&uStack_290);
  FUN_10a0029c0(&uStack_1f0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ff7eb0);
  (*pcVar7)();
}



/* Entry: 109ff8058; end: 109ff8f37;  */

/* WARNING: Removing unreachable block (ram,0x000109ff8784) */
/* WARNING: Removing unreachable block (ram,0x000109ff86d0) */
/* WARNING: Removing unreachable block (ram,0x000109ff8890) */

void FUN_109ff8058(undefined8 *param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  long **pplVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 ***pppuVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  long *plStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  long lStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  int *piStack_170;
  undefined8 *puStack_168;
  undefined8 auStack_160 [3];
  ulong uStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 ***pppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  
  iVar2 = *param_2;
  __ZNSt3__19to_stringEj(&uStack_1b0,iVar2);
  puVar7 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar7,0,&UNK_10f630a08,0x14);
  uStack_130 = (undefined4)*(undefined8 *)(puVar7 + 4);
  uStack_12c = (int)((ulong)*(undefined8 *)(puVar7 + 4) >> 0x20);
  iStack_138 = (int)*(undefined8 *)(puVar7 + 2);
  iStack_134 = (int)((ulong)*(undefined8 *)(puVar7 + 2) >> 0x20);
  uStack_140 = (undefined4)*(undefined8 *)puVar7;
  iStack_13c = (int)((ulong)*(undefined8 *)puVar7 >> 0x20);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  if (uStack_12c < 0) {
    uStack_210._0_4_ = uStack_140;
    uStack_210._4_4_ = iStack_13c;
    uStack_208._0_4_ = iStack_138;
    uStack_208._4_4_ = iStack_134;
    puVar5 = (undefined4 *)CONCAT44(iStack_13c,uStack_140);
    if (iVar2 == 2) {
      __ZdlPv();
      goto LAB_109ff80f8;
    }
  }
  else {
    uStack_210 = &uStack_140;
    uStack_208._0_4_ = (int)uStack_12c._3_1_;
    uStack_208._4_4_ = (int)(uStack_12c._3_1_ >> 7);
    puVar5 = uStack_210;
    if (iVar2 == 2) {
LAB_109ff80f8:
      if (lStack_1a0 < 0) {
        __ZdlPv(CONCAT44(uStack_1ac,uStack_1b0));
      }
      iVar2 = param_2[1];
      uStack_148 = 8;
      __ZNSt3__19to_stringEj(&uStack_210,iVar2);
      puVar8 = &uStack_210;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar8,0,&UNK_10f630722,0x16);
      uStack_130 = (undefined4)puVar8[2];
      uStack_12c = (int)((ulong)puVar8[2] >> 0x20);
      iStack_138 = (int)puVar8[1];
      iStack_134 = (int)((ulong)puVar8[1] >> 0x20);
      uStack_140 = (undefined4)*puVar8;
      iStack_13c = (int)((ulong)*puVar8 >> 0x20);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puStack_268 = (undefined4 *)(long)uStack_12c._3_1_;
      if ((long)puStack_268 < 0) {
        uStack_270 = (undefined4 *)CONCAT44(iStack_13c,uStack_140);
        puStack_268 = (undefined4 *)CONCAT44(iStack_134,iStack_138);
        if (iVar2 == 0) {
          __ZdlPv();
          goto LAB_109ff8178;
        }
      }
      else {
        uStack_270 = &uStack_140;
        if (iVar2 == 0) {
LAB_109ff8178:
          if (iStack_1fc < 0) {
            __ZdlPv(uStack_210);
          }
          iVar2 = param_2[2];
          uVar15 = (ulong)(uint)param_2[3];
          uStack_270 = (undefined4 *)0x0;
          puStack_268 = (undefined4 *)0x0;
          uStack_260 = 0;
          func_0x000107c2b048(&uStack_270,param_2 + 4,(long)(param_2 + 4) + uVar15,uVar15);
          uStack_200 = 0;
          iStack_1fc = 0;
          uStack_210._0_4_ = 0x81030000;
          uStack_208 = &uStack_270;
          func_0x000109b7eff4(&uStack_140,&uStack_210,0xffffffff);
          if (uStack_270 != (undefined4 *)0x0) {
            puStack_268 = uStack_270;
            __ZdlPv();
          }
          uStack_148 = (uVar15 + 0xb & 0x1fffffffc) + 8;
          uStack_210._0_4_ = 0x1010000;
          uStack_208 = (undefined8 *)&uStack_140;
          uStack_200 = 0;
          iStack_1fc = 0;
          FUN_10a0f4340(&uStack_1b0,&uStack_210,iVar2);
          if (lStack_108 != 0) {
            piVar18 = (int *)(lStack_108 + 0x14);
            do {
              iVar2 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_140);
            }
          }
          lStack_108 = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          if (0 < iStack_13c) {
            lVar11 = 0;
            do {
              *(undefined4 *)(uStack_100 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < iStack_13c);
          }
          if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
            _free(puStack_f8[-1]);
          }
          FUN_109feb0b4(&uStack_210,param_2,&uStack_148);
          lStack_108 = 0;
          uStack_10c = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_100 = (ulong)&uStack_140 | 8;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          iStack_134 = 0;
          uStack_130 = 0;
          iStack_13c = 0;
          iStack_138 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_140 = 0x42ff0005;
          puStack_f8 = &uStack_f0;
          func_0x000109390e94(&uStack_140,&uStack_210);
          if (lStack_1d8 != 0) {
            piVar18 = (int *)(lStack_1d8 + 0x14);
            do {
              iVar2 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_210);
            }
          }
          lStack_1d8 = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          uStack_200 = 0;
          iStack_1fc = 0;
          uStack_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          if (0 < uStack_210._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)((long)puStack_1d0 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_210._4_4_);
          }
          if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
            _free(puStack_1c8[-1]);
          }
          FUN_109feb0b4(&uStack_270,param_2,&uStack_148);
          lStack_1d8 = 0;
          uStack_1dc = 0;
          puStack_1d0 = &uStack_208;
          uStack_1e4 = 0;
          uStack_1e0 = 0;
          uStack_1ec = 0;
          uStack_1e8 = 0;
          uStack_1f4 = 0;
          uStack_1f0 = 0;
          iStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_208._4_4_ = 0;
          uStack_200 = 0;
          uStack_210._4_4_ = 0;
          uStack_208._0_4_ = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_210._0_4_ = 0x42ff0005;
          puStack_1c8 = &uStack_1c0;
          func_0x000109390e94(&uStack_210,&uStack_270);
          if (lStack_238 != 0) {
            piVar18 = (int *)(lStack_238 + 0x14);
            do {
              iVar2 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_270);
            }
          }
          lStack_238 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_248 = 0;
          uStack_250 = 0;
          if (0 < uStack_270._4_4_) {
            lVar11 = 0;
            do {
              *(undefined4 *)(lStack_230 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < uStack_270._4_4_);
          }
          if (puStack_228 != auStack_220 && puStack_228 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_228 + -8));
          }
          FUN_109fed934(&uStack_270,param_2,&uStack_148);
          puVar8 = (undefined8 *)0x1a0;
          __Znwm();
          puVar8[1] = CONCAT44(iStack_1a4,iStack_1a8);
          *puVar8 = CONCAT44(uStack_1ac,uStack_1b0);
          puVar8[3] = uStack_198;
          puVar8[2] = lStack_1a0;
          puVar8[5] = uStack_188;
          puVar8[4] = uStack_190;
          puVar8[7] = lStack_178;
          puVar8[6] = uStack_180;
          puVar8[10] = 0;
          puVar8[8] = puVar8 + 1;
          puVar8[9] = puVar8 + 10;
          puVar8[0xb] = 0;
          if (lStack_178 != 0) {
            piVar18 = (int *)(lStack_178 + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = *piVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if ((int)uStack_1ac < 3) {
            puVar17 = (undefined8 *)puVar8[9];
            *puVar17 = *puStack_168;
            puVar17[1] = puStack_168[1];
          }
          else {
            *(undefined4 *)((long)puVar8 + 4) = 0;
            func_0x000109a84868(puVar8,&uStack_1b0);
          }
          puVar8[0xd] = CONCAT44(iStack_134,iStack_138);
          puVar8[0xc] = CONCAT44(iStack_13c,uStack_140);
          puVar8[0xf] = CONCAT44(uStack_124,uStack_128);
          puVar8[0xe] = CONCAT44(uStack_12c,uStack_130);
          puVar8[0x11] = CONCAT44(uStack_114,uStack_118);
          puVar8[0x10] = CONCAT44(uStack_11c,uStack_120);
          puVar8[0x13] = lStack_108;
          puVar8[0x12] = CONCAT44(uStack_10c,uStack_110);
          puVar8[0x16] = 0;
          puVar8[0x14] = puVar8 + 0xd;
          puVar8[0x15] = puVar8 + 0x16;
          puVar8[0x17] = 0;
          if (lStack_108 != 0) {
            piVar18 = (int *)(lStack_108 + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = *piVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iStack_13c < 3) {
            puVar17 = (undefined8 *)puVar8[0x15];
            *puVar17 = *puStack_f8;
            puVar17[1] = puStack_f8[1];
          }
          else {
            *(undefined4 *)((long)puVar8 + 100) = 0;
            func_0x000109a84868(puVar8 + 0xc,&uStack_140);
          }
          FUN_109ffeb50(puVar8 + 0x18,&uStack_270);
          puVar8[0x1d] = CONCAT44(uStack_208._4_4_,(int)uStack_208);
          puVar8[0x1c] = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          puVar8[0x1b] = uStack_258;
          puVar8[0x1f] = CONCAT44(uStack_1f4,uStack_1f8);
          puVar8[0x1e] = CONCAT44(iStack_1fc,uStack_200);
          puVar8[0x21] = CONCAT44(uStack_1e4,uStack_1e8);
          puVar8[0x20] = CONCAT44(uStack_1ec,uStack_1f0);
          puVar8[0x23] = lStack_1d8;
          puVar8[0x22] = CONCAT44(uStack_1dc,uStack_1e0);
          puVar8[0x26] = 0;
          puVar8[0x24] = puVar8 + 0x1d;
          puVar8[0x25] = puVar8 + 0x26;
          puVar8[0x27] = 0;
          if (lStack_1d8 != 0) {
            piVar18 = (int *)(lStack_1d8 + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = *piVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (uStack_210._4_4_ < 3) {
            puVar17 = (undefined8 *)puVar8[0x25];
            *puVar17 = *puStack_1c8;
            puVar17[1] = puStack_1c8[1];
          }
          else {
            *(undefined4 *)((long)puVar8 + 0xe4) = 0;
            func_0x000109a84868(puVar8 + 0x1c,&uStack_210);
          }
          puVar8[0x2d] = 0;
          puVar8[0x2c] = 0;
          puVar8[0x2f] = 0;
          puVar8[0x2e] = 0;
          puVar8[0x2b] = 0;
          puVar8[0x2a] = 0;
          puVar8[0x28] = FUN_10a001434;
          puVar8[0x29] = &PTR_DAT_110950c70;
          puVar17 = puVar8 + 0x32;
          puVar8[0x32] = 0;
          puVar8[0x33] = 0;
          puVar8[0x30] = 0;
          puVar8[0x31] = puVar17;
          if (lStack_1a0 != 0) {
            uVar15 = (ulong)uStack_1ac;
            if ((int)uStack_1ac < 3) {
              lVar11 = (long)iStack_1a4 * (long)iStack_1a8;
            }
            else {
              lVar11 = 1;
              piVar18 = piStack_170;
              do {
                lVar11 = lVar11 * *piVar18;
                uVar15 = uVar15 - 1;
                piVar18 = piVar18 + 1;
              } while (uVar15 != 0);
            }
            pppuStack_a0 = (undefined8 ***)&UNK_10f55aafc;
            ppuStack_98 = (undefined8 **)0xe;
            if (lVar11 != 0) {
              uVar1 = uStack_1b0 & 0xfff;
              __ZNSt3__19to_stringEi(&pppuStack_c0,uVar1);
              ppppuVar9 = &pppuStack_c0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (ppppuVar9,0,&UNK_10f6309b1,0x12);
              ppuStack_98 = ppppuVar9[1];
              pppuStack_a0 = *ppppuVar9;
              uStack_90 = ppppuVar9[2];
              ppppuVar9[1] = (undefined8 ***)0x0;
              ppppuVar9[2] = (undefined8 ***)0x0;
              *ppppuVar9 = (undefined8 ***)0x0;
              ppuStack_d0 = (undefined8 **)(long)uStack_90._7_1_;
              if ((long)ppuStack_d0 < 0) {
                pppuStack_d8 = pppuStack_a0;
                ppuStack_d0 = ppuStack_98;
                if (uVar1 == 0x10) {
                  __ZdlPv();
                  goto LAB_109ff86c8;
                }
              }
              else {
                pppuStack_d8 = &pppuStack_a0;
                if (uVar1 == 0x10) {
LAB_109ff86c8:
                  uVar15 = uStack_148;
                  pppuStack_a0 = (undefined8 ***)&UNK_10f6309c4;
                  ppuStack_98 = (undefined8 ***)0x22;
                  if ((piStack_170[1] != (int)uStack_258) || (*piStack_170 != uStack_258._4_4_)) {
                    FUN_10a0edfc4(&pppuStack_a0);
                    goto LAB_109ff8cc8;
                  }
                  *param_1 = puVar8;
                  iVar2 = *(int *)((long)param_2 + uStack_148);
                  __ZNSt3__19to_stringEj(&pppuStack_c0,iVar2);
                  ppppuVar9 = &pppuStack_c0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                            (ppppuVar9,0,&UNK_10f630722,0x16);
                  ppuStack_98 = ppppuVar9[1];
                  pppuStack_a0 = *ppppuVar9;
                  uStack_90 = ppppuVar9[2];
                  ppppuVar9[1] = (undefined8 ***)0x0;
                  ppppuVar9[2] = (undefined8 ***)0x0;
                  *ppppuVar9 = (undefined8 ***)0x0;
                  ppuStack_d0 = (undefined8 **)(long)uStack_90._7_1_;
                  if ((long)ppuStack_d0 < 0) {
                    pppuStack_d8 = pppuStack_a0;
                    ppuStack_d0 = ppuStack_98;
                    if (iVar2 == 0) {
                      __ZdlPv();
                      goto LAB_109ff8778;
                    }
                  }
                  else {
                    pppuStack_d8 = &pppuStack_a0;
                    if (iVar2 == 0) {
LAB_109ff8778:
                      uVar1 = *(uint *)((long)param_2 + uVar15 + 4);
                      uVar22 = (ulong)uVar1;
                      uVar19 = uVar15 + 8;
                      uVar13 = uVar19;
                      if (uVar1 == 0) {
                        lVar11 = 0;
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = uVar22;
                        uStack_148 = uVar19;
                        FUN_10a003c5c();
                        _bzero();
                        uVar12 = 0;
                        lVar11 = uVar21 + uVar22 * 4;
                        do {
                          uStack_210 = (undefined4 *)
                                       CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
                          if (uVar22 == uVar12) goto LAB_109ff8cc8;
                          uVar13 = uVar13 + 4;
                          *(undefined4 *)(uVar21 + uVar12 * 4) =
                               *(undefined4 *)((long)param_2 + uVar12 * 4 + uVar19);
                          uVar12 = uVar12 + 1;
                        } while (uVar22 != uVar12);
                      }
                      uStack_148 = uVar13;
                      FUN_109fec1e8(&pppuStack_a0,param_2,&uStack_148);
                      lVar20 = ((long)ppuStack_98 - (long)pppuStack_a0 >> 5) * -0x5555555555555555;
                      __ZNSt3__19to_stringEm(&pppuStack_d8,lVar20);
                      ppppuVar9 = &pppuStack_d8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                (ppppuVar9,0,&UNK_10f630dd3,0x13);
                      ppuStack_b8 = ppppuVar9[1];
                      pppuStack_c0 = *ppppuVar9;
                      uStack_b0 = ppppuVar9[2];
                      ppppuVar9[1] = (undefined8 ***)0x0;
                      ppppuVar9[2] = (undefined8 ***)0x0;
                      *ppppuVar9 = (undefined8 ***)0x0;
                      ppuStack_78 = (undefined8 **)(long)uStack_b0._7_1_;
                      if ((long)ppuStack_78 < 0) {
                        pppuStack_80 = pppuStack_c0;
                        ppuStack_78 = ppuStack_b8;
                        if (lVar20 - uVar22 == 0) {
                          __ZdlPv();
                          goto LAB_109ff8888;
                        }
                      }
                      else {
                        pppuStack_80 = &pppuStack_c0;
                        if (lVar20 - uVar22 == 0) {
LAB_109ff8888:
                          lStack_280 = 0;
                          lStack_278 = 0;
                          plStack_288 = &lStack_280;
                          if (uVar1 != 0) {
                            uVar19 = 0;
                            do {
                              pppuVar14 = pppuStack_a0;
                              uVar13 = ((long)ppuStack_98 - (long)pppuStack_a0 >> 5) *
                                       -0x5555555555555555;
                              uStack_210 = (undefined4 *)
                                           CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
                              if ((uVar13 < uVar19 || uVar13 - uVar19 == 0) ||
                                 (uStack_210 = (undefined4 *)
                                               CONCAT44(uStack_210._4_4_,(undefined4)uStack_210),
                                 uVar19 == (long)(lVar11 - uVar21) >> 2)) goto LAB_109ff8cc8;
                              pplVar10 = &plStack_288;
                              FUN_10a003968(pplVar10,*(undefined4 *)(uVar21 + uVar19 * 4));
                              ppppuVar23 = (undefined8 ****)(pppuVar14 + uVar19 * 0xc);
                              ppppuVar9 = (undefined8 ****)(pplVar10 + 5);
                              if (ppppuVar9 != ppppuVar23) {
                                if (ppppuVar23[7] != (undefined8 ***)0x0) {
                                  piVar18 = (int *)((long)ppppuVar23[7] + 0x14);
                                  do {
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                                    if (bVar4) {
                                      *piVar18 = *piVar18 + 1;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                if (pplVar10[0xc] != (long *)0x0) {
                                  piVar18 = (int *)((long)pplVar10[0xc] + 0x14);
                                  do {
                                    iVar2 = *piVar18;
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                                    if (bVar4) {
                                      *piVar18 = iVar2 + -1;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                  if (iVar2 + -1 == 0) {
                                    func_0x000109a848d4(ppppuVar9);
                                  }
                                }
                                pplVar10[0xc] = (long *)0x0;
                                pplVar10[8] = (long *)0x0;
                                pplVar10[7] = (long *)0x0;
                                pplVar10[10] = (long *)0x0;
                                pplVar10[9] = (long *)0x0;
                                if (*(int *)((long)pplVar10 + 0x2c) < 1) {
                                  *(undefined4 *)ppppuVar9 = *(undefined4 *)ppppuVar23;
LAB_109ff89a4:
                                  if (2 < *(int *)((long)ppppuVar23 + 4)) goto LAB_109ff89d8;
                                  *(int *)((long)pplVar10 + 0x2c) = *(int *)((long)ppppuVar23 + 4);
                                  pplVar10[6] = (long *)ppppuVar23[1];
                                  pppuVar14 = ppppuVar23[9];
                                  plVar16 = pplVar10[0xe];
                                  *plVar16 = (long)*pppuVar14;
                                  plVar16[1] = (long)pppuVar14[1];
                                }
                                else {
                                  lVar20 = 0;
                                  plVar16 = pplVar10[0xd];
                                  do {
                                    *(undefined4 *)((long)plVar16 + lVar20 * 4) = 0;
                                    lVar20 = lVar20 + 1;
                                  } while (lVar20 < *(int *)((long)pplVar10 + 0x2c));
                                  *(undefined4 *)ppppuVar9 = *(undefined4 *)ppppuVar23;
                                  if (*(int *)((long)pplVar10 + 0x2c) < 3) goto LAB_109ff89a4;
LAB_109ff89d8:
                                  func_0x000109a84868(ppppuVar9,ppppuVar23);
                                }
                                pppuVar14 = ppppuVar23[2];
                                pplVar10[8] = (long *)ppppuVar23[3];
                                pplVar10[7] = (long *)pppuVar14;
                                pppuVar14 = ppppuVar23[4];
                                pplVar10[10] = (long *)ppppuVar23[5];
                                pplVar10[9] = (long *)pppuVar14;
                                pppuVar14 = ppppuVar23[6];
                                pplVar10[0xc] = (long *)ppppuVar23[7];
                                pplVar10[0xb] = (long *)pppuVar14;
                              }
                              uVar19 = uVar19 + 1;
                            } while (uVar19 != uVar22);
                          }
                          uVar15 = ((uVar15 - uStack_148 ^ 0xffffffffffffffff) & 0xfffffffffffffffc)
                                   + uVar15 + 4;
                          pppuStack_c0 = &pppuStack_a0;
                          uStack_148 = uVar15;
                          FUN_109ffe3e8(&pppuStack_c0);
                          if (uVar21 != 0) {
                            __ZdlPv(uVar21);
                          }
                          FUN_10a0033a4(puVar8 + 0x31,puVar8[0x32]);
                          puVar8[0x31] = plStack_288;
                          puVar8[0x32] = lStack_280;
                          puVar8[0x33] = lStack_278;
                          if (lStack_278 == 0) {
                            puVar8[0x31] = puVar17;
                          }
                          else {
                            *(undefined8 **)(lStack_280 + 0x10) = puVar17;
                            lStack_280 = 0;
                            lStack_278 = 0;
                            plStack_288 = &lStack_280;
                          }
                          FUN_10a0033a4(&plStack_288,lStack_280);
                          uStack_148 = uVar15 + 3 & 0xfffffffffffffffc;
                          pppuStack_a0 = (undefined8 ***)&UNK_10f630a1d;
                          ppuStack_98 = (undefined8 ***)0x43;
                          if (uStack_148 == param_3) {
                            FUN_109fff0a0(&uStack_270,puStack_268);
                            if (lStack_1d8 != 0) {
                              piVar18 = (int *)(lStack_1d8 + 0x14);
                              do {
                                iVar2 = *piVar18;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                                if (bVar4) {
                                  *piVar18 = iVar2 + -1;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar2 + -1 == 0) {
                                func_0x000109a848d4(&uStack_210);
                              }
                            }
                            lStack_1d8 = 0;
                            uStack_1f8 = 0;
                            uStack_1f4 = 0;
                            uStack_200 = 0;
                            iStack_1fc = 0;
                            uStack_1e8 = 0;
                            uStack_1e4 = 0;
                            uStack_1f0 = 0;
                            uStack_1ec = 0;
                            if (0 < uStack_210._4_4_) {
                              lVar11 = 0;
                              do {
                                *(undefined4 *)((long)puStack_1d0 + lVar11 * 4) = 0;
                                lVar11 = lVar11 + 1;
                              } while (lVar11 < uStack_210._4_4_);
                            }
                            if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
                              _free(puStack_1c8[-1]);
                            }
                            if (lStack_108 != 0) {
                              piVar18 = (int *)(lStack_108 + 0x14);
                              do {
                                iVar2 = *piVar18;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                                if (bVar4) {
                                  *piVar18 = iVar2 + -1;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar2 + -1 == 0) {
                                func_0x000109a848d4(&uStack_140);
                              }
                            }
                            lStack_108 = 0;
                            uStack_128 = 0;
                            uStack_124 = 0;
                            uStack_130 = 0;
                            uStack_12c = 0;
                            uStack_118 = 0;
                            uStack_114 = 0;
                            uStack_120 = 0;
                            uStack_11c = 0;
                            if (0 < iStack_13c) {
                              lVar11 = 0;
                              do {
                                *(undefined4 *)(uStack_100 + lVar11 * 4) = 0;
                                lVar11 = lVar11 + 1;
                              } while (lVar11 < iStack_13c);
                            }
                            if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
                              _free(puStack_f8[-1]);
                            }
                            if (lStack_178 != 0) {
                              piVar18 = (int *)(lStack_178 + 0x14);
                              do {
                                iVar2 = *piVar18;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                                if (bVar4) {
                                  *piVar18 = iVar2 + -1;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar2 + -1 == 0) {
                                func_0x000109a848d4(&uStack_1b0);
                              }
                            }
                            lStack_178 = 0;
                            uStack_198 = 0;
                            lStack_1a0 = 0;
                            uStack_188 = 0;
                            uStack_190 = 0;
                            if (0 < (int)uStack_1ac) {
                              lVar11 = 0;
                              do {
                                piStack_170[lVar11] = 0;
                                lVar11 = lVar11 + 1;
                              } while (lVar11 < (int)uStack_1ac);
                            }
                            if (puStack_168 != auStack_160 && puStack_168 != (undefined8 *)0x0) {
                              _free(puStack_168[-1]);
                            }
                            return;
                          }
                          FUN_10a0edfc4(&pppuStack_a0);
                          goto LAB_109ff8cc8;
                        }
                      }
                      FUN_10a0edfc4(&pppuStack_80);
                      uStack_210 = (undefined4 *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
                      goto LAB_109ff8cc8;
                    }
                  }
                  FUN_10a0edfc4(&pppuStack_d8);
                  uStack_210 = (undefined4 *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
                  goto LAB_109ff8cc8;
                }
              }
              FUN_10a0edfc4(&pppuStack_d8);
              uStack_210 = (undefined4 *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
              goto LAB_109ff8cc8;
            }
          }
          ppuStack_98 = (undefined8 ***)0xe;
          pppuStack_a0 = (undefined8 ***)&UNK_10f55aafc;
          FUN_10a0edfc4(&pppuStack_a0);
          goto LAB_109ff8cc8;
        }
      }
      FUN_10a0edfc4(&uStack_270);
      goto LAB_109ff8cc8;
    }
  }
  uStack_210 = puVar5;
  FUN_10a0edfc4(&uStack_210);
LAB_109ff8cc8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109ff8ccc);
  (*pcVar6)();
}



/* Entry: 109ff8f38; end: 109ff9e37;  */

void FUN_109ff8f38(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint uStack_428;
  undefined4 uStack_424;
  ulong uStack_420;
  byte bStack_411;
  undefined4 uStack_40c;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined1 auStack_3f8 [56];
  undefined8 uStack_3c0;
  char cStack_3a9;
  undefined **appuStack_398 [19];
  ulong uStack_300;
  undefined8 uStack_2f8;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  uint *puStack_2e8;
  ulong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  long alStack_2c0 [7];
  undefined8 uStack_288;
  char cStack_271;
  undefined **appuStack_260 [19];
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  uint uStack_1b0;
  undefined1 uStack_1a9;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [22];
  
  __ZNSt3__19to_stringEj(&uStack_190,2);
  puVar12 = &uStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar12,0,&UNK_10f630a08,0x14);
  uVar10 = *puVar12;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  if (*(char *)((long)puVar12 + 0x17) < '\0') {
    __ZdlPv(uVar10);
  }
  if (uStack_180._7_1_ < '\0') {
    __ZdlPv(uStack_190);
  }
  FUN_109fed7e0(&ppuStack_408);
  uStack_40c = 2;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_408,&uStack_40c,4);
  uStack_1b0 = 0x4b;
  uVar4 = *param_2;
  __ZNSt3__19to_stringEi(&ppuStack_2d0,(ulong)(uVar4 & 7));
  pppuVar11 = &ppuStack_2d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar11,0,&UNK_10f630777,0x11);
  uVar4 = 0x61 >> (ulong)(uVar4 & 7);
  ppuStack_188 = pppuVar11[1];
  uStack_190 = *pppuVar11;
  uStack_180 = pppuVar11[2];
  pppuVar11[1] = (undefined **)0x0;
  pppuVar11[2] = (undefined **)0x0;
  *pppuVar11 = (undefined **)0x0;
  ppuStack_1a0 = (undefined **)(long)uStack_180._7_1_;
  if ((long)ppuStack_1a0 < 0) {
    uStack_1a8 = (undefined ***)uStack_190;
    ppuStack_1a0 = ppuStack_188;
    if ((uVar4 & 1) != 0) {
      __ZdlPv();
      goto LAB_109ff905c;
    }
  }
  else {
    uStack_1a8 = (undefined ***)&uStack_190;
    if ((uVar4 & 1) != 0) {
LAB_109ff905c:
      if (alStack_2c0[0] < 0) {
        __ZdlPv(ppuStack_2d0);
      }
      uVar4 = param_2[1];
      __ZNSt3__19to_stringEi(&ppuStack_2d0,uVar4);
      pppuVar11 = &ppuStack_2d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppuVar11,0,&UNK_10f630789,0x10);
      ppuStack_188 = pppuVar11[1];
      uStack_190 = *pppuVar11;
      uStack_180 = pppuVar11[2];
      pppuVar11[1] = (undefined **)0x0;
      pppuVar11[2] = (undefined **)0x0;
      *pppuVar11 = (undefined **)0x0;
      ppuStack_1a0 = (undefined **)(long)uStack_180._7_1_;
      if ((long)ppuStack_1a0 < 0) {
        uStack_1a8 = (undefined ***)uStack_190;
        ppuStack_1a0 = ppuStack_188;
        if (uVar4 == 2) {
          __ZdlPv();
          goto LAB_109ff90e8;
        }
      }
      else {
        uStack_1a8 = (undefined ***)&uStack_190;
        if (uVar4 == 2) {
LAB_109ff90e8:
          if (alStack_2c0[0] < 0) {
            __ZdlPv(ppuStack_2d0);
          }
          ppuStack_2d0 = (undefined **)0x0;
          ppuStack_2c8 = (undefined **)0x0;
          alStack_2c0[0] = 0;
          uStack_190 = (undefined **)CONCAT44(uStack_190._4_4_,1);
          FUN_109febd04(&ppuStack_2d0,&uStack_190);
          func_0x000109febdc8(&ppuStack_2d0,&uStack_1b0);
          ppuStack_1a0 = (undefined **)0x0;
          uStack_1a8 = (undefined ***)0x0;
          uStack_198 = 0;
          uStack_300 = 0;
          uStack_2f8 = 0;
          puVar12 = (undefined8 *)0xc;
          func_0x000107c2ae8c();
          uStack_300 = (long)puVar12 + 4;
          uStack_2f8 = 4;
          *(undefined1 *)(puVar12 + 1) = 0;
          *puVar12 = 0x67706a2e00000001;
          uStack_2e0 = 0;
          uStack_2f0 = 0x1010000;
          puStack_2e8 = param_2;
          FUN_10a0f4340(&uStack_190,&uStack_2f0,0);
          uStack_1b8 = 0;
          uStack_1c8 = (undefined8 *)CONCAT44(uStack_1c8._4_4_,0x1010000);
          puStack_1c0 = &uStack_190;
          func_0x000109b7fb60(&uStack_300,&uStack_1c8,&uStack_1a8,&ppuStack_2d0);
          if (lStack_158 != 0) {
            piVar15 = (int *)(lStack_158 + 0x14);
            do {
              iVar3 = *piVar15;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar9) {
                *piVar15 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_190);
            }
          }
          lStack_158 = 0;
          ppuStack_178 = (undefined **)0x0;
          uStack_180 = (undefined **)0x0;
          uStack_168 = 0;
          uStack_170 = 0;
          if (0 < uStack_190._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(lStack_150 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_190._4_4_);
          }
          if (puStack_148 != auStack_140 && puStack_148 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_148 + -8));
          }
          uVar1 = uStack_300;
          uStack_300 = 0;
          uStack_2f8 = 0;
          if (uVar1 != 0) {
            piVar15 = (int *)(uVar1 - 4);
            do {
              iVar3 = *piVar15;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar9) {
                *piVar15 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              _free(*(undefined8 *)(uVar1 - 0xc));
            }
          }
          FUN_109febc44(&uStack_190);
          uStack_1c8 = (undefined8 *)((ulong)uStack_1c8 & 0xffffffff00000000);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_1c8,4);
          uStack_2f0 = *param_2 & 0xfff;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_2f0,4);
          uStack_300 = CONCAT44(uStack_300._4_4_,(int)ppuStack_1a0 - (int)uStack_1a8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_300,4);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                    (&uStack_180,uStack_1a8,(long)ppuStack_1a0 - (long)uStack_1a8);
          func_0x00010a002480(&uStack_428,&ppuStack_178,&uStack_2d4);
          uVar1 = uStack_420;
          if (-1 < (char)bStack_411) {
            uVar1 = (ulong)bStack_411;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (&uStack_428,uVar1 + 3 & 0xfffffffffffffffc,0);
          uStack_190 = &PTR_SUB_1108a5a38;
          uStack_180 = &PTR_DAT_1108a5a60;
          appuStack_110[0] = &PTR_DAT_1108a5a88;
          ppuStack_178 = &PTR_DAT_11088d7b0;
          if (cStack_121 < '\0') {
            __ZdlPv(uStack_138);
          }
          puVar21 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
          ppuStack_178 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(&uStack_170);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_190,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
          if (uStack_1a8 != (undefined ***)0x0) {
            ppuStack_1a0 = (undefined **)uStack_1a8;
            __ZdlPv();
          }
          if (ppuStack_2d0 != (undefined **)0x0) {
            ppuStack_2c8 = ppuStack_2d0;
            __ZdlPv();
          }
          uVar1 = uStack_420;
          puVar13 = (uint *)CONCAT44(uStack_424,uStack_428);
          if (-1 < (char)bStack_411) {
            uVar1 = (ulong)bStack_411;
            puVar13 = &uStack_428;
          }
          FUN_10a002568(&ppuStack_408,puVar13,uVar1);
          if ((char)bStack_411 < '\0') {
            __ZdlPv(CONCAT44(uStack_424,uStack_428));
          }
          FUN_109feb738(&uStack_190,param_2 + 0x18);
          ppuVar2 = ppuStack_188;
          ppuVar6 = uStack_190;
          if (-1 < (long)uStack_180) {
            ppuVar2 = (undefined **)((ulong)uStack_180 >> 0x38);
            ppuVar6 = (undefined **)&uStack_190;
          }
          FUN_10a002568(&ppuStack_408,ppuVar6,ppuVar2);
          if ((long)uStack_180 < 0) {
            __ZdlPv(uStack_190);
          }
          FUN_109feb738(&uStack_190,param_2 + 0x38);
          ppuVar2 = ppuStack_188;
          ppuVar6 = uStack_190;
          if (-1 < (long)uStack_180) {
            ppuVar2 = (undefined **)((ulong)uStack_180 >> 0x38);
            ppuVar6 = (undefined **)&uStack_190;
          }
          FUN_10a002568(&ppuStack_408,ppuVar6,ppuVar2);
          if ((long)uStack_180 < 0) {
            __ZdlPv(uStack_190);
          }
          FUN_109fed7e0(&ppuStack_2d0);
          uStack_2d4 = 0;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2d0,&uStack_2d4,4);
          uStack_2d8 = 2;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2d0,&uStack_2d8,4);
          FUN_109febc44(&uStack_190);
          uStack_300 = uStack_300 & 0xffffffff00000000;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_300,4);
          uStack_1b0 = (uint)*(undefined8 *)(param_2 + 0x34);
          puVar13 = &uStack_1b0;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,puVar13,4);
          ppuStack_1a0 = (undefined **)0x0;
          uStack_1a8 = (undefined ***)0x0;
          uStack_198 = 0;
          puVar22 = *(uint **)(param_2 + 0x30);
          if (puVar22 == param_2 + 0x32) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar20 = (uint *)0x0;
            puVar17 = (uint *)0x0;
            puVar18 = (uint *)0x0;
            do {
              if (puVar20 < puVar17) {
                *puVar20 = puVar22[8];
                puVar19 = puVar18;
              }
              else {
                lVar14 = (long)puVar20 - (long)puVar18;
                uVar1 = (lVar14 >> 2) + 1;
                if (uVar1 >> 0x3e != 0) {
                  FUN_109ffeb08();
                  goto LAB_109ff9b94;
                }
                uVar16 = (long)puVar17 - (long)puVar18 >> 1;
                if (uVar16 <= uVar1) {
                  uVar16 = uVar1;
                }
                if (0x7ffffffffffffffb < (ulong)((long)puVar17 - (long)puVar18)) {
                  uVar16 = 0x3fffffffffffffff;
                }
                FUN_109ffeb1c();
                puVar20 = (uint *)(uVar16 + lVar14);
                puVar17 = (uint *)(uVar16 + (long)puVar13 * 4);
                puVar19 = puVar20 + -(lVar14 >> 2);
                *puVar20 = puVar22[8];
                _memcpy(puVar19,puVar18,lVar14);
                if (puVar18 != (uint *)0x0) {
                  __ZdlPv(puVar18);
                }
              }
              puVar20 = puVar20 + 1;
              puVar13 = puVar22 + 10;
              FUN_109fed894(&uStack_1a8);
              puVar21 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
              puVar18 = *(uint **)(puVar22 + 2);
              puVar23 = puVar22;
              if (*(uint **)(puVar22 + 2) == (uint *)0x0) {
                do {
                  puVar22 = *(uint **)(puVar23 + 4);
                  bVar9 = *(uint **)puVar22 != puVar23;
                  puVar23 = puVar22;
                } while (bVar9);
              }
              else {
                do {
                  puVar22 = puVar18;
                  puVar18 = *(uint **)puVar22;
                } while (*(uint **)puVar22 != (uint *)0x0);
              }
              puVar18 = puVar19;
            } while (puVar22 != param_2 + 0x32);
            for (; puVar18 != puVar20; puVar18 = puVar18 + 1) {
              uStack_1c8._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
              uStack_1c8 = (undefined8 *)CONCAT44(uStack_1c8._4_4_,*puVar18);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_1c8,4)
              ;
            }
          }
          FUN_109fecbbc(&uStack_1c8,&uStack_1a8);
          puVar12 = puStack_1c0;
          puVar7 = uStack_1c8;
          if (-1 < (long)uStack_1b8) {
            puVar12 = (undefined8 *)(uStack_1b8 >> 0x38);
            puVar7 = &uStack_1c8;
          }
          FUN_10a002568(&uStack_180,puVar7,puVar12);
          if ((long)uStack_1b8 < 0) {
            __ZdlPv(uStack_1c8);
          }
          func_0x00010a002480(&uStack_2f0,&ppuStack_178,&uStack_1a9);
          puVar13 = puStack_2e8;
          if (-1 < (long)uStack_2e0) {
            puVar13 = (uint *)(uStack_2e0 >> 0x38);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (&uStack_2f0,(long)puVar13 + 3U & 0xfffffffffffffffc,0);
          uStack_1c8 = &uStack_1a8;
          FUN_109ffe3e8(&uStack_1c8);
          if (puVar19 != (uint *)0x0) {
            __ZdlPv(puVar19);
          }
          uStack_190 = &PTR_SUB_1108a5a38;
          uStack_180 = &PTR_DAT_1108a5a60;
          appuStack_110[0] = &PTR_DAT_1108a5a88;
          ppuStack_178 = &PTR_DAT_11088d7b0;
          if (cStack_121 < '\0') {
            __ZdlPv(uStack_138);
          }
          ppuStack_178 = (undefined **)(puVar21 + 0x10);
          __ZNSt3__16localeD1Ev(&uStack_170);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_190,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
          puVar13 = puStack_2e8;
          puVar22 = (uint *)CONCAT44(uStack_2ec,uStack_2f0);
          if (-1 < (long)uStack_2e0) {
            puVar13 = (uint *)(uStack_2e0 >> 0x38);
            puVar22 = &uStack_2f0;
          }
          FUN_10a002568(&ppuStack_2d0,puVar22,puVar13);
          if ((long)uStack_2e0 < 0) {
            __ZdlPv(CONCAT44(uStack_2ec,uStack_2f0));
          }
          uStack_190 = (undefined **)CONCAT44(uStack_190._4_4_,param_2[0x36]);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2d0,&uStack_190,4);
          uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,param_2[0x37]);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2d0,&uStack_1a8,4);
          func_0x00010a002480(&uStack_428,&ppuStack_2c8,&uStack_1c8);
          appuStack_260[0] = &PTR_DAT_11088d708;
          ppuStack_2d0 = &PTR_DAT_11088d6e0;
          ppuStack_2c8 = &PTR_DAT_11088d7b0;
          if (cStack_271 < '\0') {
            __ZdlPv(uStack_288);
          }
          ppuStack_2c8 = (undefined **)(puVar21 + 0x10);
          __ZNSt3__16localeD1Ev(alStack_2c0);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_2d0,&PTR_PTR_11088d720);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_260);
          puVar13 = (uint *)CONCAT44(uStack_424,uStack_428);
          if (-1 < (char)bStack_411) {
            uStack_420 = (ulong)bStack_411;
            puVar13 = &uStack_428;
          }
          FUN_10a002568(&ppuStack_408,puVar13,uStack_420);
          if ((char)bStack_411 < '\0') {
            __ZdlPv(CONCAT44(uStack_424,uStack_428));
          }
          FUN_109febc44(&uStack_190);
          uStack_2f0 = 0;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_2f0,4);
          uStack_428 = (uint)*(undefined8 *)(param_2 + 0x66);
          puVar13 = &uStack_428;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,puVar13,4);
          ppuStack_2d0 = (undefined **)0x0;
          ppuStack_2c8 = (undefined **)0x0;
          alStack_2c0[0] = 0;
          puVar22 = *(uint **)(param_2 + 0x62);
          if (puVar22 == param_2 + 100) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar20 = (uint *)0x0;
            puVar17 = (uint *)0x0;
            puVar18 = (uint *)0x0;
            do {
              if (puVar20 < puVar17) {
                *puVar20 = puVar22[8];
                puVar19 = puVar18;
              }
              else {
                lVar14 = (long)puVar20 - (long)puVar18;
                uVar1 = (lVar14 >> 2) + 1;
                if (uVar1 >> 0x3e != 0) {
                  FUN_10a003c48();
                  goto LAB_109ff9b94;
                }
                uVar16 = (long)puVar17 - (long)puVar18 >> 1;
                if (uVar16 <= uVar1) {
                  uVar16 = uVar1;
                }
                if (0x7ffffffffffffffb < (ulong)((long)puVar17 - (long)puVar18)) {
                  uVar16 = 0x3fffffffffffffff;
                }
                FUN_10a003c5c();
                puVar20 = (uint *)(uVar16 + lVar14);
                puVar17 = (uint *)(uVar16 + (long)puVar13 * 4);
                puVar19 = puVar20 + -(lVar14 >> 2);
                *puVar20 = puVar22[8];
                _memcpy(puVar19,puVar18,lVar14);
                if (puVar18 != (uint *)0x0) {
                  __ZdlPv(puVar18);
                }
              }
              puVar20 = puVar20 + 1;
              puVar13 = puVar22 + 10;
              FUN_109fed894(&ppuStack_2d0);
              puVar18 = *(uint **)(puVar22 + 2);
              puVar23 = puVar22;
              if (*(uint **)(puVar22 + 2) == (uint *)0x0) {
                do {
                  puVar22 = *(uint **)(puVar23 + 4);
                  bVar9 = *(uint **)puVar22 != puVar23;
                  puVar23 = puVar22;
                } while (bVar9);
              }
              else {
                do {
                  puVar22 = puVar18;
                  puVar18 = *(uint **)puVar22;
                } while (*(uint **)puVar22 != (uint *)0x0);
              }
              puVar18 = puVar19;
              puVar21 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
            } while (puVar22 != param_2 + 100);
            for (; PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 = puVar21,
                puVar18 != puVar20; puVar18 = puVar18 + 1) {
              uStack_1a8._4_4_ = (undefined4)((ulong)uStack_1a8 >> 0x20);
              uStack_1a8 = (undefined ***)CONCAT44(uStack_1a8._4_4_,*puVar18);
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&uStack_180,&uStack_1a8,4)
              ;
              puVar21 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
            }
          }
          FUN_109fecbbc(&uStack_1a8,&ppuStack_2d0);
          ppuVar2 = ppuStack_1a0;
          ppuVar6 = (undefined **)uStack_1a8;
          if (-1 < (long)uStack_198) {
            ppuVar2 = (undefined **)(uStack_198 >> 0x38);
            ppuVar6 = (undefined **)&uStack_1a8;
          }
          FUN_10a002568(&uStack_180,ppuVar6,ppuVar2);
          if ((long)uStack_198 < 0) {
            __ZdlPv(uStack_1a8);
          }
          func_0x00010a002480(&uStack_1c8,&ppuStack_178,&uStack_300);
          puVar12 = puStack_1c0;
          if (-1 < (long)uStack_1b8) {
            puVar12 = (undefined8 *)(uStack_1b8 >> 0x38);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (&uStack_1c8,(long)puVar12 + 3U & 0xfffffffffffffffc,0);
          uStack_1a8 = &ppuStack_2d0;
          FUN_109ffe3e8(&uStack_1a8);
          if (puVar19 != (uint *)0x0) {
            __ZdlPv(puVar19);
          }
          uStack_190 = &PTR_SUB_1108a5a38;
          uStack_180 = &PTR_DAT_1108a5a60;
          appuStack_110[0] = &PTR_DAT_1108a5a88;
          ppuStack_178 = &PTR_DAT_11088d7b0;
          if (cStack_121 < '\0') {
            __ZdlPv(uStack_138);
          }
          ppuStack_178 = (undefined **)(puVar21 + 0x10);
          __ZNSt3__16localeD1Ev(&uStack_170);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_190,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
          puVar12 = puStack_1c0;
          puVar7 = uStack_1c8;
          if (-1 < (long)uStack_1b8) {
            puVar12 = (undefined8 *)(uStack_1b8 >> 0x38);
            puVar7 = &uStack_1c8;
          }
          FUN_10a002568(&ppuStack_408,puVar7,puVar12);
          if ((long)uStack_1b8 < 0) {
            __ZdlPv(uStack_1c8);
          }
          func_0x00010a002480(param_1,&ppuStack_400,&uStack_190);
          uVar1 = *(ulong *)(param_1 + 8);
          if (-1 < (char)*(byte *)(param_1 + 0x17)) {
            uVar1 = (ulong)*(byte *)(param_1 + 0x17);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (param_1,uVar1 + 3 & 0xfffffffffffffffc,0);
          appuStack_398[0] = &PTR_DAT_11088d708;
          ppuStack_408 = &PTR_DAT_11088d6e0;
          ppuStack_400 = &PTR_DAT_11088d7b0;
          if (cStack_3a9 < '\0') {
            __ZdlPv(uStack_3c0);
          }
          ppuStack_400 = (undefined **)(puVar21 + 0x10);
          __ZNSt3__16localeD1Ev(auStack_3f8);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_408,&PTR_PTR_11088d720);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_398);
          return;
        }
      }
      FUN_10a0edfc4(&uStack_1a8);
      goto LAB_109ff9b94;
    }
  }
  FUN_10a0edfc4(&uStack_1a8);
LAB_109ff9b94:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109ff9b98);
  (*pcVar8)();
}



/* Entry: 109ff9e38; end: 109ffa8eb;  */

/* WARNING: Removing unreachable block (ram,0x000109ffa10c) */

long * FUN_109ff9e38(long *param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  char ***pppcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  char ****ppppcVar10;
  char ***pppcVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  char ***pppcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  char ***pppcVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  char **ppcVar28;
  undefined8 uVar29;
  char **ppcVar30;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 auStack_1a4 [3];
  undefined8 uStack_198;
  char ***pppcStack_188;
  char **ppcStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  char ***pppcStack_160;
  char ***pppcStack_158;
  char ***pppcStack_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_140;
  ulong uStack_13c;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  char **ppcStack_118;
  char *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char **ppcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  char ***pppcStack_90;
  char ***pppcStack_88;
  char ***pppcStack_80;
  char ***pppcStack_78;
  long *plStack_70;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar23 = *param_3;
  lVar25 = param_3[1];
  lVar14 = lVar25 - lVar23;
  if (lVar14 != 0) {
    uVar12 = (lVar14 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar12) {
      FUN_10a00154c();
      goto LAB_109ffa81c;
    }
    plVar8 = param_1 + 3;
    FUN_10a001560();
    param_1[3] = (long)plVar8;
    param_1[4] = (long)plVar8;
    param_1[5] = (long)(plVar8 + uVar12 * 3);
    do {
      lVar14 = 0;
      do {
        *(undefined4 *)((long)plVar8 + lVar14) = *(undefined4 *)(lVar23 + lVar14);
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0xc);
      do {
        *(undefined4 *)((long)plVar8 + lVar14) = *(undefined4 *)(lVar23 + lVar14);
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x18);
      lVar23 = lVar23 + 0x18;
      plVar8 = plVar8 + 3;
    } while (lVar23 != lVar25);
    param_1[4] = (long)plVar8;
  }
  puStack_168 = &UNK_10f630a61;
  pppcStack_160 = (char ***)0x26;
  if (*param_2 == '\x02') {
    uStack_b0 = 0;
    uStack_a0 = 0x8000000000000000;
    uStack_a8 = **(undefined8 **)(param_2 + 8);
    uStack_d0 = 0;
    uStack_c0 = 0x8000000000000000;
    uStack_c8 = (*(undefined8 **)(param_2 + 8))[1];
    pcStack_d8 = param_2;
    pcStack_b8 = param_2;
    do {
      ppcVar28 = &pcStack_b8;
      func_0x00010937c708(ppcVar28,&pcStack_d8);
      if ((int)ppcVar28 != 0) {
        return param_1;
      }
      ppcVar28 = &pcStack_b8;
      func_0x00010937c560();
      puVar26 = (undefined8 *)param_1[1];
      if (puVar26 < (undefined8 *)param_1[2]) {
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[5] = 0;
        puVar26[4] = 0;
        puVar18 = puVar26 + 6;
        puVar26[1] = 0;
        *puVar26 = 0;
      }
      else {
        puVar22 = (undefined8 *)*param_1;
        uVar12 = ((long)puVar26 - (long)puVar22 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar12) {
          FUN_10a0015a4();
          goto LAB_109ffa81c;
        }
        lVar23 = param_1[2] - (long)puVar22 >> 4;
        uVar21 = lVar23 * 0x5555555555555556;
        if (uVar21 < uVar12 || uVar21 - uVar12 == 0) {
          uVar21 = uVar12;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar23 * -0x5555555555555555)) {
          uVar21 = 0x555555555555555;
        }
        if (0x555555555555555 < uVar21) {
          func_0x000109ffded8();
          goto LAB_109ffa81c;
        }
        puVar9 = (undefined8 *)(uVar21 * 0x30);
        __Znwm();
        puVar18 = (undefined8 *)((long)puVar9 + ((long)puVar26 - (long)puVar22));
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar15 = puVar22;
        puVar17 = puVar9;
        if (puVar22 != puVar26) {
          do {
            uVar29 = puVar15[1];
            uVar27 = *puVar15;
            puVar17[2] = puVar15[2];
            puVar17[1] = uVar29;
            *puVar17 = uVar27;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            puVar17[4] = 0;
            puVar17[5] = 0;
            uVar27 = puVar15[3];
            puVar17[4] = puVar15[4];
            puVar17[3] = uVar27;
            puVar17[5] = puVar15[5];
            puVar15[3] = 0;
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15 = puVar15 + 6;
            puVar17 = puVar17 + 6;
          } while (puVar15 != puVar26);
          do {
            FUN_10a0015b8(puVar22);
            puVar22 = puVar22 + 6;
          } while (puVar22 != puVar26);
          puVar22 = (undefined8 *)*param_1;
        }
        puVar18 = puVar18 + 6;
        *param_1 = (long)puVar9;
        param_1[1] = (long)puVar18;
        param_1[2] = (long)(puVar9 + uVar21 * 6);
        if (puVar22 != (undefined8 *)0x0) {
          __ZdlPv(puVar22);
        }
      }
      param_1[1] = (long)puVar18;
      if ((undefined8 *)*param_1 == puVar18) goto LAB_109ffa81c;
      func_0x000109389780(ppcVar28,"id");
      func_0x00010937c804(&puStack_168);
      puVar18[-4] = pppcStack_158;
      puVar18[-5] = pppcStack_160;
      puVar18[-6] = puStack_168;
      func_0x000109389780(ppcVar28,&DAT_10f2c3ed3);
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0x8000000000000000;
      cVar3 = *(char *)ppcVar28;
      if (cVar3 == '\0') {
        uStack_e0 = 1;
LAB_109ffa1c8:
        pcStack_110 = (char *)0x0;
        uStack_108 = 0;
        uStack_100 = 1;
      }
      else if (cVar3 == '\x02') {
        uStack_e8 = *(undefined8 *)ppcVar28[1];
        pcStack_110 = (char *)0x0;
        uStack_100 = 0x8000000000000000;
        uStack_108 = *(undefined8 *)(ppcVar28[1] + 8);
      }
      else {
        if (cVar3 != '\x01') {
          uStack_e0 = 0;
          goto LAB_109ffa1c8;
        }
        uStack_f0 = *(undefined8 *)ppcVar28[1];
        uStack_108 = 0;
        uStack_100 = 0x8000000000000000;
        pcStack_110 = ppcVar28[1] + 8;
      }
      plVar8 = puVar18 + -3;
      ppcStack_118 = ppcVar28;
      ppcStack_f8 = ppcVar28;
      while( true ) {
        pppcVar11 = &ppcStack_f8;
        func_0x00010937c708(pppcVar11,&ppcStack_118);
        if ((int)pppcVar11 != 0) break;
        pppcVar11 = &ppcStack_f8;
        func_0x00010937c560();
        puStack_130 = (undefined8 *)0x0;
        puStack_128 = (undefined8 *)0x0;
        puStack_120 = (undefined8 *)0x0;
        pppcStack_158 = (char ***)0x0;
        pppcStack_160 = (char ***)0x0;
        uStack_148 = 0;
        pppcStack_150 = (char ***)0x0;
        uStack_13c = 0;
        iStack_144 = 0;
        uStack_140 = 0;
        func_0x000109389780();
        func_0x000109407a04();
        puStack_168 = (undefined *)CONCAT44(puStack_168._4_4_,(int)pppcStack_90);
        func_0x000109389780(pppcVar11,&UNK_10f630a94);
        func_0x00010937c804(&pppcStack_90);
        pppcStack_158 = pppcStack_88;
        pppcStack_160 = pppcStack_90;
        pppcStack_150 = pppcStack_80;
        func_0x000109389780(pppcVar11,&DAT_10f398457);
        func_0x000109407a04();
        uStack_148 = (int)pppcStack_90;
        func_0x000109389780(pppcVar11,&DAT_10f68f20c);
        func_0x000109382670();
        func_0x00010937ba88();
        iVar4 = (int)pppcStack_90;
        func_0x000109389780(pppcVar11,&DAT_10f68f20c);
        func_0x000109382670();
        func_0x00010937ba88();
        uVar5 = (int)pppcStack_90;
        func_0x000109389780(pppcVar11,&DAT_10f68f0dc);
        func_0x000109382670();
        func_0x00010937ba88();
        iVar6 = (int)pppcStack_90;
        func_0x000109389780(pppcVar11,&DAT_10f68f0dc);
        func_0x000109382670();
        func_0x00010937ba88();
        uStack_13c = CONCAT44(uVar5,iVar4) + ((long)pppcStack_90 << 0x20) & 0xffffffff00000000U |
                     (ulong)(uint)(iVar6 + iVar4);
        iStack_144 = iVar4;
        uStack_140 = uVar5;
        func_0x000109389780(pppcVar11,&DAT_10f36dad5);
        pppcStack_88 = (char ***)0x0;
        pppcStack_80 = (char ***)0x0;
        pppcStack_78 = (char ***)0x8000000000000000;
        cVar3 = *(char *)pppcVar11;
        if (cVar3 == '\0') {
          pppcStack_78 = (char ***)0x1;
LAB_109ffa3dc:
          ppcStack_180 = (char **)0x0;
          pcStack_178 = (char *)0x0;
          uStack_170 = 1;
        }
        else if (cVar3 == '\x02') {
          pppcStack_80 = (char ***)*pppcVar11[1];
          ppcStack_180 = (char **)0x0;
          uStack_170 = 0x8000000000000000;
          pcStack_178 = pppcVar11[1][1];
        }
        else {
          if (cVar3 != '\x01') {
            pppcStack_78 = (char ***)0x0;
            goto LAB_109ffa3dc;
          }
          pppcStack_88 = (char ***)*pppcVar11[1];
          pcStack_178 = (char *)0x0;
          uStack_170 = 0x8000000000000000;
          ppcStack_180 = pppcVar11[1] + 1;
        }
        puVar26 = (undefined8 *)0x0;
        pppcStack_188 = pppcVar11;
        pppcStack_90 = pppcVar11;
        while( true ) {
          ppppcVar10 = &pppcStack_90;
          func_0x00010937c708(ppppcVar10,&pppcStack_188);
          if ((int)ppppcVar10 != 0) break;
          ppppcVar10 = &pppcStack_90;
          func_0x00010937c560(ppppcVar10);
          lVar23 = 0;
          uStack_1a8 = 0;
          auStack_1a4[0] = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          auStack_1a4[1] = 0;
          auStack_1a4[2] = 0;
          do {
            func_0x000109389780(ppppcVar10,&DAT_10f68f0f0);
            func_0x000109382670();
            func_0x00010938d050();
            *(undefined4 *)((long)&uStack_1b0 + lVar23 * 4) = uStack_94;
            func_0x000109389780(ppppcVar10,&UNK_10f5af602);
            func_0x000109382670();
            func_0x00010938d050();
            auStack_1a4[lVar23] = uStack_94;
            lVar23 = lVar23 + 1;
          } while (lVar23 != 3);
          func_0x000109389780(ppppcVar10,"start");
          func_0x000109407a04();
          uStack_198 = CONCAT44(uStack_198._4_4_,uStack_94);
          func_0x000109389780(ppppcVar10,"end");
          puVar13 = &uStack_94;
          func_0x000109407a04();
          puVar22 = puStack_130;
          uStack_198 = CONCAT44(uStack_94,(undefined4)uStack_198);
          if (puVar26 < puStack_120) {
            *(undefined4 *)(puVar26 + 1) = uStack_1a8;
            *puVar26 = uStack_1b0;
            *(undefined4 *)((long)puVar26 + 0x14) = auStack_1a4[2];
            *(ulong *)((long)puVar26 + 0xc) = CONCAT44(auStack_1a4[1],auStack_1a4[0]);
            puVar26[3] = uStack_198;
            puVar26 = puVar26 + 4;
          }
          else {
            lVar25 = (long)puVar26 - (long)puStack_130;
            lVar23 = lVar25 >> 5;
            uVar12 = lVar23 + 1;
            if (uVar12 >> 0x3b != 0) {
              FUN_10a0016b0();
              goto LAB_109ffa81c;
            }
            uVar21 = (long)puStack_120 - (long)puStack_130 >> 4;
            if (uVar21 <= uVar12) {
              uVar21 = uVar12;
            }
            if (0x7fffffffffffffdf < (ulong)((long)puStack_120 - (long)puStack_130)) {
              uVar21 = 0x7ffffffffffffff;
            }
            if (uVar21 == 0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              FUN_10a0016c4();
            }
            puVar17 = (undefined8 *)(uVar21 + lVar25);
            *puVar17 = uStack_1b0;
            *(undefined4 *)(puVar17 + 1) = uStack_1a8;
            *(ulong *)((long)puVar17 + 0xc) = CONCAT44(auStack_1a4[1],auStack_1a4[0]);
            *(undefined4 *)((long)puVar17 + 0x14) = auStack_1a4[2];
            puVar17[3] = uStack_198;
            puVar19 = puVar17 + lVar23 * -4;
            puVar15 = puVar19;
            puVar9 = puVar22;
            for (; puVar22 != puVar26; puVar22 = puVar22 + 4) {
              lVar23 = 0;
              do {
                *(undefined4 *)((long)puVar15 + lVar23) = *(undefined4 *)((long)puVar22 + lVar23);
                lVar23 = lVar23 + 4;
              } while (lVar23 != 0xc);
              lVar23 = 0;
              do {
                *(undefined4 *)((long)puVar15 + lVar23 + 0xc) =
                     *(undefined4 *)((long)puVar22 + lVar23 + 0xc);
                lVar23 = lVar23 + 4;
              } while (lVar23 != 0xc);
              puVar15[3] = puVar22[3];
              puVar15 = puVar15 + 4;
              puVar9 = puStack_130;
            }
            puStack_120 = (undefined8 *)(uVar21 + (long)puVar13 * 0x20);
            puVar26 = puVar17 + 4;
            puStack_130 = puVar19;
            if (puVar9 != (undefined8 *)0x0) {
              puStack_128 = puVar26;
              __ZdlPv(puVar9);
            }
          }
          puStack_128 = puVar26;
          func_0x00010937c698(&pppcStack_90);
        }
        uVar12 = puVar18[-2];
        if (uVar12 < (ulong)puVar18[-1]) {
          FUN_10a0016f8(uVar12,&puStack_168);
          lVar23 = uVar12 + 0x50;
          puVar18[-2] = lVar23;
        }
        else {
          lVar23 = uVar12 - *plVar8;
          uVar12 = (lVar23 >> 4) * -0x3333333333333333 + 1;
          if (0x333333333333333 < uVar12) {
            FUN_10a001820();
            goto LAB_109ffa81c;
          }
          lVar25 = puVar18[-1] - *plVar8 >> 4;
          uVar21 = lVar25 * -0x6666666666666666;
          if (uVar21 < uVar12 || uVar21 - uVar12 == 0) {
            uVar21 = uVar12;
          }
          if (0x199999999999998 < (ulong)(lVar25 * -0x3333333333333333)) {
            uVar21 = 0x333333333333333;
          }
          plStack_70 = plVar8;
          if (uVar21 == 0) {
            pppcVar11 = (char ***)0x0;
          }
          else {
            if (0x333333333333333 < uVar21) {
              func_0x000109ffded8();
              goto LAB_109ffa81c;
            }
            pppcVar11 = (char ***)(uVar21 * 0x50);
            __Znwm();
          }
          lVar23 = (long)pppcVar11 + lVar23;
          pppcStack_90 = pppcVar11;
          pppcStack_88 = (char ***)lVar23;
          pppcStack_80 = (char ***)lVar23;
          pppcStack_78 = pppcVar11 + uVar21 * 10;
          FUN_10a0016f8(lVar23,&puStack_168);
          pppcVar24 = (char ***)puVar18[-3];
          pppcVar2 = (char ***)puVar18[-2];
          pcVar1 = (char *)((long)pppcVar24 + (lVar23 - (long)pppcVar2));
          pppcVar16 = pppcVar24;
          pcVar20 = pcVar1;
          if (pppcVar2 != pppcVar24) {
            do {
              *(undefined4 *)pcVar20 = *(undefined4 *)pppcVar16;
              ppcVar30 = pppcVar16[2];
              ppcVar28 = pppcVar16[1];
              *(char ***)(pcVar20 + 0x18) = pppcVar16[3];
              *(char ***)(pcVar20 + 0x10) = ppcVar30;
              *(char ***)(pcVar20 + 8) = ppcVar28;
              pppcVar16[2] = (char **)0x0;
              pppcVar16[3] = (char **)0x0;
              pppcVar16[1] = (char **)0x0;
              ppcVar30 = pppcVar16[5];
              ppcVar28 = pppcVar16[4];
              *(undefined4 *)(pcVar20 + 0x30) = *(undefined4 *)(pppcVar16 + 6);
              *(char ***)(pcVar20 + 0x28) = ppcVar30;
              *(char ***)(pcVar20 + 0x20) = ppcVar28;
              pcVar20[0x40] = '\0';
              pcVar20[0x41] = '\0';
              pcVar20[0x42] = '\0';
              pcVar20[0x43] = '\0';
              pcVar20[0x44] = '\0';
              pcVar20[0x45] = '\0';
              pcVar20[0x46] = '\0';
              pcVar20[0x47] = '\0';
              pcVar20[0x48] = '\0';
              pcVar20[0x49] = '\0';
              pcVar20[0x4a] = '\0';
              pcVar20[0x4b] = '\0';
              pcVar20[0x4c] = '\0';
              pcVar20[0x4d] = '\0';
              pcVar20[0x4e] = '\0';
              pcVar20[0x4f] = '\0';
              pcVar20[0x38] = '\0';
              pcVar20[0x39] = '\0';
              pcVar20[0x3a] = '\0';
              pcVar20[0x3b] = '\0';
              pcVar20[0x3c] = '\0';
              pcVar20[0x3d] = '\0';
              pcVar20[0x3e] = '\0';
              pcVar20[0x3f] = '\0';
              ppcVar28 = pppcVar16[7];
              *(char ***)(pcVar20 + 0x40) = pppcVar16[8];
              *(char ***)(pcVar20 + 0x38) = ppcVar28;
              *(char ***)(pcVar20 + 0x48) = pppcVar16[9];
              pppcVar16[7] = (char **)0x0;
              pppcVar16[8] = (char **)0x0;
              pppcVar16[9] = (char **)0x0;
              pppcVar16 = pppcVar16 + 10;
              pcVar20 = pcVar20 + 0x50;
            } while (pppcVar16 != pppcVar2);
            do {
              FUN_10a00166c(pppcVar24);
              pppcVar24 = pppcVar24 + 10;
            } while (pppcVar24 != pppcVar2);
            pppcVar24 = (char ***)*plVar8;
          }
          lVar23 = lVar23 + 0x50;
          puVar18[-3] = pcVar1;
          puVar18[-2] = lVar23;
          pppcStack_78 = (char ***)puVar18[-1];
          puVar18[-1] = pppcVar11 + uVar21 * 10;
          pppcStack_90 = pppcVar24;
          pppcStack_88 = pppcVar24;
          pppcStack_80 = pppcVar24;
          FUN_10a001834(&pppcStack_90);
        }
        puVar18[-2] = lVar23;
        if (puStack_130 != (undefined8 *)0x0) {
          __ZdlPv();
        }
        if ((long)pppcStack_150 < 0) {
          __ZdlPv(pppcStack_160);
        }
        func_0x00010937c698(&ppcStack_f8);
      }
      func_0x00010937c698(&pcStack_b8);
    } while( true );
  }
  FUN_10a0edfc4(&puStack_168);
LAB_109ffa81c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109ffa820);
  (*pcVar7)();
}



/* Entry: 109ffa8ec; end: 109ffc8bb;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_109ffa8ec(long *param_1,long param_2,uint *param_3,long *param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  double *pdVar19;
  uint *puVar20;
  undefined4 uVar21;
  byte bVar22;
  byte bVar23;
  undefined2 uVar24;
  char cVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int *****pppppiVar31;
  undefined8 *puVar32;
  code *pcVar33;
  int iVar34;
  ulong uVar35;
  int *******pppppppiVar36;
  uint *puVar37;
  undefined4 *puVar38;
  uint uVar39;
  long lVar40;
  long *plVar41;
  int *******pppppppiVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  int ******ppppppiVar46;
  long lVar47;
  int iVar48;
  int *piVar50;
  undefined8 *puVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  long lVar57;
  undefined2 *puVar58;
  undefined1 uVar59;
  undefined8 *puVar60;
  double *pdVar61;
  double dVar62;
  long lVar63;
  undefined8 uVar64;
  int *******pppppppiVar65;
  long lVar66;
  int *******pppppppiVar67;
  undefined8 *puVar68;
  undefined8 *puVar69;
  float fVar70;
  int iVar71;
  int iVar72;
  ulong uStack_4a0;
  long lStack_428;
  double dStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3c8;
  int *piStack_3c0;
  long *plStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  float fStack_39c;
  undefined8 uStack_398;
  double dStack_390;
  undefined8 uStack_388;
  double dStack_380;
  double dStack_378;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  long lStack_338;
  int *piStack_330;
  long *plStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  int iStack_30c;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  int *piStack_2d0;
  long *plStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 **ppuStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int ******ppppppiStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  int *******pppppppiStack_d8;
  int *******pppppppiStack_d0;
  int *******pppppppiStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  int iVar49;
  
  uVar39 = (uint)param_2;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiStack_d8 = (int *******)0x0;
  pppppppiStack_d0 = (int *******)0x0;
  pppppppiStack_c8 = (int *******)0x0;
  uVar43 = param_3[1];
  uVar44 = (ulong)uVar43;
  if ((int)uVar43 < 3) {
    uVar35 = (long)(int)param_3[3] * (long)(int)param_3[2];
  }
  else {
    uVar35 = 1;
    piVar50 = *(int **)(param_3 + 0x10);
    do {
      uVar35 = uVar35 * (long)*piVar50;
      uVar44 = uVar44 - 1;
      piVar50 = piVar50 + 1;
    } while (uVar44 != 0);
  }
  if (uVar35 == 0) {
    uVar35 = 0;
    uStack_4a0 = 0;
LAB_109ffa9ac:
    if ((int)uVar43 < 3) {
      lVar40 = (long)(int)param_3[3] * (long)(int)param_3[2];
    }
    else {
      uVar44 = (ulong)uVar43;
      lVar40 = 1;
      piVar50 = *(int **)(param_3 + 0x10);
      do {
        lVar40 = lVar40 * *piVar50;
        uVar44 = uVar44 - 1;
        piVar50 = piVar50 + 1;
      } while (uVar44 != 0);
    }
    FUN_109ffc8bc(&pppppppiStack_d8,lVar40);
    puStack_f0 = (undefined8 *)0x0;
    puStack_e8 = (undefined8 *)0x0;
    puStack_e0 = (undefined8 *)0x0;
    lVar40 = *param_1;
    lVar57 = param_1[1];
    if (lVar40 == lVar57) {
LAB_109ffb174:
      uVar59 = 0;
    }
    else {
      puVar51 = (undefined8 *)((ulong)&uStack_2b0 | 4);
      lStack_428 = 0x7fffffff7fffffff;
      uVar64 = 0x8000000080000000;
      do {
        uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,0x42ff0000);
        puVar51[1] = 0;
        *puVar51 = 0;
        puVar51[3] = 0;
        puVar51[2] = 0;
        puVar51[5] = 0;
        puVar51[4] = 0;
        *(undefined8 *)((long)puVar51 + 0x34) = 0;
        *(undefined8 *)((long)puVar51 + 0x2c) = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        puStack_248 = (undefined8 *)0x0;
        puStack_250 = (undefined8 *)0x0;
        puStack_240 = (undefined8 *)0x0;
        puVar55 = param_5;
        ppuStack_270 = &puStack_2a8;
        puStack_268 = &uStack_260;
        FUN_109ffc948(param_5,lVar40);
        if (&uStack_2b0 != puVar55) {
          if (puVar55[7] != 0) {
            piVar50 = (int *)(puVar55[7] + 0x14);
            do {
              cVar25 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
              if (bVar26) {
                *piVar50 = *piVar50 + 1;
                cVar25 = ExclusiveMonitorsStatus();
              }
            } while (cVar25 != '\0');
          }
          if (lStack_278 != 0) {
            piVar50 = (int *)(lStack_278 + 0x14);
            do {
              iVar71 = *piVar50;
              cVar25 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
              if (bVar26) {
                *piVar50 = iVar71 + -1;
                cVar25 = ExclusiveMonitorsStatus();
              }
            } while (cVar25 != '\0');
            if (iVar71 + -1 == 0) {
              func_0x000109a848d4(&uStack_2b0);
            }
          }
          lStack_278 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          if (uStack_2b0._4_4_ < 1) {
            uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,*(undefined4 *)puVar55);
LAB_109ffab08:
            if (2 < *(int *)((long)puVar55 + 4)) goto LAB_109ffab3c;
            uStack_2b0 = (int ******)CONCAT44(*(int *)((long)puVar55 + 4),(undefined4)uStack_2b0);
            puStack_2a8 = (undefined8 *)puVar55[1];
            puVar68 = (undefined8 *)puVar55[9];
            *puStack_268 = *puVar68;
            puStack_268[1] = puVar68[1];
          }
          else {
            lVar45 = 0;
            do {
              *(int *)((long)ppuStack_270 + lVar45 * 4) = 0;
              lVar45 = lVar45 + 1;
            } while (lVar45 < uStack_2b0._4_4_);
            uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,*(undefined4 *)puVar55);
            if (uStack_2b0._4_4_ < 3) goto LAB_109ffab08;
LAB_109ffab3c:
            func_0x000109a84868(&uStack_2b0,puVar55);
          }
          uStack_298 = puVar55[3];
          uStack_2a0 = puVar55[2];
          uStack_288 = puVar55[5];
          uStack_290 = puVar55[4];
          lStack_278 = puVar55[7];
          uStack_280 = puVar55[6];
        }
        lVar45 = *(long *)(lVar40 + 0x18);
        lVar63 = *(long *)(lVar40 + 0x20);
        puVar55 = puStack_e8;
        while( true ) {
          iVar48 = (int)lStack_428;
          iVar49 = (int)((ulong)lStack_428 >> 0x20);
          iVar71 = (int)uVar64;
          iVar72 = (int)((ulong)uVar64 >> 0x20);
          puStack_e8 = puVar55;
          if (lVar45 == lVar63) break;
          bVar22 = *(byte *)(lVar45 + 0x1f);
          uVar44 = *(ulong *)(lVar45 + 0x10);
          if (-1 < (char)bVar22) {
            uVar44 = (ulong)bVar22;
          }
          bVar23 = *(byte *)((long)param_4 + 0x17);
          uVar53 = param_4[1];
          if (-1 < (char)bVar23) {
            uVar53 = (ulong)bVar23;
          }
          if (uVar44 == uVar53) {
            plVar41 = (long *)*(long *)(lVar45 + 8);
            if (-1 < (char)bVar22) {
              plVar41 = (long *)(lVar45 + 8);
            }
            iVar34 = (int)plVar41;
            plVar41 = (long *)*param_4;
            if (-1 < (char)bVar23) {
              plVar41 = param_4;
            }
            _memcmp();
            if (iVar34 == 0) {
              iVar11 = *(int *)(lVar45 + 0x28);
              iVar12 = *(int *)(lVar45 + 0x30);
              bVar26 = *(int *)(lVar45 + 0x24) < *(int *)(lVar45 + 0x2c);
              iVar10 = *(int *)ppuStack_270;
              iVar13 = *(int *)((long)ppuStack_270 + 4);
              iVar34 = iVar13;
              iVar29 = iVar10;
              if (bVar26 && iVar11 < iVar12) {
                iVar34 = *(int *)(lVar45 + 0x2c);
                iVar29 = iVar12;
              }
              iVar6 = 0;
              if (bVar26 && iVar11 < iVar12) {
                iVar6 = *(int *)(lVar45 + 0x24);
              }
              iVar7 = 0;
              if (bVar26 && iVar11 < iVar12) {
                iVar7 = iVar11;
              }
              iStack_150 = 0xf630a9b;
              iStack_14c = 1;
              uStack_148._0_4_ = 0x36;
              uStack_148._4_4_ = 0;
              if (iVar13 != iVar34 - iVar6 || iVar10 != iVar29 - iVar7) {
                FUN_10a0edfc4(&iStack_150);
                goto LAB_109ffc648;
              }
              uVar21 = *(undefined4 *)(lVar45 + 0x20);
              if (puStack_248 < puStack_240) {
                *puStack_248 = CONCAT44(iVar7,iVar6);
                *(undefined4 *)(puStack_248 + 1) = uVar21;
                puVar55 = (undefined8 *)((long)puStack_248 + 0xc);
              }
              else {
                lVar66 = (long)puStack_248 - (long)puStack_250;
                uVar44 = (lVar66 >> 2) * -0x5555555555555555 + 1;
                if (0x1555555555555555 < uVar44) {
                  FUN_10a001988();
                  goto LAB_109ffc648;
                }
                lVar47 = (long)puStack_240 - (long)puStack_250 >> 2;
                uVar53 = lVar47 * 0x5555555555555556;
                if (uVar53 < uVar44 || uVar53 - uVar44 == 0) {
                  uVar53 = uVar44;
                }
                if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar47 * -0x5555555555555555)) {
                  uVar53 = 0x1555555555555555;
                }
                FUN_10a00199c();
                puVar68 = (undefined8 *)(uVar53 + lVar66);
                puVar56 = (undefined8 *)(uVar53 + (long)plVar41 * 0xc);
                *puVar68 = CONCAT44(iVar7,iVar6);
                *(undefined4 *)(puVar68 + 1) = uVar21;
                puVar55 = (undefined8 *)((long)puVar68 + 0xc);
                puVar68 = (undefined8 *)((long)puVar68 - ((long)puStack_248 - (long)puStack_250));
                _memcpy(puVar68);
                bVar26 = puStack_250 != (undefined8 *)0x0;
                puStack_250 = puVar68;
                puStack_240 = puVar56;
                if (bVar26) {
                  puStack_248 = puVar55;
                  __ZdlPv();
                }
              }
              iStack_150 = 0xf630a9b;
              iStack_14c = 1;
              uStack_148._0_4_ = 0x36;
              uStack_148._4_4_ = 0;
              puStack_248 = puVar55;
              if ((*(int *)((long)ppuStack_270 + 4) != iVar13) || (*(int *)ppuStack_270 != iVar10))
              {
                FUN_10a0edfc4(&iStack_150);
                goto LAB_109ffc648;
              }
              if (iVar48 <= iVar6) {
                iVar6 = iVar48;
              }
              if (iVar49 <= iVar7) {
                iVar7 = iVar49;
              }
              lStack_428 = CONCAT44(iVar7,iVar6);
              if (iVar71 <= iVar34) {
                iVar71 = iVar34;
              }
              if (iVar72 <= iVar29) {
                iVar72 = iVar29;
              }
              uVar64 = CONCAT44(iVar72,iVar71);
            }
          }
          lVar45 = lVar45 + 0x50;
          puVar55 = puStack_e8;
        }
        if (puStack_250 != puStack_248) {
          if (puVar55 < puStack_e0) {
            FUN_10a0019e0(puVar55,&uStack_2b0);
            puStack_e8 = puVar55 + 0xf;
          }
          else {
            lVar45 = (long)puVar55 - (long)puStack_f0;
            uVar44 = (lVar45 >> 3) * -0x1111111111111111 + 1;
            if (0x222222222222222 < uVar44) {
              FUN_10a001b70();
              goto LAB_109ffc648;
            }
            lVar63 = (long)puStack_e0 - (long)puStack_f0 >> 3;
            uVar53 = lVar63 * -0x2222222222222222;
            if (uVar53 < uVar44 || uVar53 - uVar44 == 0) {
              uVar53 = uVar44;
            }
            if (0x111111111111110 < (ulong)(lVar63 * -0x1111111111111111)) {
              uVar53 = 0x222222222222222;
            }
            uStack_130 = &puStack_f0;
            if (uVar53 == 0) {
              lVar63 = 0;
            }
            else {
              if (0x222222222222222 < uVar53) {
                func_0x000109ffded8();
                goto LAB_109ffc648;
              }
              lVar63 = uVar53 * 0x78;
              __Znwm();
            }
            lVar45 = lVar63 + lVar45;
            iStack_150 = (int)lVar63;
            iStack_14c = (int)((ulong)lVar63 >> 0x20);
            puVar60 = (undefined8 *)(lVar63 + uVar53 * 0x78);
            uStack_148 = lVar45;
            uStack_138 = puVar60;
            uStack_140 = (undefined8 *)lVar45;
            FUN_10a0019e0(lVar45,&uStack_2b0);
            puVar32 = puStack_e8;
            puVar56 = puStack_f0;
            puVar55 = (undefined8 *)(lVar45 + 0x78);
            puVar3 = (undefined8 *)(lVar45 + ((long)puStack_f0 - (long)puStack_e8));
            puVar69 = puVar3;
            puVar68 = puStack_f0;
            uStack_140 = puVar55;
            if ((long)puStack_f0 - (long)puStack_e8 != 0) {
              do {
                FUN_10a0019e0(puVar69,puVar68);
                puVar68 = puVar68 + 0xf;
                puVar69 = puVar69 + 0xf;
              } while (puVar68 != puVar32);
              do {
                FUN_10a001b84(puVar56);
                puVar56 = puVar56 + 0xf;
              } while (puVar56 != puVar32);
            }
            uStack_140._0_4_ = (int)puStack_f0;
            uStack_140._4_4_ = (int)((ulong)puStack_f0 >> 0x20);
            uStack_138._0_4_ = SUB84(puStack_e0,0);
            uStack_138._4_4_ = (undefined4)((ulong)puStack_e0 >> 0x20);
            iStack_150 = (int)uStack_140;
            iStack_14c = uStack_140._4_4_;
            uStack_148._0_4_ = (int)uStack_140;
            uStack_148._4_4_ = uStack_140._4_4_;
            puStack_f0 = puVar3;
            puStack_e8 = puVar55;
            puStack_e0 = puVar60;
            FUN_10a001b24(&iStack_150);
            puStack_e8 = puVar55;
          }
        }
        if (puStack_250 != (undefined8 *)0x0) {
          puStack_248 = puStack_250;
          __ZdlPv();
        }
        if (lStack_278 != 0) {
          piVar50 = (int *)(lStack_278 + 0x14);
          do {
            iVar34 = *piVar50;
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = iVar34 + -1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
          if (iVar34 + -1 == 0) {
            func_0x000109a848d4(&uStack_2b0);
          }
        }
        lStack_278 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        if (0 < uStack_2b0._4_4_) {
          lVar45 = 0;
          do {
            *(int *)((long)ppuStack_270 + lVar45 * 4) = 0;
            lVar45 = lVar45 + 1;
          } while (lVar45 < uStack_2b0._4_4_);
        }
        if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
          _free(puStack_268[-1]);
        }
        lVar40 = lVar40 + 0x30;
      } while (lVar40 != lVar57);
      puVar51 = puStack_f0;
      if (puStack_f0 == puStack_e8) goto LAB_109ffb174;
      do {
        piVar18 = (int *)puVar51[0xd];
        for (piVar50 = (int *)puVar51[0xc]; piVar50 != piVar18; piVar50 = piVar50 + 3) {
          *piVar50 = *piVar50 - iVar48;
          piVar50[1] = piVar50[1] - iVar49;
        }
        puVar51 = puVar51 + 0xf;
      } while (puVar51 != puStack_e8);
      iStack_150 = 0x42ff0000;
      uStack_148._4_4_ = 0;
      uStack_140._0_4_ = 0;
      iStack_14c = 0;
      uStack_148._0_4_ = 0;
      puStack_110 = &uStack_148;
      uStack_138._4_4_ = 0;
      uStack_130._0_4_ = 0;
      uStack_140._4_4_ = 0;
      uStack_138._0_4_ = 0;
      uStack_124 = 0;
      uStack_130._4_4_ = 0;
      uStack_128 = 0;
      ppppppiStack_118 = (int ******)0x0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      uStack_2b0 = (int ******)&UNK_10f630ad2;
      puStack_2a8 = (undefined8 *)0x1b;
      plStack_108 = &lStack_100;
      if (puStack_f0 == puStack_e8) {
        FUN_10a0edfc4(&uStack_2b0);
        goto LAB_109ffc648;
      }
      uStack_400 = (int *****)0x0;
      uStack_3f8 = (undefined8 *)0x0;
      lStack_3f0 = 0;
      uStack_2a0 = 0;
      uStack_2b0 = (int ******)&UNK_101010000;
      puStack_2a8 = puStack_f0;
      uStack_310 = 0x2050000;
      uStack_308 = &uStack_400;
      uStack_300 = 0;
      pppppppiVar42 = (int *******)&uStack_310;
      func_0x000109a3dcec(&uStack_2b0);
      puVar51 = puStack_f0;
      uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
      if (puStack_e8 == puStack_f0) goto LAB_109ffc648;
      uVar43 = *(uint *)puStack_f0[8];
      uVar14 = ((uint *)puStack_f0[8])[1];
      lVar40 = puStack_f0[0xc];
      uStack_2b0 = (int ******)&UNK_10f630aee;
      puStack_2a8 = (undefined8 *)0x1c;
      if (lVar40 == puStack_f0[0xd]) {
        FUN_10a0edfc4(&uStack_2b0);
        goto LAB_109ffc648;
      }
      uVar27 = iVar71 - iVar48;
      uVar28 = iVar72 - iVar49;
      lVar57 = (ulong)uVar43 << 0x20;
      if ((uVar14 == uVar27) && (uVar28 == uVar43)) {
        uVar44 = (ulong)*(uint *)(lVar40 + 8);
        uVar53 = ((long)uStack_3f8 - (long)uStack_400 >> 5) * -0x5555555555555555;
        uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
        if (uVar53 < uVar44 || uVar53 - uVar44 == 0) goto LAB_109ffc648;
        pppppppiVar65 = (int *******)(uStack_400 + uVar44 * 0xc);
        if ((int *******)&iStack_150 == pppppppiVar65) goto LAB_109ffb354;
        if (pppppppiVar65[7] != (int ******)0x0) {
          piVar50 = (int *)((long)pppppppiVar65[7] + 0x14);
          do {
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = *piVar50 + 1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
        }
        if (ppppppiStack_118 != (int ******)0x0) {
          piVar50 = (int *)((long)ppppppiStack_118 + 0x14);
          do {
            iVar71 = *piVar50;
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = iVar71 + -1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
          if (iVar71 + -1 == 0) {
            func_0x000109a848d4(&iStack_150);
          }
        }
        ppppppiStack_118 = (int ******)0x0;
        uStack_138._0_4_ = 0;
        uStack_138._4_4_ = 0;
        uStack_140._0_4_ = 0;
        uStack_140._4_4_ = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_130._0_4_ = 0;
        uStack_130._4_4_ = 0;
        if (iStack_14c < 1) {
          iStack_150 = *(int *)pppppppiVar65;
LAB_109ffb2fc:
          iVar71 = *(int *)((long)pppppppiVar65 + 4);
          if (2 < iVar71) goto LAB_109ffb330;
          uStack_148._0_4_ = (int)pppppppiVar65[1];
          uStack_148._4_4_ = (int)((ulong)pppppppiVar65[1] >> 0x20);
          ppppppiVar46 = pppppppiVar65[9];
          *plStack_108 = (long)*ppppppiVar46;
          plStack_108[1] = (long)ppppppiVar46[1];
          iStack_14c = iVar71;
        }
        else {
          lVar40 = 0;
          do {
            *(undefined4 *)((long)puStack_110 + lVar40 * 4) = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < iStack_14c);
          iStack_150 = *(int *)pppppppiVar65;
          if (iStack_14c < 3) goto LAB_109ffb2fc;
LAB_109ffb330:
          pppppppiVar42 = pppppppiVar65;
          func_0x000109a84868(&iStack_150);
        }
        uStack_138._0_4_ = SUB84(pppppppiVar65[3],0);
        uStack_138._4_4_ = (undefined4)((ulong)pppppppiVar65[3] >> 0x20);
        uStack_140._0_4_ = (int)pppppppiVar65[2];
        uStack_140._4_4_ = (int)((ulong)pppppppiVar65[2] >> 0x20);
        uStack_128 = SUB84(pppppppiVar65[5],0);
        uStack_124 = (undefined4)((ulong)pppppppiVar65[5] >> 0x20);
        uStack_130._0_4_ = SUB84(pppppppiVar65[4],0);
        uStack_130._4_4_ = (undefined4)((ulong)pppppppiVar65[4] >> 0x20);
        ppppppiStack_118 = pppppppiVar65[7];
        uStack_120 = SUB84(pppppppiVar65[6],0);
        uStack_11c = (undefined4)((ulong)pppppppiVar65[6] >> 0x20);
      }
      else {
        uVar44 = (ulong)*(uint *)(lVar40 + 8);
        uVar53 = ((long)uStack_3f8 - (long)uStack_400 >> 5) * -0x5555555555555555;
        uStack_370 = uVar27;
        uStack_36c = uVar28;
        uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
        if (uVar53 < uVar44 || uVar53 - uVar44 == 0) goto LAB_109ffc648;
        func_0x000109a829e8(&uStack_2b0,&uStack_370,*(uint *)(uStack_400 + uVar44 * 0xc) & 0xfff);
        (*(code *)(*uStack_2b0)[3])(uStack_2b0,&uStack_2b0,&iStack_150,0xffffffff);
        func_0x00010918eb6c(&uStack_2b0);
        pppppiVar31 = uStack_400;
        plVar41 = (long *)puVar51[0xc];
        uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
        if (((long *)puVar51[0xd] == plVar41) ||
           (uVar53 = (ulong)*(uint *)(plVar41 + 1),
           uVar44 = ((long)uStack_3f8 - (long)uStack_400 >> 5) * -0x5555555555555555,
           uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130),
           uVar44 < uVar53 || uVar44 - uVar53 == 0)) goto LAB_109ffc648;
        lVar40 = *plVar41;
        uStack_36c = (uint)((ulong)lVar40 >> 0x20);
        uStack_368._4_4_ = (int)((ulong)(lVar40 + lVar57) >> 0x20) - uStack_36c;
        uStack_370 = (uint)lVar40;
        uStack_368._0_4_ = uVar14;
        func_0x000109a852c8(&uStack_2b0,&iStack_150,&uStack_370);
        uStack_310 = 0xc2010000;
        uStack_300 = 0;
        pppppppiVar42 = (int *******)&uStack_310;
        uStack_308 = &uStack_2b0;
        func_0x000109a479a0(pppppiVar31 + uVar53 * 0xc);
        if (lStack_278 != 0) {
          piVar50 = (int *)(lStack_278 + 0x14);
          do {
            iVar71 = *piVar50;
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = iVar71 + -1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
          if (iVar71 + -1 == 0) {
            func_0x000109a848d4(&uStack_2b0);
          }
        }
        lStack_278 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        if (0 < uStack_2b0._4_4_) {
          lVar40 = 0;
          do {
            *(int *)((long)ppuStack_270 + lVar40 * 4) = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < uStack_2b0._4_4_);
        }
        if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
          _free(puStack_268[-1]);
        }
      }
LAB_109ffb354:
      lVar40 = puVar51[0xc];
      if (1 < (ulong)((puVar51[0xd] - lVar40 >> 2) * -0x5555555555555555)) {
        uVar44 = 1;
        do {
          pdVar61 = (double *)(lVar40 + uVar44 * 0xc);
          dVar62 = *pdVar61;
          iVar71 = (int)((ulong)((long)dVar62 + lVar57) >> 0x20) - (int)((ulong)dVar62 >> 0x20);
          uStack_388 = (double)CONCAT44(iVar71,uVar14);
          dStack_390 = dVar62;
          func_0x000109a852c8(&uStack_310,&iStack_150,&dStack_390);
          uVar53 = (ulong)*(uint *)(pdVar61 + 1);
          uVar54 = ((long)uStack_3f8 - (long)uStack_400 >> 5) * -0x5555555555555555;
          uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
          if (uVar54 < uVar53 || uVar54 - uVar53 == 0) goto LAB_109ffc648;
          func_0x000109a7ee4c(&uStack_2b0,&uStack_310,uStack_400 + uVar53 * 0xc);
          uStack_418 = (undefined8 *)CONCAT44(iVar71,uVar14);
          dStack_420 = dVar62;
          func_0x000109a852c8(&uStack_370,&iStack_150,&dStack_420);
          pppppppiVar42 = (int *******)&uStack_2b0;
          (*(code *)(*uStack_2b0)[3])(uStack_2b0,pppppppiVar42,&uStack_370,0xffffffff);
          if (lStack_338 != 0) {
            piVar50 = (int *)(lStack_338 + 0x14);
            do {
              iVar71 = *piVar50;
              cVar25 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
              if (bVar26) {
                *piVar50 = iVar71 + -1;
                cVar25 = ExclusiveMonitorsStatus();
              }
            } while (cVar25 != '\0');
            if (iVar71 + -1 == 0) {
              func_0x000109a848d4(&uStack_370);
            }
          }
          lStack_338 = 0;
          uStack_358 = 0;
          uStack_354 = 0;
          uStack_360 = 0;
          uStack_35c = 0;
          uStack_348 = 0;
          uStack_344 = 0;
          uStack_350 = 0;
          uStack_34c = 0;
          if (0 < (int)uStack_36c) {
            lVar40 = 0;
            do {
              piStack_330[lVar40] = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < (int)uStack_36c);
          }
          if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
            _free(plStack_328[-1]);
          }
          func_0x00010918eb6c(&uStack_2b0);
          if (lStack_2d8 != 0) {
            piVar50 = (int *)(lStack_2d8 + 0x14);
            do {
              iVar71 = *piVar50;
              cVar25 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
              if (bVar26) {
                *piVar50 = iVar71 + -1;
                cVar25 = ExclusiveMonitorsStatus();
              }
            } while (cVar25 != '\0');
            if (iVar71 + -1 == 0) {
              func_0x000109a848d4(&uStack_310);
            }
          }
          lStack_2d8 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          lStack_2e8 = 0;
          lStack_2f0 = 0;
          if (0 < iStack_30c) {
            lVar40 = 0;
            do {
              piStack_2d0[lVar40] = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < iStack_30c);
          }
          if (plStack_2c8 != &lStack_2c0 && plStack_2c8 != (long *)0x0) {
            _free(plStack_2c8[-1]);
          }
          uVar44 = uVar44 + 1;
          lVar40 = puVar51[0xc];
        } while (uVar44 < (ulong)((puVar51[0xd] - lVar40 >> 2) * -0x5555555555555555));
      }
      uStack_2b0 = (int ******)&uStack_400;
      FUN_109ffe3e8(&uStack_2b0);
      if (1 < (ulong)(((long)puStack_e8 - (long)puStack_f0 >> 3) * -0x1111111111111111)) {
        uVar44 = 1;
        do {
          uStack_308 = &uStack_400;
          uStack_400 = (int *****)0x0;
          uStack_3f8 = (undefined8 *)0x0;
          lStack_3f0 = 0;
          puStack_2a8 = puStack_f0 + uVar44 * 0xf;
          uStack_2a0 = 0;
          uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,0x1010000);
          uStack_310 = 0x2050000;
          uStack_300 = 0;
          func_0x000109a3dcec(&uStack_2b0,&uStack_310);
          uVar53 = ((long)puStack_e8 - (long)puStack_f0 >> 3) * -0x1111111111111111;
          uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
          if (uVar53 < uVar44 || uVar53 - uVar44 == 0) goto LAB_109ffc648;
          uVar21 = *(undefined4 *)puStack_f0[uVar44 * 0xf + 8];
          uVar15 = ((undefined4 *)puStack_f0[uVar44 * 0xf + 8])[1];
          pdVar61 = (double *)puStack_f0[uVar44 * 0xf + 0xc];
          pdVar19 = (double *)puStack_f0[uVar44 * 0xf + 0xd];
          uStack_2b0 = (int ******)&UNK_10f630b0b;
          puStack_2a8 = (undefined8 *)0x13;
          if (pdVar61 == pdVar19) {
            FUN_10a0edfc4(&uStack_2b0);
            uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
            goto LAB_109ffc648;
          }
          do {
            dVar62 = *pdVar61;
            dStack_390 = *pdVar61;
            uStack_388 = (double)CONCAT44(uVar21,uVar15);
            func_0x000109a852c8(&uStack_310,&iStack_150,&dStack_390);
            uVar53 = (ulong)*(uint *)(pdVar61 + 1);
            uVar54 = ((long)uStack_3f8 - (long)uStack_400 >> 5) * -0x5555555555555555;
            uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
            if (uVar54 < uVar53 || uVar54 - uVar53 == 0) goto LAB_109ffc648;
            func_0x000109a7ee4c(&uStack_2b0,&uStack_310,uStack_400 + uVar53 * 0xc);
            uStack_418 = (undefined8 *)CONCAT44(uVar21,uVar15);
            dStack_420 = dVar62;
            func_0x000109a852c8(&uStack_370,&iStack_150,&dStack_420);
            pppppppiVar42 = (int *******)&uStack_2b0;
            (*(code *)(*uStack_2b0)[3])(uStack_2b0,pppppppiVar42,&uStack_370,0xffffffff);
            if (lStack_338 != 0) {
              piVar50 = (int *)(lStack_338 + 0x14);
              do {
                iVar71 = *piVar50;
                cVar25 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
                if (bVar26) {
                  *piVar50 = iVar71 + -1;
                  cVar25 = ExclusiveMonitorsStatus();
                }
              } while (cVar25 != '\0');
              if (iVar71 + -1 == 0) {
                func_0x000109a848d4(&uStack_370);
              }
            }
            lStack_338 = 0;
            uStack_358 = 0;
            uStack_354 = 0;
            uStack_360 = 0;
            uStack_35c = 0;
            uStack_348 = 0;
            uStack_344 = 0;
            uStack_350 = 0;
            uStack_34c = 0;
            if (0 < (int)uStack_36c) {
              lVar40 = 0;
              do {
                piStack_330[lVar40] = 0;
                lVar40 = lVar40 + 1;
              } while (lVar40 < (int)uStack_36c);
            }
            if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
              _free(plStack_328[-1]);
            }
            func_0x00010918eb6c(&uStack_2b0);
            if (lStack_2d8 != 0) {
              piVar50 = (int *)(lStack_2d8 + 0x14);
              do {
                iVar71 = *piVar50;
                cVar25 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
                if (bVar26) {
                  *piVar50 = iVar71 + -1;
                  cVar25 = ExclusiveMonitorsStatus();
                }
              } while (cVar25 != '\0');
              if (iVar71 + -1 == 0) {
                func_0x000109a848d4(&uStack_310);
              }
            }
            lStack_2d8 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            lStack_2e8 = 0;
            lStack_2f0 = 0;
            if (0 < iStack_30c) {
              lVar40 = 0;
              do {
                piStack_2d0[lVar40] = 0;
                lVar40 = lVar40 + 1;
              } while (lVar40 < iStack_30c);
            }
            if (plStack_2c8 != &lStack_2c0 && plStack_2c8 != (long *)0x0) {
              _free(plStack_2c8[-1]);
            }
            pdVar61 = (double *)((long)pdVar61 + 0xc);
          } while (pdVar61 != pdVar19);
          uStack_2b0 = (int ******)&uStack_400;
          FUN_109ffe3e8(&uStack_2b0);
          uVar44 = uVar44 + 1;
        } while (uVar44 < (ulong)(((long)puStack_e8 - (long)puStack_f0 >> 3) * -0x1111111111111111))
        ;
      }
      uVar44 = uVar35;
      if (0 < (int)uStack_148) {
        lVar40 = 0;
        lStack_428 = lStack_428 >> 0x20;
        iVar71 = (int)uStack_148;
        iVar72 = uStack_148._4_4_;
        do {
          if (0 < iVar72) {
            lVar57 = 0;
            uVar53 = uVar35;
            lVar45 = (long)iVar48 * 2 + (long)iVar48;
            do {
              uVar35 = uVar53;
              if (*(char *)(CONCAT44(uStack_140._4_4_,(int)uStack_140) + *plStack_108 * lVar40 +
                           lVar57) != '\0') {
                lVar63 = *(long *)(param_3 + 4);
                lVar66 = **(long **)(param_3 + 0x12);
                if (uVar44 < uStack_4a0) {
                  lVar47 = 0;
                  do {
                    *(undefined1 *)(uVar44 + lVar47) =
                         *(undefined1 *)(lVar63 + lVar45 + lStack_428 * lVar66 + lVar47);
                    lVar47 = lVar47 + 1;
                  } while (lVar47 != 3);
                }
                else {
                  lVar47 = uVar44 - uVar53;
                  uVar35 = lVar47 * -0x5555555555555555 + 1;
                  if (0x5555555555555555 < uVar35) {
                    FUN_10a0018f0();
                    uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
                    goto LAB_109ffc648;
                  }
                  uVar54 = (uStack_4a0 - uVar53) * 0x5555555555555556;
                  if (uVar54 < uVar35 || uVar54 - uVar35 == 0) {
                    uVar54 = uVar35;
                  }
                  if (0x2aaaaaaaaaaaaaa9 < (uStack_4a0 - uVar53) * -0x5555555555555555) {
                    uVar54 = 0x5555555555555555;
                  }
                  if (uVar54 == 0) {
                    pppppppiVar42 = (int *******)0x0;
                  }
                  else {
                    FUN_10a001904();
                  }
                  lVar52 = 0;
                  uVar4 = uVar54 + lVar47;
                  do {
                    *(undefined1 *)(uVar4 + lVar52) =
                         *(undefined1 *)(lVar63 + lVar45 + lStack_428 * lVar66 + lVar52);
                    lVar52 = lVar52 + 1;
                  } while (lVar52 != 3);
                  uVar35 = uVar4 - lVar47;
                  uVar2 = uVar35;
                  for (uVar1 = uVar53; uVar1 != uVar44; uVar1 = uVar1 + 3) {
                    lVar63 = 0;
                    do {
                      *(undefined1 *)(uVar2 + lVar63) = *(undefined1 *)(uVar1 + lVar63);
                      lVar63 = lVar63 + 1;
                    } while (lVar63 != 3);
                    uVar2 = uVar2 + 3;
                  }
                  uStack_4a0 = uVar54 + (long)pppppppiVar42 * 3;
                  uVar44 = uVar4;
                  if (uVar53 != 0) {
                    __ZdlPv(uVar53);
                  }
                }
                uVar44 = uVar44 + 3;
                if (pppppppiStack_d0 < pppppppiStack_c8) {
                  *(int *)pppppppiStack_d0 = (int)lVar57;
                  *(int *)((long)pppppppiStack_d0 + 4) = (int)lVar40;
                  iVar72 = uStack_148._4_4_;
                  pppppppiStack_d0 = pppppppiStack_d0 + 1;
                }
                else {
                  lVar63 = (long)pppppppiStack_d0 - (long)pppppppiStack_d8;
                  uVar53 = (lVar63 >> 3) + 1;
                  if (uVar53 >> 0x3d != 0) {
                    FUN_10a001940();
                    uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
                    goto LAB_109ffc648;
                  }
                  uVar54 = (long)pppppppiStack_c8 - (long)pppppppiStack_d8 >> 2;
                  if (uVar54 <= uVar53) {
                    uVar54 = uVar53;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pppppppiStack_c8 - (long)pppppppiStack_d8))
                  {
                    uVar54 = 0x1fffffffffffffff;
                  }
                  pppppppiVar36 = (int *******)&pppppppiStack_d8;
                  FUN_10a001954();
                  puVar38 = (undefined4 *)((long)pppppppiVar36 + lVar63);
                  *puVar38 = (int)lVar57;
                  puVar38[1] = (int)lVar40;
                  pppppppiVar65 = (int *******)(puVar38 + 2);
                  pppppppiVar67 =
                       (int *******)
                       ((long)puVar38 - ((long)pppppppiStack_d0 - (long)pppppppiStack_d8));
                  pppppppiVar42 = pppppppiStack_d8;
                  _memcpy(pppppppiVar67);
                  bVar26 = pppppppiStack_d8 != (int *******)0x0;
                  iVar72 = uStack_148._4_4_;
                  pppppppiStack_d8 = pppppppiVar67;
                  pppppppiStack_d0 = pppppppiVar65;
                  pppppppiStack_c8 = pppppppiVar36 + uVar54;
                  if (bVar26) {
                    __ZdlPv();
                    iVar72 = uStack_148._4_4_;
                    pppppppiStack_d0 = pppppppiVar65;
                  }
                }
              }
              lVar57 = lVar57 + 1;
              lVar45 = lVar45 + 3;
              uVar53 = uVar35;
              iVar71 = (int)uStack_148;
            } while (lVar57 < iVar72);
          }
          lVar40 = lVar40 + 1;
          lStack_428 = lStack_428 + 1;
        } while (lVar40 < iVar71);
      }
      puVar51 = uStack_308;
      uVar59 = 0;
      if (pppppppiStack_d8 != pppppppiStack_d0) {
        uVar43 = *param_3;
        uVar44 = (uVar44 - uVar35) * -0x5555555555555555;
        iStack_30c = 2;
        uStack_308._0_4_ = 1;
        uStack_310 = uVar43 & 0xfff | 0x42ff0000;
        piStack_2d0 = (int *)&uStack_308;
        uStack_308._4_4_ = (int)uVar44;
        lStack_2e8 = 0;
        lStack_2f0 = 0;
        lStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2b8 = 0;
        lStack_2c0 = 0;
        uStack_300 = uVar35;
        uStack_2f8 = uVar35;
        plStack_2c8 = &lStack_2c0;
        if ((uVar35 == 0) && ((uVar44 & 0xffffffff) != 0)) {
          puVar38 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar38 = 1;
          uStack_2b0 = (int ******)(puVar38 + 1);
          puStack_2a8 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar38 + 8) = 0;
          *(undefined8 *)(puVar38 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar38 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar38 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar38 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,&uStack_2b0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
          uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
          goto LAB_109ffc648;
        }
        uStack_310 = uVar43 & 0xfff | 0x42ff4000;
        uVar43 = ((uVar43 & 0xfff) >> 3) + 1 << (ulong)(0xfa50U >> (ulong)((uVar43 & 7) << 1) & 3);
        uStack_2b8 = (ulong)uVar43;
        lStack_2c0 = (long)uStack_308._4_4_ * (long)(int)uVar43;
        lStack_2f0 = uVar35 + (long)uStack_308._4_4_ * (long)(int)uVar43;
        uStack_2a0 = 0;
        uStack_2b0._0_4_ = 0x1010000;
        uStack_370 = 0x2010000;
        uStack_360 = 0;
        uStack_35c = 0;
        lStack_2e8 = lStack_2f0;
        puStack_2a8 = (undefined8 *)&uStack_310;
        uStack_368 = (undefined8 *)&uStack_310;
        func_0x000109ac9fc8(&uStack_2b0,&uStack_370,0x2d,0);
        uStack_370 = 0x42ff0000;
        piStack_330 = (int *)&uStack_368;
        uStack_368._4_4_ = 0;
        uStack_360 = 0;
        uStack_36c = 0;
        uStack_368._0_4_ = 0;
        uStack_354 = 0;
        uStack_350 = 0;
        uStack_35c = 0;
        uStack_358 = 0;
        uStack_344 = 0;
        uStack_34c = 0;
        uStack_348 = 0;
        lStack_338 = 0;
        uStack_340 = 0;
        uStack_33c = 0;
        lStack_320 = 0;
        uStack_318 = 0;
        uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,0x2010000);
        uStack_2a0 = 0;
        plStack_328 = &lStack_320;
        puStack_2a8 = (undefined8 *)&uStack_370;
        func_0x000109a41858(0x3ff0000000000000,0,&uStack_310,&uStack_2b0,5);
        lVar40 = *param_1;
        lVar57 = param_1[1];
        if (lVar40 != lVar57) {
          puVar55 = (undefined8 *)((ulong)&uStack_400 | 4);
          puVar51 = (undefined8 *)((ulong)&uStack_2b0 | 4);
          do {
            puVar68 = param_5;
            FUN_109ffc948(param_5,lVar40);
            puVar20 = *(uint **)(lVar40 + 0x20);
            for (puVar17 = *(uint **)(lVar40 + 0x18); puVar17 != puVar20; puVar17 = puVar17 + 0x14)
            {
              bVar22 = *(byte *)((long)puVar17 + 0x1f);
              uVar44 = *(ulong *)(puVar17 + 4);
              if (-1 < (char)bVar22) {
                uVar44 = (ulong)bVar22;
              }
              bVar23 = *(byte *)((long)param_4 + 0x17);
              uVar53 = param_4[1];
              if (-1 < (char)bVar23) {
                uVar53 = (ulong)bVar23;
              }
              if (uVar44 == uVar53) {
                puVar37 = *(uint **)(puVar17 + 2);
                if (-1 < (char)bVar22) {
                  puVar37 = puVar17 + 2;
                }
                plVar41 = (long *)*param_4;
                if (-1 < (char)bVar23) {
                  plVar41 = param_4;
                }
                _memcmp(puVar37,plVar41);
                if ((int)puVar37 == 0) {
                  uVar27 = puVar17[10];
                  uVar28 = puVar17[0xc];
                  bVar26 = (int)puVar17[9] < (int)puVar17[0xb];
                  uVar14 = *(uint *)puVar68[8];
                  uVar16 = ((uint *)puVar68[8])[1];
                  uVar43 = uVar16;
                  uVar30 = uVar14;
                  if (bVar26 && (int)uVar27 < (int)uVar28) {
                    uVar43 = puVar17[0xb];
                    uVar30 = uVar28;
                  }
                  uVar8 = 0;
                  if (bVar26 && (int)uVar27 < (int)uVar28) {
                    uVar8 = puVar17[9];
                  }
                  uVar9 = 0;
                  if (bVar26 && (int)uVar27 < (int)uVar28) {
                    uVar9 = uVar27;
                  }
                  uStack_2b0 = (int ******)&UNK_10f630b1f;
                  puStack_2a8 = (undefined8 *)0x2c;
                  if (uVar16 != uVar43 - uVar8 || uVar14 != uVar30 - uVar9) {
                    FUN_10a0edfc4(&uStack_2b0);
                    uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
                    goto LAB_109ffc648;
                  }
                  uVar53 = (ulong)*puVar17;
                  uVar44 = (param_1[4] - param_1[3] >> 3) * -0x5555555555555555;
                  uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
                  if (uVar44 < uVar53 || uVar44 - uVar53 == 0) goto LAB_109ffc648;
                  pdVar61 = *(double **)(puVar17 + 0xe);
                  if (pdVar61 == *(double **)(puVar17 + 0x10)) {
LAB_109ffc548:
                    uStack_2b0 = (int ******)&UNK_10f630b4c;
                    puStack_2a8 = (undefined8 *)0x33;
                    FUN_10a0edfc4(&uStack_2b0);
                    uStack_130 = (undefined8 **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
                    goto LAB_109ffc648;
                  }
                  lVar45 = param_1[3] + uVar53 * 0x18;
                  while (uVar39 < *(uint *)(pdVar61 + 3) ||
                         *(uint *)((long)pdVar61 + 0x1c) <= uVar39) {
                    pdVar61 = pdVar61 + 4;
                    if (pdVar61 == *(double **)(puVar17 + 0x10)) goto LAB_109ffc548;
                  }
                  lVar63 = 0;
                  dStack_380 = pdVar61[2];
                  dStack_378 = pdVar61[3];
                  uStack_388 = pdVar61[1];
                  dStack_390 = *pdVar61;
                  fStack_39c = 1.0;
                  uVar64 = *(undefined8 *)(lVar45 + 0x10);
                  iVar71 = -(uint)((float)uVar64 < 0.0);
                  iVar72 = -(uint)((float)((ulong)uVar64 >> 0x20) < 0.0);
                  fVar70 = (float)CONCAT13((byte)((ulong)uVar64 >> 0x18) &
                                           ~(byte)((uint)iVar71 >> 0x18),
                                           CONCAT12((byte)((ulong)uVar64 >> 0x10) &
                                                    ~(byte)((uint)iVar71 >> 0x10),
                                                    CONCAT11((byte)((ulong)uVar64 >> 8) &
                                                             ~(byte)((uint)iVar71 >> 8),
                                                             (byte)uVar64 & ~(byte)iVar71)));
                  uStack_398 = CONCAT44((float)(CONCAT17((byte)((ulong)uVar64 >> 0x38) &
                                                         ~(byte)((uint)iVar72 >> 0x18),
                                                         CONCAT16((byte)((ulong)uVar64 >> 0x30) &
                                                                  ~(byte)((uint)iVar72 >> 0x10),
                                                                  CONCAT15((byte)((ulong)uVar64 >>
                                                                                 0x28) &
                                                                           ~(byte)((uint)iVar72 >> 8
                                                                                  ),CONCAT14((byte)(
                                                  (ulong)uVar64 >> 0x20) & ~(byte)iVar72,fVar70))))
                                               >> 0x20) / (float)((ulong)dStack_380 >> 0x20),
                                        fVar70 / SUB84(dStack_380,0));
                  dStack_420 = 0.0;
                  uStack_418 = (undefined8 *)0x0;
                  uStack_410 = 0;
                  do {
                    (&dStack_420)[lVar63] = (double)*(float *)((long)&dStack_390 + lVar63 * 4);
                    lVar63 = lVar63 + 1;
                  } while (lVar63 != 3);
                  uStack_408 = 0;
                  func_0x000109a7cdfc(&uStack_2b0,&uStack_370,&dStack_420);
                  uStack_400 = (int *****)CONCAT44(uStack_400._4_4_,0x42ff0000);
                  *(undefined8 *)((long)puVar55 + 0x34) = 0;
                  *(undefined8 *)((long)puVar55 + 0x2c) = 0;
                  puVar55[3] = 0;
                  puVar55[2] = 0;
                  puVar55[5] = 0;
                  puVar55[4] = 0;
                  puVar55[1] = 0;
                  *puVar55 = 0;
                  lStack_3b0 = 0;
                  uStack_3a8 = 0;
                  piStack_3c0 = (int *)&uStack_3f8;
                  plStack_3b8 = &lStack_3b0;
                  (*(code *)(*uStack_2b0)[3])(uStack_2b0,&uStack_2b0,&uStack_400,0xffffffff);
                  func_0x00010918eb6c(&uStack_2b0);
                  lVar63 = 0;
                  uStack_a0 = *(undefined8 *)piStack_3c0;
                  dStack_420 = 0.0;
                  uStack_418 = (undefined8 *)0x0;
                  uStack_410 = 0;
                  do {
                    (&dStack_420)[lVar63] = (double)(&fStack_39c)[lVar63];
                    lVar63 = lVar63 + 1;
                  } while (lVar63 != 3);
                  uStack_408 = 0;
                  uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,0x42ff0000);
                  puVar51[1] = 0;
                  *puVar51 = 0;
                  puVar51[3] = 0;
                  puVar51[2] = 0;
                  puVar51[5] = 0;
                  puVar51[4] = 0;
                  *(undefined8 *)((long)puVar51 + 0x34) = 0;
                  *(undefined8 *)((long)puVar51 + 0x2c) = 0;
                  uStack_260 = 0;
                  uStack_258 = 0;
                  ppuStack_270 = &puStack_2a8;
                  puStack_268 = &uStack_260;
                  func_0x000109a83fd0(&uStack_2b0,2,&uStack_a0,(uint)uStack_400 & 0xfff);
                  puVar56 = &uStack_2b0;
                  func_0x000109a48880(puVar56,&dStack_420);
                  uStack_410 = 0;
                  dStack_420 = (double)CONCAT44(dStack_420._4_4_,0x1010000);
                  uStack_418 = &uStack_400;
                  uStack_90 = 0;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,0x1010000);
                  auStack_c0[0] = 0x2010000;
                  uStack_b0 = 0;
                  uStack_a8 = 0x3ff0000000000000;
                  puStack_b8 = uStack_418;
                  puStack_98 = &uStack_2b0;
                  func_0x000109a91d90();
                  pdVar61 = &dStack_420;
                  func_0x000109a293c4(pdVar61,&uStack_a0,auStack_c0,puVar56,0xffffffff,
                                      &PTR_DAT_1132e8c90,1,&uStack_a8);
                  if (lStack_278 != 0) {
                    piVar50 = (int *)(lStack_278 + 0x14);
                    do {
                      iVar71 = *piVar50;
                      cVar25 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
                      if (bVar26) {
                        *piVar50 = iVar71 + -1;
                        cVar25 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar25 != '\0');
                    if (iVar71 + -1 == 0) {
                      pdVar61 = (double *)&uStack_2b0;
                      func_0x000109a848d4(pdVar61);
                    }
                  }
                  lStack_278 = 0;
                  uStack_298 = 0;
                  uStack_2a0 = 0;
                  uStack_288 = 0;
                  uStack_290 = 0;
                  if (0 < uStack_2b0._4_4_) {
                    lVar63 = 0;
                    do {
                      *(int *)((long)ppuStack_270 + lVar63 * 4) = 0;
                      lVar63 = lVar63 + 1;
                    } while (lVar63 < uStack_2b0._4_4_);
                  }
                  if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
                    pdVar61 = (double *)puStack_268[-1];
                    _free(pdVar61);
                  }
                  lVar63 = 0;
                  puStack_2a8 = (undefined8 *)0x0;
                  uStack_2b0 = (int ******)0x0;
                  uStack_2a0 = 0;
                  do {
                    (&uStack_2b0)[lVar63] = (double)*(float *)(lVar45 + lVar63 * 4);
                    lVar63 = lVar63 + 1;
                  } while (lVar63 != 3);
                  uStack_298 = 0;
                  dStack_420 = (double)CONCAT44(dStack_420._4_4_,0x1010000);
                  uStack_418 = &uStack_400;
                  uStack_410 = 0;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xc1020006);
                  uStack_90 = 0x400000001;
                  auStack_c0[0] = 0x2010000;
                  uStack_b0 = 0;
                  puStack_b8 = uStack_418;
                  puStack_98 = &uStack_2b0;
                  func_0x000109a91d90();
                  func_0x000109a293c4(&dStack_420,&uStack_a0,auStack_c0,pdVar61,0xffffffff,
                                      &PTR_DAT_1132e8bd0,0,0);
                  if (pppppppiStack_d0 != pppppppiStack_d8) {
                    uVar44 = 0;
                    do {
                      uVar43 = *(int *)(pppppppiStack_d8 + uVar44) + (iVar48 - uVar8);
                      if (-1 < (int)uVar43) {
                        uVar14 = *(int *)((long)(pppppppiStack_d8 + uVar44) + 4) + (iVar49 - uVar9);
                        if ((((-1 < (int)uVar14) && ((int)uVar43 < ((int *)puVar68[8])[1])) &&
                            ((int)uVar14 < *(int *)puVar68[8])) &&
                           (bVar22 = *(byte *)(puVar68[2] + *(long *)puVar68[9] * (ulong)uVar14 +
                                               (ulong)uVar43 * 3 + (long)(int)puVar17[8]),
                           bVar22 != 0)) {
                          iVar71 = (int)uVar44;
                          if (((uStack_370._1_1_ >> 6 & 1) == 0) && (*piStack_330 != 1)) {
                            if (piStack_330[1] == 1) {
                              puVar56 = (undefined8 *)
                                        (CONCAT44(uStack_35c,uStack_360) + *plStack_328 * uVar44);
                            }
                            else {
                              iVar72 = 0;
                              if (uStack_368._4_4_ != 0) {
                                iVar72 = iVar71 / uStack_368._4_4_;
                              }
                              puVar56 = (undefined8 *)
                                        (CONCAT44(uStack_35c,uStack_360) +
                                         *plStack_328 * (long)iVar72 +
                                        (long)(iVar71 - iVar72 * uStack_368._4_4_) * 0xc);
                            }
                          }
                          else {
                            puVar56 = (undefined8 *)(CONCAT44(uStack_35c,uStack_360) + uVar44 * 0xc)
                            ;
                          }
                          if (((uStack_400._1_1_ >> 6 & 1) == 0) && (*piStack_3c0 != 1)) {
                            if (piStack_3c0[1] == 1) {
                              lVar45 = lStack_3f0 + *plStack_3b8 * uVar44;
                            }
                            else {
                              iVar72 = 0;
                              if (uStack_3f8._4_4_ != 0) {
                                iVar72 = iVar71 / uStack_3f8._4_4_;
                              }
                              lVar45 = lStack_3f0 + *plStack_3b8 * (long)iVar72 +
                                       (long)(iVar71 - iVar72 * uStack_3f8._4_4_) * 0xc;
                            }
                          }
                          else {
                            lVar45 = lStack_3f0 + uVar44 * 0xc;
                          }
                          lVar63 = 0;
                          fVar70 = (float)bVar22 / 255.0;
                          do {
                            *(float *)((long)&dStack_420 + lVar63) =
                                 (1.0 - fVar70) * *(float *)((long)puVar56 + lVar63);
                            lVar63 = lVar63 + 4;
                          } while (lVar63 != 0xc);
                          lVar63 = 0;
                          do {
                            *(float *)((long)&uStack_a0 + lVar63) =
                                 fVar70 * *(float *)(lVar45 + lVar63);
                            lVar63 = lVar63 + 4;
                          } while (lVar63 != 0xc);
                          lVar45 = 0;
                          do {
                            *(float *)((long)&uStack_2b0 + lVar45) =
                                 *(float *)((long)&dStack_420 + lVar45) +
                                 *(float *)((long)&uStack_a0 + lVar45);
                            lVar45 = lVar45 + 4;
                          } while (lVar45 != 0xc);
                          *puVar56 = uStack_2b0;
                          *(undefined4 *)(puVar56 + 1) = puStack_2a8._0_4_;
                        }
                      }
                      uVar44 = uVar44 + 1;
                    } while (uVar44 < (ulong)((long)pppppppiStack_d0 - (long)pppppppiStack_d8 >> 3))
                    ;
                  }
                  if (lStack_3c8 != 0) {
                    piVar50 = (int *)(lStack_3c8 + 0x14);
                    do {
                      iVar71 = *piVar50;
                      cVar25 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
                      if (bVar26) {
                        *piVar50 = iVar71 + -1;
                        cVar25 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar25 != '\0');
                    if (iVar71 + -1 == 0) {
                      func_0x000109a848d4(&uStack_400);
                    }
                  }
                  lStack_3c8 = 0;
                  uStack_3e8 = 0;
                  lStack_3f0 = 0;
                  uStack_3d8 = 0;
                  uStack_3e0 = 0;
                  if (0 < uStack_400._4_4_) {
                    lVar45 = 0;
                    do {
                      piStack_3c0[lVar45] = 0;
                      lVar45 = lVar45 + 1;
                    } while (lVar45 < uStack_400._4_4_);
                  }
                  if (plStack_3b8 != &lStack_3b0 && plStack_3b8 != (long *)0x0) {
                    _free(plStack_3b8[-1]);
                  }
                }
              }
            }
            lVar40 = lVar40 + 0x30;
          } while (lVar40 != lVar57);
        }
        uStack_2b0._0_4_ = 0x2010000;
        uStack_2a0 = 0;
        puStack_2a8 = (undefined8 *)&uStack_310;
        func_0x000109a41858(0x3ff0000000000000,0,&uStack_370,&uStack_2b0,0);
        uStack_2a0 = 0;
        uStack_2b0 = (int ******)CONCAT44(uStack_2b0._4_4_,0x1010000);
        uStack_400 = (int *****)CONCAT44(uStack_400._4_4_,0x2010000);
        lStack_3f0 = 0;
        uStack_3f8 = (undefined8 *)&uStack_310;
        puStack_2a8 = (undefined8 *)&uStack_310;
        func_0x000109ac9fc8(&uStack_2b0,&uStack_400,0x39,0);
        if (pppppppiStack_d0 != pppppppiStack_d8) {
          lVar57 = 0;
          lVar40 = 0;
          uVar44 = 0;
          do {
            if (((uStack_310._1_1_ >> 6 & 1) == 0) && (*piStack_2d0 != 1)) {
              if (piStack_2d0[1] == 1) {
                puVar58 = (undefined2 *)(uStack_300 + *plStack_2c8 * uVar44);
              }
              else {
                iVar71 = 0;
                if (uStack_308._4_4_ != 0) {
                  iVar71 = (int)uVar44 / uStack_308._4_4_;
                }
                uVar43 = (int)uVar44 - uStack_308._4_4_ * iVar71;
                puVar58 = (undefined2 *)
                          (uStack_300 + *plStack_2c8 * (long)iVar71 +
                          (-(ulong)(uVar43 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar43 << 1) +
                          (long)(int)uVar43);
              }
            }
            else {
              puVar58 = (undefined2 *)(uStack_300 + lVar40);
            }
            puVar5 = (undefined2 *)
                     (*(long *)(param_3 + 4) +
                      **(long **)(param_3 + 0x12) *
                      ((long)((int *)((long)pppppppiStack_d8 + lVar57))[1] + (long)iVar49) +
                     ((long)*(int *)((long)pppppppiStack_d8 + lVar57) + (long)iVar48) * 3);
            uVar24 = *puVar58;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar58 + 1);
            *puVar5 = uVar24;
            uVar44 = uVar44 + 1;
            lVar40 = lVar40 + 3;
            lVar57 = lVar57 + 8;
          } while (uVar44 < (ulong)((long)pppppppiStack_d0 - (long)pppppppiStack_d8 >> 3));
        }
        if (lStack_338 != 0) {
          piVar50 = (int *)(lStack_338 + 0x14);
          do {
            iVar71 = *piVar50;
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = iVar71 + -1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
          if (iVar71 + -1 == 0) {
            func_0x000109a848d4(&uStack_370);
          }
        }
        lStack_338 = 0;
        uStack_358 = 0;
        uStack_354 = 0;
        uStack_360 = 0;
        uStack_35c = 0;
        uStack_348 = 0;
        uStack_344 = 0;
        uStack_350 = 0;
        uStack_34c = 0;
        if (0 < (int)uStack_36c) {
          lVar40 = 0;
          do {
            piStack_330[lVar40] = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < (int)uStack_36c);
        }
        if (plStack_328 != &lStack_320 && plStack_328 != (long *)0x0) {
          _free(plStack_328[-1]);
        }
        if (lStack_2d8 != 0) {
          piVar50 = (int *)(lStack_2d8 + 0x14);
          do {
            iVar71 = *piVar50;
            cVar25 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
            if (bVar26) {
              *piVar50 = iVar71 + -1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
          if (iVar71 + -1 == 0) {
            func_0x000109a848d4(&uStack_310);
          }
        }
        puVar51 = (undefined8 *)CONCAT44(uStack_308._4_4_,(int)uStack_308);
        lStack_2d8 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        lStack_2e8 = 0;
        lStack_2f0 = 0;
        if (0 < iStack_30c) {
          lVar40 = 0;
          do {
            piStack_2d0[lVar40] = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < iStack_30c);
        }
        uVar59 = 1;
        if (plStack_2c8 != &lStack_2c0 && plStack_2c8 != (long *)0x0) {
          _free(plStack_2c8[-1]);
          puVar51 = (undefined8 *)CONCAT44(uStack_308._4_4_,(int)uStack_308);
          uVar59 = 1;
        }
      }
      uStack_308 = puVar51;
      if (ppppppiStack_118 != (int ******)0x0) {
        piVar50 = (int *)((long)ppppppiStack_118 + 0x14);
        do {
          iVar71 = *piVar50;
          cVar25 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar50,0x10);
          if (bVar26) {
            *piVar50 = iVar71 + -1;
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if (iVar71 + -1 == 0) {
          func_0x000109a848d4(&iStack_150);
        }
      }
      ppppppiStack_118 = (int ******)0x0;
      uStack_138._0_4_ = 0;
      uStack_138._4_4_ = 0;
      uStack_140._0_4_ = 0;
      uStack_140._4_4_ = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130._0_4_ = 0;
      uStack_130._4_4_ = 0;
      if (0 < iStack_14c) {
        lVar40 = 0;
        do {
          *(undefined4 *)((long)puStack_110 + lVar40 * 4) = 0;
          lVar40 = lVar40 + 1;
        } while (lVar40 < iStack_14c);
      }
      uStack_130 = (undefined8 **)0x0;
      if (plStack_108 != &lStack_100 && plStack_108 != (long *)0x0) {
        _free(plStack_108[-1]);
      }
    }
    FUN_109ffca30(&puStack_f0);
    if (pppppppiStack_d8 != (int *******)0x0) {
      pppppppiStack_d0 = pppppppiStack_d8;
      __ZdlPv();
    }
    if (uVar35 != 0) {
      __ZdlPv(uVar35);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return uVar59;
    }
    ___stack_chk_fail();
  }
  else if (uVar35 < 0x5555555555555556) {
    FUN_10a001904();
    uStack_4a0 = uVar35 + param_2 * 3;
    uVar43 = param_3[1];
    goto LAB_109ffa9ac;
  }
  FUN_10a0018f0();
LAB_109ffc648:
                    /* WARNING: Does not return */
  pcVar33 = (code *)SoftwareBreakpoint(1,0x109ffc64c);
  (*pcVar33)();
}



/* Entry: 109ffc8bc; end: 109ffc947;  */

long * FUN_109ffc8bc(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *param_1;
  if ((ulong)(param_1[2] - lVar7 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10a001940();
      FUN_10a003db8();
      if (*param_1 != 0) {
        return (long *)(*param_1 + 0x38);
      }
      pcVar6 = "map::at:  key not found";
      FUN_109ffdddc();
      if (*(long *)((long)pcVar6 + 0x60) != 0) {
        *(long *)((long)pcVar6 + 0x68) = *(long *)((long)pcVar6 + 0x60);
        __ZdlPv();
      }
      if (*(long *)((long)pcVar6 + 0x38) != 0) {
        piVar1 = (int *)(*(long *)((long)pcVar6 + 0x38) + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(pcVar6);
        }
      }
      *(long *)((long)pcVar6 + 0x38) = 0;
      *(long *)((long)pcVar6 + 0x18) = 0;
      *(long *)((long)pcVar6 + 0x10) = 0;
      *(long *)((long)pcVar6 + 0x28) = 0;
      *(long *)((long)pcVar6 + 0x20) = 0;
      if (0 < *(int *)((long)pcVar6 + 4)) {
        lVar7 = 0;
        lVar9 = *(long *)((long)pcVar6 + 0x40);
        do {
          *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)((long)pcVar6 + 4));
      }
      plVar8 = *(long **)((long)pcVar6 + 0x48);
      if (plVar8 != (long *)((long)pcVar6 + 0x50) && plVar8 != (long *)0x0) {
        _free(plVar8[-1]);
      }
      return (long *)pcVar6;
    }
    lVar9 = param_1[1];
    plVar8 = param_1;
    FUN_10a001954();
    lVar7 = (long)plVar8 + (lVar9 - lVar7);
    lVar9 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    plVar5 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = lVar7;
    param_1[2] = (long)(plVar8 + param_2);
    param_1 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar5;
    }
  }
  return param_1;
}



/* Entry: 109ffc948; end: 109ffc983;  */

char * FUN_109ffc948(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined1 auStack_18 [8];
  
  FUN_10a003db8(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (char *)(*param_1 + 0x38);
  }
  pcVar5 = "map::at:  key not found";
  FUN_109ffdddc();
  if (*(long *)(pcVar5 + 0x60) != 0) {
    *(long *)(pcVar5 + 0x68) = *(long *)(pcVar5 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(pcVar5 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(pcVar5 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(pcVar5);
    }
  }
  pcVar5[0x38] = '\0';
  pcVar5[0x39] = '\0';
  pcVar5[0x3a] = '\0';
  pcVar5[0x3b] = '\0';
  pcVar5[0x3c] = '\0';
  pcVar5[0x3d] = '\0';
  pcVar5[0x3e] = '\0';
  pcVar5[0x3f] = '\0';
  pcVar5[0x18] = '\0';
  pcVar5[0x19] = '\0';
  pcVar5[0x1a] = '\0';
  pcVar5[0x1b] = '\0';
  pcVar5[0x1c] = '\0';
  pcVar5[0x1d] = '\0';
  pcVar5[0x1e] = '\0';
  pcVar5[0x1f] = '\0';
  pcVar5[0x10] = '\0';
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  pcVar5[0x28] = '\0';
  pcVar5[0x29] = '\0';
  pcVar5[0x2a] = '\0';
  pcVar5[0x2b] = '\0';
  pcVar5[0x2c] = '\0';
  pcVar5[0x2d] = '\0';
  pcVar5[0x2e] = '\0';
  pcVar5[0x2f] = '\0';
  pcVar5[0x20] = '\0';
  pcVar5[0x21] = '\0';
  pcVar5[0x22] = '\0';
  pcVar5[0x23] = '\0';
  pcVar5[0x24] = '\0';
  pcVar5[0x25] = '\0';
  pcVar5[0x26] = '\0';
  pcVar5[0x27] = '\0';
  if (0 < *(int *)(pcVar5 + 4)) {
    lVar6 = 0;
    lVar8 = *(long *)(pcVar5 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(pcVar5 + 4));
  }
  pcVar7 = *(char **)(pcVar5 + 0x48);
  if (pcVar7 != pcVar5 + 0x50 && pcVar7 != (char *)0x0) {
    _free(*(undefined8 *)(pcVar7 + -8));
  }
  return pcVar5;
}



/* Entry: 109ffc984; end: 109ffca2f;  */

long FUN_109ffc984(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109ffca30; end: 109ffca8f;  */

long * FUN_109ffca30(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x78;
        FUN_10a001b84(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109ffca90; end: 109ffddc7;  */

void FUN_109ffca90(float *param_1,uint *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  char cVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uStack_5e8;
  uint *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b0;
  long lStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 auStack_598 [272];
  undefined4 uStack_488;
  int iStack_484;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  long lStack_450;
  int *piStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  int *piStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  uint uStack_3f8;
  int iStack_3f4;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c0;
  int *piStack_3b8;
  long *plStack_3b0;
  long alStack_3a8 [2];
  uint auStack_398 [2];
  int iStack_390;
  int iStack_38c;
  long lStack_388;
  int *piStack_358;
  long *plStack_350;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_228;
  undefined8 **ppuStack_220;
  long *plStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  uint *apuStack_1f8 [5];
  long alStack_1d0 [3];
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [288];
  float *pfVar24;
  
  apuStack_1f8[1] = (uint *)0x0;
  uStack_200 = (long *)CONCAT44(uStack_200._4_4_,0x1010000);
  apuStack_1f8[0] = param_2;
  FUN_10a0f4994(auStack_398,&uStack_200,1);
  FUN_109fee68c(&uStack_5e8,param_2 + 0x30,1);
  FUN_109fee68c(&uStack_260,param_2 + 0x30,8);
  func_0x000109a7cd1c(&uStack_200,&uStack_5e8,&uStack_260);
  FUN_10a003124(&uStack_3f8,&uStack_200);
  func_0x00010918eb6c(&uStack_200);
  if (lStack_228 != 0) {
    piVar1 = (int *)(lStack_228 + 0x14);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      func_0x000109a848d4(&uStack_260);
    }
  }
  lStack_228 = 0;
  uStack_248 = 0;
  lStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  if (0 < uStack_260._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)ppuStack_220 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_260._4_4_);
  }
  if (plStack_218 != &lStack_210 && plStack_218 != (long *)0x0) {
    _free(plStack_218[-1]);
  }
  if (lStack_5b0 != 0) {
    piVar1 = (int *)(lStack_5b0 + 0x14);
    do {
      iVar14 = *piVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 + -1 == 0) {
      func_0x000109a848d4(&uStack_5e8);
    }
  }
  lStack_5b0 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  if (0 < uStack_5e8._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_5a8 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_5e8._4_4_);
  }
  if (puStack_5a0 != auStack_598 && puStack_5a0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_5a0 + -8));
  }
  lVar16 = 0;
  uStack_408 = 0x2a00000024;
  uStack_410 = 0x4400000030;
  puVar31 = (undefined8 *)((ulong)&uStack_260 | 4);
  uStack_400 = 0x300000002a;
  puVar30 = (undefined8 *)((ulong)&uStack_2c0 | 4);
  puVar25 = (undefined8 *)((ulong)&uStack_488 | 4);
  do {
    uStack_5e8 = (long *)0x7fffffff80000000;
    func_0x000109a84930(&uStack_200,param_2 + 0x18,(long)&uStack_410 + lVar16,&uStack_5e8);
    *(undefined8 *)((long)puVar31 + 0x34) = 0;
    *(undefined8 *)((long)puVar31 + 0x2c) = 0;
    puVar31[3] = 0;
    puVar31[2] = 0;
    puVar31[5] = 0;
    puVar31[4] = 0;
    puVar31[1] = 0;
    *puVar31 = 0;
    lStack_210 = 0;
    uStack_208 = 0;
    uStack_260 = (undefined8 *)CONCAT44(uStack_260._4_4_,0x42ff0005);
    ppuStack_220 = &puStack_258;
    plStack_218 = &lStack_210;
    func_0x000109390e94(&uStack_260,&uStack_200);
    if (alStack_1d0[1] != 0) {
      piVar1 = (int *)(alStack_1d0[1] + 0x14);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_200);
      }
    }
    alStack_1d0[1] = 0;
    apuStack_1f8[2] = (uint *)0x0;
    apuStack_1f8[1] = (uint *)0x0;
    apuStack_1f8[4] = (uint *)0x0;
    apuStack_1f8[3] = (uint *)0x0;
    if (0 < uStack_200._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(alStack_1d0[2] + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_200._4_4_);
    }
    if (puStack_1b8 != auStack_1b0 && puStack_1b8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_1b8 + -8));
    }
    uStack_2d0 = (int *)0x0;
    uStack_2d8 = (int *)0x0;
    uStack_2c8 = 0;
    apuStack_1f8[1] = (uint *)0x0;
    uStack_200 = (long *)CONCAT44(uStack_200._4_4_,0x81010005);
    uStack_5e8 = (long *)CONCAT44(uStack_5e8._4_4_,0x82030004);
    puStack_5e0 = (uint *)&uStack_2d8;
    uStack_5d8 = 0;
    apuStack_1f8[0] = (uint *)&uStack_260;
    func_0x000109ae2358(&uStack_200,&uStack_5e8,0,1);
    uStack_428 = (int *)0x0;
    uStack_420 = (int *)0x0;
    piStack_418 = (int *)0x0;
    func_0x0001092c8954(&uStack_428,(long)uStack_2d0 - (long)uStack_2d8 >> 2);
    piVar7 = uStack_2d0;
    for (piVar1 = uStack_2d8; piVar1 != piVar7; piVar1 = piVar1 + 1) {
      pfVar21 = (float *)(lStack_250 + *plStack_218 * (long)*piVar1);
      iVar14 = (int)*pfVar21;
      uStack_200._4_4_ = (int)((ulong)uStack_200 >> 0x20);
      uStack_200 = (long *)CONCAT44(uStack_200._4_4_,iVar14);
      iVar19 = (int)pfVar21[1];
      uStack_5e8._4_4_ = (int)((ulong)uStack_5e8 >> 0x20);
      uStack_5e8 = (long *)CONCAT44(uStack_5e8._4_4_,iVar19);
      if (uStack_420 < piStack_418) {
        piVar13 = uStack_420 + 2;
        *uStack_420 = iVar14;
        uStack_420[1] = iVar19;
      }
      else {
        piVar13 = (int *)&uStack_428;
        func_0x0001094c5dd8(piVar13,&uStack_200,&uStack_5e8);
      }
      uStack_420 = piVar13;
    }
    uStack_5e8 = (long *)NEON_rev64(*(undefined8 *)piStack_358,4);
    func_0x000109a829e8(&uStack_200,&uStack_5e8,0);
    uStack_2c0 = (undefined8 *)CONCAT44(uStack_2c0._4_4_,0x42ff0000);
    *(undefined8 *)((long)puVar30 + 0x34) = 0;
    *(undefined8 *)((long)puVar30 + 0x2c) = 0;
    puVar30[3] = 0;
    puVar30[2] = 0;
    puVar30[5] = 0;
    puVar30[4] = 0;
    puVar30[1] = 0;
    *puVar30 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    puStack_280 = &uStack_2b8;
    puStack_278 = &uStack_270;
    (**(code **)(*uStack_200 + 0x18))(uStack_200,&uStack_200,&uStack_2c0,0xffffffff);
    func_0x00010918eb6c(&uStack_200);
    uStack_5e8 = (long *)CONCAT44(uStack_5e8._4_4_,0x3010000);
    uStack_5d8 = 0;
    uStack_488 = 0x8103000c;
    uStack_480 = &uStack_428;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_200 = (long *)0x406fe00000000000;
    apuStack_1f8[1] = (uint *)0x0;
    apuStack_1f8[2] = (uint *)0x0;
    apuStack_1f8[0] = (uint *)0x0;
    puStack_5e0 = (uint *)&uStack_2c0;
    func_0x000109aefa18(&uStack_5e8,&uStack_488,&uStack_200,8,0);
    func_0x000109a7f188(&uStack_5e8,&uStack_2c0);
    uStack_488 = 0x42ff0000;
    *(undefined8 *)((long)puVar25 + 0x34) = 0;
    *(undefined8 *)((long)puVar25 + 0x2c) = 0;
    puVar25[3] = 0;
    puVar25[2] = 0;
    puVar25[5] = 0;
    puVar25[4] = 0;
    puVar25[1] = 0;
    *puVar25 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    piStack_448 = (int *)&uStack_480;
    puStack_440 = &uStack_438;
    (**(code **)(*uStack_5e8 + 0x18))(uStack_5e8,&uStack_5e8,&uStack_488,0xffffffff);
    func_0x000109a7ef1c(&uStack_200,&uStack_3f8,&uStack_488);
    (**(code **)(*uStack_200 + 0x18))(uStack_200,&uStack_200,&uStack_3f8,0);
    func_0x00010918eb6c(&uStack_200);
    puVar6 = uStack_480;
    if (lStack_450 != 0) {
      piVar1 = (int *)(lStack_450 + 0x14);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_488);
        puVar6 = uStack_480;
      }
    }
    lStack_450 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    if (0 < iStack_484) {
      lVar17 = 0;
      do {
        piStack_448[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_484);
    }
    uStack_480 = puVar6;
    if (puStack_440 != &uStack_438 && puStack_440 != (undefined8 *)0x0) {
      _free(puStack_440[-1]);
    }
    func_0x00010918eb6c(&uStack_5e8);
    if (lStack_288 != 0) {
      piVar1 = (int *)(lStack_288 + 0x14);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_2c0);
      }
    }
    lStack_288 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    if (0 < uStack_2c0._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_280 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_2c0._4_4_);
    }
    if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
      _free(puStack_278[-1]);
    }
    if (uStack_428 != (int *)0x0) {
      uStack_420 = uStack_428;
      __ZdlPv();
    }
    if (uStack_2d8 != (int *)0x0) {
      uStack_2d0 = uStack_2d8;
      __ZdlPv();
    }
    if (lStack_228 != 0) {
      piVar1 = (int *)(lStack_228 + 0x14);
      do {
        iVar14 = *piVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(&uStack_260);
      }
    }
    lStack_228 = 0;
    uStack_248 = 0;
    lStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    if (0 < uStack_260._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)ppuStack_220 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_260._4_4_);
    }
    if (plStack_218 != &lStack_210 && plStack_218 != (long *)0x0) {
      _free(plStack_218[-1]);
    }
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x18);
  func_0x000109a7ea0c(&uStack_200,0x406e400000000000,&uStack_3f8);
  (**(code **)(*uStack_200 + 0x18))(uStack_200,&uStack_200,&uStack_3f8,0);
  func_0x00010918eb6c(&uStack_200);
  apuStack_1f8[1] = (uint *)0x0;
  uStack_200 = (long *)CONCAT44(uStack_200._4_4_,0x1010000);
  puStack_5e0 = auStack_398;
  uStack_5e8 = (long *)CONCAT44(uStack_5e8._4_4_,0x2010000);
  uStack_5d8 = 0;
  apuStack_1f8[0] = puStack_5e0;
  func_0x000109ac9fc8(&uStack_200,&uStack_5e8,0x2d,0);
  uStack_5e8 = (long *)&UNK_10f630d58;
  puStack_5e0 = (uint *)0x22;
  if ((piStack_358[1] == piStack_3b8[1]) && (*piStack_358 == *piStack_3b8)) {
    uStack_5e8 = (long *)&UNK_10f630d7b;
    puStack_5e0 = (uint *)0x19;
    if ((auStack_398[0] & 0xfff) == 0x10) {
      uStack_5e8 = (long *)&UNK_10f630d95;
      puStack_5e0 = (uint *)0x18;
      if ((uStack_3f8 & 0xfff) == 0) {
        apuStack_1f8[0] = (uint *)0x0;
        uStack_200 = (long *)0x0;
        apuStack_1f8[2] = (uint *)0x0;
        apuStack_1f8[1] = (uint *)0x0;
        apuStack_1f8[4] = (uint *)0x0;
        apuStack_1f8[3] = (uint *)0x0;
        alStack_1d0[1] = 0;
        alStack_1d0[0] = 0;
        alStack_1d0[2] = 0;
        if (0 < iStack_390) {
          lVar16 = 0;
          iVar14 = iStack_390;
          iVar19 = iStack_38c;
          do {
            if (0 < iVar19) {
              lVar26 = 0;
              lVar17 = 0;
              do {
                if (*(char *)(lStack_3e8 + *plStack_3b0 * lVar16 + lVar17) != '\0') {
                  lVar28 = 0;
                  lVar2 = lStack_388 + lVar26 + lVar16 * *plStack_350;
                  puVar25 = &uStack_200;
                  do {
                    uVar32 = NEON_ucvtf((uint)*(byte *)(lVar2 + lVar28));
                    uStack_5e8 = (long *)CONCAT44(uStack_5e8._4_4_,uVar32);
                    FUN_10a001c34(puVar25,&uStack_5e8);
                    lVar28 = lVar28 + 1;
                    puVar25 = puVar25 + 3;
                    iVar19 = iStack_38c;
                  } while (lVar28 != 3);
                }
                lVar17 = lVar17 + 1;
                lVar26 = lVar26 + 3;
                iVar14 = iStack_390;
              } while (lVar17 < iVar19);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar14);
        }
        lVar16 = 0;
        puStack_258 = (undefined8 *)((ulong)puStack_258 & 0xffffffff00000000);
        uStack_260 = (undefined8 *)0x0;
        plVar27 = (long *)((ulong)&uStack_200 | 8);
        do {
          lVar17 = plVar27[-1];
          lVar26 = *plVar27;
          uStack_5e8 = (long *)&UNK_10f630dae;
          puStack_5e0 = (uint *)0x24;
          if (lVar17 == lVar26) {
            FUN_10a0edfc4(&uStack_5e8);
            goto LAB_109ffdb5c;
          }
          uVar29 = lVar26 - lVar17;
          uVar18 = uVar29;
          if (lVar17 + (long)(int)(uVar29 >> 3) * 4 != lVar26) {
            FUN_10a001d40();
            lVar17 = plVar27[-1];
            uVar18 = *plVar27 - lVar17;
          }
          uVar29 = (long)(uVar29 * 0x20000000) >> 0x20;
          if ((ulong)((long)uVar18 >> 2) <= uVar29) goto LAB_109ffdb5c;
          *(undefined4 *)((long)&uStack_260 + lVar16) = *(undefined4 *)(lVar17 + uVar29 * 4);
          lVar16 = lVar16 + 4;
          plVar27 = plVar27 + 3;
        } while (lVar16 != 0xc);
        lVar16 = 0;
        uStack_2c0 = uStack_260;
        uStack_2b8 = (undefined8 *)CONCAT44(uStack_2b8._4_4_,puStack_258._0_4_);
        puStack_5e0 = (uint *)((ulong)puStack_5e0 & 0xffffffff00000000);
        uStack_5e8 = (long *)0x0;
        do {
          pfVar21 = (float *)apuStack_1f8[lVar16 * 3 + -1];
          pfVar4 = (float *)apuStack_1f8[lVar16 * 3];
          if (pfVar21 == pfVar4) {
            dVar34 = 0.0;
          }
          else {
            dVar34 = 0.0;
            pfVar23 = pfVar21;
            do {
              pfVar24 = pfVar23 + 1;
              dVar37 = (double)(*pfVar23 - *(float *)((long)&uStack_2c0 + lVar16 * 4));
              dVar34 = dVar34 + dVar37 * dVar37;
              pfVar23 = pfVar24;
            } while (pfVar24 != pfVar4);
          }
          *(float *)((long)&uStack_5e8 + lVar16 * 4) =
               (float)SQRT(dVar34 / (double)(((long)pfVar4 - (long)pfVar21 >> 2) - 1));
          lVar16 = lVar16 + 1;
        } while (lVar16 != 3);
        lVar16 = 0;
        *(undefined8 **)param_1 = uStack_260;
        param_1[2] = puStack_258._0_4_;
        *(long **)(param_1 + 3) = uStack_5e8;
        param_1[5] = puStack_5e0._0_4_;
        do {
          if (*(long *)((long)alStack_1d0 + lVar16) != 0) {
            *(long *)((long)alStack_1d0 + lVar16 + 8) = *(long *)((long)alStack_1d0 + lVar16);
            __ZdlPv();
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x48);
        fVar41 = *param_1;
        piStack_448 = (int *)&uStack_480;
        lStack_450 = 0;
        uStack_454 = 0;
        uStack_45c = 0;
        uStack_458 = 0;
        uStack_464 = 0;
        uStack_460 = 0;
        uStack_46c = 0;
        uStack_468 = 0;
        uStack_474 = 0;
        uStack_470 = 0;
        uStack_480._4_4_ = 0;
        uStack_478 = 0;
        iStack_484 = 0;
        uStack_480._0_4_ = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_488 = 0x42ff0010;
        puStack_440 = &uStack_438;
        FUN_10a002c4c(&uStack_488,auStack_398);
        FUN_109fee68c(&uStack_260,param_2 + 0x30,8);
        FUN_109fee68c(&uStack_2c0,param_2 + 0x30,7);
        func_0x000109a7cd1c(&uStack_200,&uStack_260,&uStack_2c0);
        FUN_10a003124(&uStack_5e8,&uStack_200);
        func_0x00010918eb6c(&uStack_200);
        if (lStack_288 != 0) {
          piVar1 = (int *)(lStack_288 + 0x14);
          do {
            iVar14 = *piVar1;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 + -1 == 0) {
            func_0x000109a848d4(&uStack_2c0);
          }
        }
        lStack_288 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        if (0 < uStack_2c0._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)((long)puStack_280 + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_2c0._4_4_);
        }
        if (puStack_278 != &uStack_270 && puStack_278 != (undefined8 *)0x0) {
          _free(puStack_278[-1]);
        }
        if (lStack_228 != 0) {
          piVar1 = (int *)(lStack_228 + 0x14);
          do {
            iVar14 = *piVar1;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 + -1 == 0) {
            func_0x000109a848d4(&uStack_260);
          }
        }
        lStack_228 = 0;
        uStack_248 = 0;
        lStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        if (0 < uStack_260._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)((long)ppuStack_220 + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_260._4_4_);
        }
        if (plStack_218 != &lStack_210 && plStack_218 != (long *)0x0) {
          _free(plStack_218[-1]);
        }
        uStack_2d8 = (int *)0x3000000024;
        uStack_428 = (int *)0x7fffffff80000000;
        func_0x000109a84930(&uStack_200,param_2 + 0x18,&uStack_2d8,&uStack_428);
        lStack_250 = 0;
        uStack_260 = (undefined8 *)CONCAT44(uStack_260._4_4_,0x1010000);
        puStack_258 = &uStack_200;
        func_0x000109b42928(&uStack_2c0,&uStack_260);
        iVar14 = (int)uStack_2c0;
        iVar19 = uStack_2c0._4_4_;
        iVar22 = (int)uStack_2b8;
        iVar8 = uStack_2b8._4_4_;
        if (alStack_1d0[1] != 0) {
          piVar1 = (int *)(alStack_1d0[1] + 0x14);
          do {
            iVar3 = *piVar1;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_200);
          }
        }
        alStack_1d0[1] = 0;
        apuStack_1f8[2] = (uint *)0x0;
        apuStack_1f8[1] = (uint *)0x0;
        apuStack_1f8[4] = (uint *)0x0;
        apuStack_1f8[3] = (uint *)0x0;
        if (0 < uStack_200._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)(alStack_1d0[2] + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_200._4_4_);
        }
        if (puStack_1b8 != auStack_1b0 && puStack_1b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1b8 + -8));
        }
        fVar33 = (float)iVar14;
        fVar35 = (float)iVar19;
        fVar36 = (float)(iVar22 + iVar14);
        fVar38 = (float)(iVar8 + iVar19);
        fVar39 = (fVar36 - fVar33) * 0.5 * 0.5;
        fVar40 = (fVar38 - fVar35) * 0.5;
        uVar15 = (uint)(fVar33 - fVar39);
        uVar20 = (uint)(fVar35 - fVar40);
        iVar19 = (int)(fVar39 + fVar36);
        iVar22 = (int)(fVar40 + fVar38);
        uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
        iVar14 = piStack_448[1];
        if (iVar19 <= piStack_448[1]) {
          iVar14 = iVar19;
        }
        iVar19 = *piStack_448;
        if (iVar22 <= *piStack_448) {
          iVar19 = iVar22;
        }
        puStack_258 = (undefined8 *)0x0;
        uStack_260 = (undefined8 *)0x0;
        lStack_250 = 0;
        uStack_428 = (int *)CONCAT44(uVar20,uVar15);
        uStack_420 = (int *)CONCAT44(iVar19 - uVar20,iVar14 - uVar15);
        func_0x000109a852c8(&uStack_200,&uStack_488,&uStack_428);
        uStack_2b0 = 0;
        uStack_2c0 = (undefined8 *)CONCAT44(uStack_2c0._4_4_,0x81010010);
        uStack_2d8 = (int *)CONCAT44(uStack_2d8._4_4_,0x82050000);
        uStack_2d0 = (int *)&uStack_260;
        uStack_2c8 = 0;
        uStack_2b8 = &uStack_200;
        func_0x000109a3dcec(&uStack_2c0,&uStack_2d8);
        if (alStack_1d0[1] != 0) {
          piVar1 = (int *)(alStack_1d0[1] + 0x14);
          do {
            iVar22 = *piVar1;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar22 + -1 == 0) {
            func_0x000109a848d4(&uStack_200);
          }
        }
        alStack_1d0[1] = 0;
        apuStack_1f8[2] = (uint *)0x0;
        apuStack_1f8[1] = (uint *)0x0;
        apuStack_1f8[4] = (uint *)0x0;
        apuStack_1f8[3] = (uint *)0x0;
        if (0 < uStack_200._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)(alStack_1d0[2] + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_200._4_4_);
        }
        if (puStack_1b8 != auStack_1b0 && puStack_1b8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1b8 + -8));
        }
        puVar25 = uStack_260;
        if (puStack_258 != uStack_260) {
          uStack_2d8 = (int *)CONCAT44(uVar20,uVar15);
          uStack_2d0 = (int *)CONCAT44(iVar19 - uVar20,iVar14 - uVar15);
          func_0x000109a852c8(&uStack_200,&uStack_5e8,&uStack_2d8);
          FUN_10a0f4fd8(&uStack_2c0,puVar25,&uStack_200);
          if (alStack_1d0[1] != 0) {
            piVar1 = (int *)(alStack_1d0[1] + 0x14);
            do {
              iVar14 = *piVar1;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_200);
            }
          }
          alStack_1d0[1] = 0;
          apuStack_1f8[2] = (uint *)0x0;
          apuStack_1f8[1] = (uint *)0x0;
          apuStack_1f8[4] = (uint *)0x0;
          apuStack_1f8[3] = (uint *)0x0;
          if (0 < uStack_200._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)(alStack_1d0[2] + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_200._4_4_);
          }
          if (puStack_1b8 != auStack_1b0 && puStack_1b8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_1b8 + -8));
          }
          puVar25 = uStack_2c0;
          puVar30 = uStack_2c0;
          FUN_10a0f5094(0x3fecccccc0000000,uStack_2c0,(long)uStack_2b8 - (long)uStack_2c0 >> 2);
          if (puVar25 != (undefined8 *)0x0) {
            uStack_2b8 = puVar25;
            __ZdlPv(puVar25);
          }
          uStack_200 = &uStack_260;
          FUN_10a0020a8(&uStack_200);
          if (lStack_5b0 != 0) {
            piVar1 = (int *)(lStack_5b0 + 0x14);
            do {
              iVar14 = *piVar1;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_5e8);
            }
          }
          lStack_5b0 = 0;
          uStack_5d0 = 0;
          uStack_5d8 = 0;
          uStack_5c0 = 0;
          uStack_5c8 = 0;
          if (0 < uStack_5e8._4_4_) {
            lVar16 = 0;
            do {
              *(undefined4 *)(lStack_5a8 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_5e8._4_4_);
          }
          if (puStack_5a0 != auStack_598 && puStack_5a0 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_5a0 + -8));
          }
          if (lStack_450 != 0) {
            piVar1 = (int *)(lStack_450 + 0x14);
            do {
              iVar14 = *piVar1;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_488);
            }
          }
          lStack_450 = 0;
          uStack_470 = 0;
          uStack_46c = 0;
          uStack_478 = 0;
          uStack_474 = 0;
          uStack_460 = 0;
          uStack_45c = 0;
          uStack_468 = 0;
          uStack_464 = 0;
          if (0 < iStack_484) {
            lVar16 = 0;
            do {
              piStack_448[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_484);
          }
          if (puStack_440 != &uStack_438 && puStack_440 != (undefined8 *)0x0) {
            _free(puStack_440[-1]);
          }
          fVar35 = fVar41 / (float)((ulong)puVar30 & 0xffffffff);
          fVar33 = 1.0;
          if (fVar35 <= 1.0) {
            fVar33 = fVar35;
          }
          fVar36 = 0.75;
          if (0.75 <= fVar35) {
            fVar36 = fVar33;
          }
          if (fVar36 < 0.999999) {
            fVar41 = fVar41 / 255.0;
            fVar35 = (((fVar41 + -0.55) * (fVar41 + -0.55)) / 0.010000001) * -2.0;
            _expf();
            fVar33 = (((fVar41 + -0.62) * (fVar41 + -0.62)) / 0.010000001) * -2.0;
            _expf();
            if (fVar33 <= fVar35) {
              fVar33 = fVar35;
            }
            bVar10 = false;
            bVar11 = true;
            bVar12 = false;
            if (fVar41 < 0.62) {
              bVar10 = false;
              bVar11 = false;
              bVar12 = true;
              if (!NAN(fVar41)) {
                bVar10 = fVar41 < 0.55;
                bVar11 = fVar41 == 0.55;
                bVar12 = false;
              }
            }
            fVar41 = 1.0;
            if (bVar11 || bVar10 != bVar12) {
              fVar41 = fVar33;
            }
            fVar36 = 1.0 - fVar41 * (1.0 - fVar36);
          }
          *param_1 = fVar36 * *param_1;
          if (lStack_3c0 != 0) {
            piVar1 = (int *)(lStack_3c0 + 0x14);
            do {
              iVar14 = *piVar1;
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              func_0x000109a848d4(&uStack_3f8);
            }
          }
          lStack_3c0 = 0;
          uStack_3e0 = 0;
          lStack_3e8 = 0;
          uStack_3d0 = 0;
          uStack_3d8 = 0;
          if (0 < iStack_3f4) {
            lVar16 = 0;
            do {
              piStack_3b8[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_3f4);
          }
          if (plStack_3b0 != alStack_3a8 && plStack_3b0 != (long *)0x0) {
            _free(plStack_3b0[-1]);
          }
          FUN_10a0021b8(auStack_398);
          return;
        }
        goto LAB_109ffdb5c;
      }
    }
  }
  FUN_10a0edfc4(&uStack_5e8);
LAB_109ffdb5c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109ffdb60);
  (*pcVar9)();
}



/* Entry: 109ffddc8; end: 109ffdddb;  */

void FUN_109ffddc8(void)

{
  long *plVar1;
  long *plVar2;
  
  FUN_109ffdddc(&UNK_10f630b80);
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffde2c();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 109ffdddc; end: 109ffde2b;  */

void FUN_109ffdddc(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffde2c();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 109ffde2c; end: 109ffde63;  */

void FUN_109ffde2c(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 109ffde64; end: 109ffdeb3;  */

void FUN_109ffde64(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 109ffdeb4; end: 109ffdeff;  */

void FUN_109ffdeb4(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 109ffdf00; end: 109ffdf97;  */

void FUN_109ffdf00(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar2 = param_1;
    }
    else {
      puVar1 = (undefined8 *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (undefined8 *)((param_4 | 7) + 1);
      }
      puVar2 = puVar1;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = puVar2;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)puVar2 = *param_2;
      puVar2 = (undefined8 *)((long)puVar2 + 1);
    }
    *(undefined1 *)puVar2 = 0;
    return;
  }
  func_0x000109ffde50();
  FUN_109ffde64(&UNK_10f630bba);
  puVar3 = &UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    __Znwm((long)param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    func_0x000107c2b04c();
    puVar4 = *(undefined1 **)(puVar3 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 **)(puVar3 + 8) = puVar4;
  }
  return;
}



/* Entry: 109ffdf98; end: 109ffdfbf;  */

void FUN_109ffdf98(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  FUN_109ffde64(&UNK_10f630bba);
  puVar1 = &UNK_10f630bba;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3e == 0) {
    __Znwm((long)param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    func_0x000107c2b04c();
    puVar2 = *(undefined1 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 109ffdfc0; end: 109ffdff3;  */

void FUN_109ffdfc0(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    __Znwm((long)param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    func_0x000107c2b04c();
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109ffdff4; end: 109ffe063;  */

void FUN_109ffdff4(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    func_0x000107c2b04c(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109ffe064; end: 109ffe0ff;  */

undefined8 * FUN_109ffe064(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (param_2 != 0) {
      FUN_109ffe174(param_1);
      lVar3 = param_1[1];
      _bzero(lVar3,param_2 << 2);
      param_1[1] = lVar3 + param_2 * 4;
    }
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_109ffe0e0;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = puVar2;
  }
  _memmove(puVar2,param_2,param_3);
LAB_109ffe0e0:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 109ffe100; end: 109ffe173;  */

undefined8 * FUN_109ffe100(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe174(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 109ffe174; end: 109ffe1ab;  */

undefined1  [16] FUN_109ffe174(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_109ffe1c0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_109ffe1ac();
  puVar2 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    lVar3 = param_2 << 2;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar3 = 0;
  if (param_2 != 0) {
    FUN_109ffe268(puVar2);
    lVar4 = puVar2[1];
    lVar3 = param_2 << 2;
    _bzero(lVar4,lVar3);
    puVar2[1] = lVar4 + param_2 * 4;
  }
  auVar7._8_8_ = lVar3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 109ffe1ac; end: 109ffe1bf;  */

undefined1  [16] FUN_109ffe1ac(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    lVar2 = param_2 << 2;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    FUN_109ffe268(puVar1);
    lVar3 = puVar1[1];
    lVar2 = param_2 << 2;
    _bzero(lVar3,lVar2);
    puVar1[1] = lVar3 + param_2 * 4;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 109ffe1c0; end: 109ffe1f3;  */

undefined1  [16] FUN_109ffe1c0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    FUN_109ffe268(param_1);
    lVar2 = param_1[1];
    lVar1 = param_2 << 2;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + param_2 * 4;
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109ffe1f4; end: 109ffe267;  */

undefined8 * FUN_109ffe1f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe268(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 109ffe268; end: 109ffe29f;  */

undefined8 * FUN_109ffe268(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 >> 0x3e == 0) {
    puVar1 = param_1;
    FUN_109ffdfc0();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = (long)puVar1 + param_2 * 4;
    return puVar1;
  }
  func_0x000109ffdfac();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe348(param_1);
    puVar2 = (undefined4 *)param_1[1];
    puVar3 = puVar2 + param_2 * 0x18;
    do {
      *puVar2 = 0x42ff0000;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 5) = 0;
      *(undefined8 *)(puVar2 + 0xb) = 0;
      *(undefined8 *)(puVar2 + 9) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
      *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
      *(undefined8 *)(puVar2 + 0x16) = 0;
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar3);
    param_1[1] = puVar3;
  }
  return param_1;
}



/* Entry: 109ffe2a0; end: 109ffe347;  */

undefined8 * FUN_109ffe2a0(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe348(param_1);
    puVar1 = (undefined4 *)param_1[1];
    puVar2 = puVar1 + param_2 * 0x18;
    do {
      *puVar1 = 0x42ff0000;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 1) = 0;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined4 **)(puVar1 + 0x10) = puVar1 + 2;
      *(undefined4 **)(puVar1 + 0x12) = puVar1 + 0x14;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1 = puVar1 + 0x18;
    } while (puVar1 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 109ffe348; end: 109ffe38f;  */

void FUN_109ffe348(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_109ffe3a4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xc);
    return;
  }
  FUN_109ffe390();
  plVar1 = (long *)&UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_109ffe458(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109ffe390; end: 109ffe3a3;  */

void FUN_109ffe390(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&UNK_10f630bba;
  FUN_109ffde64();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_109ffe458(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109ffe3a4; end: 109ffe3e7;  */

void FUN_109ffe3a4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_109ffe458(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ffe3e8; end: 109ffe457;  */

void FUN_109ffe3e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_109ffe458(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ffe458; end: 109ffe4f7;  */

void FUN_109ffe458(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}


