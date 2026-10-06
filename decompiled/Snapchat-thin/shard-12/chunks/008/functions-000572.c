/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a2c428; end: 109a2d6c7;  */

void FUN_109a2c428(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 **ppuVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  code *pcVar29;
  long lVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  uint *puVar34;
  byte *pbVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  byte *pbVar41;
  code *pcVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  double dVar46;
  uint uStack_794;
  ulong uStack_750;
  ulong uStack_748;
  undefined8 uStack_720;
  undefined8 uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  uint *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined4 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  long lStack_600;
  long lStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  uint *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  uint *puStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  uint *puStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 *puStack_4f8;
  undefined8 uStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  byte abStack_4d8 [1032];
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1 & 0x1f0000;
  uVar7 = *param_2;
  uVar8 = *param_3;
  if (uVar2 == 0x10000) {
    puVar25 = *(ulong **)(param_1 + 2);
    puStack_520 = (uint *)((ulong)&uStack_560 | 8);
    uStack_558 = puVar25[1];
    uStack_560 = *puVar25;
    uStack_548 = puVar25[3];
    uStack_550 = puVar25[2];
    uStack_538 = puVar25[5];
    uStack_540 = puVar25[4];
    uStack_528 = puVar25[7];
    uStack_530 = puVar25[6];
    puStack_518 = &uStack_510;
    uStack_508 = 0;
    uStack_510 = 0;
    if (puVar25[7] != 0) {
      piVar1 = (int *)(puVar25[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar25 + 4) < 3) {
      uStack_510 = *(undefined8 *)puVar25[9];
      uStack_508 = ((undefined8 *)puVar25[9])[1];
    }
    else {
      uStack_560 = uStack_560 & 0xffffffff;
      func_0x000109a84868(&uStack_560);
    }
  }
  else {
    FUN_109a8a180(&uStack_560,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar25 = *(ulong **)(param_2 + 2);
    puStack_580 = (uint *)((ulong)&uStack_5c0 | 8);
    uStack_5b8 = puVar25[1];
    uStack_5c0 = *puVar25;
    uStack_5a8 = puVar25[3];
    uStack_5b0 = puVar25[2];
    uStack_598 = puVar25[5];
    uStack_5a0 = puVar25[4];
    uStack_588 = puVar25[7];
    uStack_590 = puVar25[6];
    puStack_578 = &uStack_570;
    uStack_568 = 0;
    uStack_570 = 0;
    if (puVar25[7] != 0) {
      piVar1 = (int *)(puVar25[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar25 + 4) < 3) {
      uStack_570 = *(undefined8 *)puVar25[9];
      uStack_568 = ((undefined8 *)puVar25[9])[1];
    }
    else {
      uStack_5c0 = uStack_5c0 & 0xffffffff;
      func_0x000109a84868(&uStack_5c0);
    }
  }
  else {
    FUN_109a8a180(&uStack_5c0,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar26 = *(undefined8 **)(param_3 + 2);
    puStack_5e0 = (uint *)((ulong)&uStack_620 | 8);
    uStack_618 = puVar26[1];
    uStack_620 = (undefined4 *)*puVar26;
    uStack_608 = puVar26[3];
    uStack_610 = puVar26[2];
    lStack_5f8 = puVar26[5];
    lStack_600 = puVar26[4];
    uStack_5e8 = puVar26[7];
    uStack_5f0 = puVar26[6];
    puStack_5d8 = &uStack_5d0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    if (puVar26[7] != 0) {
      piVar1 = (int *)(puVar26[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar26 + 4) < 3) {
      uStack_5d0 = *(undefined8 *)puVar26[9];
      uStack_5c8 = ((undefined8 *)puVar26[9])[1];
    }
    else {
      uStack_620 = (undefined4 *)((ulong)uStack_620 & 0xffffffff);
      func_0x000109a84868(&uStack_620);
    }
  }
  else {
    FUN_109a8a180(&uStack_620,param_3,0xffffffff);
  }
  uVar3 = (uint)uStack_560;
  if ((uVar2 == 0x20000) || ((uVar7 & 0x1f0000) != 0x20000)) {
    uVar9 = puStack_520[-1];
    uVar36 = (ulong)uVar9;
    if (uVar9 != puStack_580[-1]) goto LAB_109a2c6d8;
    if (uVar9 == 2) {
      if ((*puStack_520 != *puStack_580) || (puStack_520[1] != puStack_580[1])) goto LAB_109a2c6d8;
    }
    else {
      puVar32 = puStack_520;
      puVar34 = puStack_580;
      if (0 < (int)uVar9) {
        do {
          if (*puVar32 != *puVar34) goto LAB_109a2c6d8;
          uVar36 = uVar36 - 1;
          puVar32 = puVar32 + 1;
          puVar34 = puVar34 + 1;
        } while (uVar36 != 0);
      }
    }
    if ((((uint)uStack_5c0 ^ (uint)uStack_560) & 0xfff) != 0) goto LAB_109a2c6d8;
    bVar12 = false;
    goto LAB_109a2c77c;
  }
LAB_109a2c6d8:
  if ((uStack_5c0._4_4_ < 3) && (((uint)uStack_5c0 >> 0xe & 1) != 0)) {
    uVar9 = *puStack_580;
    uVar6 = puStack_580[1];
    if ((uVar6 == 1 || uVar9 == 1) && ((uVar2 != 0x20000 || ((uVar7 & 0x1f0000) == 0x20000)))) {
      uVar14 = (uint)uStack_560 >> 3 & 0x1ff;
      uVar7 = uVar14 + 1;
      bVar12 = true;
      if ((uVar6 != 1 || uVar9 != uVar7 && uVar9 != 1) && (uVar9 != 1 || uVar6 != uVar7)) {
        if ((((uVar6 != 1) || (uVar9 != 4)) || (3 < uVar14)) || (((uint)uStack_5c0 & 0xfff) != 6))
        goto LAB_109a2d328;
        bVar12 = true;
      }
LAB_109a2c77c:
      if ((uVar2 != 0x20000) && ((uVar8 & 0x1f0000) == 0x20000)) {
LAB_109a2c808:
        if ((uStack_620._4_4_ < 3) && (((uint)uStack_620 >> 0xe & 1) != 0)) {
          uVar7 = *puStack_5e0;
          uVar9 = puStack_5e0[1];
          if ((uVar9 == 1 || uVar7 == 1) && ((uVar2 != 0x20000 || ((uVar8 & 0x1f0000) == 0x20000))))
          {
            uStack_794 = (uint)uStack_560 >> 3 & 0x1ff;
            uVar2 = uStack_794 + 1;
            if (((uVar9 == 1 && (uVar7 == uVar2 || uVar7 == 1)) || (uVar7 == 1 && uVar9 == uVar2))
               || ((((uVar9 == 1 && (uVar7 == 4)) && (uStack_794 < 4)) &&
                   (((uint)uStack_620 & 0xfff) == 6)))) {
              if (!bVar12) goto LAB_109a2d420;
              bVar17 = true;
              lVar40 = 2;
              goto LAB_109a2c8b4;
            }
          }
        }
        puVar24 = (undefined4 *)0x60;
        func_0x000107c2ae8c();
        *puVar24 = 1;
        pbStack_4e8 = (byte *)(puVar24 + 1);
        pbStack_4e0 = (byte *)0x59;
        *(undefined8 *)(puVar24 + 0xb) = 0x6d61732065687420;
        *(undefined8 *)(puVar24 + 9) = 0x666f207961727261;
        *(undefined8 *)(puVar24 + 0xf) = 0x20656d617320646e;
        *(undefined8 *)(puVar24 + 0xd) = 0x6120657a69732065;
        *(undefined8 *)(puVar24 + 0x13) = 0x726f6e202c637273;
        *(undefined8 *)(puVar24 + 0x11) = 0x2073612065707974;
        *(undefined8 *)((long)puVar24 + 0x55) = 0x72616c6163732061;
        *(undefined8 *)((long)puVar24 + 0x4d) = 0x20726f6e202c6372;
        *(undefined8 *)(puVar24 + 3) = 0x72616e756f622072;
        *(undefined8 *)(puVar24 + 1) = 0x6570707520656854;
        *(undefined1 *)((long)puVar24 + 0x5d) = 0;
        *(undefined8 *)(puVar24 + 7) = 0x206e612072656874;
        *(undefined8 *)(puVar24 + 5) = 0x69656e2073692079;
        FUN_109ac3188(0xffffff2f,&pbStack_4e8,&UNK_10f594fbb,&UNK_10f594df2,0x77b);
        goto LAB_109a2d54c;
      }
      uVar7 = puStack_520[-1];
      uVar36 = (ulong)uVar7;
      if (uVar7 != puStack_5e0[-1]) goto LAB_109a2c808;
      if (uVar7 == 2) {
        if ((*puStack_520 != *puStack_5e0) || (puStack_520[1] != puStack_5e0[1]))
        goto LAB_109a2c808;
      }
      else {
        puVar32 = puStack_5e0;
        puVar34 = puStack_520;
        if (0 < (int)uVar7) {
          do {
            if (*puVar34 != *puVar32) goto LAB_109a2c808;
            uVar36 = uVar36 - 1;
            puVar32 = puVar32 + 1;
            puVar34 = puVar34 + 1;
          } while (uVar36 != 0);
        }
      }
      if ((((uint)uStack_620 ^ (uint)uStack_560) & 0xfff) != 0) goto LAB_109a2c808;
      if (bVar12) {
LAB_109a2d420:
        puVar24 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar24 = 1;
        pbStack_4e8 = (byte *)(puVar24 + 1);
        pbStack_4e0 = (byte *)0x14;
        *(undefined1 *)(puVar24 + 6) = 0;
        puVar24[5] = 0x72616c61;
        *(undefined8 *)(puVar24 + 3) = 0x63536275203d3d20;
        *(undefined8 *)(puVar24 + 1) = 0x72616c616353626c;
        FUN_109ac3188(0xffffff29,&pbStack_4e8,&UNK_10f594fbb,&UNK_10f594df2,0x77f);
        goto LAB_109a2d54c;
      }
      lVar40 = 0;
      bVar17 = false;
      uStack_794 = (uint)uStack_560 >> 3 & 0x1ff;
      uVar2 = uStack_794 + 1;
LAB_109a2c8b4:
      uVar36 = puStack_518[(uStack_560 >> 0x20) - 1];
      FUN_109a8727c(param_4,uStack_560 >> 0x20,puStack_520,0,0xffffffff,0,0);
      if ((*param_4 & 0x1f0000) == 0x10000) {
        puVar25 = *(ulong **)(param_4 + 2);
        uStack_640 = (ulong)&uStack_680 | 8;
        uStack_678 = puVar25[1];
        uStack_680 = *puVar25;
        uStack_668 = puVar25[3];
        uStack_670 = puVar25[2];
        uStack_658 = puVar25[5];
        uStack_660 = puVar25[4];
        uStack_648 = puVar25[7];
        uStack_650 = puVar25[6];
        puStack_638 = &uStack_630;
        uStack_630 = 0;
        uStack_628 = 0;
        if (puVar25[7] != 0) {
          piVar1 = (int *)(puVar25[7] + 0x14);
          do {
            cVar11 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar20) {
              *piVar1 = *piVar1 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        if (*(int *)((long)puVar25 + 4) < 3) {
          uStack_630 = *(undefined8 *)puVar25[9];
          uStack_628 = ((undefined8 *)puVar25[9])[1];
        }
        else {
          uStack_680 = uStack_680 & 0xffffffff;
          func_0x000109a84868(&uStack_680);
        }
      }
      else {
        FUN_109a8a180(&uStack_680,param_4,0xffffffff);
      }
      uVar3 = uVar3 & 7;
      pcVar29 = (code *)(&PTR_FUN_110b215a0)[uVar3];
      puStack_b0 = &uStack_560;
      puStack_a8 = &uStack_680;
      uStack_78 = 0;
      puStack_a0 = &uStack_5c0;
      puStack_98 = &uStack_620;
      uStack_90 = 0;
      ppuVar4 = &puStack_88;
      if (!(bool)(bVar12 & bVar17)) {
        ppuVar4 = &puStack_b0;
      }
      uStack_688 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_6c0 = 0;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      uStack_698 = 0;
      uStack_690 = 0;
      puStack_88 = puStack_b0;
      puStack_80 = puStack_a8;
      FUN_109a9b368(&uStack_6c0,ppuVar4,0,&uStack_d0,0xffffffff);
      uVar19 = uStack_698;
      uVar15 = 0;
      if (uVar36 != 0) {
        uVar15 = (uVar36 + 0x3ff) / uVar36;
      }
      if (uStack_698 <= uVar15) {
        uVar15 = uStack_698;
      }
      pbVar41 = (byte *)((ulong)(uVar2 * 8 + 0x80) + uVar15 * (uVar36 * lVar40 + (ulong)uVar2));
      pbStack_4e8 = abStack_4d8;
      pbVar23 = abStack_4d8;
      if ((byte *)0x408 < pbVar41) {
        pbVar23 = pbVar41;
        __Znam();
        pbStack_4e8 = pbVar23;
      }
      uVar45 = (ulong)uVar2;
      pbStack_4e0 = pbVar41;
      pbStack_4e8 = pbVar23;
      if ((bool)(bVar12 & bVar17)) {
        if ((((uint)uStack_620 ^ (uint)uStack_5c0) & 0xfff) == 0) {
          uStack_750 = (ulong)(pbVar23 + uVar15 * uVar45 + 0xf) & 0xfffffffffffffff0;
          uStack_748 = uStack_750 + uVar15 * uVar36 + 0xf & 0xfffffffffffffff0;
          if ((uVar3 < 4) && ((uint)(uStack_5c0 & 7) != uVar3)) {
            uVar44 = uStack_748 + uVar15 * uVar36 + 0xf & 0xfffffffffffffff0;
            pcVar42 = (code *)(&PTR_DAT_110b21720)[uStack_5c0 & 7];
            uStack_720 = (undefined4 *)CONCAT44(1,uVar2);
            (*pcVar42)(uStack_5b0,1,0,1,uVar44,1,&uStack_720,0);
            uVar38 = uVar44 + uVar45 * 4;
            uStack_720 = (undefined4 *)CONCAT44(1,uVar2);
            (*pcVar42)(uStack_610,1,0,1,uVar38,1,&uStack_720,0);
            lVar40 = 0;
            dVar46 = *(double *)(&UNK_10e02ad30 + (ulong)uVar3 * 8);
            iVar31 = (int)(long)(double)(long)*(double *)(&UNK_10e02acf0 + (ulong)uVar3 * 8);
            do {
              iVar10 = *(int *)(uVar44 + lVar40);
              bVar20 = false;
              bVar21 = false;
              bVar22 = false;
              if (iVar10 <= *(int *)(uVar38 + lVar40)) {
                iVar33 = (int)(long)(double)(long)dVar46;
                bVar22 = SBORROW4(iVar10,iVar33);
                bVar20 = iVar10 - iVar33 < 0;
                bVar21 = iVar10 == iVar33;
              }
              if (!bVar21 && bVar20 == bVar22 || *(int *)(uVar38 + lVar40) < iVar31) {
                *(int *)(uVar44 + lVar40) = iVar31 + 1;
                *(int *)(uVar38 + lVar40) = iVar31;
              }
              lVar40 = lVar40 + 4;
            } while (uVar45 * 4 - lVar40 != 0);
            uStack_720 = (undefined4 *)0x242ff0004;
            puStack_6e0 = (uint *)((ulong)&uStack_720 | 8);
            uStack_718 = CONCAT44(1,uVar2);
            uStack_6f8 = 0;
            uStack_700 = 0;
            uStack_6e8 = 0;
            uStack_6f0 = 0;
            uStack_6d0 = 0;
            uStack_6c8 = 0;
            uStack_710 = uVar44;
            uStack_708 = uVar44;
            puStack_6d8 = &uStack_6d0;
            if (uVar44 == 0) {
              puVar24 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar24 = 1;
              puStack_4f8 = puVar24 + 1;
              uStack_4f0 = 0x1c;
              *(undefined1 *)(puVar24 + 8) = 0;
              *(undefined8 *)(puVar24 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar24 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar24 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar24 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&puStack_4f8,&UNK_10f2e8162,&UNK_10f594bc9,0x19a);
              goto LAB_109a2d54c;
            }
            uStack_720 = (undefined4 *)0x242ff4004;
            uStack_6c8 = 4;
            uStack_6d0 = 4;
            uStack_700 = uVar44 + (uVar2 << 2);
            uStack_6f8 = uStack_700;
            if (uStack_588 != 0) {
              piVar1 = (int *)(uStack_588 + 0x14);
              do {
                iVar31 = *piVar1;
                cVar11 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar20) {
                  *piVar1 = iVar31 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar31 + -1 == 0) {
                func_0x000109a848d4(&uStack_5c0);
              }
            }
            if (0 < uStack_5c0._4_4_) {
              lVar40 = 0;
              do {
                puStack_580[lVar40] = 0;
                lVar40 = lVar40 + 1;
              } while (lVar40 < uStack_5c0._4_4_);
            }
            uStack_5b8 = uStack_718;
            uStack_5c0 = (ulong)uStack_720;
            uStack_5a8 = uStack_708;
            uStack_5b0 = uStack_710;
            uStack_598 = uStack_6f8;
            uStack_5a0 = uStack_700;
            uStack_588 = uStack_6e8;
            uStack_590 = uStack_6f0;
            puVar32 = puStack_580;
            puVar26 = puStack_578;
            if ((puStack_578 != &uStack_570) &&
               (puVar32 = (uint *)((ulong)&uStack_5c0 | 8), puVar26 = &uStack_570,
               puStack_578 != (undefined8 *)0x0)) {
              _free(puStack_578[-1]);
            }
            puStack_578 = puVar26;
            puStack_580 = puVar32;
            if (uStack_720._4_4_ < 3) {
              puVar26 = (undefined8 *)((ulong)&uStack_720 | 4);
              *puStack_578 = *puStack_6d8;
              puStack_578[1] = puStack_6d8[1];
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,0x42ff0000);
              puVar26[1] = 0;
              *puVar26 = 0;
              puVar26[3] = 0;
              puVar26[2] = 0;
              puVar26[5] = 0;
              puVar26[4] = 0;
              *(undefined8 *)((long)puVar26 + 0x34) = 0;
              *(undefined8 *)((long)puVar26 + 0x2c) = 0;
              if (puStack_6d8 != &uStack_6d0) {
                _free(puStack_6d8[-1]);
              }
            }
            else {
              puStack_578 = puStack_6d8;
              puStack_580 = puStack_6e0;
            }
            puStack_6e0 = (uint *)((ulong)&uStack_720 | 8);
            uStack_718 = CONCAT44(1,uVar2);
            uStack_6f0 = 0;
            uStack_6e8 = 0;
            uStack_720 = (undefined4 *)0x242ff4004;
            uStack_6c8 = 4;
            uStack_6d0 = 4;
            uStack_700 = uVar38 + uVar45 * 4;
            uStack_710 = uVar38;
            uStack_708 = uVar38;
            uStack_6f8 = uStack_700;
            puStack_6d8 = &uStack_6d0;
            if (uStack_5e8 != 0) {
              piVar1 = (int *)(uStack_5e8 + 0x14);
              do {
                iVar31 = *piVar1;
                cVar11 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar20) {
                  *piVar1 = iVar31 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar31 + -1 == 0) {
                func_0x000109a848d4(&uStack_620);
              }
            }
            if (0 < uStack_620._4_4_) {
              lVar40 = 0;
              do {
                puStack_5e0[lVar40] = 0;
                lVar40 = lVar40 + 1;
              } while (lVar40 < uStack_620._4_4_);
            }
            uStack_618 = uStack_718;
            uStack_620 = uStack_720;
            uStack_608 = uStack_708;
            uStack_610 = uStack_710;
            lStack_5f8 = uStack_6f8;
            lStack_600 = uStack_700;
            uStack_5e8 = uStack_6e8;
            uStack_5f0 = uStack_6f0;
            puVar32 = puStack_5e0;
            puVar26 = puStack_5d8;
            if ((puStack_5d8 != &uStack_5d0) &&
               (puVar32 = (uint *)((ulong)&uStack_620 | 8), puVar26 = &uStack_5d0,
               puStack_5d8 != (undefined8 *)0x0)) {
              _free(puStack_5d8[-1]);
            }
            puStack_5d8 = puVar26;
            puStack_5e0 = puVar32;
            if (uStack_720._4_4_ < 3) {
              puVar26 = (undefined8 *)((ulong)&uStack_720 | 4);
              *puStack_5d8 = *puStack_6d8;
              puStack_5d8[1] = puStack_6d8[1];
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,0x42ff0000);
              puVar26[1] = 0;
              *puVar26 = 0;
              puVar26[3] = 0;
              puVar26[2] = 0;
              puVar26[5] = 0;
              puVar26[4] = 0;
              *(undefined8 *)((long)puVar26 + 0x34) = 0;
              *(undefined8 *)((long)puVar26 + 0x2c) = 0;
              if (puStack_6d8 != &uStack_6d0) {
                _free(puStack_6d8[-1]);
              }
            }
            else {
              puStack_5e0 = puStack_6e0;
              puStack_5d8 = puStack_6d8;
            }
          }
          FUN_109a27738(&uStack_5c0,(uint)uStack_560 & 0xfff,uStack_750,uVar15);
          FUN_109a27738(&uStack_620,(uint)uStack_560 & 0xfff,uStack_748,uVar15);
          goto LAB_109a2ce40;
        }
      }
      else {
        uStack_750 = 0;
        uStack_748 = 0;
LAB_109a2ce40:
        uVar38 = 0;
        lVar40 = 0x10;
        if (!bVar12) {
          lVar40 = 0x18;
        }
        uVar7 = uVar2 & 3;
        uVar8 = 4;
        if (uVar7 != 0) {
          uVar8 = uVar7;
        }
        pbVar41 = pbVar23 + 3;
        for (; uVar38 < uStack_6a0; uVar38 = uVar38 + 1) {
          if (uVar19 != 0) {
            uVar44 = 0;
            do {
              uVar28 = uStack_c0;
              uVar37 = uVar19 - uVar44;
              if (uVar15 <= uVar19 - uVar44) {
                uVar37 = uVar15;
              }
              lVar43 = (long)(int)uVar37;
              lVar39 = lVar43 * uVar36;
              uVar27 = uStack_750;
              if (!bVar12) {
                uStack_c0 = uStack_c0 + lVar39;
                uVar27 = uVar28;
              }
              uVar28 = uStack_748;
              if (!bVar17) {
                uVar28 = *(ulong *)((long)&uStack_d0 + lVar40);
                *(ulong *)((long)&uStack_d0 + lVar40) = uVar28 + lVar39;
              }
              uStack_720 = (undefined4 *)CONCAT44(1,uVar2 * (int)uVar37);
              pbVar5 = pbStack_c8;
              if (uStack_794 != 0) {
                pbVar5 = pbVar23;
              }
              (*pcVar29)(uStack_d0,0,uVar27,0,uVar28,0,pbVar5,0,&uStack_720);
              if (uStack_794 != 0) {
                lVar30 = uVar37 << 0x20;
                if (uVar7 < 2) {
                  lVar13 = lVar43;
                  pbVar5 = pbVar23;
                  pbVar16 = pbStack_c8;
                  pbVar35 = pbVar41;
                  lVar18 = lVar30;
                  if (uVar7 == 0) {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar35[-2] & pbVar35[-3] & pbVar35[-1] & *pbVar35;
                      lVar13 = lVar13 + -1;
                      pbVar35 = pbVar35 + uVar45;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                  else {
                    while (lVar18 != 0) {
                      *pbVar16 = *pbVar5;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar45;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                }
                else {
                  pbVar5 = pbVar23 + 2;
                  lVar13 = lVar43;
                  pbVar16 = pbStack_c8;
                  lVar18 = lVar30;
                  pbVar35 = pbVar23 + 1;
                  if (uVar7 == 2) {
                    while (lVar18 != 0) {
                      *pbVar16 = *pbVar35 & pbVar35[-1];
                      lVar13 = lVar13 + -1;
                      pbVar35 = pbVar35 + uVar45;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                  else {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar5[-1] & pbVar5[-2] & *pbVar5;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar45;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                  }
                }
                lVar13 = lVar43;
                pbVar5 = pbVar41 + uVar8;
                pbVar16 = pbStack_c8;
                lVar18 = lVar30;
                uVar37 = (ulong)uVar8;
                pbVar35 = pbVar41 + uVar8;
                if (uVar8 <= uStack_794) {
                  do {
                    while (lVar18 != 0) {
                      *pbVar16 = pbVar5[-2] & pbVar5[-3] & pbVar5[-1] & *pbVar5 & *pbVar16;
                      lVar13 = lVar13 + -1;
                      pbVar5 = pbVar5 + uVar45;
                      pbVar16 = pbVar16 + 1;
                      lVar18 = lVar13;
                    }
                    uVar37 = uVar37 + 4;
                    lVar13 = lVar43;
                    pbVar5 = pbVar35 + 4;
                    pbVar16 = pbStack_c8;
                    lVar18 = lVar30;
                    pbVar35 = pbVar35 + 4;
                  } while (uVar37 < uVar45);
                }
              }
              uStack_d0 = uStack_d0 + lVar39;
              pbStack_c8 = pbStack_c8 + lVar43;
              uVar44 = uVar44 + uVar15;
            } while (uVar44 < uVar19);
          }
          FUN_109a8350c(&uStack_6c0);
        }
        if (pbStack_4e8 != abStack_4d8 && pbStack_4e8 != (byte *)0x0) {
          __ZdaPv();
        }
        if (uStack_648 != 0) {
          piVar1 = (int *)(uStack_648 + 0x14);
          do {
            iVar31 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar31 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar31 + -1 == 0) {
            func_0x000109a848d4(&uStack_680);
          }
        }
        uStack_648 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_658 = 0;
        uStack_660 = 0;
        if (0 < uStack_680._4_4_) {
          lVar40 = 0;
          do {
            *(undefined4 *)(uStack_640 + lVar40 * 4) = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < uStack_680._4_4_);
        }
        if (puStack_638 != &uStack_630 && puStack_638 != (undefined8 *)0x0) {
          _free(puStack_638[-1]);
        }
        if (uStack_5e8 != 0) {
          piVar1 = (int *)(uStack_5e8 + 0x14);
          do {
            iVar31 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar31 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar31 + -1 == 0) {
            func_0x000109a848d4(&uStack_620);
          }
        }
        uStack_5e8 = 0;
        uStack_608 = 0;
        uStack_610 = 0;
        lStack_5f8 = 0;
        lStack_600 = 0;
        if (0 < uStack_620._4_4_) {
          lVar40 = 0;
          do {
            puStack_5e0[lVar40] = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < uStack_620._4_4_);
        }
        if (puStack_5d8 != &uStack_5d0 && puStack_5d8 != (undefined8 *)0x0) {
          _free(puStack_5d8[-1]);
        }
        if (uStack_588 != 0) {
          piVar1 = (int *)(uStack_588 + 0x14);
          do {
            iVar31 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar31 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar31 + -1 == 0) {
            func_0x000109a848d4(&uStack_5c0);
          }
        }
        uStack_588 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        if (0 < uStack_5c0._4_4_) {
          lVar40 = 0;
          do {
            puStack_580[lVar40] = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < uStack_5c0._4_4_);
        }
        if (puStack_578 != &uStack_570 && puStack_578 != (undefined8 *)0x0) {
          _free(puStack_578[-1]);
        }
        if (uStack_528 != 0) {
          piVar1 = (int *)(uStack_528 + 0x14);
          do {
            iVar31 = *piVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar31 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar31 + -1 == 0) {
            func_0x000109a848d4(&uStack_560);
          }
        }
        uStack_528 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        if (0 < uStack_560._4_4_) {
          lVar40 = 0;
          do {
            puStack_520[lVar40] = 0;
            lVar40 = lVar40 + 1;
          } while (lVar40 < uStack_560._4_4_);
        }
        if (puStack_518 != &uStack_510 && puStack_518 != (undefined8 *)0x0) {
          _free(puStack_518[-1]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
      }
      puVar24 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar24 = 1;
      uStack_720 = puVar24 + 1;
      uStack_718 = 0x16;
      *(undefined1 *)((long)puVar24 + 0x1a) = 0;
      *(undefined8 *)(puVar24 + 3) = 0x2e6275203d3d2029;
      *(undefined8 *)(puVar24 + 1) = 0x28657079742e626c;
      *(undefined8 *)((long)puVar24 + 0x12) = 0x2928657079742e62;
      FUN_109ac3188(0xffffff29,&uStack_720,&UNK_10f594fbb,&UNK_10f594df2,0x79a);
      goto LAB_109a2d54c;
    }
  }
LAB_109a2d328:
  puVar24 = (undefined4 *)0x60;
  func_0x000107c2ae8c();
  *puVar24 = 1;
  pbStack_4e8 = (byte *)(puVar24 + 1);
  pbStack_4e0 = (byte *)0x59;
  *(undefined8 *)(puVar24 + 0xb) = 0x6d61732065687420;
  *(undefined8 *)(puVar24 + 9) = 0x666f207961727261;
  *(undefined8 *)(puVar24 + 0xf) = 0x20656d617320646e;
  *(undefined8 *)(puVar24 + 0xd) = 0x6120657a69732065;
  *(undefined8 *)(puVar24 + 0x13) = 0x726f6e202c637273;
  *(undefined8 *)(puVar24 + 0x11) = 0x2073612065707974;
  *(undefined8 *)((long)puVar24 + 0x55) = 0x72616c6163732061;
  *(undefined8 *)((long)puVar24 + 0x4d) = 0x20726f6e202c6372;
  *(undefined8 *)(puVar24 + 3) = 0x72616e756f622072;
  *(undefined8 *)(puVar24 + 1) = 0x65776f6c20656854;
  *(undefined1 *)((long)puVar24 + 0x5d) = 0;
  *(undefined8 *)(puVar24 + 7) = 0x206e612072656874;
  *(undefined8 *)(puVar24 + 5) = 0x69656e2073692079;
  FUN_109ac3188(0xffffff2f,&pbStack_4e8,&UNK_10f594fbb,&UNK_10f594df2,0x772);
LAB_109a2d54c:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x109a2d550);
  (*pcVar29)();
}



/* Entry: 109a2d6c8; end: 109a2dc5f;  */

void FUN_109a2d6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 auStack_268 [2];
  undefined4 *puStack_260;
  undefined8 uStack_258;
  undefined4 auStack_250 [2];
  uint *puStack_248;
  undefined8 uStack_240;
  undefined4 auStack_238 [2];
  undefined1 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  uint *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  undefined4 uStack_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long lStack_188;
  ulong uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  int iStack_15c;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  int *piStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [4];
  int iStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  int iStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  int *piStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  
  FUN_109a85f44(&uStack_a0,param_1,0,1,0,0);
  FUN_109a85f44(auStack_100,param_2,0,1,0,0);
  FUN_109a85f44(&uStack_160,param_3,0,1,0,0);
  uStack_1c0 = 0x42ff0000;
  uVar12 = (ulong)&uStack_1c0 | 8;
  lStack_188 = 0;
  uStack_18c = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  iStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uVar2 = piStack_60[-1];
  uVar11 = (ulong)uVar2;
  uStack_180 = uVar12;
  puStack_178 = &uStack_170;
  if (uVar2 == piStack_120[-1]) {
    if (uVar2 == 2) {
      if ((*piStack_60 != *piStack_120) || (piStack_60[1] != piStack_120[1])) goto LAB_109a2db64;
    }
    else {
      piVar7 = piStack_60;
      piVar10 = piStack_120;
      if (0 < (int)uVar2) {
        do {
          if (*piVar7 != *piVar10) goto LAB_109a2db64;
          uVar11 = uVar11 - 1;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        } while (uVar11 != 0);
      }
    }
    if (((uStack_160 ^ uStack_a0) & 0xff8) == 0) {
      if (param_4 != 0) {
        FUN_109a85f44(&uStack_220,param_4,0,1,0,0);
        if (lStack_188 != 0) {
          piVar7 = (int *)(lStack_188 + 0x14);
          do {
            iVar1 = *piVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar4) {
              *piVar7 = iVar1 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        if (0 < iStack_1bc) {
          lVar8 = 0;
          do {
            *(undefined4 *)(uStack_180 + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < iStack_1bc);
        }
        uStack_1b8 = SUB84(puStack_218,0);
        uStack_1b4 = (undefined4)((ulong)puStack_218 >> 0x20);
        uStack_1c0 = SUB84(uStack_220,0);
        uStack_1a8 = (undefined4)uStack_208;
        uStack_1a4 = (undefined4)((ulong)uStack_208 >> 0x20);
        uStack_1b0 = (undefined4)uStack_210;
        uStack_1ac = (undefined4)((ulong)uStack_210 >> 0x20);
        uStack_198 = (undefined4)uStack_1f8;
        uStack_194 = (undefined4)((ulong)uStack_1f8 >> 0x20);
        uStack_1a0 = (undefined4)uStack_200;
        uStack_19c = (undefined4)((ulong)uStack_200 >> 0x20);
        lStack_188 = lStack_1e8;
        uStack_190 = (undefined4)uStack_1f0;
        uStack_18c = (undefined4)((ulong)uStack_1f0 >> 0x20);
        iStack_1bc = uStack_220._4_4_;
        uVar11 = uStack_180;
        puVar9 = puStack_178;
        if ((puStack_178 != &uStack_170) &&
           (uVar11 = uVar12, puVar9 = &uStack_170, puStack_178 != (undefined8 *)0x0)) {
          _free(puStack_178[-1]);
        }
        puStack_178 = puVar9;
        uStack_180 = uVar11;
        if (uStack_220._4_4_ < 3) {
          puVar9 = (undefined8 *)((ulong)&uStack_220 | 4);
          *puStack_178 = *puStack_1d8;
          puStack_178[1] = puStack_1d8[1];
          uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,0x42ff0000);
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          *(undefined8 *)((long)puVar9 + 0x34) = 0;
          *(undefined8 *)((long)puVar9 + 0x2c) = 0;
          if (puStack_1d8 != auStack_1d0) {
            _free(puStack_1d8[-1]);
          }
        }
        else {
          uStack_180 = uStack_1e0;
          puStack_178 = puStack_1d8;
        }
      }
      uStack_210 = 0;
      uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,0x1010000);
      puStack_218 = &uStack_a0;
      uStack_228 = 0;
      auStack_238[0] = 0x1010000;
      puStack_230 = auStack_100;
      auStack_250[0] = 0x2010000;
      puStack_248 = &uStack_160;
      uStack_240 = 0;
      uStack_258 = 0;
      auStack_268[0] = 0x1010000;
      puStack_260 = &uStack_1c0;
      FUN_109a293c4(&uStack_220,auStack_238,auStack_250,auStack_268,uStack_160 & 0xfff,
                    &PTR_DAT_1132e8c10,0,0);
      if (lStack_188 != 0) {
        piVar7 = (int *)(lStack_188 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_1c0);
        }
      }
      lStack_188 = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      if (0 < iStack_1bc) {
        lVar8 = 0;
        do {
          *(undefined4 *)(uStack_180 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_1bc);
      }
      if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
        _free(puStack_178[-1]);
      }
      if (lStack_128 != 0) {
        piVar7 = (int *)(lStack_128 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_160);
        }
      }
      lStack_128 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      if (0 < iStack_15c) {
        lVar8 = 0;
        do {
          piStack_120[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_15c);
      }
      if (puStack_118 != auStack_110 && puStack_118 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_118 + -8));
      }
      if (lStack_c8 != 0) {
        piVar7 = (int *)(lStack_c8 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(auStack_100);
        }
      }
      lStack_c8 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (0 < iStack_fc) {
        lVar8 = 0;
        do {
          *(undefined4 *)(lStack_c0 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_fc);
      }
      if (puStack_b8 != auStack_b0 && puStack_b8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_b8 + -8));
      }
      if (lStack_68 != 0) {
        piVar7 = (int *)(lStack_68 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_a0);
        }
      }
      lStack_68 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      if (0 < iStack_9c) {
        lVar8 = 0;
        do {
          piStack_60[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_9c);
      }
      if (puStack_58 != auStack_50 && puStack_58 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_58 + -8));
      }
      return;
    }
  }
LAB_109a2db64:
  puVar6 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  uStack_220 = puVar6 + 1;
  puStack_218 = (uint *)0x3a;
  *(undefined8 *)(puVar6 + 3) = 0x747364203d3d2065;
  *(undefined8 *)(puVar6 + 1) = 0x7a69732e31637273;
  *(undefined1 *)((long)puVar6 + 0x3e) = 0;
  *(undefined8 *)(puVar6 + 7) = 0x68632e3163727320;
  *(undefined8 *)(puVar6 + 5) = 0x262620657a69732e;
  *(undefined8 *)(puVar6 + 0xb) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 9) = 0x2928736c656e6e61;
  *(undefined8 *)((long)puVar6 + 0x36) = 0x2928736c656e6e61;
  *(undefined8 *)((long)puVar6 + 0x2e) = 0x68632e747364203d;
  FUN_109ac3188(0xffffff29,&uStack_220,&UNK_10f595084,&UNK_10f594df2,0x830);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a2dbd0);
  (*pcVar5)();
}



/* Entry: 109a2dc60; end: 109a2dd8b;  */

void FUN_109a2dc60(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          auVar7 = NEON_uqadd(*(undefined1 (*) [16])(param_1 + uVar6),
                              *(undefined1 (*) [16])(param_3 + uVar6),1);
          auVar8 = NEON_uqadd(((undefined1 (*) [16])(param_1 + uVar6))[1],
                              ((undefined1 (*) [16])(param_3 + uVar6))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar6);
          puVar1[1] = auVar7._8_8_;
          *puVar1 = auVar7._0_8_;
          puVar1[3] = auVar8._8_8_;
          puVar1[2] = auVar8._0_8_;
          uVar6 = uVar6 + 0x20;
        } while ((long)uVar6 <= (long)(int)(param_7 - 0x20));
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 <= (int)(param_7 - 4)) {
        do {
          pbVar2 = (byte *)(param_1 + uVar6);
          pbVar3 = (byte *)(param_3 + uVar6);
          uVar5 = (&UNK_10e02ecdc)[(ulong)pbVar3[1] + (ulong)pbVar2[1]];
          puVar4 = (undefined1 *)(param_5 + uVar6);
          *puVar4 = (&UNK_10e02ecdc)[(ulong)*pbVar3 + (ulong)*pbVar2];
          puVar4[1] = uVar5;
          uVar5 = (&UNK_10e02ecdc)[(ulong)pbVar3[3] + (ulong)pbVar2[3]];
          puVar4[2] = (&UNK_10e02ecdc)[(ulong)pbVar3[2] + (ulong)pbVar2[2]];
          puVar4[3] = uVar5;
          uVar6 = uVar6 + 4;
        } while ((long)uVar6 <= (long)(int)(param_7 - 4));
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 < (int)param_7) {
        do {
          *(undefined *)(param_5 + uVar6) =
               (&UNK_10e02ecdc)
               [(ulong)*(byte *)(param_3 + uVar6) + (ulong)*(byte *)(param_1 + uVar6)];
          uVar6 = uVar6 + 1;
        } while (param_7 != uVar6);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2dd8c; end: 109a2dee7;  */

void FUN_109a2dd8c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_sqadd(*(undefined1 (*) [16])(param_1 + uVar7),
                              *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_sqadd(((undefined1 (*) [16])(param_1 + uVar7))[1],
                              ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar3 = (undefined8 *)(param_5 + uVar7);
          puVar3[1] = auVar8._8_8_;
          *puVar3 = auVar8._0_8_;
          puVar3[3] = auVar9._8_8_;
          puVar3[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pcVar4 = (char *)(param_1 + uVar7);
          pcVar5 = (char *)(param_3 + uVar7);
          iVar1 = (int)*pcVar4 + (int)*pcVar5;
          if (0x7e < iVar1) {
            iVar1 = 0x7f;
          }
          if (iVar1 < -0x7f) {
            iVar1 = -0x80;
          }
          iVar2 = (int)pcVar4[1] + (int)pcVar5[1];
          if (0x7e < iVar2) {
            iVar2 = 0x7f;
          }
          if (iVar2 < -0x7f) {
            iVar2 = -0x80;
          }
          puVar6 = (undefined1 *)(param_5 + uVar7);
          *puVar6 = (char)iVar1;
          puVar6[1] = (char)iVar2;
          iVar1 = (int)pcVar4[2] + (int)pcVar5[2];
          if (0x7e < iVar1) {
            iVar1 = 0x7f;
          }
          if (iVar1 < -0x7f) {
            iVar1 = -0x80;
          }
          iVar2 = (int)pcVar4[3] + (int)pcVar5[3];
          if (0x7e < iVar2) {
            iVar2 = 0x7f;
          }
          if (iVar2 < -0x7f) {
            iVar2 = -0x80;
          }
          puVar6[2] = (char)iVar1;
          puVar6[3] = (char)iVar2;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          iVar1 = (int)*(char *)(param_1 + uVar7) + (int)*(char *)(param_3 + uVar7);
          if (0x7e < iVar1) {
            iVar1 = 0x7f;
          }
          if (iVar1 < -0x7f) {
            iVar1 = -0x80;
          }
          *(char *)(param_5 + uVar7) = (char)iVar1;
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2dee8; end: 109a2e057;  */

void FUN_109a2dee8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_uqadd(*(undefined1 (*) [16])(param_1 + lVar9),
                               *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_uqadd(((undefined1 (*) [16])(param_1 + lVar9))[1],
                               ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar3 = (undefined8 *)(param_5 + lVar9);
          puVar3[1] = auVar14._8_8_;
          *puVar3 = auVar14._0_8_;
          puVar3[3] = auVar15._8_8_;
          puVar3[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          uVar1 = (uint)*(ushort *)(lVar13 + uVar8 * 2) + (uint)*(ushort *)(lVar9 + uVar8 * 2);
          if (0xfffe < uVar1) {
            uVar1 = 0xffff;
          }
          lVar4 = lVar9 + lVar10;
          lVar5 = lVar13 + lVar10;
          uVar2 = (uint)*(ushort *)(lVar5 + 2) + (uint)*(ushort *)(lVar4 + 2);
          if (0xfffe < uVar2) {
            uVar2 = 0xffff;
          }
          lVar6 = lVar11 + lVar10;
          *(short *)(lVar6 + -4) = (short)uVar1;
          *(short *)(lVar6 + -2) = (short)uVar2;
          uVar1 = (uint)*(ushort *)(lVar5 + 4) + (uint)*(ushort *)(lVar4 + 4);
          if (0xfffe < uVar1) {
            uVar1 = 0xffff;
          }
          uVar2 = (uint)*(ushort *)(lVar5 + 6) + (uint)*(ushort *)(lVar4 + 6);
          if (0xfffe < uVar2) {
            uVar2 = 0xffff;
          }
          *(short *)(lVar11 + uVar8 * 2) = (short)uVar1;
          uVar12 = uVar12 + 4;
          *(short *)(lVar6 + 2) = (short)uVar2;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          uVar1 = (uint)*(ushort *)(param_3 + uVar8 * 2) + (uint)*(ushort *)(param_1 + uVar8 * 2);
          if (0xfffe < uVar1) {
            uVar1 = 0xffff;
          }
          *(short *)(param_5 + uVar8 * 2) = (short)uVar1;
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e058; end: 109a2e1fb;  */

void FUN_109a2e058(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_sqadd(*(undefined1 (*) [16])(param_1 + lVar9),
                               *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_sqadd(((undefined1 (*) [16])(param_1 + lVar9))[1],
                               ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar3 = (undefined8 *)(param_5 + lVar9);
          puVar3[1] = auVar14._8_8_;
          *puVar3 = auVar14._0_8_;
          puVar3[3] = auVar15._8_8_;
          puVar3[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          iVar1 = (int)*(short *)(lVar9 + uVar8 * 2) + (int)*(short *)(lVar13 + uVar8 * 2);
          if (0x7ffe < iVar1) {
            iVar1 = 0x7fff;
          }
          if (iVar1 < -0x7fff) {
            iVar1 = -0x8000;
          }
          lVar4 = lVar9 + lVar10;
          lVar5 = lVar13 + lVar10;
          iVar2 = (int)*(short *)(lVar4 + 2) + (int)*(short *)(lVar5 + 2);
          if (0x7ffe < iVar2) {
            iVar2 = 0x7fff;
          }
          if (iVar2 < -0x7fff) {
            iVar2 = -0x8000;
          }
          lVar6 = lVar11 + lVar10;
          *(short *)(lVar6 + -4) = (short)iVar1;
          *(short *)(lVar6 + -2) = (short)iVar2;
          iVar1 = (int)*(short *)(lVar4 + 4) + (int)*(short *)(lVar5 + 4);
          if (0x7ffe < iVar1) {
            iVar1 = 0x7fff;
          }
          if (iVar1 < -0x7fff) {
            iVar1 = -0x8000;
          }
          iVar2 = (int)*(short *)(lVar4 + 6) + (int)*(short *)(lVar5 + 6);
          if (0x7ffe < iVar2) {
            iVar2 = 0x7fff;
          }
          if (iVar2 < -0x7fff) {
            iVar2 = -0x8000;
          }
          *(short *)(lVar11 + uVar8 * 2) = (short)iVar1;
          *(short *)(lVar6 + 2) = (short)iVar2;
          uVar12 = uVar12 + 4;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          iVar1 = (int)*(short *)(param_1 + uVar8 * 2) + (int)*(short *)(param_3 + uVar8 * 2);
          if (0x7ffe < iVar1) {
            iVar1 = 0x7fff;
          }
          if (iVar1 < -0x7fff) {
            iVar1 = -0x8000;
          }
          *(short *)(param_5 + uVar8 * 2) = (short)iVar1;
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e1fc; end: 109a2e5a3;  */

void FUN_109a2e1fc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 8) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar5);
          uVar6 = *puVar1;
          uVar8 = puVar1[3];
          uVar7 = puVar1[2];
          puVar2 = (undefined8 *)(param_3 + lVar5);
          uVar9 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar3 = (undefined8 *)(param_5 + lVar5);
          puVar3[1] = CONCAT44((int)((ulong)puVar2[1] >> 0x20) + (int)((ulong)puVar1[1] >> 0x20),
                               (int)puVar2[1] + (int)puVar1[1]);
          *puVar3 = CONCAT44((int)((ulong)uVar9 >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                             (int)uVar9 + (int)uVar6);
          puVar3[3] = CONCAT44((int)((ulong)uVar11 >> 0x20) + (int)((ulong)uVar8 >> 0x20),
                               (int)uVar11 + (int)uVar8);
          puVar3[2] = CONCAT44((int)((ulong)uVar10 >> 0x20) + (int)((ulong)uVar7 >> 0x20),
                               (int)uVar10 + (int)uVar7);
          uVar4 = uVar4 + 8;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)(int)(param_7 - 8));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 <= (int)(param_7 - 4)) {
        lVar5 = uVar4 << 2;
        do {
          uVar6 = *(undefined8 *)(param_1 + lVar5);
          uVar7 = *(undefined8 *)(param_3 + lVar5);
          *(undefined8 *)(param_5 + lVar5) =
               CONCAT44((int)((ulong)uVar7 >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                        (int)uVar7 + (int)uVar6);
          uVar6 = ((undefined8 *)(param_1 + lVar5))[1];
          uVar7 = ((undefined8 *)(param_3 + lVar5))[1];
          ((undefined8 *)(param_5 + lVar5))[1] =
               CONCAT44((int)((ulong)uVar7 >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                        (int)uVar7 + (int)uVar6);
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((long)uVar4 <= (long)(int)(param_7 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)param_7) {
        do {
          *(int *)(param_5 + uVar4 * 4) =
               *(int *)(param_3 + uVar4 * 4) + *(int *)(param_1 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (param_7 != uVar4);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e5a4; end: 109a2e6ff;  */

void FUN_109a2e5a4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_sqsub(*(undefined1 (*) [16])(param_1 + uVar7),
                              *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_sqsub(((undefined1 (*) [16])(param_1 + uVar7))[1],
                              ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = auVar8._8_8_;
          *puVar1 = auVar8._0_8_;
          puVar1[3] = auVar9._8_8_;
          puVar1[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pcVar2 = (char *)(param_1 + uVar7);
          pcVar3 = (char *)(param_3 + uVar7);
          iVar5 = (int)*pcVar2 - (int)*pcVar3;
          if (0x7e < iVar5) {
            iVar5 = 0x7f;
          }
          if (iVar5 < -0x7f) {
            iVar5 = -0x80;
          }
          iVar6 = (int)pcVar2[1] - (int)pcVar3[1];
          if (0x7e < iVar6) {
            iVar6 = 0x7f;
          }
          if (iVar6 < -0x7f) {
            iVar6 = -0x80;
          }
          puVar4 = (undefined1 *)(param_5 + uVar7);
          *puVar4 = (char)iVar5;
          puVar4[1] = (char)iVar6;
          iVar5 = (int)pcVar2[2] - (int)pcVar3[2];
          if (0x7e < iVar5) {
            iVar5 = 0x7f;
          }
          if (iVar5 < -0x7f) {
            iVar5 = -0x80;
          }
          iVar6 = (int)pcVar2[3] - (int)pcVar3[3];
          if (0x7e < iVar6) {
            iVar6 = 0x7f;
          }
          if (iVar6 < -0x7f) {
            iVar6 = -0x80;
          }
          puVar4[2] = (char)iVar5;
          puVar4[3] = (char)iVar6;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          iVar5 = (int)*(char *)(param_1 + uVar7) - (int)*(char *)(param_3 + uVar7);
          if (0x7e < iVar5) {
            iVar5 = 0x7f;
          }
          if (iVar5 < -0x7f) {
            iVar5 = -0x80;
          }
          *(char *)(param_5 + uVar7) = (char)iVar5;
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e700; end: 109a2e857;  */

void FUN_109a2e700(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_uqsub(*(undefined1 (*) [16])(param_1 + lVar9),
                               *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_uqsub(((undefined1 (*) [16])(param_1 + lVar9))[1],
                               ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar1 = (undefined8 *)(param_5 + lVar9);
          puVar1[1] = auVar14._8_8_;
          *puVar1 = auVar14._0_8_;
          puVar1[3] = auVar15._8_8_;
          puVar1[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          iVar5 = (uint)*(ushort *)(lVar9 + uVar8 * 2) - (uint)*(ushort *)(lVar13 + uVar8 * 2);
          lVar2 = lVar9 + lVar10;
          lVar3 = lVar13 + lVar10;
          iVar6 = (uint)*(ushort *)(lVar2 + 2) - (uint)*(ushort *)(lVar3 + 2);
          lVar4 = lVar11 + lVar10;
          *(ushort *)(lVar4 + -4) = (ushort)iVar5 & ((ushort)(iVar5 >> 0x1f) ^ 0xffff);
          *(ushort *)(lVar4 + -2) = (ushort)iVar6 & ((ushort)(iVar6 >> 0x1f) ^ 0xffff);
          iVar5 = (uint)*(ushort *)(lVar2 + 4) - (uint)*(ushort *)(lVar3 + 4);
          iVar6 = (uint)*(ushort *)(lVar2 + 6) - (uint)*(ushort *)(lVar3 + 6);
          *(ushort *)(lVar11 + uVar8 * 2) = (ushort)iVar5 & ((ushort)(iVar5 >> 0x1f) ^ 0xffff);
          uVar12 = uVar12 + 4;
          *(ushort *)(lVar4 + 2) = (ushort)iVar6 & ((ushort)(iVar6 >> 0x1f) ^ 0xffff);
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          iVar5 = (uint)*(ushort *)(param_1 + uVar8 * 2) - (uint)*(ushort *)(param_3 + uVar8 * 2);
          *(ushort *)(param_5 + uVar8 * 2) = (ushort)iVar5 & ((ushort)(iVar5 >> 0x1f) ^ 0xffff);
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e858; end: 109a2e9fb;  */

void FUN_109a2e858(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_sqsub(*(undefined1 (*) [16])(param_1 + lVar9),
                               *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_sqsub(((undefined1 (*) [16])(param_1 + lVar9))[1],
                               ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar1 = (undefined8 *)(param_5 + lVar9);
          puVar1[1] = auVar14._8_8_;
          *puVar1 = auVar14._0_8_;
          puVar1[3] = auVar15._8_8_;
          puVar1[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          iVar5 = (int)*(short *)(lVar9 + uVar8 * 2) - (int)*(short *)(lVar13 + uVar8 * 2);
          if (0x7ffe < iVar5) {
            iVar5 = 0x7fff;
          }
          if (iVar5 < -0x7fff) {
            iVar5 = -0x8000;
          }
          lVar2 = lVar9 + lVar10;
          lVar3 = lVar13 + lVar10;
          iVar6 = (int)*(short *)(lVar2 + 2) - (int)*(short *)(lVar3 + 2);
          if (0x7ffe < iVar6) {
            iVar6 = 0x7fff;
          }
          if (iVar6 < -0x7fff) {
            iVar6 = -0x8000;
          }
          lVar4 = lVar11 + lVar10;
          *(short *)(lVar4 + -4) = (short)iVar5;
          *(short *)(lVar4 + -2) = (short)iVar6;
          iVar5 = (int)*(short *)(lVar2 + 4) - (int)*(short *)(lVar3 + 4);
          if (0x7ffe < iVar5) {
            iVar5 = 0x7fff;
          }
          if (iVar5 < -0x7fff) {
            iVar5 = -0x8000;
          }
          iVar6 = (int)*(short *)(lVar2 + 6) - (int)*(short *)(lVar3 + 6);
          if (0x7ffe < iVar6) {
            iVar6 = 0x7fff;
          }
          if (iVar6 < -0x7fff) {
            iVar6 = -0x8000;
          }
          *(short *)(lVar11 + uVar8 * 2) = (short)iVar5;
          *(short *)(lVar4 + 2) = (short)iVar6;
          uVar12 = uVar12 + 4;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          iVar5 = (int)*(short *)(param_1 + uVar8 * 2) - (int)*(short *)(param_3 + uVar8 * 2);
          if (0x7ffe < iVar5) {
            iVar5 = 0x7fff;
          }
          if (iVar5 < -0x7fff) {
            iVar5 = -0x8000;
          }
          *(short *)(param_5 + uVar8 * 2) = (short)iVar5;
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2e9fc; end: 109a2ec77;  */

void FUN_109a2e9fc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 8) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar5);
          uVar6 = *puVar1;
          uVar8 = puVar1[3];
          uVar7 = puVar1[2];
          puVar2 = (undefined8 *)(param_3 + lVar5);
          uVar9 = *puVar2;
          uVar11 = puVar2[3];
          uVar10 = puVar2[2];
          puVar3 = (undefined8 *)(param_5 + lVar5);
          puVar3[1] = CONCAT44((int)((ulong)puVar1[1] >> 0x20) - (int)((ulong)puVar2[1] >> 0x20),
                               (int)puVar1[1] - (int)puVar2[1]);
          *puVar3 = CONCAT44((int)((ulong)uVar6 >> 0x20) - (int)((ulong)uVar9 >> 0x20),
                             (int)uVar6 - (int)uVar9);
          puVar3[3] = CONCAT44((int)((ulong)uVar8 >> 0x20) - (int)((ulong)uVar11 >> 0x20),
                               (int)uVar8 - (int)uVar11);
          puVar3[2] = CONCAT44((int)((ulong)uVar7 >> 0x20) - (int)((ulong)uVar10 >> 0x20),
                               (int)uVar7 - (int)uVar10);
          uVar4 = uVar4 + 8;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)(int)(param_7 - 8));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 <= (int)(param_7 - 4)) {
        lVar5 = uVar4 << 2;
        do {
          uVar6 = *(undefined8 *)(param_1 + lVar5);
          uVar7 = *(undefined8 *)(param_3 + lVar5);
          *(undefined8 *)(param_5 + lVar5) =
               CONCAT44((int)((ulong)uVar6 >> 0x20) - (int)((ulong)uVar7 >> 0x20),
                        (int)uVar6 - (int)uVar7);
          uVar6 = ((undefined8 *)(param_1 + lVar5))[1];
          uVar7 = ((undefined8 *)(param_3 + lVar5))[1];
          ((undefined8 *)(param_5 + lVar5))[1] =
               CONCAT44((int)((ulong)uVar6 >> 0x20) - (int)((ulong)uVar7 >> 0x20),
                        (int)uVar6 - (int)uVar7);
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((long)uVar4 <= (long)(int)(param_7 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)param_7) {
        do {
          *(int *)(param_5 + uVar4 * 4) =
               *(int *)(param_1 + uVar4 * 4) - *(int *)(param_3 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (param_7 != uVar4);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2ec78; end: 109a2edbf;  */

void FUN_109a2ec78(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_umax(*(undefined1 (*) [16])(param_1 + uVar7),
                             *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_umax(((undefined1 (*) [16])(param_1 + uVar7))[1],
                             ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = auVar8._8_8_;
          *puVar1 = auVar8._0_8_;
          puVar1[3] = auVar9._8_8_;
          puVar1[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pbVar2 = (byte *)(param_1 + uVar7);
          pbVar3 = (byte *)(param_3 + uVar7);
          bVar5 = pbVar2[1];
          cVar6 = (&UNK_10e02ecdc)[(ulong)pbVar3[1] - (ulong)bVar5];
          pcVar4 = (char *)(param_5 + uVar7);
          *pcVar4 = (&UNK_10e02ecdc)[(ulong)*pbVar3 - (ulong)*pbVar2] + *pbVar2;
          pcVar4[1] = cVar6 + bVar5;
          bVar5 = pbVar2[3];
          cVar6 = (&UNK_10e02ecdc)[(ulong)pbVar3[3] - (ulong)bVar5];
          pcVar4[2] = (&UNK_10e02ecdc)[(ulong)pbVar3[2] - (ulong)pbVar2[2]] + pbVar2[2];
          pcVar4[3] = cVar6 + bVar5;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          *(byte *)(param_5 + uVar7) =
               (&UNK_10e02ecdc)
               [(ulong)*(byte *)(param_3 + uVar7) - (ulong)*(byte *)(param_1 + uVar7)] +
               *(byte *)(param_1 + uVar7);
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2edc0; end: 109a2eecf;  */

void FUN_109a2edc0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_smax(*(undefined1 (*) [16])(param_1 + uVar7),
                             *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_smax(((undefined1 (*) [16])(param_1 + uVar7))[1],
                             ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = auVar8._8_8_;
          *puVar1 = auVar8._0_8_;
          puVar1[3] = auVar9._8_8_;
          puVar1[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pcVar2 = (char *)(param_1 + uVar7);
          pcVar3 = (char *)(param_3 + uVar7);
          cVar5 = *pcVar2;
          if (*pcVar2 <= *pcVar3) {
            cVar5 = *pcVar3;
          }
          cVar6 = pcVar2[1];
          if (pcVar2[1] <= pcVar3[1]) {
            cVar6 = pcVar3[1];
          }
          pcVar4 = (char *)(param_5 + uVar7);
          *pcVar4 = cVar5;
          pcVar4[1] = cVar6;
          cVar5 = pcVar2[2];
          if (pcVar2[2] <= pcVar3[2]) {
            cVar5 = pcVar3[2];
          }
          cVar6 = pcVar2[3];
          if (pcVar2[3] <= pcVar3[3]) {
            cVar6 = pcVar3[3];
          }
          pcVar4[2] = cVar5;
          pcVar4[3] = cVar6;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          cVar5 = *(char *)(param_1 + uVar7);
          if (*(char *)(param_1 + uVar7) <= *(char *)(param_3 + uVar7)) {
            cVar5 = *(char *)(param_3 + uVar7);
          }
          *(char *)(param_5 + uVar7) = cVar5;
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2eed0; end: 109a2f17f;  */

void FUN_109a2eed0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_umax(*(undefined1 (*) [16])(param_1 + lVar9),
                              *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_umax(((undefined1 (*) [16])(param_1 + lVar9))[1],
                              ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar1 = (undefined8 *)(param_5 + lVar9);
          puVar1[1] = auVar14._8_8_;
          *puVar1 = auVar14._0_8_;
          puVar1[3] = auVar15._8_8_;
          puVar1[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          uVar5 = *(ushort *)(lVar9 + uVar8 * 2);
          uVar6 = *(ushort *)(lVar13 + uVar8 * 2);
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          lVar2 = lVar9 + lVar10;
          lVar3 = lVar13 + lVar10;
          uVar6 = *(ushort *)(lVar2 + 2);
          if (*(ushort *)(lVar2 + 2) <= *(ushort *)(lVar3 + 2)) {
            uVar6 = *(ushort *)(lVar3 + 2);
          }
          lVar4 = lVar11 + lVar10;
          *(ushort *)(lVar4 + -4) = uVar5;
          *(ushort *)(lVar4 + -2) = uVar6;
          uVar6 = *(ushort *)(lVar2 + 4);
          if (*(ushort *)(lVar2 + 4) <= *(ushort *)(lVar3 + 4)) {
            uVar6 = *(ushort *)(lVar3 + 4);
          }
          uVar5 = *(ushort *)(lVar2 + 6);
          if (*(ushort *)(lVar2 + 6) <= *(ushort *)(lVar3 + 6)) {
            uVar5 = *(ushort *)(lVar3 + 6);
          }
          *(ushort *)(lVar11 + uVar8 * 2) = uVar6;
          uVar12 = uVar12 + 4;
          *(ushort *)(lVar4 + 2) = uVar5;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          uVar5 = *(ushort *)(param_1 + uVar8 * 2);
          uVar6 = *(ushort *)(param_3 + uVar8 * 2);
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          *(ushort *)(param_5 + uVar8 * 2) = uVar5;
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2f180; end: 109a2f417;  */

void FUN_109a2f180(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 8) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          auVar7 = NEON_smax(*(undefined1 (*) [16])(param_1 + lVar5),
                             *(undefined1 (*) [16])(param_3 + lVar5),4);
          auVar8 = NEON_smax(((undefined1 (*) [16])(param_1 + lVar5))[1],
                             ((undefined1 (*) [16])(param_3 + lVar5))[1],4);
          puVar1 = (undefined8 *)(param_5 + lVar5);
          puVar1[1] = auVar7._8_8_;
          *puVar1 = auVar7._0_8_;
          puVar1[3] = auVar8._8_8_;
          puVar1[2] = auVar8._0_8_;
          uVar4 = uVar4 + 8;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)(int)(param_7 - 8));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 <= (int)(param_7 - 4)) {
        lVar5 = uVar4 << 2;
        do {
          uVar6 = NEON_smax(*(undefined8 *)(param_1 + lVar5),*(undefined8 *)(param_3 + lVar5),4);
          *(undefined8 *)(param_5 + lVar5) = uVar6;
          uVar6 = NEON_smax(((undefined8 *)(param_1 + lVar5))[1],
                            ((undefined8 *)(param_3 + lVar5))[1],4);
          ((undefined8 *)(param_5 + lVar5))[1] = uVar6;
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((long)uVar4 <= (long)(int)(param_7 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)param_7) {
        do {
          iVar2 = *(int *)(param_1 + uVar4 * 4);
          iVar3 = *(int *)(param_3 + uVar4 * 4);
          if (iVar2 <= iVar3) {
            iVar2 = iVar3;
          }
          *(int *)(param_5 + uVar4 * 4) = iVar2;
          uVar4 = uVar4 + 1;
        } while (param_7 != uVar4);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2f418; end: 109a2f55f;  */

void FUN_109a2f418(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_umin(*(undefined1 (*) [16])(param_1 + uVar7),
                             *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_umin(((undefined1 (*) [16])(param_1 + uVar7))[1],
                             ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = auVar8._8_8_;
          *puVar1 = auVar8._0_8_;
          puVar1[3] = auVar9._8_8_;
          puVar1[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pbVar2 = (byte *)(param_1 + uVar7);
          pbVar3 = (byte *)(param_3 + uVar7);
          bVar5 = pbVar2[1];
          cVar6 = (&UNK_10e02ebdc)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[1]];
          pcVar4 = (char *)(param_5 + uVar7);
          *pcVar4 = *pbVar2 - (&UNK_10e02ebdc)[((ulong)*pbVar2 | 0x100) - (ulong)*pbVar3];
          pcVar4[1] = bVar5 - cVar6;
          bVar5 = pbVar2[3];
          cVar6 = (&UNK_10e02ebdc)[((ulong)bVar5 | 0x100) - (ulong)pbVar3[3]];
          pcVar4[2] = pbVar2[2] - (&UNK_10e02ebdc)[((ulong)pbVar2[2] | 0x100) - (ulong)pbVar3[2]];
          pcVar4[3] = bVar5 - cVar6;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          *(byte *)(param_5 + uVar7) =
               *(byte *)(param_1 + uVar7) -
               (&UNK_10e02ebdc)
               [((ulong)*(byte *)(param_1 + uVar7) | 0x100) - (ulong)*(byte *)(param_3 + uVar7)];
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2f560; end: 109a2f66f;  */

void FUN_109a2f560(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 0x20) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          auVar8 = NEON_smin(*(undefined1 (*) [16])(param_1 + uVar7),
                             *(undefined1 (*) [16])(param_3 + uVar7),1);
          auVar9 = NEON_smin(((undefined1 (*) [16])(param_1 + uVar7))[1],
                             ((undefined1 (*) [16])(param_3 + uVar7))[1],1);
          puVar1 = (undefined8 *)(param_5 + uVar7);
          puVar1[1] = auVar8._8_8_;
          *puVar1 = auVar8._0_8_;
          puVar1[3] = auVar9._8_8_;
          puVar1[2] = auVar9._0_8_;
          uVar7 = uVar7 + 0x20;
        } while ((long)uVar7 <= (long)(int)(param_7 - 0x20));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 <= (int)(param_7 - 4)) {
        do {
          pcVar2 = (char *)(param_1 + uVar7);
          pcVar3 = (char *)(param_3 + uVar7);
          cVar5 = *pcVar3;
          if (*pcVar2 <= *pcVar3) {
            cVar5 = *pcVar2;
          }
          cVar6 = pcVar3[1];
          if (pcVar2[1] <= pcVar3[1]) {
            cVar6 = pcVar2[1];
          }
          pcVar4 = (char *)(param_5 + uVar7);
          *pcVar4 = cVar5;
          pcVar4[1] = cVar6;
          cVar5 = pcVar3[2];
          if (pcVar2[2] <= pcVar3[2]) {
            cVar5 = pcVar2[2];
          }
          cVar6 = pcVar3[3];
          if (pcVar2[3] <= pcVar3[3]) {
            cVar6 = pcVar2[3];
          }
          pcVar4[2] = cVar5;
          pcVar4[3] = cVar6;
          uVar7 = uVar7 + 4;
        } while ((long)uVar7 <= (long)(int)(param_7 - 4));
        uVar7 = uVar7 & 0xffffffff;
      }
      if ((int)uVar7 < (int)param_7) {
        do {
          cVar5 = *(char *)(param_3 + uVar7);
          if (*(char *)(param_1 + uVar7) <= *(char *)(param_3 + uVar7)) {
            cVar5 = *(char *)(param_1 + uVar7);
          }
          *(char *)(param_5 + uVar7) = cVar5;
          uVar7 = uVar7 + 1;
        } while (param_7 != uVar7);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2f670; end: 109a2f91f;  */

void FUN_109a2f670(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_8 != 0) {
    lVar7 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar8 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          auVar14 = NEON_umin(*(undefined1 (*) [16])(param_1 + lVar9),
                              *(undefined1 (*) [16])(param_3 + lVar9),2);
          auVar15 = NEON_umin(((undefined1 (*) [16])(param_1 + lVar9))[1],
                              ((undefined1 (*) [16])(param_3 + lVar9))[1],2);
          puVar1 = (undefined8 *)(param_5 + lVar9);
          puVar1[1] = auVar14._8_8_;
          *puVar1 = auVar14._0_8_;
          puVar1[3] = auVar15._8_8_;
          puVar1[2] = auVar15._0_8_;
          uVar8 = uVar8 + 0x10;
          lVar9 = lVar9 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 0x10));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 <= (int)(param_7 - 4)) {
        lVar10 = uVar8 * 2;
        lVar11 = lVar7;
        uVar12 = uVar8;
        lVar13 = param_3;
        lVar9 = param_1;
        do {
          uVar5 = *(ushort *)(lVar9 + uVar8 * 2);
          uVar6 = *(ushort *)(lVar13 + uVar8 * 2);
          if (uVar5 <= uVar6) {
            uVar6 = uVar5;
          }
          lVar2 = lVar9 + lVar10;
          lVar3 = lVar13 + lVar10;
          uVar5 = *(ushort *)(lVar3 + 2);
          if (*(ushort *)(lVar2 + 2) <= *(ushort *)(lVar3 + 2)) {
            uVar5 = *(ushort *)(lVar2 + 2);
          }
          lVar4 = lVar11 + lVar10;
          *(ushort *)(lVar4 + -4) = uVar6;
          *(ushort *)(lVar4 + -2) = uVar5;
          uVar6 = *(ushort *)(lVar3 + 4);
          if (*(ushort *)(lVar2 + 4) <= *(ushort *)(lVar3 + 4)) {
            uVar6 = *(ushort *)(lVar2 + 4);
          }
          uVar5 = *(ushort *)(lVar3 + 6);
          if (*(ushort *)(lVar2 + 6) <= *(ushort *)(lVar3 + 6)) {
            uVar5 = *(ushort *)(lVar2 + 6);
          }
          *(ushort *)(lVar11 + uVar8 * 2) = uVar6;
          uVar12 = uVar12 + 4;
          *(ushort *)(lVar4 + 2) = uVar5;
          lVar9 = lVar9 + 8;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
        uVar8 = uVar12 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          uVar5 = *(ushort *)(param_1 + uVar8 * 2);
          uVar6 = *(ushort *)(param_3 + uVar8 * 2);
          if (uVar5 <= uVar6) {
            uVar6 = uVar5;
          }
          *(ushort *)(param_5 + uVar8 * 2) = uVar6;
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar7 = lVar7 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2f920; end: 109a2fe0b;  */

void FUN_109a2f920(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 8) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          auVar7 = NEON_smin(*(undefined1 (*) [16])(param_1 + lVar5),
                             *(undefined1 (*) [16])(param_3 + lVar5),4);
          auVar8 = NEON_smin(((undefined1 (*) [16])(param_1 + lVar5))[1],
                             ((undefined1 (*) [16])(param_3 + lVar5))[1],4);
          puVar1 = (undefined8 *)(param_5 + lVar5);
          puVar1[1] = auVar7._8_8_;
          *puVar1 = auVar7._0_8_;
          puVar1[3] = auVar8._8_8_;
          puVar1[2] = auVar8._0_8_;
          uVar4 = uVar4 + 8;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)(int)(param_7 - 8));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 <= (int)(param_7 - 4)) {
        lVar5 = uVar4 << 2;
        do {
          uVar6 = NEON_smin(*(undefined8 *)(param_3 + lVar5),*(undefined8 *)(param_1 + lVar5),4);
          *(undefined8 *)(param_5 + lVar5) = uVar6;
          uVar6 = NEON_smin(((undefined8 *)(param_3 + lVar5))[1],
                            ((undefined8 *)(param_1 + lVar5))[1],4);
          ((undefined8 *)(param_5 + lVar5))[1] = uVar6;
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((long)uVar4 <= (long)(int)(param_7 - 4));
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < (int)param_7) {
        do {
          iVar2 = *(int *)(param_1 + uVar4 * 4);
          iVar3 = *(int *)(param_3 + uVar4 * 4);
          if (iVar2 <= iVar3) {
            iVar3 = iVar2;
          }
          *(int *)(param_5 + uVar4 * 4) = iVar3;
          uVar4 = uVar4 + 1;
        } while (param_7 != uVar4);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a2fe0c; end: 109a300ef;  */

void FUN_109a2fe0c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_8 != 0) {
    lVar8 = param_5 + 4;
    do {
      if ((int)param_7 < 0x10) {
        uVar9 = 0;
      }
      else {
        lVar10 = 0;
        uVar9 = 0;
        do {
          auVar15 = NEON_uabd(*(undefined1 (*) [16])(param_1 + lVar10),
                              *(undefined1 (*) [16])(param_3 + lVar10),2);
          auVar16 = NEON_uabd(((undefined1 (*) [16])(param_1 + lVar10))[1],
                              ((undefined1 (*) [16])(param_3 + lVar10))[1],2);
          puVar1 = (undefined8 *)(param_5 + lVar10);
          puVar1[1] = auVar15._8_8_;
          *puVar1 = auVar15._0_8_;
          puVar1[3] = auVar16._8_8_;
          puVar1[2] = auVar16._0_8_;
          uVar9 = uVar9 + 0x10;
          lVar10 = lVar10 + 0x20;
        } while ((long)uVar9 <= (long)(int)(param_7 - 0x10));
        uVar9 = uVar9 & 0xffffffff;
      }
      if ((int)uVar9 <= (int)(param_7 - 4)) {
        lVar11 = uVar9 * 2;
        lVar12 = lVar8;
        uVar13 = uVar9;
        lVar14 = param_3;
        lVar10 = param_1;
        do {
          iVar6 = (uint)*(ushort *)(lVar10 + uVar9 * 2) - (uint)*(ushort *)(lVar14 + uVar9 * 2);
          iVar5 = -iVar6;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          lVar2 = lVar10 + lVar11;
          lVar3 = lVar14 + lVar11;
          iVar7 = (uint)*(ushort *)(lVar2 + 2) - (uint)*(ushort *)(lVar3 + 2);
          iVar6 = -iVar7;
          if (-1 < iVar7) {
            iVar6 = iVar7;
          }
          lVar4 = lVar12 + lVar11;
          *(short *)(lVar4 + -4) = (short)iVar5;
          *(short *)(lVar4 + -2) = (short)iVar6;
          iVar6 = (uint)*(ushort *)(lVar2 + 4) - (uint)*(ushort *)(lVar3 + 4);
          iVar5 = -iVar6;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          iVar7 = (uint)*(ushort *)(lVar2 + 6) - (uint)*(ushort *)(lVar3 + 6);
          iVar6 = -iVar7;
          if (-1 < iVar7) {
            iVar6 = iVar7;
          }
          *(short *)(lVar12 + uVar9 * 2) = (short)iVar5;
          uVar13 = uVar13 + 4;
          *(short *)(lVar4 + 2) = (short)iVar6;
          lVar10 = lVar10 + 8;
          lVar14 = lVar14 + 8;
          lVar12 = lVar12 + 8;
        } while ((long)uVar13 <= (long)(int)(param_7 - 4));
        uVar9 = uVar13 & 0xffffffff;
      }
      if ((int)uVar9 < (int)param_7) {
        do {
          iVar6 = (uint)*(ushort *)(param_1 + uVar9 * 2) - (uint)*(ushort *)(param_3 + uVar9 * 2);
          iVar5 = -iVar6;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          *(short *)(param_5 + uVar9 * 2) = (short)iVar5;
          uVar9 = uVar9 + 1;
        } while (param_7 != uVar9);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar8 = lVar8 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a300f0; end: 109a3055f;  */

void FUN_109a300f0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar12;
  undefined8 uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 8) {
        uVar3 = 0;
      }
      else {
        lVar4 = 0;
        uVar3 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar4);
          puVar2 = (undefined8 *)(param_3 + lVar4);
          iVar5 = (int)*puVar1;
          iVar15 = (int)*puVar2;
          iVar7 = (int)((ulong)*puVar1 >> 0x20);
          iVar16 = (int)((ulong)*puVar2 >> 0x20);
          iVar8 = (int)puVar1[1];
          iVar17 = (int)puVar2[1];
          iVar9 = (int)((ulong)puVar1[1] >> 0x20);
          iVar18 = (int)((ulong)puVar2[1] >> 0x20);
          iVar10 = (int)puVar1[2];
          iVar19 = (int)puVar2[2];
          iVar12 = (int)((ulong)puVar1[2] >> 0x20);
          iVar20 = (int)((ulong)puVar2[2] >> 0x20);
          iVar13 = (int)puVar1[3];
          iVar21 = (int)puVar2[3];
          iVar14 = (int)((ulong)puVar1[3] >> 0x20);
          iVar22 = (int)((ulong)puVar2[3] >> 0x20);
          puVar1 = (undefined8 *)(param_5 + lVar4);
          puVar1[1] = CONCAT44((iVar9 - iVar18) + (iVar18 - iVar9) * 2 * (uint)(iVar9 < iVar18),
                               (iVar8 - iVar17) +
                               (int)(CONCAT44(iVar18 - iVar9,iVar17 - iVar8) >> 0x1e) * 2 *
                               (uint)(iVar8 < iVar17));
          *puVar1 = CONCAT44((iVar7 - iVar16) + (iVar16 - iVar7) * 2 * (uint)(iVar7 < iVar16),
                             (iVar5 - iVar15) + (iVar15 - iVar5) * 2 * (uint)(iVar5 < iVar15));
          puVar1[3] = CONCAT44((iVar14 - iVar22) + (iVar22 - iVar14) * 2 * (uint)(iVar14 < iVar22),
                               (iVar13 - iVar21) +
                               (int)(CONCAT44(iVar22 - iVar14,iVar21 - iVar13) >> 0x1e) * 2 *
                               (uint)(iVar13 < iVar21));
          puVar1[2] = CONCAT44((iVar12 - iVar20) + (iVar20 - iVar12) * 2 * (uint)(iVar12 < iVar20),
                               (iVar10 - iVar19) + (iVar19 - iVar10) * 2 * (uint)(iVar10 < iVar19));
          uVar3 = uVar3 + 8;
          lVar4 = lVar4 + 0x20;
        } while ((long)uVar3 <= (long)(int)(param_7 - 8));
        uVar3 = uVar3 & 0xffffffff;
      }
      if ((int)uVar3 <= (int)(param_7 - 4)) {
        lVar4 = uVar3 << 2;
        do {
          uVar6 = *(undefined8 *)(param_1 + lVar4);
          uVar11 = *(undefined8 *)(param_3 + lVar4);
          iVar5 = (int)uVar6;
          iVar8 = (int)uVar11;
          iVar7 = (int)((ulong)uVar6 >> 0x20);
          iVar9 = (int)((ulong)uVar11 >> 0x20);
          *(undefined8 *)(param_5 + lVar4) =
               CONCAT44((iVar7 - iVar9) + (iVar9 - iVar7) * 2 * (uint)(iVar7 < iVar9),
                        (iVar5 - iVar8) + (iVar8 - iVar5) * 2 * (uint)(iVar5 < iVar8));
          uVar6 = ((undefined8 *)(param_1 + lVar4))[1];
          uVar11 = ((undefined8 *)(param_3 + lVar4))[1];
          iVar5 = (int)uVar6;
          iVar8 = (int)uVar11;
          iVar7 = (int)((ulong)uVar6 >> 0x20);
          iVar9 = (int)((ulong)uVar11 >> 0x20);
          ((undefined8 *)(param_5 + lVar4))[1] =
               CONCAT44((iVar7 - iVar9) + (iVar9 - iVar7) * 2 * (uint)(iVar7 < iVar9),
                        (iVar5 - iVar8) + (iVar8 - iVar5) * 2 * (uint)(iVar5 < iVar8));
          uVar3 = uVar3 + 4;
          lVar4 = lVar4 + 0x10;
        } while ((long)uVar3 <= (long)(int)(param_7 - 4));
        uVar3 = uVar3 & 0xffffffff;
      }
      if ((int)uVar3 < (int)param_7) {
        do {
          iVar7 = *(int *)(param_1 + uVar3 * 4) - *(int *)(param_3 + uVar3 * 4);
          iVar5 = -iVar7;
          if (-1 < iVar7) {
            iVar5 = iVar7;
          }
          *(int *)(param_5 + uVar3 * 4) = iVar5;
          uVar3 = uVar3 + 1;
        } while (param_7 != uVar3);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a30560; end: 109a30873;  */

void FUN_109a30560(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = *param_9;
  if ((uVar9 & 0xfffffffe) == 2) {
    bVar6 = uVar9 != 2;
    uVar9 = 4;
    lVar7 = param_3;
    lVar8 = param_4;
    if (bVar6) {
      uVar9 = 1;
    }
  }
  else {
    bVar6 = uVar9 == 1;
    lVar7 = param_1;
    lVar8 = param_2;
    if ((int)uVar9 < 4) {
      if (uVar9 == 0) {
LAB_109a30794:
        bVar10 = 0;
        if (uVar9 != 0) {
          bVar10 = 0xff;
        }
        if (param_8 == 0) {
          return;
        }
        do {
          if ((int)param_7 < 4) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            do {
              pcVar1 = (char *)(param_1 + uVar11);
              pcVar2 = (char *)(param_3 + uVar11);
              bVar4 = bVar10;
              if (pcVar1[1] == pcVar2[1]) {
                bVar4 = ~bVar10;
              }
              bVar5 = bVar10;
              if (*pcVar1 == *pcVar2) {
                bVar5 = ~bVar10;
              }
              pbVar3 = (byte *)(param_5 + uVar11);
              *pbVar3 = bVar5;
              pbVar3[1] = bVar4;
              bVar4 = bVar10;
              if (pcVar1[3] == pcVar2[3]) {
                bVar4 = ~bVar10;
              }
              bVar5 = bVar10;
              if (pcVar1[2] == pcVar2[2]) {
                bVar5 = ~bVar10;
              }
              pbVar3[2] = bVar5;
              pbVar3[3] = bVar4;
              uVar11 = uVar11 + 4;
            } while ((long)uVar11 <= (long)(int)(param_7 - 4));
            uVar11 = uVar11 & 0xffffffff;
          }
          if ((int)uVar11 < (int)param_7) {
            do {
              bVar4 = bVar10;
              if (*(char *)(param_1 + uVar11) == *(char *)(param_3 + uVar11)) {
                bVar4 = ~bVar10;
              }
              *(byte *)(param_5 + uVar11) = bVar4;
              uVar11 = uVar11 + 1;
            } while (param_7 != uVar11);
          }
          param_1 = param_1 + param_2;
          param_3 = param_3 + param_4;
          param_5 = param_5 + param_6;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
        return;
      }
      param_2 = param_4;
      param_1 = param_3;
      if (uVar9 != 1) {
        return;
      }
    }
    else {
      if (uVar9 == 5) goto LAB_109a30794;
      param_2 = param_4;
      param_1 = param_3;
      if (uVar9 != 4) {
        return;
      }
    }
  }
  bVar10 = 0;
  if (!bVar6) {
    bVar10 = 0xff;
  }
  if (param_8 != 0) {
    uVar11 = (ulong)(param_7 - 0x10);
    do {
      uVar12 = 0;
      if ((int)uVar9 < 4) {
        if (uVar9 == 0) {
          if ((int)param_7 < 0x10) {
LAB_109a30670:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            do {
              uVar15 = ((undefined8 *)(lVar7 + uVar12))[1];
              uVar14 = *(undefined8 *)(lVar7 + uVar12);
              uVar17 = ((undefined8 *)(param_1 + uVar12))[1];
              uVar16 = *(undefined8 *)(param_1 + uVar12);
              ((undefined8 *)(param_5 + uVar12))[1] =
                   CONCAT17(-((char)((ulong)uVar15 >> 0x38) == (char)((ulong)uVar17 >> 0x38)),
                            CONCAT16(-((char)((ulong)uVar15 >> 0x30) ==
                                      (char)((ulong)uVar17 >> 0x30)),
                                     CONCAT15(-((char)((ulong)uVar15 >> 0x28) ==
                                               (char)((ulong)uVar17 >> 0x28)),
                                              CONCAT14(-((char)((ulong)uVar15 >> 0x20) ==
                                                        (char)((ulong)uVar17 >> 0x20)),
                                                       CONCAT13(-((char)((ulong)uVar15 >> 0x18) ==
                                                                 (char)((ulong)uVar17 >> 0x18)),
                                                                CONCAT12(-((char)((ulong)uVar15 >>
                                                                                 0x10) ==
                                                                          (char)((ulong)uVar17 >>
                                                                                0x10)),
                                                                         CONCAT11(-((char)((ulong)
                                                  uVar15 >> 8) == (char)((ulong)uVar17 >> 8)),
                                                  -((char)uVar15 == (char)uVar17))))))));
              *(undefined8 *)(param_5 + uVar12) =
                   CONCAT17(-((char)((ulong)uVar14 >> 0x38) == (char)((ulong)uVar16 >> 0x38)),
                            CONCAT16(-((char)((ulong)uVar14 >> 0x30) ==
                                      (char)((ulong)uVar16 >> 0x30)),
                                     CONCAT15(-((char)((ulong)uVar14 >> 0x28) ==
                                               (char)((ulong)uVar16 >> 0x28)),
                                              CONCAT14(-((char)((ulong)uVar14 >> 0x20) ==
                                                        (char)((ulong)uVar16 >> 0x20)),
                                                       CONCAT13(-((char)((ulong)uVar14 >> 0x18) ==
                                                                 (char)((ulong)uVar16 >> 0x18)),
                                                                CONCAT12(-((char)((ulong)uVar14 >>
                                                                                 0x10) ==
                                                                          (char)((ulong)uVar16 >>
                                                                                0x10)),
                                                                         CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) == (char)((ulong)uVar16 >> 8)),
                                                  -((char)uVar14 == (char)uVar16))))))));
              uVar12 = uVar12 + 0x10;
            } while (uVar12 <= uVar11);
          }
        }
        else if (uVar9 == 1) {
          if ((int)param_7 < 0x10) goto LAB_109a30670;
          uVar12 = 0;
          do {
            uVar15 = ((undefined8 *)(lVar7 + uVar12))[1];
            uVar14 = *(undefined8 *)(lVar7 + uVar12);
            uVar17 = ((undefined8 *)(param_1 + uVar12))[1];
            uVar16 = *(undefined8 *)(param_1 + uVar12);
            ((undefined8 *)(param_5 + uVar12))[1] =
                 CONCAT17(-((char)((ulong)uVar17 >> 0x38) < (char)((ulong)uVar15 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < (char)((ulong)uVar15 >> 0x30)),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) <
                                             (char)((ulong)uVar15 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) <
                                                      (char)((ulong)uVar15 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                               (char)((ulong)uVar15 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) <
                                                                        (char)((ulong)uVar15 >> 0x10
                                                                              )),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < (char)((ulong)uVar15 >> 8)),
                                                  -((char)uVar17 < (char)uVar15))))))));
            *(undefined8 *)(param_5 + uVar12) =
                 CONCAT17(-((char)((ulong)uVar16 >> 0x38) < (char)((ulong)uVar14 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar16 >> 0x30) < (char)((ulong)uVar14 >> 0x30)),
                                   CONCAT15(-((char)((ulong)uVar16 >> 0x28) <
                                             (char)((ulong)uVar14 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar16 >> 0x20) <
                                                      (char)((ulong)uVar14 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar16 >> 0x18) <
                                                               (char)((ulong)uVar14 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar16 >>
                                                                               0x10) <
                                                                        (char)((ulong)uVar14 >> 0x10
                                                                              )),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar16 >> 8) < (char)((ulong)uVar14 >> 8)),
                                                  -((char)uVar16 < (char)uVar14))))))));
            uVar12 = uVar12 + 0x10;
          } while (uVar12 <= uVar11);
        }
      }
      else if (uVar9 == 4) {
        if ((int)param_7 < 0x10) goto LAB_109a30670;
        uVar12 = 0;
        do {
          uVar15 = ((undefined8 *)(lVar7 + uVar12))[1];
          uVar14 = *(undefined8 *)(lVar7 + uVar12);
          uVar17 = ((undefined8 *)(param_1 + uVar12))[1];
          uVar16 = *(undefined8 *)(param_1 + uVar12);
          ((undefined8 *)(param_5 + uVar12))[1] =
               CONCAT17(-((char)((ulong)uVar15 >> 0x38) <= (char)((ulong)uVar17 >> 0x38)),
                        CONCAT16(-((char)((ulong)uVar15 >> 0x30) <= (char)((ulong)uVar17 >> 0x30)),
                                 CONCAT15(-((char)((ulong)uVar15 >> 0x28) <=
                                           (char)((ulong)uVar17 >> 0x28)),
                                          CONCAT14(-((char)((ulong)uVar15 >> 0x20) <=
                                                    (char)((ulong)uVar17 >> 0x20)),
                                                   CONCAT13(-((char)((ulong)uVar15 >> 0x18) <=
                                                             (char)((ulong)uVar17 >> 0x18)),
                                                            CONCAT12(-((char)((ulong)uVar15 >> 0x10)
                                                                      <= (char)((ulong)uVar17 >>
                                                                               0x10)),
                                                                     CONCAT11(-((char)((ulong)uVar15
                                                                                      >> 8) <=
                                                                               (char)((ulong)uVar17
                                                                                     >> 8)),
                                                                              -((char)uVar15 <=
                                                                               (char)uVar17))))))));
          *(undefined8 *)(param_5 + uVar12) =
               CONCAT17(-((char)((ulong)uVar14 >> 0x38) <= (char)((ulong)uVar16 >> 0x38)),
                        CONCAT16(-((char)((ulong)uVar14 >> 0x30) <= (char)((ulong)uVar16 >> 0x30)),
                                 CONCAT15(-((char)((ulong)uVar14 >> 0x28) <=
                                           (char)((ulong)uVar16 >> 0x28)),
                                          CONCAT14(-((char)((ulong)uVar14 >> 0x20) <=
                                                    (char)((ulong)uVar16 >> 0x20)),
                                                   CONCAT13(-((char)((ulong)uVar14 >> 0x18) <=
                                                             (char)((ulong)uVar16 >> 0x18)),
                                                            CONCAT12(-((char)((ulong)uVar14 >> 0x10)
                                                                      <= (char)((ulong)uVar16 >>
                                                                               0x10)),
                                                                     CONCAT11(-((char)((ulong)uVar14
                                                                                      >> 8) <=
                                                                               (char)((ulong)uVar16
                                                                                     >> 8)),
                                                                              -((char)uVar14 <=
                                                                               (char)uVar16))))))));
          uVar12 = uVar12 + 0x10;
        } while (uVar12 <= uVar11);
      }
      else if (uVar9 == 5) {
        if ((int)param_7 < 0x10) goto LAB_109a30670;
        uVar12 = 0;
        do {
          uVar15 = ((undefined8 *)(lVar7 + uVar12))[1];
          uVar14 = *(undefined8 *)(lVar7 + uVar12);
          uVar17 = ((undefined8 *)(param_1 + uVar12))[1];
          uVar16 = *(undefined8 *)(param_1 + uVar12);
          ((undefined8 *)(param_5 + uVar12))[1] =
               CONCAT17(~-((char)((ulong)uVar15 >> 0x38) == (char)((ulong)uVar17 >> 0x38)),
                        CONCAT16(~-((char)((ulong)uVar15 >> 0x30) == (char)((ulong)uVar17 >> 0x30)),
                                 CONCAT15(~-((char)((ulong)uVar15 >> 0x28) ==
                                            (char)((ulong)uVar17 >> 0x28)),
                                          CONCAT14(~-((char)((ulong)uVar15 >> 0x20) ==
                                                     (char)((ulong)uVar17 >> 0x20)),
                                                   CONCAT13(~-((char)((ulong)uVar15 >> 0x18) ==
                                                              (char)((ulong)uVar17 >> 0x18)),
                                                            CONCAT12(~-((char)((ulong)uVar15 >> 0x10
                                                                              ) ==
                                                                       (char)((ulong)uVar17 >> 0x10)
                                                                       ),CONCAT11(~-((char)((ulong)
                                                  uVar15 >> 8) == (char)((ulong)uVar17 >> 8)),
                                                  ~-((char)uVar15 == (char)uVar17))))))));
          *(undefined8 *)(param_5 + uVar12) =
               CONCAT17(~-((char)((ulong)uVar14 >> 0x38) == (char)((ulong)uVar16 >> 0x38)),
                        CONCAT16(~-((char)((ulong)uVar14 >> 0x30) == (char)((ulong)uVar16 >> 0x30)),
                                 CONCAT15(~-((char)((ulong)uVar14 >> 0x28) ==
                                            (char)((ulong)uVar16 >> 0x28)),
                                          CONCAT14(~-((char)((ulong)uVar14 >> 0x20) ==
                                                     (char)((ulong)uVar16 >> 0x20)),
                                                   CONCAT13(~-((char)((ulong)uVar14 >> 0x18) ==
                                                              (char)((ulong)uVar16 >> 0x18)),
                                                            CONCAT12(~-((char)((ulong)uVar14 >> 0x10
                                                                              ) ==
                                                                       (char)((ulong)uVar16 >> 0x10)
                                                                       ),CONCAT11(~-((char)((ulong)
                                                  uVar14 >> 8) == (char)((ulong)uVar16 >> 8)),
                                                  ~-((char)uVar14 == (char)uVar16))))))));
          uVar12 = uVar12 + 0x10;
        } while (uVar12 <= uVar11);
      }
      if ((int)uVar12 <= (int)(param_7 - 4)) {
        uVar12 = uVar12 & 0xffffffff;
        do {
          pcVar1 = (char *)(lVar7 + uVar12);
          pcVar2 = (char *)(param_1 + uVar12);
          bVar4 = bVar10;
          if (pcVar2[1] < pcVar1[1]) {
            bVar4 = ~bVar10;
          }
          bVar5 = bVar10;
          if (*pcVar2 < *pcVar1) {
            bVar5 = ~bVar10;
          }
          pbVar3 = (byte *)(param_5 + uVar12);
          *pbVar3 = bVar5;
          pbVar3[1] = bVar4;
          bVar4 = bVar10;
          if (pcVar2[3] < pcVar1[3]) {
            bVar4 = ~bVar10;
          }
          bVar5 = bVar10;
          if (pcVar2[2] < pcVar1[2]) {
            bVar5 = ~bVar10;
          }
          pbVar3[2] = bVar5;
          pbVar3[3] = bVar4;
          uVar12 = uVar12 + 4;
        } while ((long)uVar12 <= (long)(int)(param_7 - 4));
      }
      if ((int)uVar12 < (int)param_7) {
        lVar13 = (long)(int)uVar12;
        do {
          bVar4 = bVar10;
          if (*(char *)(param_1 + lVar13) < *(char *)(lVar7 + lVar13)) {
            bVar4 = ~bVar10;
          }
          *(byte *)(param_5 + lVar13) = bVar4;
          lVar13 = lVar13 + 1;
        } while ((int)param_7 != lVar13);
      }
      lVar7 = lVar7 + lVar8;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a30874; end: 109a30bff;  */

void FUN_109a30874(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  short *psVar4;
  short *psVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *param_9;
  param_2 = param_2 >> 1;
  param_4 = param_4 >> 1;
  if ((uVar9 & 0xfffffffe) == 2) {
    bVar8 = uVar9 != 2;
    uVar9 = 4;
    lVar13 = param_3;
    uVar12 = param_2;
    if (bVar8) {
      uVar9 = 1;
    }
  }
  else {
    bVar8 = uVar9 == 1;
    lVar13 = param_1;
    uVar12 = param_4;
    if ((int)uVar9 < 4) {
      if (uVar9 == 0) {
LAB_109a30b08:
        bVar10 = 0;
        if (uVar9 != 0) {
          bVar10 = 0xff;
        }
        if (param_8 == 0) {
          return;
        }
        do {
          if ((int)param_7 < 4) {
            uVar12 = 0;
          }
          else {
            lVar13 = 0;
            uVar12 = 0;
            do {
              psVar4 = (short *)(param_1 + lVar13);
              psVar5 = (short *)(param_3 + lVar13);
              bVar6 = bVar10;
              if (psVar4[1] == psVar5[1]) {
                bVar6 = ~bVar10;
              }
              bVar7 = bVar10;
              if (*psVar4 == *psVar5) {
                bVar7 = ~bVar10;
              }
              pbVar3 = (byte *)(param_5 + uVar12);
              *pbVar3 = bVar7;
              pbVar3[1] = bVar6;
              bVar6 = bVar10;
              if (psVar4[3] == psVar5[3]) {
                bVar6 = ~bVar10;
              }
              bVar7 = bVar10;
              if (psVar4[2] == psVar5[2]) {
                bVar7 = ~bVar10;
              }
              pbVar3[2] = bVar7;
              pbVar3[3] = bVar6;
              uVar12 = uVar12 + 4;
              lVar13 = lVar13 + 8;
            } while ((long)uVar12 <= (long)(int)(param_7 - 4));
            uVar12 = uVar12 & 0xffffffff;
          }
          if ((int)uVar12 < (int)param_7) {
            do {
              bVar6 = bVar10;
              if (*(short *)(param_1 + uVar12 * 2) == *(short *)(param_3 + uVar12 * 2)) {
                bVar6 = ~bVar10;
              }
              *(byte *)(param_5 + uVar12) = bVar6;
              uVar12 = uVar12 + 1;
            } while (param_7 != uVar12);
          }
          param_5 = param_5 + param_6;
          param_3 = param_3 + param_4 * 2;
          param_1 = param_1 + param_2 * 2;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
        return;
      }
      param_1 = param_3;
      param_4 = param_2;
      if (uVar9 != 1) {
        return;
      }
    }
    else {
      if (uVar9 == 5) goto LAB_109a30b08;
      param_1 = param_3;
      param_4 = param_2;
      if (uVar9 != 4) {
        return;
      }
    }
  }
  bVar10 = 0;
  if (!bVar8) {
    bVar10 = 0xff;
  }
  if (param_8 != 0) {
    uVar11 = (ulong)(param_7 - 8);
    do {
      uVar14 = 0;
      if ((int)uVar9 < 4) {
        if (uVar9 == 0) {
          if ((int)param_7 < 8) {
LAB_109a309c0:
            uVar14 = 0;
          }
          else {
            lVar15 = 0;
            uVar14 = 0;
            do {
              uVar17 = ((undefined8 *)(lVar13 + lVar15))[1];
              uVar16 = *(undefined8 *)(lVar13 + lVar15);
              uVar19 = ((undefined8 *)(param_1 + lVar15))[1];
              uVar18 = *(undefined8 *)(param_1 + lVar15);
              *(ulong *)(param_5 + uVar14) =
                   CONCAT17(-((short)((ulong)uVar17 >> 0x30) == (short)((ulong)uVar19 >> 0x30)),
                            CONCAT16(-((short)((ulong)uVar17 >> 0x20) ==
                                      (short)((ulong)uVar19 >> 0x20)),
                                     CONCAT15(-((short)((ulong)uVar17 >> 0x10) ==
                                               (short)((ulong)uVar19 >> 0x10)),
                                              CONCAT14(-((short)uVar17 == (short)uVar19),
                                                       CONCAT13(-((short)((ulong)uVar16 >> 0x30) ==
                                                                 (short)((ulong)uVar18 >> 0x30)),
                                                                CONCAT12(-((short)((ulong)uVar16 >>
                                                                                  0x20) ==
                                                                          (short)((ulong)uVar18 >>
                                                                                 0x20)),
                                                                         CONCAT11(-((short)((ulong)
                                                  uVar16 >> 0x10) == (short)((ulong)uVar18 >> 0x10))
                                                  ,-((short)uVar16 == (short)uVar18))))))));
              uVar14 = uVar14 + 8;
              lVar15 = lVar15 + 0x10;
            } while (uVar14 <= uVar11);
          }
        }
        else if (uVar9 == 1) {
          if ((int)param_7 < 8) goto LAB_109a309c0;
          lVar15 = 0;
          uVar14 = 0;
          do {
            uVar17 = ((undefined8 *)(lVar13 + lVar15))[1];
            uVar16 = *(undefined8 *)(lVar13 + lVar15);
            uVar19 = ((undefined8 *)(param_1 + lVar15))[1];
            uVar18 = *(undefined8 *)(param_1 + lVar15);
            *(ulong *)(param_5 + uVar14) =
                 CONCAT17(-((ushort)((ulong)uVar19 >> 0x30) < (ushort)((ulong)uVar17 >> 0x30)),
                          CONCAT16(-((ushort)((ulong)uVar19 >> 0x20) <
                                    (ushort)((ulong)uVar17 >> 0x20)),
                                   CONCAT15(-((ushort)((ulong)uVar19 >> 0x10) <
                                             (ushort)((ulong)uVar17 >> 0x10)),
                                            CONCAT14(-((ushort)uVar19 < (ushort)uVar17),
                                                     CONCAT13(-((ushort)((ulong)uVar18 >> 0x30) <
                                                               (ushort)((ulong)uVar16 >> 0x30)),
                                                              CONCAT12(-((ushort)((ulong)uVar18 >>
                                                                                 0x20) <
                                                                        (ushort)((ulong)uVar16 >>
                                                                                0x20)),
                                                                       CONCAT11(-((ushort)((ulong)
                                                  uVar18 >> 0x10) < (ushort)((ulong)uVar16 >> 0x10))
                                                  ,-((ushort)uVar18 < (ushort)uVar16))))))));
            uVar14 = uVar14 + 8;
            lVar15 = lVar15 + 0x10;
          } while (uVar14 <= uVar11);
        }
      }
      else if (uVar9 == 4) {
        if ((int)param_7 < 8) goto LAB_109a309c0;
        lVar15 = 0;
        uVar14 = 0;
        do {
          uVar17 = ((undefined8 *)(lVar13 + lVar15))[1];
          uVar16 = *(undefined8 *)(lVar13 + lVar15);
          uVar19 = ((undefined8 *)(param_1 + lVar15))[1];
          uVar18 = *(undefined8 *)(param_1 + lVar15);
          *(ulong *)(param_5 + uVar14) =
               CONCAT17(-((ushort)((ulong)uVar17 >> 0x30) <= (ushort)((ulong)uVar19 >> 0x30)),
                        CONCAT16(-((ushort)((ulong)uVar17 >> 0x20) <=
                                  (ushort)((ulong)uVar19 >> 0x20)),
                                 CONCAT15(-((ushort)((ulong)uVar17 >> 0x10) <=
                                           (ushort)((ulong)uVar19 >> 0x10)),
                                          CONCAT14(-((ushort)uVar17 <= (ushort)uVar19),
                                                   CONCAT13(-((ushort)((ulong)uVar16 >> 0x30) <=
                                                             (ushort)((ulong)uVar18 >> 0x30)),
                                                            CONCAT12(-((ushort)((ulong)uVar16 >>
                                                                               0x20) <=
                                                                      (ushort)((ulong)uVar18 >> 0x20
                                                                              )),
                                                                     CONCAT11(-((ushort)((ulong)
                                                  uVar16 >> 0x10) <= (ushort)((ulong)uVar18 >> 0x10)
                                                  ),-((ushort)uVar16 <= (ushort)uVar18))))))));
          uVar14 = uVar14 + 8;
          lVar15 = lVar15 + 0x10;
        } while (uVar14 <= uVar11);
      }
      else if (uVar9 == 5) {
        if ((int)param_7 < 8) goto LAB_109a309c0;
        lVar15 = 0;
        uVar14 = 0;
        do {
          uVar17 = ((undefined8 *)(lVar13 + lVar15))[1];
          uVar16 = *(undefined8 *)(lVar13 + lVar15);
          uVar19 = ((undefined8 *)(param_1 + lVar15))[1];
          uVar18 = *(undefined8 *)(param_1 + lVar15);
          *(ulong *)(param_5 + uVar14) =
               CONCAT17(~-((short)((ulong)uVar17 >> 0x30) == (short)((ulong)uVar19 >> 0x30)),
                        CONCAT16(~-((short)((ulong)uVar17 >> 0x20) == (short)((ulong)uVar19 >> 0x20)
                                   ),CONCAT15(~-((short)((ulong)uVar17 >> 0x10) ==
                                                (short)((ulong)uVar19 >> 0x10)),
                                              CONCAT14(~-((short)uVar17 == (short)uVar19),
                                                       CONCAT13(~-((short)((ulong)uVar16 >> 0x30) ==
                                                                  (short)((ulong)uVar18 >> 0x30)),
                                                                CONCAT12(~-((short)((ulong)uVar16 >>
                                                                                   0x20) ==
                                                                           (short)((ulong)uVar18 >>
                                                                                  0x20)),
                                                                         CONCAT11(~-((short)((ulong)
                                                  uVar16 >> 0x10) == (short)((ulong)uVar18 >> 0x10))
                                                  ,~-((short)uVar16 == (short)uVar18))))))));
          uVar14 = uVar14 + 8;
          lVar15 = lVar15 + 0x10;
        } while (uVar14 <= uVar11);
      }
      if ((int)uVar14 <= (int)(param_7 - 4)) {
        lVar15 = (uVar14 & 0xffffffff) * 2 + 6;
        uVar14 = uVar14 & 0xffffffff;
        do {
          lVar1 = lVar13 + uVar14 * 2;
          lVar2 = param_1 + uVar14 * 2;
          bVar6 = bVar10;
          if (*(ushort *)(lVar2 + 2) < *(ushort *)(lVar1 + 2)) {
            bVar6 = ~bVar10;
          }
          bVar7 = bVar10;
          if (((ushort *)(param_1 + lVar15))[-3] < ((ushort *)(lVar13 + lVar15))[-3]) {
            bVar7 = ~bVar10;
          }
          pbVar3 = (byte *)(param_5 + uVar14);
          *pbVar3 = bVar7;
          pbVar3[1] = bVar6;
          bVar6 = bVar10;
          if (*(ushort *)(param_1 + lVar15) < *(ushort *)(lVar13 + lVar15)) {
            bVar6 = ~bVar10;
          }
          bVar7 = bVar10;
          if (*(ushort *)(lVar2 + 4) < *(ushort *)(lVar1 + 4)) {
            bVar7 = ~bVar10;
          }
          pbVar3[2] = bVar7;
          pbVar3[3] = bVar6;
          uVar14 = uVar14 + 4;
          lVar15 = lVar15 + 8;
        } while ((long)uVar14 <= (long)(int)(param_7 - 4));
      }
      if ((int)uVar14 < (int)param_7) {
        lVar15 = (long)(int)uVar14;
        do {
          bVar6 = bVar10;
          if (*(ushort *)(param_1 + lVar15 * 2) < *(ushort *)(lVar13 + lVar15 * 2)) {
            bVar6 = ~bVar10;
          }
          *(byte *)(param_5 + lVar15) = bVar6;
          lVar15 = lVar15 + 1;
        } while ((int)param_7 != lVar15);
      }
      param_5 = param_5 + param_6;
      param_1 = param_1 + uVar12 * 2;
      lVar13 = lVar13 + param_4 * 2;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a30c00; end: 109a30def;  */

void FUN_109a30c00(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  byte bVar15;
  byte bVar16;
  int iVar14;
  byte bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar3 = *param_9;
  param_2 = param_2 >> 1;
  param_4 = param_4 >> 1;
  if ((uVar3 & 0xfffffffe) == 2) {
    bVar8 = uVar3 != 2;
    uVar9 = param_4;
    param_4 = param_2;
    lVar11 = param_1;
    param_1 = param_3;
  }
  else {
    bVar8 = uVar3 == 1;
    uVar9 = param_2;
    lVar11 = param_3;
    if (uVar3 != 4 && uVar3 != 1) {
      if (uVar3 != 5 && uVar3 != 0 || param_8 == 0) {
        return;
      }
      iVar14 = -(uint)(uVar3 == 0);
      bVar13 = (byte)iVar14;
      bVar15 = (byte)((uint)iVar14 >> 8);
      bVar16 = (byte)((uint)iVar14 >> 0x10);
      bVar17 = (byte)((uint)iVar14 >> 0x18);
      do {
        if ((int)param_7 < 0x10) {
          uVar9 = 0;
        }
        else {
          lVar11 = 0;
          uVar9 = 0;
          do {
            puVar1 = (undefined8 *)(param_1 + lVar11);
            puVar2 = (undefined8 *)(param_3 + lVar11);
            uVar5 = puVar1[1];
            uVar4 = *puVar1;
            uVar7 = puVar1[3];
            uVar6 = puVar1[2];
            uVar19 = puVar2[1];
            uVar18 = *puVar2;
            uVar21 = puVar2[3];
            uVar20 = puVar2[2];
            ((undefined8 *)(param_5 + uVar9))[1] =
                 CONCAT17(~bVar17 ^ -((short)((ulong)uVar7 >> 0x30) ==
                                     (short)((ulong)uVar21 >> 0x30)),
                          CONCAT16(~bVar16 ^ -((short)((ulong)uVar7 >> 0x20) ==
                                              (short)((ulong)uVar21 >> 0x20)),
                                   CONCAT15(~bVar15 ^ -((short)((ulong)uVar7 >> 0x10) ==
                                                       (short)((ulong)uVar21 >> 0x10)),
                                            CONCAT14(~bVar13 ^ -((short)uVar7 == (short)uVar21),
                                                     CONCAT13(~bVar17 ^ -((short)((ulong)uVar6 >>
                                                                                 0x30) ==
                                                                         (short)((ulong)uVar20 >>
                                                                                0x30)),
                                                              CONCAT12(~bVar16 ^ -((short)((ulong)
                                                  uVar6 >> 0x20) == (short)((ulong)uVar20 >> 0x20)),
                                                  CONCAT11(~bVar15 ^ -((short)((ulong)uVar6 >> 0x10)
                                                                      == (short)((ulong)uVar20 >>
                                                                                0x10)),
                                                           ~bVar13 ^ -((short)uVar6 == (short)uVar20
                                                                      ))))))));
            *(undefined8 *)(param_5 + uVar9) =
                 CONCAT17(~bVar17 ^ -((short)((ulong)uVar5 >> 0x30) ==
                                     (short)((ulong)uVar19 >> 0x30)),
                          CONCAT16(~bVar16 ^ -((short)((ulong)uVar5 >> 0x20) ==
                                              (short)((ulong)uVar19 >> 0x20)),
                                   CONCAT15(~bVar15 ^ -((short)((ulong)uVar5 >> 0x10) ==
                                                       (short)((ulong)uVar19 >> 0x10)),
                                            CONCAT14(~bVar13 ^ -((short)uVar5 == (short)uVar19),
                                                     CONCAT13(~bVar17 ^ -((short)((ulong)uVar4 >>
                                                                                 0x30) ==
                                                                         (short)((ulong)uVar18 >>
                                                                                0x30)),
                                                              CONCAT12(~bVar16 ^ -((short)((ulong)
                                                  uVar4 >> 0x20) == (short)((ulong)uVar18 >> 0x20)),
                                                  CONCAT11(~bVar15 ^ -((short)((ulong)uVar4 >> 0x10)
                                                                      == (short)((ulong)uVar18 >>
                                                                                0x10)),
                                                           ~bVar13 ^ -((short)uVar4 == (short)uVar18
                                                                      ))))))));
            uVar9 = uVar9 + 0x10;
            lVar11 = lVar11 + 0x20;
          } while ((long)uVar9 <= (long)(int)(param_7 - 0x10));
          uVar9 = uVar9 & 0xffffffff;
        }
        if ((int)uVar9 < (int)param_7) {
          do {
            *(char *)(param_5 + uVar9) =
                 -((uVar3 == 0) !=
                  (*(short *)(param_1 + uVar9 * 2) != *(short *)(param_3 + uVar9 * 2)));
            uVar9 = uVar9 + 1;
          } while (param_7 != uVar9);
        }
        param_5 = param_5 + param_6;
        param_3 = param_3 + param_4 * 2;
        param_1 = param_1 + param_2 * 2;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
      return;
    }
  }
  if (param_8 != 0) {
    bVar13 = -bVar8;
    do {
      if ((int)param_7 < 0x10) {
        uVar10 = 0;
      }
      else {
        lVar12 = 0;
        uVar10 = 0;
        do {
          puVar1 = (undefined8 *)(param_1 + lVar12);
          puVar2 = (undefined8 *)(lVar11 + lVar12);
          uVar5 = puVar1[1];
          uVar4 = *puVar1;
          uVar7 = puVar1[3];
          uVar6 = puVar1[2];
          uVar19 = puVar2[1];
          uVar18 = *puVar2;
          uVar21 = puVar2[3];
          uVar20 = puVar2[2];
          ((undefined8 *)(param_5 + uVar10))[1] =
               CONCAT17(~bVar13 ^ -((short)((ulong)uVar21 >> 0x30) < (short)((ulong)uVar7 >> 0x30)),
                        CONCAT16(~bVar13 ^ -((short)((ulong)uVar21 >> 0x20) <
                                            (short)((ulong)uVar7 >> 0x20)),
                                 CONCAT15(~bVar13 ^ -((short)((ulong)uVar21 >> 0x10) <
                                                     (short)((ulong)uVar7 >> 0x10)),
                                          CONCAT14(~bVar13 ^ -((short)uVar21 < (short)uVar7),
                                                   CONCAT13(~bVar13 ^ -((short)((ulong)uVar20 >>
                                                                               0x30) <
                                                                       (short)((ulong)uVar6 >> 0x30)
                                                                       ),
                                                            CONCAT12(~bVar13 ^ -((short)((ulong)
                                                  uVar20 >> 0x20) < (short)((ulong)uVar6 >> 0x20)),
                                                  CONCAT11(~bVar13 ^ -((short)((ulong)uVar20 >> 0x10
                                                                              ) <
                                                                      (short)((ulong)uVar6 >> 0x10))
                                                           ,~bVar13 ^ -((short)uVar20 < (short)uVar6
                                                                       ))))))));
          *(undefined8 *)(param_5 + uVar10) =
               CONCAT17(~bVar13 ^ -((short)((ulong)uVar19 >> 0x30) < (short)((ulong)uVar5 >> 0x30)),
                        CONCAT16(~bVar13 ^ -((short)((ulong)uVar19 >> 0x20) <
                                            (short)((ulong)uVar5 >> 0x20)),
                                 CONCAT15(~bVar13 ^ -((short)((ulong)uVar19 >> 0x10) <
                                                     (short)((ulong)uVar5 >> 0x10)),
                                          CONCAT14(~bVar13 ^ -((short)uVar19 < (short)uVar5),
                                                   CONCAT13(~bVar13 ^ -((short)((ulong)uVar18 >>
                                                                               0x30) <
                                                                       (short)((ulong)uVar4 >> 0x30)
                                                                       ),
                                                            CONCAT12(~bVar13 ^ -((short)((ulong)
                                                  uVar18 >> 0x20) < (short)((ulong)uVar4 >> 0x20)),
                                                  CONCAT11(~bVar13 ^ -((short)((ulong)uVar18 >> 0x10
                                                                              ) <
                                                                      (short)((ulong)uVar4 >> 0x10))
                                                           ,~bVar13 ^ -((short)uVar18 < (short)uVar4
                                                                       ))))))));
          uVar10 = uVar10 + 0x10;
          lVar12 = lVar12 + 0x20;
        } while ((long)uVar10 <= (long)(int)(param_7 - 0x10));
        uVar10 = uVar10 & 0xffffffff;
      }
      if ((int)uVar10 < (int)param_7) {
        do {
          *(char *)(param_5 + uVar10) =
               -(bVar8 ^ *(short *)(param_1 + uVar10 * 2) <= *(short *)(lVar11 + uVar10 * 2));
          uVar10 = uVar10 + 1;
        } while (param_7 != uVar10);
      }
      param_5 = param_5 + param_6;
      lVar11 = lVar11 + param_4 * 2;
      param_1 = param_1 + uVar9 * 2;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a30df0; end: 109a311ab;  */

void FUN_109a30df0(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  uVar11 = *param_9;
  param_2 = param_2 >> 2;
  param_4 = param_4 >> 2;
  if ((uVar11 & 0xfffffffe) == 2) {
    bVar10 = uVar11 != 2;
    uVar11 = 4;
    lVar15 = param_3;
    uVar14 = param_2;
    if (bVar10) {
      uVar11 = 1;
    }
  }
  else {
    bVar10 = uVar11 == 1;
    lVar15 = param_1;
    uVar14 = param_4;
    if ((int)uVar11 < 4) {
      if (uVar11 == 0) {
LAB_109a310c4:
        bVar12 = 0;
        if (uVar11 != 0) {
          bVar12 = 0xff;
        }
        if (param_8 == 0) {
          return;
        }
        do {
          if ((int)param_7 < 4) {
            uVar14 = 0;
          }
          else {
            lVar15 = 0;
            uVar14 = 0;
            do {
              piVar6 = (int *)(param_1 + lVar15);
              piVar7 = (int *)(param_3 + lVar15);
              bVar8 = bVar12;
              if (piVar6[1] == piVar7[1]) {
                bVar8 = ~bVar12;
              }
              bVar9 = bVar12;
              if (*piVar6 == *piVar7) {
                bVar9 = ~bVar12;
              }
              pbVar5 = (byte *)(param_5 + uVar14);
              *pbVar5 = bVar9;
              pbVar5[1] = bVar8;
              bVar8 = bVar12;
              if (piVar6[3] == piVar7[3]) {
                bVar8 = ~bVar12;
              }
              bVar9 = bVar12;
              if (piVar6[2] == piVar7[2]) {
                bVar9 = ~bVar12;
              }
              pbVar5[2] = bVar9;
              pbVar5[3] = bVar8;
              uVar14 = uVar14 + 4;
              lVar15 = lVar15 + 0x10;
            } while ((long)uVar14 <= (long)(int)(param_7 - 4));
            uVar14 = uVar14 & 0xffffffff;
          }
          if ((int)uVar14 < (int)param_7) {
            do {
              bVar8 = bVar12;
              if (*(int *)(param_1 + uVar14 * 4) == *(int *)(param_3 + uVar14 * 4)) {
                bVar8 = ~bVar12;
              }
              *(byte *)(param_5 + uVar14) = bVar8;
              uVar14 = uVar14 + 1;
            } while (param_7 != uVar14);
          }
          param_5 = param_5 + param_6;
          param_3 = param_3 + param_4 * 4;
          param_1 = param_1 + param_2 * 4;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
        return;
      }
      param_1 = param_3;
      param_4 = param_2;
      if (uVar11 != 1) {
        return;
      }
    }
    else {
      if (uVar11 == 5) goto LAB_109a310c4;
      param_1 = param_3;
      param_4 = param_2;
      if (uVar11 != 4) {
        return;
      }
    }
  }
  bVar12 = 0;
  if (!bVar10) {
    bVar12 = 0xff;
  }
  if (param_8 != 0) {
    uVar13 = (ulong)(param_7 - 8);
    do {
      uVar16 = 0;
      if ((int)uVar11 < 4) {
        if (uVar11 == 0) {
          if ((int)param_7 < 8) {
LAB_109a30f6c:
            uVar16 = 0;
          }
          else {
            lVar17 = 0;
            uVar16 = 0;
            do {
              puVar1 = (undefined8 *)(lVar15 + lVar17);
              puVar2 = (undefined8 *)(param_1 + lVar17);
              *(ulong *)(param_5 + uVar16) =
                   CONCAT17(-((int)((ulong)puVar1[3] >> 0x20) == (int)((ulong)puVar2[3] >> 0x20)),
                            CONCAT16(-((int)puVar1[3] == (int)puVar2[3]),
                                     CONCAT15(-((int)((ulong)puVar1[2] >> 0x20) ==
                                               (int)((ulong)puVar2[2] >> 0x20)),
                                              CONCAT14(-((int)puVar1[2] == (int)puVar2[2]),
                                                       CONCAT13(-((int)((ulong)puVar1[1] >> 0x20) ==
                                                                 (int)((ulong)puVar2[1] >> 0x20)),
                                                                CONCAT12(-((int)puVar1[1] ==
                                                                          (int)puVar2[1]),
                                                                         CONCAT11(-((int)((ulong)*
                                                  puVar1 >> 0x20) == (int)((ulong)*puVar2 >> 0x20)),
                                                  -((int)*puVar1 == (int)*puVar2))))))));
              uVar16 = uVar16 + 8;
              lVar17 = lVar17 + 0x20;
            } while (uVar16 <= uVar13);
          }
        }
        else if (uVar11 == 1) {
          if ((int)param_7 < 8) goto LAB_109a30f6c;
          lVar17 = 0;
          uVar16 = 0;
          do {
            puVar1 = (undefined8 *)(lVar15 + lVar17);
            puVar2 = (undefined8 *)(param_1 + lVar17);
            *(ulong *)(param_5 + uVar16) =
                 CONCAT17(-((int)((ulong)puVar2[3] >> 0x20) < (int)((ulong)puVar1[3] >> 0x20)),
                          CONCAT16(-((int)puVar2[3] < (int)puVar1[3]),
                                   CONCAT15(-((int)((ulong)puVar2[2] >> 0x20) <
                                             (int)((ulong)puVar1[2] >> 0x20)),
                                            CONCAT14(-((int)puVar2[2] < (int)puVar1[2]),
                                                     CONCAT13(-((int)((ulong)puVar2[1] >> 0x20) <
                                                               (int)((ulong)puVar1[1] >> 0x20)),
                                                              CONCAT12(-((int)puVar2[1] <
                                                                        (int)puVar1[1]),
                                                                       CONCAT11(-((int)((ulong)*
                                                  puVar2 >> 0x20) < (int)((ulong)*puVar1 >> 0x20)),
                                                  -((int)*puVar2 < (int)*puVar1))))))));
            uVar16 = uVar16 + 8;
            lVar17 = lVar17 + 0x20;
          } while (uVar16 <= uVar13);
        }
      }
      else if (uVar11 == 4) {
        if ((int)param_7 < 8) goto LAB_109a30f6c;
        lVar17 = 0;
        uVar16 = 0;
        do {
          puVar1 = (undefined8 *)(lVar15 + lVar17);
          puVar2 = (undefined8 *)(param_1 + lVar17);
          *(ulong *)(param_5 + uVar16) =
               CONCAT17(-((int)((ulong)puVar1[3] >> 0x20) <= (int)((ulong)puVar2[3] >> 0x20)),
                        CONCAT16(-((int)puVar1[3] <= (int)puVar2[3]),
                                 CONCAT15(-((int)((ulong)puVar1[2] >> 0x20) <=
                                           (int)((ulong)puVar2[2] >> 0x20)),
                                          CONCAT14(-((int)puVar1[2] <= (int)puVar2[2]),
                                                   CONCAT13(-((int)((ulong)puVar1[1] >> 0x20) <=
                                                             (int)((ulong)puVar2[1] >> 0x20)),
                                                            CONCAT12(-((int)puVar1[1] <=
                                                                      (int)puVar2[1]),
                                                                     CONCAT11(-((int)((ulong)*puVar1
                                                                                     >> 0x20) <=
                                                                               (int)((ulong)*puVar2
                                                                                    >> 0x20)),
                                                                              -((int)*puVar1 <=
                                                                               (int)*puVar2))))))));
          uVar16 = uVar16 + 8;
          lVar17 = lVar17 + 0x20;
        } while (uVar16 <= uVar13);
      }
      else if (uVar11 == 5) {
        if ((int)param_7 < 8) goto LAB_109a30f6c;
        lVar17 = 0;
        uVar16 = 0;
        do {
          puVar1 = (undefined8 *)(lVar15 + lVar17);
          puVar2 = (undefined8 *)(param_1 + lVar17);
          *(ulong *)(param_5 + uVar16) =
               CONCAT17(~-((int)((ulong)puVar1[3] >> 0x20) == (int)((ulong)puVar2[3] >> 0x20)),
                        CONCAT16(~-((int)puVar1[3] == (int)puVar2[3]),
                                 CONCAT15(~-((int)((ulong)puVar1[2] >> 0x20) ==
                                            (int)((ulong)puVar2[2] >> 0x20)),
                                          CONCAT14(~-((int)puVar1[2] == (int)puVar2[2]),
                                                   CONCAT13(~-((int)((ulong)puVar1[1] >> 0x20) ==
                                                              (int)((ulong)puVar2[1] >> 0x20)),
                                                            CONCAT12(~-((int)puVar1[1] ==
                                                                       (int)puVar2[1]),
                                                                     CONCAT11(~-((int)((ulong)*
                                                  puVar1 >> 0x20) == (int)((ulong)*puVar2 >> 0x20)),
                                                  ~-((int)*puVar1 == (int)*puVar2))))))));
          uVar16 = uVar16 + 8;
          lVar17 = lVar17 + 0x20;
        } while (uVar16 <= uVar13);
      }
      if ((int)uVar16 <= (int)(param_7 - 4)) {
        lVar17 = (uVar16 & 0xffffffff) * 4 + 0xc;
        uVar16 = uVar16 & 0xffffffff;
        do {
          lVar3 = lVar15 + uVar16 * 4;
          lVar4 = param_1 + uVar16 * 4;
          bVar8 = bVar12;
          if (*(int *)(lVar4 + 4) < *(int *)(lVar3 + 4)) {
            bVar8 = ~bVar12;
          }
          bVar9 = bVar12;
          if (((int *)(param_1 + lVar17))[-3] < ((int *)(lVar15 + lVar17))[-3]) {
            bVar9 = ~bVar12;
          }
          pbVar5 = (byte *)(param_5 + uVar16);
          *pbVar5 = bVar9;
          pbVar5[1] = bVar8;
          bVar8 = bVar12;
          if (*(int *)(param_1 + lVar17) < *(int *)(lVar15 + lVar17)) {
            bVar8 = ~bVar12;
          }
          bVar9 = bVar12;
          if (*(int *)(lVar4 + 8) < *(int *)(lVar3 + 8)) {
            bVar9 = ~bVar12;
          }
          pbVar5[2] = bVar9;
          pbVar5[3] = bVar8;
          uVar16 = uVar16 + 4;
          lVar17 = lVar17 + 0x10;
        } while ((long)uVar16 <= (long)(int)(param_7 - 4));
      }
      if ((int)uVar16 < (int)param_7) {
        lVar17 = (long)(int)uVar16;
        do {
          bVar8 = bVar12;
          if (*(int *)(param_1 + lVar17 * 4) < *(int *)(lVar15 + lVar17 * 4)) {
            bVar8 = ~bVar12;
          }
          *(byte *)(param_5 + lVar17) = bVar8;
          lVar17 = lVar17 + 1;
        } while ((int)param_7 != lVar17);
      }
      param_5 = param_5 + param_6;
      param_1 = param_1 + uVar14 * 4;
      lVar15 = lVar15 + param_4 * 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a311ac; end: 109a31587;  */

void FUN_109a311ac(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  uVar9 = *param_9;
  param_2 = param_2 >> 2;
  param_4 = param_4 >> 2;
  if ((uVar9 & 0xfffffffe) == 2) {
    bVar8 = uVar9 != 2;
    uVar9 = 4;
    lVar13 = param_3;
    uVar12 = param_2;
    if (bVar8) {
      uVar9 = 1;
    }
  }
  else {
    bVar8 = uVar9 == 1;
    lVar13 = param_1;
    uVar12 = param_4;
    if ((int)uVar9 < 4) {
      if (uVar9 == 0) {
LAB_109a31490:
        bVar10 = 0;
        if (uVar9 != 0) {
          bVar10 = 0xff;
        }
        if (param_8 == 0) {
          return;
        }
        do {
          if ((int)param_7 < 4) {
            uVar12 = 0;
          }
          else {
            lVar13 = 0;
            uVar12 = 0;
            do {
              pfVar6 = (float *)(param_1 + lVar13);
              pfVar7 = (float *)(param_3 + lVar13);
              fVar17 = pfVar6[1];
              fVar16 = pfVar7[1];
              pbVar5 = (byte *)(param_5 + uVar12);
              *pbVar5 = bVar10 ^ -(*pfVar6 == *pfVar7);
              pbVar5[1] = bVar10 ^ -(fVar17 == fVar16);
              fVar17 = pfVar6[3];
              fVar16 = pfVar7[3];
              pbVar5[2] = bVar10 ^ -(pfVar6[2] == pfVar7[2]);
              pbVar5[3] = bVar10 ^ -(fVar17 == fVar16);
              uVar12 = uVar12 + 4;
              lVar13 = lVar13 + 0x10;
            } while ((long)uVar12 <= (long)(int)(param_7 - 4));
            uVar12 = uVar12 & 0xffffffff;
          }
          if ((int)uVar12 < (int)param_7) {
            do {
              *(byte *)(param_5 + uVar12) =
                   bVar10 ^ -(*(float *)(param_1 + uVar12 * 4) == *(float *)(param_3 + uVar12 * 4));
              uVar12 = uVar12 + 1;
            } while (param_7 != uVar12);
          }
          param_5 = param_5 + param_6;
          param_3 = param_3 + param_4 * 4;
          param_1 = param_1 + param_2 * 4;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
        return;
      }
      param_1 = param_3;
      param_4 = param_2;
      if (uVar9 != 1) {
        return;
      }
    }
    else {
      if (uVar9 == 5) goto LAB_109a31490;
      param_1 = param_3;
      param_4 = param_2;
      if (uVar9 != 4) {
        return;
      }
    }
  }
  bVar10 = 0;
  if (!bVar8) {
    bVar10 = 0xff;
  }
  if (param_8 != 0) {
    uVar11 = (ulong)(param_7 - 8);
    do {
      uVar14 = 0;
      if ((int)uVar9 < 4) {
        if (uVar9 == 0) {
          if ((int)param_7 < 8) {
LAB_109a31324:
            uVar14 = 0;
          }
          else {
            lVar15 = 0;
            uVar14 = 0;
            do {
              puVar1 = (undefined8 *)(lVar13 + lVar15);
              puVar2 = (undefined8 *)(param_1 + lVar15);
              *(ulong *)(param_5 + uVar14) =
                   CONCAT17(-((float)((ulong)puVar1[3] >> 0x20) == (float)((ulong)puVar2[3] >> 0x20)
                             ),CONCAT16(-((float)puVar1[3] == (float)puVar2[3]),
                                        CONCAT15(-((float)((ulong)puVar1[2] >> 0x20) ==
                                                  (float)((ulong)puVar2[2] >> 0x20)),
                                                 CONCAT14(-((float)puVar1[2] == (float)puVar2[2]),
                                                          CONCAT13(-((float)((ulong)puVar1[1] >>
                                                                            0x20) ==
                                                                    (float)((ulong)puVar2[1] >> 0x20
                                                                           )),
                                                                   CONCAT12(-((float)puVar1[1] ==
                                                                             (float)puVar2[1]),
                                                                            CONCAT11(-((float)((
                                                  ulong)*puVar1 >> 0x20) ==
                                                  (float)((ulong)*puVar2 >> 0x20)),
                                                  -((float)*puVar1 == (float)*puVar2))))))));
              uVar14 = uVar14 + 8;
              lVar15 = lVar15 + 0x20;
            } while (uVar14 <= uVar11);
          }
        }
        else if (uVar9 == 1) {
          if ((int)param_7 < 8) goto LAB_109a31324;
          lVar15 = 0;
          uVar14 = 0;
          do {
            puVar1 = (undefined8 *)(lVar13 + lVar15);
            puVar2 = (undefined8 *)(param_1 + lVar15);
            *(ulong *)(param_5 + uVar14) =
                 CONCAT17(-((float)((ulong)puVar2[3] >> 0x20) < (float)((ulong)puVar1[3] >> 0x20)),
                          CONCAT16(-((float)puVar2[3] < (float)puVar1[3]),
                                   CONCAT15(-((float)((ulong)puVar2[2] >> 0x20) <
                                             (float)((ulong)puVar1[2] >> 0x20)),
                                            CONCAT14(-((float)puVar2[2] < (float)puVar1[2]),
                                                     CONCAT13(-((float)((ulong)puVar2[1] >> 0x20) <
                                                               (float)((ulong)puVar1[1] >> 0x20)),
                                                              CONCAT12(-((float)puVar2[1] <
                                                                        (float)puVar1[1]),
                                                                       CONCAT11(-((float)((ulong)*
                                                  puVar2 >> 0x20) < (float)((ulong)*puVar1 >> 0x20))
                                                  ,-((float)*puVar2 < (float)*puVar1))))))));
            uVar14 = uVar14 + 8;
            lVar15 = lVar15 + 0x20;
          } while (uVar14 <= uVar11);
        }
      }
      else if (uVar9 == 4) {
        if ((int)param_7 < 8) goto LAB_109a31324;
        lVar15 = 0;
        uVar14 = 0;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar15);
          puVar2 = (undefined8 *)(param_1 + lVar15);
          *(ulong *)(param_5 + uVar14) =
               CONCAT17(-((float)((ulong)puVar1[3] >> 0x20) <= (float)((ulong)puVar2[3] >> 0x20)),
                        CONCAT16(-((float)puVar1[3] <= (float)puVar2[3]),
                                 CONCAT15(-((float)((ulong)puVar1[2] >> 0x20) <=
                                           (float)((ulong)puVar2[2] >> 0x20)),
                                          CONCAT14(-((float)puVar1[2] <= (float)puVar2[2]),
                                                   CONCAT13(-((float)((ulong)puVar1[1] >> 0x20) <=
                                                             (float)((ulong)puVar2[1] >> 0x20)),
                                                            CONCAT12(-((float)puVar1[1] <=
                                                                      (float)puVar2[1]),
                                                                     CONCAT11(-((float)((ulong)*
                                                  puVar1 >> 0x20) <= (float)((ulong)*puVar2 >> 0x20)
                                                  ),-((float)*puVar1 <= (float)*puVar2))))))));
          uVar14 = uVar14 + 8;
          lVar15 = lVar15 + 0x20;
        } while (uVar14 <= uVar11);
      }
      else if (uVar9 == 5) {
        if ((int)param_7 < 8) goto LAB_109a31324;
        lVar15 = 0;
        uVar14 = 0;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar15);
          puVar2 = (undefined8 *)(param_1 + lVar15);
          *(ulong *)(param_5 + uVar14) =
               CONCAT17(~-((float)((ulong)puVar1[3] >> 0x20) == (float)((ulong)puVar2[3] >> 0x20)),
                        CONCAT16(~-((float)puVar1[3] == (float)puVar2[3]),
                                 CONCAT15(~-((float)((ulong)puVar1[2] >> 0x20) ==
                                            (float)((ulong)puVar2[2] >> 0x20)),
                                          CONCAT14(~-((float)puVar1[2] == (float)puVar2[2]),
                                                   CONCAT13(~-((float)((ulong)puVar1[1] >> 0x20) ==
                                                              (float)((ulong)puVar2[1] >> 0x20)),
                                                            CONCAT12(~-((float)puVar1[1] ==
                                                                       (float)puVar2[1]),
                                                                     CONCAT11(~-((float)((ulong)*
                                                  puVar1 >> 0x20) == (float)((ulong)*puVar2 >> 0x20)
                                                  ),~-((float)*puVar1 == (float)*puVar2))))))));
          uVar14 = uVar14 + 8;
          lVar15 = lVar15 + 0x20;
        } while (uVar14 <= uVar11);
      }
      if ((int)uVar14 <= (int)(param_7 - 4)) {
        lVar15 = (uVar14 & 0xffffffff) * 4 + 0xc;
        uVar14 = uVar14 & 0xffffffff;
        do {
          lVar3 = lVar13 + uVar14 * 4;
          fVar17 = *(float *)(lVar3 + 4);
          lVar4 = param_1 + uVar14 * 4;
          fVar16 = *(float *)(lVar4 + 4);
          pbVar5 = (byte *)(param_5 + uVar14);
          *pbVar5 = bVar10 ^ -(((float *)(param_1 + lVar15))[-3] < ((float *)(lVar13 + lVar15))[-3])
          ;
          pbVar5[1] = bVar10 ^ -(fVar16 < fVar17);
          fVar17 = *(float *)(lVar13 + lVar15);
          fVar16 = *(float *)(param_1 + lVar15);
          pbVar5[2] = bVar10 ^ -(*(float *)(lVar4 + 8) < *(float *)(lVar3 + 8));
          pbVar5[3] = bVar10 ^ -(fVar16 < fVar17);
          uVar14 = uVar14 + 4;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar14 <= (long)(int)(param_7 - 4));
      }
      if ((int)uVar14 < (int)param_7) {
        lVar15 = (long)(int)uVar14;
        do {
          *(byte *)(param_5 + lVar15) =
               bVar10 ^ -(*(float *)(param_1 + lVar15 * 4) < *(float *)(lVar13 + lVar15 * 4));
          lVar15 = lVar15 + 1;
        } while ((int)param_7 != lVar15);
      }
      param_5 = param_5 + param_6;
      param_1 = param_1 + uVar12 * 4;
      lVar13 = lVar13 + param_4 * 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a31588; end: 109a317df;  */

void FUN_109a31588(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
                  uint param_7,int param_8,uint *param_9)

{
  double *pdVar1;
  double *pdVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  uVar4 = *param_9;
  param_2 = param_2 >> 3;
  param_4 = param_4 >> 3;
  if ((uVar4 & 0xfffffffe) == 2) {
    bVar5 = uVar4 != 2;
    lVar9 = param_1;
    param_1 = param_3;
    uVar7 = param_4;
    param_4 = param_2;
  }
  else {
    bVar5 = uVar4 == 1;
    lVar9 = param_3;
    uVar7 = param_2;
    if ((int)uVar4 < 4) {
      if (uVar4 == 0) {
LAB_109a316f0:
        bVar6 = 0;
        if (uVar4 != 0) {
          bVar6 = 0xff;
        }
        if (param_8 == 0) {
          return;
        }
        do {
          if ((int)param_7 < 4) {
            uVar7 = 0;
          }
          else {
            lVar9 = 0;
            uVar7 = 0;
            do {
              pdVar1 = (double *)(param_1 + lVar9);
              pdVar2 = (double *)(param_3 + lVar9);
              dVar11 = pdVar1[1];
              dVar12 = pdVar2[1];
              pbVar3 = (byte *)(param_5 + uVar7);
              *pbVar3 = bVar6 ^ -(*pdVar1 == *pdVar2);
              pbVar3[1] = bVar6 ^ -(dVar11 == dVar12);
              dVar11 = pdVar1[3];
              dVar12 = pdVar2[3];
              pbVar3[2] = bVar6 ^ -(pdVar1[2] == pdVar2[2]);
              pbVar3[3] = bVar6 ^ -(dVar11 == dVar12);
              uVar7 = uVar7 + 4;
              lVar9 = lVar9 + 0x20;
            } while ((long)uVar7 <= (long)(int)(param_7 - 4));
            uVar7 = uVar7 & 0xffffffff;
          }
          if ((int)uVar7 < (int)param_7) {
            do {
              *(byte *)(param_5 + uVar7) =
                   bVar6 ^ -(*(double *)(param_1 + uVar7 * 8) == *(double *)(param_3 + uVar7 * 8));
              uVar7 = uVar7 + 1;
            } while (param_7 != uVar7);
          }
          param_5 = param_5 + param_6;
          param_3 = param_3 + param_4 * 8;
          param_1 = param_1 + param_2 * 8;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
        return;
      }
      if (uVar4 != 1) {
        return;
      }
    }
    else {
      if (uVar4 == 5) goto LAB_109a316f0;
      if (uVar4 != 4) {
        return;
      }
    }
  }
  bVar6 = 0;
  if (!bVar5) {
    bVar6 = 0xff;
  }
  if (param_8 != 0) {
    do {
      if ((int)param_7 < 4) {
        uVar8 = 0;
      }
      else {
        lVar10 = 0;
        uVar8 = 0;
        do {
          pdVar1 = (double *)(param_1 + lVar10);
          pdVar2 = (double *)(lVar9 + lVar10);
          dVar11 = pdVar1[1];
          dVar12 = pdVar2[1];
          pbVar3 = (byte *)(param_5 + uVar8);
          *pbVar3 = bVar6 ^ -(*pdVar2 < *pdVar1);
          pbVar3[1] = bVar6 ^ -(dVar12 < dVar11);
          dVar11 = pdVar1[3];
          dVar12 = pdVar2[3];
          pbVar3[2] = bVar6 ^ -(pdVar2[2] < pdVar1[2]);
          pbVar3[3] = bVar6 ^ -(dVar12 < dVar11);
          uVar8 = uVar8 + 4;
          lVar10 = lVar10 + 0x20;
        } while ((long)uVar8 <= (long)(int)(param_7 - 4));
        uVar8 = uVar8 & 0xffffffff;
      }
      if ((int)uVar8 < (int)param_7) {
        do {
          *(byte *)(param_5 + uVar8) =
               bVar6 ^ -(*(double *)(lVar9 + uVar8 * 8) < *(double *)(param_1 + uVar8 * 8));
          uVar8 = uVar8 + 1;
        } while (param_7 != uVar8);
      }
      param_5 = param_5 + param_6;
      lVar9 = lVar9 + param_4 * 8;
      param_1 = param_1 + uVar7 * 8;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a317e0; end: 109a3257f;  */

void FUN_109a317e0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,int param_8,double *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = (float)*param_9;
  iVar8 = (int)param_7;
  if (fVar13 == 1.0) {
    if (param_8 != 0) {
      lVar9 = param_5 + 1;
      do {
        lVar5 = param_1;
        FUN_109a37b04(0x3f800000,param_1,param_3,param_5,param_7);
        iVar4 = (int)lVar5;
        if (iVar4 <= iVar8 + -4) {
          lVar5 = 0;
          do {
            pbVar1 = (byte *)(param_1 + iVar4 + lVar5);
            pbVar2 = (byte *)(param_3 + iVar4 + lVar5);
            uVar6 = (uint)*pbVar2 * (uint)*pbVar1;
            if (0xfe < uVar6) {
              uVar6 = 0xff;
            }
            uVar7 = (uint)pbVar2[1] * (uint)pbVar1[1];
            if (0xfe < uVar7) {
              uVar7 = 0xff;
            }
            puVar3 = (undefined1 *)(lVar9 + iVar4 + lVar5);
            puVar3[-1] = (char)uVar6;
            *puVar3 = (char)uVar7;
            uVar6 = (uint)pbVar2[2] * (uint)pbVar1[2];
            if (0xfe < uVar6) {
              uVar6 = 0xff;
            }
            uVar7 = (uint)pbVar2[3] * (uint)pbVar1[3];
            if (0xfe < uVar7) {
              uVar7 = 0xff;
            }
            puVar3[1] = (char)uVar6;
            puVar3[2] = (char)uVar7;
            lVar5 = lVar5 + 4;
          } while (iVar4 + lVar5 <= (long)(iVar8 + -4));
          iVar4 = iVar4 + (int)lVar5;
        }
        if (iVar4 < iVar8) {
          lVar5 = (long)iVar4;
          do {
            uVar6 = (uint)*(byte *)(param_3 + lVar5) * (uint)*(byte *)(param_1 + lVar5);
            if (0xfe < uVar6) {
              uVar6 = 0xff;
            }
            *(char *)(param_5 + lVar5) = (char)uVar6;
            lVar5 = lVar5 + 1;
          } while (iVar8 != lVar5);
        }
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
        param_5 = param_5 + param_6;
        lVar9 = lVar9 + param_6;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
  }
  else if (param_8 != 0) {
    lVar9 = param_5 + 1;
    do {
      lVar5 = param_1;
      FUN_109a37b04(fVar13,param_1,param_3,param_5,param_7);
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar8 + -4) {
        lVar5 = 0;
        do {
          pbVar1 = (byte *)(param_1 + iVar4 + lVar5);
          fVar10 = (float)NEON_ucvtf((uint)*pbVar1);
          pbVar2 = (byte *)(param_3 + iVar4 + lVar5);
          fVar12 = (float)NEON_ucvtf((uint)*pbVar2);
          fVar11 = (float)NEON_ucvtf((uint)pbVar1[1]);
          uVar6 = (uint)(long)(float)(int)(fVar13 * fVar10 * fVar12);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          fVar10 = (float)NEON_ucvtf((uint)pbVar2[1]);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar7 = (uint)(long)(float)(int)(fVar13 * fVar11 * fVar10);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar3 = (undefined1 *)(lVar9 + iVar4 + lVar5);
          puVar3[-1] = (char)uVar6;
          *puVar3 = (char)uVar7;
          fVar10 = (float)NEON_ucvtf((uint)pbVar1[2]);
          fVar11 = (float)NEON_ucvtf((uint)pbVar2[2]);
          uVar6 = (uint)(long)(float)(int)(fVar13 * fVar10 * fVar11);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          fVar10 = (float)NEON_ucvtf((uint)pbVar1[3]);
          fVar11 = (float)NEON_ucvtf((uint)pbVar2[3]);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          uVar7 = (uint)(long)(float)(int)(fVar13 * fVar10 * fVar11);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          puVar3[1] = (char)uVar6;
          puVar3[2] = (char)uVar7;
          lVar5 = lVar5 + 4;
        } while (iVar4 + lVar5 <= (long)(iVar8 + -4));
        iVar4 = iVar4 + (int)lVar5;
      }
      if (iVar4 < iVar8) {
        lVar5 = (long)iVar4;
        do {
          fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + lVar5));
          fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_3 + lVar5));
          uVar6 = (uint)(long)(float)(int)(fVar13 * fVar10 * fVar11);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *(char *)(param_5 + lVar5) = (char)uVar6;
          lVar5 = lVar5 + 1;
        } while (iVar8 != lVar5);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar9 = lVar9 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a32580; end: 109a32b1f;  */

void FUN_109a32580(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  uint param_7,int param_8,double *param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  dVar8 = *param_9;
  if (dVar8 == 1.0) {
    if (param_8 != 0) {
      do {
        if ((int)param_7 < 4) {
          uVar6 = 0;
        }
        else {
          lVar7 = 0;
          uVar6 = 0;
          do {
            uVar9 = *(undefined8 *)(param_1 + lVar7);
            uVar10 = *(undefined8 *)(param_3 + lVar7);
            *(undefined8 *)(param_5 + lVar7) =
                 CONCAT44((int)((ulong)uVar10 >> 0x20) * (int)((ulong)uVar9 >> 0x20),
                          (int)uVar10 * (int)uVar9);
            uVar9 = ((undefined8 *)(param_1 + lVar7))[1];
            uVar10 = ((undefined8 *)(param_3 + lVar7))[1];
            ((undefined8 *)(param_5 + lVar7))[1] =
                 CONCAT44((int)((ulong)uVar10 >> 0x20) * (int)((ulong)uVar9 >> 0x20),
                          (int)uVar10 * (int)uVar9);
            uVar6 = uVar6 + 4;
            lVar7 = lVar7 + 0x10;
          } while ((long)uVar6 <= (long)(int)(param_7 - 4));
          uVar6 = uVar6 & 0xffffffff;
        }
        if ((int)uVar6 < (int)param_7) {
          do {
            *(int *)(param_5 + uVar6 * 4) =
                 *(int *)(param_3 + uVar6 * 4) * *(int *)(param_1 + uVar6 * 4);
            uVar6 = uVar6 + 1;
          } while (param_7 != uVar6);
        }
        param_5 = param_5 + (param_6 >> 2) * 4;
        param_3 = param_3 + (param_4 >> 2) * 4;
        param_1 = param_1 + (param_2 >> 2) * 4;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
  }
  else if (param_8 != 0) {
    do {
      if ((int)param_7 < 4) {
        uVar6 = 0;
      }
      else {
        lVar7 = 0;
        uVar6 = 0;
        do {
          piVar1 = (int *)(param_1 + lVar7);
          iVar4 = piVar1[1];
          piVar2 = (int *)(param_3 + lVar7);
          iVar5 = piVar2[1];
          puVar3 = (undefined4 *)(param_5 + lVar7);
          *puVar3 = (int)(long)(double)(long)(dVar8 * (double)*piVar1 * (double)*piVar2);
          puVar3[1] = (int)(long)(double)(long)(dVar8 * (double)iVar4 * (double)iVar5);
          iVar4 = piVar1[3];
          iVar5 = piVar2[3];
          puVar3[2] = (int)(long)(double)(long)(dVar8 * (double)piVar1[2] * (double)piVar2[2]);
          puVar3[3] = (int)(long)(double)(long)(dVar8 * (double)iVar4 * (double)iVar5);
          uVar6 = uVar6 + 4;
          lVar7 = lVar7 + 0x10;
        } while ((long)uVar6 <= (long)(int)(param_7 - 4));
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 < (int)param_7) {
        do {
          *(int *)(param_5 + uVar6 * 4) =
               (int)(long)(double)(long)(dVar8 * (double)*(int *)(param_1 + uVar6 * 4) *
                                        (double)*(int *)(param_3 + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (param_7 != uVar6);
      }
      param_5 = param_5 + (param_6 >> 2) * 4;
      param_3 = param_3 + (param_4 >> 2) * 4;
      param_1 = param_1 + (param_2 >> 2) * 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a32b20; end: 109a3436f;  */

void FUN_109a32b20(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  int param_7,int param_8,double *param_9)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  long lVar22;
  undefined1 uVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  byte bVar32;
  byte bVar38;
  float fVar33;
  byte bVar40;
  float fVar41;
  byte bVar42;
  byte bVar43;
  float fVar45;
  undefined1 auVar34 [16];
  byte bVar39;
  byte bVar44;
  float fVar46;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar66;
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  float fVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  double dVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  dVar76 = *param_9;
  if (param_1 == 0) {
    FUN_109ac28d8();
    if ((bRam000000011382bce7 & 1) == 0) {
      FUN_109ac28d8();
      bVar20 = bRam000000011382bd48 ^ 1;
    }
    else {
      bVar20 = 0;
    }
    if (param_8 != 0) {
      fVar75 = (float)dVar76;
      do {
        if ((bVar20 & 1) == 0 && 7 < param_7) {
          lVar22 = 0;
          do {
            uVar77 = *(undefined8 *)(param_3 + lVar22);
            if (((bRam00000001132dfb90 & 1) == 0) &&
               (iVar19 = 0x132dfb90, ___cxa_guard_acquire(), iVar19 != 0)) {
              bRam00000001132dfb88 = 0;
              bRam00000001132dfb89 = 0;
              bRam00000001132dfb8a = 0;
              bRam00000001132dfb8b = 0x80;
              bRam00000001132dfb8c = 0;
              bRam00000001132dfb8d = 0;
              bRam00000001132dfb8e = 0;
              bRam00000001132dfb8f = 0x80;
              _uRam00000001132dfb80 = 0x8000000080000000;
              ___cxa_guard_release(0x1132dfb90);
            }
            if (((bRam00000001132dfbb0 & 1) == 0) &&
               (iVar19 = 0x132dfbb0, ___cxa_guard_acquire(), iVar19 != 0)) {
              bRam00000001132dfba8 = 0;
              bRam00000001132dfba9 = 0;
              bRam00000001132dfbaa = 0;
              bRam00000001132dfbab = 0x3f;
              bRam00000001132dfbac = 0;
              bRam00000001132dfbad = 0;
              bRam00000001132dfbae = 0;
              bRam00000001132dfbaf = 0x3f;
              bRam00000001132dfba0 = 0;
              bRam00000001132dfba1 = 0;
              bRam00000001132dfba2 = 0;
              bRam00000001132dfba3 = 0x3f;
              bRam00000001132dfba4 = 0;
              bRam00000001132dfba5 = 0;
              bRam00000001132dfba6 = 0;
              bRam00000001132dfba7 = 0x3f;
              ___cxa_guard_release(0x1132dfbb0);
            }
            bVar3 = bRam00000001132dfb8f;
            bVar44 = bRam00000001132dfb8e;
            bVar43 = bRam00000001132dfb8d;
            bVar42 = bRam00000001132dfb8c;
            bVar40 = bRam00000001132dfb8b;
            bVar39 = bRam00000001132dfb8a;
            bVar38 = bRam00000001132dfb89;
            bVar32 = bRam00000001132dfb88;
            uVar2 = _uRam00000001132dfb80;
            uVar78 = CONCAT17(bRam00000001132dfba7,
                              CONCAT16(bRam00000001132dfba6,
                                       CONCAT15(bRam00000001132dfba5,
                                                CONCAT14(bRam00000001132dfba4,
                                                         CONCAT13(bRam00000001132dfba3,
                                                                  CONCAT12(bRam00000001132dfba2,
                                                                           CONCAT11(
                                                  bRam00000001132dfba1,bRam00000001132dfba0)))))));
            auVar1[8] = bRam00000001132dfba8;
            auVar1._0_8_ = uVar78;
            auVar1[9] = bRam00000001132dfba9;
            auVar1[10] = bRam00000001132dfbaa;
            auVar1[0xb] = bRam00000001132dfbab;
            auVar74[0xc] = bRam00000001132dfbac;
            auVar74._0_12_ = auVar1;
            auVar74[0xd] = bRam00000001132dfbad;
            auVar74[0xe] = bRam00000001132dfbae;
            auVar74[0xf] = bRam00000001132dfbaf;
            if ((bRam00000001132dfb90 & 1) == 0) {
              uStack_b8 = auVar1._8_4_;
              uStack_b4 = auVar74._12_4_;
              iVar19 = 0x132dfb90;
              ___cxa_guard_acquire();
              auVar74._8_4_ = uStack_b8;
              auVar74._0_8_ = uVar78;
              auVar74._12_4_ = uStack_b4;
              if (iVar19 != 0) {
                bRam00000001132dfb88 = 0;
                bRam00000001132dfb89 = 0;
                bRam00000001132dfb8a = 0;
                bRam00000001132dfb8b = 0x80;
                bRam00000001132dfb8c = 0;
                bRam00000001132dfb8d = 0;
                bRam00000001132dfb8e = 0;
                bRam00000001132dfb8f = 0x80;
                _uRam00000001132dfb80 = 0x8000000080000000;
                ___cxa_guard_release(0x1132dfb90);
              }
            }
            if (((bRam00000001132dfbb0 & 1) == 0) &&
               (iVar19 = 0x132dfbb0, ___cxa_guard_acquire(), iVar19 != 0)) {
              bRam00000001132dfba8 = 0;
              bRam00000001132dfba9 = 0;
              bRam00000001132dfbaa = 0;
              bRam00000001132dfbab = 0x3f;
              bRam00000001132dfbac = 0;
              bRam00000001132dfbad = 0;
              bRam00000001132dfbae = 0;
              bRam00000001132dfbaf = 0x3f;
              bRam00000001132dfba0 = 0;
              bRam00000001132dfba1 = 0;
              bRam00000001132dfba2 = 0;
              bRam00000001132dfba3 = 0x3f;
              bRam00000001132dfba4 = 0;
              bRam00000001132dfba5 = 0;
              bRam00000001132dfba6 = 0;
              bRam00000001132dfba7 = 0x3f;
              ___cxa_guard_release(0x1132dfbb0);
            }
            cVar24 = (char)((ulong)uVar77 >> 8);
            cVar25 = (char)((ulong)uVar77 >> 0x10);
            cVar26 = (char)((ulong)uVar77 >> 0x18);
            bVar28 = (byte)((ulong)uVar77 >> 0x20);
            cVar29 = (char)((ulong)uVar77 >> 0x28);
            cVar30 = (char)((ulong)uVar77 >> 0x30);
            cVar31 = (char)((ulong)uVar77 >> 0x38);
            auVar51._6_2_ = 0;
            auVar51._0_6_ =
                 (uint6)CONCAT14(cVar24,(uint)CONCAT12(cVar24,(ushort)(byte)uVar77)) &
                 0xffff0000ffff;
            auVar51[8] = cVar25;
            auVar51._9_3_ = 0;
            auVar51[0xc] = cVar26;
            auVar51._13_3_ = 0;
            auVar49 = NEON_ucvtf(auVar51,4);
            auVar35._1_3_ = 0;
            auVar35[0] = bVar28;
            auVar35[4] = cVar29;
            auVar35._5_3_ = 0;
            auVar35[8] = cVar30;
            auVar35._9_3_ = 0;
            auVar35[0xc] = cVar31;
            auVar35._13_3_ = 0;
            auVar34 = NEON_ucvtf(auVar35,4);
            auVar59 = NEON_frecpe(auVar49,4);
            auVar71 = NEON_frecps(auVar49,auVar59,4);
            auVar61._0_4_ = auVar59._0_4_ * auVar71._0_4_;
            auVar61._4_4_ = auVar59._4_4_ * auVar71._4_4_;
            auVar61._8_4_ = auVar59._8_4_ * auVar71._8_4_;
            auVar61._12_4_ = auVar59._12_4_ * auVar71._12_4_;
            auVar49 = NEON_frecps(auVar49,auVar61,4);
            fVar47 = auVar49._0_4_ * auVar61._0_4_ * fVar75;
            fVar54 = auVar49._4_4_ * auVar61._4_4_ * fVar75;
            fVar65 = auVar49._8_4_ * auVar61._8_4_ * fVar75;
            fVar66 = auVar49._12_4_ * auVar61._12_4_ * fVar75;
            auVar49 = NEON_frecpe(auVar34,4);
            auVar59 = NEON_frecps(auVar34,auVar49,4);
            auVar62._0_4_ = auVar49._0_4_ * auVar59._0_4_;
            auVar62._4_4_ = auVar49._4_4_ * auVar59._4_4_;
            auVar62._8_4_ = auVar49._8_4_ * auVar59._8_4_;
            auVar62._12_4_ = auVar49._12_4_ * auVar59._12_4_;
            auVar34 = NEON_frecps(auVar34,auVar62,4);
            fVar33 = auVar34._0_4_ * auVar62._0_4_ * fVar75;
            fVar41 = auVar34._4_4_ * auVar62._4_4_ * fVar75;
            fVar45 = auVar34._8_4_ * auVar62._8_4_ * fVar75;
            fVar46 = auVar34._12_4_ * auVar62._12_4_ * fVar75;
            fVar67 = (float)CONCAT13((byte)((ulong)uVar2 >> 0x18) & (byte)((uint)fVar47 >> 0x18) |
                                     auVar74[3],
                                     CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                              (byte)((uint)fVar47 >> 0x10) | auVar74[2],
                                              CONCAT11((byte)((ulong)uVar2 >> 8) &
                                                       (byte)((uint)fVar47 >> 8) | auVar74[1],
                                                       (byte)uVar2 & SUB41(fVar47,0) | auVar74[0])))
            ;
            auVar56._0_8_ =
                 CONCAT17((byte)((ulong)uVar2 >> 0x38) & (byte)((uint)fVar54 >> 0x18) | auVar74[7],
                          CONCAT16((byte)((ulong)uVar2 >> 0x30) & (byte)((uint)fVar54 >> 0x10) |
                                   auVar74[6],
                                   CONCAT15((byte)((ulong)uVar2 >> 0x28) & (byte)((uint)fVar54 >> 8)
                                            | auVar74[5],
                                            CONCAT14((byte)((ulong)uVar2 >> 0x20) & SUB41(fVar54,0)
                                                     | auVar74[4],fVar67))));
            auVar56[8] = bVar32 & SUB41(fVar65,0) | auVar74[8];
            auVar56[9] = bVar38 & (byte)((uint)fVar65 >> 8) | auVar74[9];
            auVar56[10] = bVar39 & (byte)((uint)fVar65 >> 0x10) | auVar74[10];
            auVar56[0xb] = bVar40 & (byte)((uint)fVar65 >> 0x18) | auVar74[0xb];
            auVar63[0xc] = bVar42 & SUB41(fVar66,0) | auVar74[0xc];
            auVar63._0_12_ = auVar56;
            auVar63[0xd] = bVar43 & (byte)((uint)fVar66 >> 8) | auVar74[0xd];
            auVar63[0xe] = bVar44 & (byte)((uint)fVar66 >> 0x10) | auVar74[0xe];
            auVar63[0xf] = bVar3 & (byte)((uint)fVar66 >> 0x18) | auVar74[0xf];
            auVar52._0_8_ =
                 CONCAT44((int)(fVar54 + (float)((ulong)auVar56._0_8_ >> 0x20)),
                          (int)(fVar47 + fVar67));
            auVar52._8_4_ = (int)(fVar65 + auVar56._8_4_);
            auVar52._12_4_ = (int)(fVar66 + auVar63._12_4_);
            fVar47 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar33 >> 0x18) |
                                     bRam00000001132dfba3,
                                     CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar33 >> 0x10) |
                                              bRam00000001132dfba2,
                                              CONCAT11(uRam00000001132dfb80._1_1_ &
                                                       (byte)((uint)fVar33 >> 8) |
                                                       bRam00000001132dfba1,
                                                       (byte)uRam00000001132dfb80 & SUB41(fVar33,0)
                                                       | bRam00000001132dfba0)));
            auVar57._0_8_ =
                 CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar41 >> 0x18) | bRam00000001132dfba7
                          ,CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar41 >> 0x10) |
                                    bRam00000001132dfba6,
                                    CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar41 >> 8) |
                                             bRam00000001132dfba5,
                                             CONCAT14(bRam00000001132dfb84 & SUB41(fVar41,0) |
                                                      bRam00000001132dfba4,fVar47))));
            auVar57[8] = bRam00000001132dfb88 & SUB41(fVar45,0) | bRam00000001132dfba8;
            auVar57[9] = bRam00000001132dfb89 & (byte)((uint)fVar45 >> 8) | bRam00000001132dfba9;
            auVar57[10] = bRam00000001132dfb8a & (byte)((uint)fVar45 >> 0x10) | bRam00000001132dfbaa
            ;
            auVar57[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar45 >> 0x18) |
                           bRam00000001132dfbab;
            auVar64[0xc] = bRam00000001132dfb8c & SUB41(fVar46,0) | bRam00000001132dfbac;
            auVar64._0_12_ = auVar57;
            auVar64[0xd] = bRam00000001132dfb8d & (byte)((uint)fVar46 >> 8) | bRam00000001132dfbad;
            auVar64[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar46 >> 0x10) |
                           bRam00000001132dfbae;
            auVar64[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar46 >> 0x18) |
                           bRam00000001132dfbaf;
            auVar36._0_4_ = (int)(fVar33 + fVar47);
            auVar36._4_4_ = (int)(fVar41 + (float)((ulong)auVar57._0_8_ >> 0x20));
            auVar36._8_4_ = (int)(fVar45 + auVar57._8_4_);
            auVar36._12_4_ = (int)(fVar46 + auVar64._12_4_);
            auVar53._8_8_ = auVar52._8_8_;
            auVar53._0_8_ = NEON_sqxtun(auVar52._0_8_,auVar52,4);
            auVar34 = NEON_sqxtun2(auVar53,auVar36,4);
            bVar32 = -((byte)uVar77 == 0);
            bVar38 = -(cVar25 == '\0');
            bVar39 = -(cVar26 == '\0');
            bVar40 = -(bVar28 == 0);
            bVar42 = -(cVar29 == '\0');
            bVar43 = -(cVar30 == '\0');
            bVar44 = -(cVar31 == '\0');
            auVar37._0_8_ =
                 CONCAT17(auVar34[7] & ~((char)bVar39 >> 7),
                          CONCAT16(auVar34[6] & ~bVar39,
                                   CONCAT15(auVar34[5] & ~((char)bVar38 >> 7),
                                            CONCAT14(auVar34[4] & ~bVar38,
                                                     CONCAT13(auVar34[3] & ~(-(cVar24 == '\0') >> 7)
                                                              ,CONCAT12(auVar34[2] &
                                                                        ~-(cVar24 == '\0'),
                                                                        CONCAT11(auVar34[1] &
                                                                                 ~((char)bVar32 >> 7
                                                                                  ),auVar34[0] &
                                                                                    ~bVar32)))))));
            auVar37[8] = auVar34[8] & ~bVar40;
            auVar37[9] = auVar34[9] & ~((char)bVar40 >> 7);
            auVar37[10] = auVar34[10] & ~bVar42;
            auVar37[0xb] = auVar34[0xb] & ~((char)bVar42 >> 7);
            auVar37[0xc] = auVar34[0xc] & ~bVar43;
            auVar37[0xd] = auVar34[0xd] & ~((char)bVar43 >> 7);
            auVar37[0xe] = auVar34[0xe] & ~bVar44;
            auVar37[0xf] = auVar34[0xf] & ~((char)bVar44 >> 7);
            uVar77 = NEON_uqxtn(auVar37._0_8_,auVar37,2);
            *(undefined8 *)(param_5 + lVar22) = uVar77;
            lVar22 = lVar22 + 8;
          } while ((int)lVar22 <= param_7 + -8);
        }
        else {
          lVar22 = 0;
        }
        if ((int)lVar22 < param_7) {
          lVar22 = (long)(int)lVar22;
          do {
            uVar23 = 0;
            if (*(byte *)(param_3 + lVar22) != 0) {
              uVar21 = (uint)(long)(float)(int)(fVar75 / (float)*(byte *)(param_3 + lVar22));
              uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar21) {
                uVar21 = 0xff;
              }
              uVar23 = (undefined1)uVar21;
            }
            *(undefined1 *)(param_5 + lVar22) = uVar23;
            lVar22 = lVar22 + 1;
          } while (param_7 != lVar22);
        }
        param_3 = param_3 + param_4;
        param_5 = param_5 + param_6;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
    return;
  }
  FUN_109ac28d8();
  if ((bRam000000011382bce7 & 1) == 0) {
    FUN_109ac28d8();
    bVar20 = bRam000000011382bd48 ^ 1;
  }
  else {
    bVar20 = 0;
  }
  if (param_8 != 0) {
    fVar75 = (float)dVar76;
    do {
      if ((bVar20 & 1) == 0 && 7 < param_7) {
        lVar22 = 0;
        do {
          uVar78 = *(undefined8 *)(param_1 + lVar22);
          uVar77 = *(undefined8 *)(param_3 + lVar22);
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar19 = 0x132dfb90, ___cxa_guard_acquire(), iVar19 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar19 = 0x132dfbb0, ___cxa_guard_acquire(), iVar19 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          bVar18 = bRam00000001132dfbaf;
          bVar17 = bRam00000001132dfbae;
          bVar16 = bRam00000001132dfbad;
          bVar15 = bRam00000001132dfbac;
          bVar14 = bRam00000001132dfbab;
          bVar13 = bRam00000001132dfbaa;
          bVar12 = bRam00000001132dfba9;
          bVar11 = bRam00000001132dfba8;
          bVar10 = bRam00000001132dfba7;
          bVar9 = bRam00000001132dfba6;
          bVar8 = bRam00000001132dfba5;
          bVar7 = bRam00000001132dfba4;
          bVar6 = bRam00000001132dfba3;
          bVar5 = bRam00000001132dfba2;
          bVar4 = bRam00000001132dfba1;
          bVar28 = bRam00000001132dfba0;
          bVar3 = bRam00000001132dfb8f;
          bVar44 = bRam00000001132dfb8e;
          bVar43 = bRam00000001132dfb8d;
          bVar42 = bRam00000001132dfb8c;
          bVar40 = bRam00000001132dfb8b;
          bVar39 = bRam00000001132dfb8a;
          bVar38 = bRam00000001132dfb89;
          bVar32 = bRam00000001132dfb88;
          uVar2 = _uRam00000001132dfb80;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar19 = 0x132dfb90, ___cxa_guard_acquire(), iVar19 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar19 = 0x132dfbb0, ___cxa_guard_acquire(), iVar19 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            bRam00000001132dfba0 = 0;
            bRam00000001132dfba1 = 0;
            bRam00000001132dfba2 = 0;
            bRam00000001132dfba3 = 0x3f;
            bRam00000001132dfba4 = 0;
            bRam00000001132dfba5 = 0;
            bRam00000001132dfba6 = 0;
            bRam00000001132dfba7 = 0x3f;
            ___cxa_guard_release(0x1132dfbb0);
          }
          uVar23 = (undefined1)((ulong)uVar78 >> 8);
          cVar24 = (char)((ulong)uVar77 >> 8);
          cVar25 = (char)((ulong)uVar77 >> 0x10);
          cVar26 = (char)((ulong)uVar77 >> 0x18);
          bVar27 = (byte)((ulong)uVar77 >> 0x20);
          cVar29 = (char)((ulong)uVar77 >> 0x28);
          cVar30 = (char)((ulong)uVar77 >> 0x30);
          cVar31 = (char)((ulong)uVar77 >> 0x38);
          auVar58._6_2_ = 0;
          auVar58._0_6_ =
               (uint6)CONCAT14(uVar23,(uint)CONCAT12(uVar23,(ushort)(byte)uVar78)) & 0xffff0000ffff;
          auVar58[8] = (char)((ulong)uVar78 >> 0x10);
          auVar58._9_3_ = 0;
          auVar58[0xc] = (char)((ulong)uVar78 >> 0x18);
          auVar58._13_3_ = 0;
          auVar59 = NEON_ucvtf(auVar58,4);
          auVar34._1_3_ = 0;
          auVar34[0] = (byte)((ulong)uVar78 >> 0x20);
          auVar34[4] = (char)((ulong)uVar78 >> 0x28);
          auVar34._5_3_ = 0;
          auVar34[8] = (char)((ulong)uVar78 >> 0x30);
          auVar34._9_3_ = 0;
          auVar34[0xc] = (char)((ulong)uVar78 >> 0x38);
          auVar34._13_3_ = 0;
          auVar34 = NEON_ucvtf(auVar34,4);
          auVar68._6_2_ = 0;
          auVar68._0_6_ =
               (uint6)CONCAT14(cVar24,(uint)CONCAT12(cVar24,(ushort)(byte)uVar77)) & 0xffff0000ffff;
          auVar68[8] = cVar25;
          auVar68._9_3_ = 0;
          auVar68[0xc] = cVar26;
          auVar68._13_3_ = 0;
          auVar69 = NEON_ucvtf(auVar68,4);
          auVar71._1_3_ = 0;
          auVar71[0] = bVar27;
          auVar71[4] = cVar29;
          auVar71._5_3_ = 0;
          auVar71[8] = cVar30;
          auVar71._9_3_ = 0;
          auVar71[0xc] = cVar31;
          auVar71._13_3_ = 0;
          auVar49 = NEON_ucvtf(auVar71,4);
          auVar71 = NEON_frecpe(auVar69,4);
          auVar73 = NEON_frecps(auVar69,auVar71,4);
          auVar72._0_4_ = auVar71._0_4_ * auVar73._0_4_;
          auVar72._4_4_ = auVar71._4_4_ * auVar73._4_4_;
          auVar72._8_4_ = auVar71._8_4_ * auVar73._8_4_;
          auVar72._12_4_ = auVar71._12_4_ * auVar73._12_4_;
          auVar71 = NEON_frecps(auVar69,auVar72,4);
          fVar54 = auVar59._0_4_ * fVar75 * auVar71._0_4_ * auVar72._0_4_;
          fVar65 = auVar59._4_4_ * fVar75 * auVar71._4_4_ * auVar72._4_4_;
          fVar66 = auVar59._8_4_ * fVar75 * auVar71._8_4_ * auVar72._8_4_;
          fVar67 = auVar59._12_4_ * fVar75 * auVar71._12_4_ * auVar72._12_4_;
          auVar59 = NEON_frecpe(auVar49,4);
          auVar71 = NEON_frecps(auVar49,auVar59,4);
          auVar70._0_4_ = auVar59._0_4_ * auVar71._0_4_;
          auVar70._4_4_ = auVar59._4_4_ * auVar71._4_4_;
          auVar70._8_4_ = auVar59._8_4_ * auVar71._8_4_;
          auVar70._12_4_ = auVar59._12_4_ * auVar71._12_4_;
          auVar49 = NEON_frecps(auVar49,auVar70,4);
          fVar33 = auVar34._0_4_ * fVar75 * auVar49._0_4_ * auVar70._0_4_;
          fVar41 = auVar34._4_4_ * fVar75 * auVar49._4_4_ * auVar70._4_4_;
          fVar45 = auVar34._8_4_ * fVar75 * auVar49._8_4_ * auVar70._8_4_;
          fVar46 = auVar34._12_4_ * fVar75 * auVar49._12_4_ * auVar70._12_4_;
          fVar47 = (float)CONCAT13((byte)((ulong)uVar2 >> 0x18) & (byte)((uint)fVar54 >> 0x18) |
                                   bVar6,CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                  (byte)((uint)fVar54 >> 0x10) | bVar5,
                                                  CONCAT11((byte)((ulong)uVar2 >> 8) &
                                                           (byte)((uint)fVar54 >> 8) | bVar4,
                                                           (byte)uVar2 & SUB41(fVar54,0) | bVar28)))
          ;
          auVar48._0_8_ =
               CONCAT17((byte)((ulong)uVar2 >> 0x38) & (byte)((uint)fVar65 >> 0x18) | bVar10,
                        CONCAT16((byte)((ulong)uVar2 >> 0x30) & (byte)((uint)fVar65 >> 0x10) | bVar9
                                 ,CONCAT15((byte)((ulong)uVar2 >> 0x28) & (byte)((uint)fVar65 >> 8)
                                           | bVar8,CONCAT14((byte)((ulong)uVar2 >> 0x20) &
                                                            SUB41(fVar65,0) | bVar7,fVar47))));
          auVar48[8] = bVar32 & SUB41(fVar66,0) | bVar11;
          auVar48[9] = bVar38 & (byte)((uint)fVar66 >> 8) | bVar12;
          auVar48[10] = bVar39 & (byte)((uint)fVar66 >> 0x10) | bVar13;
          auVar48[0xb] = bVar40 & (byte)((uint)fVar66 >> 0x18) | bVar14;
          auVar69[0xc] = bVar42 & SUB41(fVar67,0) | bVar15;
          auVar69._0_12_ = auVar48;
          auVar69[0xd] = bVar43 & (byte)((uint)fVar67 >> 8) | bVar16;
          auVar69[0xe] = bVar44 & (byte)((uint)fVar67 >> 0x10) | bVar17;
          auVar69[0xf] = bVar3 & (byte)((uint)fVar67 >> 0x18) | bVar18;
          auVar73._0_8_ =
               CONCAT44((int)(fVar65 + (float)((ulong)auVar48._0_8_ >> 0x20)),(int)(fVar54 + fVar47)
                       );
          auVar73._8_4_ = (int)(fVar66 + auVar48._8_4_);
          auVar73._12_4_ = (int)(fVar67 + auVar69._12_4_);
          fVar47 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar33 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar33 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((uint)fVar33 >> 8) |
                                                     bRam00000001132dfba1,
                                                     (byte)uRam00000001132dfb80 & SUB41(fVar33,0) |
                                                     bRam00000001132dfba0)));
          auVar55._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar41 >> 0x18) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar41 >> 0x10) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar41 >> 8) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 & SUB41(fVar41,0) |
                                                   bRam00000001132dfba4,fVar47))));
          auVar55[8] = bRam00000001132dfb88 & SUB41(fVar45,0) | bRam00000001132dfba8;
          auVar55[9] = bRam00000001132dfb89 & (byte)((uint)fVar45 >> 8) | bRam00000001132dfba9;
          auVar55[10] = bRam00000001132dfb8a & (byte)((uint)fVar45 >> 0x10) | bRam00000001132dfbaa;
          auVar55[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar45 >> 0x18) | bRam00000001132dfbab;
          auVar60[0xc] = bRam00000001132dfb8c & SUB41(fVar46,0) | bRam00000001132dfbac;
          auVar60._0_12_ = auVar55;
          auVar60[0xd] = bRam00000001132dfb8d & (byte)((uint)fVar46 >> 8) | bRam00000001132dfbad;
          auVar60[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar46 >> 0x10) | bRam00000001132dfbae;
          auVar60[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar46 >> 0x18) | bRam00000001132dfbaf;
          auVar49._0_4_ = (int)(fVar33 + fVar47);
          auVar49._4_4_ = (int)(fVar41 + (float)((ulong)auVar55._0_8_ >> 0x20));
          auVar49._8_4_ = (int)(fVar45 + auVar55._8_4_);
          auVar49._12_4_ = (int)(fVar46 + auVar60._12_4_);
          auVar50._8_8_ = auVar73._8_8_;
          auVar50._0_8_ = NEON_sqxtun(auVar73._0_8_,auVar73,4);
          auVar34 = NEON_sqxtun2(auVar50,auVar49,4);
          bVar32 = -((byte)uVar77 == 0);
          bVar38 = -(cVar25 == '\0');
          bVar39 = -(cVar26 == '\0');
          bVar40 = -(bVar27 == 0);
          bVar42 = -(cVar29 == '\0');
          bVar43 = -(cVar30 == '\0');
          bVar44 = -(cVar31 == '\0');
          auVar59._0_8_ =
               CONCAT17(auVar34[7] & ~((char)bVar39 >> 7),
                        CONCAT16(auVar34[6] & ~bVar39,
                                 CONCAT15(auVar34[5] & ~((char)bVar38 >> 7),
                                          CONCAT14(auVar34[4] & ~bVar38,
                                                   CONCAT13(auVar34[3] & ~(-(cVar24 == '\0') >> 7),
                                                            CONCAT12(auVar34[2] & ~-(cVar24 == '\0')
                                                                     ,CONCAT11(auVar34[1] &
                                                                               ~((char)bVar32 >> 7),
                                                                               auVar34[0] & ~bVar32)
                                                                    ))))));
          auVar59[8] = auVar34[8] & ~bVar40;
          auVar59[9] = auVar34[9] & ~((char)bVar40 >> 7);
          auVar59[10] = auVar34[10] & ~bVar42;
          auVar59[0xb] = auVar34[0xb] & ~((char)bVar42 >> 7);
          auVar59[0xc] = auVar34[0xc] & ~bVar43;
          auVar59[0xd] = auVar34[0xd] & ~((char)bVar43 >> 7);
          auVar59[0xe] = auVar34[0xe] & ~bVar44;
          auVar59[0xf] = auVar34[0xf] & ~((char)bVar44 >> 7);
          uVar77 = NEON_uqxtn(auVar59._0_8_,auVar59,2);
          *(undefined8 *)(param_5 + lVar22) = uVar77;
          lVar22 = lVar22 + 8;
        } while ((int)lVar22 <= param_7 + -8);
      }
      else {
        lVar22 = 0;
      }
      if ((int)lVar22 < param_7) {
        lVar22 = (long)(int)lVar22;
        do {
          uVar23 = 0;
          if (*(byte *)(param_3 + lVar22) != 0) {
            fVar33 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + lVar22));
            uVar21 = (uint)(long)(float)(int)((fVar75 * fVar33) / (float)*(byte *)(param_3 + lVar22)
                                             );
            uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar21) {
              uVar21 = 0xff;
            }
            uVar23 = (undefined1)uVar21;
          }
          *(undefined1 *)(param_5 + lVar22) = uVar23;
          lVar22 = lVar22 + 1;
        } while (param_7 != lVar22);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a34370; end: 109a344ff;  */

void FUN_109a34370(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  int param_7,int param_8,double *param_9)

{
  unkbyte9 *pVar1;
  undefined8 *puVar2;
  unkbyte9 *pVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  
  dVar48 = *param_9;
  FUN_109ac28d8();
  if ((bRam000000011382bce7 & 1) == 0) {
    FUN_109ac28d8();
    bVar17 = bRam000000011382bd48 ^ 1;
  }
  else {
    bVar17 = 0;
  }
  if (param_8 != 0) {
    fVar20 = (float)dVar48;
    do {
      if ((bVar17 & 1) == 0 && 7 < param_7) {
        lVar19 = 0;
        uVar18 = 0;
        do {
          pVar1 = (unkbyte9 *)(param_3 + lVar19);
          uVar7 = *(undefined8 *)((long)pVar1 + 8);
          uVar21 = (undefined1)((ulong)uVar7 >> 8);
          uVar22 = (undefined1)((ulong)uVar7 >> 0x10);
          uVar23 = (undefined1)((ulong)uVar7 >> 0x18);
          uVar24 = (undefined1)((ulong)uVar7 >> 0x20);
          uVar25 = (undefined1)((ulong)uVar7 >> 0x28);
          uVar26 = (undefined1)((ulong)uVar7 >> 0x30);
          uVar27 = (undefined1)((ulong)uVar7 >> 0x38);
          pVar3 = pVar1 + 1;
          uVar15 = *(undefined8 *)((long)pVar1 + 0x18);
          uVar28 = (undefined1)((ulong)uVar15 >> 8);
          uVar29 = (undefined1)((ulong)uVar15 >> 0x10);
          uVar30 = (undefined1)((ulong)uVar15 >> 0x18);
          uVar31 = (undefined1)((ulong)uVar15 >> 0x20);
          uVar32 = (undefined1)((ulong)uVar15 >> 0x28);
          uVar33 = (undefined1)((ulong)uVar15 >> 0x30);
          uVar34 = (undefined1)((ulong)uVar15 >> 0x38);
          puVar2 = (undefined8 *)(param_1 + lVar19);
          auVar43[9] = uVar21;
          auVar43._0_9_ = *pVar1;
          auVar43[10] = uVar22;
          auVar43[0xb] = uVar23;
          auVar43[0xc] = uVar24;
          auVar43[0xd] = uVar25;
          auVar43[0xe] = uVar26;
          auVar43[0xf] = uVar27;
          auVar43 = NEON_frecpe(auVar43,4);
          auVar45[9] = uVar21;
          auVar45._0_9_ = *pVar1;
          auVar45[10] = uVar22;
          auVar45[0xb] = uVar23;
          auVar45[0xc] = uVar24;
          auVar45[0xd] = uVar25;
          auVar45[0xe] = uVar26;
          auVar45[0xf] = uVar27;
          auVar45 = NEON_frecps(auVar45,auVar43,4);
          auVar44._0_4_ = auVar43._0_4_ * auVar45._0_4_;
          auVar44._4_4_ = auVar43._4_4_ * auVar45._4_4_;
          auVar44._8_4_ = auVar43._8_4_ * auVar45._8_4_;
          auVar44._12_4_ = auVar43._12_4_ * auVar45._12_4_;
          auVar47[9] = uVar21;
          auVar47._0_9_ = *pVar1;
          auVar47[10] = uVar22;
          auVar47[0xb] = uVar23;
          auVar47[0xc] = uVar24;
          auVar47[0xd] = uVar25;
          auVar47[0xe] = uVar26;
          auVar47[0xf] = uVar27;
          auVar43 = NEON_frecps(auVar47,auVar44,4);
          auVar9[9] = uVar28;
          auVar9._0_9_ = *pVar3;
          auVar9[10] = uVar29;
          auVar9[0xb] = uVar30;
          auVar9[0xc] = uVar31;
          auVar9[0xd] = uVar32;
          auVar9[0xe] = uVar33;
          auVar9[0xf] = uVar34;
          auVar45 = NEON_frecpe(auVar9,4);
          auVar10[9] = uVar28;
          auVar10._0_9_ = *pVar3;
          auVar10[10] = uVar29;
          auVar10[0xb] = uVar30;
          auVar10[0xc] = uVar31;
          auVar10[0xd] = uVar32;
          auVar10[0xe] = uVar33;
          auVar10[0xf] = uVar34;
          auVar47 = NEON_frecps(auVar10,auVar45,4);
          auVar46._0_4_ = auVar45._0_4_ * auVar47._0_4_;
          auVar46._4_4_ = auVar45._4_4_ * auVar47._4_4_;
          auVar46._8_4_ = auVar45._8_4_ * auVar47._8_4_;
          auVar46._12_4_ = auVar45._12_4_ * auVar47._12_4_;
          auVar11[9] = uVar28;
          auVar11._0_9_ = *pVar3;
          auVar11[10] = uVar29;
          auVar11[0xb] = uVar30;
          auVar11[0xc] = uVar31;
          auVar11[0xd] = uVar32;
          auVar11[0xe] = uVar33;
          auVar11[0xf] = uVar34;
          auVar45 = NEON_frecps(auVar11,auVar46,4);
          fVar35 = (float)*puVar2 * fVar20 * auVar43._0_4_ * auVar44._0_4_;
          fVar36 = (float)((ulong)*puVar2 >> 0x20) * fVar20 * auVar43._4_4_ * auVar44._4_4_;
          fVar37 = (float)puVar2[1] * fVar20 * auVar43._8_4_ * auVar44._8_4_;
          fVar38 = (float)((ulong)puVar2[1] >> 0x20) * fVar20 * auVar43._12_4_ * auVar44._12_4_;
          fVar39 = (float)puVar2[2] * fVar20 * auVar45._0_4_ * auVar46._0_4_;
          fVar40 = (float)((ulong)puVar2[2] >> 0x20) * fVar20 * auVar45._4_4_ * auVar46._4_4_;
          fVar41 = (float)puVar2[3] * fVar20 * auVar45._8_4_ * auVar46._8_4_;
          fVar42 = (float)((ulong)puVar2[3] >> 0x20) * fVar20 * auVar45._12_4_ * auVar46._12_4_;
          iVar4 = -(uint)((float)*(undefined8 *)pVar1 == 0.0);
          iVar5 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) == 0.0);
          iVar6 = -(uint)((float)uVar7 == 0.0);
          iVar8 = -(uint)((float)((ulong)uVar7 >> 0x20) == 0.0);
          iVar12 = -(uint)((float)*(undefined8 *)pVar3 == 0.0);
          iVar13 = -(uint)((float)((ulong)*(undefined8 *)pVar3 >> 0x20) == 0.0);
          iVar14 = -(uint)((float)uVar15 == 0.0);
          iVar16 = -(uint)((float)((ulong)uVar15 >> 0x20) == 0.0);
          puVar2 = (undefined8 *)(param_5 + lVar19);
          puVar2[1] = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT15((byte)((uint)fVar38 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 CONCAT14(SUB41(fVar38,0) & ~(byte)iVar8,
                                                          CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                                   ~(byte)((uint)iVar6 >> 0x18),
                                                                   CONCAT12((byte)((uint)fVar37 >>
                                                                                  0x10) &
                                                                            ~(byte)((uint)iVar6 >>
                                                                                   0x10),
                                                                            CONCAT11((byte)((uint)
                                                  fVar37 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar37,0) & ~(byte)iVar6)))))));
          *puVar2 = CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                             CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                      CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar5 >> 8)
                                               ,CONCAT14(SUB41(fVar36,0) & ~(byte)iVar5,
                                                         CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                  ~(byte)((uint)iVar4 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar35 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar4 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar35 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar4)))))));
          puVar2[3] = CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar42 >> 8) &
                                                  ~(byte)((uint)iVar16 >> 8),
                                                  CONCAT14(SUB41(fVar42,0) & ~(byte)iVar16,
                                                           CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                                                    ~(byte)((uint)iVar14 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar41 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar14 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar41 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar41,0) & ~(byte)iVar14)))))));
          puVar2[2] = CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                               CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar40 >> 8) &
                                                  ~(byte)((uint)iVar13 >> 8),
                                                  CONCAT14(SUB41(fVar40,0) & ~(byte)iVar13,
                                                           CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                                                    ~(byte)((uint)iVar12 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar39 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar12 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar39 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                                  SUB41(fVar39,0) & ~(byte)iVar12)))))));
          uVar18 = uVar18 + 8;
          lVar19 = lVar19 + 0x20;
        } while (uVar18 <= param_7 - 8);
        uVar18 = uVar18 & 0xffffffff;
      }
      else {
        uVar18 = 0;
      }
      if ((int)uVar18 < param_7) {
        do {
          fVar35 = *(float *)(param_3 + uVar18 * 4);
          if (fVar35 == 0.0) {
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          else {
            fVar35 = (*(float *)(param_1 + uVar18 * 4) * fVar20) / fVar35;
            uVar21 = SUB41(fVar35,0);
            uVar22 = (undefined1)((uint)fVar35 >> 8);
            uVar23 = (undefined1)((uint)fVar35 >> 0x10);
            uVar24 = (undefined1)((uint)fVar35 >> 0x18);
          }
          *(uint *)(param_5 + uVar18 * 4) =
               CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
          uVar18 = uVar18 + 1;
        } while ((long)param_7 != uVar18);
      }
      param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
      param_5 = param_5 + (param_6 & 0xfffffffffffffffc);
      param_3 = param_3 + (param_4 & 0xfffffffffffffffc);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a34500; end: 109a3459f;  */

void FUN_109a34500(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  uint param_7,int param_8,double *param_9)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (param_8 != 0) {
    dVar2 = *param_9;
    do {
      if (0 < (int)param_7) {
        lVar1 = 0;
        do {
          if (*(double *)(param_3 + lVar1) == 0.0) {
            dVar3 = 0.0;
          }
          else {
            dVar3 = (dVar2 * *(double *)(param_1 + lVar1)) / *(double *)(param_3 + lVar1);
          }
          *(double *)(param_5 + lVar1) = dVar3;
          lVar1 = lVar1 + 8;
        } while ((ulong)param_7 << 3 != lVar1);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffff8);
      param_1 = param_1 + (param_2 & 0xfffffffffffffff8);
      param_3 = param_3 + (param_4 & 0xfffffffffffffff8);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a345a0; end: 109a353f7;  */

void FUN_109a345a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,int param_7,int param_8,double *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  byte bVar22;
  float fVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  float fVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  float fVar51;
  double dVar52;
  undefined8 uVar53;
  undefined1 auVar43 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  dVar52 = *param_9;
  FUN_109ac28d8();
  if ((bRam000000011382bce7 & 1) == 0) {
    FUN_109ac28d8();
    bVar11 = bRam000000011382bd48 ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if (param_8 != 0) {
    fVar51 = (float)dVar52;
    do {
      if ((bVar11 & 1) == 0 && 7 < param_7) {
        lVar14 = 0;
        do {
          uVar53 = *(undefined8 *)(param_3 + lVar14);
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar13 = 0x132dfb90, ___cxa_guard_acquire(), iVar13 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar13 = 0x132dfbb0, ___cxa_guard_acquire(), iVar13 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          bVar10 = bRam00000001132dfbaf;
          bVar9 = bRam00000001132dfbae;
          bVar8 = bRam00000001132dfbad;
          bVar7 = bRam00000001132dfbac;
          bVar6 = bRam00000001132dfbab;
          bVar5 = bRam00000001132dfbaa;
          bVar4 = bRam00000001132dfba9;
          bVar3 = bRam00000001132dfba8;
          uVar2 = _uRam00000001132dfba0;
          bVar32 = bRam00000001132dfb8f;
          bVar31 = bRam00000001132dfb8e;
          bVar30 = bRam00000001132dfb8d;
          bVar28 = bRam00000001132dfb8c;
          bVar27 = bRam00000001132dfb8b;
          bVar26 = bRam00000001132dfb8a;
          bVar25 = bRam00000001132dfb89;
          bVar22 = bRam00000001132dfb88;
          uVar1 = _uRam00000001132dfb80;
          if (((bRam00000001132dfb90 & 1) == 0) &&
             (iVar13 = 0x132dfb90, ___cxa_guard_acquire(), iVar13 != 0)) {
            bRam00000001132dfb88 = 0;
            bRam00000001132dfb89 = 0;
            bRam00000001132dfb8a = 0;
            bRam00000001132dfb8b = 0x80;
            bRam00000001132dfb8c = 0;
            bRam00000001132dfb8d = 0;
            bRam00000001132dfb8e = 0;
            bRam00000001132dfb8f = 0x80;
            _uRam00000001132dfb80 = 0x8000000080000000;
            ___cxa_guard_release(0x1132dfb90);
          }
          if (((bRam00000001132dfbb0 & 1) == 0) &&
             (iVar13 = 0x132dfbb0, ___cxa_guard_acquire(), iVar13 != 0)) {
            bRam00000001132dfba8 = 0;
            bRam00000001132dfba9 = 0;
            bRam00000001132dfbaa = 0;
            bRam00000001132dfbab = 0x3f;
            bRam00000001132dfbac = 0;
            bRam00000001132dfbad = 0;
            bRam00000001132dfbae = 0;
            bRam00000001132dfbaf = 0x3f;
            _uRam00000001132dfba0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132dfbb0);
          }
          cVar15 = (char)((ulong)uVar53 >> 8);
          cVar16 = (char)((ulong)uVar53 >> 0x10);
          cVar17 = (char)((ulong)uVar53 >> 0x18);
          cVar18 = (char)((ulong)uVar53 >> 0x20);
          cVar19 = (char)((ulong)uVar53 >> 0x28);
          cVar20 = (char)((ulong)uVar53 >> 0x30);
          cVar21 = (char)((ulong)uVar53 >> 0x38);
          auVar50._0_4_ = (int)(short)(char)uVar53;
          auVar50._4_4_ = (int)(short)cVar15;
          auVar50._8_4_ = (int)(short)cVar16;
          auVar50._12_4_ = (int)(short)cVar17;
          auVar36 = NEON_scvtf(auVar50,4);
          auVar24._0_4_ = (int)(short)cVar18;
          auVar24._4_4_ = (int)(short)cVar19;
          auVar24._8_4_ = (int)(short)cVar20;
          auVar24._12_4_ = (int)(short)cVar21;
          auVar24 = NEON_scvtf(auVar24,4);
          auVar45 = NEON_frecpe(auVar36,4);
          auVar50 = NEON_frecps(auVar36,auVar45,4);
          auVar46._0_4_ = auVar45._0_4_ * auVar50._0_4_;
          auVar46._4_4_ = auVar45._4_4_ * auVar50._4_4_;
          auVar46._8_4_ = auVar45._8_4_ * auVar50._8_4_;
          auVar46._12_4_ = auVar45._12_4_ * auVar50._12_4_;
          auVar36 = NEON_frecps(auVar36,auVar46,4);
          fVar35 = auVar36._0_4_ * auVar46._0_4_ * fVar51;
          fVar39 = auVar36._4_4_ * auVar46._4_4_ * fVar51;
          fVar40 = auVar36._8_4_ * auVar46._8_4_ * fVar51;
          fVar41 = auVar36._12_4_ * auVar46._12_4_ * fVar51;
          auVar36 = NEON_frecpe(auVar24,4);
          auVar45 = NEON_frecps(auVar24,auVar36,4);
          auVar47._0_4_ = auVar36._0_4_ * auVar45._0_4_;
          auVar47._4_4_ = auVar36._4_4_ * auVar45._4_4_;
          auVar47._8_4_ = auVar36._8_4_ * auVar45._8_4_;
          auVar47._12_4_ = auVar36._12_4_ * auVar45._12_4_;
          auVar24 = NEON_frecps(auVar24,auVar47,4);
          fVar23 = auVar24._0_4_ * auVar47._0_4_ * fVar51;
          fVar29 = auVar24._4_4_ * auVar47._4_4_ * fVar51;
          fVar33 = auVar24._8_4_ * auVar47._8_4_ * fVar51;
          fVar34 = auVar24._12_4_ * auVar47._12_4_ * fVar51;
          fVar42 = (float)CONCAT13((byte)((ulong)uVar1 >> 0x18) & (byte)((uint)fVar35 >> 0x18) |
                                   (byte)((ulong)uVar2 >> 0x18),
                                   CONCAT12((byte)((ulong)uVar1 >> 0x10) &
                                            (byte)((uint)fVar35 >> 0x10) |
                                            (byte)((ulong)uVar2 >> 0x10),
                                            CONCAT11((byte)((ulong)uVar1 >> 8) &
                                                     (byte)((uint)fVar35 >> 8) |
                                                     (byte)((ulong)uVar2 >> 8),
                                                     (byte)uVar1 & SUB41(fVar35,0) | (byte)uVar2)));
          auVar43._0_8_ =
               CONCAT17((byte)((ulong)uVar1 >> 0x38) & (byte)((uint)fVar39 >> 0x18) |
                        (byte)((ulong)uVar2 >> 0x38),
                        CONCAT16((byte)((ulong)uVar1 >> 0x30) & (byte)((uint)fVar39 >> 0x10) |
                                 (byte)((ulong)uVar2 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar1 >> 0x28) & (byte)((uint)fVar39 >> 8) |
                                          (byte)((ulong)uVar2 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar1 >> 0x20) & SUB41(fVar39,0) |
                                                   (byte)((ulong)uVar2 >> 0x20),fVar42))));
          auVar43[8] = bVar22 & SUB41(fVar40,0) | bVar3;
          auVar43[9] = bVar25 & (byte)((uint)fVar40 >> 8) | bVar4;
          auVar43[10] = bVar26 & (byte)((uint)fVar40 >> 0x10) | bVar5;
          auVar43[0xb] = bVar27 & (byte)((uint)fVar40 >> 0x18) | bVar6;
          auVar48[0xc] = bVar28 & SUB41(fVar41,0) | bVar7;
          auVar48._0_12_ = auVar43;
          auVar48[0xd] = bVar30 & (byte)((uint)fVar41 >> 8) | bVar8;
          auVar48[0xe] = bVar31 & (byte)((uint)fVar41 >> 0x10) | bVar9;
          auVar48[0xf] = bVar32 & (byte)((uint)fVar41 >> 0x18) | bVar10;
          auVar37._0_8_ =
               CONCAT44((int)(fVar39 + (float)((ulong)auVar43._0_8_ >> 0x20)),(int)(fVar35 + fVar42)
                       );
          auVar37._8_4_ = (int)(fVar40 + auVar43._8_4_);
          auVar37._12_4_ = (int)(fVar41 + auVar48._12_4_);
          fVar35 = (float)CONCAT13(bRam00000001132dfb83 & (byte)((uint)fVar23 >> 0x18) |
                                   bRam00000001132dfba3,
                                   CONCAT12(bRam00000001132dfb82 & (byte)((uint)fVar23 >> 0x10) |
                                            bRam00000001132dfba2,
                                            CONCAT11(uRam00000001132dfb80._1_1_ &
                                                     (byte)((uint)fVar23 >> 8) |
                                                     uRam00000001132dfba0._1_1_,
                                                     (byte)uRam00000001132dfb80 & SUB41(fVar23,0) |
                                                     (byte)uRam00000001132dfba0)));
          auVar44._0_8_ =
               CONCAT17(bRam00000001132dfb87 & (byte)((uint)fVar29 >> 0x18) | bRam00000001132dfba7,
                        CONCAT16(bRam00000001132dfb86 & (byte)((uint)fVar29 >> 0x10) |
                                 bRam00000001132dfba6,
                                 CONCAT15(bRam00000001132dfb85 & (byte)((uint)fVar29 >> 8) |
                                          bRam00000001132dfba5,
                                          CONCAT14(bRam00000001132dfb84 & SUB41(fVar29,0) |
                                                   bRam00000001132dfba4,fVar35))));
          auVar44[8] = bRam00000001132dfb88 & SUB41(fVar33,0) | bRam00000001132dfba8;
          auVar44[9] = bRam00000001132dfb89 & (byte)((uint)fVar33 >> 8) | bRam00000001132dfba9;
          auVar44[10] = bRam00000001132dfb8a & (byte)((uint)fVar33 >> 0x10) | bRam00000001132dfbaa;
          auVar44[0xb] = bRam00000001132dfb8b & (byte)((uint)fVar33 >> 0x18) | bRam00000001132dfbab;
          auVar49[0xc] = bRam00000001132dfb8c & SUB41(fVar34,0) | bRam00000001132dfbac;
          auVar49._0_12_ = auVar44;
          auVar49[0xd] = bRam00000001132dfb8d & (byte)((uint)fVar34 >> 8) | bRam00000001132dfbad;
          auVar49[0xe] = bRam00000001132dfb8e & (byte)((uint)fVar34 >> 0x10) | bRam00000001132dfbae;
          auVar49[0xf] = bRam00000001132dfb8f & (byte)((uint)fVar34 >> 0x18) | bRam00000001132dfbaf;
          auVar36._0_4_ = (int)(fVar23 + fVar35);
          auVar36._4_4_ = (int)(fVar29 + (float)((ulong)auVar44._0_8_ >> 0x20));
          auVar36._8_4_ = (int)(fVar33 + auVar44._8_4_);
          auVar36._12_4_ = (int)(fVar34 + auVar49._12_4_);
          auVar38._8_8_ = auVar37._8_8_;
          auVar38._0_8_ = NEON_sqxtn(auVar37._0_8_,auVar37,4);
          auVar24 = NEON_sqxtn2(auVar38,auVar36,4);
          bVar22 = -((char)uVar53 == '\0');
          bVar25 = -(cVar15 == '\0');
          bVar26 = -(cVar16 == '\0');
          bVar27 = -(cVar17 == '\0');
          bVar28 = -(cVar18 == '\0');
          bVar30 = -(cVar19 == '\0');
          bVar31 = -(cVar20 == '\0');
          bVar32 = -(cVar21 == '\0');
          auVar45._0_8_ =
               CONCAT17(auVar24[7] & ~((char)bVar27 >> 7),
                        CONCAT16(auVar24[6] & ~bVar27,
                                 CONCAT15(auVar24[5] & ~((char)bVar26 >> 7),
                                          CONCAT14(auVar24[4] & ~bVar26,
                                                   CONCAT13(auVar24[3] & ~((char)bVar25 >> 7),
                                                            CONCAT12(auVar24[2] & ~bVar25,
                                                                     CONCAT11(auVar24[1] &
                                                                              ~((char)bVar22 >> 7),
                                                                              auVar24[0] & ~bVar22))
                                                           )))));
          auVar45[8] = auVar24[8] & ~bVar28;
          auVar45[9] = auVar24[9] & ~((char)bVar28 >> 7);
          auVar45[10] = auVar24[10] & ~bVar30;
          auVar45[0xb] = auVar24[0xb] & ~((char)bVar30 >> 7);
          auVar45[0xc] = auVar24[0xc] & ~bVar31;
          auVar45[0xd] = auVar24[0xd] & ~((char)bVar31 >> 7);
          auVar45[0xe] = auVar24[0xe] & ~bVar32;
          auVar45[0xf] = auVar24[0xf] & ~((char)bVar32 >> 7);
          uVar53 = NEON_sqxtn(auVar45._0_8_,auVar45,2);
          *(undefined8 *)(param_5 + lVar14) = uVar53;
          lVar14 = lVar14 + 8;
        } while ((int)lVar14 <= param_7 + -8);
      }
      else {
        lVar14 = 0;
      }
      if ((int)lVar14 < param_7) {
        lVar14 = (long)(int)lVar14;
        do {
          uVar12 = 0;
          if (*(char *)(param_3 + lVar14) != '\0') {
            iVar13 = (int)(long)(float)(int)(fVar51 / (float)(int)*(char *)(param_3 + lVar14));
            if (iVar13 < -0x7f) {
              iVar13 = -0x80;
            }
            if (0x7e < iVar13) {
              iVar13 = 0x7f;
            }
            uVar12 = (undefined1)iVar13;
          }
          *(undefined1 *)(param_5 + lVar14) = uVar12;
          lVar14 = lVar14 + 1;
        } while (param_7 != lVar14);
      }
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a353f8; end: 109a3554f;  */

void FUN_109a353f8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,int param_7,int param_8,double *param_9)

{
  unkbyte9 *pVar1;
  undefined8 *puVar2;
  unkbyte9 *pVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 auVar47 [16];
  double dVar48;
  
  dVar48 = *param_9;
  FUN_109ac28d8();
  if ((bRam000000011382bce7 & 1) == 0) {
    FUN_109ac28d8();
    bVar17 = bRam000000011382bd48 ^ 1;
  }
  else {
    bVar17 = 0;
  }
  if (param_8 != 0) {
    fVar20 = (float)dVar48;
    do {
      if ((bVar17 & 1) == 0 && 7 < param_7) {
        lVar19 = 0;
        uVar18 = 0;
        do {
          pVar1 = (unkbyte9 *)(param_3 + lVar19);
          uVar7 = *(undefined8 *)((long)pVar1 + 8);
          uVar21 = (undefined1)((ulong)uVar7 >> 8);
          uVar22 = (undefined1)((ulong)uVar7 >> 0x10);
          uVar23 = (undefined1)((ulong)uVar7 >> 0x18);
          uVar24 = (undefined1)((ulong)uVar7 >> 0x20);
          uVar25 = (undefined1)((ulong)uVar7 >> 0x28);
          uVar26 = (undefined1)((ulong)uVar7 >> 0x30);
          uVar27 = (undefined1)((ulong)uVar7 >> 0x38);
          pVar3 = pVar1 + 1;
          uVar15 = *(undefined8 *)((long)pVar1 + 0x18);
          uVar28 = (undefined1)((ulong)uVar15 >> 8);
          uVar29 = (undefined1)((ulong)uVar15 >> 0x10);
          uVar30 = (undefined1)((ulong)uVar15 >> 0x18);
          uVar31 = (undefined1)((ulong)uVar15 >> 0x20);
          uVar32 = (undefined1)((ulong)uVar15 >> 0x28);
          uVar33 = (undefined1)((ulong)uVar15 >> 0x30);
          uVar34 = (undefined1)((ulong)uVar15 >> 0x38);
          auVar36[9] = uVar21;
          auVar36._0_9_ = *pVar1;
          auVar36[10] = uVar22;
          auVar36[0xb] = uVar23;
          auVar36[0xc] = uVar24;
          auVar36[0xd] = uVar25;
          auVar36[0xe] = uVar26;
          auVar36[0xf] = uVar27;
          auVar36 = NEON_frecpe(auVar36,4);
          auVar42[9] = uVar21;
          auVar42._0_9_ = *pVar1;
          auVar42[10] = uVar22;
          auVar42[0xb] = uVar23;
          auVar42[0xc] = uVar24;
          auVar42[0xd] = uVar25;
          auVar42[0xe] = uVar26;
          auVar42[0xf] = uVar27;
          auVar42 = NEON_frecps(auVar42,auVar36,4);
          auVar37._0_4_ = auVar36._0_4_ * auVar42._0_4_;
          auVar37._4_4_ = auVar36._4_4_ * auVar42._4_4_;
          auVar37._8_4_ = auVar36._8_4_ * auVar42._8_4_;
          auVar37._12_4_ = auVar36._12_4_ * auVar42._12_4_;
          auVar47[9] = uVar21;
          auVar47._0_9_ = *pVar1;
          auVar47[10] = uVar22;
          auVar47[0xb] = uVar23;
          auVar47[0xc] = uVar24;
          auVar47[0xd] = uVar25;
          auVar47[0xe] = uVar26;
          auVar47[0xf] = uVar27;
          auVar36 = NEON_frecps(auVar47,auVar37,4);
          auVar9[9] = uVar28;
          auVar9._0_9_ = *pVar3;
          auVar9[10] = uVar29;
          auVar9[0xb] = uVar30;
          auVar9[0xc] = uVar31;
          auVar9[0xd] = uVar32;
          auVar9[0xe] = uVar33;
          auVar9[0xf] = uVar34;
          auVar42 = NEON_frecpe(auVar9,4);
          auVar10[9] = uVar28;
          auVar10._0_9_ = *pVar3;
          auVar10[10] = uVar29;
          auVar10[0xb] = uVar30;
          auVar10[0xc] = uVar31;
          auVar10[0xd] = uVar32;
          auVar10[0xe] = uVar33;
          auVar10[0xf] = uVar34;
          auVar47 = NEON_frecps(auVar10,auVar42,4);
          auVar43._0_4_ = auVar42._0_4_ * auVar47._0_4_;
          auVar43._4_4_ = auVar42._4_4_ * auVar47._4_4_;
          auVar43._8_4_ = auVar42._8_4_ * auVar47._8_4_;
          auVar43._12_4_ = auVar42._12_4_ * auVar47._12_4_;
          auVar11[9] = uVar28;
          auVar11._0_9_ = *pVar3;
          auVar11[10] = uVar29;
          auVar11[0xb] = uVar30;
          auVar11[0xc] = uVar31;
          auVar11[0xd] = uVar32;
          auVar11[0xe] = uVar33;
          auVar11[0xf] = uVar34;
          auVar42 = NEON_frecps(auVar11,auVar43,4);
          fVar35 = auVar36._0_4_ * auVar37._0_4_ * fVar20;
          fVar38 = auVar36._4_4_ * auVar37._4_4_ * fVar20;
          fVar39 = auVar36._8_4_ * auVar37._8_4_ * fVar20;
          fVar40 = auVar36._12_4_ * auVar37._12_4_ * fVar20;
          fVar41 = auVar42._0_4_ * auVar43._0_4_ * fVar20;
          fVar44 = auVar42._4_4_ * auVar43._4_4_ * fVar20;
          fVar45 = auVar42._8_4_ * auVar43._8_4_ * fVar20;
          fVar46 = auVar42._12_4_ * auVar43._12_4_ * fVar20;
          iVar4 = -(uint)((float)*(undefined8 *)pVar1 == 0.0);
          iVar5 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) == 0.0);
          iVar6 = -(uint)((float)uVar7 == 0.0);
          iVar8 = -(uint)((float)((ulong)uVar7 >> 0x20) == 0.0);
          iVar12 = -(uint)((float)*(undefined8 *)pVar3 == 0.0);
          iVar13 = -(uint)((float)((ulong)*(undefined8 *)pVar3 >> 0x20) == 0.0);
          iVar14 = -(uint)((float)uVar15 == 0.0);
          iVar16 = -(uint)((float)((ulong)uVar15 >> 0x20) == 0.0);
          puVar2 = (undefined8 *)(param_5 + lVar19);
          puVar2[1] = CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT15((byte)((uint)fVar40 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 CONCAT14(SUB41(fVar40,0) & ~(byte)iVar8,
                                                          CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                                                   ~(byte)((uint)iVar6 >> 0x18),
                                                                   CONCAT12((byte)((uint)fVar39 >>
                                                                                  0x10) &
                                                                            ~(byte)((uint)iVar6 >>
                                                                                   0x10),
                                                                            CONCAT11((byte)((uint)
                                                  fVar39 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                                  SUB41(fVar39,0) & ~(byte)iVar6)))))));
          *puVar2 = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                             CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                      CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar5 >> 8)
                                               ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar5,
                                                         CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                  ~(byte)((uint)iVar4 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar35 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar4 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar35 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar4)))))));
          puVar2[3] = CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar16 >> 8),
                                                  CONCAT14(SUB41(fVar46,0) & ~(byte)iVar16,
                                                           CONCAT13((byte)((uint)fVar45 >> 0x18) &
                                                                    ~(byte)((uint)iVar14 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar45 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar14 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar45 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar45,0) & ~(byte)iVar14)))))));
          puVar2[2] = CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                               CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar13 >> 8),
                                                  CONCAT14(SUB41(fVar44,0) & ~(byte)iVar13,
                                                           CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                                                    ~(byte)((uint)iVar12 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar41 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar12 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar41 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                                  SUB41(fVar41,0) & ~(byte)iVar12)))))));
          uVar18 = uVar18 + 8;
          lVar19 = lVar19 + 0x20;
        } while (uVar18 <= param_7 - 8);
        uVar18 = uVar18 & 0xffffffff;
      }
      else {
        uVar18 = 0;
      }
      if ((int)uVar18 < param_7) {
        do {
          fVar35 = *(float *)(param_3 + uVar18 * 4);
          fVar38 = fVar20 / fVar35;
          uVar24 = (undefined1)((uint)fVar38 >> 0x18);
          uVar21 = SUB41(fVar38,0);
          uVar22 = (undefined1)((uint)fVar38 >> 8);
          uVar23 = (undefined1)((uint)fVar38 >> 0x10);
          if (fVar35 == 0.0) {
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          *(uint *)(param_5 + uVar18 * 4) =
               CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
          uVar18 = uVar18 + 1;
        } while ((long)param_7 != uVar18);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffffc);
      param_3 = param_3 + (param_4 & 0xfffffffffffffffc);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a35550; end: 109a355b3;  */

void FUN_109a35550(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,uint param_7,int param_8,double *param_9)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (param_8 != 0) {
    dVar2 = *param_9;
    do {
      if (0 < (int)param_7) {
        lVar1 = 0;
        do {
          dVar3 = dVar2 / *(double *)(param_3 + lVar1);
          if (*(double *)(param_3 + lVar1) == 0.0) {
            dVar3 = 0.0;
          }
          *(double *)(param_5 + lVar1) = dVar3;
          lVar1 = lVar1 + 8;
        } while ((ulong)param_7 << 3 != lVar1);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffff8);
      param_3 = param_3 + (param_4 & 0xfffffffffffffff8);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a355b4; end: 109a360b3;  */

void FUN_109a355b4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  int param_7,int param_8,double *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  undefined1 uVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar44 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  if (param_8 != 0) {
    fVar52 = (float)*param_9;
    fVar53 = (float)param_9[2];
    lVar22 = param_5 + 1;
    fVar54 = (float)param_9[1];
    do {
      if (param_7 < 8) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          iVar23 = 0x132e8da0;
          uVar56 = *(undefined8 *)(param_1 + uVar24);
          uVar55 = *(undefined8 *)(param_3 + uVar24);
          if (((bRam00000001132e8da0 & 1) == 0) && (___cxa_guard_acquire(), iVar23 != 0)) {
            bRam00000001132e8d98 = 0;
            bRam00000001132e8d99 = 0;
            bRam00000001132e8d9a = 0;
            bRam00000001132e8d9b = 0x80;
            bRam00000001132e8d9c = 0;
            bRam00000001132e8d9d = 0;
            bRam00000001132e8d9e = 0;
            bRam00000001132e8d9f = 0x80;
            _uRam00000001132e8d90 = 0x8000000080000000;
            ___cxa_guard_release(0x1132e8da0);
          }
          if (((bRam00000001132e8dc0 & 1) == 0) &&
             (iVar23 = 0x132e8dc0, ___cxa_guard_acquire(), iVar23 != 0)) {
            bRam00000001132e8db8 = 0;
            bRam00000001132e8db9 = 0;
            bRam00000001132e8dba = 0;
            bRam00000001132e8dbb = 0x3f;
            bRam00000001132e8dbc = 0;
            bRam00000001132e8dbd = 0;
            bRam00000001132e8dbe = 0;
            bRam00000001132e8dbf = 0x3f;
            _uRam00000001132e8db0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132e8dc0);
          }
          bVar21 = bRam00000001132e8dbf;
          bVar20 = bRam00000001132e8dbe;
          bVar19 = bRam00000001132e8dbd;
          bVar18 = bRam00000001132e8dbc;
          bVar17 = bRam00000001132e8dbb;
          bVar16 = bRam00000001132e8dba;
          bVar15 = bRam00000001132e8db9;
          bVar14 = bRam00000001132e8db8;
          uVar13 = _uRam00000001132e8db0;
          bVar12 = bRam00000001132e8d9f;
          bVar11 = bRam00000001132e8d9e;
          bVar10 = bRam00000001132e8d9d;
          bVar9 = bRam00000001132e8d9c;
          bVar8 = bRam00000001132e8d9b;
          bVar7 = bRam00000001132e8d9a;
          bVar6 = bRam00000001132e8d99;
          bVar5 = bRam00000001132e8d98;
          uVar4 = _uRam00000001132e8d90;
          iVar23 = 0x132e8da0;
          if (((bRam00000001132e8da0 & 1) == 0) && (___cxa_guard_acquire(), iVar23 != 0)) {
            bRam00000001132e8d98 = 0;
            bRam00000001132e8d99 = 0;
            bRam00000001132e8d9a = 0;
            bRam00000001132e8d9b = 0x80;
            bRam00000001132e8d9c = 0;
            bRam00000001132e8d9d = 0;
            bRam00000001132e8d9e = 0;
            bRam00000001132e8d9f = 0x80;
            _uRam00000001132e8d90 = 0x8000000080000000;
            ___cxa_guard_release(0x1132e8da0);
          }
          if (((bRam00000001132e8dc0 & 1) == 0) &&
             (iVar23 = 0x132e8dc0, ___cxa_guard_acquire(), iVar23 != 0)) {
            bRam00000001132e8db8 = 0;
            bRam00000001132e8db9 = 0;
            bRam00000001132e8dba = 0;
            bRam00000001132e8dbb = 0x3f;
            bRam00000001132e8dbc = 0;
            bRam00000001132e8dbd = 0;
            bRam00000001132e8dbe = 0;
            bRam00000001132e8dbf = 0x3f;
            _uRam00000001132e8db0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132e8dc0);
          }
          uVar31 = (undefined1)((ulong)uVar56 >> 8);
          auVar47._6_2_ = 0;
          auVar47._0_6_ =
               (uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uVar56)) & 0xffff0000ffff;
          auVar47[8] = (char)((ulong)uVar56 >> 0x10);
          auVar47._9_3_ = 0;
          auVar47[0xc] = (char)((ulong)uVar56 >> 0x18);
          auVar47._13_3_ = 0;
          auVar37 = NEON_ucvtf(auVar47,4);
          auVar32._1_3_ = 0;
          auVar32[0] = (byte)((ulong)uVar56 >> 0x20);
          auVar32[4] = (char)((ulong)uVar56 >> 0x28);
          auVar32._5_3_ = 0;
          auVar32[8] = (char)((ulong)uVar56 >> 0x30);
          auVar32._9_3_ = 0;
          auVar32[0xc] = (char)((ulong)uVar56 >> 0x38);
          auVar32._13_3_ = 0;
          auVar32 = NEON_ucvtf(auVar32,4);
          uVar31 = (undefined1)((ulong)uVar55 >> 8);
          auVar50._6_2_ = 0;
          auVar50._0_6_ =
               (uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uVar55)) & 0xffff0000ffff;
          auVar50[8] = (char)((ulong)uVar55 >> 0x10);
          auVar50._9_3_ = 0;
          auVar50[0xc] = (char)((ulong)uVar55 >> 0x18);
          auVar50._13_3_ = 0;
          auVar51 = NEON_ucvtf(auVar50,4);
          auVar46._1_3_ = 0;
          auVar46[0] = (byte)((ulong)uVar55 >> 0x20);
          auVar46[4] = (char)((ulong)uVar55 >> 0x28);
          auVar46._5_3_ = 0;
          auVar46[8] = (char)((ulong)uVar55 >> 0x30);
          auVar46._9_3_ = 0;
          auVar46[0xc] = (char)((ulong)uVar55 >> 0x38);
          auVar46._13_3_ = 0;
          auVar47 = NEON_ucvtf(auVar46,4);
          fVar35 = fVar53 + auVar37._0_4_ * fVar52 + auVar51._0_4_ * fVar54;
          fVar39 = fVar53 + auVar37._4_4_ * fVar52 + auVar51._4_4_ * fVar54;
          fVar40 = fVar53 + auVar37._8_4_ * fVar52 + auVar51._8_4_ * fVar54;
          fVar41 = fVar53 + auVar37._12_4_ * fVar52 + auVar51._12_4_ * fVar54;
          fVar36 = fVar53 + auVar32._0_4_ * fVar52 + auVar47._0_4_ * fVar54;
          fVar43 = fVar53 + auVar32._4_4_ * fVar52 + auVar47._4_4_ * fVar54;
          fVar33 = fVar53 + auVar32._8_4_ * fVar52 + auVar47._8_4_ * fVar54;
          fVar34 = fVar53 + auVar32._12_4_ * fVar52 + auVar47._12_4_ * fVar54;
          fVar42 = (float)CONCAT13((byte)((ulong)uVar4 >> 0x18) & (byte)((uint)fVar35 >> 0x18) |
                                   (byte)((ulong)uVar13 >> 0x18),
                                   CONCAT12((byte)((ulong)uVar4 >> 0x10) &
                                            (byte)((uint)fVar35 >> 0x10) |
                                            (byte)((ulong)uVar13 >> 0x10),
                                            CONCAT11((byte)((ulong)uVar4 >> 8) &
                                                     (byte)((uint)fVar35 >> 8) |
                                                     (byte)((ulong)uVar13 >> 8),
                                                     (byte)uVar4 & SUB41(fVar35,0) | (byte)uVar13)))
          ;
          auVar44._0_8_ =
               CONCAT17((byte)((ulong)uVar4 >> 0x38) & (byte)((uint)fVar39 >> 0x18) |
                        (byte)((ulong)uVar13 >> 0x38),
                        CONCAT16((byte)((ulong)uVar4 >> 0x30) & (byte)((uint)fVar39 >> 0x10) |
                                 (byte)((ulong)uVar13 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar4 >> 0x28) & (byte)((uint)fVar39 >> 8) |
                                          (byte)((ulong)uVar13 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar4 >> 0x20) & SUB41(fVar39,0) |
                                                   (byte)((ulong)uVar13 >> 0x20),fVar42))));
          auVar44[8] = bVar5 & SUB41(fVar40,0) | bVar14;
          auVar44[9] = bVar6 & (byte)((uint)fVar40 >> 8) | bVar15;
          auVar44[10] = bVar7 & (byte)((uint)fVar40 >> 0x10) | bVar16;
          auVar44[0xb] = bVar8 & (byte)((uint)fVar40 >> 0x18) | bVar17;
          auVar48[0xc] = bVar9 & SUB41(fVar41,0) | bVar18;
          auVar48._0_12_ = auVar44;
          auVar48[0xd] = bVar10 & (byte)((uint)fVar41 >> 8) | bVar19;
          auVar48[0xe] = bVar11 & (byte)((uint)fVar41 >> 0x10) | bVar20;
          auVar48[0xf] = bVar12 & (byte)((uint)fVar41 >> 0x18) | bVar21;
          auVar51._0_8_ =
               CONCAT44((int)(fVar39 + (float)((ulong)auVar44._0_8_ >> 0x20)),(int)(fVar35 + fVar42)
                       );
          auVar51._8_4_ = (int)(fVar40 + auVar44._8_4_);
          auVar51._12_4_ = (int)(fVar41 + auVar48._12_4_);
          auVar38._8_8_ = auVar51._8_8_;
          auVar38._0_8_ = NEON_sqxtun(auVar51._0_8_,auVar51,4);
          fVar35 = (float)CONCAT13(bRam00000001132e8d93 & (byte)((uint)fVar36 >> 0x18) |
                                   bRam00000001132e8db3,
                                   CONCAT12(bRam00000001132e8d92 & (byte)((uint)fVar36 >> 0x10) |
                                            bRam00000001132e8db2,
                                            CONCAT11(uRam00000001132e8d90._1_1_ &
                                                     (byte)((uint)fVar36 >> 8) |
                                                     uRam00000001132e8db0._1_1_,
                                                     (byte)uRam00000001132e8d90 & SUB41(fVar36,0) |
                                                     (byte)uRam00000001132e8db0)));
          auVar45._0_8_ =
               CONCAT17(bRam00000001132e8d97 & (byte)((uint)fVar43 >> 0x18) | bRam00000001132e8db7,
                        CONCAT16(bRam00000001132e8d96 & (byte)((uint)fVar43 >> 0x10) |
                                 bRam00000001132e8db6,
                                 CONCAT15(bRam00000001132e8d95 & (byte)((uint)fVar43 >> 8) |
                                          bRam00000001132e8db5,
                                          CONCAT14(bRam00000001132e8d94 & SUB41(fVar43,0) |
                                                   bRam00000001132e8db4,fVar35))));
          auVar45[8] = bRam00000001132e8d98 & SUB41(fVar33,0) | bRam00000001132e8db8;
          auVar45[9] = bRam00000001132e8d99 & (byte)((uint)fVar33 >> 8) | bRam00000001132e8db9;
          auVar45[10] = bRam00000001132e8d9a & (byte)((uint)fVar33 >> 0x10) | bRam00000001132e8dba;
          auVar45[0xb] = bRam00000001132e8d9b & (byte)((uint)fVar33 >> 0x18) | bRam00000001132e8dbb;
          auVar49[0xc] = bRam00000001132e8d9c & SUB41(fVar34,0) | bRam00000001132e8dbc;
          auVar49._0_12_ = auVar45;
          auVar49[0xd] = bRam00000001132e8d9d & (byte)((uint)fVar34 >> 8) | bRam00000001132e8dbd;
          auVar49[0xe] = bRam00000001132e8d9e & (byte)((uint)fVar34 >> 0x10) | bRam00000001132e8dbe;
          auVar49[0xf] = bRam00000001132e8d9f & (byte)((uint)fVar34 >> 0x18) | bRam00000001132e8dbf;
          auVar37._0_8_ =
               CONCAT44((int)(fVar43 + (float)((ulong)auVar45._0_8_ >> 0x20)),(int)(fVar36 + fVar35)
                       );
          auVar37._8_4_ = (int)(fVar33 + auVar45._8_4_);
          auVar37._12_4_ = (int)(fVar34 + auVar49._12_4_);
          auVar32 = NEON_sqxtun2(auVar38,auVar37,4);
          uVar55 = NEON_uqxtn(auVar37._0_8_,auVar32,2);
          *(undefined8 *)(param_5 + uVar24) = uVar55;
          uVar24 = uVar24 + 8;
        } while ((int)uVar24 <= param_7 + -8);
        uVar24 = uVar24 & 0xffffffff;
      }
      iVar23 = (int)uVar24;
      if (iVar23 <= param_7 + -4) {
        iVar25 = 0;
        lVar27 = lVar22;
        lVar28 = param_3;
        lVar29 = param_1;
        do {
          pbVar1 = (byte *)(lVar29 + uVar24);
          pbVar2 = (byte *)(lVar28 + uVar24);
          fVar43 = *(float *)(&UNK_10e02e7dc + (ulong)pbVar1[1] * 4);
          fVar36 = *(float *)(&UNK_10e02e7dc + (ulong)pbVar2[1] * 4);
          uVar26 = (uint)(long)(float)(int)(*(float *)(&UNK_10e02e7dc + (ulong)*pbVar2 * 4) * fVar54
                                            + fVar52 * *(float *)(&UNK_10e02e7dc +
                                                                 (ulong)*pbVar1 * 4) + fVar53);
          uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar26) {
            uVar26 = 0xff;
          }
          puVar3 = (undefined1 *)(lVar27 + uVar24);
          puVar3[-1] = (char)uVar26;
          uVar26 = (uint)(long)(float)(int)(fVar36 * fVar54 + fVar52 * fVar43 + fVar53);
          uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar26) {
            uVar26 = 0xff;
          }
          *puVar3 = (char)uVar26;
          uVar26 = (uint)(long)(float)(int)(*(float *)(&UNK_10e02e7dc + (ulong)pbVar2[2] * 4) *
                                            fVar54 + fVar52 * *(float *)(&UNK_10e02e7dc +
                                                                        (ulong)pbVar1[2] * 4) +
                                           fVar53);
          uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar26) {
            uVar26 = 0xff;
          }
          uVar30 = (uint)(long)(float)(int)(*(float *)(&UNK_10e02e7dc + (ulong)pbVar2[3] * 4) *
                                            fVar54 + fVar52 * *(float *)(&UNK_10e02e7dc +
                                                                        (ulong)pbVar1[3] * 4) +
                                           fVar53);
          uVar30 = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
          iVar25 = iVar25 + 4;
          if (0xfe < (int)uVar30) {
            uVar30 = 0xff;
          }
          puVar3[1] = (char)uVar26;
          puVar3[2] = (char)uVar30;
          lVar29 = lVar29 + 4;
          lVar28 = lVar28 + 4;
          lVar27 = lVar27 + 4;
        } while (iVar23 + iVar25 <= param_7 + -4);
        uVar24 = (ulong)(uint)(iVar23 + iVar25);
      }
      iVar23 = (int)uVar24;
      while (iVar23 < param_7) {
        uVar26 = (uint)(long)(float)(int)(*(float *)(&UNK_10e02e7dc +
                                                    (ulong)*(byte *)(param_3 + uVar24) * 4) * fVar54
                                          + fVar52 * *(float *)(&UNK_10e02e7dc +
                                                               (ulong)*(byte *)(param_1 + uVar24) *
                                                               4) + fVar53);
        uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar26) {
          uVar26 = 0xff;
        }
        *(char *)(param_5 + uVar24) = (char)uVar26;
        uVar24 = uVar24 + 1;
        iVar23 = (int)uVar24;
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      lVar22 = lVar22 + param_6;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a360b4; end: 109a36a53;  */

void FUN_109a360b4(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  int param_7,int param_8,double *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (param_8 != 0) {
    fVar24 = (float)*param_9;
    fVar25 = (float)param_9[1];
    fVar26 = (float)param_9[2];
    lVar6 = param_5 + 4;
    do {
      if (param_7 < 8) {
        uVar14 = 0;
      }
      else {
        lVar8 = 0;
        uVar14 = 0;
        do {
          uVar28 = ((undefined8 *)(param_1 + lVar8))[1];
          uVar27 = *(undefined8 *)(param_1 + lVar8);
          auVar17 = *(undefined1 (*) [16])(param_3 + lVar8);
          if (((bRam00000001132e8de0 & 1) == 0) &&
             (iVar5 = 0x132e8de0, ___cxa_guard_acquire(), iVar5 != 0)) {
            fRam00000001132e8dd8 = 0.5;
            fRam00000001132e8ddc = 0.5;
            uRam00000001132e8dd0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132e8de0);
          }
          fVar18 = fRam00000001132e8ddc;
          fVar15 = fRam00000001132e8dd8;
          uVar4 = uRam00000001132e8dd0;
          if (((bRam00000001132e8de0 & 1) == 0) &&
             (iVar5 = 0x132e8de0, ___cxa_guard_acquire(), iVar5 != 0)) {
            fRam00000001132e8dd8 = 0.5;
            fRam00000001132e8ddc = 0.5;
            uRam00000001132e8dd0 = 0x3f0000003f000000;
            ___cxa_guard_release(0x1132e8de0);
          }
          auVar16._2_2_ = 0;
          auVar16._0_2_ = (ushort)uVar27;
          auVar16._4_2_ = (short)((ulong)uVar27 >> 0x10);
          auVar16._6_2_ = 0;
          auVar16._8_2_ = (short)((ulong)uVar27 >> 0x20);
          auVar16._10_2_ = 0;
          auVar16._12_2_ = (short)((ulong)uVar27 >> 0x30);
          auVar16._14_2_ = 0;
          auVar16 = NEON_ucvtf(auVar16,4);
          auVar19._2_2_ = 0;
          auVar19._0_2_ = auVar17._0_2_;
          auVar19._4_2_ = auVar17._2_2_;
          auVar19._6_2_ = 0;
          auVar19._8_2_ = auVar17._4_2_;
          auVar19._10_2_ = 0;
          auVar19._12_2_ = auVar17._6_2_;
          auVar19._14_2_ = 0;
          auVar20 = NEON_ucvtf(auVar19,4);
          auVar23._0_8_ =
               CONCAT44((int)(fVar26 + auVar16._4_4_ * fVar24 + auVar20._4_4_ * fVar25 +
                             (float)((ulong)uVar4 >> 0x20)),
                        (int)(fVar26 + auVar16._0_4_ * fVar24 + auVar20._0_4_ * fVar25 +
                             (float)uVar4));
          auVar23._8_4_ = (int)(fVar26 + auVar16._8_4_ * fVar24 + auVar20._8_4_ * fVar25 + fVar15);
          auVar23._12_4_ =
               (int)(fVar26 + auVar16._12_4_ * fVar24 + auVar20._12_4_ * fVar25 + fVar18);
          auVar20._8_8_ = auVar23._8_8_;
          auVar20._0_8_ = NEON_uqxtn(auVar23._0_8_,auVar23,4);
          auVar21._2_2_ = 0;
          auVar21._0_2_ = (ushort)uVar28;
          auVar21._4_2_ = (short)((ulong)uVar28 >> 0x10);
          auVar21._6_2_ = 0;
          auVar21._8_2_ = (short)((ulong)uVar28 >> 0x20);
          auVar21._10_2_ = 0;
          auVar21._12_2_ = (short)((ulong)uVar28 >> 0x30);
          auVar21._14_2_ = 0;
          auVar16 = NEON_ucvtf(auVar21,4);
          auVar22._2_2_ = 0;
          auVar22._0_2_ = auVar17._8_2_;
          auVar22._4_2_ = auVar17._10_2_;
          auVar22._6_2_ = 0;
          auVar22._8_2_ = auVar17._12_2_;
          auVar22._10_2_ = 0;
          auVar22._12_2_ = auVar17._14_2_;
          auVar22._14_2_ = 0;
          auVar23 = NEON_ucvtf(auVar22,4);
          auVar17._0_4_ =
               (int)(fVar26 + auVar16._0_4_ * fVar24 + auVar23._0_4_ * fVar25 +
                    (float)uRam00000001132e8dd0);
          auVar17._4_4_ =
               (int)(fVar26 + auVar16._4_4_ * fVar24 + auVar23._4_4_ * fVar25 +
                    uRam00000001132e8dd0._4_4_);
          auVar17._8_4_ =
               (int)(fVar26 + auVar16._8_4_ * fVar24 + auVar23._8_4_ * fVar25 + fRam00000001132e8dd8
                    );
          auVar17._12_4_ =
               (int)(fVar26 + auVar16._12_4_ * fVar24 + auVar23._12_4_ * fVar25 +
                    fRam00000001132e8ddc);
          auVar17 = NEON_uqxtn2(auVar20,auVar17,4);
          ((undefined8 *)(param_5 + lVar8))[1] = auVar17._8_8_;
          *(undefined8 *)(param_5 + lVar8) = auVar17._0_8_;
          uVar9 = (int)uVar14 + 8;
          uVar14 = (ulong)uVar9;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar9 <= param_7 + -8);
      }
      if ((int)uVar14 <= param_7 + -4) {
        uVar7 = (ulong)(int)uVar14;
        uVar10 = -(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1;
        lVar11 = lVar6;
        lVar12 = param_3;
        lVar8 = param_1;
        uVar14 = uVar7;
        do {
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + uVar7 * 2));
          fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + uVar7 * 2));
          uVar9 = (uint)(long)(float)(int)(fVar25 * fVar18 + fVar24 * fVar15 + fVar26);
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar9) {
            uVar9 = 0xffff;
          }
          lVar1 = lVar8 + uVar10;
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 2));
          lVar2 = lVar12 + uVar10;
          fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 2));
          uVar13 = (uint)(long)(float)(int)(fVar25 * fVar18 + fVar24 * fVar15 + fVar26);
          uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar13) {
            uVar13 = 0xffff;
          }
          lVar3 = lVar11 + uVar10;
          *(short *)(lVar3 + -4) = (short)uVar9;
          *(short *)(lVar3 + -2) = (short)uVar13;
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
          fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
          uVar9 = (uint)(long)(float)(int)(fVar25 * fVar18 + fVar24 * fVar15 + fVar26);
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
          fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
          if (0xfffe < (int)uVar9) {
            uVar9 = 0xffff;
          }
          uVar13 = (uint)(long)(float)(int)(fVar25 * fVar18 + fVar24 * fVar15 + fVar26);
          uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar13) {
            uVar13 = 0xffff;
          }
          *(short *)(lVar11 + uVar7 * 2) = (short)uVar9;
          uVar14 = uVar14 + 4;
          *(short *)(lVar3 + 2) = (short)uVar13;
          lVar8 = lVar8 + 8;
          lVar12 = lVar12 + 8;
          lVar11 = lVar11 + 8;
        } while ((long)uVar14 <= (long)(param_7 + -4));
      }
      if ((int)uVar14 < param_7) {
        lVar8 = (long)(int)uVar14;
        do {
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + lVar8 * 2));
          fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + lVar8 * 2));
          uVar9 = (uint)(long)(float)(int)(fVar25 * fVar18 + fVar24 * fVar15 + fVar26);
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          if (0xfffe < (int)uVar9) {
            uVar9 = 0xffff;
          }
          *(short *)(param_5 + lVar8 * 2) = (short)uVar9;
          lVar8 = lVar8 + 1;
        } while (param_7 != lVar8);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffffe);
      param_3 = param_3 + (param_4 & 0xfffffffffffffffe);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffe);
      lVar6 = lVar6 + (param_6 & 0xfffffffffffffffe);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a36a54; end: 109a36d87;  */

void FUN_109a36a54(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  uint param_7,int param_8,double *param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (param_8 != 0) {
    dVar8 = *param_9;
    dVar9 = param_9[1];
    dVar10 = param_9[2];
    do {
      if ((int)param_7 < 4) {
        uVar6 = 0;
      }
      else {
        lVar7 = 0;
        uVar6 = 0;
        do {
          piVar1 = (int *)(param_1 + lVar7);
          iVar4 = piVar1[1];
          piVar2 = (int *)(param_3 + lVar7);
          iVar5 = piVar2[1];
          puVar3 = (undefined4 *)(param_5 + lVar7);
          *puVar3 = (int)(long)(double)(long)(dVar10 + dVar9 * (double)*piVar2 +
                                                       dVar8 * (double)*piVar1);
          puVar3[1] = (int)(long)(double)(long)(dVar10 + dVar9 * (double)iVar5 +
                                                         dVar8 * (double)iVar4);
          iVar4 = piVar1[3];
          iVar5 = piVar2[3];
          puVar3[2] = (int)(long)(double)(long)(dVar10 + dVar9 * (double)piVar2[2] +
                                                         dVar8 * (double)piVar1[2]);
          puVar3[3] = (int)(long)(double)(long)(dVar10 + dVar9 * (double)iVar5 +
                                                         dVar8 * (double)iVar4);
          uVar6 = uVar6 + 4;
          lVar7 = lVar7 + 0x10;
        } while ((long)uVar6 <= (long)(int)(param_7 - 4));
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 < (int)param_7) {
        do {
          *(int *)(param_5 + uVar6 * 4) =
               (int)(long)(double)(long)(dVar10 + dVar9 * (double)*(int *)(param_3 + uVar6 * 4) +
                                                  dVar8 * (double)*(int *)(param_1 + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (param_7 != uVar6);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffffc);
      param_3 = param_3 + (param_4 & 0xfffffffffffffffc);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}



/* Entry: 109a36d88; end: 109a37127;  */

void FUN_109a36d88(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,int *param_9)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar15;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar23;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  iVar6 = param_9[1];
  if (iVar6 != 0) {
    iVar5 = *param_9;
    lVar7 = (long)iVar5 + -4;
    lVar8 = param_7 + 1;
    do {
      if (iVar5 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          uVar23 = ((undefined8 *)(param_1 + uVar10))[1];
          uVar15 = *(undefined8 *)(param_1 + uVar10);
          uVar32 = ((undefined8 *)(param_3 + uVar10))[1];
          uVar31 = *(undefined8 *)(param_3 + uVar10);
          uVar34 = ((undefined8 *)(param_5 + uVar10))[1];
          uVar33 = *(undefined8 *)(param_5 + uVar10);
          bVar16 = (byte)((ulong)uVar15 >> 8);
          bVar17 = (byte)((ulong)uVar15 >> 0x10);
          bVar18 = (byte)((ulong)uVar15 >> 0x18);
          bVar19 = (byte)((ulong)uVar15 >> 0x20);
          bVar20 = (byte)((ulong)uVar15 >> 0x28);
          bVar21 = (byte)((ulong)uVar15 >> 0x30);
          bVar22 = (byte)((ulong)uVar15 >> 0x38);
          bVar24 = (byte)((ulong)uVar23 >> 8);
          bVar25 = (byte)((ulong)uVar23 >> 0x10);
          bVar26 = (byte)((ulong)uVar23 >> 0x18);
          bVar27 = (byte)((ulong)uVar23 >> 0x20);
          bVar28 = (byte)((ulong)uVar23 >> 0x28);
          bVar29 = (byte)((ulong)uVar23 >> 0x30);
          bVar30 = (byte)((ulong)uVar23 >> 0x38);
          ((undefined8 *)(param_7 + uVar10))[1] =
               CONCAT17(-((byte)((ulong)uVar32 >> 0x38) <= bVar30) &
                        -(bVar30 <= (byte)((ulong)uVar34 >> 0x38)),
                        CONCAT16(-((byte)((ulong)uVar32 >> 0x30) <= bVar29) &
                                 -(bVar29 <= (byte)((ulong)uVar34 >> 0x30)),
                                 CONCAT15(-((byte)((ulong)uVar32 >> 0x28) <= bVar28) &
                                          -(bVar28 <= (byte)((ulong)uVar34 >> 0x28)),
                                          CONCAT14(-((byte)((ulong)uVar32 >> 0x20) <= bVar27) &
                                                   -(bVar27 <= (byte)((ulong)uVar34 >> 0x20)),
                                                   CONCAT13(-((byte)((ulong)uVar32 >> 0x18) <=
                                                             bVar26) &
                                                            -(bVar26 <=
                                                             (byte)((ulong)uVar34 >> 0x18)),
                                                            CONCAT12(-((byte)((ulong)uVar32 >> 0x10)
                                                                      <= bVar25) &
                                                                     -(bVar25 <=
                                                                      (byte)((ulong)uVar34 >> 0x10))
                                                                     ,CONCAT11(-((byte)((ulong)
                                                  uVar32 >> 8) <= bVar24) &
                                                  -(bVar24 <= (byte)((ulong)uVar34 >> 8)),
                                                  -((byte)uVar32 <= (byte)uVar23) &
                                                  -((byte)uVar23 <= (byte)uVar34))))))));
          *(undefined8 *)(param_7 + uVar10) =
               CONCAT17(-((byte)((ulong)uVar31 >> 0x38) <= bVar22) &
                        -(bVar22 <= (byte)((ulong)uVar33 >> 0x38)),
                        CONCAT16(-((byte)((ulong)uVar31 >> 0x30) <= bVar21) &
                                 -(bVar21 <= (byte)((ulong)uVar33 >> 0x30)),
                                 CONCAT15(-((byte)((ulong)uVar31 >> 0x28) <= bVar20) &
                                          -(bVar20 <= (byte)((ulong)uVar33 >> 0x28)),
                                          CONCAT14(-((byte)((ulong)uVar31 >> 0x20) <= bVar19) &
                                                   -(bVar19 <= (byte)((ulong)uVar33 >> 0x20)),
                                                   CONCAT13(-((byte)((ulong)uVar31 >> 0x18) <=
                                                             bVar18) &
                                                            -(bVar18 <=
                                                             (byte)((ulong)uVar33 >> 0x18)),
                                                            CONCAT12(-((byte)((ulong)uVar31 >> 0x10)
                                                                      <= bVar17) &
                                                                     -(bVar17 <=
                                                                      (byte)((ulong)uVar33 >> 0x10))
                                                                     ,CONCAT11(-((byte)((ulong)
                                                  uVar31 >> 8) <= bVar16) &
                                                  -(bVar16 <= (byte)((ulong)uVar33 >> 8)),
                                                  -((byte)uVar31 <= (byte)uVar15) &
                                                  -((byte)uVar15 <= (byte)uVar33))))))));
          uVar10 = uVar10 + 0x10;
        } while (uVar10 <= iVar5 - 0x10);
      }
      iVar9 = (int)uVar10;
      if (iVar9 <= (int)lVar7) {
        lVar12 = 0;
        lVar11 = param_3 + iVar9;
        lVar1 = param_5 + iVar9;
        lVar2 = param_1 + iVar9;
        do {
          if (*(byte *)(lVar2 + lVar12) < *(byte *)(lVar11 + lVar12)) {
            cVar13 = '\0';
          }
          else {
            cVar13 = -(*(byte *)(lVar2 + lVar12) <= *(byte *)(lVar1 + lVar12));
          }
          bVar16 = *(byte *)(lVar2 + lVar12 + 1);
          if (bVar16 < *(byte *)(lVar11 + lVar12 + 1)) {
            cVar14 = '\0';
          }
          else {
            cVar14 = -(bVar16 <= *(byte *)(lVar1 + lVar12 + 1));
          }
          pcVar3 = (char *)(lVar8 + iVar9 + lVar12);
          pcVar3[-1] = cVar13;
          *pcVar3 = cVar14;
          bVar16 = *(byte *)(lVar2 + lVar12 + 2);
          if (bVar16 < *(byte *)(lVar11 + lVar12 + 2)) {
            cVar13 = '\0';
          }
          else {
            cVar13 = -(bVar16 <= *(byte *)(lVar1 + lVar12 + 2));
          }
          bVar16 = *(byte *)(lVar2 + lVar12 + 3);
          if (bVar16 < *(byte *)(lVar11 + lVar12 + 3)) {
            cVar14 = '\0';
          }
          else {
            cVar14 = -(bVar16 <= *(byte *)(lVar1 + lVar12 + 3));
          }
          lVar4 = lVar8 + iVar9 + lVar12;
          *(char *)(lVar4 + 1) = cVar13;
          *(char *)(lVar4 + 2) = cVar14;
          lVar12 = lVar12 + 4;
        } while (iVar9 + lVar12 <= lVar7);
        iVar9 = iVar9 + (int)lVar12;
      }
      if (iVar9 < iVar5) {
        lVar11 = (long)iVar9;
        do {
          if (*(byte *)(param_1 + lVar11) < *(byte *)(param_3 + lVar11)) {
            cVar13 = '\0';
          }
          else {
            cVar13 = -(*(byte *)(param_1 + lVar11) <= *(byte *)(param_5 + lVar11));
          }
          *(char *)(param_7 + lVar11) = cVar13;
          lVar11 = lVar11 + 1;
        } while (iVar5 != lVar11);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      param_5 = param_5 + param_6;
      param_7 = param_7 + param_8;
      lVar8 = lVar8 + param_8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



/* Entry: 109a37128; end: 109a3798f;  */

void FUN_109a37128(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  long param_7,long param_8,int *param_9)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  char cVar33;
  char cVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  iVar25 = param_9[1];
  if (iVar25 != 0) {
    iVar10 = *param_9;
    lVar26 = (long)iVar10 + -4;
    lVar27 = param_7 + 1;
    do {
      if (iVar10 < 0x10) {
        uVar29 = 0;
      }
      else {
        lVar30 = 0;
        uVar29 = 0;
        do {
          puVar3 = (undefined8 *)(param_1 + lVar30);
          puVar4 = (undefined8 *)(param_3 + lVar30);
          puVar5 = (undefined8 *)(param_5 + lVar30);
          uVar18 = puVar3[1];
          uVar17 = *puVar3;
          uVar20 = puVar3[3];
          uVar38 = (ushort)((ulong)uVar20 >> 0x10);
          uVar39 = (ushort)((ulong)uVar20 >> 0x20);
          uVar40 = (ushort)((ulong)uVar20 >> 0x30);
          uVar19 = puVar3[2];
          uVar35 = (ushort)((ulong)uVar19 >> 0x10);
          uVar36 = (ushort)((ulong)uVar19 >> 0x20);
          uVar37 = (ushort)((ulong)uVar19 >> 0x30);
          uVar22 = puVar4[1];
          uVar21 = *puVar4;
          uVar24 = puVar4[3];
          uVar23 = puVar4[2];
          uVar42 = puVar5[1];
          uVar41 = *puVar5;
          uVar44 = puVar5[3];
          uVar43 = puVar5[2];
          uVar11 = (ushort)((ulong)uVar17 >> 0x10);
          uVar12 = (ushort)((ulong)uVar17 >> 0x20);
          uVar13 = (ushort)((ulong)uVar17 >> 0x30);
          uVar14 = (ushort)((ulong)uVar18 >> 0x10);
          uVar15 = (ushort)((ulong)uVar18 >> 0x20);
          uVar16 = (ushort)((ulong)uVar18 >> 0x30);
          ((undefined8 *)(param_7 + uVar29))[1] =
               CONCAT17(-((ushort)((ulong)uVar24 >> 0x30) <= uVar40) &
                        -(uVar40 <= (ushort)((ulong)uVar44 >> 0x30)),
                        CONCAT16(-((ushort)((ulong)uVar24 >> 0x20) <= uVar39) &
                                 -(uVar39 <= (ushort)((ulong)uVar44 >> 0x20)),
                                 CONCAT15(-((ushort)((ulong)uVar24 >> 0x10) <= uVar38) &
                                          -(uVar38 <= (ushort)((ulong)uVar44 >> 0x10)),
                                          CONCAT14(-((ushort)uVar24 <= (ushort)uVar20) &
                                                   -((ushort)uVar20 <= (ushort)uVar44),
                                                   CONCAT13(-((ushort)((ulong)uVar23 >> 0x30) <=
                                                             uVar37) &
                                                            -(uVar37 <=
                                                             (ushort)((ulong)uVar43 >> 0x30)),
                                                            CONCAT12(-((ushort)((ulong)uVar23 >>
                                                                               0x20) <= uVar36) &
                                                                     -(uVar36 <=
                                                                      (ushort)((ulong)uVar43 >> 0x20
                                                                              )),
                                                                     CONCAT11(-((ushort)((ulong)
                                                  uVar23 >> 0x10) <= uVar35) &
                                                  -(uVar35 <= (ushort)((ulong)uVar43 >> 0x10)),
                                                  -((ushort)uVar23 <= (ushort)uVar19) &
                                                  -((ushort)uVar19 <= (ushort)uVar43))))))));
          *(undefined8 *)(param_7 + uVar29) =
               CONCAT17(-((ushort)((ulong)uVar22 >> 0x30) <= uVar16) &
                        -(uVar16 <= (ushort)((ulong)uVar42 >> 0x30)),
                        CONCAT16(-((ushort)((ulong)uVar22 >> 0x20) <= uVar15) &
                                 -(uVar15 <= (ushort)((ulong)uVar42 >> 0x20)),
                                 CONCAT15(-((ushort)((ulong)uVar22 >> 0x10) <= uVar14) &
                                          -(uVar14 <= (ushort)((ulong)uVar42 >> 0x10)),
                                          CONCAT14(-((ushort)uVar22 <= (ushort)uVar18) &
                                                   -((ushort)uVar18 <= (ushort)uVar42),
                                                   CONCAT13(-((ushort)((ulong)uVar21 >> 0x30) <=
                                                             uVar13) &
                                                            -(uVar13 <=
                                                             (ushort)((ulong)uVar41 >> 0x30)),
                                                            CONCAT12(-((ushort)((ulong)uVar21 >>
                                                                               0x20) <= uVar12) &
                                                                     -(uVar12 <=
                                                                      (ushort)((ulong)uVar41 >> 0x20
                                                                              )),
                                                                     CONCAT11(-((ushort)((ulong)
                                                  uVar21 >> 0x10) <= uVar11) &
                                                  -(uVar11 <= (ushort)((ulong)uVar41 >> 0x10)),
                                                  -((ushort)uVar21 <= (ushort)uVar17) &
                                                  -((ushort)uVar17 <= (ushort)uVar41))))))));
          uVar29 = uVar29 + 0x10;
          lVar30 = lVar30 + 0x20;
        } while (uVar29 <= iVar10 - 0x10);
      }
      iVar28 = (int)uVar29;
      if (iVar28 <= (int)lVar26) {
        lVar31 = 0;
        lVar30 = param_3 + (long)iVar28 * 2;
        lVar1 = param_5 + (long)iVar28 * 2;
        lVar2 = param_1 + (long)iVar28 * 2;
        lVar32 = 6;
        do {
          uVar11 = *(ushort *)(lVar2 + lVar32 + -6);
          if (uVar11 < *(ushort *)(lVar30 + lVar32 + -6)) {
            cVar33 = '\0';
          }
          else {
            cVar33 = -(uVar11 <= *(ushort *)(lVar1 + lVar32 + -6));
          }
          lVar6 = lVar30 + lVar31 * 2;
          lVar7 = lVar2 + lVar31 * 2;
          uVar11 = *(ushort *)(lVar7 + 2);
          lVar8 = lVar1 + lVar31 * 2;
          if (uVar11 < *(ushort *)(lVar6 + 2)) {
            cVar34 = '\0';
          }
          else {
            cVar34 = -(uVar11 <= *(ushort *)(lVar8 + 2));
          }
          pcVar9 = (char *)(lVar27 + iVar28 + lVar31);
          pcVar9[-1] = cVar33;
          *pcVar9 = cVar34;
          uVar11 = *(ushort *)(lVar7 + 4);
          if (uVar11 < *(ushort *)(lVar6 + 4)) {
            cVar33 = '\0';
          }
          else {
            cVar33 = -(uVar11 <= *(ushort *)(lVar8 + 4));
          }
          if (*(ushort *)(lVar2 + lVar32) < *(ushort *)(lVar30 + lVar32)) {
            cVar34 = '\0';
          }
          else {
            cVar34 = -(*(ushort *)(lVar2 + lVar32) <= *(ushort *)(lVar1 + lVar32));
          }
          lVar6 = lVar27 + iVar28 + lVar31;
          *(char *)(lVar6 + 1) = cVar33;
          *(char *)(lVar6 + 2) = cVar34;
          lVar31 = lVar31 + 4;
          lVar32 = lVar32 + 8;
        } while (iVar28 + lVar31 <= lVar26);
        iVar28 = iVar28 + (int)lVar31;
      }
      if (iVar28 < iVar10) {
        lVar30 = (long)iVar28;
        do {
          uVar11 = *(ushort *)(param_1 + lVar30 * 2);
          if (uVar11 < *(ushort *)(param_3 + lVar30 * 2)) {
            cVar33 = '\0';
          }
          else {
            cVar33 = -(uVar11 <= *(ushort *)(param_5 + lVar30 * 2));
          }
          *(char *)(param_7 + lVar30) = cVar33;
          lVar30 = lVar30 + 1;
        } while (iVar10 != lVar30);
      }
      param_7 = param_7 + param_8;
      param_1 = param_1 + (param_2 & 0xfffffffffffffffe);
      param_5 = param_5 + (param_6 & 0xfffffffffffffffe);
      param_3 = param_3 + (param_4 & 0xfffffffffffffffe);
      lVar27 = lVar27 + param_8;
      iVar25 = iVar25 + -1;
    } while (iVar25 != 0);
  }
  return;
}



/* Entry: 109a37990; end: 109a37b03;  */

void FUN_109a37990(long param_1,ulong param_2,long param_3,ulong param_4,long param_5,ulong param_6,
                  long param_7,long param_8,int *param_9)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  double dVar7;
  
  iVar3 = param_9[1];
  if (iVar3 != 0) {
    iVar1 = *param_9;
    do {
      if (iVar1 < 4) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          if (*(double *)(param_3 + lVar5) <= *(double *)(param_1 + lVar5)) {
            cVar6 = -(*(double *)(param_1 + lVar5) <= *(double *)(param_5 + lVar5));
          }
          else {
            cVar6 = '\0';
          }
          dVar7 = *(double *)(param_1 + lVar5 + 8);
          if (*(double *)(param_3 + lVar5 + 8) <= dVar7) {
            cVar2 = -(dVar7 <= *(double *)(param_5 + lVar5 + 8));
          }
          else {
            cVar2 = '\0';
          }
          *(char *)(param_7 + uVar4) = cVar6;
          ((char *)(param_7 + uVar4))[1] = cVar2;
          dVar7 = *(double *)(param_1 + lVar5 + 0x10);
          if (*(double *)(param_3 + lVar5 + 0x10) <= dVar7) {
            cVar6 = -(dVar7 <= *(double *)(param_5 + lVar5 + 0x10));
          }
          else {
            cVar6 = '\0';
          }
          dVar7 = *(double *)(param_1 + lVar5 + 0x18);
          if (*(double *)(param_3 + lVar5 + 0x18) <= dVar7) {
            cVar2 = -(dVar7 <= *(double *)(param_5 + lVar5 + 0x18));
          }
          else {
            cVar2 = '\0';
          }
          *(char *)(param_7 + uVar4 + 2) = cVar6;
          *(char *)(param_7 + uVar4 + 3) = cVar2;
          uVar4 = uVar4 + 4;
          lVar5 = lVar5 + 0x20;
        } while ((long)uVar4 <= (long)iVar1 + -4);
        uVar4 = uVar4 & 0xffffffff;
      }
      if ((int)uVar4 < iVar1) {
        do {
          dVar7 = *(double *)(param_1 + uVar4 * 8);
          if (*(double *)(param_3 + uVar4 * 8) <= dVar7) {
            cVar6 = -(dVar7 <= *(double *)(param_5 + uVar4 * 8));
          }
          else {
            cVar6 = '\0';
          }
          *(char *)(param_7 + uVar4) = cVar6;
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)iVar1);
      }
      param_7 = param_7 + param_8;
      param_5 = param_5 + (param_6 & 0xfffffffffffffff8);
      param_1 = param_1 + (param_2 & 0xfffffffffffffff8);
      param_3 = param_3 + (param_4 & 0xfffffffffffffff8);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



/* Entry: 109a37b04; end: 109a38ed7;  */

long FUN_109a37b04(float param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_1 == 1.0) {
    if (7 < param_5) {
      lVar3 = 0;
      do {
        iVar4 = 0x132e8de0;
        uVar9 = *(undefined8 *)(param_2 + lVar3);
        uVar5 = *(undefined8 *)(param_3 + lVar3);
        if (((bRam00000001132e8de0 & 1) == 0) && (___cxa_guard_acquire(), iVar4 != 0)) {
          uRam00000001132e8dd8 = 0x3f0000003f000000;
          uRam00000001132e8dd0 = 0x3f0000003f000000;
          ___cxa_guard_release(0x1132e8de0);
        }
        uVar2 = uRam00000001132e8dd8;
        uVar1 = uRam00000001132e8dd0;
        iVar4 = 0x132e8de0;
        if (((bRam00000001132e8de0 & 1) == 0) && (___cxa_guard_acquire(), iVar4 != 0)) {
          uRam00000001132e8dd8 = 0x3f0000003f000000;
          uRam00000001132e8dd0 = 0x3f0000003f000000;
          ___cxa_guard_release(0x1132e8de0);
        }
        auVar6 = NEON_umull(uVar5,uVar9,1);
        auVar10._2_2_ = 0;
        auVar10._0_2_ = auVar6._0_2_;
        auVar10._4_2_ = auVar6._2_2_;
        auVar10._6_2_ = 0;
        auVar10._8_2_ = auVar6._4_2_;
        auVar10._10_2_ = 0;
        auVar10._12_2_ = auVar6._6_2_;
        auVar10._14_2_ = 0;
        auVar11 = NEON_ucvtf(auVar10,4);
        auVar7._2_2_ = 0;
        auVar7._0_2_ = auVar6._8_2_;
        auVar7._4_2_ = auVar6._10_2_;
        auVar7._6_2_ = 0;
        auVar7._8_2_ = auVar6._12_2_;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = auVar6._14_2_;
        auVar7._14_2_ = 0;
        auVar6 = NEON_ucvtf(auVar7,4);
        auVar12._0_8_ =
             CONCAT44((int)((float)((ulong)uVar1 >> 0x20) + auVar11._4_4_),
                      (int)((float)uVar1 + auVar11._0_4_));
        auVar12._8_4_ = (int)((float)uVar2 + auVar11._8_4_);
        auVar12._12_4_ = (int)((float)((ulong)uVar2 >> 0x20) + auVar11._12_4_);
        auVar13._8_8_ = auVar12._8_8_;
        auVar13._0_8_ = NEON_uqxtn(auVar12._0_8_,auVar12,4);
        auVar8._0_8_ = CONCAT44((int)(uRam00000001132e8dd0._4_4_ + auVar6._4_4_),
                                (int)((float)uRam00000001132e8dd0 + auVar6._0_4_));
        auVar8._8_4_ = (int)((float)uRam00000001132e8dd8 + auVar6._8_4_);
        auVar8._12_4_ = (int)(uRam00000001132e8dd8._4_4_ + auVar6._12_4_);
        auVar6 = NEON_uqxtn2(auVar13,auVar8,4);
        uVar5 = NEON_uqxtn(auVar8._0_8_,auVar6,2);
        *(undefined8 *)(param_4 + lVar3) = uVar5;
        lVar3 = lVar3 + 8;
      } while ((int)lVar3 <= param_5 + -8);
      return lVar3;
    }
  }
  else if (7 < param_5) {
    lVar3 = 0;
    do {
      iVar4 = 0x132e8de0;
      uVar5 = *(undefined8 *)(param_2 + lVar3);
      uVar9 = *(undefined8 *)(param_3 + lVar3);
      if (((bRam00000001132e8de0 & 1) == 0) && (___cxa_guard_acquire(), iVar4 != 0)) {
        uRam00000001132e8dd8 = 0x3f0000003f000000;
        uRam00000001132e8dd0 = 0x3f0000003f000000;
        ___cxa_guard_release(0x1132e8de0);
      }
      uVar2 = uRam00000001132e8dd8;
      uVar1 = uRam00000001132e8dd0;
      iVar4 = 0x132e8de0;
      if (((bRam00000001132e8de0 & 1) == 0) && (___cxa_guard_acquire(), iVar4 != 0)) {
        uRam00000001132e8dd8 = 0x3f0000003f000000;
        uRam00000001132e8dd0 = 0x3f0000003f000000;
        ___cxa_guard_release(0x1132e8de0);
      }
      auVar11 = NEON_umull(uVar9,uVar5,1);
      auVar6._2_2_ = 0;
      auVar6._0_2_ = auVar11._0_2_;
      auVar6._4_2_ = auVar11._2_2_;
      auVar6._6_2_ = 0;
      auVar6._8_2_ = auVar11._4_2_;
      auVar6._10_2_ = 0;
      auVar6._12_2_ = auVar11._6_2_;
      auVar6._14_2_ = 0;
      auVar6 = NEON_ucvtf(auVar6,4);
      auVar15._2_2_ = 0;
      auVar15._0_2_ = auVar11._8_2_;
      auVar15._4_2_ = auVar11._10_2_;
      auVar15._6_2_ = 0;
      auVar15._8_2_ = auVar11._12_2_;
      auVar15._10_2_ = 0;
      auVar15._12_2_ = auVar11._14_2_;
      auVar15._14_2_ = 0;
      auVar15 = NEON_ucvtf(auVar15,4);
      auVar11._0_8_ =
           CONCAT44((int)(auVar6._4_4_ * param_1 + (float)((ulong)uVar1 >> 0x20)),
                    (int)(auVar6._0_4_ * param_1 + (float)uVar1));
      auVar11._8_4_ = (int)(auVar6._8_4_ * param_1 + (float)uVar2);
      auVar11._12_4_ = (int)(auVar6._12_4_ * param_1 + (float)((ulong)uVar2 >> 0x20));
      auVar14._8_8_ = auVar11._8_8_;
      auVar14._0_8_ = NEON_uqxtn(auVar11._0_8_,auVar11,4);
      auVar16._0_4_ = (int)(auVar15._0_4_ * param_1 + (float)uRam00000001132e8dd0);
      auVar16._4_4_ = (int)(auVar15._4_4_ * param_1 + uRam00000001132e8dd0._4_4_);
      auVar16._8_4_ = (int)(auVar15._8_4_ * param_1 + (float)uRam00000001132e8dd8);
      auVar16._12_4_ = (int)(auVar15._12_4_ * param_1 + uRam00000001132e8dd8._4_4_);
      auVar6 = NEON_uqxtn2(auVar14,auVar16,4);
      uVar5 = NEON_uqxtn(auVar6._0_8_,auVar6,2);
      *(undefined8 *)(param_4 + lVar3) = uVar5;
      lVar3 = lVar3 + 8;
    } while ((int)lVar3 <= param_5 + -8);
    return lVar3;
  }
  return 0;
}



/* Entry: 109a38ed8; end: 109a38f43;  */

undefined8 * FUN_109a38ed8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar1 = param_2;
    _strlen();
    puVar2 = (undefined4 *)((uVar1 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar2 = 1;
    *param_1 = puVar2 + 1;
    param_1[1] = uVar1;
    *(undefined1 *)((long)(puVar2 + 1) + uVar1) = 0;
    _memcpy(*param_1,param_2,uVar1);
  }
  return param_1;
}



/* Entry: 109a38f44; end: 109a3907b;  */

void FUN_109a38f44(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if ((-1 < (int)param_1) && (0 < (int)param_2)) {
    uVar1 = ((param_3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_3 & 7) << 1) & 3)) *
            param_2;
    puVar3 = (uint *)0x28;
    func_0x000107c2ae8c();
    *puVar3 = param_3 & 0xfff | 0x42424000;
    puVar3[1] = uVar1;
    puVar3[8] = param_1;
    puVar3[9] = param_2;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 1;
    if ((ulong)uVar1 * (ulong)param_1 >> 0x1f != 0) {
      *puVar3 = param_3 & 0xfff | 0x42420000;
    }
    return;
  }
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_40 = puVar4 + 1;
  uStack_38 = 0x1c;
  *(undefined1 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x6469772065766974;
  *(undefined8 *)(puVar4 + 1) = 0x69736f702d6e6f4e;
  *(undefined8 *)(puVar4 + 6) = 0x7468676965682072;
  *(undefined8 *)(puVar4 + 4) = 0x6f20687464697720;
  FUN_109ac3188(0xffffff37,&puStack_40,&UNK_10f5953be,&UNK_10f595324,0x77);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3904c);
  (*pcVar2)();
}



/* Entry: 109a3907c; end: 109a393d3;  */

void FUN_109a3907c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if ((uVar1 & 0xffff0000) == 0x42420000) {
      uVar2 = param_1[9];
      if (-1 < (int)uVar2) {
        uVar3 = param_1[8];
        if (-1 < (int)uVar3) {
          if (uVar2 == 0) {
            return;
          }
          if (uVar3 == 0) {
            return;
          }
          if (*(long *)(param_1 + 6) == 0) {
            uVar10 = param_1[1];
            if (uVar10 == 0) {
              uVar10 = uVar2 * ((uVar1 >> 3 & 0x1ff) + 1 <<
                               (ulong)(0xfa50U >> (ulong)((uVar1 & 7) << 1) & 3));
            }
            uVar8 = (long)(int)uVar10 * (ulong)uVar3;
LAB_109a391b0:
            puVar5 = (undefined4 *)(uVar8 + 0x14);
            func_0x000107c2ae8c();
            *(undefined4 **)(param_1 + 2) = puVar5;
            *(ulong *)(param_1 + 6) = (long)puVar5 + 0x13U & 0xfffffffffffffff0;
            *puVar5 = 1;
            return;
          }
          puVar5 = (undefined4 *)0x20;
          func_0x000107c2ae8c();
          *puVar5 = 1;
          puStack_30 = puVar5 + 1;
          uStack_28 = 0x19;
          *(undefined1 *)((long)puVar5 + 0x1d) = 0;
          *(undefined8 *)(puVar5 + 3) = 0x2079646165726c61;
          *(undefined8 *)(puVar5 + 1) = 0x2073692061746144;
          *(undefined8 *)((long)puVar5 + 0x15) = 0x64657461636f6c6c;
          *(undefined8 *)((long)puVar5 + 0xd) = 0x612079646165726c;
          FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f5957a8,&UNK_10f595324,0x32e);
          goto LAB_109a39330;
        }
      }
    }
    else {
      if (uVar1 == 0x90) {
        if (*(long *)(param_1 + 0x16) == 0) {
          lVar6 = (long)(int)param_1[0x14];
          func_0x000107c2ae8c();
          *(long *)(param_1 + 0x22) = lVar6;
          *(long *)(param_1 + 0x16) = lVar6;
          return;
        }
        puVar5 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        puStack_30 = puVar5 + 1;
        uStack_28 = 0x19;
        *(undefined1 *)((long)puVar5 + 0x1d) = 0;
        *(undefined8 *)(puVar5 + 3) = 0x2079646165726c61;
        *(undefined8 *)(puVar5 + 1) = 0x2073692061746144;
        *(undefined8 *)((long)puVar5 + 0x15) = 0x64657461636f6c6c;
        *(undefined8 *)((long)puVar5 + 0xd) = 0x612079646165726c;
        FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f5957a8,&UNK_10f595324,0x340);
        goto LAB_109a39330;
      }
      if ((uVar1 & 0xffff0000) == 0x42430000) {
        if (param_1[8] == 0) {
          return;
        }
        if (*(long *)(param_1 + 6) == 0) {
          uVar8 = (ulong)((uVar1 >> 3 & 0x1ff) + 1 <<
                         (ulong)(0xfa50U >> (ulong)((uVar1 & 7) << 1) & 3));
          if ((uVar1 >> 0xe & 1) == 0) {
            uVar1 = param_1[1];
            if (0 < (int)uVar1) {
              uVar7 = (ulong)uVar1 + 1;
              puVar9 = param_1 + (ulong)uVar1 * 2 + 7;
              do {
                if (uVar8 <= (ulong)((long)(int)puVar9[-1] * (long)(int)*puVar9)) {
                  uVar8 = (long)(int)puVar9[-1] * (long)(int)*puVar9;
                }
                uVar7 = uVar7 - 1;
                puVar9 = puVar9 + -2;
              } while (1 < uVar7);
            }
          }
          else {
            if (param_1[9] != 0) {
              uVar8 = (long)(int)param_1[9];
            }
            uVar8 = uVar8 * (long)(int)param_1[8];
          }
          goto LAB_109a391b0;
        }
        FUN_109a38ed8(&puStack_30,&UNK_10f59578e);
        FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f5957a8,&UNK_10f595324,0x361);
        goto LAB_109a39330;
      }
    }
  }
  puVar5 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_30 = puVar5 + 1;
  uStack_28 = 0x26;
  *(undefined8 *)(puVar5 + 3) = 0x20726f2064657a69;
  *(undefined8 *)(puVar5 + 1) = 0x6e676f6365726e75;
  *(undefined1 *)((long)puVar5 + 0x2a) = 0;
  *(undefined8 *)(puVar5 + 7) = 0x6172726120646574;
  *(undefined8 *)(puVar5 + 5) = 0x726f707075736e75;
  *(undefined8 *)((long)puVar5 + 0x22) = 0x6570797420796172;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f5957a8,&UNK_10f595324,0x37a);
LAB_109a39330:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a39334);
  (*pcVar4)();
}



/* Entry: 109a393d4; end: 109a395e7;  */

void FUN_109a393d4(uint *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (uint *)0x0) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5953d1,&UNK_10f595324,0x92);
  }
  else if (((int)param_2 < 0) || ((int)param_3 < 1)) {
    puVar4 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    uStack_28 = 0x19;
    *(undefined1 *)((long)puVar4 + 0x1d) = 0;
    *(undefined8 *)(puVar4 + 3) = 0x6c6f632065766974;
    *(undefined8 *)(puVar4 + 1) = 0x69736f702d6e6f4e;
    *(undefined8 *)((long)puVar4 + 0x15) = 0x73776f7220726f20;
    *(undefined8 *)((long)puVar4 + 0xd) = 0x736c6f6320657669;
    FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f5953d1,&UNK_10f595324,0x98);
  }
  else {
    uVar1 = param_4 & 0xfff | 0x42420000;
    *param_1 = uVar1;
    param_1[8] = param_2;
    param_1[9] = param_3;
    *(undefined8 *)(param_1 + 6) = param_5;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_3 = ((param_4 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_4 & 7) << 1) & 3)) *
              param_3;
    uVar5 = param_3;
    if (((param_6 == 0) || (param_6 == 0x7fffffff)) ||
       (uVar5 = param_6, (int)param_3 <= (int)param_6)) {
      uVar6 = 0x4000;
      if (uVar5 != param_3 && param_2 != 1) {
        uVar6 = 0;
      }
      uVar2 = 0;
      if ((ulong)uVar5 * (ulong)param_2 >> 0x1f == 0) {
        uVar2 = uVar6;
      }
      *param_1 = uVar2 | uVar1;
      param_1[1] = uVar5;
      return;
    }
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xfffffff3,&puStack_30,&UNK_10f5953d1,&UNK_10f595324,0xa8);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a39574);
  (*pcVar3)();
}



/* Entry: 109a395e8; end: 109a39787;  */

void FUN_109a395e8(long *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    puVar3 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xfffffff7,&puStack_30,&UNK_10f5953fb,&UNK_10f595324,0xbd);
LAB_109a39734:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109a39738);
    (*pcVar2)();
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  if (*(short *)(lVar5 + 2) == 0x4243) {
    *param_1 = 0;
  }
  else {
    if (((*(short *)(lVar5 + 2) != 0x4242) || (*(int *)(lVar5 + 0x24) < 0)) ||
       (*(int *)(lVar5 + 0x20) < 0)) {
      puVar3 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_30 = puVar3 + 1;
      *(undefined1 *)puStack_30 = 0;
      uStack_28 = 0;
      FUN_109ac3188(0xffffff32,&puStack_30,&UNK_10f5953fb,&UNK_10f595324,0xc4);
      goto LAB_109a39734;
    }
    *param_1 = 0;
    if ((*(int *)(lVar5 + 0x24) < 1) || (*(int *)(lVar5 + 0x20) < 1)) goto LAB_109a3969c;
  }
  if (*(long *)(lVar5 + 0x18) != 0) {
    piVar4 = *(int **)(lVar5 + 8);
    *(undefined8 *)(lVar5 + 0x18) = 0;
    if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, *piVar4 = iVar1 + -1, iVar1 + -1 == 0)) {
      _free(*(undefined8 *)(piVar4 + -2));
    }
    *(undefined8 *)(lVar5 + 8) = 0;
  }
LAB_109a3969c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109a39788; end: 109a3988b;  */

ulong FUN_109a39788(uint *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    if (((*param_1 >> 0x10 == 0x4242) && (0 < (int)param_1[9])) &&
       (uVar2 = (ulong)param_1[8], 0 < (int)param_1[8])) {
      FUN_109a38f44();
      if (*(long *)(param_1 + 6) != 0) {
        FUN_109a3907c(uVar2);
        FUN_109a4ad30(param_1,uVar2,0);
      }
      return uVar2;
    }
  }
  puVar3 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_30 = puVar3 + 1;
  uStack_28 = 0x10;
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined8 *)(puVar3 + 3) = 0x7265646165682074;
  *(undefined8 *)(puVar3 + 1) = 0x614d764320646142;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595419,&UNK_10f595324,0xd3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3985c);
  (*pcVar1)();
}



/* Entry: 109a3988c; end: 109a39bfb;  */

void FUN_109a3988c(uint *param_1,uint param_2,long param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (uint *)0x0) {
    puVar3 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x1a;
    *(undefined1 *)((long)puVar3 + 0x1e) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x6461656820786972;
    *(undefined8 *)(puVar3 + 1) = 0x74616d204c4c554e;
    *(undefined8 *)((long)puVar3 + 0x16) = 0x7265746e696f7020;
    *(undefined8 *)((long)puVar3 + 0xe) = 0x7265646165682078;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59543f,&UNK_10f595324,0xed);
  }
  else if (param_3 == 0) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x14;
    *(undefined1 *)(puVar3 + 6) = 0;
    puVar3[5] = 0x7265746e;
    *(undefined8 *)(puVar3 + 3) = 0x696f70203e73657a;
    *(undefined8 *)(puVar3 + 1) = 0x69733c204c4c554e;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59543f,&UNK_10f595324,0xf3);
  }
  else if (param_2 - 0x21 < 0xffffffe0) {
    puVar3 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar3 + 3) = 0x20726f2065766974;
    *(undefined8 *)(puVar3 + 1) = 0x69736f702d6e6f6e;
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x2e;
    *(undefined1 *)((long)puVar3 + 0x32) = 0;
    *(undefined8 *)(puVar3 + 7) = 0x7265626d756e2065;
    *(undefined8 *)(puVar3 + 5) = 0x6772616c206f6f74;
    *(undefined8 *)((long)puVar3 + 0x2a) = 0x736e6f69736e656d;
    *(undefined8 *)((long)puVar3 + 0x22) = 0x696420666f207265;
    FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f59543f,&UNK_10f595324,0xf7);
  }
  else {
    uVar4 = (ulong)param_2 + 1;
    puVar7 = (uint *)(param_3 + (ulong)param_2 * 4);
    uVar6 = (ulong)((param_4 >> 3 & 0x1ff) + 1 <<
                   (ulong)(0xfa50U >> (ulong)((param_4 & 7) << 1) & 3));
    puVar5 = param_1 + (ulong)param_2 * 2 + 7;
    while( true ) {
      puVar7 = puVar7 + -1;
      if ((int)*puVar7 < 0) {
        puVar3 = (undefined4 *)0x2c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar3 + 3) = 0x206e6f6973656d69;
        *(undefined8 *)(puVar3 + 1) = 0x6420666f20656e6f;
        *puVar3 = 1;
        puStack_30 = puVar3 + 1;
        uStack_28 = 0x25;
        *(undefined1 *)((long)puVar3 + 0x29) = 0;
        *(undefined8 *)(puVar3 + 7) = 0x736f702d6e6f6e20;
        *(undefined8 *)(puVar3 + 5) = 0x73692073657a6973;
        *(undefined8 *)((long)puVar3 + 0x21) = 0x6576697469736f70;
        FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f59543f,&UNK_10f595324,0xfc);
        goto LAB_109a39b3c;
      }
      puVar5[-1] = *puVar7;
      if (0x7fffffff < (long)uVar6) break;
      *puVar5 = (uint)uVar6;
      uVar6 = uVar6 * (long)(int)*puVar7;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + -2;
      if (uVar4 < 2) {
        uVar1 = 0x42434000;
        if (0x7fffffff < (long)uVar6) {
          uVar1 = 0x42430000;
        }
        *param_1 = uVar1 | param_4 & 0xfff;
        param_1[1] = param_2;
        *(undefined8 *)(param_1 + 6) = param_5;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        return;
      }
    }
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_30 = puVar3 + 1;
    uStack_28 = 0x14;
    *(undefined1 *)(puVar3 + 6) = 0;
    puVar3[5] = 0x67696220;
    *(undefined8 *)(puVar3 + 3) = 0x6f6f742073692079;
    *(undefined8 *)(puVar3 + 1) = 0x6172726120656854;
    FUN_109ac3188(0xffffff2d,&puStack_30,&UNK_10f59543f,&UNK_10f595324,0xff);
  }
LAB_109a39b3c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a39b40);
  (*pcVar2)();
}



/* Entry: 109a39bfc; end: 109a39cf3;  */

void FUN_109a39bfc(int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (0xffffffdf < param_1 - 0x21U) {
    lVar2 = 0x120;
    func_0x000107c2ae8c();
    FUN_109a3988c();
    *(undefined4 *)(lVar2 + 0x10) = 1;
    return;
  }
  puVar3 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar3 + 3) = 0x20726f2065766974;
  *(undefined8 *)(puVar3 + 1) = 0x69736f702d6e6f6e;
  *puVar3 = 1;
  puStack_40 = puVar3 + 1;
  uStack_38 = 0x2e;
  *(undefined1 *)((long)puVar3 + 0x32) = 0;
  *(undefined8 *)(puVar3 + 7) = 0x7265626d756e2065;
  *(undefined8 *)(puVar3 + 5) = 0x6772616c206f6f74;
  *(undefined8 *)((long)puVar3 + 0x2a) = 0x736e6f69736e656d;
  *(undefined8 *)((long)puVar3 + 0x22) = 0x696420666f207265;
  FUN_109ac3188(0xffffff2d,&puStack_40,&UNK_10f5954e8,&UNK_10f595324,0x11e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a39cc4);
  (*pcVar1)();
}



/* Entry: 109a39cf4; end: 109a3a0e3;  */

ulong FUN_109a39cf4(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [4];
  int iStack_174;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [4];
  int iStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (uint *)0x0) || (*param_1 >> 0x10 != 0x4243)) {
    puVar8 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_b8 = puVar8 + 1;
    uStack_b0 = 0x12;
    *(undefined1 *)((long)puVar8 + 0x16) = 0;
    *(undefined2 *)(puVar8 + 5) = 0x7265;
    *(undefined8 *)(puVar8 + 3) = 0x6461656820444e74;
    *(undefined8 *)(puVar8 + 1) = 0x614d764320646142;
    FUN_109ac3188(0xfffffffb,&puStack_b8,&UNK_10f59550f,&UNK_10f595324,0x12d);
    goto LAB_109a3a030;
  }
  uVar3 = param_1[1];
  uVar7 = (ulong)uVar3;
  if (0x20 < (int)uVar3) {
    puVar8 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_b8 = puVar8 + 1;
    uStack_b0 = 0x17;
    *(undefined1 *)((long)puVar8 + 0x1b) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x5f5643203d3c2073;
    *(undefined8 *)(puVar8 + 1) = 0x6d69643e2d637273;
    *(undefined8 *)((long)puVar8 + 0x13) = 0x4d49445f58414d5f;
    FUN_109ac3188(0xffffff29,&puStack_b8,&UNK_10f59550f,&UNK_10f595324,0x12f);
    goto LAB_109a3a030;
  }
  if (0 < (int)uVar3) {
    puVar9 = param_1 + 8;
    ppuVar10 = &puStack_b8;
    uVar11 = uVar7;
    do {
      *(uint *)ppuVar10 = *puVar9;
      uVar11 = uVar11 - 1;
      puVar9 = puVar9 + 2;
      ppuVar10 = (undefined4 **)((long)ppuVar10 + 4);
    } while (uVar11 != 0);
  }
  FUN_109a39bfc(uVar7,&puStack_b8);
  if (*(long *)(param_1 + 6) == 0) {
LAB_109a39ee0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return uVar7;
    }
    ___stack_chk_fail();
  }
  else {
    FUN_109a3907c(uVar7);
    FUN_109a85f44(auStack_118,param_1,0,1,0,0);
    FUN_109a85f44(auStack_178,uVar7,0,1,0,0);
    lVar12 = *(long *)(uVar7 + 0x18);
    puStack_190 = (undefined4 *)CONCAT44(puStack_190._4_4_,0x2010000);
    uStack_180 = 0;
    puStack_188 = auStack_178;
    FUN_109a479a0(auStack_118,&puStack_190);
    if (lStack_168 == lVar12) {
      if (lStack_140 != 0) {
        piVar1 = (int *)(lStack_140 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_178);
        }
      }
      lStack_140 = 0;
      uStack_160 = 0;
      lStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      if (0 < iStack_174) {
        lVar12 = 0;
        do {
          *(undefined4 *)(lStack_138 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_174);
      }
      if (puStack_130 != auStack_128 && puStack_130 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_130 + -8));
      }
      if (lStack_e0 != 0) {
        piVar1 = (int *)(lStack_e0 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_118);
        }
      }
      lStack_e0 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      if (0 < iStack_114) {
        lVar12 = 0;
        do {
          *(undefined4 *)(lStack_d8 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_114);
      }
      if (puStack_d0 != auStack_c8 && puStack_d0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_d0 + -8));
      }
      goto LAB_109a39ee0;
    }
  }
  puVar8 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  puStack_190 = puVar8 + 1;
  puStack_188 = (undefined1 *)0x12;
  *(undefined1 *)((long)puVar8 + 0x16) = 0;
  *(undefined2 *)(puVar8 + 5) = 0x3061;
  *(undefined8 *)(puVar8 + 3) = 0x746164203d3d2061;
  *(undefined8 *)(puVar8 + 1) = 0x7461642e7473645f;
  FUN_109ac3188(0xffffff29,&puStack_190,&UNK_10f59550f,&UNK_10f595324,0x13e);
LAB_109a3a030:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a3a034);
  (*pcVar6)();
}



/* Entry: 109a3a0e4; end: 109a3ab9f;  */

void FUN_109a3a0e4(uint param_1,long param_2,uint *param_3,long param_4,uint *param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  undefined4 *puVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int iStack_9c;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  
  if (param_1 - 0xb < 0xfffffff6) {
    puVar6 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_88 = puVar6 + 1;
    uStack_80 = 0x1a;
    *(undefined1 *)((long)puVar6 + 0x1e) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x7265626d756e2074;
    *(undefined8 *)(puVar6 + 1) = 0x636572726f636e49;
    *(undefined8 *)((long)puVar6 + 0x16) = 0x7379617272612066;
    *(undefined8 *)((long)puVar6 + 0xe) = 0x6f207265626d756e;
    FUN_109ac3188(0xffffff2d,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x189);
  }
  else if ((param_2 == 0) || (param_4 == 0)) {
    puVar6 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_88 = puVar6 + 1;
    uStack_80 = 0x27;
    *(undefined8 *)(puVar6 + 3) = 0x6465726975716572;
    *(undefined8 *)(puVar6 + 1) = 0x20666f20656d6f53;
    *(undefined1 *)((long)puVar6 + 0x2b) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x20737265746e696f;
    *(undefined8 *)(puVar6 + 5) = 0x7020796172726120;
    *(undefined8 *)((long)puVar6 + 0x23) = 0x4c4c554e20736920;
    FUN_109ac3188(0xffffffe5,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x18c);
  }
  else {
    if (param_5 != (uint *)0x0) {
      uVar17 = 0;
      uVar16 = 0xffffffff;
      puVar9 = (uint *)0x0;
      do {
        uVar15 = (uint)uVar16;
        if (uVar17 < param_1) {
          puVar5 = *(uint **)(param_2 + uVar17 * 8);
          if (puVar5 == (uint *)0x0) {
            puVar6 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *puVar6 = 1;
            puStack_88 = puVar6 + 1;
            uStack_80 = 0x27;
            *(undefined8 *)(puVar6 + 3) = 0x6465726975716572;
            *(undefined8 *)(puVar6 + 1) = 0x20666f20656d6f53;
            *(undefined1 *)((long)puVar6 + 0x2b) = 0;
            *(undefined8 *)(puVar6 + 7) = 0x20737265746e696f;
            *(undefined8 *)(puVar6 + 5) = 0x7020796172726120;
            *(undefined8 *)((long)puVar6 + 0x23) = 0x4c4c554e20736920;
            FUN_109ac3188(0xffffffe5,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x199);
            goto LAB_109a3aa04;
          }
        }
        else {
          puVar5 = param_3;
          puVar8 = puVar9;
          uVar10 = uVar15;
          if (param_3 == (uint *)0x0) break;
        }
        uVar10 = *puVar5;
        if (uVar10 >> 0x10 != 0x4243) {
          iStack_9c = 0;
          puVar8 = puVar5;
          if (uVar10 == 0x90) {
            FUN_109a3b884(puVar5,&puStack_88,&iStack_9c,0);
            if (puVar5 != (uint *)0x0) {
              uVar10 = *puVar5;
              puVar8 = puVar5;
              goto LAB_109a3a1fc;
            }
          }
          else {
LAB_109a3a1fc:
            if (((uVar10 >> 0x10 == 0x4242) && (0 < (int)puVar8[9])) && (0 < (int)puVar8[8])) {
              if (*(long *)(puVar8 + 6) == 0) {
                puVar6 = (undefined4 *)0x28;
                func_0x000107c2ae8c();
                *puVar6 = 1;
                puStack_98 = puVar6 + 1;
                uStack_90 = 0x21;
                *(undefined2 *)(puVar6 + 9) = 0x72;
                *(undefined8 *)(puVar6 + 3) = 0x2073616820796172;
                *(undefined8 *)(puVar6 + 1) = 0x7261207475706e49;
                *(undefined8 *)(puVar6 + 7) = 0x65746e696f702061;
                *(undefined8 *)(puVar6 + 5) = 0x746164204c4c554e;
                FUN_109ac3188(0xffffffe5,&puStack_98,&UNK_10f595c9f,&UNK_10f595324,0x163);
              }
              else {
                puVar5 = (uint *)(param_4 + uVar17 * 0x120);
                *(long *)(puVar5 + 6) = *(long *)(puVar8 + 6);
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                uVar10 = *puVar8;
                *puVar5 = uVar10;
                puVar5[1] = 2;
                puVar5[8] = puVar8[8];
                puVar5[9] = puVar8[1];
                puVar5[10] = puVar8[9];
                puVar5[0xb] = (uVar10 >> 3 & 0x1ff) + 1 <<
                              (ulong)(0xfa50U >> (ulong)((uVar10 & 7) << 1) & 3);
                if (iStack_9c == 0) goto LAB_109a3a288;
                puVar6 = (undefined4 *)0x20;
                func_0x000107c2ae8c();
                *puVar6 = 1;
                puStack_88 = puVar6 + 1;
                uStack_80 = 0x1b;
                *(undefined1 *)((long)puVar6 + 0x1f) = 0;
                *(undefined8 *)(puVar6 + 3) = 0x6120746f6e207369;
                *(undefined8 *)(puVar6 + 1) = 0x2074657320494f43;
                *(undefined8 *)((long)puVar6 + 0x17) = 0x6572656820646577;
                *(undefined8 *)((long)puVar6 + 0xf) = 0x6f6c6c6120746f6e;
                FUN_109ac3188(0xffffffe8,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1a4);
              }
              goto LAB_109a3aa04;
            }
          }
          puVar6 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar6 + 3) = 0x20726f2064657a69;
          *(undefined8 *)(puVar6 + 1) = 0x6e676f6365726e55;
          *puVar6 = 1;
          puStack_98 = puVar6 + 1;
          uStack_90 = 0x26;
          *(undefined1 *)((long)puVar6 + 0x2a) = 0;
          *(undefined8 *)(puVar6 + 7) = 0x6172726120646574;
          *(undefined8 *)(puVar6 + 5) = 0x726f707075736e75;
          *(undefined8 *)((long)puVar6 + 0x22) = 0x6570797420796172;
          FUN_109ac3188(0xfffffffb,&puStack_98,&UNK_10f595c9f,&UNK_10f595324,0x160);
          goto LAB_109a3aa04;
        }
        if (*(long *)(puVar5 + 6) == 0) {
          iStack_9c = 0;
          puVar6 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar6 = 1;
          puStack_88 = puVar6 + 1;
          uStack_80 = 0x20;
          *(undefined1 *)(puVar6 + 9) = 0;
          *(undefined8 *)(puVar6 + 3) = 0x4e20736168207869;
          *(undefined8 *)(puVar6 + 1) = 0x7274616d20656854;
          *(undefined8 *)(puVar6 + 7) = 0x7265746e696f7020;
          *(undefined8 *)(puVar6 + 5) = 0x61746164204c4c55;
          FUN_109ac3188(0xffffffe5,&puStack_88,&UNK_10f595c9f,&UNK_10f595324,0x154);
          goto LAB_109a3aa04;
        }
LAB_109a3a288:
        *(uint **)(param_5 + uVar17 * 2 + 0x38) = puVar5;
        uVar2 = puVar5[1];
        uVar12 = (ulong)uVar2;
        puVar8 = puVar5;
        if (uVar17 != 0) {
          if (uVar2 != puVar9[1]) {
            puVar6 = (undefined4 *)0x34;
            func_0x000107c2ae8c();
            *puVar6 = 1;
            puStack_88 = puVar6 + 1;
            uStack_80 = 0x2f;
            *(undefined8 *)(puVar6 + 3) = 0x736e656d69642066;
            *(undefined8 *)(puVar6 + 1) = 0x6f207265626d754e;
            *(undefined1 *)((long)puVar6 + 0x33) = 0;
            *(undefined8 *)(puVar6 + 7) = 0x656d617320656874;
            *(undefined8 *)(puVar6 + 5) = 0x20736920736e6f69;
            *(undefined8 *)((long)puVar6 + 0x2b) = 0x737961727261206c;
            *(undefined8 *)((long)puVar6 + 0x23) = 0x6c6120726f662065;
            FUN_109ac3188(0xffffff2f,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1ad);
            goto LAB_109a3aa04;
          }
          if (uVar17 < param_1) {
            if ((param_6 & 3) < 2) {
              if ((param_6 & 3) == 0) {
                if (((*puVar9 ^ *puVar5) & 0xfff) != 0) {
                  puVar6 = (undefined4 *)0x30;
                  func_0x000107c2ae8c();
                  *puVar6 = 1;
                  puStack_88 = puVar6 + 1;
                  uStack_80 = 0x28;
                  *(undefined8 *)(puVar6 + 3) = 0x746f6e2073692065;
                  *(undefined8 *)(puVar6 + 1) = 0x7079742061746144;
                  *(undefined1 *)(puVar6 + 0xb) = 0;
                  *(undefined8 *)(puVar6 + 7) = 0x6c6120726f662065;
                  *(undefined8 *)(puVar6 + 5) = 0x6d61732065687420;
                  *(undefined8 *)(puVar6 + 9) = 0x737961727261206c;
                  FUN_109ac3188(0xffffff33,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1b6);
                  goto LAB_109a3aa04;
                }
              }
              else if (((*puVar9 ^ *puVar5) & 0xff8) != 0) {
                puVar6 = (undefined4 *)0x38;
                func_0x000107c2ae8c();
                *puVar6 = 1;
                puStack_88 = puVar6 + 1;
                uStack_80 = 0x31;
                *(undefined8 *)(puVar6 + 3) = 0x656e6e6168632066;
                *(undefined8 *)(puVar6 + 1) = 0x6f207265626d754e;
                *(undefined2 *)(puVar6 + 0xd) = 0x73;
                *(undefined8 *)(puVar6 + 7) = 0x6173206568742074;
                *(undefined8 *)(puVar6 + 5) = 0x6f6e20736920736c;
                *(undefined8 *)(puVar6 + 0xb) = 0x7961727261206c6c;
                *(undefined8 *)(puVar6 + 9) = 0x6120726f6620656d;
                FUN_109ac3188(0xffffff33,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1bb);
                goto LAB_109a3aa04;
              }
            }
            else if (((param_6 & 3) == 2) && (((*puVar9 ^ *puVar5) & 0xff8) != 0)) {
              puVar6 = (undefined4 *)0x2c;
              func_0x000107c2ae8c();
              *puVar6 = 1;
              puStack_88 = puVar6 + 1;
              uStack_80 = 0x24;
              *(undefined8 *)(puVar6 + 3) = 0x65687420746f6e20;
              *(undefined8 *)(puVar6 + 1) = 0x7369206874706544;
              *(undefined1 *)(puVar6 + 10) = 0;
              puVar6[9] = 0x73796172;
              *(undefined8 *)(puVar6 + 7) = 0x7261206c6c612072;
              *(undefined8 *)(puVar6 + 5) = 0x6f6620656d617320;
              FUN_109ac3188(0xffffff33,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1c0);
              goto LAB_109a3aa04;
            }
          }
          else if ((*puVar5 & 0xffe) != 0) {
            puVar6 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *puVar6 = 1;
            puStack_88 = puVar6 + 1;
            uStack_80 = 0x27;
            *(undefined8 *)(puVar6 + 3) = 0x6576616820646c75;
            *(undefined8 *)(puVar6 + 1) = 0x6f6873206b73614d;
            *(undefined1 *)((long)puVar6 + 0x2b) = 0;
            *(undefined8 *)(puVar6 + 7) = 0x6164203143733820;
            *(undefined8 *)(puVar6 + 5) = 0x726f203143753820;
            *(undefined8 *)((long)puVar6 + 0x23) = 0x6570797420617461;
            FUN_109ac3188(0xffffff30,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1c7);
            goto LAB_109a3aa04;
          }
          puVar8 = puVar9;
          if (((param_6 >> 2 & 1) == 0) && (0 < (int)uVar2)) {
            lVar7 = 0x20;
            uVar14 = uVar12;
            do {
              if (*(int *)((long)puVar5 + lVar7) != *(int *)((long)puVar9 + lVar7)) {
                puVar6 = (undefined4 *)0x30;
                func_0x000107c2ae8c();
                *puVar6 = 1;
                puStack_88 = puVar6 + 1;
                uStack_80 = 0x2b;
                *(undefined8 *)(puVar6 + 3) = 0x2073657a6973206e;
                *(undefined8 *)(puVar6 + 1) = 0x6f69736e656d6944;
                *(undefined1 *)((long)puVar6 + 0x2f) = 0;
                *(undefined8 *)(puVar6 + 7) = 0x726f6620656d6173;
                *(undefined8 *)(puVar6 + 5) = 0x2065687420657261;
                *(undefined8 *)((long)puVar6 + 0x27) = 0x737961727261206c;
                *(undefined8 *)((long)puVar6 + 0x1f) = 0x6c6120726f662065;
                FUN_109ac3188(0xffffff2f,&puStack_88,&UNK_10f595562,&UNK_10f595324,0x1cf);
                goto LAB_109a3aa04;
              }
              lVar7 = lVar7 + 8;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        uVar3 = (*puVar5 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((*puVar5 & 7) << 1) & 3);
        uVar13 = (ulong)uVar3;
        uVar14 = (ulong)(uVar2 - 1);
        uVar10 = uVar2;
        if ((int)uVar15 < (int)(uVar2 - 1)) {
          uVar14 = (long)(int)uVar2 - 1;
          puVar9 = puVar5 + uVar14 * 2 + 8;
          if (uVar3 == puVar9[1]) {
            uVar10 = uVar15 + 1;
            lVar7 = (long)(int)uVar2 + -2;
            do {
              uVar13 = uVar13 * (long)(int)*puVar9;
              uVar14 = uVar16;
              if (lVar7 <= (int)uVar15) goto LAB_109a3a3d0;
              puVar1 = puVar9 + -1;
              iVar11 = (int)uVar12;
              uVar2 = iVar11 - 1;
              uVar12 = (ulong)uVar2;
              lVar7 = lVar7 + -1;
              puVar9 = puVar9 + -2;
            } while (uVar13 - (long)(int)*puVar1 == 0);
            uVar14 = (ulong)(iVar11 - 2);
            uVar10 = uVar2;
          }
        }
LAB_109a3a3d0:
        if ((long)uVar13 < 0x80000000 || (uint)uVar14 != uVar15) {
          uVar10 = (uint)uVar14;
        }
        if ((int)uVar10 <= (int)uVar15) {
          uVar10 = uVar15;
        }
        uVar16 = (ulong)uVar10;
        *(undefined8 *)(param_5 + uVar17 * 2 + 4) = *(undefined8 *)(puVar5 + 6);
        uVar17 = uVar17 + 1;
        puVar9 = puVar8;
      } while (uVar17 != param_1 + 1);
      uVar15 = puVar8[1];
      if ((int)uVar10 < (int)(uVar15 - 1)) {
        lVar7 = (long)(int)uVar15 + -1;
        uVar17 = 1;
        puVar9 = puVar8 + (long)(int)uVar15 * 2 + 6;
        do {
          uVar17 = (ulong)(*puVar9 * (int)uVar17);
          lVar7 = lVar7 + -1;
          puVar9 = puVar9 + -2;
        } while ((int)uVar10 < lVar7);
        uVar17 = uVar17 | 0x100000000;
      }
      else {
        uVar17 = 0x100000001;
      }
      uVar16 = (ulong)(uVar10 + 1);
      *param_5 = param_1;
      param_5[1] = uVar10 + 1;
      *(ulong *)(param_5 + 2) = uVar17;
      if (-1 < (int)uVar10) {
        puVar9 = puVar8 + 8;
        puVar5 = param_5 + 0x18;
        do {
          *puVar5 = *puVar9;
          uVar16 = uVar16 - 1;
          puVar9 = puVar9 + 2;
          puVar5 = puVar5 + 1;
        } while (uVar16 != 0);
      }
      return;
    }
    puVar6 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_88 = puVar6 + 1;
    uStack_80 = 0x18;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x7265746e696f7020;
    *(undefined8 *)(puVar6 + 1) = 0x726f746172657449;
    *(undefined8 *)(puVar6 + 5) = 0x4c4c554e20736920;
    FUN_109ac3188(0xffffffe5,&puStack_88,&UNK_10f595562,&UNK_10f595324,399);
  }
LAB_109a3aa04:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a3aa08);
  (*pcVar4)();
}



/* Entry: 109a3aba0; end: 109a3ac63;  */

bool FUN_109a3aba0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  
  if ((int)param_1[1] < 1) {
    return false;
  }
  puVar5 = param_1 + 0x38;
  uVar3 = *param_1;
  uVar6 = (ulong)param_1[1];
  do {
    uVar7 = uVar6 - 1;
    puVar8 = puVar5;
    uVar9 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      do {
        *(long *)(puVar8 + -0x34) =
             *(long *)(puVar8 + -0x34) + (long)*(int *)(*(long *)puVar8 + uVar7 * 8 + 0x24);
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + 2;
      } while (uVar9 != 0);
    }
    uVar4 = param_1[uVar6 + 0x17];
    param_1[uVar6 + 0x17] = uVar4 - 1;
    if (uVar4 - 1 != 0 && 0 < (int)uVar4) break;
    uVar2 = *(uint *)(*(long *)puVar5 + uVar7 * 8 + 0x20);
    puVar8 = puVar5;
    uVar9 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      do {
        *(long *)(puVar8 + -0x34) =
             *(long *)(puVar8 + -0x34) -
             (long)(int)uVar2 * (long)*(int *)(*(long *)puVar8 + uVar7 * 8 + 0x24);
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + 2;
      } while (uVar9 != 0);
    }
    param_1[uVar6 + 0x17] = uVar2;
    bVar1 = 1 < uVar6;
    uVar6 = uVar7;
  } while (bVar1);
  return 1 < (int)uVar4;
}



/* Entry: 109a3ac64; end: 109a3afa3;  */

uint * FUN_109a3ac64(uint param_1,long param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  uVar7 = 0x88442211 >> (ulong)((param_3 & 7) << 2);
  uVar1 = uVar7 & 0xf;
  if ((uVar7 & 0xf) == 0) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x17;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x6164207961727261;
    *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e69;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x6570797420617461;
    FUN_109ac3188(0xffffff2e,&puStack_50,&UNK_10f5956d8,&UNK_10f595324,0x221);
  }
  else if (param_1 - 0x401 < 0xfffffc00) {
    puVar6 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x18;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x696420666f207265;
    *(undefined8 *)(puVar6 + 1) = 0x626d756e20646162;
    *(undefined8 *)(puVar6 + 5) = 0x736e6f69736e656d;
    FUN_109ac3188(0xffffff2d,&puStack_50,&UNK_10f5956d8,&UNK_10f595324,0x224);
  }
  else if (param_2 == 0) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x14;
    *(undefined1 *)(puVar6 + 6) = 0;
    puVar6[5] = 0x7265746e;
    *(undefined8 *)(puVar6 + 3) = 0x696f70203e73657a;
    *(undefined8 *)(puVar6 + 1) = 0x69733c204c4c554e;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5956d8,&UNK_10f595324,0x227);
  }
  else {
    lVar8 = 0;
    while (0 < *(int *)(param_2 + lVar8)) {
      lVar8 = lVar8 + 4;
      if ((ulong)param_1 << 2 == lVar8) {
        uVar7 = param_1;
        if ((int)param_1 < 0x21) {
          uVar7 = 0x20;
        }
        puVar3 = (uint *)((ulong)(uVar7 - 0x20) * 4 + 0xb8);
        func_0x000107c2ae8c();
        *puVar3 = param_3 & 0xfff | 0x42440000;
        puVar3[1] = param_1;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 1;
        _memcpy(puVar3 + 0xd,param_2,param_1 << 2);
        uVar7 = uVar1 + 0xf & -uVar1;
        uVar1 = uVar1 + uVar1 * (param_3 >> 3 & 0x1ff) + uVar7 + 3 & 0xfffc;
        puVar3[0xb] = uVar7;
        puVar3[0xc] = uVar1;
        uVar4 = 0x1000;
        FUN_109a4bacc(0x1000);
        uVar5 = 0;
        FUN_109a4f5b0(0,0x70,uVar1 + param_1 * 4 + 0xf & 0x1fff0,uVar4);
        *(undefined8 *)(puVar3 + 6) = uVar5;
        puVar3[10] = 0x400;
        uVar4 = 0x2000;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar3 + 8) = uVar4;
        _bzero();
        return puVar3;
      }
    }
    puVar6 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 3) = 0x206e6f6973656d69;
    *(undefined8 *)(puVar6 + 1) = 0x6420666f20656e6f;
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0x25;
    *(undefined1 *)((long)puVar6 + 0x29) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x736f702d6e6f6e20;
    *(undefined8 *)(puVar6 + 5) = 0x73692073657a6973;
    *(undefined8 *)((long)puVar6 + 0x21) = 0x6576697469736f70;
    FUN_109ac3188(0xffffff37,&puStack_50,&UNK_10f5956d8,&UNK_10f595324,0x22c);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3af24);
  (*pcVar2)();
}



/* Entry: 109a3afa4; end: 109a3b0ef;  */

void FUN_109a3afa4(long *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xfffffff7,&puStack_30,&UNK_10f595703,&UNK_10f595324,0x24d);
LAB_109a3b098:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3b09c);
    (*pcVar1)();
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(short *)(lVar3 + 2) != 0x4244) {
      puVar2 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      *(undefined1 *)puStack_30 = 0;
      uStack_28 = 0;
      FUN_109ac3188(0xffffff32,&puStack_30,&UNK_10f595703,&UNK_10f595324,0x254);
      goto LAB_109a3b098;
    }
    *param_1 = 0;
    puStack_30 = *(undefined4 **)(*(long *)(lVar3 + 0x18) + 0x48);
    FUN_109a4bc4c(&puStack_30);
    if (*(long *)(lVar3 + 0x20) != 0) {
      _free(*(undefined8 *)(*(long *)(lVar3 + 0x20) + -8));
    }
    *(undefined8 *)(lVar3 + 0x20) = 0;
    _free(*(undefined8 *)(lVar3 + -8));
  }
  return;
}



/* Entry: 109a3b0f0; end: 109a3b1db;  */

ulong FUN_109a3b0f0(uint *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    if (*param_1 >> 0x10 == 0x4244) {
      uVar2 = (ulong)param_1[1];
      FUN_109a3ac64(uVar2,param_1 + 0xd);
      FUN_109a4ad30(param_1,uVar2,0);
      return uVar2;
    }
  }
  puVar3 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_30 = puVar3 + 1;
  uStack_28 = 0x1b;
  *(undefined1 *)((long)puVar3 + 0x1f) = 0;
  *(undefined8 *)(puVar3 + 3) = 0x6120657372617073;
  *(undefined8 *)(puVar3 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar3 + 0x17) = 0x7265646165682079;
  *(undefined8 *)((long)puVar3 + 0xf) = 0x6172726120657372;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595732,&UNK_10f595324,0x265);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3b1ac);
  (*pcVar1)();
}



/* Entry: 109a3b1dc; end: 109a3b36f;  */

long FUN_109a3b1dc(long param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (*(short *)(param_1 + 2) != 0x4244)) {
    puVar4 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    uStack_28 = 0x1c;
    *(undefined1 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 3) = 0x6d20657372617073;
    *(undefined8 *)(puVar4 + 1) = 0x2064696c61766e49;
    *(undefined8 *)(puVar4 + 6) = 0x7265646165682078;
    *(undefined8 *)(puVar4 + 4) = 0x697274616d206573;
    FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595760,&UNK_10f595324,0x274);
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_2 = param_1;
      param_2[1] = 0;
      uVar1 = *(uint *)(param_1 + 0x28);
      if ((int)uVar1 < 1) {
        uVar5 = 0;
        lVar3 = 0;
      }
      else {
        uVar5 = 0;
        do {
          lVar3 = *(long *)(*(long *)(param_1 + 0x20) + uVar5 * 8);
          if (lVar3 != 0) {
            param_2[1] = lVar3;
            goto LAB_109a3b24c;
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
        lVar3 = 0;
        uVar5 = (ulong)uVar1;
      }
LAB_109a3b24c:
      *(int *)(param_2 + 2) = (int)uVar5;
      return lVar3;
    }
    puVar4 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_30 = puVar4 + 1;
    uStack_28 = 0x15;
    *(undefined1 *)((long)puVar4 + 0x19) = 0;
    *(undefined8 *)(puVar4 + 3) = 0x6f7020726f746172;
    *(undefined8 *)(puVar4 + 1) = 0x657469204c4c554e;
    *(undefined8 *)((long)puVar4 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f595760,&UNK_10f595324,0x277);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3b320);
  (*pcVar2)();
}



/* Entry: 109a3b370; end: 109a3b4bf;  */

void FUN_109a3b370(uint *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1 & 0xffff0000;
    if (uVar1 == 0x42430000) {
LAB_109a3b3c0:
      if (*(long *)(param_1 + 6) != 0) {
        puVar7 = param_1 + 2;
        piVar5 = *(int **)puVar7;
        param_1[6] = 0;
        param_1[7] = 0;
        if ((piVar5 != (int *)0x0) && (iVar2 = *piVar5, *piVar5 = iVar2 + -1, iVar2 + -1 == 0)) {
          _free(*(undefined8 *)(piVar5 + -2));
        }
        puVar7[0] = 0;
        puVar7[1] = 0;
      }
      return;
    }
    if (uVar1 == 0x42420000) {
      if ((0 < (int)param_1[9]) && (0 < (int)param_1[8])) goto LAB_109a3b3c0;
    }
    else if (*param_1 == 0x90) {
      lVar6 = *(long *)(param_1 + 0x22);
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (lVar6 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar6 + -8));
      return;
    }
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x20726f2064657a69;
  *(undefined8 *)(puVar4 + 1) = 0x6e676f6365726e75;
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  uStack_28 = 0x26;
  *(undefined1 *)((long)puVar4 + 0x2a) = 0;
  *(undefined8 *)(puVar4 + 7) = 0x6172726120646574;
  *(undefined8 *)(puVar4 + 5) = 0x726f707075736e75;
  *(undefined8 *)((long)puVar4 + 0x22) = 0x6570797420796172;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f5957dc,&UNK_10f595324,0x3eb);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a3b494);
  (*pcVar3)();
}



/* Entry: 109a3b4c0; end: 109a3b5ff;  */

uint FUN_109a3b4c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    uVar1 = uVar2 & 0xffff0000;
    if (uVar1 == 0x42440000 || uVar1 == 0x42430000) {
LAB_109a3b514:
      return uVar2 & 0xfff;
    }
    if (uVar1 == 0x42420000) {
      if ((0 < (int)param_1[9]) && (0 < (int)param_1[8])) goto LAB_109a3b514;
    }
    else if ((uVar2 == 0x90) && (*(long *)(param_1 + 0x16) != 0)) {
      return (0x43160520U >>
              (ulong)((param_1[4] >> 2 & 0x3c) + ((int)param_1[4] >> 0x1f & 0x14U) & 0x1f) & 7 |
             param_1[2] << 3) - 8;
    }
  }
  puVar4 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 3) = 0x20726f2064657a69;
  *(undefined8 *)(puVar4 + 1) = 0x6e676f6365726e75;
  *puVar4 = 1;
  puStack_30 = puVar4 + 1;
  uStack_28 = 0x26;
  *(undefined1 *)((long)puVar4 + 0x2a) = 0;
  *(undefined8 *)(puVar4 + 7) = 0x6172726120646574;
  *(undefined8 *)(puVar4 + 5) = 0x726f707075736e75;
  *(undefined8 *)((long)puVar4 + 0x22) = 0x6570797420796172;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595817,&UNK_10f595324,0x448);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a3b5d0);
  (*pcVar3)();
}



/* Entry: 109a3b600; end: 109a3b787;  */

ulong FUN_109a3b600(uint *param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1 & 0xffff0000;
    if (uVar3 == 0x42420000) {
      if ((0 < (int)param_1[9]) && (0 < (int)param_1[8])) {
        if (param_2 == (uint *)0x0) {
          return 2;
        }
        *param_2 = param_1[8];
        uVar3 = param_1[9];
LAB_109a3b674:
        param_2[1] = uVar3;
        return 2;
      }
    }
    else if (*param_1 == 0x90) {
      if (*(long *)(param_1 + 0x16) != 0) {
        if (param_2 == (uint *)0x0) {
          return 2;
        }
        *param_2 = param_1[0xb];
        uVar3 = param_1[10];
        goto LAB_109a3b674;
      }
    }
    else {
      if (uVar3 == 0x42440000) {
        uVar3 = param_1[1];
        if (param_2 != (uint *)0x0) {
          _memcpy(param_2,param_1 + 0xd,(long)(int)uVar3 << 2);
          return (ulong)uVar3;
        }
        return (ulong)uVar3;
      }
      if (uVar3 == 0x42430000) {
        uVar6 = (ulong)param_1[1];
        if (param_2 == (uint *)0x0) {
          return uVar6;
        }
        if (0 < (int)param_1[1]) {
          puVar4 = param_1 + 8;
          uVar5 = uVar6;
          do {
            *param_2 = *puVar4;
            uVar5 = uVar5 - 1;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 2;
          } while (uVar5 != 0);
          return uVar6;
        }
        return uVar6;
      }
    }
  }
  puVar2 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x20726f2064657a69;
  *(undefined8 *)(puVar2 + 1) = 0x6e676f6365726e75;
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x26;
  *(undefined1 *)((long)puVar2 + 0x2a) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x6172726120646574;
  *(undefined8 *)(puVar2 + 5) = 0x726f707075736e75;
  *(undefined8 *)((long)puVar2 + 0x22) = 0x6570797420796172;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595825,&UNK_10f595324,0x47e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3b758);
  (*pcVar1)();
}



/* Entry: 109a3b788; end: 109a3b883;  */

ulong FUN_109a3b788(uint *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (uint *)0x0) {
    if (*param_1 >> 0x10 == 0x4242) {
      uVar3 = (ulong)param_1[9];
      if ((-1 < (int)param_1[9]) && (uVar4 = param_1[8], -1 < (int)uVar4)) {
LAB_109a3b7dc:
        return uVar3 | (ulong)uVar4 << 0x20;
      }
    }
    else if (*param_1 == 0x90) {
      lVar5 = *(long *)(param_1 + 0xc);
      if (lVar5 == 0) {
        uVar3 = (ulong)param_1[10];
        uVar4 = param_1[0xb];
      }
      else {
        uVar3 = (ulong)*(uint *)(lVar5 + 0xc);
        uVar4 = *(uint *)(lVar5 + 0x10);
      }
      goto LAB_109a3b7dc;
    }
  }
  puVar2 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x21;
  *(undefined2 *)(puVar2 + 9) = 0x65;
  *(undefined8 *)(puVar2 + 3) = 0x20656220646c756f;
  *(undefined8 *)(puVar2 + 1) = 0x6873207961727241;
  *(undefined8 *)(puVar2 + 7) = 0x67616d496c704920;
  *(undefined8 *)(puVar2 + 5) = 0x726f2074614d7643;
  FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f595851,&UNK_10f595324,0x4e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3b854);
  (*pcVar1)();
}



/* Entry: 109a3b884; end: 109a3bf57;  */

void FUN_109a3b884(uint *param_1,uint *param_2,int *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    puVar3 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_40 = puVar3 + 1;
    uStack_38 = 0x1c;
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x746e696f70207961;
    *(undefined8 *)(puVar3 + 1) = 0x727261204c4c554e;
    *(undefined8 *)(puVar3 + 6) = 0x6465737361702073;
    *(undefined8 *)(puVar3 + 4) = 0x69207265746e696f;
    FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x958);
    goto LAB_109a3be34;
  }
  uVar4 = *param_1;
  if ((uVar4 & 0xffff0000) == 0x42420000) {
    if (((int)param_1[9] < 1) || ((int)param_1[8] < 1)) {
LAB_109a3bb4c:
      puVar3 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_40 = puVar3 + 1;
      uStack_38 = 0x26;
      *(undefined8 *)(puVar3 + 3) = 0x20726f2064657a69;
      *(undefined8 *)(puVar3 + 1) = 0x6e676f6365726e55;
      *(undefined1 *)((long)puVar3 + 0x2a) = 0;
      *(undefined8 *)(puVar3 + 7) = 0x6172726120646574;
      *(undefined8 *)(puVar3 + 5) = 0x726f707075736e75;
      *(undefined8 *)((long)puVar3 + 0x22) = 0x6570797420796172;
      FUN_109ac3188(0xffffff32,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x9be);
LAB_109a3be34:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3be38);
      (*pcVar2)();
    }
    if (*(long *)(param_1 + 6) == 0) {
      puVar3 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_40 = puVar3 + 1;
      uStack_38 = 0x20;
      *(undefined1 *)(puVar3 + 9) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x4e20736168207869;
      *(undefined8 *)(puVar3 + 1) = 0x7274616d20656854;
      *(undefined8 *)(puVar3 + 7) = 0x7265746e696f7020;
      *(undefined8 *)(puVar3 + 5) = 0x61746164204c4c55;
      FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x95d);
      goto LAB_109a3be34;
    }
  }
  else {
    if (uVar4 != 0x90) {
      if ((param_4 != 0) && ((uVar4 & 0xffff0000) == 0x42430000)) {
        if (*(long *)(param_1 + 6) == 0) {
          puVar3 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar3 = 1;
          puStack_40 = puVar3 + 1;
          uStack_38 = 0x21;
          *(undefined2 *)(puVar3 + 9) = 0x72;
          *(undefined8 *)(puVar3 + 3) = 0x2073616820796172;
          *(undefined8 *)(puVar3 + 1) = 0x7261207475706e49;
          *(undefined8 *)(puVar3 + 7) = 0x65746e696f702061;
          *(undefined8 *)(puVar3 + 5) = 0x746164204c4c554e;
          FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x9a3);
          goto LAB_109a3be34;
        }
        if ((uVar4 >> 0xe & 1) == 0) {
          puVar3 = (undefined4 *)0x34;
          func_0x000107c2ae8c();
          *puVar3 = 1;
          puStack_40 = puVar3 + 1;
          uStack_38 = 0x2c;
          *(undefined8 *)(puVar3 + 3) = 0x2073756f756e6974;
          *(undefined8 *)(puVar3 + 1) = 0x6e6f6320796c6e4f;
          *(undefined1 *)(puVar3 + 0xc) = 0;
          *(undefined8 *)(puVar3 + 7) = 0x7573206572612073;
          *(undefined8 *)(puVar3 + 5) = 0x796172726120446e;
          *(undefined8 *)(puVar3 + 10) = 0x6572656820646574;
          *(undefined8 *)(puVar3 + 8) = 0x726f707075732065;
          FUN_109ac3188(0xfffffffb,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x9a6);
          goto LAB_109a3be34;
        }
        uVar4 = param_1[8];
        uVar1 = param_1[1];
        if ((int)uVar1 < 3) {
          uVar8 = 1;
          if (uVar1 != 1) {
            uVar8 = param_1[10];
          }
        }
        else {
          lVar5 = (ulong)uVar1 - 1;
          uVar8 = 1;
          puVar9 = param_1 + 10;
          do {
            uVar8 = *puVar9 * uVar8;
            lVar5 = lVar5 + -1;
            puVar9 = puVar9 + 2;
          } while (lVar5 != 0);
        }
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
        param_2[8] = uVar4;
        param_2[9] = uVar8;
        uVar1 = *param_1;
        uVar8 = ((uVar1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar1 & 7) << 1) & 3)) *
                uVar8;
        if ((int)uVar4 < 2) {
          uVar8 = 0;
        }
        *param_2 = uVar1 & 0xfff | 0x42424000;
        param_2[1] = uVar8;
        if (0x7fffffff < (long)(int)uVar4 * (long)(int)uVar8) {
          *param_2 = uVar1 & 0xfff | 0x42420000;
        }
        iVar10 = 0;
        goto joined_r0x000109a3baac;
      }
      goto LAB_109a3bb4c;
    }
    lVar5 = *(long *)(param_1 + 0x16);
    if (lVar5 == 0) {
      puVar3 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_40 = puVar3 + 1;
      uStack_38 = 0x1f;
      *(undefined1 *)((long)puVar3 + 0x23) = 0;
      *(undefined8 *)(puVar3 + 3) = 0x554e207361682065;
      *(undefined8 *)(puVar3 + 1) = 0x67616d6920656854;
      *(undefined8 *)((long)puVar3 + 0x1b) = 0x7265746e696f7020;
      *(undefined8 *)((long)puVar3 + 0x13) = 0x61746164204c4c55;
      FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x967);
      goto LAB_109a3be34;
    }
    uVar4 = 0x43160520U >>
            (ulong)((param_1[4] >> 2 & 0x3c) + ((int)param_1[4] >> 0x1f & 0x14U) & 0x1f) & 7;
    uVar1 = param_1[7];
    uVar8 = param_1[2];
    if ((int)uVar8 < 2) {
      uVar1 = 0;
    }
    piVar7 = *(int **)(param_1 + 0xc);
    if (piVar7 == (int *)0x0) {
      if (uVar1 != 0) {
        puVar3 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_40 = puVar3 + 1;
        uStack_38 = 0x28;
        *(undefined8 *)(puVar3 + 3) = 0x756f687320726564;
        *(undefined8 *)(puVar3 + 1) = 0x726f206c65786950;
        *(undefined1 *)(puVar3 + 0xb) = 0;
        *(undefined8 *)(puVar3 + 7) = 0x2068746977206465;
        *(undefined8 *)(puVar3 + 5) = 0x737520656220646c;
        *(undefined8 *)(puVar3 + 9) = 0x30203d3d20696f63;
        FUN_109ac3188(0xffffff32,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x995);
        goto LAB_109a3be34;
      }
      uVar4 = (uVar4 | uVar8 << 3) - 8;
      uVar1 = param_1[10];
      uVar8 = param_1[0xb];
      uVar6 = (ulong)param_1[0x18];
    }
    else {
      if (uVar1 != 1) {
        if ((int)uVar8 < 0x201) {
          uVar1 = uVar8 * 8 - 8;
          iVar10 = *piVar7;
          FUN_109a393d4(param_2,piVar7[4],piVar7[3],uVar4 | uVar1,
                        lVar5 + (long)(int)param_1[0x18] * (long)piVar7[2] +
                        (long)piVar7[1] *
                        (long)(int)((uVar1 >> 3 & 0x1ff) + 1 <<
                                   (ulong)(0xfa50U >> (ulong)(uVar4 << 1) & 3)));
          goto joined_r0x000109a3baac;
        }
        puVar3 = (undefined4 *)0x40;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_40 = puVar3 + 1;
        uStack_38 = 0x38;
        *(undefined8 *)(puVar3 + 3) = 0x746e692073692065;
        *(undefined8 *)(puVar3 + 1) = 0x67616d6920656854;
        *(undefined1 *)(puVar3 + 0xf) = 0;
        *(undefined8 *)(puVar3 + 7) = 0x73616820646e6120;
        *(undefined8 *)(puVar3 + 5) = 0x64657661656c7265;
        *(undefined8 *)(puVar3 + 0xb) = 0x2058414d5f4e435f;
        *(undefined8 *)(puVar3 + 9) = 0x5643207265766f20;
        *(undefined8 *)(puVar3 + 0xd) = 0x736c656e6e616863;
        FUN_109ac3188(0xfffffff1,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x987);
        goto LAB_109a3be34;
      }
      if (*piVar7 == 0) {
        FUN_109a38ed8(&puStack_40,&UNK_10f595938);
        FUN_109ac3188(0xffffff32,&puStack_40,&UNK_10f5958ee,&UNK_10f595324,0x977);
        goto LAB_109a3be34;
      }
      uVar1 = piVar7[3];
      uVar8 = piVar7[4];
      uVar6 = (ulong)(int)param_1[0x18];
      lVar5 = lVar5 + (long)(int)param_1[0x14] * ((long)*piVar7 + -1) +
              (long)(int)param_1[0x18] * (long)piVar7[2] +
              ((long)piVar7[1] << (0xfa50U >> (ulong)(uVar4 << 1) & 3));
    }
    FUN_109a393d4(param_2,uVar8,uVar1,uVar4,lVar5,uVar6);
  }
  iVar10 = 0;
joined_r0x000109a3baac:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar10;
  }
  return;
}



/* Entry: 109a3bf58; end: 109a3c11b;  */

uint * FUN_109a3bf58(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  if ((((param_1 == (uint *)0x0) || (*(short *)((long)param_1 + 2) != 0x4242)) ||
      ((int)param_1[9] < 1)) || (((int)param_1[8] < 1 || (*(long *)(param_1 + 6) == 0)))) {
    FUN_109a3b884(param_1,auStack_58,0,0);
  }
  if (param_2 == (uint *)0x0) {
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_68 = puVar4 + 1;
    *(undefined1 *)puStack_68 = 0;
    uStack_60 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_68,&UNK_10f59585b,&UNK_10f595324,0x552);
  }
  else {
    uVar1 = param_1[9];
    if (param_3 < uVar1 && param_4 <= uVar1) {
      uVar2 = param_1[8];
      param_2[8] = uVar2;
      param_2[9] = param_4 - param_3;
      param_2[1] = param_1[1];
      *(long *)(param_2 + 6) =
           *(long *)(param_1 + 6) +
           (long)(int)((*param_1 >> 3 & 0x1ff) + 1 <<
                      (ulong)(0xfa50U >> (ulong)((*param_1 & 7) << 1) & 3)) * (long)(int)param_3;
      uVar5 = 0xffffbfff;
      if ((int)uVar1 <= (int)(param_4 - param_3) || (int)uVar2 < 2) {
        uVar5 = 0xffffffff;
      }
      *param_2 = *param_1 & uVar5;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      return param_2;
    }
    puVar4 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_68 = puVar4 + 1;
    *(undefined1 *)puStack_68 = 0;
    uStack_60 = 0;
    FUN_109ac3188(0xffffff2d,&puStack_68,&UNK_10f59585b,&UNK_10f595324,0x557);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a3c0d4);
  (*pcVar3)();
}



/* Entry: 109a3c11c; end: 109a3c483;  */

long FUN_109a3c11c(uint *param_1,uint *param_2,uint *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puStack_68;
  uint *puStack_60;
  uint uStack_58;
  
  if (param_5 == (uint *)0x0) {
    uVar8 = (ulong)param_1[1];
    if ((int)param_1[1] < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar7 = param_1 + 0xd;
      puVar9 = param_2;
      do {
        if (*puVar7 <= *puVar9) {
          puVar4 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar4 = 1;
          puStack_68 = puVar4 + 1;
          puStack_60 = (uint *)0x1e;
          *(undefined1 *)((long)puVar4 + 0x22) = 0;
          *(undefined8 *)(puVar4 + 3) = 0x692073656369646e;
          *(undefined8 *)(puVar4 + 1) = 0x6920666f20656e4f;
          *(undefined8 *)((long)puVar4 + 0x1a) = 0x65676e617220666f;
          *(undefined8 *)((long)puVar4 + 0x12) = 0x2074756f20736920;
          FUN_109ac3188(0xffffff2d,&puStack_68,&UNK_10f595cc9,&UNK_10f595324,0x299);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3c458);
          (*pcVar2)();
        }
        uVar5 = *puVar9 + uVar5 * 0x5bd1e995;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar5 = *param_5;
  }
  uVar6 = param_1[10];
  uVar11 = uVar6 - 1 & uVar5;
  uVar5 = uVar5 & 0x7fffffff;
  if (-2 < param_4) {
    for (puVar7 = *(uint **)(*(long *)(param_1 + 8) + (long)(int)uVar11 * 8); puVar7 != (uint *)0x0;
        puVar7 = *(uint **)(puVar7 + 2)) {
      if (*puVar7 == uVar5) {
        uVar1 = param_1[1];
        if ((int)uVar1 < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          while (param_2[uVar8] == *(uint *)((long)puVar7 + uVar8 * 4 + (long)(int)param_1[0xc])) {
            uVar8 = uVar8 + 1;
            if (uVar1 == uVar8) goto LAB_109a3c220;
          }
        }
        if ((uint)uVar8 == uVar1) {
LAB_109a3c220:
          lVar3 = (long)puVar7 + (long)(int)param_1[0xb];
          if (param_4 != 0) goto LAB_109a3c22c;
          goto LAB_109a3c3c8;
        }
      }
    }
  }
  lVar3 = 0;
  if (param_4 == 0) goto LAB_109a3c3c8;
LAB_109a3c22c:
  if (lVar3 != 0) goto LAB_109a3c3c8;
  lVar3 = *(long *)(param_1 + 6);
  if ((int)(uVar6 * 3) <= *(int *)(lVar3 + 0x68)) {
    if ((int)uVar6 < 0x201) {
      uVar6 = 0x200;
    }
    uVar11 = uVar6 * 2;
    lVar3 = (long)(int)(uVar6 << 4);
    func_0x000107c2ae8c();
    _bzero();
    puVar7 = param_1;
    FUN_109a3b1dc(param_1,&puStack_68);
    if (puVar7 != (uint *)0x0) {
      do {
        puVar9 = *(uint **)(puStack_60 + 2);
        if (*(uint **)(puStack_60 + 2) == (uint *)0x0) {
          if ((int)puStack_68[10] <= (int)(uStack_58 + 1)) goto LAB_109a3c2e8;
          puVar10 = (undefined8 *)(*(long *)(puStack_68 + 8) + (long)(int)uStack_58 * 8);
          uStack_58 = uStack_58 + 1;
          while( true ) {
            puVar10 = puVar10 + 1;
            puVar9 = (uint *)*puVar10;
            if ((uint *)*puVar10 != (uint *)0x0) break;
            uStack_58 = uStack_58 + 1;
            if (puStack_68[10] == uStack_58) goto LAB_109a3c2e8;
          }
        }
        puStack_60 = puVar9;
        uVar6 = *puVar7 & uVar11 - 1;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(lVar3 + (ulong)uVar6 * 8);
        *(uint **)(lVar3 + (ulong)uVar6 * 8) = puVar7;
        puVar7 = puStack_60;
      } while( true );
    }
    goto LAB_109a3c300;
  }
LAB_109a3c324:
  puStack_68 = *(uint **)(lVar3 + 0x60);
  if (puStack_68 == (uint *)0x0) {
    FUN_109a4f6dc(lVar3,0,&puStack_68);
  }
  else {
    *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(puStack_68 + 2);
    *puStack_68 = *puStack_68 & 0x3ffffff;
    *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  }
  puVar7 = puStack_68;
  *puStack_68 = uVar5;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(puStack_68 + 2) = *(undefined8 *)(lVar3 + (long)(int)uVar11 * 8);
  *(uint **)(lVar3 + (long)(int)uVar11 * 8) = puStack_68;
  _memcpy((long)puStack_68 + (long)(int)param_1[0xc],param_2,(long)(int)param_1[1] << 2);
  lVar3 = (long)puVar7 + (long)(int)param_1[0xb];
  if (0 < param_4) {
    _bzero(lVar3,(*param_1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((*param_1 & 7) << 1) & 3)
          );
  }
LAB_109a3c3c8:
  if (param_3 != (uint *)0x0) {
    *param_3 = *param_1 & 0xfff;
  }
  return lVar3;
LAB_109a3c2e8:
  uVar6 = *puVar7 & uVar11 - 1;
  *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(lVar3 + (ulong)uVar6 * 8);
  *(uint **)(lVar3 + (ulong)uVar6 * 8) = puVar7;
LAB_109a3c300:
  if (*(long *)(param_1 + 8) != 0) {
    _free(*(undefined8 *)(*(long *)(param_1 + 8) + -8));
  }
  *(long *)(param_1 + 8) = lVar3;
  param_1[10] = uVar11;
  uVar11 = uVar11 - 1 & uVar5;
  lVar3 = *(long *)(param_1 + 6);
  goto LAB_109a3c324;
}



/* Entry: 109a3c484; end: 109a3ca63;  */

long FUN_109a3c484(uint *param_1,uint *param_2,uint *param_3,int param_4,uint *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  uint *puStack_68;
  uint *puStack_60;
  uint uStack_58;
  
  if (param_2 == (uint *)0x0) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined1 *)((long)puVar3 + 0x1b) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x206f74207265746e;
    *(undefined8 *)(puVar3 + 1) = 0x696f70204c4c554e;
    *(undefined8 *)((long)puVar3 + 0x13) = 0x73656369646e6920;
    FUN_109ac3188(0xffffffe5,&stack0xffffffffffffffd0,&UNK_10f5958c9,&UNK_10f595324,0x761);
    goto LAB_109a3c934;
  }
  if (param_1 != (uint *)0x0) {
    uVar12 = *param_1;
    uVar4 = uVar12 & 0xffff0000;
    if (uVar4 == 0x42420000) {
      if ((0 < (int)param_1[9]) && (0 < (int)param_1[8])) {
        lVar2 = *(long *)(param_1 + 6);
        if (lVar2 != 0) {
          uVar4 = param_2[1];
          if ((uVar4 < param_1[9]) && (uVar5 = *param_2, uVar5 < param_1[8])) {
            if (param_3 != (uint *)0x0) {
              *param_3 = uVar12 & 0xfff;
              lVar2 = *(long *)(param_1 + 6);
            }
            return lVar2 + (long)(int)param_1[1] * (ulong)uVar5 +
                   (ulong)(uVar4 * ((uVar12 >> 3 & 0x1ff) + 1 <<
                                   (ulong)(0xfa50U >> (ulong)((uVar12 & 7) << 1) & 3)));
          }
          puVar3 = (undefined4 *)0x1c;
          func_0x000107c2ae8c();
          *puVar3 = 1;
          *(undefined1 *)((long)puVar3 + 0x19) = 0;
          *(undefined8 *)(puVar3 + 3) = 0x20666f2074756f20;
          *(undefined8 *)(puVar3 + 1) = 0x7369207865646e69;
          *(undefined8 *)((long)puVar3 + 0x11) = 0x65676e617220666f;
          FUN_109ac3188(0xffffff2d,&stack0xffffffffffffffd0,&UNK_10f59587b,&UNK_10f595324,0x6e4);
          goto LAB_109a3c934;
        }
LAB_109a3c79c:
        puVar3 = (undefined4 *)0x2c;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        *(undefined8 *)(puVar3 + 3) = 0x20726f2064657a69;
        *(undefined8 *)(puVar3 + 1) = 0x6e676f6365726e75;
        *(undefined1 *)((long)puVar3 + 0x2a) = 0;
        *(undefined8 *)(puVar3 + 7) = 0x6172726120646574;
        *(undefined8 *)(puVar3 + 5) = 0x726f707075736e75;
        *(undefined8 *)((long)puVar3 + 0x22) = 0x6570797420796172;
        FUN_109ac3188(0xfffffffb,&stack0xffffffffffffffd0,&UNK_10f59587b,&UNK_10f595324,0x730);
        goto LAB_109a3c934;
      }
    }
    else if (uVar4 == 0x42430000) {
      lVar2 = *(long *)(param_1 + 6);
      if (lVar2 != 0) {
        uVar7 = (ulong)param_1[1];
        if (0 < (int)param_1[1]) {
          puVar6 = param_1 + 9;
          do {
            if (puVar6[-1] <= *param_2) {
              puVar3 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar3 = 1;
              *(undefined1 *)((long)puVar3 + 0x19) = 0;
              *(undefined8 *)(puVar3 + 3) = 0x20666f2074756f20;
              *(undefined8 *)(puVar3 + 1) = 0x7369207865646e69;
              *(undefined8 *)((long)puVar3 + 0x11) = 0x65676e617220666f;
              FUN_109ac3188(0xffffff2d,&stack0xffffffffffffffd0,&UNK_10f5958c9,&UNK_10f595324,0x76f)
              ;
              goto LAB_109a3c934;
            }
            lVar2 = lVar2 + (long)(int)*puVar6 * (long)(int)*param_2;
            uVar7 = uVar7 - 1;
            param_2 = param_2 + 1;
            puVar6 = puVar6 + 2;
          } while (uVar7 != 0);
        }
        if (param_3 == (uint *)0x0) {
          return lVar2;
        }
        uVar12 = uVar12 & 0xfff;
LAB_109a3c660:
        *param_3 = uVar12;
        return lVar2;
      }
    }
    else {
      if (uVar4 == 0x42440000) {
        if (param_5 == (uint *)0x0) {
          uVar7 = (ulong)param_1[1];
          if ((int)param_1[1] < 1) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            puVar6 = param_1 + 0xd;
            puVar8 = param_2;
            do {
              if (*puVar6 <= *puVar8) {
                puVar3 = (undefined4 *)0x24;
                func_0x000107c2ae8c();
                *puVar3 = 1;
                puStack_68 = puVar3 + 1;
                puStack_60 = (uint *)0x1e;
                *(undefined1 *)((long)puVar3 + 0x22) = 0;
                *(undefined8 *)(puVar3 + 3) = 0x692073656369646e;
                *(undefined8 *)(puVar3 + 1) = 0x6920666f20656e4f;
                *(undefined8 *)((long)puVar3 + 0x1a) = 0x65676e617220666f;
                *(undefined8 *)((long)puVar3 + 0x12) = 0x2074756f20736920;
                FUN_109ac3188(0xffffff2d,&puStack_68,&UNK_10f595cc9,&UNK_10f595324,0x299);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3c458);
                (*pcVar1)();
              }
              uVar4 = *puVar8 + uVar4 * 0x5bd1e995;
              uVar7 = uVar7 - 1;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar7 != 0);
          }
        }
        else {
          uVar4 = *param_5;
        }
        uVar5 = param_1[10];
        uVar12 = uVar5 - 1 & uVar4;
        uVar4 = uVar4 & 0x7fffffff;
        if (-2 < param_4) {
          for (puVar6 = *(uint **)(*(long *)(param_1 + 8) + (long)(int)uVar12 * 8);
              puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 2)) {
            if (*puVar6 == uVar4) {
              uVar9 = param_1[1];
              if ((int)uVar9 < 1) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                while (param_2[uVar7] ==
                       *(uint *)((long)puVar6 + uVar7 * 4 + (long)(int)param_1[0xc])) {
                  uVar7 = uVar7 + 1;
                  if (uVar9 == uVar7) goto LAB_109a3c220;
                }
              }
              if ((uint)uVar7 == uVar9) {
LAB_109a3c220:
                lVar2 = (long)puVar6 + (long)(int)param_1[0xb];
                goto joined_r0x000109a3c228;
              }
            }
          }
        }
        lVar2 = 0;
joined_r0x000109a3c228:
        if ((param_4 == 0) || (lVar2 != 0)) goto LAB_109a3c3c8;
        lVar2 = *(long *)(param_1 + 6);
        if ((int)(uVar5 * 3) <= *(int *)(lVar2 + 0x68)) {
          if ((int)uVar5 < 0x201) {
            uVar5 = 0x200;
          }
          uVar12 = uVar5 * 2;
          lVar2 = (long)(int)(uVar5 << 4);
          func_0x000107c2ae8c();
          _bzero();
          puVar6 = param_1;
          FUN_109a3b1dc(param_1,&puStack_68);
          if (puVar6 != (uint *)0x0) {
            do {
              puVar8 = *(uint **)(puStack_60 + 2);
              if (*(uint **)(puStack_60 + 2) == (uint *)0x0) {
                if ((int)puStack_68[10] <= (int)(uStack_58 + 1)) goto LAB_109a3c2e8;
                puVar10 = (undefined8 *)(*(long *)(puStack_68 + 8) + (long)(int)uStack_58 * 8);
                uStack_58 = uStack_58 + 1;
                while( true ) {
                  puVar10 = puVar10 + 1;
                  puVar8 = (uint *)*puVar10;
                  if ((uint *)*puVar10 != (uint *)0x0) break;
                  uStack_58 = uStack_58 + 1;
                  if (puStack_68[10] == uStack_58) goto LAB_109a3c2e8;
                }
              }
              puStack_60 = puVar8;
              uVar5 = *puVar6 & uVar12 - 1;
              *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(lVar2 + (ulong)uVar5 * 8);
              *(uint **)(lVar2 + (ulong)uVar5 * 8) = puVar6;
              puVar6 = puStack_60;
            } while( true );
          }
          goto LAB_109a3c300;
        }
        goto LAB_109a3c324;
      }
      if (uVar12 == 0x90) {
        lVar2 = *(long *)(param_1 + 0x16);
        if (lVar2 != 0) {
          uVar4 = param_1[4];
          uVar12 = uVar4 >> 3 & 0x1f;
          if (param_1[7] == 0) {
            uVar12 = param_1[2] * uVar12;
          }
          piVar11 = *(int **)(param_1 + 0xc);
          if (piVar11 == (int *)0x0) {
            uVar5 = param_1[10];
            uVar9 = param_1[0xb];
          }
          else {
            uVar5 = piVar11[3];
            uVar9 = piVar11[4];
            lVar2 = lVar2 + (int)(param_1[0x18] * piVar11[2] + piVar11[1] * uVar12);
            if (param_1[7] != 0) {
              if (*piVar11 == 0) {
                FUN_109a38ed8(&stack0xffffffffffffffd0,&UNK_10f595883);
                FUN_109ac3188(0xffffffe8,&stack0xffffffffffffffd0,&UNK_10f59587b,&UNK_10f595324,
                              0x703);
                goto LAB_109a3c934;
              }
              lVar2 = lVar2 + (long)(int)param_1[0x14] * ((long)*piVar11 + -1);
            }
          }
          if ((*param_2 < uVar9) && (param_2[1] < uVar5)) {
            lVar2 = lVar2 + (int)(uVar12 * param_2[1] + param_1[0x18] * *param_2);
            if (param_3 == (uint *)0x0) {
              return lVar2;
            }
            if (0xfffffffb < param_1[2] - 5) {
              uVar12 = (0x43160520U >>
                        (ulong)((uVar4 >> 2 & 0x3c) + ((int)uVar4 >> 0x1f & 0x14U) & 0x1f) & 7 |
                       param_1[2] << 3) - 8;
              goto LAB_109a3c660;
            }
            puVar3 = (undefined4 *)0x8;
            func_0x000107c2ae8c();
            *puVar3 = 1;
            *(undefined1 *)(puVar3 + 1) = 0;
            FUN_109ac3188(0xffffff2e,&stack0xffffffffffffffd0,&UNK_10f59587b,&UNK_10f595324,0x717);
          }
          else {
            puVar3 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar3 = 1;
            *(undefined1 *)((long)puVar3 + 0x19) = 0;
            *(undefined8 *)(puVar3 + 3) = 0x20666f2074756f20;
            *(undefined8 *)(puVar3 + 1) = 0x7369207865646e69;
            *(undefined8 *)((long)puVar3 + 0x11) = 0x65676e617220666f;
            FUN_109ac3188(0xffffff2d,&stack0xffffffffffffffd0,&UNK_10f59587b,&UNK_10f595324,0x70f);
          }
          goto LAB_109a3c934;
        }
        goto LAB_109a3c79c;
      }
    }
  }
  puVar3 = (undefined4 *)0x2c;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  *(undefined8 *)(puVar3 + 3) = 0x20726f2064657a69;
  *(undefined8 *)(puVar3 + 1) = 0x6e676f6365726e75;
  *(undefined1 *)((long)puVar3 + 0x2a) = 0;
  *(undefined8 *)(puVar3 + 7) = 0x6172726120646574;
  *(undefined8 *)(puVar3 + 5) = 0x726f707075736e75;
  *(undefined8 *)((long)puVar3 + 0x22) = 0x6570797420796172;
  FUN_109ac3188(0xfffffffb,&stack0xffffffffffffffd0,&UNK_10f5958c9,&UNK_10f595324,0x779);
LAB_109a3c934:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3c938);
  (*pcVar1)();
LAB_109a3c2e8:
  uVar5 = *puVar6 & uVar12 - 1;
  *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(lVar2 + (ulong)uVar5 * 8);
  *(uint **)(lVar2 + (ulong)uVar5 * 8) = puVar6;
LAB_109a3c300:
  if (*(long *)(param_1 + 8) != 0) {
    _free(*(undefined8 *)(*(long *)(param_1 + 8) + -8));
  }
  *(long *)(param_1 + 8) = lVar2;
  param_1[10] = uVar12;
  uVar12 = uVar12 - 1 & uVar4;
  lVar2 = *(long *)(param_1 + 6);
LAB_109a3c324:
  puStack_68 = *(uint **)(lVar2 + 0x60);
  if (puStack_68 == (uint *)0x0) {
    FUN_109a4f6dc(lVar2,0,&puStack_68);
  }
  else {
    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(puStack_68 + 2);
    *puStack_68 = *puStack_68 & 0x3ffffff;
    *(int *)(lVar2 + 0x68) = *(int *)(lVar2 + 0x68) + 1;
  }
  puVar6 = puStack_68;
  *puStack_68 = uVar4;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(puStack_68 + 2) = *(undefined8 *)(lVar2 + (long)(int)uVar12 * 8);
  *(uint **)(lVar2 + (long)(int)uVar12 * 8) = puStack_68;
  _memcpy((long)puStack_68 + (long)(int)param_1[0xc],param_2,(long)(int)param_1[1] << 2);
  lVar2 = (long)puVar6 + (long)(int)param_1[0xb];
  if (0 < param_4) {
    _bzero(lVar2,(*param_1 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((*param_1 & 7) << 1) & 3)
          );
  }
LAB_109a3c3c8:
  if (param_3 != (uint *)0x0) {
    *param_3 = *param_1 & 0xfff;
  }
  return lVar2;
}



/* Entry: 109a3ca64; end: 109a3cf67;  */

uint * FUN_109a3ca64(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_2 == (uint *)0x0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_40 = puVar2 + 1;
    *(undefined1 *)puStack_40 = 0;
    uStack_38 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xaa0);
    goto LAB_109a3ce90;
  }
  if ((((param_1 == (uint *)0x0) || (*(short *)((long)param_1 + 2) != 0x4242)) ||
      ((int)param_1[9] < 1)) || (((int)param_1[8] < 1 || (*(long *)(param_1 + 6) == 0)))) {
    iStack_44 = 0;
    FUN_109a3b884(param_1,param_2,&iStack_44,1);
    if (iStack_44 != 0) {
      puVar2 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar2 = 1;
      puStack_40 = puVar2 + 1;
      uStack_38 = 0x14;
      *(undefined1 *)(puVar2 + 6) = 0;
      puVar2[5] = 0x64657472;
      *(undefined8 *)(puVar2 + 3) = 0x6f7070757320746f;
      *(undefined8 *)(puVar2 + 1) = 0x6e20736920494f43;
      FUN_109ac3188(0xffffffe8,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xaa7);
      goto LAB_109a3ce90;
    }
  }
  if (param_3 == 0) {
    param_3 = (*param_1 >> 3 & 0x1ff) + 1;
  }
  else if (param_3 - 5 < 0xfffffffc) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_40 = puVar2 + 1;
    *(undefined1 *)puStack_40 = 0;
    uStack_38 = 0;
    FUN_109ac3188(0xfffffff1,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xaad);
    goto LAB_109a3ce90;
  }
  if (param_1 != param_2) {
    uVar3 = param_2[4];
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)(param_1 + 6);
    uVar6 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_2 = uVar8;
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(undefined8 *)(param_2 + 4) = uVar6;
    *(undefined8 *)(param_2 + 8) = uVar5;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = uVar3;
  }
  uVar3 = param_1[9] + param_1[9] * (*param_1 >> 3 & 0x1ff);
  if ((int)uVar3 < (int)param_3) {
    if (param_4 == 0) {
LAB_109a3cb90:
      param_4 = 0;
      if (param_3 != 0) {
        param_4 = (int)(param_1[8] * uVar3) / (int)param_3;
      }
      goto LAB_109a3cb9c;
    }
LAB_109a3cba0:
    if (param_4 == param_1[8]) goto LAB_109a3cbf4;
    if ((*param_1 >> 0xe & 1) == 0) {
      puVar2 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 7) = 0x6874202c73756f75;
      *(undefined8 *)(puVar2 + 5) = 0x6e69746e6f632074;
      *(undefined8 *)(puVar2 + 0xb) = 0x666f207265626d75;
      *(undefined8 *)(puVar2 + 9) = 0x6e20737469207375;
      *(undefined8 *)(puVar2 + 0xf) = 0x656220746f6e206e;
      *(undefined8 *)(puVar2 + 0xd) = 0x61632073776f7220;
      *puVar2 = 1;
      puStack_40 = puVar2 + 1;
      uStack_38 = 0x48;
      *(undefined1 *)(puVar2 + 0x13) = 0;
      *(undefined8 *)(puVar2 + 0x11) = 0x6465676e61686320;
      *(undefined8 *)(puVar2 + 3) = 0x6f6e207369207869;
      *(undefined8 *)(puVar2 + 1) = 0x7274616d20656854;
      FUN_109ac3188(0xfffffff3,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xac6);
      goto LAB_109a3ce90;
    }
    uVar4 = param_1[8] * uVar3;
    if (uVar4 < param_4) {
      puVar2 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar2 = 1;
      puStack_40 = puVar2 + 1;
      uStack_38 = 0x16;
      *(undefined1 *)((long)puVar2 + 0x1a) = 0;
      *(undefined8 *)(puVar2 + 3) = 0x6f207265626d756e;
      *(undefined8 *)(puVar2 + 1) = 0x2077656e20646142;
      *(undefined8 *)((long)puVar2 + 0x12) = 0x73776f7220666f20;
      FUN_109ac3188(0xffffff2d,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xac9);
      goto LAB_109a3ce90;
    }
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = (int)uVar4 / (int)param_4;
    }
    if (uVar3 * param_4 != uVar4) {
      puVar2 = (undefined4 *)0x54;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 7) = 0x656d656c65207869;
      *(undefined8 *)(puVar2 + 5) = 0x7274616d20666f20;
      *(undefined8 *)(puVar2 + 0xb) = 0x736976696420746f;
      *(undefined8 *)(puVar2 + 9) = 0x6e2073692073746e;
      *(undefined8 *)(puVar2 + 0xf) = 0x2077656e20656874;
      *(undefined8 *)(puVar2 + 0xd) = 0x20796220656c6269;
      *(undefined8 *)((long)puVar2 + 0x4a) = 0x73776f7220666f20;
      *(undefined8 *)((long)puVar2 + 0x42) = 0x7265626d756e2077;
      *puVar2 = 1;
      puStack_40 = puVar2 + 1;
      uStack_38 = 0x4e;
      *(undefined1 *)((long)puVar2 + 0x52) = 0;
      *(undefined8 *)(puVar2 + 3) = 0x7265626d756e206c;
      *(undefined8 *)(puVar2 + 1) = 0x61746f7420656854;
      FUN_109ac3188(0xfffffffb,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xacf);
      goto LAB_109a3ce90;
    }
    param_2[8] = param_4;
    uVar4 = (0x88442211U >> (ulong)((*param_1 & 7) << 2) & 0xf) * uVar3;
  }
  else {
    if (param_4 == 0) {
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = uVar3 / param_3;
      }
      if (uVar3 != uVar4 * param_3) goto LAB_109a3cb90;
    }
LAB_109a3cb9c:
    if (param_4 != 0) goto LAB_109a3cba0;
    param_4 = param_1[8];
LAB_109a3cbf4:
    param_2[8] = param_4;
    uVar4 = param_1[1];
  }
  param_2[1] = uVar4;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = (int)uVar3 / (int)param_3;
  }
  if (uVar4 * param_3 == uVar3) {
    param_2[9] = uVar4;
    *param_2 = *param_1 & 0xfffff007 | param_3 * 8 - 8;
    return param_2;
  }
  puVar2 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x206874646977206c;
  *(undefined8 *)(puVar2 + 1) = 0x61746f7420656854;
  *puVar2 = 1;
  puStack_40 = puVar2 + 1;
  uStack_38 = 0x3e;
  *(undefined1 *)((long)puVar2 + 0x42) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x656c626973697669;
  *(undefined8 *)(puVar2 + 5) = 0x6420746f6e207369;
  *(undefined8 *)(puVar2 + 0xb) = 0x626d756e2077656e;
  *(undefined8 *)(puVar2 + 9) = 0x2065687420796220;
  *(undefined8 *)((long)puVar2 + 0x3a) = 0x736c656e6e616863;
  *(undefined8 *)((long)puVar2 + 0x32) = 0x20666f207265626d;
  FUN_109ac3188(0xfffffff1,&puStack_40,&UNK_10f595a72,&UNK_10f595324,0xad9);
LAB_109a3ce90:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3ce94);
  (*pcVar1)();
}



/* Entry: 109a3cf68; end: 109a3d32b;  */

undefined8 *
FUN_109a3cf68(undefined8 *param_1,ulong param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_60 = (undefined8 *)(puVar3 + 1);
    uStack_58 = 0x16;
    *(undefined1 *)((long)puVar3 + 0x1a) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x206f74207265746e;
    *(undefined8 *)(puVar3 + 1) = 0x696f70206c6c756e;
    *(undefined8 *)((long)puVar3 + 0x12) = 0x726564616568206f;
    FUN_109ac3188(0xfffffff7,&puStack_60,&UNK_10f595b47,&UNK_10f595324,0xb67);
  }
  else {
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
    uVar1 = param_4 - 1;
    *(undefined4 *)param_1 = 0x90;
    if (uVar1 < 4) {
      puVar4 = (&PTR_DAT_110b215e0)[(ulong)uVar1 * 2];
      puVar5 = (&PTR_DAT_110b215e8)[(ulong)uVar1 * 2];
    }
    else {
      puVar4 = &DAT_10f5953d0;
      puVar5 = puVar4;
    }
    _strncpy((long)param_1 + 0x14,puVar4,4);
    _strncpy(param_1 + 3,puVar5,4);
    if ((param_2 & 0x8000000080000000) == 0) {
      uVar1 = param_3 & 0x7fffffff;
      if (((int)param_4 < 0) ||
         ((((param_3 != 1 && uVar1 != 8) && uVar1 != 0x10) && uVar1 != 0x20) && param_3 != 0x40)) {
        puVar3 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_60 = (undefined8 *)(puVar3 + 1);
        uStack_58 = 0x12;
        *(undefined1 *)((long)puVar3 + 0x16) = 0;
        *(undefined2 *)(puVar3 + 5) = 0x7461;
        *(undefined8 *)(puVar3 + 3) = 0x6d726f6620646574;
        *(undefined8 *)(puVar3 + 1) = 0x726f707075736e55;
        FUN_109ac3188(0xffffffef,&puStack_60,&UNK_10f595b47,&UNK_10f595324,0xb78);
      }
      else if (param_5 < 2) {
        if ((param_6 == 4) || (param_6 == 8)) {
          param_1[5] = param_2;
          if (param_4 < 2) {
            param_4 = 1;
          }
          *(uint *)(param_1 + 1) = param_4;
          *(uint *)(param_1 + 2) = param_3;
          uVar1 = (param_6 + (uVar1 * (int)param_2 * param_4 + 7 >> 3)) - 1 & -param_6;
          *(uint *)(param_1 + 0xc) = uVar1;
          *(uint *)(param_1 + 4) = param_5;
          *(int *)((long)param_1 + 0x24) = param_6;
          *(uint *)(param_1 + 10) = uVar1 * (int)(param_2 >> 0x20);
          return param_1;
        }
        puVar3 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_60 = (undefined8 *)(puVar3 + 1);
        *puStack_60 = 0x75706e6920646142;
        uStack_58 = 0xf;
        *(undefined1 *)((long)puVar3 + 0x13) = 0;
        *(undefined8 *)((long)puVar3 + 0xb) = 0x6e67696c61207475;
        FUN_109ac3188(0xffffffeb,&puStack_60,&UNK_10f595b47,&UNK_10f595324,0xb7d);
      }
      else {
        puVar3 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar3 = 1;
        puStack_60 = (undefined8 *)(puVar3 + 1);
        uStack_58 = 0x10;
        *(undefined1 *)(puVar3 + 5) = 0;
        *(undefined8 *)(puVar3 + 3) = 0x6e696769726f2074;
        *(undefined8 *)(puVar3 + 1) = 0x75706e6920646142;
        FUN_109ac3188(0xffffffec,&puStack_60,&UNK_10f595b47,&UNK_10f595324,0xb7a);
      }
    }
    else {
      puVar3 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar3 = 1;
      puStack_60 = (undefined8 *)(puVar3 + 1);
      *puStack_60 = 0x75706e6920646142;
      uStack_58 = 0xd;
      *(undefined1 *)((long)puVar3 + 0x11) = 0;
      *(undefined8 *)((long)puVar3 + 9) = 0x696f72207475706e;
      FUN_109ac3188(0xffffffe7,&puStack_60,&UNK_10f595b47,&UNK_10f595324,0xb71);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3d290);
  (*pcVar2)();
}



/* Entry: 109a3d32c; end: 109a3d383;  */

undefined8 FUN_109a3d32c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  func_0x000107c2ae8c(0x90);
  FUN_109a3cf68();
  FUN_109a3907c();
  return uVar1;
}



/* Entry: 109a3d384; end: 109a3d453;  */

void FUN_109a3d384(long *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (long *)0x0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f595b88,&UNK_10f595324,0xb9a);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3d420);
    (*pcVar1)();
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    if (*(long *)(lVar3 + 0x30) != 0) {
      _free(*(undefined8 *)(*(long *)(lVar3 + 0x30) + -8));
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar3 + -8));
    return;
  }
  return;
}



/* Entry: 109a3d454; end: 109a3d50f;  */

void FUN_109a3d454(long *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (long *)0x0) {
    puStack_30 = (undefined4 *)*param_1;
    if (puStack_30 != (undefined4 *)0x0) {
      *param_1 = 0;
      FUN_109a3b370(puStack_30);
      FUN_109a3d384(&puStack_30);
    }
    return;
  }
  puVar2 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  *(undefined1 *)puStack_30 = 0;
  uStack_28 = 0;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f595b9d,&UNK_10f595324,0xbb2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3d4dc);
  (*pcVar1)();
}



/* Entry: 109a3d510; end: 109a3d71f;  */

void FUN_109a3d510(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    *(undefined1 *)puStack_50 = 0;
    uStack_48 = 0;
    FUN_109ac3188(0xfffffff7,&puStack_50,&UNK_10f595bac,&UNK_10f595324,0xbc3);
  }
  else {
    if ((param_3 & 0x8000000080000000) == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      uVar7 = (uint)param_2;
      if ((int)uVar7 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x2c);
        uVar9 = (uint)((ulong)param_2 >> 0x20);
        if ((((int)uVar9 < iVar4) &&
            (iVar1 = uVar7 + (int)param_3, (int)(uint)((int)param_3 != 0) <= iVar1)) &&
           (iVar2 = uVar9 + (int)(param_3 >> 0x20),
           (int)(uint)((param_3 & 0xffffffff00000000) != 0) <= iVar2)) {
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          if (iVar1 <= iVar3) {
            iVar3 = iVar1;
          }
          if (iVar2 <= iVar4) {
            iVar4 = iVar2;
          }
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 == 0) {
            puVar6 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar6 = 0;
            puVar6[1] = uVar7;
            puVar6[2] = uVar9;
            puVar6[3] = iVar3 - uVar7;
            puVar6[4] = iVar4 - uVar9;
            *(undefined4 **)(param_1 + 0x30) = puVar6;
          }
          else {
            *(uint *)(lVar8 + 4) = uVar7;
            *(uint *)(lVar8 + 8) = uVar9;
            *(uint *)(lVar8 + 0xc) = iVar3 - uVar7;
            *(uint *)(lVar8 + 0x10) = iVar4 - uVar9;
          }
          return;
        }
      }
    }
    puVar6 = (undefined4 *)0xc0;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 0x23) = 0x792e746365722026;
    *(undefined8 *)(puVar6 + 0x21) = 0x26202930203e2068;
    *(undefined8 *)(puVar6 + 0x27) = 0x3e20746867696568;
    *(undefined8 *)(puVar6 + 0x25) = 0x2e74636572202b20;
    *(undefined8 *)(puVar6 + 0x2b) = 0x6965682e74636572;
    *(undefined8 *)(puVar6 + 0x29) = 0x2829746e6928203d;
    *(undefined8 *)(puVar6 + 0x13) = 0x3e2d6567616d6920;
    *(undefined8 *)(puVar6 + 0x11) = 0x3c20792e74636572;
    *(undefined8 *)(puVar6 + 0x17) = 0x782e746365722026;
    *(undefined8 *)(puVar6 + 0x15) = 0x2620746867696568;
    *(undefined8 *)(puVar6 + 0x1b) = 0x3d3e206874646977;
    *(undefined8 *)(puVar6 + 0x19) = 0x2e74636572202b20;
    *(undefined8 *)(puVar6 + 0x1f) = 0x746469772e746365;
    *(undefined8 *)(puVar6 + 0x1d) = 0x722829746e692820;
    *(undefined8 *)(puVar6 + 3) = 0x2030203d3e206874;
    *(undefined8 *)(puVar6 + 1) = 0x6469772e74636572;
    *(undefined8 *)(puVar6 + 7) = 0x3e20746867696568;
    *(undefined8 *)(puVar6 + 5) = 0x2e74636572202626;
    *(undefined8 *)(puVar6 + 0xb) = 0x203c20782e746365;
    *(undefined8 *)(puVar6 + 9) = 0x722026262030203d;
    *puVar6 = 1;
    puStack_50 = puVar6 + 1;
    uStack_48 = 0xb8;
    *(undefined1 *)(puVar6 + 0x2f) = 0;
    *(undefined8 *)(puVar6 + 0x2d) = 0x2930203e20746867;
    *(undefined8 *)(puVar6 + 0xf) = 0x2026262068746469;
    *(undefined8 *)(puVar6 + 0xd) = 0x773e2d6567616d69;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f595bac,&UNK_10f595324,0xbc9);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a3d6c4);
  (*pcVar5)();
}



/* Entry: 109a3d720; end: 109a3d86b;  */

void FUN_109a3d720(long param_1,uint param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_40 = puVar2 + 1;
    *(undefined1 *)puStack_40 = 0;
    uStack_38 = 0;
    FUN_109ac3188(0xfffffff7,&puStack_40,&UNK_10f595c73,&UNK_10f595324,0xc0c);
  }
  else {
    if (param_2 <= *(uint *)(param_1 + 8)) {
      puVar3 = *(uint **)(param_1 + 0x30);
      if ((param_2 != 0) || (puVar3 != (uint *)0x0)) {
        if (puVar3 == (uint *)0x0) {
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          puVar3 = (uint *)0x14;
          func_0x000107c2ae8c();
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = param_2;
          *(undefined8 *)(puVar3 + 3) = uVar4;
          *(uint **)(param_1 + 0x30) = puVar3;
        }
        else {
          *puVar3 = param_2;
        }
      }
      return;
    }
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_40 = puVar2 + 1;
    *(undefined1 *)puStack_40 = 0;
    uStack_38 = 0;
    FUN_109ac3188(0xffffffe8,&puStack_40,&UNK_10f595c73,&UNK_10f595324,0xc0f);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109a3d81c);
  (*pcVar1)();
}



/* Entry: 109a3d86c; end: 109a3d9cb;  */

undefined8 * FUN_109a3d86c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
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
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x90)) {
    puVar4 = (undefined8 *)0x90;
    func_0x000107c2ae8c();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x1a);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x1e);
    uVar8 = *(undefined8 *)(param_1 + 0x1c);
    uVar12 = *(undefined8 *)(param_1 + 0x14);
    puVar4[0xb] = *(undefined8 *)(param_1 + 0x16);
    puVar4[10] = uVar12;
    uVar13 = *(undefined8 *)(param_1 + 6);
    uVar12 = *(undefined8 *)(param_1 + 4);
    uVar15 = *(undefined8 *)(param_1 + 10);
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar18 = *(undefined8 *)(param_1 + 0xc);
    uVar17 = *(undefined8 *)(param_1 + 0x12);
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    puVar4[7] = *(undefined8 *)(param_1 + 0xe);
    puVar4[6] = uVar18;
    puVar4[0xd] = uVar11;
    puVar4[0xc] = uVar10;
    puVar4[0xf] = uVar9;
    puVar4[0xe] = uVar8;
    puVar4[0x10] = uVar6;
    uVar8 = *(undefined8 *)(param_1 + 2);
    uVar6 = *(undefined8 *)param_1;
    puVar4[9] = uVar17;
    puVar4[8] = uVar16;
    puVar4[3] = uVar13;
    puVar4[2] = uVar12;
    puVar4[5] = uVar15;
    puVar4[4] = uVar14;
    puVar4[1] = uVar8;
    *puVar4 = uVar6;
    puVar4[0x11] = 0;
    puVar4[0xb] = 0;
    puVar4[6] = 0;
    puVar7 = *(undefined8 **)(param_1 + 0xc);
    if (puVar7 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(puVar7 + 2);
      uVar8 = puVar7[1];
      uVar6 = *puVar7;
      puVar7 = (undefined8 *)0x14;
      func_0x000107c2ae8c();
      puVar7[1] = uVar8;
      *puVar7 = uVar6;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar4[6] = puVar7;
    }
    if (*(long *)(param_1 + 0x16) != 0) {
      iVar2 = param_1[0x14];
      FUN_109a3907c(puVar4);
      _memcpy(puVar4[0xb],*(undefined8 *)(param_1 + 0x16),(long)iVar2);
    }
    return puVar4;
  }
  puVar5 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_40 = puVar5 + 1;
  uStack_38 = 0x10;
  *(undefined1 *)(puVar5 + 5) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x7265646165682065;
  *(undefined8 *)(puVar5 + 1) = 0x67616d6920646142;
  FUN_109ac3188(0xfffffffb,&puStack_40,&UNK_10f595c92,&UNK_10f595324,0xc2f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a3d9a0);
  (*pcVar3)();
}



/* Entry: 109a3d9cc; end: 109a3dceb;  */

void FUN_109a3d9cc(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  code *pcVar18;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [129];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_1;
  uVar15 = (ulong)(uVar4 >> 3) & 0x1ff;
  uVar14 = (uint)uVar15;
  if (uVar14 == 0) {
    puStack_488 = (undefined8 *)CONCAT44(puStack_488._4_4_,0x2010000);
    auStack_478[0] = 0;
    puStack_480 = param_2;
    FUN_109a479a0(param_1,&puStack_488);
  }
  else {
    uVar10 = (ulong)uVar4 & 7;
    if ((int)uVar10 == 7) goto LAB_109a3dc30;
    pcVar18 = (code *)(&PTR_FUN_110b21860)[uVar10];
    iVar5 = *(int *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
    lVar8 = uVar15 + 2;
    puVar1 = (undefined8 *)(lVar8 * 0x10 + 0x10);
    puVar7 = auStack_478;
    if (0x3d < uVar14) {
      puVar7 = puVar1;
      puStack_488 = auStack_478;
      __Znam();
    }
    uVar12 = (ulong)(uVar14 + 1);
    plVar13 = (long *)((long)puVar7 + uVar12 * 8 + 0x17 & 0xfffffffffffffff0);
    *puVar7 = param_1;
    lVar16 = 8;
    iVar17 = 0;
    uVar15 = uVar12;
    puStack_488 = puVar7;
    puStack_480 = puVar1;
    if (iVar5 != 0) {
      iVar17 = (iVar5 + 0x3ff) / iVar5;
    }
    do {
      FUN_109a83fd0(param_2,param_1[1],*(undefined8 *)(param_1 + 0x10),uVar10);
      *(undefined8 **)((long)puVar7 + lVar16) = param_2;
      lVar16 = lVar16 + 8;
      param_2 = param_2 + 0xc;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uStack_490 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4c8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    FUN_109a9b368(&uStack_4c8,puVar7,0,plVar13,lVar8);
    uVar15 = 0;
    iVar6 = (int)uStack_4a0;
    if ((int)uStack_4a0 <= iVar17) {
      iVar17 = (int)uStack_4a0;
    }
    iVar2 = (int)uStack_4a0;
    if (3 < uVar14) {
      iVar2 = iVar17;
    }
    for (; uVar15 < uStack_4a8; uVar15 = uVar15 + 1) {
      if (0 < iVar6) {
        iVar17 = 0;
        lVar8 = *plVar13;
        while( true ) {
          iVar3 = iVar2;
          if (iVar6 - iVar17 <= iVar2) {
            iVar3 = iVar6 - iVar17;
          }
          (*pcVar18)(lVar8,plVar13 + 1,iVar3,uVar12);
          iVar17 = iVar17 + iVar2;
          if (iVar6 <= iVar17) break;
          lVar8 = *plVar13 + (long)iVar3 * (long)iVar5;
          *plVar13 = lVar8;
          plVar11 = plVar13 + 1;
          uVar10 = uVar12;
          do {
            *plVar11 = *plVar11 +
                       (long)(int)(0x88442211U >> (ulong)((uVar4 & 7) << 2) & 0xf) * (long)iVar3;
            uVar10 = uVar10 - 1;
            plVar11 = plVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      FUN_109a8350c(&uStack_4c8);
    }
    if (puStack_488 != auStack_478 && puStack_488 != (undefined8 *)0x0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109a3dc30:
  puVar9 = (undefined4 *)0x10;
  func_0x000107c2ae8c();
  puStack_488 = (undefined8 *)(puVar9 + 1);
  *puStack_488 = 0x203d2120636e7566;
  *puVar9 = 1;
  puStack_480 = (undefined8 *)0x9;
  *(undefined2 *)(puVar9 + 3) = 0x30;
  FUN_109ac3188(0xffffff29,&puStack_488,&DAT_10f595cf3,&UNK_10f595cf9,0x5e);
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x109a3dc8c);
  (*pcVar18)();
}



/* Entry: 109a3dcec; end: 109a3e00f;  */

void FUN_109a3dcec(uint *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  int *piStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 **ppuStack_38;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_1 + 2);
    piStack_60 = (int *)((ulong)&uStack_a0 | 8);
    uStack_98 = puVar8[1];
    uStack_a0 = *puVar8;
    uStack_88 = puVar8[3];
    uStack_90 = puVar8[2];
    uStack_78 = puVar8[5];
    uStack_80 = puVar8[4];
    uStack_68 = puVar8[7];
    uStack_70 = puVar8[6];
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    if (puVar8[7] != 0) {
      piVar6 = (int *)(puVar8[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_50 = *(undefined8 *)puVar8[9];
      uStack_48 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_a0 = uStack_a0 & 0xffffffff;
      func_0x000109a84868(&uStack_a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_a0,param_1,0xffffffff);
  }
  if (uStack_90 != 0) {
    uVar9 = (ulong)uStack_a0._4_4_;
    if ((int)uStack_a0._4_4_ < 3) {
      lVar10 = (long)uStack_98._4_4_ * (long)(int)uStack_98;
    }
    else {
      lVar10 = 1;
      piVar6 = piStack_60;
      do {
        lVar10 = lVar10 * *piVar6;
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 1;
      } while (uVar9 != 0);
    }
    if (lVar10 != 0) {
      if ((*param_2 < 0) && (piVar6 = param_2, FUN_109a8e1c4(), ((ulong)piVar6 & 1) == 0)) {
        piVar6 = param_2;
        FUN_109a8b904(param_2,0xffffffff);
        if ((uint)piVar6 != ((uint)uStack_a0 & 7)) {
          puVar7 = (undefined4 *)0x40;
          func_0x000107c2ae8c();
          *puVar7 = 1;
          puStack_b8 = puVar7 + 1;
          uStack_b0 = 0x3a;
          *(undefined8 *)(puVar7 + 3) = 0x2928657079546465;
          *(undefined8 *)(puVar7 + 1) = 0x7869662e766d5f21;
          *(undefined1 *)((long)puVar7 + 0x3e) = 0;
          *(undefined8 *)(puVar7 + 7) = 0x2029287974706d65;
          *(undefined8 *)(puVar7 + 5) = 0x2e766d5f207c7c20;
          *(undefined8 *)(puVar7 + 0xb) = 0x3d3d202928657079;
          *(undefined8 *)(puVar7 + 9) = 0x742e766d5f207c7c;
          *(undefined8 *)((long)puVar7 + 0x36) = 0x292868747065642e;
          *(undefined8 *)((long)puVar7 + 0x2e) = 0x6d203d3d20292865;
          FUN_109ac3188(0xffffff29,&puStack_b8,&DAT_10f595cf3,&UNK_10f595cf9,0xbb);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109a3dfa8);
          (*pcVar5)();
        }
      }
      uVar4 = (uint)uStack_a0;
      iVar1 = ((uint)uStack_a0 >> 3 & 0x1ff) + 1;
      FUN_109a8f64c(param_2,iVar1,1,(uint)uStack_a0 & 7,0xffffffff,0,0);
      iVar11 = 0;
      do {
        FUN_109a8727c(param_2,uStack_a0._4_4_,piStack_60,uVar4 & 7,iVar11,0,0);
        iVar11 = iVar11 + 1;
      } while (iVar1 != iVar11);
      puStack_b8 = (undefined4 *)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      FUN_109a8c15c(param_2,&puStack_b8);
      FUN_109a3d9cc(&uStack_a0,puStack_b8);
      ppuStack_38 = &puStack_b8;
      FUN_1093702c4(&ppuStack_38);
      goto LAB_109a3dea4;
    }
  }
  FUN_109a8e944(param_2);
LAB_109a3dea4:
  if (uStack_68 != 0) {
    piVar6 = (int *)(uStack_68 + 0x14);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_a0._4_4_) {
    lVar10 = 0;
    do {
      piStack_60[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_a0._4_4_);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 109a3e010; end: 109a3e70f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109a3e010(code *******param_1,code *******param_2,code *******param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  code *pcVar11;
  code *******pppppppcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  code *******pppppppcVar15;
  code *******pppppppcVar16;
  code *******pppppppcVar17;
  uint uVar18;
  code *******pppppppcVar19;
  code *******pppppppcVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  code *******pppppppcVar28;
  code ******ppppppcVar29;
  code *******pppppppcVar30;
  long lVar31;
  long lVar32;
  code *******pppppppcVar33;
  int iVar34;
  code *******pppppppcVar35;
  ulong uVar36;
  ulong uVar37;
  code ***unaff_x25;
  ulong unaff_x26;
  int iVar38;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined4 *puStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined4 uStack_a00;
  ulong uStack_9f8;
  undefined8 uStack_9f0;
  undefined4 uStack_9e8;
  undefined8 uStack_9e0;
  undefined4 *puStack_9d8;
  undefined4 *puStack_9d0;
  undefined4 auStack_9c8 [258];
  long lStack_5c0;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  code ***pppcStack_598;
  ulong uStack_590;
  code *******pppppppcStack_588;
  code *******pppppppcStack_580;
  code *******pppppppcStack_578;
  code *******pppppppcStack_570;
  code *******pppppppcStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  code *******pppppppcStack_550;
  ulong uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined4 uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  undefined4 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  code *****pppppcStack_4f8;
  code *****pppppcStack_4f0;
  code *****pppppcStack_4e8;
  code *****pppppcStack_4e0;
  code *****pppppcStack_4d8;
  code *****pppppcStack_4d0;
  code *****pppppcStack_4c8;
  ulong uStack_4c0;
  code ****ppppcStack_4b8;
  code ****ppppcStack_4b0;
  code ****ppppcStack_4a8;
  code *******pppppppcStack_4a0;
  code *******pppppppcStack_498;
  code ******appppppcStack_490 [132];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (code *******)0x0) || (param_2 == (code *******)0x0)) {
    puVar13 = (undefined4 *)0x10;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    pppppppcStack_4a0 = (code *******)(puVar13 + 1);
    *pppppppcStack_4a0 = (code ******)0x206e20262620766d;
    pppppppcStack_498 = (code *******)0xb;
    *(undefined1 *)((long)puVar13 + 0xf) = 0;
    *(undefined4 *)((long)puVar13 + 0xb) = 0x30203e20;
    FUN_109ac3188(0xffffff29,&pppppppcStack_4a0,&UNK_10f62b1a0,&UNK_10f595cf9,0xca);
LAB_109a3e634:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x109a3e638);
    (*pcVar11)();
  }
  pppppppcVar33 = (code *******)0x0;
  pppppppcVar20 = (code *******)0x0;
  pppppppcVar35 = (code *******)((ulong)*(uint *)param_1 & 7);
  pppppppcVar16 = (code *******)param_1[8];
  uVar27 = *(uint *)((long)pppppppcVar16 + -4);
  uVar37 = 1;
  do {
    ppppppcVar29 = (param_1 + (long)pppppppcVar20 * 0xc)[8];
    if (*(uint *)((long)ppppppcVar29 + -4) != uVar27) {
LAB_109a3e508:
      puVar13 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar13 = 1;
      pppppppcStack_4a0 = (code *******)(puVar13 + 1);
      pppppppcStack_498 = (code *******)0x32;
      *(undefined8 *)(puVar13 + 3) = 0x766d203d3d20657a;
      *(undefined8 *)(puVar13 + 1) = 0x69732e5d695b766d;
      *(undefined2 *)(puVar13 + 0xd) = 0x6874;
      *(undefined1 *)((long)puVar13 + 0x36) = 0;
      *(undefined8 *)(puVar13 + 7) = 0x695b766d20262620;
      *(undefined8 *)(puVar13 + 5) = 0x657a69732e5d305b;
      *(undefined8 *)(puVar13 + 0xb) = 0x706564203d3d2029;
      *(undefined8 *)(puVar13 + 9) = 0x2868747065642e5d;
      FUN_109ac3188(0xffffff29,&pppppppcStack_4a0,&UNK_10f62b1a0,&UNK_10f595cf9,0xd3);
      goto LAB_109a3e634;
    }
    if (uVar27 == 2) {
      if ((*(uint *)ppppppcVar29 != *(uint *)pppppppcVar16) ||
         (*(uint *)((long)ppppppcVar29 + 4) != *(uint *)((long)pppppppcVar16 + 4)))
      goto LAB_109a3e508;
    }
    else {
      uVar36 = (ulong)uVar27;
      pppppppcVar17 = pppppppcVar16;
      if (0 < (int)uVar27) {
        do {
          if (*(uint *)ppppppcVar29 != *(uint *)pppppppcVar17) goto LAB_109a3e508;
          uVar36 = uVar36 - 1;
          ppppppcVar29 = (code ******)((long)ppppppcVar29 + 4);
          pppppppcVar17 = (code *******)((long)pppppppcVar17 + 4);
        } while (uVar36 != 0);
      }
    }
    uVar7 = *(uint *)(param_1 + (long)pppppppcVar20 * 0xc);
    if ((uVar7 & 7) != (uint)pppppppcVar35) goto LAB_109a3e508;
    uVar26 = (uint)uVar37 & (uint)((uVar7 & 0xff8) == 0);
    uVar37 = (ulong)uVar26;
    uVar18 = uVar7 >> 3 & 0x1ff;
    iVar25 = (int)pppppppcVar33;
    iVar38 = iVar25 + uVar18;
    uVar7 = iVar38 + 1;
    pppppppcVar33 = (code *******)(ulong)uVar7;
    pppppppcVar20 = (code *******)((long)pppppppcVar20 + 1);
  } while (pppppppcVar20 != param_2);
  if (0x1ff < uVar18 + iVar25) {
    puVar13 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    pppppppcStack_4a0 = (code *******)(puVar13 + 1);
    pppppppcStack_498 = (code *******)0x19;
    *(undefined1 *)((long)puVar13 + 0x1d) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x203d3c206e632026;
    *(undefined8 *)(puVar13 + 1) = 0x26206e63203c2030;
    *(undefined8 *)((long)puVar13 + 0x15) = 0x58414d5f4e435f56;
    *(undefined8 *)((long)puVar13 + 0xd) = 0x43203d3c206e6320;
    FUN_109ac3188(0xffffff29,&pppppppcStack_4a0,&UNK_10f62b1a0,&UNK_10f595cf9,0xd8);
    goto LAB_109a3e634;
  }
  pppppppcVar20 = (code *******)(ulong)(((uint)pppppppcVar35 | uVar7 * 8) - 8);
  pppppppcVar17 = (code *******)0xffffffff;
  pppppppcVar19 = (code *******)0x0;
  FUN_109a8727c(param_3,*(uint *)((long)param_1 + 4));
  if (((ulong)*param_3 & 0x1f0000) == 0x10000) {
    ppppppcVar29 = param_3[1];
    uStack_4c0 = (ulong)&uStack_500 | 8;
    pppppcStack_4f8 = ppppppcVar29[1];
    uStack_500 = (code ******)*ppppppcVar29;
    pppppcStack_4e8 = ppppppcVar29[3];
    pppppcStack_4f0 = ppppppcVar29[2];
    pppppcStack_4d8 = ppppppcVar29[5];
    pppppcStack_4e0 = ppppppcVar29[4];
    pppppcStack_4c8 = ppppppcVar29[7];
    pppppcStack_4d0 = ppppppcVar29[6];
    ppppcStack_4b8 = (code ****)&ppppcStack_4b0;
    ppppcStack_4b0 = (code ****)0x0;
    ppppcStack_4a8 = (code ****)0x0;
    if (ppppppcVar29[7] != (code *****)0x0) {
      pcVar11 = (code *)((long)ppppppcVar29[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar9) {
          *(int *)pcVar11 = *(int *)pcVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)ppppppcVar29 + 4) < 3) {
      ppppcStack_4b0 = *ppppppcVar29[9];
      ppppcStack_4a8 = ppppppcVar29[9][1];
    }
    else {
      uStack_500 = (code ******)((ulong)uStack_500 & 0xffffffff);
      func_0x000109a84868(&uStack_500);
    }
  }
  else {
    FUN_109a8a180(&uStack_500,param_3,0xffffffff);
  }
  ppppppcVar29 = uStack_500;
  if (param_2 == (code *******)0x1) {
    pppppppcStack_4a0 = (code *******)CONCAT44(pppppppcStack_4a0._4_4_,0x2010000);
    pppppppcStack_498 = (code *******)&uStack_500;
    appppppcStack_490[0] = (code ******)0x0;
    pppppppcVar15 = (code *******)&pppppppcStack_4a0;
    pppppppcVar12 = param_1;
    FUN_109a479a0();
  }
  else if (uVar26 == 0) {
    pppppppcVar35 = (code *******)(ulong)(uVar7 * 2);
    param_3 = appppppcStack_490;
    pppppppcVar17 = param_3;
    if (0x84 < uVar7) {
      pppppppcVar17 = (code *******)((long)pppppppcVar35 << 2);
      pppppppcStack_4a0 = param_3;
      __Znam();
    }
    pppppppcVar20 = (code *******)0x0;
    lVar21 = 0;
    do {
      lVar22 = ((ulong)(*(uint *)(param_1 + (long)pppppppcVar20 * 0xc) >> 3) & 0x1ff) + 1;
      puVar13 = (undefined4 *)((long)pppppppcVar17 + lVar21 * 8 + 4);
      lVar31 = lVar21;
      lVar32 = lVar22;
      do {
        puVar13[0xffffffffffffffff] = (int)lVar31;
        *puVar13 = (int)lVar31;
        puVar13 = puVar13 + 2;
        lVar31 = lVar31 + 1;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      pppppppcVar20 = (code *******)((long)pppppppcVar20 + 1);
      lVar21 = lVar22 + lVar21;
    } while (pppppppcVar20 != param_2);
    pppppppcVar16 = (code *******)&uStack_500;
    pppppppcVar20 = (code *******)0x1;
    pppppppcVar15 = param_2;
    pppppppcStack_4a0 = pppppppcVar17;
    pppppppcStack_498 = pppppppcVar35;
    FUN_109a3e710(param_1);
    pppppppcVar12 = pppppppcStack_4a0;
    pppppppcVar19 = pppppppcVar33;
    if ((pppppppcStack_4a0 != param_3) && (pppppppcStack_4a0 != (code *******)0x0))
    goto LAB_109a3e304;
  }
  else {
    unaff_x25 = ppppcStack_4b8[((ulong)uStack_500 >> 0x20) - 1];
    pppppppcVar17 = (code *******)(ulong)(iVar38 + 2);
    pppppppcVar12 = (code *******)((long)pppppppcVar17 * 0x10 + 0x10);
    pppppppcVar15 = appppppcStack_490;
    pppppppcStack_550 = pppppppcVar15;
    if (uVar7 < 0x3f) {
      pppppppcVar20 = pppppppcVar15 + uVar7;
      appppppcStack_490[0] = (code ******)&uStack_500;
    }
    else {
      pppppppcVar16 = pppppppcVar12;
      pppppppcStack_4a0 = pppppppcVar15;
      __Znam();
      pppppppcVar20 = pppppppcVar16 + uVar7;
      *pppppppcVar16 = (code ******)&uStack_500;
      pppppppcVar15 = pppppppcVar16;
    }
    unaff_x26 = (ulong)(0x88442211 >> (((ulong)ppppppcVar29 & 7) << 2)) & 0xf;
    lVar21 = 8;
    param_3 = (code *******)0x0;
    pppppppcVar16 = pppppppcVar33;
    if (unaff_x25 != (code ***)0x0) {
      param_3 = (code *******)(((long)unaff_x25 + 0x3ffU) / (ulong)unaff_x25);
    }
    do {
      *(code ********)((long)pppppppcVar15 + lVar21) = param_1;
      lVar21 = lVar21 + 8;
      param_1 = param_1 + 0xc;
      pppppppcVar16 = (code *******)((long)pppppppcVar16 + -1);
    } while (pppppppcVar16 != (code *******)0x0);
    uStack_508 = 0;
    param_1 = (code *******)((long)pppppppcVar20 + 0x17U & 0xfffffffffffffff0);
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    pppppppcVar16 = (code *******)0x0;
    pppppppcVar20 = param_1;
    pppppppcStack_4a0 = pppppppcVar15;
    pppppppcStack_498 = pppppppcVar12;
    FUN_109a9b368(&uStack_540);
    unaff_x27 = 0;
    uVar26 = (uint)uStack_518;
    unaff_x28 = uStack_518 & 0xffffffff;
    uVar27 = (uint)param_3;
    if ((int)(uint)uStack_518 <= (int)(uint)param_3) {
      uVar27 = (uint)uStack_518;
    }
    uVar18 = (uint)uStack_518;
    if (4 < uVar7) {
      uVar18 = uVar27;
    }
    uVar37 = (ulong)uVar18;
    pppppppcVar35 = (code *******)(&PTR_FUN_110b218a0)[(long)pppppppcVar35];
    param_2 = param_1 + 1;
    while (unaff_x27 < uStack_520) {
      uStack_548 = unaff_x27;
      if (0 < (int)uVar26) {
        iVar38 = 0;
        pppppppcVar15 = (code *******)*param_1;
        while( true ) {
          uVar27 = uVar18;
          if ((int)(uVar26 - iVar38) <= (int)uVar18) {
            uVar27 = uVar26 - iVar38;
          }
          param_3 = (code *******)(ulong)uVar27;
          pppppppcVar16 = param_3;
          pppppppcVar20 = pppppppcVar33;
          (*(code *)pppppppcVar35)(param_2);
          iVar38 = iVar38 + uVar18;
          if ((int)uVar26 <= iVar38) break;
          pppppppcVar15 = (code *******)((long)*param_1 + (long)unaff_x25 * (long)(int)uVar27);
          *param_1 = (code ******)pppppppcVar15;
          pppppppcVar16 = param_2;
          pppppppcVar20 = pppppppcVar33;
          do {
            *pppppppcVar16 =
                 (code ******)((long)*pppppppcVar16 + (long)(int)unaff_x26 * (long)(int)uVar27);
            pppppppcVar20 = (code *******)((long)pppppppcVar20 + -1);
            pppppppcVar16 = pppppppcVar16 + 1;
          } while (pppppppcVar20 != (code *******)0x0);
        }
      }
      unaff_x27 = uStack_548 + 1;
      FUN_109a8350c(&uStack_540);
    }
    pppppppcVar12 = pppppppcStack_4a0;
    pppppppcVar33 = pppppppcVar19;
    if (pppppppcStack_4a0 != pppppppcStack_550 && pppppppcStack_4a0 != (code *******)0x0) {
LAB_109a3e304:
      pppppppcVar12 = pppppppcStack_4a0;
      __ZdaPv();
      pppppppcVar19 = pppppppcVar33;
    }
  }
  if (pppppcStack_4c8 != (code *****)0x0) {
    pcVar11 = (code *)((long)pppppcStack_4c8 + 0x14);
    do {
      iVar38 = *(int *)pcVar11;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
      if (bVar9) {
        *(int *)pcVar11 = iVar38 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar38 + -1 == 0) {
      pppppppcVar12 = (code *******)&uStack_500;
      func_0x000109a848d4();
    }
  }
  pppppcStack_4c8 = (code *****)0x0;
  pppppcStack_4e8 = (code *****)0x0;
  pppppcStack_4f0 = (code *****)0x0;
  pppppcStack_4d8 = (code *****)0x0;
  pppppcStack_4e0 = (code *****)0x0;
  if (0 < uStack_500._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(uStack_4c0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_500._4_4_);
  }
  if ((code *****)ppppcStack_4b8 != &ppppcStack_4b0 && ppppcStack_4b8 != (code ****)0x0) {
    pppppppcVar12 = (code *******)ppppcStack_4b8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_500);
  pppppppcVar33 = pppppppcVar12;
  __Unwind_Resume();
  uStack_5b0 = unaff_x28;
  uStack_5a8 = unaff_x27;
  uStack_5a0 = unaff_x26;
  pppcStack_598 = unaff_x25;
  uStack_590 = uVar37;
  pppppppcStack_588 = pppppppcVar35;
  pppppppcStack_580 = param_3;
  pppppppcStack_578 = param_2;
  pppppppcStack_570 = param_1;
  pppppppcStack_568 = pppppppcVar12;
  puStack_560 = &stack0xfffffffffffffff0;
  pcStack_558 = FUN_109a3e710;
  lStack_5c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pppppppcVar19 != (code *******)0x0) {
    if ((((pppppppcVar33 == (code *******)0x0) || (pppppppcVar15 == (code *******)0x0)) ||
        (pppppppcVar16 == (code *******)0x0)) ||
       ((pppppppcVar20 == (code *******)0x0 || (pppppppcVar17 == (code *******)0x0))))
    goto LAB_109a3eb94;
    uVar27 = *(uint *)pppppppcVar16;
    lVar21 = (long)pppppppcVar20 + (long)pppppppcVar15;
    puVar13 = (undefined4 *)((long)pppppppcVar19 * 0x28 + lVar21 * 0x10 + 0x10);
    puVar14 = auStack_9c8;
    if ((undefined4 *)0x408 < puVar13) {
      puVar14 = puVar13;
      puStack_9d8 = auStack_9c8;
      __Znam();
    }
    pppppppcVar35 = (code *******)0x0;
    uVar7 = 0x88442211 >> (((ulong)uVar27 & 7) << 2);
    uVar36 = (ulong)uVar7 & 0xf;
    uVar37 = (ulong)uVar27 & 7;
    pppppppcVar12 = pppppppcVar33;
    do {
      *(code ********)(puVar14 + (long)pppppppcVar35 * 2) = pppppppcVar12;
      pppppppcVar35 = (code *******)((long)pppppppcVar35 + 1);
      pppppppcVar12 = pppppppcVar12 + 0xc;
    } while (pppppppcVar15 != pppppppcVar35);
    lVar22 = (long)pppppppcVar15 << 3;
    pppppppcVar35 = pppppppcVar16;
    pppppppcVar12 = pppppppcVar20;
    do {
      *(code ********)((long)puVar14 + lVar22) = pppppppcVar35;
      lVar22 = lVar22 + 8;
      pppppppcVar35 = pppppppcVar35 + 0xc;
      pppppppcVar12 = (code *******)((long)pppppppcVar12 + -1);
    } while (pppppppcVar12 != (code *******)0x0);
    pppppppcVar35 = (code *******)0x0;
    puVar2 = puVar14 + (long)pppppppcVar15 * 2 + (long)pppppppcVar20 * 2;
    plVar1 = (long *)(puVar2 + (long)pppppppcVar15 * 2 + (long)pppppppcVar20 * 2 + 2);
    plVar3 = plVar1 + (long)pppppppcVar19;
    plVar4 = plVar3 + (long)pppppppcVar19 * 3;
    puVar5 = (undefined4 *)((long)plVar4 + (long)pppppppcVar19 * 4);
    *(undefined8 *)(puVar2 + lVar21 * 2) = 0;
    do {
      uVar27 = *(uint *)(pppppppcVar17 + (long)pppppppcVar35);
      uVar26 = *(uint *)((long)(pppppppcVar17 + (long)pppppppcVar35) + 4);
      plVar24 = plVar3 + (long)pppppppcVar19 + (long)pppppppcVar35 * 2;
      uVar18 = (uint)uVar37;
      puStack_9d8 = puVar14;
      puStack_9d0 = puVar13;
      if ((int)uVar27 < 0) {
        iVar38 = 0;
        *(int *)plVar24 = (int)lVar21;
        *(undefined4 *)((long)plVar24 + 4) = 0;
      }
      else {
        pppppppcVar12 = (code *******)0x0;
        pppppppcVar28 = pppppppcVar33;
        while( true ) {
          uVar10 = *(uint *)pppppppcVar28 >> 3 & 0x1ff;
          if ((int)uVar27 <= (int)uVar10) break;
          uVar27 = uVar27 + ~uVar10;
          pppppppcVar12 = (code *******)((long)pppppppcVar12 + 1);
          pppppppcVar28 = pppppppcVar28 + 0xc;
          if (pppppppcVar15 == pppppppcVar12) goto LAB_109a3eb28;
        }
        if ((*(uint *)pppppppcVar28 & 7) != uVar18) {
LAB_109a3eb28:
          puVar13 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar13 = 1;
          puStack_a18 = puVar13 + 1;
          uStack_a10 = 0x24;
          *(undefined1 *)(puVar13 + 10) = 0;
          puVar13[9] = 0x68747065;
          *(undefined8 *)(puVar13 + 3) = 0x6372732026262073;
          *(undefined8 *)(puVar13 + 1) = 0x6372736e203c206a;
          *(undefined8 *)(puVar13 + 7) = 0x64203d3d20292868;
          *(undefined8 *)(puVar13 + 5) = 0x747065642e5d6a5b;
          FUN_109ac3188(0xffffff29,&puStack_a18,&UNK_10f595e49,&UNK_10f595cf9,0x1d2);
          goto LAB_109a3ebfc;
        }
        *(int *)plVar24 = (int)pppppppcVar12;
        *(uint *)((long)plVar24 + 4) = uVar27 * (int)uVar36;
        iVar38 = uVar10 + 1;
      }
      *(int *)((long)plVar4 + (long)pppppppcVar35 * 4) = iVar38;
      pppppppcVar28 = pppppppcVar15;
      pppppppcVar30 = pppppppcVar16;
      pppppppcVar12 = pppppppcVar20;
      while( true ) {
        uVar27 = *(uint *)pppppppcVar30 >> 3 & 0x1ff;
        if ((int)uVar26 <= (int)uVar27) break;
        uVar26 = uVar26 + ~uVar27;
        pppppppcVar28 = (code *******)(ulong)((int)pppppppcVar28 + 1);
        pppppppcVar12 = (code *******)((long)pppppppcVar12 + -1);
        pppppppcVar30 = pppppppcVar30 + 0xc;
        if (pppppppcVar12 == (code *******)0x0) goto LAB_109a3eac4;
      }
      if (((int)uVar26 < 0) || ((*(uint *)pppppppcVar30 & 7) != uVar18)) {
LAB_109a3eac4:
        puVar13 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar13 = 1;
        puStack_a18 = puVar13 + 1;
        uStack_a10 = 0x2f;
        *(undefined1 *)((long)puVar13 + 0x33) = 0;
        *(undefined8 *)(puVar13 + 3) = 0x6e203c206a202626;
        *(undefined8 *)(puVar13 + 1) = 0x2030203d3e203169;
        *(undefined8 *)(puVar13 + 7) = 0x642e5d6a5b747364;
        *(undefined8 *)(puVar13 + 5) = 0x2026262073747364;
        *(undefined8 *)((long)puVar13 + 0x2b) = 0x6874706564203d3d;
        *(undefined8 *)((long)puVar13 + 0x23) = 0x2029286874706564;
        FUN_109ac3188(0xffffff29,&puStack_a18,&UNK_10f595e49,&UNK_10f595cf9,0x1df);
        goto LAB_109a3ebfc;
      }
      *(int *)(plVar24 + 1) = (int)pppppppcVar28;
      *(uint *)((long)plVar24 + 0xc) = uVar26 * (int)uVar36;
      puVar5[(long)pppppppcVar35] = uVar27 + 1;
      pppppppcVar35 = (code *******)((long)pppppppcVar35 + 1);
    } while (pppppppcVar35 != pppppppcVar19);
    uStack_9e0 = 0;
    uStack_a10 = 0;
    uStack_a08 = 0;
    puStack_a18 = (undefined4 *)0x0;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    uStack_9f0 = 0;
    uStack_9e8 = 0;
    FUN_109a9b368(&puStack_a18,puVar14,0,puVar2);
    iVar25 = (int)uStack_9f0;
    iVar38 = 0;
    if ((uVar7 & 0xf) != 0) {
      iVar38 = (int)((uVar36 + 0x3ff) / uVar36);
    }
    pcVar11 = (code *)(&PTR_FUN_110b218e0)[uVar37];
    if ((int)uStack_9f0 <= iVar38) {
      iVar38 = (int)uStack_9f0;
    }
    for (uVar37 = 0; uVar37 < uStack_9f8; uVar37 = uVar37 + 1) {
      pppppppcVar16 = (code *******)0x0;
      piVar23 = puVar14 + (long)pppppppcVar15 * 4 +
                          (long)pppppppcVar20 * 4 + (long)pppppppcVar19 * 4 + 5;
      plVar24 = plVar1;
      do {
        *plVar24 = *(long *)(puVar2 + (long)piVar23[-3] * 2) + (long)piVar23[-2];
        plVar24[(long)pppppppcVar19] = *(long *)(puVar2 + (long)piVar23[-1] * 2) + (long)*piVar23;
        pppppppcVar16 = (code *******)((long)pppppppcVar16 + 1);
        plVar24 = plVar24 + 1;
        piVar23 = piVar23 + 4;
      } while (pppppppcVar19 != pppppppcVar16);
      if (0 < iVar25) {
        iVar34 = 0;
        while( true ) {
          iVar6 = iVar38;
          if (iVar25 - iVar34 <= iVar38) {
            iVar6 = iVar25 - iVar34;
          }
          (*pcVar11)(plVar1,plVar4,plVar3,puVar5,iVar6,pppppppcVar19);
          iVar34 = iVar34 + iVar38;
          if (iVar25 <= iVar34) break;
          pppppppcVar16 = (code *******)0x0;
          do {
            *(ulong *)(puVar2 + (long)pppppppcVar15 * 2 +
                                (long)pppppppcVar20 * 2 + (long)pppppppcVar16 * 2 + 2) =
                 *(long *)(puVar2 + (long)pppppppcVar15 * 2 +
                                    (long)pppppppcVar20 * 2 + (long)pppppppcVar16 * 2 + 2) +
                 uVar36 * (long)*(int *)((long)plVar4 + (long)pppppppcVar16 * 4) * (long)iVar38;
            plVar3[(long)pppppppcVar16] =
                 plVar3[(long)pppppppcVar16] +
                 uVar36 * (long)(int)puVar5[(long)pppppppcVar16] * (long)iVar38;
            pppppppcVar16 = (code *******)((long)pppppppcVar16 + 1);
          } while (pppppppcVar19 != pppppppcVar16);
        }
      }
      FUN_109a8350c(&puStack_a18);
    }
    if (puStack_9d8 != auStack_9c8 && puStack_9d8 != (undefined4 *)0x0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c0) {
    return;
  }
  ___stack_chk_fail();
LAB_109a3eb94:
  puVar13 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar13 = 1;
  puStack_9d8 = puVar13 + 1;
  puStack_9d0 = (undefined4 *)0x3c;
  *(undefined8 *)(puVar13 + 3) = 0x30203e2073637273;
  *(undefined8 *)(puVar13 + 1) = 0x6e20262620637273;
  *(undefined1 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 7) = 0x737473646e202626;
  *(undefined8 *)(puVar13 + 5) = 0x2074736420262620;
  *(undefined8 *)(puVar13 + 0xb) = 0x26206f546d6f7266;
  *(undefined8 *)(puVar13 + 9) = 0x2026262030203e20;
  *(undefined8 *)(puVar13 + 0xe) = 0x30203e2073726961;
  *(undefined8 *)(puVar13 + 0xc) = 0x706e202626206f54;
  FUN_109ac3188(0xffffff29,&puStack_9d8,&UNK_10f595e49,&UNK_10f595cf9,0x1b7);
LAB_109a3ebfc:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x109a3ec00);
  (*pcVar11)();
}



/* Entry: 109a3e710; end: 109a3ecab;  */

void FUN_109a3e710(uint *param_1,ulong param_2,uint *param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int *piVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  undefined4 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined4 *puStack_488;
  undefined4 *puStack_480;
  undefined4 auStack_478 [258];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 != 0) {
    if ((((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == (uint *)0x0)) ||
       ((param_4 == 0 || (param_5 == 0)))) goto LAB_109a3eb94;
    uVar12 = *param_3;
    lVar16 = param_4 + param_2;
    puVar11 = (undefined4 *)(param_6 * 0x28 + lVar16 * 0x10 + 0x10);
    puVar10 = auStack_478;
    if ((undefined4 *)0x408 < puVar11) {
      puVar10 = puVar11;
      puStack_488 = auStack_478;
      __Znam();
    }
    uVar14 = 0;
    uVar8 = 0x88442211 >> (((ulong)uVar12 & 7) << 2);
    uVar24 = (ulong)uVar8 & 0xf;
    uVar13 = (ulong)uVar12 & 7;
    puVar17 = param_1;
    do {
      *(uint **)(puVar10 + uVar14 * 2) = puVar17;
      uVar14 = uVar14 + 1;
      puVar17 = puVar17 + 0x18;
    } while (param_2 != uVar14);
    lVar15 = param_2 << 3;
    puVar17 = param_3;
    lVar21 = param_4;
    do {
      *(uint **)((long)puVar10 + lVar15) = puVar17;
      lVar15 = lVar15 + 8;
      puVar17 = puVar17 + 0x18;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar15 = 0;
    puVar2 = puVar10 + param_2 * 2 + param_4 * 2;
    plVar1 = (long *)(puVar2 + param_2 * 2 + param_4 * 2 + 2);
    plVar3 = plVar1 + param_6;
    plVar4 = plVar3 + param_6 * 3;
    puVar5 = (undefined4 *)((long)plVar4 + param_6 * 4);
    *(undefined8 *)(puVar2 + lVar16 * 2) = 0;
    do {
      piVar18 = (int *)(param_5 + lVar15 * 8);
      iVar22 = *piVar18;
      iVar20 = piVar18[1];
      plVar19 = plVar3 + param_6 + lVar15 * 2;
      uVar12 = (uint)uVar13;
      puStack_488 = puVar10;
      puStack_480 = puVar11;
      if (iVar22 < 0) {
        iVar22 = 0;
        *(int *)plVar19 = (int)lVar16;
        *(undefined4 *)((long)plVar19 + 4) = 0;
      }
      else {
        uVar14 = 0;
        puVar17 = param_1;
        while( true ) {
          uVar7 = *puVar17 >> 3 & 0x1ff;
          if (iVar22 <= (int)uVar7) break;
          iVar22 = iVar22 + ~uVar7;
          uVar14 = uVar14 + 1;
          puVar17 = puVar17 + 0x18;
          if (param_2 == uVar14) goto LAB_109a3eb28;
        }
        if ((*puVar17 & 7) != uVar12) {
LAB_109a3eb28:
          puVar11 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar11 = 1;
          puStack_4c8 = puVar11 + 1;
          uStack_4c0 = 0x24;
          *(undefined1 *)(puVar11 + 10) = 0;
          puVar11[9] = 0x68747065;
          *(undefined8 *)(puVar11 + 3) = 0x6372732026262073;
          *(undefined8 *)(puVar11 + 1) = 0x6372736e203c206a;
          *(undefined8 *)(puVar11 + 7) = 0x64203d3d20292868;
          *(undefined8 *)(puVar11 + 5) = 0x747065642e5d6a5b;
          FUN_109ac3188(0xffffff29,&puStack_4c8,&UNK_10f595e49,&UNK_10f595cf9,0x1d2);
          goto LAB_109a3ebfc;
        }
        *(int *)plVar19 = (int)uVar14;
        *(int *)((long)plVar19 + 4) = iVar22 * (int)uVar24;
        iVar22 = uVar7 + 1;
      }
      *(int *)((long)plVar4 + lVar15 * 4) = iVar22;
      uVar14 = param_2;
      puVar17 = param_3;
      lVar21 = param_4;
      while( true ) {
        uVar7 = *puVar17 >> 3 & 0x1ff;
        if (iVar20 <= (int)uVar7) break;
        iVar20 = iVar20 + ~uVar7;
        uVar14 = (ulong)((int)uVar14 + 1);
        lVar21 = lVar21 + -1;
        puVar17 = puVar17 + 0x18;
        if (lVar21 == 0) goto LAB_109a3eac4;
      }
      if ((iVar20 < 0) || ((*puVar17 & 7) != uVar12)) {
LAB_109a3eac4:
        puVar11 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        puStack_4c8 = puVar11 + 1;
        uStack_4c0 = 0x2f;
        *(undefined1 *)((long)puVar11 + 0x33) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x6e203c206a202626;
        *(undefined8 *)(puVar11 + 1) = 0x2030203d3e203169;
        *(undefined8 *)(puVar11 + 7) = 0x642e5d6a5b747364;
        *(undefined8 *)(puVar11 + 5) = 0x2026262073747364;
        *(undefined8 *)((long)puVar11 + 0x2b) = 0x6874706564203d3d;
        *(undefined8 *)((long)puVar11 + 0x23) = 0x2029286874706564;
        FUN_109ac3188(0xffffff29,&puStack_4c8,&UNK_10f595e49,&UNK_10f595cf9,0x1df);
        goto LAB_109a3ebfc;
      }
      *(int *)(plVar19 + 1) = (int)uVar14;
      *(int *)((long)plVar19 + 0xc) = iVar20 * (int)uVar24;
      puVar5[lVar15] = uVar7 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 != param_6);
    uStack_490 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    puStack_4c8 = (undefined4 *)0x0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    FUN_109a9b368(&puStack_4c8,puVar10,0,puVar2);
    iVar20 = (int)uStack_4a0;
    iVar22 = 0;
    if ((uVar8 & 0xf) != 0) {
      iVar22 = (int)((uVar24 + 0x3ff) / uVar24);
    }
    pcVar9 = (code *)(&PTR_FUN_110b218e0)[uVar13];
    if ((int)uStack_4a0 <= iVar22) {
      iVar22 = (int)uStack_4a0;
    }
    for (uVar14 = 0; uVar14 < uStack_4a8; uVar14 = uVar14 + 1) {
      lVar16 = 0;
      piVar18 = puVar10 + param_2 * 4 + param_4 * 4 + param_6 * 4 + 5;
      plVar19 = plVar1;
      do {
        *plVar19 = *(long *)(puVar2 + (long)piVar18[-3] * 2) + (long)piVar18[-2];
        plVar19[param_6] = *(long *)(puVar2 + (long)piVar18[-1] * 2) + (long)*piVar18;
        lVar16 = lVar16 + 1;
        plVar19 = plVar19 + 1;
        piVar18 = piVar18 + 4;
      } while (param_6 != lVar16);
      if (0 < iVar20) {
        iVar23 = 0;
        while( true ) {
          iVar6 = iVar22;
          if (iVar20 - iVar23 <= iVar22) {
            iVar6 = iVar20 - iVar23;
          }
          (*pcVar9)(plVar1,plVar4,plVar3,puVar5,iVar6,param_6);
          iVar23 = iVar23 + iVar22;
          if (iVar20 <= iVar23) break;
          lVar16 = 0;
          do {
            *(ulong *)(puVar2 + param_2 * 2 + param_4 * 2 + lVar16 * 2 + 2) =
                 *(long *)(puVar2 + param_2 * 2 + param_4 * 2 + lVar16 * 2 + 2) +
                 uVar24 * (long)*(int *)((long)plVar4 + lVar16 * 4) * (long)iVar22;
            plVar3[lVar16] = plVar3[lVar16] + uVar24 * (long)(int)puVar5[lVar16] * (long)iVar22;
            lVar16 = lVar16 + 1;
          } while (param_6 != lVar16);
        }
      }
      FUN_109a8350c(&puStack_4c8);
    }
    if (puStack_488 != auStack_478 && puStack_488 != (undefined4 *)0x0) {
      __ZdaPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109a3eb94:
  puVar11 = (undefined4 *)0x44;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_488 = puVar11 + 1;
  puStack_480 = (undefined4 *)0x3c;
  *(undefined8 *)(puVar11 + 3) = 0x30203e2073637273;
  *(undefined8 *)(puVar11 + 1) = 0x6e20262620637273;
  *(undefined1 *)(puVar11 + 0x10) = 0;
  *(undefined8 *)(puVar11 + 7) = 0x737473646e202626;
  *(undefined8 *)(puVar11 + 5) = 0x2074736420262620;
  *(undefined8 *)(puVar11 + 0xb) = 0x26206f546d6f7266;
  *(undefined8 *)(puVar11 + 9) = 0x2026262030203e20;
  *(undefined8 *)(puVar11 + 0xe) = 0x30203e2073726961;
  *(undefined8 *)(puVar11 + 0xc) = 0x706e202626206f54;
  FUN_109ac3188(0xffffff29,&puStack_488,&UNK_10f595e49,&UNK_10f595cf9,0x1b7);
LAB_109a3ebfc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109a3ec00);
  (*pcVar9)();
}



/* Entry: 109a3ecac; end: 109a3ed2f;  */

void FUN_109a3ecac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  FUN_109a8c15c(param_1,&lStack_40);
  lVar1 = 0;
  if (lStack_38 - lStack_40 != 0) {
    lVar1 = lStack_40;
  }
  FUN_109a3e010(lVar1,(lStack_38 - lStack_40 >> 5) * -0x5555555555555555,param_2);
  puStack_28 = (undefined1 *)&lStack_40;
  FUN_1093702c4(&puStack_28);
  return;
}



/* Entry: 109a3ed30; end: 109a3f337;  */

void FUN_109a3ed30(uint *param_1,uint *param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong *puStack_758;
  ulong uStack_750;
  ulong uStack_748;
  undefined4 *puStack_738;
  undefined8 uStack_730;
  undefined4 uStack_728;
  undefined8 uStack_724;
  undefined8 auStack_71c [4];
  long alStack_6f8 [211];
  
  if (param_3 == 0) {
    return;
  }
  if (param_4 != 0) {
    bVar6 = false;
    uVar20 = *param_1 & 0x1f0000;
    if (((uVar20 != 0x40000) && (uVar20 != 0x50000)) && (uVar20 != 0xb0000)) {
      bVar6 = true;
    }
    bVar7 = false;
    uVar20 = *param_2 & 0x1f0000;
    if (((uVar20 != 0x40000) && (uVar20 != 0x50000)) && (uVar20 != 0xb0000)) {
      bVar7 = true;
    }
    if (bVar6) {
      uVar20 = 1;
    }
    else {
      puVar9 = param_1;
      FUN_109a8de54(param_1,0xffffffff);
      uVar20 = (uint)puVar9;
    }
    if (bVar7) {
      puVar9 = (uint *)0x1;
    }
    else {
      puVar9 = param_2;
      FUN_109a8de54(param_2,0xffffffff);
    }
    if ((0 < (int)uVar20) && (0 < (int)puVar9)) {
      lVar13 = 0;
      do {
        puVar19 = (undefined8 *)((long)alStack_6f8 + lVar13 + 0x20);
        *puVar19 = 0;
        *(undefined4 *)((long)&uStack_728 + lVar13) = 0x42ff0000;
        *(undefined8 *)((long)auStack_71c + lVar13) = 0;
        *(undefined8 *)((long)&uStack_724 + lVar13) = 0;
        *(undefined8 *)((long)auStack_71c + lVar13 + 0x10) = 0;
        *(undefined8 *)((long)auStack_71c + lVar13 + 8) = 0;
        *(undefined8 *)(&stack0xfffffffffffff904 + lVar13) = 0;
        *(undefined8 *)((long)auStack_71c + lVar13 + 0x18) = 0;
        *(undefined8 *)((long)alStack_6f8 + lVar13 + 8) = 0;
        *(undefined8 *)((long)alStack_6f8 + lVar13) = 0;
        *(long *)((long)alStack_6f8 + lVar13 + 0x10) = (long)auStack_71c + lVar13 + -4;
        *(undefined8 **)((long)alStack_6f8 + lVar13 + 0x18) = puVar19;
        lVar1 = lVar13 + 0x60;
        *(undefined8 *)((long)alStack_6f8 + lVar13 + 0x28) = 0;
        lVar13 = lVar1;
      } while (lVar1 != 0x6c0);
      puStack_738 = &uStack_728;
      uStack_730 = 0x12;
      FUN_109a46c80(&puStack_738,(int)puVar9 + uVar20);
      puVar10 = puStack_738;
      uVar18 = 0;
      puVar19 = (undefined8 *)((ulong)&uStack_7a0 | 4);
      uVar14 = (ulong)&uStack_7a0 | 8;
      uVar21 = (ulong)uVar20;
      do {
        bVar5 = (bool)(bVar6 ^ 1);
        if ((*param_1 & 0x1f0000) != 0x10000) {
          bVar5 = true;
        }
        if (bVar5) {
          uVar17 = (undefined4)uVar18;
          if (bVar6) {
            uVar17 = 0xffffffff;
          }
          FUN_109a8a180(&uStack_7a0,param_1,uVar17);
        }
        else {
          puVar11 = *(ulong **)(param_1 + 2);
          uStack_798 = puVar11[1];
          uStack_7a0 = *puVar11;
          uStack_788 = puVar11[3];
          uStack_790 = puVar11[2];
          uStack_778 = puVar11[5];
          uStack_780 = puVar11[4];
          uStack_768 = puVar11[7];
          uStack_770 = puVar11[6];
          uStack_750 = 0;
          uStack_748 = 0;
          if (puVar11[7] != 0) {
            piVar2 = (int *)(puVar11[7] + 0x14);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_760 = uVar14;
          puStack_758 = &uStack_750;
          if (*(int *)((long)puVar11 + 4) < 3) {
            uStack_750 = *(ulong *)puVar11[9];
            uStack_748 = ((ulong *)puVar11[9])[1];
          }
          else {
            uStack_7a0 = uStack_7a0 & 0xffffffff;
            func_0x000109a84868(&uStack_7a0);
          }
        }
        puVar11 = (ulong *)(puVar10 + uVar18 * 0x18);
        if (puVar11[7] != 0) {
          piVar2 = (int *)(puVar11[7] + 0x14);
          do {
            iVar12 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(puVar11);
          }
        }
        puVar11[7] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        if (0 < *(int *)((long)puVar11 + 4)) {
          lVar13 = 0;
          uVar15 = puVar11[8];
          do {
            *(undefined4 *)(uVar15 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)puVar11 + 4));
        }
        puVar11[1] = uStack_798;
        *puVar11 = uStack_7a0;
        puVar11[3] = uStack_788;
        puVar11[2] = uStack_790;
        puVar11[5] = uStack_778;
        puVar11[4] = uStack_780;
        puVar11[7] = uStack_768;
        puVar11[6] = uStack_770;
        puVar16 = (ulong *)puVar11[9];
        puVar3 = puVar11 + 10;
        iVar12 = uStack_7a0._4_4_;
        if (puVar16 != puVar3) {
          if (puVar16 != (ulong *)0x0) {
            _free(puVar16[-1]);
            iVar12 = uStack_7a0._4_4_;
          }
          puVar11[8] = (ulong)(puVar11 + 1);
          puVar11[9] = (ulong)puVar3;
          puVar16 = puVar3;
        }
        if (iVar12 < 3) {
          *puVar16 = *puStack_758;
          puVar16[1] = puStack_758[1];
          uStack_7a0 = CONCAT44(uStack_7a0._4_4_,0x42ff0000);
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          if (puStack_758 != &uStack_750) {
            _free(puStack_758[-1]);
          }
        }
        else {
          puVar11[9] = (ulong)puStack_758;
          puVar11[8] = uStack_760;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar21);
      uVar18 = 0;
      puVar19 = (undefined8 *)((ulong)&uStack_7a0 | 4);
      uVar14 = (ulong)&uStack_7a0 | 8;
      do {
        bVar6 = (bool)(bVar7 ^ 1);
        if ((*param_2 & 0x1f0000) != 0x10000) {
          bVar6 = true;
        }
        if (bVar6) {
          uVar17 = (undefined4)uVar18;
          if (bVar7) {
            uVar17 = 0xffffffff;
          }
          FUN_109a8a180(&uStack_7a0,param_2,uVar17);
        }
        else {
          puVar11 = *(ulong **)(param_2 + 2);
          uStack_798 = puVar11[1];
          uStack_7a0 = *puVar11;
          uStack_788 = puVar11[3];
          uStack_790 = puVar11[2];
          uStack_778 = puVar11[5];
          uStack_780 = puVar11[4];
          uStack_768 = puVar11[7];
          uStack_770 = puVar11[6];
          uStack_750 = 0;
          uStack_748 = 0;
          if (puVar11[7] != 0) {
            piVar2 = (int *)(puVar11[7] + 0x14);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_760 = uVar14;
          puStack_758 = &uStack_750;
          if (*(int *)((long)puVar11 + 4) < 3) {
            uStack_750 = *(ulong *)puVar11[9];
            uStack_748 = ((ulong *)puVar11[9])[1];
          }
          else {
            uStack_7a0 = uStack_7a0 & 0xffffffff;
            func_0x000109a84868(&uStack_7a0);
          }
        }
        puVar11 = (ulong *)(puVar10 + uVar21 * 0x18 + uVar18 * 0x18);
        if (puVar11[7] != 0) {
          piVar2 = (int *)(puVar11[7] + 0x14);
          do {
            iVar12 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(puVar11);
          }
        }
        puVar11[7] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        if (0 < *(int *)((long)puVar11 + 4)) {
          lVar13 = 0;
          uVar15 = puVar11[8];
          do {
            *(undefined4 *)(uVar15 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)puVar11 + 4));
        }
        puVar11[1] = uStack_798;
        *puVar11 = uStack_7a0;
        puVar11[3] = uStack_788;
        puVar11[2] = uStack_790;
        puVar11[5] = uStack_778;
        puVar11[4] = uStack_780;
        puVar11[7] = uStack_768;
        puVar11[6] = uStack_770;
        puVar16 = (ulong *)puVar11[9];
        puVar3 = puVar11 + 10;
        iVar12 = uStack_7a0._4_4_;
        if (puVar16 != puVar3) {
          if (puVar16 != (ulong *)0x0) {
            _free(puVar16[-1]);
            iVar12 = uStack_7a0._4_4_;
          }
          puVar11[8] = (ulong)(puVar11 + 1);
          puVar11[9] = (ulong)puVar3;
          puVar16 = puVar3;
        }
        if (iVar12 < 3) {
          *puVar16 = *puStack_758;
          puVar16[1] = puStack_758[1];
          uStack_7a0 = CONCAT44(uStack_7a0._4_4_,0x42ff0000);
          puVar19[1] = 0;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          if (puStack_758 != &uStack_750) {
            _free(puStack_758[-1]);
          }
        }
        else {
          puVar11[9] = (ulong)puStack_758;
          puVar11[8] = uStack_760;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != ((ulong)puVar9 & 0xffffffff));
      FUN_109a3e710(puVar10,uVar21,puVar10 + uVar21 * 0x18,(ulong)puVar9 & 0xffffffff,param_3,
                    param_4);
      FUN_109a46dec(&puStack_738);
      return;
    }
    puVar10 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_738 = puVar10 + 1;
    uStack_730 = 0x14;
    *(undefined1 *)(puVar10 + 6) = 0;
    puVar10[5] = 0x30203e20;
    *(undefined8 *)(puVar10 + 3) = 0x7473646e20262620;
    *(undefined8 *)(puVar10 + 1) = 0x30203e206372736e;
    FUN_109ac3188(0xffffff29,&puStack_738,&UNK_10f595e49,&UNK_10f595cf9,0x275);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x109a3f2c0);
    (*pcVar8)();
  }
  return;
}



/* Entry: 109a3f338; end: 109a3f81b;  */

void FUN_109a3f338(uint *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 auStack_98 [2];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined4 auStack_68 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  uint auStack_50 [2];
  long lStack_48;
  
  puVar8 = &uStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  uVar6 = (uint)puVar12;
  if (((int)param_3 < 0) || ((uVar6 >> 3 & 0x1ff) < param_3)) {
    puVar11 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_110 = puVar11 + 1;
    uStack_108 = 0x14;
    *(undefined1 *)(puVar11 + 6) = 0;
    puVar11[5] = 0x6e63203c;
    *(undefined8 *)(puVar11 + 3) = 0x20696f6320262620;
    *(undefined8 *)(puVar11 + 1) = 0x696f63203d3c2030;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f595ed4,&UNK_10f595cf9,0x29f);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109a3f768);
    (*pcVar5)();
  }
  auStack_50[1] = 0;
  auStack_50[0] = param_3;
  uVar7 = uVar6;
  FUN_109aa6384();
  if (((uVar7 == 0) || (puVar12 = param_1, FUN_109a8d7e8(param_1,0xffffffff), 2 < (int)puVar12)) ||
     ((*param_2 & 0x1f0000) != 0xa0000)) {
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar10 = *(ulong **)(param_1 + 2);
      uStack_d0 = (ulong)&uStack_110 | 8;
      uStack_108 = puVar10[1];
      uStack_110 = (undefined4 *)*puVar10;
      uStack_f8 = puVar10[3];
      uStack_100 = puVar10[2];
      uStack_e8 = puVar10[5];
      uStack_f0 = puVar10[4];
      uStack_d8 = puVar10[7];
      uStack_e0 = puVar10[6];
      puStack_c8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (puVar10[7] != 0) {
        piVar14 = (int *)(puVar10[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar10 + 4) < 3) {
        uStack_c0 = *(undefined8 *)puVar10[9];
        uStack_b8 = ((undefined8 *)puVar10[9])[1];
      }
      else {
        uStack_110 = (undefined4 *)((ulong)uStack_110 & 0xffffffff);
        func_0x000109a84868(&uStack_110);
      }
    }
    else {
      FUN_109a8a180(&uStack_110,param_1,0xffffffff);
    }
    piVar14 = (int *)0x0;
    FUN_109a8727c(param_2,uStack_110._4_4_,uStack_d0,uVar6 & 7,0xffffffff,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar10 = *(ulong **)(param_2 + 2);
      uStack_130 = (ulong)&uStack_170 | 8;
      uStack_168 = puVar10[1];
      uStack_170 = *puVar10;
      uStack_158 = puVar10[3];
      uStack_160 = puVar10[2];
      uStack_148 = puVar10[5];
      uStack_150 = puVar10[4];
      uStack_138 = puVar10[7];
      uStack_140 = puVar10[6];
      puStack_128 = &uStack_120;
      uStack_120 = 0;
      uStack_118 = 0;
      if (puVar10[7] != 0) {
        piVar1 = (int *)(puVar10[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar10 + 4) < 3) {
        uStack_120 = *(undefined8 *)puVar10[9];
        uStack_118 = ((undefined8 *)puVar10[9])[1];
      }
      else {
        uStack_170 = uStack_170 & 0xffffffff;
        func_0x000109a84868(&uStack_170);
      }
    }
    else {
      FUN_109a8a180(&uStack_170,param_2,0xffffffff);
    }
    puVar9 = &uStack_110;
    puVar12 = auStack_50;
    puVar11 = (undefined4 *)0x1;
    lVar13 = 1;
    FUN_109a3e710(puVar9,1,&uStack_170,1,puVar12,1);
    if (uStack_138 != 0) {
      piVar1 = (int *)(uStack_138 + 0x14);
      do {
        iVar16 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 + -1 == 0) {
        func_0x000109a848d4();
        puVar9 = puVar8;
      }
    }
    uStack_138 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    if (0 < uStack_170._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_130 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_170._4_4_);
    }
    if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puStack_128[-1];
      _free();
    }
    if (uStack_d8 != 0) {
      piVar1 = (int *)(uStack_d8 + 0x14);
      do {
        iVar16 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 + -1 == 0) {
        puVar9 = &uStack_110;
        func_0x000109a848d4();
      }
    }
    uStack_d8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (0 < uStack_110._4_4_) {
      lVar15 = 0;
      do {
        *(undefined4 *)(uStack_d0 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < uStack_110._4_4_);
    }
    if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puStack_c8[-1];
      _free();
    }
  }
  else {
    FUN_109a8bd24(&uStack_110,param_1,0xffffffff);
    puVar12 = (uint *)0xffffffff;
    lVar13 = 0;
    piVar14 = (int *)0x0;
    FUN_109a8727c(param_2,uStack_110._4_4_,uStack_e0,uVar6 & 7,0xffffffff,0);
    FUN_109a8bd24(&uStack_170,param_2,0xffffffff);
    FUN_109a43324(auStack_80,&uStack_110);
    uStack_58 = 0;
    auStack_68[0] = 0x10b0000;
    puStack_60 = auStack_80;
    FUN_109a43324(auStack_b0,&uStack_170);
    auStack_98[0] = 0x430b0000;
    uStack_88 = 0;
    puVar11 = auStack_98;
    puStack_90 = auStack_b0;
    FUN_109a3ed30(auStack_68,puVar11,auStack_50,1);
    func_0x000109a43494(auStack_b0);
    func_0x000109a43494(auStack_80);
    FUN_109ac5638(&uStack_170);
    puVar9 = &uStack_110;
    FUN_109ac5638();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109a43494(auStack_b0);
  func_0x000109a43494(auStack_80);
  FUN_109ac5638(&uStack_170);
  FUN_109ac5638(&uStack_110);
  __Unwind_Resume(puVar9);
  iVar16 = piVar14[1];
  if (iVar16 != 0) {
    iVar2 = *piVar14;
    do {
      iVar16 = iVar16 + -1;
      _memcpy(puVar12,puVar9,(long)iVar2);
      puVar9 = (undefined8 *)((long)puVar9 + (long)puVar11);
      puVar12 = (uint *)((long)puVar12 + lVar13);
    } while (iVar16 != 0);
  }
  return;
}



/* Entry: 109a3f81c; end: 109a3f87f;  */

void FUN_109a3f81c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_7[1];
  if (iVar2 != 0) {
    iVar1 = *param_7;
    do {
      iVar2 = iVar2 + -1;
      _memcpy(param_5,param_1,(long)iVar1);
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 109a3f880; end: 109a40483;  */

void FUN_109a3f880(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,int *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  iVar5 = param_7[1];
  if (iVar5 != 0) {
    iVar4 = *param_7;
    do {
      if (iVar4 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          pbVar1 = (byte *)(param_1 + uVar6);
          bVar3 = pbVar1[1];
          pbVar2 = (byte *)(param_5 + uVar6);
          *pbVar2 = *pbVar1 & ((char)*pbVar1 >> 0x1f ^ 0xffU);
          pbVar2[1] = bVar3 & ((char)bVar3 >> 0x1f ^ 0xffU);
          bVar3 = pbVar1[3];
          pbVar2[2] = pbVar1[2] & ((char)pbVar1[2] >> 0x1f ^ 0xffU);
          pbVar2[3] = bVar3 & ((char)bVar3 >> 0x1f ^ 0xffU);
          uVar6 = uVar6 + 4;
        } while ((long)uVar6 <= (long)iVar4 + -4);
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 < iVar4) {
        do {
          *(byte *)(param_5 + uVar6) =
               *(byte *)(param_1 + uVar6) & ((char)*(byte *)(param_1 + uVar6) >> 0x1f ^ 0xffU);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)iVar4);
      }
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



/* Entry: 109a40484; end: 109a404f3;  */

void FUN_109a40484(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_7[1];
  if (iVar2 != 0) {
    iVar1 = *param_7;
    do {
      iVar2 = iVar2 + -1;
      _memcpy(param_5,param_1,(long)iVar1 << 1);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffe);
      param_5 = param_5 + (param_6 & 0xfffffffffffffffe);
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 109a404f4; end: 109a40e5b;  */

void FUN_109a404f4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,uint *param_7)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = param_7[1];
  if (uVar5 != 0) {
    uVar4 = *param_7;
    do {
      if ((int)uVar4 < 4) {
        uVar6 = 0;
      }
      else {
        lVar7 = 0;
        uVar6 = 0;
        do {
          puVar1 = (ushort *)(param_1 + lVar7);
          uVar3 = puVar1[1];
          puVar2 = (ushort *)(param_5 + lVar7);
          *puVar2 = *puVar1 & ((short)*puVar1 >> 0x1f ^ 0xffffU);
          puVar2[1] = uVar3 & ((short)uVar3 >> 0x1f ^ 0xffffU);
          uVar3 = puVar1[3];
          puVar2[2] = puVar1[2] & ((short)puVar1[2] >> 0x1f ^ 0xffffU);
          puVar2[3] = uVar3 & ((short)uVar3 >> 0x1f ^ 0xffffU);
          uVar6 = uVar6 + 4;
          lVar7 = lVar7 + 8;
        } while ((long)uVar6 <= (long)(int)uVar4 + -4);
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)uVar6 < (int)uVar4) {
        do {
          uVar3 = *(ushort *)(param_1 + uVar6 * 2);
          *(ushort *)(param_5 + uVar6 * 2) = uVar3 & ((short)uVar3 >> 0x1f ^ 0xffffU);
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffffe);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffe);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 109a40e5c; end: 109a40ecb;  */

void FUN_109a40e5c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_7[1];
  if (iVar2 != 0) {
    iVar1 = *param_7;
    do {
      iVar2 = iVar2 + -1;
      _memcpy(param_5,param_1,(long)iVar1 << 2);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
      param_5 = param_5 + (param_6 & 0xfffffffffffffffc);
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 109a40ecc; end: 109a417e7;  */

void FUN_109a40ecc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,int *param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = param_7[1];
  if (iVar4 != 0) {
    iVar3 = *param_7;
    do {
      if (iVar3 < 4) {
        uVar5 = 0;
      }
      else {
        lVar6 = 0;
        uVar5 = 0;
        do {
          pfVar1 = (float *)(param_1 + lVar6);
          fVar8 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar9 = pfVar1[3];
          puVar2 = (undefined4 *)(param_5 + lVar6);
          *puVar2 = (int)(long)(float)(int)*pfVar1;
          puVar2[1] = (int)(long)(float)(int)fVar8;
          puVar2[2] = (int)(long)(float)(int)fVar7;
          puVar2[3] = (int)(long)(float)(int)fVar9;
          uVar5 = uVar5 + 4;
          lVar6 = lVar6 + 0x10;
        } while ((long)uVar5 <= (long)iVar3 + -4);
        uVar5 = uVar5 & 0xffffffff;
      }
      if ((int)uVar5 < iVar3) {
        do {
          *(int *)(param_5 + uVar5 * 4) = (int)(long)(float)(int)*(float *)(param_1 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)iVar3);
      }
      param_5 = param_5 + (param_6 & 0xfffffffffffffffc);
      param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* Entry: 109a417e8; end: 109a41857;  */

void FUN_109a417e8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_7[1];
  if (iVar2 != 0) {
    iVar1 = *param_7;
    do {
      iVar2 = iVar2 + -1;
      _memcpy(param_5,param_1,(long)iVar1 << 3);
      param_1 = param_1 + (param_2 & 0xfffffffffffffff8);
      param_5 = param_5 + (param_6 & 0xfffffffffffffff8);
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 109a41858; end: 109a41f1f;  */

void FUN_109a41858(double param_1,double param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  uint *puVar26;
  code *pcVar27;
  int iVar28;
  long unaff_x28;
  ulong unaff_d9;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong auStack_2a0 [3];
  undefined4 uStack_288;
  ulong uStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  int aiStack_1b8 [2];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  int *piStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  undefined8 uStack_10c;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  double dStack_88;
  double dStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_60;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  do {
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bVar7 = ABS(param_1 + -1.0) < 2.220446049250313e-16;
    uStack_70 = unaff_d9;
    lStack_60 = unaff_x28;
    if ((int)(uint)param_5 < 0) {
      if ((int)*param_4 < 0) {
        puVar26 = param_4;
        FUN_109a8b904(param_4,0xffffffff);
        uVar12 = *param_3;
      }
      else {
        uVar12 = *param_3;
        puVar26 = (uint *)(ulong)(uVar12 & 0xfff);
      }
    }
    else {
      uVar12 = *param_3;
      puVar26 = (uint *)(ulong)(uVar12 & 0xff8 | (uint)param_5 & 7);
    }
    unaff_x28 = lStack_60;
    unaff_d9 = uStack_70;
    uVar14 = (uint)puVar26 & 7;
    if ((uVar12 & 7) != uVar14 || (2.220446049250313e-16 <= ABS(param_2) || !bVar7)) {
      uStack_10c = *(ulong *)(param_3 + 1);
      lStack_d0 = (long)&uStack_10c + 4;
      uVar13 = param_3[1];
      uStack_104 = param_3[3];
      uStack_f8 = *(undefined8 *)(param_3 + 6);
      uStack_100 = *(undefined8 *)(param_3 + 4);
      uStack_e8 = *(undefined8 *)(param_3 + 10);
      uStack_f0 = *(undefined8 *)(param_3 + 8);
      lStack_d8 = *(long *)(param_3 + 0xe);
      uStack_e0 = *(undefined8 *)(param_3 + 0xc);
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (*(long *)(param_3 + 0xe) != 0) {
        piVar18 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar3) {
            *piVar18 = *piVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar13 = param_3[1];
      }
      uStack_110 = uVar12;
      puStack_c8 = &uStack_c0;
      if ((int)uVar13 < 3) {
        uStack_c0 = **(undefined8 **)(param_3 + 0x12);
        uStack_b8 = (*(undefined8 **)(param_3 + 0x12))[1];
      }
      else {
        uStack_10c = uStack_10c & 0xffffffff00000000;
        func_0x000109a84868(&uStack_110,param_3);
      }
      ppuVar1 = &PTR_FUN_110b21920;
      if (2.220446049250313e-16 > ABS(param_2) && bVar7) {
        ppuVar1 = &PTR_FUN_110b21620;
      }
      pcVar27 = (code *)ppuVar1[(ulong)uVar14 * 8 + (ulong)(uVar12 & 7)];
      dStack_88 = param_1;
      dStack_80 = param_2;
      if (pcVar27 == (code *)0x0) goto LAB_109a41e44;
      iVar28 = (*param_3 >> 3 & 0x1ff) + 1;
      if ((int)param_3[1] < 3) {
        uStack_170 = (undefined8 *)NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
        FUN_109a8ee3c(param_4,&uStack_170,puVar26,0xffffffff,0,0);
        if ((*param_4 & 0x1f0000) == 0x10000) {
          puVar11 = *(ulong **)(param_4 + 2);
          uStack_130 = (ulong)&uStack_170 | 8;
          uStack_168 = puVar11[1];
          uStack_170 = (undefined8 *)*puVar11;
          puStack_158 = (ulong *)puVar11[3];
          piStack_160 = (int *)puVar11[2];
          uStack_148 = puVar11[5];
          uStack_150 = puVar11[4];
          uStack_138 = puVar11[7];
          uStack_140 = puVar11[6];
          puStack_128 = &uStack_120;
          uStack_120 = 0;
          uStack_118 = 0;
          if (puVar11[7] != 0) {
            piVar18 = (int *)(puVar11[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar7) {
                *piVar18 = *piVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar11 + 4) < 3) {
            uStack_120 = *(undefined8 *)puVar11[9];
            uStack_118 = ((undefined8 *)puVar11[9])[1];
          }
          else {
            uStack_170 = (undefined8 *)((ulong)uStack_170 & 0xffffffff);
            func_0x000109a84868(&uStack_170);
          }
        }
        else {
          FUN_109a8a180(&uStack_170,param_4,0xffffffff);
        }
        if ((((uStack_110 & (uint)uStack_170) >> 0xe & 1) == 0) ||
           (uVar15 = (long)(int)uStack_104 * (long)iVar28 * (long)uStack_10c._4_4_,
           uVar15 - (long)(int)uVar15 != 0)) {
          uVar15 = (ulong)(uStack_104 * iVar28);
          iVar28 = uStack_10c._4_4_;
        }
        else {
          iVar28 = 1;
        }
        uStack_1b0 = CONCAT44(iVar28,(int)uVar15);
        (*pcVar27)(uStack_100,uStack_c0,0,0,piStack_160,uStack_120,&uStack_1b0,&dStack_88);
        if (uStack_138 != 0) {
          piVar18 = (int *)(uStack_138 + 0x14);
          do {
            iVar28 = *piVar18;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar28 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        uStack_138 = 0;
        puStack_158 = (ulong *)0x0;
        piStack_160 = (int *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)(uStack_130 + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          uVar8 = puStack_128[-1];
LAB_109a41d8c:
          uStack_138 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          puStack_158 = (ulong *)0x0;
          piStack_160 = (int *)0x0;
          _free(uVar8);
        }
      }
      else {
        FUN_109a8727c(param_4,param_3[1],*(undefined8 *)(param_3 + 0x10),puVar26,0xffffffff,0,0);
        if ((*param_4 & 0x1f0000) == 0x10000) {
          puVar11 = *(ulong **)(param_4 + 2);
          uStack_130 = (ulong)&uStack_170 | 8;
          uStack_168 = puVar11[1];
          uStack_170 = (undefined8 *)*puVar11;
          puStack_158 = (ulong *)puVar11[3];
          piStack_160 = (int *)puVar11[2];
          uStack_148 = puVar11[5];
          uStack_150 = puVar11[4];
          uStack_138 = puVar11[7];
          uStack_140 = puVar11[6];
          puStack_128 = &uStack_120;
          uStack_120 = 0;
          uStack_118 = 0;
          if (puVar11[7] != 0) {
            piVar18 = (int *)(puVar11[7] + 0x14);
            do {
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar7) {
                *piVar18 = *piVar18 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(int *)((long)puVar11 + 4) < 3) {
            uStack_120 = *(undefined8 *)puVar11[9];
            uStack_118 = ((undefined8 *)puVar11[9])[1];
          }
          else {
            uStack_170 = (undefined8 *)((ulong)uStack_170 & 0xffffffff);
            func_0x000109a84868(&uStack_170);
          }
        }
        else {
          FUN_109a8a180(&uStack_170,param_4,0xffffffff);
        }
        puStack_a0 = &uStack_110;
        uStack_98 = (uint *)&uStack_170;
        puStack_90 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = (undefined4 *)0x0;
        uStack_1b0 = 0;
        uStack_198 = (ulong)uStack_198._4_4_ << 0x20;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = (ulong)uStack_180._4_4_ << 0x20;
        FUN_109a9b368(&uStack_1b0,&puStack_a0,0,&uStack_b0,0xffffffff);
        iVar28 = iVar28 * (int)uStack_188;
        uVar15 = 0xffffffffffffffff;
        while (uVar15 = uVar15 + 1, uVar15 < uStack_190) {
          aiStack_1b8[1] = 1;
          aiStack_1b8[0] = iVar28;
          (*pcVar27)(uStack_b0,1,0,0,uStack_a8,1,aiStack_1b8,&dStack_88);
          FUN_109a8350c(&uStack_1b0);
        }
        if (uStack_138 != 0) {
          piVar18 = (int *)(uStack_138 + 0x14);
          do {
            iVar28 = *piVar18;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar28 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_170);
          }
        }
        uStack_138 = 0;
        puStack_158 = (ulong *)0x0;
        piStack_160 = (int *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar16 = 0;
          do {
            *(undefined4 *)(uStack_130 + lVar16 * 4) = 0;
            lVar16 = lVar16 + 1;
          } while (lVar16 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          uVar8 = puStack_128[-1];
          goto LAB_109a41d8c;
        }
      }
      if (lStack_d8 != 0) {
        piVar18 = (int *)(lStack_d8 + 0x14);
        do {
          iVar28 = *piVar18;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = iVar28 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < (int)uStack_10c) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_d0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uStack_10c);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
LAB_109a41e40:
      ___stack_chk_fail();
LAB_109a41e44:
      puVar9 = (undefined4 *)0x10;
      func_0x000107c2ae8c();
      uStack_170 = (undefined8 *)(puVar9 + 1);
      *uStack_170 = 0x203d2120636e7566;
      *puVar9 = 1;
      uStack_168 = 9;
      *(undefined2 *)(puVar9 + 3) = 0x30;
      FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f595ee3,&UNK_10f595cf9,0x12dc);
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x109a41ea0);
      (*pcVar27)();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_109a41e40;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_5 = param_4;
    FUN_109a8b904(param_4,0xffffffff);
    if (-1 < (int)*param_4) {
LAB_109a479f8:
      if (*(long *)(param_3 + 4) == 0) goto LAB_109a47a98;
      uVar12 = param_3[1];
      uVar15 = (ulong)uVar12;
      if ((int)uVar12 < 3) {
        lVar16 = (long)(int)param_3[3] * (long)(int)param_3[2];
      }
      else {
        lVar16 = 1;
        piVar18 = *(int **)(param_3 + 0x10);
        uVar22 = uVar15;
        do {
          lVar16 = lVar16 * *piVar18;
          uVar22 = uVar22 - 1;
          piVar18 = piVar18 + 1;
        } while (uVar22 != 0);
      }
      if (lVar16 == 0) {
LAB_109a47a98:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          uVar12 = *param_4;
          if ((uVar12 >> 0x1e & 1) == 0) {
            uVar14 = uVar12 >> 0x10 & 0x1f;
            if (uVar14 < 7) {
              if (uVar14 < 3) {
                if (uVar14 == 0) {
                  return;
                }
                if (uVar14 == 1) {
                  lVar16 = *(long *)(param_4 + 2);
                  if (*(long *)(lVar16 + 0x38) != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0x38) + 0x14);
                    do {
                      iVar28 = *piVar18;
                      cVar2 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                      if (bVar7) {
                        *piVar18 = iVar28 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar28 + -1 == 0) {
                      func_0x000109a848d4(lVar16);
                    }
                  }
                  *(undefined8 *)(lVar16 + 0x38) = 0;
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  *(undefined8 *)(lVar16 + 0x10) = 0;
                  *(undefined8 *)(lVar16 + 0x28) = 0;
                  *(undefined8 *)(lVar16 + 0x20) = 0;
                  if (*(int *)(lVar16 + 4) < 1) {
                    return;
                  }
                  lVar17 = 0;
                  lVar19 = *(long *)(lVar16 + 0x40);
                  do {
                    *(undefined4 *)(lVar19 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < *(int *)(lVar16 + 4));
                  return;
                }
              }
              else {
                if (uVar14 == 3) {
                  puStack_40 = (undefined8 *)0x0;
                  FUN_109a8ee3c(param_4,&puStack_40,uVar12 & 0xfff,0xffffffff,0,0);
                  return;
                }
                if (uVar14 == 4) {
                  plVar10 = *(long **)(param_4 + 2);
                  plVar24 = (long *)*plVar10;
                  plVar25 = (long *)plVar10[1];
                  while (plVar6 = plVar25, plVar6 != plVar24) {
                    plVar25 = plVar6 + -3;
                    if (*plVar25 != 0) {
                      plVar6[-2] = *plVar25;
                      __ZdlPv();
                    }
                  }
                  plVar10[1] = (long)plVar24;
                  return;
                }
                if (uVar14 == 5) {
                  plVar24 = *(long **)(param_4 + 2);
                  lVar16 = *plVar24;
                  lVar17 = plVar24[1];
                  while (lVar17 != lVar16) {
                    lVar17 = lVar17 + -0x60;
                    FUN_109370334(lVar17);
                  }
                  plVar24[1] = lVar16;
                  return;
                }
              }
            }
            else {
              if (uVar14 < 10) {
                return;
              }
              if (uVar14 == 10) {
                lVar16 = *(long *)(param_4 + 2);
                if (*(long *)(lVar16 + 0x20) != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0x20) + 0x10);
                  do {
                    iVar28 = *piVar18;
                    cVar2 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                    if (bVar7) {
                      *piVar18 = iVar28 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar28 + -1 == 0) {
                    (**(code **)(**(long **)(*(long *)(lVar16 + 0x20) + 8) + 0x20))();
                    *(undefined8 *)(lVar16 + 0x20) = 0;
                  }
                }
                if (0 < *(int *)(lVar16 + 4)) {
                  lVar17 = 0;
                  lVar19 = *(long *)(lVar16 + 0x30);
                  do {
                    *(undefined4 *)(lVar19 + lVar17 * 4) = 0;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 < *(int *)(lVar16 + 4));
                }
                *(undefined8 *)(lVar16 + 0x20) = 0;
                return;
              }
              if (uVar14 == 0xb) {
                plVar24 = *(long **)(param_4 + 2);
                lVar16 = *plVar24;
                lVar17 = plVar24[1];
                while (lVar17 != lVar16) {
                  lVar17 = lVar17 + -0x50;
                  FUN_109ac5638();
                }
                plVar24[1] = lVar16;
                return;
              }
              if (uVar14 == 0xd) {
                (*(undefined8 **)(param_4 + 2))[1] = **(undefined8 **)(param_4 + 2);
                return;
              }
            }
            puVar9 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_40 = (undefined8 *)(puVar9 + 1);
            uStack_38 = 0x1e;
            *(undefined1 *)((long)puVar9 + 0x22) = 0;
            *(undefined8 *)(puVar9 + 3) = 0x726f707075736e75;
            *(undefined8 *)(puVar9 + 1) = 0x2f6e776f6e6b6e55;
            *(undefined8 *)((long)puVar9 + 0x1a) = 0x6570797420796172;
            *(undefined8 *)((long)puVar9 + 0x12) = 0x726120646574726f;
            FUN_109ac3188(0xffffff2b,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa4b);
          }
          else {
            puVar9 = (undefined4 *)0x14;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_40 = (undefined8 *)(puVar9 + 1);
            *puStack_40 = 0x6953646578696621;
            uStack_38 = 0xc;
            *(undefined1 *)(puVar9 + 4) = 0;
            puVar9[3] = 0x2928657a;
            FUN_109ac3188(0xffffff29,&puStack_40,&DAT_10f598457,&UNK_10f597913,0xa0a);
          }
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x109a8ebec);
          (*pcVar27)();
        }
      }
      else {
        if ((*param_4 & 0x1f0000) == 0xa0000) {
          FUN_109a8727c(param_4,uVar15,*(undefined8 *)(param_3 + 0x10),*param_3 & 0xfff,0xffffffff,0
                        ,0);
          FUN_109a8bd24(&uStack_98,param_4,0xffffffff);
          uVar12 = param_3[1];
          uVar15 = (ulong)uVar12;
          if ((int)uVar12 < 1) {
            lVar16 = 0;
            uVar22 = (long)(int)uVar12;
            if (uVar12 != 0) goto LAB_109a47c64;
          }
          else {
            lVar16 = *(long *)(*(long *)(param_3 + 0x12) + uVar15 * 8 + -8);
            uVar22 = uVar15;
LAB_109a47c64:
            piVar18 = *(int **)(param_3 + 0x10);
            plVar24 = &uStack_1a0;
            do {
              *plVar24 = (long)*piVar18;
              uVar22 = uVar22 - 1;
              piVar18 = piVar18 + 1;
              plVar24 = plVar24 + 1;
            } while (uVar22 != 0);
          }
          lVar17 = (long)(int)uVar12 - 1;
          (&uStack_1a0)[lVar17] = (&uStack_1a0)[lVar17] * lVar16;
          uVar22 = (ulong)uStack_98._4_4_;
          if (0 < (int)uStack_98._4_4_) {
            lVar19 = 0;
            uVar20 = uStack_70;
            do {
              uVar23 = *(ulong *)(lStack_60 + lVar19);
              uVar4 = 0;
              if (uVar23 != 0) {
                uVar4 = uVar20 / uVar23;
              }
              *(ulong *)((long)auStack_2a0 + lVar19) = uVar4;
              uVar20 = uVar20 - uVar4 * uVar23;
              lVar19 = lVar19 + 8;
            } while (uVar22 * 8 - lVar19 != 0);
          }
          auStack_2a0[lVar17] = auStack_2a0[lVar17] * lVar16;
          (**(code **)(**(long **)(lStack_78 + 8) + 0x40))
                    (*(long **)(lStack_78 + 8),lStack_78,*(undefined8 *)(param_3 + 4),uVar15,
                     &uStack_1a0,auStack_2a0,lStack_60,*(undefined8 *)(param_3 + 0x12));
          FUN_109ac5638(&uStack_98);
        }
        else {
          if ((int)uVar12 < 3) {
            FUN_109a8f64c(param_4,param_3[2],param_3[3],*param_3 & 0xfff,0xffffffff,0,0);
            if ((*param_4 & 0x1f0000) == 0x10000) {
              puVar11 = *(ulong **)(param_4 + 2);
              piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
              uStack_198 = puVar11[1];
              uStack_1a0 = (undefined4 *)*puVar11;
              uStack_188 = puVar11[3];
              uStack_190 = puVar11[2];
              uStack_178 = puVar11[5];
              uStack_180 = puVar11[4];
              uStack_168 = puVar11[7];
              uStack_170 = (undefined8 *)puVar11[6];
              puStack_158 = &uStack_150;
              uStack_150 = 0;
              uStack_148 = 0;
              if (puVar11[7] != 0) {
                piVar18 = (int *)(puVar11[7] + 0x14);
                do {
                  cVar2 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                  if (bVar7) {
                    *piVar18 = *piVar18 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (*(int *)((long)puVar11 + 4) < 3) {
                uStack_150 = *(ulong *)puVar11[9];
                uStack_148 = ((ulong *)puVar11[9])[1];
              }
              else {
                uStack_1a0 = (undefined4 *)((ulong)uStack_1a0 & 0xffffffff);
                func_0x000109a84868(&uStack_1a0);
              }
            }
            else {
              FUN_109a8a180(&uStack_1a0,param_4,0xffffffff);
            }
            uVar15 = *(ulong *)(param_3 + 4);
            if (((uVar15 != uStack_190) && (uVar12 = param_3[2], 0 < (int)uVar12)) &&
               (uVar14 = param_3[3], 0 < (int)uVar14)) {
              if (((*param_4 & 0x1f0000) == 0xc0000) || ((*param_4 & 0x1f0000) == 0x30000)) {
                uVar15 = (ulong)uStack_1a0._4_4_;
                if ((int)uStack_1a0._4_4_ < 3) {
                  iVar28 = uStack_198._4_4_ * (int)uStack_198;
                }
                else {
                  iVar28 = 1;
                  piVar18 = piStack_160;
                  do {
                    iVar28 = *piVar18 * iVar28;
                    uVar15 = uVar15 - 1;
                    piVar18 = piVar18 + 1;
                  } while (uVar15 != 0);
                }
                FUN_109a890bc(auStack_2a0,&uStack_1a0,0,iVar28);
                FUN_109143cc8(&uStack_1a0,auStack_2a0);
                func_0x00010567aa40(auStack_2a0);
                uVar15 = *(ulong *)(param_3 + 4);
                uVar12 = param_3[2];
                uVar14 = param_3[3];
              }
              uVar21 = (uint)((long)(int)uVar12 * (long)(int)uVar14);
              uVar13 = uVar12;
              uVar5 = uVar14;
              if ((long)(int)uVar21 == (long)(int)uVar12 * (long)(int)uVar14) {
                uVar13 = 1;
                uVar5 = uVar21;
              }
              if ((*param_3 & (uint)uStack_1a0 & 0x4000) != 0) {
                uVar12 = uVar13;
                uVar14 = uVar5;
              }
              if ((int)param_3[1] < 1) {
                lVar16 = 0;
              }
              else {
                lVar16 = *(long *)(*(long *)(param_3 + 0x12) + (ulong)param_3[1] * 8 + -8);
              }
              if (uVar12 != 0) {
                uVar22 = uStack_190;
                do {
                  uVar12 = uVar12 - 1;
                  _memcpy(uVar22,uVar15,lVar16 * (int)uVar14);
                  uVar15 = uVar15 + *(long *)(param_3 + 0x14);
                  uVar22 = uVar22 + uStack_150;
                } while (uVar12 != 0);
              }
            }
            if (uStack_168 != 0) {
              piVar18 = (int *)(uStack_168 + 0x14);
              do {
                iVar28 = *piVar18;
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar7) {
                  *piVar18 = iVar28 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar28 + -1 == 0) {
                func_0x000109a848d4(&uStack_1a0);
              }
            }
            if (0 < (int)uStack_1a0._4_4_) {
              lVar16 = 0;
              do {
                piStack_160[lVar16] = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uStack_1a0._4_4_);
            }
          }
          else {
            FUN_109a8727c(param_4,uVar15,*(undefined8 *)(param_3 + 0x10),*param_3 & 0xfff,0xffffffff
                          ,0,0);
            if ((*param_4 & 0x1f0000) == 0x10000) {
              puVar11 = *(ulong **)(param_4 + 2);
              piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
              uStack_198 = puVar11[1];
              uStack_1a0 = (undefined4 *)*puVar11;
              uStack_188 = puVar11[3];
              uStack_190 = puVar11[2];
              uStack_178 = puVar11[5];
              uStack_180 = puVar11[4];
              uStack_168 = puVar11[7];
              uStack_170 = (undefined8 *)puVar11[6];
              puStack_158 = &uStack_150;
              uStack_150 = 0;
              uStack_148 = 0;
              if (puVar11[7] != 0) {
                piVar18 = (int *)(puVar11[7] + 0x14);
                do {
                  cVar2 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                  if (bVar7) {
                    *piVar18 = *piVar18 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (*(int *)((long)puVar11 + 4) < 3) {
                uStack_150 = *(ulong *)puVar11[9];
                uStack_148 = ((ulong *)puVar11[9])[1];
              }
              else {
                uStack_1a0 = (undefined4 *)((ulong)uStack_1a0 & 0xffffffff);
                func_0x000109a84868(&uStack_1a0);
              }
            }
            else {
              FUN_109a8a180(&uStack_1a0,param_4,0xffffffff);
            }
            if (*(ulong *)(param_3 + 4) != uStack_190) {
              uVar15 = (ulong)param_3[1];
              if ((int)param_3[1] < 3) {
                lVar16 = (long)(int)param_3[3] * (long)(int)param_3[2];
              }
              else {
                lVar16 = 1;
                piVar18 = *(int **)(param_3 + 0x10);
                do {
                  lVar16 = lVar16 * *piVar18;
                  uVar15 = uVar15 - 1;
                  piVar18 = piVar18 + 1;
                } while (uVar15 != 0);
              }
              if (lVar16 != 0) {
                puStack_90 = &uStack_1a0;
                uStack_268 = 0;
                auStack_2a0[1] = 0;
                auStack_2a0[2] = 0;
                auStack_2a0[0] = 0;
                uStack_288 = 0;
                uStack_280 = 0;
                lStack_278 = 0;
                uStack_270 = 0;
                uStack_98 = param_3;
                FUN_109a9b368(auStack_2a0,&uStack_98,0,&uStack_2b0,2);
                if ((int)param_3[1] < 1) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(long *)(*(long *)(param_3 + 0x12) + (ulong)param_3[1] * 8 + -8);
                }
                lVar16 = lVar16 * lStack_278;
                uVar15 = 0xffffffffffffffff;
                while (uVar15 = uVar15 + 1, uVar15 < uStack_280) {
                  _memcpy(uStack_2a8,uStack_2b0,lVar16);
                  FUN_109a8350c(auStack_2a0);
                }
              }
            }
            if (uStack_168 != 0) {
              piVar18 = (int *)(uStack_168 + 0x14);
              do {
                iVar28 = *piVar18;
                cVar2 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar7) {
                  *piVar18 = iVar28 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar28 + -1 == 0) {
                func_0x000109a848d4(&uStack_1a0);
              }
            }
            if (0 < (int)uStack_1a0._4_4_) {
              lVar16 = 0;
              do {
                piStack_160[lVar16] = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uStack_1a0._4_4_);
            }
          }
          uStack_168 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          if (puStack_158 != &uStack_150 && puStack_158 != (ulong *)0x0) {
            _free(puStack_158[-1]);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
      }
LAB_109a48058:
      ___stack_chk_fail();
LAB_109a4805c:
      puVar9 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      uStack_1a0 = puVar9 + 1;
      uStack_198 = 0x1e;
      *(undefined1 *)((long)puVar9 + 0x22) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x5643203d3d202928;
      *(undefined8 *)(puVar9 + 1) = 0x736c656e6e616863;
      *(undefined8 *)((long)puVar9 + 0x1a) = 0x296570797464284e;
      *(undefined8 *)((long)puVar9 + 0x12) = 0x435f54414d5f5643;
      FUN_109ac3188(0xffffff29,&uStack_1a0,&UNK_10f595fe6,&UNK_10f595fed,0x101);
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x109a480bc);
      (*pcVar27)();
    }
    if ((uint)param_5 == (*param_3 & 0xfff)) goto LAB_109a479f8;
    if (((*param_3 ^ (uint)param_5) & 0xff8) != 0) goto LAB_109a4805c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_109a48058;
    param_1 = 1.0;
    param_2 = 0.0;
  } while( true );
}



/* Entry: 109a41f20; end: 109a42707;  */

void FUN_109a41f20(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined *puVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  int *piStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  uVar4 = (uint)puVar8 >> 3 & 0x1ff;
  puVar8 = param_1;
  FUN_109a8b904(param_1,0xffffffff);
  puVar9 = param_2;
  FUN_109a8b904(param_2,0xffffffff);
  uVar5 = (uint)puVar9 >> 3 & 0x1ff;
  if ((((uVar5 != uVar4 && uVar5 != 0) ||
       (puVar9 = param_2, FUN_109a8de54(param_2,0xffffffff), puVar9 != (uint *)0x100)) ||
      (puVar9 = param_2, FUN_109a8e368(param_2,0xffffffff), (int)puVar9 == 0)) ||
     (((ulong)puVar8 & 6) != 0)) {
    puVar11 = (undefined4 *)0x74;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_e0 = puVar11 + 1;
    uStack_d8 = 0x6f;
    *(undefined8 *)(puVar11 + 0xf) = 0x6e6f4373692e7475;
    *(undefined8 *)(puVar11 + 0xd) = 0x6c5f202626203635;
    *(undefined8 *)(puVar11 + 0x13) = 0x6564282026262029;
    *(undefined8 *)(puVar11 + 0x11) = 0x2873756f756e6974;
    *(undefined8 *)(puVar11 + 0x17) = 0x207c7c2055385f56;
    *(undefined8 *)(puVar11 + 0x15) = 0x43203d3d20687470;
    *(undefined8 *)((long)puVar11 + 0x6b) = 0x2953385f5643203d;
    *(undefined8 *)((long)puVar11 + 99) = 0x3d20687470656420;
    *(undefined8 *)(puVar11 + 3) = 0x207c7c206e63203d;
    *(undefined8 *)(puVar11 + 1) = 0x3d206e6374756c28;
    *(undefined8 *)(puVar11 + 7) = 0x5f20262620293120;
    *(undefined8 *)(puVar11 + 5) = 0x3d3d206e6374756c;
    *(undefined1 *)((long)puVar11 + 0x73) = 0;
    *(undefined8 *)(puVar11 + 0xb) = 0x32203d3d2029286c;
    *(undefined8 *)(puVar11 + 9) = 0x61746f742e74756c;
    FUN_109ac3188(0xffffff29,&uStack_e0,&DAT_10f595f5d,&UNK_10f595cf9,0x144b);
    goto LAB_109a42638;
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar12 = *(undefined8 **)(param_1 + 2);
    uStack_a0 = (ulong)&uStack_e0 | 8;
    uStack_d8 = puVar12[1];
    uStack_e0 = (undefined4 *)*puVar12;
    uStack_c8 = puVar12[3];
    uStack_d0 = puVar12[2];
    uStack_b8 = puVar12[5];
    uStack_c0 = puVar12[4];
    lStack_a8 = puVar12[7];
    uStack_b0 = puVar12[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar12[7] != 0) {
      piVar16 = (int *)(puVar12[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar12[9];
      uStack_88 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_e0 = (undefined4 *)((ulong)uStack_e0 & 0xffffffff);
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_2 + 2);
    uStack_100 = (ulong)&uStack_140 | 8;
    uStack_138 = puVar13[1];
    uStack_140 = *puVar13;
    uStack_128 = puVar13[3];
    uStack_130 = puVar13[2];
    uStack_118 = puVar13[5];
    uStack_120 = puVar13[4];
    uStack_108 = puVar13[7];
    uStack_110 = puVar13[6];
    puStack_f8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (puVar13[7] != 0) {
      piVar16 = (int *)(puVar13[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_f0 = *(undefined8 *)puVar13[9];
      uStack_e8 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_140 = uStack_140 & 0xffffffff;
      func_0x000109a84868(&uStack_140);
    }
  }
  else {
    FUN_109a8a180(&uStack_140,param_2,0xffffffff);
  }
  uVar19 = uStack_a0;
  uVar6 = uStack_e0._4_4_;
  FUN_109a8b904(param_2,0xffffffff);
  iVar1 = uVar4 + 1;
  FUN_109a8727c(param_3,uVar6,uVar19,((uint)param_2 & 7 | iVar1 * 8) - 8,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_3 + 2);
    piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
    uStack_198 = puVar13[1];
    uStack_1a0 = *puVar13;
    uStack_188 = puVar13[3];
    uStack_190 = puVar13[2];
    uStack_178 = puVar13[5];
    uStack_180 = puVar13[4];
    uStack_168 = puVar13[7];
    uStack_170 = puVar13[6];
    puStack_158 = &uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    if (puVar13[7] != 0) {
      piVar16 = (int *)(puVar13[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_150 = *(undefined8 *)puVar13[9];
      uStack_148 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      func_0x000109a84868(&uStack_1a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1a0,param_3,0xffffffff);
  }
  FUN_109a8d7e8(param_1,0xffffffff);
  if ((int)param_1 < 3) {
    puStack_70 = (undefined8 *)0x0;
    plStack_68 = (long *)0x0;
    bStack_80 = 0;
    plVar10 = (long *)0x30;
    __Znwm();
    *plVar10 = (long)&PTR_DAT_110b21b30;
    plVar10[1] = (long)&bStack_80;
    plVar10[2] = (long)&uStack_e0;
    plVar10[3] = (long)&uStack_140;
    puVar15 = (&PTR_FUN_110b21820)[uStack_140 & 7];
    plVar10[4] = (long)&uStack_1a0;
    plVar10[5] = (long)puVar15;
    bStack_80 = (int)(uStack_140 & 7) != 7;
    puVar12 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_110b21b70;
    puVar12[2] = plVar10;
    puStack_1e0 = (undefined8 *)0x0;
    uStack_1d8 = 0;
    puStack_70 = puVar12;
    plStack_68 = plVar10;
    FUN_109a46f6c(&puStack_1e0);
    if (bStack_80 != 1) {
LAB_109a424c8:
      FUN_109a46f6c(&puStack_70);
      goto LAB_109a424d0;
    }
    uVar19 = (ulong)uStack_1a0._4_4_;
    puStack_1e0 = (undefined8 *)(uStack_198 << 0x20);
    if ((int)uStack_1a0._4_4_ < 3) {
      uVar17 = (long)uStack_198._4_4_ * (long)(int)uStack_198;
      if (0x3ffff < uVar17) goto LAB_109a422f4;
LAB_109a422c8:
      (**(code **)(*plVar10 + 0x10))(plVar10,&puStack_1e0);
    }
    else {
      uVar18 = 1;
      piVar16 = piStack_160;
      uVar17 = uVar19;
      do {
        uVar18 = uVar18 * (long)*piVar16;
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 1;
      } while (uVar17 != 0);
      if (uVar18 < 0x40000) goto LAB_109a422c8;
      uVar17 = 1;
      piVar16 = piStack_160;
      do {
        uVar17 = uVar17 * (long)*piVar16;
        uVar19 = uVar19 - 1;
        piVar16 = piVar16 + 1;
      } while (uVar19 != 0);
LAB_109a422f4:
      uVar17 = uVar17 >> 0x10;
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      func_0x000109aa87cc((double)uVar17,&puStack_1e0,plVar10);
    }
    if ((bStack_80 & 1) == 0) goto LAB_109a424c8;
    FUN_109a46f6c(&puStack_70);
LAB_109a42320:
    if (uStack_168 != 0) {
      piVar16 = (int *)(uStack_168 + 0x14);
      do {
        iVar1 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a0);
      }
    }
    uStack_168 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    if (0 < (int)uStack_1a0._4_4_) {
      lVar14 = 0;
      do {
        piStack_160[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_1a0._4_4_);
    }
    if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
      _free(puStack_158[-1]);
    }
    if (uStack_108 != 0) {
      piVar16 = (int *)(uStack_108 + 0x14);
      do {
        iVar1 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_140);
      }
    }
    uStack_108 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    if (0 < uStack_140._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_100 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_140._4_4_);
    }
    if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
      _free(puStack_f8[-1]);
    }
    if (lStack_a8 != 0) {
      piVar16 = (int *)(lStack_a8 + 0x14);
      do {
        iVar1 = *piVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(&uStack_e0);
      }
    }
    lStack_a8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if (0 < uStack_e0._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_a0 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_e0._4_4_);
    }
    if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
      _free(puStack_98[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_109a424d0:
    if ((int)(uStack_140 & 7) != 7) {
      pcVar7 = (code *)(&PTR_FUN_110b21820)[uStack_140 & 7];
      puStack_70 = &uStack_e0;
      plStack_68 = &uStack_1a0;
      uStack_60 = 0;
      uStack_1a8 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      puStack_1e0 = (undefined8 *)0x0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      FUN_109a9b368(&puStack_1e0,&puStack_70,0,&bStack_80,0xffffffff);
      uVar17 = uStack_1b8 & 0xffffffff;
      uVar19 = 0xffffffffffffffff;
      while (uVar19 = uVar19 + 1, uVar19 < uStack_1c0) {
        (*pcVar7)(CONCAT71(uStack_7f,bStack_80),uStack_130,uStack_78,uVar17,iVar1,uVar5 + 1);
        FUN_109a8350c(&puStack_1e0);
      }
      goto LAB_109a42320;
    }
  }
  puVar11 = (undefined4 *)0x10;
  func_0x000107c2ae8c();
  puStack_1e0 = (undefined8 *)(puVar11 + 1);
  *puStack_1e0 = 0x203d2120636e7566;
  *puVar11 = 1;
  uStack_1d8 = 9;
  *(undefined2 *)(puVar11 + 3) = 0x30;
  FUN_109ac3188(0xffffff29,&puStack_1e0,&DAT_10f595f5d,&UNK_10f595cf9,0x146e);
LAB_109a42638:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109a4263c);
  (*pcVar7)();
}



/* Entry: 109a42708; end: 109a42cd3;  */

void FUN_109a42708(double param_1,double param_2,uint *param_3,uint *param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  double *pdVar10;
  int iVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined4 auStack_1c8 [2];
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar11 = (int)param_5;
  if (iVar11 - 1U < 2 || iVar11 == 4) {
    dVar13 = param_1;
    FUN_109ab9654(param_3,param_5,param_7);
    param_1 = param_1 / dVar13;
    dVar14 = 0.0;
    if (dVar13 <= 2.220446049250313e-16) {
      param_1 = 0.0;
    }
  }
  else {
    if (iVar11 != 0x20) goto LAB_109a42bf0;
    uStack_f0 = (undefined4 *)0x0;
    uStack_150 = 0.0;
    dVar14 = param_2;
    if (param_1 == param_2 || param_2 > param_1) {
      dVar14 = param_1;
    }
    if (param_2 <= param_1) {
      param_2 = param_1;
    }
    FUN_109ab9538(param_3,&uStack_f0,&uStack_150,0,0,param_7);
    param_1 = 1.0 / (uStack_150 - (double)uStack_f0);
    if (uStack_150 - (double)uStack_f0 <= 2.220446049250313e-16) {
      param_1 = 0.0;
    }
    param_1 = (param_2 - dVar14) * param_1;
    dVar14 = dVar14 - param_1 * (double)uStack_f0;
  }
  puVar6 = param_3;
  FUN_109a8b904(param_3,0xffffffff);
  if ((int)param_6 < 0) {
    if ((int)*param_4 < 0) {
      puVar7 = param_4;
      FUN_109a8b904(param_4,0xffffffff);
      param_6 = (ulong)((uint)puVar7 & 7);
    }
    else {
      param_6 = (ulong)((uint)puVar6 & 7);
    }
  }
  puVar7 = param_3;
  FUN_109a8d1f0(param_3,&uStack_f0,0xffffffff);
  FUN_109a8727c(param_4,puVar7,&uStack_f0,(uint)param_6 & 7 | (uint)puVar6 & 0xff8,0xffffffff,0,0);
  if ((*param_3 & 0x1f0000) == 0x10000) {
    pdVar10 = *(double **)(param_3 + 2);
    uStack_b0 = (ulong)&uStack_f0 | 8;
    dStack_e8 = pdVar10[1];
    uStack_f0 = (undefined4 *)*pdVar10;
    dStack_d8 = pdVar10[3];
    dStack_e0 = pdVar10[2];
    dStack_c8 = pdVar10[5];
    dStack_d0 = pdVar10[4];
    dStack_b8 = pdVar10[7];
    dStack_c0 = pdVar10[6];
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (pdVar10[7] != 0.0) {
      piVar1 = (int *)((long)pdVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)pdVar10 + 4) < 3) {
      uStack_a0 = *(undefined8 *)pdVar10[9];
      uStack_98 = ((undefined8 *)pdVar10[9])[1];
    }
    else {
      uStack_f0 = (undefined4 *)((ulong)uStack_f0 & 0xffffffff);
      func_0x000109a84868(&uStack_f0);
    }
  }
  else {
    FUN_109a8a180(&uStack_f0,param_3,0xffffffff);
  }
  if ((*param_4 & 0x1f0000) == 0x10000) {
    pdVar10 = *(double **)(param_4 + 2);
    dStack_148 = pdVar10[1];
    uStack_150 = *pdVar10;
    dStack_138 = pdVar10[3];
    dStack_140 = pdVar10[2];
    dStack_128 = pdVar10[5];
    dStack_130 = pdVar10[4];
    dStack_118 = pdVar10[7];
    dStack_120 = pdVar10[6];
    uStack_110 = (ulong)&uStack_150 | 8;
    puStack_108 = &uStack_100;
    uStack_100 = 0;
    uStack_f8 = 0;
    if (pdVar10[7] != 0.0) {
      piVar1 = (int *)((long)pdVar10[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)pdVar10 + 4) < 3) {
      uStack_100 = *(undefined8 *)pdVar10[9];
      uStack_f8 = ((undefined8 *)pdVar10[9])[1];
    }
    else {
      uStack_150 = (double)((ulong)uStack_150 & 0xffffffff);
      func_0x000109a84868(&uStack_150);
    }
  }
  else {
    FUN_109a8a180(&uStack_150,param_4,0xffffffff);
  }
  uVar8 = param_7;
  FUN_109a8e1c4();
  if ((int)uVar8 == 0) {
    uStack_1b0 = 0x42ff0000;
    puStack_1c0 = (undefined8 *)&uStack_1b0;
    uStack_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    iStack_1ac = 0;
    uStack_1a8._0_4_ = 0;
    puStack_170 = &uStack_1a8;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_19c = 0;
    uStack_198 = 0;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    auStack_1c8[0] = 0x2010000;
    uStack_1b8 = 0;
    puStack_168 = &uStack_160;
    FUN_109a41858(param_1,dVar14,&uStack_f0,auStack_1c8,param_6);
    auStack_1c8[0] = 0x2010000;
    puStack_1c0 = &uStack_150;
    uStack_1b8 = 0;
    FUN_109a4813c(&uStack_1b0,auStack_1c8,param_7);
    if (lStack_178 != 0) {
      piVar1 = (int *)(lStack_178 + 0x14);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(&uStack_1b0);
      }
    }
    puVar4 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    lStack_178 = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    if (0 < iStack_1ac) {
      lVar12 = 0;
      do {
        *(undefined4 *)((long)puStack_170 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iStack_1ac);
    }
    if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
      _free(puStack_168[-1]);
      puVar4 = (undefined8 *)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    }
  }
  else {
    uStack_1b0 = 0x2010000;
    uStack_1a8 = &uStack_150;
    uStack_1a0 = 0;
    uStack_19c = 0;
    FUN_109a41858(param_1,dVar14,&uStack_f0,&uStack_1b0,param_6);
    puVar4 = uStack_1a8;
  }
  uStack_1a8 = puVar4;
  if (dStack_118 != 0.0) {
    piVar1 = (int *)((long)dStack_118 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_150);
    }
  }
  dStack_118 = 0.0;
  dStack_138 = 0.0;
  dStack_140 = 0.0;
  dStack_128 = 0.0;
  dStack_130 = 0.0;
  if (0 < uStack_150._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_110 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_150._4_4_);
  }
  if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
    _free(puStack_108[-1]);
  }
  if (dStack_b8 != 0.0) {
    piVar1 = (int *)((long)dStack_b8 + 0x14);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_f0);
    }
  }
  dStack_b8 = 0.0;
  dStack_d8 = 0.0;
  dStack_e0 = 0.0;
  dStack_c8 = 0.0;
  dStack_d0 = 0.0;
  if (0 < uStack_f0._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_b0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_f0._4_4_);
  }
  if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
    _free(puStack_a8[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109a42bf0:
  puVar9 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_f0 = puVar9 + 1;
  dStack_e8 = 1.43279037293961e-322;
  *(undefined1 *)((long)puVar9 + 0x21) = 0;
  *(undefined8 *)(puVar9 + 3) = 0x726f707075736e75;
  *(undefined8 *)(puVar9 + 1) = 0x2f6e776f6e6b6e55;
  *(undefined8 *)((long)puVar9 + 0x19) = 0x65707974206d726f;
  *(undefined8 *)((long)puVar9 + 0x11) = 0x6e20646574726f70;
  FUN_109ac3188(0xfffffffb,&uStack_f0,&UNK_10f491784,&UNK_10f595cf9,0x14e9);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a42c50);
  (*pcVar5)();
}



/* Entry: 109a42cd4; end: 109a42fa7;  */

void FUN_109a42cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  undefined4 *puStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  int *piStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  int iStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  int *piStack_50;
  undefined1 *puStack_48;
  undefined1 auStack_40 [16];
  
  FUN_109a85f44(&uStack_90,param_3,0,1,0,0);
  FUN_109a85f44(&uStack_f0,param_4,0,1,0,0);
  uVar2 = piStack_50[-1];
  uVar10 = (ulong)uVar2;
  if (uVar2 == piStack_b0[-1]) {
    if (uVar2 == 2) {
      if ((*piStack_50 != *piStack_b0) || (piStack_50[1] != piStack_b0[1])) goto LAB_109a42ed8;
    }
    else {
      piVar7 = piStack_50;
      piVar9 = piStack_b0;
      if (0 < (int)uVar2) {
        do {
          if (*piVar7 != *piVar9) goto LAB_109a42ed8;
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar10 != 0);
      }
    }
    if (((uStack_f0 ^ uStack_90) & 0xff8) == 0) {
      puStack_108 = (undefined4 *)CONCAT44(puStack_108._4_4_,0x2010000);
      puStack_100 = &uStack_f0;
      uStack_f8 = 0;
      FUN_109a41858(param_1,param_2,&uStack_90,&puStack_108,uStack_f0 & 0xfff);
      if (lStack_b8 != 0) {
        piVar7 = (int *)(lStack_b8 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      lStack_b8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      if (0 < iStack_ec) {
        lVar8 = 0;
        do {
          piStack_b0[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_ec);
      }
      if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_a8 + -8));
      }
      if (lStack_58 != 0) {
        piVar7 = (int *)(lStack_58 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_90);
        }
      }
      lStack_58 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      if (0 < iStack_8c) {
        lVar8 = 0;
        do {
          piStack_50[lVar8] = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iStack_8c);
      }
      if (puStack_48 != auStack_40 && puStack_48 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_48 + -8));
      }
      return;
    }
  }
LAB_109a42ed8:
  puVar6 = (undefined4 *)0x40;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  puStack_108 = puVar6 + 1;
  puStack_100 = (uint *)0x38;
  *(undefined8 *)(puVar6 + 3) = 0x2e747364203d3d20;
  *(undefined8 *)(puVar6 + 1) = 0x657a69732e637273;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  *(undefined8 *)(puVar6 + 7) = 0x6e6168632e637273;
  *(undefined8 *)(puVar6 + 5) = 0x20262620657a6973;
  *(undefined8 *)(puVar6 + 0xb) = 0x68632e747364203d;
  *(undefined8 *)(puVar6 + 9) = 0x3d202928736c656e;
  *(undefined8 *)(puVar6 + 0xd) = 0x2928736c656e6e61;
  FUN_109ac3188(0xffffff29,&puStack_108,&UNK_10f595fb8,&UNK_10f595cf9,0x1563);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a42f48);
  (*pcVar5)();
}



/* Entry: 109a42fa8; end: 109a43323;  */

void FUN_109a42fa8(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  
  if (0 < (int)param_6) {
    uVar4 = 0;
    uVar3 = param_5 - 2;
    iVar1 = (uVar3 & 0xfffffffe) + 2;
    do {
      puVar9 = *(undefined1 **)(param_1 + uVar4 * 8);
      puVar5 = *(undefined1 **)(param_3 + uVar4 * 8);
      iVar10 = *(int *)(param_4 + uVar4 * 4);
      lVar7 = (long)iVar10;
      if (puVar9 == (undefined1 *)0x0) {
        if (param_5 < 2) {
          iVar6 = 0;
        }
        else {
          iVar8 = 0;
          do {
            puVar5[lVar7] = 0;
            *puVar5 = 0;
            iVar8 = iVar8 + 2;
            puVar5 = puVar5 + (iVar10 << 1);
            iVar6 = iVar1;
          } while (iVar8 <= (int)uVar3);
        }
        if (iVar6 < param_5) {
          *puVar5 = 0;
        }
      }
      else {
        if (param_5 < 2) {
          iVar6 = 0;
        }
        else {
          iVar10 = 0;
          iVar8 = *(int *)(param_2 + uVar4 * 4);
          do {
            uVar2 = puVar9[iVar8];
            *puVar5 = *puVar9;
            puVar5[lVar7] = uVar2;
            iVar10 = iVar10 + 2;
            puVar9 = puVar9 + (iVar8 << 1);
            puVar5 = puVar5 + lVar7 * 2;
            iVar6 = iVar1;
          } while (iVar10 <= (int)uVar3);
        }
        if (iVar6 < param_5) {
          *puVar5 = *puVar9;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_6);
  }
  return;
}



/* Entry: 109a43324; end: 109a4339b;  */

long * FUN_109a43324(long *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0x50;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x50;
  func_0x000109a433f4();
  param_1[1] = lVar1 + 0x50;
  return param_1;
}



/* Entry: 109a4339c; end: 109a433af;  */

undefined1  [16] FUN_109a4339c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0x333333333333334) {
    lVar5 = (long)param_2 * 0x50;
    __Znwm(lVar5);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar5;
    return auVar9;
  }
  func_0x000104c4f740();
  uVar8 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar8;
  puVar4[2] = param_2[2];
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_2 + 3);
  lVar5 = param_2[4];
  uVar8 = param_2[5];
  puVar4[4] = lVar5;
  puVar4[5] = uVar8;
  puVar4[8] = 0;
  puVar4[6] = puVar4 + 1;
  puVar4[7] = puVar4 + 8;
  puVar4[9] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar6 = (undefined8 *)param_2[7];
    puVar7 = (undefined8 *)puVar4[7];
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)puVar4 + 4) = 0;
    FUN_109ac55cc(puVar4);
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 109a433b0; end: 109a434ef;  */

undefined1  [16] FUN_109a433b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 < (undefined8 *)0x333333333333334) {
    lVar4 = (long)param_2 * 0x50;
    __Znwm(lVar4);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000104c4f740();
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  lVar4 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = lVar4;
  param_1[5] = uVar7;
  param_1[8] = 0;
  param_1[6] = param_1 + 1;
  param_1[7] = param_1 + 8;
  param_1[9] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[7];
    puVar6 = (undefined8 *)param_1[7];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    FUN_109ac55cc(param_1);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 109a434f0; end: 109a4665f;  */

void FUN_109a434f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,int *param_7,double *param_8)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar4 = param_7[1];
  if (iVar4 != 0) {
    iVar3 = *param_7;
    fVar8 = (float)*param_8;
    fVar9 = (float)param_8[1];
    do {
      if (iVar3 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          pbVar1 = (byte *)(param_1 + uVar5);
          fVar10 = (float)NEON_ucvtf((uint)*pbVar1);
          uVar7 = (uint)(long)(float)(int)(fVar9 + fVar8 * fVar10);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          fVar10 = (float)NEON_ucvtf((uint)pbVar1[1]);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          uVar6 = (uint)(long)(float)(int)(fVar9 + fVar8 * fVar10);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          puVar2 = (undefined1 *)(param_5 + uVar5);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar2 = (char)uVar7;
          puVar2[1] = (char)uVar6;
          fVar10 = (float)NEON_ucvtf((uint)pbVar1[2]);
          uVar7 = (uint)(long)(float)(int)(fVar9 + fVar8 * fVar10);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          fVar10 = (float)NEON_ucvtf((uint)pbVar1[3]);
          uVar6 = (uint)(long)(float)(int)(fVar9 + fVar8 * fVar10);
          uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar2[2] = (char)uVar7;
          puVar2[3] = (char)uVar6;
          uVar5 = uVar5 + 4;
        } while ((long)uVar5 <= (long)iVar3 + -4);
        uVar5 = uVar5 & 0xffffffff;
      }
      if ((int)uVar5 < iVar3) {
        do {
          fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + uVar5));
          uVar7 = (uint)(long)(float)(int)(fVar9 + fVar8 * fVar10);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar7) {
            uVar7 = 0xff;
          }
          *(char *)(param_5 + uVar5) = (char)uVar7;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)iVar3);
      }
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* Entry: 109a46660; end: 109a468d3;  */

void FUN_109a46660(long param_1,uint *param_2)

{
  uint **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint **ppuVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong in_x5;
  long lVar16;
  long lVar17;
  uint *puVar18;
  undefined1 *puVar19;
  uint **ppuVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  int iStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 *puStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar8 = (uint *)&uStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = *param_2;
  uStack_12c = param_2[1];
  uVar7 = *(undefined8 *)param_2;
  uStack_170 = 0x7fffffff80000000;
  FUN_109a84930(&uStack_d0,*(undefined8 *)(param_1 + 0x10),&uStack_130,&uStack_170);
  puStack_60 = (uint *)0x7fffffff80000000;
  uStack_170 = uVar7;
  FUN_109a84930(&uStack_130,*(undefined8 *)(param_1 + 0x20),&uStack_170,&puStack_60);
  uVar4 = **(uint **)(param_1 + 0x18);
  puStack_60 = &uStack_d0;
  uStack_50 = 0;
  uStack_138 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  ppuVar9 = &puStack_60;
  puVar12 = &uStack_70;
  puVar10 = (undefined1 *)0x0;
  uVar14 = 0xffffffff;
  puStack_58 = &uStack_130;
  FUN_109a9b368();
  puVar21 = (undefined8 *)(uStack_148 & 0xffffffff);
  uVar22 = 0xffffffffffffffff;
  while( true ) {
    iVar15 = (int)in_x5;
    uVar13 = (uint)uVar14;
    iVar11 = (int)puVar12;
    uVar22 = uVar22 + 1;
    if (uStack_150 <= uVar22) break;
    ppuVar9 = *(uint ***)(*(long *)(param_1 + 0x18) + 0x10);
    uVar14 = (ulong)((uStack_d0 >> 3 & 0x1ff) + 1);
    in_x5 = (ulong)((uVar4 >> 3 & 0x1ff) + 1);
    puVar10 = puStack_68;
    puVar12 = puVar21;
    (**(code **)(param_1 + 0x28))(uStack_70);
    puVar8 = (uint *)&uStack_170;
    FUN_109a8350c();
  }
  if (lStack_f8 != 0) {
    piVar2 = (int *)(lStack_f8 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      puVar8 = &uStack_130;
      func_0x000109a848d4();
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < (int)uStack_12c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_f0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_12c);
  }
  if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined1 *)0x0) {
    puVar8 = *(uint **)(puStack_e8 + -8);
    _free();
  }
  if (lStack_98 != 0) {
    piVar2 = (int *)(lStack_98 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      puVar8 = &uStack_d0;
      func_0x000109a848d4();
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < iStack_cc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_cc);
  }
  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
    puVar8 = *(uint **)(puStack_88 + -8);
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_130);
    func_0x00010567aa40(&uStack_d0);
  }
  __Unwind_Resume();
  uVar4 = uVar13 * iVar11;
  uVar22 = (ulong)uVar4;
  if (iVar15 == 1) {
    if (0 < (int)uVar4) {
      do {
        *puVar10 = *(undefined1 *)((long)ppuVar9 + (ulong)(byte)*puVar8);
        uVar22 = uVar22 - 1;
        puVar8 = (uint *)((long)puVar8 + 1);
        puVar10 = puVar10 + 1;
      } while (uVar22 != 0);
    }
  }
  else if (0 < (int)uVar4) {
    lVar16 = 0;
    lVar17 = (long)(int)uVar13;
    do {
      puVar18 = puVar8;
      puVar19 = puVar10;
      ppuVar20 = ppuVar9;
      uVar14 = (ulong)uVar13;
      if (0 < (int)uVar13) {
        do {
          ppuVar1 = (uint **)((long)ppuVar20 + (ulong)uVar13 * (ulong)(byte)*puVar18);
          ppuVar20 = (uint **)((long)ppuVar20 + 1);
          *puVar19 = *(undefined1 *)ppuVar1;
          uVar14 = uVar14 - 1;
          puVar18 = (uint *)((long)puVar18 + 1);
          puVar19 = puVar19 + 1;
        } while (uVar14 != 0);
      }
      lVar16 = lVar16 + lVar17;
      puVar10 = puVar10 + lVar17;
      puVar8 = (uint *)((long)puVar8 + lVar17);
    } while (lVar16 < (long)uVar22);
  }
  return;
}



/* Entry: 109a468d4; end: 109a46c7f;  */

void FUN_109a468d4(byte *param_1,long param_2,undefined1 *param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = param_5 * param_4;
  uVar3 = (ulong)uVar2;
  if (param_6 == 1) {
    if (0 < (int)uVar2) {
      do {
        *param_3 = *(undefined1 *)(param_2 + (ulong)*param_1);
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (0 < (int)uVar2) {
    lVar4 = 0;
    lVar5 = (long)(int)param_5;
    do {
      pbVar6 = param_1;
      puVar7 = param_3;
      lVar8 = param_2;
      uVar9 = (ulong)param_5;
      if (0 < (int)param_5) {
        do {
          puVar1 = (undefined1 *)(lVar8 + (ulong)param_5 * (ulong)*pbVar6);
          lVar8 = lVar8 + 1;
          *puVar7 = *puVar1;
          uVar9 = uVar9 - 1;
          pbVar6 = pbVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 != 0);
      }
      lVar4 = lVar4 + lVar5;
      param_3 = param_3 + lVar5;
      param_1 = param_1 + lVar5;
    } while (lVar4 < (long)uVar3);
  }
  return;
}



/* Entry: 109a46c80; end: 109a46deb;  */

void FUN_109a46c80(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if ((ulong)param_1[1] < param_2) {
    puVar10 = (undefined8 *)*param_1;
    if (puVar10 != param_1 + 2) {
      if (puVar10 != (undefined8 *)0x0) {
        if (puVar10[-1] != 0) {
          puVar11 = puVar10 + puVar10[-1] * 0xc;
          do {
            puVar9 = puVar11 + -0xc;
            if (puVar11[-5] != 0) {
              piVar1 = (int *)(puVar11[-5] + 0x14);
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
                func_0x000109a848d4(puVar9);
              }
            }
            puVar11[-5] = 0;
            puVar11[-9] = 0;
            puVar11[-10] = 0;
            puVar11[-7] = 0;
            puVar11[-8] = 0;
            if (0 < *(int *)((long)puVar11 + -0x5c)) {
              lVar6 = 0;
              lVar8 = puVar11[-4];
              do {
                *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
                lVar6 = lVar6 + 1;
              } while (lVar6 < *(int *)((long)puVar11 + -0x5c));
            }
            puVar7 = (undefined8 *)puVar11[-3];
            if (puVar7 != puVar11 + -2 && puVar7 != (undefined8 *)0x0) {
              _free(puVar7[-1]);
            }
            puVar11 = puVar9;
          } while (puVar9 != puVar10);
        }
        __ZdaPv(puVar10 + -2);
      }
      *param_1 = param_1 + 2;
      param_1[1] = 0x12;
    }
    if (param_2 < 0x13) {
      return;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    puVar10 = (undefined8 *)(param_2 * 0x60 | 0x10);
    if (SUB168(auVar5 * ZEXT816(0x60),8) != 0) {
      puVar10 = (undefined8 *)0xffffffffffffffff;
    }
    __Znam();
    *puVar10 = 0x60;
    puVar10[1] = param_2;
    lVar6 = param_2 * 0x60;
    puVar11 = puVar10;
    do {
      puVar9 = puVar11 + 0xc;
      *(undefined4 *)(puVar11 + 2) = 0x42ff0000;
      *(undefined8 *)((long)puVar11 + 0x1c) = 0;
      *(undefined8 *)((long)puVar11 + 0x14) = 0;
      *(undefined8 *)((long)puVar11 + 0x2c) = 0;
      *(undefined8 *)((long)puVar11 + 0x24) = 0;
      *(undefined8 *)((long)puVar11 + 0x3c) = 0;
      *(undefined8 *)((long)puVar11 + 0x34) = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[10] = puVar11 + 3;
      puVar11[0xb] = puVar9;
      *puVar9 = 0;
      puVar11[0xd] = 0;
      lVar6 = lVar6 + -0x60;
      puVar11 = puVar9;
    } while (lVar6 != 0);
    *param_1 = puVar10 + 2;
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 109a46dec; end: 109a46f6b;  */

long * FUN_109a46dec(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  if ((long *)lVar8 != param_1 + 2) {
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + -8) != 0) {
        lVar9 = lVar8 + *(long *)(lVar8 + -8) * 0x60;
        do {
          lVar7 = lVar9 + -0x60;
          if (*(long *)(lVar9 + -0x28) != 0) {
            piVar1 = (int *)(*(long *)(lVar9 + -0x28) + 0x14);
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
              func_0x000109a848d4(lVar7);
            }
          }
          *(undefined8 *)(lVar9 + -0x28) = 0;
          *(undefined8 *)(lVar9 + -0x48) = 0;
          *(undefined8 *)(lVar9 + -0x50) = 0;
          *(undefined8 *)(lVar9 + -0x38) = 0;
          *(undefined8 *)(lVar9 + -0x40) = 0;
          if (0 < *(int *)(lVar9 + -0x5c)) {
            lVar5 = 0;
            lVar6 = *(long *)(lVar9 + -0x20);
            do {
              *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
              lVar5 = lVar5 + 1;
            } while (lVar5 < *(int *)(lVar9 + -0x5c));
          }
          lVar5 = *(long *)(lVar9 + -0x18);
          if (lVar5 != lVar9 + -0x10 && lVar5 != 0) {
            _free(*(undefined8 *)(lVar5 + -8));
          }
          lVar9 = lVar7;
        } while (lVar7 != lVar8);
      }
      __ZdaPv(lVar8 + -0x10);
    }
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0x12;
  }
  lVar8 = 0x6d0;
  do {
    lVar8 = lVar8 + -0x60;
    lVar9 = (long)param_1 + lVar8;
    if (*(long *)(lVar9 + 0x38) != 0) {
      piVar1 = (int *)(*(long *)(lVar9 + 0x38) + 0x14);
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
        func_0x000109a848d4(lVar9);
      }
    }
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if (0 < *(int *)(lVar9 + 4)) {
      lVar7 = 0;
      lVar5 = *(long *)(lVar9 + 0x40);
      do {
        *(undefined4 *)(lVar5 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + 4));
    }
    lVar7 = *(long *)(lVar9 + 0x48);
    if (lVar7 != lVar9 + 0x50 && lVar7 != 0) {
      _free(*(undefined8 *)(lVar7 + -8));
    }
  } while (lVar8 != 0x10);
  return param_1;
}


