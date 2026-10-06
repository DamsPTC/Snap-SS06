/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100200dd4; end: 100200e67;  */

void FUN_100200dd4(long *param_1,undefined1 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 == (undefined8 *)0x0) {
    if ((param_4 != ((*(ushort *)(param_1[1] + 0xe9) & 0x200) == 0)) &&
       (*(long *)(*param_1 + 0x98) != 0)) {
      *param_2 = 0x6d;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(*param_1 + 0x30) + 0x238);
    uVar2 = *param_3;
    lVar3 = param_3[1];
    puVar4 = puVar1;
    FUN_1001e6684(puVar1,lVar3);
    if (lVar3 != 0 && (int)puVar4 != 0) {
      func_0x000107c610b4(*puVar1,uVar2,lVar3);
    }
  }
  return;
}



/* Entry: 100200e68; end: 100200e7b;  */

void FUN_100200e68(long *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_3 == (undefined8 *)0x0) {
    if (((*(ushort *)(param_1[1] + 0xe9) & 0x200) != 0) && (*(long *)(*param_1 + 0x98) != 0)) {
      *param_2 = 0x6d;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(*param_1 + 0x30) + 0x238);
    uVar2 = *param_3;
    lVar3 = param_3[1];
    puVar4 = puVar1;
    FUN_1001e6684(puVar1,lVar3);
    if (lVar3 != 0 && (int)puVar4 != 0) {
      func_0x000107c610b4(*puVar1,uVar2,lVar3);
    }
  }
  return;
}



/* Entry: 100200e7c; end: 100200f4f;  */

undefined8 FUN_100200e7c(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = (uint)*param_1;
    FUN_1001fa5c4();
    if (uVar2 < 0x304) {
      *param_2 = 0x6e;
      FUN_1004d2c58(0x10,0,0xde,&UNK_10f6cfd23,0xbb4);
      uVar3 = 0;
    }
    else {
      lVar5 = param_1[0xbb];
      uVar3 = *param_3;
      lVar1 = param_3[1];
      uVar4 = lVar5 + 0x1a0;
      FUN_1001e6684(uVar4,lVar1);
      if ((lVar1 != 0) && ((int)uVar4 != 0)) {
        func_0x000107c610b4(*(undefined8 *)(lVar5 + 0x1a0),uVar3,lVar1);
      }
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
        *param_2 = 0x50;
      }
      else {
        *(byte *)(param_1[0xbb] + 0x1b0) = *(byte *)(param_1[0xbb] + 0x1b0) | 0x40;
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  return 1;
}



/* Entry: 100200f50; end: 10020183f;  */

undefined1 * FUN_100200f50(long *param_1,long param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  byte **ppbVar6;
  byte *pbVar7;
  ushort **ppuVar8;
  char *pcVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  long **pplVar17;
  undefined8 uVar18;
  ushort *puVar19;
  ushort *puVar20;
  byte bVar21;
  long lVar22;
  undefined *puVar23;
  long **unaff_x19;
  long lVar24;
  undefined1 *puVar25;
  long **unaff_x23;
  long **pplVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 auStack_140 [16];
  long *plStack_130;
  long *plStack_128;
  long **pplStack_120;
  long **pplStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  long **pplStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  uint uStack_e0;
  undefined1 uStack_d9;
  undefined2 uStack_d8;
  byte bStack_d6;
  char cStack_d5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  ulong uStack_b0;
  ushort *puStack_a8;
  ulong uStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined2 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *param_1;
  puVar19 = *(ushort **)(param_2 + 8);
  pplVar10 = *(long ***)(param_2 + 0x10);
  if (*(char *)(param_2 + 1) == '\x19') {
    if ((pplVar10 < (long **)0x2) || ((undefined *)((long)pplVar10 + -2) < (undefined *)0x3)) {
LAB_1002010d8:
      func_0x000107c2b730(lVar24,2,0x32);
      pplVar10 = (long **)0x10;
      FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d12c1,0x7b);
    }
    else {
      lVar22 = 0;
      unaff_x23 = (long **)0x0;
      uVar3 = (uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8;
      pplVar26 = (long **)(ulong)uVar3;
      do {
        uVar2 = (uint)*(byte *)((long)puVar19 + lVar22 + 2) | (int)unaff_x23 << 8;
        unaff_x23 = (long **)(ulong)uVar2;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
      if ((undefined *)((long)pplVar10 + -5) < (undefined *)0x3) goto LAB_1002010d8;
      lVar22 = 0;
      pplVar17 = (long **)0x0;
      do {
        pplVar17 = (long **)((ulong)*(byte *)((long)puVar19 + lVar22 + 5) | (long)pplVar17 << 8);
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
      if (pplVar10 + -1 != pplVar17) goto LAB_1002010d8;
      if (*(uint *)(lVar24 + 0x88) < uVar2) {
        func_0x000107c2b730(lVar24,2,0x2f);
        FUN_1004d2c58(0x10,0,0x125,&UNK_10f6d12c1,0x81);
        pplVar10 = (long **)&UNK_10f6d1332;
        pplStack_100 = unaff_x23;
      }
      else {
        lVar22 = *(long *)(*(long *)(lVar24 + 0x68) + 0x278);
        if (lVar22 != 0) {
          puVar20 = (ushort *)(*(long *)(*(long *)(lVar24 + 0x68) + 0x280) + 0x10);
          lVar22 = lVar22 * 0x18;
          do {
            if (*puVar20 == uVar3) {
              if (*(code **)(puVar20 + -4) != (code *)0x0) {
                uStack_c0 = (long **)0x0;
                lVar22 = lVar24;
                (**(code **)(puVar20 + -4))(lVar24,&uStack_c0,unaff_x23,puVar19 + 4);
                unaff_x19 = uStack_c0;
                if ((int)lVar22 == 0) {
                  func_0x000107c2b730(lVar24,2,0x32);
                  FUN_1004d2c58(0x10,0,0x124,&UNK_10f6d12c1,0x9a);
                  pplVar10 = (long **)&UNK_10f6d133f;
                  pplStack_100 = pplVar26;
                  func_0x000107c2b2a4();
                  unaff_x19 = (long **)0x0;
                  goto LAB_100201580;
                }
                if ((long **)uStack_c0[2] != unaff_x23) {
                  func_0x000107c2b730(lVar24,2,0x32);
                  FUN_1004d2c58(0x10,0,0x124,&UNK_10f6d12c1,0xa2);
                  plStack_f8 = uStack_c0[2];
                  pplVar10 = (long **)&UNK_10f6d1346;
                  pplStack_100 = pplVar26;
                  pplStack_f0 = unaff_x23;
                  func_0x000107c2b2a4();
                  goto LAB_100201580;
                }
                puVar19 = (ushort *)uStack_c0[1];
                goto joined_r0x00010020105c;
              }
              break;
            }
            puVar20 = puVar20 + 0xc;
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != 0);
        }
        func_0x000107c2b730(lVar24,2,0x2f);
        FUN_1004d2c58(0x10,0,0x126,&UNK_10f6d12c1,0x91);
        pplVar10 = (long **)&UNK_10f6d133f;
        pplStack_100 = pplVar26;
      }
      func_0x000107c2b2a4();
    }
    puVar25 = (undefined1 *)0x0;
    goto LAB_100201590;
  }
  unaff_x23 = pplVar10;
  unaff_x19 = (long **)0x0;
joined_r0x00010020105c:
  if (unaff_x23 == (long **)0x0) {
LAB_100201554:
    func_0x000107c2b730(lVar24,2,0x32);
    pplVar10 = (long **)0x10;
    FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d12c1,0xb6);
LAB_100201580:
    puVar25 = (undefined1 *)0x0;
  }
  else {
    puVar23 = (undefined *)(ulong)(byte)*puVar19;
    uVar13 = ((long)unaff_x23 + -1) - (long)puVar23;
    if (((undefined *)((long)unaff_x23 + -1) < puVar23) || ((byte)*puVar19 != 0 || uVar13 < 3))
    goto LAB_100201554;
    uVar29 = 0;
    lVar22 = 1;
    do {
      uVar29 = (ulong)*(byte *)((long)puVar19 + (long)(puVar23 + lVar22)) | uVar29 << 8;
      lVar22 = lVar22 + 1;
    } while (lVar22 != 4);
    if (uVar13 - 3 != uVar29) goto LAB_100201554;
    plVar5 = (long *)0x0;
    FUN_1001e2bf4();
    plStack_88 = plVar5;
    if (plVar5 == (long *)0x0) {
      func_0x000107c2b730(lVar24,2,0x50);
      FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d12c1,0xbd);
LAB_1002016ec:
      puVar25 = (undefined1 *)0x0;
    }
    else {
      if ((*(byte *)(lVar24 + 0xa4) & 1) == 0) {
        uStack_e0 = 0;
      }
      else {
        uStack_e0 = *(ushort *)(param_1[1] + 0xe9) >> 5 & 1;
      }
      unaff_x23 = (long **)0x0;
      if (uVar29 == 0) {
LAB_10020143c:
        if (*plStack_88 == 0) goto LAB_100201444;
      }
      else {
        pbVar7 = (byte *)((long)puVar19 + (long)(puVar23 + 4));
        pplVar10 = unaff_x23;
        do {
          if (uVar29 < 3) {
LAB_1002014c4:
            func_0x000107c2b730(lVar24,2,0x32);
            uVar18 = 0xca;
            uVar16 = 0x7f;
LAB_1002016d8:
            FUN_1004d2c58(0x10,0,uVar16,&UNK_10f6d12c1,uVar18);
            unaff_x23 = pplVar10;
LAB_1002016e0:
            if (unaff_x23 != (long **)0x0) {
              FUN_10021f114(unaff_x23);
            }
            goto LAB_1002016ec;
          }
          lVar22 = 0;
          uVar13 = 0;
          do {
            uVar13 = (ulong)pbVar7[lVar22] | uVar13 << 8;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 3);
          uVar28 = (uVar29 - 3) - uVar13;
          if (uVar29 - 3 < uVar13) goto LAB_1002014c4;
          pbStack_98 = pbVar7 + 3;
          uVar4 = uVar28 - 2;
          uStack_90 = uVar13;
          if (uVar28 < 2) goto LAB_1002014c4;
          uVar1 = *(ushort *)(pbStack_98 + uVar13);
          uVar28 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
          uVar29 = uVar4 - uVar28;
          if ((uVar4 < uVar28) ||
             (puVar19 = (ushort *)((long)(pbStack_98 + uVar13) + 2), puStack_a8 = puVar19,
             uStack_a0 = uVar28, uVar13 == 0)) goto LAB_1002014c4;
          if ((plStack_88 == (long *)0x0) || (unaff_x23 = pplVar10, *plStack_88 == 0)) {
            func_0x000100201950(&uStack_c0,&pbStack_98);
            unaff_x23 = uStack_c0;
            uStack_c0 = (long **)0x0;
            if ((pplVar10 != (long **)0x0) && (FUN_10021f114(pplVar10), uStack_c0 != (long **)0x0))
            {
              FUN_10021f114();
            }
            if (unaff_x23 == (long **)0x0) {
              pplVar10 = (long **)0x0;
              func_0x000107c2b730(lVar24,2,0x32);
              uVar18 = 0xd2;
              uVar16 = 0x89;
              goto LAB_1002016d8;
            }
            ppbVar6 = &pbStack_98;
            FUN_100202ed8(ppbVar6,0);
            if (((ulong)ppbVar6 & 1) != 0) {
              if (uStack_e0 != 0) {
                FUN_100237f68(pbStack_98,uStack_90,param_1[0xbb] + 0x110);
              }
              goto LAB_100201254;
            }
            func_0x000107c2b730(lVar24,2,0x2f);
            goto LAB_1002016e0;
          }
LAB_100201254:
          pbVar7 = pbStack_98;
          FUN_10020344c(pbStack_98,uStack_90,0,*(undefined8 *)(*(long *)(lVar24 + 0x68) + 0x2c0));
          pplVar10 = unaff_x23;
          if (pbVar7 == (byte *)0x0) {
LAB_1002016b0:
            func_0x000107c2b730(lVar24,2,0x50);
            uVar16 = 0x41;
            uVar18 = 0xe9;
            goto LAB_1002016d8;
          }
          plVar5 = plStack_88;
          func_0x0001001e2c8c(plStack_88,pbVar7,*plStack_88);
          if (plVar5 == (long *)0x0) {
            FUN_100229fdc(pbVar7);
            goto LAB_1002016b0;
          }
          if ((*(byte *)(lVar24 + 0xa4) & 1) == 0) {
            uStack_c0 = (long **)(CONCAT53(uStack_c0._3_5_,
                                           CONCAT12((char)(*(ushort *)(param_1[1] + 0xe9) >> 2),5))
                                 & 0xffffffffff01ffff);
            uStack_c0._0_4_ = (uint)(uint3)uStack_c0;
            bStack_d6 = (byte)(*(ushort *)(param_1[1] + 0xe9) >> 1) & 1;
          }
          else {
            bStack_d6 = 0;
            uStack_c0 = (long **)CONCAT44(uStack_c0._4_4_,5);
          }
          uStack_b0 = 0;
          pcStack_b8 = (char *)0x0;
          puStack_80 = &uStack_c0;
          uStack_d8 = 0x12;
          cStack_d5 = '\0';
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_d9 = 0x32;
          ppuVar8 = &puStack_a8;
          puStack_78 = &uStack_d8;
          func_0x0001001fa470(ppuVar8,&uStack_d9,&puStack_80,2,0);
          uVar15 = uStack_d9;
          if (((ulong)ppuVar8 & 1) == 0) goto LAB_1002017b8;
          if (uStack_c0._3_1_ != '\x01') goto LAB_1002013c8;
          uVar13 = uStack_b0;
          if (uStack_b0 == 0) {
LAB_10020164c:
            uStack_b0 = uVar13;
            uVar16 = 0x32;
            pcVar9 = pcStack_b8;
            uVar13 = uStack_b0;
LAB_100201650:
            uStack_b0 = uVar13;
            pcStack_b8 = pcVar9;
            func_0x000107c2b730(lVar24,2,uVar16);
            goto LAB_1002016e0;
          }
          uVar16 = 0x32;
          pcVar9 = pcStack_b8 + 1;
          uVar13 = uStack_b0 - 1;
          if ((*pcStack_b8 != '\x01') || (uVar4 = uStack_b0 - 4, uStack_b0 < 4)) goto LAB_100201650;
          uVar14 = 0;
          pcVar9 = pcStack_b8 + 4;
          lVar22 = 1;
          do {
            uVar14 = (ulong)(byte)pcStack_b8[lVar22] | uVar14 << 8;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 4);
          uStack_b0 = uVar4 - uVar14;
          pcStack_b8 = pcVar9;
          uVar13 = uVar4;
          if ((uVar4 < uVar14) ||
             (pcStack_b8 = pcVar9 + uVar14, uVar13 = uStack_b0, uVar14 == 0 || uVar4 != uVar14))
          goto LAB_10020164c;
          if ((plStack_88 != (long *)0x0) && (*plStack_88 == 1)) {
            lVar27 = param_1[0xbb];
            FUN_10020344c(pcVar9,uVar14,0,*(undefined8 *)(*(long *)(lVar24 + 0x68) + 0x2c0));
            lVar22 = *(long *)(lVar27 + 0x108);
            *(char **)(lVar27 + 0x108) = pcVar9;
            if (lVar22 != 0) {
              FUN_100229fdc();
            }
            if (*(long *)(param_1[0xbb] + 0x108) == 0) {
              uVar16 = 0x50;
              pcVar9 = pcStack_b8;
              uVar13 = uStack_b0;
              goto LAB_100201650;
            }
          }
LAB_1002013c8:
          if (cStack_d5 == '\x01') {
            uVar13 = 0;
            func_0x000107c2b6d4();
            if ((uVar13 & 1) == 0) {
              FUN_1004d2c58(0x10,0,0x95,&UNK_10f6d12c1,0x115);
              uVar15 = 0x32;
LAB_1002017b8:
              func_0x000107c2b730(lVar24,2,uVar15);
              goto LAB_1002016e0;
            }
            if ((plStack_88 != (long *)0x0) && (*plStack_88 == 1)) {
              lVar27 = param_1[0xbb];
              uVar16 = uStack_d0;
              FUN_10020344c(uStack_d0,uStack_c8,0,*(undefined8 *)(*(long *)(lVar24 + 0x68) + 0x2c0))
              ;
              lVar22 = *(long *)(lVar27 + 0x100);
              *(undefined8 *)(lVar27 + 0x100) = uVar16;
              if (lVar22 != 0) {
                FUN_100229fdc();
              }
              if (*(long *)(param_1[0xbb] + 0x100) == 0) {
                uVar15 = 0x50;
                goto LAB_1002017b8;
              }
            }
          }
          pbVar7 = (byte *)((long)puVar19 + uVar28);
        } while (uVar29 != 0);
        if (plStack_88 != (long *)0x0) goto LAB_10020143c;
LAB_100201444:
        FUN_1001e3370(&plStack_88,0);
      }
      lVar22 = param_1[0xba];
      param_1[0xba] = (long)unaff_x23;
      if (lVar22 != 0) {
        FUN_10021f114();
      }
      plVar5 = plStack_88;
      plStack_88 = (long *)0x0;
      FUN_1001e3370(param_1[0xbb] + 0x90,plVar5);
      uVar13 = param_1[0xbb];
      (**(code **)(*(long *)(*(long *)(lVar24 + 0x68) + 8) + 0x30))();
      if ((uVar13 & 1) == 0) {
        FUN_1004d2c58(0x10,0,0x89,&UNK_10f6d12c1,0x12f);
        uVar16 = 0x32;
LAB_10020163c:
        func_0x000107c2b730(lVar24,2,uVar16);
        goto LAB_1002016ec;
      }
      lVar22 = param_1[0xbb];
      if ((*(long **)(lVar22 + 0x90) == (long *)0x0) || (**(long **)(lVar22 + 0x90) == 0)) {
        if ((param_3 & 1) == 0) {
          FUN_1004d2c58(0x10,0,0xc0,&UNK_10f6d12c1,0x136);
          uVar16 = 0x74;
          goto LAB_10020163c;
        }
        *(undefined8 *)(lVar22 + 0xb8) = 0;
      }
      else {
        bVar21 = 2;
        if (uStack_e0 == 0) {
          bVar21 = 0;
        }
        *(byte *)(lVar22 + 0x1b0) = *(byte *)(lVar22 + 0x1b0) & 0xfd | bVar21;
      }
      puVar25 = (undefined1 *)0x1;
    }
    pplVar10 = &plStack_88;
    FUN_1001e3370(pplVar10,0);
  }
  if (unaff_x19 != (long **)0x0) {
    pplVar10 = unaff_x19;
    FUN_100229fdc();
  }
LAB_100201590:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (unaff_x23 != (long **)0x0) {
      FUN_10021f114(unaff_x23);
    }
    puVar25 = (undefined1 *)0x0;
    FUN_1001e3370(&plStack_88);
    if (unaff_x19 != (long **)0x0) {
      FUN_100229fdc(unaff_x19);
    }
    pplVar26 = pplVar10;
    func_0x000107c60bd8();
    puVar11 = auStack_140;
    uStack_108 = 0x100201840;
    plStack_128 = pplVar26[1];
    plStack_130 = *pplVar26;
    pplVar26 = &plStack_130;
    pplStack_120 = pplVar10;
    pplStack_118 = unaff_x19;
    puStack_110 = &stack0xfffffffffffffff0;
    FUN_100201b74(pplVar26,auStack_140,0x20000010,1);
    puVar12 = (undefined1 *)0x0;
    if ((((((int)pplVar26 != 0) && (plStack_128 == (long *)0x0)) &&
         (FUN_100201b74(auStack_140,puVar25,0x20000010,1), puVar12 = puVar11, (int)puVar11 != 0)) &&
        ((puVar12 = puVar25, FUN_100201d00(puVar25,0,0,0xa0000000), (int)puVar12 != 0 &&
         (puVar12 = puVar25, FUN_100201b74(puVar25,0,2,1), (int)puVar12 != 0)))) &&
       ((puVar12 = puVar25, FUN_100201b74(puVar25,0,0x20000010,1), (int)puVar12 != 0 &&
        ((puVar12 = puVar25, FUN_100201b74(puVar25,0,0x20000010,1), (int)puVar12 != 0 &&
         (puVar12 = puVar25, FUN_100201b74(puVar25,0,0x20000010,1), (int)puVar12 != 0)))))) {
      FUN_100201b74(puVar25,0,0x20000010,1);
      puVar12 = puVar25;
    }
    return puVar12;
  }
  return puVar25;
}



/* Entry: 100201840; end: 1002019bb;  */

void FUN_100201840(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  iVar1 = (int)auStack_40;
  lStack_28 = param_1[1];
  uStack_30 = *param_1;
  puVar2 = &uStack_30;
  FUN_100201b74(puVar2,auStack_40,0x20000010,1);
  if ((((((int)puVar2 != 0) && (lStack_28 == 0)) &&
       (FUN_100201b74(auStack_40,param_2,0x20000010,1), iVar1 != 0)) &&
      ((uVar3 = param_2, FUN_100201d00(param_2,0,0,0xa0000000), (int)uVar3 != 0 &&
       (uVar3 = param_2, FUN_100201b74(param_2,0,2,1), (int)uVar3 != 0)))) &&
     ((uVar3 = param_2, FUN_100201b74(param_2,0,0x20000010,1), (int)uVar3 != 0 &&
      ((uVar3 = param_2, FUN_100201b74(param_2,0,0x20000010,1), (int)uVar3 != 0 &&
       (uVar3 = param_2, FUN_100201b74(param_2,0,0x20000010,1), (int)uVar3 != 0)))))) {
    FUN_100201b74(param_2,0,0x20000010,1);
  }
  return;
}



/* Entry: 1002019bc; end: 100201b73;  */

void FUN_1002019bc(long *param_1,long *param_2,uint *param_3,ulong *param_4,undefined4 *param_5,
                  undefined4 *param_6,int param_7)

{
  byte bVar1;
  byte **ppbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uStack_64;
  byte *pbStack_60;
  long lStack_58;
  
  lStack_58 = param_1[1];
  pbStack_60 = (byte *)*param_1;
  if (param_7 != 0) {
    *param_5 = 0;
    *param_6 = 0;
  }
  ppbVar2 = &pbStack_60;
  FUN_100201c1c(ppbVar2,&uStack_64);
  if ((int)ppbVar2 == 0) {
    return;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_64;
  }
  if (lStack_58 == 0) {
    return;
  }
  bVar1 = *pbStack_60;
  uVar4 = param_1[1];
  uVar3 = uVar4 - (lStack_58 - 1U);
  if ((char)bVar1 < '\0') {
    uVar6 = (ulong)bVar1 & 0x7f;
    if ((param_7 != 0) && ((int)uVar6 == 0 && (uStack_64 & 0x20000000) != 0)) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = uVar3;
        uVar4 = param_1[1];
      }
      *param_5 = 1;
      *param_6 = 1;
      if (uVar4 < uVar3) {
        return;
      }
      lVar5 = *param_1;
      *param_1 = lVar5 + uVar3;
      param_1[1] = uVar4 - uVar3;
      uVar7 = uVar3;
      goto joined_r0x000100201b18;
    }
    if ((int)uVar6 - 5U < 0xfffffffc || lStack_58 - 1U < uVar6) {
      return;
    }
    uVar7 = 0;
    uVar8 = uVar6;
    do {
      pbStack_60 = pbStack_60 + 1;
      uVar7 = (ulong)*pbStack_60 | uVar7 << 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (uVar7 < 0x80) {
      if (param_7 == 0) {
        return;
      }
      *param_5 = 1;
      if (uVar7 >> (uVar6 * 8 - 8 & 0x3f) == 0) {
LAB_100201b34:
        *param_5 = 1;
      }
    }
    else if (uVar7 >> (uVar6 * 8 - 8 & 0x3f) == 0) {
      if (param_7 == 0) {
        return;
      }
      goto LAB_100201b34;
    }
    uVar3 = uVar3 + uVar6;
    if (CARRY8(uVar7,uVar3)) {
      return;
    }
    uVar7 = uVar7 + uVar3;
  }
  else {
    uVar7 = uVar3 + bVar1;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar3;
    uVar4 = param_1[1];
  }
  if (uVar4 < uVar7) {
    return;
  }
  lVar5 = *param_1;
  *param_1 = lVar5 + uVar7;
  param_1[1] = uVar4 - uVar7;
joined_r0x000100201b18:
  if (param_2 != (long *)0x0) {
    *param_2 = lVar5;
    param_2[1] = uVar7;
  }
  return;
}



/* Entry: 100201b74; end: 100201c1b;  */

undefined8 FUN_100201b74(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long alStack_50 [2];
  int iStack_3c;
  ulong uStack_38;
  
  plVar1 = alStack_50;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
  }
  FUN_1002019bc(param_1,plVar1,&iStack_3c,&uStack_38,0,0,0);
  if ((int)param_1 == 0 || iStack_3c != param_3) {
LAB_100201bec:
    uVar3 = 0;
  }
  else {
    if (param_4 != 0) {
      plVar2 = alStack_50;
      if (param_2 != (long *)0x0) {
        plVar2 = param_2;
      }
      uVar4 = plVar2[1];
      if (uVar4 < uStack_38) goto LAB_100201bec;
      *plVar1 = *plVar1 + uStack_38;
      plVar2[1] = uVar4 - uStack_38;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 100201c1c; end: 100201cff;  */

undefined8 FUN_100201c1c(long *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uStack_28;
  
  if (param_1[1] == 0) {
    return 0;
  }
  pbVar4 = (byte *)*param_1;
  *param_1 = (long)(pbVar4 + 1);
  param_1[1] = param_1[1] + -1;
  bVar2 = *pbVar4;
  uVar1 = bVar2 & 0x1f;
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    func_0x000107c34f54(param_1,&uStack_28);
    if ((int)param_1 == 0) {
      return 0;
    }
    uVar3 = uStack_28;
    if (0x1fffffe0 < uStack_28 - 0x1f) {
      return 0;
    }
  }
  *param_2 = (uint)uVar3 | (bVar2 & 0xe0) << 0x18;
  return 1;
}



/* Entry: 100201d00; end: 100201d77;  */

void FUN_100201d00(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  func_0x000100201cac(param_1,param_4);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    FUN_100201b74(param_1,param_2,param_4,1);
    if ((int)param_1 == 0) {
      return;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return;
}



/* Entry: 100201d78; end: 100201edf;  */

undefined1 * FUN_100201d78(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_54;
  char *pcStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_100201b74(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    puVar3 = auStack_30;
    FUN_100201b74(puVar3,auStack_40,0x20000010,1);
    if ((int)puVar3 != 0) {
      puVar3 = auStack_30;
      FUN_100201b74(puVar3,&pcStack_50,3,1);
      if (((int)puVar3 != 0) && (lStack_28 == 0)) {
        puVar3 = auStack_40;
        FUN_100201ee0(puVar3,&uStack_54);
        if ((int)puVar3 == 0) {
          uVar5 = 0x80;
          uVar6 = 0x6f;
        }
        else {
          if (lStack_48 != 0) {
            pcVar1 = pcStack_50 + 1;
            lStack_48 = lStack_48 + -1;
            cVar2 = *pcStack_50;
            pcStack_50 = pcVar1;
            if (cVar2 == '\0') {
              FUN_100202000();
              if ((puVar3 != (undefined1 *)0x0) &&
                 (puVar4 = puVar3, FUN_100202104(puVar3,uStack_54), (int)puVar4 != 0)) {
                if (*(code **)(*(long *)(puVar3 + 0x10) + 0x10) == (code *)0x0) {
                  FUN_1004d2c58(6,0,0x80,&UNK_10f6c6032,0x83);
                }
                else {
                  puVar4 = puVar3;
                  (**(code **)(*(long *)(puVar3 + 0x10) + 0x10))(puVar3,auStack_40,&pcStack_50);
                  if ((int)puVar4 != 0) {
                    return puVar3;
                  }
                }
              }
              FUN_10021f114(puVar3);
              return (undefined1 *)0x0;
            }
          }
          uVar5 = 0x66;
          uVar6 = 0x76;
        }
        goto LAB_100201e40;
      }
    }
  }
  uVar5 = 0x66;
  uVar6 = 0x6b;
LAB_100201e40:
  FUN_1004d2c58(6,0,uVar5,&UNK_10f6c6032,uVar6);
  return (undefined1 *)0x0;
}



/* Entry: 100201ee0; end: 100201f93;  */

void FUN_100201ee0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uStack_60;
  ulong uStack_58;
  
  FUN_100201b74(param_1,&uStack_60,6,1);
  if ((int)param_1 != 0) {
    lVar2 = 0;
    do {
      puVar3 = (undefined4 *)(&PTR_DAT_110c7c740)[lVar2];
      if ((uStack_58 == *(byte *)((long)puVar3 + 0xd)) &&
         ((*(byte *)((long)puVar3 + 0xd) == 0 ||
          (uVar1 = uStack_60, func_0x000107c610b0(uStack_60,puVar3 + 1,uStack_58), (int)uVar1 == 0))
         )) {
        *param_2 = *puVar3;
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 5);
  }
  return;
}



/* Entry: 100201f94; end: 100201faf;  */

void FUN_100201f94(undefined8 param_1)

{
  FUN_1000285a8(0x112df5e78,&UNK_10d9c4b28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101aa82f4,param_1);
  return;
}



/* Entry: 100201fb0; end: 100201fff;  */

void FUN_100201fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100202000; end: 100202063;  */

undefined8 * FUN_100202000(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(6,0,0x41,&UNK_10f6c5fb5,0x58);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0x18;
    puVar2 = puVar1 + 1;
    *(undefined4 *)puVar2 = 1;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  }
  return puVar2;
}



/* Entry: 100202064; end: 1002020e3;  */

void FUN_100202064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df6b08,&UNK_10d9c5e80);
  puVar1 = &UNK_11043ab80;
  func_0x000107c613fc(&UNK_11043ab80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100a81e24,puVar1);
  return;
}



/* Entry: 1002020e4; end: 100202103;  */

void FUN_1002020e4(void)

{
  func_0x000107c61168(&PTR_PTR_112df6b80);
  return;
}



/* Entry: 100202104; end: 100202217;  */

undefined8 FUN_100202104(long param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) && (*(long *)(param_1 + 0x10) != 0)) &&
     (pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x88), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_2 < 0x198) {
    if (param_2 == 6) {
      puVar2 = (undefined4 *)&DAT_110c7caa0;
    }
    else {
      if (param_2 != 0x74) {
LAB_1002021e4:
        FUN_1004d2c58(6,0,0x80,&UNK_10f6c5fb5,0x14b);
        func_0x000107c2b2a4(&UNK_10f6c6025);
        return 0;
      }
      puVar2 = (undefined4 *)&DAT_110c7c788;
    }
  }
  else if (param_2 == 0x3b5) {
    puVar2 = (undefined4 *)&DAT_110c7c998;
  }
  else if (param_2 == 0x3b4) {
    puVar2 = (undefined4 *)&DAT_110c7cba8;
  }
  else {
    if (param_2 != 0x198) goto LAB_1002021e4;
    puVar2 = (undefined4 *)&DAT_110c7c890;
  }
  if (param_1 != 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar2;
    *(undefined4 *)(param_1 + 4) = *puVar2;
  }
  return 1;
}



/* Entry: 100202218; end: 100202443;  */

undefined8 FUN_100202218(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar1 = param_2;
  FUN_100201b74(param_2,auStack_40,5,1);
  if ((((int)lVar1 == 0) || (lStack_38 != 0)) || (*(long *)(param_2 + 8) != 0)) {
    FUN_1004d2c58(6,0,0x66,&UNK_10f6c63e9,0x60);
  }
  else {
    lVar1 = param_3;
    FUN_100202444();
    if ((lVar1 != 0) && (*(long *)(param_3 + 8) == 0)) {
      lVar2 = param_1;
      FUN_100202104(param_1,6);
      if ((int)lVar2 != 0) {
        *(long *)(param_1 + 8) = lVar1;
      }
      return 1;
    }
    FUN_1004d2c58(6,0,0x66,&UNK_10f6c63e9,0x66);
    FUN_10021f174(lVar1);
  }
  return 0;
}



/* Entry: 100202444; end: 100202527;  */

long FUN_100202444(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar3 = auStack_30;
  iVar1 = (int)auStack_30;
  lVar2 = 0;
  func_0x0001002022f0();
  if (lVar2 == 0) {
    return 0;
  }
  FUN_100201b74(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    FUN_10020254c();
    *(long *)(lVar2 + 8) = param_1;
    if ((param_1 != 0) && (FUN_1002025a8(auStack_30,param_1), (int)puVar3 != 0)) {
      FUN_10020254c();
      *(undefined1 **)(lVar2 + 0x10) = puVar3;
      if ((puVar3 != (undefined1 *)0x0) &&
         ((FUN_1002025a8(auStack_30,puVar3), iVar1 != 0 && (lStack_28 == 0)))) {
        lVar4 = lVar2;
        FUN_100202980();
        if ((int)lVar4 != 0) {
          return lVar2;
        }
        uVar5 = 0x68;
        uVar6 = 0x6a;
        goto LAB_100202504;
      }
    }
  }
  uVar5 = 100;
  uVar6 = 100;
LAB_100202504:
  FUN_1004d2c58(4,0,uVar5,&UNK_10f6ccfa3,uVar6);
  FUN_10021f174(lVar2);
  return 0;
}



/* Entry: 100202528; end: 10020254b;  */

void FUN_100202528(void)

{
  uRam0000000113837068 = 0;
  uRam0000000113837060 = 0;
  uRam0000000113837078 = 0;
  uRam0000000113837070 = 0;
  uRam0000000113837048 = 0;
  uRam0000000113837040 = 0;
  uRam0000000113837058 = 0;
  uRam0000000113837050 = 0;
  uRam0000000113837038 = 0;
  uRam0000000113837030 = 0x100000000;
  return;
}



/* Entry: 10020254c; end: 1002025a7;  */

undefined8 * FUN_10020254c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(3,0,0x41,&UNK_10f6c66ac,0x49);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0x18;
    puVar2 = puVar1 + 1;
    *puVar2 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x100000000;
  }
  return puVar2;
}



/* Entry: 1002025a8; end: 100202673;  */

bool FUN_1002025a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcStack_30;
  long lStack_28;
  
  FUN_100201b74(param_1,&pcStack_30,2,1);
  if (((int)param_1 == 0) || (lStack_28 == 0)) {
LAB_100202628:
    uVar2 = 0x75;
    uVar3 = 0x1a;
  }
  else {
    cVar1 = *pcStack_30;
    if (lStack_28 != 1) {
      if ((-1 < pcStack_30[1] && cVar1 == '\0') || (pcStack_30[1] < '\0' && cVar1 == -1))
      goto LAB_100202628;
    }
    if (-1 < cVar1) {
      FUN_100202674(pcStack_30,lStack_28,param_2);
      return pcStack_30 != (char *)0x0;
    }
    uVar2 = 0x6d;
    uVar3 = 0x1f;
  }
  FUN_1004d2c58(3,0,uVar2,&UNK_10f6c53c2,uVar3);
  return false;
}



/* Entry: 100202674; end: 100202743;  */

byte * FUN_100202674(byte *param_1,long param_2,byte *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  
  if (param_3 == (byte *)0x0) {
    param_3 = param_1;
    FUN_10020254c();
    pbVar5 = param_3;
    if (param_3 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  else {
    pbVar5 = (byte *)0x0;
  }
  if (param_2 == 0) {
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
  }
  else {
    lVar4 = (param_2 - 1U >> 3) + 1;
    pbVar1 = param_3;
    FUN_100202744(param_3,lVar4);
    if ((int)pbVar1 == 0) {
      if (pbVar5 != (byte *)0x0) {
        FUN_10021f3c8(pbVar5);
      }
      param_3 = (byte *)0x0;
    }
    else {
      uVar2 = 0;
      uVar3 = (uint)(param_2 - 1U) & 7;
      *(int *)(param_3 + 8) = (int)lVar4;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      do {
        uVar2 = (ulong)*param_1 | uVar2 << 8;
        if (uVar3 == 0) {
          lVar4 = lVar4 + -1;
          *(ulong *)(*(long *)param_3 + lVar4 * 8) = uVar2;
          uVar3 = 7;
          uVar2 = 0;
        }
        else {
          uVar3 = uVar3 - 1;
        }
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  return param_3;
}



/* Entry: 100202744; end: 100202833;  */

undefined8 FUN_100202744(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 <= (ulong)(long)*(int *)((long)param_1 + 0xc)) {
    return 1;
  }
  if (param_2 < 0x800000) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      plVar1 = (long *)(param_2 * 8 + 8);
      func_0x000107c610a0();
      if (plVar1 != (long *)0x0) {
        *plVar1 = param_2 * 8;
        lVar4 = *param_1;
        if ((int)param_1[1] != 0) {
          func_0x000107c610b4(plVar1 + 1,lVar4,(long)(int)param_1[1] << 3);
        }
        FUN_1001e33e0(lVar4);
        *param_1 = (long)(plVar1 + 1);
        *(int *)((long)param_1 + 0xc) = (int)param_2;
        return 1;
      }
      uVar2 = 0x41;
      uVar3 = 0x166;
    }
    else {
      uVar2 = 0x6a;
      uVar3 = 0x160;
    }
  }
  else {
    uVar2 = 0x66;
    uVar3 = 0x15b;
  }
  FUN_1004d2c58(3,0,uVar2,&UNK_10f6c66ac,uVar3);
  return 0;
}



/* Entry: 100202834; end: 10020297f;  */

int FUN_100202834(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    if (uVar1 != 0) {
      lVar5 = *param_1;
LAB_100202870:
      iVar3 = (int)uVar4 + -1;
      uVar2 = *(undefined8 *)(lVar5 + (long)iVar3 * 8);
      FUN_100202e50(uVar2);
      return (int)uVar2 + iVar3 * 0x40;
    }
  }
  else {
    lVar5 = *param_1;
    do {
      if (*(long *)(lVar5 + -8 + uVar4 * 8) != 0) goto LAB_100202870;
      iVar3 = (int)uVar4;
      uVar1 = iVar3 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0 && 0 < iVar3);
  }
  return 0;
}



/* Entry: 100202980; end: 100202e4f;  */

uint FUN_100202980(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
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
  ulong *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0x48) & 1) != 0)) {
    return 1;
  }
  plVar3 = param_1;
  func_0x000100202894();
  if ((int)plVar3 == 0) {
    return 0;
  }
  lVar19 = param_1[4];
  if ((lVar19 != 0) == (param_1[5] == 0)) {
    uVar10 = 0x86;
    uVar11 = 0x2d7;
LAB_100202a24:
    FUN_1004d2c58(4,0,uVar10,&UNK_10f6c73f8,uVar11);
    return 0;
  }
  lVar4 = param_1[3];
  if (lVar4 == 0) {
    return 1;
  }
  if ((*(int *)(lVar4 + 0x10) != 0) || (FUN_1004110a4(lVar4,param_1[1]), -1 < (int)lVar4)) {
    uVar10 = 0x93;
    uVar11 = 0x2df;
    goto LAB_100202a24;
  }
  if (lVar19 == 0) {
    return 1;
  }
  FUN_100225874();
  if (lVar4 == 0) {
    uVar10 = 0x41;
    uVar11 = 0x2eb;
    goto LAB_100202a24;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_58 = (ulong *)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = (ulong *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lVar19 = param_1[4];
  if (*(int *)(lVar19 + 0x10) == 0) {
    lVar21 = param_1[1];
    lVar20 = lVar19;
    FUN_1004110a4(lVar19,lVar21);
    if (((-1 < (int)lVar20) || (lVar20 = param_1[5], *(int *)(lVar20 + 0x10) != 0)) ||
       (lVar5 = lVar20, FUN_1004110a4(lVar20,lVar21), -1 < (int)lVar5)) goto LAB_100202aa8;
    ppuVar6 = &puStack_58;
    func_0x000107c2b398(ppuVar6,lVar19,lVar20,lVar4);
    if ((int)ppuVar6 == 0) {
      uVar10 = 3;
      uVar11 = 0x301;
    }
    else {
      ppuVar6 = &puStack_58;
      FUN_1004110a4(ppuVar6,param_1[1]);
      if ((int)ppuVar6 == 0) {
        lVar19 = param_1[4];
        uVar12 = 0x113310e10;
        func_0x000107c6127c(0x113310e10,FUN_10041134c);
        if ((int)uVar12 != 0) {
LAB_100202e4c:
          func_0x000107c60ebc();
          uVar13 = 0x20;
          uVar1 = uVar12 >> 0x20;
          if (uVar12 >> 0x20 == 0) {
            uVar13 = 0;
            uVar1 = uVar12;
          }
          if (uVar12 != 0) {
            uVar13 = uVar13 + 1;
          }
          uVar12 = uVar1 >> 0x10;
          uVar15 = 0x10;
          if (uVar12 == 0) {
            uVar15 = 0;
          }
          if (uVar12 == 0) {
            uVar12 = uVar1;
          }
          uVar16 = 8;
          if (uVar12 < 0x100) {
            uVar16 = 0;
          }
          uVar1 = uVar12 >> 8;
          if (uVar12 < 0x100) {
            uVar1 = uVar12;
          }
          uVar17 = 4;
          if (uVar1 < 0x10) {
            uVar17 = 0;
          }
          uVar12 = uVar1 >> 4;
          if (uVar1 < 0x10) {
            uVar12 = uVar1;
          }
          uVar18 = 2;
          if (uVar12 < 4) {
            uVar18 = 0;
          }
          uVar18 = uVar13 | uVar15 | uVar16 | uVar17 | uVar18;
          uVar1 = uVar12 >> 2;
          if (uVar12 < 4) {
            uVar1 = uVar12;
          }
          if (1 < uVar1) {
            uVar18 = uVar18 + 1;
          }
          return uVar18;
        }
        puVar7 = &uStack_88;
        FUN_100411a5c(puVar7,lVar19,0x1137ed648);
        if ((int)puVar7 != 0) {
          lVar19 = param_1[5];
          uVar12 = 0x113310e10;
          func_0x000107c6127c(0x113310e10,FUN_10041134c);
          if ((int)uVar12 != 0) goto LAB_100202e4c;
          puVar7 = &uStack_a0;
          FUN_100411a5c(puVar7,lVar19,0x1137ed648);
          if ((int)puVar7 != 0) {
            puVar7 = &uStack_88;
            func_0x000100202834(puVar7);
            puVar8 = &uStack_a0;
            func_0x000100202834(puVar8);
            ppuVar6 = &puStack_70;
            func_0x000107c2b398(ppuVar6,param_1[3],param_1[2],lVar4);
            if ((int)ppuVar6 != 0) {
              iVar2 = 0;
              func_0x000107c2b370(0,&puStack_58,&puStack_70,&uStack_88,puVar7,lVar4);
              if (iVar2 != 0) {
                iVar2 = 0;
                func_0x000107c2b370(0,&puStack_70,&puStack_70,&uStack_a0,puVar8,lVar4);
                if (iVar2 != 0) {
                  if ((int)uStack_48 == 0) {
                    if ((int)uStack_50 != 0) {
                      uVar12 = *puStack_58 ^ 1;
                      if (1 < (int)uStack_50) {
                        lVar19 = (uStack_50 & 0xffffffff) - 1;
                        puVar14 = puStack_58;
                        do {
                          puVar14 = puVar14 + 1;
                          uVar12 = *puVar14 | uVar12;
                          lVar19 = lVar19 + -1;
                        } while (lVar19 != 0);
                      }
                      if (uVar12 == 0 && (int)uStack_60 == 0) {
                        if ((int)uStack_68 != 0) {
                          uVar12 = *puStack_70 ^ 1;
                          if (1 < (int)uStack_68) {
                            lVar19 = (uStack_68 & 0xffffffff) - 1;
                            puVar14 = puStack_70;
                            do {
                              puVar14 = puVar14 + 1;
                              uVar12 = *puVar14 | uVar12;
                              lVar19 = lVar19 + -1;
                            } while (lVar19 != 0);
                          }
                          if (uVar12 == 0) {
                            lVar19 = param_1[6];
                            if (((lVar19 != 0) == (param_1[7] == 0)) ||
                               ((lVar19 != 0) == (param_1[8] == 0))) {
                              uVar10 = 0x7b;
                              uVar11 = 0x323;
                              goto LAB_100202ac0;
                            }
                            if (lVar19 == 0) {
LAB_100202df0:
                              uVar13 = 1;
                              goto LAB_100202ac8;
                            }
                            piVar9 = &iStack_d4;
                            func_0x000107c2b4ec(piVar9,param_1[2],lVar19,&uStack_88,puVar7,lVar4);
                            if ((int)piVar9 != 0) {
                              piVar9 = &iStack_d8;
                              func_0x000107c2b4ec(piVar9,param_1[2],param_1[7],&uStack_a0,puVar8,
                                                  lVar4);
                              if ((int)piVar9 != 0) {
                                piVar9 = &iStack_dc;
                                func_0x000107c2b4ec(piVar9,param_1[5],param_1[8],param_1[4],puVar7,
                                                    lVar4);
                                if ((int)piVar9 != 0) {
                                  if (((iStack_d4 == 0) || (iStack_d8 == 0)) || (iStack_dc == 0)) {
                                    uVar10 = 0x6f;
                                    uVar11 = 0x334;
                                    goto LAB_100202ac0;
                                  }
                                  goto LAB_100202df0;
                                }
                              }
                            }
                            uVar10 = 3;
                            uVar11 = 0x32f;
                            goto LAB_100202ac0;
                          }
                        }
                      }
                    }
                  }
                  uVar10 = 0x77;
                  uVar11 = 0x31c;
                  goto LAB_100202ac0;
                }
              }
            }
            uVar10 = 3;
            uVar11 = 0x317;
            goto LAB_100202ac0;
          }
        }
        uVar10 = 3;
        uVar11 = 0x30f;
      }
      else {
        uVar10 = 0x84;
        uVar11 = 0x305;
      }
    }
  }
  else {
LAB_100202aa8:
    uVar10 = 0x84;
    uVar11 = 0x2fd;
  }
LAB_100202ac0:
  FUN_1004d2c58(4,0,uVar10,&UNK_10f6c73f8,uVar11);
  uVar13 = 0;
LAB_100202ac8:
  FUN_10021f3c8(&puStack_58);
  FUN_10021f3c8(&puStack_70);
  FUN_10021f3c8(&uStack_88);
  FUN_10021f3c8(&uStack_a0);
  FUN_10021f3c8(&uStack_b8);
  FUN_10021f3c8(&uStack_d0);
  FUN_100226a68(lVar4);
  return uVar13;
}



/* Entry: 100202e50; end: 100202ed7;  */

uint FUN_100202e50(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = 0x20;
  uVar1 = param_1 >> 0x20;
  if (param_1 >> 0x20 == 0) {
    uVar2 = 0;
    uVar1 = param_1;
  }
  if (param_1 != 0) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = uVar1 >> 0x10;
  uVar4 = 0x10;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  if (uVar3 == 0) {
    uVar3 = uVar1;
  }
  uVar5 = 8;
  if (uVar3 < 0x100) {
    uVar5 = 0;
  }
  uVar1 = uVar3 >> 8;
  if (uVar3 < 0x100) {
    uVar1 = uVar3;
  }
  uVar6 = 4;
  if (uVar1 < 0x10) {
    uVar6 = 0;
  }
  uVar3 = uVar1 >> 4;
  if (uVar1 < 0x10) {
    uVar3 = uVar1;
  }
  uVar7 = 2;
  if (uVar3 < 4) {
    uVar7 = 0;
  }
  uVar7 = uVar2 | uVar4 | uVar5 | uVar6 | uVar7;
  uVar1 = uVar3 >> 2;
  if (uVar3 < 4) {
    uVar1 = uVar3;
  }
  if (1 < uVar1) {
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}



/* Entry: 100202ed8; end: 100203177;  */

undefined8 FUN_100202ed8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  byte **ppbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  short *psStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  int iStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  puVar2 = &uStack_30;
  FUN_100201840(puVar2,auStack_40);
  if ((int)puVar2 != 0) {
    puVar3 = auStack_40;
    FUN_100201b74(puVar3,0,0x20000010,1);
    if ((int)puVar3 != 0) {
      puVar3 = auStack_40;
      FUN_100201d00(puVar3,0,0,0x80000001);
      if ((int)puVar3 != 0) {
        puVar3 = auStack_40;
        FUN_100201d00(puVar3,0,0,0x80000002);
        if ((int)puVar3 != 0) {
          puVar3 = auStack_40;
          FUN_100201d00(puVar3,auStack_50,&iStack_54,0xa0000003);
          if ((int)puVar3 != 0) {
            if (iStack_54 == 0) {
              return 1;
            }
            puVar3 = auStack_50;
            FUN_100201b74(puVar3,auStack_68,0x20000010,1);
            if ((int)puVar3 != 0) {
              do {
                if (lStack_60 == 0) {
                  return 1;
                }
                puVar3 = auStack_68;
                FUN_100201b74(puVar3,auStack_78,0x20000010,1);
                if ((int)puVar3 == 0) {
LAB_10020309c:
                  uVar5 = 0x110;
                  uVar6 = 0x245;
                  goto LAB_100203068;
                }
                puVar3 = auStack_78;
                FUN_100201b74(puVar3,&psStack_88,6,1);
                if ((int)puVar3 == 0) goto LAB_10020309c;
                puVar3 = auStack_78;
                func_0x000100201cac(puVar3,1);
                if ((int)puVar3 != 0) {
                  puVar3 = auStack_78;
                  FUN_100201b74(puVar3,0,1,1);
                  if ((int)puVar3 == 0) goto LAB_10020309c;
                }
                puVar3 = auStack_78;
                FUN_100201b74(puVar3,auStack_98,4,1);
                if (((int)puVar3 == 0) || (lStack_70 != 0)) goto LAB_10020309c;
                if ((lStack_80 == 3) && (*psStack_88 == 0x1d55 && (char)psStack_88[1] == '\x0f')) {
                  puVar3 = auStack_98;
                  FUN_100201b74(puVar3,&pbStack_a8,3,1);
                  if (((int)puVar3 == 0) || (lStack_90 != 0)) {
                    uVar5 = 0x110;
                    uVar6 = 0x253;
                  }
                  else if (((lStack_a0 == 0) || (bVar1 = *pbStack_a8, 7 < bVar1)) ||
                          ((bVar1 != 0 &&
                           ((lStack_a0 == 1 ||
                            (((uint)pbStack_a8[lStack_a0 + -1] &
                             (-1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU)) != 0)))))) {
                    uVar5 = 0x110;
                    uVar6 = 0x25a;
                  }
                  else {
                    ppbVar4 = &pbStack_a8;
                    FUN_1002033f0(ppbVar4,param_2);
                    if ((int)ppbVar4 != 0) {
                      return 1;
                    }
                    uVar5 = 0x12e;
                    uVar6 = 0x25f;
                  }
                  goto LAB_100203068;
                }
                lStack_70 = 0;
              } while( true );
            }
            uVar5 = 0x110;
            uVar6 = 0x239;
            goto LAB_100203068;
          }
        }
      }
    }
  }
  uVar5 = 0x110;
  uVar6 = 0x22f;
LAB_100203068:
  FUN_1004d2c58(0x10,0,uVar5,&UNK_10f6d02cb,uVar6);
  return 0;
}



/* Entry: 100203178; end: 100203193;  */

void FUN_100203178(undefined8 param_1)

{
  FUN_1000285a8(0x112dc30c0,&UNK_10d9802d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100658700,param_1);
  return;
}



/* Entry: 100203194; end: 100203213;  */

void FUN_100203194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de5598,&UNK_10d9afac0);
  puVar1 = &UNK_1104251a8;
  func_0x000107c613fc(&UNK_1104251a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007b9814,puVar1);
  return;
}



/* Entry: 100203214; end: 100203233;  */

void FUN_100203214(void)

{
  func_0x000107c61168(&PTR_PTR_112de5610);
  return;
}



/* Entry: 100203234; end: 10020324f;  */

void FUN_100203234(undefined8 param_1)

{
  FUN_1000285a8(0x112de55a0,&UNK_10d9afac8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007b97b8,param_1);
  return;
}



/* Entry: 100203250; end: 10020329f;  */

void FUN_100203250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002032a0; end: 10020337f;  */

void FUN_1002032a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df1240,&UNK_10d9be730);
  puVar1 = &UNK_110433970;
  func_0x000107c613fc(&UNK_110433970,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_100451518,puVar1);
  return;
}



/* Entry: 100203380; end: 10020339f;  */

void FUN_100203380(void)

{
  func_0x000107c61168(&PTR_PTR_112df12b8);
  return;
}



/* Entry: 1002033a0; end: 1002033ef;  */

bool FUN_1002033a0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    bVar1 = *(byte *)*param_1;
    if (bVar1 < 8) {
      if (bVar1 == 0) {
        return true;
      }
      if (lVar2 != 1) {
        return ((uint)((byte *)*param_1)[lVar2 + -1] & (-1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU))
               == 0;
      }
    }
  }
  return false;
}



/* Entry: 1002033f0; end: 10020344b;  */

void FUN_1002033f0(void)

{
  FUN_1002033a0();
  return;
}



/* Entry: 10020344c; end: 10020372b;  */

ulong * FUN_10020344c(undefined8 *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 **ppuVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x20;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *unaff_x24;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong *puStack_60;
  
  ppuVar5 = &puStack_70;
  ppuVar8 = &puStack_70;
  ppuVar9 = &puStack_70;
  iVar14 = (int)param_3;
  puVar6 = param_2;
  puVar10 = param_3;
  if (param_4 != (undefined8 *)0x0) {
    puVar4 = param_4 + 1;
    puStack_70 = param_4;
    puStack_68 = param_1;
    puStack_60 = param_2;
    func_0x000107c61288();
    if ((int)puVar4 != 0) goto LAB_100203728;
    unaff_x20 = (ulong *)*param_4;
    (*(code *)unaff_x20[5])();
    uVar16 = unaff_x20[2];
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = ((ulong)ppuVar5 & 0xffffffff) / uVar16;
    }
    puVar7 = (undefined8 *)(unaff_x20[1] + (((ulong)ppuVar5 & 0xffffffff) - uVar13 * uVar16) * 8);
    unaff_x24 = (undefined8 *)*puVar7;
    if (unaff_x24 != (undefined8 *)0x0) {
      iVar3 = (int)*unaff_x24;
      (*(code *)unaff_x20[4])();
      puVar6 = (ulong *)ppuVar8;
      if (iVar3 != 0) {
        do {
          puVar7 = unaff_x24;
          unaff_x24 = (undefined8 *)puVar7[1];
          puVar6 = (ulong *)ppuVar8;
          if (unaff_x24 == (undefined8 *)0x0) goto LAB_100203510;
          iVar3 = (int)*unaff_x24;
          ppuVar8 = &puStack_70;
          (*(code *)unaff_x20[4])();
        } while (iVar3 != 0);
        puVar7 = puVar7 + 1;
        puVar6 = (ulong *)ppuVar8;
      }
      if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
        unaff_x20 = *(ulong **)*puVar7;
        if ((iVar14 == 0) || (unaff_x20 == (ulong *)0x0)) {
          if (unaff_x20 != (ulong *)0x0) goto LAB_10020365c;
        }
        else if (*(int *)((long)unaff_x20 + 0x1c) != 0) {
LAB_10020365c:
          puVar4 = unaff_x20 + 3;
          iVar14 = (int)*puVar4;
          do {
            if (iVar14 == -1) break;
            uVar16 = *puVar4;
            if ((int)uVar16 == iVar14) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar2) {
                *(int *)puVar4 = iVar14 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              bVar2 = cVar1 == '\0';
            }
            else {
              bVar2 = false;
              ClearExclusiveLocal();
            }
            iVar14 = (int)uVar16;
          } while (!bVar2);
          puVar4 = param_4 + 1;
          func_0x000107c6128c();
          if ((int)puVar4 == 0) {
            return unaff_x20;
          }
          goto LAB_100203728;
        }
      }
    }
LAB_100203510:
    puVar4 = param_4 + 1;
    func_0x000107c6128c();
    if ((int)puVar4 != 0) goto LAB_100203728;
  }
  unaff_x24 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (unaff_x24 == (undefined8 *)0x0) {
    return (ulong *)0x0;
  }
  *unaff_x24 = 0x20;
  unaff_x20 = unaff_x24 + 1;
  unaff_x24[2] = 0;
  *unaff_x20 = 0;
  unaff_x24[4] = 0;
  unaff_x24[3] = 0;
  if (iVar14 == 0) {
    puVar7 = param_1;
    puVar6 = param_2;
    FUN_1002039d0();
    unaff_x24[2] = puVar7;
    if ((param_2 != (ulong *)0x0) && (puVar7 == (undefined8 *)0x0)) {
      FUN_1001e33e0(unaff_x20);
      return (ulong *)0x0;
    }
  }
  else {
    unaff_x24[2] = param_1;
    *(undefined4 *)((long)unaff_x24 + 0x24) = 1;
  }
  unaff_x24[3] = param_2;
  *(undefined4 *)(unaff_x24 + 4) = 1;
  if (param_4 == (undefined8 *)0x0) {
    return unaff_x20;
  }
  *unaff_x20 = (ulong)param_4;
  puVar4 = param_4 + 1;
  func_0x000107c61290();
  if ((int)puVar4 != 0) goto LAB_100203728;
  param_2 = (ulong *)*param_4;
  puVar6 = unaff_x20;
  (*(code *)param_2[5])();
  uVar16 = param_2[2];
  uVar13 = 0;
  if (uVar16 != 0) {
    uVar13 = ((ulong)puVar6 & 0xffffffff) / uVar16;
  }
  unaff_x24 = (undefined8 *)(param_2[1] + (((ulong)puVar6 & 0xffffffff) - uVar13 * uVar16) * 8);
  param_1 = (undefined8 *)*unaff_x24;
  if (param_1 != (undefined8 *)0x0) {
    iVar3 = (int)*param_1;
    puVar6 = unaff_x20;
    (*(code *)param_2[4])();
    if (iVar3 != 0) {
      do {
        unaff_x24 = param_1;
        param_1 = (undefined8 *)unaff_x24[1];
        if (param_1 == (undefined8 *)0x0) goto LAB_1002035f4;
        iVar3 = (int)*param_1;
        puVar6 = unaff_x20;
        (*(code *)param_2[4])();
      } while (iVar3 != 0);
      unaff_x24 = unaff_x24 + 1;
    }
    if ((undefined8 *)*unaff_x24 != (undefined8 *)0x0) {
      param_2 = *(ulong **)*unaff_x24;
      if ((iVar14 == 0) || (param_2 == (ulong *)0x0)) {
        if (param_2 != (ulong *)0x0) goto LAB_1002036b0;
      }
      else if (*(int *)((long)param_2 + 0x1c) != 0) {
LAB_1002036b0:
        puVar4 = param_2 + 3;
        iVar14 = (int)*puVar4;
        do {
          if (iVar14 == -1) break;
          uVar16 = *puVar4;
          if ((int)uVar16 == iVar14) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar2) {
              *(int *)puVar4 = iVar14 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            bVar2 = cVar1 == '\0';
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar14 = (int)uVar16;
        } while (!bVar2);
        puVar4 = param_4 + 1;
        func_0x000107c6128c();
        if ((int)puVar4 != 0) goto LAB_100203728;
        goto LAB_1002036fc;
      }
    }
  }
LAB_1002035f4:
  param_3 = (ulong *)*param_4;
  puVar10 = unaff_x20;
  FUN_100203afc();
  puVar4 = param_4 + 1;
  func_0x000107c6128c();
  puVar6 = (ulong *)ppuVar9;
  if ((int)puVar4 != 0) {
LAB_100203728:
    func_0x000107c60ebc();
    pcStack_78 = FUN_10020372c;
    uVar16 = *puVar4 ^ 0x736f6d6570736575;
    uVar13 = puVar4[1] ^ 0x646f72616e646f6d;
    uVar15 = *puVar4 ^ 0x6c7967656e657261;
    uVar17 = puVar4[1] ^ 0x7465646279746573;
    for (puVar4 = puVar10; (ulong *)0x7 < puVar4; puVar4 = puVar4 + -1) {
      uVar17 = *puVar6 ^ uVar17;
      uVar16 = uVar13 + uVar16;
      uVar12 = uVar16 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
      uVar11 = uVar17 + uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
      uVar13 = uVar17 + uVar15 + uVar12;
      uVar16 = uVar11 + (uVar16 >> 0x20 | uVar16 << 0x20);
      uVar12 = uVar13 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
      uVar17 = uVar16 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
      uVar16 = uVar16 + uVar12;
      uVar15 = uVar17 + (uVar13 >> 0x20 | uVar13 << 0x20);
      uVar13 = uVar16 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
      uVar17 = uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
      uVar15 = uVar15 + uVar13;
      uVar16 = uVar17 + (uVar16 >> 0x20 | uVar16 << 0x20);
      uVar13 = uVar15 ^ (uVar13 >> 0x2f | uVar13 << 0x11);
      uVar17 = uVar16 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar16 = uVar16 ^ *puVar6;
      puVar6 = puVar6 + 1;
    }
    uStack_b8 = 0;
    if (puVar4 != (ulong *)0x0) {
      puStack_b0 = unaff_x24;
      puStack_a8 = param_1;
      puStack_a0 = param_2;
      puStack_98 = param_3;
      puStack_90 = unaff_x20;
      puStack_88 = param_4;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x000107c60e68(&uStack_b8);
    }
    uStack_b8 = CONCAT17((char)puVar10,(undefined7)uStack_b8);
    uVar17 = uStack_b8 ^ uVar17;
    uVar16 = uVar16 + uVar13;
    uVar12 = uVar16 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
    uVar11 = uVar17 + uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
    uVar13 = uVar17 + uVar15 + uVar12;
    uVar16 = uVar11 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar17 = uVar13 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
    uVar15 = uVar16 ^ (uVar11 >> 0x2b | uVar11 << 0x15);
    uVar16 = uVar16 + uVar17;
    uVar13 = uVar15 + (uVar13 >> 0x20 | uVar13 << 0x20);
    uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
    uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar13 = uVar13 + uVar17;
    uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    uVar16 = (uVar16 ^ uStack_b8) + uVar17;
    uVar13 = ((uVar13 >> 0x20 | uVar13 << 0x20) ^ 0xff) + uVar15;
    uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
    uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar13 = uVar17 + uVar13;
    uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    uVar16 = uVar17 + uVar16;
    uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
    uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
    uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar13 = uVar17 + uVar13;
    uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    uVar16 = uVar17 + uVar16;
    uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
    uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
    uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar13 = uVar17 + uVar13;
    uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
    uVar16 = uVar17 + uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
    uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar13 = uVar16 + uVar13;
    return (ulong *)((uVar15 >> 0x2b | uVar15 << 0x15) ^ (uVar16 >> 0x2f | uVar16 << 0x11) ^
                     (uVar13 >> 0x20 | uVar13 << 0x20) ^ uVar13);
  }
  if ((int)param_3 != 0) {
    return unaff_x20;
  }
  param_2 = (ulong *)0x0;
LAB_1002036fc:
  FUN_100a41480(unaff_x20);
  return param_2;
}



/* Entry: 10020372c; end: 100203943;  */

ulong FUN_10020372c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_48;
  
  uVar6 = *param_1 ^ 0x736f6d6570736575;
  uVar4 = param_1[1] ^ 0x646f72616e646f6d;
  uVar5 = *param_1 ^ 0x6c7967656e657261;
  uVar7 = param_1[1] ^ 0x7465646279746573;
  for (uVar1 = param_3; 7 < uVar1; uVar1 = uVar1 - 8) {
    uVar7 = *param_2 ^ uVar7;
    uVar6 = uVar4 + uVar6;
    uVar3 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
    uVar2 = uVar7 + uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
    uVar4 = uVar7 + uVar5 + uVar3;
    uVar6 = uVar2 + (uVar6 >> 0x20 | uVar6 << 0x20);
    uVar3 = uVar4 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
    uVar7 = uVar6 ^ (uVar2 >> 0x2b | uVar2 << 0x15);
    uVar6 = uVar6 + uVar3;
    uVar5 = uVar7 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar4 = uVar6 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar7 = uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
    uVar5 = uVar5 + uVar4;
    uVar6 = uVar7 + (uVar6 >> 0x20 | uVar6 << 0x20);
    uVar4 = uVar5 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
    uVar7 = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
    uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar6 = uVar6 ^ *param_2;
    param_2 = param_2 + 1;
  }
  uStack_48 = 0;
  if (uVar1 != 0) {
    func_0x000107c60e68(&uStack_48,param_2,uVar1,8);
  }
  uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
  uVar7 = uStack_48 ^ uVar7;
  uVar6 = uVar6 + uVar4;
  uVar2 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar1 = uVar7 + uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar4 = uVar7 + uVar5 + uVar2;
  uVar6 = uVar1 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar4 ^ (uVar2 >> 0x2f | uVar2 << 0x11);
  uVar5 = uVar6 ^ (uVar1 >> 0x2b | uVar1 << 0x15);
  uVar6 = uVar6 + uVar7;
  uVar4 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar7 = uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar4 = uVar4 + uVar7;
  uVar6 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar4 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar5 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar6 = (uVar6 ^ uStack_48) + uVar7;
  uVar4 = ((uVar4 >> 0x20 | uVar4 << 0x20) ^ 0xff) + uVar5;
  uVar7 = uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar4 = uVar7 + uVar4;
  uVar6 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar4 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar5 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar6 = uVar7 + uVar6;
  uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) + uVar5;
  uVar7 = uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar4 = uVar7 + uVar4;
  uVar6 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar4 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar5 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar6 = uVar7 + uVar6;
  uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) + uVar5;
  uVar7 = uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar4 = uVar7 + uVar4;
  uVar6 = uVar5 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar4 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar5 = uVar6 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
  uVar4 = (uVar4 >> 0x20 | uVar4 << 0x20) + uVar5;
  uVar6 = uVar7 + uVar6 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar5 = uVar4 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
  uVar4 = uVar6 + uVar4;
  return (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar6 >> 0x2f | uVar6 << 0x11) ^
         (uVar4 >> 0x20 | uVar4 << 0x20) ^ uVar4;
}



/* Entry: 100203944; end: 100203963;  */

void FUN_100203944(long *param_1)

{
  FUN_10020372c(*param_1 + 0xd0,param_1[1],param_1[2]);
  return;
}



/* Entry: 100203964; end: 10020397f;  */

void FUN_100203964(undefined8 param_1)

{
  FUN_1000285a8(0x112df1248,&UNK_10d9be738);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004514bc,param_1);
  return;
}



/* Entry: 100203980; end: 1002039cf;  */

void FUN_100203980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002039d0; end: 100203a4b;  */

ulong * FUN_1002039d0(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_2 != 0) {
    if (param_2 < 0xfffffffffffffff8) {
      puVar1 = (ulong *)(param_2 + 8);
      func_0x000107c610a0();
      if (puVar1 != (ulong *)0x0) {
        puVar2 = puVar1 + 1;
        *puVar1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(puVar2,param_1,param_2);
        return puVar2;
      }
    }
    FUN_1004d2c58(0xe,0,0x41,&UNK_10f6c781f,0x18a);
  }
  return (ulong *)0x0;
}



/* Entry: 100203a4c; end: 100203a57;  */

void FUN_100203a4c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100203a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 100203a58; end: 100203afb;  */

undefined8 *
FUN_100203a58(long param_1,undefined4 *param_2,undefined8 param_3,code *param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*param_4)(uVar3,param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (int)uVar3;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uVar3 & 0xffffffff) / uVar1;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + ((uVar3 & 0xffffffff) - uVar2 * uVar1) * 8);
  puVar6 = (undefined8 *)*puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*param_5)(uVar4,*puVar6,param_3);
    if ((int)uVar4 != 0) {
      do {
        puVar5 = puVar6;
        puVar6 = (undefined8 *)puVar5[1];
        if (puVar6 == (undefined8 *)0x0) break;
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        (*param_5)(uVar4,*puVar6,param_3);
      } while ((int)uVar4 != 0);
      puVar5 = puVar5 + 1;
    }
  }
  return puVar5;
}



/* Entry: 100203afc; end: 100203b9f;  */

void FUN_100203afc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uStack_34;
  
  *param_2 = 0;
  plVar1 = param_1;
  FUN_100203a58(param_1,&uStack_34);
  if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    func_0x000107c610a0();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x18;
      puVar2[1] = param_3;
      *(undefined4 *)(puVar2 + 3) = uStack_34;
      puVar2[2] = 0;
      *plVar1 = (long)(puVar2 + 1);
      *param_1 = *param_1 + 1;
      FUN_100203ba0(param_1);
    }
  }
  else {
    *param_2 = *(undefined8 *)*plVar1;
    *(undefined8 *)*plVar1 = param_3;
  }
  return;
}



/* Entry: 100203ba0; end: 100203bfb;  */

void FUN_100203ba0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if ((int)param_1[3] == 0) {
    uVar5 = param_1[2];
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = *param_1 / uVar5;
    }
    if (uVar2 < 3) {
      if ((*param_1 < uVar5) && (0x10 < uVar5)) {
        uVar5 = uVar5 >> 1;
        if (uVar5 < 0x11) {
          uVar5 = 0x10;
        }
        goto LAB_107c34f94;
      }
    }
    else if (0 < (long)uVar5) {
      uVar5 = uVar5 << 1;
LAB_107c34f94:
      if ((uVar5 >> 0x3d == 0) && (lVar10 = uVar5 * 8, lVar10 != -8)) {
        plVar4 = (long *)(lVar10 + 8);
        _malloc();
        if (plVar4 != (long *)0x0) {
          plVar9 = plVar4 + 1;
          *plVar4 = lVar10;
          if (lVar10 != 0) {
            _bzero(plVar9,lVar10);
          }
          uVar2 = param_1[1];
          uVar1 = param_1[2];
          if (uVar1 != 0) {
            uVar6 = 0;
            do {
              lVar10 = *(long *)(uVar2 + uVar6 * 8);
              while (lVar10 != 0) {
                uVar3 = 0;
                if (uVar5 != 0) {
                  uVar3 = *(uint *)(lVar10 + 0x10) / uVar5;
                }
                lVar7 = (ulong)*(uint *)(lVar10 + 0x10) - uVar3 * uVar5;
                lVar8 = *(long *)(lVar10 + 8);
                *(long *)(lVar10 + 8) = plVar9[lVar7];
                plVar9[lVar7] = lVar10;
                lVar10 = lVar8;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar1);
          }
          func_0x000107c2b534();
          param_1[1] = (ulong)plVar9;
          param_1[2] = uVar5;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 100203bfc; end: 100203f4f;  */

void FUN_100203bfc(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  undefined1 uStack_51;
  
  lVar14 = *param_1;
  lVar15 = *(long *)(*(long *)(lVar14 + 0x30) + 0x1c8);
  if (lVar15 != 0) {
    puVar16 = *(ulong **)(lVar15 + 0x90);
    if (puVar16 == (ulong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar16;
    }
    lVar17 = param_1[0xbb];
    puVar18 = *(ulong **)(lVar17 + 0x90);
    if (puVar18 == (ulong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar18;
    }
    if (uVar8 == uVar11) {
      uVar8 = 0;
      if (puVar18 == (ulong *)0x0) goto LAB_100203ca8;
LAB_100203ca0:
      uVar11 = *puVar18;
      do {
        if (uVar11 <= uVar8) {
          lVar14 = *(long *)(lVar15 + 0x108);
          if (lVar14 == 0) goto LAB_100203e1c;
          piVar1 = (int *)(lVar14 + 0x18);
          iVar13 = *piVar1;
          goto LAB_100203de0;
        }
        if ((puVar16 == (ulong *)0x0) || (*puVar16 <= uVar8)) {
          lVar9 = 0;
          if (puVar18 != (ulong *)0x0) goto LAB_100203cdc;
LAB_100203cf4:
          lVar12 = 0;
        }
        else {
          lVar9 = *(long *)(puVar16[1] + uVar8 * 8);
          if (puVar18 == (ulong *)0x0) goto LAB_100203cf4;
LAB_100203cdc:
          if (*puVar18 <= uVar8) goto LAB_100203cf4;
          lVar12 = *(long *)(puVar18[1] + uVar8 * 8);
        }
        if (*(long *)(lVar9 + 0x10) != *(long *)(lVar12 + 0x10)) {
LAB_100203d44:
          uVar6 = 0x15d;
          goto LAB_100203d5c;
        }
        if (*(long *)(lVar9 + 0x10) != 0) {
          uVar6 = *(undefined8 *)(lVar9 + 8);
          func_0x000107c610b0(uVar6,*(undefined8 *)(lVar12 + 8));
          if ((int)uVar6 != 0) goto LAB_100203d44;
        }
        uVar8 = uVar8 + 1;
        if (puVar18 != (ulong *)0x0) goto LAB_100203ca0;
LAB_100203ca8:
        uVar11 = 0;
      } while( true );
    }
    uVar6 = 0x14e;
LAB_100203d5c:
    FUN_1004d2c58(0x10,0,0x111,&UNK_10f6cfe1d,uVar6);
    uVar7 = 0x2f;
    goto LAB_100203d6c;
  }
  uStack_51 = 0x2e;
  if (*(code **)(param_1[1] + 0x30) == (code *)0x0) {
    lVar15 = param_1[0xbb];
    (**(code **)(*(long *)(*(long *)(lVar14 + 0x68) + 8) + 0x48))(lVar15,param_1,&uStack_51);
    uVar5 = (uint)lVar15 ^ 1;
joined_r0x000100203ec4:
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        return;
      }
      FUN_1004d2c58(0x10,0,0x7d,&UNK_10f6cfe1d,0x189);
      uVar7 = uStack_51;
      goto LAB_100203d6c;
    }
  }
  else {
    lVar15 = lVar14;
    (**(code **)(param_1[1] + 0x30))(lVar14,&uStack_51);
    uVar5 = (uint)lVar15;
    if (uVar5 == 1) {
      bVar4 = *(char *)(param_1[1] + 0xe8) == '\0';
      if (bVar4) {
        FUN_1001e83a0();
      }
      *(undefined8 *)(param_1[0xbb] + 0xb8) = 0x32;
      uVar5 = (uint)!bVar4;
      goto joined_r0x000100203ec4;
    }
    if (uVar5 != 0) goto joined_r0x000100203ec4;
    *(undefined8 *)(param_1[0xbb] + 0xb8) = 0;
  }
  if ((*(byte *)(lVar14 + 0xa4) & 1) != 0) {
    return;
  }
  if ((*(ushort *)(param_1[1] + 0xe9) >> 2 & 1) == 0) {
    return;
  }
  pcVar10 = *(code **)(*(long *)(lVar14 + 0x68) + 0x2d0);
  if (pcVar10 == (code *)0x0) {
    return;
  }
  lVar15 = lVar14;
  (*pcVar10)(lVar14,*(undefined8 *)(*(long *)(lVar14 + 0x68) + 0x2d8));
  if (0 < (int)lVar15) {
    return;
  }
  FUN_1004d2c58(0x10,0,0x121,&UNK_10f6cfe1d,0x195);
  uVar7 = 0x71;
  if ((int)lVar15 != 0) {
    uVar7 = 0x50;
  }
LAB_100203d6c:
  func_0x000107c2b730(lVar14,2,uVar7);
  return;
  while( true ) {
    iVar2 = *piVar1;
    if (iVar2 == iVar13) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      bVar4 = cVar3 == '\0';
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    iVar13 = iVar2;
    if (bVar4) break;
LAB_100203de0:
    if (iVar13 == -1) break;
  }
  lVar17 = param_1[0xbb];
LAB_100203e1c:
  lVar9 = *(long *)(lVar17 + 0x108);
  *(long *)(lVar17 + 0x108) = lVar14;
  if (lVar9 != 0) {
    FUN_100229fdc();
  }
  lVar14 = *(long *)(lVar15 + 0x100);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x18);
    iVar13 = *piVar1;
    do {
      if (iVar13 == -1) break;
      iVar2 = *piVar1;
      if (iVar2 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar4 = cVar3 == '\0';
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar13 = iVar2;
    } while (!bVar4);
  }
  lVar9 = param_1[0xbb];
  lVar17 = *(long *)(lVar9 + 0x100);
  *(long *)(lVar9 + 0x100) = lVar14;
  if (lVar17 != 0) {
    FUN_100229fdc();
    lVar9 = param_1[0xbb];
  }
  *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(lVar15 + 0xb8);
  return;
}



/* Entry: 100203f50; end: 1002042db;  */

/* WARNING: Possible PIC construction at 0x0001002042a0: Changing call to branch */

undefined8 FUN_100203f50(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  code *pcVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *extraout_x8;
  int extraout_w9;
  int iVar20;
  long *extraout_x9;
  long *extraout_x10;
  long *extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar21;
  long *unaff_x22;
  int *unaff_x23;
  undefined8 *puVar22;
  ulong unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 *****pppppuStack_170;
  long lStack_168;
  undefined4 *puStack_158;
  undefined8 *****pppppuStack_150;
  long lStack_148;
  char cStack_139;
  undefined1 auStack_138 [112];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_84;
  undefined8 *****pppppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001001e2918();
  func_0x0001002042d0();
  iVar11 = *(int *)(param_1 + 0x130);
  cVar8 = SBORROW4(iVar11,1);
  cVar9 = iVar11 + -1 < 0;
  if (iVar11 == 1) {
    unaff_x20 = (long *)(param_1 + 0x88);
    if (*unaff_x20 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0,0x1002042c8);
      (*pcVar7)();
    }
    unaff_x21 = *(long **)(param_1 + 0x138);
    FUN_1002042dc();
    func_0x00010020439c();
    func_0x000100206f40(unaff_x20);
    unaff_x22 = *(long **)(param_1 + 0x88);
    if (unaff_x22 == (long *)0x0) {
      func_0x0001001e5bfc(&UNK_10f759f41);
      FUN_10012dd4c(auStack_138);
      uVar17 = 0xffffff59;
      goto LAB_10020411c;
    }
    plVar21 = *(long **)(param_1 + 0x348);
    if (*(int *)((long)plVar21 + 0x44) != 0) {
      lStack_78 = -0x5555555555555556;
      pppppuStack_80 = (undefined8 ******)0xaaaaaaaaaaaaaaaa;
      uStack_68 = 0xaaaaaaaaaaaaaaaa;
      uStack_70 = -0x5555555555555556;
      func_0x000107c370cc(&pppppuStack_80);
      func_0x000107c2d6c8(auStack_138,*unaff_x20);
      func_0x000107c2cf00(&pppppuStack_80,&UNK_10f74ad67,0xc,auStack_138);
      func_0x000100139d84(auStack_138);
      unaff_x21 = (long *)0x4a;
      func_0x000107c370e4(plVar21,0x4a,param_1 + 0x338);
      func_0x000100139d84(&pppppuStack_80);
      unaff_x22 = (long *)*unaff_x20;
    }
    uStack_84 = 0xaaaaaaaa;
    lVar12 = *(long *)(param_1 + 0x138);
    FUN_100206fac();
    if (unaff_x21 == (long *)0x0) {
      lVar12 = param_1 + 0x170;
      unaff_x21 = unaff_x22;
      func_0x000100206fdc(lVar12,unaff_x22,&uStack_84);
      if ((int)lVar12 == 0) goto LAB_1002040a0;
      func_0x0001001e2040(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0xb8) = uStack_84;
      param_2 = *(undefined1 **)(param_1 + 0x88);
      if (param_2 != (undefined1 *)0x0) {
        do {
          func_0x00010022ac70();
        } while (extraout_w9 != 0);
      }
      func_0x000100206f40(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x130) = 0;
      unaff_x21 = plVar21;
    }
    else {
LAB_1002040a0:
      func_0x00010020703c();
      *(long *)(param_1 + 0x128) = lVar12;
      plVar21 = *(long **)(param_1 + 0x138);
      unaff_x20 = plVar21;
      FUN_100206fac();
      if (unaff_x21 != (long *)0x0) {
        *(undefined1 *)(param_1 + 0x2df) = 1;
        plVar21 = unaff_x20;
        FUN_1001e6db8(unaff_x20,unaff_x21);
        if (((ulong)plVar21 & 1) != 0) {
          func_0x0001001e5bfc(&UNK_10f759f41);
          FUN_10012dd4c(auStack_138);
          uVar17 = 0xffffff4a;
LAB_10020411c:
          func_0x000107c2e918(auStack_138,uVar17);
          return 1;
        }
        plVar21 = *(long **)(param_1 + 0x138);
      }
      uStack_98 = 0xaaaaaaaaaaaaaaaa;
      uStack_90 = 0xaaaaaaaaaaaaaaaa;
      FUN_100207048(plVar21,&uStack_90,&uStack_98);
      uStack_a8 = uStack_90;
      uStack_a0 = uStack_98;
      uStack_b8 = 0xaaaaaaaaaaaaaaaa;
      uStack_b0 = 0xaaaaaaaaaaaaaaaa;
      func_0x0001002070b4(*(undefined8 *)(param_1 + 0x138),&uStack_b0,&uStack_b8);
      uStack_c8 = uStack_b0;
      uStack_c0 = uStack_b8;
      unaff_x22 = *(long **)(*(long *)(param_1 + 0x118) + 0x40);
      unaff_x23 = *(int **)(param_1 + 0x88);
      if (unaff_x23 != (int *)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
          if (bVar5) {
            *unaff_x23 = *unaff_x23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (unaff_x21 == (long *)0x0) {
        FUN_100207120();
        unaff_x20 = extraout_x10;
        if (cVar9 == cVar8) {
          unaff_x20 = extraout_x8;
        }
        unaff_x21 = extraout_x11;
        if (-1 < (int)extraout_x9) {
          unaff_x21 = extraout_x9;
        }
      }
      unaff_x24 = (ulong)*(byte *)(param_1 + 0x199);
      func_0x00010017a608(&pppppuStack_80,&uStack_a8);
      ppppppuVar2 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70._7_1_) {
        ppppppuVar2 = &pppppuStack_80;
      }
      lVar12 = lStack_78;
      if (-1 < uStack_70) {
        lVar12 = (long)uStack_70._7_1_;
      }
      func_0x00010017a608(&pppppuStack_150,&uStack_c8);
      pppppuStack_170 = pppppuStack_150;
      if (-1 < (long)cStack_139) {
        pppppuStack_170 = &pppppuStack_150;
      }
      lStack_168 = lStack_148;
      if (-1 < cStack_139) {
        lStack_168 = (long)cStack_139;
      }
      func_0x000100207134(auStack_138,unaff_x23,unaff_x20,unaff_x21,unaff_x24,ppppppuVar2,lVar12);
      puVar13 = (undefined4 *)0x38;
      func_0x000107c60e20();
      *puVar13 = 1;
      *(undefined8 *)(puVar13 + 2) = 0x100222b9c;
      *(undefined8 *)(puVar13 + 4) = 0x10022bba4;
      *(undefined8 *)(puVar13 + 6) = 0x100142430;
      *(undefined8 *)(puVar13 + 8) = 0x100222bb8;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(long *)(puVar13 + 0xc) = param_1;
      param_2 = auStack_138;
      plVar21 = unaff_x22;
      puStack_158 = puVar13;
      (**(code **)(*unaff_x22 + 0x10))
                (unaff_x22,param_2,param_1 + 0x90,&puStack_158,param_1 + 0x120,param_1 + 0x338);
      *(int *)(param_1 + 0x130) = (int)plVar21;
      func_0x000100140e00(&puStack_158);
      func_0x0001002086d4(auStack_138);
      func_0x000107c60ca0(&pppppuStack_150);
      func_0x000107c60ca0(&pppppuStack_80);
    }
    unaff_x30 = 0x1002042a4;
    register0x00000008 = (BADSPACEBASE *)&pppppuStack_170;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(int **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar11 = *(int *)(param_1 + 0x130);
  if (iVar11 == -1) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x130) = 1;
  lVar12 = *(long *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (lVar12 != 0) {
    func_0x000100222bc0();
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    func_0x00010020703c();
    *(long *)((long)register0x00000008 + -0x60) = lVar12 - *(long *)(param_1 + 0x128);
    if (iVar11 == 0) {
      puVar22 = (undefined8 *)0x1137f5f90;
      if (lRam00000001137f5f90 == 0) {
        puVar15 = &UNK_10f759f4c;
        goto LAB_1002087c8;
      }
    }
    else {
      puVar22 = (undefined8 *)0x1137f5f98;
      if (lRam00000001137f5f98 == 0) {
        puVar15 = &UNK_10f759f68;
LAB_1002087c8:
        uVar17 = 1;
        FUN_100144cd0(1);
        uVar14 = 10;
        func_0x00010013b3a4(10);
        func_0x000100160900(puVar15,uVar17,uVar14,0x32,1);
        *puVar22 = puVar15;
      }
    }
    param_2 = (undefined1 *)((long)register0x00000008 + -0x60);
    FUN_100160b5c();
  }
  if ((*(char *)(param_1 + 0xe0) == '\x01') &&
     (lVar12 = *(long *)(*(long *)(param_1 + 0x138) + 8), lVar12 != 0)) {
    *(ushort *)(lVar12 + 0xe9) = *(ushort *)(lVar12 + 0xe9) | 0x10;
  }
  if (iVar11 == 0) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    plVar21 = (long *)(param_1 + 0xf0);
    lVar3 = *(long *)(param_1 + 0xf8);
    for (lVar12 = *plVar21; lVar12 != lVar3; lVar12 = lVar12 + 0x10) {
      if (*(int *)(lVar12 + 8) == 3) {
        func_0x000107c2e270((undefined1 *)((long)register0x00000008 + -0x60),lVar12);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x118) + 0x50);
    (**(code **)(*plVar16 + 0x10))
              (plVar16,*(undefined8 *)(param_1 + 0xb0),
               (undefined1 *)((long)register0x00000008 + -0x60),param_1 + 0x338);
    iVar11 = (int)plVar16;
    *(int *)(param_1 + 0x108) = iVar11;
    if (((*(uint *)(param_1 + 0xb8) >> 0x10 & 1) != 0) && (iVar11 != 0 && iVar11 != 3)) {
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffeffff | 0x100000;
    }
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x48);
    uVar10 = *(undefined1 *)(param_1 + 0xe0);
    uVar14 = *(undefined8 *)(param_1 + 0xb0);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    *(long *)((long)register0x00000008 + -0x68) = param_1 + 0x1f0;
    *(int *)((long)register0x00000008 + -0x70) = iVar11;
    func_0x000100222c7c(uVar17,param_1 + 0x150,uVar10,param_1 + 200,uVar14,uVar18,plVar21,0);
    plVar16 = *(long **)(*(long *)(param_1 + 0x118) + 0x60);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x10))
                (plVar16,param_1 + 0x150,*(undefined8 *)(param_1 + 0xb0),plVar21);
    }
    if ((int)uVar17 == 2) {
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x1000000;
      iVar11 = -0xd6;
    }
    else {
      iVar11 = 0;
    }
    func_0x0001002231f4((undefined1 *)((long)register0x00000008 + -0x60));
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x118) + 0x48);
    uVar10 = *(undefined1 *)(param_1 + 0xe0);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    uVar19 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)((long)register0x00000008 + -0x70) = param_1 + 0x308;
    param_2 = (undefined1 *)(param_1 + 0x150);
    func_0x0001002232a8(uVar14,param_2,uVar10,param_1 + 200,uVar18,uVar19,0,param_1 + 0x1f0);
    bVar6 = 1;
    if ((int)uVar14 == 2) {
      iVar20 = 0;
      *(undefined1 *)(param_1 + 800) = 1;
    }
    else if ((int)uVar14 == 0) {
      bVar6 = 0;
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x2000;
      iVar20 = -0x96;
    }
    else {
      iVar20 = 0;
    }
    if (!(bool)((int)uVar17 == 2 & bVar6)) {
      iVar11 = iVar20;
    }
  }
  uVar10 = 0;
  if ((iVar11 != -0xd9) && ((*(uint *)(param_1 + 0xb8) & 0xff00ffff) != 0)) {
    uVar10 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x118) + 0x48);
    param_2 = (undefined1 *)(param_1 + 0x150);
    func_0x000107c2fc80();
  }
  *(undefined1 *)(param_1 + 0x321) = uVar10;
  if ((iVar11 != -0x96 && 0x11 < iVar11 + 0xdaU) && (iVar11 == -0x96 || iVar11 + 0xdaU != 0x12)) {
    if (iVar11 != 0) goto LAB_100208a08;
  }
  else {
    FUN_100206fac(*(undefined8 *)(param_1 + 0x138));
    if (param_2 != (undefined1 *)0x0) {
      iVar11 = -0xb8;
    }
    if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
LAB_100208a08:
      func_0x0001001e5bfc(&UNK_10f759f89);
      FUN_10012dd4c((undefined1 *)((long)register0x00000008 + -0x60));
      func_0x000107c2e918((undefined1 *)((long)register0x00000008 + -0x60),iVar11);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1002042dc; end: 10020436b;  */

undefined8 FUN_1002042dc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x5e0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(lVar3 + 0x5d8), lVar1 != 0)) goto LAB_100204314;
    plVar2 = (long *)(param_1 + 0x58);
  }
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return 0;
  }
LAB_100204314:
  return *(undefined8 *)(lVar1 + 0x90);
}



/* Entry: 10020436c; end: 100204c27;  */

void FUN_10020436c(long *param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100204324(param_2);
  }
  *param_1 = param_2;
  return;
}



/* Entry: 100204c28; end: 100204c37;  */

/* WARNING: Removing unreachable block (ram,0x000100201a88) */
/* WARNING: Removing unreachable block (ram,0x000100201a94) */
/* WARNING: Removing unreachable block (ram,0x000100201a98) */
/* WARNING: Removing unreachable block (ram,0x000100201aec) */
/* WARNING: Removing unreachable block (ram,0x000100201af0) */
/* WARNING: Removing unreachable block (ram,0x000100201af8) */
/* WARNING: Removing unreachable block (ram,0x000100201b0c) */
/* WARNING: Removing unreachable block (ram,0x000100201b1c) */
/* WARNING: Removing unreachable block (ram,0x000100201a00) */
/* WARNING: Removing unreachable block (ram,0x000100201ad0) */
/* WARNING: Removing unreachable block (ram,0x000100201b34) */
/* WARNING: Removing unreachable block (ram,0x000100201ae8) */

void FUN_100204c28(long *param_1,long *param_2,undefined4 *param_3,ulong *param_4)

{
  byte bVar1;
  byte **ppbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uStack_64;
  byte *pbStack_60;
  long lStack_58;
  
  lStack_58 = param_1[1];
  pbStack_60 = (byte *)*param_1;
  ppbVar2 = &pbStack_60;
  FUN_100201c1c(ppbVar2,&uStack_64);
  if ((int)ppbVar2 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uStack_64;
    }
    if (lStack_58 != 0) {
      bVar1 = *pbStack_60;
      uVar4 = param_1[1];
      uVar3 = uVar4 - (lStack_58 - 1U);
      if ((char)bVar1 < '\0') {
        uVar6 = (ulong)bVar1 & 0x7f;
        if ((int)uVar6 - 5U < 0xfffffffc || lStack_58 - 1U < uVar6) {
          return;
        }
        uVar7 = 0;
        uVar8 = uVar6;
        do {
          pbStack_60 = pbStack_60 + 1;
          uVar7 = (ulong)*pbStack_60 | uVar7 << 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if (uVar7 < 0x80) {
          return;
        }
        if (uVar7 >> (uVar6 * 8 - 8 & 0x3f) == 0) {
          return;
        }
        uVar3 = uVar3 + uVar6;
        if (CARRY8(uVar7,uVar3)) {
          return;
        }
        uVar7 = uVar7 + uVar3;
      }
      else {
        uVar7 = uVar3 + bVar1;
      }
      if (param_4 != (ulong *)0x0) {
        *param_4 = uVar3;
        uVar4 = param_1[1];
      }
      if (uVar7 <= uVar4) {
        lVar5 = *param_1;
        *param_1 = lVar5 + uVar7;
        param_1[1] = uVar4 - uVar7;
        if (param_2 != (long *)0x0) {
          *param_2 = lVar5;
          param_2[1] = uVar7;
        }
      }
    }
  }
  return;
}



/* Entry: 100204c38; end: 100205507;  */

void FUN_100204c38(undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined4 uStack_5c;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  lStack_50 = -0x5555555555555556;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_5c = 0xaaaaaaaa;
  puVar1 = &uStack_40;
  FUN_100204c28(puVar1,&lStack_50,&uStack_5c,&uStack_58);
  if (((int)puVar1 != 0) && (uStack_58 <= uStack_48)) {
    param_1[2] = uStack_48;
    *param_2 = uStack_5c;
    *param_3 = lStack_50 + uStack_58;
    param_3[1] = uStack_48 - uStack_58;
  }
  return;
}



/* Entry: 100205508; end: 10020555b;  */

bool FUN_100205508(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)(bVar1 >> 7);
    }
    if (lVar4 == 1) {
      return true;
    }
    bVar2 = pbVar3[1];
    if ((bVar1 != 0) || ((char)bVar2 < '\0')) {
      return bVar1 != 0xff || (uint)(int)(char)bVar2 < 0x80000000;
    }
  }
  return false;
}



/* Entry: 10020555c; end: 10020686f;  */

void FUN_10020555c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *param_1;
  uStack_28 = param_1[1];
  iStack_34 = -0x55555556;
  puVar1 = &uStack_30;
  FUN_100205508(puVar1,&iStack_34);
  if ((int)puVar1 != 0) {
    *(bool *)param_2 = iStack_34 != 0;
  }
  return;
}



/* Entry: 100206870; end: 1002068ab;  */

long FUN_100206870(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1009bfa50();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1000480f4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1002068ac; end: 1002068b3;  */

void FUN_1002068ac(void)

{
  return;
}



/* Entry: 1002068b4; end: 100206f63;  */

void FUN_1002068b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
            (&stack0x00000008,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100206f64; end: 100206fab;  */

void FUN_100206f64(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
    if ((lVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 0xd0) == 2)) {
      *param_2 = *(undefined8 *)(*(long *)(lVar1 + 0x5f0) + 0x20);
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x5f0) + 0x28);
      goto LAB_100206fa4;
    }
  }
  uVar2 = 0;
  *param_2 = 0;
LAB_100206fa4:
  *param_3 = uVar2;
  return;
}



/* Entry: 100206fac; end: 100207047;  */

undefined1  [16] FUN_100206fac(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0xaaaaaaaaaaaaaaaa;
  uStack_18 = 0xaaaaaaaaaaaaaaaa;
  FUN_100206f64(param_1,&uStack_18,&uStack_20);
  auVar1._8_8_ = uStack_20;
  auVar1._0_8_ = uStack_18;
  return auVar1;
}



/* Entry: 100207048; end: 10020711f;  */

void FUN_100207048(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x5e0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(lVar3 + 0x5d8), lVar1 != 0)) goto LAB_10020707c;
    plVar2 = (long *)(param_1 + 0x58);
  }
  lVar1 = *plVar2;
LAB_10020707c:
  if ((((*(byte *)(param_1 + 0xa4) & 1) == 0) && (lVar1 != 0)) && (*(long *)(lVar1 + 0x108) != 0)) {
    *param_2 = *(undefined8 *)(*(long *)(lVar1 + 0x108) + 8);
    *param_3 = *(undefined8 *)(*(long *)(lVar1 + 0x108) + 0x10);
    return;
  }
  *param_3 = 0;
  *param_2 = 0;
  return;
}



/* Entry: 100207120; end: 10020727f;  */

void FUN_100207120(void)

{
  return;
}



/* Entry: 100207280; end: 100207517;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_100207280(ulong *param_1,ulong *param_2,long param_3,undefined8 *param_4,long *param_5,
                     undefined8 param_6)

{
  ulong uVar1;
  char cVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  
  uVar12 = 0x7ffffffffffffff7;
  if ((ulong *)0x7ffffffffffffff6 < param_2) {
    func_0x000104bd47d4();
    puVar13 = param_1;
    goto LAB_100207514;
  }
  cVar2 = *(char *)((long)param_1 + 0x17);
  uVar16 = (ulong)cVar2;
  if ((long)uVar16 < 0) {
    uVar14 = param_1[2] >> 0x38;
    if (param_2 <= (ulong *)((param_1[2] & 0x7fffffffffffffff) - 1)) goto LAB_100207338;
LAB_1002072cc:
    puVar13 = (ulong *)0x19;
    if (((ulong)param_2 | 7) != 0x17) {
      puVar13 = (ulong *)(((ulong)param_2 | 7) + 1);
    }
    puVar6 = (ulong *)0x17;
    if ((ulong *)0x16 < param_2) {
      puVar6 = puVar13;
    }
    puVar3 = puVar6;
    func_0x000107c60e20();
    puVar8 = param_1;
    if (cVar2 < '\0') {
      uVar16 = param_1[1];
      puVar8 = (ulong *)*param_1;
    }
    param_3 = uVar16 + 1;
    puVar13 = puVar3;
    if (uVar16 != 0xffffffffffffffff) {
      func_0x000107c610b8(puVar3,puVar8);
    }
    if (cVar2 < '\0') {
      puVar13 = (ulong *)*param_1;
      func_0x000107c60e14();
    }
    param_1[1] = uVar16;
    param_1[2] = (ulong)puVar6 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
LAB_100207398:
    uVar16 = (long)param_2 - 1;
    uVar14 = param_1[1];
    uVar15 = uVar16 - uVar14;
    if (uVar14 <= uVar16 && uVar15 != 0) {
      if (uVar15 == 0) goto LAB_100207494;
      uVar16 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar11 = (uint)(param_1[2] >> 0x3f);
      bVar9 = true;
      param_2 = puVar8;
      if (uVar16 - uVar14 < uVar15) {
LAB_1002073c8:
        if (0x7ffffffffffffff7 - uVar16 < (uVar15 - uVar16) + uVar14) {
LAB_100207514:
          func_0x000104c4f6b8();
          lVar5 = *param_5;
          *param_5 = 0;
          if (lVar5 != 0) {
            func_0x000107c3601c();
          }
          puVar13[9] = puVar13[9] + 1;
          (*(code *)PTR_FUN_11336f910)();
          puVar8 = puVar13 + 5;
          func_0x0001002076c8(puVar8,param_2);
          puVar6 = puVar8;
          if (puVar13 + 6 != puVar8) {
            if ((long)puVar8[0x23] <= lVar5 && lVar5 < (long)puVar8[0x24]) {
              puVar13[10] = puVar13[10] + 1;
              func_0x0001002220b8(param_3,puVar8 + 0x13);
              return (ulong *)(ulong)(uint)puVar8[0x12];
            }
            puVar6 = puVar13 + 5;
            func_0x000107c2d4ec(puVar6,puVar8);
          }
          (*(code *)PTR_FUN_11336f910)();
          uVar12 = puVar13[3];
          puVar7 = (undefined4 *)0xc8;
          func_0x000107c60e20();
          *puVar7 = 1;
          *(undefined8 *)(puVar7 + 2) = 0x1002226ac;
          *(undefined8 *)(puVar7 + 4) = 0x10022bba8;
          *(undefined8 *)(puVar7 + 6) = 0x100142430;
          *(undefined8 *)(puVar7 + 8) = 0x1002229a8;
          *(undefined8 *)(puVar7 + 10) = 0;
          *(ulong **)(puVar7 + 0xc) = puVar13;
          puVar7[0xe] = (int)uVar12;
          func_0x00010020774c(puVar7 + 0x10,param_2);
          uVar10 = *param_4;
          *(ulong **)(puVar7 + 0x2c) = puVar6;
          *(undefined8 *)(puVar7 + 0x2e) = uVar10;
          *param_4 = 0;
          *(long *)(puVar7 + 0x30) = param_3;
          puVar8 = (ulong *)puVar13[2];
          uStack_b8 = 0;
          puStack_c0 = puVar7;
          (**(code **)(*puVar8 + 0x10))(puVar8,param_2,param_3,&puStack_c0,param_5,param_6);
          func_0x000100140e00(&puStack_c0);
          if ((int)puVar8 != -1) {
            func_0x000100222710(puVar13,(int)puVar13[3],param_2,puVar6,param_3,puVar8);
          }
          func_0x000100140e00(&uStack_b8);
          return puVar8;
        }
        if (bVar9) {
          puVar13 = (ulong *)*param_1;
          if (uVar16 < 0x3ffffffffffffff3) goto LAB_1002074d0;
LAB_1002073f4:
          uVar4 = uVar12;
          func_0x000107c60e20();
        }
        else {
          puVar13 = param_1;
          if (0x3ffffffffffffff2 < uVar16) goto LAB_1002073f4;
LAB_1002074d0:
          uVar4 = uVar14 + uVar15;
          if (uVar14 + uVar15 <= uVar16 * 2) {
            uVar4 = uVar16 * 2;
          }
          uVar1 = 0x19;
          if ((uVar4 | 7) != 0x17) {
            uVar1 = (uVar4 | 7) + 1;
          }
          uVar12 = 0x17;
          if (0x16 < uVar4) {
            uVar12 = uVar1;
          }
          uVar4 = uVar12;
          func_0x000107c60e20();
        }
        if (uVar14 != 0) {
          func_0x000107c610b8(uVar4,puVar13,uVar14);
        }
        if (uVar16 != 0x16) {
          func_0x000107c60e14(puVar13);
        }
        param_1[1] = uVar14;
        param_1[2] = uVar12 | 0x8000000000000000;
        *param_1 = uVar4;
LAB_100207430:
        puVar13 = (ulong *)*param_1;
        func_0x000107c60ee4((long)puVar13 + uVar14,uVar15);
        uVar14 = uVar14 + uVar15;
        cVar2 = *(char *)((long)param_1 + 0x17);
      }
      else {
LAB_100207368:
        if (uVar11 != 0) goto LAB_100207430;
        func_0x000107c60ee4((long)param_1 + uVar14,uVar15);
        uVar14 = uVar14 + uVar15;
        cVar2 = *(char *)((long)param_1 + 0x17);
        puVar13 = param_1;
      }
      if (cVar2 < '\0') {
        param_1[1] = uVar14;
        *(undefined1 *)((long)puVar13 + uVar14) = 0;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar14 & 0x7f;
        *(undefined1 *)((long)puVar13 + uVar14) = 0;
      }
      goto LAB_100207494;
    }
    param_1[1] = uVar16;
    puVar13 = (ulong *)*param_1;
  }
  else {
    uVar14 = uVar16;
    if ((ulong *)0x16 < param_2) goto LAB_1002072cc;
LAB_100207338:
    uVar16 = (long)param_2 - 1;
    puVar13 = param_1;
    puVar8 = param_2;
    if (((uint)uVar14 >> 7 & 1) != 0) goto LAB_100207398;
    uVar14 = uVar14 & 0xff;
    uVar15 = uVar16 - uVar14;
    if (uVar14 <= uVar16 && uVar15 != 0) {
      if (uVar15 == 0) goto LAB_100207494;
      bVar9 = false;
      uVar11 = 0;
      uVar16 = 0x16;
      if (0x16 - uVar14 < uVar15) goto LAB_1002073c8;
      goto LAB_100207368;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar16;
  }
  *(undefined1 *)((long)puVar13 + (long)param_2 + -1) = 0;
LAB_100207494:
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 100207518; end: 100208c37;  */

long * FUN_100207518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                    long *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = *param_5;
  *param_5 = 0;
  if (lVar2 != 0) {
    func_0x000107c3601c();
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  (*(code *)PTR_FUN_11336f910)();
  lVar3 = param_1 + 0x28;
  func_0x0001002076c8(lVar3,param_2);
  lVar4 = lVar3;
  if (param_1 + 0x30 != lVar3) {
    if (*(long *)(lVar3 + 0x118) <= lVar2 && lVar2 < *(long *)(lVar3 + 0x120)) {
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      func_0x0001002220b8(param_3,lVar3 + 0x98);
      return (long *)(ulong)*(uint *)(lVar3 + 0x90);
    }
    lVar4 = param_1 + 0x28;
    func_0x000107c2d4ec(lVar4,lVar3);
  }
  (*(code *)PTR_FUN_11336f910)();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar5 = (undefined4 *)0xc8;
  func_0x000107c60e20();
  *puVar5 = 1;
  *(undefined8 *)(puVar5 + 2) = 0x1002226ac;
  *(undefined8 *)(puVar5 + 4) = 0x10022bba8;
  *(undefined8 *)(puVar5 + 6) = 0x100142430;
  *(undefined8 *)(puVar5 + 8) = 0x1002229a8;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(long *)(puVar5 + 0xc) = param_1;
  puVar5[0xe] = uVar1;
  func_0x00010020774c(puVar5 + 0x10,param_2);
  uVar7 = *param_4;
  *(long *)(puVar5 + 0x2c) = lVar4;
  *(undefined8 *)(puVar5 + 0x2e) = uVar7;
  *param_4 = 0;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  plVar6 = *(long **)(param_1 + 0x10);
  uStack_68 = 0;
  puStack_70 = puVar5;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3,&puStack_70,param_5,param_6);
  func_0x000100140e00(&puStack_70);
  if ((int)plVar6 != -1) {
    func_0x000100222710(param_1,*(undefined4 *)(param_1 + 0x18),param_2,lVar4,param_3,plVar6);
  }
  func_0x000100140e00(&uStack_68);
  return plVar6;
}



/* Entry: 100208c38; end: 100208cb7;  */

void FUN_100208c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd2f30,&UNK_10d995670);
  puVar1 = &UNK_1104121a8;
  func_0x000107c613fc(&UNK_1104121a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10191926c,puVar1);
  return;
}



/* Entry: 100208cb8; end: 100208d03;  */

void FUN_100208cb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100208d04; end: 100208e2b;  */

void FUN_100208d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd2e08,&UNK_10d9954b0);
  puVar1 = &UNK_110412100;
  func_0x000107c613fc(&UNK_110412100,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  FUN_1000823a8(FUN_1009c4110,puVar1);
  return;
}



/* Entry: 100208e2c; end: 100208e4b;  */

void FUN_100208e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd2e80);
  return;
}



/* Entry: 100208e4c; end: 100208e67;  */

void FUN_100208e4c(undefined8 param_1)

{
  FUN_1000285a8(0x112df6ea8,&UNK_10d9c63e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10041976c,param_1);
  return;
}



/* Entry: 100208e68; end: 100208eb7;  */

void FUN_100208e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100208eb8; end: 10020902b;  */

void FUN_100208eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc8e40,&UNK_10d989e90);
  puVar1 = &UNK_110407300;
  func_0x000107c613fc(&UNK_110407300,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  FUN_1000823a8(FUN_1002568c4,puVar1);
  return;
}



/* Entry: 10020902c; end: 10020904b;  */

void FUN_10020902c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc8eb0);
  return;
}



/* Entry: 10020904c; end: 1002090ef;  */

void FUN_10020904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddff10,&UNK_10d9a7750);
  puVar1 = &UNK_11041f340;
  func_0x000107c613fc(&UNK_11041f340,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101988eb4,puVar1);
  return;
}



/* Entry: 1002090f0; end: 10020914b;  */

void FUN_1002090f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10020914c; end: 100209167;  */

void FUN_10020914c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddff18,&UNK_10d9a7758);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101989220,param_1);
  return;
}



/* Entry: 100209168; end: 1002091b7;  */

void FUN_100209168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002091b8; end: 1002091d7;  */

void FUN_1002091b8(void)

{
  func_0x000107c61168(&PTR_PTR_112db0498);
  return;
}



/* Entry: 1002091d8; end: 1002091fb;  */

void FUN_1002091d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110735c18;
  FUN_1000285a8(0x1130480c8,&UNK_10dcc3848);
  func_0x000107c613fc(&UNK_110735c18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009caa34,puVar1);
  return;
}



/* Entry: 1002091fc; end: 10020927b;  */

void FUN_1002091fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 10020927c; end: 10020929b;  */

void FUN_10020927c(void)

{
  func_0x000107c61168(&PTR_PTR_11297e118);
  return;
}



/* Entry: 10020929c; end: 1002092e7;  */

void FUN_10020929c(undefined8 param_1)

{
  FUN_1000285a8(0x113049348,&UNK_10dcc4618);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cfb80,param_1);
  return;
}



/* Entry: 1002092e8; end: 100209307;  */

void FUN_1002092e8(void)

{
  func_0x000107c61168(&PTR_PTR_11297f610);
  return;
}



/* Entry: 100209308; end: 1002093c3;  */

void FUN_100209308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dcb630,&UNK_10d98da50);
  puVar1 = &UNK_1104092b8;
  func_0x000107c613fc(&UNK_1104092b8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1003fd48c,puVar1);
  return;
}



/* Entry: 1002093c4; end: 1002093e3;  */

void FUN_1002093c4(void)

{
  func_0x000107c61168(&PTR_PTR_112dcb6a8);
  return;
}



/* Entry: 1002093e4; end: 100209497; +[SCDiskUtility totalDiskSpace:] */

undefined * FUN_1002093e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_1001f4a7c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c3e384(puVar1,param_2,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c4d9c0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemSize_110345468);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5d38c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 100209498; end: 1002094b3;  */

void FUN_100209498(undefined8 param_1)

{
  FUN_1000285a8(0x112dcb638,&UNK_10d98da58);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fd430,param_1);
  return;
}



/* Entry: 1002094b4; end: 100209503;  */

void FUN_1002094b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100209504; end: 100209523;  */

void FUN_100209504(void)

{
  func_0x000107c61168(&PTR_PTR_11294f090);
  return;
}



/* Entry: 100209524; end: 1002095a3;  */

void FUN_100209524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df3608,&UNK_10d9c1a90);
  puVar1 = &UNK_110436eb0;
  func_0x000107c613fc(&UNK_110436eb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101a80d0c,puVar1);
  return;
}



/* Entry: 1002095a4; end: 1002095ef;  */

void FUN_1002095a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002095f0; end: 1002096b7;  */

void FUN_1002095f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dde8f0,&UNK_10d9a4f60);
  puVar1 = &UNK_11041e2d8;
  func_0x000107c613fc(&UNK_11041e2d8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_10097ba58,puVar1);
  return;
}



/* Entry: 1002096b8; end: 1002096d7;  */

void FUN_1002096b8(void)

{
  func_0x000107c61168(&PTR_PTR_112dde968);
  return;
}



/* Entry: 1002096d8; end: 1002096f3;  */

void FUN_1002096d8(undefined8 param_1)

{
  FUN_1000285a8(0x112dde8f8,&UNK_10d9a4f68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10097b9fc,param_1);
  return;
}



/* Entry: 1002096f4; end: 100209743;  */

void FUN_1002096f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100209744; end: 100209763;  */

void FUN_100209744(void)

{
  func_0x000107c61168(&PTR_PTR_1129593c0);
  return;
}



/* Entry: 100209764; end: 1002097fb;  */

void FUN_100209764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dde9f8,&UNK_10d9a5150);
  puVar1 = &UNK_11041e3a0;
  func_0x000107c613fc(&UNK_11041e3a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1003e08e4,puVar1);
  return;
}



/* Entry: 1002097fc; end: 10020981b;  */

void FUN_1002097fc(void)

{
  func_0x000107c61168(&PTR_PTR_112ddea70);
  return;
}



/* Entry: 10020981c; end: 100209837;  */

void FUN_10020981c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddea00,&UNK_10d9a5158);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003e0888,param_1);
  return;
}



/* Entry: 100209838; end: 100209887;  */

void FUN_100209838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100209888; end: 1002098a7;  */

void FUN_100209888(void)

{
  func_0x000107c61168(&PTR_PTR_11295a320);
  return;
}


