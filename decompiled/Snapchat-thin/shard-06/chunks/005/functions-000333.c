/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104973d2c; end: 104973ddf; -[FBSDKModelManager getThresholdsForKey:] */

void FUN_104973d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (lRam000000011369d498 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lRam000000011369d498;
    func_0x00010c0e00e0(lRam000000011369d498,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da51d8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104973de0; end: 104974197; -[FBSDKModelManager processIntegrity:] */

uint FUN_104973de0(float param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long *plStack_78;
  
  _objc_retain();
  lVar9 = param_4;
  func_0x00010c08fa60();
  uVar10 = 0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dabe78;
  if ((lVar9 != 0) && (lRam000000011369d4b8 != 0)) {
    func_0x00010bf39c40();
    func_0x00010bfc66e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126adf28;
    func_0x00010c0db6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    puVar5 = puVar12;
    _strlen();
    if ((int)puVar5 != 0) {
      puVar5 = PTR_PTR_1126adf30;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfcb240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf529e0();
      puVar7 = param_2;
      func_0x00010bf529e0();
      if (puVar5 == puVar7) {
        func_0x00010002d4d8(auStack_d0,"integrity_detect");
        FUN_104974198(auStack_b8,auStack_d0,puVar12,0);
        if (cStack_b9 < '\0') {
          __ZdlPv(auStack_d0[0]);
        }
        puVar12 = (undefined *)0x0;
        ppuVar11 = &PTR____CFConstantStringClassReference_110dabe78;
        do {
          puVar5 = puVar6;
          func_0x00010bf529e0();
          if (puVar5 <= puVar12) goto LAB_104973f80;
          fVar14 = *(float *)(lStack_80 + (long)puVar12 * 4);
          puVar5 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          fVar13 = param_1;
          _objc_release(puVar5);
          puVar12 = puVar12 + 1;
          bVar3 = fVar14 < param_1;
          param_1 = fVar13;
        } while (bVar3);
        ppuVar11 = (undefined **)PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78);
        _objc_retainAutoreleasedReturnValue();
LAB_104973f80:
        if (plStack_78 != (long *)0x0) {
          plVar1 = plStack_78 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
          }
        }
        if (lStack_98 != 0) {
          lStack_90 = lStack_98;
          __ZdlPv();
        }
        if (lStack_b0 != 0) {
          lStack_a8 = lStack_b0;
          __ZdlPv();
        }
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(param_2);
        ppuVar8 = ppuVar11;
        func_0x00010c0720c0(ppuVar11);
        uVar10 = (uint)ppuVar8 ^ 1;
        goto LAB_10497402c;
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    _objc_release(param_2);
    uVar10 = 0;
    ppuVar11 = &PTR____CFConstantStringClassReference_110dabe78;
  }
LAB_10497402c:
  _objc_release(ppuVar11);
  _objc_release(param_4);
  return uVar10;
}



/* Entry: 104974198; end: 104975553;  */

long FUN_104974198(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
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
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_570;
  long lStack_568;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined4 auStack_530 [2];
  long lStack_528;
  long lStack_520;
  long lStack_510;
  long lStack_508;
  long *plStack_4f0;
  undefined4 auStack_4e8 [2];
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4c8;
  long lStack_4c0;
  long *plStack_4a8;
  undefined4 auStack_4a0 [2];
  long lStack_498;
  long lStack_490;
  long lStack_480;
  long lStack_478;
  long *plStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  int iStack_410;
  undefined4 uStack_40c;
  long lStack_408;
  long lStack_400;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined1 auStack_3c8 [8];
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_390;
  long *plStack_388;
  undefined1 auStack_380 [8];
  long lStack_378;
  long lStack_370;
  long lStack_360;
  long lStack_358;
  long *plStack_340;
  undefined1 auStack_338 [8];
  long lStack_330;
  long lStack_328;
  long lStack_318;
  long lStack_310;
  long *plStack_2f8;
  undefined1 auStack_2f0 [8];
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  long *plStack_2b0;
  undefined1 auStack_2a8 [8];
  long lStack_2a0;
  long lStack_298;
  long lStack_288;
  long lStack_280;
  long *plStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_240;
  long lStack_238;
  long *plStack_220;
  undefined8 ***apppuStack_218 [2];
  char cStack_201;
  undefined8 ***apppuStack_200 [2];
  char cStack_1e9;
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_19c [4];
  float fStack_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_158;
  long *plStack_150;
  undefined4 *puStack_148;
  undefined4 *puStack_140;
  undefined4 *puStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = 0x1e00000001;
  lStack_250 = 0;
  lStack_260 = 0;
  lStack_258 = 0;
  func_0x0001092d1c20(&lStack_260,&uStack_b8,&lStack_b0,2);
  FUN_104977dc0(auStack_1e8,&lStack_260);
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  if (param_4 == (undefined8 *)0x0) {
    puStack_1b0[0xe] = 0;
    puStack_1b0[0xb] = 0;
    puStack_1b0[10] = 0;
    puStack_1b0[0xd] = 0;
    puStack_1b0[0xc] = 0;
    puStack_1b0[7] = 0;
    puStack_1b0[6] = 0;
    puStack_1b0[9] = 0;
    puStack_1b0[8] = 0;
    puStack_1b0[3] = 0;
    puStack_1b0[2] = 0;
    puStack_1b0[5] = 0;
    puStack_1b0[4] = 0;
    puStack_1b0[1] = 0;
    *puStack_1b0 = 0;
  }
  else {
    uVar27 = param_4[1];
    uVar26 = *param_4;
    uVar29 = param_4[3];
    uVar28 = param_4[2];
    uVar30 = param_4[4];
    uVar32 = param_4[7];
    uVar31 = param_4[6];
    puStack_1b0[5] = param_4[5];
    puStack_1b0[4] = uVar30;
    puStack_1b0[7] = uVar32;
    puStack_1b0[6] = uVar31;
    puStack_1b0[1] = uVar27;
    *puStack_1b0 = uVar26;
    puStack_1b0[3] = uVar29;
    puStack_1b0[2] = uVar28;
    uVar27 = param_4[9];
    uVar26 = param_4[8];
    uVar29 = param_4[0xb];
    uVar28 = param_4[10];
    uVar31 = param_4[0xd];
    uVar30 = param_4[0xc];
    puStack_1b0[0xe] = param_4[0xe];
    puStack_1b0[0xb] = uVar29;
    puStack_1b0[10] = uVar28;
    puStack_1b0[0xd] = uVar31;
    puStack_1b0[0xc] = uVar30;
    puStack_1b0[9] = uVar27;
    puStack_1b0[8] = uVar26;
  }
  uVar21 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar21 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_104c4f768(apppuStack_200,uVar21 + 7,&lStack_260);
  ppppuVar2 = (undefined8 ****)apppuStack_200[0];
  if (-1 < cStack_1e9) {
    ppppuVar2 = apppuStack_200;
  }
  if (uVar21 != 0) {
    plVar17 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar17 = param_2;
    }
    _memmove(ppppuVar2,plVar17,uVar21);
  }
  puVar1 = (undefined4 *)((long)ppppuVar2 + uVar21);
  *(undefined4 *)((long)puVar1 + 3) = 0x74686769;
  *puVar1 = 0x6965772e;
  *(undefined1 *)((long)puVar1 + 7) = 0;
  uVar21 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar21 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_104c4f768(apppuStack_218,uVar21 + 5,&lStack_260);
  ppppuVar2 = (undefined8 ****)apppuStack_218[0];
  if (-1 < cStack_201) {
    ppppuVar2 = apppuStack_218;
  }
  if (uVar21 != 0) {
    plVar17 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar17 = param_2;
    }
    _memmove(ppppuVar2,plVar17,uVar21);
  }
  *(undefined4 *)((long)ppppuVar2 + uVar21) = 0x6169622e;
  *(undefined2 *)((undefined4 *)((long)ppppuVar2 + uVar21) + 1) = 0x73;
  func_0x00010002d4d8(&lStack_260,"embed.weight");
  lVar18 = 0x11369d4a0;
  FUN_1049780e4(0x11369d4a0,&lStack_260);
  if (lVar18 == 0) {
    func_0x000109262df8(&UNK_10f639994);
  }
  else {
    if (lStack_250 < 0) {
      __ZdlPv(lStack_260);
    }
    func_0x00010002d4d8(&lStack_260,"convs.0.weight");
    lVar16 = 0x11369d4a0;
    FUN_1049780e4(0x11369d4a0,&lStack_260);
    if (lVar16 == 0) {
      func_0x000109262df8(&UNK_10f639994);
    }
    else {
      if (lStack_250 < 0) {
        __ZdlPv(lStack_260);
      }
      func_0x00010002d4d8(&lStack_260,"convs.1.weight");
      lVar24 = 0x11369d4a0;
      FUN_1049780e4(0x11369d4a0,&lStack_260);
      if (lVar24 == 0) {
        func_0x000109262df8(&UNK_10f639994);
      }
      else {
        if (lStack_250 < 0) {
          __ZdlPv(lStack_260);
        }
        func_0x00010002d4d8(&lStack_260,"convs.2.weight");
        lVar7 = 0x11369d4a0;
        FUN_1049780e4(0x11369d4a0,&lStack_260);
        if (lVar7 == 0) {
          func_0x000109262df8(&UNK_10f639994);
        }
        else {
          if (lStack_250 < 0) {
            __ZdlPv(lStack_260);
          }
          func_0x00010002d4d8(&lStack_260,"convs.0.bias");
          lVar23 = 0x11369d4a0;
          FUN_1049780e4(0x11369d4a0,&lStack_260);
          if (lVar23 == 0) {
            func_0x000109262df8(&UNK_10f639994);
          }
          else {
            if (lStack_250 < 0) {
              __ZdlPv(lStack_260);
            }
            func_0x00010002d4d8(&lStack_260,"convs.1.bias");
            lVar8 = 0x11369d4a0;
            FUN_1049780e4(0x11369d4a0,&lStack_260);
            if (lVar8 == 0) {
              func_0x000109262df8(&UNK_10f639994);
            }
            else {
              if (lStack_250 < 0) {
                __ZdlPv(lStack_260);
              }
              func_0x00010002d4d8(&lStack_260,"convs.2.bias");
              lVar9 = 0x11369d4a0;
              FUN_1049780e4(0x11369d4a0,&lStack_260);
              if (lVar9 == 0) {
                func_0x000109262df8(&UNK_10f639994);
              }
              else {
                if (lStack_250 < 0) {
                  __ZdlPv(lStack_260);
                }
                func_0x00010002d4d8(&lStack_260,"fc1.weight");
                lVar10 = 0x11369d4a0;
                FUN_1049780e4(0x11369d4a0,&lStack_260);
                if (lVar10 == 0) {
                  func_0x000109262df8(&UNK_10f639994);
                }
                else {
                  if (lStack_250 < 0) {
                    __ZdlPv(lStack_260);
                  }
                  func_0x00010002d4d8(&lStack_260,"fc1.bias");
                  lVar11 = 0x11369d4a0;
                  FUN_1049780e4(0x11369d4a0,&lStack_260);
                  if (lVar11 == 0) {
                    func_0x000109262df8(&UNK_10f639994);
                  }
                  else {
                    if (lStack_250 < 0) {
                      __ZdlPv(lStack_260);
                    }
                    func_0x00010002d4d8(&lStack_260,"fc2.weight");
                    lVar12 = 0x11369d4a0;
                    FUN_1049780e4(0x11369d4a0,&lStack_260);
                    if (lVar12 == 0) {
                      func_0x000109262df8(&UNK_10f639994);
                    }
                    else {
                      if (lStack_250 < 0) {
                        __ZdlPv(lStack_260);
                      }
                      func_0x00010002d4d8(&lStack_260,"fc2.bias");
                      lVar13 = 0x11369d4a0;
                      FUN_1049780e4(0x11369d4a0,&lStack_260);
                      if (lVar13 == 0) {
                        func_0x000109262df8(&UNK_10f639994);
                      }
                      else {
                        if (lStack_250 < 0) {
                          __ZdlPv(lStack_260);
                        }
                        lVar14 = 0x11369d4a0;
                        FUN_1049780e4(0x11369d4a0,apppuStack_200);
                        if (lVar14 == 0) {
                          func_0x000109262df8(&UNK_10f639994);
                        }
                        else {
                          lVar15 = 0x11369d4a0;
                          FUN_1049780e4(0x11369d4a0,apppuStack_218);
                          if (lVar15 != 0) {
                            FUN_1049771c0(&lStack_260,lVar16 + 0x28);
                            FUN_1049771c0(&uStack_b8,lVar24 + 0x28);
                            FUN_1049771c0(auStack_2a8,lVar7 + 0x28);
                            FUN_104977318(auStack_2f0,lVar10 + 0x28);
                            FUN_104977318(auStack_338,lVar12 + 0x28);
                            FUN_104977318(auStack_380,lVar14 + 0x28);
                            lVar24 = param_3;
                            _strlen();
                            uStack_458 = (ulong)uStack_458._4_4_ << 0x20;
                            func_0x0001092cd11c(&iStack_410,0x80,&uStack_458);
                            lVar16 = 0;
                            do {
                              if (lVar16 < (int)lVar24) {
                                *(uint *)(CONCAT44(uStack_40c,iStack_410) + lVar16 * 4) =
                                     (uint)*(byte *)(param_3 + lVar16);
                              }
                              lVar16 = lVar16 + 1;
                            } while (lVar16 != 0x80);
                            iVar22 = *(int *)(*(long *)(lVar18 + 0x30) + 4);
                            uStack_100 = 0x8000000001;
                            uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar22);
                            uStack_450 = 0;
                            uStack_448 = 0;
                            uStack_458 = 0;
                            func_0x0001092d1c20(&uStack_458,&uStack_100,(long)&uStack_f8 + 4,3);
                            FUN_104977dc0(auStack_3c8,&uStack_458);
                            if (uStack_458 != 0) {
                              uStack_450 = uStack_458;
                              __ZdlPv();
                            }
                            lVar16 = 0;
                            lVar24 = *(long *)(lVar18 + 0x60);
                            lVar18 = lStack_390;
                            do {
                              _memcpy(lVar18,lVar24 + (long)(*(int *)(CONCAT44(uStack_40c,iStack_410
                                                                              ) + lVar16) * iVar22)
                                                      * 4,(long)iVar22 * 4);
                              lVar16 = lVar16 + 4;
                              lVar18 = lVar18 + (long)iVar22 * 4;
                            } while (lVar16 != 0x200);
                            if (CONCAT44(uStack_40c,iStack_410) != 0) {
                              lStack_408 = CONCAT44(uStack_40c,iStack_410);
                              __ZdlPv();
                            }
                            FUN_104977438(&iStack_410,auStack_3c8,&lStack_260);
                            FUN_1049778fc(&iStack_410,lVar23 + 0x28);
                            uStack_458 = uStack_458 & 0xffffffff00000000;
                            uStack_100._0_4_ = 0x7f7fffff;
                            _vDSP_vclip(uStack_3d8,1,&uStack_458,&uStack_100,uStack_3d8,1,
                                        (long)iStack_410);
                            FUN_104977438(&uStack_458,&iStack_410,&uStack_b8);
                            FUN_1049778fc(&uStack_458,lVar8 + 0x28);
                            uStack_100 = (ulong)uStack_100._4_4_ << 0x20;
                            auStack_4a0[0] = 0x7f7fffff;
                            _vDSP_vclip(uStack_420,1,&uStack_100,auStack_4a0,uStack_420,1,
                                        (long)(int)uStack_458);
                            FUN_104977974(&uStack_100,&uStack_458,2);
                            uStack_458 = CONCAT44(uStack_458._4_4_,(int)uStack_100);
                            if (uStack_450 != 0) {
                              uStack_448 = uStack_450;
                              __ZdlPv();
                            }
                            uStack_448 = lStack_f0;
                            uStack_450 = uStack_f8;
                            uStack_440 = uStack_e8;
                            lStack_f0 = 0;
                            uStack_e8 = 0;
                            uStack_f8 = 0;
                            if (lStack_438 != 0) {
                              lStack_430 = lStack_438;
                              __ZdlPv();
                            }
                            plVar20 = plStack_c0;
                            uStack_420 = uStack_c8;
                            plVar17 = plStack_418;
                            lStack_430 = lStack_d8;
                            lStack_438 = lStack_e0;
                            uStack_428 = uStack_d0;
                            lStack_d8 = 0;
                            uStack_d0 = 0;
                            lStack_e0 = 0;
                            uStack_c8 = 0;
                            plStack_c0 = (long *)0x0;
                            plStack_418 = plVar20;
                            if (plVar17 != (long *)0x0) {
                              plVar20 = plVar17 + 1;
                              do {
                                lVar18 = *plVar20;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                                if (bVar5) {
                                  *plVar20 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plVar17 + 0x10))(plVar17);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                              }
                            }
                            plVar17 = plStack_c0;
                            if (plStack_c0 != (long *)0x0) {
                              plVar20 = plStack_c0 + 1;
                              do {
                                lVar18 = *plVar20;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                                if (bVar5) {
                                  *plVar20 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                              }
                            }
                            if (lStack_e0 != 0) {
                              lStack_d8 = lStack_e0;
                              __ZdlPv();
                            }
                            if (uStack_f8 != 0) {
                              lStack_f0 = uStack_f8;
                              __ZdlPv();
                            }
                            FUN_104977438(&uStack_100,&uStack_458,auStack_2a8);
                            FUN_1049778fc(&uStack_100,lVar9 + 0x28);
                            auStack_4a0[0] = 0;
                            auStack_4e8[0] = 0x7f7fffff;
                            _vDSP_vclip(uStack_c8,1,auStack_4a0,auStack_4e8,uStack_c8,1,
                                        (long)(int)uStack_100);
                            FUN_104977974(auStack_4a0,&iStack_410,*(undefined4 *)(lStack_408 + 4));
                            FUN_104977974(auStack_4e8,&uStack_458,*(undefined4 *)(uStack_450 + 4));
                            FUN_104977974(auStack_530,&uStack_100,*(undefined4 *)(uStack_f8 + 4));
                            FUN_104977b1c(auStack_4a0);
                            FUN_104977b1c(auStack_4e8);
                            FUN_104977b1c(auStack_530);
                            puStack_148 = auStack_4a0;
                            puStack_140 = auStack_4e8;
                            puStack_130 = auStack_1e8;
                            plStack_540 = (long *)0x0;
                            uStack_538 = 0;
                            plStack_548 = (long *)0x0;
                            puStack_138 = auStack_530;
                            FUN_10497824c(&plStack_548,&puStack_148,&lStack_128,4);
                            uVar3 = **(uint **)(*plStack_548 + 8);
                            uVar21 = 0;
                            if ((long)plStack_540 - (long)plStack_548 != 0) {
                              uVar19 = (long)plStack_540 - (long)plStack_548 >> 3;
                              plVar17 = plStack_548;
                              if (uVar19 < 2) {
                                uVar19 = 1;
                              }
                              do {
                                uVar21 = (ulong)(uint)(*(int *)(*(long *)(*plVar17 + 8) + 4) +
                                                      (int)uVar21);
                                uVar19 = uVar19 - 1;
                                plVar17 = plVar17 + 1;
                              } while (uVar19 != 0);
                            }
                            uStack_18c = (undefined4)uVar21;
                            lStack_588 = 0;
                            lStack_580 = 0;
                            lStack_590 = 0;
                            uStack_190 = uVar3;
                            func_0x0001092d1c20(&lStack_590,&uStack_190,&lStack_188,2);
                            FUN_104977dc0(&puStack_148,&lStack_590);
                            if (lStack_590 != 0) {
                              lStack_588 = lStack_590;
                              __ZdlPv();
                            }
                            if (plStack_540 != plStack_548) {
                              uVar19 = 0;
                              plVar17 = plStack_540;
                              plVar20 = plStack_548;
                              lVar18 = lStack_110;
                              do {
                                lVar16 = (long)*(int *)(*(long *)(plVar20[uVar19] + 8) + 4);
                                if (0 < (int)uVar3) {
                                  lVar24 = *(long *)(plVar20[uVar19] + 0x38);
                                  lVar23 = lVar16 * 4;
                                  lVar7 = lVar18;
                                  uVar25 = (ulong)uVar3;
                                  do {
                                    _memcpy(lVar7,lVar24,lVar23);
                                    lVar24 = lVar24 + lVar23;
                                    lVar7 = lVar7 + (-(uVar21 >> 0x1f) & 0xfffffffc00000000 |
                                                    uVar21 << 2);
                                    uVar25 = uVar25 - 1;
                                    plVar17 = plStack_540;
                                    plVar20 = plStack_548;
                                  } while (uVar25 != 0);
                                }
                                lVar18 = lVar18 + lVar16 * 4;
                                uVar19 = uVar19 + 1;
                              } while (uVar19 < (ulong)((long)plVar17 - (long)plVar20 >> 3));
                            }
                            FUN_104977c5c(&lStack_590,&puStack_148,auStack_2f0,lVar11 + 0x28);
                            uStack_190 = 0;
                            uStack_194 = 0x7f7fffff;
                            _vDSP_vclip(uStack_558,1,&uStack_190,&uStack_194,uStack_558,1,
                                        (long)(int)lStack_590);
                            FUN_104977c5c(&uStack_190,&lStack_590,auStack_338,lVar13 + 0x28);
                            uStack_194 = 0;
                            fStack_198 = 3.4028235e+38;
                            _vDSP_vclip(uStack_158,1,&uStack_194,&fStack_198,uStack_158,1,
                                        (long)(int)uStack_190);
                            FUN_104977c5c(param_1,&uStack_190,auStack_380,lVar15 + 0x28);
                            iVar22 = **(int **)(param_1 + 8);
                            uStack_194 = (*(int **)(param_1 + 8))[1];
                            uVar21 = (ulong)uStack_194;
                            if (0 < iVar22) {
                              lVar18 = *(long *)(param_1 + 0x38);
                              do {
                                _vDSP_maxv(lVar18,1,&fStack_198,(long)(int)uVar21);
                                fStack_198 = -fStack_198;
                                _vDSP_vsadd(lVar18,1,&fStack_198,lVar18,1,(long)(int)uStack_194);
                                _vvexpf(lVar18,lVar18,&uStack_194);
                                _vDSP_sve(lVar18,1,auStack_19c,(long)(int)uStack_194);
                                _vDSP_vsdiv(lVar18,1,auStack_19c,lVar18,1,(long)(int)uStack_194);
                                uVar21 = (ulong)(int)uStack_194;
                                lVar18 = lVar18 + uVar21 * 4;
                                iVar22 = iVar22 + -1;
                              } while (iVar22 != 0);
                            }
                            if (plStack_150 != (long *)0x0) {
                              plVar17 = plStack_150 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_150 + 0x10))(plStack_150);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
                              }
                            }
                            if (lStack_170 != 0) {
                              lStack_168 = lStack_170;
                              __ZdlPv();
                            }
                            if (lStack_188 != 0) {
                              lStack_180 = lStack_188;
                              __ZdlPv();
                            }
                            if (plStack_550 != (long *)0x0) {
                              plVar17 = plStack_550 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_550 + 0x10))(plStack_550);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_550);
                              }
                            }
                            if (lStack_570 != 0) {
                              lStack_568 = lStack_570;
                              __ZdlPv();
                            }
                            if (lStack_588 != 0) {
                              lStack_580 = lStack_588;
                              __ZdlPv();
                            }
                            if (plStack_108 != (long *)0x0) {
                              plVar17 = plStack_108 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_108 + 0x10))(plStack_108);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
                              }
                            }
                            if (lStack_128 != 0) {
                              lStack_120 = lStack_128;
                              __ZdlPv();
                            }
                            if (puStack_140 != (undefined4 *)0x0) {
                              puStack_138 = puStack_140;
                              __ZdlPv();
                            }
                            if (plStack_548 != (long *)0x0) {
                              plStack_540 = plStack_548;
                              __ZdlPv();
                            }
                            if (plStack_4f0 != (long *)0x0) {
                              plVar17 = plStack_4f0 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4f0);
                              }
                            }
                            if (lStack_510 != 0) {
                              lStack_508 = lStack_510;
                              __ZdlPv();
                            }
                            if (lStack_528 != 0) {
                              lStack_520 = lStack_528;
                              __ZdlPv();
                            }
                            if (plStack_4a8 != (long *)0x0) {
                              plVar17 = plStack_4a8 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4a8);
                              }
                            }
                            if (lStack_4c8 != 0) {
                              lStack_4c0 = lStack_4c8;
                              __ZdlPv();
                            }
                            if (lStack_4e0 != 0) {
                              lStack_4d8 = lStack_4e0;
                              __ZdlPv();
                            }
                            if (plStack_460 != (long *)0x0) {
                              plVar17 = plStack_460 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_460 + 0x10))(plStack_460);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_460);
                              }
                            }
                            if (lStack_480 != 0) {
                              lStack_478 = lStack_480;
                              __ZdlPv();
                            }
                            if (lStack_498 != 0) {
                              lStack_490 = lStack_498;
                              __ZdlPv();
                            }
                            plVar17 = plStack_c0;
                            if (plStack_c0 != (long *)0x0) {
                              plVar20 = plStack_c0 + 1;
                              do {
                                lVar18 = *plVar20;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                                if (bVar5) {
                                  *plVar20 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                              }
                            }
                            if (lStack_e0 != 0) {
                              lStack_d8 = lStack_e0;
                              __ZdlPv();
                            }
                            if (uStack_f8 != 0) {
                              lStack_f0 = uStack_f8;
                              __ZdlPv();
                            }
                            plVar17 = plStack_418;
                            if (plStack_418 != (long *)0x0) {
                              plVar20 = plStack_418 + 1;
                              do {
                                lVar18 = *plVar20;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                                if (bVar5) {
                                  *plVar20 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_418 + 0x10))(plStack_418);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                              }
                            }
                            if (lStack_438 != 0) {
                              lStack_430 = lStack_438;
                              __ZdlPv();
                            }
                            if (uStack_450 != 0) {
                              uStack_448 = uStack_450;
                              __ZdlPv();
                            }
                            if (plStack_3d0 != (long *)0x0) {
                              plVar17 = plStack_3d0 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3d0);
                              }
                            }
                            if (lStack_3f0 != 0) {
                              lStack_3e8 = lStack_3f0;
                              __ZdlPv();
                            }
                            if (lStack_408 != 0) {
                              lStack_400 = lStack_408;
                              __ZdlPv();
                            }
                            if (plStack_388 != (long *)0x0) {
                              plVar17 = plStack_388 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_388 + 0x10))(plStack_388);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_388);
                              }
                            }
                            if (lStack_3a8 != 0) {
                              lStack_3a0 = lStack_3a8;
                              __ZdlPv();
                            }
                            if (lStack_3c0 != 0) {
                              lStack_3b8 = lStack_3c0;
                              __ZdlPv();
                            }
                            if (plStack_340 != (long *)0x0) {
                              plVar17 = plStack_340 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_340 + 0x10))(plStack_340);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_340);
                              }
                            }
                            if (lStack_360 != 0) {
                              lStack_358 = lStack_360;
                              __ZdlPv();
                            }
                            if (lStack_378 != 0) {
                              lStack_370 = lStack_378;
                              __ZdlPv();
                            }
                            if (plStack_2f8 != (long *)0x0) {
                              plVar17 = plStack_2f8 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2f8);
                              }
                            }
                            if (lStack_318 != 0) {
                              lStack_310 = lStack_318;
                              __ZdlPv();
                            }
                            if (lStack_330 != 0) {
                              lStack_328 = lStack_330;
                              __ZdlPv();
                            }
                            if (plStack_2b0 != (long *)0x0) {
                              plVar17 = plStack_2b0 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
                              }
                            }
                            if (lStack_2d0 != 0) {
                              lStack_2c8 = lStack_2d0;
                              __ZdlPv();
                            }
                            if (lStack_2e8 != 0) {
                              lStack_2e0 = lStack_2e8;
                              __ZdlPv();
                            }
                            if (plStack_268 != (long *)0x0) {
                              plVar17 = plStack_268 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_268 + 0x10))(plStack_268);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
                              }
                            }
                            if (lStack_288 != 0) {
                              lStack_280 = lStack_288;
                              __ZdlPv();
                            }
                            if (lStack_2a0 != 0) {
                              lStack_298 = lStack_2a0;
                              __ZdlPv();
                            }
                            if (plStack_78 != (long *)0x0) {
                              plVar17 = plStack_78 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_78 + 0x10))(plStack_78);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
                              }
                            }
                            if (lStack_98 != 0) {
                              lStack_90 = lStack_98;
                              __ZdlPv();
                            }
                            if (lStack_b0 != 0) {
                              lStack_a8 = lStack_b0;
                              __ZdlPv();
                            }
                            if (plStack_220 != (long *)0x0) {
                              plVar17 = plStack_220 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_220 + 0x10))(plStack_220);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_220);
                              }
                            }
                            if (lStack_240 != 0) {
                              lStack_238 = lStack_240;
                              __ZdlPv();
                            }
                            if (lStack_258 != 0) {
                              lStack_250 = lStack_258;
                              __ZdlPv();
                            }
                            if (cStack_201 < '\0') {
                              __ZdlPv(apppuStack_218[0]);
                            }
                            if (cStack_1e9 < '\0') {
                              __ZdlPv(apppuStack_200[0]);
                            }
                            if (plStack_1a8 != (long *)0x0) {
                              plVar17 = plStack_1a8 + 1;
                              do {
                                lVar18 = *plVar17;
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                                if (bVar5) {
                                  *plVar17 = lVar18 + -1;
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                              if (lVar18 == 0) {
                                (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
                              }
                            }
                            if (lStack_1c8 != 0) {
                              lStack_1c0 = lStack_1c8;
                              __ZdlPv();
                            }
                            lVar18 = lStack_1e0;
                            if (lStack_1e0 != 0) {
                              lStack_1d8 = lStack_1e0;
                              __ZdlPv();
                              lVar18 = lStack_1e0;
                            }
                            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
                              ___stack_chk_fail();
                              FUN_104975554(&lStack_590);
                              FUN_104975554(&puStack_148);
                              if (plStack_548 != (long *)0x0) {
                                plStack_540 = plStack_548;
                                __ZdlPv();
                              }
                              FUN_104975554(auStack_530);
                              FUN_104975554(auStack_4e8);
                              FUN_104975554(auStack_4a0);
                              FUN_104975554(&uStack_100);
                              FUN_104975554(&uStack_458);
                              FUN_104975554(&iStack_410);
                              FUN_104975554(auStack_3c8);
                              FUN_104975554(auStack_380);
                              FUN_104975554(auStack_338);
                              FUN_104975554(auStack_2f0);
                              FUN_104975554(auStack_2a8);
                              FUN_104975554(&uStack_b8);
                              FUN_104975554(&lStack_260);
                              if (cStack_201 < '\0') {
                                __ZdlPv(apppuStack_218[0]);
                              }
                              if (cStack_1e9 < '\0') {
                                __ZdlPv(apppuStack_200[0]);
                              }
                              FUN_104975554(auStack_1e8);
                              __Unwind_Resume();
                              func_0x0001092bc814(lVar18 + 0x38);
                              if (*(long *)(lVar18 + 0x20) != 0) {
                                *(long *)(lVar18 + 0x28) = *(long *)(lVar18 + 0x20);
                                __ZdlPv();
                              }
                              if (*(long *)(lVar18 + 8) != 0) {
                                *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 8);
                                __ZdlPv();
                              }
                              return lVar18;
                            }
                            return lVar18;
                          }
                          func_0x000109262df8(&UNK_10f639994);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1049752f0);
  (*pcVar6)();
}



/* Entry: 104975554; end: 10497559b;  */

long FUN_104975554(long param_1)

{
  func_0x0001092bc814(param_1 + 0x38);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10497559c; end: 1049758cb; -[FBSDKModelManager processSuggestedEvents:denseData:] */

void FUN_10497559c(float param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long *plStack_68;
  
  _objc_retain();
  ppuVar4 = (undefined **)PTR_PTR_1126adf30;
  func_0x00010bfcaee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c08fa60();
  if (((lVar11 == 0) || (param_5 == 0)) || (lRam000000011369d4b8 == 0)) {
LAB_104975794:
    _objc_release(ppuVar4);
  }
  else {
    lVar11 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    lVar5 = lVar11;
    _strlen();
    if ((int)lVar5 == 0) goto LAB_104975794;
    ppuVar6 = (undefined **)PTR_PTR_1126adf30;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bfcb240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar7;
    func_0x00010bf529e0();
    ppuVar8 = ppuVar4;
    func_0x00010bf529e0();
    if (ppuVar6 != ppuVar8) {
      _objc_release(ppuVar7);
      goto LAB_104975794;
    }
    func_0x00010002d4d8(auStack_c0,"app_event_pred");
    FUN_104974198(auStack_a8,auStack_c0,lVar11,param_5);
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    ppuVar8 = (undefined **)0x0;
    do {
      ppuVar10 = ppuVar8;
      ppuVar9 = ppuVar7;
      func_0x00010bf529e0();
      if (ppuVar9 <= ppuVar10) goto LAB_104975718;
      fVar13 = *(float *)(lStack_70 + (long)ppuVar10 * 4);
      ppuVar6 = (undefined **)PTR_PTR_1126add78;
      func_0x00010bf09f40(PTR_PTR_1126add78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar12 = param_1;
      _objc_release(ppuVar6);
      bVar3 = fVar13 < param_1;
      ppuVar8 = (undefined **)((long)ppuVar10 + 1);
      param_1 = fVar12;
    } while (bVar3);
    ppuVar6 = (undefined **)PTR_PTR_1126add78;
    func_0x00010bf09f40(PTR_PTR_1126add78);
    _objc_retainAutoreleasedReturnValue();
LAB_104975718:
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a0 != 0) {
      lStack_98 = lStack_a0;
      __ZdlPv();
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    if (ppuVar10 < ppuVar9) goto LAB_1049757a4;
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110dd2318;
LAB_1049757a4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1049758cc; end: 10497596b; +[FBSDKModelManager isValidTimestamp:] */

bool FUN_1049758cc(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  
  _objc_retain();
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    bVar1 = param_1 < 259200.0;
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10497596c; end: 104975d1f; +[FBSDKModelManager processMTML] */

void FUN_10497596c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **unaff_x22;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puVar1 = puRam000000011369d498;
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puStack_168 = (undefined *)0x0;
  }
  else {
    puStack_170 = (undefined *)0x0;
    puStack_168 = (undefined *)0x0;
    lVar11 = *plStack_150;
    unaff_x22 = &PTR____CFConstantStringClassReference_110da5198;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_150 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        uVar12 = *(ulong *)(lStack_158 + (long)puVar10 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar12;
        func_0x00010c075f00(uVar12,param_2,puVar3);
        if ((uVar4 & 1) != 0) {
          puVar3 = puRam000000011369d498;
          func_0x00010c0e00e0(puRam000000011369d498,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfda7c0(uVar12,param_2,&PTR____CFConstantStringClassReference_110da5198);
          puVar9 = puStack_170;
          if ((int)uVar12 != 0) {
            puVar5 = puVar3;
            func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da5278);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar7 = puVar5;
            func_0x00010c075f00(puVar5,param_2,puVar6);
            if (((ulong)puVar7 & 1) == 0) {
              _objc_release(puVar5);
            }
            else {
              puVar6 = puVar3;
              func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da5138);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar8 = puVar6;
              func_0x00010c075f00(puVar6,param_2,puVar7);
              _objc_release(puVar6);
              _objc_release(puVar5);
              if (((ulong)puVar8 & 1) != 0) {
                puVar5 = puVar3;
                func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da5278)
                ;
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_168);
                puVar6 = puVar3;
                func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da5138)
                ;
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar6;
                func_0x00010c0b4fe0();
                _objc_release(puVar6);
                puStack_168 = puVar5;
                if ((long)puVar9 <= (long)puStack_170) {
                  puVar9 = puStack_170;
                }
              }
            }
          }
          puStack_170 = puVar9;
          _objc_release(puVar3);
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_160,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
    _objc_release(puVar1);
    puVar10 = puRam000000011369d498;
    puVar2 = PTR_PTR_1126add78;
    if ((puStack_168 == (undefined *)0x0) || ((long)puStack_170 < 1)) goto LAB_104975c30;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e362d8;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110da5278;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110da5198;
    puStack_100 = puStack_168;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110da5138;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_108,&ppuStack_120
                        ,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2,param_2,puVar10,unaff_x22,
                        &PTR____CFConstantStringClassReference_110da5198);
    _objc_release(unaff_x22);
  }
  _objc_release(puVar1);
LAB_104975c30:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    _objc_release(puStack_168);
    __Unwind_Resume();
    func_0x00010bfc7a60();
    return;
  }
  return;
}



/* Entry: 104975d20; end: 104975d7b; -[FBSDKModelManager checkFeaturesAndExecuteForMTML] */

void FUN_104975d20(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104975d7c;
  puStack_20 = &UNK_11087bb00;
  uStack_18 = param_1;
  func_0x00010bfc7a60(param_1,param_2,&PTR____CFConstantStringClassReference_110da5198,&puStack_38);
  return;
}



/* Entry: 104975d7c; end: 104975f73;  */

void FUN_104975d7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcc360(uVar1,param_2,&PTR____CFConstantStringClassReference_110da5198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f4760(auStack_58,PTR_PTR_1126adf38);
  func_0x00010497840c(0x11369d4a0,auStack_58);
  func_0x00010497833c(auStack_58);
  puVar2 = PTR_PTR_1126adf38;
  FUN_104978500(auStack_80,0x11369d4a0);
  func_0x00010c296b40();
  func_0x00010497833c(auStack_80);
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071820();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010bfc7a60();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071820();
    if ((int)uVar4 == 0) {
      _objc_release(uVar3);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010bfbe560();
      _objc_release(uVar3);
      if (lVar5 != 0) {
        func_0x00010bfc7a60();
      }
    }
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104975f74; end: 104975fd3;  */

void FUN_104975f74(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa23a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c09c0e0();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c261e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104975fd4; end: 10497606f;  */

void FUN_104975fd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126adf40;
  _objc_alloc(PTR_PTR_1126adf40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbe560(uVar2);
  func_0x00010c017480(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1add80(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c068080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104976070; end: 104976527; -[FBSDKModelManager getModelAndRules:onSuccess:] */

void FUN_104976070(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain();
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _dispatch_group_create();
  puVar3 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0 && lRam000000011369d490 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      lVar13 = 0;
    }
    else {
      func_0x00010bf3ac00(param_1);
      ppuVar7 = param_3;
      _objc_retain();
      ppuVar8 = ppuVar7;
      func_0x00010bfda7c0();
      if ((int)ppuVar8 != 0) {
        _objc_release(ppuVar7);
        ppuVar7 = &PTR____CFConstantStringClassReference_110da5198;
      }
      lVar13 = lRam000000011369d490;
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar9 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar9);
      func_0x00010bf88780(param_1);
      _objc_release(ppuVar7);
    }
    puVar6 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c08fa60();
    if (puVar9 == (undefined *)0x0) {
      lVar12 = 0;
    }
    else {
      func_0x00010bf3ac00(param_1);
      lVar12 = lRam000000011369d490;
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar10 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar10);
      func_0x00010bf88780(param_1);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104976528;
    puStack_88 = &UNK_11096ef60;
    uVar11 = param_4;
    _objc_retain();
    puStack_80 = puVar4;
    lStack_78 = lVar13;
    lStack_70 = lVar12;
    uStack_68 = uVar11;
    _objc_retain(lVar12);
    _objc_retain(lVar13);
    _objc_retain(puVar4);
    func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_a0);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(puStack_80);
    _objc_release(uStack_68);
    _objc_release(lVar12);
    _objc_release(lVar13);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104976528; end: 104976583;  */

void FUN_104976528(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfacbe0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar2 != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010bfacbe0();
        if (iVar1 == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000104976574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 104976584; end: 10497685f; -[FBSDKModelManager clearCacheForModel:suffix:] */

void FUN_104976584(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *unaff_x23;
  int iVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  ulong uVar14;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  lStack_148 = param_3;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  lStack_138 = lVar4;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lStack_138;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_160 = lVar3;
  puStack_140 = puVar5;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar5 = puStack_140;
  _objc_retain();
  puVar8 = &uStack_130;
  puVar9 = auStack_f0;
  uVar12 = 0x10;
  puVar7 = puVar5;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    param_3 = *plStack_120;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if (*plStack_120 != param_3) {
          _objc_enumerationMutation(puVar5);
        }
        uVar14 = *(ulong *)(lStack_128 + (long)unaff_x23 * 8);
        iVar13 = (int)uVar14;
        iVar1 = iVar13;
        func_0x00010bfdcf80();
        if (((iVar1 != 0) && (func_0x00010bfda7c0(), iVar13 != 0)) &&
           (func_0x00010bfda7c0(), (uVar14 & 1) == 0)) {
          uVar12 = uRam000000011369d490;
          func_0x00010c25ce00(uRam000000011369d490);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12cc40(puVar2);
          _objc_release(uVar12);
        }
        unaff_x23 = unaff_x23 + 1;
      } while (puVar7 != unaff_x23);
      puVar8 = &uStack_130;
      puVar9 = auStack_f0;
      uVar12 = 0x10;
      puVar7 = puVar5;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lStack_138);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  lVar4 = lStack_148;
  _objc_release(lStack_148);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puStack_140);
  _objc_release(lStack_138);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(lStack_148);
  __Unwind_Resume(lVar4);
  uStack_1a0 = 0x11369d000;
  pcStack_168 = FUN_104976860;
  puStack_198 = unaff_x23;
  lStack_190 = lVar3;
  puStack_188 = puVar2;
  uStack_180 = param_4;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain(uVar12);
  _objc_retain(param_6);
  if (puVar9 != (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfacbe0();
    _objc_release(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0xc2000000;
      pcStack_1c0 = FUN_1049769c4;
      puStack_1b8 = &UNK_110883780;
      puVar10 = puVar8;
      _objc_retain();
      puVar11 = puVar9;
      puStack_1b0 = puVar10;
      _objc_retain();
      puStack_1a8 = puVar11;
      FUN_104c62d88(param_6,uVar12,&puStack_1d0);
      _objc_release(puStack_1a8);
      _objc_release(puStack_1b0);
    }
  }
  _objc_release(param_6);
  _objc_release(uVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 104976860; end: 1049769c3; -[FBSDKModelManager download:filePath:queue:group:] */

void FUN_104976860(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1049769c4;
      puStack_58 = &UNK_110883780;
      uVar3 = param_3;
      _objc_retain();
      lVar4 = param_4;
      uStack_50 = uVar3;
      _objc_retain();
      lStack_48 = lVar4;
      FUN_104c62d88(param_6,param_5,&puStack_70);
      _objc_release(lStack_48);
      _objc_release(uStack_50);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1049769c4; end: 104976a63;  */

void FUN_1049769c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c2be500(puVar2,param_2,*(undefined8 *)(param_1 + 0x28),1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104976a64; end: 104976d43; +[FBSDKModelManager convertToDictionary:] */

undefined * FUN_104976a64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x19;
  undefined **unaff_x20;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  uStack_148 = param_1;
  _objc_retain();
  puStack_158 = param_3;
  func_0x00010bf529e0();
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    puVar2 = puStack_158;
    puStack_150 = puVar7;
    _objc_retain();
    puVar8 = &uStack_140;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar10 = *plStack_130;
      unaff_x20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar9 = *(undefined8 *)(lStack_138 + (long)puVar8 * 8);
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          uVar4 = uVar9;
          func_0x00010c075f00();
          if ((int)uVar4 != 0) {
            uVar4 = uVar9;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar5 = uVar4;
            func_0x00010c075f00();
            if ((int)uVar5 != 0) {
              uVar5 = uStack_148;
              func_0x00010c07a580();
              _objc_release(uVar4);
              if ((int)uVar5 == 0) goto LAB_104976bec;
              uVar4 = uVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_100 = uVar4;
              uStack_f8 = uVar9;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef7f60(puStack_150);
              _objc_release(puVar7);
            }
            _objc_release(uVar4);
          }
LAB_104976bec:
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar3 != puVar8);
        puVar8 = &uStack_140;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    puVar7 = puStack_150;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    unaff_x19 = puStack_150;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puStack_150;
      _objc_retain(puStack_150);
    }
    _objc_release(unaff_x19);
  }
  puVar2 = puStack_158;
  _objc_release(puStack_158);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puStack_150);
  _objc_release(puStack_158);
  __Unwind_Resume(puVar2);
  pcStack_168 = FUN_104976d44;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 1;
  ppuStack_180 = unaff_x20;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010bf97ce0(puVar8);
  bVar1 = *(byte *)(puStack_198 + 3);
  __Block_object_dispose(&uStack_1a0,8);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 104976d44; end: 104976deb; +[FBSDKModelManager isPlistFormatDictionary:] */

undefined1 FUN_104976d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104976dec;
  puStack_50 = &UNK_1107b9bb8;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(param_3,param_2,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104976dec; end: 104976f47;  */

void FUN_104976dec(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar1 = param_2;
  func_0x00010c075f00();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar1 = param_3;
  func_0x00010c075f00();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar1 = param_3;
    func_0x00010c075f00();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
      uVar1 = param_3;
      func_0x00010c075f00();
      if ((uVar1 & 1) == 0) {
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
        uVar1 = param_3;
        func_0x00010c075f00();
        if ((uVar1 & 1) == 0) {
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar1 = param_3;
          func_0x00010c075f00();
          if ((uVar1 & 1) == 0) {
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar1 = param_3;
            func_0x00010c075f00();
            if ((uVar1 & 1) == 0) {
              *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
              *param_4 = 1;
            }
          }
        }
      }
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104976f48; end: 104976fc7; +[FBSDKModelManager getIntegrityMapping] */

undefined * FUN_104976f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dabe78;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e700b8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da5098;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_104976fc8;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dd2318;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110da0c38;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da0e58;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da0eb8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110da0e98;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,5);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return *(undefined **)(puVar1 + 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 104976fc8; end: 10497706b; +[FBSDKModelManager getSuggestedEventsMapping] */

undefined * FUN_104976fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd2318;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110da0c38;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110da0e58;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da0eb8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da0e98;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,5);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 8);
}



/* Entry: 10497706c; end: 104977073; -[FBSDKModelManager integrityParametersProcessor] */

undefined8 FUN_10497706c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104977074; end: 10497707f; -[FBSDKModelManager setIntegrityParametersProcessor:] */

void FUN_104977074(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104977080; end: 104977087; -[FBSDKModelManager featureChecker] */

undefined8 FUN_104977080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104977088; end: 104977093; -[FBSDKModelManager setFeatureChecker:] */

void FUN_104977088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104977094; end: 10497709b; -[FBSDKModelManager graphRequestFactory] */

undefined8 FUN_104977094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10497709c; end: 1049770a7; -[FBSDKModelManager setGraphRequestFactory:] */

void FUN_10497709c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049770a8; end: 1049770af; -[FBSDKModelManager fileManager] */

undefined8 FUN_1049770a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049770b0; end: 1049770bb; -[FBSDKModelManager setFileManager:] */

void FUN_1049770b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049770bc; end: 1049770c3; -[FBSDKModelManager store] */

undefined8 FUN_1049770bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049770c4; end: 1049770cf; -[FBSDKModelManager setStore:] */

void FUN_1049770c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049770d0; end: 1049770d7; -[FBSDKModelManager getAppID] */

undefined8 FUN_1049770d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049770d8; end: 1049770df; -[FBSDKModelManager setGetAppID:] */

void FUN_1049770d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1049770e0; end: 1049770e7; -[FBSDKModelManager dataExtractor] */

undefined8 FUN_1049770e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1049770e8; end: 1049770f3; -[FBSDKModelManager setDataExtractor:] */

void FUN_1049770e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1049770f4; end: 1049770fb; -[FBSDKModelManager gateKeeperManager] */

undefined8 FUN_1049770f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1049770fc; end: 104977107; -[FBSDKModelManager setGateKeeperManager:] */

void FUN_1049770fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104977108; end: 10497710f; -[FBSDKModelManager suggestedEventsIndexer] */

undefined8 FUN_104977108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104977110; end: 10497711b; -[FBSDKModelManager setSuggestedEventsIndexer:] */

void FUN_104977110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10497711c; end: 104977123; -[FBSDKModelManager featureExtractor] */

undefined8 FUN_10497711c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104977124; end: 10497712f; -[FBSDKModelManager setFeatureExtractor:] */

void FUN_104977124(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 104977130; end: 1049771bf; -[FBSDKModelManager .cxx_destruct] */

void FUN_104977130(long param_1)

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



/* Entry: 1049771c0; end: 104977317;  */

void FUN_1049771c0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar12;
  uint *puVar13;
  long extraout_x8;
  ulong uVar14;
  long extraout_x8_00;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  undefined4 *puVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  long lVar31;
  ulong uVar32;
  undefined4 uVar33;
  long lVar34;
  undefined1 ***pppuVar35;
  code *pcVar36;
  int iStack_234;
  int iStack_230;
  undefined4 *puStack_228;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 *puStack_1b8;
  long *plStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  long alStack_198 [2];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_168;
  long lStack_160;
  undefined4 *puStack_150;
  long *plStack_148;
  long lStack_140;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = *(uint **)(param_2 + 8);
  uVar2 = *puVar13;
  uVar3 = puVar13[1];
  uVar5 = puVar13[2];
  uVar32 = (ulong)uVar5;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_54 = uVar5;
  uStack_50 = uVar3;
  uStack_4c = uVar2;
  func_0x0001092d1c20(&uStack_70,&uStack_54,&lStack_48,3);
  FUN_104977dc0(param_1,&uStack_70);
  uVar14 = uStack_70;
  if (uStack_70 != 0) {
    uStack_68 = uStack_70;
    __ZdlPv();
  }
  if (0 < (int)uVar2) {
    iVar12 = 0;
    uVar17 = 0;
    lVar19 = *(long *)(param_1 + 0x38);
    lVar22 = *(long *)(param_2 + 0x38);
    do {
      if (0 < (int)uVar3) {
        uVar25 = 0;
        uVar26 = uVar17;
        iVar28 = iVar12;
        do {
          if (0 < (int)uVar5) {
            uVar14 = uVar32;
            uVar9 = uVar26;
            puVar18 = (undefined4 *)(lVar22 + (long)iVar28 * 4);
            do {
              *(undefined4 *)(lVar19 + (long)(int)uVar9 * 4) = *puVar18;
              uVar9 = (ulong)((int)uVar9 + uVar3 * uVar2);
              uVar14 = uVar14 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar14 != 0);
          }
          uVar25 = uVar25 + 1;
          iVar28 = iVar28 + uVar5;
          uVar26 = (ulong)((int)uVar26 + uVar2);
        } while (uVar25 != uVar3);
      }
      uVar17 = uVar17 + 1;
      iVar12 = iVar12 + uVar3 * uVar5;
    } while (uVar17 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_70 != 0) {
    uStack_68 = uStack_70;
    __ZdlPv();
  }
  uVar17 = uVar14;
  __Unwind_Resume();
  pcStack_78 = FUN_104977318;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = **(uint **)(uVar17 + 8);
  uVar4 = (*(uint **)(uVar17 + 8))[1];
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  uStack_b0 = uVar4;
  uStack_ac = uVar5;
  uStack_a0 = (ulong)uVar3;
  uStack_98 = (ulong)uVar2;
  lStack_90 = param_1;
  uStack_88 = uVar14;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001092d1c20(&lStack_c8,&uStack_b0,&lStack_a8,2);
  plVar10 = &lStack_c8;
  FUN_104977dc0(extraout_x8);
  lVar19 = lStack_c8;
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if (0 < (int)uVar5) {
    uVar14 = 0;
    puVar18 = *(undefined4 **)(extraout_x8 + 0x38);
    puVar20 = *(undefined4 **)(uVar17 + 0x38);
    do {
      uVar17 = (ulong)uVar4;
      puVar23 = puVar18;
      puVar21 = puVar20;
      if (0 < (int)uVar4) {
        do {
          *puVar23 = *puVar21;
          puVar23 = puVar23 + uVar5;
          uVar17 = uVar17 - 1;
          puVar21 = puVar21 + 1;
        } while (uVar17 != 0);
      }
      uVar14 = uVar14 + 1;
      puVar20 = puVar20 + uVar4;
      puVar18 = puVar18 + 1;
    } while (uVar14 != uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  __Unwind_Resume();
  ppuStack_e0 = &puStack_80;
  pcStack_d8 = FUN_104977438;
  pppuVar35 = &ppuStack_e0;
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar15 = *(int **)(lVar19 + 8);
  iVar12 = *piVar15;
  uVar3 = piVar15[1];
  uVar14 = (ulong)uVar3;
  uVar5 = piVar15[2];
  uVar17 = (ulong)uVar5;
  uVar4 = *(uint *)plVar10[1];
  uVar6 = ((uint *)plVar10[1])[2];
  uVar2 = (uVar3 - uVar4) + 1;
  uStack_188 = CONCAT44(uVar2,iVar12);
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_1f0 = 0;
  func_0x0001092d1c20(&lStack_1f0,&uStack_188,(long)&uStack_180 + 4,3);
  FUN_104977dc0(extraout_x8_00,&lStack_1f0);
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  uStack_1a0 = CONCAT44(uVar5,uVar4);
  uStack_180 = 0;
  lStack_178 = 0;
  uStack_188 = 0;
  func_0x0001092d1c20(&uStack_188,&uStack_1a0,alStack_198,2);
  FUN_104977dc0(&lStack_1f0,&uStack_188);
  if (uStack_188 != 0) {
    uStack_180 = uStack_188;
    __ZdlPv();
  }
  alStack_198[0] = 0;
  alStack_198[1] = 0;
  uStack_1a0 = 0;
  uStack_1a8 = uVar4;
  uStack_1a4 = uVar5;
  func_0x0001092d1c20(&uStack_1a0,&uStack_1a8,&uStack_1a0,2);
  puVar11 = &uStack_1a0;
  FUN_104977dc0(&uStack_188);
  if (uStack_1a0 != 0) {
    alStack_198[0] = uStack_1a0;
    __ZdlPv();
  }
  if (0 < iVar12) {
    iStack_234 = 0;
    iStack_230 = 0;
    uVar32 = *(ulong *)(lVar19 + 0x38);
    puVar18 = (undefined4 *)plVar10[7];
    lVar19 = *(long *)(extraout_x8_00 + 0x38);
    do {
      if (0 < (int)uVar6) {
        lVar22 = 0;
        puStack_228 = puVar18;
        do {
          if (-1 < (int)(uVar3 - uVar4)) {
            uVar14 = 0;
            iVar28 = iStack_230;
            do {
              if (0 < (int)uVar4) {
                uVar25 = 0;
                puVar21 = puStack_228;
                puVar23 = puStack_1b8;
                puVar20 = puStack_150;
                iVar16 = iVar28;
                do {
                  uVar26 = uVar17;
                  puVar27 = puVar21;
                  puVar29 = puVar23;
                  puVar30 = puVar20;
                  iVar24 = iVar16;
                  if (0 < (int)uVar5) {
                    do {
                      *puVar29 = *(undefined4 *)(uVar32 + (long)iVar24 * 4);
                      uVar33 = *puVar27;
                      puVar27 = puVar27 + (int)uVar6;
                      *puVar30 = uVar33;
                      iVar24 = iVar24 + 1;
                      uVar26 = uVar26 - 1;
                      puVar29 = puVar29 + 1;
                      puVar30 = puVar30 + 1;
                    } while (uVar26 != 0);
                  }
                  uVar25 = uVar25 + 1;
                  puVar20 = puVar20 + (int)uVar5;
                  puVar23 = puVar23 + (int)uVar5;
                  puVar21 = puVar21 + (long)(int)uVar5 * (long)(int)uVar6;
                  iVar16 = iVar16 + uVar5;
                } while (uVar25 != uVar4);
              }
              puVar11 = (undefined8 *)0x1;
              _vDSP_dotpr(puStack_1b8,1,puStack_150,1,&uStack_1a0,(long)(int)(uVar4 * uVar5));
              *(undefined4 *)
               (lVar19 + (long)(int)((int)lVar22 + (iStack_234 * uVar2 + (int)uVar14) * uVar6) * 4)
                   = (undefined4)uStack_1a0;
              uVar14 = uVar14 + 1;
              iVar28 = iVar28 + uVar5;
            } while (uVar14 != uVar2);
          }
          lVar22 = lVar22 + 1;
          puStack_228 = puStack_228 + 1;
        } while (lVar22 != (int)uVar6);
      }
      iStack_234 = iStack_234 + 1;
      iStack_230 = iStack_230 + uVar3 * uVar5;
    } while (iStack_234 != iVar12);
  }
  if (plStack_148 != (long *)0x0) {
    plVar10 = plStack_148 + 1;
    do {
      lVar19 = *plVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar19 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  if (uStack_180 != 0) {
    lStack_178 = uStack_180;
    __ZdlPv();
  }
  plVar10 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar1 = plStack_1b0 + 1;
    do {
      lVar19 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar19 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  lVar19 = lStack_1e8;
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_1a0 != 0) {
    alStack_198[0] = uStack_1a0;
    __ZdlPv();
  }
  if (plStack_1b0 != (long *)0x0) {
    plVar10 = plStack_1b0 + 1;
    do {
      lVar22 = *plVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar22 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b0);
    }
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  func_0x0001092bc814(extraout_x8_00 + 0x38);
  if (*(long *)(extraout_x8_00 + 0x20) != 0) {
    *(long *)(extraout_x8_00 + 0x28) = *(long *)(extraout_x8_00 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(extraout_x8_00 + 8) != 0) {
    *(long *)(extraout_x8_00 + 0x10) = *(long *)(extraout_x8_00 + 8);
    __ZdlPv();
  }
  lVar22 = lVar19;
  __Unwind_Resume();
  pcVar36 = FUN_1049778fc;
  piVar15 = *(int **)(lVar22 + 8);
  uVar25 = (ulong)(uint)piVar15[2];
  if (0 < piVar15[2]) {
    lVar31 = *(long *)(lVar22 + 0x38);
    lVar22 = puVar11[7];
    iVar12 = *piVar15;
    iVar28 = piVar15[1];
    uVar26 = uVar25;
    plVar10 = plStack_1b0;
    lVar34 = extraout_x8_00;
    do {
      _vDSP_vsadd(lVar31,uVar25,lVar22,lVar31,uVar25,(long)iVar28 * (long)iVar12,in_x6,in_x7,uVar17,
                  uVar32,uVar14,plVar10,lVar19,lVar34,pppuVar35,pcVar36);
      lVar22 = lVar22 + 4;
      lVar31 = lVar31 + 4;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  return;
}



/* Entry: 104977318; end: 104977437;  */

void FUN_104977318(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  long extraout_x8;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long lVar27;
  long unaff_x23;
  ulong uVar28;
  long lVar29;
  undefined4 uVar30;
  long lVar31;
  undefined1 **ppuVar32;
  code *pcVar33;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 *puStack_1b8;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  undefined4 *puStack_148;
  long *plStack_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  long alStack_128 [2];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined4 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = **(uint **)(param_2 + 8);
  uVar5 = (*(uint **)(param_2 + 8))[1];
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = uVar5;
  uStack_3c = uVar3;
  func_0x0001092d1c20(&lStack_58,&uStack_40,&lStack_38,2);
  plVar11 = &lStack_58;
  FUN_104977dc0(param_1);
  lVar19 = lStack_58;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (0 < (int)uVar3) {
    uVar13 = 0;
    puVar17 = *(undefined4 **)(param_1 + 0x38);
    puVar18 = *(undefined4 **)(param_2 + 0x38);
    do {
      uVar28 = (ulong)uVar5;
      puVar21 = puVar17;
      puVar20 = puVar18;
      if (0 < (int)uVar5) {
        do {
          *puVar21 = *puVar20;
          puVar21 = puVar21 + uVar3;
          uVar28 = uVar28 - 1;
          puVar20 = puVar20 + 1;
        } while (uVar28 != 0);
      }
      uVar13 = uVar13 + 1;
      puVar18 = puVar18 + uVar5;
      puVar17 = puVar17 + 1;
    } while (uVar13 != uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_104977438;
  ppuVar32 = &puStack_70;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar14 = *(int **)(lVar19 + 8);
  iVar4 = *piVar14;
  uVar5 = piVar14[1];
  uVar13 = (ulong)uVar5;
  uVar6 = piVar14[2];
  uVar28 = (ulong)uVar6;
  uVar7 = *(uint *)plVar11[1];
  uVar8 = ((uint *)plVar11[1])[2];
  uVar3 = (uVar5 - uVar7) + 1;
  uStack_118 = CONCAT44(uVar3,iVar4);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_180 = 0;
  func_0x0001092d1c20(&lStack_180,&uStack_118,(long)&uStack_110 + 4,3);
  FUN_104977dc0(extraout_x8,&lStack_180);
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  uStack_130 = CONCAT44(uVar6,uVar7);
  uStack_110 = 0;
  lStack_108 = 0;
  uStack_118 = 0;
  func_0x0001092d1c20(&uStack_118,&uStack_130,alStack_128,2);
  FUN_104977dc0(&lStack_180,&uStack_118);
  if (uStack_118 != 0) {
    uStack_110 = uStack_118;
    __ZdlPv();
  }
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_130 = 0;
  uStack_138 = uVar7;
  uStack_134 = uVar6;
  func_0x0001092d1c20(&uStack_130,&uStack_138,&uStack_130,2);
  puVar12 = &uStack_130;
  FUN_104977dc0(&uStack_118);
  if (uStack_130 != 0) {
    alStack_128[0] = uStack_130;
    __ZdlPv();
  }
  if (0 < iVar4) {
    iStack_1c4 = 0;
    iStack_1c0 = 0;
    unaff_x23 = *(long *)(lVar19 + 0x38);
    puVar17 = (undefined4 *)plVar11[7];
    lVar19 = *(long *)(extraout_x8 + 0x38);
    do {
      if (0 < (int)uVar8) {
        lVar29 = 0;
        puStack_1b8 = puVar17;
        do {
          if (-1 < (int)(uVar5 - uVar7)) {
            uVar13 = 0;
            iVar2 = iStack_1c0;
            do {
              if (0 < (int)uVar7) {
                uVar15 = 0;
                puVar20 = puStack_1b8;
                puVar21 = puStack_148;
                puVar18 = puStack_e0;
                iVar16 = iVar2;
                do {
                  uVar22 = uVar28;
                  puVar24 = puVar20;
                  puVar25 = puVar21;
                  puVar26 = puVar18;
                  iVar23 = iVar16;
                  if (0 < (int)uVar6) {
                    do {
                      *puVar25 = *(undefined4 *)(unaff_x23 + (long)iVar23 * 4);
                      uVar30 = *puVar24;
                      puVar24 = puVar24 + (int)uVar8;
                      *puVar26 = uVar30;
                      iVar23 = iVar23 + 1;
                      uVar22 = uVar22 - 1;
                      puVar25 = puVar25 + 1;
                      puVar26 = puVar26 + 1;
                    } while (uVar22 != 0);
                  }
                  uVar15 = uVar15 + 1;
                  puVar18 = puVar18 + (int)uVar6;
                  puVar21 = puVar21 + (int)uVar6;
                  puVar20 = puVar20 + (long)(int)uVar6 * (long)(int)uVar8;
                  iVar16 = iVar16 + uVar6;
                } while (uVar15 != uVar7);
              }
              puVar12 = (undefined8 *)0x1;
              _vDSP_dotpr(puStack_148,1,puStack_e0,1,&uStack_130,(long)(int)(uVar7 * uVar6));
              *(undefined4 *)
               (lVar19 + (long)(int)((int)lVar29 + (iStack_1c4 * uVar3 + (int)uVar13) * uVar8) * 4)
                   = (undefined4)uStack_130;
              uVar13 = uVar13 + 1;
              iVar2 = iVar2 + uVar6;
            } while (uVar13 != uVar3);
          }
          lVar29 = lVar29 + 1;
          puStack_1b8 = puStack_1b8 + 1;
        } while (lVar29 != (int)uVar8);
      }
      iStack_1c4 = iStack_1c4 + 1;
      iStack_1c0 = iStack_1c0 + uVar5 * uVar6;
    } while (iStack_1c4 != iVar4);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar11 = plStack_d8 + 1;
    do {
      lVar19 = *plVar11;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *plVar11 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  if (uStack_110 != 0) {
    lStack_108 = uStack_110;
    __ZdlPv();
  }
  plVar11 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar1 = plStack_140 + 1;
    do {
      lVar19 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  lVar19 = lStack_178;
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_130 != 0) {
    alStack_128[0] = uStack_130;
    __ZdlPv();
  }
  if (plStack_140 != (long *)0x0) {
    plVar11 = plStack_140 + 1;
    do {
      lVar29 = *plVar11;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *plVar11 = lVar29 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar29 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    __ZdlPv();
  }
  func_0x0001092bc814(extraout_x8 + 0x38);
  if (*(long *)(extraout_x8 + 0x20) != 0) {
    *(long *)(extraout_x8 + 0x28) = *(long *)(extraout_x8 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(extraout_x8 + 8) != 0) {
    *(long *)(extraout_x8 + 0x10) = *(long *)(extraout_x8 + 8);
    __ZdlPv();
  }
  lVar29 = lVar19;
  __Unwind_Resume();
  pcVar33 = FUN_1049778fc;
  piVar14 = *(int **)(lVar29 + 8);
  uVar15 = (ulong)(uint)piVar14[2];
  if (0 < piVar14[2]) {
    lVar27 = *(long *)(lVar29 + 0x38);
    lVar29 = puVar12[7];
    iVar4 = *piVar14;
    iVar2 = piVar14[1];
    uVar22 = uVar15;
    plVar11 = plStack_140;
    lVar31 = extraout_x8;
    do {
      _vDSP_vsadd(lVar27,uVar15,lVar29,lVar27,uVar15,(long)iVar2 * (long)iVar4,in_x6,in_x7,uVar28,
                  unaff_x23,uVar13,plVar11,lVar19,lVar31,ppuVar32,pcVar33);
      lVar29 = lVar29 + 4;
      lVar27 = lVar27 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}



/* Entry: 104977438; end: 1049778fb;  */

void FUN_104977438(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  long unaff_x23;
  ulong uVar27;
  long lVar28;
  undefined4 uVar29;
  long *plVar30;
  undefined1 *puVar31;
  code *pcVar32;
  int iStack_164;
  int iStack_160;
  undefined4 *puStack_158;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined4 *puStack_e8;
  long *plStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  long alStack_c8 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  undefined4 *puStack_80;
  long *plStack_78;
  long lStack_70;
  
  puVar31 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar12 = *(int **)(param_2 + 8);
  iVar4 = *piVar12;
  uVar5 = piVar12[1];
  uVar26 = (ulong)uVar5;
  uVar6 = piVar12[2];
  uVar27 = (ulong)uVar6;
  uVar7 = **(uint **)(param_3 + 8);
  uVar8 = (*(uint **)(param_3 + 8))[2];
  uVar1 = (uVar5 - uVar7) + 1;
  uStack_b8 = CONCAT44(uVar1,iVar4);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_120 = 0;
  func_0x0001092d1c20(&lStack_120,&uStack_b8,(long)&uStack_b0 + 4,3);
  FUN_104977dc0(param_1,&lStack_120);
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  uStack_d0 = CONCAT44(uVar6,uVar7);
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_b8 = 0;
  func_0x0001092d1c20(&uStack_b8,&uStack_d0,alStack_c8,2);
  FUN_104977dc0(&lStack_120,&uStack_b8);
  if (uStack_b8 != 0) {
    uStack_b0 = uStack_b8;
    __ZdlPv();
  }
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  uStack_d0 = 0;
  uStack_d8 = uVar7;
  uStack_d4 = uVar6;
  func_0x0001092d1c20(&uStack_d0,&uStack_d8,&uStack_d0,2);
  puVar11 = &uStack_d0;
  FUN_104977dc0(&uStack_b8);
  if (uStack_d0 != 0) {
    alStack_c8[0] = uStack_d0;
    __ZdlPv();
  }
  if (0 < iVar4) {
    iStack_164 = 0;
    iStack_160 = 0;
    unaff_x23 = *(long *)(param_2 + 0x38);
    puVar15 = *(undefined4 **)(param_3 + 0x38);
    lVar16 = *(long *)(param_1 + 0x38);
    do {
      if (0 < (int)uVar8) {
        lVar28 = 0;
        puStack_158 = puVar15;
        do {
          if (-1 < (int)(uVar5 - uVar7)) {
            uVar26 = 0;
            iVar3 = iStack_160;
            do {
              if (0 < (int)uVar7) {
                uVar13 = 0;
                puVar17 = puStack_158;
                puVar18 = puStack_e8;
                puVar19 = puStack_80;
                iVar14 = iVar3;
                do {
                  uVar20 = uVar27;
                  puVar22 = puVar17;
                  puVar23 = puVar18;
                  puVar24 = puVar19;
                  iVar21 = iVar14;
                  if (0 < (int)uVar6) {
                    do {
                      *puVar23 = *(undefined4 *)(unaff_x23 + (long)iVar21 * 4);
                      uVar29 = *puVar22;
                      puVar22 = puVar22 + (int)uVar8;
                      *puVar24 = uVar29;
                      iVar21 = iVar21 + 1;
                      uVar20 = uVar20 - 1;
                      puVar23 = puVar23 + 1;
                      puVar24 = puVar24 + 1;
                    } while (uVar20 != 0);
                  }
                  uVar13 = uVar13 + 1;
                  puVar19 = puVar19 + (int)uVar6;
                  puVar18 = puVar18 + (int)uVar6;
                  puVar17 = puVar17 + (long)(int)uVar6 * (long)(int)uVar8;
                  iVar14 = iVar14 + uVar6;
                } while (uVar13 != uVar7);
              }
              puVar11 = (undefined8 *)0x1;
              _vDSP_dotpr(puStack_e8,1,puStack_80,1,&uStack_d0,(long)(int)(uVar7 * uVar6));
              *(undefined4 *)
               (lVar16 + (long)(int)((int)lVar28 + (iStack_164 * uVar1 + (int)uVar26) * uVar8) * 4)
                   = (undefined4)uStack_d0;
              uVar26 = uVar26 + 1;
              iVar3 = iVar3 + uVar6;
            } while (uVar26 != uVar1);
          }
          lVar28 = lVar28 + 1;
          puStack_158 = puStack_158 + 1;
        } while (lVar28 != (int)uVar8);
      }
      iStack_164 = iStack_164 + 1;
      iStack_160 = iStack_160 + uVar5 * uVar6;
    } while (iStack_164 != iVar4);
  }
  if (plStack_78 != (long *)0x0) {
    plVar30 = plStack_78 + 1;
    do {
      lVar16 = *plVar30;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (uStack_b0 != 0) {
    lStack_a8 = uStack_b0;
    __ZdlPv();
  }
  plVar30 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    plVar2 = plStack_e0 + 1;
    do {
      lVar16 = *plVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = lVar16 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
    }
  }
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  lVar16 = lStack_118;
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (uStack_d0 != 0) {
    alStack_c8[0] = uStack_d0;
    __ZdlPv();
  }
  if (plStack_e0 != (long *)0x0) {
    plVar30 = plStack_e0 + 1;
    do {
      lVar28 = *plVar30;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar10) {
        *plVar30 = lVar28 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  func_0x0001092bc814(param_1 + 0x38);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  lVar28 = lVar16;
  __Unwind_Resume();
  pcVar32 = FUN_1049778fc;
  piVar12 = *(int **)(lVar28 + 8);
  uVar13 = (ulong)(uint)piVar12[2];
  if (0 < piVar12[2]) {
    lVar25 = *(long *)(lVar28 + 0x38);
    lVar28 = puVar11[7];
    iVar4 = *piVar12;
    iVar3 = piVar12[1];
    uVar20 = uVar13;
    plVar30 = plStack_e0;
    do {
      _vDSP_vsadd(lVar25,uVar13,lVar28,lVar25,uVar13,(long)iVar3 * (long)iVar4,in_x6,in_x7,uVar27,
                  unaff_x23,uVar26,plVar30,lVar16,param_1,puVar31,pcVar32);
      lVar28 = lVar28 + 4;
      lVar25 = lVar25 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return;
}



/* Entry: 1049778fc; end: 104977973;  */

void FUN_1049778fc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  piVar3 = *(int **)(param_1 + 8);
  uVar4 = (ulong)(uint)piVar3[2];
  if (0 < piVar3[2]) {
    lVar5 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_2 + 0x38);
    iVar1 = *piVar3;
    iVar2 = piVar3[1];
    uVar7 = uVar4;
    do {
      _vDSP_vsadd(lVar5,uVar4,lVar6,lVar5,uVar4,(long)iVar2 * (long)iVar1);
      lVar6 = lVar6 + 4;
      lVar5 = lVar5 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 104977974; end: 104977b1b;  */

void FUN_104977974(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  ulong uVar16;
  int **ppiVar17;
  float fVar18;
  int iStack_bc;
  int *piStack_b8;
  int *piStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int *piStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  int *piStack_80;
  int *piStack_78;
  undefined8 uStack_70;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar8 = *(int **)(param_2 + 8);
  iVar2 = *piVar8;
  iVar3 = piVar8[1];
  iVar4 = piVar8[2];
  iVar5 = iVar3 - param_3;
  uVar1 = iVar5 + 1;
  piStack_78 = (int *)0x0;
  uStack_70 = 0;
  piStack_80 = (int *)0x0;
  iStack_64 = iVar2;
  uStack_60 = uVar1;
  iStack_5c = iVar4;
  func_0x0001092d1c20(&piStack_80,&iStack_64,&lStack_58,3);
  FUN_104977dc0(param_1,&piStack_80);
  piVar8 = piStack_80;
  if (piStack_80 != (int *)0x0) {
    piStack_78 = piStack_80;
    __ZdlPv();
  }
  if (0 < iVar2) {
    piVar9 = (int *)0x0;
    iVar11 = 0;
    lVar12 = *(long *)(param_2 + 0x38);
    lVar13 = *(long *)(param_1 + 0x38);
    do {
      if (0 < iVar4) {
        iVar14 = 0;
        piVar15 = piVar9;
        do {
          if (-1 < iVar5) {
            uVar16 = 0;
            piVar8 = piVar15;
            do {
              if (param_3 < 1) {
                fVar6 = -3.4028235e+38;
              }
              else {
                fVar6 = -3.4028235e+38;
                piVar7 = piVar8;
                uVar10 = uVar16;
                do {
                  fVar18 = *(float *)(lVar12 + (long)(int)piVar7 * 4);
                  if (fVar6 <= fVar18) {
                    fVar6 = fVar18;
                  }
                  uVar10 = uVar10 + 1;
                  piVar7 = (int *)(ulong)(uint)((int)piVar7 + iVar4);
                } while ((long)uVar10 < (long)(uVar16 + (long)param_3));
              }
              *(float *)(lVar13 + (long)(int)(iVar14 + (iVar11 * uVar1 + (int)uVar16) * iVar4) * 4)
                   = fVar6;
              uVar16 = uVar16 + 1;
              piVar8 = (int *)(ulong)(uint)((int)piVar8 + iVar4);
            } while (uVar16 != uVar1);
          }
          iVar14 = iVar14 + 1;
          piVar15 = (int *)(ulong)((int)piVar15 + 1);
        } while (iVar14 != iVar4);
      }
      iVar11 = iVar11 + 1;
      piVar9 = (int *)(ulong)(uint)((int)piVar9 + iVar3 * iVar4);
    } while (iVar11 != iVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (piStack_80 != (int *)0x0) {
      piStack_78 = piStack_80;
      __ZdlPv();
    }
    piVar9 = piVar8;
    __Unwind_Resume();
    pcStack_88 = FUN_104977b1c;
    ppiVar17 = (int **)(piVar9 + 2);
    piStack_b8 = (int *)0x0;
    piStack_b0 = (int *)0x0;
    uStack_a8 = 0;
    lStack_a0 = param_1;
    piStack_98 = piVar8;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010923b3a0(&piStack_b8,*ppiVar17);
    iStack_bc = 1;
    piVar8 = *(int **)(piVar9 + 2);
    uVar16 = *(long *)(piVar9 + 4) - (long)piVar8 >> 2;
    if (1 < uVar16) {
      lVar12 = uVar16 - 1;
      iStack_bc = 1;
      do {
        piVar8 = piVar8 + 1;
        iStack_bc = iStack_bc * *piVar8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    func_0x00010923b3a0(&piStack_b8,&iStack_bc);
    if ((long)piStack_b0 - (long)piStack_b8 == 0) {
      uVar16 = 1;
    }
    else {
      uVar10 = (long)piStack_b0 - (long)piStack_b8 >> 2;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uVar16 = 1;
      piVar8 = piStack_b8;
      do {
        uVar16 = (ulong)(uint)(*piVar8 * (int)uVar16);
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar10 != 0);
    }
    if (*piVar9 < (int)uVar16) {
      *piVar9 = (int)uVar16;
      uVar16 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
      FUN_104977fa4(uVar16);
      FUN_1049781dc(piVar9 + 0xe,uVar16,FUN_104977fe4);
    }
    if (ppiVar17 != &piStack_b8) {
      func_0x00010928555c(ppiVar17,piStack_b8,piStack_b0,(long)piStack_b0 - (long)piStack_b8 >> 2);
    }
    if (piStack_b8 != (int *)0x0) {
      piStack_b0 = piStack_b8;
      __ZdlPv(piStack_b8);
    }
    return;
  }
  return;
}



/* Entry: 104977b1c; end: 104977c5b;  */

void FUN_104977b1c(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  int **ppiVar5;
  int iStack_3c;
  int *piStack_38;
  int *piStack_30;
  undefined8 uStack_28;
  
  ppiVar5 = (int **)(param_1 + 2);
  piStack_38 = (int *)0x0;
  piStack_30 = (int *)0x0;
  uStack_28 = 0;
  func_0x00010923b3a0(&piStack_38,*ppiVar5);
  iStack_3c = 1;
  piVar4 = *(int **)(param_1 + 2);
  uVar2 = *(long *)(param_1 + 4) - (long)piVar4 >> 2;
  if (1 < uVar2) {
    lVar3 = uVar2 - 1;
    iStack_3c = 1;
    do {
      piVar4 = piVar4 + 1;
      iStack_3c = iStack_3c * *piVar4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  func_0x00010923b3a0(&piStack_38,&iStack_3c);
  if ((long)piStack_30 - (long)piStack_38 == 0) {
    uVar2 = 1;
  }
  else {
    uVar1 = (long)piStack_30 - (long)piStack_38 >> 2;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar2 = 1;
    piVar4 = piStack_38;
    do {
      uVar2 = (ulong)(uint)(*piVar4 * (int)uVar2);
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 1;
    } while (uVar1 != 0);
  }
  if (*param_1 < (int)uVar2) {
    *param_1 = (int)uVar2;
    uVar2 = -(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar2 << 2;
    FUN_104977fa4(uVar2);
    FUN_1049781dc(param_1 + 0xe,uVar2,FUN_104977fe4);
  }
  if (ppiVar5 != &piStack_38) {
    func_0x00010928555c(ppiVar5,piStack_38,piStack_30,(long)piStack_30 - (long)piStack_38 >> 2);
  }
  if (piStack_38 != (int *)0x0) {
    piStack_30 = piStack_38;
    __ZdlPv(piStack_38);
  }
  return;
}



/* Entry: 104977c5c; end: 104977dbf;  */

uint * FUN_104977c5c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_60 = **(int **)(param_2 + 8);
  lVar12 = (long)iStack_60;
  iVar11 = (*(int **)(param_2 + 8))[1];
  iVar2 = *(int *)(*(long *)(param_3 + 8) + 4);
  puVar16 = (uint *)(long)iVar2;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_78 = 0;
  iStack_5c = iVar2;
  func_0x0001092d1c20(&lStack_78,&iStack_60,&lStack_58,2);
  FUN_104977dc0(param_1,&lStack_78);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  puVar18 = *(uint **)(param_1 + 0x38);
  lVar19 = *(long *)(param_4 + 0x38);
  puVar6 = *(uint **)(param_2 + 0x38);
  puVar8 = (uint *)0x1;
  lStack_80 = (long)iVar11;
  _vDSP_mmul(puVar6,1,*(undefined8 *)(param_3 + 0x38),1,puVar18,1,lVar12,puVar16);
  puVar7 = puVar16;
  if (0 < iVar2) {
    do {
      puVar6 = puVar18;
      puVar8 = puVar16;
      _vDSP_vsadd(puVar18,puVar16,lVar19,puVar18,puVar16,lVar12);
      lVar19 = lVar19 + 4;
      puVar18 = puVar18 + 1;
      puVar7 = (uint *)((long)puVar7 + -1);
      param_3 = 0;
    } while (puVar7 != (uint *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_104975554(param_1);
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_88 = FUN_104977dc0;
    puVar15 = puVar7 + 2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar17 = puVar7 + 0xe;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar17[0] = 0;
    puVar17[1] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    lStack_c0 = param_3;
    lStack_b8 = lVar19;
    puStack_b0 = puVar18;
    puStack_a8 = puVar16;
    puStack_a0 = puVar6;
    lStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010925b8c4(&lStack_d8,*(long *)(puVar8 + 2) - *(long *)puVar8 >> 2);
    *(undefined4 *)(lStack_d0 + -4) = 1;
    iVar11 = (int)(lStack_d0 - lStack_d8 >> 2);
    if (1 < iVar11) {
      uVar14 = (ulong)(iVar11 - 2);
      lVar19 = *(long *)puVar8;
      lVar12 = uVar14 << 2;
      iVar11 = *(int *)(lStack_d8 + uVar14 * 4 + 4);
      do {
        iVar11 = *(int *)(lVar19 + 4 + lVar12) * iVar11;
        *(int *)(lStack_d8 + lVar12) = iVar11;
        lVar12 = lVar12 + -4;
      } while (lVar12 != -4);
    }
    if (puVar7 + 8 != (uint *)&lStack_d8) {
      func_0x00010928555c(puVar7 + 8);
    }
    piVar9 = *(int **)puVar8;
    if (puVar15 != puVar8) {
      func_0x00010928555c(puVar15,piVar9,*(long *)(puVar8 + 2),
                          *(long *)(puVar8 + 2) - (long)piVar9 >> 2);
      piVar9 = *(int **)puVar8;
    }
    *puVar7 = 1;
    piVar13 = *(int **)(puVar8 + 2);
    if (piVar9 == piVar13) {
      uVar14 = 4;
    }
    else {
      uVar14 = 1;
      do {
        piVar10 = piVar9 + 1;
        uVar3 = (int)uVar14 * *piVar9;
        uVar14 = (ulong)uVar3;
        *puVar7 = uVar3;
        piVar9 = piVar10;
      } while (piVar10 != piVar13);
      uVar14 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
    }
    FUN_104977fa4(uVar14);
    FUN_104977ff0(auStack_e8,uVar14,FUN_104977fe4);
    func_0x00010967fda4(puVar17,auStack_e8);
    if (plStack_e0 != (long *)0x0) {
      plVar1 = plStack_e0 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
      }
    }
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
    return puVar7;
  }
  return puVar6;
}



/* Entry: 104977dc0; end: 104977fa3;  */

uint * FUN_104977dc0(uint *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  
  puVar12 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar12[0] = 0;
  puVar12[1] = 0;
  puVar13 = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar13[0] = 0;
  puVar13[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  func_0x00010925b8c4(&lStack_58,*(long *)(param_2 + 2) - *(long *)param_2 >> 2);
  *(undefined4 *)(lStack_50 + -4) = 1;
  iVar7 = (int)(lStack_50 - lStack_58 >> 2);
  if (1 < iVar7) {
    uVar10 = (ulong)(iVar7 - 2);
    lVar11 = *(long *)param_2;
    lVar8 = uVar10 << 2;
    iVar7 = *(int *)(lStack_58 + uVar10 * 4 + 4);
    do {
      iVar7 = *(int *)(lVar11 + 4 + lVar8) * iVar7;
      *(int *)(lStack_58 + lVar8) = iVar7;
      lVar8 = lVar8 + -4;
    } while (lVar8 != -4);
  }
  if (param_1 + 8 != (uint *)&lStack_58) {
    func_0x00010928555c(param_1 + 8);
  }
  piVar5 = *(int **)param_2;
  if (puVar12 != param_2) {
    func_0x00010928555c(puVar12,piVar5,*(long *)(param_2 + 2),
                        *(long *)(param_2 + 2) - (long)piVar5 >> 2);
    piVar5 = *(int **)param_2;
  }
  *param_1 = 1;
  piVar9 = *(int **)(param_2 + 2);
  if (piVar5 == piVar9) {
    uVar10 = 4;
  }
  else {
    uVar10 = 1;
    do {
      piVar6 = piVar5 + 1;
      uVar2 = (int)uVar10 * *piVar5;
      uVar10 = (ulong)uVar2;
      *param_1 = uVar2;
      piVar5 = piVar6;
    } while (piVar6 != piVar9);
    uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
  }
  FUN_104977fa4(uVar10);
  FUN_104977ff0(auStack_68,uVar10,FUN_104977fe4);
  func_0x00010967fda4(puVar13,auStack_68);
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104977fa4; end: 104977fe3;  */

undefined8 *** FUN_104977fa4(undefined8 ***param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_18;
  
  ppuStack_18 = (undefined8 ***)0x0;
  if (param_1 == (undefined8 ***)0x0) {
    func_0x00010bda8bb0();
  }
  else {
    pppuVar1 = &ppuStack_18;
    _posix_memalign(pppuVar1,0x40,param_1);
    param_1 = pppuVar1;
    if ((int)pppuVar1 == 0) {
      return (undefined8 ***)ppuStack_18;
    }
  }
  func_0x00010bda8b88();
  if (param_1 != (undefined8 ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return param_1;
  }
  return (undefined8 ***)0x0;
}



/* Entry: 104977fe4; end: 104977fef;  */

void FUN_104977fe4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 104977ff0; end: 10497806f;  */

undefined8 * FUN_104977ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_1107b9bf8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 104978070; end: 104978073;  */

void FUN_104978070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104978074; end: 104978087;  */

void FUN_104978074(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104978088; end: 1049780a3;  */

void FUN_104978088(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1049780a4; end: 1049780df;  */

long FUN_1049780a4(long param_1,undefined8 param_2)

{
  func_0x0001000334dc(param_2,&PTR_DAT_110b2e920);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1049780e0; end: 1049780e3;  */

void FUN_1049780e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1049780e4; end: 1049781db;  */

long * FUN_1049780e4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  plVar2 = param_1;
  func_0x000100032e5c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar9 = CONCAT17(POPCOUNT((char)((ulong)plVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar5 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar5 >> 8)),POPCOUNT((char)plVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      plVar7 = (long *)((long)plVar5 - 1U & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          FUN_104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar3;
          }
        }
        else {
          if (uVar6 < 2) {
            plVar4 = (long *)((ulong)plVar4 & (long)plVar5 - 1U);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1049781dc; end: 10497824b;  */

void FUN_1049781dc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_104977ff0(&uStack_30);
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      uStack_30 = uVar2;
      plStack_28 = plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10497824c; end: 1049782bb;  */

void FUN_10497824c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1049782bc(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1049782bc; end: 1049782f3;  */

undefined1  [16] FUN_1049782bc(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_104978308();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_1049782f4();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar3 = plVar1[2];
  func_0x000104978374();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 1049782f4; end: 104978307;  */

undefined1  [16] FUN_1049782f4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar3 = plVar1[2];
  func_0x000104978374();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 104978308; end: 1049784ff;  */

undefined1  [16] FUN_104978308(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = param_1[2];
  func_0x000104978374();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104978500; end: 104978573;  */

undefined8 * FUN_104978500(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_104978574(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1049787a0(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 104978574; end: 10497864f;  */

undefined1  [16] FUN_104978574(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x25;
  undefined2 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_98 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (param_2 >= plVar11 && param_2 != plVar11) {
LAB_1049785bc:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar8 = param_1;
        func_0x000100032e5c();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar3 = CONCAT17(POPCOUNT((char)((ulong)plVar4 >> 0x38)),
                           CONCAT16(POPCOUNT((char)((ulong)plVar4 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)((ulong)plVar4 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)((ulong)plVar4 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)((ulong)plVar4 >> 0x18
                                                                              )),
                                                               CONCAT12(POPCOUNT((char)((ulong)
                                                  plVar4 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)plVar4 >> 8)),
                                                           POPCOUNT((char)plVar4))))))));
          uVar12 = NEON_uaddlv(uVar3,1);
          uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff;
          if (uVar6 < 2) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar5 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if ((puVar5 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar5, plVar11 != (long *)0x0))
          {
            do {
              plVar9 = (long *)plVar11[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                FUN_104c4fbc4(param_1,plVar11 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  aplStack_98[0] = plVar11;
                  goto LAB_1049789ac;
                }
              }
              else {
                if (uVar6 < 2) {
                  plVar9 = (long *)((ulong)plVar9 & (long)plVar4 - 1U);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
        FUN_1049789f0(aplStack_98,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar6 = 1;
          if ((long *)0x2 < plVar4) {
            uVar6 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar6 = uVar6 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar6 <= uVar7) {
            uVar6 = uVar7;
          }
          FUN_104978574(param_1,uVar6);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar6 = 0;
              if (plVar4 != (long *)0x0) {
                uVar6 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar6 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_98[0] = *plVar8;
          *plVar8 = (long)aplStack_98[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_98[0] != 0) {
            plVar8 = *(long **)(*aplStack_98[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar6 = 0;
              if (plVar4 != (long *)0x0) {
                uVar6 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar6 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_98[0];
          }
        }
        else {
          *aplStack_98[0] = *plVar8;
          *plVar8 = (long)aplStack_98[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
LAB_1049789ac:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = aplStack_98[0];
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar11 = (long *)plVar4[1];
        uVar3 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                         CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18)
                                                                     ),
                                                             CONCAT12(POPCOUNT((char)((ulong)param_2
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)param_2 >> 8)),POPCOUNT((char)param_2)))))))
                        );
        uVar12 = NEON_uaddlv(uVar3,1);
        uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff;
        if (uVar6 < 2) {
          plVar11 = (long *)((ulong)plVar11 & (long)param_2 - 1U);
        }
        else if (param_2 <= plVar11) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar11 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        if (plVar9 != (long *)0x0) {
          do {
            plVar10 = (long *)plVar9[1];
            if (uVar6 < 2) {
              plVar10 = (long *)((ulong)plVar10 & (long)param_2 - 1U);
            }
            else if (param_2 <= plVar10) {
              uVar7 = 0;
              if (param_2 != (long *)0x0) {
                uVar7 = (ulong)plVar10 / (ulong)param_2;
              }
              plVar10 = (long *)((long)plVar10 - uVar7 * (long)param_2);
            }
            if (plVar10 != plVar11) {
              lVar1 = *param_1;
              if (*(long *)(lVar1 + (long)plVar10 * 8) == 0) {
                *(long **)(lVar1 + (long)plVar10 * 8) = plVar4;
                plVar11 = plVar10;
              }
              else {
                *plVar4 = *plVar9;
                *plVar9 = **(long **)(lVar1 + (long)plVar10 * 8);
                **(undefined8 **)(lVar1 + (long)plVar10 * 8) = plVar9;
                plVar9 = plVar4;
              }
            }
            plVar4 = plVar9;
            plVar9 = (long *)*plVar4;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar11) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) ||
       (uVar3 = CONCAT17(POPCOUNT((char)((ulong)plVar11 >> 0x38)),
                         CONCAT16(POPCOUNT((char)((ulong)plVar11 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)((ulong)plVar11 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)((ulong)plVar11 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)((ulong)plVar11 >> 0x18)
                                                                     ),
                                                             CONCAT12(POPCOUNT((char)((ulong)plVar11
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)plVar11 >> 8)),POPCOUNT((char)plVar11)))))))
                        ), uVar12 = NEON_uaddlv(uVar3,1),
       1 < (CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff))) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar11) goto LAB_1049785bc;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 104978650; end: 10497879f;  */

undefined1  [16] FUN_104978650(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  undefined2 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *aplStack_98 [3];
  
  uVar9 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar9 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar6 = param_1;
      func_0x000100032e5c();
      plVar11 = (long *)param_1[1];
      if (plVar11 != (long *)0x0) {
        uVar4 = CONCAT17(POPCOUNT((char)((ulong)plVar11 >> 0x38)),
                         CONCAT16(POPCOUNT((char)((ulong)plVar11 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)((ulong)plVar11 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)((ulong)plVar11 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)((ulong)plVar11 >> 0x18)
                                                                     ),
                                                             CONCAT12(POPCOUNT((char)((ulong)plVar11
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)plVar11 >> 8)),POPCOUNT((char)plVar11)))))))
                        );
        uVar14 = NEON_uaddlv(uVar4,1);
        uVar9 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar14) & 0xffffffff;
        if (uVar9 < 2) {
          unaff_x25 = (long *)((long)plVar11 - 1U & (ulong)plVar6);
        }
        else {
          unaff_x25 = plVar6;
          if (plVar11 <= plVar6) {
            uVar5 = 0;
            if (plVar11 != (long *)0x0) {
              uVar5 = (ulong)plVar6 / (ulong)plVar11;
            }
            unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar11);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if ((puVar7 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar7, plVar13 != (long *)0x0)) {
          do {
            plVar8 = (long *)plVar13[1];
            if (plVar8 == plVar6) {
              plVar8 = param_1;
              FUN_104c4fbc4(param_1,plVar13 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                aplStack_98[0] = plVar13;
                goto LAB_1049789ac;
              }
            }
            else {
              if (uVar9 < 2) {
                plVar8 = (long *)((ulong)plVar8 & (long)plVar11 - 1U);
              }
              else if (plVar11 <= plVar8) {
                uVar5 = 0;
                if (plVar11 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar11;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar11);
              }
              if (plVar8 != unaff_x25) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      FUN_1049789f0(aplStack_98,param_1,plVar6,param_3);
      if ((plVar11 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar11 < (float)(param_1[3] + 1))) {
        uVar9 = 1;
        if ((long *)0x2 < plVar11) {
          uVar9 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
        }
        uVar9 = uVar9 | (long)plVar11 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
        }
        FUN_104978574(param_1,uVar9);
        plVar11 = (long *)param_1[1];
        if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar11 - 1U & (ulong)plVar6);
        }
        else {
          unaff_x25 = plVar6;
          if (plVar11 <= plVar6) {
            uVar9 = 0;
            if (plVar11 != (long *)0x0) {
              uVar9 = (ulong)plVar6 / (ulong)plVar11;
            }
            unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar11);
          }
        }
      }
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar6 == (long *)0x0) {
        plVar6 = param_1 + 2;
        *aplStack_98[0] = *plVar6;
        *plVar6 = (long)aplStack_98[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar6;
        if (*aplStack_98[0] != 0) {
          plVar6 = *(long **)(*aplStack_98[0] + 8);
          if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
            plVar6 = (long *)((ulong)plVar6 & (long)plVar11 - 1U);
          }
          else if (plVar11 <= plVar6) {
            uVar9 = 0;
            if (plVar11 != (long *)0x0) {
              uVar9 = (ulong)plVar6 / (ulong)plVar11;
            }
            plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar11);
          }
          *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_98[0];
        }
      }
      else {
        *aplStack_98[0] = *plVar6;
        *plVar6 = (long)aplStack_98[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
LAB_1049789ac:
      auVar16._8_8_ = uVar4;
      auVar16._0_8_ = aplStack_98[0];
      return auVar16;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = plVar6[1];
      uVar4 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(param_2 >> 0x10)
                                                                            ),
                                                                    CONCAT11(POPCOUNT((char)(param_2
                                                                                            >> 8)),
                                                                             POPCOUNT((char)param_2)
                                                                            )))))));
      uVar14 = NEON_uaddlv(uVar4,1);
      uVar10 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar14) & 0xffffffff;
      if (uVar10 < 2) {
        uVar5 = uVar5 & param_2 - 1;
      }
      else if (param_2 <= uVar5) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar12 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar6;
      if (plVar11 != (long *)0x0) {
        do {
          uVar12 = plVar11[1];
          if (uVar10 < 2) {
            uVar12 = uVar12 & param_2 - 1;
          }
          else if (param_2 <= uVar12) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar12 / param_2;
            }
            uVar12 = uVar12 - uVar1 * param_2;
          }
          if (uVar12 != uVar5) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar12 * 8) == 0) {
              *(long **)(lVar2 + uVar12 * 8) = plVar6;
              uVar5 = uVar12;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(long **)(lVar2 + uVar12 * 8);
              **(undefined8 **)(lVar2 + uVar12 * 8) = plVar11;
              plVar11 = plVar6;
            }
          }
          plVar6 = plVar11;
          plVar11 = (long *)*plVar6;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  auVar15._8_8_ = uVar9;
  auVar15._0_8_ = lVar3;
  return auVar15;
}



/* Entry: 1049787a0; end: 1049789ef;  */

undefined1  [16] FUN_1049787a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  undefined2 uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  plVar7 = param_1;
  func_0x000100032e5c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar9 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar9 >> 8)),POPCOUNT((char)plVar9))))))));
    uVar10 = NEON_uaddlv(uVar1,1);
    uVar4 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
      do {
        plVar3 = (long *)plVar8[1];
        if (plVar3 == plVar7) {
          plVar3 = param_1;
          FUN_104c4fbc4(param_1,plVar8 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            aplStack_78[0] = plVar8;
            goto LAB_1049789ac;
          }
        }
        else {
          if (uVar4 < 2) {
            plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar3) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar3 / (ulong)plVar9;
            }
            plVar3 = (long *)((long)plVar3 - uVar6 * (long)plVar9);
          }
          if (plVar3 != unaff_x25) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  FUN_1049789f0(aplStack_78,param_1,plVar7,param_3);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_104978574(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar7;
    if (*aplStack_78[0] != 0) {
      plVar7 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_1049789ac:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = aplStack_78[0];
  return auVar11;
}



/* Entry: 1049789f0; end: 104978a5b;  */

void FUN_1049789f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_104978a5c(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104978a5c; end: 104978b47;  */

undefined8 * FUN_104978a5c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    *param_1 = uVar6;
  }
  uVar3 = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = uVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x000109285684(param_1 + 4,param_2[4],param_2[5],(long)(param_2[5] - param_2[4]) >> 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000109285684();
  lVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return param_1;
}



/* Entry: 104978b48; end: 104978b8f;  */

void FUN_104978b48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001049783b0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104978b90; end: 1049791db; +[FBSDKModelParser parseWeightsData:] */

void FUN_104978b90(undefined8 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined *puVar20;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  int aiStack_288 [2];
  long lStack_280;
  long lStack_278;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_181;
  undefined8 *apuStack_180 [33];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_4 != (int *)0x0) {
    piVar7 = param_4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    piVar8 = param_4;
    func_0x00010c08fa60();
    puVar9 = PTR_PTR_1126add78;
    if ((int *)0x3 < piVar8) {
      iVar3 = *piVar7;
      piVar1 = (int *)((long)iVar3 + 4);
      if (piVar1 <= piVar8) {
        puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar16 = puVar9;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = puVar16;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        func_0x00010bfc6b80();
        _objc_retainAutoreleasedReturnValue();
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        puStack_2d8 = puStack_2e0;
        _objc_retain();
        puStack_2b8 = puStack_2d8;
        func_0x00010bf52a60();
        if (puStack_2b8 != (undefined *)0x0) {
          iVar19 = 0;
          lStack_298 = (long)piVar7 + (long)iVar3 + 4;
          lVar15 = *plStack_1c0;
          do {
            puVar16 = (undefined *)0x0;
            do {
              if (*plStack_1c0 != lVar15) {
                _objc_enumerationMutation(puStack_2d8);
              }
              piVar10 = *(int **)(lStack_1c8 + (long)puVar16 * 8);
              _objc_retain();
              piVar7 = (int *)PTR_PTR_1126add78;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x00010bf71e60();
              _objc_retainAutoreleasedReturnValue();
              piVar11 = piVar10;
              if (piVar7 != (int *)0x0) {
                piVar11 = piVar7;
                _objc_retain();
                _objc_release(piVar10);
              }
              _objc_retainAutorelease(piVar11);
              param_3 = piVar11;
              func_0x00010bdc3520();
              func_0x00010002d4d8(auStack_1e8);
              puVar12 = PTR_PTR_1126add78;
              lStack_200 = 0;
              lStack_1f8 = 0;
              uStack_1f0 = 0;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x00010bf71e60();
              _objc_retainAutoreleasedReturnValue();
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              lStack_238 = 0;
              uStack_240 = 0;
              uStack_228 = 0;
              plStack_230 = (long *)0x0;
              _objc_retain();
              puVar13 = puVar12;
              func_0x00010bf52a60();
              if (puVar13 == (undefined *)0x0) {
                uVar17 = 1;
              }
              else {
                lVar18 = *plStack_230;
                uVar17 = 1;
                do {
                  puVar20 = (undefined *)0x0;
                  do {
                    if (*plStack_230 != lVar18) {
                      _objc_enumerationMutation(puVar12);
                    }
                    iVar3 = (int)*(undefined8 *)(lStack_238 + (long)puVar20 * 8);
                    func_0x00010c067ec0();
                    aiStack_288[0] = iVar3;
                    param_3 = aiStack_288;
                    func_0x00010923b3a0(&lStack_200);
                    uVar17 = (ulong)(uint)(aiStack_288[0] * (int)uVar17);
                    puVar20 = puVar20 + 1;
                  } while (puVar13 != puVar20);
                  puVar13 = puVar12;
                  func_0x00010bf52a60();
                } while (puVar13 != (undefined *)0x0);
              }
              _objc_release(puVar12);
              iVar19 = (int)uVar17 + iVar19;
              iVar3 = (int)piVar1 + iVar19 * 4;
              if ((int *)(long)iVar3 <= piVar8) {
                FUN_104977dc0(aiStack_288,&lStack_200);
                _memcpy(uStack_250,lStack_298,-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2);
                apuStack_180[0] = auStack_1e8;
                puVar14 = param_1;
                FUN_10497a26c(param_1,auStack_1e8,&UNK_10dd48e93,apuStack_180,&uStack_181);
                *(int *)(puVar14 + 5) = aiStack_288[0];
                if ((int *)(puVar14 + 5) != aiStack_288) {
                  func_0x00010928555c(puVar14 + 6,lStack_280,lStack_278,lStack_278 - lStack_280 >> 2
                                     );
                  func_0x00010928555c(puVar14 + 9,lStack_268,lStack_260,lStack_260 - lStack_268 >> 2
                                     );
                }
                param_3 = (int *)&uStack_250;
                func_0x0001096822fc(puVar14 + 0xc);
                plVar6 = plStack_248;
                if (plStack_248 != (long *)0x0) {
                  plVar2 = plStack_248 + 1;
                  do {
                    lVar18 = *plVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *plVar2 = lVar18 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar18 == 0) {
                    (**(code **)(*plStack_248 + 0x10))(plStack_248);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                  }
                }
                if (lStack_268 != 0) {
                  lStack_260 = lStack_268;
                  __ZdlPv();
                }
                if (lStack_280 != 0) {
                  lStack_278 = lStack_280;
                  __ZdlPv();
                }
                lStack_298 = lStack_298 + (long)(int)uVar17 * 4;
              }
              _objc_release(puVar12);
              if (lStack_200 != 0) {
                lStack_1f8 = lStack_200;
                __ZdlPv();
              }
              if (cStack_1d1 < '\0') {
                __ZdlPv(auStack_1e8[0]);
              }
              _objc_release(piVar7);
              _objc_release(piVar11);
              if (piVar8 < (int *)(long)iVar3) goto LAB_104979018;
              puVar16 = puVar16 + 1;
            } while (puVar16 != puStack_2b8);
            puStack_2b8 = puStack_2d8;
            func_0x00010bf52a60();
          } while (puStack_2b8 != (undefined *)0x0);
        }
LAB_104979018:
        _objc_release(puStack_2d8);
        _objc_release(param_2);
        _objc_release(puStack_2d8);
        _objc_release(puVar9);
        puStack_2a8 = puVar9;
        uStack_2a0 = param_2;
      }
    }
  }
  while( true ) {
    piVar7 = param_4;
    _objc_release(param_4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    piVar8 = param_3;
    _objc_release(puStack_2d8);
    _objc_release(uStack_2a0);
    _objc_release(puStack_2e0);
    _objc_release(puStack_2a8);
    if ((int)param_3 != 1) break;
    ___cxa_begin_catch(piVar7);
    ___cxa_end_catch();
    param_3 = piVar8;
  }
  func_0x00010497833c(param_1);
  _objc_release(param_4);
  __Unwind_Resume(piVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(piVar8,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 1049791dc; end: 1049791e3;  */

void FUN_1049791dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 1049791e4; end: 1049792f3; +[FBSDKModelParser validateWeights:forKey:] */

undefined8
FUN_1049791e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_4;
  func_0x00010bfda7c0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bfc7560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1);
    _objc_release(uVar2);
  }
  FUN_104978500(auStack_68,param_3);
  func_0x00010bf38740(param_1);
  func_0x00010497833c(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1049792f4; end: 1049793e7; +[FBSDKModelParser getKeysMapping] */

undefined1  [16] FUN_1049792f4(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  undefined **ppuVar21;
  undefined ***pppuVar22;
  undefined8 uVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined2 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **appuStack_5f8 [3];
  undefined4 *puStack_5e0;
  undefined ***pppuStack_5d8;
  undefined *puStack_5d0;
  undefined ***pppuStack_5c8;
  undefined8 uStack_5c0;
  undefined **ppuStack_5b8;
  undefined ***pppuStack_5b0;
  undefined ***pppuStack_5a8;
  undefined ***pppuStack_5a0;
  undefined ***pppuStack_598;
  undefined1 ***pppuStack_590;
  code *pcStack_588;
  undefined ***pppuStack_580;
  undefined ***pppuStack_578;
  undefined8 auStack_570 [2];
  char cStack_559;
  undefined8 uStack_558;
  undefined ***pppuStack_550;
  undefined ***pppuStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4c9;
  undefined8 *puStack_4c8;
  undefined **appuStack_4c0 [16];
  long lStack_440;
  undefined4 *puStack_430;
  undefined ***pppuStack_428;
  undefined *puStack_420;
  undefined ***pppuStack_418;
  undefined *puStack_410;
  undefined **ppuStack_408;
  undefined ***pppuStack_400;
  undefined *puStack_3f8;
  undefined ***pppuStack_3f0;
  undefined *puStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined ***pppuStack_2c8;
  undefined4 *puStack_2c0;
  undefined *puStack_2b8;
  undefined ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined ***pppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da52f8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da5338;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110da5318;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da5358;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110da5378;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110da53b8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da5398;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110da53d8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110da53f8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110da5438;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110da5418;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da5458;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110da5478;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da5498;
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_88,7);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1049793e8;
    lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1f0 = &PTR____CFConstantStringClassReference_110da5318;
    pppuVar25 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppuStack_2c8 = pppuVar25;
    pppuStack_200 = pppuVar25;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2d0 = puVar17;
    puStack_1f8 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110da54b8;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2d8 = ppuVar21;
    ppuStack_178 = ppuVar21;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2e0 = puVar17;
    puStack_218 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2e8 = puVar6;
    puStack_210 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2f0 = puVar17;
    puStack_208 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110da54d8;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2f8 = puVar6;
    puStack_170 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_300 = puVar17;
    puStack_220 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110da54f8;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_308 = puVar6;
    puStack_168 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_310 = puVar17;
    puStack_238 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_318 = puVar6;
    puStack_230 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_320 = puVar17;
    puStack_228 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da5518;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_328 = puVar6;
    puStack_160 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_330 = puVar17;
    puStack_240 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da5538;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_338 = puVar6;
    puStack_158 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_340 = puVar17;
    puStack_258 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_348 = puVar6;
    puStack_250 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_350 = puVar17;
    puStack_248 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da5558;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_358 = puVar6;
    puStack_150 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_360 = puVar17;
    puStack_260 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110da5358;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_368 = puVar6;
    puStack_148 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_370 = puVar17;
    puStack_270 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_378 = puVar6;
    puStack_268 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110da5418;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_380 = puVar17;
    puStack_140 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_388 = puVar6;
    puStack_278 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110da5398;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_390 = puVar17;
    puStack_138 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_398 = puVar7;
    puStack_288 = puVar7;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_3a0 = puVar6;
    puStack_280 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110da5458;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_3a8 = puVar17;
    puStack_130 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_3b0 = puVar6;
    puStack_290 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_198 = &PTR____CFConstantStringClassReference_110da5578;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_3b8 = puVar17;
    puStack_128 = puVar17;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_3c0 = puVar6;
    puStack_2a0 = puVar6;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_298 = puVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_190 = &PTR____CFConstantStringClassReference_110da5598;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_120 = ppuVar21;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    pppuVar24 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2a8 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110da55b8;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppuStack_118 = pppuVar24;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    pppuVar26 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2b8 = puVar8;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_2b0 = pppuVar26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_180 = &PTR____CFConstantStringClassReference_110da55d8;
    puVar19 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    pppuStack_110 = pppuVar9;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2c0 = (undefined4 *)puVar19;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    pppuVar20 = pppuStack_2c8;
    pppuVar13 = &ppuStack_178;
    pppuVar25 = &ppuStack_1f0;
    puVar15 = (undefined1 *)0xf;
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_108 = puVar10;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puStack_3c8 = puVar17;
    _objc_release(puVar10);
    _objc_release(puVar19);
    _objc_release(pppuVar9);
    _objc_release(pppuVar26);
    _objc_release(puVar8);
    _objc_release(pppuVar24);
    _objc_release(puVar6);
    _objc_release(ppuVar21);
    _objc_release(puVar7);
    _objc_release(puStack_3c0);
    _objc_release(puStack_3b8);
    _objc_release(puStack_3b0);
    _objc_release(puStack_3a8);
    _objc_release(puStack_3a0);
    _objc_release(puStack_398);
    _objc_release(puStack_390);
    _objc_release(puStack_388);
    _objc_release(puStack_380);
    _objc_release(puStack_378);
    _objc_release(puStack_370);
    _objc_release(puStack_368);
    _objc_release(puStack_360);
    _objc_release(puStack_358);
    _objc_release(puStack_350);
    _objc_release(puStack_348);
    _objc_release(puStack_340);
    _objc_release(puStack_338);
    _objc_release(puStack_330);
    _objc_release(puStack_328);
    _objc_release(puStack_320);
    _objc_release(puStack_318);
    _objc_release(puStack_310);
    _objc_release(puStack_308);
    _objc_release(puStack_300);
    _objc_release(puStack_2f8);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    _objc_release(ppuStack_2d8);
    _objc_release(puStack_2d0);
    _objc_release();
    puVar17 = puStack_3c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_100) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      _objc_release(puVar19);
      _objc_release(pppuVar9);
      _objc_release(pppuVar26);
      _objc_release(puVar8);
      _objc_release(pppuVar24);
      _objc_release(puVar6);
      _objc_release(ppuVar21);
      _objc_release(puVar7);
      _objc_release(puStack_3c0);
      _objc_release(puStack_3b8);
      _objc_release(puStack_3b0);
      _objc_release(puStack_3a8);
      _objc_release(puStack_3a0);
      _objc_release(puStack_398);
      _objc_release(puStack_390);
      _objc_release(puStack_388);
      _objc_release(puStack_380);
      _objc_release(puStack_378);
      _objc_release(puStack_370);
      _objc_release(puStack_368);
      _objc_release(puStack_360);
      _objc_release(puStack_358);
      _objc_release(puStack_350);
      _objc_release(puStack_348);
      _objc_release(puStack_340);
      _objc_release(puStack_338);
      _objc_release(puStack_330);
      _objc_release(puStack_328);
      _objc_release(puStack_320);
      _objc_release(puStack_318);
      _objc_release(puStack_310);
      _objc_release(puStack_308);
      _objc_release(puStack_300);
      _objc_release(puStack_2f8);
      _objc_release(puStack_2f0);
      _objc_release(puStack_2e8);
      _objc_release(puStack_2e0);
      _objc_release(ppuStack_2d8);
      _objc_release(puStack_2d0);
      _objc_release(pppuStack_2c8);
      __Unwind_Resume(pppuVar20);
      pcStack_3d8 = FUN_104979dd8;
      lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar12 = pppuVar13;
      pppuVar14 = pppuVar25;
      puStack_430 = (undefined4 *)puVar19;
      pppuStack_428 = pppuVar26;
      puStack_420 = puVar8;
      pppuStack_418 = pppuVar24;
      puStack_410 = puVar6;
      ppuStack_408 = ppuVar21;
      pppuStack_400 = pppuVar9;
      puStack_3f8 = puVar7;
      pppuStack_3f0 = pppuVar20;
      puStack_3e8 = puVar10;
      ppuStack_3e0 = &puStack_a0;
      _objc_retain();
      pppuVar11 = pppuVar25;
      func_0x00010bf529e0();
      if (pppuVar11 == (undefined ***)pppuVar13[3]) {
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        lStack_508 = 0;
        ppuStack_510 = (undefined **)0x0;
        uStack_4f8 = 0;
        puStack_500 = (undefined8 *)0x0;
        pppuVar9 = pppuVar25;
        _objc_retain();
        pppuVar12 = &ppuStack_510;
        pppuVar14 = appuStack_4c0;
        puVar15 = (undefined1 *)0x10;
        pppuStack_578 = pppuVar9;
        func_0x00010bf52a60();
        if (pppuVar9 != (undefined ***)0x0) {
          pppuVar20 = (undefined ***)*puStack_500;
          puVar19 = &uStack_558;
          ppuVar21 = &PTR_PTR_1126ad000;
          pppuStack_580 = pppuVar20;
LAB_104979e6c:
          pppuVar26 = (undefined ***)0x0;
LAB_104979e70:
          if ((undefined ***)*puStack_500 != pppuVar20) {
            _objc_enumerationMutation(pppuStack_578);
          }
          pppuVar22 = *(undefined ****)(lStack_508 + (long)pppuVar26 * 8);
          _objc_retainAutorelease(pppuVar22);
          pppuVar24 = pppuVar22;
          func_0x00010bdc3520(pppuVar22);
          func_0x00010002d4d8(&uStack_558,pppuVar24);
          param_2 = (undefined **)&uStack_558;
          pppuVar11 = pppuVar13;
          FUN_1049780e4(pppuVar13,param_2);
          if ((long)pppuStack_548 < 0) {
            __ZdlPv(CONCAT44(uStack_558._4_4_,(undefined4)uStack_558));
          }
          pppuVar24 = (undefined ***)0x0;
          if (pppuVar11 != (undefined ***)0x0) {
            _objc_retainAutorelease(pppuVar22);
            pppuVar24 = pppuVar22;
            func_0x00010bdc3520(pppuVar22);
            func_0x00010002d4d8(auStack_570,pppuVar24);
            puStack_4c8 = auStack_570;
            puVar15 = &uStack_4c9;
            pppuVar24 = pppuVar13;
            FUN_10497a580(pppuVar13,auStack_570,&UNK_10dd48e93,&puStack_4c8);
            uStack_558._0_4_ = *(undefined4 *)(pppuVar24 + 5);
            pppuStack_548 = (undefined ***)0x0;
            uStack_540 = 0;
            pppuStack_550 = (undefined ***)0x0;
            func_0x000109285684(&pppuStack_550,pppuVar24[6],pppuVar24[7],
                                (long)pppuVar24[7] - (long)pppuVar24[6] >> 2);
            lStack_538 = 0;
            lStack_530 = 0;
            uStack_528 = 0;
            param_2 = pppuVar24[9];
            pppuVar14 = (undefined ***)((long)pppuVar24[10] - (long)param_2 >> 2);
            func_0x000109285684(&lStack_538,param_2,pppuVar24[10],pppuVar14);
            ppuStack_520 = pppuVar24[0xc];
            ppuStack_518 = pppuVar24[0xd];
            if (ppuStack_518 != (undefined **)0x0) {
              ppuVar1 = ppuStack_518 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar5) {
                  *ppuVar1 = *ppuVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if (cStack_559 < '\0') {
              __ZdlPv(auStack_570[0]);
            }
            pppuVar11 = pppuStack_578;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar20 = pppuStack_548;
            pppuVar24 = pppuStack_550;
            pppuVar12 = pppuVar11;
            func_0x00010bf529e0();
            if (pppuVar12 == (undefined ***)((long)pppuVar20 - (long)pppuVar24 >> 2))
            goto code_r0x000104979fb0;
            _objc_release(pppuVar11);
            if (ppuStack_518 != (undefined **)0x0) {
              ppuVar1 = ppuStack_518 + 1;
              do {
                puVar17 = *ppuVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar5) {
                  *ppuVar1 = puVar17 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_10497a0c0:
              ppuVar1 = ppuStack_518;
              if (puVar17 == (undefined *)0x0) {
                (**(code **)(*ppuStack_518 + 0x10))(ppuStack_518);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
              }
            }
LAB_10497a0dc:
            pppuVar12 = pppuVar22;
            if (lStack_538 != 0) {
              lStack_530 = lStack_538;
              __ZdlPv();
              pppuVar12 = pppuVar22;
            }
            if (pppuStack_550 != (undefined ***)0x0) {
              pppuStack_548 = pppuStack_550;
              __ZdlPv();
            }
          }
          uVar23 = 0;
          goto LAB_10497a108;
        }
        uVar23 = 1;
LAB_10497a108:
        _objc_release(pppuStack_578);
      }
      else {
        uVar23 = 0;
      }
      pppuVar13 = pppuVar25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
        auVar28._8_8_ = param_2;
        auVar28._0_8_ = uVar23;
        return auVar28;
      }
      ___stack_chk_fail();
      _objc_release(pppuVar25);
      pppuVar11 = pppuVar13;
      __Unwind_Resume();
      pcStack_588 = FUN_10497a26c;
      pppuVar22 = pppuVar11;
      puStack_5e0 = (undefined4 *)puVar19;
      pppuStack_5d8 = pppuVar26;
      puStack_5d0 = puVar8;
      pppuStack_5c8 = pppuVar24;
      uStack_5c0 = uVar23;
      ppuStack_5b8 = ppuVar21;
      pppuStack_5b0 = pppuVar9;
      pppuStack_5a8 = pppuVar13;
      pppuStack_5a0 = pppuVar20;
      pppuStack_598 = pppuVar25;
      pppuStack_590 = &ppuStack_3e0;
      func_0x000100032e5c();
      pppuVar25 = (undefined ***)pppuVar11[1];
      if (pppuVar25 != (undefined ***)0x0) {
        uVar23 = CONCAT17(POPCOUNT((char)((ulong)pppuVar25 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)pppuVar25 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)pppuVar25 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)pppuVar25 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)pppuVar25 >>
                                                                             0x18)),
                                                              CONCAT12(POPCOUNT((char)((ulong)
                                                  pppuVar25 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)pppuVar25 >> 8)),
                                                           POPCOUNT((char)pppuVar25))))))));
        uVar27 = NEON_uaddlv(uVar23,1);
        uVar16 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar27) & 0xffffffff;
        if (uVar16 < 2) {
          pppuVar26 = (undefined ***)((ulong)((long)pppuVar25 + -1) & (ulong)pppuVar22);
        }
        else {
          pppuVar26 = pppuVar22;
          if (pppuVar25 <= pppuVar22) {
            uVar18 = 0;
            if (pppuVar25 != (undefined ***)0x0) {
              uVar18 = (ulong)pppuVar22 / (ulong)pppuVar25;
            }
            pppuVar26 = (undefined ***)((long)pppuVar22 - uVar18 * (long)pppuVar25);
          }
        }
        if (((undefined8 *)(*pppuVar11)[(long)pppuVar26] != (undefined8 *)0x0) &&
           (ppuVar21 = *(undefined ***)(*pppuVar11)[(long)pppuVar26], ppuVar21 != (undefined **)0x0)
           ) {
          do {
            pppuVar24 = (undefined ***)ppuVar21[1];
            if (pppuVar24 == pppuVar22) {
              pppuVar24 = pppuVar11;
              FUN_104c4fbc4(pppuVar11,ppuVar21 + 2,param_2);
              if (((ulong)pppuVar24 & 1) != 0) {
                uVar23 = 0;
                goto LAB_10497a490;
              }
            }
            else {
              if (uVar16 < 2) {
                pppuVar24 = (undefined ***)((ulong)pppuVar24 & (ulong)((long)pppuVar25 + -1));
              }
              else if (pppuVar25 <= pppuVar24) {
                uVar18 = 0;
                if (pppuVar25 != (undefined ***)0x0) {
                  uVar18 = (ulong)pppuVar24 / (ulong)pppuVar25;
                }
                pppuVar24 = (undefined ***)((long)pppuVar24 - uVar18 * (long)pppuVar25);
              }
              if (pppuVar24 != pppuVar26) break;
            }
            ppuVar21 = (undefined **)*ppuVar21;
          } while (ppuVar21 != (undefined **)0x0);
        }
      }
      FUN_10497a4d4(appuStack_5f8,pppuVar11,pppuVar22,pppuVar12,pppuVar14,puVar15);
      if ((pppuVar25 == (undefined ***)0x0) ||
         (*(float *)(pppuVar11 + 4) * (float)pppuVar25 < (float)((long)pppuVar11[3] + 1))) {
        uVar16 = 1;
        if ((undefined ***)0x2 < pppuVar25) {
          uVar16 = (ulong)(((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) != 0);
        }
        uVar16 = uVar16 | (long)pppuVar25 << 1;
        uVar18 = (ulong)((float)((long)pppuVar11[3] + 1) / *(float *)(pppuVar11 + 4));
        if (uVar16 <= uVar18) {
          uVar16 = uVar18;
        }
        FUN_104978574(pppuVar11,uVar16);
        pppuVar25 = (undefined ***)pppuVar11[1];
        if (((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) == 0) {
          pppuVar26 = (undefined ***)((ulong)((long)pppuVar25 + -1) & (ulong)pppuVar22);
        }
        else {
          pppuVar26 = pppuVar22;
          if (pppuVar25 <= pppuVar22) {
            uVar16 = 0;
            if (pppuVar25 != (undefined ***)0x0) {
              uVar16 = (ulong)pppuVar22 / (ulong)pppuVar25;
            }
            pppuVar26 = (undefined ***)((long)pppuVar22 - uVar16 * (long)pppuVar25);
          }
        }
      }
      ppuVar21 = *pppuVar11;
      puVar19 = (undefined8 *)ppuVar21[(long)pppuVar26];
      if (puVar19 == (undefined8 *)0x0) {
        pppuVar24 = pppuVar11 + 2;
        *appuStack_5f8[0] = (undefined *)*pppuVar24;
        *pppuVar24 = appuStack_5f8[0];
        ppuVar21[(long)pppuVar26] = (undefined *)pppuVar24;
        ppuVar21 = appuStack_5f8[0];
        if (*appuStack_5f8[0] != (undefined *)0x0) {
          pppuVar24 = *(undefined ****)(*appuStack_5f8[0] + 8);
          if (((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) == 0) {
            pppuVar24 = (undefined ***)((ulong)pppuVar24 & (ulong)((long)pppuVar25 + -1));
          }
          else if (pppuVar25 <= pppuVar24) {
            uVar16 = 0;
            if (pppuVar25 != (undefined ***)0x0) {
              uVar16 = (ulong)pppuVar24 / (ulong)pppuVar25;
            }
            pppuVar24 = (undefined ***)((long)pppuVar24 - uVar16 * (long)pppuVar25);
          }
          (*pppuVar11)[(long)pppuVar24] = (undefined *)appuStack_5f8[0];
        }
      }
      else {
        *appuStack_5f8[0] = (undefined *)*puVar19;
        *puVar19 = appuStack_5f8[0];
        ppuVar21 = appuStack_5f8[0];
      }
      pppuVar11[3] = (undefined **)((long)pppuVar11[3] + 1);
      uVar23 = 1;
LAB_10497a490:
      auVar29._8_8_ = uVar23;
      auVar29._0_8_ = ppuVar21;
      return auVar29;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = puVar17;
  return auVar30;
code_r0x000104979fb0:
  pppuVar24 = (undefined ***)0x0;
  pppuVar12 = pppuVar22;
  while (pppuVar20 = pppuVar11, func_0x00010bf529e0(), pppuVar24 < pppuVar20) {
    iVar3 = *(int *)((long)pppuStack_550 + (long)pppuVar24 * 4);
    puVar8 = PTR_PTR_1126add78;
    pppuVar22 = pppuVar11;
    pppuVar14 = pppuVar24;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010c067ec0();
    bVar5 = iVar3 == (int)puVar17;
    pppuVar20 = (undefined ***)(ulong)bVar5;
    _objc_release(puVar8);
    pppuVar24 = (undefined ***)((long)pppuVar24 + 1);
    pppuVar12 = pppuVar22;
    if (!bVar5) {
      _objc_release(pppuVar11);
      if (ppuStack_518 != (undefined **)0x0) {
        ppuVar1 = ppuStack_518 + 1;
        do {
          puVar17 = *ppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10497a0c0;
      }
      goto LAB_10497a0dc;
    }
  }
  _objc_release(pppuVar11);
  ppuVar1 = ppuStack_518;
  if (ppuStack_518 != (undefined **)0x0) {
    ppuVar2 = ppuStack_518 + 1;
    do {
      puVar17 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = puVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_518 + 0x10))(ppuStack_518);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
  if (lStack_538 != 0) {
    lStack_530 = lStack_538;
    __ZdlPv();
  }
  pppuVar20 = pppuStack_580;
  if (pppuStack_550 != (undefined ***)0x0) {
    pppuStack_548 = pppuStack_550;
    __ZdlPv();
  }
  pppuVar26 = (undefined ***)((long)pppuVar26 + 1);
  if (pppuVar26 == pppuVar9) goto code_r0x00010497a078;
  goto LAB_104979e70;
code_r0x00010497a078:
  pppuVar12 = &ppuStack_510;
  pppuVar14 = appuStack_4c0;
  puVar15 = (undefined1 *)0x10;
  pppuVar9 = pppuStack_578;
  func_0x00010bf52a60();
  uVar23 = 1;
  if (pppuVar9 == (undefined ***)0x0) goto LAB_10497a108;
  goto LAB_104979e6c;
}



/* Entry: 1049793e8; end: 104979dd7; +[FBSDKModelParser getMTMLWeightsInfo] */

undefined1  [16] FUN_1049793e8(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  undefined **ppuVar21;
  undefined ***pppuVar22;
  undefined8 uVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined2 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined **appuStack_568 [3];
  undefined4 *puStack_550;
  undefined ***pppuStack_548;
  undefined *puStack_540;
  undefined ***pppuStack_538;
  undefined8 uStack_530;
  undefined **ppuStack_528;
  undefined ***pppuStack_520;
  undefined ***pppuStack_518;
  undefined ***pppuStack_510;
  undefined ***pppuStack_508;
  undefined1 **ppuStack_500;
  code *pcStack_4f8;
  undefined ***pppuStack_4f0;
  undefined ***pppuStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  undefined8 uStack_4c8;
  undefined ***pppuStack_4c0;
  undefined ***pppuStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_439;
  undefined8 *puStack_438;
  undefined **appuStack_430 [16];
  long lStack_3b0;
  undefined4 *puStack_3a0;
  undefined ***pppuStack_398;
  undefined *puStack_390;
  undefined ***pppuStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined ***pppuStack_370;
  undefined *puStack_368;
  undefined ***pppuStack_360;
  undefined *puStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined ***pppuStack_238;
  undefined4 *puStack_230;
  undefined *puStack_228;
  undefined ***pppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined ***pppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110da5318;
  pppuVar25 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x100);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pppuStack_238 = pppuVar25;
  pppuStack_170 = pppuVar25;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_240 = puVar17;
  puStack_168 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110da54b8;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_248 = ppuVar21;
  ppuStack_e8 = ppuVar21;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_250 = puVar17;
  puStack_188 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_258 = puVar6;
  puStack_180 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_260 = puVar17;
  puStack_178 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110da54d8;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_268 = puVar6;
  puStack_e0 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_270 = puVar17;
  puStack_190 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110da54f8;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_278 = puVar6;
  puStack_d8 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_280 = puVar17;
  puStack_1a8 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_288 = puVar6;
  puStack_1a0 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_290 = puVar17;
  puStack_198 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110da5518;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_298 = puVar6;
  puStack_d0 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2a0 = puVar17;
  puStack_1b0 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110da5538;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2a8 = puVar6;
  puStack_c8 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2b0 = puVar17;
  puStack_1c8 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2b8 = puVar6;
  puStack_1c0 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2c0 = puVar17;
  puStack_1b8 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110da5558;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2c8 = puVar6;
  puStack_c0 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2d0 = puVar17;
  puStack_1d0 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110da5358;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2d8 = puVar6;
  puStack_b8 = puVar6;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2e0 = puVar17;
  puStack_1e0 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2e8 = puVar6;
  puStack_1d8 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110da5418;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_2f0 = puVar17;
  puStack_b0 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2f8 = puVar6;
  puStack_1e8 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110da5398;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_300 = puVar17;
  puStack_a8 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_308 = puVar7;
  puStack_1f8 = puVar7;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_310 = puVar6;
  puStack_1f0 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110da5458;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_318 = puVar17;
  puStack_a0 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_320 = puVar6;
  puStack_200 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110da5578;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_328 = puVar17;
  puStack_98 = puVar17;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_330 = puVar7;
  puStack_210 = puVar7;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_208 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110da5598;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_90 = ppuVar21;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  pppuVar24 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_218 = puVar17;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110da55b8;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pppuStack_88 = pppuVar24;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  pppuVar26 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_228 = puVar8;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_220 = pppuVar26;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110da55d8;
  puVar19 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  pppuStack_80 = pppuVar9;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_230 = (undefined4 *)puVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = pppuStack_238;
  pppuVar13 = &ppuStack_e8;
  pppuVar25 = &ppuStack_160;
  puVar15 = (undefined1 *)0xf;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puStack_338 = puVar7;
  _objc_release(puVar10);
  _objc_release(puVar19);
  _objc_release(pppuVar9);
  _objc_release(pppuVar26);
  _objc_release(puVar8);
  _objc_release(pppuVar24);
  _objc_release(puVar17);
  _objc_release(ppuVar21);
  _objc_release(puVar6);
  _objc_release(puStack_330);
  _objc_release(puStack_328);
  _objc_release(puStack_320);
  _objc_release(puStack_318);
  _objc_release(puStack_310);
  _objc_release(puStack_308);
  _objc_release(puStack_300);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2d0);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(ppuStack_248);
  _objc_release(puStack_240);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_338);
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = puStack_338;
    return auVar30;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar19);
  _objc_release(pppuVar9);
  _objc_release(pppuVar26);
  _objc_release(puVar8);
  _objc_release(pppuVar24);
  _objc_release(puVar17);
  _objc_release(ppuVar21);
  _objc_release(puVar6);
  _objc_release(puStack_330);
  _objc_release(puStack_328);
  _objc_release(puStack_320);
  _objc_release(puStack_318);
  _objc_release(puStack_310);
  _objc_release(puStack_308);
  _objc_release(puStack_300);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2d0);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(ppuStack_248);
  _objc_release(puStack_240);
  _objc_release(pppuStack_238);
  __Unwind_Resume(pppuVar20);
  pcStack_348 = FUN_104979dd8;
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = pppuVar13;
  pppuVar14 = pppuVar25;
  puStack_3a0 = (undefined4 *)puVar19;
  pppuStack_398 = pppuVar26;
  puStack_390 = puVar8;
  pppuStack_388 = pppuVar24;
  puStack_380 = puVar17;
  ppuStack_378 = ppuVar21;
  pppuStack_370 = pppuVar9;
  puStack_368 = puVar6;
  pppuStack_360 = pppuVar20;
  puStack_358 = puVar10;
  puStack_350 = &stack0xfffffffffffffff0;
  _objc_retain();
  pppuVar11 = pppuVar25;
  func_0x00010bf529e0();
  if (pppuVar11 == (undefined ***)pppuVar13[3]) {
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    lStack_478 = 0;
    ppuStack_480 = (undefined **)0x0;
    uStack_468 = 0;
    puStack_470 = (undefined8 *)0x0;
    pppuVar9 = pppuVar25;
    _objc_retain();
    pppuVar12 = &ppuStack_480;
    pppuVar14 = appuStack_430;
    puVar15 = (undefined1 *)0x10;
    pppuStack_4e8 = pppuVar9;
    func_0x00010bf52a60();
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar20 = (undefined ***)*puStack_470;
      puVar19 = &uStack_4c8;
      ppuVar21 = &PTR_PTR_1126ad000;
      pppuStack_4f0 = pppuVar20;
LAB_104979e6c:
      pppuVar26 = (undefined ***)0x0;
LAB_104979e70:
      if ((undefined ***)*puStack_470 != pppuVar20) {
        _objc_enumerationMutation(pppuStack_4e8);
      }
      pppuVar22 = *(undefined ****)(lStack_478 + (long)pppuVar26 * 8);
      _objc_retainAutorelease(pppuVar22);
      pppuVar24 = pppuVar22;
      func_0x00010bdc3520(pppuVar22);
      func_0x00010002d4d8(&uStack_4c8,pppuVar24);
      param_2 = (undefined **)&uStack_4c8;
      pppuVar11 = pppuVar13;
      FUN_1049780e4(pppuVar13,param_2);
      if ((long)pppuStack_4b8 < 0) {
        __ZdlPv(CONCAT44(uStack_4c8._4_4_,(undefined4)uStack_4c8));
      }
      pppuVar24 = (undefined ***)0x0;
      if (pppuVar11 != (undefined ***)0x0) {
        _objc_retainAutorelease(pppuVar22);
        pppuVar24 = pppuVar22;
        func_0x00010bdc3520(pppuVar22);
        func_0x00010002d4d8(auStack_4e0,pppuVar24);
        puStack_438 = auStack_4e0;
        puVar15 = &uStack_439;
        pppuVar24 = pppuVar13;
        FUN_10497a580(pppuVar13,auStack_4e0,&UNK_10dd48e93,&puStack_438);
        uStack_4c8._0_4_ = *(undefined4 *)(pppuVar24 + 5);
        pppuStack_4b8 = (undefined ***)0x0;
        uStack_4b0 = 0;
        pppuStack_4c0 = (undefined ***)0x0;
        func_0x000109285684(&pppuStack_4c0,pppuVar24[6],pppuVar24[7],
                            (long)pppuVar24[7] - (long)pppuVar24[6] >> 2);
        lStack_4a8 = 0;
        lStack_4a0 = 0;
        uStack_498 = 0;
        param_2 = pppuVar24[9];
        pppuVar14 = (undefined ***)((long)pppuVar24[10] - (long)param_2 >> 2);
        func_0x000109285684(&lStack_4a8,param_2,pppuVar24[10],pppuVar14);
        ppuStack_490 = pppuVar24[0xc];
        ppuStack_488 = pppuVar24[0xd];
        if (ppuStack_488 != (undefined **)0x0) {
          ppuVar1 = ppuStack_488 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar5) {
              *ppuVar1 = *ppuVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (cStack_4c9 < '\0') {
          __ZdlPv(auStack_4e0[0]);
        }
        pppuVar11 = pppuStack_4e8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar20 = pppuStack_4b8;
        pppuVar24 = pppuStack_4c0;
        pppuVar12 = pppuVar11;
        func_0x00010bf529e0();
        if (pppuVar12 == (undefined ***)((long)pppuVar20 - (long)pppuVar24 >> 2))
        goto code_r0x000104979fb0;
        _objc_release(pppuVar11);
        if (ppuStack_488 != (undefined **)0x0) {
          ppuVar1 = ppuStack_488 + 1;
          do {
            puVar17 = *ppuVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar5) {
              *ppuVar1 = puVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_10497a0c0:
          ppuVar1 = ppuStack_488;
          if (puVar17 == (undefined *)0x0) {
            (**(code **)(*ppuStack_488 + 0x10))(ppuStack_488);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
          }
        }
LAB_10497a0dc:
        pppuVar12 = pppuVar22;
        if (lStack_4a8 != 0) {
          lStack_4a0 = lStack_4a8;
          __ZdlPv();
          pppuVar12 = pppuVar22;
        }
        if (pppuStack_4c0 != (undefined ***)0x0) {
          pppuStack_4b8 = pppuStack_4c0;
          __ZdlPv();
        }
      }
      uVar23 = 0;
      goto LAB_10497a108;
    }
    uVar23 = 1;
LAB_10497a108:
    _objc_release(pppuStack_4e8);
  }
  else {
    uVar23 = 0;
  }
  pppuVar13 = pppuVar25;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) {
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = uVar23;
    return auVar28;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar25);
  pppuVar11 = pppuVar13;
  __Unwind_Resume();
  pcStack_4f8 = FUN_10497a26c;
  pppuVar22 = pppuVar11;
  puStack_550 = (undefined4 *)puVar19;
  pppuStack_548 = pppuVar26;
  puStack_540 = puVar8;
  pppuStack_538 = pppuVar24;
  uStack_530 = uVar23;
  ppuStack_528 = ppuVar21;
  pppuStack_520 = pppuVar9;
  pppuStack_518 = pppuVar13;
  pppuStack_510 = pppuVar20;
  pppuStack_508 = pppuVar25;
  ppuStack_500 = &puStack_350;
  func_0x000100032e5c();
  pppuVar25 = (undefined ***)pppuVar11[1];
  if (pppuVar25 != (undefined ***)0x0) {
    uVar23 = CONCAT17(POPCOUNT((char)((ulong)pppuVar25 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pppuVar25 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pppuVar25 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pppuVar25 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pppuVar25 >> 0x18))
                                                          ,CONCAT12(POPCOUNT((char)((ulong)pppuVar25
                                                                                   >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)((ulong)
                                                  pppuVar25 >> 8)),POPCOUNT((char)pppuVar25))))))));
    uVar27 = NEON_uaddlv(uVar23,1);
    uVar16 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar27) & 0xffffffff;
    if (uVar16 < 2) {
      pppuVar26 = (undefined ***)((ulong)((long)pppuVar25 + -1) & (ulong)pppuVar22);
    }
    else {
      pppuVar26 = pppuVar22;
      if (pppuVar25 <= pppuVar22) {
        uVar18 = 0;
        if (pppuVar25 != (undefined ***)0x0) {
          uVar18 = (ulong)pppuVar22 / (ulong)pppuVar25;
        }
        pppuVar26 = (undefined ***)((long)pppuVar22 - uVar18 * (long)pppuVar25);
      }
    }
    if (((undefined8 *)(*pppuVar11)[(long)pppuVar26] != (undefined8 *)0x0) &&
       (ppuVar21 = *(undefined ***)(*pppuVar11)[(long)pppuVar26], ppuVar21 != (undefined **)0x0)) {
      do {
        pppuVar24 = (undefined ***)ppuVar21[1];
        if (pppuVar24 == pppuVar22) {
          pppuVar24 = pppuVar11;
          FUN_104c4fbc4(pppuVar11,ppuVar21 + 2,param_2);
          if (((ulong)pppuVar24 & 1) != 0) {
            uVar23 = 0;
            goto LAB_10497a490;
          }
        }
        else {
          if (uVar16 < 2) {
            pppuVar24 = (undefined ***)((ulong)pppuVar24 & (ulong)((long)pppuVar25 + -1));
          }
          else if (pppuVar25 <= pppuVar24) {
            uVar18 = 0;
            if (pppuVar25 != (undefined ***)0x0) {
              uVar18 = (ulong)pppuVar24 / (ulong)pppuVar25;
            }
            pppuVar24 = (undefined ***)((long)pppuVar24 - uVar18 * (long)pppuVar25);
          }
          if (pppuVar24 != pppuVar26) break;
        }
        ppuVar21 = (undefined **)*ppuVar21;
      } while (ppuVar21 != (undefined **)0x0);
    }
  }
  FUN_10497a4d4(appuStack_568,pppuVar11,pppuVar22,pppuVar12,pppuVar14,puVar15);
  if ((pppuVar25 == (undefined ***)0x0) ||
     (*(float *)(pppuVar11 + 4) * (float)pppuVar25 < (float)((long)pppuVar11[3] + 1))) {
    uVar16 = 1;
    if ((undefined ***)0x2 < pppuVar25) {
      uVar16 = (ulong)(((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) != 0);
    }
    uVar16 = uVar16 | (long)pppuVar25 << 1;
    uVar18 = (ulong)((float)((long)pppuVar11[3] + 1) / *(float *)(pppuVar11 + 4));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    FUN_104978574(pppuVar11,uVar16);
    pppuVar25 = (undefined ***)pppuVar11[1];
    if (((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) == 0) {
      pppuVar26 = (undefined ***)((ulong)((long)pppuVar25 + -1) & (ulong)pppuVar22);
    }
    else {
      pppuVar26 = pppuVar22;
      if (pppuVar25 <= pppuVar22) {
        uVar16 = 0;
        if (pppuVar25 != (undefined ***)0x0) {
          uVar16 = (ulong)pppuVar22 / (ulong)pppuVar25;
        }
        pppuVar26 = (undefined ***)((long)pppuVar22 - uVar16 * (long)pppuVar25);
      }
    }
  }
  ppuVar21 = *pppuVar11;
  puVar19 = (undefined8 *)ppuVar21[(long)pppuVar26];
  if (puVar19 == (undefined8 *)0x0) {
    pppuVar24 = pppuVar11 + 2;
    *appuStack_568[0] = (undefined *)*pppuVar24;
    *pppuVar24 = appuStack_568[0];
    ppuVar21[(long)pppuVar26] = (undefined *)pppuVar24;
    ppuVar21 = appuStack_568[0];
    if (*appuStack_568[0] != (undefined *)0x0) {
      pppuVar24 = *(undefined ****)(*appuStack_568[0] + 8);
      if (((ulong)pppuVar25 & (ulong)((long)pppuVar25 + -1)) == 0) {
        pppuVar24 = (undefined ***)((ulong)pppuVar24 & (ulong)((long)pppuVar25 + -1));
      }
      else if (pppuVar25 <= pppuVar24) {
        uVar16 = 0;
        if (pppuVar25 != (undefined ***)0x0) {
          uVar16 = (ulong)pppuVar24 / (ulong)pppuVar25;
        }
        pppuVar24 = (undefined ***)((long)pppuVar24 - uVar16 * (long)pppuVar25);
      }
      (*pppuVar11)[(long)pppuVar24] = (undefined *)appuStack_568[0];
    }
  }
  else {
    *appuStack_568[0] = (undefined *)*puVar19;
    *puVar19 = appuStack_568[0];
    ppuVar21 = appuStack_568[0];
  }
  pppuVar11[3] = (undefined **)((long)pppuVar11[3] + 1);
  uVar23 = 1;
LAB_10497a490:
  auVar29._8_8_ = uVar23;
  auVar29._0_8_ = ppuVar21;
  return auVar29;
code_r0x000104979fb0:
  pppuVar24 = (undefined ***)0x0;
  pppuVar12 = pppuVar22;
  while (pppuVar20 = pppuVar11, func_0x00010bf529e0(), pppuVar24 < pppuVar20) {
    iVar3 = *(int *)((long)pppuStack_4c0 + (long)pppuVar24 * 4);
    puVar8 = PTR_PTR_1126add78;
    pppuVar22 = pppuVar11;
    pppuVar14 = pppuVar24;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010c067ec0();
    bVar5 = iVar3 == (int)puVar17;
    pppuVar20 = (undefined ***)(ulong)bVar5;
    _objc_release(puVar8);
    pppuVar24 = (undefined ***)((long)pppuVar24 + 1);
    pppuVar12 = pppuVar22;
    if (!bVar5) {
      _objc_release(pppuVar11);
      if (ppuStack_488 != (undefined **)0x0) {
        ppuVar1 = ppuStack_488 + 1;
        do {
          puVar17 = *ppuVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar5) {
            *ppuVar1 = puVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10497a0c0;
      }
      goto LAB_10497a0dc;
    }
  }
  _objc_release(pppuVar11);
  ppuVar1 = ppuStack_488;
  if (ppuStack_488 != (undefined **)0x0) {
    ppuVar2 = ppuStack_488 + 1;
    do {
      puVar17 = *ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *ppuVar2 = puVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_488 + 0x10))(ppuStack_488);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
  if (lStack_4a8 != 0) {
    lStack_4a0 = lStack_4a8;
    __ZdlPv();
  }
  pppuVar20 = pppuStack_4f0;
  if (pppuStack_4c0 != (undefined ***)0x0) {
    pppuStack_4b8 = pppuStack_4c0;
    __ZdlPv();
  }
  pppuVar26 = (undefined ***)((long)pppuVar26 + 1);
  if (pppuVar26 == pppuVar9) goto code_r0x00010497a078;
  goto LAB_104979e70;
code_r0x00010497a078:
  pppuVar12 = &ppuStack_480;
  pppuVar14 = appuStack_430;
  puVar15 = (undefined1 *)0x10;
  pppuVar9 = pppuStack_4e8;
  func_0x00010bf52a60();
  uVar23 = 1;
  if (pppuVar9 == (undefined ***)0x0) goto LAB_10497a108;
  goto LAB_104979e6c;
}



/* Entry: 104979dd8; end: 10497a26b; +[FBSDKModelParser checkWeights:withExpectedInfo:] */

undefined1  [16]
FUN_104979dd8(undefined8 param_1,undefined4 *param_2,long *param_3,long *param_4,undefined1 *param_5
             )

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x20;
  long *unaff_x22;
  undefined **unaff_x23;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *unaff_x25;
  undefined *unaff_x26;
  long *plVar16;
  long *unaff_x27;
  undefined4 *unaff_x28;
  undefined2 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *aplStack_228 [3];
  undefined4 *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  long alStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_3;
  plVar6 = param_4;
  _objc_retain();
  plVar16 = param_4;
  func_0x00010bf529e0();
  if (plVar16 == (long *)param_3[3]) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    unaff_x22 = param_4;
    _objc_retain();
    plVar12 = &lStack_140;
    plVar6 = alStack_f0;
    param_5 = (undefined1 *)0x10;
    plStack_1a8 = unaff_x22;
    func_0x00010bf52a60();
    if (unaff_x22 != (long *)0x0) {
      unaff_x20 = (long *)*puStack_130;
      unaff_x28 = &uStack_188;
      unaff_x23 = &PTR_PTR_1126ad000;
      plStack_1b0 = unaff_x20;
LAB_104979e6c:
      unaff_x27 = (long *)0x0;
LAB_104979e70:
      if ((long *)*puStack_130 != unaff_x20) {
        _objc_enumerationMutation(plStack_1a8);
      }
      plVar13 = *(long **)(lStack_138 + (long)unaff_x27 * 8);
      _objc_retainAutorelease(plVar13);
      plVar16 = plVar13;
      func_0x00010bdc3520(plVar13);
      func_0x00010002d4d8(&uStack_188,plVar16);
      param_2 = &uStack_188;
      plVar16 = param_3;
      FUN_1049780e4(param_3,param_2);
      if ((long)plStack_178 < 0) {
        __ZdlPv(CONCAT44(uStack_184,uStack_188));
      }
      unaff_x25 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        _objc_retainAutorelease(plVar13);
        plVar12 = plVar13;
        func_0x00010bdc3520(plVar13);
        func_0x00010002d4d8(auStack_1a0,plVar12);
        puStack_f8 = auStack_1a0;
        param_5 = &uStack_f9;
        plVar12 = param_3;
        FUN_10497a580(param_3,auStack_1a0,&UNK_10dd48e93,&puStack_f8);
        uStack_188 = (undefined4)plVar12[5];
        plStack_178 = (long *)0x0;
        uStack_170 = 0;
        plStack_180 = (long *)0x0;
        func_0x000109285684(&plStack_180,plVar12[6],plVar12[7],plVar12[7] - plVar12[6] >> 2);
        lStack_168 = 0;
        lStack_160 = 0;
        uStack_158 = 0;
        param_2 = (undefined4 *)plVar12[9];
        plVar6 = (long *)(plVar12[10] - (long)param_2 >> 2);
        func_0x000109285684(&lStack_168,param_2,plVar12[10],plVar6);
        lStack_150 = plVar12[0xc];
        plStack_148 = (long *)plVar12[0xd];
        if (plStack_148 != (long *)0x0) {
          plVar12 = plStack_148 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (cStack_189 < '\0') {
          __ZdlPv(auStack_1a0[0]);
        }
        plVar16 = plStack_1a8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = plStack_178;
        unaff_x25 = plStack_180;
        plVar12 = plVar16;
        func_0x00010bf529e0();
        if (plVar12 == (long *)((long)unaff_x20 - (long)unaff_x25 >> 2)) goto code_r0x000104979fb0;
        _objc_release(plVar16);
        if (plStack_148 != (long *)0x0) {
          plVar12 = plStack_148 + 1;
          do {
            lVar10 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_10497a0c0:
          plVar12 = plStack_148;
          if (lVar10 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
LAB_10497a0dc:
        plVar12 = plVar13;
        if (lStack_168 != 0) {
          lStack_160 = lStack_168;
          __ZdlPv();
          plVar12 = plVar13;
        }
        if (plStack_180 != (long *)0x0) {
          plStack_178 = plStack_180;
          __ZdlPv();
        }
      }
      uVar14 = 0;
      goto LAB_10497a108;
    }
    uVar14 = 1;
LAB_10497a108:
    _objc_release(plStack_1a8);
  }
  else {
    uVar14 = 0;
  }
  plVar16 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = uVar14;
    return auVar18;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  plVar13 = plVar16;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10497a26c;
  plVar5 = plVar13;
  puStack_210 = unaff_x28;
  plStack_208 = unaff_x27;
  puStack_200 = unaff_x26;
  plStack_1f8 = unaff_x25;
  uStack_1f0 = uVar14;
  ppuStack_1e8 = unaff_x23;
  plStack_1e0 = unaff_x22;
  plStack_1d8 = plVar16;
  plStack_1d0 = unaff_x20;
  plStack_1c8 = param_4;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x000100032e5c();
  plVar16 = (long *)plVar13[1];
  if (plVar16 != (long *)0x0) {
    uVar14 = CONCAT17(POPCOUNT((char)((ulong)plVar16 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)plVar16 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)plVar16 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)plVar16 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)plVar16 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)plVar16 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar16 >> 8)),POPCOUNT((char)plVar16))))))));
    uVar17 = NEON_uaddlv(uVar14,1);
    uVar9 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar17) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x27 = (long *)((long)plVar16 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar16 <= plVar5) {
        uVar11 = 0;
        if (plVar16 != (long *)0x0) {
          uVar11 = (ulong)plVar5 / (ulong)plVar16;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar11 * (long)plVar16);
      }
    }
    puVar7 = *(undefined8 **)(*plVar13 + (long)unaff_x27 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar7, plVar15 != (long *)0x0)) {
      do {
        plVar8 = (long *)plVar15[1];
        if (plVar8 == plVar5) {
          plVar8 = plVar13;
          FUN_104c4fbc4(plVar13,plVar15 + 2,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar14 = 0;
            aplStack_228[0] = plVar15;
            goto LAB_10497a490;
          }
        }
        else {
          if (uVar9 < 2) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar8) {
            uVar11 = 0;
            if (plVar16 != (long *)0x0) {
              uVar11 = (ulong)plVar8 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar16);
          }
          if (plVar8 != unaff_x27) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  FUN_10497a4d4(aplStack_228,plVar13,plVar5,plVar12,plVar6,param_5);
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(plVar13 + 4) * (float)plVar16 < (float)(plVar13[3] + 1))) {
    uVar9 = 1;
    if ((long *)0x2 < plVar16) {
      uVar9 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar16 << 1;
    uVar11 = (ulong)((float)(plVar13[3] + 1) / *(float *)(plVar13 + 4));
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    FUN_104978574(plVar13,uVar9);
    plVar16 = (long *)plVar13[1];
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar16 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar16 <= plVar5) {
        uVar9 = 0;
        if (plVar16 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar16;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar9 * (long)plVar16);
      }
    }
  }
  lVar10 = *plVar13;
  plVar12 = *(long **)(lVar10 + (long)unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = plVar13 + 2;
    *aplStack_228[0] = *plVar12;
    *plVar12 = (long)aplStack_228[0];
    *(long **)(lVar10 + (long)unaff_x27 * 8) = plVar12;
    if (*aplStack_228[0] != 0) {
      plVar12 = *(long **)(*aplStack_228[0] + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar12) {
        uVar9 = 0;
        if (plVar16 != (long *)0x0) {
          uVar9 = (ulong)plVar12 / (ulong)plVar16;
        }
        plVar12 = (long *)((long)plVar12 - uVar9 * (long)plVar16);
      }
      *(long **)(*plVar13 + (long)plVar12 * 8) = aplStack_228[0];
    }
  }
  else {
    *aplStack_228[0] = *plVar12;
    *plVar12 = (long)aplStack_228[0];
  }
  plVar13[3] = plVar13[3] + 1;
  uVar14 = 1;
LAB_10497a490:
  auVar19._8_8_ = uVar14;
  auVar19._0_8_ = aplStack_228[0];
  return auVar19;
code_r0x000104979fb0:
  unaff_x25 = (long *)0x0;
  plVar12 = plVar13;
  while (plVar13 = plVar16, func_0x00010bf529e0(), unaff_x25 < plVar13) {
    iVar1 = *(int *)((long)plStack_180 + (long)unaff_x25 * 4);
    unaff_x26 = PTR_PTR_1126add78;
    plVar13 = plVar16;
    plVar6 = unaff_x25;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x26;
    func_0x00010c067ec0();
    bVar3 = iVar1 == (int)puVar4;
    unaff_x20 = (long *)(ulong)bVar3;
    _objc_release(unaff_x26);
    unaff_x25 = (long *)((long)unaff_x25 + 1);
    plVar12 = plVar13;
    if (!bVar3) {
      _objc_release(plVar16);
      if (plStack_148 != (long *)0x0) {
        plVar12 = plStack_148 + 1;
        do {
          lVar10 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10497a0c0;
      }
      goto LAB_10497a0dc;
    }
  }
  _objc_release(plVar16);
  plVar16 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar13 = plStack_148 + 1;
    do {
      lVar10 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  unaff_x20 = plStack_1b0;
  if (plStack_180 != (long *)0x0) {
    plStack_178 = plStack_180;
    __ZdlPv();
  }
  unaff_x27 = (long *)((long)unaff_x27 + 1);
  if (unaff_x27 == unaff_x22) goto code_r0x00010497a078;
  goto LAB_104979e70;
code_r0x00010497a078:
  plVar12 = &lStack_140;
  plVar6 = alStack_f0;
  param_5 = (undefined1 *)0x10;
  unaff_x22 = plStack_1a8;
  func_0x00010bf52a60();
  uVar14 = 1;
  if (unaff_x22 == (long *)0x0) goto LAB_10497a108;
  goto LAB_104979e6c;
}



/* Entry: 10497a26c; end: 10497a4d3;  */

undefined1  [16]
FUN_10497a26c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x27;
  undefined2 uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  plVar7 = param_1;
  func_0x000100032e5c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar9 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar9 >> 8)),POPCOUNT((char)plVar9))))))));
    uVar10 = NEON_uaddlv(uVar1,1);
    uVar4 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
      do {
        plVar3 = (long *)plVar8[1];
        if (plVar3 == plVar7) {
          plVar3 = param_1;
          FUN_104c4fbc4(param_1,plVar8 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            aplStack_78[0] = plVar8;
            goto LAB_10497a490;
          }
        }
        else {
          if (uVar4 < 2) {
            plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar3) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar3 / (ulong)plVar9;
            }
            plVar3 = (long *)((long)plVar3 - uVar6 * (long)plVar9);
          }
          if (plVar3 != unaff_x27) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  FUN_10497a4d4(aplStack_78,param_1,plVar7,param_3,param_4,param_5);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_104978574(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
    *(long **)(lVar5 + (long)unaff_x27 * 8) = plVar7;
    if (*aplStack_78[0] != 0) {
      plVar7 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10497a490:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = aplStack_78[0];
  return auVar11;
}



/* Entry: 10497a4d4; end: 10497a57f;  */

void FUN_10497a4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000100033dac(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10497a580; end: 10497a7f3;  */

undefined1  [16]
FUN_10497a580(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  undefined2 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar5 = param_1;
  func_0x000100032e5c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar9 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar9 >> 8)),POPCOUNT((char)plVar9))))))));
    uVar10 = NEON_uaddlv(uVar1,1);
    uVar4 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar9 <= plVar5) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
      do {
        plVar3 = (long *)plVar8[1];
        if (plVar3 == plVar5) {
          plVar3 = param_1;
          FUN_104c4fbc4(param_1,plVar8 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10497a7b0;
          }
        }
        else {
          if (uVar4 < 2) {
            plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar3) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar3 / (ulong)plVar9;
            }
            plVar3 = (long *)((long)plVar3 - uVar6 * (long)plVar9);
          }
          if (plVar3 != unaff_x25) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x70;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar5;
  plVar3 = (long *)*param_4;
  lVar11 = plVar3[1];
  lVar7 = *plVar3;
  plVar8[4] = plVar3[2];
  plVar8[3] = lVar11;
  plVar8[2] = lVar7;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  *(undefined4 *)(plVar8 + 5) = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_104978574(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar9 <= plVar5) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_10497a7a0;
    plVar5 = *(long **)(*plVar8 + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar5) {
      uVar4 = 0;
      if (plVar9 != (long *)0x0) {
        uVar4 = (ulong)plVar5 / (ulong)plVar9;
      }
      plVar5 = (long *)((long)plVar5 - uVar4 * (long)plVar9);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_10497a7a0:
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10497a7b0:
  auVar12._8_8_ = uVar1;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10497a7f4; end: 10497a8af; +[FBSDKModelUtility normalizedText:] */

void FUN_10497a7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0d3c80(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c12d360(uVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  uVar2 = uVar3;
  func_0x00010bf446e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10497a8b0; end: 10497a963; -[FBSDKNetworkErrorChecker isNetworkError:] */

uint FUN_10497a8b0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 == 0) || (func_0x00010c0788c0(param_1,param_2,lVar2), (param_1 & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    uVar3 = 0;
    if (lVar1 + 0x3fcU < 0x14) {
      uVar3 = 0xbc807 >> (ulong)((uint)(lVar1 + 0x3fcU) & 0x1f);
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 10497a964; end: 10497a9cf; -[FBSDKObjectDecoder initWith:] */

undefined1 * FUN_10497a964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21b340(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10497a9d0; end: 10497aa43; -[FBSDKObjectDecoder decodeObjectOfClass:forKey:] */

void FUN_10497a9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c27f280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf67020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10497aa44; end: 10497aacb; -[FBSDKObjectDecoder decodeObjectOfClasses:forKey:] */

void FUN_10497aa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27f280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf67040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10497aacc; end: 10497aad3; -[FBSDKObjectDecoder unarchiver] */

undefined8 FUN_10497aacc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10497aad4; end: 10497aadf; -[FBSDKObjectDecoder setUnarchiver:] */

void FUN_10497aad4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10497aae0; end: 10497aaeb; -[FBSDKObjectDecoder .cxx_destruct] */

void FUN_10497aae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10497aaec; end: 10497ab47; +[FBSDKPaymentProductRequestor initialize] */

void FUN_10497aaec(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf39c40();
  puVar2 = PTR_PTR_1126adf48;
  func_0x00010bf39c40();
  if (param_1 != puVar2) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  uVar1 = puRam000000011369d4e0;
  puRam000000011369d4e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10497ab48; end: 10497ae1f; -[FBSDKPaymentProductRequestor initWithTransaction:settings:eventLogger:gateKeeperManager:store:loggerFactory:productsRequestFactory:appStoreReceiptProvider:] */

undefined8 *
FUN_10497ab48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain();
  uVar2 = param_4;
  _objc_retain();
  uVar3 = param_5;
  _objc_retain();
  uVar4 = param_7;
  _objc_retain();
  uVar5 = param_8;
  _objc_retain();
  uVar6 = param_9;
  _objc_retain();
  uVar7 = param_10;
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1126e3410;
  puVar8 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    _objc_storeStrong(puVar8 + 5,param_4);
    _objc_storeStrong(puVar8 + 6,param_5);
    _objc_storeStrong(puVar8 + 7,param_6);
    _objc_storeStrong(puVar8 + 8,param_7);
    _objc_storeStrong(puVar8 + 9,param_8);
    _objc_storeStrong(puVar8 + 4,param_9);
    _objc_storeStrong(puVar8 + 2,param_10);
    _objc_storeStrong(puVar8 + 1,param_3);
    puVar9 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c0d8420();
    uVar12 = puVar8[0xc];
    puVar8[0xc] = puVar9;
    _objc_release(uVar12);
    func_0x00010c189b60(puVar8[0xc]);
    lVar10 = puVar8[8];
    func_0x00010bfa17c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110da0eb8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110ea7d98;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da0d38;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puVar8[0xb];
    puVar8[0xb] = puVar9;
    _objc_release(uVar12);
    _objc_release(puVar11);
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    if (lVar10 == 0) {
      func_0x00010c0d8420();
      lVar13 = puVar8[10];
      puVar8[10] = puVar9;
    }
    else {
      lVar13 = lVar10;
      func_0x00010bf44740(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = puVar8[10];
      puVar8[10] = puVar9;
      _objc_release(uVar12);
    }
    _objc_release(lVar13);
    _objc_release(lVar10);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = puRam000000011369d4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puRam000000011369d4e0);
  return puVar8;
}



/* Entry: 10497ae20; end: 10497ae2b; +[FBSDKPaymentProductRequestor pendingRequestors] */

void FUN_10497ae20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d4e0);
  return;
}



/* Entry: 10497ae2c; end: 10497ae87; -[FBSDKPaymentProductRequestor setProductsRequest:] */

void FUN_10497ae2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  _objc_retain();
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != lVar1) {
    if (lVar2 != 0) {
      func_0x00010c18b5e0();
    }
    _objc_storeStrong((long *)(param_1 + 0x18),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10497ae88; end: 10497b027; -[FBSDKPaymentProductRequestor resolveProducts] */

void FUN_10497ae88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar2 = param_1;
  func_0x00010c279780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1161a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5a360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3e80(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c116440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c0f7920();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  puVar1 = PTR_PTR_1126add78;
  uVar3 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c0f7920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f20(puVar1,param_2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  func_0x00010c116440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10497b028; end: 10497b09b; -[FBSDKPaymentProductRequestor getTruncatedString:] */

void FUN_10497b028(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  if (param_3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c08fa60();
    ppuVar2 = param_3;
    if (ppuVar1 < (undefined **)0x65) {
      _objc_retain(param_3);
    }
    else {
      func_0x00010c260c20(param_3,param_2,100);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10497b09c; end: 10497b14f; -[FBSDKPaymentProductRequestor logTransactionEvent:] */

void FUN_10497b09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c080220(param_1,param_2,param_3);
  uVar3 = param_1;
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bfbe560();
    iVar1 = (int)uVar2;
    func_0x00010bf1f340();
    if (iVar1 != 0) {
      func_0x00010c279780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a80c0(param_1,param_2,uVar3,param_3);
      goto LAB_10497b134;
    }
  }
  func_0x00010c279780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a80a0(param_1,param_2,uVar3,param_3);
LAB_10497b134:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10497b150; end: 10497b1d3; -[FBSDKPaymentProductRequestor isSubscription:] */

bool FUN_10497b150(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_3;
  func_0x00010c2608a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c2608a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0df580();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10497b1d4; end: 10497b78b; -[FBSDKPaymentProductRequestor getEventParametersOfProduct:withTransaction:] */

void FUN_10497b1d4(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  ppuVar1 = param_4;
  func_0x00010c279860();
  ppuVar11 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x3) {
    ppuVar12 = ppuVar11;
    ppuVar11 = (undefined **)0x0;
    if (ppuVar1 != (undefined **)0x1) goto LAB_10497b290;
    ppuVar11 = param_4;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar12 = *(undefined ***)(param_1 + 0x60);
  ppuVar1 = param_4;
  func_0x00010c2797c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d400(ppuVar12,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
LAB_10497b290:
  ppuVar1 = param_4;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da10d8;
  ppuVar2 = ppuVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_80 = ppuVar2;
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da10f8;
  ppuVar3 = ppuVar1;
  func_0x00010c11cf60(ppuVar1);
  func_0x00010c0df780(puVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da1258;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar12 != (undefined **)0x0) {
    ppuStack_70 = ppuVar12;
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110da10f8;
    ppuVar2 = ppuVar1;
    func_0x00010c11cf60(ppuVar1);
    func_0x00010c0df780(puVar4,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110da1218;
    lVar7 = param_3;
    puStack_b0 = puVar4;
    func_0x00010c09e900(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bfcb780(param_1,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110da1118;
    lVar9 = param_3;
    lStack_a8 = lVar8;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bfcb780(param_1,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_a0 = lVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_c8,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126add78;
    lVar7 = param_3;
    func_0x00010c112b80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar6,lVar8,&PTR____CFConstantStringClassReference_110da10b8
                       );
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (ppuVar11 != (undefined **)0x0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,ppuVar11,
                          &PTR____CFConstantStringClassReference_110da1238);
    }
  }
  lVar7 = param_1;
  func_0x00010c080220(param_1,param_2,param_3);
  puVar4 = PTR_PTR_1126add78;
  puVar5 = puVar6;
  if ((int)lVar7 == 0) {
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,
                        &PTR____CFConstantStringClassReference_110da5678,
                        &PTR____CFConstantStringClassReference_110da11f8);
  }
  else {
    lVar7 = param_3;
    func_0x00010c2608a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf8b3c0(param_1,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar6,lVar8,&PTR____CFConstantStringClassReference_110da1278
                       );
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,
                        &PTR____CFConstantStringClassReference_110da5658,
                        &PTR____CFConstantStringClassReference_110da11f8);
    puVar4 = PTR_PTR_1126add78;
    lVar7 = param_1;
    func_0x00010c07f820(param_1,param_2,param_4,param_3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2d38;
    if ((int)lVar7 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db1158;
    }
    func_0x00010bf71e80(puVar4,param_2,puVar6,ppuVar2,
                        &PTR____CFConstantStringClassReference_110da1298);
    lVar7 = param_3;
    func_0x00010c069ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar8 = lVar7;
      func_0x00010c0f6960();
      ppuVar2 = &PTR____CFConstantStringClassReference_110db2d38;
      if (lVar8 != 2) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db1158;
      }
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,ppuVar2,
                          &PTR____CFConstantStringClassReference_110da12b8);
      puVar4 = PTR_PTR_1126add78;
      lVar8 = lVar7;
      func_0x00010c2608a0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b3c0(param_1,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar4,param_2,puVar6,param_1,
                          &PTR____CFConstantStringClassReference_110da12d8);
      _objc_release(param_1);
      _objc_release(lVar8);
      puVar4 = PTR_PTR_1126add78;
      lVar8 = lVar7;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf71e80(puVar4,param_2,puVar6,lVar8,
                          &PTR____CFConstantStringClassReference_110da12f8);
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  if (puVar5 != (undefined *)0x0) {
    _objc_retain(puVar5);
    lVar7 = param_3;
    func_0x00010c0edac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar5);
    _objc_release(lVar7);
    lVar7 = param_3;
    func_0x00010c2573e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0edac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(lVar7,param_2,lVar9,&PTR____CFConstantStringClassReference_110da55f8);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
  return;
}



/* Entry: 10497b78c; end: 10497b86f; -[FBSDKPaymentProductRequestor appendOriginalTransactionID:] */

void FUN_10497b78c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c0edac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c2573e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0edac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(uVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110da55f8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10497b870; end: 10497b953; -[FBSDKPaymentProductRequestor clearOriginalTransactionID:] */

void FUN_10497b870(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c0edac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(param_3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c2573e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0edac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(uVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110da55f8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10497b954; end: 10497bbe3; -[FBSDKPaymentProductRequestor isStartTrial:ofProduct:] */

undefined * FUN_10497b954(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
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
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  iVar1 = 2;
  puVar7 = (undefined1 *)0x2;
  func_0x000100029b9c(2,0xc,2,0);
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0f67c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f6820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      lVar4 = param_4;
      func_0x00010bf813e0();
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
      lVar5 = lVar4;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar11 = *plStack_120;
        do {
          lVar12 = 0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(lVar4);
            }
            puVar10 = *(undefined1 **)(lStack_128 + lVar12 * 8);
            puVar7 = puVar10;
            func_0x00010c0f6960();
            if (puVar7 == (undefined1 *)0x2) {
              uVar2 = uVar3;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar2;
              puVar7 = puVar10;
              func_0x00010c0720c0();
              _objc_release(puVar10);
              _objc_release(uVar2);
              if ((uVar6 & 1) != 0) {
                _objc_release(lVar4);
                _objc_release(lVar4);
                _objc_release(uVar3);
                goto LAB_10497bb90;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar5 != lVar12);
          lVar5 = lVar4;
          puVar8 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar4);
      _objc_release(lVar4);
      puVar7 = (undefined1 *)puVar8;
    }
    _objc_release(uVar3);
  }
  lVar4 = param_4;
  func_0x00010c069ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
LAB_10497bb70:
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar5 = param_4;
    func_0x00010c069ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c0f6960();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar11 != 2) goto LAB_10497bb70;
    uVar2 = param_3;
    func_0x00010c0eda80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (uVar3 != 0) goto LAB_10497bb70;
LAB_10497bb90:
    puVar9 = (undefined *)0x1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___SKProductSubscriptionPeriod_1126adf50);
    puVar10 = puVar7;
    func_0x00010c075f00();
    if ((int)puVar10 != 0) {
      puVar10 = puVar7;
      _objc_retain();
      func_0x00010c2807a0();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0df580();
      func_0x00010c25d9e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      goto LAB_10497bc90;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10497bc90:
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}


