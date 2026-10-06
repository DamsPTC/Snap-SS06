/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cab1c8; end: 103cab267;  */

/* WARNING: Possible PIC construction at 0x000103cab214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cab224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cab218) */
/* WARNING: Removing unreachable block (ram,0x000103cab228) */

void FUN_103cab1c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff420 != -1) {
    func_0x000107c61568(0x112fff420,FUN_103caaf48);
  }
  uVar5 = uRam000000011380e898;
  uVar4 = uRam000000011380e890;
  uVar3 = uRam000000011380e888;
  uVar2 = uRam000000011380e880;
  uVar1 = uRam000000011380e878;
  *param_1 = uRam000000011380e870;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103cab268; end: 103cab27b;  */

void FUN_103cab268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130001d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130001d0,&UNK_10dc74ec8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cab27c; end: 103cab2af;  */

void FUN_103cab27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cab2b0; end: 103cab3c3;  */

void FUN_103cab2b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cab3c4; end: 103cab40b;  */

void FUN_103cab3c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75150,0x42,2);
  uRam000000011380e8a8 = uStack_38;
  uRam000000011380e8a0 = uStack_40;
  uRam000000011380e8b8 = uStack_28;
  uRam000000011380e8b0 = uStack_30;
  uRam000000011380e8c8 = uStack_18;
  uRam000000011380e8c0 = uStack_20;
  return;
}



/* Entry: 103cab40c; end: 103cab4ab;  */

/* WARNING: Possible PIC construction at 0x000103cab458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cab468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cab45c) */
/* WARNING: Removing unreachable block (ram,0x000103cab46c) */

void FUN_103cab40c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff438 != -1) {
    func_0x000107c61568(0x112fff438,FUN_103cab3c4);
  }
  uVar5 = uRam000000011380e8c8;
  uVar4 = uRam000000011380e8c0;
  uVar3 = uRam000000011380e8b8;
  uVar2 = uRam000000011380e8b0;
  uVar1 = uRam000000011380e8a8;
  *param_1 = uRam000000011380e8a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103cab4ac; end: 103cae9df;  */

ulong * FUN_103cab4ac(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  byte *pbVar18;
  ulong *puVar19;
  uint uVar20;
  ulong *puVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar33;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar34;
  ulong *unaff_x23;
  ulong *puVar35;
  ulong *puVar36;
  ulong *unaff_x25;
  ulong *puVar37;
  ulong *puVar38;
  long lVar39;
  ulong *unaff_x26;
  ulong *puVar40;
  ulong uVar41;
  ulong *unaff_x27;
  ulong *puVar42;
  ulong *unaff_x28;
  ulong *puVar43;
  byte abStack_820 [24];
  byte abStack_808 [120];
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  long lStack_690;
  ulong uStack_680;
  ulong *puStack_678;
  ulong *puStack_670;
  ulong *puStack_668;
  ulong *puStack_660;
  ulong *puStack_658;
  ulong *puStack_650;
  ulong *puStack_648;
  ulong *puStack_640;
  ulong *puStack_638;
  undefined1 ******ppppppuStack_630;
  undefined8 uStack_628;
  ulong *puStack_618;
  ulong *puStack_610;
  ulong *puStack_608;
  ulong *puStack_600;
  byte bStack_5f1;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  undefined1 uStack_5e7;
  undefined1 uStack_5e6;
  undefined1 uStack_5e5;
  undefined1 uStack_5e4;
  undefined1 uStack_5e3;
  long lStack_5d8;
  ulong *puStack_5d0;
  ulong *puStack_5c8;
  ulong *puStack_5c0;
  ulong *puStack_5b8;
  ulong *puStack_5b0;
  ulong *puStack_5a8;
  ulong *puStack_5a0;
  ulong *puStack_598;
  ulong *puStack_590;
  ulong *puStack_588;
  undefined1 *****pppppuStack_580;
  undefined8 uStack_578;
  ulong *puStack_568;
  ulong *puStack_560;
  ulong *puStack_558;
  ulong *puStack_550;
  ulong *puStack_548;
  ulong *puStack_540;
  ulong *puStack_538;
  ulong *puStack_530;
  ulong *puStack_528;
  ulong *puStack_520;
  ulong *puStack_518;
  ulong *puStack_510;
  ulong *puStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined1 uStack_4f7;
  undefined1 uStack_4f6;
  undefined1 uStack_4f5;
  undefined1 uStack_4f4;
  undefined1 uStack_4f3;
  undefined8 uStack_4e8;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  undefined1 uStack_4de;
  undefined1 uStack_4dd;
  undefined1 uStack_4dc;
  undefined1 uStack_4db;
  ulong uStack_4a0;
  ulong *puStack_498;
  ulong *puStack_490;
  ulong *puStack_488;
  ulong *puStack_480;
  ulong *puStack_478;
  ulong *puStack_470;
  ulong *puStack_468;
  ulong *puStack_460;
  ulong uStack_450;
  ulong *puStack_448;
  ulong *puStack_440;
  ulong *puStack_438;
  ulong *puStack_430;
  ulong *puStack_428;
  ulong *puStack_420;
  ulong *puStack_418;
  ulong *puStack_410;
  long lStack_400;
  ulong *puStack_3f0;
  ulong *puStack_3e8;
  ulong *puStack_3e0;
  ulong *puStack_3d8;
  ulong *puStack_3d0;
  ulong *puStack_3c8;
  ulong *puStack_3c0;
  ulong *puStack_3b8;
  ulong *puStack_3b0;
  ulong *puStack_3a8;
  undefined1 ****ppppuStack_3a0;
  undefined8 uStack_398;
  ulong *puStack_388;
  ulong *puStack_380;
  ulong *puStack_378;
  ulong *puStack_370;
  ulong *puStack_368;
  ulong *puStack_360;
  byte bStack_351;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined1 uStack_347;
  undefined1 uStack_346;
  undefined1 uStack_345;
  undefined1 uStack_344;
  undefined1 uStack_343;
  long lStack_338;
  ulong *puStack_330;
  ulong *puStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2f0;
  ulong *puStack_2e8;
  undefined1 ***pppuStack_2e0;
  undefined8 uStack_2d8;
  ulong *puStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  byte bStack_291;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined1 uStack_286;
  undefined1 uStack_285;
  undefined1 uStack_284;
  undefined1 uStack_283;
  long lStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong *puStack_228;
  undefined1 **ppuStack_220;
  undefined8 uStack_218;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  byte bStack_1e1;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  undefined1 uStack_1d4;
  undefined1 uStack_1d3;
  long lStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  byte abStack_140 [64];
  ulong uStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar36 = (ulong *)param_1[2];
  puVar38 = puVar36;
  if (puVar36 == (ulong *)param_2[2]) {
    if ((puVar36 == (ulong *)0x0) || (param_1 == param_2)) {
LAB_103cab930:
      puVar11 = (ulong *)0x1;
      goto LAB_103cab93c;
    }
    unaff_x23 = &uStack_100;
    uStack_f8 = param_1[5];
    uStack_100 = param_1[4];
    uStack_e8 = param_1[7];
    puStack_f0 = (ulong *)param_1[6];
    puStack_d8 = (ulong *)param_1[9];
    uStack_e0 = param_1[8];
    puStack_c8 = (ulong *)param_1[0xb];
    uStack_d0 = param_1[10];
    uStack_b8 = param_2[5];
    uStack_c0 = param_2[4];
    uStack_a8 = param_2[7];
    puStack_b0 = (ulong *)param_2[6];
    puStack_98 = (ulong *)param_2[9];
    uStack_a0 = param_2[8];
    puStack_88 = (ulong *)param_2[0xb];
    puStack_90 = (ulong *)param_2[10];
    if (uStack_100 == uStack_c0) {
      unaff_x21 = (ulong *)0x0;
      unaff_x27 = param_2 + 0xc;
      unaff_x28 = param_1 + 0xc;
      do {
        unaff_x23 = &uStack_100;
        unaff_x25 = (ulong *)0xc000000000000000;
        param_2 = puStack_f0;
        if ((((uStack_f8 != uStack_b8 || puStack_f0 != puStack_b0) &&
             (uVar27 = uStack_f8, func_0x000107c605b8(), (uVar27 & 1) == 0)) ||
            (uStack_e8 != uStack_a8)) ||
           ((param_2 = puStack_d8, uStack_e0 != uStack_a0 || puStack_d8 != puStack_98 &&
            (uVar27 = uStack_e0, func_0x000107c605b8(), (uVar27 & 1) == 0)))) break;
        unaff_x19 = puStack_88;
        unaff_x22 = puStack_90;
        unaff_x26 = puStack_c8;
        uVar2 = (uint)((ulong)puStack_c8 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)puStack_88 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)uStack_d0;
        if ((ulong)puStack_c8 >> 0x3e == 3) {
          uVar27 = 0;
          if (((uStack_d0 != 0) || (puStack_c8 != (ulong *)0xc000000000000000)) ||
             (((ulong)puStack_88 >> 0x3e < 3 ||
              ((uVar27 = 0, puStack_90 != (ulong *)0x0 ||
               (puStack_88 != (ulong *)0xc000000000000000)))))) goto joined_r0x000103cab784;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar27 = (ulong)puStack_c8 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)(uStack_d0 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab980);
                (*pcVar10)();
              }
              uVar27 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cab784:
            if (uVar20 >> 0x1e < 2) goto LAB_103cab620;
LAB_103cab5ec:
            if (uVar30 != 2) {
              if (uVar27 == 0) goto joined_r0x000103cab92c;
              break;
            }
            uVar31 = puStack_90[3] - puStack_90[2];
            if (SBORROW8(puStack_90[3],puStack_90[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab978);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar27 = *(long *)(uStack_d0 + 0x18) - *(long *)(uStack_d0 + 0x10);
              if (SBORROW8(*(long *)(uStack_d0 + 0x18),*(long *)(uStack_d0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab984);
                (*pcVar10)();
              }
              goto joined_r0x000103cab784;
            }
            uVar27 = 0;
            if (1 < uVar30) goto LAB_103cab5ec;
LAB_103cab620:
            if (uVar30 == 0) {
              uVar31 = (ulong)puStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puStack_90 >> 0x20);
              if (SBORROW4(iVar23,(int)puStack_90)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab97c);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - (int)puStack_90);
            }
          }
          if (uVar27 != uVar31) break;
          if (0 < (long)uVar27) {
            if (uVar22 < 2) {
              if (uVar22 != 0) {
                lVar39 = (long)iVar26;
                puVar36 = (ulong *)(((long)uStack_d0 >> 0x20) - lVar39);
                if ((long)uStack_d0 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab988);
                  puStack_160 = unaff_x21;
                  (*pcVar10)();
                }
                puStack_160 = unaff_x21;
                func_0x000103ccc6ec(&uStack_100,abStack_140);
                puVar11 = &uStack_c0;
                func_0x000103ccc6ec(puVar11,abStack_140);
                func_0x000107c5ec30();
                if (puVar11 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  lVar39 = 0;
                  param_2 = (ulong *)0x0;
                }
                else {
                  puVar42 = puVar11;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar39,(long)puVar42)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab994);
                    (*pcVar10)();
                  }
                  lVar16 = (lVar39 - (long)puVar42) + (long)puVar11;
                  func_0x000107c5ec38();
                  if ((long)puVar36 <= (long)puVar42) {
                    puVar42 = puVar36;
                  }
                  lVar39 = 0;
                  if (lVar16 != 0) {
                    lVar39 = lVar16;
                  }
                  param_2 = (ulong *)0x0;
                  if (lVar16 != 0) {
                    param_2 = (ulong *)((long)puVar42 + lVar16);
                  }
                }
                unaff_x21 = puStack_160;
                unaff_x20 = (ulong *)((ulong)unaff_x26 & 0x3fffffffffffffff);
                func_0x000100e25bdc(abStack_140,lVar39,param_2,unaff_x22,unaff_x19);
                func_0x000103ccc720(&uStack_c0);
                func_0x000103ccc720(&uStack_100);
                unaff_x23 = &uStack_100;
                unaff_x25 = (ulong *)0xc000000000000000;
                if ((abStack_140[0] & 1) != 0) goto joined_r0x000103cab92c;
                break;
              }
              uStack_158._0_1_ = (undefined1)uStack_d0;
              uStack_158._1_1_ = (undefined1)(uStack_d0 >> 8);
              uStack_158._2_1_ = (undefined1)(uStack_d0 >> 0x10);
              uStack_158._3_1_ = (undefined1)(uStack_d0 >> 0x18);
              uStack_158._4_1_ = (undefined1)(uStack_d0 >> 0x20);
              uStack_158._5_1_ = (undefined1)(uStack_d0 >> 0x28);
              uStack_158._6_1_ = (undefined1)(uStack_d0 >> 0x30);
              uStack_158._7_1_ = (undefined1)(uStack_d0 >> 0x38);
              uStack_150 = SUB81(puStack_c8,0);
              uStack_14f = (undefined1)((ulong)puStack_c8 >> 8);
              uStack_14e = (undefined1)((ulong)puStack_c8 >> 0x10);
              uStack_14d = (undefined1)((ulong)puStack_c8 >> 0x18);
              uStack_14c = (undefined1)((ulong)puStack_c8 >> 0x20);
              uStack_14b = (undefined1)((ulong)puStack_c8 >> 0x28);
              param_2 = (ulong *)((long)&uStack_158 + ((ulong)puStack_c8 >> 0x30 & 0xff));
              func_0x000103ccc6ec(&uStack_100,abStack_140);
              func_0x000103ccc6ec(&uStack_c0,abStack_140);
              unaff_x20 = param_2;
LAB_103cab83c:
              func_0x000100e25bdc(abStack_140,&uStack_158,param_2,unaff_x22,unaff_x19);
              func_0x000103ccc720(&uStack_c0);
              func_0x000103ccc720(&uStack_100);
            }
            else {
              if (uVar22 != 2) {
                uStack_150 = 0;
                uStack_14f = 0;
                uStack_14e = 0;
                uStack_14d = 0;
                uStack_14c = 0;
                uStack_14b = 0;
                uStack_158._0_1_ = 0;
                uStack_158._1_1_ = 0;
                uStack_158._2_1_ = 0;
                uStack_158._3_1_ = 0;
                uStack_158._4_1_ = 0;
                uStack_158._5_1_ = 0;
                uStack_158._6_1_ = 0;
                uStack_158._7_1_ = 0;
                func_0x000103ccc6ec(&uStack_100,abStack_140);
                func_0x000103ccc6ec(&uStack_c0,abStack_140);
                param_2 = &uStack_158;
                goto LAB_103cab83c;
              }
              lVar39 = *(long *)(uStack_d0 + 0x10);
              lVar16 = *(long *)(uStack_d0 + 0x18);
              puStack_160 = unaff_x21;
              func_0x000103ccc6ec(&uStack_100,abStack_140);
              unaff_x23 = &uStack_c0;
              func_0x000103ccc6ec(unaff_x23,abStack_140);
              func_0x000107c5ec30();
              param_2 = unaff_x23;
              if (unaff_x23 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar39,(long)param_2)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab990);
                  (*pcVar10)();
                }
                unaff_x23 = (ulong *)((lVar39 - (long)param_2) + (long)unaff_x23);
              }
              puVar36 = (ulong *)(lVar16 - lVar39);
              if (SBORROW8(lVar16,lVar39)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cab98c);
                (*pcVar10)();
              }
              unaff_x20 = (ulong *)((ulong)unaff_x26 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = puStack_160;
              if (unaff_x23 == (ulong *)0x0) {
                param_2 = (ulong *)0x0;
              }
              else {
                if ((long)puVar36 <= (long)param_2) {
                  param_2 = puVar36;
                }
                param_2 = (ulong *)((long)param_2 + (long)unaff_x23);
              }
              func_0x000100e25bdc(abStack_140,unaff_x23,param_2,unaff_x22,unaff_x19);
              func_0x000103ccc720(&uStack_c0);
              func_0x000103ccc720(&uStack_100);
            }
            unaff_x25 = (ulong *)0xc000000000000000;
            if ((abStack_140[0] & 1) == 0) break;
          }
        }
joined_r0x000103cab92c:
        unaff_x23 = &uStack_100;
        unaff_x25 = (ulong *)0xc000000000000000;
        puVar36 = (ulong *)0x0;
        if (puVar38 == (ulong *)0x1) goto LAB_103cab930;
        puVar38 = (ulong *)((long)puVar38 - 1);
        unaff_x25 = (ulong *)0xc000000000000000;
        uStack_f8 = unaff_x28[1];
        uStack_100 = *unaff_x28;
        uStack_e8 = unaff_x28[3];
        puStack_f0 = (ulong *)unaff_x28[2];
        unaff_x23 = &uStack_100;
        puStack_d8 = (ulong *)unaff_x28[5];
        uStack_e0 = unaff_x28[4];
        puStack_c8 = (ulong *)unaff_x28[7];
        uStack_d0 = unaff_x28[6];
        uStack_b8 = unaff_x27[1];
        uStack_c0 = *unaff_x27;
        uStack_a8 = unaff_x27[3];
        puStack_b0 = (ulong *)unaff_x27[2];
        puStack_98 = (ulong *)unaff_x27[5];
        uStack_a0 = unaff_x27[4];
        puStack_88 = (ulong *)unaff_x27[7];
        puStack_90 = (ulong *)unaff_x27[6];
        unaff_x27 = unaff_x27 + 8;
        unaff_x28 = unaff_x28 + 8;
      } while (uStack_100 == uStack_c0);
    }
  }
  puVar11 = (ulong *)0x0;
  puVar36 = puVar38;
LAB_103cab93c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar11;
  }
  func_0x000107c60e78();
  uStack_168 = 0x103cab998;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar43 = (ulong *)puVar11[2];
  puVar35 = unaff_x23;
  puVar38 = unaff_x25;
  puVar42 = unaff_x27;
  puVar21 = puStack_1f8;
  puStack_1c0 = unaff_x28;
  puStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = puVar36;
  puStack_198 = unaff_x23;
  puStack_190 = unaff_x22;
  puStack_188 = unaff_x21;
  puStack_180 = unaff_x20;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  if (puVar43 == (ulong *)param_2[2]) {
    if ((puVar43 != (ulong *)0x0) && (puVar11 != param_2)) {
      puStack_1f8 = (ulong *)0x0;
      puVar35 = puVar11 + 8;
      puVar38 = param_2 + 8;
      do {
        uVar27 = puVar35[-4];
        puVar11 = (ulong *)puVar35[-3];
        bVar3 = (byte)puVar35[-2];
        unaff_x20 = (ulong *)(ulong)bVar3;
        unaff_x22 = (ulong *)puVar35[-1];
        unaff_x19 = (ulong *)*puVar35;
        puStack_1f0 = (ulong *)puVar38[-3];
        bVar1 = (byte)puVar38[-2];
        unaff_x21 = (ulong *)(ulong)bVar1;
        unaff_x27 = (ulong *)puVar38[-1];
        unaff_x26 = (ulong *)*puVar38;
        if (uVar27 == puVar38[-4] && puVar11 == puStack_1f0) {
          puVar42 = unaff_x27;
          puVar21 = puStack_1f8;
          if (bVar3 != bVar1) goto LAB_103cabea0;
        }
        else {
          param_2 = puVar11;
          func_0x000107c605b8();
          puVar12 = (ulong *)0x0;
          puVar13 = unaff_x22;
          puVar21 = unaff_x26;
          puVar40 = unaff_x27;
          puVar42 = puVar11;
          if (((uVar27 & 1) == 0) ||
             (puVar13 = unaff_x19, puVar21 = unaff_x22, puVar36 = unaff_x19, puVar40 = unaff_x26,
             puVar42 = unaff_x27, ((bVar3 ^ bVar1) & 1) != 0)) goto LAB_103cabeac;
        }
        uVar2 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)unaff_x26 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)unaff_x22;
        puVar21 = puStack_1f8;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar27 = 0;
          if ((((unaff_x22 != (ulong *)0x0) || (unaff_x19 != (ulong *)0xc000000000000000)) ||
              ((ulong)unaff_x26 >> 0x3e < 3)) ||
             ((uVar27 = 0, unaff_x27 != (ulong *)0x0 || (unaff_x26 != (ulong *)0xc000000000000000)))
             ) goto joined_r0x000103cabcc0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar27 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabef0);
                (*pcVar10)();
              }
              uVar27 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cabcc0:
            if (uVar20 >> 0x1e < 2) goto LAB_103cabb10;
LAB_103cabadc:
            if (uVar30 != 2) {
              puVar42 = unaff_x27;
              if (uVar27 == 0) goto LAB_103cab9f8;
              goto LAB_103cabea0;
            }
            uVar31 = unaff_x27[3] - unaff_x27[2];
            if (SBORROW8(unaff_x27[3],unaff_x27[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabeec);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar27 = unaff_x22[3] - unaff_x22[2];
              if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabef4);
                (*pcVar10)();
              }
              goto joined_r0x000103cabcc0;
            }
            uVar27 = 0;
            if (1 < uVar30) goto LAB_103cabadc;
LAB_103cabb10:
            if (uVar30 == 0) {
              uVar31 = (ulong)unaff_x26 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)unaff_x27 >> 0x20);
              if (SBORROW4(iVar23,(int)unaff_x27)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabee8);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - (int)unaff_x27);
            }
          }
          puVar42 = unaff_x27;
          if (uVar27 != uVar31) goto LAB_103cabea0;
          if (0 < (long)uVar27) {
            param_2 = unaff_x19;
            if (uVar22 < 2) {
              if (uVar22 != 0) {
                lVar39 = (long)iVar26;
                puVar36 = (ulong *)(((long)unaff_x22 >> 0x20) - lVar39);
                if ((long)unaff_x22 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabef8);
                  puStack_200 = puVar11;
                  (*pcVar10)();
                }
                puStack_200 = puVar11;
                func_0x000107c61434(puVar11);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_1f0);
                puStack_208 = unaff_x27;
                func_0x00010006c00c(unaff_x27,unaff_x26);
                func_0x000107c5ec30();
                if (puVar42 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  lVar39 = 0;
                  lVar16 = 0;
                  puVar42 = unaff_x27;
                }
                else {
                  puVar11 = puVar42;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar39,(long)puVar11)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabf04);
                    (*pcVar10)();
                  }
                  lVar15 = (lVar39 - (long)puVar11) + (long)puVar42;
                  func_0x000107c5ec38();
                  if ((long)puVar36 <= (long)puVar11) {
                    puVar11 = puVar36;
                  }
                  lVar39 = 0;
                  if (lVar15 != 0) {
                    lVar39 = lVar15;
                  }
                  lVar16 = 0;
                  if (lVar15 != 0) {
                    lVar16 = (long)puVar11 + lVar15;
                  }
                }
                unaff_x21 = puStack_1f8;
                unaff_x20 = puStack_208;
                func_0x000100e25bdc(&uStack_1e0,lVar39,lVar16,puStack_208,unaff_x26);
                puStack_1f8 = unaff_x21;
                func_0x000107c6142c(puStack_1f0);
                func_0x00010006c090(unaff_x20,unaff_x26);
                func_0x000107c6142c(puStack_200);
                func_0x00010006c090(unaff_x22);
                unaff_x27 = puVar42;
                puVar21 = puStack_1f8;
                if (((byte)uStack_1e0 & 1) != 0) goto LAB_103cab9f8;
                goto LAB_103cabea0;
              }
              uStack_1e0._0_1_ = (byte)unaff_x22;
              uStack_1e0._1_1_ = (undefined1)((ulong)unaff_x22 >> 8);
              uStack_1e0._2_1_ = (undefined1)((ulong)unaff_x22 >> 0x10);
              uStack_1e0._3_1_ = (undefined1)((ulong)unaff_x22 >> 0x18);
              uStack_1e0._4_1_ = (undefined1)((ulong)unaff_x22 >> 0x20);
              uStack_1e0._5_1_ = (undefined1)((ulong)unaff_x22 >> 0x28);
              uStack_1e0._6_1_ = (undefined1)((ulong)unaff_x22 >> 0x30);
              uStack_1e0._7_1_ = (undefined1)((ulong)unaff_x22 >> 0x38);
              uStack_1d8 = SUB81(unaff_x19,0);
              uStack_1d7 = (undefined1)((ulong)unaff_x19 >> 8);
              uStack_1d6 = (undefined1)((ulong)unaff_x19 >> 0x10);
              uStack_1d5 = (undefined1)((ulong)unaff_x19 >> 0x18);
              uStack_1d4 = (undefined1)((ulong)unaff_x19 >> 0x20);
              uStack_1d3 = (undefined1)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_1e0 + ((ulong)unaff_x19 >> 0x30 & 0xff));
              puStack_200 = puVar11;
              func_0x000107c61434(puVar11);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              puVar36 = puStack_1f0;
              func_0x000107c61434(puStack_1f0);
              func_0x00010006c00c(unaff_x27,unaff_x26);
              unaff_x21 = puStack_1f8;
              func_0x000100e25bdc(&bStack_1e1,&uStack_1e0,unaff_x20,unaff_x27,unaff_x26);
              puStack_1f8 = unaff_x21;
              func_0x000107c6142c(puVar36);
              func_0x00010006c090(unaff_x27,unaff_x26);
              puVar11 = puStack_200;
LAB_103cabdcc:
              func_0x000107c6142c(puVar11);
              func_0x00010006c090(unaff_x22);
              puVar11 = puStack_1f8;
              puVar21 = puStack_1f8;
              bVar3 = bStack_1e1;
            }
            else {
              if (uVar22 != 2) {
                uStack_1d8 = 0;
                uStack_1d7 = 0;
                uStack_1d6 = 0;
                uStack_1d5 = 0;
                uStack_1d4 = 0;
                uStack_1d3 = 0;
                uStack_1e0._0_1_ = 0;
                uStack_1e0._1_1_ = 0;
                uStack_1e0._2_1_ = 0;
                uStack_1e0._3_1_ = 0;
                uStack_1e0._4_1_ = 0;
                uStack_1e0._5_1_ = 0;
                uStack_1e0._6_1_ = 0;
                uStack_1e0._7_1_ = 0;
                func_0x000107c61434(puVar11);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                puVar36 = puStack_1f0;
                func_0x000107c61434(puStack_1f0);
                func_0x00010006c00c(unaff_x27,unaff_x26);
                unaff_x21 = puStack_1f8;
                func_0x000100e25bdc(&bStack_1e1,&uStack_1e0,&uStack_1e0,unaff_x27,unaff_x26);
                puStack_1f8 = unaff_x21;
                func_0x000107c6142c(puVar36);
                func_0x00010006c090(unaff_x27,unaff_x26);
                unaff_x20 = puVar11;
                goto LAB_103cabdcc;
              }
              uVar27 = unaff_x22[2];
              puVar36 = (ulong *)unaff_x22[3];
              puStack_200 = puVar11;
              func_0x000107c61434(puVar11);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(puStack_1f0);
              puStack_208 = unaff_x27;
              func_0x00010006c00c(unaff_x27,unaff_x26);
              func_0x000107c5ec30();
              puVar11 = unaff_x27;
              if (unaff_x27 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(uVar27,(long)puVar11)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabf00);
                  (*pcVar10)();
                }
                unaff_x27 = (ulong *)((uVar27 - (long)puVar11) + (long)unaff_x27);
              }
              if (SBORROW8((long)puVar36,uVar27)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cabefc);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              unaff_x21 = puStack_1f8;
              unaff_x20 = puStack_208;
              if (unaff_x27 == (ulong *)0x0) {
                lVar39 = 0;
              }
              else {
                if ((long)((long)puVar36 - uVar27) <= (long)puVar11) {
                  puVar11 = (ulong *)((long)puVar36 - uVar27);
                }
                lVar39 = (long)puVar11 + (long)unaff_x27;
              }
              func_0x000100e25bdc(&uStack_1e0,unaff_x27,lVar39,puStack_208,unaff_x26);
              func_0x000107c6142c(puStack_1f0);
              func_0x00010006c090(unaff_x20,unaff_x26);
              func_0x000107c6142c(puStack_200);
              func_0x00010006c090(unaff_x22);
              puVar11 = unaff_x21;
              puVar21 = puStack_1f8;
              bVar3 = (byte)uStack_1e0;
            }
            puStack_1f8 = puVar11;
            puVar42 = unaff_x27;
            if ((bVar3 & 1) == 0) goto LAB_103cabea0;
          }
        }
LAB_103cab9f8:
        unaff_x23 = puVar35 + 5;
        unaff_x25 = puVar38 + 5;
        puVar43 = (ulong *)((long)puVar43 - 1);
        puVar35 = unaff_x23;
        puVar38 = unaff_x25;
      } while (puVar43 != (ulong *)0x0);
    }
    puVar12 = (ulong *)0x1;
    puVar13 = unaff_x19;
    puVar21 = unaff_x22;
    puVar35 = unaff_x23;
    unaff_x19 = puVar36;
    puVar38 = unaff_x25;
    puVar40 = unaff_x26;
    puVar42 = unaff_x27;
  }
  else {
LAB_103cabea0:
    puStack_1f8 = puVar21;
    puVar12 = (ulong *)0x0;
    puVar13 = unaff_x19;
    puVar21 = unaff_x22;
    unaff_x19 = puVar36;
    puVar40 = unaff_x26;
  }
LAB_103cabeac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar12;
  }
  func_0x000107c60e78();
  uStack_218 = 0x103cabf08;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar32 = (ulong *)puVar12[2];
  puVar36 = puVar42;
  puVar11 = puVar43;
  puStack_270 = puVar43;
  puStack_268 = puVar42;
  puStack_260 = puVar40;
  puStack_258 = puVar38;
  puStack_250 = unaff_x19;
  puStack_248 = puVar35;
  puStack_240 = puVar21;
  puStack_238 = unaff_x21;
  puStack_230 = unaff_x20;
  puStack_228 = puVar13;
  ppuStack_220 = &puStack_170;
  if (puVar32 == (ulong *)param_2[2]) {
    if ((puVar32 == (ulong *)0x0) || (puVar12 == param_2)) {
      puVar12 = (ulong *)0x1;
    }
    else {
      puStack_2c8 = (ulong *)0x0;
      puStack_2b0 = puVar12 + 4;
      puStack_2b8 = param_2 + 4;
      puVar38 = (ulong *)0x0;
      puStack_2c0 = puVar32;
      do {
        puVar42 = puStack_2b0 + (long)puVar38 * 4;
        puVar35 = (ulong *)*puVar42;
        puVar12 = puStack_2b8 + (long)puVar38 * 4;
        puVar40 = (ulong *)*puVar12;
        puVar36 = (ulong *)puVar35[2];
        puVar11 = puVar43;
        if (puVar36 != (ulong *)puVar40[2]) goto LAB_103cac3fc;
        uVar27 = puVar42[1];
        unaff_x20 = (ulong *)(ulong)(byte)uVar27;
        puVar43 = (ulong *)puVar42[2];
        puVar42 = (ulong *)puVar42[3];
        bVar3 = (byte)puVar12[1];
        puStack_2a0 = (ulong *)puVar12[2];
        puStack_2a8 = (ulong *)puVar12[3];
        unaff_x21 = puVar42;
        puVar13 = puVar43;
        puVar11 = (ulong *)(ulong)bVar3;
        if (puVar36 != (ulong *)0x0 && puVar35 != puVar40) {
          unaff_x19 = puVar40 + 5;
          puVar21 = puVar35 + 5;
          do {
            uVar31 = puVar21[-1];
            param_2 = (ulong *)*puVar21;
            if ((uVar31 != unaff_x19[-1] || param_2 != (ulong *)*unaff_x19) &&
               (func_0x000107c605b8(), (uVar31 & 1) == 0)) goto LAB_103cac3fc;
            unaff_x19 = unaff_x19 + 2;
            puVar21 = puVar21 + 2;
            puVar36 = (ulong *)((long)puVar36 - 1);
          } while (puVar36 != (ulong *)0x0);
        }
        puVar12 = puStack_2a8;
        if ((byte)uVar27 != bVar3) goto LAB_103cac3fc;
        uVar2 = (uint)((ulong)puVar42 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)puStack_2a8 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)puVar43;
        unaff_x20 = puStack_2a8;
        puVar36 = puVar42;
        puVar11 = puVar43;
        if ((ulong)puVar42 >> 0x3e == 3) {
          uVar27 = 0;
          if ((((puVar43 != (ulong *)0x0) || (puVar42 != (ulong *)0xc000000000000000)) ||
              ((ulong)puStack_2a8 >> 0x3e < 3)) ||
             ((uVar27 = 0, puStack_2a0 != (ulong *)0x0 ||
              (puStack_2a8 != (ulong *)0xc000000000000000)))) goto joined_r0x000103cac27c;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar27 = (ulong)puVar42 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar43 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac448);
                (*pcVar10)();
              }
              uVar27 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cac27c:
            if (uVar20 >> 0x1e < 2) goto LAB_103cac0c4;
LAB_103cac04c:
            if (uVar30 != 2) {
              if (uVar27 == 0) goto LAB_103cabf78;
              goto LAB_103cac3fc;
            }
            uVar31 = puStack_2a0[3] - puStack_2a0[2];
            if (SBORROW8(puStack_2a0[3],puStack_2a0[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac43c);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar27 = puVar43[3] - puVar43[2];
              if (SBORROW8(puVar43[3],puVar43[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac444);
                (*pcVar10)();
              }
              goto joined_r0x000103cac27c;
            }
            uVar27 = 0;
            if (1 < uVar30) goto LAB_103cac04c;
LAB_103cac0c4:
            if (uVar30 == 0) {
              uVar31 = (ulong)puStack_2a8 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puStack_2a0 >> 0x20);
              if (SBORROW4(iVar23,(int)puStack_2a0)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac440);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - (int)puStack_2a0);
            }
          }
          if (uVar27 != uVar31) goto LAB_103cac3fc;
          if (0 < (long)uVar27) {
            param_2 = puVar42;
            if (uVar22 < 2) {
              if (uVar22 != 0) {
                unaff_x19 = (ulong *)(long)iVar26;
                puVar21 = (ulong *)(((long)puVar43 >> 0x20) - (long)unaff_x19);
                if ((long)puVar43 >> 0x20 < (long)unaff_x19) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac44c);
                  (*pcVar10)();
                }
                func_0x000107c61434(puVar35);
                func_0x00010006c00c(puVar43,puVar42);
                func_0x000107c61434(puVar40);
                puVar36 = puStack_2a0;
                func_0x00010006c00c(puStack_2a0,puVar12);
                func_0x000107c5ec30();
                if (puVar36 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar13 = (ulong *)0x0;
                  lVar39 = 0;
                  puVar36 = puVar42;
                }
                else {
                  puVar12 = puVar36;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x19,(long)puVar12)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac458);
                    (*pcVar10)();
                  }
                  unaff_x19 = (ulong *)(((long)unaff_x19 - (long)puVar12) + (long)puVar36);
                  func_0x000107c5ec38();
                  if ((long)puVar21 <= (long)puVar12) {
                    puVar12 = puVar21;
                  }
                  puVar13 = (ulong *)0x0;
                  if (unaff_x19 != (ulong *)0x0) {
                    puVar13 = unaff_x19;
                  }
                  lVar39 = 0;
                  if (unaff_x19 != (ulong *)0x0) {
                    lVar39 = (long)puVar12 + (long)unaff_x19;
                  }
                }
LAB_103cac3b4:
                puVar21 = puStack_2a0;
                unaff_x20 = puStack_2a8;
                unaff_x21 = puStack_2c8;
                func_0x000100e25bdc(&uStack_290,puVar13,lVar39,puStack_2a0,puStack_2a8);
                puStack_2c8 = unaff_x21;
                func_0x000107c6142c(puVar40);
                func_0x00010006c090(puVar21,unaff_x20);
                func_0x000107c6142c(puVar35);
                func_0x00010006c090(puVar43);
                puVar13 = puVar42;
                puVar42 = puVar36;
                if (((byte)uStack_290 & 1) != 0) goto LAB_103cabf78;
                goto LAB_103cac3fc;
              }
              uStack_290._0_1_ = (byte)puVar43;
              uStack_290._1_1_ = (undefined1)((ulong)puVar43 >> 8);
              uStack_290._2_1_ = (undefined1)((ulong)puVar43 >> 0x10);
              uStack_290._3_1_ = (undefined1)((ulong)puVar43 >> 0x18);
              uStack_290._4_1_ = (undefined1)((ulong)puVar43 >> 0x20);
              uStack_290._5_1_ = (undefined1)((ulong)puVar43 >> 0x28);
              uStack_290._6_1_ = (undefined1)((ulong)puVar43 >> 0x30);
              uStack_290._7_1_ = (undefined1)((ulong)puVar43 >> 0x38);
              uStack_288 = SUB81(puVar42,0);
              uStack_287 = (undefined1)((ulong)puVar42 >> 8);
              uStack_286 = (undefined1)((ulong)puVar42 >> 0x10);
              uStack_285 = (undefined1)((ulong)puVar42 >> 0x18);
              uStack_284 = (undefined1)((ulong)puVar42 >> 0x20);
              uStack_283 = (undefined1)((ulong)puVar42 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_290 + ((ulong)puVar42 >> 0x30 & 0xff));
              func_0x000107c61434(puVar35);
              func_0x00010006c00c(puVar43,puVar42);
              func_0x000107c61434(puVar40);
              puVar32 = puStack_2a0;
              func_0x00010006c00c(puStack_2a0,puVar12);
              unaff_x21 = puStack_2c8;
              func_0x000100e25bdc(&bStack_291,&uStack_290,unaff_x20,puVar32,puVar12);
              puStack_2c8 = unaff_x21;
              func_0x000107c6142c(puVar40);
              puVar13 = puVar12;
              puVar21 = puVar32;
            }
            else {
              if (uVar22 == 2) {
                uVar27 = puVar43[2];
                unaff_x19 = (ulong *)puVar43[3];
                func_0x000107c61434(puVar35);
                func_0x00010006c00c(puVar43,puVar42);
                func_0x000107c61434(puVar40);
                puVar13 = puStack_2a0;
                func_0x00010006c00c(puStack_2a0,puVar12);
                func_0x000107c5ec30();
                puVar21 = puVar13;
                if (puVar13 != (ulong *)0x0) {
                  func_0x000107c5ec3c(puVar42);
                  if (SBORROW8(uVar27,(long)puVar21)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac454);
                    (*pcVar10)();
                  }
                  puVar13 = (ulong *)((uVar27 - (long)puVar21) + (long)puVar13);
                }
                if (SBORROW8((long)unaff_x19,uVar27)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cac450);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                if ((long)((long)unaff_x19 - uVar27) <= (long)puVar21) {
                  puVar21 = (ulong *)((long)unaff_x19 - uVar27);
                }
                lVar39 = 0;
                puVar36 = puVar13;
                if (puVar13 != (ulong *)0x0) {
                  lVar39 = (long)puVar21 + (long)puVar13;
                }
                goto LAB_103cac3b4;
              }
              uStack_288 = 0;
              uStack_287 = 0;
              uStack_286 = 0;
              uStack_285 = 0;
              uStack_284 = 0;
              uStack_283 = 0;
              uStack_290._0_1_ = 0;
              uStack_290._1_1_ = 0;
              uStack_290._2_1_ = 0;
              uStack_290._3_1_ = 0;
              uStack_290._4_1_ = 0;
              uStack_290._5_1_ = 0;
              uStack_290._6_1_ = 0;
              uStack_290._7_1_ = 0;
              func_0x000107c61434(puVar35);
              func_0x00010006c00c(puVar43,puVar42);
              func_0x000107c61434(puVar40);
              puVar32 = puStack_2a0;
              func_0x00010006c00c(puStack_2a0,puVar12);
              unaff_x21 = puStack_2c8;
              func_0x000100e25bdc(&bStack_291,&uStack_290,&uStack_290,puVar32,puVar12);
              puStack_2c8 = unaff_x21;
              func_0x000107c6142c(puVar40);
              puVar13 = puVar32;
              unaff_x20 = puVar12;
            }
            func_0x00010006c090(puVar32,puVar12);
            func_0x000107c6142c(puVar35);
            func_0x00010006c090(puVar43);
            if ((bStack_291 & 1) == 0) goto LAB_103cac3fc;
          }
        }
LAB_103cabf78:
        puVar38 = (ulong *)((long)puVar38 + 1);
        puVar12 = (ulong *)0x1;
      } while (puVar38 != puStack_2c0);
    }
  }
  else {
LAB_103cac3fc:
    puVar12 = (ulong *)0x0;
    puVar42 = puVar36;
    puVar43 = puVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar12;
  }
  func_0x000107c60e78();
  uStack_2d8 = 0x103cac45c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar36 = (ulong *)puVar12[2];
  puVar11 = unaff_x21;
  puStack_330 = puVar43;
  puStack_328 = puVar42;
  puStack_320 = puVar40;
  puStack_318 = puVar38;
  puStack_310 = unaff_x19;
  puStack_308 = puVar35;
  puStack_300 = puVar21;
  puStack_2f8 = unaff_x21;
  puStack_2f0 = unaff_x20;
  puStack_2e8 = puVar13;
  pppuStack_2e0 = &ppuStack_220;
  if (puVar36 == (ulong *)param_2[2]) {
    if ((puVar36 != (ulong *)0x0) && (puVar12 != param_2)) {
      puStack_380 = (ulong *)0x0;
      puVar42 = param_2 + 9;
      puVar43 = puVar12 + 5;
      do {
        uVar27 = puVar43[-1];
        puVar32 = (ulong *)*puVar43;
        puVar12 = (ulong *)puVar43[1];
        puVar40 = (ulong *)puVar43[2];
        puVar21 = (ulong *)puVar43[3];
        puVar13 = (ulong *)puVar43[4];
        puVar33 = (ulong *)puVar42[-4];
        puVar35 = (ulong *)puVar42[-3];
        puStack_360 = (ulong *)puVar42[-2];
        puVar38 = (ulong *)*puVar42;
        unaff_x20 = puVar12;
        if ((((uVar27 != puVar42[-5]) || (unaff_x21 = (ulong *)puVar42[-1], puVar32 != puVar33)) &&
            (param_2 = puVar32, puStack_378 = puVar43, puStack_368 = (ulong *)puVar42[-1],
            func_0x000107c605b8(), puVar11 = puStack_368, unaff_x21 = puStack_368,
            puVar43 = puStack_378, (uVar27 & 1) == 0)) ||
           (((puVar11 = unaff_x21, puStack_370 = puVar33, puVar12 != puVar35 ||
             (puVar40 != puStack_360)) &&
            (param_2 = puVar40, func_0x000107c605b8(puVar12,puVar40,puVar35,puStack_360,0),
            unaff_x20 = puVar32, ((ulong)puVar12 & 1) == 0)))) goto LAB_103cac9c8;
        uVar2 = (uint)((ulong)puVar13 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)puVar38 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)puVar21;
        if ((ulong)puVar13 >> 0x3e == 3) {
          uVar27 = 0;
          if (((puVar21 != (ulong *)0x0) || (puVar13 != (ulong *)0xc000000000000000)) ||
             (((ulong)puVar38 >> 0x3e < 3 ||
              ((uVar27 = 0, unaff_x21 != (ulong *)0x0 || (puVar38 != (ulong *)0xc000000000000000))))
             )) goto joined_r0x000103cac7f0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar27 = (ulong)puVar13 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar21 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca1c);
                (*pcVar10)();
              }
              uVar27 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cac7f0:
            if (uVar20 >> 0x1e < 2) goto LAB_103cac620;
LAB_103cac5ec:
            if (uVar30 != 2) {
              if (uVar27 == 0) goto LAB_103cac4bc;
              goto LAB_103cac9c8;
            }
            uVar31 = unaff_x21[3] - unaff_x21[2];
            if (SBORROW8(unaff_x21[3],unaff_x21[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca10);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar27 = puVar21[3] - puVar21[2];
              if (SBORROW8(puVar21[3],puVar21[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca18);
                (*pcVar10)();
              }
              goto joined_r0x000103cac7f0;
            }
            uVar27 = 0;
            if (1 < uVar30) goto LAB_103cac5ec;
LAB_103cac620:
            if (uVar30 == 0) {
              uVar31 = (ulong)puVar38 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar23,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca14);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - (int)unaff_x21);
            }
          }
          if (uVar27 != uVar31) goto LAB_103cac9c8;
          if (0 < (long)uVar27) {
            param_2 = puVar13;
            puStack_388 = puVar32;
            puStack_368 = unaff_x21;
            if (uVar22 < 2) {
              if (uVar22 != 0) {
                lVar39 = (long)iVar26;
                puStack_378 = (ulong *)(((long)puVar21 >> 0x20) - lVar39);
                if ((long)puVar21 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca20);
                  (*pcVar10)();
                }
                func_0x000107c61434(puVar32);
                func_0x000107c61434(puVar40);
                func_0x00010006c00c(puVar21,puVar13);
                func_0x000107c61434(puStack_370);
                func_0x000107c61434(puStack_360);
                puVar32 = puStack_368;
                func_0x00010006c00c(puStack_368,puVar38);
                func_0x000107c5ec30();
                if (puVar32 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar11 = (ulong *)0x0;
                  lVar39 = 0;
                  puVar32 = puVar35;
                }
                else {
                  puVar35 = puVar32;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar39,(long)puVar35)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca2c);
                    (*pcVar10)();
                  }
                  puVar12 = (ulong *)((lVar39 - (long)puVar35) + (long)puVar32);
                  func_0x000107c5ec38();
                  if ((long)puStack_378 <= (long)puVar35) {
                    puVar35 = puStack_378;
                  }
                  puVar11 = (ulong *)0x0;
                  if (puVar12 != (ulong *)0x0) {
                    puVar11 = puVar12;
                  }
                  lVar39 = 0;
                  if (puVar12 != (ulong *)0x0) {
                    lVar39 = (long)puVar35 + (long)puVar12;
                  }
                }
LAB_103cac970:
                unaff_x20 = puStack_368;
                unaff_x21 = puStack_380;
                func_0x000100e25bdc(&uStack_350,puVar11,lVar39,puStack_368,puVar38);
                puStack_380 = unaff_x21;
                func_0x000107c6142c(puStack_360);
                func_0x000107c6142c(puStack_370);
                func_0x00010006c090(unaff_x20,puVar38);
                func_0x000107c6142c(puVar40);
                func_0x000107c6142c(puStack_388);
                func_0x00010006c090(puVar21);
                puVar11 = unaff_x21;
                puVar35 = puVar32;
                if (((byte)uStack_350 & 1) != 0) goto LAB_103cac4bc;
                goto LAB_103cac9c8;
              }
              uStack_350._0_1_ = (byte)puVar21;
              uStack_350._1_1_ = (undefined1)((ulong)puVar21 >> 8);
              uStack_350._2_1_ = (undefined1)((ulong)puVar21 >> 0x10);
              uStack_350._3_1_ = (undefined1)((ulong)puVar21 >> 0x18);
              uStack_350._4_1_ = (undefined1)((ulong)puVar21 >> 0x20);
              uStack_350._5_1_ = (undefined1)((ulong)puVar21 >> 0x28);
              uStack_350._6_1_ = (undefined1)((ulong)puVar21 >> 0x30);
              uStack_350._7_1_ = (undefined1)((ulong)puVar21 >> 0x38);
              uStack_348 = SUB81(puVar13,0);
              uStack_347 = (undefined1)((ulong)puVar13 >> 8);
              uStack_346 = (undefined1)((ulong)puVar13 >> 0x10);
              uStack_345 = (undefined1)((ulong)puVar13 >> 0x18);
              uStack_344 = (undefined1)((ulong)puVar13 >> 0x20);
              uStack_343 = (undefined1)((ulong)puVar13 >> 0x28);
              puStack_378 = (ulong *)((long)&uStack_350 + ((ulong)puVar13 >> 0x30 & 0xff));
              func_0x000107c61434(puVar32);
              func_0x000107c61434(puVar40);
              func_0x00010006c00c(puVar21,puVar13);
              puVar12 = puStack_370;
              func_0x000107c61434(puStack_370);
              unaff_x20 = puStack_360;
              func_0x000107c61434(puStack_360);
              func_0x00010006c00c(unaff_x21,puVar38);
              puVar11 = puStack_380;
              func_0x000100e25bdc(&bStack_351,&uStack_350,puStack_378,unaff_x21,puVar38);
              puStack_380 = puVar11;
              func_0x000107c6142c(unaff_x20);
              puVar35 = puVar12;
            }
            else {
              if (uVar22 == 2) {
                uVar27 = puVar21[2];
                puStack_378 = (ulong *)puVar21[3];
                func_0x000107c61434(puVar32);
                func_0x000107c61434(puVar40);
                func_0x00010006c00c(puVar21,puVar13);
                func_0x000107c61434(puStack_370);
                func_0x000107c61434(puStack_360);
                func_0x00010006c00c(unaff_x21,puVar38);
                func_0x000107c5ec30();
                puVar35 = unaff_x21;
                puVar11 = unaff_x21;
                if (unaff_x21 != (ulong *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(uVar27,(long)puVar35)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca28);
                    (*pcVar10)();
                  }
                  puVar11 = (ulong *)((uVar27 - (long)puVar35) + (long)unaff_x21);
                }
                puVar12 = (ulong *)((long)puStack_378 - uVar27);
                if (SBORROW8((long)puStack_378,uVar27)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103caca24);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                puVar32 = puVar11;
                if (puVar11 == (ulong *)0x0) {
                  lVar39 = 0;
                }
                else {
                  if ((long)puVar12 <= (long)puVar35) {
                    puVar35 = puVar12;
                  }
                  lVar39 = (long)puVar35 + (long)puVar11;
                }
                goto LAB_103cac970;
              }
              uStack_348 = 0;
              uStack_347 = 0;
              uStack_346 = 0;
              uStack_345 = 0;
              uStack_344 = 0;
              uStack_343 = 0;
              uStack_350._0_1_ = 0;
              uStack_350._1_1_ = 0;
              uStack_350._2_1_ = 0;
              uStack_350._3_1_ = 0;
              uStack_350._4_1_ = 0;
              uStack_350._5_1_ = 0;
              uStack_350._6_1_ = 0;
              uStack_350._7_1_ = 0;
              func_0x000107c61434(puVar32);
              func_0x000107c61434(puVar40);
              func_0x00010006c00c(puVar21,puVar13);
              puVar12 = puStack_370;
              func_0x000107c61434(puStack_370);
              puVar35 = puStack_360;
              func_0x000107c61434(puStack_360);
              func_0x00010006c00c(unaff_x21,puVar38);
              puVar11 = puStack_380;
              func_0x000100e25bdc(&bStack_351,&uStack_350,&uStack_350,unaff_x21,puVar38);
              puStack_380 = puVar11;
              func_0x000107c6142c(puVar35);
              unaff_x20 = puVar12;
            }
            func_0x000107c6142c(puVar12);
            func_0x00010006c090(puStack_368,puVar38);
            func_0x000107c6142c(puVar40);
            func_0x000107c6142c(puStack_388);
            func_0x00010006c090(puVar21);
            unaff_x21 = puVar11;
            if ((bStack_351 & 1) == 0) goto LAB_103cac9c8;
          }
        }
LAB_103cac4bc:
        puVar42 = puVar42 + 6;
        puVar43 = puVar43 + 6;
        puVar36 = (ulong *)((long)puVar36 + -1);
      } while (puVar36 != (ulong *)0x0);
    }
    puVar12 = (ulong *)0x1;
  }
  else {
LAB_103cac9c8:
    puVar12 = (ulong *)0x0;
    unaff_x21 = puVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar12;
  }
  func_0x000107c60e78();
  uStack_398 = 0x103caca30;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar32 = (ulong *)puVar12[2];
  puVar11 = puVar35;
  puVar33 = puVar36;
  puVar19 = puVar42;
  puStack_3f0 = puVar43;
  puStack_3e8 = puVar42;
  puStack_3e0 = puVar40;
  puStack_3d8 = puVar38;
  puStack_3d0 = puVar36;
  puStack_3c8 = puVar35;
  puStack_3c0 = puVar21;
  puStack_3b8 = unaff_x21;
  puStack_3b0 = unaff_x20;
  puStack_3a8 = puVar13;
  ppppuStack_3a0 = &pppuStack_2e0;
  if (puVar32 == (ulong *)param_2[2]) {
    puVar17 = param_2;
    puVar34 = puVar21;
    puVar37 = puVar38;
    if ((puVar32 != (ulong *)0x0) && (puVar12 != param_2)) {
      puStack_520 = (ulong *)0x0;
      puVar12 = puVar12 + 4;
      puVar36 = param_2 + 4;
      do {
        unaff_x20 = (ulong *)((long)puVar32 + -1);
        puStack_478 = (ulong *)puVar12[5];
        puStack_480 = (ulong *)puVar12[4];
        puStack_468 = (ulong *)puVar12[7];
        puStack_470 = (ulong *)puVar12[6];
        puStack_460 = (ulong *)puVar12[8];
        param_2 = (ulong *)puVar12[1];
        uVar27 = *puVar12;
        puStack_488 = (ulong *)puVar12[3];
        puStack_490 = (ulong *)puVar12[2];
        puStack_428 = (ulong *)puVar36[5];
        puStack_430 = (ulong *)puVar36[4];
        puStack_418 = (ulong *)puVar36[7];
        puStack_420 = (ulong *)puVar36[6];
        puStack_410 = (ulong *)puVar36[8];
        puStack_448 = (ulong *)puVar36[1];
        uStack_450 = *puVar36;
        puStack_438 = (ulong *)puVar36[3];
        puStack_440 = (ulong *)puVar36[2];
        uStack_4a0 = uVar27;
        puStack_498 = param_2;
        if (((uVar27 != uStack_450) || (param_2 != puStack_448)) &&
           (func_0x000107c605b8(), puVar13 = puVar12, puVar11 = puVar35, puVar33 = puVar36,
           puVar19 = puVar42, (uVar27 & 1) == 0)) goto LAB_103cad554;
        puVar42 = puStack_410;
        unaff_x21 = puStack_418;
        puVar33 = puStack_420;
        puVar40 = puStack_428;
        puVar21 = puStack_430;
        puVar13 = puStack_460;
        puVar38 = puStack_468;
        puVar19 = puStack_470;
        puVar17 = puStack_478;
        puVar11 = puStack_480;
        puVar34 = puVar21;
        puVar43 = puVar38;
        puVar37 = puVar33;
        puStack_510 = puVar12;
        puStack_508 = unaff_x20;
        if ((ulong)puStack_460 >> 0x3c < 0xf) {
          if (0xe < (ulong)puStack_410 >> 0x3c) goto LAB_103cad4dc;
          puVar35 = puVar11;
          if ((int)puStack_480 == (int)puStack_430) {
            if (((ulong)puStack_420 & 0xff) != 1) {
              if (puStack_478 == puStack_428) goto LAB_103cacbb4;
              goto LAB_103cad438;
            }
            if (1 < (long)puStack_428) {
              if (puStack_428 == (ulong *)0x2) {
                if (puStack_478 == (ulong *)0x2) goto LAB_103cacbb4;
                puStack_550 = puStack_418;
                puStack_538 = puStack_468;
                puStack_530 = puStack_478;
                puStack_528 = puStack_480;
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                puVar40 = (ulong *)0x2;
              }
              else if (puStack_428 == (ulong *)0x3) {
                if (puStack_478 == (ulong *)0x3) goto LAB_103cacbb4;
                puStack_550 = puStack_418;
                puStack_538 = puStack_468;
                puStack_530 = puStack_478;
                puStack_528 = puStack_480;
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                puVar40 = (ulong *)0x3;
              }
              else {
                if (puStack_478 == (ulong *)0x4) goto LAB_103cacbb4;
                puStack_550 = puStack_418;
                puStack_538 = puStack_468;
                puStack_530 = puStack_478;
                puStack_528 = puStack_480;
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                puVar40 = (ulong *)0x4;
              }
              goto LAB_103cad468;
            }
            if (puStack_428 != (ulong *)0x0) {
              if (puStack_478 == (ulong *)0x1) goto LAB_103cacbb4;
              puStack_550 = puStack_418;
              puStack_538 = puStack_468;
              puStack_530 = puStack_478;
              puStack_528 = puStack_480;
              func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
              func_0x000103ccc68c(&uStack_450,&uStack_4e8);
              puVar40 = (ulong *)0x1;
              goto LAB_103cad468;
            }
            if (puStack_478 != (ulong *)0x0) {
              puStack_550 = puStack_418;
              puStack_538 = puStack_468;
              puStack_530 = puStack_478;
              puStack_528 = puStack_480;
              func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
              func_0x000103ccc68c(&uStack_450,&uStack_4e8);
              puVar40 = (ulong *)0x0;
              goto LAB_103cad468;
            }
LAB_103cacbb4:
            uVar2 = (uint)((ulong)puStack_460 >> 0x20);
            uVar20 = uVar2 >> 0x1e;
            iVar23 = (int)puStack_468;
            iVar26 = (int)((ulong)puStack_468 >> 0x20);
            if ((ulong)puStack_460 >> 0x3e == 3) {
              uVar27 = 0;
              if (((puStack_468 == (ulong *)0x0) && (puStack_460 == (ulong *)0xc000000000000000)) &&
                 ((2 < (ulong)puStack_410 >> 0x3e &&
                  ((uVar27 = 0, puStack_418 == (ulong *)0x0 &&
                   (puStack_410 == (ulong *)0xc000000000000000)))))) {
                puStack_528 = puStack_480;
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                FUN_103c86278(puStack_528,puVar17,puVar19,0,0xc000000000000000);
                FUN_103c86278(puVar21,puVar40,puVar33,0,0xc000000000000000);
                func_0x000103c86294(puVar21,puVar40,puVar33,0,0xc000000000000000);
                puVar11 = puStack_528;
                puVar37 = puVar19;
                goto LAB_103cad130;
              }
            }
            else if (uVar2 >> 0x1e < 2) {
              if (uVar20 == 0) {
                uVar27 = (ulong)puStack_460 >> 0x30 & 0xff;
              }
              else {
                if (SBORROW4(iVar26,iVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6d8);
                  (*pcVar10)();
                }
                uVar27 = (ulong)(iVar26 - iVar23);
              }
            }
            else if (uVar20 == 2) {
              uVar27 = puStack_468[3] - puStack_468[2];
              if (SBORROW8(puStack_468[3],puStack_468[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6d4);
                (*pcVar10)();
              }
            }
            else {
              uVar27 = 0;
            }
            uVar2 = (uint)((ulong)puStack_410 >> 0x20);
            uVar22 = uVar2 >> 0x1e;
            if (1 < uVar2 >> 0x1e) {
              if (uVar22 == 2) {
                uVar31 = puStack_418[3] - puStack_418[2];
                if (SBORROW8(puStack_418[3],puStack_418[2])) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6bc);
                  puStack_518 = puVar36;
                  (*pcVar10)();
                }
                goto LAB_103cacd00;
              }
              puStack_518 = puVar36;
              if (uVar27 != 0) goto LAB_103cad438;
LAB_103cace30:
              puStack_518 = puVar36;
              func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
              func_0x000103ccc68c(&uStack_450,&uStack_4e8);
              FUN_103c86278(puVar11,puVar17,puVar19,puVar38,puVar13);
              FUN_103c86278(puVar21,puVar40,puVar33,unaff_x21,puVar42);
              func_0x000103c86294(puVar21,puVar40,puVar33,unaff_x21,puVar42);
              puVar36 = puStack_518;
              goto LAB_103cad130;
            }
            if (uVar22 == 0) {
              uVar31 = (ulong)puStack_410 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)((ulong)puStack_418 >> 0x20);
              if (SBORROW4(iVar26,(int)puStack_418)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6c0);
                puStack_518 = puVar36;
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar26 - (int)puStack_418);
            }
LAB_103cacd00:
            puStack_518 = puVar36;
            if (uVar27 != uVar31) goto LAB_103cad438;
            if ((long)uVar27 < 1) goto LAB_103cace30;
            puStack_548 = puStack_470;
            puStack_540 = puStack_430;
            puStack_530 = puStack_478;
            puStack_528 = puStack_480;
            puStack_538 = puStack_468;
            if (uVar20 < 2) {
              if (uVar20 != 0) {
                puStack_558 = puStack_410;
                puStack_550 = puStack_418;
                puStack_568 = puStack_428;
                puStack_560 = puStack_420;
                puVar35 = (ulong *)(long)iVar23;
                puVar11 = (ulong *)(((long)puStack_468 >> 0x20) - (long)puVar35);
                if ((long)puStack_468 >> 0x20 < (long)puVar35) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6dc);
                  (*pcVar10)();
                }
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                FUN_103c86278(puStack_528,puStack_530,puVar19,puVar38,puVar13);
                puVar43 = puStack_540;
                FUN_103c86278(puStack_540,puStack_568,puStack_560,puStack_550,puStack_558);
                func_0x000107c5ec30();
                if (puVar43 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar43 = (ulong *)0x0;
                  lVar39 = 0;
                  puVar36 = puStack_518;
                }
                else {
                  puVar21 = puVar43;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)puVar35,(long)puVar21)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6e8);
                    (*pcVar10)();
                  }
                  puVar43 = (ulong *)(((long)puVar35 - (long)puVar21) + (long)puVar43);
                  func_0x000107c5ec38();
                  puVar36 = puStack_518;
                  if (puVar43 == (ulong *)0x0) {
                    lVar39 = 0;
                  }
                  else {
                    if ((long)puVar11 <= (long)puVar21) {
                      puVar21 = puVar11;
                    }
                    lVar39 = (long)puVar21 + (long)puVar43;
                  }
                }
                goto LAB_103cad0f4;
              }
              uStack_500._0_1_ = (byte)puStack_468;
              uStack_500._1_1_ = (undefined1)((ulong)puStack_468 >> 8);
              uStack_500._2_1_ = (undefined1)((ulong)puStack_468 >> 0x10);
              uStack_500._3_1_ = (undefined1)((ulong)puStack_468 >> 0x18);
              uStack_500._4_1_ = (undefined1)((ulong)puStack_468 >> 0x20);
              uStack_500._5_1_ = (undefined1)((ulong)puStack_468 >> 0x28);
              uStack_500._6_1_ = (undefined1)((ulong)puStack_468 >> 0x30);
              uStack_500._7_1_ = (undefined1)((ulong)puStack_468 >> 0x38);
              uStack_4f8 = SUB81(puStack_460,0);
              uStack_4f7 = (undefined1)((ulong)puStack_460 >> 8);
              uStack_4f6 = (undefined1)((ulong)puStack_460 >> 0x10);
              uStack_4f5 = (undefined1)((ulong)puStack_460 >> 0x18);
              uStack_4f4 = (undefined1)((ulong)puStack_460 >> 0x20);
              uStack_4f3 = (undefined1)((ulong)puStack_460 >> 0x28);
              puStack_550 = (ulong *)((long)&uStack_500 + ((ulong)puStack_460 >> 0x30 & 0xff));
              func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
              func_0x000103ccc68c(&uStack_450,&uStack_4e8);
              FUN_103c86278(puVar11,puVar17,puVar19,puVar38,puVar13);
              puVar11 = puStack_540;
              FUN_103c86278(puStack_540,puVar40,puVar33,unaff_x21,puVar42);
              puVar21 = puStack_520;
              func_0x000100e25bdc(&uStack_4e8,&uStack_500,puStack_550,unaff_x21,puVar42);
              puVar36 = puVar42;
              puVar32 = puVar11;
              puVar43 = puVar40;
LAB_103cad07c:
              func_0x000103c86294(puVar11,puVar40,puVar33,unaff_x21,puVar36);
              puVar40 = puVar43;
              puVar19 = puStack_548;
              puVar17 = puStack_530;
              puVar11 = puStack_528;
              puVar12 = puStack_520;
              puVar36 = puStack_518;
            }
            else {
              puStack_558 = puStack_410;
              puStack_550 = puStack_418;
              puStack_568 = puStack_428;
              puStack_560 = puStack_420;
              if (uVar20 != 2) {
                uStack_4f8 = 0;
                uStack_4f7 = 0;
                uStack_4f6 = 0;
                uStack_4f5 = 0;
                uStack_4f4 = 0;
                uStack_4f3 = 0;
                uStack_500._0_1_ = 0;
                uStack_500._1_1_ = 0;
                uStack_500._2_1_ = 0;
                uStack_500._3_1_ = 0;
                uStack_500._4_1_ = 0;
                uStack_500._5_1_ = 0;
                uStack_500._6_1_ = 0;
                uStack_500._7_1_ = 0;
                func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
                func_0x000103ccc68c(&uStack_450,&uStack_4e8);
                FUN_103c86278(puStack_528,puStack_530,puVar19,puVar38,puVar13);
                puVar11 = puStack_540;
                unaff_x21 = puStack_550;
                puVar36 = puStack_558;
                puVar33 = puStack_560;
                puVar40 = puStack_568;
                FUN_103c86278(puStack_540,puStack_568,puStack_560,puStack_550,puStack_558);
                puVar21 = puStack_520;
                func_0x000100e25bdc(&uStack_4e8,&uStack_500,&uStack_500,unaff_x21,puVar36);
                puVar32 = puVar33;
                puVar34 = unaff_x21;
                puVar35 = puVar11;
                puVar37 = puVar40;
                puVar43 = puVar36;
                goto LAB_103cad07c;
              }
              uVar27 = puStack_468[2];
              puVar35 = (ulong *)puStack_468[3];
              func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
              func_0x000103ccc68c(&uStack_450,&uStack_4e8);
              FUN_103c86278(puStack_528,puStack_530,puVar19,puVar38,puVar13);
              puVar11 = puStack_540;
              FUN_103c86278(puStack_540,puStack_568,puStack_560,puStack_550,puStack_558);
              func_0x000107c5ec30();
              if (puVar11 == (ulong *)0x0) {
                puVar43 = (ulong *)0x0;
              }
              else {
                puVar36 = puVar11;
                func_0x000107c5ec3c();
                if (SBORROW8(uVar27,(long)puVar36)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6e4);
                  (*pcVar10)();
                }
                puVar43 = (ulong *)((uVar27 - (long)puVar36) + (long)puVar11);
                puVar11 = puVar36;
              }
              puVar36 = puStack_518;
              if (SBORROW8((long)puVar35,uVar27)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6e0);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              puVar33 = puVar43;
              if (puVar43 == (ulong *)0x0) {
                lVar39 = 0;
              }
              else {
                if ((long)((long)puVar35 - uVar27) <= (long)puVar11) {
                  puVar11 = (ulong *)((long)puVar35 - uVar27);
                }
                lVar39 = (long)puVar11 + (long)puVar43;
              }
LAB_103cad0f4:
              puVar21 = puStack_520;
              puVar32 = puStack_550;
              puVar34 = puStack_558;
              func_0x000100e25bdc(&uStack_4e8,puVar43,lVar39,puStack_550,puStack_558);
              func_0x000103c86294(puStack_540,puStack_568,puStack_560,puVar32,puVar34);
              puVar37 = puVar33;
              puVar19 = puStack_548;
              puVar17 = puStack_530;
              puVar11 = puStack_528;
              puVar12 = puStack_520;
            }
            puVar33 = puVar32;
            puVar43 = puStack_538;
            puStack_548 = puVar19;
            puStack_530 = puVar17;
            puStack_528 = puVar11;
            puStack_520 = puVar21;
            if (((byte)uStack_4e8 & 1) != 0) goto LAB_103cad130;
          }
          else {
LAB_103cad438:
            puStack_550 = puStack_418;
            puStack_538 = puStack_468;
            puStack_530 = puStack_478;
            puStack_528 = puStack_480;
            func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
            func_0x000103ccc68c(&uStack_450,&uStack_4e8);
LAB_103cad468:
            puStack_548 = puVar19;
            FUN_103c86278(puStack_528,puStack_530,puVar19,puStack_538,puVar13);
            puVar34 = puStack_550;
            FUN_103c86278(puVar21,puVar40,puVar33,puStack_550,puVar42);
            func_0x000103c86294(puVar21,puVar40,puVar33,puVar34,puVar42);
            puVar36 = puVar19;
            puVar12 = puStack_520;
          }
          puStack_520 = puVar12;
          param_2 = puStack_530;
          func_0x000103c86294(puStack_528,puStack_530,puStack_548,puStack_538,puVar13);
          unaff_x21 = puVar21;
          puVar21 = puVar34;
          puVar43 = puVar38;
LAB_103cad4c8:
          puVar38 = puVar37;
          func_0x000103ccc6c0(&uStack_450);
          func_0x000103ccc6c0(&uStack_4a0);
          unaff_x20 = puVar33;
          puVar11 = puVar35;
          puVar33 = puVar36;
          puVar19 = puVar42;
          goto LAB_103cad554;
        }
        if ((ulong)puStack_410 >> 0x3c < 0xf) {
LAB_103cad4dc:
          puStack_558 = puStack_410;
          FUN_103c86278(puStack_480,puStack_478,puStack_470,puStack_468,puStack_460);
          puVar43 = puStack_558;
          FUN_103c86278(puVar21,puVar40,puVar33,unaff_x21,puStack_558);
          func_0x000103c86294(puVar11,puVar17,puVar19,puVar38,puVar13);
          param_2 = puVar40;
          func_0x000103c86294(puVar21,puVar40,puVar33,unaff_x21,puVar43);
          unaff_x20 = puVar17;
          goto LAB_103cad554;
        }
        puStack_518 = puVar36;
        func_0x000103ccc68c(&uStack_4a0,&uStack_4e8);
        func_0x000103ccc68c(&uStack_450,&uStack_4e8);
        FUN_103c86278(puVar11,puVar17,puVar19,puVar38,puVar13);
        FUN_103c86278(puVar21,puVar40,puVar33,unaff_x21,puVar42);
        puVar36 = puStack_518;
LAB_103cad130:
        puVar35 = puStack_438;
        puVar40 = puStack_440;
        unaff_x21 = puStack_488;
        puVar33 = puStack_490;
        func_0x000103c86294(puVar11,puVar17,puVar19,puVar43,puVar13);
        puVar12 = puStack_520;
        uVar2 = (uint)((ulong)unaff_x21 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)puVar35 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)puVar33;
        puVar21 = puVar34;
        param_2 = puVar17;
        if ((ulong)unaff_x21 >> 0x3e == 3) {
          uVar27 = 0;
          if ((((puVar33 != (ulong *)0x0) || (unaff_x21 != (ulong *)0xc000000000000000)) ||
              ((ulong)puVar35 >> 0x3e < 3)) ||
             ((uVar27 = 0, puVar40 != (ulong *)0x0 || (puVar35 != (ulong *)0xc000000000000000))))
          goto joined_r0x000103cad314;
LAB_103cad290:
          func_0x000103ccc6c0(&uStack_450);
          func_0x000103ccc6c0(&uStack_4a0);
          if (puStack_508 == (ulong *)0x0) {
            unaff_x20 = (ulong *)0x0;
            puVar13 = puStack_510;
            break;
          }
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar27 = (ulong)unaff_x21 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar33 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6b8);
                (*pcVar10)();
              }
              uVar27 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cad314:
            if (uVar20 >> 0x1e < 2) goto LAB_103cad1d0;
LAB_103cad19c:
            if (uVar30 != 2) {
              if (uVar27 != 0) goto LAB_103cad4c8;
              goto LAB_103cad290;
            }
            uVar31 = puVar40[3] - puVar40[2];
            if (SBORROW8(puVar40[3],puVar40[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6b0);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar27 = puVar33[3] - puVar33[2];
              if (SBORROW8(puVar33[3],puVar33[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6b4);
                (*pcVar10)();
              }
              goto joined_r0x000103cad314;
            }
            uVar27 = 0;
            if (1 < uVar30) goto LAB_103cad19c;
LAB_103cad1d0:
            if (uVar30 == 0) {
              uVar31 = (ulong)puVar35 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar40 >> 0x20);
              if (SBORROW4(iVar23,(int)puVar40)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6ac);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - (int)puVar40);
            }
          }
          if (uVar27 != uVar31) goto LAB_103cad4c8;
          if ((long)uVar27 < 1) goto LAB_103cad290;
          if (uVar22 < 2) {
            if (uVar22 != 0) {
              puVar38 = (ulong *)(long)iVar26;
              puVar21 = (ulong *)(((long)puVar33 >> 0x20) - (long)puVar38);
              if ((long)puVar33 >> 0x20 < (long)puVar38) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6c4);
                (*pcVar10)();
              }
              func_0x000107c5ec30();
              if (puVar11 == (ulong *)0x0) {
                func_0x000107c5ec38();
                puVar11 = (ulong *)0x0;
              }
              else {
                param_2 = puVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)puVar38,(long)param_2)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6d0);
                  (*pcVar10)();
                }
                puVar11 = (ulong *)(((long)puVar38 - (long)param_2) + (long)puVar11);
                func_0x000107c5ec38();
                puVar13 = puVar11;
                if (puVar11 != (ulong *)0x0) {
                  if ((long)puVar21 <= (long)param_2) {
                    param_2 = puVar21;
                  }
                  param_2 = (ulong *)((long)param_2 + (long)puVar11);
                  goto LAB_103cad3f0;
                }
              }
              param_2 = (ulong *)0x0;
              goto LAB_103cad3f0;
            }
            uStack_4e8._0_1_ = (byte)puVar33;
            uStack_4e8._1_1_ = (undefined1)((ulong)puVar33 >> 8);
            uStack_4e8._2_1_ = (undefined1)((ulong)puVar33 >> 0x10);
            uStack_4e8._3_1_ = (undefined1)((ulong)puVar33 >> 0x18);
            uStack_4e8._4_1_ = (undefined1)((ulong)puVar33 >> 0x20);
            uStack_4e8._5_1_ = (undefined1)((ulong)puVar33 >> 0x28);
            uStack_4e8._6_1_ = (undefined1)((ulong)puVar33 >> 0x30);
            uStack_4e8._7_1_ = (undefined1)((ulong)puVar33 >> 0x38);
            uStack_4e0 = SUB81(unaff_x21,0);
            uStack_4df = (undefined1)((ulong)unaff_x21 >> 8);
            uStack_4de = (undefined1)((ulong)unaff_x21 >> 0x10);
            uStack_4dd = (undefined1)((ulong)unaff_x21 >> 0x18);
            uStack_4dc = (undefined1)((ulong)unaff_x21 >> 0x20);
            uStack_4db = (undefined1)((ulong)unaff_x21 >> 0x28);
            param_2 = (ulong *)((long)&uStack_4e8 + ((ulong)unaff_x21 >> 0x30 & 0xff));
LAB_103cad398:
            func_0x000100e25bdc(&uStack_500,&uStack_4e8,param_2,puVar40,puVar35);
            func_0x000103ccc6c0(&uStack_450);
            func_0x000103ccc6c0(&uStack_4a0);
            puVar38 = puVar37;
            unaff_x21 = puVar12;
            bVar3 = (byte)uStack_500;
          }
          else {
            if (uVar22 != 2) {
              uStack_4e0 = 0;
              uStack_4df = 0;
              uStack_4de = 0;
              uStack_4dd = 0;
              uStack_4dc = 0;
              uStack_4db = 0;
              uStack_4e8._0_1_ = 0;
              uStack_4e8._1_1_ = 0;
              uStack_4e8._2_1_ = 0;
              uStack_4e8._3_1_ = 0;
              uStack_4e8._4_1_ = 0;
              uStack_4e8._5_1_ = 0;
              uStack_4e8._6_1_ = 0;
              uStack_4e8._7_1_ = 0;
              param_2 = &uStack_4e8;
              goto LAB_103cad398;
            }
            uVar27 = puVar33[2];
            puVar38 = (ulong *)puVar33[3];
            func_0x000107c5ec30();
            param_2 = puVar11;
            if (puVar11 != (ulong *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(uVar27,(long)param_2)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6cc);
                (*pcVar10)();
              }
              puVar11 = (ulong *)((uVar27 - (long)param_2) + (long)puVar11);
            }
            puVar21 = (ulong *)((long)puVar38 - uVar27);
            if (SBORROW8((long)puVar38,uVar27)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cad6c8);
              (*pcVar10)();
            }
            func_0x000107c5ec38();
            puVar13 = puVar11;
            if (puVar11 == (ulong *)0x0) {
              param_2 = (ulong *)0x0;
            }
            else {
              if ((long)puVar21 <= (long)param_2) {
                param_2 = puVar21;
              }
              param_2 = (ulong *)((long)param_2 + (long)puVar11);
            }
LAB_103cad3f0:
            puVar12 = puStack_520;
            puVar33 = (ulong *)((ulong)unaff_x21 & 0x3fffffffffffffff);
            func_0x000100e25bdc(&uStack_4e8,puVar11,param_2,puVar40,puVar35);
            func_0x000103ccc6c0(&uStack_450);
            func_0x000103ccc6c0(&uStack_4a0);
            unaff_x21 = puVar12;
            bVar3 = (byte)uStack_4e8;
          }
          unaff_x20 = puVar33;
          puVar11 = puVar35;
          puVar33 = puVar36;
          puVar19 = puVar42;
          if ((bVar3 & 1) == 0) goto LAB_103cad554;
          unaff_x20 = (ulong *)0x0;
          puVar17 = param_2;
          puVar13 = puStack_510;
          puVar34 = puVar21;
          puVar37 = puVar38;
          puStack_520 = unaff_x21;
          if (puStack_508 == (ulong *)0x0) break;
        }
        puVar12 = puStack_510 + 9;
        puVar36 = puVar36 + 9;
        puVar21 = puVar34;
        puVar38 = puVar37;
        puVar32 = puStack_508;
      } while( true );
    }
    puVar12 = (ulong *)0x1;
  }
  else {
LAB_103cad554:
    puVar12 = (ulong *)0x0;
    puVar17 = param_2;
    puVar34 = puVar21;
    puVar35 = puVar11;
    puVar36 = puVar33;
    puVar37 = puVar38;
    puVar42 = puVar19;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return puVar12;
  }
  func_0x000107c60e78();
  uStack_578 = 0x103cad6ec;
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = puVar12[2];
  puVar38 = puVar37;
  puStack_5d0 = puVar43;
  puStack_5c8 = puVar42;
  puStack_5c0 = puVar40;
  puStack_5b8 = puVar37;
  puStack_5b0 = puVar36;
  puStack_5a8 = puVar35;
  puStack_5a0 = puVar34;
  puStack_598 = unaff_x21;
  puStack_590 = unaff_x20;
  puStack_588 = puVar13;
  pppppuStack_580 = &ppppuStack_3a0;
  if (uVar27 == puVar17[2]) {
    if ((uVar27 != 0) && (puVar12 != puVar17)) {
      puStack_610 = (ulong *)0x0;
      puVar35 = puVar17 + 9;
      puVar40 = puVar12 + 5;
      do {
        uVar31 = puVar40[-1];
        puVar11 = (ulong *)*puVar40;
        puVar21 = (ulong *)puVar40[1];
        puVar34 = (ulong *)puVar40[3];
        puVar13 = (ulong *)puVar40[4];
        puVar43 = (ulong *)puVar35[-4];
        unaff_x21 = (ulong *)puVar35[-3];
        uVar25 = puVar35[-2];
        puVar42 = (ulong *)(ulong)(byte)uVar25;
        puVar37 = (ulong *)puVar35[-1];
        puVar36 = (ulong *)*puVar35;
        puVar38 = puVar37;
        if (((uVar31 != puVar35[-5]) || (puVar11 != puVar43)) &&
           (puVar17 = puVar11, puStack_608 = puVar40, puStack_600 = puVar35, func_0x000107c605b8(),
           unaff_x20 = puVar43, puVar35 = puStack_600, puVar40 = puStack_608, (uVar31 & 1) == 0))
        goto LAB_103cadc10;
        if ((byte)uVar25 == 1) {
          if ((long)unaff_x21 < 2) {
            if (unaff_x21 == (ulong *)0x0) {
              if (puVar21 != (ulong *)0x0) goto LAB_103cadc10;
            }
            else if (puVar21 != (ulong *)0x1) goto LAB_103cadc10;
          }
          else if (unaff_x21 == (ulong *)0x2) {
            if (puVar21 != (ulong *)0x2) goto LAB_103cadc10;
          }
          else if (puVar21 != (ulong *)0x3) goto LAB_103cadc10;
        }
        else if (puVar21 != unaff_x21) goto LAB_103cadc10;
        uVar2 = (uint)((ulong)puVar13 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)((ulong)puVar36 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)puVar34;
        if ((ulong)puVar13 >> 0x3e == 3) {
          uVar31 = 0;
          if (((puVar34 != (ulong *)0x0) || (puVar13 != (ulong *)0xc000000000000000)) ||
             (((ulong)puVar36 >> 0x3e < 3 ||
              ((uVar31 = 0, puVar37 != (ulong *)0x0 || (puVar36 != (ulong *)0xc000000000000000))))))
          goto joined_r0x000103cada7c;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar31 = (ulong)puVar13 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar34 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc64);
                (*pcVar10)();
              }
              uVar31 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cada7c:
            if (uVar20 >> 0x1e < 2) goto LAB_103cad8a8;
LAB_103cad860:
            if (uVar30 != 2) {
              if (uVar31 == 0) goto LAB_103cad74c;
              goto LAB_103cadc10;
            }
            uVar25 = puVar37[3] - puVar37[2];
            if (SBORROW8(puVar37[3],puVar37[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc58);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar31 = puVar34[3] - puVar34[2];
              if (SBORROW8(puVar34[3],puVar34[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc60);
                (*pcVar10)();
              }
              goto joined_r0x000103cada7c;
            }
            uVar31 = 0;
            if (1 < uVar30) goto LAB_103cad860;
LAB_103cad8a8:
            if (uVar30 == 0) {
              uVar25 = (ulong)puVar36 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)((ulong)puVar37 >> 0x20);
              if (SBORROW4(iVar23,(int)puVar37)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc5c);
                (*pcVar10)();
              }
              uVar25 = (ulong)(iVar23 - (int)puVar37);
            }
          }
          if (uVar31 != uVar25) goto LAB_103cadc10;
          if (0 < (long)uVar31) {
            puVar17 = puVar13;
            if (uVar22 < 2) {
              if (uVar22 != 0) {
                lVar39 = (long)iVar26;
                puStack_608 = (ulong *)(((long)puVar34 >> 0x20) - lVar39);
                if ((long)puVar34 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc68);
                  puStack_618 = puVar11;
                  puStack_600 = puVar43;
                  (*pcVar10)();
                }
                puStack_618 = puVar11;
                puStack_600 = puVar43;
                func_0x000107c61434(puVar11);
                func_0x00010006c00c(puVar34,puVar13);
                func_0x000107c61434(puStack_600);
                puVar21 = puVar37;
                func_0x00010006c00c(puVar37,puVar36);
                func_0x000107c5ec30();
                if (puVar21 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar11 = (ulong *)0x0;
                  lVar39 = 0;
                  puVar21 = puVar42;
                }
                else {
                  puVar42 = puVar21;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar39,(long)puVar42)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc74);
                    (*pcVar10)();
                  }
                  puVar43 = (ulong *)((lVar39 - (long)puVar42) + (long)puVar21);
                  func_0x000107c5ec38();
                  if ((long)puStack_608 <= (long)puVar42) {
                    puVar42 = puStack_608;
                  }
                  puVar11 = (ulong *)0x0;
                  if (puVar43 != (ulong *)0x0) {
                    puVar11 = puVar43;
                  }
                  lVar39 = 0;
                  if (puVar43 != (ulong *)0x0) {
                    lVar39 = (long)puVar42 + (long)puVar43;
                  }
                }
LAB_103cadbcc:
                unaff_x21 = puStack_610;
                unaff_x20 = (ulong *)((ulong)puVar13 & 0x3fffffffffffffff);
                func_0x000100e25bdc(&uStack_5f0,puVar11,lVar39,puVar37,puVar36);
                puStack_610 = unaff_x21;
                func_0x000107c6142c(puStack_600);
                func_0x00010006c090(puVar37,puVar36);
                func_0x000107c6142c(puStack_618);
                func_0x00010006c090(puVar34);
                puVar42 = puVar21;
                if (((byte)uStack_5f0 & 1) != 0) goto LAB_103cad74c;
                goto LAB_103cadc10;
              }
              uStack_5f0._0_1_ = (byte)puVar34;
              uStack_5f0._1_1_ = (undefined1)((ulong)puVar34 >> 8);
              uStack_5f0._2_1_ = (undefined1)((ulong)puVar34 >> 0x10);
              uStack_5f0._3_1_ = (undefined1)((ulong)puVar34 >> 0x18);
              uStack_5f0._4_1_ = (undefined1)((ulong)puVar34 >> 0x20);
              uStack_5f0._5_1_ = (undefined1)((ulong)puVar34 >> 0x28);
              uStack_5f0._6_1_ = (undefined1)((ulong)puVar34 >> 0x30);
              uStack_5f0._7_1_ = (undefined1)((ulong)puVar34 >> 0x38);
              uStack_5e8 = SUB81(puVar13,0);
              uStack_5e7 = (undefined1)((ulong)puVar13 >> 8);
              uStack_5e6 = (undefined1)((ulong)puVar13 >> 0x10);
              uStack_5e5 = (undefined1)((ulong)puVar13 >> 0x18);
              uStack_5e4 = (undefined1)((ulong)puVar13 >> 0x20);
              uStack_5e3 = (undefined1)((ulong)puVar13 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_5f0 + ((ulong)puVar13 >> 0x30 & 0xff));
              puStack_618 = puVar11;
              func_0x000107c61434(puVar11);
              func_0x00010006c00c(puVar34,puVar13);
              func_0x000107c61434(puVar43);
              func_0x00010006c00c(puVar37,puVar36);
              unaff_x21 = puStack_610;
              func_0x000100e25bdc(&bStack_5f1,&uStack_5f0,unaff_x20,puVar37,puVar36);
              puStack_610 = unaff_x21;
              func_0x000107c6142c(puVar43);
              func_0x00010006c090(puVar37,puVar36);
              puVar11 = puStack_618;
              puVar38 = puVar43;
              puVar42 = puVar37;
            }
            else {
              if (uVar22 == 2) {
                uVar31 = puVar34[2];
                puStack_608 = (ulong *)puVar34[3];
                puStack_618 = puVar11;
                puStack_600 = puVar43;
                func_0x000107c61434(puVar11);
                func_0x00010006c00c(puVar34,puVar13);
                func_0x000107c61434(puStack_600);
                puVar11 = puVar37;
                func_0x00010006c00c(puVar37,puVar36);
                func_0x000107c5ec30();
                puVar42 = puVar11;
                if (puVar11 != (ulong *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(uVar31,(long)puVar42)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc70);
                    (*pcVar10)();
                  }
                  puVar11 = (ulong *)((uVar31 - (long)puVar42) + (long)puVar11);
                }
                puVar43 = (ulong *)((long)puStack_608 - uVar31);
                if (SBORROW8((long)puStack_608,uVar31)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cadc6c);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                puVar21 = puVar11;
                if (puVar11 == (ulong *)0x0) {
                  lVar39 = 0;
                }
                else {
                  if ((long)puVar43 <= (long)puVar42) {
                    puVar42 = puVar43;
                  }
                  lVar39 = (long)puVar42 + (long)puVar11;
                }
                goto LAB_103cadbcc;
              }
              uStack_5e8 = 0;
              uStack_5e7 = 0;
              uStack_5e6 = 0;
              uStack_5e5 = 0;
              uStack_5e4 = 0;
              uStack_5e3 = 0;
              uStack_5f0._0_1_ = 0;
              uStack_5f0._1_1_ = 0;
              uStack_5f0._2_1_ = 0;
              uStack_5f0._3_1_ = 0;
              uStack_5f0._4_1_ = 0;
              uStack_5f0._5_1_ = 0;
              uStack_5f0._6_1_ = 0;
              uStack_5f0._7_1_ = 0;
              puStack_600 = puVar43;
              func_0x000107c61434(puVar11);
              func_0x00010006c00c(puVar34,puVar13);
              puVar42 = puStack_600;
              func_0x000107c61434(puStack_600);
              func_0x00010006c00c(puVar37,puVar36);
              unaff_x21 = puStack_610;
              func_0x000100e25bdc(&bStack_5f1,&uStack_5f0,&uStack_5f0,puVar37,puVar36);
              puStack_610 = unaff_x21;
              func_0x000107c6142c(puVar42);
              func_0x00010006c090(puVar37,puVar36);
              unaff_x20 = puVar11;
            }
            func_0x000107c6142c(puVar11);
            func_0x00010006c090(puVar34);
            puVar37 = puVar38;
            if ((bStack_5f1 & 1) == 0) goto LAB_103cadc10;
          }
        }
LAB_103cad74c:
        puVar35 = puVar35 + 6;
        puVar40 = puVar40 + 6;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    puVar11 = (ulong *)0x1;
  }
  else {
LAB_103cadc10:
    puVar11 = (ulong *)0x0;
    puVar37 = puVar38;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5d8) {
    return puVar11;
  }
  func_0x000107c60e78();
  uStack_628 = 0x103cadc78;
  lStack_690 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar31 = puVar11[2];
  uStack_680 = uVar27;
  puStack_678 = puVar42;
  puStack_670 = puVar40;
  puStack_668 = puVar37;
  puStack_660 = puVar36;
  puStack_658 = puVar35;
  puStack_650 = puVar34;
  puStack_648 = unaff_x21;
  puStack_640 = unaff_x20;
  puStack_638 = puVar13;
  ppppppuStack_630 = &pppppuStack_580;
  if (uVar31 == puVar17[2]) {
    if ((uVar31 != 0) && (puVar11 != puVar17)) {
      puVar11 = puVar11 + 4;
      puVar17 = puVar17 + 4;
      do {
        uVar31 = uVar31 - 1;
        uStack_748 = puVar11[9];
        uStack_750 = puVar11[8];
        uStack_738 = puVar11[0xb];
        uStack_740 = puVar11[10];
        uStack_728 = puVar11[0xd];
        uStack_730 = puVar11[0xc];
        uStack_720 = puVar11[0xe];
        uStack_788 = puVar11[1];
        uVar27 = *puVar11;
        uStack_778 = puVar11[3];
        uStack_780 = puVar11[2];
        uStack_768 = puVar11[5];
        uStack_770 = puVar11[4];
        uStack_758 = puVar11[7];
        uStack_760 = puVar11[6];
        uStack_708 = puVar17[1];
        uStack_710 = *puVar17;
        uStack_6f8 = puVar17[3];
        uStack_700 = puVar17[2];
        uStack_6e8 = puVar17[5];
        uStack_6f0 = puVar17[4];
        uStack_6d8 = puVar17[7];
        uStack_6e0 = puVar17[6];
        uStack_6c8 = puVar17[9];
        uStack_6d0 = puVar17[8];
        uStack_6b8 = puVar17[0xb];
        uStack_6c0 = puVar17[10];
        uStack_6a8 = puVar17[0xd];
        uStack_6b0 = puVar17[0xc];
        uStack_6a0 = puVar17[0xe];
        uStack_790 = uVar27;
        if ((((((uVar27 != uStack_710) || (uStack_788 != uStack_708)) &&
              (func_0x000107c605b8(), (uVar27 & 1) == 0)) ||
             (((uStack_780 != uStack_700 || (uStack_778 != uStack_6f8)) &&
              (uVar27 = uStack_780, func_0x000107c605b8(), (uVar27 & 1) == 0)))) ||
            (((uStack_770 != uStack_6f0 || (uStack_768 != uStack_6e8)) &&
             (uVar27 = uStack_770, func_0x000107c605b8(), (uVar27 & 1) == 0)))) ||
           ((uVar9 = uStack_6a0, uVar8 = uStack_6a8, uVar7 = uStack_6b0, uVar41 = uStack_6b8,
            uVar4 = uStack_6c0, uVar6 = uStack_720, uVar5 = uStack_728, uVar29 = uStack_730,
            uVar25 = uStack_738, uVar27 = uStack_740, uStack_760 != uStack_6e0 ||
            (uStack_758 != uStack_6d8)))) goto LAB_103cae848;
        if (uStack_720 >> 0x3c < 0xf) {
          if (0xe < uStack_6a0 >> 0x3c) goto LAB_103cae7d0;
          if ((int)uStack_740 == (int)uStack_6c0) {
            if ((uStack_6b0 & 0xff) != 1) {
              if (uStack_738 == uStack_6b8) goto LAB_103cade88;
              goto LAB_103cae72c;
            }
            if (1 < (long)uStack_6b8) {
              if (uStack_6b8 == 2) {
                if (uStack_738 == 2) goto LAB_103cade88;
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                uVar41 = 2;
              }
              else if (uStack_6b8 == 3) {
                if (uStack_738 == 3) goto LAB_103cade88;
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                uVar41 = 3;
              }
              else {
                if (uStack_738 == 4) goto LAB_103cade88;
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                uVar41 = 4;
              }
              goto LAB_103cae75c;
            }
            if (uStack_6b8 != 0) {
              if (uStack_738 == 1) goto LAB_103cade88;
              func_0x000103ccc62c(&uStack_790,abStack_808);
              func_0x000103ccc62c(&uStack_710,abStack_808);
              uVar41 = 1;
              goto LAB_103cae75c;
            }
            if (uStack_738 != 0) {
              func_0x000103ccc62c(&uStack_790,abStack_808);
              func_0x000103ccc62c(&uStack_710,abStack_808);
              uVar41 = 0;
              goto LAB_103cae75c;
            }
LAB_103cade88:
            uVar2 = (uint)(uStack_720 >> 0x20);
            uVar20 = uVar2 >> 0x1e;
            iVar23 = (int)uStack_728;
            iVar26 = (int)(uStack_728 >> 0x20);
            if (uStack_720 >> 0x3e == 3) {
              uVar24 = 0;
              if ((((uStack_728 == 0) && (uStack_720 == 0xc000000000000000)) &&
                  (2 < uStack_6a0 >> 0x3e)) &&
                 ((uVar24 = 0, uStack_6a8 == 0 && (uStack_6a0 == 0xc000000000000000)))) {
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                FUN_103c86278(uVar27,uVar25,uVar29,0,0xc000000000000000);
                FUN_103c86278(uVar4,uVar41,uVar7,0,0xc000000000000000);
                func_0x000103c86294(uVar4,uVar41,uVar7,0,0xc000000000000000);
                goto LAB_103cae424;
              }
            }
            else if (uVar2 >> 0x1e < 2) {
              if (uVar20 == 0) {
                uVar24 = uStack_720 >> 0x30 & 0xff;
              }
              else {
                if (SBORROW4(iVar26,iVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9c8);
                  (*pcVar10)();
                }
                uVar24 = (ulong)(iVar26 - iVar23);
              }
            }
            else if (uVar20 == 2) {
              uVar24 = *(long *)(uStack_728 + 0x18) - *(long *)(uStack_728 + 0x10);
              if (SBORROW8(*(long *)(uStack_728 + 0x18),*(long *)(uStack_728 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9cc);
                (*pcVar10)();
              }
            }
            else {
              uVar24 = 0;
            }
            uVar2 = (uint)(uStack_6a0 >> 0x20);
            uVar22 = uVar2 >> 0x1e;
            if (1 < uVar2 >> 0x1e) {
              if (uVar22 == 2) {
                uVar28 = *(long *)(uStack_6a8 + 0x18) - *(long *)(uStack_6a8 + 0x10);
                if (SBORROW8(*(long *)(uStack_6a8 + 0x18),*(long *)(uStack_6a8 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9b0);
                  (*pcVar10)();
                }
                goto LAB_103cadfd0;
              }
              if (uVar24 != 0) goto LAB_103cae72c;
LAB_103cae108:
              func_0x000103ccc62c(&uStack_790,abStack_808);
              func_0x000103ccc62c(&uStack_710,abStack_808);
              FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
              FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
              func_0x000103c86294(uVar4,uVar41,uVar7,uVar8,uVar9);
              goto LAB_103cae424;
            }
            if (uVar22 == 0) {
              uVar28 = uStack_6a0 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)(uStack_6a8 >> 0x20);
              if (SBORROW4(iVar26,(int)uStack_6a8)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9b4);
                (*pcVar10)();
              }
              uVar28 = (ulong)(iVar26 - (int)uStack_6a8);
            }
LAB_103cadfd0:
            if (uVar24 != uVar28) goto LAB_103cae72c;
            if ((long)uVar24 < 1) goto LAB_103cae108;
            if (uVar20 < 2) {
              if (uVar20 != 0) {
                lVar39 = (long)iVar23;
                uVar24 = ((long)uStack_728 >> 0x20) - lVar39;
                if ((long)uStack_728 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9d0);
                  (*pcVar10)();
                }
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
                uVar28 = uVar4;
                FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
                func_0x000107c5ec30();
                if (uVar28 == 0) {
                  func_0x000107c5ec38();
                  lVar15 = 0;
                  lVar39 = 0;
                }
                else {
                  uVar14 = uVar28;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar39,uVar14)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9dc);
                    (*pcVar10)();
                  }
                  lVar15 = (lVar39 - uVar14) + uVar28;
                  func_0x000107c5ec38();
                  if (lVar15 == 0) {
                    lVar39 = 0;
                  }
                  else {
                    if ((long)uVar24 <= (long)uVar14) {
                      uVar14 = uVar24;
                    }
                    lVar39 = uVar14 + lVar15;
                  }
                }
                goto LAB_103cae3dc;
              }
              abStack_820[0] = (byte)uStack_728;
              abStack_820[1] = (byte)(uStack_728 >> 8);
              abStack_820[2] = (byte)(uStack_728 >> 0x10);
              abStack_820[3] = (byte)(uStack_728 >> 0x18);
              abStack_820[4] = (byte)(uStack_728 >> 0x20);
              abStack_820[5] = (byte)(uStack_728 >> 0x28);
              abStack_820[6] = (byte)(uStack_728 >> 0x30);
              abStack_820[7] = (byte)(uStack_728 >> 0x38);
              abStack_820[8] = (byte)uStack_720;
              abStack_820[9] = (byte)(uStack_720 >> 8);
              abStack_820[10] = (byte)(uStack_720 >> 0x10);
              abStack_820[0xb] = (byte)(uStack_720 >> 0x18);
              abStack_820[0xc] = (byte)(uStack_720 >> 0x20);
              abStack_820[0xd] = (byte)(uStack_720 >> 0x28);
              uVar24 = uStack_720 >> 0x30;
              func_0x000103ccc62c(&uStack_790,abStack_808);
              func_0x000103ccc62c(&uStack_710,abStack_808);
              FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
              FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
              func_0x000100e25bdc(abStack_808,abStack_820,abStack_820 + (uVar24 & 0xff),uVar8,uVar9)
              ;
LAB_103cae364:
              func_0x000103c86294(uVar4,uVar41,uVar7,uVar8,uVar9);
            }
            else {
              if (uVar20 != 2) {
                abStack_820[8] = 0;
                abStack_820[9] = 0;
                abStack_820[10] = 0;
                abStack_820[0xb] = 0;
                abStack_820[0xc] = 0;
                abStack_820[0xd] = 0;
                abStack_820[0] = 0;
                abStack_820[1] = 0;
                abStack_820[2] = 0;
                abStack_820[3] = 0;
                abStack_820[4] = 0;
                abStack_820[5] = 0;
                abStack_820[6] = 0;
                abStack_820[7] = 0;
                func_0x000103ccc62c(&uStack_790,abStack_808);
                func_0x000103ccc62c(&uStack_710,abStack_808);
                FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
                FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
                func_0x000100e25bdc(abStack_808,abStack_820,abStack_820,uVar8,uVar9);
                goto LAB_103cae364;
              }
              lVar39 = *(long *)(uStack_728 + 0x10);
              lVar16 = *(long *)(uStack_728 + 0x18);
              func_0x000103ccc62c(&uStack_790,abStack_808);
              func_0x000103ccc62c(&uStack_710,abStack_808);
              FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
              uVar24 = uVar4;
              FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
              func_0x000107c5ec30();
              if (uVar24 == 0) {
                lVar15 = 0;
              }
              else {
                uVar28 = uVar24;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar39,uVar28)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9d8);
                  (*pcVar10)();
                }
                lVar15 = (lVar39 - uVar28) + uVar24;
                uVar24 = uVar28;
              }
              uVar28 = lVar16 - lVar39;
              if (SBORROW8(lVar16,lVar39)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9d4);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              if (lVar15 == 0) {
                lVar39 = 0;
              }
              else {
                if ((long)uVar28 <= (long)uVar24) {
                  uVar24 = uVar28;
                }
                lVar39 = uVar24 + lVar15;
              }
LAB_103cae3dc:
              func_0x000100e25bdc(abStack_808,lVar15,lVar39,uVar8,uVar9);
              func_0x000103c86294(uVar4,uVar41,uVar7,uVar8,uVar9);
            }
            if ((abStack_808[0] & 1) != 0) goto LAB_103cae424;
          }
          else {
LAB_103cae72c:
            func_0x000103ccc62c(&uStack_790,abStack_808);
            func_0x000103ccc62c(&uStack_710,abStack_808);
LAB_103cae75c:
            FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
            FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
            func_0x000103c86294(uVar4,uVar41,uVar7,uVar8,uVar9);
          }
          func_0x000103c86294(uVar27,uVar25,uVar29,uVar5,uVar6);
LAB_103cae7b8:
          func_0x000103ccc660(&uStack_710);
          func_0x000103ccc660(&uStack_790);
          puVar36 = (ulong *)0x0;
          goto LAB_103cae84c;
        }
        if (uStack_6a0 >> 0x3c < 0xf) {
LAB_103cae7d0:
          FUN_103c86278(uStack_740,uStack_738,uStack_730,uStack_728,uStack_720);
          FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
          func_0x000103c86294(uVar27,uVar25,uVar29,uVar5,uVar6);
          func_0x000103c86294(uVar4,uVar41,uVar7,uVar8,uVar9);
          goto LAB_103cae848;
        }
        func_0x000103ccc62c(&uStack_790,abStack_808);
        func_0x000103ccc62c(&uStack_710,abStack_808);
        FUN_103c86278(uVar27,uVar25,uVar29,uVar5,uVar6);
        FUN_103c86278(uVar4,uVar41,uVar7,uVar8,uVar9);
LAB_103cae424:
        uVar8 = uStack_6c8;
        uVar7 = uStack_6d0;
        uVar41 = uStack_748;
        uVar4 = uStack_750;
        func_0x000103c86294(uVar27,uVar25,uVar29,uVar5,uVar6);
        uVar2 = (uint)(uVar41 >> 0x20);
        uVar22 = uVar2 >> 0x1e;
        uVar20 = (uint)(uVar8 >> 0x20);
        uVar30 = uVar20 >> 0x1e;
        iVar26 = (int)uVar4;
        if (uVar41 >> 0x3e == 3) {
          uVar25 = 0;
          if (((uVar4 != 0) || (uVar41 != 0xc000000000000000)) ||
             ((uVar8 >> 0x3e < 3 || ((uVar25 = 0, uVar7 != 0 || (uVar8 != 0xc000000000000000))))))
          goto joined_r0x000103cae608;
LAB_103cae584:
          func_0x000103ccc660(&uStack_710);
          func_0x000103ccc660(&uStack_790);
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar25 = uVar41 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)(uVar4 >> 0x20);
              if (SBORROW4(iVar23,iVar26)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9ac);
                (*pcVar10)();
              }
              uVar25 = (ulong)(iVar23 - iVar26);
            }
joined_r0x000103cae608:
            if (uVar20 >> 0x1e < 2) goto LAB_103cae4c4;
LAB_103cae490:
            if (uVar30 != 2) {
              if (uVar25 != 0) goto LAB_103cae7b8;
              goto LAB_103cae584;
            }
            uVar29 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
            if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9a4);
              (*pcVar10)();
            }
          }
          else {
            if (uVar22 == 2) {
              uVar25 = *(long *)(uVar4 + 0x18) - *(long *)(uVar4 + 0x10);
              if (SBORROW8(*(long *)(uVar4 + 0x18),*(long *)(uVar4 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9a8);
                (*pcVar10)();
              }
              goto joined_r0x000103cae608;
            }
            uVar25 = 0;
            if (1 < uVar30) goto LAB_103cae490;
LAB_103cae4c4:
            if (uVar30 == 0) {
              uVar29 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar23 = (int)(uVar7 >> 0x20);
              if (SBORROW4(iVar23,(int)uVar7)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9a0);
                (*pcVar10)();
              }
              uVar29 = (ulong)(iVar23 - (int)uVar7);
            }
          }
          if (uVar25 != uVar29) goto LAB_103cae7b8;
          if ((long)uVar25 < 1) goto LAB_103cae584;
          if (uVar22 < 2) {
            if (uVar22 != 0) {
              lVar39 = (long)iVar26;
              uVar25 = ((long)uVar4 >> 0x20) - lVar39;
              if ((long)uVar4 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9b8);
                (*pcVar10)();
              }
              func_0x000107c5ec30();
              if (uVar27 == 0) {
                func_0x000107c5ec38();
                uVar27 = 0;
              }
              else {
                uVar29 = uVar27;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar39,uVar29)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9c4);
                  (*pcVar10)();
                }
                uVar27 = (lVar39 - uVar29) + uVar27;
                func_0x000107c5ec38();
                if (uVar27 != 0) {
                  if ((long)uVar25 <= (long)uVar29) {
                    uVar29 = uVar25;
                  }
                  lVar39 = uVar29 + uVar27;
                  goto LAB_103cae6e4;
                }
              }
              lVar39 = 0;
              goto LAB_103cae6e4;
            }
            abStack_808[0] = (byte)uVar4;
            abStack_808[1] = (byte)(uVar4 >> 8);
            abStack_808[2] = (byte)(uVar4 >> 0x10);
            abStack_808[3] = (byte)(uVar4 >> 0x18);
            abStack_808[4] = (byte)(uVar4 >> 0x20);
            abStack_808[5] = (byte)(uVar4 >> 0x28);
            abStack_808[6] = (byte)(uVar4 >> 0x30);
            abStack_808[7] = (byte)(uVar4 >> 0x38);
            abStack_808[8] = (byte)uVar41;
            abStack_808[9] = (byte)(uVar41 >> 8);
            abStack_808[10] = (byte)(uVar41 >> 0x10);
            abStack_808[0xb] = (byte)(uVar41 >> 0x18);
            abStack_808[0xc] = (byte)(uVar41 >> 0x20);
            abStack_808[0xd] = (byte)(uVar41 >> 0x28);
            pbVar18 = abStack_808 + (uVar41 >> 0x30 & 0xff);
LAB_103cae68c:
            func_0x000100e25bdc(abStack_820,abStack_808,pbVar18,uVar7,uVar8);
            func_0x000103ccc660(&uStack_710);
            func_0x000103ccc660(&uStack_790);
            bVar3 = abStack_820[0];
          }
          else {
            if (uVar22 != 2) {
              abStack_808[8] = 0;
              abStack_808[9] = 0;
              abStack_808[10] = 0;
              abStack_808[0xb] = 0;
              abStack_808[0xc] = 0;
              abStack_808[0xd] = 0;
              abStack_808[0] = 0;
              abStack_808[1] = 0;
              abStack_808[2] = 0;
              abStack_808[3] = 0;
              abStack_808[4] = 0;
              abStack_808[5] = 0;
              abStack_808[6] = 0;
              abStack_808[7] = 0;
              pbVar18 = abStack_808;
              goto LAB_103cae68c;
            }
            lVar39 = *(long *)(uVar4 + 0x10);
            lVar16 = *(long *)(uVar4 + 0x18);
            func_0x000107c5ec30();
            uVar25 = uVar27;
            if (uVar27 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar39,uVar25)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9c0);
                (*pcVar10)();
              }
              uVar27 = (lVar39 - uVar25) + uVar27;
            }
            uVar29 = lVar16 - lVar39;
            if (SBORROW8(lVar16,lVar39)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103cae9bc);
              (*pcVar10)();
            }
            func_0x000107c5ec38();
            if (uVar27 == 0) {
              lVar39 = 0;
            }
            else {
              if ((long)uVar29 <= (long)uVar25) {
                uVar25 = uVar29;
              }
              lVar39 = uVar25 + uVar27;
            }
LAB_103cae6e4:
            func_0x000100e25bdc(abStack_808,uVar27,lVar39,uVar7,uVar8);
            func_0x000103ccc660(&uStack_710);
            func_0x000103ccc660(&uStack_790);
            bVar3 = abStack_808[0];
          }
          if ((bVar3 & 1) == 0) goto LAB_103cae848;
        }
        if (uVar31 == 0) break;
        puVar11 = puVar11 + 0xf;
        puVar17 = puVar17 + 0xf;
      } while( true );
    }
    puVar36 = (ulong *)0x1;
  }
  else {
LAB_103cae848:
    puVar36 = (ulong *)0x0;
  }
LAB_103cae84c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_690) {
    func_0x000107c60e78(puVar36);
    FUN_103cbfd74();
    return puVar36;
  }
  return puVar36;
}



/* Entry: 103cae9e0; end: 103caea0b;  */

undefined8 FUN_103cae9e0(undefined8 param_1)

{
  FUN_103cbfd74(param_1,&UNK_1106f74b0);
  return param_1;
}



/* Entry: 103caea0c; end: 103caeaa3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103caea0c(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 2);
    lVar22 = *(long *)(param_2 + 2);
    if ((char)param_2[4] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 == 0) {
LAB_103caea5c:
            pbVar10 = *(byte **)(param_1 + 6);
            pbVar26 = *(byte **)(param_1 + 8);
            lVar19 = *(long *)(param_2 + 6);
            uVar16 = *(ulong *)(param_2 + 8);
            puVar7 = (undefined1 *)register0x00000008;
            do {
              *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
              *(byte **)(puVar7 + -0x48) = unaff_x25;
              *(byte **)(puVar7 + -0x40) = unaff_x24;
              *(byte **)(puVar7 + -0x38) = unaff_x23;
              *(ulong *)(puVar7 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
              *(ulong *)(puVar7 + -0x20) = unaff_x20;
              *(byte **)(puVar7 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar7 + -8) = unaff_x30;
              *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = (uint)((ulong)pbVar26 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar16 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar13 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar16 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar16 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      puVar7[-0x70] = (char)pbVar10;
                      puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                      puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                      puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                      puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                      puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                      puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                      puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                      puVar7[-0x68] = (char)pbVar26;
                      puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                      pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto code_r0x000100e262b0;
                    }
                    unaff_x25 = (byte *)(long)iVar8;
                    unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                    if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec30();
                    unaff_x24 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar13 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar13) {
                          pbVar13 = unaff_x23;
                        }
                        pbVar13 = pbVar13 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar13 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar13 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar13 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar16;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
                }
              }
code_r0x000100e262b0:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                return pbVar9;
              }
              func_0x000107c60e78();
              *(byte **)(puVar7 + -0xc0) = unaff_x24;
              *(byte **)(puVar7 + -0xb8) = unaff_x23;
              *(ulong *)(puVar7 + -0xb0) = unaff_x22;
              *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
              *(ulong *)(puVar7 + -0xa0) = unaff_x20;
              *(byte **)(puVar7 + -0x98) = unaff_x19;
              *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar25 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar14 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar13[0x28] == 0) {
                    lVar19 = *(long *)pbVar13;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar27 == 1) {
                  if (pbVar13[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar17 = *(byte **)(pbVar13 + 0x10);
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar13[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar10;
joined_r0x000100e266a4:
                    if (((ulong)pbVar25 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    return (byte *)0x1;
                  }
                }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                )(pbVar12,pbVar14,pbVar15,pbVar17,0);
                return pbVar12;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar13[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                     pbVar17 = *(byte **)(pbVar13 + 0x18),
                     pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar13[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)(pbVar13 + 0x20);
                if (pbVar26 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar13 + 0x20);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  bVar27 = pbVar13[8] | (byte)lVar19;
                  bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar13[0x10] | (byte)lVar22;
                  bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                  auVar43[1] = bVar28;
                  auVar43[0] = bVar27;
                  auVar43[2] = bVar29;
                  auVar43[3] = bVar30;
                  auVar43[4] = bVar31;
                  auVar43[5] = bVar32;
                  auVar43[6] = bVar33;
                  auVar43[7] = bVar34;
                  auVar43[8] = bVar35;
                  auVar43[9] = bVar36;
                  auVar43[10] = bVar37;
                  auVar43[0xb] = bVar38;
                  auVar43[0xc] = bVar39;
                  auVar43[0xd] = bVar40;
                  auVar43[0xe] = bVar41;
                  auVar43[0xf] = bVar42;
                  auVar3[1] = bVar28;
                  auVar3[0] = bVar27;
                  auVar3[2] = bVar29;
                  auVar3[3] = bVar30;
                  auVar3[4] = bVar31;
                  auVar3[5] = bVar32;
                  auVar3[6] = bVar33;
                  auVar3[7] = bVar34;
                  auVar3[8] = bVar35;
                  auVar3[9] = bVar36;
                  auVar3[10] = bVar37;
                  auVar3[0xb] = bVar38;
                  auVar3[0xc] = bVar39;
                  auVar3[0xd] = bVar40;
                  auVar3[0xe] = bVar41;
                  auVar3[0xf] = bVar42;
                  auVar43 = NEON_ext(auVar43,auVar3,8,1);
                  if (CONCAT17(bVar34 | auVar43[7],
                               CONCAT16(bVar33 | auVar43[6],
                                        CONCAT15(bVar32 | auVar43[5],
                                                 CONCAT14(bVar31 | auVar43[4],
                                                          CONCAT13(bVar30 | auVar43[3],
                                                                   CONCAT12(bVar29 | auVar43[2],
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar13 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 1) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 2) {
                    return (byte *)0x0;
                  }
                }
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar1[1] = bVar28;
                auVar1[0] = bVar27;
                auVar1[2] = bVar29;
                auVar1[3] = bVar30;
                auVar1[4] = bVar31;
                auVar1[5] = bVar32;
                auVar1[6] = bVar33;
                auVar1[7] = bVar34;
                auVar1[8] = bVar35;
                auVar1[9] = bVar36;
                auVar1[10] = bVar37;
                auVar1[0xb] = bVar38;
                auVar1[0xc] = bVar39;
                auVar1[0xd] = bVar40;
                auVar1[0xe] = bVar41;
                auVar1[0xf] = bVar42;
                auVar2[1] = bVar28;
                auVar2[0] = bVar27;
                auVar2[2] = bVar29;
                auVar2[3] = bVar30;
                auVar2[4] = bVar31;
                auVar2[5] = bVar32;
                auVar2[6] = bVar33;
                auVar2[7] = bVar34;
                auVar2[8] = bVar35;
                auVar2[9] = bVar36;
                auVar2[10] = bVar37;
                auVar2[0xb] = bVar38;
                auVar2[0xc] = bVar39;
                auVar2[0xd] = bVar40;
                auVar2[0xe] = bVar41;
                auVar2[0xf] = bVar42;
                auVar43 = NEON_ext(auVar1,auVar2,8,1);
                lVar19 = CONCAT17(bVar34 | auVar43[7],
                                  CONCAT16(bVar33 | auVar43[6],
                                           CONCAT15(bVar32 | auVar43[5],
                                                    CONCAT14(bVar31 | auVar43[4],
                                                             CONCAT13(bVar30 | auVar43[3],
                                                                      CONCAT12(bVar29 | auVar43[2],
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar13[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar13 + 8);
              uVar16 = *(ulong *)(pbVar13 + 0x10);
              lVar22 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
              unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
              unaff_x20 = *(ulong *)(puVar7 + -0xa0);
              unaff_x19 = *(byte **)(puVar7 + -0x98);
              unaff_x22 = *(ulong *)(puVar7 + -0xb0);
              unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
              unaff_x24 = *(byte **)(puVar7 + -0xc0);
              unaff_x23 = *(byte **)(puVar7 + -0xb8);
              puVar7 = puVar7 + -0x80;
            } while( true );
          }
        }
        else if (lVar19 == 1) goto LAB_103caea5c;
      }
      else if (lVar22 == 2) {
        if (lVar19 == 2) goto LAB_103caea5c;
      }
      else if (lVar22 == 3) {
        if (lVar19 == 3) goto LAB_103caea5c;
      }
      else if (lVar19 == 4) goto LAB_103caea5c;
    }
    else if (lVar19 == lVar22) goto LAB_103caea5c;
  }
  return (byte *)0x0;
}



/* Entry: 103caeaa4; end: 103caeac3;  */

void FUN_103caeaa4(void)

{
  func_0x000107c61168(&PTR_PTR_112fffed0);
  return;
}



/* Entry: 103caeac4; end: 103caec8f;  */

undefined8 FUN_103caeac4(undefined8 param_1)

{
  FUN_103cc1108(param_1,&UNK_1106f7ac8);
  return param_1;
}



/* Entry: 103caec90; end: 103caf397;  */

uint FUN_103caec90(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_218 [40];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 auStack_e8 [2];
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined4 auStack_c0 [2];
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 auStack_98 [2];
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar3 = *param_1;
  if ((((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0)
       ) && ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)))) && (param_1[4] == param_2[4])) {
    uVar3 = param_1[5];
    if (((uVar3 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar9 = param_1[10];
      uVar7 = param_1[9];
      uVar13 = param_1[0xc];
      uVar11 = param_1[0xb];
      uVar3 = param_1[0xd];
      uVar10 = param_2[10];
      uVar8 = param_2[9];
      uVar14 = param_2[0xc];
      uVar12 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_140 = uVar8;
      uStack_138 = uVar10;
      uStack_130 = uVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar6;
      uStack_110 = uVar7;
      uStack_108 = uVar9;
      uStack_100 = uVar11;
      uStack_f8 = uVar13;
      uStack_f0 = uVar3;
      if (uVar3 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_103caedf0;
        auStack_98[0] = (undefined4)uVar8;
        uStack_88 = (undefined1)uVar12;
        auStack_c0[0] = (undefined4)uVar7;
        uStack_b0 = (undefined1)uVar11;
        uStack_b8 = uVar9;
        uStack_a8 = uVar13;
        uStack_a0 = uVar3;
        uStack_90 = uVar10;
        uStack_80 = uVar14;
        uStack_78 = uVar6;
        FUN_103ccc4d0(&uStack_110,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
        FUN_103ccc4d0(&uStack_140,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
        puVar4 = auStack_c0;
        FUN_103caea0c(puVar4,auStack_98);
        func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
        func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
        if (((ulong)puVar4 & 1) != 0) goto LAB_103caeed8;
      }
      else {
        if (0xe < uVar6 >> 0x3c) {
          FUN_103ccc4d0(&uStack_110,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
          FUN_103ccc4d0(&uStack_140,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
          func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
LAB_103caeed8:
          uVar9 = param_1[0xf];
          uVar7 = param_1[0xe];
          uVar13 = param_1[0x11];
          uVar11 = param_1[0x10];
          uVar10 = param_2[0xf];
          uVar8 = param_2[0xe];
          uVar14 = param_2[0x11];
          uVar12 = param_2[0x10];
          uVar3 = param_1[0x12];
          uVar6 = param_2[0x12];
          uStack_1a0 = uVar8;
          uStack_198 = uVar10;
          uStack_190 = uVar12;
          uStack_188 = uVar14;
          uStack_180 = uVar6;
          uStack_170 = uVar7;
          uStack_168 = uVar9;
          uStack_160 = uVar11;
          uStack_158 = uVar13;
          uStack_150 = uVar3;
          if (uVar3 >> 0x3c < 0xf) {
            if (0xe < uVar6 >> 0x3c) goto LAB_103caef8c;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uVar8);
            uStack_1e0 = CONCAT71(uStack_1e0._1_7_,(char)uVar12);
            auStack_e8[0] = (undefined4)uVar7;
            uStack_d8 = (undefined1)uVar11;
            uStack_1e8 = uVar10;
            uStack_1d8 = uVar14;
            uStack_1d0 = uVar6;
            uStack_e0 = uVar9;
            uStack_d0 = uVar13;
            uStack_c8 = uVar3;
            FUN_103ccc4d0(&uStack_170,auStack_218,0x112ffd8f8,&UNK_10dc6c5f0);
            FUN_103ccc4d0(&uStack_1a0,auStack_218,0x112ffd8f8,&UNK_10dc6c5f0);
            puVar4 = auStack_e8;
            FUN_103caea0c(puVar4,&uStack_1f0);
            func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
            func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
            if (((ulong)puVar4 & 1) == 0) goto LAB_103caeff0;
          }
          else {
            if (uVar6 >> 0x3c < 0xf) {
LAB_103caef8c:
              uStack_1f0 = uVar7;
              uStack_1e8 = uVar9;
              uStack_1e0 = uVar11;
              uStack_1d8 = uVar13;
              uStack_1d0 = uVar3;
              uStack_1c8 = uVar8;
              uStack_1c0 = uVar10;
              uStack_1b8 = uVar12;
              uStack_1b0 = uVar14;
              uStack_1a8 = uVar6;
              FUN_103ccc4d0(&uStack_170,auStack_e8,0x112ffd8f8,&UNK_10dc6c5f0);
              puVar5 = &uStack_1a0;
              lVar1 = -0xd8;
              goto LAB_103caefcc;
            }
            FUN_103ccc4d0(&uStack_170,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
            FUN_103ccc4d0(&uStack_1a0,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
            func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
          }
          uVar3 = param_1[7];
          func_0x000100e25fcc(uVar3,param_1[8],param_2[7],param_2[8]);
          uVar2 = (uint)uVar3;
          goto LAB_103caeff4;
        }
LAB_103caedf0:
        uStack_1f0 = uVar7;
        uStack_1e8 = uVar9;
        uStack_1e0 = uVar11;
        uStack_1d8 = uVar13;
        uStack_1d0 = uVar3;
        uStack_1c8 = uVar8;
        uStack_1c0 = uVar10;
        uStack_1b8 = uVar12;
        uStack_1b0 = uVar14;
        uStack_1a8 = uVar6;
        FUN_103ccc4d0(&uStack_110,auStack_98,0x112ffd8f8,&UNK_10dc6c5f0);
        puVar5 = &uStack_140;
        lVar1 = -0x88;
LAB_103caefcc:
        FUN_103ccc4d0(puVar5,&stack0xfffffffffffffff0 + lVar1,0x112ffd8f8,&UNK_10dc6c5f0);
        func_0x000103ccc92c(&uStack_1f0,0x113000718,&UNK_10dc76c20);
      }
    }
  }
LAB_103caeff0:
  uVar2 = 0;
LAB_103caeff4:
  return uVar2 & 1;
}



/* Entry: 103caf398; end: 103caf3b7;  */

void FUN_103caf398(void)

{
  func_0x000107c61168(&PTR_PTR_112fffff0);
  return;
}



/* Entry: 103caf3b8; end: 103caf417;  */

undefined8 FUN_103caf3b8(undefined8 param_1,undefined8 param_2)

{
  FUN_103cc0488(param_2,param_1,&UNK_1106f76e8);
  return param_2;
}



/* Entry: 103caf418; end: 103caf43f;  */

void FUN_103caf418(undefined8 *param_1)

{
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 103caf440; end: 103cafad7;  */

uint FUN_103caf440(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_2c8 [40];
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined4 auStack_138 [2];
  ulong uStack_130;
  undefined1 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined4 auStack_110 [2];
  ulong uStack_108;
  undefined1 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 auStack_e8 [2];
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined4 auStack_c0 [2];
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 auStack_98 [2];
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    uVar8 = param_1[0x10];
    uVar6 = param_1[0xf];
    uVar12 = param_1[0x12];
    uVar10 = param_1[0x11];
    uVar2 = param_1[0x13];
    uVar9 = param_2[0x10];
    uVar7 = param_2[0xf];
    uVar13 = param_2[0x12];
    uVar11 = param_2[0x11];
    uVar5 = param_2[0x13];
    uStack_190 = uVar7;
    uStack_188 = uVar9;
    uStack_180 = uVar11;
    uStack_178 = uVar13;
    uStack_170 = uVar5;
    uStack_160 = uVar6;
    uStack_158 = uVar8;
    uStack_150 = uVar10;
    uStack_148 = uVar12;
    uStack_140 = uVar2;
    if (uVar2 >> 0x3c < 0xf) {
      if (0xe < uVar5 >> 0x3c) goto LAB_103caf554;
      auStack_98[0] = (undefined4)uVar7;
      uStack_88 = (undefined1)uVar11;
      auStack_c0[0] = (undefined4)uVar6;
      uStack_b0 = (undefined1)uVar10;
      uStack_b8 = uVar8;
      uStack_a8 = uVar12;
      uStack_a0 = uVar2;
      uStack_90 = uVar9;
      uStack_80 = uVar13;
      uStack_78 = uVar5;
      FUN_103ccc4d0(&uStack_160,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_190,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
      puVar4 = auStack_c0;
      FUN_103caea0c(puVar4,auStack_98);
      func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar5);
      func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar2);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103caf680;
    }
    else if (uVar5 >> 0x3c < 0xf) {
LAB_103caf554:
      uStack_2a0 = uVar6;
      uStack_298 = uVar8;
      uStack_290 = uVar10;
      uStack_288 = uVar12;
      uStack_280 = uVar2;
      uStack_278 = uVar7;
      uStack_270 = uVar9;
      uStack_268 = uVar11;
      uStack_260 = uVar13;
      uStack_258 = uVar5;
      FUN_103ccc4d0(&uStack_160,auStack_98,0x112ffd8f8,&UNK_10dc6c5f0);
      puVar3 = &uStack_190;
      puVar4 = auStack_98;
LAB_103caf594:
      FUN_103ccc4d0(puVar3,puVar4,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103ccc92c(&uStack_2a0,0x113000718,&UNK_10dc76c20);
    }
    else {
      FUN_103ccc4d0(&uStack_160,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_190,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar2);
LAB_103caf680:
      uVar2 = param_1[3];
      if ((((uVar2 == param_2[3]) && (param_1[4] == param_2[4])) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (param_1[5] == param_2[5])) {
        uVar8 = param_1[0x15];
        uVar6 = param_1[0x14];
        uVar12 = param_1[0x17];
        uVar10 = param_1[0x16];
        uVar2 = param_1[0x18];
        uVar9 = param_2[0x15];
        uVar7 = param_2[0x14];
        uVar13 = param_2[0x17];
        uVar11 = param_2[0x16];
        uVar5 = param_2[0x18];
        uStack_1f0 = uVar7;
        uStack_1e8 = uVar9;
        uStack_1e0 = uVar11;
        uStack_1d8 = uVar13;
        uStack_1d0 = uVar5;
        uStack_1c0 = uVar6;
        uStack_1b8 = uVar8;
        uStack_1b0 = uVar10;
        uStack_1a8 = uVar12;
        uStack_1a0 = uVar2;
        if (uVar2 >> 0x3c < 0xf) {
          if (0xe < uVar5 >> 0x3c) goto LAB_103caf768;
          auStack_e8[0] = (undefined4)uVar7;
          uStack_d8 = (undefined1)uVar11;
          auStack_110[0] = (undefined4)uVar6;
          uStack_100 = (undefined1)uVar10;
          uStack_108 = uVar8;
          uStack_f8 = uVar12;
          uStack_f0 = uVar2;
          uStack_e0 = uVar9;
          uStack_d0 = uVar13;
          uStack_c8 = uVar5;
          FUN_103ccc4d0(&uStack_1c0,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
          FUN_103ccc4d0(&uStack_1f0,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
          puVar4 = auStack_110;
          FUN_103caea0c(puVar4,auStack_e8);
          func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar5);
          func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar2);
          if (((ulong)puVar4 & 1) != 0) goto LAB_103caf84c;
        }
        else {
          if (uVar5 >> 0x3c < 0xf) {
LAB_103caf768:
            uStack_2a0 = uVar6;
            uStack_298 = uVar8;
            uStack_290 = uVar10;
            uStack_288 = uVar12;
            uStack_280 = uVar2;
            uStack_278 = uVar7;
            uStack_270 = uVar9;
            uStack_268 = uVar11;
            uStack_260 = uVar13;
            uStack_258 = uVar5;
            FUN_103ccc4d0(&uStack_1c0,auStack_e8,0x112ffd8f8,&UNK_10dc6c5f0);
            puVar3 = &uStack_1f0;
            puVar4 = auStack_e8;
            goto LAB_103caf594;
          }
          FUN_103ccc4d0(&uStack_1c0,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
          FUN_103ccc4d0(&uStack_1f0,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
          func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar2);
LAB_103caf84c:
          uVar9 = param_1[0x1a];
          uVar6 = param_1[0x19];
          uVar13 = param_1[0x1c];
          uVar12 = param_1[0x1b];
          uVar2 = param_1[0x1d];
          uVar10 = param_2[0x1a];
          uVar7 = param_2[0x19];
          uVar11 = param_2[0x1c];
          uVar8 = param_2[0x1b];
          uVar5 = param_2[0x1d];
          uStack_250 = uVar7;
          uStack_248 = uVar10;
          uStack_240 = uVar8;
          uStack_238 = uVar11;
          uStack_230 = uVar5;
          uStack_220 = uVar6;
          uStack_218 = uVar9;
          uStack_210 = uVar12;
          uStack_208 = uVar13;
          uStack_200 = uVar2;
          if (uVar2 >> 0x3c < 0xf) {
            if (0xe < uVar5 >> 0x3c) goto LAB_103caf90c;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)uVar7);
            uStack_290 = CONCAT71(uStack_290._1_7_,(char)uVar8);
            auStack_138[0] = (undefined4)uVar6;
            uStack_128 = (undefined1)uVar12;
            uStack_298 = uVar10;
            uStack_288 = uVar11;
            uStack_280 = uVar5;
            uStack_130 = uVar9;
            uStack_120 = uVar13;
            uStack_118 = uVar2;
            FUN_103ccc4d0(&uStack_220,auStack_2c8,0x112ffd8f8,&UNK_10dc6c5f0);
            FUN_103ccc4d0(&uStack_250,auStack_2c8,0x112ffd8f8,&UNK_10dc6c5f0);
            puVar4 = auStack_138;
            FUN_103caea0c(puVar4,&uStack_2a0);
            func_0x000103c86294(uVar7,uVar10,uVar8,uVar11,uVar5);
            func_0x000103c86294(uVar6,uVar9,uVar12,uVar13,uVar2);
            if (((ulong)puVar4 & 1) == 0) goto LAB_103caf5b8;
          }
          else {
            if (uVar5 >> 0x3c < 0xf) {
LAB_103caf90c:
              uStack_2a0 = uVar6;
              uStack_298 = uVar9;
              uStack_290 = uVar12;
              uStack_288 = uVar13;
              uStack_280 = uVar2;
              uStack_278 = uVar7;
              uStack_270 = uVar10;
              uStack_268 = uVar8;
              uStack_260 = uVar11;
              uStack_258 = uVar5;
              FUN_103ccc4d0(&uStack_220,auStack_138,0x112ffd8f8,&UNK_10dc6c5f0);
              puVar3 = &uStack_250;
              puVar4 = auStack_138;
              goto LAB_103caf594;
            }
            FUN_103ccc4d0(&uStack_220,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
            FUN_103ccc4d0(&uStack_250,&uStack_2a0,0x112ffd8f8,&UNK_10dc6c5f0);
            func_0x000103c86294(uVar6,uVar9,uVar12,uVar13,uVar2);
          }
          uVar2 = param_1[6];
          if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[8];
            if ((((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
                (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (param_1[10] == param_2[10])) {
              uVar2 = param_1[0xb];
              uVar5 = param_2[0xb];
              if ((char)param_2[0xc] == '\x01') {
                if ((long)uVar5 < 2) {
                  if (uVar5 == 0) {
                    if (uVar2 == 0) {
LAB_103cafa88:
                      if (*(int *)((long)param_1 + 100) == *(int *)((long)param_2 + 100)) {
                        uVar2 = param_1[0xd];
                        func_0x000100e25fcc(uVar2,param_1[0xe],param_2[0xd],param_2[0xe]);
                        uVar1 = (uint)uVar2;
                        goto LAB_103caf5bc;
                      }
                    }
                  }
                  else if (uVar2 == 1) goto LAB_103cafa88;
                }
                else if (uVar5 == 2) {
                  if (uVar2 == 2) goto LAB_103cafa88;
                }
                else if (uVar5 == 3) {
                  if (uVar2 == 3) goto LAB_103cafa88;
                }
                else if (uVar2 == 4) goto LAB_103cafa88;
              }
              else if (uVar2 == uVar5) goto LAB_103cafa88;
            }
          }
        }
      }
    }
  }
LAB_103caf5b8:
  uVar1 = 0;
LAB_103caf5bc:
  return uVar1 & 1;
}



/* Entry: 103cafad8; end: 103cafb3f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103cafad8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103cafb40; end: 103cafb4b;  */

void FUN_103cafb40(void)

{
  return;
}



/* Entry: 103cafb4c; end: 103cafb77;  */

undefined8 FUN_103cafb4c(undefined8 param_1)

{
  FUN_103cc1d10(param_1,&UNK_1106f8128);
  return param_1;
}



/* Entry: 103cafb78; end: 103cafb93;  */

void FUN_103cafb78(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103cafb94; end: 103caffcf;  */

uint FUN_103cafb94(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_218 [40];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 auStack_e8 [2];
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined4 auStack_c0 [2];
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 auStack_98 [2];
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    uVar9 = param_1[8];
    uVar7 = param_1[7];
    uVar13 = param_1[10];
    uVar11 = param_1[9];
    uVar3 = param_1[0xb];
    uVar10 = param_2[8];
    uVar8 = param_2[7];
    uVar14 = param_2[10];
    uVar12 = param_2[9];
    uVar6 = param_2[0xb];
    uStack_140 = uVar8;
    uStack_138 = uVar10;
    uStack_130 = uVar12;
    uStack_128 = uVar14;
    uStack_120 = uVar6;
    uStack_110 = uVar7;
    uStack_108 = uVar9;
    uStack_100 = uVar11;
    uStack_f8 = uVar13;
    uStack_f0 = uVar3;
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_103cafcb0;
      auStack_98[0] = (undefined4)uVar8;
      uStack_88 = (undefined1)uVar12;
      auStack_c0[0] = (undefined4)uVar7;
      uStack_b0 = (undefined1)uVar11;
      uStack_b8 = uVar9;
      uStack_a8 = uVar13;
      uStack_a0 = uVar3;
      uStack_90 = uVar10;
      uStack_80 = uVar14;
      uStack_78 = uVar6;
      FUN_103ccc4d0(&uStack_110,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_140,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
      puVar4 = auStack_c0;
      FUN_103caea0c(puVar4,auStack_98);
      func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
      func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103cafd98;
    }
    else if (uVar6 >> 0x3c < 0xf) {
LAB_103cafcb0:
      uStack_1f0 = uVar7;
      uStack_1e8 = uVar9;
      uStack_1e0 = uVar11;
      uStack_1d8 = uVar13;
      uStack_1d0 = uVar3;
      uStack_1c8 = uVar8;
      uStack_1c0 = uVar10;
      uStack_1b8 = uVar12;
      uStack_1b0 = uVar14;
      uStack_1a8 = uVar6;
      FUN_103ccc4d0(&uStack_110,auStack_98,0x112ffd8f8,&UNK_10dc6c5f0);
      puVar5 = &uStack_140;
      lVar1 = -0x88;
LAB_103cafe8c:
      FUN_103ccc4d0(puVar5,&stack0xfffffffffffffff0 + lVar1,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103ccc92c(&uStack_1f0,0x113000718,&UNK_10dc76c20);
    }
    else {
      FUN_103ccc4d0(&uStack_110,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_140,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
LAB_103cafd98:
      uVar9 = param_1[0xd];
      uVar7 = param_1[0xc];
      uVar13 = param_1[0xf];
      uVar11 = param_1[0xe];
      uVar10 = param_2[0xd];
      uVar8 = param_2[0xc];
      uVar14 = param_2[0xf];
      uVar12 = param_2[0xe];
      uVar3 = param_1[0x10];
      uVar6 = param_2[0x10];
      uStack_1a0 = uVar8;
      uStack_198 = uVar10;
      uStack_190 = uVar12;
      uStack_188 = uVar14;
      uStack_180 = uVar6;
      uStack_170 = uVar7;
      uStack_168 = uVar9;
      uStack_160 = uVar11;
      uStack_158 = uVar13;
      uStack_150 = uVar3;
      if (uVar3 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_103cafe4c;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uVar8);
        uStack_1e0 = CONCAT71(uStack_1e0._1_7_,(char)uVar12);
        auStack_e8[0] = (undefined4)uVar7;
        uStack_d8 = (undefined1)uVar11;
        uStack_1e8 = uVar10;
        uStack_1d8 = uVar14;
        uStack_1d0 = uVar6;
        uStack_e0 = uVar9;
        uStack_d0 = uVar13;
        uStack_c8 = uVar3;
        FUN_103ccc4d0(&uStack_170,auStack_218,0x112ffd8f8,&UNK_10dc6c5f0);
        FUN_103ccc4d0(&uStack_1a0,auStack_218,0x112ffd8f8,&UNK_10dc6c5f0);
        puVar4 = auStack_e8;
        FUN_103caea0c(puVar4,&uStack_1f0);
        func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
        func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
        if (((ulong)puVar4 & 1) == 0) goto LAB_103cafeb0;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_103cafe4c:
          uStack_1f0 = uVar7;
          uStack_1e8 = uVar9;
          uStack_1e0 = uVar11;
          uStack_1d8 = uVar13;
          uStack_1d0 = uVar3;
          uStack_1c8 = uVar8;
          uStack_1c0 = uVar10;
          uStack_1b8 = uVar12;
          uStack_1b0 = uVar14;
          uStack_1a8 = uVar6;
          FUN_103ccc4d0(&uStack_170,auStack_e8,0x112ffd8f8,&UNK_10dc6c5f0);
          puVar5 = &uStack_1a0;
          lVar1 = -0xd8;
          goto LAB_103cafe8c;
        }
        FUN_103ccc4d0(&uStack_170,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
        FUN_103ccc4d0(&uStack_1a0,&uStack_1f0,0x112ffd8f8,&UNK_10dc6c5f0);
        func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
      }
      uVar3 = param_1[3];
      uVar6 = param_2[3];
      if ((char)param_2[4] == '\x01') {
        if (uVar6 == 0) {
          if (uVar3 == 0) goto LAB_103caffc0;
        }
        else if (uVar6 == 1) {
          if (uVar3 == 1) {
LAB_103caffc0:
            uVar3 = param_1[5];
            func_0x000100e25fcc(uVar3,param_1[6],param_2[5],param_2[6]);
            uVar2 = (uint)uVar3;
            goto LAB_103cafeb4;
          }
        }
        else if (uVar3 == 2) goto LAB_103caffc0;
      }
      else if (uVar3 == uVar6) goto LAB_103caffc0;
    }
  }
LAB_103cafeb0:
  uVar2 = 0;
LAB_103cafeb4:
  return uVar2 & 1;
}



/* Entry: 103caffd0; end: 103caffef;  */

void FUN_103caffd0(void)

{
  func_0x000107c61168(&PTR_PTR_1130000f0);
  return;
}



/* Entry: 103cafff0; end: 103cb020b;  */

void FUN_103cafff0(long param_1)

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
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [296];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [296];
  undefined1 auStack_2b8 [296];
  undefined1 auStack_190 [304];
  
  puVar14 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0xf000000000000000;
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar13 = 0;
  func_0x000103cb0294(auStack_3e0);
  func_0x000107c610b4(unaff_x20 + 0x48,auStack_3e0,0x128);
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined1 *)(unaff_x20 + 0x178) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_3f8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar14,auStack_410,1,0);
  uVar12 = *puVar14;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar14 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  FUN_103cb020c(uVar15,uVar5,uVar1,uVar6,uVar2,uVar7,&SUB_10006c00c);
  FUN_103cb020c(uVar12,uVar3,uVar8,uVar4,uVar9,uVar11,&SUB_10006c090);
  func_0x000107c61428(param_1 + 0x40,auStack_428,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar13,auStack_440,1,0);
  *puVar13 = uVar15;
  func_0x000107c61428(param_1 + 0x48,auStack_458,0,0);
  func_0x000107c610b4(auStack_2b8,param_1 + 0x48,0x128);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_470,1,0);
  func_0x000107c610b4(auStack_190,unaff_x20 + 0x48,0x128);
  func_0x000107c610b4(unaff_x20 + 0x48,auStack_2b8,0x128);
  FUN_103ccc4d0(auStack_2b8,auStack_598,0x112ffe700,&UNK_10dc6e2f8);
  func_0x000103ccc92c(auStack_190,0x112ffe700,&UNK_10dc6e2f8);
  func_0x000107c61428(param_1 + 0x170,auStack_598,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x170);
  uVar10 = *(undefined1 *)(param_1 + 0x178);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_5b0,1,0);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar15;
  *(undefined1 *)(unaff_x20 + 0x178) = uVar10;
  return;
}



/* Entry: 103cb020c; end: 103cb027b;  */

void FUN_103cb020c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  (*UNRECOVERED_JUMPTABLE)();
  (*UNRECOVERED_JUMPTABLE)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000103cb0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_6);
  return;
}



/* Entry: 103cb027c; end: 103cb02c3;  */

int FUN_103cb027c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103cb02c4; end: 103cb0997;  */

uint FUN_103cb02c4(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_698 [136];
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 auStack_c0 [2];
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined4 auStack_98 [2];
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        if (lVar5 == 0) goto LAB_103cb0328;
      }
      else if (lVar6 == 1) {
        if (lVar5 == 1) {
LAB_103cb0328:
          uVar7 = param_1[2];
          if (((uVar7 == param_2[2] && param_1[3] == param_2[3]) ||
              (func_0x000107c605b8(), (uVar7 & 1) != 0)) && (param_1[4] == param_2[4])) {
            uVar7 = param_1[5];
            if (((uVar7 == param_2[5]) && (param_1[6] == param_2[6])) ||
               (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
              lVar9 = param_1[0x10];
              lVar5 = param_1[0xf];
              lVar13 = param_1[0x12];
              lVar11 = param_1[0x11];
              uVar7 = param_1[0x13];
              lVar10 = param_2[0x10];
              lVar6 = param_2[0xf];
              lVar14 = param_2[0x12];
              lVar12 = param_2[0x11];
              uVar8 = param_2[0x13];
              lStack_1b0 = lVar6;
              lStack_1a8 = lVar10;
              lStack_1a0 = lVar12;
              lStack_198 = lVar14;
              uStack_190 = uVar8;
              lStack_180 = lVar5;
              lStack_178 = lVar9;
              lStack_170 = lVar11;
              lStack_168 = lVar13;
              uStack_160 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar8 >> 0x3c) goto LAB_103cb0488;
                auStack_98[0] = (undefined4)lVar6;
                uStack_88 = (undefined1)lVar12;
                auStack_c0[0] = (undefined4)lVar5;
                uStack_b0 = (undefined1)lVar11;
                lStack_b8 = lVar9;
                lStack_a8 = lVar13;
                uStack_a0 = uVar7;
                lStack_90 = lVar10;
                lStack_80 = lVar14;
                uStack_78 = uVar8;
                FUN_103ccc4d0(&lStack_180,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                FUN_103ccc4d0(&lStack_1b0,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                puVar3 = auStack_c0;
                FUN_103caea0c(puVar3,auStack_98);
                func_0x000103c86294(lVar6,lVar10,lVar12,lVar14,uVar8);
                func_0x000103c86294(lVar5,lVar9,lVar11,lVar13,uVar7);
                if (((ulong)puVar3 & 1) != 0) goto LAB_103cb05d4;
              }
              else if (uVar8 >> 0x3c < 0xf) {
LAB_103cb0488:
                FUN_103ccc4d0(&lStack_180,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                FUN_103ccc4d0(&lStack_1b0,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                func_0x000103c86294(lVar5,lVar9,lVar11,lVar13,uVar7);
                func_0x000103c86294(lVar6,lVar10,lVar12,lVar14,uVar8);
              }
              else {
                FUN_103ccc4d0(&lStack_180,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                FUN_103ccc4d0(&lStack_1b0,&lStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                func_0x000103c86294(lVar5,lVar9,lVar11,lVar13,uVar7);
LAB_103cb05d4:
                lVar5 = param_1[7];
                lVar6 = param_2[7];
                if ((char)param_2[8] == '\x01') {
                  if (lVar6 < 2) {
                    if (lVar6 == 0) {
                      if (lVar5 == 0) {
LAB_103cb0614:
                        uVar7 = param_1[9];
                        if (((uVar7 == param_2[9]) && (param_1[10] == param_2[10])) ||
                           (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
                          lStack_388 = param_1[0x1f];
                          lStack_390 = param_1[0x1e];
                          lStack_1d8 = param_1[0x21];
                          lStack_1e0 = param_1[0x20];
                          lStack_378 = param_1[0x21];
                          lStack_380 = param_1[0x20];
                          lStack_1c8 = param_1[0x23];
                          lStack_1d0 = param_1[0x22];
                          lStack_3c8 = param_1[0x17];
                          lStack_3d0 = param_1[0x16];
                          lStack_218 = param_1[0x19];
                          lStack_220 = param_1[0x18];
                          lStack_3b8 = param_1[0x19];
                          lStack_3c0 = param_1[0x18];
                          lStack_208 = param_1[0x1b];
                          lStack_210 = param_1[0x1a];
                          lStack_3a8 = param_1[0x1b];
                          lStack_3b0 = param_1[0x1a];
                          lStack_1f8 = param_1[0x1d];
                          lStack_200 = param_1[0x1c];
                          lStack_398 = param_1[0x1d];
                          lStack_3a0 = param_1[0x1c];
                          lStack_1e8 = param_1[0x1f];
                          lStack_1f0 = param_1[0x1e];
                          lStack_238 = param_1[0x15];
                          lStack_240 = param_1[0x14];
                          lStack_228 = param_1[0x17];
                          lStack_230 = param_1[0x16];
                          lStack_3d8 = param_1[0x15];
                          lStack_3e0 = param_1[0x14];
                          lStack_300 = param_2[0x1f];
                          lStack_308 = param_2[0x1e];
                          lStack_268 = param_2[0x21];
                          lStack_270 = param_2[0x20];
                          lStack_2f0 = param_2[0x21];
                          lStack_2f8 = param_2[0x20];
                          lStack_258 = param_2[0x23];
                          lStack_260 = param_2[0x22];
                          lStack_340 = param_2[0x17];
                          lStack_348 = param_2[0x16];
                          lStack_2a8 = param_2[0x19];
                          lStack_2b0 = param_2[0x18];
                          lStack_330 = param_2[0x19];
                          lStack_338 = param_2[0x18];
                          lStack_298 = param_2[0x1b];
                          lStack_2a0 = param_2[0x1a];
                          lStack_320 = param_2[0x1b];
                          lStack_328 = param_2[0x1a];
                          lStack_288 = param_2[0x1d];
                          lStack_290 = param_2[0x1c];
                          lStack_310 = param_2[0x1d];
                          lStack_318 = param_2[0x1c];
                          lStack_278 = param_2[0x1f];
                          lStack_280 = param_2[0x1e];
                          lStack_2c8 = param_2[0x15];
                          lStack_2d0 = param_2[0x14];
                          lStack_2b8 = param_2[0x17];
                          lStack_2c0 = param_2[0x16];
                          lStack_350 = param_2[0x15];
                          lStack_358 = param_2[0x14];
                          lStack_368 = param_1[0x23];
                          lStack_370 = param_1[0x22];
                          lStack_2e0 = param_2[0x23];
                          lStack_2e8 = param_2[0x22];
                          lStack_1c0 = param_1[0x24];
                          lStack_250 = param_2[0x24];
                          lStack_360 = param_1[0x24];
                          lStack_2d8 = param_2[0x24];
                          iVar2 = (int)&lStack_3e0;
                          func_0x000100d6b3c0();
                          if (iVar2 == 1) {
                            iVar2 = (int)&lStack_358;
                            func_0x000100d6b3c0();
                            if (iVar2 == 1) {
                              lStack_488 = lStack_378;
                              lStack_490 = lStack_380;
                              lStack_478 = lStack_368;
                              lStack_480 = lStack_370;
                              lStack_470 = lStack_360;
                              lStack_4c8 = lStack_3b8;
                              lStack_4d0 = lStack_3c0;
                              lStack_4b8 = lStack_3a8;
                              lStack_4c0 = lStack_3b0;
                              lStack_4a8 = lStack_398;
                              lStack_4b0 = lStack_3a0;
                              lStack_498 = lStack_388;
                              lStack_4a0 = lStack_390;
                              lStack_4e8 = lStack_3d8;
                              lStack_4f0 = lStack_3e0;
                              lStack_4d8 = lStack_3c8;
                              lStack_4e0 = lStack_3d0;
                              FUN_103ccc4d0(&lStack_240,&lStack_150,0x112ffe690,&UNK_10dc6e2e0);
                              FUN_103ccc4d0(&lStack_2d0,&lStack_150,0x112ffe690,&UNK_10dc6e2e0);
                              func_0x000103ccc92c(&lStack_4f0,0x112ffe690,&UNK_10dc6e2e0);
LAB_103cb0964:
                              uVar7 = param_1[0xb];
                              if (((uVar7 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
                                 (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
                                lVar5 = param_1[0xd];
                                func_0x000100e25fcc(lVar5,param_1[0xe],param_2[0xd],param_2[0xe]);
                                uVar1 = (uint)lVar5;
                                goto LAB_103cb04fc;
                              }
                            }
                            else {
LAB_103cb07d8:
                              func_0x000107c610b4(&lStack_4f0,&lStack_3e0,0x110);
                              FUN_103ccc4d0(&lStack_240,&lStack_150,0x112ffe690,&UNK_10dc6e2e0);
                              FUN_103ccc4d0(&lStack_2d0,&lStack_150,0x112ffe690,&UNK_10dc6e2e0);
                              func_0x000103ccc92c(&lStack_4f0,0x112ffe698,&UNK_10dc6e2e8);
                            }
                          }
                          else {
                            lStack_518 = lStack_378;
                            lStack_520 = lStack_380;
                            lStack_508 = lStack_368;
                            lStack_510 = lStack_370;
                            lStack_500 = lStack_360;
                            lStack_558 = lStack_3b8;
                            lStack_560 = lStack_3c0;
                            lStack_548 = lStack_3a8;
                            lStack_550 = lStack_3b0;
                            lStack_538 = lStack_398;
                            lStack_540 = lStack_3a0;
                            lStack_528 = lStack_388;
                            lStack_530 = lStack_390;
                            lStack_578 = lStack_3d8;
                            lStack_580 = lStack_3e0;
                            lStack_568 = lStack_3c8;
                            lStack_570 = lStack_3d0;
                            iVar2 = (int)&lStack_358;
                            func_0x000100d6b3c0();
                            if (iVar2 == 1) goto LAB_103cb07d8;
                            lStack_5a8 = lStack_2f0;
                            lStack_5b0 = lStack_2f8;
                            lStack_598 = lStack_2e0;
                            lStack_5a0 = lStack_2e8;
                            lStack_590 = lStack_2d8;
                            lStack_5e8 = lStack_330;
                            lStack_5f0 = lStack_338;
                            lStack_5d8 = lStack_320;
                            lStack_5e0 = lStack_328;
                            lStack_5c8 = lStack_310;
                            lStack_5d0 = lStack_318;
                            lStack_5b8 = lStack_300;
                            lStack_5c0 = lStack_308;
                            lStack_608 = lStack_350;
                            lStack_610 = lStack_358;
                            lStack_5f8 = lStack_340;
                            lStack_600 = lStack_348;
                            lStack_488 = lStack_2f0;
                            lStack_490 = lStack_2f8;
                            lStack_478 = lStack_2e0;
                            lStack_480 = lStack_2e8;
                            lStack_470 = lStack_2d8;
                            lStack_4c8 = lStack_330;
                            lStack_4d0 = lStack_338;
                            lStack_4b8 = lStack_320;
                            lStack_4c0 = lStack_328;
                            lStack_4a8 = lStack_310;
                            lStack_4b0 = lStack_318;
                            lStack_498 = lStack_300;
                            lStack_4a0 = lStack_308;
                            lStack_4e8 = lStack_350;
                            lStack_4f0 = lStack_358;
                            lStack_4d8 = lStack_340;
                            lStack_4e0 = lStack_348;
                            lStack_e8 = lStack_518;
                            lStack_f0 = lStack_520;
                            lStack_d8 = lStack_508;
                            lStack_e0 = lStack_510;
                            lStack_d0 = lStack_500;
                            lStack_128 = lStack_558;
                            lStack_130 = lStack_560;
                            lStack_118 = lStack_548;
                            lStack_120 = lStack_550;
                            lStack_108 = lStack_538;
                            lStack_110 = lStack_540;
                            lStack_f8 = lStack_528;
                            lStack_100 = lStack_530;
                            lStack_148 = lStack_578;
                            lStack_150 = lStack_580;
                            lStack_138 = lStack_568;
                            lStack_140 = lStack_570;
                            FUN_103ccc4d0(&lStack_240,auStack_698,0x112ffe690,&UNK_10dc6e2e0);
                            FUN_103ccc4d0(&lStack_2d0,auStack_698,0x112ffe690,&UNK_10dc6e2e0);
                            plVar4 = &lStack_150;
                            FUN_103cafb94(plVar4,&lStack_4f0);
                            func_0x000103ccc92c(&lStack_610,0x112ffe690,&UNK_10dc6e2e0);
                            func_0x000103ccc92c(&lStack_3e0,0x112ffe690,&UNK_10dc6e2e0);
                            if (((ulong)plVar4 & 1) != 0) goto LAB_103cb0964;
                          }
                        }
                      }
                    }
                    else if (lVar5 == 1) goto LAB_103cb0614;
                  }
                  else if (lVar6 == 2) {
                    if (lVar5 == 2) goto LAB_103cb0614;
                  }
                  else if (lVar6 == 3) {
                    if (lVar5 == 3) goto LAB_103cb0614;
                  }
                  else if (lVar5 == 4) goto LAB_103cb0614;
                }
                else if (lVar5 == lVar6) goto LAB_103cb0614;
              }
            }
          }
        }
      }
      else if (lVar5 == 2) goto LAB_103cb0328;
    }
    else if (lVar6 == 3) {
      if (lVar5 == 3) goto LAB_103cb0328;
    }
    else if (lVar6 == 4) {
      if (lVar5 == 4) goto LAB_103cb0328;
    }
    else if (lVar5 == 5) goto LAB_103cb0328;
  }
  else if (lVar5 == lVar6) goto LAB_103cb0328;
  uVar1 = 0;
LAB_103cb04fc:
  return uVar1 & 1;
}



/* Entry: 103cb0998; end: 103cb09a3;  */

void FUN_103cb0998(void)

{
  return;
}



/* Entry: 103cb09a4; end: 103cb0a3f;  */

undefined8 FUN_103cb09a4(undefined8 param_1,undefined8 param_2)

{
  FUN_103d9e3d8(param_2,param_1);
  return param_2;
}



/* Entry: 103cb0a40; end: 103cb0e1b;  */

uint FUN_103cb0a40(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auStack_2e8 [88];
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_103cb0d98;
  }
  uVar17 = param_1[9];
  uVar14 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uVar23 = param_1[7];
  uVar22 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uVar21 = param_1[0xb];
  uVar20 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_1d8 = param_1[5];
  uVar2 = param_1[4];
  uStack_160 = param_2[9];
  uStack_168 = param_2[8];
  uStack_f8 = param_2[0xb];
  uStack_100 = param_2[10];
  uStack_170 = param_2[7];
  uStack_178 = param_2[6];
  uStack_108 = param_2[9];
  uStack_110 = param_2[8];
  uStack_150 = param_2[0xb];
  uStack_158 = param_2[10];
  uStack_e8 = param_2[0xd];
  uStack_f0 = param_2[0xc];
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_180 = param_2[5];
  uStack_188 = param_2[4];
  uVar11 = param_1[0xd];
  uVar8 = param_1[0xc];
  uStack_140 = param_2[0xd];
  uStack_148 = param_2[0xc];
  uStack_80 = param_1[0xe];
  uStack_e0 = param_2[0xe];
  uVar7 = param_1[0xe];
  uStack_138 = param_2[0xe];
  uStack_1e0 = uVar2;
  uStack_1d0 = uVar22;
  uStack_1c8 = uVar23;
  uStack_1c0 = uVar14;
  uStack_1b8 = uVar17;
  uStack_1b0 = uVar20;
  uStack_1a8 = uVar21;
  uStack_1a0 = uVar8;
  uStack_198 = uVar11;
  uStack_190 = uVar7;
  if (uStack_1d8 == 0) {
    if (uStack_180 == 0) {
      FUN_103ccc4d0(&uStack_d0,&uStack_290,0x112ffe038,&UNK_10dc6e248);
      FUN_103ccc4d0(&uStack_130,&uStack_290,0x112ffe038,&UNK_10dc6e248);
LAB_103cb0df4:
      func_0x000103ccc92c(&uStack_1e0,0x112ffe038,&UNK_10dc6e248);
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_103cb0d98;
    }
LAB_103cb0cbc:
    uStack_290 = uVar2;
    uStack_288 = uStack_1d8;
    uStack_280 = uVar22;
    uStack_278 = uVar23;
    uStack_270 = uVar14;
    uStack_268 = uVar17;
    uStack_260 = uVar20;
    uStack_258 = uVar21;
    uStack_250 = uVar8;
    uStack_248 = uVar11;
    uStack_240 = uVar7;
    uStack_238 = uStack_188;
    uStack_230 = uStack_180;
    uStack_228 = uStack_178;
    uStack_220 = uStack_170;
    uStack_218 = uStack_168;
    uStack_210 = uStack_160;
    uStack_208 = uStack_158;
    uStack_200 = uStack_150;
    uStack_1f8 = uStack_148;
    uStack_1f0 = uStack_140;
    uStack_1e8 = uStack_138;
    FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
    FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
    uVar4 = 0x112ffe040;
    puVar5 = &UNK_10dc6e250;
    puVar3 = &uStack_290;
  }
  else {
    if (uStack_180 == 0) goto LAB_103cb0cbc;
    uStack_288 = param_2[5];
    uStack_290 = param_2[4];
    uVar18 = param_2[7];
    uVar15 = param_2[6];
    uVar12 = param_2[9];
    uVar9 = param_2[8];
    uVar19 = param_2[0xb];
    uVar16 = param_2[10];
    uVar13 = param_2[0xd];
    uVar10 = param_2[0xc];
    uVar6 = param_2[0xe];
    uStack_280 = uVar15;
    uStack_278 = uVar18;
    uStack_270 = uVar9;
    uStack_268 = uVar12;
    uStack_260 = uVar16;
    uStack_258 = uVar19;
    uStack_250 = uVar10;
    uStack_248 = uVar13;
    uStack_240 = uVar6;
    if (((((uVar2 == uStack_290) && (uStack_288 == uStack_1d8)) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
        (((uVar22 == uVar15 && (uVar23 == uVar18)) ||
         (func_0x000107c605b8(uVar22,uVar23,uVar15,uVar18,0), (uVar22 & 1) != 0)))) &&
       ((((uVar14 == uVar9 && (uVar17 == uVar12)) ||
         (func_0x000107c605b8(uVar14,uVar17,uVar9,uVar12,0), (uVar14 & 1) != 0)) &&
        ((((uVar20 == uVar16 && (uVar21 == uVar19)) || (func_0x000107c605b8(), (uVar20 & 1) != 0))
         && (uVar8 == uVar10)))))) {
      FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      func_0x000100e25fcc(uVar11,uVar7,uVar13,uVar6);
      func_0x000103ccc92c(&uStack_290,0x112ffe038,&UNK_10dc6e248);
      if ((uVar11 & 1) != 0) goto LAB_103cb0df4;
      uVar4 = 0x112ffe038;
      puVar5 = &UNK_10dc6e248;
      puVar3 = &uStack_1e0;
    }
    else {
      uVar4 = 0x112ffe038;
      puVar5 = &UNK_10dc6e248;
      FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      func_0x000103ccc92c(&uStack_290,0x112ffe038,&UNK_10dc6e248);
      puVar3 = &uStack_1e0;
    }
  }
  func_0x000103ccc92c(puVar3,uVar4,puVar5);
  uVar1 = 0;
LAB_103cb0d98:
  return uVar1 & 1;
}



/* Entry: 103cb0e1c; end: 103cb0e67;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cb0e1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 103cb0e68; end: 103cb0e93;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103cb0e68(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103cb0e94; end: 103cb0ea7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cb0e94(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103cb0ea8; end: 103cb0f33;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103cb0ea8(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103cb0f34; end: 103cb122f;  */

uint FUN_103cb0f34(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_3a0 [96];
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_d8 = param_1[0xc];
  uStack_e0 = param_1[0xb];
  uStack_c8 = param_1[0xe];
  uStack_d0 = param_1[0xd];
  uStack_b8 = param_1[0x10];
  uStack_c0 = param_1[0xf];
  uStack_a8 = param_1[0x12];
  uStack_b0 = param_1[0x11];
  uStack_f8 = param_1[8];
  uStack_100 = param_1[7];
  uStack_e8 = param_1[10];
  uStack_f0 = param_1[9];
  uStack_138 = param_2[0xc];
  uStack_140 = param_2[0xb];
  uStack_128 = param_2[0xe];
  uStack_130 = param_2[0xd];
  uStack_118 = param_2[0x10];
  uStack_120 = param_2[0xf];
  uStack_108 = param_2[0x12];
  uStack_110 = param_2[0x11];
  uStack_158 = param_2[8];
  uStack_160 = param_2[7];
  uStack_148 = param_2[10];
  uStack_150 = param_2[9];
  uStack_1f8 = param_1[0xc];
  uStack_200 = param_1[0xb];
  uStack_1e8 = param_1[0xe];
  uStack_1f0 = param_1[0xd];
  uStack_1d8 = param_1[0x10];
  uStack_1e0 = param_1[0xf];
  uStack_1c8 = param_1[0x12];
  uStack_1d0 = param_1[0x11];
  uStack_218 = param_1[8];
  uStack_220 = param_1[7];
  uStack_208 = param_1[10];
  uStack_210 = param_1[9];
  uStack_258 = param_2[0xc];
  uStack_260 = param_2[0xb];
  uStack_248 = param_2[0xe];
  uStack_250 = param_2[0xd];
  uStack_238 = param_2[0x10];
  uStack_240 = param_2[0xf];
  uStack_228 = param_2[0x12];
  uStack_230 = param_2[0x11];
  uStack_278 = param_2[8];
  uStack_280 = param_2[7];
  uStack_268 = param_2[10];
  uStack_270 = param_2[9];
  uStack_1c0 = uStack_280;
  uStack_1b8 = uStack_278;
  uStack_1b0 = uStack_270;
  uStack_1a8 = uStack_268;
  uStack_1a0 = uStack_260;
  uStack_198 = uStack_258;
  uStack_190 = uStack_250;
  uStack_188 = uStack_248;
  uStack_180 = uStack_240;
  uStack_178 = uStack_238;
  uStack_170 = uStack_230;
  uStack_168 = uStack_228;
  if (uStack_208 == 0) {
    if (uStack_268 != 0) goto LAB_103cb10bc;
    uStack_2b8 = param_1[0xc];
    uStack_2c0 = param_1[0xb];
    uStack_2a8 = param_1[0xe];
    uStack_2b0 = param_1[0xd];
    uStack_298 = param_1[0x10];
    uStack_2a0 = param_1[0xf];
    uStack_288 = param_1[0x12];
    uStack_290 = param_1[0x11];
    uStack_2d8 = param_1[8];
    uStack_2e0 = param_1[7];
    uStack_2c8 = param_1[10];
    uStack_2d0 = param_1[9];
    FUN_103ccc4d0(&uStack_100,&uStack_a0,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_160,&uStack_a0,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_2e0,0x112ffe118,&UNK_10dc6e270);
LAB_103cb11c8:
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      if ((((uVar3 == param_2[2]) && (param_1[3] == param_2[3])) ||
          (func_0x000107c605b8(), (uVar3 & 1) != 0)) && (param_1[4] == param_2[4])) {
        uVar3 = param_1[5];
        func_0x000100e25fcc(uVar3,param_1[6],param_2[5],param_2[6]);
        uVar1 = (uint)uVar3;
        goto LAB_103cb1140;
      }
    }
  }
  else if (uStack_268 == 0) {
LAB_103cb10bc:
    uStack_2e0 = uStack_220;
    uStack_2d8 = uStack_218;
    uStack_2d0 = uStack_210;
    uStack_2c8 = uStack_208;
    uStack_2c0 = uStack_200;
    uStack_2b8 = uStack_1f8;
    uStack_2b0 = uStack_1f0;
    uStack_2a8 = uStack_1e8;
    uStack_2a0 = uStack_1e0;
    uStack_298 = uStack_1d8;
    uStack_290 = uStack_1d0;
    uStack_288 = uStack_1c8;
    FUN_103ccc4d0(&uStack_100,&uStack_a0,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_160,&uStack_a0,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_2e0,0x112ffe120,&UNK_10dc6e278);
  }
  else {
    uStack_318 = param_2[0xc];
    uStack_320 = param_2[0xb];
    uStack_308 = param_2[0xe];
    uStack_310 = param_2[0xd];
    uStack_2f8 = param_2[0x10];
    uStack_300 = param_2[0xf];
    uStack_2e8 = param_2[0x12];
    uStack_2f0 = param_2[0x11];
    uStack_338 = param_2[8];
    uStack_340 = param_2[7];
    uStack_328 = param_2[10];
    uStack_330 = param_2[9];
    uStack_78 = param_1[0xc];
    uStack_80 = param_1[0xb];
    uStack_68 = param_1[0xe];
    uStack_70 = param_1[0xd];
    uStack_58 = param_1[0x10];
    uStack_60 = param_1[0xf];
    uStack_48 = param_1[0x12];
    uStack_50 = param_1[0x11];
    uStack_98 = param_1[8];
    uStack_a0 = param_1[7];
    uStack_88 = param_1[10];
    uStack_90 = param_1[9];
    uStack_2e0 = uStack_340;
    uStack_2d8 = uStack_338;
    uStack_2d0 = uStack_330;
    uStack_2c8 = uStack_328;
    uStack_2c0 = uStack_320;
    uStack_2b8 = uStack_318;
    uStack_2b0 = uStack_310;
    uStack_2a8 = uStack_308;
    uStack_2a0 = uStack_300;
    uStack_298 = uStack_2f8;
    uStack_290 = uStack_2f0;
    uStack_288 = uStack_2e8;
    FUN_103ccc4d0(&uStack_100,auStack_3a0,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_160,auStack_3a0,0x112ffe118,&UNK_10dc6e270);
    puVar2 = &uStack_a0;
    func_0x000103caeaf0(puVar2,&uStack_2e0);
    func_0x000103ccc92c(&uStack_340,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_220,0x112ffe118,&UNK_10dc6e270);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103cb11c8;
  }
  uVar1 = 0;
LAB_103cb1140:
  return uVar1 & 1;
}



/* Entry: 103cb1230; end: 103cb13af;  */

void FUN_103cb1230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffed68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6f870;
  func_0x000107c61520(&UNK_10dc6f870,&UNK_1106f6dc8);
  puRam0000000112ffed68 = puVar1;
  return;
}



/* Entry: 103cb13b0; end: 103cb1483;  */

/* WARNING: Possible PIC construction at 0x000103cb13f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb13f8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb13b0(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 == *param_2) {
    pbVar12 = (byte *)param_1[1];
    pbVar15 = (byte *)param_1[2];
    pbVar16 = (byte *)param_2[1];
    pbVar17 = (byte *)param_2[2];
    if ((byte *)param_1[1] != (byte *)param_2[1] || (byte *)param_1[2] != (byte *)param_2[2]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    if (param_1[3] == param_2[3]) {
      uVar13 = param_1[4];
      if (((uVar13 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (func_0x000107c605b8(uVar13,param_1[5],param_2[4],param_2[5],0), (uVar13 & 1) != 0)) {
        pbVar10 = (byte *)param_1[6];
        pbVar25 = (byte *)param_1[7];
        lVar24 = param_2[6];
        uVar13 = param_2[7];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar25 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar13 >> 0x20);
          uVar21 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar14 = pbVar25;
          if ((ulong)pbVar25 >> 0x3e == 3) {
            uVar20 = 0;
            if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
               ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar20 = (ulong)(iVar19 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar21 == 0) {
              uVar22 = uVar13 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)((ulong)lVar24 >> 0x20);
            if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar21 == 2) {
              uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
              if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar25;
                  puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                  pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar14 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar14) {
                      pbVar14 = unaff_x23;
                    }
                    pbVar14 = pbVar14 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar14 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar14 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar14 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
                }
                unaff_x23 = unaff_x24 + -lVar26;
                if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  pbVar14 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar13;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar20 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar23 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar15 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar14[0x28] == 0) {
                lVar24 = *(long *)pbVar14;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar14[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar16 = *(byte **)(pbVar14 + 8);
              pbVar17 = *(byte **)(pbVar14 + 0x10);
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar15 = pbVar25;
              if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar14[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar16 = *(byte **)pbVar14;
              pbVar17 = *(byte **)(pbVar14 + 8);
              lVar24 = *(long *)(pbVar14 + 0x18);
              if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar23 != (byte *)0x0) {
                  if (lVar24 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar24);
                  func_0x000107c61174();
                  pbVar12 = pbVar23;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar23);
                  func_0x000107c61170(lVar24);
                  pbVar23 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar24 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar26 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar14[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar16 = *(byte **)pbVar14;
              pbVar17 = *(byte **)(pbVar14 + 8);
              if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
                 pbVar17 = *(byte **)(pbVar14 + 0x18),
                 pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar14[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)(pbVar14 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar16 = *(byte **)(pbVar14 + 8);
              pbVar12 = pbVar10;
              pbVar15 = pbVar25;
              if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar26 != 0) {
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar23 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar26 == 0) && pbVar25 == (byte *)0x0) {
              if (pbVar14[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar14 + 0x20);
              lVar24 = *(long *)(pbVar14 + 0x18);
              bVar27 = pbVar14[8] | (byte)lVar24;
              bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar14[0x10] | (byte)lVar26;
              bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar14 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar14[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar14 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar14 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar24 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar14[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar24 = *(long *)(pbVar14 + 8);
          uVar13 = *(ulong *)(pbVar14 + 0x10);
          lVar26 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar26,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cb1484; end: 103cb1ae7;  */

uint FUN_103cb1484(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_698 [136];
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined4 auStack_c0 [2];
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 auStack_98 [2];
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar3 = *param_1;
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
  {
    uVar3 = param_1[2];
    uVar6 = param_2[2];
    if ((char)param_2[3] == '\x01') {
      if ((long)uVar6 < 2) {
        if (uVar6 == 0) {
          if (uVar3 == 0) {
LAB_103cb1510:
            if ((*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) &&
               (param_1[4] == param_2[4])) {
              uVar3 = param_1[5];
              if (((uVar3 == param_2[5]) && (param_1[6] == param_2[6])) ||
                 (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
                uVar9 = param_1[0xb];
                uVar7 = param_1[10];
                uVar13 = param_1[0xd];
                uVar11 = param_1[0xc];
                uVar3 = param_1[0xe];
                uVar10 = param_2[0xb];
                uVar8 = param_2[10];
                uVar14 = param_2[0xd];
                uVar12 = param_2[0xc];
                uVar6 = param_2[0xe];
                uStack_1b0 = uVar8;
                uStack_1a8 = uVar10;
                uStack_1a0 = uVar12;
                uStack_198 = uVar14;
                uStack_190 = uVar6;
                uStack_180 = uVar7;
                uStack_178 = uVar9;
                uStack_170 = uVar11;
                uStack_168 = uVar13;
                uStack_160 = uVar3;
                if (uVar3 >> 0x3c < 0xf) {
                  if (0xe < uVar6 >> 0x3c) goto LAB_103cb1644;
                  auStack_98[0] = (undefined4)uVar8;
                  uStack_88 = (undefined1)uVar12;
                  auStack_c0[0] = (undefined4)uVar7;
                  uStack_b0 = (undefined1)uVar11;
                  uStack_b8 = uVar9;
                  uStack_a8 = uVar13;
                  uStack_a0 = uVar3;
                  uStack_90 = uVar10;
                  uStack_80 = uVar14;
                  uStack_78 = uVar6;
                  FUN_103ccc4d0(&uStack_180,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  FUN_103ccc4d0(&uStack_1b0,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  puVar4 = auStack_c0;
                  FUN_103caea0c(puVar4,auStack_98);
                  func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
                  func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
                  if (((ulong)puVar4 & 1) != 0) goto LAB_103cb1774;
                }
                else if (uVar6 >> 0x3c < 0xf) {
LAB_103cb1644:
                  FUN_103ccc4d0(&uStack_180,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  FUN_103ccc4d0(&uStack_1b0,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
                  func_0x000103c86294(uVar8,uVar10,uVar12,uVar14,uVar6);
                }
                else {
                  FUN_103ccc4d0(&uStack_180,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  FUN_103ccc4d0(&uStack_1b0,&uStack_3e0,0x112ffd8f8,&UNK_10dc6c5f0);
                  func_0x000103c86294(uVar7,uVar9,uVar11,uVar13,uVar3);
LAB_103cb1774:
                  uStack_1e8 = param_1[0x1a];
                  uStack_1f0 = param_1[0x19];
                  uStack_1d8 = param_1[0x1c];
                  uStack_1e0 = param_1[0x1b];
                  uStack_1c8 = param_1[0x1e];
                  uStack_1d0 = param_1[0x1d];
                  uStack_1c0 = param_1[0x1f];
                  uStack_228 = param_1[0x12];
                  uStack_230 = param_1[0x11];
                  uStack_218 = param_1[0x14];
                  uStack_220 = param_1[0x13];
                  uStack_208 = param_1[0x16];
                  uStack_210 = param_1[0x15];
                  uStack_1f8 = param_1[0x18];
                  uStack_200 = param_1[0x17];
                  uStack_238 = param_1[0x10];
                  uStack_240 = param_1[0xf];
                  uStack_278 = param_2[0x1a];
                  uStack_280 = param_2[0x19];
                  uStack_268 = param_2[0x1c];
                  uStack_270 = param_2[0x1b];
                  uStack_258 = param_2[0x1e];
                  uStack_260 = param_2[0x1d];
                  uStack_250 = param_2[0x1f];
                  uStack_2b8 = param_2[0x12];
                  uStack_2c0 = param_2[0x11];
                  uStack_2a8 = param_2[0x14];
                  uStack_2b0 = param_2[0x13];
                  uStack_298 = param_2[0x16];
                  uStack_2a0 = param_2[0x15];
                  uStack_288 = param_2[0x18];
                  uStack_290 = param_2[0x17];
                  uStack_2c8 = param_2[0x10];
                  uStack_2d0 = param_2[0xf];
                  uStack_388 = param_1[0x1a];
                  uStack_390 = param_1[0x19];
                  uStack_378 = param_1[0x1c];
                  uStack_380 = param_1[0x1b];
                  uStack_368 = param_1[0x1e];
                  uStack_370 = param_1[0x1d];
                  uStack_360 = param_1[0x1f];
                  uStack_3c8 = param_1[0x12];
                  uStack_3d0 = param_1[0x11];
                  uStack_3b8 = param_1[0x14];
                  uStack_3c0 = param_1[0x13];
                  uStack_3a8 = param_1[0x16];
                  uStack_3b0 = param_1[0x15];
                  uStack_398 = param_1[0x18];
                  uStack_3a0 = param_1[0x17];
                  uStack_3d8 = param_1[0x10];
                  uStack_3e0 = param_1[0xf];
                  uStack_300 = param_2[0x1a];
                  uStack_308 = param_2[0x19];
                  uStack_2f0 = param_2[0x1c];
                  uStack_2f8 = param_2[0x1b];
                  uStack_2e0 = param_2[0x1e];
                  uStack_2e8 = param_2[0x1d];
                  uStack_2d8 = param_2[0x1f];
                  uStack_340 = param_2[0x12];
                  uStack_348 = param_2[0x11];
                  uStack_330 = param_2[0x14];
                  uStack_338 = param_2[0x13];
                  uStack_320 = param_2[0x16];
                  uStack_328 = param_2[0x15];
                  uStack_310 = param_2[0x18];
                  uStack_318 = param_2[0x17];
                  uStack_350 = param_2[0x10];
                  uStack_358 = param_2[0xf];
                  iVar1 = (int)&uStack_3e0;
                  func_0x000100d6b3c0();
                  if (iVar1 == 1) {
                    iVar1 = (int)&uStack_358;
                    func_0x000100d6b3c0();
                    if (iVar1 != 1) {
LAB_103cb1938:
                      func_0x000107c610b4(&uStack_4f0,&uStack_3e0,0x110);
                      FUN_103ccc4d0(&uStack_240,&uStack_150,0x112ffe690,&UNK_10dc6e2e0);
                      FUN_103ccc4d0(&uStack_2d0,&uStack_150,0x112ffe690,&UNK_10dc6e2e0);
                      func_0x000103ccc92c(&uStack_4f0,0x112ffe698,&UNK_10dc6e2e8);
                      goto LAB_103cb1ac0;
                    }
                    uStack_488 = uStack_378;
                    uStack_490 = uStack_380;
                    uStack_478 = uStack_368;
                    uStack_480 = uStack_370;
                    uStack_470 = uStack_360;
                    uStack_4c8 = uStack_3b8;
                    uStack_4d0 = uStack_3c0;
                    uStack_4b8 = uStack_3a8;
                    uStack_4c0 = uStack_3b0;
                    uStack_4a8 = uStack_398;
                    uStack_4b0 = uStack_3a0;
                    uStack_498 = uStack_388;
                    uStack_4a0 = uStack_390;
                    uStack_4e8 = uStack_3d8;
                    uStack_4f0 = uStack_3e0;
                    uStack_4d8 = uStack_3c8;
                    uStack_4e0 = uStack_3d0;
                    FUN_103ccc4d0(&uStack_240,&uStack_150,0x112ffe690,&UNK_10dc6e2e0);
                    FUN_103ccc4d0(&uStack_2d0,&uStack_150,0x112ffe690,&UNK_10dc6e2e0);
                    func_0x000103ccc92c(&uStack_4f0,0x112ffe690,&UNK_10dc6e2e0);
                  }
                  else {
                    uStack_518 = uStack_378;
                    uStack_520 = uStack_380;
                    uStack_508 = uStack_368;
                    uStack_510 = uStack_370;
                    uStack_500 = uStack_360;
                    uStack_558 = uStack_3b8;
                    uStack_560 = uStack_3c0;
                    uStack_548 = uStack_3a8;
                    uStack_550 = uStack_3b0;
                    uStack_538 = uStack_398;
                    uStack_540 = uStack_3a0;
                    uStack_528 = uStack_388;
                    uStack_530 = uStack_390;
                    uStack_578 = uStack_3d8;
                    uStack_580 = uStack_3e0;
                    uStack_568 = uStack_3c8;
                    uStack_570 = uStack_3d0;
                    iVar1 = (int)&uStack_358;
                    func_0x000100d6b3c0();
                    if (iVar1 == 1) goto LAB_103cb1938;
                    uStack_5a8 = uStack_2f0;
                    uStack_5b0 = uStack_2f8;
                    uStack_598 = uStack_2e0;
                    uStack_5a0 = uStack_2e8;
                    uStack_590 = uStack_2d8;
                    uStack_5e8 = uStack_330;
                    uStack_5f0 = uStack_338;
                    uStack_5d8 = uStack_320;
                    uStack_5e0 = uStack_328;
                    uStack_5c8 = uStack_310;
                    uStack_5d0 = uStack_318;
                    uStack_5b8 = uStack_300;
                    uStack_5c0 = uStack_308;
                    uStack_608 = uStack_350;
                    uStack_610 = uStack_358;
                    uStack_5f8 = uStack_340;
                    uStack_600 = uStack_348;
                    uStack_488 = uStack_2f0;
                    uStack_490 = uStack_2f8;
                    uStack_478 = uStack_2e0;
                    uStack_480 = uStack_2e8;
                    uStack_470 = uStack_2d8;
                    uStack_4c8 = uStack_330;
                    uStack_4d0 = uStack_338;
                    uStack_4b8 = uStack_320;
                    uStack_4c0 = uStack_328;
                    uStack_4a8 = uStack_310;
                    uStack_4b0 = uStack_318;
                    uStack_498 = uStack_300;
                    uStack_4a0 = uStack_308;
                    uStack_4e8 = uStack_350;
                    uStack_4f0 = uStack_358;
                    uStack_4d8 = uStack_340;
                    uStack_4e0 = uStack_348;
                    uStack_e8 = uStack_518;
                    uStack_f0 = uStack_520;
                    uStack_d8 = uStack_508;
                    uStack_e0 = uStack_510;
                    uStack_d0 = uStack_500;
                    uStack_128 = uStack_558;
                    uStack_130 = uStack_560;
                    uStack_118 = uStack_548;
                    uStack_120 = uStack_550;
                    uStack_108 = uStack_538;
                    uStack_110 = uStack_540;
                    uStack_f8 = uStack_528;
                    uStack_100 = uStack_530;
                    uStack_148 = uStack_578;
                    uStack_150 = uStack_580;
                    uStack_138 = uStack_568;
                    uStack_140 = uStack_570;
                    FUN_103ccc4d0(&uStack_240,auStack_698,0x112ffe690,&UNK_10dc6e2e0);
                    FUN_103ccc4d0(&uStack_2d0,auStack_698,0x112ffe690,&UNK_10dc6e2e0);
                    puVar5 = &uStack_150;
                    FUN_103cafb94(puVar5,&uStack_4f0);
                    func_0x000103ccc92c(&uStack_610,0x112ffe690,&UNK_10dc6e2e0);
                    func_0x000103ccc92c(&uStack_3e0,0x112ffe690,&UNK_10dc6e2e0);
                    if (((ulong)puVar5 & 1) == 0) goto LAB_103cb1ac0;
                  }
                  if ((int)param_1[7] == (int)param_2[7]) {
                    uVar3 = param_1[8];
                    func_0x000100e25fcc(uVar3,param_1[9],param_2[8],param_2[9]);
                    uVar2 = (uint)uVar3;
                    goto LAB_103cb1ac4;
                  }
                }
              }
            }
          }
        }
        else if (uVar3 == 1) goto LAB_103cb1510;
      }
      else if (uVar6 == 2) {
        if (uVar3 == 2) goto LAB_103cb1510;
      }
      else if (uVar6 == 3) {
        if (uVar3 == 3) goto LAB_103cb1510;
      }
      else if (uVar3 == 4) goto LAB_103cb1510;
    }
    else if (uVar3 == uVar6) goto LAB_103cb1510;
  }
LAB_103cb1ac0:
  uVar2 = 0;
LAB_103cb1ac4:
  return uVar2 & 1;
}



/* Entry: 103cb1ae8; end: 103cb1c5f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb1ae8(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar19 = *(long *)param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  lVar22 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 3) {
      if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 4) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if ((char)param_2[5] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb1b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc6e1a1)[param_2[4]] * 4 + 0x103cb1b9c))();
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != param_2[4]) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + 0x30);
  pbVar26 = *(byte **)(param_1 + 0x38);
  lVar19 = param_2[6];
  uVar16 = param_2[7];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar19 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar19 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar19;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar22;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar13 + 0x20);
      lVar19 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar19;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar22;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb1c60; end: 103cb22ff;  */

uint FUN_103cb1c60(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_498 [120];
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 3) {
      if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar3 != 2) {
        return 0;
      }
    }
    else if (lVar4 == 3) {
      if (lVar3 != 3) {
        return 0;
      }
    }
    else if (lVar4 == 4) {
      if (lVar3 != 4) {
        return 0;
      }
    }
    else if (lVar3 != 5) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  lStack_268 = param_1[0xd];
  lStack_270 = param_1[0xc];
  lStack_e8 = param_1[0xf];
  lStack_f0 = param_1[0xe];
  lStack_278 = param_1[0xb];
  lStack_280 = param_1[10];
  lStack_f8 = param_1[0xd];
  lStack_100 = param_1[0xc];
  lStack_258 = param_1[0xf];
  lStack_260 = param_1[0xe];
  lStack_d8 = param_1[0x11];
  lStack_e0 = param_1[0x10];
  lStack_138 = param_1[5];
  lStack_140 = param_1[4];
  lStack_128 = param_1[7];
  lStack_130 = param_1[6];
  lStack_118 = param_1[9];
  lStack_120 = param_1[8];
  lStack_108 = param_1[0xb];
  lStack_110 = param_1[10];
  lStack_2a8 = param_1[5];
  lStack_2b0 = param_1[4];
  lStack_298 = param_1[7];
  lStack_2a0 = param_1[6];
  lStack_288 = param_1[9];
  lStack_290 = param_1[8];
  lStack_1b8 = param_2[5];
  lStack_1c0 = param_2[4];
  lStack_310 = param_2[7];
  lStack_318 = param_2[6];
  lStack_198 = param_2[9];
  lStack_1a0 = param_2[8];
  lStack_188 = param_2[0xb];
  lStack_190 = param_2[10];
  lStack_1a8 = param_2[7];
  lStack_1b0 = param_2[6];
  lStack_300 = param_2[9];
  lStack_308 = param_2[8];
  lStack_320 = param_2[5];
  lStack_328 = param_2[4];
  lStack_2d0 = param_2[0xf];
  lStack_2d8 = param_2[0xe];
  lStack_158 = param_2[0x11];
  lStack_160 = param_2[0x10];
  lStack_2f0 = param_2[0xb];
  lStack_2f8 = param_2[10];
  lStack_178 = param_2[0xd];
  lStack_180 = param_2[0xc];
  lStack_2e0 = param_2[0xd];
  lStack_2e8 = param_2[0xc];
  lStack_168 = param_2[0xf];
  lStack_170 = param_2[0xe];
  lStack_248 = param_1[0x11];
  lStack_250 = param_1[0x10];
  lStack_d0 = param_1[0x12];
  lStack_150 = param_2[0x12];
  lStack_240 = param_1[0x12];
  lStack_2c0 = param_2[0x11];
  lStack_2c8 = param_2[0x10];
  lStack_2b8 = param_2[0x12];
  lStack_238 = lStack_328;
  lStack_230 = lStack_320;
  lStack_228 = lStack_318;
  lStack_220 = lStack_310;
  lStack_218 = lStack_308;
  lStack_210 = lStack_300;
  lStack_208 = lStack_2f8;
  lStack_200 = lStack_2f0;
  lStack_1f8 = lStack_2e8;
  lStack_1f0 = lStack_2e0;
  lStack_1e8 = lStack_2d8;
  lStack_1e0 = lStack_2d0;
  lStack_1d8 = lStack_2c8;
  lStack_1d0 = lStack_2c0;
  lStack_1c8 = lStack_2b8;
  if (lStack_2a8 == 0) {
    if (lStack_320 != 0) goto LAB_103cb1e78;
    lStack_358 = param_1[0xd];
    lStack_360 = param_1[0xc];
    lStack_348 = param_1[0xf];
    lStack_350 = param_1[0xe];
    lStack_338 = param_1[0x11];
    lStack_340 = param_1[0x10];
    lStack_330 = param_1[0x12];
    lStack_398 = param_1[5];
    lStack_3a0 = param_1[4];
    lStack_388 = param_1[7];
    lStack_390 = param_1[6];
    lStack_378 = param_1[9];
    lStack_380 = param_1[8];
    lStack_368 = param_1[0xb];
    lStack_370 = param_1[10];
    FUN_103ccc4d0(&lStack_140,&lStack_c0,0x112ffeb48,&UNK_10dc6e340);
    FUN_103ccc4d0(&lStack_1c0,&lStack_c0,0x112ffeb48,&UNK_10dc6e340);
    func_0x000103ccc92c(&lStack_3a0,0x112ffeb48,&UNK_10dc6e340);
  }
  else {
    if (lStack_320 == 0) {
LAB_103cb1e78:
      lStack_3a0 = lStack_2b0;
      lStack_398 = lStack_2a8;
      lStack_390 = lStack_2a0;
      lStack_388 = lStack_298;
      lStack_380 = lStack_290;
      lStack_378 = lStack_288;
      lStack_370 = lStack_280;
      lStack_368 = lStack_278;
      lStack_360 = lStack_270;
      lStack_358 = lStack_268;
      lStack_350 = lStack_260;
      lStack_348 = lStack_258;
      lStack_340 = lStack_250;
      lStack_338 = lStack_248;
      lStack_330 = lStack_240;
      FUN_103ccc4d0(&lStack_140,&lStack_c0,0x112ffeb48,&UNK_10dc6e340);
      FUN_103ccc4d0(&lStack_1c0,&lStack_c0,0x112ffeb48,&UNK_10dc6e340);
      func_0x000103ccc92c(&lStack_3a0,0x112ffeb50,&UNK_10dc6e348);
      uVar1 = 0;
      goto LAB_103cb1fc4;
    }
    lStack_3d8 = param_2[0xd];
    lStack_3e0 = param_2[0xc];
    lStack_3c8 = param_2[0xf];
    lStack_3d0 = param_2[0xe];
    lStack_3b8 = param_2[0x11];
    lStack_3c0 = param_2[0x10];
    lStack_3b0 = param_2[0x12];
    lStack_418 = param_2[5];
    lStack_420 = param_2[4];
    lStack_408 = param_2[7];
    lStack_410 = param_2[6];
    lStack_3f8 = param_2[9];
    lStack_400 = param_2[8];
    lStack_3e8 = param_2[0xb];
    lStack_3f0 = param_2[10];
    lStack_78 = param_1[0xd];
    lStack_80 = param_1[0xc];
    lStack_68 = param_1[0xf];
    lStack_70 = param_1[0xe];
    lStack_58 = param_1[0x11];
    lStack_60 = param_1[0x10];
    lStack_50 = param_1[0x12];
    lStack_b8 = param_1[5];
    lStack_c0 = param_1[4];
    lStack_a8 = param_1[7];
    lStack_b0 = param_1[6];
    lStack_98 = param_1[9];
    lStack_a0 = param_1[8];
    lStack_88 = param_1[0xb];
    lStack_90 = param_1[10];
    lStack_3a0 = lStack_420;
    lStack_398 = lStack_418;
    lStack_390 = lStack_410;
    lStack_388 = lStack_408;
    lStack_380 = lStack_400;
    lStack_378 = lStack_3f8;
    lStack_370 = lStack_3f0;
    lStack_368 = lStack_3e8;
    lStack_360 = lStack_3e0;
    lStack_358 = lStack_3d8;
    lStack_350 = lStack_3d0;
    lStack_348 = lStack_3c8;
    lStack_340 = lStack_3c0;
    lStack_338 = lStack_3b8;
    lStack_330 = lStack_3b0;
    FUN_103ccc4d0(&lStack_140,auStack_498,0x112ffeb48,&UNK_10dc6e340);
    FUN_103ccc4d0(&lStack_1c0,auStack_498,0x112ffeb48,&UNK_10dc6e340);
    plVar2 = &lStack_c0;
    FUN_103cb0a40(plVar2,&lStack_3a0);
    func_0x000103ccc92c(&lStack_420,0x112ffeb48,&UNK_10dc6e340);
    func_0x000103ccc92c(&lStack_2b0,0x112ffeb48,&UNK_10dc6e340);
    if (((ulong)plVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_103cb1fc4;
    }
  }
  lVar3 = param_1[2];
  func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
  uVar1 = (uint)lVar3;
LAB_103cb1fc4:
  return uVar1 & 1;
}



/* Entry: 103cb2300; end: 103cb254f;  */

uint FUN_103cb2300(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if (((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
     || ((uVar2 = param_1[2], uVar2 != param_2[2] || param_1[3] != param_2[3] &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
LAB_103cb2434:
    uVar1 = 0;
    goto LAB_103cb252c;
  }
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  uVar9 = param_1[9];
  uVar7 = param_1[8];
  uVar6 = param_2[7];
  uVar2 = param_2[6];
  uVar10 = param_2[9];
  uVar8 = param_2[8];
  uStack_a0 = uVar2;
  uStack_98 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar4 == 0) {
    if (uVar2 == 0) {
      FUN_103ccc4d0(&uStack_80,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
      FUN_103ccc4d0(&uStack_a0,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
      func_0x000103cafb0c(0,uVar5,uVar7,uVar9);
LAB_103cb2520:
      uVar2 = param_1[4];
      func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_103cb252c;
    }
LAB_103cb2440:
    FUN_103ccc4d0(&uStack_80,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
    FUN_103ccc4d0(&uStack_a0,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
    func_0x000103cafb0c(uVar4,uVar5,uVar7,uVar9);
  }
  else {
    if (uVar2 == 0) goto LAB_103cb2440;
    FUN_103ccc4d0(&uStack_80,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
    FUN_103ccc4d0(&uStack_a0,auStack_c0,0x112ffe588,&UNK_10dc6e2c8);
    uVar3 = uVar4;
    func_0x000103cad6ec(uVar4,uVar2);
    if (((uVar3 & 1) != 0) && ((((uint)uVar6 ^ (uint)uVar5) & 1) == 0)) {
      uVar3 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      func_0x000103cafb0c(uVar2,uVar6,uVar8,uVar10);
      func_0x000103cafb0c(uVar4,uVar5,uVar7,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_103cb2520;
      goto LAB_103cb2434;
    }
    func_0x000103cafb0c(uVar2,uVar6,uVar8,uVar10);
    uVar2 = uVar4;
    uVar6 = uVar5;
    uVar8 = uVar7;
    uVar10 = uVar9;
  }
  func_0x000103cafb0c(uVar2,uVar6,uVar8,uVar10);
  uVar1 = 0;
LAB_103cb252c:
  return uVar1 & 1;
}



/* Entry: 103cb2550; end: 103cb277f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb2550(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb2578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc6e1ab)[*param_2] * 4 + 0x103cb257c))();
    return param_1;
  }
  if (*(long *)param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 0x10);
    lVar22 = param_2[2];
    if ((char)param_2[3] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 != 0) {
            return (byte *)0x0;
          }
        }
        else if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 2) {
        if (lVar19 != 2) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != lVar22) {
      return (byte *)0x0;
    }
    if ((char)param_2[5] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb25e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc6e1b9)[param_2[4]] * 4 + 0x103cb25e8))();
      return param_1;
    }
    if (*(long *)(param_1 + 0x20) == param_2[4]) {
      pbVar10 = *(byte **)(param_1 + 0x30);
      pbVar26 = *(byte **)(param_1 + 0x38);
      lVar19 = param_2[6];
      uVar16 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar19 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar19);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar19);
              pbVar25 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
          }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar19 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar22 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar22 = *(long *)(pbVar13 + 0x20);
          lVar19 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar19;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar22;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar19 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cb2780; end: 103cb2853;  */

/* WARNING: Possible PIC construction at 0x000103cb27b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb27f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb27f8) */
/* WARNING: Removing unreachable block (ram,0x000103cb27b4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb2780(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  if ((uVar14 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
    uVar14 = param_1[6];
    if ((((uVar14 == param_2[6]) && (param_1[7] == param_2[7])) ||
        (func_0x000107c605b8(), (uVar14 & 1) != 0)) && (param_1[8] == param_2[8])) {
      pbVar10 = (byte *)param_1[9];
      pbVar25 = (byte *)param_1[10];
      lVar24 = param_2[9];
      uVar14 = param_2[10];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar14 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cb2854; end: 103cb29cb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb2854(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_6 != '\x01') {
    if (param_1 != param_5) {
      return (byte *)0x0;
    }
    goto SUB_100e25fcc;
  }
  if (param_5 < 2) {
    if (param_5 == 0) {
      if (param_1 == 0) {
SUB_100e25fcc:
        do {
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar8;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
          unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
          unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        } while( true );
      }
    }
    else if (param_1 == 1) goto SUB_100e25fcc;
  }
  else if (param_5 == 2) {
    if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == 3) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103cb29cc; end: 103cb2a7f;  */

/* WARNING: Possible PIC construction at 0x000103cb29fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb2a00) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb29cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) != '\x01') {
    if (lVar19 != lVar22) {
      return (byte *)0x0;
    }
    goto LAB_103cb2a40;
  }
  if (lVar22 < 2) {
    if (lVar22 == 0) {
      if (lVar19 == 0) {
LAB_103cb2a40:
        pbVar10 = (byte *)param_1[4];
        pbVar26 = (byte *)param_1[5];
        lVar19 = param_2[4];
        uVar16 = param_2[5];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
    else if (lVar19 == 1) goto LAB_103cb2a40;
  }
  else if (lVar22 == 2) {
    if (lVar19 == 2) goto LAB_103cb2a40;
  }
  else if (lVar19 == 3) goto LAB_103cb2a40;
  return (byte *)0x0;
}



/* Entry: 103cb2a80; end: 103cb2fe3;  */

uint FUN_103cb2a80(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_768 [152];
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_458 = param_1[7];
  uStack_460 = param_1[6];
  uStack_448 = param_1[9];
  uStack_450 = param_1[8];
  uStack_1e8 = param_2[7];
  uStack_1f0 = param_2[6];
  uStack_1d8 = param_2[9];
  uStack_1e0 = param_2[8];
  uStack_1c8 = param_2[0xb];
  uStack_1d0 = param_2[10];
  uStack_1b8 = param_2[0xd];
  uStack_1c0 = param_2[0xc];
  uStack_418 = param_2[7];
  uStack_420 = param_2[6];
  uStack_408 = param_2[9];
  uStack_410 = param_2[8];
  uStack_438 = param_1[0xb];
  uStack_440 = param_1[10];
  uStack_428 = param_1[0xd];
  uStack_430 = param_1[0xc];
  uStack_3f8 = param_2[0xb];
  uStack_400 = param_2[10];
  uStack_3e8 = param_2[0xd];
  uStack_3f0 = param_2[0xc];
  if (uStack_458 == 0) {
    if (uStack_418 != 0) goto LAB_103cb2b98;
    uStack_588 = param_1[7];
    uStack_590 = param_1[6];
    uStack_578 = param_1[9];
    uStack_580 = param_1[8];
    uStack_568 = param_1[0xb];
    uStack_570 = param_1[10];
    uStack_558 = param_1[0xd];
    uStack_560 = param_1[0xc];
    FUN_103ccc4d0(&uStack_1b0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
    FUN_103ccc4d0(&uStack_1f0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
    func_0x000103ccc92c(&uStack_590,0x112ffecc0,&UNK_10dc6e370);
LAB_103cb2c84:
    uVar5 = *param_1;
    if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
      uVar5 = param_1[2];
      if (((uVar5 != param_2[2]) || (param_1[3] != param_2[3])) &&
         (func_0x000107c605b8(), (uVar5 & 1) == 0)) goto LAB_103cb2c08;
      uStack_3f8 = param_1[0x1b];
      uStack_400 = param_1[0x1a];
      uStack_218 = param_1[0x1d];
      uStack_220 = param_1[0x1c];
      uStack_408 = param_1[0x19];
      uStack_410 = param_1[0x18];
      uStack_228 = param_1[0x1b];
      uStack_230 = param_1[0x1a];
      uStack_3e8 = param_1[0x1d];
      uStack_3f0 = param_1[0x1c];
      uStack_208 = param_1[0x1f];
      uStack_210 = param_1[0x1e];
      uStack_438 = param_1[0x13];
      uStack_440 = param_1[0x12];
      uStack_258 = param_1[0x15];
      uStack_260 = param_1[0x14];
      uStack_448 = param_1[0x11];
      uStack_450 = param_1[0x10];
      uStack_268 = param_1[0x13];
      uStack_270 = param_1[0x12];
      uStack_428 = param_1[0x15];
      uStack_430 = param_1[0x14];
      uStack_248 = param_1[0x17];
      uStack_250 = param_1[0x16];
      uStack_418 = param_1[0x17];
      uStack_420 = param_1[0x16];
      uStack_238 = param_1[0x19];
      uStack_240 = param_1[0x18];
      uStack_288 = param_1[0xf];
      uStack_290 = param_1[0xe];
      uStack_278 = param_1[0x11];
      uStack_280 = param_1[0x10];
      uStack_458 = param_1[0xf];
      uStack_460 = param_1[0xe];
      uStack_360 = param_2[0x1b];
      uStack_368 = param_2[0x1a];
      uStack_2b8 = param_2[0x1d];
      uStack_2c0 = param_2[0x1c];
      uStack_370 = param_2[0x19];
      uStack_378 = param_2[0x18];
      uStack_2c8 = param_2[0x1b];
      uStack_2d0 = param_2[0x1a];
      uStack_350 = param_2[0x1d];
      uStack_358 = param_2[0x1c];
      uStack_2a8 = param_2[0x1f];
      uStack_2b0 = param_2[0x1e];
      uStack_3a0 = param_2[0x13];
      uStack_3a8 = param_2[0x12];
      uStack_2f8 = param_2[0x15];
      uStack_300 = param_2[0x14];
      uStack_3b0 = param_2[0x11];
      uStack_3b8 = param_2[0x10];
      uStack_308 = param_2[0x13];
      uStack_310 = param_2[0x12];
      uStack_390 = param_2[0x15];
      uStack_398 = param_2[0x14];
      uStack_2e8 = param_2[0x17];
      uStack_2f0 = param_2[0x16];
      uStack_380 = param_2[0x17];
      uStack_388 = param_2[0x16];
      uStack_2d8 = param_2[0x19];
      uStack_2e0 = param_2[0x18];
      uStack_328 = param_2[0xf];
      uStack_330 = param_2[0xe];
      uStack_318 = param_2[0x11];
      uStack_320 = param_2[0x10];
      uStack_3c0 = param_2[0xf];
      uStack_3c8 = param_2[0xe];
      uStack_3d8 = param_1[0x1f];
      uStack_3e0 = param_1[0x1e];
      iVar2 = (int)&uStack_3c8;
      uStack_340 = param_2[0x1f];
      uStack_348 = param_2[0x1e];
      uStack_200 = param_1[0x20];
      uStack_2a0 = param_2[0x20];
      uStack_3d0 = param_1[0x20];
      uStack_338 = param_2[0x20];
      iVar1 = (int)&uStack_460;
      func_0x000100d6b3c0();
      if (iVar1 == 1) {
        func_0x000100d6b3c0();
        if (iVar2 == 1) {
          uStack_528 = uStack_3f8;
          uStack_530 = uStack_400;
          uStack_518 = uStack_3e8;
          uStack_520 = uStack_3f0;
          uStack_508 = uStack_3d8;
          uStack_510 = uStack_3e0;
          uStack_500 = uStack_3d0;
          uStack_568 = uStack_438;
          uStack_570 = uStack_440;
          uStack_558 = uStack_428;
          uStack_560 = uStack_430;
          uStack_548 = uStack_418;
          uStack_550 = uStack_420;
          uStack_538 = uStack_408;
          uStack_540 = uStack_410;
          uStack_588 = uStack_458;
          uStack_590 = uStack_460;
          uStack_578 = uStack_448;
          uStack_580 = uStack_450;
          FUN_103ccc4d0(&uStack_290,&uStack_170,0x112ffecd0,&UNK_10dc6e380);
          FUN_103ccc4d0(&uStack_330,&uStack_170,0x112ffecd0,&UNK_10dc6e380);
          func_0x000103ccc92c(&uStack_590,0x112ffecd0,&UNK_10dc6e380);
LAB_103cb2fd4:
          uVar5 = param_1[4];
          func_0x000100e25fcc(uVar5,param_1[5],param_2[4],param_2[5]);
          uVar3 = (uint)uVar5;
          goto LAB_103cb2c0c;
        }
      }
      else {
        uStack_5c8 = uStack_3f8;
        uStack_5d0 = uStack_400;
        uStack_5b8 = uStack_3e8;
        uStack_5c0 = uStack_3f0;
        uStack_5a8 = uStack_3d8;
        uStack_5b0 = uStack_3e0;
        uStack_5a0 = uStack_3d0;
        uStack_608 = uStack_438;
        uStack_610 = uStack_440;
        uStack_5f8 = uStack_428;
        uStack_600 = uStack_430;
        uStack_5e8 = uStack_418;
        uStack_5f0 = uStack_420;
        uStack_5d8 = uStack_408;
        uStack_5e0 = uStack_410;
        uStack_628 = uStack_458;
        uStack_630 = uStack_460;
        uStack_618 = uStack_448;
        uStack_620 = uStack_450;
        func_0x000100d6b3c0();
        if (iVar2 != 1) {
          uStack_668 = uStack_360;
          uStack_670 = uStack_368;
          uStack_658 = uStack_350;
          uStack_660 = uStack_358;
          uStack_648 = uStack_340;
          uStack_650 = uStack_348;
          uStack_6a8 = uStack_3a0;
          uStack_6b0 = uStack_3a8;
          uStack_698 = uStack_390;
          uStack_6a0 = uStack_398;
          uStack_688 = uStack_380;
          uStack_690 = uStack_388;
          uStack_678 = uStack_370;
          uStack_680 = uStack_378;
          uStack_6c8 = uStack_3c0;
          uStack_6d0 = uStack_3c8;
          uStack_6b8 = uStack_3b0;
          uStack_6c0 = uStack_3b8;
          uStack_528 = uStack_360;
          uStack_530 = uStack_368;
          uStack_518 = uStack_350;
          uStack_520 = uStack_358;
          uStack_508 = uStack_340;
          uStack_510 = uStack_348;
          uStack_568 = uStack_3a0;
          uStack_570 = uStack_3a8;
          uStack_558 = uStack_390;
          uStack_560 = uStack_398;
          uStack_548 = uStack_380;
          uStack_550 = uStack_388;
          uStack_538 = uStack_370;
          uStack_540 = uStack_378;
          uStack_640 = uStack_338;
          uStack_500 = uStack_338;
          uStack_588 = uStack_3c0;
          uStack_590 = uStack_3c8;
          uStack_578 = uStack_3b0;
          uStack_580 = uStack_3b8;
          uStack_108 = uStack_5c8;
          uStack_110 = uStack_5d0;
          uStack_f8 = uStack_5b8;
          uStack_100 = uStack_5c0;
          uStack_e8 = uStack_5a8;
          uStack_f0 = uStack_5b0;
          uStack_e0 = uStack_5a0;
          uStack_148 = uStack_608;
          uStack_150 = uStack_610;
          uStack_138 = uStack_5f8;
          uStack_140 = uStack_600;
          uStack_128 = uStack_5e8;
          uStack_130 = uStack_5f0;
          uStack_118 = uStack_5d8;
          uStack_120 = uStack_5e0;
          uStack_168 = uStack_628;
          uStack_170 = uStack_630;
          uStack_158 = uStack_618;
          uStack_160 = uStack_620;
          FUN_103ccc4d0(&uStack_290,auStack_768,0x112ffecd0,&UNK_10dc6e380);
          FUN_103ccc4d0(&uStack_330,auStack_768,0x112ffecd0,&UNK_10dc6e380);
          puVar4 = &uStack_170;
          FUN_103cb0f34(puVar4,&uStack_590);
          func_0x000103ccc92c(&uStack_6d0,0x112ffecd0,&UNK_10dc6e380);
          func_0x000103ccc92c(&uStack_460,0x112ffecd0,&UNK_10dc6e380);
          if (((ulong)puVar4 & 1) != 0) goto LAB_103cb2fd4;
          goto LAB_103cb2c08;
        }
      }
      func_0x000107c610b4(&uStack_590,&uStack_460,0x130);
      FUN_103ccc4d0(&uStack_290,&uStack_170,0x112ffecd0,&UNK_10dc6e380);
      FUN_103ccc4d0(&uStack_330,&uStack_170,0x112ffecd0,&UNK_10dc6e380);
      uVar6 = 0x112ffecd8;
      puVar7 = &UNK_10dc6e388;
      goto LAB_103cb2c00;
    }
  }
  else {
    if (uStack_418 != 0) {
      uStack_588 = param_2[7];
      uStack_590 = param_2[6];
      uStack_578 = param_2[9];
      uStack_580 = param_2[8];
      uStack_568 = param_2[0xb];
      uStack_570 = param_2[10];
      uStack_558 = param_2[0xd];
      uStack_560 = param_2[0xc];
      uStack_c8 = param_1[7];
      uStack_d0 = param_1[6];
      uStack_b8 = param_1[9];
      uStack_c0 = param_1[8];
      uStack_a8 = param_1[0xb];
      uStack_b0 = param_1[10];
      uStack_98 = param_1[0xd];
      uStack_a0 = param_1[0xc];
      uStack_90 = uStack_590;
      uStack_88 = uStack_588;
      uStack_80 = uStack_580;
      uStack_78 = uStack_578;
      uStack_70 = uStack_570;
      uStack_68 = uStack_568;
      uStack_60 = uStack_560;
      uStack_58 = uStack_558;
      FUN_103ccc4d0(&uStack_1b0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
      FUN_103ccc4d0(&uStack_1f0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
      puVar4 = &uStack_d0;
      FUN_103d5e280(puVar4,&uStack_90);
      func_0x000103ccc92c(&uStack_590,0x112ffecc0,&UNK_10dc6e370);
      func_0x000103ccc92c(&uStack_460,0x112ffecc0,&UNK_10dc6e370);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103cb2c84;
      goto LAB_103cb2c08;
    }
LAB_103cb2b98:
    uStack_590 = uStack_460;
    uStack_588 = uStack_458;
    uStack_580 = uStack_450;
    uStack_578 = uStack_448;
    uStack_570 = uStack_440;
    uStack_568 = uStack_438;
    uStack_560 = uStack_430;
    uStack_558 = uStack_428;
    uStack_550 = uStack_420;
    uStack_548 = uStack_418;
    uStack_540 = uStack_410;
    uStack_538 = uStack_408;
    uStack_530 = uStack_400;
    uStack_528 = uStack_3f8;
    uStack_520 = uStack_3f0;
    uStack_518 = uStack_3e8;
    FUN_103ccc4d0(&uStack_1b0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
    FUN_103ccc4d0(&uStack_1f0,&uStack_170,0x112ffecc0,&UNK_10dc6e370);
    uVar6 = 0x112ffecc8;
    puVar7 = &UNK_10dc89440;
LAB_103cb2c00:
    func_0x000103ccc92c(&uStack_590,uVar6,puVar7);
  }
LAB_103cb2c08:
  uVar3 = 0;
LAB_103cb2c0c:
  return uVar3 & 1;
}



/* Entry: 103cb2fe4; end: 103cb32d3;  */

uint FUN_103cb2fe4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar5 = param_1[2];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[2];
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  uStack_90 = uVar6;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_103ccc4d0(&uStack_80,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103ccc4d0(&uStack_a0,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103cb0e94(uVar3,uVar4,uVar5);
LAB_103cb3094:
      uVar3 = param_1[3];
      uVar4 = param_2[3];
      if ((char)param_2[4] == '\x01') {
        if (uVar4 == 0) {
          if (uVar3 == 0) goto LAB_103cb32a0;
        }
        else if (uVar4 == 1) {
          if (uVar3 == 1) {
LAB_103cb32a0:
            uVar3 = param_1[5];
            if (((uVar3 == param_2[5]) && (param_1[6] == param_2[6])) ||
               (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
              uVar3 = param_1[7];
              func_0x000100e25fcc(uVar3,param_1[8],param_2[7],param_2[8]);
              uVar1 = (uint)uVar3;
              goto LAB_103cb3124;
            }
          }
        }
        else if (uVar3 == 2) goto LAB_103cb32a0;
      }
      else if (uVar3 == uVar4) goto LAB_103cb32a0;
    }
    else {
LAB_103cb30c8:
      FUN_103ccc4d0(&uStack_80,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103ccc4d0(&uStack_a0,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103cb0e94(uVar3,uVar4,uVar5);
      uVar3 = uVar7;
      uVar4 = uVar8;
      uVar5 = uVar6;
LAB_103cb311c:
      FUN_103cb0e94(uVar3,uVar4,uVar5);
    }
  }
  else {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) goto LAB_103cb30c8;
    uVar2 = uVar3;
    if ((uVar5 >> 0x3d & 1) == 0) {
      if ((uVar6 >> 0x3d & 1) != 0) {
LAB_103cb31b8:
        FUN_103ccc4d0(&uStack_80,auStack_b8,0x1130006e8,&UNK_10dc75270);
        FUN_103ccc4d0(&uStack_a0,auStack_b8,0x1130006e8,&UNK_10dc75270);
        FUN_103cb0e94(uVar7,uVar8,uVar6);
        goto LAB_103cb311c;
      }
      FUN_103ccc4d0(&uStack_80,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103ccc4d0(&uStack_a0,auStack_b8,0x1130006e8,&UNK_10dc75270);
      func_0x000103d8a558(uVar3,uVar4,uVar5,uVar7,uVar8,uVar6);
    }
    else {
      if ((uVar6 >> 0x3d & 1) == 0) goto LAB_103cb31b8;
      FUN_103ccc4d0(&uStack_80,auStack_b8,0x1130006e8,&UNK_10dc75270);
      FUN_103ccc4d0(&uStack_a0,auStack_b8,0x1130006e8,&UNK_10dc75270);
      func_0x000103d8a554(uVar3,uVar4,uVar5 & 0xdfffffffffffffff,uVar7,uVar8,
                          uVar6 & 0xdfffffffffffffff);
    }
    FUN_103cb0e94(uVar7,uVar8,uVar6);
    FUN_103cb0e94(uVar3,uVar4,uVar5);
    if ((uVar2 & 1) != 0) goto LAB_103cb3094;
  }
  uVar1 = 0;
LAB_103cb3124:
  return uVar1 & 1;
}



/* Entry: 103cb32d4; end: 103cb35b7;  */

long * FUN_103cb32d4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_280 [64];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lVar4;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc6e1c8)[*param_2] * 4 + 0x103cb3320))();
    return param_1;
  }
  if ((*param_1 == *param_2) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    lStack_b8 = param_1[7];
    lStack_c0 = param_1[6];
    lStack_a8 = param_1[9];
    lStack_b0 = param_1[8];
    lStack_98 = param_1[0xb];
    lStack_a0 = param_1[10];
    lStack_88 = param_1[0xd];
    lStack_90 = param_1[0xc];
    lStack_178 = param_1[7];
    lStack_180 = param_1[6];
    lStack_168 = param_1[9];
    lStack_170 = param_1[8];
    lStack_f8 = param_2[7];
    lStack_100 = param_2[6];
    lStack_e8 = param_2[9];
    lStack_f0 = param_2[8];
    lStack_d8 = param_2[0xb];
    lStack_e0 = param_2[10];
    lStack_c8 = param_2[0xd];
    lStack_d0 = param_2[0xc];
    lStack_1b8 = param_2[7];
    lStack_1c0 = param_2[6];
    lStack_1a8 = param_2[9];
    lStack_1b0 = param_2[8];
    lStack_158 = param_1[0xb];
    lStack_160 = param_1[10];
    lStack_148 = param_1[0xd];
    lStack_150 = param_1[0xc];
    lStack_198 = param_2[0xb];
    lStack_1a0 = param_2[10];
    lStack_188 = param_2[0xd];
    lStack_190 = param_2[0xc];
    lStack_140 = lStack_1c0;
    lStack_138 = lStack_1b8;
    lStack_130 = lStack_1b0;
    lStack_128 = lStack_1a8;
    lStack_120 = lStack_1a0;
    lStack_118 = lStack_198;
    lStack_110 = lStack_190;
    lStack_108 = lStack_188;
    if (lStack_168 == 1) {
      if (lStack_1a8 == 1) {
        lStack_1f8 = param_1[7];
        lStack_200 = param_1[6];
        lStack_1e8 = param_1[9];
        lStack_1f0 = param_1[8];
        lStack_1d8 = param_1[0xb];
        lStack_1e0 = param_1[10];
        lStack_1c8 = param_1[0xd];
        lStack_1d0 = param_1[0xc];
        FUN_103ccc4d0(&lStack_c0,&lStack_80,0x112ffea58,&UNK_10dc6e320);
        FUN_103ccc4d0(&lStack_100,&lStack_80,0x112ffea58,&UNK_10dc6e320);
        func_0x000103ccc92c(&lStack_200,0x112ffea58,&UNK_10dc6e320);
LAB_103cb3530:
        lVar4 = param_1[4];
        func_0x000100e25fcc(lVar4,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)lVar4;
        goto LAB_103cb3480;
      }
    }
    else if (lStack_1a8 != 1) {
      lStack_238 = param_2[7];
      lStack_240 = param_2[6];
      lStack_228 = param_2[9];
      lStack_230 = param_2[8];
      lStack_218 = param_2[0xb];
      lStack_220 = param_2[10];
      lStack_208 = param_2[0xd];
      lStack_210 = param_2[0xc];
      lStack_78 = param_1[7];
      lStack_80 = param_1[6];
      lStack_68 = param_1[9];
      lStack_70 = param_1[8];
      lStack_58 = param_1[0xb];
      lStack_60 = param_1[10];
      lStack_48 = param_1[0xd];
      lStack_50 = param_1[0xc];
      lStack_200 = lStack_240;
      lStack_1f8 = lStack_238;
      lStack_1f0 = lStack_230;
      lStack_1e8 = lStack_228;
      lStack_1e0 = lStack_220;
      lStack_1d8 = lStack_218;
      lStack_1d0 = lStack_210;
      lStack_1c8 = lStack_208;
      FUN_103ccc4d0(&lStack_c0,auStack_280,0x112ffea58,&UNK_10dc6e320);
      FUN_103ccc4d0(&lStack_100,auStack_280,0x112ffea58,&UNK_10dc6e320);
      plVar3 = &lStack_80;
      func_0x000103d8a4a0(plVar3,&lStack_200);
      func_0x000103ccc92c(&lStack_240,0x112ffea58,&UNK_10dc6e320);
      func_0x000103ccc92c(&lStack_180,0x112ffea58,&UNK_10dc6e320);
      if (((ulong)plVar3 & 1) != 0) goto LAB_103cb3530;
      goto LAB_103cb347c;
    }
    lStack_200 = lStack_180;
    lStack_1f8 = lStack_178;
    lStack_1f0 = lStack_170;
    lStack_1e8 = lStack_168;
    lStack_1e0 = lStack_160;
    lStack_1d8 = lStack_158;
    lStack_1d0 = lStack_150;
    lStack_1c8 = lStack_148;
    FUN_103ccc4d0(&lStack_c0,&lStack_80,0x112ffea58,&UNK_10dc6e320);
    FUN_103ccc4d0(&lStack_100,&lStack_80,0x112ffea58,&UNK_10dc6e320);
    func_0x000103ccc92c(&lStack_200,0x112ffea60,&UNK_10dc6e328);
  }
LAB_103cb347c:
  uVar1 = 0;
LAB_103cb3480:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 103cb35b8; end: 103cb370b;  */

/* WARNING: Possible PIC construction at 0x000103cb35e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb362c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb3630) */
/* WARNING: Removing unreachable block (ram,0x000103cb35ec) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb35b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103cb370c; end: 103cb378b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb370c(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_6 == '\x01') {
    if (param_5 < 2) {
      if (param_5 == 0) {
        if (param_1 == 0) {
SUB_100e25fcc:
          do {
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
            *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
            *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x58) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)param_4 >> 0x20);
            uVar15 = uVar4 >> 0x1e;
            uVar5 = (uint)(param_8 >> 0x20);
            uVar18 = uVar5 >> 0x1e;
            iVar7 = (int)param_3;
            pbVar11 = param_4;
            if ((ulong)param_4 >> 0x3e == 3) {
              uVar17 = 0;
              if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                  (param_8 >> 0x3e < 3)) ||
                 ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar8 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar15 == 0) {
                uVar17 = (ulong)param_4 >> 0x30 & 0xff;
              }
              else {
                iVar16 = (int)((ulong)param_3 >> 0x20);
                if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar17 = (ulong)(iVar16 - iVar7);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar18 == 0) {
                uVar19 = param_8 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar16 = (int)((ulong)param_7 >> 0x20);
              if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar8 = (byte *)0x0;
            }
            else {
              if (uVar15 == 2) {
                uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
                if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar17 = 0;
              if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar18 == 2) {
                uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
                if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar17 < 1) goto code_r0x000100e26128;
                if (uVar15 < 2) {
                  if (uVar15 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                    pbVar11 = (byte *)((long)register0x00000008 +
                                      (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar7;
                  unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                  if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = param_4;
                  if (param_3 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    param_3 = (byte *)0x0;
                  }
                  else {
                    pbVar11 = param_3;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                    func_0x000107c5ec38();
                    unaff_x19 = param_3;
                    if (param_3 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar11) {
                        pbVar11 = unaff_x23;
                      }
                      pbVar11 = pbVar11 + (long)param_3;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if (uVar15 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar21 = *(long *)(param_3 + 0x10);
                  unaff_x24 = *(byte **)(param_3 + 0x18);
                  func_0x000107c5ec30();
                  pbVar11 = param_3;
                  if (param_3 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    param_3 = param_3 + (lVar21 - (long)pbVar11);
                  }
                  unaff_x23 = unaff_x24 + -lVar21;
                  if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  unaff_x25 = param_4;
                  if (param_3 == (byte *)0x0) {
                    pbVar11 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11
                                    ,param_7,param_8);
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = param_8;
              }
              else {
                pbVar8 = (byte *)(ulong)(uVar17 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x58)) {
              return pbVar8;
            }
            func_0x000107c60e78();
            *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
            *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
            *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
            *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
            *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x90) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
            pbVar10 = *(byte **)pbVar8;
            param_3 = *(byte **)(pbVar8 + 8);
            pbVar20 = *(byte **)(pbVar8 + 0x18);
            bVar23 = pbVar8[0x28];
            param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
            pbVar12 = param_3;
            if (bVar23 < 3) {
              if (bVar23 == 0) {
                if (pbVar11[0x28] == 0) {
                  lVar21 = *(long *)pbVar11;
                  uVar9 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar10,lVar21,uVar9);
                  return (byte *)(ulong)((uint)pbVar10 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar23 == 1) {
                if (pbVar11[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar11 + 8);
                pbVar14 = *(byte **)(pbVar11 + 0x10);
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                if (((ulong)pbVar10 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar10 = param_3;
                pbVar12 = param_4;
                if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar11[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar11;
                pbVar14 = *(byte **)(pbVar11 + 8);
                lVar21 = *(long *)(pbVar11 + 0x18);
                if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                  if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (lVar21 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar21);
                  func_0x000107c61174();
                  pbVar11 = pbVar20;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar20);
                  func_0x000107c61170(lVar21);
                  pbVar20 = pbVar11;
joined_r0x000100e266a4:
                  if (((ulong)pbVar20 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
              }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar10,pbVar12,pbVar13,pbVar14,0);
              return pbVar10;
            }
            lVar22 = *(long *)(pbVar8 + 0x20);
            if (bVar23 < 5) {
              if (bVar23 != 3) {
                if (pbVar11[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar11;
                pbVar14 = *(byte **)(pbVar11 + 8);
                if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                   (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                   pbVar14 = *(byte **)(pbVar11 + 0x18),
                   param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar11[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)(pbVar11 + 0x20);
              if (param_4 == (byte *)0x0) {
                if (pbVar14 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar14 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar11 + 8);
                pbVar10 = param_3;
                pbVar12 = param_4;
                if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar21 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if (bVar23 != 5) {
              if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                  lVar22 == 0) && param_4 == (byte *)0x0) {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar11 + 0x20);
                lVar21 = *(long *)(pbVar11 + 0x18);
                bVar23 = pbVar11[8] | (byte)lVar21;
                bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
                bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
                bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
                bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
                bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
                bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
                bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
                bVar31 = pbVar11[0x10] | (byte)lVar22;
                bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar39[1] = bVar24;
                auVar39[0] = bVar23;
                auVar39[2] = bVar25;
                auVar39[3] = bVar26;
                auVar39[4] = bVar27;
                auVar39[5] = bVar28;
                auVar39[6] = bVar29;
                auVar39[7] = bVar30;
                auVar39[8] = bVar31;
                auVar39[9] = bVar32;
                auVar39[10] = bVar33;
                auVar39[0xb] = bVar34;
                auVar39[0xc] = bVar35;
                auVar39[0xd] = bVar36;
                auVar39[0xe] = bVar37;
                auVar39[0xf] = bVar38;
                auVar3[1] = bVar24;
                auVar3[0] = bVar23;
                auVar3[2] = bVar25;
                auVar3[3] = bVar26;
                auVar3[4] = bVar27;
                auVar3[5] = bVar28;
                auVar3[6] = bVar29;
                auVar3[7] = bVar30;
                auVar3[8] = bVar31;
                auVar3[9] = bVar32;
                auVar3[10] = bVar33;
                auVar3[0xb] = bVar34;
                auVar3[0xc] = bVar35;
                auVar3[0xd] = bVar36;
                auVar3[0xe] = bVar37;
                auVar3[0xf] = bVar38;
                auVar39 = NEON_ext(auVar39,auVar3,8,1);
                if (CONCAT17(bVar30 | auVar39[7],
                             CONCAT16(bVar29 | auVar39[6],
                                      CONCAT15(bVar28 | auVar39[5],
                                               CONCAT14(bVar27 | auVar39[4],
                                                        CONCAT13(bVar26 | auVar39[3],
                                                                 CONCAT12(bVar25 | auVar39[2],
                                                                          CONCAT11(bVar24 | auVar39[
                                                  1],bVar23 | auVar39[0]))))))) == 0 &&
                    *(long *)pbVar11 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar10 == (byte *)0x1) &&
                 (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar11 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar11 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar1[1] = bVar24;
              auVar1[0] = bVar23;
              auVar1[2] = bVar25;
              auVar1[3] = bVar26;
              auVar1[4] = bVar27;
              auVar1[5] = bVar28;
              auVar1[6] = bVar29;
              auVar1[7] = bVar30;
              auVar1[8] = bVar31;
              auVar1[9] = bVar32;
              auVar1[10] = bVar33;
              auVar1[0xb] = bVar34;
              auVar1[0xc] = bVar35;
              auVar1[0xd] = bVar36;
              auVar1[0xe] = bVar37;
              auVar1[0xf] = bVar38;
              auVar2[1] = bVar24;
              auVar2[0] = bVar23;
              auVar2[2] = bVar25;
              auVar2[3] = bVar26;
              auVar2[4] = bVar27;
              auVar2[5] = bVar28;
              auVar2[6] = bVar29;
              auVar2[7] = bVar30;
              auVar2[8] = bVar31;
              auVar2[9] = bVar32;
              auVar2[10] = bVar33;
              auVar2[0xb] = bVar34;
              auVar2[0xc] = bVar35;
              auVar2[0xd] = bVar36;
              auVar2[0xe] = bVar37;
              auVar2[0xf] = bVar38;
              auVar39 = NEON_ext(auVar1,auVar2,8,1);
              lVar21 = CONCAT17(bVar30 | auVar39[7],
                                CONCAT16(bVar29 | auVar39[6],
                                         CONCAT15(bVar28 | auVar39[5],
                                                  CONCAT14(bVar27 | auVar39[4],
                                                           CONCAT13(bVar26 | auVar39[3],
                                                                    CONCAT12(bVar25 | auVar39[2],
                                                                             CONCAT11(bVar24 | 
                                                  auVar39[1],bVar23 | auVar39[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar11[0x28] != 5) {
              return (byte *)0x0;
            }
            param_7 = *(long *)(pbVar11 + 8);
            param_8 = *(ulong *)(pbVar11 + 0x10);
            lVar21 = *(long *)pbVar11;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar21,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          } while( true );
        }
      }
      else if (param_1 == 1) goto SUB_100e25fcc;
    }
    else if (param_5 == 2) {
      if (param_1 == 2) goto SUB_100e25fcc;
    }
    else if (param_5 == 3) {
      if (param_1 == 3) goto SUB_100e25fcc;
    }
    else if (param_1 == 4) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103cb378c; end: 103cb397b;  */

/* WARNING: Possible PIC construction at 0x000103cb37bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb37c0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb378c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb397c; end: 103cb415b;  */

uint FUN_103cb397c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_348 [88];
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar9 = param_1[3];
  uVar6 = param_1[2];
  lVar18 = param_1[5];
  uVar13 = param_1[4];
  uVar4 = param_1[7];
  uVar15 = param_1[6];
  lVar19 = param_2[3];
  uVar14 = param_2[2];
  lVar22 = param_2[5];
  uVar7 = param_2[4];
  uVar5 = param_2[7];
  uVar10 = param_2[6];
  uStack_d0 = uVar14;
  lStack_c8 = lVar19;
  uStack_c0 = uVar7;
  lStack_b8 = lVar22;
  uStack_b0 = uVar10;
  uStack_a8 = uVar5;
  uStack_a0 = uVar6;
  lStack_98 = lVar9;
  uStack_90 = uVar13;
  lStack_88 = lVar18;
  uStack_80 = uVar15;
  uStack_78 = uVar4;
  if (lVar9 == 0) {
    if (lVar19 != 0) goto LAB_103cb3b10;
    FUN_103ccc4d0(&uStack_a0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
    FUN_103ccc4d0(&uStack_d0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
LAB_103cb3bc8:
    FUN_103cb0e1c(uVar6,lVar9,uVar13,lVar18,uVar15,uVar4);
    lVar18 = param_1[0xd];
    uVar15 = param_1[0xc];
    uStack_f8 = param_1[0xf];
    uStack_100 = param_1[0xe];
    lVar22 = param_1[0xb];
    uVar13 = param_1[10];
    uStack_108 = param_1[0xd];
    uStack_110 = param_1[0xc];
    lVar19 = param_1[0xf];
    uVar14 = param_1[0xe];
    uStack_e8 = param_1[0x11];
    uStack_f0 = param_1[0x10];
    uStack_128 = param_1[9];
    uStack_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    lStack_238 = param_1[9];
    uVar6 = param_1[8];
    uStack_1c0 = param_2[0xd];
    uStack_1c8 = param_2[0xc];
    uStack_158 = param_2[0xf];
    uStack_160 = param_2[0xe];
    uStack_1d0 = param_2[0xb];
    uStack_1d8 = param_2[10];
    uStack_168 = param_2[0xd];
    uStack_170 = param_2[0xc];
    uStack_1b0 = param_2[0xf];
    uStack_1b8 = param_2[0xe];
    uStack_148 = param_2[0x11];
    uStack_150 = param_2[0x10];
    uStack_188 = param_2[9];
    uStack_190 = param_2[8];
    uStack_178 = param_2[0xb];
    uStack_180 = param_2[10];
    lStack_1e0 = param_2[9];
    uStack_1e8 = param_2[8];
    uVar10 = param_1[0x11];
    lVar9 = param_1[0x10];
    uStack_1a0 = param_2[0x11];
    uStack_1a8 = param_2[0x10];
    uStack_e0 = param_1[0x12];
    uStack_140 = param_2[0x12];
    uVar4 = param_1[0x12];
    uStack_198 = param_2[0x12];
    uStack_240 = uVar6;
    uStack_230 = uVar13;
    lStack_228 = lVar22;
    uStack_220 = uVar15;
    lStack_218 = lVar18;
    uStack_210 = uVar14;
    lStack_208 = lVar19;
    lStack_200 = lVar9;
    uStack_1f8 = uVar10;
    uStack_1f0 = uVar4;
    if (lStack_238 == 0) {
      if (lStack_1e0 == 0) {
        FUN_103ccc4d0(&uStack_130,&uStack_2f0,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_190,&uStack_2f0,0x112ffe038,&UNK_10dc6e248);
LAB_103cb3ff0:
        func_0x000103ccc92c(&uStack_240,0x112ffe038,&UNK_10dc6e248);
        uVar4 = *param_1;
        func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_103cb3f94;
      }
LAB_103cb3e4c:
      uStack_2f0 = uVar6;
      lStack_2e8 = lStack_238;
      uStack_2e0 = uVar13;
      lStack_2d8 = lVar22;
      uStack_2d0 = uVar15;
      lStack_2c8 = lVar18;
      uStack_2c0 = uVar14;
      lStack_2b8 = lVar19;
      lStack_2b0 = lVar9;
      uStack_2a8 = uVar10;
      uStack_2a0 = uVar4;
      uStack_298 = uStack_1e8;
      lStack_290 = lStack_1e0;
      uStack_288 = uStack_1d8;
      uStack_280 = uStack_1d0;
      uStack_278 = uStack_1c8;
      uStack_270 = uStack_1c0;
      uStack_268 = uStack_1b8;
      uStack_260 = uStack_1b0;
      uStack_258 = uStack_1a8;
      uStack_250 = uStack_1a0;
      uStack_248 = uStack_198;
      FUN_103ccc4d0(&uStack_130,auStack_348,0x112ffe038,&UNK_10dc6e248);
      FUN_103ccc4d0(&uStack_190,auStack_348,0x112ffe038,&UNK_10dc6e248);
      uVar4 = 0x112ffe040;
      puVar3 = &UNK_10dc6e250;
      puVar2 = &uStack_2f0;
    }
    else {
      if (lStack_1e0 == 0) goto LAB_103cb3e4c;
      lStack_2e8 = param_2[9];
      uStack_2f0 = param_2[8];
      lVar20 = param_2[0xb];
      uVar16 = param_2[10];
      lVar11 = param_2[0xd];
      uVar7 = param_2[0xc];
      lVar21 = param_2[0xf];
      uVar17 = param_2[0xe];
      uVar12 = param_2[0x11];
      lVar8 = param_2[0x10];
      uVar5 = param_2[0x12];
      uStack_2e0 = uVar16;
      lStack_2d8 = lVar20;
      uStack_2d0 = uVar7;
      lStack_2c8 = lVar11;
      uStack_2c0 = uVar17;
      lStack_2b8 = lVar21;
      lStack_2b0 = lVar8;
      uStack_2a8 = uVar12;
      uStack_2a0 = uVar5;
      if ((((((uVar6 == uStack_2f0) && (lStack_2e8 == lStack_238)) ||
            (func_0x000107c605b8(), (uVar6 & 1) != 0)) &&
           (((uVar13 == uVar16 && (lVar22 == lVar20)) ||
            (func_0x000107c605b8(uVar13,lVar22,uVar16,lVar20,0), (uVar13 & 1) != 0)))) &&
          (((uVar15 == uVar7 && (lVar18 == lVar11)) ||
           (func_0x000107c605b8(uVar15,lVar18,uVar7,lVar11,0), (uVar15 & 1) != 0)))) &&
         ((((uVar14 == uVar17 && (lVar19 == lVar21)) || (func_0x000107c605b8(), (uVar14 & 1) != 0))
          && (lVar9 == lVar8)))) {
        FUN_103ccc4d0(&uStack_130,auStack_348,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_190,auStack_348,0x112ffe038,&UNK_10dc6e248);
        func_0x000100e25fcc(uVar10,uVar4,uVar12,uVar5);
        func_0x000103ccc92c(&uStack_2f0,0x112ffe038,&UNK_10dc6e248);
        if ((uVar10 & 1) != 0) goto LAB_103cb3ff0;
        uVar4 = 0x112ffe038;
        puVar3 = &UNK_10dc6e248;
        puVar2 = &uStack_240;
      }
      else {
        uVar4 = 0x112ffe038;
        puVar3 = &UNK_10dc6e248;
        FUN_103ccc4d0(&uStack_130,auStack_348,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_190,auStack_348,0x112ffe038,&UNK_10dc6e248);
        func_0x000103ccc92c(&uStack_2f0,0x112ffe038,&UNK_10dc6e248);
        puVar2 = &uStack_240;
      }
    }
    func_0x000103ccc92c(puVar2,uVar4,puVar3);
  }
  else {
    if (lVar19 == 0) {
LAB_103cb3b10:
      FUN_103ccc4d0(&uStack_a0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
      FUN_103ccc4d0(&uStack_d0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
      FUN_103cb0e1c(uVar6,lVar9,uVar13,lVar18,uVar15,uVar4);
      uVar6 = uVar14;
      lVar9 = lVar19;
      uVar13 = uVar7;
      lVar18 = lVar22;
      uVar15 = uVar10;
      uVar4 = uVar5;
    }
    else {
      if (((uVar6 == uVar14) && (lVar9 == lVar19)) ||
         (uVar12 = uVar6, func_0x000107c605b8(uVar6,lVar9,uVar14,lVar19,0), (uVar12 & 1) != 0)) {
        if (((uVar13 == uVar7) && (lVar18 == lVar22)) ||
           (uVar12 = uVar13, func_0x000107c605b8(uVar13,lVar18,uVar7,lVar22,0), (uVar12 & 1) != 0))
        {
          FUN_103ccc4d0(&uStack_a0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
          FUN_103ccc4d0(&uStack_d0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
          uVar12 = uVar15;
          func_0x000100e25fcc(uVar15,uVar4,uVar10,uVar5);
          FUN_103cb0e1c(uVar14,lVar19,uVar7,lVar22,uVar10,uVar5);
          if ((uVar12 & 1) != 0) goto LAB_103cb3bc8;
          goto LAB_103cb3f8c;
        }
        FUN_103ccc4d0(&uStack_a0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
        FUN_103ccc4d0(&uStack_d0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
      }
      else {
        FUN_103ccc4d0(&uStack_a0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
        FUN_103ccc4d0(&uStack_d0,&uStack_240,0x112ffec58,&UNK_10dc6e360);
      }
      FUN_103cb0e1c(uVar14,lVar19,uVar7,lVar22,uVar10,uVar5);
    }
LAB_103cb3f8c:
    FUN_103cb0e1c(uVar6,lVar9,uVar13,lVar18,uVar15,uVar4);
  }
  uVar1 = 0;
LAB_103cb3f94:
  return uVar1 & 1;
}



/* Entry: 103cb415c; end: 103cb430b;  */

/* WARNING: Possible PIC construction at 0x000103cb418c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb4190) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb415c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  uVar13 = param_1[4];
  if (((uVar13 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[6];
  pbVar26 = (byte *)param_1[7];
  lVar19 = param_2[6];
  uVar13 = param_2[7];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar19 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar19 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 != (byte *)0x0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar19);
            func_0x000107c61174();
            pbVar12 = pbVar25;
            func_0x000107c60118();
            func_0x000107c61170(pbVar25);
            func_0x000107c61170(lVar19);
            pbVar25 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar19 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar19 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar25 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar14 + 0x20);
        lVar19 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar19;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar22;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar14 + 0x20);
      lVar19 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar19;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar22;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar22 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb430c; end: 103cb44bf;  */

uint FUN_103cb430c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_350 [256];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_248 = puVar7[1];
        uStack_250 = *puVar7;
        uStack_238 = puVar7[3];
        uStack_240 = puVar7[2];
        uStack_228 = puVar7[5];
        uStack_230 = puVar7[4];
        uStack_218 = puVar7[7];
        uStack_220 = puVar7[6];
        uStack_208 = puVar7[9];
        uStack_210 = puVar7[8];
        uStack_1f8 = puVar7[0xb];
        uStack_200 = puVar7[10];
        uStack_1e8 = puVar7[0xd];
        uStack_1f0 = puVar7[0xc];
        uStack_1d8 = puVar7[0xf];
        uStack_1e0 = puVar7[0xe];
        uStack_1c8 = puVar7[0x11];
        uStack_1d0 = puVar7[0x10];
        uStack_1b8 = puVar7[0x13];
        uStack_1c0 = puVar7[0x12];
        uStack_1a8 = puVar7[0x15];
        uStack_1b0 = puVar7[0x14];
        uStack_198 = puVar7[0x17];
        uStack_1a0 = puVar7[0x16];
        uStack_188 = puVar7[0x19];
        uStack_190 = puVar7[0x18];
        uStack_178 = puVar7[0x1b];
        uStack_180 = puVar7[0x1a];
        uStack_168 = puVar7[0x1d];
        uStack_170 = puVar7[0x1c];
        uStack_158 = puVar7[0x1f];
        uStack_160 = puVar7[0x1e];
        uStack_148 = puVar8[1];
        uStack_150 = *puVar8;
        uStack_138 = puVar8[3];
        uStack_140 = puVar8[2];
        uStack_128 = puVar8[5];
        uStack_130 = puVar8[4];
        uStack_118 = puVar8[7];
        uStack_120 = puVar8[6];
        uStack_108 = puVar8[9];
        uStack_110 = puVar8[8];
        uStack_f8 = puVar8[0xb];
        uStack_100 = puVar8[10];
        uStack_e8 = puVar8[0xd];
        uStack_f0 = puVar8[0xc];
        uStack_d8 = puVar8[0xf];
        uStack_e0 = puVar8[0xe];
        uStack_c8 = puVar8[0x11];
        uStack_d0 = puVar8[0x10];
        uStack_b8 = puVar8[0x13];
        uStack_c0 = puVar8[0x12];
        uStack_a8 = puVar8[0x15];
        uStack_b0 = puVar8[0x14];
        uStack_98 = puVar8[0x17];
        uStack_a0 = puVar8[0x16];
        uStack_88 = puVar8[0x19];
        uStack_90 = puVar8[0x18];
        uStack_78 = puVar8[0x1b];
        uStack_80 = puVar8[0x1a];
        uStack_68 = puVar8[0x1d];
        uStack_70 = puVar8[0x1c];
        uStack_58 = puVar8[0x1f];
        uStack_60 = puVar8[0x1e];
        FUN_103ccc80c(&uStack_250,auStack_350);
        FUN_103ccc80c(&uStack_150,auStack_350);
        puVar2 = &uStack_250;
        FUN_103cb1484(puVar2,&uStack_150);
        func_0x000103ccc840(&uStack_150);
        func_0x000103ccc840(&uStack_250);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103cb4490;
        puVar8 = puVar8 + 0x20;
        puVar7 = puVar7 + 0x20;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    if ((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      lVar6 = param_1[3];
      lVar4 = param_2[3];
      if ((char)param_2[4] == '\x01') {
        if (lVar4 == 0) {
          if (lVar6 == 0) goto LAB_103cb447c;
        }
        else if (lVar4 == 1) {
          if (lVar6 == 1) {
LAB_103cb447c:
            lVar6 = param_1[5];
            func_0x000100e25fcc(lVar6,param_1[6],param_2[5],param_2[6]);
            uVar1 = (uint)lVar6;
            goto LAB_103cb4494;
          }
        }
        else if (lVar6 == 2) goto LAB_103cb447c;
      }
      else if (lVar6 == lVar4) goto LAB_103cb447c;
    }
  }
LAB_103cb4490:
  uVar1 = 0;
LAB_103cb4494:
  return uVar1 & 1;
}



/* Entry: 103cb44c0; end: 103cb49c3;  */

uint FUN_103cb44c0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_138 [40];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined4 auStack_b8 [2];
  ulong uStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 auStack_90 [2];
  ulong uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if ((((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
        (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
       ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))) {
      uVar7 = param_1[0xb];
      uVar5 = param_1[10];
      uVar11 = param_1[0xd];
      uVar9 = param_1[0xc];
      uVar2 = param_1[0xe];
      uVar8 = param_2[0xb];
      uVar6 = param_2[10];
      uVar12 = param_2[0xd];
      uVar10 = param_2[0xc];
      uVar4 = param_2[0xe];
      uStack_110 = uVar6;
      uStack_108 = uVar8;
      uStack_100 = uVar10;
      uStack_f8 = uVar12;
      uStack_f0 = uVar4;
      uStack_e0 = uVar5;
      uStack_d8 = uVar7;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar2;
      if (uVar2 >> 0x3c < 0xf) {
        if (uVar4 >> 0x3c < 0xf) {
          auStack_90[0] = (undefined4)uVar6;
          uStack_80 = (undefined1)uVar10;
          auStack_b8[0] = (undefined4)uVar5;
          uStack_a8 = (undefined1)uVar9;
          uStack_b0 = uVar7;
          uStack_a0 = uVar11;
          uStack_98 = uVar2;
          uStack_88 = uVar8;
          uStack_78 = uVar12;
          uStack_70 = uVar4;
          FUN_103ccc4d0(&uStack_e0,auStack_138,0x112ffd8f8,&UNK_10dc6c5f0);
          FUN_103ccc4d0(&uStack_110,auStack_138,0x112ffd8f8,&UNK_10dc6c5f0);
          puVar3 = auStack_b8;
          FUN_103caea0c(puVar3,auStack_90);
          func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar4);
          func_0x000103c86294(uVar5,uVar7,uVar9,uVar11,uVar2);
          if (((ulong)puVar3 & 1) != 0) goto LAB_103cb4764;
          goto LAB_103cb4688;
        }
      }
      else if (0xe < uVar4 >> 0x3c) {
        FUN_103ccc4d0(&uStack_e0,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
        FUN_103ccc4d0(&uStack_110,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
        func_0x000103c86294(uVar5,uVar7,uVar9,uVar11,uVar2);
LAB_103cb4764:
        uVar2 = param_1[8];
        func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
        uVar1 = (uint)uVar2;
        goto LAB_103cb468c;
      }
      FUN_103ccc4d0(&uStack_e0,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_110,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103c86294(uVar5,uVar7,uVar9,uVar11,uVar2);
      func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar4);
    }
  }
LAB_103cb4688:
  uVar1 = 0;
LAB_103cb468c:
  return uVar1 & 1;
}



/* Entry: 103cb49c4; end: 103cb4a93;  */

/* WARNING: Possible PIC construction at 0x000103cb4a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb4a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb4a20) */
/* WARNING: Removing unreachable block (ram,0x000103cb4a78) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb49c4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 != *(long *)(lVar22 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar26 != 0 && lVar19 != lVar22) {
    puVar28 = (undefined8 *)(lVar22 + 0x28);
    puVar29 = (undefined8 *)(lVar19 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  pbVar12 = (byte *)param_1[1];
  pbVar14 = (byte *)param_1[2];
  pbVar15 = (byte *)param_2[1];
  pbVar17 = (byte *)param_2[2];
  if ((byte *)param_1[1] != (byte *)param_2[1] || (byte *)param_1[2] != (byte *)param_2[2]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  pbVar10 = (byte *)param_1[3];
  pbVar27 = (byte *)param_1[4];
  lVar26 = param_2[3];
  uVar16 = param_2[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar26 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
        if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar27;
            puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar19 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar19;
          if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar27;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar26,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar26 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar26,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar27;
        if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar26 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 != (byte *)0x0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar26);
            func_0x000107c61174();
            pbVar12 = pbVar25;
            func_0x000107c60118();
            func_0x000107c61170(pbVar25);
            func_0x000107c61170(lVar26);
            pbVar25 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar26 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar19 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar26 = *(long *)(pbVar13 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar27;
        if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar19 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar26,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar25 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar19 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar13 + 0x20);
        lVar26 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar26;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar19;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar19 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar19 = *(long *)(pbVar13 + 0x20);
      lVar26 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar26;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar19;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar26 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar26 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar19 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar19,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb4a94; end: 103cb4b53;  */

void FUN_103cb4a94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffedc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6fd80;
  func_0x000107c61520(&UNK_10dc6fd80,&UNK_1106f70d8);
  puRam0000000112ffedc8 = puVar1;
  return;
}



/* Entry: 103cb4b54; end: 103cb4def;  */

uint FUN_103cb4b54(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    func_0x000103cab998(uVar2,param_2[2]);
    if (((uVar2 & 1) != 0) &&
       ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == param_2[4] ||
        (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
      uVar2 = param_1[5];
      func_0x000103cabf08(uVar2,param_2[5]);
      if ((uVar2 & 1) != 0) {
        uVar6 = param_1[0xb];
        uVar2 = param_1[10];
        uVar3 = param_1[0xc];
        uVar7 = param_2[0xb];
        uVar5 = param_2[10];
        uVar4 = param_2[0xc];
        uStack_a0 = uVar5;
        uStack_98 = uVar7;
        uStack_90 = uVar4;
        uStack_80 = uVar2;
        uStack_78 = uVar6;
        uStack_70 = uVar3;
        if (uVar3 >> 0x3c < 0xf) {
          if (0xe < uVar4 >> 0x3c) goto LAB_103cb4ca8;
          if (uVar2 == uVar5) {
            FUN_103ccc4d0(&uStack_80,auStack_b8,0x112db6f48,&UNK_10d969b40);
            FUN_103ccc4d0(&uStack_a0,auStack_b8,0x112db6f48,&UNK_10d969b40);
            uVar5 = uVar6;
            func_0x000100e25fcc(uVar6,uVar3,uVar7,uVar4);
            func_0x00010159fa64(uVar2,uVar7,uVar4);
            if ((uVar5 & 1) != 0) goto LAB_103cb4c58;
          }
          else {
            FUN_103ccc4d0(&uStack_80,auStack_b8,0x112db6f48,&UNK_10d969b40);
            FUN_103ccc4d0(&uStack_a0,auStack_b8,0x112db6f48,&UNK_10d969b40);
            func_0x00010159fa64(uVar5,uVar7,uVar4);
          }
        }
        else {
          if (0xe < uVar4 >> 0x3c) {
            FUN_103ccc4d0(&uStack_80,auStack_b8,0x112db6f48,&UNK_10d969b40);
            FUN_103ccc4d0(&uStack_a0,auStack_b8,0x112db6f48,&UNK_10d969b40);
LAB_103cb4c58:
            func_0x00010159fa64(uVar2,uVar6,uVar3);
            uVar2 = param_1[6];
            if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
              uVar2 = param_1[8];
              func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
              uVar1 = (uint)uVar2;
              goto LAB_103cb4dcc;
            }
            goto LAB_103cb4dc8;
          }
LAB_103cb4ca8:
          FUN_103ccc4d0(&uStack_80,auStack_b8,0x112db6f48,&UNK_10d969b40);
          FUN_103ccc4d0(&uStack_a0,auStack_b8,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(uVar2,uVar6,uVar3);
          uVar2 = uVar5;
          uVar6 = uVar7;
          uVar3 = uVar4;
        }
        func_0x00010159fa64(uVar2,uVar6,uVar3);
      }
    }
  }
LAB_103cb4dc8:
  uVar1 = 0;
LAB_103cb4dcc:
  return uVar1 & 1;
}



/* Entry: 103cb4df0; end: 103cb4e2f;  */

void FUN_103cb4df0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffede8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6fe58;
  func_0x000107c61520(&UNK_10dc6fe58,&UNK_1106f7160);
  puRam0000000112ffede8 = puVar1;
  return;
}



/* Entry: 103cb4e30; end: 103cb4f9b;  */

/* WARNING: Possible PIC construction at 0x000103cb4e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb4e64) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb4e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  uVar16 = (ulong)(param_1[2] != 0);
  if (*(char *)(param_1 + 3) != '\x01') {
    uVar16 = param_1[2];
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    if (param_2[2] == 0) {
      if (uVar16 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar16 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar16 != param_2[2]) {
    return (byte *)0x0;
  }
  pbVar12 = (byte *)param_1[4];
  if (((pbVar12 == (byte *)param_2[4]) && (param_1[5] == param_2[5])) ||
     (func_0x000107c605b8(), ((ulong)pbVar12 & 1) != 0)) {
    if (*(char *)(param_2 + 7) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb4efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc6e1d3)[param_2[6]] * 4 + 0x103cb4f00))();
      return pbVar12;
    }
    if (param_1[6] == param_2[6]) {
      pbVar10 = (byte *)param_1[8];
      pbVar25 = (byte *)param_1[9];
      lVar24 = param_2[8];
      uVar16 = param_2[9];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar24 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar24 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar24 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar24 = *(long *)(pbVar13 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar13 + 0x20);
            lVar24 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar24;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar26;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar24 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar24;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cb4f9c; end: 103cb556f;  */

ulong FUN_103cb4f9c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_138 [40];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined4 auStack_b8 [2];
  ulong uStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 auStack_90 [2];
  ulong uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar7 = param_1[0xf];
    uVar2 = param_1[0xe];
    uVar11 = param_1[0x11];
    uVar9 = param_1[0x10];
    uVar4 = param_1[0x12];
    uVar8 = param_2[0xf];
    uVar6 = param_2[0xe];
    uVar12 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar5 = param_2[0x12];
    uStack_110 = uVar6;
    uStack_108 = uVar8;
    uStack_100 = uVar10;
    uStack_f8 = uVar12;
    uStack_f0 = uVar5;
    uStack_e0 = uVar2;
    uStack_d8 = uVar7;
    uStack_d0 = uVar9;
    uStack_c8 = uVar11;
    uStack_c0 = uVar4;
    if (uVar4 >> 0x3c < 0xf) {
      if (0xe < uVar5 >> 0x3c) goto LAB_103cb508c;
      auStack_90[0] = (undefined4)uVar6;
      uStack_80 = (undefined1)uVar10;
      auStack_b8[0] = (undefined4)uVar2;
      uStack_a8 = (undefined1)uVar9;
      uStack_b0 = uVar7;
      uStack_a0 = uVar11;
      uStack_98 = uVar4;
      uStack_88 = uVar8;
      uStack_78 = uVar12;
      uStack_70 = uVar5;
      FUN_103ccc4d0(&uStack_e0,auStack_138,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_110,auStack_138,0x112ffd8f8,&UNK_10dc6c5f0);
      puVar3 = auStack_b8;
      FUN_103caea0c(puVar3,auStack_90);
      func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar5);
      func_0x000103c86294(uVar2,uVar7,uVar9,uVar11,uVar4);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103cb51d8;
    }
    else if (uVar5 >> 0x3c < 0xf) {
LAB_103cb508c:
      FUN_103ccc4d0(&uStack_e0,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_110,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103c86294(uVar2,uVar7,uVar9,uVar11,uVar4);
      func_0x000103c86294(uVar6,uVar8,uVar10,uVar12,uVar5);
    }
    else {
      FUN_103ccc4d0(&uStack_e0,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      FUN_103ccc4d0(&uStack_110,auStack_90,0x112ffd8f8,&UNK_10dc6c5f0);
      func_0x000103c86294(uVar2,uVar7,uVar9,uVar11,uVar4);
LAB_103cb51d8:
      if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb5200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dc6e1dd)[param_2[2]] * 4 + 0x103cb5204))();
        return uVar2;
      }
      if (param_1[2] == param_2[2]) {
        uVar4 = param_1[4];
        uVar5 = param_2[4];
        if ((char)param_2[5] == '\x01') {
          if ((long)uVar5 < 2) {
            if (uVar5 == 0) {
              if (uVar4 == 0) {
LAB_103cb5254:
                if ((char)param_2[7] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((ulong)(byte)(&UNK_10dc6e1e8)[param_2[6]] * 4 + 0x103cb5280))();
                  return uVar2;
                }
                if (((param_1[6] == param_2[6]) && (param_1[8] == param_2[8])) &&
                   (param_1[9] == param_2[9])) {
                  uVar2 = param_1[10];
                  uVar4 = param_2[10];
                  if ((char)param_2[0xb] == '\x01') {
                    if (uVar4 == 0) {
                      if (uVar2 == 0) goto LAB_103cb540c;
                    }
                    else if (uVar4 == 1) {
                      if (uVar2 == 1) {
LAB_103cb540c:
                        if (*(int *)((long)param_1 + 0x5c) == *(int *)((long)param_2 + 0x5c)) {
                          uVar2 = param_1[0xc];
                          func_0x000100e25fcc(uVar2,param_1[0xd],param_2[0xc],param_2[0xd]);
                          uVar1 = (uint)uVar2;
                          goto LAB_103cb5100;
                        }
                      }
                    }
                    else if (uVar2 == 2) goto LAB_103cb540c;
                  }
                  else if (uVar2 == uVar4) goto LAB_103cb540c;
                }
              }
            }
            else if (uVar4 == 1) goto LAB_103cb5254;
          }
          else if (uVar5 == 2) {
            if (uVar4 == 2) goto LAB_103cb5254;
          }
          else if (uVar5 == 3) {
            if (uVar4 == 3) goto LAB_103cb5254;
          }
          else if (uVar4 == 4) goto LAB_103cb5254;
        }
        else if (uVar4 == uVar5) goto LAB_103cb5254;
      }
    }
  }
  uVar1 = 0;
LAB_103cb5100:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103cb5570; end: 103cb568b;  */

/* WARNING: Possible PIC construction at 0x000103cb55e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb55e4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb5570(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb5598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc6e1f2)[*param_2] * 4 + 0x103cb559c))();
    return param_1;
  }
  if (*(long *)param_1 != *param_2) {
    return (byte *)0x0;
  }
  pbVar12 = *(byte **)(param_1 + 0x10);
  pbVar14 = *(byte **)(param_1 + 0x18);
  pbVar15 = (byte *)param_2[2];
  pbVar17 = (byte *)param_2[3];
  if (*(byte **)(param_1 + 0x10) != (byte *)param_2[2] ||
      *(byte **)(param_1 + 0x18) != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  pbVar10 = *(byte **)(param_1 + 0x20);
  pbVar25 = *(byte **)(param_1 + 0x28);
  lVar24 = param_2[4];
  uVar16 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb568c; end: 103cb57db;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb568c(byte *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar19 = *(long *)param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 3) {
      if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 4) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103cb56f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc6e1fd)[param_2[2]] * 4 + 0x103cb56f8))();
    return param_1;
  }
  if (((*(long *)(param_1 + 0x10) != param_2[2]) || (*(long *)(param_1 + 0x20) != param_2[4])) ||
     (((param_1[0x28] ^ *(byte *)(param_2 + 5)) & 1) != 0)) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + 0x30);
  pbVar26 = *(byte **)(param_1 + 0x38);
  lVar19 = param_2[6];
  uVar16 = param_2[7];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
         ((uVar16 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar19 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar19 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar19;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar22;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar13 + 0x20);
      lVar19 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar19;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar22;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103cb57dc; end: 103cb5be3;  */

/* WARNING: Possible PIC construction at 0x000103cb580c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb5850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb5884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb5888) */
/* WARNING: Removing unreachable block (ram,0x000103cb5854) */
/* WARNING: Removing unreachable block (ram,0x000103cb5810) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb57dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      uVar14 = param_1[6];
      FUN_103cab4ac(uVar14,param_2[6]);
      if ((uVar14 & 1) == 0) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[7];
      pbVar16 = (byte *)param_1[8];
      pbVar17 = (byte *)param_2[7];
      pbVar12 = (byte *)param_2[8];
      if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
        pbVar10 = (byte *)param_1[9];
        pbVar25 = (byte *)param_1[10];
        lVar24 = param_2[9];
        uVar14 = param_2[10];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar25 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar14 >> 0x20);
          uVar21 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar15 = pbVar25;
          if ((ulong)pbVar25 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                (uVar14 >> 0x3e < 3)) ||
               ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar20 = (ulong)(iVar19 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar21 == 0) {
              uVar22 = uVar14 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)((ulong)lVar24 >> 0x20);
            if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar21 == 2) {
              uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
              if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar25;
                  puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                  pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar15 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar15 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar15 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
                }
                unaff_x23 = unaff_x24 + -lVar26;
                if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar14;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar20 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar13 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar23 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar16 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar13 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              if (((ulong)pbVar13 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              lVar24 = *(long *)(pbVar15 + 0x18);
              if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar23 != (byte *)0x0) {
                  if (lVar24 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar24);
                  func_0x000107c61174();
                  pbVar12 = pbVar23;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar23);
                  func_0x000107c61170(lVar24);
                  pbVar23 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar24 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            break;
          }
          lVar26 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                 (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar12 = *(byte **)(pbVar15 + 0x18),
                 pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              break;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)(pbVar15 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar12 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar12 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
            }
            if (lVar26 != 0) {
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar23 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                lVar26 == 0) && pbVar25 == (byte *)0x0) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar15 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar13 == (byte *)0x1) &&
               (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar24 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar15[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar24 = *(long *)(pbVar15 + 8);
          uVar14 = *(ulong *)(pbVar15 + 0x10);
          lVar26 = *(long *)pbVar15;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar11);
          if (((ulong)pbVar13 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103cb5be4; end: 103cb60cf;  */

uint FUN_103cb5be4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auStack_2e8 [88];
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) {
    uStack_a8 = param_1[10];
    uStack_b0 = param_1[9];
    uStack_98 = param_1[0xc];
    uStack_a0 = param_1[0xb];
    uStack_88 = param_1[0xe];
    uStack_90 = param_1[0xd];
    uStack_80 = param_1[0xf];
    uStack_c8 = param_1[6];
    uStack_d0 = param_1[5];
    uStack_b8 = param_1[8];
    uStack_c0 = param_1[7];
    uStack_108 = param_2[10];
    uStack_110 = param_2[9];
    uStack_f8 = param_2[0xc];
    uStack_100 = param_2[0xb];
    uStack_e8 = param_2[0xe];
    uStack_f0 = param_2[0xd];
    uStack_e0 = param_2[0xf];
    uStack_128 = param_2[6];
    uStack_130 = param_2[5];
    uStack_118 = param_2[8];
    uStack_120 = param_2[7];
    uVar12 = param_1[10];
    uVar8 = param_1[9];
    uVar20 = param_1[0xc];
    uVar16 = param_1[0xb];
    uVar13 = param_1[0xe];
    uVar9 = param_1[0xd];
    uVar7 = param_1[0xf];
    uStack_1d8 = param_1[6];
    uVar2 = param_1[5];
    uVar21 = param_1[8];
    uVar17 = param_1[7];
    uStack_160 = param_2[10];
    uStack_168 = param_2[9];
    uStack_150 = param_2[0xc];
    uStack_158 = param_2[0xb];
    uStack_140 = param_2[0xe];
    uStack_148 = param_2[0xd];
    uStack_138 = param_2[0xf];
    uStack_180 = param_2[6];
    uStack_188 = param_2[5];
    uStack_170 = param_2[8];
    uStack_178 = param_2[7];
    uStack_1e0 = uVar2;
    uStack_1d0 = uVar17;
    uStack_1c8 = uVar21;
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar12;
    uStack_1b0 = uVar16;
    uStack_1a8 = uVar20;
    uStack_1a0 = uVar9;
    uStack_198 = uVar13;
    uStack_190 = uVar7;
    if (uStack_1d8 == 0) {
      if (uStack_180 == 0) {
        FUN_103ccc4d0(&uStack_d0,&uStack_290,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_130,&uStack_290,0x112ffe038,&UNK_10dc6e248);
LAB_103cb5fc8:
        func_0x000103ccc92c(&uStack_1e0,0x112ffe038,&UNK_10dc6e248);
        uVar2 = param_1[3];
        func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
        uVar1 = (uint)uVar2;
        goto LAB_103cb5f6c;
      }
LAB_103cb5e90:
      uStack_290 = uVar2;
      uStack_288 = uStack_1d8;
      uStack_280 = uVar17;
      uStack_278 = uVar21;
      uStack_270 = uVar8;
      uStack_268 = uVar12;
      uStack_260 = uVar16;
      uStack_258 = uVar20;
      uStack_250 = uVar9;
      uStack_248 = uVar13;
      uStack_240 = uVar7;
      uStack_238 = uStack_188;
      uStack_230 = uStack_180;
      uStack_228 = uStack_178;
      uStack_220 = uStack_170;
      uStack_218 = uStack_168;
      uStack_210 = uStack_160;
      uStack_208 = uStack_158;
      uStack_200 = uStack_150;
      uStack_1f8 = uStack_148;
      uStack_1f0 = uStack_140;
      uStack_1e8 = uStack_138;
      FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
      uVar4 = 0x112ffe040;
      puVar5 = &UNK_10dc6e250;
      puVar3 = &uStack_290;
    }
    else {
      if (uStack_180 == 0) goto LAB_103cb5e90;
      uStack_288 = param_2[6];
      uStack_290 = param_2[5];
      uVar22 = param_2[8];
      uVar18 = param_2[7];
      uVar14 = param_2[10];
      uVar10 = param_2[9];
      uVar15 = param_2[0xc];
      uVar11 = param_2[0xb];
      uVar23 = param_2[0xe];
      uVar19 = param_2[0xd];
      uVar6 = param_2[0xf];
      uStack_280 = uVar18;
      uStack_278 = uVar22;
      uStack_270 = uVar10;
      uStack_268 = uVar14;
      uStack_260 = uVar11;
      uStack_258 = uVar15;
      uStack_250 = uVar19;
      uStack_248 = uVar23;
      uStack_240 = uVar6;
      if ((((((uVar2 == uStack_290) && (uStack_288 == uStack_1d8)) ||
            (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
           (((uVar17 == uVar18 && (uVar21 == uVar22)) ||
            (func_0x000107c605b8(uVar17,uVar21,uVar18,uVar22,0), (uVar17 & 1) != 0)))) &&
          (((uVar8 == uVar10 && (uVar12 == uVar14)) ||
           (func_0x000107c605b8(uVar8,uVar12,uVar10,uVar14,0), (uVar8 & 1) != 0)))) &&
         ((((uVar16 == uVar11 && (uVar20 == uVar15)) || (func_0x000107c605b8(), (uVar16 & 1) != 0))
          && (uVar9 == uVar19)))) {
        FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
        func_0x000100e25fcc(uVar13,uVar7,uVar23,uVar6);
        func_0x000103ccc92c(&uStack_290,0x112ffe038,&UNK_10dc6e248);
        if ((uVar13 & 1) != 0) goto LAB_103cb5fc8;
        uVar4 = 0x112ffe038;
        puVar5 = &UNK_10dc6e248;
        puVar3 = &uStack_1e0;
      }
      else {
        uVar4 = 0x112ffe038;
        puVar5 = &UNK_10dc6e248;
        FUN_103ccc4d0(&uStack_d0,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
        FUN_103ccc4d0(&uStack_130,auStack_2e8,0x112ffe038,&UNK_10dc6e248);
        func_0x000103ccc92c(&uStack_290,0x112ffe038,&UNK_10dc6e248);
        puVar3 = &uStack_1e0;
      }
    }
    func_0x000103ccc92c(puVar3,uVar4,puVar5);
  }
  uVar1 = 0;
LAB_103cb5f6c:
  return uVar1 & 1;
}



/* Entry: 103cb60d0; end: 103cb614f;  */

void FUN_103cb60d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffedf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6ff30;
  func_0x000107c61520(&UNK_10dc6ff30,&UNK_1106f71f8);
  puRam0000000112ffedf8 = puVar1;
  return;
}



/* Entry: 103cb6150; end: 103cb66cf;  */

uint FUN_103cb6150(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_7e8 [152];
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  undefined8 uStack_558;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
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
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
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
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_4b8 = param_1[7];
  uStack_4c0 = param_1[6];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  lStack_4c8 = param_1[5];
  uStack_4d0 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_4a8 = param_1[9];
  uStack_4b0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_498 = param_1[0xb];
  uStack_4a0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_4d8 = param_1[3];
  uStack_4e0 = param_1[2];
  uStack_268 = param_2[3];
  uStack_270 = param_2[2];
  uStack_258 = param_2[5];
  uStack_260 = param_2[4];
  uStack_478 = param_2[3];
  uStack_480 = param_2[2];
  lStack_468 = param_2[5];
  uStack_470 = param_2[4];
  uStack_448 = param_2[9];
  uStack_450 = param_2[8];
  uStack_228 = param_2[0xb];
  uStack_230 = param_2[10];
  uStack_438 = param_2[0xb];
  uStack_440 = param_2[10];
  uStack_218 = param_2[0xd];
  uStack_220 = param_2[0xc];
  uStack_458 = param_2[7];
  uStack_460 = param_2[6];
  uStack_238 = param_2[9];
  uStack_240 = param_2[8];
  uStack_248 = param_2[7];
  uStack_250 = param_2[6];
  uStack_488 = param_1[0xd];
  uStack_490 = param_1[0xc];
  uStack_428 = param_2[0xd];
  lStack_430 = param_2[0xc];
  if (lStack_4c8 == 0) {
    if (lStack_468 != 0) goto LAB_103cb62b4;
    uStack_5e8 = param_1[7];
    uStack_5f0 = param_1[6];
    uStack_5d8 = param_1[9];
    uStack_5e0 = param_1[8];
    uStack_5c8 = param_1[0xb];
    uStack_5d0 = param_1[10];
    uStack_5b8 = param_1[0xd];
    uStack_5c0 = param_1[0xc];
    uStack_608 = param_1[3];
    uStack_610 = param_1[2];
    lStack_5f8 = param_1[5];
    uStack_600 = param_1[4];
    FUN_103ccc4d0(&uStack_210,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_270,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_610,0x112ffe118,&UNK_10dc6e270);
LAB_103cb6390:
    uStack_478 = param_1[0x1b];
    uStack_480 = param_1[0x1a];
    uStack_298 = param_1[0x1d];
    uStack_2a0 = param_1[0x1c];
    uStack_488 = param_1[0x19];
    uStack_490 = param_1[0x18];
    uStack_2a8 = param_1[0x1b];
    uStack_2b0 = param_1[0x1a];
    lStack_468 = param_1[0x1d];
    uStack_470 = param_1[0x1c];
    uStack_288 = param_1[0x1f];
    uStack_290 = param_1[0x1e];
    uStack_4b8 = param_1[0x13];
    uStack_4c0 = param_1[0x12];
    uStack_2d8 = param_1[0x15];
    uStack_2e0 = param_1[0x14];
    lStack_4c8 = param_1[0x11];
    uStack_4d0 = param_1[0x10];
    uStack_2e8 = param_1[0x13];
    uStack_2f0 = param_1[0x12];
    uStack_4a8 = param_1[0x15];
    uStack_4b0 = param_1[0x14];
    uStack_2c8 = param_1[0x17];
    uStack_2d0 = param_1[0x16];
    uStack_498 = param_1[0x17];
    uStack_4a0 = param_1[0x16];
    uStack_2b8 = param_1[0x19];
    uStack_2c0 = param_1[0x18];
    uStack_308 = param_1[0xf];
    uStack_310 = param_1[0xe];
    uStack_2f8 = param_1[0x11];
    uStack_300 = param_1[0x10];
    uStack_4d8 = param_1[0xf];
    uStack_4e0 = param_1[0xe];
    uStack_3e0 = param_2[0x1b];
    uStack_3e8 = param_2[0x1a];
    uStack_338 = param_2[0x1d];
    uStack_340 = param_2[0x1c];
    uStack_3f0 = param_2[0x19];
    uStack_3f8 = param_2[0x18];
    uStack_348 = param_2[0x1b];
    uStack_350 = param_2[0x1a];
    lStack_3d0 = param_2[0x1d];
    uStack_3d8 = param_2[0x1c];
    uStack_328 = param_2[0x1f];
    uStack_330 = param_2[0x1e];
    uStack_420 = param_2[0x13];
    uStack_428 = param_2[0x12];
    uStack_378 = param_2[0x15];
    uStack_380 = param_2[0x14];
    lStack_430 = param_2[0x11];
    uStack_438 = param_2[0x10];
    uStack_388 = param_2[0x13];
    uStack_390 = param_2[0x12];
    uStack_410 = param_2[0x15];
    uStack_418 = param_2[0x14];
    uStack_368 = param_2[0x17];
    uStack_370 = param_2[0x16];
    uStack_400 = param_2[0x17];
    uStack_408 = param_2[0x16];
    uStack_358 = param_2[0x19];
    uStack_360 = param_2[0x18];
    uStack_3a8 = param_2[0xf];
    uStack_3b0 = param_2[0xe];
    uStack_398 = param_2[0x11];
    uStack_3a0 = param_2[0x10];
    uStack_440 = param_2[0xf];
    uStack_448 = param_2[0xe];
    uStack_458 = param_1[0x1f];
    uStack_460 = param_1[0x1e];
    iVar2 = (int)&uStack_448;
    uStack_3c0 = param_2[0x1f];
    uStack_3c8 = param_2[0x1e];
    uStack_280 = param_1[0x20];
    uStack_320 = param_2[0x20];
    uStack_450 = param_1[0x20];
    uStack_3b8 = param_2[0x20];
    iVar1 = (int)&uStack_4e0;
    func_0x000100d6b3c0();
    if (iVar1 == 1) {
      func_0x000100d6b3c0();
      if (iVar2 != 1) {
LAB_103cb6540:
        func_0x000107c610b4(&uStack_610,&uStack_4e0,0x130);
        FUN_103ccc4d0(&uStack_310,&uStack_1b0,0x112ffe128,&UNK_10dc6e280);
        FUN_103ccc4d0(&uStack_3b0,&uStack_1b0,0x112ffe128,&UNK_10dc6e280);
        uVar5 = 0x112ffe130;
        puVar6 = &UNK_10dc6e288;
        goto LAB_103cb6598;
      }
      uStack_5a8 = uStack_478;
      uStack_5b0 = uStack_480;
      lStack_598 = lStack_468;
      uStack_5a0 = uStack_470;
      uStack_588 = uStack_458;
      uStack_590 = uStack_460;
      uStack_580 = uStack_450;
      uStack_5e8 = uStack_4b8;
      uStack_5f0 = uStack_4c0;
      uStack_5d8 = uStack_4a8;
      uStack_5e0 = uStack_4b0;
      uStack_5c8 = uStack_498;
      uStack_5d0 = uStack_4a0;
      uStack_5b8 = uStack_488;
      uStack_5c0 = uStack_490;
      uStack_608 = uStack_4d8;
      uStack_610 = uStack_4e0;
      lStack_5f8 = lStack_4c8;
      uStack_600 = uStack_4d0;
      FUN_103ccc4d0(&uStack_310,&uStack_1b0,0x112ffe128,&UNK_10dc6e280);
      FUN_103ccc4d0(&uStack_3b0,&uStack_1b0,0x112ffe128,&UNK_10dc6e280);
      func_0x000103ccc92c(&uStack_610,0x112ffe128,&UNK_10dc6e280);
    }
    else {
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      lStack_638 = lStack_468;
      uStack_640 = uStack_470;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_620 = uStack_450;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_6a8 = uStack_4d8;
      uStack_6b0 = uStack_4e0;
      lStack_698 = lStack_4c8;
      uStack_6a0 = uStack_4d0;
      func_0x000100d6b3c0();
      if (iVar2 == 1) goto LAB_103cb6540;
      uStack_6e8 = uStack_3e0;
      uStack_6f0 = uStack_3e8;
      lStack_6d8 = lStack_3d0;
      uStack_6e0 = uStack_3d8;
      uStack_6c8 = uStack_3c0;
      uStack_6d0 = uStack_3c8;
      uStack_728 = uStack_420;
      uStack_730 = uStack_428;
      uStack_718 = uStack_410;
      uStack_720 = uStack_418;
      uStack_708 = uStack_400;
      uStack_710 = uStack_408;
      uStack_6f8 = uStack_3f0;
      uStack_700 = uStack_3f8;
      uStack_748 = uStack_440;
      uStack_750 = uStack_448;
      lStack_738 = lStack_430;
      uStack_740 = uStack_438;
      uStack_5a8 = uStack_3e0;
      uStack_5b0 = uStack_3e8;
      lStack_598 = lStack_3d0;
      uStack_5a0 = uStack_3d8;
      uStack_588 = uStack_3c0;
      uStack_590 = uStack_3c8;
      uStack_5e8 = uStack_420;
      uStack_5f0 = uStack_428;
      uStack_5d8 = uStack_410;
      uStack_5e0 = uStack_418;
      uStack_5c8 = uStack_400;
      uStack_5d0 = uStack_408;
      uStack_5b8 = uStack_3f0;
      uStack_5c0 = uStack_3f8;
      uStack_6c0 = uStack_3b8;
      uStack_580 = uStack_3b8;
      uStack_608 = uStack_440;
      uStack_610 = uStack_448;
      lStack_5f8 = lStack_430;
      uStack_600 = uStack_438;
      uStack_148 = uStack_648;
      uStack_150 = uStack_650;
      lStack_138 = lStack_638;
      uStack_140 = uStack_640;
      uStack_128 = uStack_628;
      uStack_130 = uStack_630;
      uStack_120 = uStack_620;
      uStack_188 = uStack_688;
      uStack_190 = uStack_690;
      uStack_178 = uStack_678;
      uStack_180 = uStack_680;
      uStack_168 = uStack_668;
      uStack_170 = uStack_670;
      uStack_158 = uStack_658;
      uStack_160 = uStack_660;
      uStack_1a8 = uStack_6a8;
      uStack_1b0 = uStack_6b0;
      lStack_198 = lStack_698;
      uStack_1a0 = uStack_6a0;
      FUN_103ccc4d0(&uStack_310,auStack_7e8,0x112ffe128,&UNK_10dc6e280);
      FUN_103ccc4d0(&uStack_3b0,auStack_7e8,0x112ffe128,&UNK_10dc6e280);
      puVar4 = &uStack_1b0;
      FUN_103caec90(puVar4,&uStack_610);
      func_0x000103ccc92c(&uStack_750,0x112ffe128,&UNK_10dc6e280);
      func_0x000103ccc92c(&uStack_4e0,0x112ffe128,&UNK_10dc6e280);
      if (((ulong)puVar4 & 1) == 0) goto LAB_103cb65a0;
    }
    uVar5 = *param_1;
    func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
    uVar3 = (uint)uVar5;
  }
  else {
    if (lStack_468 == 0) {
LAB_103cb62b4:
      uStack_610 = uStack_4e0;
      uStack_608 = uStack_4d8;
      uStack_600 = uStack_4d0;
      lStack_5f8 = lStack_4c8;
      uStack_5f0 = uStack_4c0;
      uStack_5e8 = uStack_4b8;
      uStack_5e0 = uStack_4b0;
      uStack_5d8 = uStack_4a8;
      uStack_5d0 = uStack_4a0;
      uStack_5c8 = uStack_498;
      uStack_5c0 = uStack_490;
      uStack_5b8 = uStack_488;
      uStack_5b0 = uStack_480;
      uStack_5a8 = uStack_478;
      uStack_5a0 = uStack_470;
      lStack_598 = lStack_468;
      uStack_590 = uStack_460;
      uStack_588 = uStack_458;
      uStack_580 = uStack_450;
      uStack_578 = uStack_448;
      uStack_570 = uStack_440;
      uStack_568 = uStack_438;
      lStack_560 = lStack_430;
      uStack_558 = uStack_428;
      FUN_103ccc4d0(&uStack_210,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
      FUN_103ccc4d0(&uStack_270,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
      uVar5 = 0x112ffe120;
      puVar6 = &UNK_10dc6e278;
LAB_103cb6598:
      func_0x000103ccc92c(&uStack_610,uVar5,puVar6);
    }
    else {
      uStack_5e8 = param_2[7];
      uStack_5f0 = param_2[6];
      uStack_5d8 = param_2[9];
      uStack_5e0 = param_2[8];
      uStack_5c8 = param_2[0xb];
      uStack_5d0 = param_2[10];
      uStack_5b8 = param_2[0xd];
      uStack_5c0 = param_2[0xc];
      uStack_608 = param_2[3];
      uStack_610 = param_2[2];
      lStack_5f8 = param_2[5];
      uStack_600 = param_2[4];
      uStack_e8 = param_1[7];
      uStack_f0 = param_1[6];
      uStack_d8 = param_1[9];
      uStack_e0 = param_1[8];
      uStack_c8 = param_1[0xb];
      uStack_d0 = param_1[10];
      uStack_b8 = param_1[0xd];
      uStack_c0 = param_1[0xc];
      uStack_108 = param_1[3];
      uStack_110 = param_1[2];
      uStack_f8 = param_1[5];
      uStack_100 = param_1[4];
      uStack_b0 = uStack_610;
      uStack_a8 = uStack_608;
      uStack_a0 = uStack_600;
      lStack_98 = lStack_5f8;
      uStack_90 = uStack_5f0;
      uStack_88 = uStack_5e8;
      uStack_80 = uStack_5e0;
      uStack_78 = uStack_5d8;
      uStack_70 = uStack_5d0;
      uStack_68 = uStack_5c8;
      uStack_60 = uStack_5c0;
      uStack_58 = uStack_5b8;
      FUN_103ccc4d0(&uStack_210,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
      FUN_103ccc4d0(&uStack_270,&uStack_1b0,0x112ffe118,&UNK_10dc6e270);
      puVar4 = &uStack_110;
      func_0x000103caeaf0(puVar4,&uStack_b0);
      func_0x000103ccc92c(&uStack_610,0x112ffe118,&UNK_10dc6e270);
      func_0x000103ccc92c(&uStack_4e0,0x112ffe118,&UNK_10dc6e270);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103cb6390;
    }
LAB_103cb65a0:
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103cb66d0; end: 103cb6727;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb66d0(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto SUB_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
SUB_100e25fcc:
        do {
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar8;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
          unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
          unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        } while( true );
      }
    }
    else if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103cb6728; end: 103cb680f;  */

/* WARNING: Possible PIC construction at 0x000103cb6758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb67e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb67e8) */
/* WARNING: Removing unreachable block (ram,0x000103cb67a0) */
/* WARNING: Removing unreachable block (ram,0x000103cb675c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb6728(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      uVar14 = param_1[6];
      if (((uVar14 != param_2[6]) || (param_1[7] != param_2[7])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[8];
      pbVar16 = (byte *)param_1[9];
      pbVar17 = (byte *)param_2[8];
      pbVar12 = (byte *)param_2[9];
      if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
        pbVar10 = (byte *)param_1[10];
        pbVar25 = (byte *)param_1[0xb];
        lVar24 = param_2[10];
        uVar14 = param_2[0xb];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar25 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar14 >> 0x20);
          uVar21 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar15 = pbVar25;
          if ((ulong)pbVar25 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                (uVar14 >> 0x3e < 3)) ||
               ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar20 = (ulong)(iVar19 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar21 == 0) {
              uVar22 = uVar14 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar19 = (int)((ulong)lVar24 >> 0x20);
            if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar21 == 2) {
              uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
              if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar20 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar25;
                  puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                  pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar15 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar15 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar15 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
                }
                unaff_x23 = unaff_x24 + -lVar26;
                if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar25;
                if (pbVar10 == (byte *)0x0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar14;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar20 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar13 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar23 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar16 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar13 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              if (((ulong)pbVar13 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              lVar24 = *(long *)(pbVar15 + 0x18);
              if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar23 != (byte *)0x0) {
                  if (lVar24 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar24);
                  func_0x000107c61174();
                  pbVar12 = pbVar23;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar23);
                  func_0x000107c61170(lVar24);
                  pbVar23 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar24 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            break;
          }
          lVar26 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                 (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar12 = *(byte **)(pbVar15 + 0x18),
                 pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              break;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)(pbVar15 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar12 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar12 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
            }
            if (lVar26 != 0) {
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar23 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                lVar26 == 0) && pbVar25 == (byte *)0x0) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar15 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar13 == (byte *)0x1) &&
               (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar24 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar15[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar24 = *(long *)(pbVar15 + 8);
          uVar14 = *(ulong *)(pbVar15 + 0x10);
          lVar26 = *(long *)pbVar15;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar11);
          if (((ulong)pbVar13 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103cb6810; end: 103cb69a3;  */

uint FUN_103cb6810(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_320 [240];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == *(long *)(lVar3 + 0x10)) {
    if (lVar5 != 0 && lVar4 != lVar3) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      puVar7 = (undefined8 *)(lVar3 + 0x20);
      do {
        uStack_228 = puVar6[1];
        uStack_230 = *puVar6;
        uStack_218 = puVar6[3];
        uStack_220 = puVar6[2];
        uStack_208 = puVar6[5];
        uStack_210 = puVar6[4];
        uStack_1f8 = puVar6[7];
        uStack_200 = puVar6[6];
        uStack_1e8 = puVar6[9];
        uStack_1f0 = puVar6[8];
        uStack_1d8 = puVar6[0xb];
        uStack_1e0 = puVar6[10];
        uStack_1c8 = puVar6[0xd];
        uStack_1d0 = puVar6[0xc];
        uStack_1b8 = puVar6[0xf];
        uStack_1c0 = puVar6[0xe];
        uStack_1a8 = puVar6[0x11];
        uStack_1b0 = puVar6[0x10];
        uStack_198 = puVar6[0x13];
        uStack_1a0 = puVar6[0x12];
        uStack_188 = puVar6[0x15];
        uStack_190 = puVar6[0x14];
        uStack_178 = puVar6[0x17];
        uStack_180 = puVar6[0x16];
        uStack_168 = puVar6[0x19];
        uStack_170 = puVar6[0x18];
        uStack_158 = puVar6[0x1b];
        uStack_160 = puVar6[0x1a];
        uStack_148 = puVar6[0x1d];
        uStack_150 = puVar6[0x1c];
        uStack_138 = puVar7[1];
        uStack_140 = *puVar7;
        uStack_128 = puVar7[3];
        uStack_130 = puVar7[2];
        uStack_118 = puVar7[5];
        uStack_120 = puVar7[4];
        uStack_108 = puVar7[7];
        uStack_110 = puVar7[6];
        uStack_f8 = puVar7[9];
        uStack_100 = puVar7[8];
        uStack_e8 = puVar7[0xb];
        uStack_f0 = puVar7[10];
        uStack_d8 = puVar7[0xd];
        uStack_e0 = puVar7[0xc];
        uStack_c8 = puVar7[0xf];
        uStack_d0 = puVar7[0xe];
        uStack_b8 = puVar7[0x11];
        uStack_c0 = puVar7[0x10];
        uStack_a8 = puVar7[0x13];
        uStack_b0 = puVar7[0x12];
        uStack_98 = puVar7[0x15];
        uStack_a0 = puVar7[0x14];
        uStack_88 = puVar7[0x17];
        uStack_90 = puVar7[0x16];
        uStack_78 = puVar7[0x19];
        uStack_80 = puVar7[0x18];
        uStack_68 = puVar7[0x1b];
        uStack_70 = puVar7[0x1a];
        uStack_58 = puVar7[0x1d];
        uStack_60 = puVar7[0x1c];
        FUN_103caf3b8(&uStack_230,auStack_320);
        FUN_103caf3b8(&uStack_140,auStack_320);
        puVar2 = &uStack_230;
        FUN_103caf440(puVar2,&uStack_140);
        func_0x000103caf3ec(&uStack_140);
        func_0x000103caf3ec(&uStack_230);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103cb6974;
        puVar7 = puVar7 + 0x1e;
        puVar6 = puVar6 + 0x1e;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar5 = param_1[1];
    lVar3 = param_2[1];
    if ((char)param_2[2] == '\x01') {
      if (lVar3 == 0) {
        if (lVar5 == 0) goto LAB_103cb6960;
      }
      else if (lVar3 == 1) {
        if (lVar5 == 1) {
LAB_103cb6960:
          lVar5 = param_1[3];
          func_0x000100e25fcc(lVar5,param_1[4],param_2[3],param_2[4]);
          uVar1 = (uint)lVar5;
          goto LAB_103cb6978;
        }
      }
      else if (lVar5 == 2) goto LAB_103cb6960;
    }
    else if (lVar5 == lVar3) goto LAB_103cb6960;
  }
LAB_103cb6974:
  uVar1 = 0;
LAB_103cb6978:
  return uVar1 & 1;
}



/* Entry: 103cb69a4; end: 103cb6aa7;  */

/* WARNING: Possible PIC construction at 0x000103cb69fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cb6a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103cb6a00) */
/* WARNING: Removing unreachable block (ram,0x000103cb6a8c) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103cb69a4(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 == *(long *)(lVar22 + 0x10)) {
    if (lVar26 != 0 && lVar19 != lVar22) {
      puVar28 = (undefined8 *)(lVar22 + 0x28);
      puVar29 = (undefined8 *)(lVar19 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    pbVar12 = (byte *)param_1[1];
    pbVar15 = (byte *)param_1[2];
    pbVar16 = (byte *)param_2[1];
    pbVar17 = (byte *)param_2[2];
    if ((byte *)param_1[1] != (byte *)param_2[1] || (byte *)param_1[2] != (byte *)param_2[2]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    uVar13 = param_1[3];
    if ((((uVar13 == param_2[3]) && (param_1[4] == param_2[4])) ||
        (func_0x000107c605b8(), (uVar13 & 1) != 0)) &&
       (((*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1) == 0)) {
      pbVar10 = (byte *)param_1[6];
      pbVar27 = (byte *)param_1[7];
      lVar26 = param_2[6];
      uVar13 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar27 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar26 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar27;
                puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar26,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar26;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar19;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar30 = pbVar14[8] | (byte)lVar26;
          bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar14[0x10] | (byte)lVar19;
          bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar26 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103cb6aa8; end: 103cb6b27;  */

void FUN_103cb6aa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffee18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc700e0;
  func_0x000107c61520(&UNK_10dc700e0,&UNK_1106f7308);
  puRam0000000112ffee18 = puVar1;
  return;
}



/* Entry: 103cb6b28; end: 103cb6e3b;  */

uint FUN_103cb6b28(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_218 [24];
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == *(long *)(lVar4 + 0x10)) {
    if (lVar7 != 0 && lVar5 != lVar4) {
      puVar8 = (undefined8 *)(lVar5 + 0x20);
      puVar10 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_158 = puVar8[1];
        uStack_160 = *puVar8;
        uStack_148 = puVar8[3];
        uStack_150 = puVar8[2];
        uStack_138 = puVar8[5];
        uStack_140 = puVar8[4];
        uStack_128 = puVar8[7];
        uStack_130 = puVar8[6];
        uStack_118 = puVar8[9];
        uStack_120 = puVar8[8];
        uStack_108 = puVar8[0xb];
        uStack_110 = puVar8[10];
        uStack_f8 = puVar8[0xd];
        uStack_100 = puVar8[0xc];
        uStack_e8 = puVar8[0xf];
        uStack_f0 = puVar8[0xe];
        uStack_78 = puVar10[0xd];
        uStack_80 = puVar10[0xc];
        uStack_68 = puVar10[0xf];
        uStack_70 = puVar10[0xe];
        uStack_98 = puVar10[9];
        uStack_a0 = puVar10[8];
        uStack_88 = puVar10[0xb];
        uStack_90 = puVar10[10];
        uStack_d8 = puVar10[1];
        uStack_e0 = *puVar10;
        uStack_c8 = puVar10[3];
        uStack_d0 = puVar10[2];
        uStack_b8 = puVar10[5];
        uStack_c0 = puVar10[4];
        uStack_a8 = puVar10[7];
        uStack_b0 = puVar10[6];
        func_0x000103ccc8cc(&uStack_160,&lStack_200);
        func_0x000103ccc8cc(&uStack_e0,&lStack_200);
        puVar2 = &uStack_160;
        FUN_103cb5be4(puVar2,&uStack_e0);
        func_0x000103ccc900(&uStack_e0);
        func_0x000103ccc900(&uStack_160);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103cb6e14;
        puVar10 = puVar10 + 0x10;
        puVar8 = puVar8 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar11 = param_1[1];
    if ((uVar11 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar11 & 1) != 0)) {
      uVar11 = param_1[8];
      lVar7 = param_1[7];
      uVar6 = param_1[9];
      uVar12 = param_2[8];
      lVar4 = param_2[7];
      uVar9 = param_2[9];
      lStack_200 = lVar7;
      uStack_1f8 = uVar11;
      uStack_1f0 = uVar6;
      lStack_180 = lVar4;
      uStack_178 = uVar12;
      uStack_170 = uVar9;
      if (uVar6 >> 0x3c < 0xf) {
        if (0xe < uVar9 >> 0x3c) goto LAB_103cb6cf4;
        if (lVar7 == lVar4) {
          FUN_103ccc4d0(&lStack_200,auStack_218,0x112db6f48,&UNK_10d969b40);
          FUN_103ccc4d0(&lStack_180,auStack_218,0x112db6f48,&UNK_10d969b40);
          uVar3 = uVar11;
          func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar9);
          func_0x00010159fa64(lVar7,uVar12,uVar9);
          if ((uVar3 & 1) != 0) goto LAB_103cb6ca4;
        }
        else {
          FUN_103ccc4d0(&lStack_200,auStack_218,0x112db6f48,&UNK_10d969b40);
          FUN_103ccc4d0(&lStack_180,auStack_218,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(lVar4,uVar12,uVar9);
        }
      }
      else {
        if (0xe < uVar9 >> 0x3c) {
          FUN_103ccc4d0(&lStack_200,auStack_218,0x112db6f48,&UNK_10d969b40);
          FUN_103ccc4d0(&lStack_180,auStack_218,0x112db6f48,&UNK_10d969b40);
LAB_103cb6ca4:
          func_0x00010159fa64(lVar7,uVar11,uVar6);
          uVar11 = param_1[3];
          if (((uVar11 == param_2[3]) && (param_1[4] == param_2[4])) ||
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) {
            lVar7 = param_1[5];
            func_0x000100e25fcc(lVar7,param_1[6],param_2[5],param_2[6]);
            uVar1 = (uint)lVar7;
            goto LAB_103cb6e18;
          }
          goto LAB_103cb6e14;
        }
LAB_103cb6cf4:
        FUN_103ccc4d0(&lStack_200,auStack_218,0x112db6f48,&UNK_10d969b40);
        FUN_103ccc4d0(&lStack_180,auStack_218,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar7,uVar11,uVar6);
        lVar7 = lVar4;
        uVar11 = uVar12;
        uVar6 = uVar9;
      }
      func_0x00010159fa64(lVar7,uVar11,uVar6);
    }
  }
LAB_103cb6e14:
  uVar1 = 0;
LAB_103cb6e18:
  return uVar1 & 1;
}



/* Entry: 103cb6e3c; end: 103cb88bb;  */

void FUN_103cb6e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffee30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc701b8;
  func_0x000107c61520(&UNK_10dc701b8,&UNK_1106f7398);
  puRam0000000112ffee30 = puVar1;
  return;
}



/* Entry: 103cb88bc; end: 103cb88cf;  */

void FUN_103cb88bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb88d0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8910)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb88d0; end: 103cb897b;  */

void FUN_103cb88d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e430;
  func_0x000107c61520(&UNK_10dc6e430,&UNK_1106f6ba0);
  puRam0000000112fff440 = puVar1;
  return;
}



/* Entry: 103cb897c; end: 103cb897f;  */

void FUN_103cb897c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e470;
  func_0x000107c61520(&UNK_10dc6e470,&UNK_1106f6ba0);
  puRam0000000112fff460 = puVar1;
  return;
}



/* Entry: 103cb8980; end: 103cb89bf;  */

void FUN_103cb8980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e470;
  func_0x000107c61520(&UNK_10dc6e470,&UNK_1106f6ba0);
  puRam0000000112fff460 = puVar1;
  return;
}



/* Entry: 103cb89c0; end: 103cb89d3;  */

void FUN_103cb89c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb89d4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8a14)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb89d4; end: 103cb8a7f;  */

void FUN_103cb89d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e530;
  func_0x000107c61520(&UNK_10dc6e530,&UNK_1106f6c30);
  puRam0000000112fff468 = puVar1;
  return;
}



/* Entry: 103cb8a80; end: 103cb8a83;  */

void FUN_103cb8a80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e570;
  func_0x000107c61520(&UNK_10dc6e570,&UNK_1106f6c30);
  puRam0000000112fff488 = puVar1;
  return;
}



/* Entry: 103cb8a84; end: 103cb8ac3;  */

void FUN_103cb8a84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e570;
  func_0x000107c61520(&UNK_10dc6e570,&UNK_1106f6c30);
  puRam0000000112fff488 = puVar1;
  return;
}



/* Entry: 103cb8ac4; end: 103cb8ad7;  */

void FUN_103cb8ac4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb8ad8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8b18)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb8ad8; end: 103cb8b83;  */

void FUN_103cb8ad8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e630;
  func_0x000107c61520(&UNK_10dc6e630,&UNK_1106f6cc0);
  puRam0000000112fff490 = puVar1;
  return;
}



/* Entry: 103cb8b84; end: 103cb8b87;  */

void FUN_103cb8b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e670;
  func_0x000107c61520(&UNK_10dc6e670,&UNK_1106f6cc0);
  puRam0000000112fff4b0 = puVar1;
  return;
}



/* Entry: 103cb8b88; end: 103cb8bc7;  */

void FUN_103cb8b88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e670;
  func_0x000107c61520(&UNK_10dc6e670,&UNK_1106f6cc0);
  puRam0000000112fff4b0 = puVar1;
  return;
}



/* Entry: 103cb8bc8; end: 103cb8bdb;  */

void FUN_103cb8bc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb8bdc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8c1c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb8bdc; end: 103cb8c87;  */

void FUN_103cb8bdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e730;
  func_0x000107c61520(&UNK_10dc6e730,&UNK_1106f6d50);
  puRam0000000112fff4b8 = puVar1;
  return;
}



/* Entry: 103cb8c88; end: 103cb8c8b;  */

void FUN_103cb8c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e770;
  func_0x000107c61520(&UNK_10dc6e770,&UNK_1106f6d50);
  puRam0000000112fff4d8 = puVar1;
  return;
}



/* Entry: 103cb8c8c; end: 103cb8ccb;  */

void FUN_103cb8c8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e770;
  func_0x000107c61520(&UNK_10dc6e770,&UNK_1106f6d50);
  puRam0000000112fff4d8 = puVar1;
  return;
}



/* Entry: 103cb8ccc; end: 103cb8cdf;  */

void FUN_103cb8ccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb8ce0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8d20)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb8ce0; end: 103cb8d8b;  */

void FUN_103cb8ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff4e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e830;
  func_0x000107c61520(&UNK_10dc6e830,&UNK_1106f7670);
  puRam0000000112fff4e0 = puVar1;
  return;
}



/* Entry: 103cb8d8c; end: 103cb8d8f;  */

void FUN_103cb8d8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e870;
  func_0x000107c61520(&UNK_10dc6e870,&UNK_1106f7670);
  puRam0000000112fff500 = puVar1;
  return;
}



/* Entry: 103cb8d90; end: 103cb8dcf;  */

void FUN_103cb8d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e870;
  func_0x000107c61520(&UNK_10dc6e870,&UNK_1106f7670);
  puRam0000000112fff500 = puVar1;
  return;
}



/* Entry: 103cb8dd0; end: 103cb8de3;  */

void FUN_103cb8dd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb8de4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8e24)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb8de4; end: 103cb8e8f;  */

void FUN_103cb8de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e930;
  func_0x000107c61520(&UNK_10dc6e930,&UNK_1106f78c0);
  puRam0000000112fff508 = puVar1;
  return;
}



/* Entry: 103cb8e90; end: 103cb8e93;  */

void FUN_103cb8e90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e970;
  func_0x000107c61520(&UNK_10dc6e970,&UNK_1106f78c0);
  puRam0000000112fff528 = puVar1;
  return;
}



/* Entry: 103cb8e94; end: 103cb8ed3;  */

void FUN_103cb8e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6e970;
  func_0x000107c61520(&UNK_10dc6e970,&UNK_1106f78c0);
  puRam0000000112fff528 = puVar1;
  return;
}



/* Entry: 103cb8ed4; end: 103cb8ee7;  */

void FUN_103cb8ed4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103cb8ee8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cb8f28)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103cb8ee8; end: 103cb8f93;  */

void FUN_103cb8ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6ea30;
  func_0x000107c61520(&UNK_10dc6ea30,&UNK_1106f7c78);
  puRam0000000112fff530 = puVar1;
  return;
}



/* Entry: 103cb8f94; end: 103cb8f97;  */

void FUN_103cb8f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fff550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6ea70;
  func_0x000107c61520(&UNK_10dc6ea70,&UNK_1106f7c78);
  puRam0000000112fff550 = puVar1;
  return;
}


