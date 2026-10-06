/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109529a38; end: 109529b93;  */

void FUN_109529a38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x90);
  func_0x000107c31940(auStack_48,&UNK_10f573086);
  FUN_1094a69fc(lVar1 + 8,auStack_48,*(long *)(param_1 + 0x18) + 0x18,param_1 + 0x40);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar1 = (long)*(char *)(param_1 + 0x57);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  if (lVar1 != 0) {
    func_0x000107c2ac70(*(long *)(param_1 + 0x18) + 0x170,param_1 + 0x40);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c31940(auStack_48,&UNK_10f573095);
  FUN_1094a69fc(lVar1 + 8,auStack_48,*(long *)(param_1 + 0x18) + 0x18,param_1 + 0x58);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar1 = (long)*(char *)(param_1 + 0x6f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x60);
  }
  if (lVar1 != 0) {
    func_0x000107c2ac70(*(long *)(param_1 + 0x18) + 0x188,param_1 + 0x58);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c31940(auStack_48,&UNK_10f573086);
  FUN_1094a69fc(lVar1 + 8,auStack_48,*(long *)(param_1 + 0x18) + 0x18,param_1 + 0x40);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  FUN_10952b504(param_1,param_2);
  return;
}



/* Entry: 109529b94; end: 10952a833;  */

void FUN_109529b94(long param_1,long param_2,long param_3)

{
  int *piVar1;
  float *****pppppfVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 ****ppppuVar8;
  double dVar9;
  code *pcVar10;
  float *****pppppfVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  float *****pppppfVar19;
  float *****pppppfVar20;
  undefined8 *****pppppuVar21;
  undefined8 *puVar22;
  long lVar23;
  double dVar24;
  ulong uVar25;
  float fVar26;
  float ****ppppfVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  int iVar34;
  undefined8 ****ppppuStack_7b0;
  undefined8 ****ppppuStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 uStack_758;
  undefined4 uStack_750;
  undefined1 uStack_74c;
  undefined4 uStack_748;
  undefined8 uStack_744;
  undefined8 uStack_73c;
  undefined8 uStack_734;
  undefined8 uStack_72c;
  undefined8 uStack_724;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  undefined8 uStack_6e4;
  undefined8 uStack_6dc;
  undefined8 uStack_6d4;
  undefined8 uStack_6cc;
  undefined8 uStack_6c4;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 uStack_688;
  undefined1 uStack_684;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined1 uStack_658;
  undefined1 uStack_648;
  undefined1 uStack_644;
  undefined1 uStack_640;
  undefined1 uStack_63c;
  undefined1 uStack_638;
  undefined4 uStack_634;
  float ****ppppfStack_628;
  float ****ppppfStack_620;
  float ****ppppfStack_618;
  undefined8 ****ppppuStack_610;
  undefined8 ****ppppuStack_608;
  undefined8 uStack_600;
  uint uStack_5f8;
  int iStack_5f4;
  int iStack_5f0;
  int iStack_5ec;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  int *piStack_5b8;
  long *plStack_5b0;
  long lStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  float *pfStack_588;
  float *pfStack_580;
  long lStack_578;
  long lStack_570;
  undefined8 uStack_568;
  long lStack_560;
  undefined4 *puStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  float *pfStack_538;
  float *pfStack_530;
  undefined4 auStack_520 [2];
  undefined4 *puStack_518;
  undefined8 uStack_510;
  long alStack_508 [44];
  undefined4 auStack_3a8 [2];
  long *plStack_3a0;
  undefined8 uStack_398;
  double adStack_390 [4];
  float ***pppfStack_370;
  undefined8 ****ppppuStack_368;
  undefined8 uStack_360;
  undefined4 auStack_210 [2];
  float ***pppfStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  undefined8 ****ppppuStack_1f0;
  undefined8 uStack_1e8;
  double adStack_1e0 [4];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  undefined1 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
  if (param_3 == 0) {
    FUN_109262df8(&UNK_10f639994);
LAB_10952a6ac:
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    ppppuStack_7b0 = (undefined8 ****)(puVar12 + 1);
    ppppuStack_7a8 = (undefined8 *****)0x1c;
    *(undefined1 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar12 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar12 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar12 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&ppppuStack_7b0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10952a708:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10952a70c);
    (*pcVar10)();
  }
  lStack_5e8 = *(long *)(param_3 + 0x48);
  iStack_5ec = *(int *)(param_3 + 0x30);
  iStack_5f0 = *(int *)(param_3 + 0x34);
  uVar7 = *(int *)(param_3 + 0x38) * 8 - 3;
  uVar3 = uVar7 & 0xfff;
  uStack_5f8 = uVar3 | 0x42ff0000;
  iStack_5f4 = 2;
  piStack_5b8 = &iStack_5f0;
  lStack_5d0 = 0;
  lStack_5d8 = 0;
  lStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5a0 = 0;
  lStack_5a8 = 0;
  lStack_5e0 = lStack_5e8;
  plStack_5b0 = &lStack_5a8;
  if (lStack_5e8 == 0 && (long)iStack_5ec * (long)iStack_5f0 != 0) goto LAB_10952a6ac;
  uVar7 = (uVar7 >> 1 & 0x7fc) + 4;
  uStack_5a0 = (ulong)uVar7;
  uStack_5f8 = uVar3 | 0x42ff4000;
  lStack_5a8 = (long)(int)uVar7 * (long)iStack_5ec;
  lStack_5d8 = lStack_5e8 + lStack_5a8 * iStack_5f0;
  ppppuStack_610 = (undefined8 *****)0x0;
  ppppuStack_608 = (undefined8 *****)0x0;
  uStack_600 = 0;
  ppppuStack_7b0 = (undefined8 ****)CONCAT44(ppppuStack_7b0._4_4_,0x1010000);
  ppppuStack_7a8 = (undefined8 ****)&uStack_5f8;
  uStack_7a0 = 0;
  pppfStack_370 = (float ***)CONCAT44(pppfStack_370._4_4_,0x2050000);
  ppppuStack_368 = &ppppuStack_610;
  uStack_360 = 0;
  lStack_5d0 = lStack_5d8;
  FUN_109a3dcec(&ppppuStack_7b0,&pppfStack_370);
  ppppuVar8 = ppppuStack_608;
  pppppuVar21 = (undefined8 *****)ppppuStack_610;
  if (ppppuStack_610 != ppppuStack_608) {
    do {
      uStack_7a0 = 0;
      ppppuStack_7b0 = (undefined8 ****)CONCAT44(ppppuStack_7b0._4_4_,0x1010000);
      pppfStack_370 = (float ***)CONCAT44(pppfStack_370._4_4_,0xc2010000);
      uStack_360 = 0;
      ppppuStack_7a8 = pppppuVar21;
      ppppuStack_368 = pppppuVar21;
      FUN_109b59078(0x3fb99999a0000000,0x3ff0000000000000,&ppppuStack_7b0,&pppfStack_370,3);
      pppppuVar21 = pppppuVar21 + 0xc;
    } while (pppppuVar21 != (undefined8 *****)ppppuVar8);
    if (ppppuStack_610 != ppppuStack_608) {
      FUN_109367d10(&pfStack_538,(long)*(int *)(ppppuStack_610 + 1));
      if (pfStack_538 != pfStack_530) {
        dVar24 = 0.5;
        pfVar17 = pfStack_538;
        do {
          pfVar18 = pfVar17 + 1;
          *pfVar17 = (float)dVar24;
          dVar24 = dVar24 + 1.0;
          pfVar17 = pfVar18;
        } while (pfVar18 != pfStack_530);
      }
      uStack_598 = 0x242ff4005;
      puStack_558 = &uStack_590;
      pfStack_580 = (float *)0x0;
      lStack_578 = 0;
      uStack_568 = 0;
      lStack_560 = 0;
      uStack_540 = 0;
      uStack_548 = 0;
      uVar13 = (long)pfStack_530 - (long)pfStack_538;
      uStack_590 = (undefined4)(uVar13 >> 2);
      uStack_58c = 1;
      if (uVar13 != 0) {
        uStack_540 = 4;
        uStack_548 = 4;
        pfStack_580 = pfStack_538;
        lStack_578 = (long)pfStack_538 + ((long)(uVar13 * 0x40000000) >> 0x1e);
        lStack_570 = lStack_578;
      }
      ppppfStack_628 = (float ****)0x0;
      ppppfStack_620 = (float ****)0x0;
      ppppfStack_618 = (float ****)0x0;
      pppppfVar11 = &ppppfStack_628;
      pfStack_588 = pfStack_580;
      puStack_550 = &uStack_548;
      FUN_1094fb9ec(pppppfVar11,
                    ((long)ppppuStack_608 - (long)ppppuStack_610 >> 5) * -0x5555555555555555);
      ppppuVar8 = ppppuStack_608;
      if (ppppuStack_610 != ppppuStack_608) {
        puVar15 = (undefined8 *)((ulong)&uStack_100 | 4);
        puVar16 = (undefined8 *)((ulong)&uStack_160 | 4);
        puVar22 = (undefined8 *)((ulong)&uStack_1c0 | 4);
        pppppuVar21 = (undefined8 *****)ppppuStack_610;
        do {
          uStack_100._0_4_ = 0x42ff0000;
          puVar15[1] = 0;
          *puVar15 = 0;
          puVar15[3] = 0;
          puVar15[2] = 0;
          puVar15[5] = 0;
          puVar15[4] = 0;
          *(undefined8 *)((long)puVar15 + 0x34) = 0;
          *(undefined8 *)((long)puVar15 + 0x2c) = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_7a0 = 0;
          ppppuStack_7b0._0_4_ = 0x1010000;
          pppfStack_370._0_4_ = 0x3010000;
          uStack_360 = 0;
          ppppuStack_7a8 = pppppuVar21;
          ppppuStack_368 = (undefined8 ****)&uStack_100;
          puStack_c0 = auStack_f8;
          puStack_b8 = &uStack_b0;
          FUN_109a91d90();
          FUN_109a42708(0x3ff0000000000000,0,&ppppuStack_7b0,&pppfStack_370,2,0xffffffff,pppppfVar11
                       );
          ppppuStack_368 = (undefined8 ****)&uStack_160;
          uStack_160._0_4_ = 0x42ff0000;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_7a0 = 0;
          ppppuStack_7b0._0_4_ = 0x1010000;
          pppfStack_370._0_4_ = 0x2010000;
          uStack_360 = 0;
          ppppuStack_7a8 = (undefined8 ****)&uStack_100;
          puStack_120 = auStack_158;
          puStack_118 = &uStack_110;
          FUN_109a93444(&ppppuStack_7b0,&pppfStack_370,0,0,0xffffffff);
          uStack_1c0._0_4_ = 0x42ff0000;
          puVar22[1] = 0;
          *puVar22 = 0;
          puVar22[3] = 0;
          puVar22[2] = 0;
          puVar22[5] = 0;
          puVar22[4] = 0;
          *(undefined8 *)((long)puVar22 + 0x34) = 0;
          *(undefined8 *)((long)puVar22 + 0x2c) = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_7a0 = 0;
          ppppuStack_7b0 = (undefined8 ****)CONCAT44(ppppuStack_7b0._4_4_,0x1010000);
          pppfStack_370 = (float ***)CONCAT44(pppfStack_370._4_4_,0x2010000);
          uStack_360 = 0;
          ppppuStack_368 = (undefined8 ****)&uStack_1c0;
          ppppuStack_7a8 = (undefined8 ****)&uStack_100;
          puStack_180 = auStack_1b8;
          puStack_178 = &uStack_170;
          FUN_109a93444(&ppppuStack_7b0,&pppfStack_370,1,0,0xffffffff);
          FUN_109a82210(&pppfStack_370,&uStack_160);
          uStack_200 = 0;
          auStack_210[0] = 0xc1060000;
          pppfStack_208 = (float ***)&pppfStack_370;
          FUN_109a8239c(&ppppuStack_7b0,0x3ff0000000000000,&uStack_598,auStack_210);
          uStack_1e8 = 0;
          auStack_1f8[0] = 0xc1060000;
          ppppuStack_1f0 = &ppppuStack_7b0;
          FUN_109ab74d4(adStack_1e0,auStack_1f8);
          dVar9 = adStack_1e0[0];
          uStack_510 = 0;
          auStack_520[0] = 0x1010000;
          puStack_518 = (undefined4 *)&uStack_1c0;
          FUN_109a8239c(alStack_508,0x3ff0000000000000,&uStack_598,auStack_520);
          uStack_398 = 0;
          auStack_3a8[0] = 0xc1060000;
          plStack_3a0 = alStack_508;
          FUN_109ab74d4(adStack_390,auStack_3a8);
          dVar24 = adStack_390[0];
          fVar31 = (float)adStack_390[0];
          FUN_10918eb6c(alStack_508);
          FUN_10918eb6c(&ppppuStack_7b0);
          pppppfVar11 = (float *****)&pppfStack_370;
          FUN_10918eb6c();
          iVar33 = *(int *)(pppppuVar21 + 1);
          iVar34 = *(int *)((long)pppppuVar21 + 0xc);
          uVar13 = (ulong)(float)(int)dVar9;
          fVar30 = *(float *)((long)pppppuVar21[2] +
                             (-(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 |
                             (uVar13 & 0xffffffff) << 2) +
                             (long)*pppppuVar21[9] * (long)(int)(long)(float)(int)dVar24);
          if (lStack_188 != 0) {
            piVar1 = (int *)(lStack_188 + 0x14);
            do {
              iVar4 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              pppppfVar11 = (float *****)&uStack_1c0;
              func_0x000109a848d4();
            }
          }
          lStack_188 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          if (0 < uStack_1c0._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(puStack_180 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_1c0._4_4_);
          }
          if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
            pppppfVar11 = (float *****)puStack_178[-1];
            _free();
          }
          if (lStack_128 != 0) {
            piVar1 = (int *)(lStack_128 + 0x14);
            do {
              iVar4 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              pppppfVar11 = (float *****)&uStack_160;
              func_0x000109a848d4();
            }
          }
          lStack_128 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          if (0 < uStack_160._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(puStack_120 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_160._4_4_);
          }
          if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
            pppppfVar11 = (float *****)puStack_118[-1];
            _free();
          }
          if (lStack_c8 != 0) {
            piVar1 = (int *)(lStack_c8 + 0x14);
            do {
              iVar4 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 + -1 == 0) {
              pppppfVar11 = (float *****)&uStack_100;
              func_0x000109a848d4();
            }
          }
          lStack_c8 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          if (0 < uStack_100._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(puStack_c0 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_100._4_4_);
          }
          if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
            pppppfVar11 = (float *****)puStack_b8[-1];
            _free();
          }
          fVar32 = (float)dVar9 / (float)iVar34;
          if (ppppfStack_620 < ppppfStack_618) {
            *(float *)ppppfStack_620 = fVar32;
            *(float *)((long)ppppfStack_620 + 4) = fVar31 / (float)iVar33;
            *(float *)(ppppfStack_620 + 1) = fVar30;
            pppppfVar19 = (float *****)((long)ppppfStack_620 + 0x14);
            *(undefined8 *)((long)ppppfStack_620 + 0xc) = 0x3f0000003f800000;
            pppppfVar2 = (float *****)ppppfStack_628;
          }
          else {
            lVar14 = (long)ppppfStack_620 - (long)ppppfStack_628;
            uVar13 = (lVar14 >> 2) * -0x3333333333333333 + 1;
            if (0xccccccccccccccc < uVar13) {
              FUN_1094f954c();
              goto LAB_10952a708;
            }
            lVar23 = (long)ppppfStack_618 - (long)ppppfStack_628 >> 2;
            uVar25 = lVar23 * -0x6666666666666666;
            if (uVar25 < uVar13 || uVar25 - uVar13 == 0) {
              uVar25 = uVar13;
            }
            if (0x666666666666665 < (ulong)(lVar23 * -0x3333333333333333)) {
              uVar25 = 0xccccccccccccccc;
            }
            if (uVar25 == 0) {
              pppppfVar11 = (float *****)0x0;
            }
            else {
              pppppfVar11 = &ppppfStack_628;
              FUN_1094f9560();
            }
            pfVar17 = (float *)((long)pppppfVar11 + lVar14);
            *pfVar17 = fVar32;
            pfVar17[1] = fVar31 / (float)iVar33;
            pfVar17[2] = fVar30;
            pfVar17[3] = 1.0;
            pfVar17[4] = 0.5;
            pppppfVar2 = (float *****)
                         ((long)pfVar17 + ((long)ppppfStack_628 - (long)ppppfStack_620));
            pppppfVar19 = (float *****)ppppfStack_628;
            pppppfVar20 = pppppfVar2;
            if ((long)ppppfStack_628 - (long)ppppfStack_620 != 0) {
              do {
                *pppppfVar20 = *pppppfVar19;
                ppppfVar27 = pppppfVar19[1];
                *(undefined4 *)(pppppfVar20 + 2) = *(undefined4 *)(pppppfVar19 + 2);
                pppppfVar20[1] = ppppfVar27;
                pppppfVar19 = (float *****)((long)pppppfVar19 + 0x14);
                pppppfVar20 = (float *****)((long)pppppfVar20 + 0x14);
              } while (pppppfVar19 != (float *****)ppppfStack_620);
            }
            ppppfStack_618 = (float ****)((long)pppppfVar11 + uVar25 * 0x14);
            pppppfVar19 = (float *****)(pfVar17 + 5);
            if ((float *****)ppppfStack_628 != (float *****)0x0) {
              pppppfVar11 = (float *****)ppppfStack_628;
              ppppfStack_628 = (float ****)pppppfVar2;
              ppppfStack_620 = (float ****)pppppfVar19;
              __ZdlPv();
              pppppfVar2 = (float *****)ppppfStack_628;
            }
          }
          ppppfStack_628 = (float ****)pppppfVar2;
          pppppuVar21 = pppppuVar21 + 0xc;
          ppppfStack_620 = (float ****)pppppfVar19;
        } while (pppppuVar21 != (undefined8 *****)ppppuVar8);
      }
      if (lStack_560 != 0) {
        piVar1 = (int *)(lStack_560 + 0x14);
        do {
          iVar33 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar33 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar33 + -1 == 0) {
          func_0x000109a848d4(&uStack_598);
        }
      }
      lStack_560 = 0;
      pfStack_580 = (float *)0x0;
      pfStack_588 = (float *)0x0;
      lStack_570 = 0;
      lStack_578 = 0;
      if (0 < uStack_598._4_4_) {
        lVar14 = 0;
        do {
          puStack_558[lVar14] = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < uStack_598._4_4_);
      }
      if (puStack_550 != &uStack_548 && puStack_550 != (undefined8 *)0x0) {
        _free(puStack_550[-1]);
      }
      if (pfStack_538 != (float *)0x0) {
        pfStack_530 = pfStack_538;
        __ZdlPv();
      }
      goto LAB_10952a3a4;
    }
  }
  ppppfStack_628 = (float ****)0x0;
  ppppfStack_620 = (float ****)0x0;
  ppppfStack_618 = (float ****)0x0;
LAB_10952a3a4:
  uStack_798 = 0;
  uStack_7a0 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  uStack_780 = 0x3f800000;
  uStack_770 = 0;
  uStack_778 = 0;
  uStack_760 = 0;
  uStack_768 = 0;
  uStack_758 = 0x3f800000;
  uStack_748 = 0x42ff0000;
  lStack_708 = (long)&uStack_744 + 4;
  uStack_73c = 0;
  uStack_744 = 0;
  uStack_72c = 0;
  uStack_734 = 0;
  uStack_71c = 0;
  uStack_724 = 0;
  uStack_710 = 0;
  uStack_718 = 0;
  uStack_714 = 0;
  puStack_700 = &uStack_6f8;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  uStack_6e8 = 0x42ff0000;
  lStack_6a8 = (long)&uStack_6e4 + 4;
  uStack_6dc = 0;
  uStack_6e4 = 0;
  uStack_6cc = 0;
  uStack_6d4 = 0;
  uStack_6bc = 0;
  uStack_6c4 = 0;
  uStack_6b0 = 0;
  uStack_6b8 = 0;
  uStack_6b4 = 0;
  puStack_6a0 = &uStack_698;
  uStack_684 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_660 = 0x3f800000;
  uStack_658 = 0;
  uStack_648 = 0;
  uStack_644 = 0;
  uStack_640 = 0;
  uStack_63c = 0;
  uStack_638 = 0;
  uStack_634 = 0;
  pppppfVar19 = (float *****)ppppfStack_628;
  pppppfVar11 = (float *****)ppppfStack_628;
  pppppfVar2 = (float *****)ppppfStack_628;
  if (ppppfStack_628 != ppppfStack_620) {
    while (pppppfVar19 = pppppfVar11, pppppfVar11 = (float *****)((long)pppppfVar2 + 0x14),
          pppppfVar11 != (float *****)ppppfStack_620) {
      pfVar17 = (float *)((long)pppppfVar2 + 0x1c);
      pppppfVar2 = pppppfVar11;
      if (*pfVar17 <= *(float *)(pppppfVar19 + 1)) {
        pppppfVar11 = pppppfVar19;
      }
    }
  }
  if (pppppfVar19 == (float *****)ppppfStack_620) {
    uStack_750 = 0;
  }
  else {
    uStack_750 = *(undefined4 *)(pppppfVar19 + 1);
  }
  uStack_74c = 1;
  uVar13 = 0;
  uVar25 = NEON_fmov(0x3f800000,4);
  pppppfVar11 = (float *****)ppppfStack_628;
  while( true ) {
    fVar32 = (float)uVar25;
    fVar26 = (float)(uVar25 >> 0x20);
    fVar30 = (float)uVar13;
    fVar31 = (float)(uVar13 >> 0x20);
    if (pppppfVar11 == (float *****)ppppfStack_620) break;
    ppppfVar27 = *pppppfVar11;
    fVar28 = (float)((ulong)ppppfVar27 >> 0x20);
    uVar25 = uVar25 ^ (uVar25 ^ (ulong)ppppfVar27) &
                      ~CONCAT44(-(uint)(fVar26 < fVar28),-(uint)(fVar32 < SUB84(ppppfVar27,0)));
    uVar13 = uVar13 ^ (uVar13 ^ (ulong)ppppfVar27) &
                      ~CONCAT44(-(uint)(fVar28 < fVar31),-(uint)(SUB84(ppppfVar27,0) < fVar30));
    pppppfVar11 = (float *****)((long)pppppfVar11 + 0x14);
  }
  ppppuStack_7b0 =
       (undefined8 ****)
       (uVar25 ^ (uVar25 ^ uVar13) & CONCAT44(-(uint)(fVar31 < fVar26),-(uint)(fVar30 < fVar32)));
  uVar13 = uVar13 ^ (uVar13 ^ uVar25) & ~CONCAT44(-(uint)(fVar26 < fVar31),-(uint)(fVar32 < fVar30))
  ;
  ppppuStack_7a8 =
       (undefined8 ****)
       CONCAT44((float)(uVar13 >> 0x20) - (float)((ulong)ppppuStack_7b0 >> 0x20),
                (float)uVar13 - SUB84(ppppuStack_7b0,0));
  FUN_1094cfa50(&uStack_7a0,
                (long)(float)(ulong)(((long)ppppfStack_620 - (long)ppppfStack_628 >> 2) *
                                    -0x3333333333333333));
  if (ppppfStack_620 != ppppfStack_628) {
    lVar23 = 0;
    lVar14 = 0;
    uVar13 = 0;
    do {
      puVar15 = (undefined8 *)((long)ppppfStack_628 + lVar23);
      uVar29 = *puVar15;
      pppfStack_370 = (float ***)puVar15[1];
      ppppuStack_368 = (undefined8 ****)CONCAT44(ppppuStack_368._4_4_,*(undefined4 *)(puVar15 + 2));
      alStack_508[0] = *(long *)(*(long *)(param_2 + 0x18) + 0x1b8) + lVar14;
      puVar15 = &uStack_7a0;
      FUN_1094e1a28(puVar15,alStack_508[0],&UNK_10dd5b8f9,alStack_508,&uStack_100);
      puVar15[5] = uVar29;
      puVar15[6] = pppfStack_370;
      *(undefined4 *)(puVar15 + 7) = ppppuStack_368._0_4_;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x18;
      lVar23 = lVar23 + 0x14;
    } while (uVar13 < (ulong)(((long)ppppfStack_620 - (long)ppppfStack_628 >> 2) *
                             -0x3333333333333333));
  }
  FUN_109503408(param_1,&ppppuStack_7b0);
  *(undefined1 *)(param_1 + 0x180) = 1;
  FUN_1095032d0(&ppppuStack_7b0);
  if ((float *****)ppppfStack_628 != (float *****)0x0) {
    ppppfStack_620 = ppppfStack_628;
    __ZdlPv();
  }
  ppppuStack_7b0 = &ppppuStack_610;
  FUN_1093702c4(&ppppuStack_7b0);
  if (lStack_5c0 != 0) {
    piVar1 = (int *)(lStack_5c0 + 0x14);
    do {
      iVar33 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar33 + -1 == 0) {
      func_0x000109a848d4(&uStack_5f8);
    }
  }
  lStack_5c0 = 0;
  lStack_5e0 = 0;
  lStack_5e8 = 0;
  lStack_5d0 = 0;
  lStack_5d8 = 0;
  if (0 < iStack_5f4) {
    lVar14 = 0;
    do {
      piStack_5b8[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_5f4);
  }
  if (plStack_5b0 != &lStack_5a8 && plStack_5b0 != (long *)0x0) {
    _free(plStack_5b0[-1]);
  }
  return;
}



/* Entry: 10952a834; end: 10952a8cf;  */

undefined8 * FUN_10952a834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb250;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 10952a8d0; end: 10952a8e3;  */

void FUN_10952a8d0(void)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000105688514(&UNK_10f5730a3);
  ppuStack_108 = &PTR_FUN_110afb220;
  uStack_100 = 0x42ff0000;
  uStack_f4 = 0;
  uStack_fc = 0;
  lStack_c0 = (long)&uStack_fc + 4;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  puStack_b8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0x42ff0000;
  lStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  *puVar1 = &PTR_FUN_110afb220;
  *(undefined4 *)(puVar1 + 1) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = puVar1 + 2;
  puVar1[10] = puVar1 + 0xb;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x17] = 0;
  puVar1[0x15] = puVar1 + 0xe;
  puVar1[0x16] = puVar1 + 0x17;
  puVar1[0x18] = 0;
  *extraout_x8 = puVar1;
  FUN_109528d94(&ppuStack_108);
  return;
}



/* Entry: 10952a8e4; end: 10952a9ef;  */

void FUN_10952a8e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_f8 = &PTR_FUN_110afb220;
  uStack_f0 = 0x42ff0000;
  uStack_e4 = 0;
  uStack_ec = 0;
  lStack_b0 = (long)&uStack_ec + 4;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x42ff0000;
  lStack_50 = (long)&uStack_8c + 4;
  uStack_84 = 0;
  uStack_8c = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  *puVar1 = &PTR_FUN_110afb220;
  *(undefined4 *)(puVar1 + 1) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = puVar1 + 2;
  puVar1[10] = puVar1 + 0xb;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x17] = 0;
  puVar1[0x15] = puVar1 + 0xe;
  puVar1[0x16] = puVar1 + 0x17;
  puVar1[0x18] = 0;
  *param_1 = puVar1;
  FUN_109528d94(&ppuStack_f8);
  return;
}



/* Entry: 10952a9f0; end: 10952aa6b;  */

void FUN_10952a9f0(undefined8 *param_1,long param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar4 = *(uint *)(param_2 + 8);
  iVar8 = (int)(long)(float)(int)((float)uVar4 * *param_3 + 0.5);
  iVar5 = uVar4 - 1;
  if (iVar8 <= (int)(uVar4 - 1)) {
    iVar5 = iVar8;
  }
  iVar2 = 0;
  if (-1 < iVar8) {
    iVar2 = iVar5;
  }
  iVar5 = *(uint *)(param_2 + 0xc) - 1;
  iVar8 = (int)(long)(float)(int)((float)*(uint *)(param_2 + 0xc) * param_3[1] + 0.5);
  if (iVar8 <= iVar5) {
    iVar5 = iVar8;
  }
  iVar3 = 0;
  if (-1 < iVar8) {
    iVar3 = iVar5;
  }
  uVar6 = (ulong)*(uint *)(param_2 + 0x10);
  puVar9 = (undefined4 *)
           (*(long *)(param_2 + 0x20) +
           (long)(int)((iVar2 + iVar3 * uVar4) * *(uint *)(param_2 + 0x10)) * 4);
  puVar1 = puVar9 + uVar6;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (uVar6 != 0) {
    FUN_1092cc154(param_1,uVar6);
    puVar7 = (undefined4 *)param_1[1];
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
    }
    param_1[1] = puVar7;
  }
  return;
}



/* Entry: 10952aa6c; end: 10952ace7;  */

void FUN_10952aa6c(undefined4 *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int *piStack_50;
  long *plStack_48;
  long lStack_40;
  ulong uStack_38;
  
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
  lVar9 = *(long *)(param_2 + 0x18);
  if (*(char *)(lVar9 + 0xdf) < '\0') {
    if (*(long *)(lVar9 + 0xd0) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar9 + 0xdf) == '\0') {
    return;
  }
  FUN_10937a848(param_3,lVar9 + 200);
  if (param_3 == 0) {
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    lStack_80 = *(long *)(param_3 + 0x48);
    iStack_84 = *(int *)(param_3 + 0x30);
    iStack_88 = *(int *)(param_3 + 0x34);
    iVar3 = *(int *)(param_3 + 0x38) * 8;
    uVar6 = iVar3 - 3;
    uVar2 = uVar6 & 0xfff;
    uStack_90 = uVar2 | 0x42ff0000;
    iStack_8c = 2;
    piStack_50 = &iStack_88;
    lStack_68 = 0;
    lStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_78 = lStack_80;
    plStack_48 = &lStack_40;
    if ((lStack_80 != 0) || ((long)iStack_88 * (long)iStack_84 == 0)) {
      uVar6 = (uVar6 >> 1 & 0x7fc) + 4;
      uStack_38 = (ulong)uVar6;
      lStack_40 = (long)(int)uVar6 * (long)iStack_84;
      uStack_90 = uVar2 | 0x42ff4000;
      lStack_70 = lStack_80 + lStack_40 * iStack_88;
      puStack_a8 = (undefined4 *)CONCAT44(puStack_a8._4_4_,0x2010000);
      uStack_98 = 0;
      puStack_a0 = param_1;
      lStack_68 = lStack_70;
      FUN_109a41858(0x406fe00000000000,0,&uStack_90,&puStack_a8,iVar3 + -8);
      if (lStack_58 != 0) {
        piVar1 = (int *)(lStack_58 + 0x14);
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
          func_0x000109a848d4(&uStack_90);
        }
      }
      lStack_58 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
      lStack_68 = 0;
      lStack_70 = 0;
      if (0 < iStack_8c) {
        lVar9 = 0;
        do {
          piStack_50[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_8c);
      }
      if (plStack_48 != &lStack_40 && plStack_48 != (long *)0x0) {
        _free(plStack_48[-1]);
      }
      return;
    }
    puVar8 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_a8 = puVar8 + 1;
    puStack_a0 = (undefined4 *)0x1c;
    *(undefined1 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_a8,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10952ac8c);
  (*pcVar7)();
}



/* Entry: 10952ace8; end: 10952b347;  */

void FUN_10952ace8(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_160;
  int iStack_158;
  int iStack_154;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  int *piStack_120;
  long *plStack_118;
  long alStack_110 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar14 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar14[0] = 0;
  piVar14[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  puVar11 = param_1 + 10;
  *puVar11 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = puVar11;
  param_1[0xb] = 0;
  lVar9 = *(long *)(param_2 + 0x18);
  if (*(char *)(lVar9 + 0xf7) < '\0') {
    if (*(long *)(lVar9 + 0xe8) != 0) goto LAB_10952ad74;
LAB_10952b218:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(char *)(lVar9 + 0xf7) == '\0') goto LAB_10952b218;
LAB_10952ad74:
    FUN_10938e710(param_3,lVar9 + 0xe0);
    if (param_3 != 0) {
      puStack_150 = *(undefined8 **)(param_3 + 0x48);
      iVar3 = *(int *)(param_3 + 0x30);
      iVar4 = *(int *)(param_3 + 0x34);
      iVar2 = iVar3 * iVar4 * 3;
      if (0 < iVar2) {
        puVar10 = puStack_150;
        do {
          fVar15 = *(float *)(puVar10 + 1);
          fVar17 = (float)((ulong)*puVar10 >> 0x20);
          fVar16 = (float)*puVar10;
          fVar18 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15);
          *puVar10 = CONCAT44(fVar17 / fVar18,fVar16 / fVar18);
          *(float *)(puVar10 + 1) = fVar15 / fVar18;
          puVar10 = (undefined8 *)((long)puVar10 + 0xc);
        } while (puVar10 < (undefined8 *)((long)puStack_150 + (long)iVar2 * 4));
      }
      uStack_160 = 0x242ff0015;
      piStack_120 = &iStack_158;
      puStack_138 = (undefined8 *)0x0;
      puStack_140 = (undefined8 *)0x0;
      lStack_128 = 0;
      uStack_130 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      iStack_158 = iVar4;
      iStack_154 = iVar3;
      puStack_148 = puStack_150;
      plStack_118 = alStack_110;
      if ((puStack_150 == (undefined8 *)0x0) && ((long)iVar4 * (long)iVar3 != 0)) {
        puVar8 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar8 = 1;
        uStack_e0 = puVar8 + 1;
        uStack_d8._0_4_ = 0x1c;
        uStack_d8._4_4_ = 0;
        *(undefined1 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_10952b2c0;
      }
      alStack_110[0] = (long)iVar3 * 0xc;
      uStack_160 = 0x242ff4015;
      alStack_110[1] = 0xc;
      puStack_140 = (undefined8 *)((long)puStack_150 + alStack_110[0] * iVar4);
      uStack_e0._0_4_ = 0x2010000;
      uStack_d0 = 0;
      uStack_cc = 0;
      puStack_138 = puStack_140;
      uStack_d8 = param_4 + 8;
      FUN_109a41858(0x405fe00000000000,0x405fe00000000000,&uStack_160,&uStack_e0,0x10);
      if ((*(int *)(param_4 + 0x70) != iVar4) || (*(int *)(param_4 + 0x74) != iVar3)) {
        uStack_100 = 0x406fe00000000000;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0._0_4_ = 0x42ff0000;
        uStack_a0 = (ulong)&uStack_e0 | 8;
        uStack_d8._4_4_ = 0;
        uStack_d0 = 0;
        uStack_e0._4_4_ = 0;
        uStack_d8._0_4_ = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_b4 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        puStack_98 = &uStack_90;
        iStack_80 = iVar4;
        iStack_7c = iVar3;
        FUN_109a83fd0(&uStack_e0,2,&iStack_80,0);
        FUN_109a48880(&uStack_e0,&uStack_100);
        if (*(long *)(param_4 + 0xa0) != 0) {
          piVar1 = (int *)(*(long *)(param_4 + 0xa0) + 0x14);
          do {
            iVar2 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar2 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(param_4 + 0x68);
          }
        }
        *(undefined8 *)(param_4 + 0xa0) = 0;
        *(undefined8 *)(param_4 + 0x80) = 0;
        *(undefined8 *)(param_4 + 0x78) = 0;
        *(undefined8 *)(param_4 + 0x90) = 0;
        *(undefined8 *)(param_4 + 0x88) = 0;
        if (0 < *(int *)(param_4 + 0x6c)) {
          lVar9 = 0;
          lVar12 = *(long *)(param_4 + 0xa8);
          do {
            *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_4 + 0x6c));
        }
        *(ulong *)(param_4 + 0x70) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        *(ulong *)(param_4 + 0x68) = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
        *(ulong *)(param_4 + 0x80) = CONCAT44(uStack_c4,uStack_c8);
        *(ulong *)(param_4 + 0x78) = CONCAT44(uStack_cc,uStack_d0);
        *(ulong *)(param_4 + 0x90) = CONCAT44(uStack_b4,uStack_b8);
        *(ulong *)(param_4 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined8 *)(param_4 + 0xa0) = uStack_a8;
        *(ulong *)(param_4 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
        puVar13 = *(undefined8 **)(param_4 + 0xb0);
        puVar10 = (undefined8 *)(param_4 + 0xb8);
        if (puVar13 != puVar10) {
          if (puVar13 != (undefined8 *)0x0) {
            _free(puVar13[-1]);
          }
          *(int **)(param_4 + 0xa8) = (int *)(param_4 + 0x70);
          *(undefined8 **)(param_4 + 0xb0) = puVar10;
          puVar13 = puVar10;
        }
        if (uStack_e0._4_4_ < 3) {
          puVar10 = (undefined8 *)((ulong)&uStack_e0 | 4);
          *puVar13 = *puStack_98;
          puVar13[1] = puStack_98[1];
          uStack_e0._0_4_ = 0x42ff0000;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x34) = 0;
          *(undefined8 *)((long)puVar10 + 0x2c) = 0;
          if (puStack_98 != &uStack_90) {
            _free(puStack_98[-1]);
          }
        }
        else {
          *(ulong *)(param_4 + 0xa8) = uStack_a0;
          *(undefined8 **)(param_4 + 0xb0) = puStack_98;
        }
      }
      uStack_e0._0_4_ = 0x42ff0000;
      uStack_d8._4_4_ = 0;
      uStack_d0 = 0;
      uStack_e0._4_4_ = 0;
      uStack_d8._0_4_ = 0;
      uStack_a0 = (ulong)&uStack_e0 | 8;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_100 = CONCAT44(iVar3,iVar4);
      puStack_98 = &uStack_90;
      FUN_109a83fd0(&uStack_e0,2,&uStack_100,0x18);
      if (param_1[7] != 0) {
        piVar1 = (int *)(param_1[7] + 0x14);
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
          func_0x000109a848d4(param_1);
        }
      }
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar9 = 0;
        lVar12 = param_1[8];
        do {
          *(undefined4 *)(lVar12 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *piVar14);
      }
      param_1[1] = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
      *param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
      param_1[3] = CONCAT44(uStack_c4,uStack_c8);
      param_1[2] = CONCAT44(uStack_cc,uStack_d0);
      param_1[5] = CONCAT44(uStack_b4,uStack_b8);
      param_1[4] = CONCAT44(uStack_bc,uStack_c0);
      param_1[7] = uStack_a8;
      param_1[6] = CONCAT44(uStack_ac,uStack_b0);
      puVar10 = (undefined8 *)param_1[9];
      if (puVar10 != puVar11) {
        if (puVar10 != (undefined8 *)0x0) {
          _free(puVar10[-1]);
        }
        param_1[8] = param_1 + 1;
        param_1[9] = puVar11;
        puVar10 = puVar11;
      }
      if (uStack_e0._4_4_ < 3) {
        puVar11 = (undefined8 *)((ulong)&uStack_e0 | 4);
        *puVar10 = *puStack_98;
        puVar10[1] = puStack_98[1];
        uStack_e0._0_4_ = 0x42ff0000;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        *(undefined8 *)((long)puVar11 + 0x34) = 0;
        *(undefined8 *)((long)puVar11 + 0x2c) = 0;
        if (puStack_98 != &uStack_90) {
          _free(puStack_98[-1]);
        }
      }
      else {
        param_1[8] = uStack_a0;
        param_1[9] = puStack_98;
      }
      uStack_d8._0_4_ = 1;
      uStack_d8._4_4_ = 1;
      uStack_e0._0_4_ = 0;
      uStack_e0._4_4_ = 0;
      uStack_d0 = 2;
      uStack_cc = 2;
      FUN_109a3e710(param_4 + 8,1,param_1,1,&uStack_e0,3);
      uStack_100 = 0x300000000;
      FUN_109a3e710(param_4 + 0x68,1,param_1,1,&uStack_100,1);
      if (lStack_128 != 0) {
        piVar14 = (int *)(lStack_128 + 0x14);
        do {
          iVar3 = *piVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_160);
        }
      }
      lStack_128 = 0;
      puStack_148 = (undefined8 *)0x0;
      puStack_150 = (undefined8 *)0x0;
      puStack_138 = (undefined8 *)0x0;
      puStack_140 = (undefined8 *)0x0;
      if (0 < uStack_160._4_4_) {
        lVar9 = 0;
        do {
          piStack_120[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_160._4_4_);
      }
      if (plStack_118 != alStack_110 && plStack_118 != (long *)0x0) {
        _free(plStack_118[-1]);
      }
      goto LAB_10952b218;
    }
  }
  FUN_109262df8(&UNK_10f639994);
LAB_10952b2c0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10952b2c4);
  (*pcVar7)();
}



/* Entry: 10952b348; end: 10952b4f7;  */

undefined8 FUN_10952b348(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = *param_3;
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    ___dynamic_cast(lVar5,&PTR_DAT_110af9bd8,&PTR_DAT_110afa700,0);
    if (lVar5 == 0) {
      uVar7 = 0;
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = (long *)param_3[1];
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar6 = *(long *)(lVar5 + 8);
      lStack_40 = lVar5;
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110af7700,&PTR_DAT_110afb0f0,0), lVar6 == 0)) {
        lStack_50 = 0;
        plStack_48 = (long *)0x0;
      }
      else {
        plStack_48 = *(long **)(lVar5 + 0x10);
        lStack_50 = lVar6;
        if (plStack_48 != (long *)0x0) {
          plVar1 = plStack_48 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      func_0x000109511110(param_1 + 3,&lStack_50);
      plVar1 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar2 = plStack_48 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if ((param_1[3] == 0) || (func_0x0001094d6804(param_1 + 5,lStack_40 + 0x18), param_1[1] != 0))
      {
        uVar7 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x60))(param_1,param_2);
        uVar7 = 1;
      }
    }
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return uVar7;
}



/* Entry: 10952b4f8; end: 10952b503;  */

undefined1 FUN_10952b4f8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x70);
}



/* Entry: 10952b504; end: 10952ba0b;  */

void FUN_10952b504(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined1 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  uint *puVar12;
  
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_aa = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  uStack_90 = 0x200;
  uStack_8e = 0;
  uStack_8a = 0;
  uStack_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0x10000;
  uStack_7c = 0x100;
  uStack_7a = 1;
  uStack_78 = 0x1000000;
  uStack_74 = 1;
  uStack_70 = 0x100;
  uStack_68 = 100000;
  uStack_60 = 0;
  uStack_5c = 1;
  uStack_ac = 0x101;
  lVar8 = *(long *)(param_1 + 0x18);
  uStack_58 = 0;
  if (&lStack_c8 != (long *)(lVar8 + 0x78)) {
    FUN_10942bf40(&lStack_c8,*(long *)(lVar8 + 0x78),*(long *)(lVar8 + 0x80),
                  *(long *)(lVar8 + 0x80) - *(long *)(lVar8 + 0x78) >> 2);
    lVar8 = *(long *)(param_1 + 0x18);
  }
  uStack_b0 = *(undefined4 *)(lVar8 + 0x90);
  uStack_aa = *(int *)(lVar8 + 0x94) == 1;
  (**(code **)(*(long *)*param_2 + 0x10))(&plStack_f0,(long *)*param_2,lVar8 + 0x40);
  plVar7 = plStack_f0;
  plStack_d8 = plStack_f0;
  if (plStack_f0 == (long *)0x0) {
    plStack_d0 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x20;
    __Znwm();
    *plVar6 = (long)&PTR_FUN_110af7448;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)plVar7;
    plStack_d0 = plVar6;
    (**(code **)(*plVar7 + 0x28))();
    if (((ulong)plVar7 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      puVar2 = *(uint **)(lVar8 + 0x200);
      puVar11 = *(uint **)(lVar8 + 0x1f8);
      if (*(uint **)(lVar8 + 0x1f8) == puVar2) {
        uVar10 = 1;
      }
      else {
        do {
          puVar12 = puVar11 + 1;
          uVar10 = *puVar11;
          func_0x000109cd2af4();
          if ((uVar10 & (*(uint *)(plVar7 + 8) ^ 0xffffffff)) == 0) goto LAB_10952b674;
          puVar11 = puVar12;
        } while (puVar12 != puVar2);
        uVar10 = 1;
LAB_10952b674:
        lVar8 = *(long *)(param_1 + 0x18);
      }
      uVar9 = 3;
      if (*(char *)(lVar8 + 0x70) == '\x03') {
        uVar9 = 1;
      }
      plStack_f0 = (long *)NEON_rev64(*(undefined8 *)(lVar8 + 0x2c),4);
      uVar1 = 4;
      if (*(char *)(lVar8 + 0x70) != '\0') {
        uVar1 = uVar9;
      }
      uStack_e4 = 1;
      uStack_e8 = uVar1;
      FUN_10952ba0c(&plStack_100,&plStack_f0,lVar8 + 0x98,lVar8 + 0x188,uVar10,param_1 + 0x28,
                    &plStack_d8,&lStack_c8);
      plVar7 = plStack_100;
      plStack_100 = (long *)0x0;
      FUN_10938cda4(param_1 + 0x10,plVar7);
      plVar7 = plStack_100;
      plStack_100 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        func_0x000109cda590();
        __ZdlPv();
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&plStack_f0,&UNK_10f5730f8,*(long *)(param_1 + 0x18) + 0x40);
        func_0x000105687ee0(&plStack_f0);
        goto LAB_10952b940;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      if (*(int *)(lVar8 + 0x34) < 2) goto LAB_10952b83c;
      if (*(char *)(lVar8 + 0x6f) < '\0') {
        if (*(long *)(lVar8 + 0x60) != 0) goto LAB_10952b718;
LAB_10952b758:
        plStack_100 = plStack_d8;
        plStack_f8 = plStack_d0;
        plVar7 = plStack_d8;
        if (plStack_d0 != (long *)0x0) {
          plVar6 = plStack_d0 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        if (*(char *)(lVar8 + 0x6f) == '\0') goto LAB_10952b758;
LAB_10952b718:
        (**(code **)(*(long *)*param_2 + 0x10))(&plStack_f0,(long *)*param_2,lVar8 + 0x58);
        plVar7 = plStack_f0;
        plStack_100 = plStack_f0;
        if (plStack_f0 == (long *)0x0) {
          plStack_f8 = (long *)0x0;
        }
        else {
          plVar6 = (long *)0x20;
          __Znwm();
          *plVar6 = (long)&PTR_FUN_110af7448;
          plVar6[1] = 0;
          plVar6[2] = 0;
          plVar6[3] = (long)plVar7;
          plStack_f8 = plVar6;
        }
      }
      if (plVar7 == (long *)0x0) {
        lVar8 = *(long *)(param_1 + 0x18);
      }
      else {
        (**(code **)(*plVar7 + 0x28))();
        lVar8 = *(long *)(param_1 + 0x18);
        if (((ulong)plVar7 & 1) != 0) {
          uStack_e4 = *(undefined4 *)(lVar8 + 0x34);
          plStack_f0 = (long *)NEON_rev64(*(undefined8 *)(lVar8 + 0x2c),4);
          uStack_e8 = uVar1;
          FUN_10952ba0c(&lStack_108,&plStack_f0,lVar8 + 0x98,lVar8 + 0x188,uVar10,param_1 + 0x28,
                        &plStack_100,&lStack_c8);
          lVar8 = lStack_108;
          lStack_108 = 0;
          FUN_10938cda4(param_1 + 8,lVar8);
          lVar8 = lStack_108;
          lStack_108 = 0;
          if (lVar8 != 0) {
            func_0x000109cda590();
            __ZdlPv();
          }
          plVar7 = plStack_f8;
          if (*(long *)(param_1 + 8) != 0) {
            if (plStack_f8 != (long *)0x0) {
              plVar6 = plStack_f8 + 1;
              do {
                lVar8 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
LAB_10952b83c:
            plVar7 = plStack_d0;
            if (plStack_d0 != (long *)0x0) {
              plVar6 = plStack_d0 + 1;
              do {
                lVar8 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            if (lStack_98 < 0) {
              __ZdlPv(uStack_a8);
            }
            if (lStack_c8 != 0) {
              lStack_c0 = lStack_c8;
              __ZdlPv();
            }
            return;
          }
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&plStack_f0,&UNK_10f5730f8,*(long *)(param_1 + 0x18) + 0x58);
          func_0x000105687ee0(&plStack_f0);
          goto LAB_10952b940;
        }
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&plStack_f0,&UNK_10f5730de,lVar8 + 0x58);
      func_0x000105687ee0(&plStack_f0);
      goto LAB_10952b940;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&plStack_f0,&UNK_10f5730de,*(long *)(param_1 + 0x18) + 0x40);
  func_0x000105687ee0(&plStack_f0);
LAB_10952b940:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10952b944);
  (*pcVar5)();
}



/* Entry: 10952ba0c; end: 10952bc9f;  */

/* WARNING: Removing unreachable block (ram,0x00010952bbc4) */

void FUN_10952ba0c(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  uint *puVar15;
  ulong in_x4;
  long *in_x5;
  undefined8 *in_x6;
  undefined8 in_x7;
  int iVar16;
  undefined8 *extraout_x8;
  long *plVar17;
  undefined8 *extraout_x8_00;
  long lVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  float *pfVar22;
  float *pfVar23;
  undefined8 *unaff_x24;
  ulong uVar24;
  long unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar25;
  ushort uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 *puStack_340;
  uint *puStack_338;
  undefined8 uStack_330;
  uint uStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  int *piStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined1 uStack_2b1;
  undefined8 *puStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  ulong uStack_298;
  long **pplStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_249;
  long lStack_248;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long *aplStack_1b8 [3];
  long *aplStack_1a0 [3];
  undefined8 uStack_188;
  char cStack_171;
  long *plStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_138;
  char cStack_121;
  long alStack_d8 [3];
  long alStack_c0 [6];
  byte bStack_89;
  long **pplStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  byte *pbStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  bStack_89 = 0;
  FUN_109377fa0(alStack_d8);
  if (((int)in_x4 != 1) && (*in_x5 != 0)) {
    FUN_1094d900c(aplStack_1b8,alStack_d8,in_x4,in_x6,1,in_x7);
    pplStack_88 = (long **)FUN_10952cf7c;
    ppuStack_80 = &PTR_FUN_110afb360;
    pbStack_70 = &bStack_89;
    puStack_78 = param_1;
    FUN_1094a2b54(*(undefined8 *)*in_x5,aplStack_1b8,&pplStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (cStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    if (lStack_158 != 0) {
      lStack_150 = lStack_158;
      __ZdlPv();
    }
    if (plStack_160 != (long *)0x0) {
      plVar17 = plStack_160 + 1;
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
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
      }
    }
    if (cStack_171 < '\0') {
      __ZdlPv(uStack_188);
    }
    pplVar7 = aplStack_1b8;
    pplStack_88 = aplStack_1a0;
    FUN_109378cec(&pplStack_88);
    pplStack_88 = pplVar7;
    FUN_109378cec(&pplStack_88);
    if ((bStack_89 & 1) != 0) goto LAB_10952bbbc;
  }
  pplVar7 = (long **)0x80;
  __Znwm();
  func_0x000109cda3ec();
  FUN_10938cda4(param_1,pplVar7);
  uVar20 = *param_1;
  (**(code **)(*(long *)*in_x6 + 0x20))(aplStack_1b8);
  func_0x000109cdaf68(uVar20,aplStack_1b8[0],1,alStack_d8);
  plVar17 = aplStack_1b8[0];
  aplStack_1b8[0] = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
LAB_10952bbbc:
  aplStack_1b8[0] = alStack_c0;
  FUN_109378cec(aplStack_1b8);
  pplVar8 = aplStack_1b8;
  aplStack_1b8[0] = alStack_d8;
  FUN_109378cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(pplVar7 + 1);
  func_0x0001094d6880(aplStack_1b8);
  func_0x000105673d28(alStack_d8);
  lVar14 = 0;
  FUN_10938cda4(alStack_d8);
  __Unwind_Resume();
  pcStack_1c8 = FUN_10952bca0;
  puVar15 = (uint *)(pplVar8[3] + 0x16);
  lVar18 = lVar14;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_10938e710();
  if (lVar18 != 0) {
    uVar2 = *(uint *)(lVar18 + 0x30);
    pplVar7 = (long **)(ulong)uVar2;
    uVar19 = *(uint *)(lVar18 + 0x34);
    in_x4 = (ulong)uVar19;
    puVar15 = (uint *)(pplVar8[3] + 0x16);
    lVar18 = lVar14;
    FUN_10938e710();
    if (lVar18 != 0) {
      unaff_x25 = *(long *)(lVar18 + 0x48);
      puVar15 = (uint *)(pplVar8[3] + 0x1f);
      lVar18 = lVar14;
      FUN_10938e710();
      if (lVar18 != 0) {
        unaff_x26 = *(undefined8 **)(lVar18 + 0x48);
        puVar15 = (uint *)(pplVar8[3] + 0x22);
        lVar18 = lVar14;
        FUN_10938e710();
        if (lVar18 != 0) {
          unaff_x24 = *(undefined8 **)(lVar18 + 0x48);
          puVar15 = (uint *)(pplVar8[3] + 0x25);
          lVar18 = lVar14;
          FUN_10938e710();
          if (lVar18 != 0) {
            iVar16 = uVar19 * uVar2;
            pfVar23 = *(float **)(lVar18 + 0x48);
            uStack_260 = unaff_x26[1];
            uStack_258 = 0;
            fVar30 = (float)*unaff_x26 + 0.5;
            fVar31 = (float)((ulong)*unaff_x26 >> 0x20) + 0.5;
            if (iVar16 == 0) {
              fVar29 = 0.0;
            }
            else {
              pfVar22 = (float *)(unaff_x25 + 4);
              fVar29 = 0.0;
              do {
                fVar27 = *pfVar22;
                _expf();
                fVar28 = pfVar22[-1];
                _expf();
                fVar27 = fVar27 / (fVar27 + fVar28);
                if (fVar27 <= fVar29) {
                  fVar27 = fVar29;
                }
                fVar29 = fVar27;
                pfVar22 = pfVar22 + 2;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            fVar27 = (float)((ulong)uStack_260 >> 0x20);
            uVar26 = NEON_umaxv(CONCAT44(CONCAT22(-(ushort)(fVar27 <= 0.0),
                                                  -(ushort)((float)uStack_260 <= 0.0)),
                                         CONCAT22(-(ushort)(1.5 < ABS(fVar31)),
                                                  -(ushort)(1.5 < ABS(fVar30)))),2);
            if ((uVar26 & 1) == 0) {
              puVar21 = extraout_x8 + 2;
              extraout_x8[3] = 0;
              *puVar21 = 0;
              extraout_x8[0x2b] = 0;
              extraout_x8[0x2a] = 0;
              extraout_x8[0x2d] = 0;
              extraout_x8[0x2c] = 0;
              extraout_x8[0x27] = 0;
              extraout_x8[0x26] = 0;
              extraout_x8[0x29] = 0;
              extraout_x8[0x28] = 0;
              *(undefined8 *)((long)extraout_x8 + 0x174) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x16c) = 0;
              extraout_x8[0x23] = 0;
              extraout_x8[0x22] = 0;
              extraout_x8[0x25] = 0;
              extraout_x8[0x24] = 0;
              extraout_x8[0x1f] = 0;
              extraout_x8[0x1e] = 0;
              extraout_x8[0x21] = 0;
              extraout_x8[0x20] = 0;
              extraout_x8[0x1d] = 0;
              extraout_x8[0x1c] = 0;
              extraout_x8[0x17] = 0;
              extraout_x8[0x16] = 0;
              extraout_x8[0x19] = 0;
              extraout_x8[0x18] = 0;
              extraout_x8[0x13] = 0;
              extraout_x8[0x12] = 0;
              extraout_x8[0x15] = 0;
              extraout_x8[0x14] = 0;
              extraout_x8[0x11] = 0;
              extraout_x8[0x10] = 0;
              extraout_x8[0xb] = 0;
              extraout_x8[10] = 0;
              extraout_x8[0xd] = 0;
              extraout_x8[0xc] = 0;
              extraout_x8[7] = 0;
              extraout_x8[6] = 0;
              extraout_x8[9] = 0;
              extraout_x8[8] = 0;
              extraout_x8[5] = 0;
              extraout_x8[4] = 0;
              extraout_x8[0x1b] = 0;
              extraout_x8[0x1a] = 0;
              extraout_x8[0xf] = 0;
              extraout_x8[0xe] = 0;
              puVar9 = extraout_x8 + 7;
              extraout_x8[8] = 0;
              *puVar9 = 0;
              *(undefined4 *)(extraout_x8 + 6) = 0x3f800000;
              extraout_x8[10] = 0;
              extraout_x8[9] = 0;
              *(undefined4 *)(extraout_x8 + 0xb) = 0x3f800000;
              *(undefined4 *)(extraout_x8 + 0xd) = 0x42ff0000;
              *(undefined8 *)((long)extraout_x8 + 0x74) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x6c) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x7c) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x94) = 0;
              *(undefined8 *)((long)extraout_x8 + 0x8c) = 0;
              extraout_x8[0x14] = 0;
              extraout_x8[0x13] = 0;
              extraout_x8[0x17] = 0;
              extraout_x8[0x15] = extraout_x8 + 0xe;
              extraout_x8[0x16] = extraout_x8 + 0x17;
              extraout_x8[0x18] = 0;
              *(undefined4 *)(extraout_x8 + 0x19) = 0x42ff0000;
              *(undefined8 *)((long)extraout_x8 + 0xd4) = 0;
              *(undefined8 *)((long)extraout_x8 + 0xcc) = 0;
              *(undefined8 *)((long)extraout_x8 + 0xe4) = 0;
              *(undefined8 *)((long)extraout_x8 + 0xdc) = 0;
              *(undefined8 *)((long)extraout_x8 + 0xf4) = 0;
              *(undefined8 *)((long)extraout_x8 + 0xec) = 0;
              extraout_x8[0x20] = 0;
              extraout_x8[0x1f] = 0;
              extraout_x8[0x21] = extraout_x8 + 0x1a;
              extraout_x8[0x22] = extraout_x8 + 0x23;
              extraout_x8[0x27] = 0;
              extraout_x8[0x26] = 0;
              extraout_x8[0x29] = 0;
              extraout_x8[0x28] = 0;
              extraout_x8[0x23] = 0;
              extraout_x8[0x24] = 0;
              *(undefined1 *)(extraout_x8 + 0x25) = 0;
              *(undefined4 *)(extraout_x8 + 0x2a) = 0x3f800000;
              *(undefined4 *)((long)extraout_x8 + 0x17c) = 0;
              *(undefined1 *)(extraout_x8 + 0x30) = 1;
              *(float *)(extraout_x8 + 0xc) = fVar29;
              *(undefined1 *)((long)extraout_x8 + 100) = 1;
              *extraout_x8 = CONCAT44(fVar31 + fVar27 * -0.5,fVar30 + (float)uStack_260 * -0.5);
              extraout_x8[1] = uStack_260;
              lStack_248 = pplVar8[3][0x37];
              puVar12 = puVar21;
              FUN_1094e1a28(puVar21,lStack_248,&UNK_10dd5b8f9,&lStack_248,&uStack_249);
              puVar12[5] = CONCAT44(fVar31,fVar30);
              puVar12[6] = 0x3f80000000000000;
              *(undefined4 *)(puVar12 + 7) = 0x3f000000;
              uVar20 = *unaff_x24;
              uVar32 = *(undefined4 *)(unaff_x24 + 1);
              lStack_248 = pplVar8[3][0x3a];
              FUN_1094da208(puVar9,lStack_248,&UNK_10dd5b8f9,&lStack_248,&uStack_249);
              puVar9[5] = uVar20;
              *(undefined4 *)(puVar9 + 6) = uVar32;
              iVar16 = (int)(pplVar8[3][0x38] - pplVar8[3][0x37] >> 3) * -0x55555555;
              if (1 < iVar16) {
                uVar24 = (ulong)(iVar16 - 1);
                lVar18 = 0x18;
                uVar25 = uVar24;
                do {
                  fVar30 = *pfVar23;
                  fVar31 = pfVar23[uVar24];
                  lStack_248 = pplVar8[3][0x37] + lVar18;
                  puVar12 = puVar21;
                  FUN_1094e1a28(puVar21,lStack_248,&UNK_10dd5b8f9,&lStack_248,&uStack_249);
                  *(float *)(puVar12 + 5) = fVar30 + 0.5;
                  *(float *)((long)puVar12 + 0x2c) = fVar31 + 0.5;
                  puVar12[6] = 0x3f80000000000000;
                  *(undefined4 *)(puVar12 + 7) = 0x3f000000;
                  pfVar23 = pfVar23 + 1;
                  lVar18 = lVar18 + 0x18;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              for (plVar17 = (long *)extraout_x8[9]; plVar17 != (long *)0x0;
                  plVar17 = (long *)*plVar17) {
                fVar30 = *(float *)(plVar17 + 6);
                fVar29 = (float)plVar17[5];
                fVar27 = (float)((ulong)plVar17[5] >> 0x20);
                fVar31 = SQRT(fVar27 * fVar27 + fVar29 * fVar29 + fVar30 * fVar30) + 1e-06;
                plVar17[5] = CONCAT44(fVar27 / fVar31,fVar29 / fVar31);
                *(float *)(plVar17 + 6) = fVar30 / fVar31;
              }
            }
            else {
              *(undefined1 *)extraout_x8 = 0;
              *(undefined1 *)(extraout_x8 + 0x30) = 0;
            }
            return;
          }
        }
      }
    }
  }
  puVar10 = &UNK_10f639994;
  FUN_109262df8();
  if (*(char *)(extraout_x8 + 0x30) == '\x01') {
    FUN_1095032d0(extraout_x8);
  }
  puVar11 = puVar10;
  __Unwind_Resume();
  pcStack_268 = FUN_10952c078;
  iStack_2c0 = (*puVar15 >> 3 & 0x1ff) + 1;
  uStack_2c8 = NEON_rev64(*(undefined8 *)(puVar15 + 2),4);
  uStack_2bc = 1;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  *(undefined4 *)(extraout_x8_00 + 4) = 0x3f800000;
  puStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  uStack_298 = in_x4;
  pplStack_290 = pplVar7;
  lStack_288 = lVar14;
  puStack_280 = puVar10;
  ppuStack_270 = &puStack_1d0;
  func_0x000109cdb584(&uStack_328,*(undefined8 *)(puVar11 + 0x10),&uStack_2c8,&UNK_10dfd2188);
  puStack_340 = (undefined4 *)(*(long *)(puVar11 + 0x18) + 0x98);
  puVar12 = extraout_x8_00;
  FUN_10937a098(extraout_x8_00,puStack_340,&UNK_10dd5b8f9,&puStack_340,&uStack_2b1);
  puVar12[7] = lStack_318;
  puVar12[6] = CONCAT44(iStack_31c,iStack_320);
  puVar12[8] = lStack_310;
  func_0x0001093783c0(puVar12 + 9,&lStack_308);
  func_0x00010937843c(puVar12 + 0xb,&uStack_2f8);
  func_0x000105675c90(&uStack_328);
  iVar16 = **(int **)(puVar15 + 0x10);
  iVar3 = (*(int **)(puVar15 + 0x10))[1];
  uVar2 = *puVar15;
  puStack_340 = (undefined4 *)(*(long *)(puVar11 + 0x18) + 0x98);
  puVar12 = extraout_x8_00;
  FUN_10937a098(extraout_x8_00,puStack_340,&UNK_10dd5b8f9,&puStack_340,&uStack_2b1);
  lStack_318 = puVar12[9];
  uVar19 = (uint)((ulong)uVar2 & 0xff8);
  uStack_328 = uVar19 | 0x42ff0005;
  iStack_324 = 2;
  piStack_2e8 = &iStack_320;
  lStack_300 = 0;
  lStack_308 = 0;
  lStack_2f0 = 0;
  uStack_2f8 = 0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  iStack_320 = iVar16;
  iStack_31c = iVar3;
  lStack_310 = lStack_318;
  plStack_2e0 = &lStack_2d8;
  if (((long)iVar16 * (long)iVar3 != 0) && (lStack_318 == 0)) {
    puVar13 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    puStack_340 = puVar13 + 1;
    puStack_338 = (uint *)0x1c;
    *(undefined1 *)(puVar13 + 8) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_340,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10952c30c);
    (*pcVar6)();
  }
  lStack_2d0 = (((ulong)uVar2 & 0xff8) >> 1) + 4;
  lStack_2d8 = (long)(int)lStack_2d0 * (long)iVar3;
  uStack_328 = uVar19 + 0x42ff4005;
  lStack_308 = lStack_318 + lStack_2d8 * iVar16;
  puStack_340 = (undefined4 *)CONCAT44(puStack_340._4_4_,0x2010000);
  puStack_338 = &uStack_328;
  uStack_330 = 0;
  lStack_300 = lStack_308;
  FUN_109a41858((double)*(float *)(puVar11 + 0x38),0,puVar15,&puStack_340,5);
  if (lStack_2f0 != 0) {
    piVar1 = (int *)(lStack_2f0 + 0x14);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_328);
    }
  }
  lStack_2f0 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  lStack_300 = 0;
  lStack_308 = 0;
  if (0 < iStack_324) {
    lVar18 = 0;
    do {
      piStack_2e8[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iStack_324);
  }
  if (plStack_2e0 != &lStack_2d8 && plStack_2e0 != (long *)0x0) {
    _free(plStack_2e0[-1]);
  }
  return;
}



/* Entry: 10952bca0; end: 10952c077;  */

void FUN_10952bca0(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  long *plVar14;
  undefined8 *extraout_x8;
  uint uVar15;
  undefined8 *puVar16;
  ulong unaff_x22;
  float *pfVar17;
  ulong unaff_x23;
  float *pfVar18;
  undefined8 *unaff_x24;
  ulong uVar19;
  long unaff_x25;
  long lVar20;
  undefined8 *unaff_x26;
  ulong uVar21;
  ushort uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  undefined4 uVar29;
  undefined4 *puStack_180;
  uint *puStack_178;
  undefined8 uStack_170;
  uint uStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  int *piStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f1;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_89;
  long lStack_88;
  
  puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0xb0);
  lVar20 = param_3;
  FUN_10938e710();
  if (lVar20 != 0) {
    uVar2 = *(uint *)(lVar20 + 0x30);
    unaff_x22 = (ulong)uVar2;
    uVar15 = *(uint *)(lVar20 + 0x34);
    unaff_x23 = (ulong)uVar15;
    puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0xb0);
    lVar20 = param_3;
    FUN_10938e710();
    if (lVar20 != 0) {
      unaff_x25 = *(long *)(lVar20 + 0x48);
      puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0xf8);
      lVar20 = param_3;
      FUN_10938e710();
      if (lVar20 != 0) {
        unaff_x26 = *(undefined8 **)(lVar20 + 0x48);
        puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0x110);
        lVar20 = param_3;
        FUN_10938e710();
        if (lVar20 != 0) {
          unaff_x24 = *(undefined8 **)(lVar20 + 0x48);
          puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0x128);
          lVar20 = param_3;
          FUN_10938e710();
          if (lVar20 != 0) {
            iVar13 = uVar15 * uVar2;
            pfVar18 = *(float **)(lVar20 + 0x48);
            uStack_a0 = unaff_x26[1];
            uStack_98 = 0;
            fVar26 = (float)*unaff_x26 + 0.5;
            fVar28 = (float)((ulong)*unaff_x26 >> 0x20) + 0.5;
            if (iVar13 == 0) {
              fVar25 = 0.0;
            }
            else {
              pfVar17 = (float *)(unaff_x25 + 4);
              fVar25 = 0.0;
              do {
                fVar23 = *pfVar17;
                _expf();
                fVar24 = pfVar17[-1];
                _expf();
                fVar23 = fVar23 / (fVar23 + fVar24);
                if (fVar23 <= fVar25) {
                  fVar23 = fVar25;
                }
                fVar25 = fVar23;
                pfVar17 = pfVar17 + 2;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            fVar23 = (float)((ulong)uStack_a0 >> 0x20);
            uVar22 = NEON_umaxv(CONCAT44(CONCAT22(-(ushort)(fVar23 <= 0.0),
                                                  -(ushort)((float)uStack_a0 <= 0.0)),
                                         CONCAT22(-(ushort)(1.5 < ABS(fVar28)),
                                                  -(ushort)(1.5 < ABS(fVar26)))),2);
            if ((uVar22 & 1) == 0) {
              puVar16 = param_1 + 2;
              param_1[3] = 0;
              *puVar16 = 0;
              param_1[0x2b] = 0;
              param_1[0x2a] = 0;
              param_1[0x2d] = 0;
              param_1[0x2c] = 0;
              param_1[0x27] = 0;
              param_1[0x26] = 0;
              param_1[0x29] = 0;
              param_1[0x28] = 0;
              *(undefined8 *)((long)param_1 + 0x174) = 0;
              *(undefined8 *)((long)param_1 + 0x16c) = 0;
              param_1[0x23] = 0;
              param_1[0x22] = 0;
              param_1[0x25] = 0;
              param_1[0x24] = 0;
              param_1[0x1f] = 0;
              param_1[0x1e] = 0;
              param_1[0x21] = 0;
              param_1[0x20] = 0;
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
              param_1[5] = 0;
              param_1[4] = 0;
              param_1[0x1b] = 0;
              param_1[0x1a] = 0;
              param_1[0xf] = 0;
              param_1[0xe] = 0;
              puVar7 = param_1 + 7;
              param_1[8] = 0;
              *puVar7 = 0;
              *(undefined4 *)(param_1 + 6) = 0x3f800000;
              param_1[10] = 0;
              param_1[9] = 0;
              *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
              *(undefined4 *)(param_1 + 0xd) = 0x42ff0000;
              *(undefined8 *)((long)param_1 + 0x74) = 0;
              *(undefined8 *)((long)param_1 + 0x6c) = 0;
              *(undefined8 *)((long)param_1 + 0x84) = 0;
              *(undefined8 *)((long)param_1 + 0x7c) = 0;
              *(undefined8 *)((long)param_1 + 0x94) = 0;
              *(undefined8 *)((long)param_1 + 0x8c) = 0;
              param_1[0x14] = 0;
              param_1[0x13] = 0;
              param_1[0x17] = 0;
              param_1[0x15] = param_1 + 0xe;
              param_1[0x16] = param_1 + 0x17;
              param_1[0x18] = 0;
              *(undefined4 *)(param_1 + 0x19) = 0x42ff0000;
              *(undefined8 *)((long)param_1 + 0xd4) = 0;
              *(undefined8 *)((long)param_1 + 0xcc) = 0;
              *(undefined8 *)((long)param_1 + 0xe4) = 0;
              *(undefined8 *)((long)param_1 + 0xdc) = 0;
              *(undefined8 *)((long)param_1 + 0xf4) = 0;
              *(undefined8 *)((long)param_1 + 0xec) = 0;
              param_1[0x20] = 0;
              param_1[0x1f] = 0;
              param_1[0x21] = param_1 + 0x1a;
              param_1[0x22] = param_1 + 0x23;
              param_1[0x27] = 0;
              param_1[0x26] = 0;
              param_1[0x29] = 0;
              param_1[0x28] = 0;
              param_1[0x23] = 0;
              param_1[0x24] = 0;
              *(undefined1 *)(param_1 + 0x25) = 0;
              *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
              *(undefined4 *)((long)param_1 + 0x17c) = 0;
              *(undefined1 *)(param_1 + 0x30) = 1;
              *(float *)(param_1 + 0xc) = fVar25;
              *(undefined1 *)((long)param_1 + 100) = 1;
              *param_1 = CONCAT44(fVar28 + fVar23 * -0.5,fVar26 + (float)uStack_a0 * -0.5);
              param_1[1] = uStack_a0;
              lStack_88 = *(long *)(*(long *)(param_2 + 0x18) + 0x1b8);
              puVar10 = puVar16;
              FUN_1094e1a28(puVar16,lStack_88,&UNK_10dd5b8f9,&lStack_88,&uStack_89);
              puVar10[5] = CONCAT44(fVar28,fVar26);
              puVar10[6] = 0x3f80000000000000;
              *(undefined4 *)(puVar10 + 7) = 0x3f000000;
              uVar27 = *unaff_x24;
              uVar29 = *(undefined4 *)(unaff_x24 + 1);
              lStack_88 = *(long *)(*(long *)(param_2 + 0x18) + 0x1d0);
              FUN_1094da208(puVar7,lStack_88,&UNK_10dd5b8f9,&lStack_88,&uStack_89);
              puVar7[5] = uVar27;
              *(undefined4 *)(puVar7 + 6) = uVar29;
              iVar13 = (int)(*(long *)(*(long *)(param_2 + 0x18) + 0x1c0) -
                             *(long *)(*(long *)(param_2 + 0x18) + 0x1b8) >> 3) * -0x55555555;
              if (1 < iVar13) {
                uVar19 = (ulong)(iVar13 - 1);
                lVar20 = 0x18;
                uVar21 = uVar19;
                do {
                  fVar26 = *pfVar18;
                  fVar28 = pfVar18[uVar19];
                  lStack_88 = *(long *)(*(long *)(param_2 + 0x18) + 0x1b8) + lVar20;
                  puVar10 = puVar16;
                  FUN_1094e1a28(puVar16,lStack_88,&UNK_10dd5b8f9,&lStack_88,&uStack_89);
                  *(float *)(puVar10 + 5) = fVar26 + 0.5;
                  *(float *)((long)puVar10 + 0x2c) = fVar28 + 0.5;
                  puVar10[6] = 0x3f80000000000000;
                  *(undefined4 *)(puVar10 + 7) = 0x3f000000;
                  pfVar18 = pfVar18 + 1;
                  lVar20 = lVar20 + 0x18;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              for (plVar14 = (long *)param_1[9]; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14)
              {
                fVar26 = *(float *)(plVar14 + 6);
                fVar25 = (float)plVar14[5];
                fVar23 = (float)((ulong)plVar14[5] >> 0x20);
                fVar28 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar26 * fVar26) + 1e-06;
                plVar14[5] = CONCAT44(fVar23 / fVar28,fVar25 / fVar28);
                *(float *)(plVar14 + 6) = fVar26 / fVar28;
              }
            }
            else {
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 0x30) = 0;
            }
            return;
          }
        }
      }
    }
  }
  puVar8 = &UNK_10f639994;
  FUN_109262df8();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1095032d0(param_1);
  }
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_a8 = FUN_10952c078;
  iStack_100 = (*puVar12 >> 3 & 0x1ff) + 1;
  uStack_108 = NEON_rev64(*(undefined8 *)(puVar12 + 2),4);
  uStack_fc = 1;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
  puStack_f0 = unaff_x26;
  lStack_e8 = unaff_x25;
  puStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  uStack_d0 = unaff_x22;
  lStack_c8 = param_3;
  puStack_c0 = puVar8;
  puStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109cdb584(&uStack_168,*(undefined8 *)(puVar9 + 0x10),&uStack_108,&UNK_10dfd2188);
  puStack_180 = (undefined4 *)(*(long *)(puVar9 + 0x18) + 0x98);
  puVar10 = extraout_x8;
  FUN_10937a098(extraout_x8,puStack_180,&UNK_10dd5b8f9,&puStack_180,&uStack_f1);
  puVar10[7] = lStack_158;
  puVar10[6] = CONCAT44(iStack_15c,iStack_160);
  puVar10[8] = lStack_150;
  func_0x0001093783c0(puVar10 + 9,&lStack_148);
  func_0x00010937843c(puVar10 + 0xb,&uStack_138);
  func_0x000105675c90(&uStack_168);
  iVar13 = **(int **)(puVar12 + 0x10);
  iVar3 = (*(int **)(puVar12 + 0x10))[1];
  uVar2 = *puVar12;
  puStack_180 = (undefined4 *)(*(long *)(puVar9 + 0x18) + 0x98);
  puVar10 = extraout_x8;
  FUN_10937a098(extraout_x8,puStack_180,&UNK_10dd5b8f9,&puStack_180,&uStack_f1);
  lStack_158 = puVar10[9];
  uVar15 = (uint)((ulong)uVar2 & 0xff8);
  uStack_168 = uVar15 | 0x42ff0005;
  iStack_164 = 2;
  piStack_128 = &iStack_160;
  lStack_140 = 0;
  lStack_148 = 0;
  lStack_130 = 0;
  uStack_138 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  iStack_160 = iVar13;
  iStack_15c = iVar3;
  lStack_150 = lStack_158;
  plStack_120 = &lStack_118;
  if (((long)iVar13 * (long)iVar3 != 0) && (lStack_158 == 0)) {
    puVar11 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_180 = puVar11 + 1;
    puStack_178 = (uint *)0x1c;
    *(undefined1 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_180,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10952c30c);
    (*pcVar6)();
  }
  lStack_110 = (((ulong)uVar2 & 0xff8) >> 1) + 4;
  lStack_118 = (long)(int)lStack_110 * (long)iVar3;
  uStack_168 = uVar15 + 0x42ff4005;
  lStack_148 = lStack_158 + lStack_118 * iVar13;
  puStack_180 = (undefined4 *)CONCAT44(puStack_180._4_4_,0x2010000);
  puStack_178 = &uStack_168;
  uStack_170 = 0;
  lStack_140 = lStack_148;
  FUN_109a41858((double)*(float *)(puVar9 + 0x38),0,puVar12,&puStack_180,5);
  if (lStack_130 != 0) {
    piVar1 = (int *)(lStack_130 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_168);
    }
  }
  lStack_130 = 0;
  lStack_150 = 0;
  lStack_158 = 0;
  lStack_140 = 0;
  lStack_148 = 0;
  if (0 < iStack_164) {
    lVar20 = 0;
    do {
      piStack_128[lVar20] = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iStack_164);
  }
  if (plStack_120 != &lStack_118 && plStack_120 != (long *)0x0) {
    _free(plStack_120[-1]);
  }
  return;
}



/* Entry: 10952c078; end: 10952c36f;  */

void FUN_10952c078(undefined8 *param_1,long param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int *piStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_51;
  
  iStack_60 = (*param_3 >> 3 & 0x1ff) + 1;
  uStack_68 = NEON_rev64(*(undefined8 *)(param_3 + 2),4);
  uStack_5c = 1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000109cdb584(&uStack_c8,*(undefined8 *)(param_2 + 0x10),&uStack_68,&UNK_10dfd2188);
  puStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x18) + 0x98);
  puVar8 = param_1;
  FUN_10937a098(param_1,puStack_e0,&UNK_10dd5b8f9,&puStack_e0,&uStack_51);
  puVar8[7] = lStack_b8;
  puVar8[6] = CONCAT44(iStack_bc,iStack_c0);
  puVar8[8] = lStack_b0;
  func_0x0001093783c0(puVar8 + 9,&lStack_a8);
  func_0x00010937843c(puVar8 + 0xb,&uStack_98);
  func_0x000105675c90(&uStack_c8);
  iVar2 = **(int **)(param_3 + 0x10);
  iVar3 = (*(int **)(param_3 + 0x10))[1];
  uVar4 = *param_3;
  puStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x18) + 0x98);
  FUN_10937a098(param_1,puStack_e0,&UNK_10dd5b8f9,&puStack_e0,&uStack_51);
  lStack_b8 = param_1[9];
  uVar11 = (uint)((ulong)uVar4 & 0xff8);
  uStack_c8 = uVar11 | 0x42ff0005;
  iStack_c4 = 2;
  piStack_88 = &iStack_c0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  iStack_c0 = iVar2;
  iStack_bc = iVar3;
  lStack_b0 = lStack_b8;
  plStack_80 = &lStack_78;
  if (((long)iVar2 * (long)iVar3 != 0) && (lStack_b8 == 0)) {
    puVar9 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_e0 = puVar9 + 1;
    puStack_d8 = (uint *)0x1c;
    *(undefined1 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10952c30c);
    (*pcVar7)();
  }
  lStack_70 = (((ulong)uVar4 & 0xff8) >> 1) + 4;
  lStack_78 = (long)(int)lStack_70 * (long)iVar3;
  uStack_c8 = uVar11 + 0x42ff4005;
  lStack_a8 = lStack_b8 + lStack_78 * iVar2;
  puStack_e0 = (undefined4 *)CONCAT44(puStack_e0._4_4_,0x2010000);
  puStack_d8 = &uStack_c8;
  uStack_d0 = 0;
  lStack_a0 = lStack_a8;
  FUN_109a41858((double)*(float *)(param_2 + 0x38),0,param_3,&puStack_e0,5);
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  if (0 < iStack_c4) {
    lVar10 = 0;
    do {
      piStack_88[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_c4);
  }
  if (plStack_80 != &lStack_78 && plStack_80 != (long *)0x0) {
    _free(plStack_80[-1]);
  }
  return;
}



/* Entry: 10952c370; end: 10952c373;  */

void FUN_10952c370(void)

{
  return;
}



/* Entry: 10952c374; end: 10952c7c3;  */

void FUN_10952c374(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  int iStack_13c;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  int *piStack_108;
  long *plStack_100;
  long lStack_f8;
  ulong uStack_f0;
  uint uStack_e8;
  int iStack_e4;
  undefined4 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar3 = (uint *)*param_3;
  if (param_3[1] - (long)puVar3 != 0x60) {
    iVar2 = (int)((ulong)(param_3[1] - (long)puVar3) >> 5) * -0x55555555;
    lStack_70 = *(long *)(puVar3 + 2);
    iVar1 = (*puVar3 >> 3 & 0x1ff) + 1;
    uStack_88 = (undefined8 *)CONCAT44(puVar3[3],(undefined4)uStack_88);
    uStack_80 = (undefined8 *)CONCAT44(iVar1,puVar3[2]);
    uStack_78 = CONCAT44(iVar2,iVar2);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    func_0x000109cdb584(&uStack_e8,*(undefined8 *)(param_2 + 8),(long)&uStack_88 + 4,&UNK_10dfd2188)
    ;
    uStack_148 = *(long *)(param_2 + 0x18) + 0x98;
    puVar10 = param_1;
    FUN_10937a098(param_1,uStack_148,&UNK_10dd5b8f9,&uStack_148,&puStack_160);
    puVar10[7] = puStack_d8;
    puVar10[6] = puStack_e0;
    puVar10[8] = uStack_d0;
    func_0x0001093783c0(puVar10 + 9,&uStack_c8);
    func_0x00010937843c(puVar10 + 0xb,&lStack_b8);
    func_0x000105675c90(&uStack_e8);
    uStack_148 = *(long *)(param_2 + 0x18) + 0x98;
    FUN_10937a098(param_1,uStack_148,&UNK_10dd5b8f9,&uStack_148,&puStack_160);
    FUN_109a855e4(&uStack_e8,3,(long)&uStack_78 + 4,iVar1 * 8 + -3,param_1[9],0);
    lVar12 = *param_3;
    if (param_3[1] != lVar12) {
      uVar14 = 0;
      do {
        lVar12 = lVar12 + uVar14 * 0x60;
        iStack_140 = *(int *)(lVar12 + 8);
        iStack_13c = *(int *)(lVar12 + 0xc);
        lStack_138 = (long)puStack_d8 + *plStack_a0 * (long)(int)uVar14;
        uStack_148 = CONCAT44(2,uStack_e8 & 0xfff | 0x42ff0000);
        lStack_120 = 0;
        lStack_128 = 0;
        lStack_110 = 0;
        uStack_118 = 0;
        lStack_f8 = 0;
        uStack_f0 = 0;
        lStack_130 = lStack_138;
        piStack_108 = &iStack_140;
        plStack_100 = &lStack_f8;
        if ((long)iStack_13c * (long)iStack_140 != 0 && puStack_d8 == (undefined8 *)0x0) {
          puVar9 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar9 = 1;
          puStack_160 = puVar9 + 1;
          puStack_158 = (undefined8 *)0x1c;
          *(undefined1 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
          FUN_109ac3188(0xffffff29,&puStack_160,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10952c74c);
          (*pcVar8)();
        }
        uVar4 = ((uStack_e8 & 0xfff) >> 3) + 1 <<
                (ulong)(0xfa50U >> (ulong)((uStack_e8 & 7) << 1) & 3);
        uStack_f0 = (ulong)uVar4;
        lStack_f8 = (long)(int)uVar4 * (long)iStack_13c;
        uStack_148 = CONCAT44(2,uStack_e8 & 0xfff | 0x42ff4000);
        lStack_128 = lStack_138 + lStack_f8 * iStack_140;
        puStack_160 = (undefined4 *)CONCAT44(puStack_160._4_4_,0x2010000);
        uStack_150 = 0;
        puStack_158 = &uStack_148;
        lStack_120 = lStack_128;
        FUN_109a41858((double)*(float *)(param_2 + 0x38),0,lVar12,&puStack_160);
        if (lStack_110 != 0) {
          piVar11 = (int *)(lStack_110 + 0x14);
          do {
            iVar1 = *piVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = iVar1 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_148);
          }
        }
        lStack_110 = 0;
        lStack_130 = 0;
        lStack_138 = 0;
        lStack_120 = 0;
        lStack_128 = 0;
        if (0 < uStack_148._4_4_) {
          lVar12 = 0;
          do {
            piStack_108[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_148._4_4_);
        }
        if (plStack_100 != &lStack_f8 && plStack_100 != (long *)0x0) {
          _free(plStack_100[-1]);
        }
        uVar14 = uVar14 + 1;
        lVar12 = *param_3;
      } while (uVar14 < (ulong)((param_3[1] - lVar12 >> 5) * -0x5555555555555555));
    }
    if (lStack_b0 != 0) {
      piVar11 = (int *)(lStack_b0 + 0x14);
      do {
        iVar1 = *piVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = iVar1 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_e8);
      }
    }
    lStack_b0 = 0;
    uStack_d0 = 0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    if (0 < iStack_e4) {
      lVar12 = 0;
      do {
        *(undefined4 *)(lStack_a8 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iStack_e4);
    }
    if (plStack_a0 != &lStack_98 && plStack_a0 != (long *)0x0) {
      _free(plStack_a0[-1]);
    }
    return;
  }
  uStack_68 = NEON_rev64(*(undefined8 *)(puVar3 + 2),4);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000109cdb584(&uStack_c8,*(undefined8 *)(param_2 + 0x10),&uStack_68,&UNK_10dfd2188);
  puStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x18) + 0x98);
  puVar10 = param_1;
  FUN_10937a098(param_1,puStack_e0,&UNK_10dd5b8f9,&puStack_e0,&stack0xffffffffffffffaf);
  puVar10[7] = lStack_b8;
  puVar10[6] = uStack_c0;
  puVar10[8] = lStack_b0;
  func_0x0001093783c0(puVar10 + 9,&lStack_a8);
  func_0x00010937843c(puVar10 + 0xb,&lStack_98);
  func_0x000105675c90(&uStack_c8);
  piVar11 = *(int **)(puVar3 + 0x10);
  iVar1 = *piVar11;
  iVar2 = piVar11[1];
  uVar7 = *(undefined8 *)piVar11;
  uVar4 = *puVar3;
  puStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x18) + 0x98);
  FUN_10937a098(param_1,puStack_e0,&UNK_10dd5b8f9,&puStack_e0,&stack0xffffffffffffffaf);
  lStack_b8 = param_1[9];
  uVar13 = (uint)((ulong)uVar4 & 0xff8);
  uStack_c8 = CONCAT44(2,uVar13 | 0x42ff0005);
  uStack_88 = &uStack_c0;
  plStack_a0 = (long *)0x0;
  lStack_a8 = 0;
  lStack_90 = 0;
  lStack_98 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_c0 = uVar7;
  lStack_b0 = lStack_b8;
  uStack_80 = &uStack_78;
  if (((long)iVar1 * (long)iVar2 != 0) && (lStack_b8 == 0)) {
    puVar9 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_e0 = puVar9 + 1;
    puStack_d8 = (undefined8 *)0x1c;
    *(undefined1 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10952c30c);
    (*pcVar8)();
  }
  lStack_70 = (((ulong)uVar4 & 0xff8) >> 1) + 4;
  uStack_78 = (long)(int)lStack_70 * (long)iVar2;
  uStack_c8 = CONCAT44(2,uVar13 + 0x42ff4005);
  lStack_a8 = lStack_b8 + uStack_78 * iVar1;
  puStack_e0 = (undefined4 *)CONCAT44(puStack_e0._4_4_,0x2010000);
  puStack_d8 = &uStack_c8;
  uStack_d0 = 0;
  plStack_a0 = (long *)lStack_a8;
  FUN_109a41858((double)*(float *)(param_2 + 0x38),0,puVar3,&puStack_e0,5);
  if (lStack_90 != 0) {
    piVar11 = (int *)(lStack_90 + 0x14);
    do {
      iVar1 = *piVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_c8);
    }
  }
  lStack_90 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  lStack_a8 = 0;
  if (0 < uStack_c8._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)uStack_88 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_c8._4_4_);
  }
  if (uStack_80 != &uStack_78 && uStack_80 != (undefined8 *)0x0) {
    _free(uStack_80[-1]);
  }
  return;
}



/* Entry: 10952c7c4; end: 10952c8c3;  */

void FUN_10952c7c4(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long alStack_4d8 [3];
  uint uStack_4c0;
  int iStack_4bc;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_478;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_388;
  long alStack_340 [48];
  char cStack_1c0;
  long alStack_1b8 [48];
  long lStack_38;
  
  plVar5 = alStack_340;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x58))(alStack_340);
  if (cStack_1c0 == '\x01') {
    FUN_1095030ec(alStack_1b8,alStack_340);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_3 = alStack_1b8;
    FUN_10952cff8(param_1,param_3,&lStack_38,1);
    param_2 = alStack_1b8;
    FUN_1095032d0();
    if (cStack_1c0 == '\x01') {
      FUN_1095032d0();
      param_2 = plVar5;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_1095032d0(alStack_1b8);
  if (cStack_1c0 == '\x01') {
    FUN_1095032d0(alStack_340);
  }
  __Unwind_Resume();
  FUN_1094f5e80(&uStack_4c0,param_3,*(undefined1 *)(param_2[3] + 0x70));
  uStack_3b0 = (ulong)&uStack_3f0 | 8;
  uStack_3f0 = CONCAT44(iStack_4bc,uStack_4c0);
  uStack_3e8 = uStack_4b8;
  uStack_3d8 = uStack_4a8;
  uStack_3e0 = uStack_4b0;
  uStack_3c8 = uStack_498;
  uStack_3d0 = uStack_4a0;
  lStack_3b8 = lStack_488;
  uStack_3c0 = uStack_490;
  uStack_3a0 = 0;
  uStack_398 = 0;
  if (lStack_488 != 0) {
    piVar1 = (int *)(lStack_488 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_3a8 = &uStack_3a0;
  if (iStack_4bc < 3) {
    uStack_3a0 = *puStack_478;
    uStack_398 = puStack_478[1];
  }
  else {
    uStack_3f0 = (ulong)uStack_4c0;
    func_0x000109a84868(&uStack_3f0,&uStack_4c0);
  }
  FUN_1094d92f0(&uStack_4c0);
  FUN_10952c078(&uStack_4c0,param_2,&uStack_3f0);
  alStack_4d8[0] = 0;
  alStack_4d8[1] = 0;
  alStack_4d8[2] = 0;
  (**(code **)(*param_2 + 0x40))(param_2,alStack_4d8,&uStack_4c0);
  plStack_388 = alStack_4d8;
  FUN_109510138(&plStack_388);
  FUN_10952cb3c(alStack_4d8,param_2,&uStack_4c0,1);
  (**(code **)(*param_2 + 0x50))(&plStack_388,param_2);
  FUN_10952c7c4(extraout_x8,param_2,alStack_4d8[0],&plStack_388);
  plVar5 = plStack_388;
  plStack_388 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plStack_388 = alStack_4d8;
  FUN_109510208(&plStack_388);
  func_0x000109379fe8(&uStack_4c0);
  if (lStack_3b8 != 0) {
    piVar1 = (int *)(lStack_3b8 + 0x14);
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
      func_0x000109a848d4(&uStack_3f0);
    }
  }
  lStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  if (0 < uStack_3f0._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_3b0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_3f0._4_4_);
  }
  if (puStack_3a8 != &uStack_3a0 && puStack_3a8 != (undefined8 *)0x0) {
    _free(puStack_3a8[-1]);
  }
  return;
}



/* Entry: 10952c8c4; end: 10952cb3b;  */

void FUN_10952c8c4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long alStack_198 [3];
  uint uStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  
  FUN_1094f5e80(&uStack_180,param_3,*(undefined1 *)(param_2[3] + 0x70));
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_b0 = CONCAT44(iStack_17c,uStack_180);
  uStack_a8 = uStack_178;
  uStack_98 = uStack_168;
  uStack_a0 = uStack_170;
  uStack_88 = uStack_158;
  uStack_90 = uStack_160;
  lStack_78 = lStack_148;
  uStack_80 = uStack_150;
  uStack_60 = 0;
  uStack_58 = 0;
  if (lStack_148 != 0) {
    piVar1 = (int *)(lStack_148 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_68 = &uStack_60;
  if (iStack_17c < 3) {
    uStack_60 = *puStack_138;
    uStack_58 = puStack_138[1];
  }
  else {
    uStack_b0 = (ulong)uStack_180;
    func_0x000109a84868(&uStack_b0,&uStack_180);
  }
  FUN_1094d92f0(&uStack_180);
  FUN_10952c078(&uStack_180,param_2,&uStack_b0);
  alStack_198[0] = 0;
  alStack_198[1] = 0;
  alStack_198[2] = 0;
  (**(code **)(*param_2 + 0x40))(param_2,alStack_198,&uStack_180);
  plStack_48 = alStack_198;
  FUN_109510138(&plStack_48);
  FUN_10952cb3c(alStack_198,param_2,&uStack_180,1);
  (**(code **)(*param_2 + 0x50))(&plStack_48,param_2);
  FUN_10952c7c4(param_1,param_2,alStack_198[0],&plStack_48);
  plVar5 = plStack_48;
  plStack_48 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plStack_48 = alStack_198;
  FUN_109510208(&plStack_48);
  func_0x000109379fe8(&uStack_180);
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
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 10952cb3c; end: 10952cf57;  */

void FUN_10952cb3c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  long lStack_138;
  undefined1 uStack_119;
  long *plStack_118;
  undefined8 uStack_110;
  uint uStack_108;
  undefined4 uStack_104;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = 0x10;
  if (param_4 != 1) {
    lVar9 = 8;
  }
  func_0x000109cdb3f0(auStack_148,*(undefined8 *)(param_2 + lVar9),param_3,1);
  plVar12 = *(long **)(*(long *)(param_2 + 0x18) + 400);
  for (plVar10 = *(long **)(*(long *)(param_2 + 0x18) + 0x188); plVar10 != plVar12;
      plVar10 = plVar10 + 3) {
    puVar8 = auStack_148;
    uStack_110 = plVar10;
    FUN_10937a098(puVar8,plVar10,&UNK_10dd5b8f9,&uStack_110,&uStack_158);
    func_0x000109d0e828(&plStack_c0,puVar8 + 0x28,&UNK_10dfd2188,0);
    puVar8 = auStack_148;
    uStack_110 = plVar10;
    FUN_10937a098(puVar8,plVar10,&UNK_10dd5b8f9,&uStack_110,&uStack_158);
    uVar6 = CONCAT71(uStack_b7,uStack_b8);
    *(undefined8 *)(puVar8 + 0x38) = uStack_b0;
    *(undefined8 *)(puVar8 + 0x30) = uVar6;
    *(undefined8 *)(puVar8 + 0x40) = uStack_a8;
    func_0x0001093783c0(puVar8 + 0x48,auStack_a0);
    func_0x00010937843c(puVar8 + 0x58,auStack_90);
    func_0x000105675c90(&plStack_c0);
  }
  if (param_4 == 1) {
    FUN_10952d47c(&plStack_c0,auStack_148);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uStack_108 = uStack_108 & 0xffffff00;
    lVar9 = 0x28;
    uStack_110 = param_1;
    __Znwm();
    *param_1 = lVar9;
    param_1[1] = lVar9;
    param_1[2] = lVar9 + 0x28;
    FUN_10952d47c();
    param_1[1] = lVar9 + 0x28;
    func_0x000109379fe8(&plStack_c0);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uStack_b8 = 0;
    plVar10 = (long *)lStack_138;
    plStack_c0 = param_1;
    if (param_4 != 0) {
      if (0x666666666666666 < param_4) goto LAB_10952ceac;
      plVar10 = param_1;
      uVar13 = param_4;
      FUN_109519d30();
      *param_1 = (long)plVar10;
      param_1[2] = (long)(plVar10 + uVar13 * 5);
      plVar12 = plVar10 + param_4 * 5;
      do {
        plVar10[1] = 0;
        *plVar10 = 0;
        plVar10[3] = 0;
        plVar10[2] = 0;
        *(undefined4 *)(plVar10 + 4) = 0x3f800000;
        plVar10 = plVar10 + 5;
      } while (plVar10 != plVar12);
      param_1[1] = (long)plVar12;
      plVar10 = (long *)lStack_138;
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      plVar12 = (long *)plVar10[6];
      uStack_108 = *(uint *)(plVar10 + 7);
      uStack_104 = 1;
      uStack_110 = plVar12;
      if (0xe < *(uint *)(plVar10 + 8)) {
        FUN_10952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
        goto LAB_10952ceb0;
      }
      if (param_4 != 0) {
        uVar13 = 0;
        lVar9 = plVar10[9];
        uStack_110._4_4_ = (int)((ulong)plVar12 >> 0x20);
        iVar3 = uStack_110._4_4_ * uStack_108;
        iVar2 = *(int *)(&UNK_10dfd21f4 + (ulong)*(uint *)(plVar10 + 8) * 4);
        do {
          uStack_e8 = plVar10[10];
          uStack_f0 = plVar10[9];
          if (plVar10[10] != 0) {
            plVar1 = (long *)(plVar10[10] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pcStack_100 = FUN_10952d4f0;
          ppuStack_f8 = &PTR_DAT_110afb378;
          uStack_158 = 0;
          uStack_150 = 0;
          func_0x000109d0eaa4(&plStack_c0,&uStack_110,&UNK_10dfd2188,lVar9,&pcStack_100);
          lVar11 = *param_1 + uVar13 * 0x28;
          plStack_118 = plVar10 + 2;
          FUN_10937a098(lVar11,plVar10 + 2,&UNK_10dd5b8f9,&plStack_118,&uStack_119);
          *(undefined8 *)(lVar11 + 0x38) = uStack_b0;
          *(ulong *)(lVar11 + 0x30) = CONCAT71(uStack_b7,uStack_b8);
          *(undefined8 *)(lVar11 + 0x40) = uStack_a8;
          func_0x0001093783c0(lVar11 + 0x48,auStack_a0);
          func_0x00010937843c(lVar11 + 0x58,auStack_90);
          func_0x000105675c90(&plStack_c0);
          (*(code *)*ppuStack_f8)(&ppuStack_f8);
          uVar13 = uVar13 + 1;
          lVar9 = lVar9 + (ulong)(uint)(iVar3 * (int)plVar12 * iVar2);
        } while (uVar13 != param_4);
      }
    }
  }
  func_0x000109379fe8(auStack_148);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10952ceac:
  func_0x000109519d1c();
LAB_10952ceb0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10952ceb4);
  (*pcVar7)();
}



/* Entry: 10952cf58; end: 10952cf5b;  */

undefined8 * FUN_10952cf58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 10952cf5c; end: 10952cf6f;  */

void FUN_10952cf5c(void)

{
  FUN_109528d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952cf70; end: 10952cf7b;  */

void FUN_10952cf70(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010952cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 10952cf7c; end: 10952cfdb;  */

void FUN_10952cf7c(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (param_4 == 3) {
    FUN_10938cda4(*(undefined8 *)(param_5 + 0x10),lVar1);
    **(undefined1 **)(param_5 + 0x18) = 1;
  }
  else if (lVar1 != 0) {
    func_0x000109cda590(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10952cfdc; end: 10952cff7;  */

void FUN_10952cfdc(void)

{
  return;
}



/* Entry: 10952cff8; end: 10952d07b;  */

void FUN_10952cff8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10952d07c(param_1,param_4);
    lVar1 = param_1;
    FUN_10950306c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10952d07c; end: 10952d0c3;  */

void FUN_10952d07c(long *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_2 < 0xaaaaaaaaaaaaab) {
    plVar2 = param_1;
    FUN_109503598();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2 * 0x30);
    return;
  }
  FUN_109503584();
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_68,param_1);
  func_0x000107c31940(auStack_80,param_2);
  func_0x000107c31940(auStack_98,param_3);
  FUN_10952d1c4(uVar3,auStack_68,auStack_80,auStack_98);
  ___cxa_throw(uVar3,&PTR_DAT_110afb398,FUN_10952d1c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10952d14c);
  (*pcVar1)();
}



/* Entry: 10952d0c4; end: 10952d1bf;  */

void FUN_10952d0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  func_0x000107c31940(auStack_78,param_3);
  FUN_10952d1c4(uVar2,auStack_48,auStack_60,auStack_78);
  ___cxa_throw(uVar2,&PTR_DAT_110afb398,FUN_10952d1c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10952d14c);
  (*pcVar1)();
}



/* Entry: 10952d1c0; end: 10952d1c3;  */

void FUN_10952d1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10952d1c4; end: 10952d3b7;  */

/* WARNING: Removing unreachable block (ram,0x00010952d2d0) */

undefined8 *
FUN_10952d1c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_c8,&UNK_10f573141);
  puVar2 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&DAT_10f62a9de,1);
  uStack_a8 = puVar2[1];
  uStack_b0 = *puVar2;
  lStack_a0 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  puVar3 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_88 = puVar3[1];
  uStack_90 = *puVar3;
  lStack_80 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar2 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&DAT_10f39abd5,2);
  uStack_68 = puVar2[1];
  uStack_70 = *puVar2;
  lStack_60 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  puVar3 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_48 = puVar3[1];
  uStack_50 = *puVar3;
  uStack_40 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_50);
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  *param_1 = &PTR_FUN_110afb3c0;
  return param_1;
}



/* Entry: 10952d3b8; end: 10952d3cb;  */

void FUN_10952d3b8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952d3cc; end: 10952d47b;  */

long FUN_10952d3cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10952d47c; end: 10952d4ef;  */

undefined8 * FUN_10952d47c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10937a3dc(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094c89d0(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10952d4f0; end: 10952d54b;  */

void FUN_10952d4f0(void)

{
  return;
}



/* Entry: 10952d54c; end: 10952daa7;  */

float * FUN_10952d54c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  float *pfStack_98;
  float *pfStack_90;
  char cStack_81;
  undefined1 uStack_79;
  long lStack_78;
  
  lVar15 = param_3;
  FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xb0);
  if (lVar15 != 0) {
    iVar2 = *(int *)(lVar15 + 0x30);
    iVar16 = *(int *)(lVar15 + 0x34);
    lVar15 = param_3;
    FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xb0);
    if (lVar15 != 0) {
      lVar14 = *(long *)(lVar15 + 0x48);
      lVar15 = param_3;
      FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
      if (lVar15 != 0) {
        lVar15 = *(long *)(lVar15 + 0x48);
        FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
        if (param_3 != 0) {
          iVar3 = *(int *)(param_3 + 0x38);
          if ((*(long *)(*(long *)(param_2 + 0x18) + 0x1c0) -
               *(long *)(*(long *)(param_2 + 0x18) + 0x1b8) >> 3) * -0x5555555555555555 -
              (ulong)(iVar3 + 1) == 0) {
            iVar16 = iVar16 * iVar2;
            if (iVar16 == 0) {
              fVar22 = 0.0;
            }
            else {
              pfVar7 = (float *)(lVar14 + 4);
              fVar22 = 0.0;
              do {
                fVar20 = *pfVar7;
                _expf();
                fVar21 = pfVar7[-1];
                _expf();
                fVar20 = fVar20 / (fVar20 + fVar21);
                if (fVar20 <= fVar22) {
                  fVar20 = fVar22;
                }
                fVar22 = fVar20;
                pfVar7 = pfVar7 + 2;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            uStack_b0 = 0;
            FUN_1092ef208(&pfStack_98,iVar3,&uStack_b0);
            iVar2 = *(int *)(param_3 + 0x34);
            if (iVar2 != 0) {
              iVar16 = 0;
              uVar17 = 0;
              iVar3 = *(int *)(param_3 + 0x30);
              do {
                pfVar7 = pfStack_98;
                if (iVar3 != 0) {
                  iVar19 = 0;
                  uVar4 = *(uint *)(param_3 + 0x38);
                  do {
                    pfVar13 = pfVar7;
                    uVar8 = (ulong)uVar4;
                    if (uVar4 != 0) {
                      do {
                        fVar20 = *(float *)(lVar15 + uVar17 * 4);
                        _expf();
                        *(float *)(lVar15 + uVar17 * 4) = fVar20;
                        *pfVar13 = fVar20 + *pfVar13;
                        uVar17 = (ulong)((int)uVar17 + 1);
                        uVar8 = uVar8 - 1;
                        pfVar13 = pfVar13 + 1;
                      } while (uVar8 != 0);
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 != iVar3);
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar2);
            }
            FUN_109528cb8(&uStack_b0,*(undefined4 *)(param_3 + 0x38));
            uVar4 = *(uint *)(param_3 + 0x34);
            if (uVar4 != 0) {
              uVar17 = 0;
              uVar11 = 0;
              uVar5 = *(uint *)(param_3 + 0x30);
              do {
                if (uVar5 != 0) {
                  uVar12 = 0;
                  uVar6 = *(uint *)(param_3 + 0x38);
                  do {
                    uVar12 = uVar12 + 1;
                    if (uVar6 != 0) {
                      uVar8 = (ulong)uVar6;
                      pfVar13 = pfStack_98;
                      pfVar7 = (float *)(CONCAT44(uStack_ac,uStack_b0) + 4);
                      do {
                        fVar20 = *(float *)(lVar15 + uVar17 * 4) / *pfVar13;
                        pfVar7[-1] = pfVar7[-1] + (fVar20 * (float)uVar12) / (float)uVar5;
                        *pfVar7 = (fVar20 * (float)(uVar11 + 1)) / (float)uVar4 + *pfVar7;
                        uVar17 = (ulong)((int)uVar17 + 1);
                        pfVar7 = pfVar7 + 5;
                        uVar8 = uVar8 - 1;
                        pfVar13 = pfVar13 + 1;
                      } while (uVar8 != 0);
                    }
                  } while (uVar12 != uVar5);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar4);
              uVar17 = 0;
              uVar11 = 0;
              do {
                if (uVar5 != 0) {
                  uVar12 = 0;
                  uVar6 = *(uint *)(param_3 + 0x38);
                  do {
                    uVar12 = uVar12 + 1;
                    if (uVar6 != 0) {
                      uVar8 = (ulong)uVar6;
                      pfVar7 = pfStack_98;
                      pfVar13 = (float *)(CONCAT44(uStack_ac,uStack_b0) + 8);
                      do {
                        fVar20 = *(float *)(lVar15 + uVar17 * 4) / *pfVar7;
                        *pfVar13 = *pfVar13 +
                                   fVar20 * ABS((float)uVar12 / (float)uVar5 - pfVar13[-2]) +
                                   fVar20 * ABS((float)(uVar11 + 1) / (float)uVar4 - pfVar13[-1]);
                        uVar17 = (ulong)((int)uVar17 + 1);
                        uVar8 = uVar8 - 1;
                        pfVar7 = pfVar7 + 1;
                        pfVar13 = pfVar13 + 5;
                      } while (uVar8 != 0);
                    }
                  } while (uVar12 != uVar5);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar4);
            }
            lVar14 = CONCAT44(uStack_ac,uStack_b0);
            for (lVar15 = lVar14; lVar15 != lStack_a8; lVar15 = lVar15 + 0x14) {
              *(float *)(lVar15 + 8) = *(float *)(lVar15 + 8) * 0.5;
            }
            param_1[0x2b] = 0;
            param_1[0x2a] = 0;
            param_1[0x2d] = 0;
            param_1[0x2c] = 0;
            param_1[0x27] = 0;
            param_1[0x26] = 0;
            param_1[0x29] = 0;
            param_1[0x28] = 0;
            *(undefined8 *)((long)param_1 + 0x174) = 0;
            *(undefined8 *)((long)param_1 + 0x16c) = 0;
            param_1[0x23] = 0;
            param_1[0x22] = 0;
            param_1[0x25] = 0;
            param_1[0x24] = 0;
            param_1[0x1f] = 0;
            param_1[0x1e] = 0;
            param_1[0x21] = 0;
            param_1[0x20] = 0;
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
            param_1[0x1b] = 0;
            param_1[0x1a] = 0;
            param_1[0xf] = 0;
            param_1[0xe] = 0;
            *(undefined4 *)(param_1 + 6) = 0x3f800000;
            param_1[0x17] = 0;
            param_1[8] = 0;
            param_1[7] = 0;
            param_1[10] = 0;
            param_1[9] = 0;
            *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
            *(undefined4 *)(param_1 + 0xd) = 0x42ff0000;
            *(undefined8 *)((long)param_1 + 0x74) = 0;
            *(undefined8 *)((long)param_1 + 0x6c) = 0;
            *(undefined8 *)((long)param_1 + 0x84) = 0;
            *(undefined8 *)((long)param_1 + 0x7c) = 0;
            *(undefined8 *)((long)param_1 + 0x94) = 0;
            *(undefined8 *)((long)param_1 + 0x8c) = 0;
            param_1[0x14] = 0;
            param_1[0x13] = 0;
            param_1[0x15] = param_1 + 0xe;
            param_1[0x16] = param_1 + 0x17;
            param_1[0x18] = 0;
            *(undefined4 *)(param_1 + 0x19) = 0x42ff0000;
            *(undefined8 *)((long)param_1 + 0xd4) = 0;
            *(undefined8 *)((long)param_1 + 0xcc) = 0;
            *(undefined8 *)((long)param_1 + 0xe4) = 0;
            *(undefined8 *)((long)param_1 + 0xdc) = 0;
            *(undefined8 *)((long)param_1 + 0xf4) = 0;
            *(undefined8 *)((long)param_1 + 0xec) = 0;
            param_1[0x20] = 0;
            param_1[0x1f] = 0;
            param_1[0x21] = param_1 + 0x1a;
            param_1[0x22] = param_1 + 0x23;
            param_1[0x27] = 0;
            param_1[0x26] = 0;
            param_1[0x29] = 0;
            param_1[0x28] = 0;
            param_1[0x23] = 0;
            param_1[0x24] = 0;
            *(undefined1 *)(param_1 + 0x25) = 0;
            *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
            *(undefined4 *)((long)param_1 + 0x17c) = 0;
            *(undefined1 *)(param_1 + 0x30) = 1;
            *(float *)(param_1 + 0xc) = fVar22;
            *(undefined1 *)((long)param_1 + 100) = 1;
            if (lVar14 != lStack_a8) {
              lVar15 = 0;
              uVar17 = 0;
              lVar18 = 0x18;
              do {
                lStack_78 = *(long *)(*(long *)(param_2 + 0x18) + 0x1b8) + lVar18;
                puVar9 = param_1 + 2;
                FUN_1094e1a28(puVar9,lStack_78,&UNK_10dd5b8f9,&lStack_78,&uStack_79);
                uVar17 = uVar17 + 1;
                puVar1 = (undefined8 *)(lVar14 + lVar15);
                puVar9[5] = *puVar1;
                uVar10 = puVar1[1];
                *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(puVar1 + 2);
                puVar9[6] = uVar10;
                lVar14 = CONCAT44(uStack_ac,uStack_b0);
                lVar15 = lVar15 + 0x14;
                lVar18 = lVar18 + 0x18;
              } while (uVar17 < (ulong)((lStack_a8 - lVar14 >> 2) * -0x3333333333333333));
            }
            if (lVar14 != 0) {
              lStack_a8 = lVar14;
              __ZdlPv(lVar14);
            }
            if (pfStack_98 != (float *)0x0) {
              pfStack_90 = pfStack_98;
              __ZdlPv();
            }
          }
          else {
            FUN_10937e740(&pfStack_98,&UNK_10f5731f6);
            pfVar7 = (float *)0x1;
            FUN_109388c6c(1,&UNK_10f57314f,&UNK_10f5731e6,0x15,&pfStack_98);
            if (cStack_81 < '\0') {
              __ZdlPv(pfStack_98);
              pfVar7 = pfStack_98;
            }
            pfStack_98 = pfVar7;
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 0x30) = 0;
          }
          return pfStack_98;
        }
      }
    }
  }
  pfVar7 = (float *)&UNK_10f639994;
  FUN_109262df8();
  if (pfStack_98 != (float *)0x0) {
    pfStack_90 = pfStack_98;
    __ZdlPv();
  }
  __Unwind_Resume();
  *(undefined ***)pfVar7 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(pfVar7 + 10);
  FUN_10950a500(pfVar7 + 6);
  FUN_10938cda4(pfVar7 + 4,0);
  FUN_10938cda4(pfVar7 + 2,0);
  return pfVar7;
}



/* Entry: 10952daa8; end: 10952daab;  */

undefined8 * FUN_10952daa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 10952daac; end: 10952dabf;  */

void FUN_10952daac(void)

{
  FUN_109528d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952dac0; end: 10952db83;  */

long FUN_10952dac0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar6 = (long *)param_3[1];
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1;
  FUN_10952b348(param_1,param_2,&uStack_40);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x260);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x264);
  return lVar4;
}



/* Entry: 10952db84; end: 10952e38b;  */

void FUN_10952db84(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  undefined8 *puVar26;
  float *pfVar27;
  int *piVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined7 uStack_120;
  char cStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 auStack_e0 [3];
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_a9 [9];
  
  lVar15 = param_3;
  FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
  if (lVar15 == 0) {
LAB_10952e2e4:
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    lVar21 = *(long *)(lVar15 + 0x48);
    lVar15 = param_3;
    FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
    if (lVar15 == 0) goto LAB_10952e2e4;
    iVar11 = *(int *)(lVar15 + 0x38);
    lVar12 = *(long *)(param_2 + 0x18);
    if ((*(long *)(lVar12 + 0x1c0) - *(long *)(lVar12 + 0x1b8) >> 3) * -0x5555555555555555 -
        (ulong)(iVar11 - 1) != 0) {
      FUN_10937e740(&uStack_130,&UNK_10f5731f6);
      FUN_109388c6c(1,&UNK_10f57320a,&UNK_10f5731e6,0x1d,&uStack_130);
      if (cStack_119 < '\0') {
        __ZdlPv(uStack_130);
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      return;
    }
    uVar2 = *(uint *)(lVar12 + 0x2c);
    iVar3 = *(int *)(lVar12 + 0x30);
    iVar20 = *(int *)(lVar15 + 0x30);
    iVar4 = *(int *)(lVar15 + 0x34);
    FUN_109528cb8(&lStack_c8,iVar11);
    lVar15 = *(long *)(param_2 + 0x18);
    if (*(long *)(lVar15 + 0x1c0) != *(long *)(lVar15 + 0x1b8)) {
      uVar18 = 0;
      pfVar27 = (float *)(lVar21 + (long)((((int)(iVar4 - uVar2) / 2) * iVar20 +
                                          (iVar20 - iVar3) / 2) * iVar11) * 4);
      do {
        fVar36 = *pfVar27;
        if ((int)uVar2 < 1) {
          fVar32 = 0.0;
          fVar30 = 0.5;
          fVar35 = 0.0;
          fVar34 = 0.0;
          fVar33 = 0.0;
          fVar37 = 0.0;
          fVar29 = 0.5;
        }
        else {
          uVar22 = 0;
          uVar23 = 0;
          uVar19 = 0;
          fVar37 = 0.0;
          dVar31 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          fVar32 = 0.0;
          pfVar13 = pfVar27;
          do {
            if (0 < iVar3 * iVar11) {
              uVar24 = 0;
              cVar5 = *(char *)(param_2 + 0x3c);
              pfVar25 = pfVar13;
              do {
                fVar29 = *pfVar25;
                fVar30 = fVar29;
                uVar7 = uVar23;
                uVar8 = uVar24;
                if (fVar29 <= fVar36) {
                  fVar30 = fVar36;
                  uVar7 = uVar22;
                  uVar8 = uVar19;
                }
                uVar19 = uVar8;
                uVar22 = uVar7;
                fVar36 = fVar30;
                if (cVar5 != '\0') {
                  _powf(fVar29,*(undefined4 *)(param_2 + 0x44));
                  fVar32 = fVar32 + fVar29;
                  fVar35 = fVar35 + fVar29 * (float)uVar24;
                  fVar34 = fVar34 + fVar29 * (float)uVar23;
                  fVar33 = (float)((double)fVar33 + (double)fVar29 * (double)uVar24 * (double)uVar24
                                  );
                  fVar37 = (float)((double)fVar37 + (double)fVar29 * dVar31 * dVar31);
                }
                uVar24 = uVar24 + 1;
                pfVar25 = pfVar25 + iVar11;
              } while (pfVar25 < pfVar13 + iVar3 * iVar11);
            }
            pfVar13 = (float *)((long)pfVar13 +
                               (-(ulong)((uint)(iVar20 * iVar11) >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)(uint)(iVar20 * iVar11) << 2));
            dVar31 = dVar31 + 1.0;
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar2);
          fVar30 = (float)(int)uVar19 + 0.5;
          fVar29 = (float)(int)uVar22 + 0.5;
        }
        fVar30 = fVar30 / (float)iVar3;
        fVar29 = fVar29 / (float)(int)uVar2;
        if (*(char *)(param_2 + 0x3c) == '\x01') {
          fVar35 = fVar35 / fVar32;
          if ((SQRT(fVar33 / fVar32 - fVar35 * fVar35) < *(float *)(param_2 + 0x40)) &&
             (fVar34 = fVar34 / fVar32,
             SQRT(fVar37 / fVar32 - fVar34 * fVar34) < *(float *)(param_2 + 0x40))) {
            fVar30 = fVar35 / (float)iVar3;
            fVar29 = fVar34 / (float)(int)uVar2;
          }
        }
        fVar35 = *(float *)(lVar15 + 0x210);
        pfVar13 = (float *)(lStack_c8 + uVar18 * 0x14);
        *pfVar13 = fVar30;
        pfVar13[1] = fVar29;
        pfVar13[2] = fVar36;
        pfVar13[3] = fVar36;
        pfVar13[4] = fVar35;
        uVar18 = uVar18 + 1;
        pfVar27 = pfVar27 + 1;
        lVar15 = *(long *)(param_2 + 0x18);
      } while (uVar18 < (ulong)((*(long *)(lVar15 + 0x1c0) - *(long *)(lVar15 + 0x1b8) >> 3) *
                               -0x5555555555555555));
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    *(undefined8 *)((long)param_1 + 0x174) = 0;
    *(undefined8 *)((long)param_1 + 0x16c) = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
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
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    puVar26 = param_1 + 0xe;
    param_1[0xf] = 0;
    *puVar26 = 0;
    *(undefined4 *)(param_1 + 6) = 0x3f800000;
    puVar14 = param_1 + 0x17;
    *puVar14 = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
    *(undefined4 *)(param_1 + 0xd) = 0x42ff0000;
    piVar28 = (int *)((long)param_1 + 0x6c);
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    piVar28[0] = 0;
    piVar28[1] = 0;
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(undefined8 *)((long)param_1 + 0x84) = 0;
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x94) = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = puVar26;
    param_1[0x16] = puVar14;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
    *(undefined8 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x21] = param_1 + 0x1a;
    param_1[0x22] = param_1 + 0x23;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined1 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0x17c) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(char *)(lVar15 + 199) < '\0') {
      if (*(long *)(lVar15 + 0xb8) != 0) goto LAB_10952dfe4;
LAB_10952e05c:
      puVar17 = *(undefined8 **)(lVar15 + 0x1b8);
      if (*(undefined8 **)(lVar15 + 0x1c0) != puVar17) {
        lVar12 = 0;
        lVar21 = 0;
        uVar18 = 0;
        do {
          lVar15 = lStack_c8;
          uStack_130 = (undefined8 *)((long)puVar17 + lVar12);
          puVar17 = param_1 + 2;
          FUN_1094e1a28(puVar17,uStack_130,&UNK_10dd5b8f9,&uStack_130,auStack_a9);
          puVar10 = (undefined8 *)(lVar15 + lVar21);
          puVar17[5] = *puVar10;
          uVar16 = puVar10[1];
          *(undefined4 *)(puVar17 + 7) = *(undefined4 *)(puVar10 + 2);
          puVar17[6] = uVar16;
          uVar18 = uVar18 + 1;
          lVar15 = *(long *)(param_2 + 0x18);
          puVar17 = *(undefined8 **)(lVar15 + 0x1b8);
          lVar21 = lVar21 + 0x14;
          lVar12 = lVar12 + 0x18;
        } while (uVar18 < (ulong)((*(long *)(lVar15 + 0x1c0) - (long)puVar17 >> 3) *
                                 -0x5555555555555555));
      }
      if (*(char *)(lVar15 + 0x10f) < '\0') {
        if (*(long *)(lVar15 + 0x100) == 0) goto LAB_10952e184;
      }
      else if (*(char *)(lVar15 + 0x10f) == '\0') goto LAB_10952e184;
      puVar10 = param_1 + 2;
      uStack_130 = puVar17;
      FUN_1094e1a28(puVar10,puVar17,&UNK_10dd5b8f9,&uStack_130,auStack_a9);
      lVar15 = param_3;
      FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xf8);
      if (lVar15 != 0) {
        FUN_10952a9f0(&uStack_130,lVar15 + 0x28,puVar10 + 5);
        uVar16 = *uStack_130;
        *param_1 = CONCAT44((float)((ulong)puVar10[5] >> 0x20) +
                            (float)((ulong)uVar16 >> 0x20) * -0.5,
                            (float)puVar10[5] + (float)uVar16 * -0.5);
        param_1[1] = uVar16;
        puStack_128 = uStack_130;
        __ZdlPv();
LAB_10952e184:
        FUN_10952aa6c(&uStack_130,param_2,param_3);
        if (param_1[0x14] != 0) {
          piVar1 = (int *)(param_1[0x14] + 0x14);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            func_0x000109a848d4(param_1 + 0xd);
          }
        }
        if (0 < *(int *)((long)param_1 + 0x6c)) {
          lVar15 = 0;
          lVar21 = param_1[0x15];
          do {
            *(undefined4 *)(lVar21 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < *piVar28);
        }
        param_1[0xe] = puStack_128;
        param_1[0xd] = uStack_130;
        param_1[0x10] = uStack_118;
        param_1[0xf] = CONCAT17(cStack_119,uStack_120);
        param_1[0x12] = uStack_108;
        param_1[0x11] = uStack_110;
        param_1[0x14] = uStack_f8;
        param_1[0x13] = uStack_100;
        puVar17 = (undefined8 *)param_1[0x16];
        iVar11 = uStack_130._4_4_;
        if (puVar17 != puVar14) {
          if (puVar17 != (undefined8 *)0x0) {
            _free(puVar17[-1]);
          }
          param_1[0x15] = puVar26;
          param_1[0x16] = puVar14;
          puVar17 = puVar14;
          iVar11 = uStack_130._4_4_;
        }
        if (iVar11 < 3) {
          puVar14 = (undefined8 *)((ulong)&uStack_130 | 4);
          *puVar17 = *puStack_e8;
          puVar17[1] = puStack_e8[1];
          uStack_130 = (undefined8 *)CONCAT44(uStack_130._4_4_,0x42ff0000);
          puVar14[1] = 0;
          *puVar14 = 0;
          puVar14[3] = 0;
          puVar14[2] = 0;
          puVar14[5] = 0;
          puVar14[4] = 0;
          *(undefined8 *)((long)puVar14 + 0x34) = 0;
          *(undefined8 *)((long)puVar14 + 0x2c) = 0;
          if (puStack_e8 != auStack_e0) {
            _free(puStack_e8[-1]);
          }
        }
        else {
          param_1[0x15] = uStack_f0;
          param_1[0x16] = puStack_e8;
        }
        if (lStack_c8 != 0) {
          lStack_c0 = lStack_c8;
          __ZdlPv();
        }
        return;
      }
      FUN_109262df8(&UNK_10f639994);
      goto LAB_10952e31c;
    }
    if (*(char *)(lVar15 + 199) == '\0') goto LAB_10952e05c;
LAB_10952dfe4:
    lVar21 = param_3;
    FUN_10938e710(param_3,lVar15 + 0xb0);
    if (lVar21 != 0) {
      iVar11 = *(int *)(lVar21 + 0x30);
      iVar20 = *(int *)(lVar21 + 0x34);
      lVar15 = param_3;
      FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xb0);
      if (lVar15 == 0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_10952e31c;
      }
      iVar20 = iVar20 * iVar11;
      if (iVar20 == 0) {
        fVar36 = 0.0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x48);
        fVar36 = 0.0;
        do {
          func_0x0001094cf860(lVar15,2);
          fVar30 = *(float *)(lVar15 + 4);
          if (*(float *)(lVar15 + 4) <= fVar36) {
            fVar30 = fVar36;
          }
          fVar36 = fVar30;
          lVar15 = lVar15 + 8;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      *(float *)(param_1 + 0xc) = fVar36;
      *(undefined1 *)((long)param_1 + 100) = 1;
      lVar15 = *(long *)(param_2 + 0x18);
      goto LAB_10952e05c;
    }
  }
  FUN_109262df8(&UNK_10f639994);
LAB_10952e31c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10952e320);
  (*pcVar9)();
}



/* Entry: 10952e38c; end: 10952e38f;  */

undefined8 * FUN_10952e38c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 10952e390; end: 10952e3a3;  */

void FUN_10952e390(void)

{
  FUN_109528d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952e3a4; end: 10952e4c7;  */

bool FUN_10952e3a4(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *param_3;
  lVar4 = *(long *)(lVar6 + 8);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    ___dynamic_cast(lVar4,&PTR_DAT_110af7700,&PTR_DAT_110afb130,0);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_10952e40c;
    }
  }
  lVar6 = 0;
LAB_10952e40c:
  plVar7 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x38) = lVar4;
  *(long *)(param_1 + 0x40) = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lVar4 = *(long *)(param_1 + 0x38);
  }
  if (lVar4 != 0) {
    uVar5 = 8;
    __Znwm(8);
    FUN_109534d40();
    FUN_10952f134(param_1 + 8,uVar5);
    lVar6 = **(long **)(param_1 + 8);
    *(undefined4 *)(lVar6 + 0x23c) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 8);
    *(undefined8 *)(lVar6 + 0x240) = 0x3e4ccccd3f800000;
    *(undefined4 *)(lVar6 + 0x248) = 0x40800000;
    *(undefined4 *)(lVar6 + 0x1e8) = 0x3f800000;
  }
  return lVar4 != 0;
}



/* Entry: 10952e4c8; end: 10952e93f;  */

void FUN_10952e4c8(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  piVar19 = (int *)*param_3;
  iVar3 = *piVar19;
  piVar18 = (int *)(long)iVar3;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar6 = (int)piVar19 + 0x20;
  FUN_1094cf754();
  fVar20 = (float)piVar19[8];
  if (iVar6 == 0) {
    fVar21 = (float)piVar19[9];
    fVar22 = (float)piVar19[10];
    fVar23 = (float)piVar19[0xb];
  }
  else {
    fVar20 = fVar20 * (float)iVar2;
    fVar21 = (float)piVar19[9] * (float)iVar1;
    fVar22 = (float)piVar19[10] * (float)iVar2;
    fVar23 = (float)piVar19[0xb] * (float)iVar1;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  FUN_109534dbc(*(undefined4 *)(lVar8 + 0x14),*(undefined4 *)(lVar8 + 0x18),
                *(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),
                *(undefined8 *)(param_1 + 8),iVar3,iVar2,iVar1,
                (int)((fVar20 + fVar20 + fVar22) * 0.5),(int)((fVar21 + fVar21 + fVar23) * 0.5),
                (int)fVar22,(int)fVar23,*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0xc),
                0x2000000002);
  piVar17 = *(int **)(param_1 + 0x18);
  if (piVar17 != (int *)0x0) {
    uVar9 = (long)piVar17 - 1;
    if (((ulong)piVar17 & uVar9) == 0) {
      piVar19 = (int *)(uVar9 & (ulong)piVar18);
    }
    else {
      piVar19 = piVar18;
      if (piVar17 <= piVar18) {
        uVar4 = 0;
        if (piVar17 != (int *)0x0) {
          uVar4 = (ulong)piVar18 / (ulong)piVar17;
        }
        piVar19 = (int *)((long)piVar18 - uVar4 * (long)piVar17);
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)piVar19 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar10; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        piVar11 = (int *)plVar16[1];
        if (piVar11 == piVar18) {
          if ((int)plVar16[2] == iVar3) goto LAB_10952e8bc;
        }
        else {
          if (((ulong)piVar17 & uVar9) == 0) {
            piVar11 = (int *)((ulong)piVar11 & uVar9);
          }
          else if (piVar17 <= piVar11) {
            uVar4 = 0;
            if (piVar17 != (int *)0x0) {
              uVar4 = (ulong)piVar11 / (ulong)piVar17;
            }
            piVar11 = (int *)((long)piVar11 - uVar4 * (long)piVar17);
          }
          if (piVar11 != piVar19) break;
        }
      }
    }
  }
  plVar16 = (long *)0x20;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = (long)piVar18;
  *(undefined4 *)((long)plVar16 + 0x14) = 0;
  *(undefined4 *)(plVar16 + 3) = 0;
  *(int *)(plVar16 + 2) = iVar3;
  fVar20 = (float)(*(long *)(param_1 + 0x28) + 1);
  if ((piVar17 == (int *)0x0) || (*(float *)(param_1 + 0x30) * (float)piVar17 < fVar20)) {
    uVar9 = 1;
    if ((int *)0x2 < piVar17) {
      uVar9 = (ulong)(((ulong)piVar17 & (long)piVar17 - 1U) != 0);
    }
    piVar19 = (int *)(uVar9 | (long)piVar17 << 1);
    piVar11 = (int *)(long)(fVar20 / *(float *)(param_1 + 0x30));
    if (piVar19 <= piVar11) {
      piVar19 = piVar11;
    }
    if ((long)piVar19 - 1U == 0) {
      piVar19 = (int *)0x2;
    }
    else if (((ulong)piVar19 & (long)piVar19 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      piVar17 = *(int **)(param_1 + 0x18);
    }
    if (piVar17 < piVar19) {
LAB_10952e6d0:
      if ((ulong)piVar19 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10952e92c);
        (*pcVar5)();
      }
      lVar8 = (long)piVar19 << 3;
      __Znwm();
      lVar7 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      piVar17 = (int *)0x0;
      *(int **)(param_1 + 0x18) = piVar19;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)piVar17 * 8) = 0;
        piVar17 = (int *)((long)piVar17 + 1);
      } while (piVar19 != piVar17);
      plVar12 = *(long **)(param_1 + 0x20);
      piVar17 = piVar19;
      if (plVar12 != (long *)0x0) {
        piVar11 = (int *)plVar12[1];
        uVar9 = (long)piVar19 - 1;
        if (((ulong)piVar19 & uVar9) == 0) {
          piVar11 = (int *)((ulong)piVar11 & uVar9);
        }
        else if (piVar19 <= piVar11) {
          uVar4 = 0;
          if (piVar19 != (int *)0x0) {
            uVar4 = (ulong)piVar11 / (ulong)piVar19;
          }
          piVar11 = (int *)((long)piVar11 - uVar4 * (long)piVar19);
        }
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)piVar11 * 8) =
             (undefined8 *)(param_1 + 0x20);
        plVar13 = (long *)*plVar12;
        while (plVar13 != (long *)0x0) {
          piVar15 = (int *)plVar13[1];
          if (((ulong)piVar19 & uVar9) == 0) {
            piVar15 = (int *)((ulong)piVar15 & uVar9);
          }
          else if (piVar19 <= piVar15) {
            uVar4 = 0;
            if (piVar19 != (int *)0x0) {
              uVar4 = (ulong)piVar15 / (ulong)piVar19;
            }
            piVar15 = (int *)((long)piVar15 - uVar4 * (long)piVar19);
          }
          plVar14 = plVar13;
          if (piVar15 != piVar11) {
            lVar8 = *(long *)(param_1 + 0x10);
            if (*(long *)(lVar8 + (long)piVar15 * 8) == 0) {
              *(long **)(lVar8 + (long)piVar15 * 8) = plVar12;
              piVar11 = piVar15;
            }
            else {
              *plVar12 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar8 + (long)piVar15 * 8);
              **(long **)(lVar8 + (long)piVar15 * 8) = (long)plVar13;
              plVar14 = plVar12;
            }
          }
          plVar12 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (piVar19 < piVar17) {
      piVar11 = (int *)(long)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
      if ((piVar17 < (int *)0x3) || (((ulong)piVar17 & (long)piVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((int *)0x1 < piVar11) {
        piVar11 = (int *)(1L << (-LZCOUNT((long)piVar11 + -1) & 0x3fU));
      }
      if (piVar19 <= piVar11) {
        piVar19 = piVar11;
      }
      if (piVar19 < piVar17) {
        if (piVar19 != (int *)0x0) goto LAB_10952e6d0;
        lVar8 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = *(int **)(param_1 + 0x18);
      }
    }
    if (((ulong)piVar17 & (long)piVar17 - 1U) == 0) {
      piVar19 = (int *)((long)piVar17 - 1U & (ulong)piVar18);
    }
    else {
      piVar19 = piVar18;
      if (piVar17 <= piVar18) {
        uVar9 = 0;
        if (piVar17 != (int *)0x0) {
          uVar9 = (ulong)piVar18 / (ulong)piVar17;
        }
        piVar19 = (int *)((long)piVar18 - uVar9 * (long)piVar17);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x10);
  plVar12 = *(long **)(lVar8 + (long)piVar19 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_1 + 0x20);
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(lVar8 + (long)piVar19 * 8) = plVar12;
    if (*plVar16 == 0) goto LAB_10952e8b0;
    piVar19 = *(int **)(*plVar16 + 8);
    if (((ulong)piVar17 & (long)piVar17 - 1U) == 0) {
      piVar19 = (int *)((ulong)piVar19 & (long)piVar17 - 1U);
    }
    else if (piVar17 <= piVar19) {
      uVar9 = 0;
      if (piVar17 != (int *)0x0) {
        uVar9 = (ulong)piVar19 / (ulong)piVar17;
      }
      piVar19 = (int *)((long)piVar19 - uVar9 * (long)piVar17);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x10) + (long)piVar19 * 8);
  }
  else {
    *plVar16 = *plVar12;
  }
  *plVar12 = (long)plVar16;
LAB_10952e8b0:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
LAB_10952e8bc:
  *(float *)((long)plVar16 + 0x14) = fVar22 / (float)iVar2;
  *(float *)(plVar16 + 3) = fVar23 / (float)iVar1;
  return;
}



/* Entry: 10952e940; end: 10952eb33;  */

void FUN_10952e940(long param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  int iStack_34;
  
  piVar14 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  if (piVar14 != piVar1) {
    do {
      iStack_34 = *piVar14;
      func_0x000109536334(**(undefined8 **)(param_1 + 8),&iStack_34);
      uVar6 = *(ulong *)(param_1 + 0x18);
      if (uVar6 != 0) {
        uVar5 = (ulong)*piVar14;
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar7 & uVar5;
        }
        else {
          uVar9 = uVar5;
          if (uVar6 <= uVar5) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar5 / uVar6;
            }
            uVar9 = uVar5 - uVar9 * uVar6;
          }
        }
        lVar8 = *(long *)(param_1 + 0x10);
        puVar10 = *(undefined8 **)(lVar8 + uVar9 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar10, plVar4 != (long *)0x0)) {
LAB_10952e9c8:
          uVar11 = plVar4[1];
          if (uVar11 == uVar5) {
            if ((int)plVar4[2] != *piVar14) goto LAB_10952ea0c;
            if ((uVar6 & uVar7) == 0) {
              uVar5 = uVar7 & uVar5;
            }
            else if (uVar6 <= uVar5) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar5 / uVar6;
              }
              uVar5 = uVar5 - uVar9 * uVar6;
            }
            lVar12 = *plVar4;
            plVar3 = *(long **)(lVar8 + uVar5 * 8);
            do {
              plVar13 = plVar3;
              plVar3 = (long *)*plVar13;
            } while ((long *)*plVar13 != plVar4);
            if (plVar13 == (long *)(param_1 + 0x20)) {
LAB_10952ea84:
              if (lVar12 == 0) {
LAB_10952eab8:
                *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
                lVar12 = *plVar4;
                goto LAB_10952eac0;
              }
              uVar9 = *(ulong *)(lVar12 + 8);
              if ((uVar6 & uVar7) == 0) {
                uVar11 = uVar9 & uVar7;
              }
              else {
                uVar11 = uVar9;
                if (uVar6 <= uVar9) {
                  uVar11 = 0;
                  if (uVar6 != 0) {
                    uVar11 = uVar9 / uVar6;
                  }
                  uVar11 = uVar9 - uVar11 * uVar6;
                }
              }
              if (uVar11 != uVar5) goto LAB_10952eab8;
LAB_10952eac8:
              if ((uVar6 & uVar7) == 0) {
                uVar9 = uVar9 & uVar7;
              }
              else if (uVar6 <= uVar9) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar7 * uVar6;
              }
              if (uVar9 != uVar5) {
                *(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8) = plVar13;
                lVar12 = *plVar4;
              }
            }
            else {
              uVar9 = plVar13[1];
              if ((uVar6 & uVar7) == 0) {
                uVar9 = uVar9 & uVar7;
              }
              else if (uVar6 <= uVar9) {
                uVar11 = 0;
                if (uVar6 != 0) {
                  uVar11 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar11 * uVar6;
              }
              if (uVar9 != uVar5) goto LAB_10952ea84;
LAB_10952eac0:
              if (lVar12 != 0) {
                uVar9 = *(ulong *)(lVar12 + 8);
                goto LAB_10952eac8;
              }
            }
            *plVar13 = lVar12;
            *plVar4 = 0;
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
            __ZdlPv();
          }
          else {
            if ((uVar6 & uVar7) == 0) {
              uVar11 = uVar11 & uVar7;
            }
            else if (uVar6 <= uVar11) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar2 * uVar6;
            }
            if (uVar11 == uVar9) goto LAB_10952ea0c;
          }
        }
      }
LAB_10952eb14:
      piVar14 = piVar14 + 1;
    } while (piVar14 != piVar1);
  }
  return;
LAB_10952ea0c:
  plVar4 = (long *)*plVar4;
  if (plVar4 == (long *)0x0) goto LAB_10952eb14;
  goto LAB_10952e9c8;
}



/* Entry: 10952eb34; end: 10952f02f;  */

void FUN_10952eb34(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined4 uStack_208;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  uint uStack_fc;
  undefined1 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  
  FUN_109535274(*(undefined8 *)(param_2 + 8));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 != 0) {
    if (0xaaaaaaaaaaaaaa < uVar4) {
      FUN_109503584();
LAB_10952efd0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10952efd4);
      (*pcVar3)();
    }
    plVar8 = param_1;
    plStack_250 = param_1;
    FUN_109503598();
    lVar7 = (long)plVar8 + (*param_1 - param_1[1]);
    plStack_270 = plVar8;
    plStack_268 = plVar8;
    plStack_260 = plVar8;
    plStack_258 = plVar8 + uVar4 * 0x30;
    FUN_1095035dc(param_1,*param_1,param_1[1],lVar7);
    plStack_270 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar8;
    plStack_258 = (long *)param_1[2];
    param_1[2] = (long)(plVar8 + uVar4 * 0x30);
    plStack_268 = plStack_270;
    plStack_260 = plStack_270;
    FUN_109503678(&plStack_270);
  }
  plVar8 = *(long **)(param_2 + 0x20);
  if (plVar8 != (long *)0x0) {
    auVar14 = NEON_fmov(0xbfe0000000000000,8);
    do {
      FUN_109535bc8(*(undefined8 *)(param_2 + 8),(int)plVar8[2],auStack_d8,&uStack_dc,&fStack_e0,
                    &fStack_e4,auStack_e8,auStack_ec,&iStack_f0);
      if (0 < iStack_f0) {
        plStack_258 = (long *)0x0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        uStack_230 = 0;
        uStack_238 = 0;
        uStack_220 = 0;
        uStack_228 = 0;
        uStack_240 = 0x3f800000;
        uStack_218 = 0x3f800000;
        uStack_210 = 0x3f000000;
        uStack_20c = 1;
        uStack_208 = 0x42ff0000;
        uStack_1fc = 0;
        uStack_204 = 0;
        uStack_1ec = 0;
        uStack_1f4 = 0;
        uStack_1dc = 0;
        uStack_1e4 = 0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0x42ff0000;
        uStack_19c = 0;
        uStack_1a4 = 0;
        uStack_18c = 0;
        uStack_194 = 0;
        uStack_17c = 0;
        uStack_184 = 0;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_144 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_120 = 0x3f800000;
        fStack_118 = (float)((uint)fStack_118 & 0xffffff00);
        uStack_fc = uStack_fc & 0xffffff00;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uVar13 = NEON_scvtf(*(undefined8 *)(param_3 + 8),4);
        auVar15._0_8_ = (double)(fStack_e4 / (float)uVar13);
        auVar15._8_8_ = (double)(fStack_e0 / (float)((ulong)uVar13 >> 0x20));
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        plVar16 = *(long **)((long)plVar8 + 0x14);
        plStack_270 = (long *)CONCAT44((float)(auVar15._8_8_ +
                                              auVar14._8_8_ *
                                              (double)(float)((ulong)plVar16 >> 0x20)),
                                       (float)(auVar15._0_8_ +
                                              auVar14._0_8_ * (double)SUB84(plVar16,0)));
        uStack_104 = uStack_dc;
        uStack_100 = 1;
        plStack_268 = plVar16;
        lStack_1c8 = (long)&uStack_204 + 4;
        puStack_1c0 = &uStack_1b8;
        lStack_168 = (long)&uStack_1a4 + 4;
        puStack_160 = &uStack_158;
        fVar9 = (float)___sincosf_stret();
        fVar22 = fVar24;
        fVar10 = (float)___sincosf_stret();
        fVar20 = fVar22;
        fVar11 = (float)___sincosf_stret();
        fVar17 = fVar22 * fVar20;
        fVar24 = SUB84(plVar16,0);
        fVar19 = fVar9 * fVar10 * fVar20 + fVar11 * fVar24;
        fVar23 = -(fVar10 * fVar24) * fVar20 + fVar11 * fVar9;
        fVar18 = -(fVar11 * fVar9 * fVar10) + fVar20 * fVar24;
        fVar12 = -(fVar11 * -(fVar10 * fVar24)) + fVar20 * fVar9;
        fVar21 = fVar24 * fVar22;
        fVar25 = (fVar17 - fVar18) - fVar21;
        fVar26 = (fVar18 - fVar17) - fVar21;
        fVar27 = (fVar21 - fVar17) - fVar18;
        fVar21 = fVar21 + fVar17 + fVar18;
        fVar20 = fVar25;
        if (fVar25 <= fVar21) {
          fVar20 = fVar21;
        }
        bVar1 = 2;
        if (fVar26 <= fVar20) {
          fVar26 = fVar20;
          bVar1 = fVar21 < fVar25;
        }
        bVar2 = 3;
        if (fVar27 <= fVar26) {
          fVar27 = fVar26;
          bVar2 = bVar1;
        }
        fVar17 = SQRT(fVar27 + 1.0) * 0.5;
        fVar27 = 0.25 / fVar17;
        fVar26 = (fVar10 - fVar23) * fVar27;
        fVar21 = (-(fVar11 * fVar22) + fVar19) * fVar27;
        fVar18 = (-(fVar9 * fVar22) + fVar12) * fVar27;
        fVar20 = (fVar19 - -(fVar11 * fVar22)) * fVar27;
        fVar10 = (fVar10 + fVar23) * fVar27;
        fStack_10c = fVar26;
        fStack_110 = fVar18;
        fStack_114 = fVar17;
        fStack_118 = fVar21;
        if (bVar2 != 2) {
          fStack_10c = fVar20;
          fStack_110 = fVar17;
          fStack_114 = fVar18;
          fStack_118 = fVar10;
        }
        fVar27 = (fVar12 - -(fVar9 * fVar22)) * fVar27;
        fVar22 = fVar17;
        if (bVar2 != 0) {
          fVar22 = fVar27;
          fVar20 = fVar10;
          fVar26 = fVar21;
          fVar27 = fVar17;
        }
        if (bVar2 < 2) {
          fStack_10c = fVar22;
          fStack_110 = fVar20;
          fStack_114 = fVar26;
          fStack_118 = fVar27;
        }
        uStack_108 = 1;
        uStack_fc = *(uint *)(plVar8 + 2);
        uStack_f8 = 1;
        uVar4 = param_1[1];
        if (uVar4 < (ulong)param_1[2]) {
          FUN_1095030ec(uVar4,&plStack_270);
          plVar16 = (long *)(uVar4 + 0x180);
        }
        else {
          lVar7 = uVar4 - *param_1;
          uVar4 = (lVar7 >> 7) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaa < uVar4) {
            FUN_109503584();
            goto LAB_10952efd0;
          }
          lVar5 = param_1[2] - *param_1 >> 7;
          uVar6 = lVar5 * 0x5555555555555556;
          if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
            uVar6 = uVar4;
          }
          if (0x55555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
            uVar6 = 0xaaaaaaaaaaaaaa;
          }
          plStack_b0 = param_1;
          if (uVar6 == 0) {
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = param_1;
            FUN_109503598();
          }
          lVar7 = (long)plVar16 + lVar7;
          plStack_b8 = plVar16 + uVar6 * 0x30;
          plStack_d0 = plVar16;
          plStack_c8 = (long *)lVar7;
          plStack_c0 = (long *)lVar7;
          FUN_1095030ec(lVar7,&plStack_270);
          plStack_c0 = (long *)(lVar7 + 0x180);
          lVar7 = lVar7 + (*param_1 - param_1[1]);
          FUN_1095035dc(param_1,*param_1,param_1[1],lVar7);
          plVar16 = plStack_c0;
          plStack_d0 = (long *)*param_1;
          *param_1 = lVar7;
          lVar7 = param_1[2];
          param_1[2] = (long)plStack_b8;
          param_1[1] = (long)plStack_c0;
          plStack_c8 = plStack_d0;
          plStack_c0 = plStack_d0;
          plStack_b8 = (long *)lVar7;
          FUN_109503678(&plStack_d0);
        }
        param_1[1] = (long)plVar16;
        FUN_1095032d0(&plStack_270);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}



/* Entry: 10952f030; end: 10952f033;  */

long FUN_10952f030(long param_1)

{
  func_0x00010952f0dc(param_1 + 0x38);
  func_0x00010952f094(param_1 + 0x10);
  FUN_10952f134(param_1 + 8,0);
  return param_1;
}



/* Entry: 10952f034; end: 10952f047;  */

void FUN_10952f034(void)

{
  FUN_10952f058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952f048; end: 10952f057;  */

undefined8 FUN_10952f048(void)

{
  return 2;
}



/* Entry: 10952f058; end: 10952f133;  */

long FUN_10952f058(long param_1)

{
  func_0x00010952f0dc(param_1 + 0x38);
  func_0x00010952f094(param_1 + 0x10);
  FUN_10952f134(param_1 + 8,0);
  return param_1;
}



/* Entry: 10952f134; end: 10952f15b;  */

void FUN_10952f134(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109534d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10952f15c; end: 10952f1e7;  */

undefined8 FUN_10952f15c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829f48 & 1) == 0) {
    iVar1 = 0x13829f48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x28;
      __Znwm();
      FUN_10952f1e8();
      uRam0000000113829f40 = uVar2;
      ___cxa_guard_release(0x113829f48);
    }
  }
  return uRam0000000113829f40;
}



/* Entry: 10952f1e8; end: 10952f5b7;  */

undefined8 * FUN_10952f1e8(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f5715a3);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb5c0;
  pcStack_40 = FUN_10952f5b8;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952f284:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952f284;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5732a6);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb6c0;
  pcStack_40 = (code *)0x10952f618;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952f308:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952f308;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5732b8);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb7b0;
  pcStack_40 = (code *)0x10952f678;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952f38c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952f38c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5732cb);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb8a0;
  pcStack_40 = (code *)0x10952f6e8;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952f410:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952f410;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5732dd);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb990;
  pcStack_40 = (code *)0x10952f748;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952f494:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952f494;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f5732f4);
  puVar2 = param_1;
  FUN_10952f928(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afba80;
  pcStack_40 = (code *)0x10952f7b4;
  pppuStack_30 = &ppuStack_48;
  FUN_10952fe70(&ppuStack_48,puVar2 + 5);
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_10952f524;
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar3))();
LAB_10952f524:
  if (cStack_49 < '\0') {
    pppuVar1 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_10952f86c(param_1);
  __Unwind_Resume(pppuVar1);
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110afb570;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 9) = 0x3f800000;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  extraout_x8[1] = puVar2;
  puVar2 = puVar2 + 3;
  *puVar2 = &PTR_FUN_110afb508;
  *extraout_x8 = puVar2;
  return puVar2;
}



/* Entry: 10952f5b8; end: 10952f86b;  */

void FUN_10952f5b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110afb570;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110afb508;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10952f86c; end: 10952f8c7;  */

long * FUN_10952f86c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10952f8c8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10952f8c8; end: 10952f927;  */

void FUN_10952f8c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10952f904;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10952f904:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10952f928; end: 10952fd13;  */

long * FUN_10952f928(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar7 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar7) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar7;
  lVar3 = *param_3;
  plVar5[3] = param_3[1];
  plVar5[2] = lVar3;
  plVar5[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar5[8] = 0;
  if ((plVar13 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar13 < (float)(param_1[3] + 1))) {
    uVar14 = 1;
    if ((long *)0x2 < plVar13) {
      uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
    plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar6 <= plVar13) {
      plVar6 = plVar13;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar6) {
LAB_10952fab0:
      if ((ulong)plVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10952fd00);
        (*pcVar2)();
      }
      lVar3 = (long)plVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar13 = (long *)0x0;
      param_1[1] = (long)plVar6;
      do {
        *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar6 != plVar13);
      plVar8 = (long *)param_1[2];
      plVar13 = plVar6;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        uVar14 = (long)plVar6 - 1;
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar14);
        }
        else if (plVar6 <= plVar9) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar6;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar6 & uVar14) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar14);
          }
          else if (plVar6 <= plVar12) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar12 / (ulong)plVar6;
            }
            plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar8;
              plVar9 = plVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar6 < plVar13) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar6 <= plVar8) {
        plVar6 = plVar8;
      }
      if (plVar6 < plVar13) {
        if (plVar6 != (long *)0x0) goto LAB_10952fab0;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar5 == 0) goto LAB_10952fc90;
    plVar7 = *(long **)(*plVar5 + 8);
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
    }
    else if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar5 = *plVar7;
  }
  *plVar7 = (long)plVar5;
LAB_10952fc90:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10952fd14; end: 10952fd5b;  */

void FUN_10952fd14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10952f8c8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10952fd5c; end: 10952fd6b;  */

void FUN_10952fd5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10952fd6c; end: 10952fd8b;  */

void FUN_10952fd6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb570;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10952fd8c; end: 10952fd9f;  */

long FUN_10952fd8c(long param_1)

{
  func_0x00010952f0dc(param_1 + 0x50);
  func_0x00010952f094(param_1 + 0x28);
  FUN_10952f134(param_1 + 0x20,0);
  return param_1 + 0x18;
}



/* Entry: 10952fda0; end: 10952fdd3;  */

void FUN_10952fda0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb5c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10952fdd4; end: 10952fdef;  */

void FUN_10952fdd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb5c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10952fdf0; end: 10952fe63;  */

void FUN_10952fdf0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10952fe64; end: 10952fe6f;  */

undefined ** FUN_10952fe64(void)

{
  return &PTR_DAT_110afb640;
}



/* Entry: 10952fe70; end: 10952ffdb;  */

void FUN_10952fe70(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = (long)&PTR_FUN_110afb670;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10952ffdc; end: 10952ffeb;  */

void FUN_10952ffdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb670;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10952ffec; end: 10953000b;  */

void FUN_10952ffec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb670;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10953000c; end: 109530023;  */

void FUN_10953000c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109530014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109530024; end: 109530057;  */

void FUN_109530024(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb6c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109530058; end: 109530073;  */

void FUN_109530058(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb6c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109530074; end: 1095300e7;  */

void FUN_109530074(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 1095300e8; end: 109530103;  */

undefined ** FUN_1095300e8(void)

{
  return &PTR_DAT_110afb730;
}



/* Entry: 109530104; end: 109530123;  */

void FUN_109530104(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afb760;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109530124; end: 109530153;  */

undefined8 * FUN_109530124(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 0x40);
  FUN_10950a500(param_1 + 0x30);
  FUN_10938cda4(param_1 + 0x28,0);
  FUN_10938cda4(param_1 + 0x20,0);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109530154; end: 10953015f;  */

void FUN_109530154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109530160; end: 109530193;  */

void FUN_109530160(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb7b0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109530194; end: 1095301af;  */

void FUN_109530194(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb7b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095301b0; end: 109530223;  */

void FUN_1095301b0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 109530224; end: 10953023f;  */

undefined ** FUN_109530224(void)

{
  return &PTR_DAT_110afb820;
}



/* Entry: 109530240; end: 10953025f;  */

void FUN_109530240(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afb850;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109530260; end: 109530273;  */

undefined8 * FUN_109530260(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 0x40);
  FUN_10950a500(param_1 + 0x30);
  FUN_10938cda4(param_1 + 0x28,0);
  FUN_10938cda4(param_1 + 0x20,0);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109530274; end: 1095302a7;  */

void FUN_109530274(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb8a0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1095302a8; end: 1095302c3;  */

void FUN_1095302a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb8a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095302c4; end: 109530337;  */

void FUN_1095302c4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 109530338; end: 109530353;  */

undefined ** FUN_109530338(void)

{
  return &PTR_DAT_110afb910;
}



/* Entry: 109530354; end: 109530373;  */

void FUN_109530354(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afb940;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109530374; end: 109530387;  */

undefined8 * FUN_109530374(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 0x40);
  FUN_10950a500(param_1 + 0x30);
  FUN_10938cda4(param_1 + 0x28,0);
  FUN_10938cda4(param_1 + 0x20,0);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 109530388; end: 1095303bb;  */

void FUN_109530388(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb990;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1095303bc; end: 1095303d7;  */

void FUN_1095303bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb990;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095303d8; end: 10953044b;  */

void FUN_1095303d8(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10953044c; end: 109530467;  */

undefined ** FUN_10953044c(void)

{
  return &PTR_DAT_110afba00;
}



/* Entry: 109530468; end: 109530487;  */

void FUN_109530468(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afba30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109530488; end: 10953049f;  */

void FUN_109530488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109530490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1095304a0; end: 1095304d3;  */

void FUN_1095304a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afba80;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1095304d4; end: 1095304ef;  */

void FUN_1095304d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afba80;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095304f0; end: 109530563;  */

void FUN_1095304f0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 109530564; end: 10953056f;  */

undefined ** FUN_109530564(void)

{
  return &PTR_DAT_110afbaf0;
}



/* Entry: 109530570; end: 109530653;  */

long FUN_109530570(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
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
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109530654; end: 1095306df;  */

long * FUN_109530654(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar1 = 0x118;
  __Znwm();
  FUN_109530a14();
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    FUN_109531184(param_1);
  }
  return param_1;
}



/* Entry: 1095306e0; end: 1095307ab;  */

void FUN_1095306e0(long param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
                  undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  *(int *)(param_1 + 0xe4) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = param_4;
  iVar1 = param_3;
  if (param_5 != 0) {
    iVar1 = param_5;
  }
  *(int *)(param_1 + 0xec) = iVar1;
  uVar3 = *param_6;
  *(undefined8 *)(param_1 + 200) = param_6[1];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  if (*(int *)(param_6 + 1) == 0 && *(int *)((long)param_6 + 0xc) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(int *)(param_1 + 200) = param_3;
    *(undefined4 *)(param_1 + 0xcc) = param_4;
  }
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uStack_28 = 0;
  FUN_10939d61c(param_1 + 0xf8,puVar2);
  FUN_10939d61c(&uStack_28,0);
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uStack_28 = 0;
  FUN_10939d61c(param_1 + 0xf0,puVar2);
  FUN_10939d61c(&uStack_28,0);
  FUN_109530b28(param_1,param_2,*(undefined8 *)(param_1 + 0xf8));
  FUN_109530b28(param_1,param_2,*(undefined8 *)(param_1 + 0xf0));
  return;
}



/* Entry: 1095307ac; end: 109530a13;  */

void FUN_1095307ac(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  FUN_109530b28(param_1,param_2,*(undefined8 *)(param_1 + 0x3c));
  lVar12 = 0xf8;
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar12 = 0xf0;
  }
  lVar8 = 0xf0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar8 = 0xf8;
  }
  FUN_10938e9c8(**(undefined8 **)(param_1 + 0x40),*(undefined8 *)((long)param_1 + lVar8),
                *(undefined8 *)((long)param_1 + lVar12));
  lVar12 = **(long **)(param_1 + 0x40);
  puVar1 = (undefined4 *)(lVar12 + 0x10);
  if (puVar1 != param_1) {
    if (*(long *)(lVar12 + 0x48) != 0) {
      piVar2 = (int *)(*(long *)(lVar12 + 0x48) + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar2 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    if ((int)param_1[1] < 1) {
      *param_1 = *puVar1;
LAB_10953089c:
      if (2 < *(int *)(lVar12 + 0x14)) goto LAB_1095308d0;
      param_1[1] = *(int *)(lVar12 + 0x14);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar12 + 0x18);
      puVar9 = *(undefined8 **)(lVar12 + 0x58);
      puVar11 = *(undefined8 **)(param_1 + 0x12);
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
    }
    else {
      lVar8 = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      do {
        *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_1[1]);
      *param_1 = *puVar1;
      if ((int)param_1[1] < 3) goto LAB_10953089c;
LAB_1095308d0:
      func_0x000109a84868(param_1,puVar1);
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(param_1 + 4) = uVar7;
    uVar7 = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(param_1 + 8) = uVar7;
    uVar7 = *(undefined8 *)(lVar12 + 0x40);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(lVar12 + 0x48);
    *(undefined8 *)(param_1 + 0xc) = uVar7;
    lVar12 = **(long **)(param_1 + 0x40);
  }
  puVar1 = (undefined4 *)(lVar12 + 0x70);
  puVar3 = param_1 + 0x18;
  if (puVar3 == puVar1) goto LAB_1095309f8;
  if (*(long *)(lVar12 + 0xa8) != 0) {
    piVar2 = (int *)(*(long *)(lVar12 + 0xa8) + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(long *)(param_1 + 0x26) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x26) + 0x14);
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
      func_0x000109a848d4(puVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((int)param_1[0x19] < 1) {
    *puVar3 = *puVar1;
LAB_1095309a0:
    if (2 < *(int *)(lVar12 + 0x74)) goto LAB_1095309d4;
    param_1[0x19] = *(int *)(lVar12 + 0x74);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(lVar12 + 0x78);
    puVar9 = *(undefined8 **)(lVar12 + 0xb8);
    puVar11 = *(undefined8 **)(param_1 + 0x2a);
    *puVar11 = *puVar9;
    puVar11[1] = puVar9[1];
  }
  else {
    lVar8 = 0;
    lVar10 = *(long *)(param_1 + 0x28);
    do {
      *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x19]);
    *puVar3 = *puVar1;
    if ((int)param_1[0x19] < 3) goto LAB_1095309a0;
LAB_1095309d4:
    func_0x000109a84868(puVar3,puVar1);
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x80);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(lVar12 + 0x88);
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  uVar7 = *(undefined8 *)(lVar12 + 0x90);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(lVar12 + 0x98);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar7 = *(undefined8 *)(lVar12 + 0xa0);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(lVar12 + 0xa8);
  *(undefined8 *)(param_1 + 0x24) = uVar7;
LAB_1095309f8:
  auVar13 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x3c),*(undefined1 (*) [16])(param_1 + 0x3c),8
                     ,1);
  *(long *)(param_1 + 0x3e) = auVar13._8_8_;
  *(long *)(param_1 + 0x3c) = auVar13._0_8_;
  return;
}


