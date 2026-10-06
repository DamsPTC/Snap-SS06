/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a620b8; end: 102a621df;  */

undefined * FUN_102a620b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a621e0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ee5e48;
    func_0x0001000285a8(0x112ee5e48,&UNK_10db11238);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 200) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105906f8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 200 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 200);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102a621e0; end: 102a6235b;  */

undefined * FUN_102a621e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6235c);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112ee5ea8;
    func_0x0001000285a8(0x112ee5ea8,&UNK_10db112a8);
    lVar5 = 0;
    FUN_102a84318();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a62354);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a62358);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_102a84318();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 102a6235c; end: 102a62473;  */

long FUN_102a6235c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a62470);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a62474);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102a63520(0,0x112e118a0,&PTR_PTR_1126b02b0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102a63520(0,0x112e118a0,&PTR_PTR_1126b02b0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a6246c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102a62474; end: 102a625cf;  */

long FUN_102a62474(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  *(undefined1 *)(param_5 + 0x10) = 4;
  *(undefined8 *)(param_5 + 0x20) = 0;
  func_0x000107c61614(param_5 + 0x18,0);
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(undefined1 *)(param_5 + 0x40) = 1;
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_5 + 0x48) = puVar1;
  *(undefined8 *)(param_5 + 0x58) = 0;
  *(undefined8 *)(param_5 + 0x50) = 0;
  *(undefined8 *)(param_5 + 0x68) = 0;
  *(undefined8 *)(param_5 + 0x60) = 0;
  func_0x000107c61644(param_5 + 0x70,0);
  *(undefined ***)(param_5 + 0x20) = &PTR_DAT_11058dea0;
  func_0x000107c61604(param_5 + 0x18,param_4);
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(long *)(param_5 + 0x30) = param_2;
  func_0x000107c61634(param_5 + 0x70,param_3);
  func_0x000107c614f0(param_1);
  pcVar3 = *(code **)(param_2 + 0x40);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_5);
  (*pcVar3)();
  func_0x000107c61574(param_5);
  if (param_3 == (long *)0x0) {
    func_0x000107c615e8(param_1);
  }
  else {
    pcVar3 = *(code **)(*param_3 + 0xf8);
    uVar2 = 0;
    func_0x000102a70700(0);
    func_0x000107c6157c(param_3);
    (*pcVar3)(param_5,uVar2,&PTR_DAT_11058e9a0);
    func_0x000107c615e8(param_1);
    func_0x000107c61578(param_3,2);
  }
  func_0x000107c61574(param_4);
  return param_5;
}



/* Entry: 102a625d0; end: 102a62897;  */

undefined * FUN_102a625d0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = 0x112ee5e88;
  func_0x0001000285a8(0x112ee5e88,&UNK_10db11280);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ee5e90,&UNK_10db11288);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      FUN_102a635c4(param_1,puVar9,0x112ee5e88,&UNK_10db11280);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102a62758);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_102aabc7c();
      FUN_102a63318((long)puVar9 + (long)iVar4,
                    lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7,FUN_102aabc7c);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102a6275c);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102a62898; end: 102a630d7;  */

undefined * FUN_102a62898(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  ulong uStack_428;
  long lStack_420;
  undefined *puStack_410;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 auStack_78 [3];
  
  lVar7 = 0x112ee5cf0;
  func_0x0001000285a8(0x112ee5cf0,&UNK_10db116c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_102aabc7c();
  lStack_438 = *(long *)(lVar7 + -8);
  lStack_430 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_438 + 0x40));
  lStack_448 = ((long)&uStack_450 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar19 = (ulong *)(param_1 + 0x40);
  uVar13 = *puVar19;
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  func_0x000107c61434();
  lVar7 = 0;
  puStack_410 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar18 = uVar18 & uVar13;
  lStack_440 = (long)&uStack_450 - extraout_x8;
joined_r0x000102a629b0:
  do {
    do {
      do {
        while (uVar13 = uVar18, uVar13 == 0) {
          bVar6 = SCARRY8(lVar7,1);
          lVar7 = lVar7 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102a630d0);
            (*pcVar5)();
          }
          if ((long)(uVar16 + 0x3f >> 6) <= lVar7) {
            func_0x000107c61574();
            return puStack_410;
          }
          uVar18 = puVar19[lVar7];
        }
        uVar18 = uVar13 - 1 & uVar13;
      } while (*(long *)(param_2 + 0x108) == 0);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar7 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar14 * 0x10);
      lVar8 = *plVar1;
      uVar13 = plVar1[1];
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + uVar14 * 0x20);
      lVar11 = *plVar1;
      uVar14 = plVar1[1];
      uVar21 = plVar1[3];
      uStack_228 = *(undefined8 *)(param_2 + 0x168);
      lVar22 = *(long *)(param_2 + 0x160);
      lVar15 = *(long *)(param_2 + 0x128);
      uStack_270 = *(undefined8 *)(param_2 + 0x120);
      uStack_258 = *(undefined8 *)(param_2 + 0x138);
      uStack_260 = *(undefined8 *)(param_2 + 0x130);
      uStack_220 = *(undefined8 *)(param_2 + 0x170);
      uStack_248 = *(undefined8 *)(param_2 + 0x148);
      uStack_250 = *(undefined8 *)(param_2 + 0x140);
      uStack_238 = *(undefined8 *)(param_2 + 0x158);
      uStack_240 = *(undefined8 *)(param_2 + 0x150);
      uStack_288 = *(undefined8 *)(param_2 + 0x108);
      uStack_290 = *(undefined8 *)(param_2 + 0x100);
      uStack_278 = *(undefined8 *)(param_2 + 0x118);
      uStack_280 = *(undefined8 *)(param_2 + 0x110);
      lStack_230 = lVar22;
      lStack_268 = lVar15;
    } while (*(long *)(lVar22 + 0x10) == 0);
    func_0x000107c61434(uVar21);
    func_0x000107c61438(uVar13,2);
    func_0x000107c61434(uVar14);
    FUN_102a635c4(&uStack_290,&uStack_3c8,0x112ee5e20,&UNK_10db11210);
    func_0x000107c61434(lVar22);
    uVar20 = uVar13;
    lStack_420 = lVar8;
    func_0x000100029284();
    uVar10 = uVar14;
    if ((uVar20 & 1) == 0) {
      func_0x000107c6142c(lVar22);
      func_0x000102a63398(&uStack_290,0x112ee5e20,&UNK_10db11210);
      func_0x000107c6142c(uVar21);
      uVar14 = uVar13;
    }
    else {
      uVar20 = *(ulong *)(*(long *)(lVar22 + 0x38) + lVar8 * 8);
      uStack_428 = uVar21;
      func_0x000107c6142c(lVar22);
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102a630d4);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102a630d8);
        (*pcVar5)();
      }
      lVar15 = lVar15 + uVar20 * 0x30;
      uStack_b8 = *(undefined8 *)(lVar15 + 0x38);
      uStack_c0 = *(undefined8 *)(lVar15 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar15 + 0x48);
      uStack_b0 = *(undefined8 *)(lVar15 + 0x40);
      uStack_c8 = *(undefined8 *)(lVar15 + 0x28);
      uStack_d0 = *(undefined8 *)(lVar15 + 0x20);
      uStack_a0 = uStack_d0;
      uStack_98 = uStack_c8;
      uStack_90 = uStack_c0;
      uStack_88 = uStack_b8;
      uStack_80 = uStack_b0;
      auStack_78[0] = uStack_a8;
      func_0x000100402194(&uStack_a0,&uStack_3c8);
      func_0x000100402194(&uStack_90,&uStack_3c8);
      FUN_102a635c4(&uStack_80,&uStack_3c8,0x112ee5e28,&UNK_10db11218);
      FUN_102a635c4(auStack_78,&uStack_3c8,0x112ee5e30,&UNK_10db11220);
      func_0x000102a63398(&uStack_290,0x112ee5e20,&UNK_10db11210);
      FUN_102aab6bc(&uStack_218,lVar11,uVar14);
      func_0x000100bcb1dc(&uStack_a0);
      func_0x000100bcb1dc(&uStack_90);
      func_0x000102a63398(&uStack_80,0x112ee5e28,&UNK_10db11218);
      func_0x000102a63398(auStack_78,0x112ee5e30,&UNK_10db11220);
      uVar4 = uStack_1f8;
      lVar22 = lStack_210;
      uVar3 = uStack_218;
      lVar15 = lStack_438;
      lVar8 = lStack_440;
      if (lStack_210 == 0) {
        func_0x000107c6142c(uStack_428);
        uVar14 = uVar13;
      }
      else {
        if (*(long *)(param_2 + 0x108) == 0) {
          func_0x000107c6142c(uVar13);
          uStack_1f0 = uVar3;
          lStack_1e8 = lVar22;
          func_0x000100bcb1dc(&uStack_1f0);
          uStack_1d8 = uStack_200;
          uStack_1e0 = uStack_208;
          func_0x000100bcb1dc(&uStack_1e0);
          uStack_1d0 = uVar4;
          func_0x000102a63398(&uStack_1d0,0x112ee5e38,&UNK_10db11228);
          lVar8 = lStack_440;
          (**(code **)(lVar15 + 0x38))(lStack_440,1,1,lStack_430);
        }
        else {
          uStack_450 = uStack_218;
          uStack_2e8 = *(undefined8 *)(param_2 + 0x128);
          uStack_2f0 = *(undefined8 *)(param_2 + 0x120);
          uStack_2d8 = *(undefined8 *)(param_2 + 0x138);
          uStack_2e0 = *(undefined8 *)(param_2 + 0x130);
          lVar17 = *(long *)(param_2 + 0x170);
          uStack_2b8 = *(undefined8 *)(param_2 + 0x158);
          uStack_2c0 = *(undefined8 *)(param_2 + 0x150);
          uStack_2a8 = *(undefined8 *)(param_2 + 0x168);
          uStack_2b0 = *(undefined8 *)(param_2 + 0x160);
          uStack_2c8 = *(undefined8 *)(param_2 + 0x148);
          uStack_2d0 = *(undefined8 *)(param_2 + 0x140);
          uStack_308 = *(undefined8 *)(param_2 + 0x108);
          uStack_310 = *(undefined8 *)(param_2 + 0x100);
          uStack_2f8 = *(undefined8 *)(param_2 + 0x118);
          uStack_300 = *(undefined8 *)(param_2 + 0x110);
          lStack_2a0 = lVar17;
          if (*(long *)(lVar17 + 0x10) == 0) {
            (**(code **)(lStack_438 + 0x38))(lStack_440,1,1,lStack_430);
          }
          else {
            FUN_102a635c4(&uStack_310,&uStack_3c8,0x112ee5e20,&UNK_10db11210);
            func_0x000107c61434(lVar17);
            lVar9 = lVar11;
            uVar21 = uVar14;
            func_0x000100029284(lVar11);
            lVar8 = lStack_440;
            bVar6 = (uVar21 & 1) == 0;
            if (!bVar6) {
              FUN_102a5c6f0(*(long *)(lVar17 + 0x38) + *(long *)(lVar15 + 0x48) * lVar9,lStack_440);
            }
            func_0x000107c6142c(lVar17);
            lVar17 = lStack_430;
            (**(code **)(lVar15 + 0x38))(lVar8,bVar6,1,lStack_430);
            func_0x000102a63398(&uStack_310,0x112ee5e20,&UNK_10db11210);
            lVar9 = lVar8;
            (**(code **)(lVar15 + 0x30))(lVar8,1,lVar17);
            lVar15 = lStack_448;
            if ((int)lVar9 != 1) {
              func_0x000102a63318(lVar8,lStack_448,FUN_102aabc7c);
              uVar3 = *(undefined8 *)(param_2 + 0x50);
              lVar8 = *(long *)(param_2 + 0x58);
              func_0x0001000a8868(param_2 + 0x38,uVar3);
              uVar21 = uVar14;
              (**(code **)(lVar8 + 0x18))(lVar11,uVar14,uVar3,lVar8);
              puVar2 = (undefined8 *)(lVar15 + *(int *)(lStack_430 + 0x30));
              uStack_f8 = puVar2[0x11];
              uStack_100 = puVar2[0x10];
              uStack_e8 = puVar2[0x13];
              uStack_f0 = puVar2[0x12];
              uStack_e0 = puVar2[0x14];
              uStack_138 = puVar2[9];
              uStack_140 = puVar2[8];
              uStack_128 = puVar2[0xb];
              uStack_130 = puVar2[10];
              uStack_118 = puVar2[0xd];
              uStack_120 = puVar2[0xc];
              uStack_108 = puVar2[0xf];
              uStack_110 = puVar2[0xe];
              uStack_178 = puVar2[1];
              uStack_180 = *puVar2;
              uStack_168 = puVar2[3];
              uStack_170 = puVar2[2];
              uStack_158 = puVar2[5];
              uStack_160 = puVar2[4];
              uStack_148 = puVar2[7];
              uStack_150 = puVar2[6];
              FUN_102a635c4(&uStack_180,&uStack_3c8,0x112ee5e40,&UNK_10db11230);
              FUN_102aa6480(&uStack_3c8,&uStack_180,lVar11,uVar21);
              func_0x000102a6335c(lVar15,FUN_102aabc7c);
              uStack_318 = uStack_200;
              uStack_320 = uStack_208;
              uStack_1c8 = uStack_450;
              lStack_1c0 = lVar22;
              func_0x000100bcb1dc(&uStack_1c8);
              uStack_1b8 = uVar4;
              func_0x000102a63398(&uStack_1b8,0x112ee5e38,&UNK_10db11228);
              func_0x000107c6142c(uStack_428);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar13);
              puVar12 = puStack_410;
              func_0x000107c61558();
              if (((ulong)puVar12 & 1) == 0) {
                plVar1 = (long *)(puStack_410 + 0x10);
                puStack_410 = (undefined *)0x0;
                FUN_102a620b8(0,*plVar1 + 1,1);
              }
              uVar14 = *(ulong *)(puStack_410 + 0x10);
              if (*(ulong *)(puStack_410 + 0x18) >> 1 <= uVar14) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_410 + 0x18));
                FUN_102a620b8(puVar12,uVar14 + 1,1,puStack_410);
                puStack_410 = puVar12;
              }
              *(ulong *)(puStack_410 + 0x10) = uVar14 + 1;
              *(long *)(puStack_410 + uVar14 * 200 + 0x20) = lStack_420;
              *(ulong *)(puStack_410 + uVar14 * 200 + 0x28) = uVar13;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x38) = uStack_318;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x30) = uStack_320;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x98) = uStack_370;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x90) = uStack_378;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xa8) = uStack_360;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xa0) = uStack_368;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x78) = uStack_390;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x70) = uStack_398;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x88) = uStack_380;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x80) = uStack_388;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xe0) = uStack_328;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 200) = uStack_340;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xc0) = uStack_348;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xd8) = uStack_330;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xd0) = uStack_338;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xb8) = uStack_350;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0xb0) = uStack_358;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x58) = uStack_3b0;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x50) = uStack_3b8;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x68) = uStack_3a0;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x60) = uStack_3a8;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x48) = uStack_3c0;
              *(undefined8 *)(puStack_410 + uVar14 * 200 + 0x40) = uStack_3c8;
              goto joined_r0x000102a629b0;
            }
          }
          func_0x000107c6142c(uVar13);
          uStack_1b0 = uStack_450;
          lStack_1a8 = lVar22;
          func_0x000100bcb1dc(&uStack_1b0);
          uStack_198 = uStack_200;
          uStack_1a0 = uStack_208;
          func_0x000100bcb1dc(&uStack_1a0);
          uStack_188 = uVar4;
          func_0x000102a63398(&uStack_188,0x112ee5e38,&UNK_10db11228);
        }
        func_0x000102a63398(lVar8,0x112ee5cf0,&UNK_10db116c0);
        uVar10 = uStack_428;
      }
    }
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(uVar13);
  } while( true );
}



/* Entry: 102a630d8; end: 102a6311b;  */

long FUN_102a630d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102a6311c; end: 102a63317;  */

void FUN_102a6311c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  lVar3 = *(long *)(unaff_x20 + 0xa8);
  func_0x0001000a8868(unaff_x20 + 0x88,uVar1);
  (**(code **)(lVar3 + 0x58))(uVar1,lVar3);
  lVar3 = *(long *)(unaff_x20 + 0xf8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x21) != '\x04')) {
    func_0x000107c6157c(lVar3);
    FUN_102a70514(0);
    func_0x000107c61574(lVar3);
  }
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  uStack_c0 = uStack_1c0;
  uStack_b8 = uStack_1b8;
  uStack_b0 = uStack_1b0;
  uStack_a8 = uStack_1a8;
  uStack_a0 = uStack_1a0;
  uStack_98 = uStack_198;
  uStack_90 = uStack_190;
  uStack_88 = uStack_188;
  uStack_80 = uStack_180;
  uStack_78 = uStack_178;
  uStack_70 = uStack_170;
  uStack_68 = uStack_168;
  uStack_60 = uStack_160;
  uStack_58 = uStack_158;
  uStack_50 = uStack_150;
  FUN_102a635c4(&uStack_c0,&uStack_140,0x112ee5e20,&UNK_10db11210);
  func_0x000102a63398(&uStack_1c0,0x112ee5e20,&UNK_10db11210);
  FUN_102a5d778(&uStack_c0);
  func_0x000102a63398(&uStack_c0,0x112ee5e20,&UNK_10db11210);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_140 = *(undefined8 *)(unaff_x20 + 400);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  func_0x000102a63398(&uStack_140,0x112ee5e50,&UNK_10db11240);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  func_0x000107c6142c(uVar1);
  FUN_102a5d8e0();
  *(undefined1 *)(unaff_x20 + 0x178) = 0;
  FUN_102a5d8e0();
  FUN_102a5dde0(0);
  lVar3 = unaff_x20 + 0xd8;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_102a63520(0,0x112e118a0,&PTR_PTR_1126b02b0);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    func_0x000107c5d574(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102a63318; end: 102a633d7;  */

undefined8 FUN_102a63318(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a633d8; end: 102a633ff;  */

void FUN_102a633d8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102a63400; end: 102a634a3;  */

/* WARNING: Possible PIC construction at 0x000102a63440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6345c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6346c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a63470) */
/* WARNING: Removing unreachable block (ram,0x000102a63460) */
/* WARNING: Removing unreachable block (ram,0x000102a63444) */
/* WARNING: Removing unreachable block (ram,0x000102a63480) */

void FUN_102a63400(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102a634a4; end: 102a6351f;  */

/* WARNING: Possible PIC construction at 0x000102a634d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a634e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a634f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a634ec) */
/* WARNING: Removing unreachable block (ram,0x000102a634dc) */
/* WARNING: Removing unreachable block (ram,0x000102a634fc) */

void FUN_102a634a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 102a63520; end: 102a6355f;  */

void FUN_102a63520(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102a63560; end: 102a635c3;  */

void FUN_102a63560(void)

{
  FUN_102a60cc4();
  return;
}



/* Entry: 102a635c4; end: 102a6360b;  */

undefined8 FUN_102a635c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102a6360c; end: 102a63637;  */

void FUN_102a6360c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102a63638; end: 102a63657;  */

void FUN_102a63638(void)

{
  func_0x000102a61d60();
  return;
}



/* Entry: 102a63658; end: 102a63687;  */

void FUN_102a63658(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a63688; end: 102a636c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a63688(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113804e70;
  func_0x000107c61428(unaff_x20 + _DAT_113804e70,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102a636c8;
  return auVar2;
}



/* Entry: 102a636c8; end: 102a636d7;  */

void FUN_102a636c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102a636d8; end: 102a63727;  */

void FUN_102a636d8(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 102a63728; end: 102a63733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a63728(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113804e78;
  func_0x000107c61428(unaff_x20 + _DAT_113804e78,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102a63734; end: 102a6378b;  */

void FUN_102a63734(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102a6378c; end: 102a637cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a6378c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113804e78;
  func_0x000107c61428(unaff_x20 + _DAT_113804e78,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102a64a98;
  return auVar2;
}



/* Entry: 102a637cc; end: 102a6381f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a637cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = 0;
  FUN_102a649bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined1 *)(lVar2 + 0x48) = 1;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x58) = 1;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined1 *)(lVar2 + 0x90) = 1;
  lVar1 = _DAT_113804e70;
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(lVar2 + lVar1,1,1,lVar3);
  (*pcVar4)(lVar2 + _DAT_113804e78,1,1,lVar3);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined1 *)(lVar2 + 0x28) = param_4;
  return lVar2;
}



/* Entry: 102a63820; end: 102a63913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a63820(void)

{
  bool bVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x38) != '\x01') {
    if (*(char *)(unaff_x20 + 0x58) == '\x01') {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(unaff_x20 + 0x50) == 0;
    }
    if (*(char *)(unaff_x20 + 0x68) == '\x01') {
      if (*(char *)(unaff_x20 + 0x48) != '\x01') {
        if (bVar1) {
          func_0x000102a63b4c(0,1);
        }
        goto LAB_102a638a0;
      }
    }
    else if (*(char *)(unaff_x20 + 0x48) != '\x01') goto LAB_102a638a0;
    func_0x000102a639b8(0,0,1);
  }
LAB_102a638a0:
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_102a64974(unaff_x20 + _DAT_113804e70,0x112d373d8,&UNK_10d9014c0);
  FUN_102a64974(unaff_x20 + _DAT_113804e78,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 102a63914; end: 102a63937;  */

void FUN_102a63914(void)

{
  FUN_102a63820();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a63938; end: 102a639b7;  */

void FUN_102a63938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126abe10;
    func_0x000107c610f8(PTR_PTR_1126abe10);
    func_0x000107c453e4();
    func_0x000107c55860();
    func_0x000107c52930(puVar1,param_3,*(undefined8 *)(unaff_x20 + 0x80));
    func_0x000107c4bdc0(lVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 102a639b8; end: 102a63c2f;  */

/* WARNING: Possible PIC construction at 0x000102a63a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a63b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a63a44) */
/* WARNING: Removing unreachable block (ram,0x000102a63a50) */
/* WARNING: Removing unreachable block (ram,0x000102a63a5c) */
/* WARNING: Removing unreachable block (ram,0x000102a63ad4) */
/* WARNING: Removing unreachable block (ram,0x000102a63ae4) */
/* WARNING: Removing unreachable block (ram,0x000102a63a7c) */
/* WARNING: Removing unreachable block (ram,0x000102a63b30) */
/* WARNING: Removing unreachable block (ram,0x000102a63a90) */
/* WARNING: Removing unreachable block (ram,0x000102a63ab4) */
/* WARNING: Removing unreachable block (ram,0x000102a63ac4) */
/* WARNING: Removing unreachable block (ram,0x000102a63acc) */
/* WARNING: Removing unreachable block (ram,0x000102a63ae8) */

void FUN_102a639b8(long param_1,long param_2,char param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (param_3 == '\x01') {
LAB_102a639e8:
    puVar2 = (undefined *)0x0;
  }
  else {
    if (param_1 == 2) {
      ppuVar1 = &PTR_PTR_11090ee58;
    }
    else {
      if (2 < param_2 - 1U) goto LAB_102a639e8;
      ppuVar1 = (undefined **)(&PTR_PTR_11058e0e8)[param_2 - 1U];
    }
    puVar2 = *ppuVar1;
    func_0x000107c61174(puVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined **)(unaff_x20 + 0x80) = puVar2;
  func_0x000107c61174(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102a63c30; end: 102a64033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a63c30(double param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puStack_a8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar13 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_00;
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b0 = _DAT_113804e70;
  lVar12 = uVar11 - extraout_x12_01;
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    return;
  }
  dVar15 = *(double *)(unaff_x20 + 0x30);
  func_0x000107c61428(unaff_x20 + _DAT_113804e70,auStack_88,0,0);
  pcStack_b8 = *(code **)(lVar14 + 0x38);
  (*pcStack_b8)(lVar12,1,1,lVar2);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x0001009f0578(unaff_x20 + lStack_b0,lVar9);
  func_0x0001009f0578(lVar12,lVar9 + lVar13);
  pcVar7 = *(code **)(lVar14 + 0x30);
  lVar3 = lVar9;
  (*pcVar7)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_102a64974(lVar12,0x112d373d8,&UNK_10d9014c0);
    lVar13 = lVar9 + lVar13;
    (*pcVar7)(lVar13,1,lVar2);
    if ((int)lVar13 != 1) {
LAB_102a63e80:
      FUN_102a64974(lVar9,0x112d373d0,&UNK_10d90f8f0);
      return;
    }
    FUN_102a64974(lVar9,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(lVar9,uVar11);
    lVar3 = lVar9 + lVar13;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 1) {
      FUN_102a64974(lVar12,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar14 + 8))(uVar11,lVar2);
      goto LAB_102a63e80;
    }
    lVar3 = lVar10;
    (**(code **)(lVar14 + 0x20))(lVar10,lVar9 + lVar13,lVar2);
    func_0x000100df4c40();
    uVar4 = uVar11;
    func_0x000107c5fab8(uVar11,lVar10,lVar2,lVar3);
    pcVar7 = *(code **)(lVar14 + 8);
    (*pcVar7)(lVar10,lVar2);
    FUN_102a64974(lVar12,0x112d373d8,&UNK_10d9014c0);
    (*pcVar7)(uVar11,lVar2);
    FUN_102a64974(lVar9,0x112d373d8,&UNK_10d9014c0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40ef8(uVar5);
  func_0x000107c61180();
  puVar1 = puStack_a8;
  func_0x000107c5ee94(puStack_a8);
  func_0x000107c61170(uVar5);
  (**(code **)(lVar14 + 0x10))(lVar8,puVar1,lVar2);
  (*pcStack_b8)(lVar8,0,1,lVar2);
  lVar13 = lStack_b0;
  func_0x000107c61428(unaff_x20 + lStack_b0,auStack_a0,0x21,0);
  func_0x000100ed9cbc(lVar8,unaff_x20 + lVar13);
  func_0x000107c614a8(auStack_a0);
  func_0x000107c5ee8c();
  lVar13 = *(long *)(unaff_x20 + 0x18);
  if (lVar13 != 0) {
    puVar6 = PTR_PTR_1126abe10;
    func_0x000107c610f8(PTR_PTR_1126abe10);
    func_0x000107c453e4();
    func_0x000107c55860();
    func_0x000107c52930(puVar6);
    func_0x000107c4bdbc(param_1 - dVar15,lVar13);
    func_0x000107c61170(puVar6);
  }
  (**(code **)(lVar14 + 8))(puVar1,lVar2);
  return;
}



/* Entry: 102a64034; end: 102a640a3;  */

/* WARNING: Possible PIC construction at 0x000102a63a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a63b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a63a44) */
/* WARNING: Removing unreachable block (ram,0x000102a63a50) */
/* WARNING: Removing unreachable block (ram,0x000102a63a5c) */
/* WARNING: Removing unreachable block (ram,0x000102a63ad4) */
/* WARNING: Removing unreachable block (ram,0x000102a63ae4) */
/* WARNING: Removing unreachable block (ram,0x000102a63a7c) */
/* WARNING: Removing unreachable block (ram,0x000102a63b30) */
/* WARNING: Removing unreachable block (ram,0x000102a63a90) */
/* WARNING: Removing unreachable block (ram,0x000102a63ab4) */
/* WARNING: Removing unreachable block (ram,0x000102a63ac4) */
/* WARNING: Removing unreachable block (ram,0x000102a63acc) */
/* WARNING: Removing unreachable block (ram,0x000102a63ae8) */
/* WARNING: Removing unreachable block (ram,0x000102a63a10) */
/* WARNING: Removing unreachable block (ram,0x000102a639f0) */
/* WARNING: Removing unreachable block (ram,0x000102a63a04) */
/* WARNING: Removing unreachable block (ram,0x000102a639f8) */
/* WARNING: Removing unreachable block (ram,0x000102a63a1c) */

void FUN_102a64034(double param_1)

{
  bool bVar1;
  long unaff_x20;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    return;
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(unaff_x20 + 0x50) == 0;
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    if (*(char *)(unaff_x20 + 0x48) != '\x01') {
      if (!bVar1) {
        return;
      }
      if ((*(char *)(unaff_x20 + 0x38) == '\x01') || (*(char *)(unaff_x20 + 0x68) != '\x01')) {
        return;
      }
      dVar4 = *(double *)(unaff_x20 + 0x30);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
      *(double *)(unaff_x20 + 0x60) = param_1;
      *(undefined1 *)(unaff_x20 + 0x68) = 0;
      *(undefined8 *)(unaff_x20 + 0x70) = 1;
      *(undefined1 *)(unaff_x20 + 0x78) = 0;
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) {
        return;
      }
      puVar3 = PTR_PTR_1126abe10;
      func_0x000107c610f8(PTR_PTR_1126abe10);
      func_0x000107c453e4();
      func_0x000107c55860();
      func_0x000107c52930(puVar3);
      func_0x000107c54ccc(puVar3);
      func_0x000107c4bdc4(param_1 - dVar4,lVar2);
      goto code_r0x000107c61170;
    }
  }
  else if (*(char *)(unaff_x20 + 0x48) != '\x01') {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x000107c61174(0);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102a640a4; end: 102a6460f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a640a4(double param_1,char param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  double dVar16;
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  long lStack_e0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_f0 + -extraout_x8;
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar15 - extraout_x12_00;
  lVar4 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_01;
  if (param_2 == '\x01') {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
    *(double *)(unaff_x20 + 0x88) = param_1;
    *(undefined1 *)(unaff_x20 + 0x90) = 0;
    return;
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    return;
  }
  dVar16 = *(double *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c40ef8(uVar5);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c5ee8c();
  lVar2 = _DAT_113804e78;
  param_1 = param_1 - dVar16;
  if ((param_2 == '\0') || (param_2 != '\x02')) goto LAB_102a64344;
  func_0x000107c61428(unaff_x20 + _DAT_113804e78,auStack_88,0,0);
  pcStack_e8 = *(code **)(extraout_x13 + 0x38);
  (*pcStack_e8)(lVar10,1,1,lVar4);
  iVar1 = *(int *)(lVar3 + 0x30);
  lStack_e0 = lVar2;
  func_0x0001009f0578(unaff_x20 + lVar2,puVar14);
  func_0x0001009f0578(lVar10,puVar14 + iVar1);
  pcVar9 = *(code **)(extraout_x13 + 0x30);
  puVar6 = puVar14;
  (*pcVar9)(puVar14,1,lVar4);
  if ((int)puVar6 == 1) {
    FUN_102a64974(lVar10,0x112d373d8,&UNK_10d9014c0);
    puVar6 = puVar14 + iVar1;
    (*pcVar9)(puVar6,1,lVar4);
    if ((int)puVar6 != 1) goto LAB_102a644e0;
    FUN_102a64974(puVar14,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x0001009f0578(puVar14,uVar15);
    puVar6 = puVar14 + iVar1;
    (*pcVar9)(puVar6,1,lVar4);
    if ((int)puVar6 == 1) {
      FUN_102a64974(lVar10,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(extraout_x13 + 8))(uVar15,lVar4);
LAB_102a644e0:
      FUN_102a64974(puVar14,0x112d373d0,&UNK_10d90f8f0);
      goto LAB_102a64344;
    }
    lVar3 = lVar12;
    (**(code **)(extraout_x13 + 0x20))(lVar12,puVar14 + iVar1,lVar4);
    func_0x000100df4c40();
    uVar8 = uVar15;
    func_0x000107c5fab8(uVar15,lVar12,lVar4,lVar3);
    pcVar9 = *(code **)(extraout_x13 + 8);
    (*pcVar9)(lVar12,lVar4);
    FUN_102a64974(lVar10,0x112d373d8,&UNK_10d9014c0);
    (*pcVar9)(uVar15,lVar4);
    FUN_102a64974(puVar14,0x112d373d8,&UNK_10d9014c0);
    if ((uVar8 & 1) == 0) goto LAB_102a64344;
  }
  (**(code **)(extraout_x13 + 0x10))(lVar13,lVar11,lVar4);
  (*pcStack_e8)(lVar13,0,1,lVar4);
  lVar3 = lStack_e0;
  func_0x000107c61428(unaff_x20 + lStack_e0,auStack_a0,0x21,0);
  func_0x000100ed9cbc(lVar13,unaff_x20 + lVar3);
  func_0x000107c614a8(auStack_a0);
LAB_102a64344:
  func_0x000107c4be28(param_1,*(undefined8 *)(unaff_x20 + 0x18));
  puVar7 = PTR_PTR_1126abe18;
  func_0x000107c610f8(PTR_PTR_1126abe18);
  func_0x000107c453e4();
  uVar5 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar5 = param_3;
  }
  func_0x000107c55d70(puVar7);
  func_0x000107c61170(uVar5);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
  }
  func_0x000107c57894(puVar7);
  func_0x000107c61170(param_5);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x102a64608);
    (*pcVar9)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x102a6460c);
    (*pcVar9)();
  }
  if (param_1 < 9.223372036854776e+18) {
    func_0x000107c55fcc(puVar7);
    func_0x000107c5911c(puVar7);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      (**(code **)(extraout_x13 + 8))(lVar11,lVar4);
      func_0x000107c61170(puVar7);
    }
    else {
      func_0x000107c4bfb0();
      func_0x000107c61170(puVar7);
      (**(code **)(extraout_x13 + 8))(lVar11,lVar4);
    }
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined1 *)(unaff_x20 + 0x90) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x102a64610);
  (*pcVar9)();
}



/* Entry: 102a64610; end: 102a64627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a64610(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113804e70;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113804e70,auStack_48,0,0);
  func_0x0001009f0578(lVar2 + lVar1,param_1);
  return;
}



/* Entry: 102a64628; end: 102a6466b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a64628(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_113804e70;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113804e70,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = 0x102a64a9c;
  return auVar3;
}



/* Entry: 102a6466c; end: 102a64677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6466c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113804e78;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113804e78,auStack_48,0,0);
  func_0x0001009f0578(lVar2 + lVar1,param_1);
  return;
}



/* Entry: 102a64678; end: 102a646cb;  */

void FUN_102a64678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *param_4;
  func_0x000107c61428(lVar1 + lVar2,auStack_48,0,0);
  func_0x0001009f0578(lVar1 + lVar2,param_1);
  return;
}



/* Entry: 102a646cc; end: 102a646d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a646cc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113804e78;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113804e78,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,lVar2 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102a646d8; end: 102a64733;  */

void FUN_102a646d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *param_4;
  func_0x000107c61428(lVar1 + lVar2,auStack_48,0x21,0);
  func_0x000100ed9cbc(param_1,lVar1 + lVar2);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 102a64734; end: 102a64837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a64734(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_113804e78;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_113804e78,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = 0x102a64aa0;
  return auVar3;
}



/* Entry: 102a64838; end: 102a6489f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a64838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = 0;
  FUN_102a649bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined1 *)(lVar2 + 0x48) = 1;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x58) = 1;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined1 *)(lVar2 + 0x90) = 1;
  lVar1 = _DAT_113804e70;
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(lVar2 + lVar1,1,1,lVar3);
  (*pcVar4)(lVar2 + _DAT_113804e78,1,1,lVar3);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined1 *)(lVar2 + 0x28) = param_4;
  return lVar2;
}



/* Entry: 102a648a0; end: 102a64973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a648a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  *(undefined8 *)(param_5 + 0x30) = 0;
  *(undefined1 *)(param_5 + 0x38) = 1;
  *(undefined8 *)(param_5 + 0x40) = 0;
  *(undefined1 *)(param_5 + 0x48) = 1;
  *(undefined8 *)(param_5 + 0x50) = 0;
  *(undefined1 *)(param_5 + 0x58) = 1;
  *(undefined8 *)(param_5 + 0x60) = 0;
  *(undefined1 *)(param_5 + 0x68) = 1;
  *(undefined8 *)(param_5 + 0x70) = 0;
  *(undefined1 *)(param_5 + 0x78) = 1;
  *(undefined8 *)(param_5 + 0x80) = 0;
  *(undefined8 *)(param_5 + 0x88) = 0;
  *(undefined1 *)(param_5 + 0x90) = 1;
  lVar1 = _DAT_113804e70;
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(param_5 + lVar1,1,1,lVar2);
  (*pcVar3)(param_5 + _DAT_113804e78,1,1,lVar2);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined1 *)(param_5 + 0x28) = param_4;
  return param_5;
}



/* Entry: 102a64974; end: 102a649b3;  */

undefined8 FUN_102a64974(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102a649b4; end: 102a649bb;  */

void FUN_102a649b4(void)

{
  if (lRam0000000112ee5ee0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e70f100);
  return;
}



/* Entry: 102a649bc; end: 102a649f3;  */

void FUN_102a649bc(undefined8 param_1)

{
  if (lRam0000000112ee5ee0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70f100);
  return;
}



/* Entry: 102a649f4; end: 102a64a97;  */

void FUN_102a649f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_88 = &UNK_10db11368;
  puStack_80 = &UNK_10db11380;
  puStack_78 = &UNK_10db11380;
  puStack_70 = &UNK_10db11398;
  puStack_68 = &UNK_10db113b0;
  puStack_60 = &UNK_10db113b0;
  puStack_58 = &UNK_10db113b0;
  puStack_50 = &UNK_10db113b0;
  puStack_48 = &UNK_10db113b0;
  puStack_40 = &UNK_10db11380;
  puStack_38 = &UNK_10db113b0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c61630(param_1,0x100,0xd,&puStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 102a64a98; end: 102a64ab7;  */

void FUN_102a64a98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102a64ab8; end: 102a64b63;  */

void FUN_102a64ab8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a64b64; end: 102a64b67;  */

void FUN_102a64b64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee60e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db113d0;
  func_0x000107c61520(&UNK_10db113d0,&UNK_11058e218);
  puRam0000000112ee60e0 = puVar1;
  return;
}



/* Entry: 102a64b68; end: 102a64ba7;  */

void FUN_102a64b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee60e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db113d0;
  func_0x000107c61520(&UNK_10db113d0,&UNK_11058e218);
  puRam0000000112ee60e0 = puVar1;
  return;
}



/* Entry: 102a64ba8; end: 102a64dab;  */

int FUN_102a64ba8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102a64dac; end: 102a64faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a64dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ee60e8;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60e8,0);
  lVar2 = _DAT_112ee60f0;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60f0,0);
  lVar3 = _DAT_112ee60f8;
  func_0x000107c61614(unaff_x20 + _DAT_112ee60f8,0);
  lVar4 = _DAT_112ee6100;
  func_0x000107c61614(unaff_x20 + _DAT_112ee6100,0);
  lVar5 = _DAT_112ee6108;
  func_0x000107c61614(unaff_x20 + _DAT_112ee6108,0);
  lVar6 = _DAT_112ee6110;
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  lVar6 = _DAT_112ee6118;
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  lVar6 = _DAT_112ee6120;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar7;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_98,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_b0,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_c8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_4);
  func_0x000107c61428(unaff_x20 + lVar5,auStack_e0,1,0);
  func_0x000107c61604(unaff_x20 + lVar5,param_5);
  puVar8 = auStack_f0;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar8;
}



/* Entry: 102a64fb0; end: 102a6500f; -[_TtC32ShoppingLensProductPickerManager34ProductSelectionDependencyProvider init] */

void FUN_102a64fb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensProductPickerManager.ProductSelectionDependencyProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a64fdc);
  (*pcVar1)();
}



/* Entry: 102a65010; end: 102a650a7; -[_TtC32ShoppingLensProductPickerManager34ProductSelectionDependencyProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a6507c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a65080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a65010(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee60e8);
  func_0x000107c61610(param_1 + _DAT_112ee60f0);
  func_0x000107c61610(param_1 + _DAT_112ee60f8);
  func_0x000107c61610(param_1 + _DAT_112ee6100);
  func_0x000100d17c0c(param_1 + _DAT_112ee6108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee6110));
  return;
}



/* Entry: 102a650a8; end: 102a650b7;  */

undefined1  [16] FUN_102a650a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x302e32;
  return auVar1;
}



/* Entry: 102a650b8; end: 102a66223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a650b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,long param_14,undefined8 param_15,undefined8 param_16,long param_17,
                  undefined8 param_18,long *param_19,undefined8 param_20)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x20;
  code *pcVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 auStack_190 [8];
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uStack_130 = param_20;
  plStack_110 = param_19;
  uStack_128 = param_15;
  lStack_108 = param_14;
  uStack_120 = param_12;
  uStack_138 = param_11;
  uStack_100 = param_10;
  lVar2 = 0;
  lStack_158 = param_6;
  uStack_140 = param_5;
  uStack_118 = param_4;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = unaff_x20;
  func_0x000107c613fc();
  func_0x000107c61614(lVar3 + 0x20,0);
  func_0x000107c61614(lVar3 + 0x28,0);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  func_0x000107c61614(lVar3 + 0x30,0);
  func_0x000107c61614(lVar3 + 200,0);
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  func_0x000107c61614(lVar3 + 0xd0,0);
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0xe0) = puVar4;
  *(undefined1 *)(lVar3 + 0xe8) = 0;
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  func_0x000107c61614(lVar3 + 0xf0,0);
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x100) = puVar4;
  *(undefined8 *)(lVar3 + 0x118) = 0;
  *(undefined8 *)(lVar3 + 0x120) = 0;
  *(undefined8 *)(lVar3 + 0x110) = 0;
  if (param_17 == 0) {
    lVar15 = 0;
  }
  else {
    func_0x000102a96cb4(0);
    func_0x000107c613fc();
    lVar15 = param_17;
    func_0x000102a9692c();
  }
  *(long *)(lVar3 + 0x18) = param_1;
  uStack_150 = param_2;
  func_0x000107c61604(lVar3 + 0x20,param_2);
  uStack_148 = param_3;
  FUN_102a6bbd4(param_3,lVar3 + 0x60);
  FUN_102a6bbd4(uStack_118,lVar3 + 0x88);
  uVar7 = uStack_140;
  *(undefined8 *)(lVar3 + 0xb0) = uStack_140;
  *(long *)(lVar3 + 0xb8) = lStack_158;
  uStack_168 = param_8;
  func_0x000107c61604(lVar3 + 0x28,param_8);
  *(undefined8 *)(lVar3 + 0x40) = param_7;
  FUN_102a9af00(0);
  func_0x000107c610f8();
  func_0x000107c6157c(lVar15);
  func_0x000107c615f0(param_17);
  func_0x000107c61174();
  lStack_160 = param_1;
  func_0x000107c615f0(uVar7);
  func_0x000107c61174();
  uVar7 = uStack_130;
  uStack_178 = param_7;
  func_0x000107c615f0(uStack_130);
  uVar5 = 0;
  FUN_102a98d14(0,0,lVar15,uVar7);
  uVar20 = uStack_100;
  uVar7 = uStack_138;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(ulong *)(lVar3 + 0x48) = uStack_100;
  *(undefined8 *)(lVar3 + 0x50) = param_9;
  *(undefined8 *)(lVar3 + 0xc0) = uStack_138;
  func_0x000107c61604(lVar3 + 200,uStack_120);
  *(long *)(lVar3 + 0xd8) = lStack_108;
  func_0x000107c61604(lVar3 + 0xd0,param_13);
  *(undefined8 *)(lVar3 + 0x38) = param_16;
  func_0x000107c61604(lVar3 + 0x30,uStack_128);
  plVar1 = plStack_110;
  *(long *)(lVar3 + 0x58) = param_17;
  *(long **)(lVar3 + 0x108) = plStack_110;
  puVar14 = *(ulong **)(lVar3 + 0x10);
  pcVar18 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar14) + 0xd0);
  func_0x000107c615f0(uVar7);
  lStack_158 = param_17;
  func_0x000107c615f0(param_17);
  func_0x000107c6157c(plVar1);
  func_0x000107c61174(puVar14);
  func_0x000107c6157c(lVar3);
  func_0x000107c61174();
  uVar6 = uVar20;
  uStack_180 = param_9;
  func_0x000107c61174();
  (*pcVar18)(lVar3,&PTR_DAT_11058e318);
  func_0x000107c61170(puVar14);
  if (lVar15 != 0) {
    func_0x000107c61428(lVar15 + 0x18,auStack_80,1,0);
    *(undefined ***)(lVar15 + 0x20) = &PTR_DAT_11058e380;
    func_0x000107c61604(lVar15 + 0x18,lVar3);
  }
  pcVar18 = *(code **)(*plStack_110 + 0xf8);
  lStack_170 = lVar15;
  (*pcVar18)(lVar3,unaff_x20,&PTR_DAT_11058e348);
  uVar7 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c61174(uVar7);
  (*pcVar18)();
  func_0x000107c61170(uVar7);
  lVar8 = _DAT_112ee6108;
  lVar15 = *(long *)(lVar3 + 0x18);
  func_0x000107c61428(lVar15 + _DAT_112ee6108,auStack_98,0,0);
  lVar15 = lVar15 + lVar8;
  func_0x000107c61618();
  if (lVar15 != 0) {
    func_0x000107c577c0();
    func_0x000107c615e8(lVar15);
  }
  if ((uVar20 != 0) && (*(long *)(uVar6 + _DAT_112fbe968) != 0)) {
    lVar15 = *(long *)(uVar6 + _DAT_112fbe960);
    uVar16 = *(ulong *)(lVar15 + 0x10);
    uVar20 = uVar6;
    func_0x000107c61174();
    uStack_188 = uVar20;
    uStack_100 = uVar16;
    if (uVar16 != 0) {
      uVar20 = 0;
      puVar19 = (undefined8 *)(lVar15 + 0x28);
      do {
        if (*(ulong *)(lVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102a65814);
          (*pcVar18)();
        }
        uVar7 = puVar19[-1];
        uVar5 = *puVar19;
        func_0x000107c61438(uVar5,2);
        puVar4 = PTR___ss6UInt64VN_11034f048;
        puVar12 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c(uVar6);
        func_0x000107c5eea0(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        lVar8 = 0;
        func_0x0001039a49d8();
        func_0x000107c613fc();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
        *(undefined8 *)(lVar8 + 0x18) = uVar5;
        *(undefined **)(lVar8 + 0x20) = puVar4;
        *(undefined **)(lVar8 + 0x28) = puVar12;
        (**(code **)(lVar13 + 0x20))
                  (lVar8 + _DAT_11380c060,auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                   lVar2);
        if (param_13 != 0) {
          lVar9 = param_13;
          func_0x000107c614f0(param_13);
          (**(code **)(lStack_108 + 8))(lVar8,lVar9);
        }
        uVar20 = uVar20 + 1;
        func_0x000107c61574(lVar8);
        func_0x000107c6142c(uVar5);
        puVar19 = puVar19 + 2;
      } while (uStack_100 != uVar20);
    }
    func_0x000107c61170(uStack_188);
  }
  uVar5 = uStack_148;
  uVar7 = uStack_150;
  lVar13 = lStack_158;
  lVar2 = lStack_160;
  uVar17 = *(undefined8 *)(lStack_160 + _DAT_112ee6110);
  puVar4 = &UNK_11058e270;
  func_0x000107c613fc(&UNK_11058e270,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar3);
  pcStack_a8 = FUN_102a66224;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1019eb2d8;
  puStack_b0 = &UNK_11058e288;
  ppuVar10 = &puStack_c8;
  puStack_a0 = puVar4;
  func_0x000107c60bc4(ppuVar10);
  puVar4 = puStack_a0;
  func_0x000107c61174(uVar17);
  func_0x000107c61574(puVar4);
  uVar11 = uVar17;
  func_0x000107c5c320(uVar17);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c3e924(uVar11);
  func_0x000107c61170(uVar11);
  FUN_102a6675c(param_18);
  func_0x000107c615e8(lVar13);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(uStack_140);
  func_0x000107c61170(uStack_178);
  func_0x000107c61574(lStack_170);
  func_0x000107c615e8(uStack_130);
  func_0x000107c61170(uStack_180);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_138);
  func_0x000107c615e8(uStack_128);
  func_0x000107c61574(plStack_110);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uStack_168);
  func_0x000107c615e8(uStack_120);
  func_0x000107c615e8(param_18);
  func_0x0001000834e4(uStack_118);
  func_0x0001000834e4(uVar5);
  return lVar3;
}



/* Entry: 102a66224; end: 102a6622b;  */

void FUN_102a66224(ulong param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar11 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar11 - extraout_x8_00;
  puVar6 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  plVar9 = *(long **)(lVar2 + 0x108);
  pcVar13 = *(code **)(*plVar9 + 0x70);
  plVar3 = plVar9;
  func_0x000107c6157c();
  (*pcVar13)();
  func_0x000107c61574(plVar9);
  if (plVar3 == (long *)0x0) {
    uVar14 = 0;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    uVar14 = plVar3[2];
    puVar10 = (undefined1 *)plVar3[3];
    func_0x000107c61434(puVar10);
    func_0x000107c61574(plVar3);
  }
  uStack_80 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar7 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  if (puVar10 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar6);
  }
  else {
    if ((uVar14 == uVar7) && (puVar10 == puVar6)) {
      func_0x000107c61574(lVar2);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar6);
      return;
    }
    func_0x000107c605b8(uVar14,puVar10,uVar7,puVar6,0);
    func_0x000107c6142c(puVar10);
    func_0x000107c6142c(puVar6);
    if ((uVar14 & 1) != 0) goto LAB_102a661fc;
  }
  plVar9 = *(long **)(lVar2 + 0x108);
  pcVar13 = *(code **)(*plVar9 + 0x70);
  plVar3 = plVar9;
  func_0x000107c6157c();
  (*pcVar13)();
  func_0x000107c61574(plVar9);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61574(plVar3);
    lVar4 = 0;
    FUN_102a9ded4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar12,1,1,lVar4);
    func_0x000107c5eea0(puVar11);
    FUN_102a6622c(0,lVar12,puVar11);
    (**(code **)(lVar8 + 8))(puVar11,lVar1);
    FUN_102a6b960(lVar12,0x112ee6128,&UNK_10db114e0);
  }
  uVar14 = uStack_80;
  uVar7 = uStack_80;
  func_0x000107c4a400();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x000107c61174(uVar14);
    uVar7 = uVar14;
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x110);
  *(ulong *)(lVar2 + 0x110) = uVar7;
  func_0x000107c61170(uVar5);
  uVar7 = uVar14;
  func_0x000107c4a400();
  if ((int)uVar7 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c61174(uVar5);
    func_0x000102a99af8();
    func_0x000107c61170(uVar5);
    func_0x000102a66410(uVar14);
  }
LAB_102a661fc:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 102a6622c; end: 102a6673f;  */

void FUN_102a6622c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d373d8;
  uStack_88 = param_2;
  uStack_80 = param_3;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  plVar6 = *(long **)(unaff_x20 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x120,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x120);
  if (lVar7 == 0) {
    lVar7 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar5,1,1,lVar7);
    lVar7 = *(long *)(unaff_x20 + 0x120);
  }
  else {
    uVar1 = *(undefined8 *)(lVar7 + 0xa0);
    lVar2 = *(long *)(lVar7 + 0xa8);
    func_0x0001000a8868(lVar7 + 0x88,uVar1);
    pcVar3 = *(code **)(lVar2 + 8);
    func_0x000107c6157c(lVar7);
    (*pcVar3)(lVar5,uVar1,lVar2);
    func_0x000107c61574(lVar7);
    lVar7 = *(long *)(unaff_x20 + 0x120);
  }
  if (lVar7 == 0) {
    lVar7 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar4,1,1,lVar7);
  }
  else {
    uVar1 = *(undefined8 *)(lVar7 + 0xa0);
    lVar2 = *(long *)(lVar7 + 0xa8);
    func_0x0001000a8868(lVar7 + 0x88,uVar1);
    pcVar3 = *(code **)(lVar2 + 0x20);
    func_0x000107c6157c(lVar7);
    (*pcVar3)(puVar4,uVar1,lVar2);
    func_0x000107c61574(lVar7);
  }
  (**(code **)(*plVar6 + 200))(param_1,uStack_88,lVar5,puVar4,uStack_80);
  FUN_102a6b960(puVar4,0x112d373d8,&UNK_10d9014c0);
  FUN_102a6b960(lVar5,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 102a66740; end: 102a6675b;  */

void FUN_102a66740(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a6675c; end: 102a6689f;  */

void FUN_102a6675c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (param_1 != 0) {
    func_0x000107c4c238();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4c940();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c5d58c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar1 != 0) {
          puVar3 = &UNK_11058e270;
          func_0x000107c613fc(&UNK_11058e270,0x18,7);
          func_0x000107c61644(puVar3 + 0x10);
          uStack_40 = 0x102a6b9b0;
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0x42000000;
          pcStack_50 = FUN_102a332cc;
          puStack_48 = &UNK_11058e508;
          puStack_38 = puVar3;
          func_0x000107c60bc4(&puStack_60);
          func_0x000107c61574(puStack_38);
          lVar2 = lVar1;
          func_0x000107c5c320(lVar1);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(lVar1);
          func_0x000107c3e924(lVar2);
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 102a668a0; end: 102a66967;  */

void FUN_102a668a0(void)

{
  long unaff_x20;
  
  FUN_102a66968();
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100d17c0c(unaff_x20 + 0x20);
  func_0x000107c61610(unaff_x20 + 0x28);
  func_0x000100d17c0c(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x0001000834e4(unaff_x20 + 0x88);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000100d17c0c(unaff_x20 + 200);
  func_0x000100d17c0c(unaff_x20 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000100d17c0c(unaff_x20 + 0xf0);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 102a66968; end: 102a66aeb;  */

void FUN_102a66968(void)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puVar3;
  
  ppuVar5 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 != 0) {
    puVar2 = &UNK_11058e4a0;
    func_0x000107c613fc(&UNK_11058e4a0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar6;
    puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar1 = (int)puVar3;
    func_0x000107c61174(lVar6);
    func_0x000107c61174();
    func_0x000107c4a02c();
    if (iVar1 == 0) {
      pcVar4 = "guaranteeMainQueue(_:)";
      func_0x0001000c10c0("guaranteeMainQueue(_:)");
      func_0x000107c61180();
      puVar3 = &UNK_11058e4c8;
      func_0x000107c613fc(&UNK_11058e4c8,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_102a6b9a0;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uStack_50 = 0x102a6b9a8;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11058e4e0;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(pcVar4);
      func_0x000107c61170(lVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar4);
    }
    else {
      func_0x000107c4ff34(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c61574(puVar2);
    }
    lVar6 = *(long *)(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x20 + 0x118) = 0;
    if (lVar6 != 0) {
      if (*(long *)(unaff_x20 + 0xc0) != 0) {
        func_0x000107c5d60c();
      }
      func_0x000107c61170(lVar6);
    }
  }
  *(undefined1 *)(unaff_x20 + 0xe8) = 0;
  return;
}



/* Entry: 102a66aec; end: 102a66b0b;  */

void FUN_102a66aec(void)

{
  FUN_102a668a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a66b0c; end: 102a66c17;  */

void FUN_102a66b0c(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - extraout_x8_00;
  lVar2 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
  func_0x000107c5eea0(puVar3);
  FUN_102a6622c(0,lVar4,puVar3);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  FUN_102a6b960(lVar4,0x112ee6128,&UNK_10db114e0);
  return;
}



/* Entry: 102a66c18; end: 102a66d1b;  */

long FUN_102a66c18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x118);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4b8b8(param_1,param_2,lVar1);
    lVar2 = lVar1;
    func_0x000107c4eadc(lVar1,param_2,0);
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 102a66d1c; end: 102a6759b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a66d1c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar19 = *(long *)(unaff_x20 + 0x40);
  lVar20 = unaff_x20 + 0x28;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar20 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = lVar20;
    func_0x000107c3fa04(lVar20);
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
  }
  uVar3 = 0;
  FUN_102a6f550(0);
  func_0x000107c610f8();
  FUN_102a6f15c(0,0,0,0,lVar19,lVar23,uVar3);
  uVar24 = *(ulong *)(unaff_x20 + 0x118);
  *(long *)(unaff_x20 + 0x118) = lVar19;
  if (uVar24 == 0) {
    func_0x000107c61174();
    func_0x000107c61174();
LAB_102a66e1c:
    if (*(long *)(unaff_x20 + 0xc0) != 0) {
      func_0x000107c5d60c();
    }
    func_0x000107c61170(lVar19);
  }
  else {
    lVar20 = lVar19;
    func_0x000107c61174();
    func_0x000107c61174();
    uVar4 = uVar24;
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c60118();
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_102a66e1c;
    func_0x000107c61170(lVar20);
    uVar24 = uVar4;
  }
  func_0x000107c61170(uVar24);
  *(undefined1 *)(unaff_x20 + 0xe8) = 0;
  lVar6 = 0;
  FUN_102a6bd80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  puVar17 = (undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *puVar17 = 0;
  func_0x000107c61614(lVar6 + 0x38,0);
  *(undefined8 *)(lVar6 + 0x50) = 0;
  func_0x000107c61614(lVar6 + 0x48,0);
  *(undefined1 *)(lVar6 + 0x58) = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined **)(lVar6 + 0x68) = puVar8;
  *(undefined4 *)(lVar6 + 0x7f) = 0;
  *(undefined **)(lVar6 + 0x70) = puVar8;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  plVar25 = (long *)(lVar19 + _DAT_112ee63d0);
  lVar20 = *plVar25;
  *plVar25 = lVar6;
  plVar25[1] = (long)&PTR_DAT_11058e678;
  func_0x000107c6157c(lVar6);
  func_0x000107c615e8(lVar20);
  *(undefined ***)(lVar6 + 0x50) = &PTR_DAT_11058e820;
  func_0x000107c61604(lVar6 + 0x48,lVar19);
  *(undefined ***)(lVar6 + 0x40) = &PTR_DAT_11058e2d8;
  func_0x000107c61604(lVar6 + 0x38);
  *(undefined ***)(unaff_x20 + 0xf8) = &PTR_DAT_11058e5f0;
  func_0x000107c61604(unaff_x20 + 0xf0,lVar6);
  plVar25 = *(long **)(unaff_x20 + 0x108);
  uVar29 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar28 = *(undefined8 *)(unaff_x20 + 0xb0);
  lVar20 = unaff_x20 + 0x28;
  func_0x000107c61618();
  uVar21 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar7 = uVar26;
  func_0x000107c61174();
  func_0x000107c6157c(lVar6);
  func_0x000107c61174();
  func_0x000107c6157c(plVar25);
  func_0x000107c615f0();
  func_0x000107c61174();
  func_0x000107c4a4d8(param_1);
  puVar8 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  FUN_102a6ae3c();
  lVar23 = unaff_x20 + 200;
  func_0x000107c61618();
  lVar9 = unaff_x20 + 0xd0;
  func_0x000107c61618();
  uVar18 = *(undefined8 *)(unaff_x20 + 0xd8);
  lVar27 = *(long *)(unaff_x20 + 0x48);
  uVar3 = 0;
  FUN_102a649bc();
  ppuStack_a8 = &PTR_DAT_11058e080;
  puVar10 = (undefined *)0x0;
  puStack_c8 = puVar8;
  puStack_b0 = (undefined *)uVar3;
  func_0x000102a5ddc0();
  puVar11 = puVar10;
  func_0x000107c613fc();
  func_0x000107c61644(puVar11 + 0x70,0);
  func_0x000107c61614(puVar11 + 0x78,0);
  *(undefined8 *)(puVar11 + 0xd0) = 0;
  func_0x000107c61614(puVar11 + 200,0);
  func_0x000107c61614(puVar11 + 0xd8,0);
  *(undefined8 *)(puVar11 + 0xe8) = 0;
  func_0x000107c61614(puVar11 + 0xe0,0);
  *(undefined8 *)(puVar11 + 0x158) = 0;
  *(undefined8 *)(puVar11 + 0x150) = 0;
  *(undefined8 *)(puVar11 + 0x168) = 0;
  *(undefined8 *)(puVar11 + 0x160) = 0;
  *(undefined8 *)(puVar11 + 0x138) = 0;
  *(undefined8 *)(puVar11 + 0x130) = 0;
  *(undefined8 *)(puVar11 + 0x148) = 0;
  *(undefined8 *)(puVar11 + 0x140) = 0;
  *(undefined8 *)(puVar11 + 0x118) = 0;
  *(undefined8 *)(puVar11 + 0x110) = 0;
  *(undefined8 *)(puVar11 + 0x128) = 0;
  *(undefined8 *)(puVar11 + 0x120) = 0;
  *(undefined8 *)(puVar11 + 0x108) = 0;
  *(undefined8 *)(puVar11 + 0x100) = 0;
  *(undefined8 *)(puVar11 + 0xf8) = 0;
  *(undefined8 *)(puVar11 + 0xf0) = 0;
  *(undefined8 *)(puVar11 + 0x171) = 0;
  *(undefined8 *)(puVar11 + 0x169) = 0;
  *(undefined8 *)(puVar11 + 0x188) = 0;
  *(undefined8 *)(puVar11 + 0x180) = 0;
  *(undefined8 *)(puVar11 + 0x198) = 0;
  *(undefined8 *)(puVar11 + 400) = 0;
  *(undefined8 *)(puVar11 + 0x1a8) = 0;
  *(undefined8 *)(puVar11 + 0x1a0) = 0;
  *(undefined8 *)(puVar11 + 0x1b8) = 0;
  *(undefined8 *)(puVar11 + 0x1b0) = 0;
  *(undefined8 *)(puVar11 + 0x1c8) = 0;
  *(undefined8 *)(puVar11 + 0x1c0) = 0;
  *(undefined8 *)(puVar11 + 0x1d8) = 0;
  *(undefined8 *)(puVar11 + 0x1d0) = 0;
  *(undefined8 *)(puVar11 + 0x1e8) = 0;
  *(undefined8 *)(puVar11 + 0x1e0) = 0;
  *(undefined8 *)(puVar11 + 0x1f8) = 0;
  *(undefined8 *)(puVar11 + 0x1f0) = 0;
  *(undefined8 *)(puVar11 + 0x200) = 0;
  *(undefined ***)(puVar11 + 0xd0) = &PTR_DAT_11058e630;
  func_0x000107c61604(puVar11 + 200,lVar6);
  func_0x000107c61634(puVar11 + 0x70,plVar25);
  FUN_102a6bbd4(unaff_x20 + 0x60,puVar11 + 0x10);
  FUN_102a6bbd4(unaff_x20 + 0x88,puVar11 + 0x38);
  *(undefined8 *)(puVar11 + 0xc0) = uVar29;
  *(undefined8 *)(puVar11 + 0xb8) = uVar28;
  func_0x000107c61604(puVar11 + 0x78,lVar20);
  *(undefined8 *)(puVar11 + 0x60) = uVar21;
  *(undefined ***)(puVar11 + 0x68) = &PTR_DAT_110590f28;
  *(undefined8 *)(puVar11 + 0x80) = uVar26;
  FUN_102a6bbd4(&puStack_c8,puVar11 + 0x88);
  func_0x000107c61604(puVar11 + 0xd8,lVar23);
  *(undefined8 *)(puVar11 + 0xe8) = uVar18;
  func_0x000107c61604(puVar11 + 0xe0,lVar9);
  *(long *)(puVar11 + 0xb0) = lVar27;
  pcVar22 = *(code **)(*plVar25 + 0xf8);
  func_0x000107c615f0(uVar16);
  lVar12 = lVar27;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar28);
  func_0x000107c61174();
  func_0x000107c61174();
  (*pcVar22)(puVar11,puVar10,&PTR_DAT_11058deb0);
  uVar3 = *(undefined8 *)(puVar11 + 0x60);
  lVar1 = *(long *)(puVar11 + 0x68);
  func_0x000107c614f0(uVar3);
  puVar8 = &UNK_11058e540;
  puVar13 = puVar8;
  func_0x000107c613fc(&UNK_11058e540,0x18,7);
  func_0x000107c61644(puVar13 + 0x10,puVar11);
  pcVar22 = *(code **)(lVar1 + 0x10);
  func_0x000107c6157c(puVar13);
  (*pcVar22)(FUN_102a6bc18,puVar13,uVar3,lVar1);
  func_0x000107c61574(puVar13);
  uVar3 = *(undefined8 *)(puVar11 + 0x60);
  lVar1 = *(long *)(puVar11 + 0x68);
  func_0x000107c614f0();
  func_0x000107c613fc(&UNK_11058e540,0x18,7);
  func_0x000107c61644(puVar8 + 0x10,puVar11);
  pcVar22 = *(code **)(lVar1 + 0x28);
  func_0x000107c6157c(puVar8);
  (*pcVar22)(0x102a6bc20,puVar8,uVar3,lVar1);
  func_0x000107c61574(puVar8);
  FUN_102a63938();
  func_0x000107c61574(lVar6);
  func_0x000107c61574(plVar25);
  func_0x000107c615e8(uVar28);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar20);
  func_0x000107c615e8(lVar23);
  func_0x000107c615e8(lVar9);
  func_0x0001000834e4(&puStack_c8);
  *(undefined ***)(puVar11 + 0xd0) = &PTR_DAT_11058e630;
  func_0x000107c61604(puVar11 + 200,lVar6);
  ppuStack_a8 = &PTR_DAT_11058dee8;
  puStack_c8 = puVar11;
  puStack_b0 = puVar10;
  func_0x000107c61428(puVar17,auStack_80,0x21,0);
  func_0x000107c6157c(puVar11);
  FUN_102a6bc28(&puStack_c8,puVar17);
  func_0x000107c614a8(auStack_80);
  func_0x000107c61428(unaff_x20 + 0x120,auStack_80,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined **)(unaff_x20 + 0x120) = puVar11;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(uVar3);
  lVar23 = _DAT_112ee6100;
  lVar20 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar20 + _DAT_112ee6100,auStack_98,0,0);
  lVar20 = lVar20 + lVar23;
  func_0x000107c61618();
  if (lVar20 != 0) {
    lVar23 = lVar20;
    func_0x000107c5d0d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    lVar20 = lVar23;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar23);
    if (lVar20 != 0) {
      func_0x000107c5a0e4(lVar20);
      func_0x000107c615e8(lVar20);
    }
  }
  if ((lVar27 == 0) || ((*(byte *)(lVar12 + _DAT_112fbe990) & 1) == 0)) {
    lVar20 = unaff_x20 + 0x20;
    func_0x000107c61618();
    if (lVar20 != 0) {
      puVar8 = &UNK_11058e568;
      func_0x000107c613fc(&UNK_11058e568,0x28,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(long *)(puVar8 + 0x18) = lVar20;
      *(long *)(puVar8 + 0x20) = lVar19;
      puVar13 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      iVar2 = (int)puVar13;
      func_0x000107c61174(lVar19);
      func_0x000107c615f0(lVar20);
      func_0x000107c6157c();
      func_0x000107c4a02c();
      if (iVar2 == 0) {
        pcVar14 = "guaranteeMainQueue(_:)";
        func_0x0001000c10c0("guaranteeMainQueue(_:)");
        func_0x000107c61180();
        puVar13 = &UNK_11058e590;
        func_0x000107c613fc(&UNK_11058e590,0x20,7);
        *(code **)(puVar13 + 0x10) = FUN_102a6bc78;
        *(undefined **)(puVar13 + 0x18) = puVar8;
        ppuStack_a8 = (undefined **)0x102a6bcfc;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_11058e5a8;
        ppuVar15 = &puStack_c8;
        puStack_a0 = puVar13;
        func_0x000107c60bc4(ppuVar15);
        puVar13 = puStack_a0;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar13);
        func_0x000107c4e524(pcVar14);
        func_0x000107c61170(lVar19);
        func_0x000107c61574(lVar6);
        func_0x000107c61574(puVar11);
        func_0x000107c615e8(lVar20);
        func_0x000107c61574(puVar8);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c615e8(pcVar14);
        return;
      }
      FUN_102a6759c();
      func_0x000107c61170(lVar19);
      func_0x000107c61574(lVar6);
      func_0x000107c61574(puVar11);
      func_0x000107c615e8(lVar20);
      goto LAB_102a674a0;
    }
  }
  func_0x000107c61170(lVar19);
  func_0x000107c61574(lVar6);
  puVar8 = puVar11;
LAB_102a674a0:
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 102a6759c; end: 102a6785b;  */

/* WARNING: Possible PIC construction at 0x000102a67698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a676e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a677c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a6780c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a677c4) */
/* WARNING: Removing unreachable block (ram,0x000102a676e8) */
/* WARNING: Removing unreachable block (ram,0x000102a6769c) */
/* WARNING: Removing unreachable block (ram,0x000102a67810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6759c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (*(long *)(*(long *)(param_1 + 0x48) + _DAT_112fbe958) != 6)) {
    func_0x000107c44dd0();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a67858);
      (*pcVar1)();
    }
    func_0x000107c3df24();
    func_0x000107c615e8(param_2);
    lVar2 = param_3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    func_0x000107c61174(lVar2);
    func_0x000107c5e308(param_3);
    func_0x000107c61180();
    func_0x000107c5e308(lVar2);
    func_0x000107c61180();
    func_0x000107c40280(param_3);
    func_0x000107c61180();
  }
  else {
    lVar2 = param_2;
    func_0x000107c42bc0(param_2,param_2,param_3,1);
    func_0x0001007f8afc();
    lVar3 = lVar2;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x000107c3ec1c(param_3);
    func_0x000107c61180();
    func_0x000107c3f2e4();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a6785c);
      (*pcVar1)();
    }
    uVar5 = 0xc034000000000000;
    if ((int)lVar2 == 0) {
      uVar5 = 0;
    }
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c40284(uVar5,param_3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a6785c; end: 102a68a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6785c(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte **ppbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  byte *pbVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long lVar19;
  long extraout_x8_02;
  long extraout_x8_03;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  long extraout_x12;
  uint uVar23;
  long unaff_x20;
  byte **ppbVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  byte **ppbVar28;
  byte **ppbVar29;
  code *pcVar30;
  long lVar31;
  byte *apbStack_360 [4];
  byte *pbStack_340;
  byte **ppbStack_338;
  undefined8 uStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  byte **ppbStack_2b0;
  ulong uStack_2a8;
  byte *pbStack_278;
  ulong uStack_270;
  byte *pbStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
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
  
  lVar3 = 0x112ee5e70;
  func_0x0001000285a8(0x112ee5e70,&UNK_10db11270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppbVar9 = (byte **)((long)&pbStack_340 - extraout_x8);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppbVar24 = (byte **)((long)ppbVar9 - extraout_x8_00);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar21 = (long)ppbVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar21 - extraout_x12;
  lVar3 = 0x112ee5cf0;
  func_0x0001000285a8(0x112ee5cf0,&UNK_10db116c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppbVar28 = (byte **)(lVar19 - extraout_x8_02);
  lVar3 = 0;
  FUN_102aabc7c();
  lVar25 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  ppbVar29 = (byte **)((long)ppbVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar31 = *(long *)(unaff_x20 + 0x110);
  if (lVar31 == 0) {
    return;
  }
  lVar4 = unaff_x20 + 0x30;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  lVar27 = *(long *)(unaff_x20 + 0x38);
  lVar5 = lVar4;
  lStack_2b8 = lVar2;
  ppbStack_2b0 = ppbVar29;
  uStack_2a8 = param_1;
  func_0x000107c614f0();
  pcVar30 = *(code **)(lVar27 + 8);
  func_0x000107c61174();
  (*pcVar30)();
  func_0x000107c615e8(lVar4);
  if (lVar27 == 0) {
LAB_102a67a70:
    func_0x000107c61170(lVar31);
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x120,auStack_108,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x120);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x108) == 0)) ||
     (uVar16 = *(ulong *)(lVar2 + 0x120), 0xe < uVar16 >> 0x3c)) {
    func_0x000107c6142c(lVar27);
    goto LAB_102a67a70;
  }
  uStack_2c8 = *(undefined8 *)(lVar2 + 0x118);
  lStack_2e8 = lVar5;
  lStack_2e0 = lVar27;
  uStack_2c0 = uVar16;
  func_0x00010006c00c();
  lStack_2d0 = lVar31;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar31 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar16);
  }
  lVar2 = *(long *)(unaff_x20 + 0x120);
  lStack_2d8 = lVar31;
  if (((lVar2 == 0) || (lVar31 = *(long *)(lVar2 + 0x188), lVar31 == 0)) ||
     (*(long *)(lVar2 + 0x108) == 0)) {
    (**(code **)(lVar25 + 0x38))(ppbVar28,1,1,lVar3);
LAB_102a67be8:
    uVar26 = 0x112ee5cf0;
    puVar15 = &UNK_10db116c0;
    ppbVar9 = ppbVar28;
    lVar2 = lStack_2d0;
LAB_102a67c00:
    FUN_102a6b960(ppbVar9,uVar26,puVar15);
  }
  else {
    lStack_2f0 = *(long *)(lVar2 + 0x180);
    uStack_138 = *(undefined8 *)(lVar2 + 0x148);
    uStack_140 = *(undefined8 *)(lVar2 + 0x140);
    uStack_128 = *(undefined8 *)(lVar2 + 0x158);
    uStack_130 = *(undefined8 *)(lVar2 + 0x150);
    uStack_118 = *(undefined8 *)(lVar2 + 0x168);
    uStack_120 = *(undefined8 *)(lVar2 + 0x160);
    uStack_110 = *(undefined8 *)(lVar2 + 0x170);
    uStack_178 = *(undefined8 *)(lVar2 + 0x108);
    uStack_180 = *(undefined8 *)(lVar2 + 0x100);
    uStack_168 = *(undefined8 *)(lVar2 + 0x118);
    uStack_170 = *(undefined8 *)(lVar2 + 0x110);
    uStack_158 = *(undefined8 *)(lVar2 + 0x128);
    uStack_160 = *(undefined8 *)(lVar2 + 0x120);
    uStack_148 = *(undefined8 *)(lVar2 + 0x138);
    uStack_150 = *(undefined8 *)(lVar2 + 0x130);
    uStack_f0 = uStack_180;
    uStack_e8 = uStack_178;
    uStack_e0 = uStack_170;
    uStack_d8 = uStack_168;
    uStack_d0 = uStack_160;
    uStack_c8 = uStack_158;
    uStack_c0 = uStack_150;
    uStack_b8 = uStack_148;
    uStack_b0 = uStack_140;
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_128;
    uStack_90 = uStack_120;
    uStack_88 = uStack_118;
    uStack_80 = uStack_110;
    func_0x000107c6157c(lVar2);
    func_0x000107c61434(lVar31);
    FUN_102a6b810(&uStack_180,&pbStack_200,0x112ee5e20,&UNK_10db11210);
    FUN_102a5c5c0(ppbVar28,lStack_2f0,lVar31);
    func_0x000107c61574(lVar2);
    FUN_102a6b960(&uStack_180,0x112ee5e20,&UNK_10db11210);
    func_0x000107c6142c(lVar31);
    ppbVar6 = ppbVar28;
    (**(code **)(lVar25 + 0x30))(ppbVar28,1,lVar3);
    ppbVar10 = ppbStack_2b0;
    if ((int)ppbVar6 == 1) goto LAB_102a67be8;
    func_0x000102a6b858(ppbVar28,ppbStack_2b0,FUN_102aabc7c);
    func_0x000107c61428(unaff_x20 + 0x120,&pbStack_278,0x20,0);
    lVar2 = lStack_2d0;
    lVar31 = *(long *)(unaff_x20 + 0x120);
    if (lVar31 != 0) {
      func_0x000107c614a8(&pbStack_278);
      pbStack_1f8 = *(byte **)(lVar31 + 0x198);
      pbStack_200 = *(byte **)(lVar31 + 400);
      uStack_1a8 = *(undefined8 *)(lVar31 + 0x1e8);
      uStack_1b0 = *(undefined8 *)(lVar31 + 0x1e0);
      uStack_198 = *(undefined8 *)(lVar31 + 0x1f8);
      uStack_1a0 = *(undefined8 *)(lVar31 + 0x1f0);
      uVar26 = *(undefined8 *)(lVar31 + 0x1b0);
      uStack_1e8 = *(undefined8 *)(lVar31 + 0x1a8);
      uStack_1f0 = *(undefined8 *)(lVar31 + 0x1a0);
      lStack_1d8 = *(long *)(lVar31 + 0x1b8);
      uStack_1e0 = uVar26;
      uStack_190 = *(undefined8 *)(lVar31 + 0x200);
      uStack_1c8 = *(undefined8 *)(lVar31 + 0x1c8);
      uStack_1d0 = *(undefined8 *)(lVar31 + 0x1c0);
      uStack_1b8 = *(undefined8 *)(lVar31 + 0x1d8);
      uStack_1c0 = *(undefined8 *)(lVar31 + 0x1d0);
      if (pbStack_1f8 == (byte *)0x0) {
LAB_102a680c0:
        ppbVar9 = ppbStack_2b0;
        func_0x000102a6b7d0(ppbStack_2b0,FUN_102aabc7c);
        goto LAB_102a67c04;
      }
      pbVar11 = *ppbStack_2b0;
      pbVar13 = ppbStack_2b0[1];
      pbVar17 = (byte *)((ulong)pbVar11 & 0xffffffffffff);
      pbVar20 = (byte *)((ulong)pbVar13 >> 0x38 & 0xf);
      pbVar22 = pbVar17;
      if (((ulong)pbVar13 & 0x2000000000000000) != 0) {
        pbVar22 = pbVar20;
      }
      if (pbVar22 == (byte *)0x0) goto LAB_102a680c0;
      pbStack_2f8 = pbStack_1f8;
      lStack_2f0 = *(long *)(lVar31 + 0x1b8);
      pbStack_300 = *(byte **)(lVar31 + 400);
      if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
        if (((ulong)pbVar13 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
            pbVar22 = pbVar11;
            pbVar17 = pbVar13;
            func_0x000107c60358();
          }
          else {
            pbVar22 = (byte *)(((ulong)pbVar13 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar22 == 0x2b) {
            if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x102a6851c);
              (*pcVar30)();
            }
            pbVar17 = pbVar17 + -1;
            if (pbVar17 == (byte *)0x0) goto LAB_102a68074;
            pbStack_308 = (byte *)0x0;
            do {
              pbVar22 = pbVar22 + 1;
              if (((9 < *pbVar22 - 0x30) ||
                  (lVar31 = (long)pbStack_308 * 10,
                  SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                 (uVar16 = (ulong)(byte)(*pbVar22 - 0x30), pbStack_308 = (byte *)(lVar31 + uVar16),
                 SCARRY8(lVar31,uVar16))) goto LAB_102a68074;
              uVar23 = 0;
              pbVar17 = pbVar17 + -1;
            } while (pbVar17 != (byte *)0x0);
          }
          else if (*pbVar22 == 0x2d) {
            if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x102a68514);
              (*pcVar30)();
            }
            pbVar17 = pbVar17 + -1;
            if (pbVar17 == (byte *)0x0) {
LAB_102a68074:
              pbStack_308 = (byte *)0x0;
              uVar23 = 1;
            }
            else {
              pbStack_308 = (byte *)0x0;
              do {
                pbVar22 = pbVar22 + 1;
                if (((9 < *pbVar22 - 0x30) ||
                    (lVar31 = (long)pbStack_308 * 10,
                    SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)(*pbVar22 - 0x30), pbStack_308 = (byte *)(lVar31 - uVar16)
                   , SBORROW8(lVar31,uVar16))) goto LAB_102a68074;
                uVar23 = 0;
                pbVar17 = pbVar17 + -1;
              } while (pbVar17 != (byte *)0x0);
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) goto LAB_102a68074;
            pbStack_308 = (byte *)0x0;
            if (pbVar22 == (byte *)0x0) {
              uVar23 = 0;
            }
            else {
              do {
                if (((9 < *pbVar22 - 0x30) ||
                    (lVar31 = (long)pbStack_308 * 10,
                    SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                   (uVar16 = (ulong)(byte)(*pbVar22 - 0x30), pbStack_308 = (byte *)(lVar31 + uVar16)
                   , SCARRY8(lVar31,uVar16))) goto LAB_102a68074;
                uVar23 = 0;
                pbVar17 = pbVar17 + -1;
                pbVar22 = pbVar22 + 1;
              } while (pbVar17 != (byte *)0x0);
            }
          }
        }
        else {
          pbStack_278 = pbVar11;
          uStack_270 = (ulong)pbVar13 & 0xffffffffffffff;
          uVar23 = (uint)pbVar11 & 0xff;
          if (uVar23 == 0x2b) {
            if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x102a68520);
              (*pcVar30)();
            }
            pbVar20 = pbVar20 + -1;
            if (pbVar20 == (byte *)0x0) goto LAB_102a68074;
            pbStack_308 = (byte *)0x0;
            pbVar22 = (byte *)((ulong)&pbStack_278 | 1);
            do {
              if (((9 < *pbVar22 - 0x30) ||
                  (lVar31 = (long)pbStack_308 * 10,
                  SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                 (uVar16 = (ulong)(byte)(*pbVar22 - 0x30), pbStack_308 = (byte *)(lVar31 + uVar16),
                 SCARRY8(lVar31,uVar16))) goto LAB_102a68074;
              uVar23 = 0;
              pbVar20 = pbVar20 + -1;
              pbVar22 = pbVar22 + 1;
            } while (pbVar20 != (byte *)0x0);
          }
          else if (uVar23 == 0x2d) {
            if (pbVar20 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x102a68518);
              (*pcVar30)();
            }
            pbVar20 = pbVar20 + -1;
            if (pbVar20 == (byte *)0x0) goto LAB_102a68074;
            pbStack_308 = (byte *)0x0;
            pbVar22 = (byte *)((ulong)&pbStack_278 | 1);
            do {
              if (((9 < *pbVar22 - 0x30) ||
                  (lVar31 = (long)pbStack_308 * 10,
                  SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                 (uVar16 = (ulong)(byte)(*pbVar22 - 0x30), pbStack_308 = (byte *)(lVar31 - uVar16),
                 SBORROW8(lVar31,uVar16))) goto LAB_102a68074;
              uVar23 = 0;
              pbVar20 = pbVar20 + -1;
              pbVar22 = pbVar22 + 1;
            } while (pbVar20 != (byte *)0x0);
          }
          else {
            if (pbVar20 == (byte *)0x0) goto LAB_102a68074;
            pbStack_308 = (byte *)0x0;
            ppbVar28 = &pbStack_278;
            do {
              if (((9 < *(byte *)ppbVar28 - 0x30) ||
                  (lVar31 = (long)pbStack_308 * 10,
                  SUB168(SEXT816((long)pbStack_308) * SEXT816(10),8) != lVar31 >> 0x3f)) ||
                 (uVar16 = (ulong)(byte)(*(byte *)ppbVar28 - 0x30),
                 pbStack_308 = (byte *)(lVar31 + uVar16), SCARRY8(lVar31,uVar16)))
              goto LAB_102a68074;
              uVar23 = 0;
              pbVar20 = pbVar20 + -1;
              ppbVar28 = (byte **)((long)ppbVar28 + 1);
            } while (pbVar20 != (byte *)0x0);
          }
        }
        FUN_102a6b810(&pbStack_200,&pbStack_278,0x112ee5e50,&UNK_10db11240);
      }
      else {
        FUN_102a6b810(&pbStack_200,&pbStack_278,0x112ee5e50,&UNK_10db11240);
        func_0x000107c61434(pbVar13);
        pbVar22 = pbVar11;
        pbVar17 = pbVar13;
        FUN_102a6ad30(pbVar11,pbVar13,10,&UNK_100edbb6c);
        uVar23 = (uint)pbVar17;
        pbStack_308 = pbVar22;
        func_0x000107c6142c(pbVar13);
      }
      ppbVar28 = ppbStack_2b0;
      if ((uVar23 & 0xff) == 1) {
        FUN_102a6b960(&pbStack_200,0x112ee5e50,&UNK_10db11240);
        goto LAB_102a680c0;
      }
      pbVar22 = ppbStack_2b0[3];
      uStack_318 = uVar26;
      pbStack_310 = pbVar13;
      if (pbVar22 == (byte *)0x0) {
        func_0x000102a6b7d0(ppbStack_2b0,FUN_102aabc7c);
        uVar26 = 0x112ee5e50;
        puVar15 = &UNK_10db11240;
        ppbVar9 = &pbStack_200;
      }
      else {
        pbStack_328 = ppbStack_2b0[2];
        pbStack_320 = pbVar11;
        FUN_102a6b810((long)ppbStack_2b0 + (long)*(int *)(lVar3 + 0x28),ppbVar24,0x112d36580,
                      &UNK_10d9016d0);
        lVar31 = lStack_2b8;
        ppbVar10 = ppbVar24;
        (**(code **)(lVar18 + 0x30))(ppbVar24,1,lStack_2b8);
        if ((int)ppbVar10 == 1) {
          func_0x000102a6b7d0(ppbVar28,FUN_102aabc7c);
          FUN_102a6b960(&pbStack_200,0x112ee5e50,&UNK_10db11240);
          uVar26 = 0x112d36580;
          puVar15 = &UNK_10d9016d0;
          ppbVar9 = ppbVar24;
        }
        else {
          (**(code **)(lVar18 + 0x20))(lVar19,ppbVar24,lVar31);
          FUN_102a6b810((long)ppbVar28 + (long)*(int *)(lVar3 + 0x2c),ppbVar9,0x112ee5e70,
                        &UNK_10db11270);
          lVar25 = 0;
          FUN_102aabe08();
          ppbVar24 = ppbVar9;
          (**(code **)(*(long *)(lVar25 + -8) + 0x30))(ppbVar9,1,lVar25);
          if ((int)ppbVar24 != 1) {
            pbVar11 = pbVar22;
            func_0x000107c61434();
            FUN_102aabc90();
            func_0x000102a6b7d0(ppbVar9,FUN_102aabe08);
            ppbVar9 = ppbVar28;
            FUN_102a6af2c();
            puVar1 = (undefined8 *)((long)ppbVar28 + (long)*(int *)(lVar3 + 0x34));
            uVar26 = *puVar1;
            lVar3 = puVar1[1];
            ppbStack_338 = ppbVar9;
            (**(code **)(lVar18 + 0x10))(lVar21,lVar19,lVar31);
            if (lVar3 == 0) {
              func_0x000107c61174(pbVar11);
              uStack_330 = 0;
            }
            else {
              func_0x000107c61174(pbVar11);
              func_0x000107c5fadc(uVar26,lVar3);
              uStack_330 = uVar26;
            }
            pbVar17 = pbStack_310;
            pbVar13 = pbStack_320;
            pbVar20 = pbStack_300;
            func_0x000107c5fadc(pbStack_300,pbStack_2f8);
            pbVar12 = pbStack_328;
            pbStack_2f8 = pbVar20;
            func_0x000107c5fadc(pbStack_328,pbVar22);
            pbStack_300 = pbVar12;
            func_0x000107c6142c();
            func_0x000107c5ed90();
            pbStack_310 = pbVar22;
            if (lStack_2f0 == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = uStack_318;
              func_0x000107c5fadc();
            }
            func_0x000107c5fadc(pbVar13,pbVar17);
            ppbVar9 = ppbStack_338;
            if (ppbStack_338 == (byte **)0x0) {
              ppbVar24 = (byte **)0x0;
            }
            else {
              uVar7 = 0;
              FUN_102a6bc84(0,0x112d4da58,&PTR_PTR_1126dc2a0);
              uVar14 = uVar7;
              func_0x000100f49e70();
              ppbVar24 = ppbVar9;
              func_0x000107c5fe08(ppbVar9,uVar7,uVar14);
              func_0x000107c6142c(ppbVar9);
            }
            puVar15 = PTR_PTR_1126df358;
            func_0x000107c610f8();
            ppbVar29[-2] = (byte *)0x0;
            ppbVar29[-1] = (byte *)ppbVar24;
            ppbVar29[-4] = (byte *)uVar26;
            ppbVar29[-3] = pbVar13;
            pbVar20 = pbStack_2f8;
            pbVar17 = pbStack_300;
            pbVar22 = pbStack_310;
            uVar14 = uStack_330;
            func_0x000107c48124();
            func_0x000107c61170(pbVar11);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(pbVar20);
            func_0x000107c61170(pbVar17);
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(uVar26);
            func_0x000107c61170(pbVar13);
            func_0x000107c61170(ppbVar24);
            FUN_102a6b960(&pbStack_200,0x112ee5e50,&UNK_10db11240);
            lVar3 = lStack_2b8;
            pcVar30 = *(code **)(lVar18 + 8);
            (*pcVar30)(lVar21,lStack_2b8);
            FUN_102a61ecc();
            func_0x000107c613fc();
            *(undefined8 *)(lVar21 + 0x18) = 3;
            *(undefined8 *)(lVar21 + 0x10) = 1;
            func_0x000107c61170(pbVar11);
            (*pcVar30)(lVar19,lVar3);
            ppbVar9 = ppbStack_2b0;
            func_0x000102a6b7d0(ppbStack_2b0,FUN_102aabc7c);
            *(undefined **)(lVar21 + 0x20) = puVar15;
            lVar2 = lStack_2d0;
            goto LAB_102a67c08;
          }
          FUN_102a6b960(&pbStack_200,0x112ee5e50,&UNK_10db11240);
          (**(code **)(lVar18 + 8))(lVar19,lVar31);
          func_0x000102a6b7d0(ppbVar28,FUN_102aabc7c);
          uVar26 = 0x112ee5e70;
          puVar15 = &UNK_10db11270;
        }
      }
      goto LAB_102a67c00;
    }
    func_0x000102a6b7d0(ppbVar10,FUN_102aabc7c);
    ppbVar9 = &pbStack_278;
    func_0x000107c614a8();
  }
LAB_102a67c04:
  lVar21 = 0;
LAB_102a67c08:
  uVar16 = uStack_2a8;
  (**(code **)(**(long **)(unaff_x20 + 0x108) + 0x70))();
  if (ppbVar9 == (byte **)0x0) {
    uVar26 = 0;
    lVar3 = 0;
  }
  else {
    uVar26 = *(undefined8 *)((long)ppbVar9 + _DAT_113804e90);
    lVar3 = ((undefined8 *)((long)ppbVar9 + _DAT_113804e90))[1];
    func_0x000107c61434(lVar3);
    func_0x000107c61574(ppbVar9);
  }
  func_0x000107c4a4d8(lVar2);
  lVar31 = lStack_2e0;
  lVar18 = lStack_2e8;
  func_0x000107c5fadc(lStack_2e8,lStack_2e0);
  func_0x000107c6142c(lVar31);
  if (lVar3 == 0) {
    uVar26 = 0;
  }
  else {
    func_0x000107c5fadc(uVar26,lVar3);
    func_0x000107c6142c(lVar3);
  }
  uVar14 = uStack_2c8;
  func_0x000107c5ee20(uStack_2c8,uStack_2c0);
  uVar7 = 0x302e32;
  func_0x000107c5fadc(0x302e32,0xe300000000000000);
  if (lVar21 == 0) {
    lVar3 = 0;
  }
  else {
    uVar8 = 0;
    FUN_102a6bc84(0,0x112d73c80,&PTR_PTR_1126df358);
    lVar3 = lVar21;
    func_0x000107c5fc48(lVar21,uVar8);
    func_0x000107c6142c(lVar21);
  }
  func_0x000107c610f8(PTR_PTR_1126df368);
  ppbVar29[-2] = (byte *)lVar3;
  ppbVar29[-1] = (byte *)(uVar16 & 0xff);
  lVar31 = lStack_2d8;
  func_0x000107c472f0();
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar3);
  func_0x0001000b44c0(uStack_2c8,uStack_2c0);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102a68a34; end: 102a68acf;  */

/* WARNING: Possible PIC construction at 0x000102a68ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a68ab4) */

void FUN_102a68a34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  uVar2 = 0x800000010f0e5ab0;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0e5ab0);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c4eb88(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102a68ad0; end: 102a68c47;  */

void FUN_102a68ad0(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      pcVar2 = "postWebviewNotification(url:)";
      func_0x0001000c10c0("postWebviewNotification(url:)");
      func_0x000107c61180();
      (**(code **)(lVar8 + 0x10))(auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_3,lVar1);
      uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
      uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
      puVar3 = &UNK_11058e450;
      func_0x000107c613fc(&UNK_11058e450,uVar7 + lVar6,uVar5 | 7);
      (**(code **)(lVar8 + 0x20))
                (puVar3 + uVar7,auStack_a0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),lVar1);
      uStack_78 = 0x102a6bd04;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11058e468;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_70);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 102a68c48; end: 102a69e17;  */

/* WARNING: Possible PIC construction at 0x000102a68fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a68fb4) */
/* WARNING: Removing unreachable block (ram,0x000102a68fc0) */
/* WARNING: Removing unreachable block (ram,0x000102a68ff0) */
/* WARNING: Removing unreachable block (ram,0x000102a6902c) */
/* WARNING: Removing unreachable block (ram,0x000102a6907c) */
/* WARNING: Removing unreachable block (ram,0x000102a691ec) */
/* WARNING: Removing unreachable block (ram,0x000102a69090) */
/* WARNING: Removing unreachable block (ram,0x000102a69158) */

void FUN_102a68c48(byte *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte **ppbVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbStack_78;
  ulong uStack_70;
  
  lVar11 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar11 = 0x112ee6128;
  pbVar12 = &UNK_10db114e0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  FUN_102a9ded4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  func_0x000107c4f31c();
  func_0x000107c61180();
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x102a691ec);
    (*pcVar10)();
  }
  pbVar15 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  pbVar13 = (byte *)((ulong)pbVar15 & 0xffffffffffff);
  pbVar14 = (byte *)((ulong)pbVar12 >> 0x38 & 0xf);
  pbVar3 = pbVar13;
  if (((ulong)pbVar12 & 0x2000000000000000) != 0) {
    pbVar3 = pbVar14;
  }
  if (pbVar3 != (byte *)0x0) {
    if (((ulong)pbVar12 >> 0x3c & 1) == 0) {
      if (((ulong)pbVar12 >> 0x3d & 1) == 0) {
        if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
          pbVar13 = pbVar12;
          func_0x000107c60358();
        }
        else {
          pbVar15 = (byte *)(((ulong)pbVar12 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar15 == 0x2b) {
          if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x102a691e4);
            (*pcVar10)();
          }
          pbVar13 = pbVar13 + -1;
          if (pbVar13 != (byte *)0x0) {
            uVar18 = 0;
            do {
              pbVar15 = pbVar15 + 1;
              if (((9 < *pbVar15 - 0x30) ||
                  (auVar6._8_8_ = 0, auVar6._0_8_ = uVar18, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                 (uVar17 = uVar18 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
                 uVar18 = uVar17 + uVar1, CARRY8(uVar17,uVar1))) break;
              pbVar13 = pbVar13 + -1;
            } while (pbVar13 != (byte *)0x0);
          }
        }
        else if (*pbVar15 == 0x2d) {
          if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x102a691dc);
            (*pcVar10)();
          }
          pbVar13 = pbVar13 + -1;
          if (pbVar13 != (byte *)0x0) {
            uVar18 = 0;
            while( true ) {
              pbVar15 = pbVar15 + 1;
              if ((9 < *pbVar15 - 0x30) ||
                 (auVar4._8_8_ = 0, auVar4._0_8_ = uVar18, SUB168(auVar4 * ZEXT816(10),8) != 0))
              break;
              uVar17 = uVar18 * 10;
              uVar1 = (ulong)(byte)(*pbVar15 - 0x30);
              uVar18 = uVar17 - uVar1;
              if ((uVar17 < uVar1) || (pbVar13 = pbVar13 + -1, pbVar13 == (byte *)0x0)) break;
            }
          }
        }
        else if (pbVar13 != (byte *)0x0) {
          uVar18 = 0;
          pbVar3 = pbVar15;
          while (pbVar3 != (byte *)0x0) {
            if (((9 < *pbVar15 - 0x30) ||
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar18, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
               (uVar17 = uVar18 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
               uVar18 = uVar17 + uVar1, CARRY8(uVar17,uVar1))) break;
            pbVar13 = pbVar13 + -1;
            pbVar15 = pbVar15 + 1;
            pbVar3 = pbVar13;
          }
        }
      }
      else {
        pbStack_78 = pbVar15;
        uStack_70 = (ulong)pbVar12 & 0xffffffffffffff;
        uVar2 = (uint)pbVar15 & 0xff;
        if (uVar2 == 0x2b) {
          if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x102a691e8);
            (*pcVar10)();
          }
          pbVar14 = pbVar14 + -1;
          if (pbVar14 != (byte *)0x0) {
            uVar18 = 0;
            pbVar15 = (byte *)((ulong)&pbStack_78 | 1);
            do {
              if (((9 < *pbVar15 - 0x30) ||
                  (auVar7._8_8_ = 0, auVar7._0_8_ = uVar18, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
                 (uVar17 = uVar18 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
                 uVar18 = uVar17 + uVar1, CARRY8(uVar17,uVar1))) break;
              pbVar14 = pbVar14 + -1;
              pbVar15 = pbVar15 + 1;
            } while (pbVar14 != (byte *)0x0);
          }
        }
        else if (uVar2 == 0x2d) {
          if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x102a691e0);
            (*pcVar10)();
          }
          pbVar14 = pbVar14 + -1;
          if (pbVar14 != (byte *)0x0) {
            uVar18 = 0;
            pbVar15 = (byte *)((ulong)&pbStack_78 | 1);
            while( true ) {
              if ((9 < *pbVar15 - 0x30) ||
                 (auVar5._8_8_ = 0, auVar5._0_8_ = uVar18, SUB168(auVar5 * ZEXT816(10),8) != 0))
              break;
              uVar17 = uVar18 * 10;
              uVar1 = (ulong)(byte)(*pbVar15 - 0x30);
              uVar18 = uVar17 - uVar1;
              if ((uVar17 < uVar1) ||
                 (pbVar14 = pbVar14 + -1, pbVar15 = pbVar15 + 1, pbVar14 == (byte *)0x0)) break;
            }
          }
        }
        else if (pbVar14 != (byte *)0x0) {
          uVar18 = 0;
          ppbVar16 = &pbStack_78;
          while( true ) {
            if ((9 < *(byte *)ppbVar16 - 0x30) ||
               (auVar9._8_8_ = 0, auVar9._0_8_ = uVar18, SUB168(auVar9 * ZEXT816(10),8) != 0))
            break;
            uVar17 = uVar18 * 10;
            uVar1 = (ulong)(byte)(*(byte *)ppbVar16 - 0x30);
            uVar18 = uVar17 + uVar1;
            if ((CARRY8(uVar17,uVar1)) ||
               (pbVar14 = pbVar14 + -1, ppbVar16 = (byte **)((long)ppbVar16 + 1),
               pbVar14 == (byte *)0x0)) break;
          }
        }
      }
    }
    else {
      FUN_102a6ad30(pbVar15,pbVar12,10,&UNK_100f5025c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pbVar12);
  return;
}



/* Entry: 102a69e18; end: 102a69f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a69e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  *(undefined1 *)(unaff_x20 + 0xe8) = 1;
  uVar1 = 4;
  FUN_102a6785c(4);
  lVar2 = _DAT_112ee6100;
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + _DAT_112ee6100,auStack_68,0,0);
  lVar4 = lVar4 + lVar2;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5d0d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      lVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 *)(lVar2 + 0x20) = param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_4;
      func_0x000107c61434(param_4);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar2);
      func_0x000107c4f008(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar3);
    }
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102a69f78; end: 102a6a09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a69f78(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee60f8;
  if (param_1 < 2) {
    if (param_1 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c61428(lVar2 + _DAT_112ee60f8,auStack_38,0,0);
      lVar2 = lVar2 + lVar1;
      func_0x000107c61618();
      if (lVar2 == 0) {
        return;
      }
      lVar1 = lVar2;
      func_0x000107c4b7d0();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c5ba58(lVar2);
      goto LAB_102a6a084;
    }
  }
  else if (param_1 != 2) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + _DAT_112ee60f8,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x000107c4b7d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5be04(lVar2);
LAB_102a6a084:
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 102a6a09c; end: 102a6a58f;  */

void FUN_102a6a09c(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_a0 [7];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  alStack_a0[5] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a0[5] + 0x40));
  lVar8 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_00;
  lVar5 = 0;
  FUN_102aabe08();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  plVar11 = (long *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_102a9ded4();
  lVar14 = *(long *)(lVar6 + -8);
  alStack_a0[4] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  plVar10 = (long *)((long)plVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_102a6b78c(param_1,plVar11,FUN_102aabe08);
  plVar7 = plVar11;
  func_0x000107c614c4();
  lVar6 = *plVar11;
  alStack_a0[6] = lVar4;
  alStack_a0[3] = lVar14;
  if ((int)plVar7 == 0) {
    lVar5 = 0x112ee62b8;
    func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
    iVar2 = *(int *)(lVar5 + 0x30);
    lVar5 = 0x112ee62c0;
    func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
    iVar3 = *(int *)(lVar5 + 0x30);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar5 = (long)plVar11 + (long)iVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))((long)plVar10 + (long)iVar3,lVar5,lVar4);
    lVar4 = lVar6;
    func_0x000107c4f31c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar6);
      lVar14 = 0;
      lVar5 = -0x2000000000000000;
    }
    else {
      lVar14 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
    }
    lVar4 = alStack_a0[5];
    *plVar10 = lVar14;
    plVar10[1] = lVar5;
  }
  else if ((int)plVar7 == 1) {
    lVar4 = plVar11[1];
    lVar14 = plVar11[2];
    lVar13 = lVar6;
    func_0x000107c4f31c();
    func_0x000107c61180();
    if (lVar13 == 0) {
      func_0x000107c61170(lVar6);
      lVar12 = 0;
      lVar5 = -0x2000000000000000;
    }
    else {
      lVar12 = lVar13;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar13);
    }
    *plVar10 = lVar12;
    plVar10[1] = lVar5;
    plVar10[2] = lVar4;
    plVar10[3] = lVar14;
    lVar4 = alStack_a0[5];
  }
  else {
    lVar5 = 0x112ee62a8;
    func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
    iVar2 = *(int *)(lVar5 + 0x30);
    iVar3 = *(int *)(lVar5 + 0x40);
    puVar1 = (undefined8 *)((long)plVar11 + (long)*(int *)(lVar5 + 0x60));
    alStack_a0[2] = *puVar1;
    alStack_a0[1] = puVar1[1];
    lVar5 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    func_0x0001001021cc((long)plVar11 + (long)iVar2,(long)plVar10 + (long)*(int *)(lVar5 + 0x30));
    lVar14 = (long)plVar10 + (long)*(int *)(lVar5 + 0x40);
    func_0x0001001021cc((long)plVar11 + (long)iVar3);
    lVar4 = lVar6;
    func_0x000107c4f31c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar6);
      lVar13 = 0;
      lVar14 = -0x2000000000000000;
    }
    else {
      lVar13 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
    }
    lVar4 = alStack_a0[5];
    *plVar10 = lVar13;
    plVar10[1] = lVar14;
    puVar1 = (undefined8 *)((long)plVar10 + (long)*(int *)(lVar5 + 0x50));
    iVar2 = *(int *)(lVar5 + 0x60);
    iVar3 = *(int *)(lVar5 + 0x70);
    *puVar1 = alStack_a0[2];
    puVar1[1] = alStack_a0[1];
    *(undefined1 *)((long)plVar10 + (long)iVar2) = 0;
    *(undefined1 *)((long)plVar10 + (long)iVar3) = 0;
  }
  lVar5 = alStack_a0[4];
  func_0x000107c6159c(plVar10,alStack_a0[4],plVar7);
  FUN_102a6b78c(plVar10,lVar9,FUN_102a9ded4);
  (**(code **)(alStack_a0[3] + 0x38))(lVar9,0,1,lVar5);
  func_0x000107c5eea0(lVar8);
  FUN_102a6622c(3,lVar9,lVar8);
  (**(code **)(lVar4 + 8))(lVar8,alStack_a0[6]);
  FUN_102a6b960(lVar9,0x112ee6128,&UNK_10db114e0);
  func_0x000102a6b7d0(plVar10,FUN_102a9ded4);
  return;
}



/* Entry: 102a6a590; end: 102a6a5ef;  */

undefined1  [16] FUN_102a6a590(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  (**(code **)(**(long **)(unaff_x20 + 0x108) + 0x70))();
  if (param_1 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61434(uVar2);
    func_0x000107c61574(param_1);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a6a5f0; end: 102a6a6bf;  */

void FUN_102a6a5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  func_0x000102a68520(param_1,0,param_2,param_3,puVar2);
  FUN_102a6b960(puVar2,0x112ee6128,&UNK_10db114e0);
  return;
}



/* Entry: 102a6a6c0; end: 102a6a6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a6a6c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x120,auStack_78,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x120);
  if (lVar4 != 0) {
    lVar1 = lVar4 + 200;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0x48;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + _DAT_112ee63d8);
        if (lVar5 != 0) {
          lVar6 = ((long *)(lVar2 + _DAT_112ee63d8))[1];
          lVar3 = lVar5;
          func_0x000107c614f0(lVar5);
          pcVar7 = *(code **)(lVar6 + 0x18);
          func_0x000107c6157c(lVar4);
          func_0x000107c615f0(lVar5);
          (*pcVar7)(param_1,lVar3,lVar6);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          func_0x000107c61574(lVar4);
          return;
        }
        func_0x000107c615e8();
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102a6a6c4; end: 102a6a793;  */

void FUN_102a6a6c4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  
  lVar1 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffd0 + -extraout_x8;
  (**(code **)(**(long **)(unaff_x20 + 0x108) + 0x70))();
  if (lVar1 != 0) {
    func_0x000107c61574();
    lVar1 = 0;
    FUN_102a9ded4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
    FUN_102a6622c(0,puVar2,param_1);
    FUN_102a6b960(puVar2,0x112ee6128,&UNK_10db114e0);
  }
  return;
}



/* Entry: 102a6a794; end: 102a6a7cf;  */

void FUN_102a6a794(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  FUN_102a66968();
  func_0x000107c61428(unaff_x20 + 0x120,auStack_28,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102a6a7d0; end: 102a6a7e3;  */

void FUN_102a6a7d0(void)

{
  return;
}



/* Entry: 102a6a7e4; end: 102a6a8bb;  */

undefined1  [16] FUN_102a6a7e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = unaff_x20 + 0x30;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x38);
    lVar3 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar2 + 8))();
    func_0x000107c615e8(lVar1);
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 102a6a8bc; end: 102a6a917;  */

undefined1  [16] FUN_102a6a8bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x120,auStack_38,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x120);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x180);
    uVar3 = *(undefined8 *)(lVar1 + 0x188);
    func_0x000107c61434(uVar3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 102a6a918; end: 102a6a993; -[_TtC32ShoppingLensProductPickerManager32ProductSelectionComponentManager twoDTryOnFlowDidStartWithLensId:productIds:] */

/* WARNING: Possible PIC construction at 0x000102a6a970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6a974) */

void FUN_102a6a918(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c6157c(param_1);
  FUN_102a6b3b8();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a6a994; end: 102a6aa13; -[_TtC32ShoppingLensProductPickerManager32ProductSelectionComponentManager twoDTryOnPageWillPresentWithLensId:productIds:] */

/* WARNING: Possible PIC construction at 0x000102a6a9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a6a9f4) */

void FUN_102a6a994(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c6157c(param_1);
  FUN_102a6b46c(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a6aa14; end: 102a6aa9b;  */

void FUN_102a6aa14(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + 0xf0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
    if (*(long *)(lVar1 + 0x28) == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      FUN_102a6bbd4(lVar1 + 0x10,auStack_60);
      func_0x0001000a8868(auStack_60,uStack_48);
      func_0x000102a5fbd8();
      func_0x000107c615e8(lVar1);
      func_0x0001000834e4(auStack_60);
    }
  }
  return;
}



/* Entry: 102a6aa9c; end: 102a6ab37; -[_TtC32ShoppingLensProductPickerManager32ProductSelectionComponentManager twoDTryOnPreviewWillPresent] */

void FUN_102a6aa9c(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102a6aa14();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102a6ab38; end: 102a6ab4b;  */

ulong FUN_102a6ab38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c8048;
    func_0x000107c61168(PTR_PTR_1126c8048);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c8048;
    func_0x000107c61168(PTR_PTR_1126c8048);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102a6bc84(0,0x112ee5e80,&PTR_PTR_1126c8048);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ad08);
  (*pcVar2)();
}



/* Entry: 102a6ab4c; end: 102a6ad07;  */

ulong FUN_102a6ab4c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102a6bc84(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ad08);
  (*pcVar2)();
}



/* Entry: 102a6ad08; end: 102a6ad2f;  */

ulong FUN_102a6ad08(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ac34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c8060;
    func_0x000107c61168(PTR_PTR_1126c8060);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c8060;
    func_0x000107c61168(PTR_PTR_1126c8060);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102a6bc84(0,0x112ee62c8,&PTR_PTR_1126c8060);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a6ad08);
  (*pcVar2)();
}



/* Entry: 102a6ad30; end: 102a6ae3b;  */

/* WARNING: Removing unreachable block (ram,0x000102a6ae30) */

undefined1  [16] FUN_102a6ad30(undefined8 ***param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    func_0x000100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    (*param_4)(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    (*param_4)(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 102a6ae3c; end: 102a6af2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a6ae3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = 0;
  FUN_102a649bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined1 *)(lVar2 + 0x48) = 1;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x58) = 1;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined1 *)(lVar2 + 0x90) = 1;
  lVar1 = _DAT_113804e70;
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar4)(lVar2 + lVar1,1,1,lVar3);
  (*pcVar4)(lVar2 + _DAT_113804e78,1,1,lVar3);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined1 *)(lVar2 + 0x28) = param_4;
  return lVar2;
}



/* Entry: 102a6af2c; end: 102a6b3b7;  */

long FUN_102a6af2c(ulong *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte **ppbVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbStack_a0;
  ulong uStack_98;
  
  pbVar7 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  pbVar9 = (byte *)((ulong)pbVar7 & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)pbVar3 >> 0x38 & 0xf);
  pbVar12 = pbVar9;
  if (((ulong)pbVar3 & 0x2000000000000000) != 0) {
    pbVar12 = pbVar10;
  }
  if (pbVar12 == (byte *)0x0) {
    return 0;
  }
  if (((ulong)pbVar3 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar3 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
        pbVar12 = pbVar7;
        pbVar9 = pbVar3;
        func_0x000107c60358();
      }
      else {
        pbVar12 = (byte *)(((ulong)pbVar3 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar12 == 0x2b) {
        pbVar10 = pbVar9 + -1;
        if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6b3b4);
          (*pcVar4)();
        }
        if (pbVar10 == (byte *)0x0) {
          return 0;
        }
        lVar17 = 0;
        do {
          pbVar12 = pbVar12 + 1;
          if (9 < *pbVar12 - 0x30) {
            return 0;
          }
          lVar14 = lVar17 * 10;
          if (SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f) {
            return 0;
          }
          uVar20 = (ulong)(byte)(*pbVar12 - 0x30);
          lVar17 = lVar14 + uVar20;
          if (SCARRY8(lVar14,uVar20)) {
            return 0;
          }
          pbVar10 = pbVar10 + -1;
        } while (pbVar10 != (byte *)0x0);
      }
      else if (*pbVar12 == 0x2d) {
        pbVar10 = pbVar9 + -1;
        if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6b3ac);
          (*pcVar4)();
        }
        if (pbVar10 == (byte *)0x0) {
          return 0;
        }
        lVar17 = 0;
        do {
          pbVar12 = pbVar12 + 1;
          if (9 < *pbVar12 - 0x30) {
            return 0;
          }
          lVar14 = lVar17 * 10;
          if (SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f) {
            return 0;
          }
          uVar20 = (ulong)(byte)(*pbVar12 - 0x30);
          lVar17 = lVar14 - uVar20;
          if (SBORROW8(lVar14,uVar20)) {
            return 0;
          }
          pbVar10 = pbVar10 + -1;
        } while (pbVar10 != (byte *)0x0);
      }
      else {
        if (pbVar9 == (byte *)0x0) {
          return 0;
        }
        lVar17 = 0;
        pbVar10 = pbVar12;
        while (pbVar10 != (byte *)0x0) {
          if (9 < *pbVar12 - 0x30) {
            return 0;
          }
          lVar14 = lVar17 * 10;
          if (SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f) {
            return 0;
          }
          uVar20 = (ulong)(byte)(*pbVar12 - 0x30);
          lVar17 = lVar14 + uVar20;
          if (SCARRY8(lVar14,uVar20)) {
            return 0;
          }
          pbVar9 = pbVar9 + -1;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar9;
        }
      }
      goto LAB_102a6b1a4;
    }
    pbStack_a0 = pbVar7;
    uStack_98 = (ulong)pbVar3 & 0xffffffffffffff;
    uVar18 = (uint)pbVar7 & 0xff;
    if (uVar18 == 0x2b) {
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6b3b8);
        (*pcVar4)();
      }
      pbVar10 = pbVar10 + -1;
      if (pbVar10 == (byte *)0x0) goto LAB_102a6b190;
      lVar17 = 0;
      pbVar12 = (byte *)((ulong)&pbStack_a0 | 1);
      do {
        if (((9 < *pbVar12 - 0x30) ||
            (lVar14 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
           (uVar20 = (ulong)(byte)(*pbVar12 - 0x30), lVar17 = lVar14 + uVar20,
           SCARRY8(lVar14,uVar20))) goto LAB_102a6b190;
        uVar18 = 0;
        pbVar10 = pbVar10 + -1;
        pbVar12 = pbVar12 + 1;
      } while (pbVar10 != (byte *)0x0);
    }
    else if (uVar18 == 0x2d) {
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6b3b0);
        (*pcVar4)();
      }
      pbVar10 = pbVar10 + -1;
      if (pbVar10 == (byte *)0x0) {
LAB_102a6b190:
        uVar18 = 1;
      }
      else {
        lVar17 = 0;
        pbVar12 = (byte *)((ulong)&pbStack_a0 | 1);
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar14 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
             (uVar20 = (ulong)(byte)(*pbVar12 - 0x30), lVar17 = lVar14 - uVar20,
             SBORROW8(lVar14,uVar20))) goto LAB_102a6b190;
          uVar18 = 0;
          pbVar10 = pbVar10 + -1;
          pbVar12 = pbVar12 + 1;
        } while (pbVar10 != (byte *)0x0);
      }
    }
    else {
      if (pbVar10 == (byte *)0x0) goto LAB_102a6b190;
      lVar17 = 0;
      ppbVar13 = &pbStack_a0;
      do {
        if (((9 < *(byte *)ppbVar13 - 0x30) ||
            (lVar14 = lVar17 * 10, SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
           (uVar20 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), lVar17 = lVar14 + uVar20,
           SCARRY8(lVar14,uVar20))) goto LAB_102a6b190;
        uVar18 = 0;
        pbVar10 = pbVar10 + -1;
        ppbVar13 = (byte **)((long)ppbVar13 + 1);
      } while (pbVar10 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar3);
    pbVar12 = pbVar3;
    FUN_102a6ad30(pbVar7,pbVar3,10,&UNK_100edbb6c);
    uVar18 = (uint)pbVar12;
    func_0x000107c6142c(pbVar3);
  }
  if ((uVar18 & 0xff) == 1) {
    return 0;
  }
LAB_102a6b1a4:
  lVar17 = 0;
  FUN_102aabc7c();
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar17 + 0x34));
  lVar14 = plVar1[1];
  if ((lVar14 != 0) && (uVar20 = param_1[3], uVar20 != 0)) {
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x38));
    lVar17 = puVar2[1];
    if (lVar17 != 0) {
      lVar19 = *plVar1;
      uVar16 = param_1[2];
      uVar11 = *puVar2;
      puVar5 = PTR_PTR_1126dc2a0;
      func_0x000107c61168();
      lVar6 = lVar19;
      func_0x000107c5fadc(lVar19,lVar14);
      func_0x000107c5fadc(uVar16,uVar20);
      func_0x000107c5fadc(pbVar7,pbVar3);
      puVar8 = puVar5;
      func_0x000107c4f310();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(pbVar7);
      lVar6 = lVar19;
      func_0x000107c5fadc(lVar19,lVar14);
      func_0x000107c5fadc(uVar11,lVar17);
      func_0x000107c5fadc(lVar19,lVar14);
      func_0x000107c5bed4();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar11);
      func_0x000107c61170();
      func_0x000100f4aee4();
      func_0x000107c61534();
      *(undefined8 *)(lVar19 + 0x18) = 5;
      *(undefined8 *)(lVar19 + 0x10) = 2;
      *(undefined8 *)(lVar19 + 0x20) = puVar8;
      *(undefined **)(lVar19 + 0x28) = puVar5;
      lVar17 = lVar19;
      func_0x000100f4b3dc();
      func_0x000107c61588(lVar19);
      uVar15 = *(undefined8 *)(lVar19 + 0x10);
      uVar11 = 0;
      FUN_102a6bc84(0,0x112d4da58,&PTR_PTR_1126dc2a0);
      func_0x000107c61408((undefined8 *)(lVar19 + 0x20),uVar15,uVar11);
      return lVar17;
    }
  }
  return 0;
}



/* Entry: 102a6b3b8; end: 102a6b46b;  */

void FUN_102a6b3b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar5 = unaff_x20 + 0xf0;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    uVar2 = *(undefined8 *)(lVar5 + 0x70);
    uVar6 = *(undefined8 *)(lVar5 + 0x78);
    uVar3 = *(undefined1 *)(lVar5 + 0x80);
    uVar4 = *(ushort *)(lVar5 + 0x80);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    FUN_102a633d8(uVar6,uVar3);
    FUN_102a6c0ec(uVar1,uVar2,uVar6,uVar4 | 0x10000,0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000102a633ec(uVar6,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  return;
}



/* Entry: 102a6b46c; end: 102a6b76b;  */

void FUN_102a6b46c(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_90 [5];
  long lStack_68;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_00;
  lVar7 = 0;
  FUN_102a9ded4();
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar10 = (undefined8 *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = unaff_x20 + 0xf0;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x68);
    uVar1 = *(undefined8 *)(lVar6 + 0x70);
    uVar9 = *(undefined8 *)(lVar6 + 0x78);
    uVar2 = *(undefined1 *)(lVar6 + 0x80);
    uVar3 = *(undefined2 *)(lVar6 + 0x80);
    alStack_90[1] = lVar14;
    alStack_90[2] = lVar7;
    alStack_90[3] = param_1;
    alStack_90[4] = lVar12;
    lStack_68 = lVar5;
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar1);
    FUN_102a633d8(uVar9,uVar2);
    lVar12 = alStack_90[4];
    FUN_102a6c0ec(uVar8,uVar1,uVar9,uVar3,0);
    lVar14 = alStack_90[1];
    func_0x000107c6142c(uVar1);
    lVar7 = alStack_90[2];
    func_0x000107c6142c(uVar8);
    lVar5 = lStack_68;
    param_1 = alStack_90[3];
    func_0x000102a633ec(uVar9,uVar2);
    func_0x000107c615e8(lVar6);
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *puVar10 = *(undefined8 *)(param_1 + 0x20);
    puVar10[1] = uVar8;
    func_0x000107c6159c(puVar10,lVar7,3);
    FUN_102a6b78c(puVar10,lVar12,FUN_102a9ded4);
    (**(code **)(lVar14 + 0x38))(lVar12,0,1,lVar7);
    func_0x000107c61434(uVar8);
    func_0x000107c5eea0(lVar11);
    FUN_102a6622c(4,lVar12,lVar11);
    (**(code **)(lVar13 + 8))(lVar11,lVar5);
    FUN_102a6b960(lVar12,0x112ee6128,&UNK_10db114e0);
    lVar6 = unaff_x20 + 0x28;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar14 = lVar6;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a6b76c);
        (*pcVar4)();
      }
      uVar8 = 0xd00000000000002b;
      func_0x000107c5fadc(0xd00000000000002b,0x800000010f0e5a60);
      lVar6 = lVar14;
      func_0x000107c3ebd4();
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(uVar8);
      if ((int)lVar6 != 0) {
        lVar6 = unaff_x20 + 0x30;
        func_0x000107c61618();
        if (lVar6 != 0) {
          lVar14 = *(long *)(unaff_x20 + 0x38);
          func_0x000107c614f0();
          (**(code **)(lVar14 + 0x10))();
          func_0x000107c615e8(lVar6);
        }
      }
    }
    func_0x000102a6b7d0(puVar10,FUN_102a9ded4);
  }
  return;
}



/* Entry: 102a6b76c; end: 102a6b78b;  */

void FUN_102a6b76c(void)

{
  func_0x000107c61168(&PTR_PTR_112ee6198);
  return;
}



/* Entry: 102a6b78c; end: 102a6b80b;  */

undefined8 FUN_102a6b78c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a6b80c; end: 102a6b80f;  */

/* WARNING: Possible PIC construction at 0x000102a68ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a68ab4) */

void FUN_102a6b80c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  uVar2 = 0x800000010f0e5ab0;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0e5ab0);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c4eb88(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102a6b810; end: 102a6b8db;  */

undefined8 FUN_102a6b810(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102a6b8dc; end: 102a6b933;  */

void FUN_102a6b8dc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a6b934; end: 102a6b95f;  */

/* WARNING: Possible PIC construction at 0x000102a68ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a68ab4) */

void FUN_102a6b934(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  uVar2 = 0x800000010f0e5ab0;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0e5ab0);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c4eb88(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102a6b960; end: 102a6b99f;  */

undefined8 FUN_102a6b960(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


