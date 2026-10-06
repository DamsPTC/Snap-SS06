/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd171e8; end: 10bd1720b;  */

void FUN_10bd171e8(void)

{
  func_0x000107c3a880();
  FUN_10bd17320();
  func_0x000107c3a888();
  return;
}



/* Entry: 10bd1720c; end: 10bd1731f;  */

void FUN_10bd1720c(undefined8 param_1,int param_2)

{
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar1;
  uint unaff_w22;
  uint uVar2;
  long lVar3;
  
  func_0x000107c3a8c4();
  if (param_2 == 6) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar2 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x000107c3a784(uVar2);
  FUN_10bd17008();
  func_0x000107c3a7b0();
  lVar3 = unaff_x20 + (extraout_x8 & 0xffffffff) * 0x28;
  if (unaff_w22 < *(byte *)(unaff_x21 + 10)) {
    func_0x000107c3a818();
    FUN_10bd17358();
  }
  func_0x000107c3a78c(unaff_x21 + (ulong)unaff_w22 * 0x28);
  *(undefined4 *)(extraout_x8_00 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
  func_0x000107c3a824();
  if (extraout_w8 == 0) {
    uVar2 = (uint)lVar3;
    if (unaff_w22 + 1 < (uVar2 & 0xff)) {
      while (unaff_w22 + 1 < (uVar2 & 0xff)) {
        func_0x00010bd17a48();
        func_0x000107c3a854();
        FUN_10bd17320();
        func_0x000107c3a8a4();
      }
    }
  }
  lVar3 = unaff_x20 + (ulong)*(byte *)(unaff_x20 + 10) * 0x28 + 0x18;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107c3a834();
  FUN_10bd17320();
  *(long *)(lVar3 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    func_0x00010bd16d44();
    for (bVar1 = 0; bVar1 <= *(byte *)(unaff_x19 + 10); bVar1 = bVar1 + 1) {
      func_0x00010bd17830();
      FUN_10bd171e8();
    }
  }
  return;
}



/* Entry: 10bd17320; end: 10bd17357;  */

long FUN_10bd17320(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bd17874(1,4);
  FUN_10bd16cc4();
  return param_1 + lVar1;
}



/* Entry: 10bd17358; end: 10bd173bb;  */

void FUN_10bd17358(undefined8 param_1,long param_2)

{
  for (param_2 = param_2 * -0x28; param_2 != 0; param_2 = param_2 + 0x28) {
    func_0x000107c3a80c();
    FUN_10bd1712c();
  }
  return;
}



/* Entry: 10bd173bc; end: 10bd17433;  */

void FUN_10bd173bc(long *param_1)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 extraout_x8_00;
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010bd178e0();
  if (extraout_w8 != 0) {
    func_0x00010bd178a4();
    if (in_NG != in_OV) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      func_0x000107c3a8a8();
      uVar1 = extraout_x8;
      while( true ) {
        if (unaff_w20 != (int)uVar1) {
          return;
        }
        if (*(char *)(*param_1 + 0xb) != '\0') break;
        func_0x00010bd177f0();
        uVar1 = extraout_x8_00;
      }
      func_0x00010bd17894();
      *(undefined4 *)(unaff_x19 + 8) = extraout_w8_01;
      return;
    }
  }
  func_0x000107c3167c();
  func_0x00010bd1799c();
  while (func_0x000107c3a8d0(), extraout_w8_00 == 0) {
    FUN_10bd16610();
  }
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 10bd17434; end: 10bd1743f;  */

long FUN_10bd17434(long param_1)

{
  func_0x00010bd177e4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd1664c(param_1);
  }
  return param_1;
}



/* Entry: 10bd17440; end: 10bd17503;  */

long FUN_10bd17440(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd1664c(param_1);
  }
  return param_1;
}



/* Entry: 10bd17504; end: 10bd1750f;  */

long FUN_10bd17504(long param_1)

{
  func_0x00010bd177e4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd16568(param_1);
  }
  return param_1;
}



/* Entry: 10bd17510; end: 10bd1755b;  */

long FUN_10bd17510(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd16568(param_1);
  }
  return param_1;
}



/* Entry: 10bd1755c; end: 10bd17567;  */

long FUN_10bd1755c(long param_1)

{
  func_0x00010bd177e4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd17594(param_1);
  }
  return param_1;
}



/* Entry: 10bd17568; end: 10bd175c7;  */

long FUN_10bd17568(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bd17594(param_1);
  }
  return param_1;
}



/* Entry: 10bd175c8; end: 10bd17607;  */

void FUN_10bd175c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + -0x20);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10bd17608; end: 10bd17703;  */

void FUN_10bd17608(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3a810();
  func_0x00010bd17888();
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10bd17704; end: 10bd17a8f;  */

void FUN_10bd17704(void)

{
  return;
}



/* Entry: 10bd17a90; end: 10bd17cf3;  */

void FUN_10bd17a90(long param_1,int param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int iVar5;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar9 = *(ulong *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar11 + 0x80);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar5 = 0;
  for (iVar6 = 0; iVar6 < *(int *)(lVar8 + 0x7c); iVar6 = iVar6 + 1) {
    *(undefined4 *)(param_1 + (iVar5 + *(int *)(lVar11 + 8))) = 0;
    iVar5 = iVar5 + 4;
  }
  if (*(int *)(lVar11 + 0xc) != -1) {
    puVar1 = (ulong *)(param_1 + *(int *)(lVar11 + 0xc));
    *puVar1 = uVar9;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
  }
  lVar10 = 0;
  lVar11 = 0;
  do {
    if (*(int *)(lVar8 + 4) <= lVar11) {
      return;
    }
    lVar12 = *(long *)(lVar8 + 0x38);
    iVar6 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar11 * 4);
    uVar3 = lVar12 + lVar10;
    FUN_10bd17cf4();
    if ((uVar3 & 1) == 0) {
      iVar5 = (int)lVar12 + (int)lVar10;
      func_0x00010b91adc8();
      if (iVar5 - 1U < 10) {
        puVar2 = (undefined8 *)(param_1 + iVar6);
        switch(iVar5) {
        default:
          func_0x00010bd18b4c();
          if ((extraout_w9 >> 5 & 1) != 0) goto code_r0x00010bd17c24;
          uVar4 = *(undefined4 *)(extraout_x8 + 0x50);
code_r0x00010bd17bf4:
          *(undefined4 *)puVar2 = uVar4;
          break;
        case 2:
        case 4:
          func_0x00010bd18b4c();
          if ((extraout_w9_00 >> 5 & 1) != 0) goto code_r0x00010bd17c24;
          *puVar2 = *(undefined8 *)(extraout_x8_00 + 0x50);
          break;
        case 5:
          func_0x00010bd18b4c();
          if ((extraout_w9_01 >> 5 & 1) != 0) goto code_r0x00010bd17c24;
          *puVar2 = *(undefined8 *)(extraout_x8_01 + 0x50);
          break;
        case 6:
          func_0x00010bd18b4c();
          if ((extraout_w9_02 >> 5 & 1) != 0) goto code_r0x00010bd17c24;
          *(undefined4 *)puVar2 = *(undefined4 *)(extraout_x8_02 + 0x50);
          break;
        case 7:
          func_0x00010bd18b4c();
          if ((extraout_w9_03 >> 5 & 1) != 0) goto code_r0x00010bd17c24;
          *(undefined1 *)puVar2 = *(undefined1 *)(extraout_x8_03 + 0x50);
          break;
        case 8:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            lVar12 = lVar12 + lVar10;
            FUN_10bceee30();
            uVar4 = *(undefined4 *)(lVar12 + 4);
            goto code_r0x00010bd17bf4;
          }
code_r0x00010bd17c24:
          *puVar2 = 0;
          puVar2[1] = uVar9;
          break;
        case 9:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            *puVar2 = &DAT_11383d918;
          }
          else {
code_r0x00010bd17c84:
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = uVar9;
          }
          break;
        case 10:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            *puVar2 = 0;
          }
          else {
            iVar6 = (int)lVar12 + (int)lVar10;
            func_0x00010b91c030();
            if (iVar6 == 0) goto code_r0x00010bd17c84;
            plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
            lVar12 = lVar12 + lVar10;
            FUN_10bcee28c(lVar12);
            if (param_2 == 0) {
              FUN_10bd17d10(plVar7,lVar12);
            }
            else {
              (**(code **)(*plVar7 + 0x10))();
            }
            if (uVar9 == 0) {
              FUN_10bd29998(puVar2);
            }
            else {
              *puVar2 = &PTR_DAT_110d9d230;
              puVar2[1] = uVar9;
              puVar2[3] = 0x100000000;
              puVar2[2] = 0x100000000;
              puVar2[4] = &DAT_10e5b4a18;
              puVar2[5] = uVar9;
              puVar2[6] = plVar7;
            }
          }
        }
      }
    }
    lVar11 = lVar11 + 1;
    lVar10 = lVar10 + 0x58;
  } while( true );
}



/* Entry: 10bd17cf4; end: 10bd17d0f;  */

bool FUN_10bd17cf4(long param_1)

{
  FUN_10bcddbd4();
  return param_1 != 0;
}



/* Entry: 10bd17d10; end: 10bd18313;  */

undefined8 * FUN_10bd17d10(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  uint6 uVar22;
  byte bVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined8 uVar24;
  byte bVar30;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  puStack_88 = param_2;
  if (((*(char *)(param_1 + 0x10) != '\x01') ||
      (lVar17 = *(long *)(param_2[2] + 0x18), lVar11 = param_1, FUN_10bcedc88(), lVar17 != lVar11))
     || (FUN_10bd2b700(), param_2 == (undefined8 *)0x0)) {
    puVar16 = (ulong *)(param_1 + 0x18);
    Hint_Prefetch(*puVar16,0,2,0);
    puVar7 = puVar16;
    FUN_10bd044a0(*puVar16,puVar16,&puStack_88);
    lVar11 = 0;
    uVar14 = *puVar16 >> 0xc ^ (ulong)puVar7 >> 7;
    bVar1 = (byte)puVar7;
    uVar22 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar14 = uVar14 & *(ulong *)(param_1 + 0x28);
      uVar24 = *(undefined8 *)(*puVar16 + uVar14);
      cVar25 = (char)((ulong)uVar24 >> 8);
      cVar26 = (char)((ulong)uVar24 >> 0x10);
      cVar27 = (char)((ulong)uVar24 >> 0x18);
      cVar28 = (char)((ulong)uVar24 >> 0x20);
      cVar29 = (char)((ulong)uVar24 >> 0x28);
      bVar23 = (byte)((ulong)uVar24 >> 0x30);
      bVar30 = (byte)((ulong)uVar24 >> 0x38);
      for (uVar15 = CONCAT17(-(bVar30 == (bVar1 & 0x7f)),
                             CONCAT16(-(bVar23 == (bVar1 & 0x7f)),
                                      CONCAT15(-(cVar29 == (char)(uVar22 >> 0x28)),
                                               CONCAT14(-(cVar28 == (char)(uVar22 >> 0x20)),
                                                        CONCAT13(-(cVar27 == (char)(uVar22 >> 0x18))
                                                                 ,CONCAT12(-(cVar26 ==
                                                                            (char)(uVar22 >> 0x10)),
                                                                           CONCAT11(-(cVar25 ==
                                                                                     (char)(uVar22 
                                                  >> 8)),-((char)uVar24 == (char)uVar22)))))))) &
                    0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
        uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar17 = *(long *)(param_1 + 0x20);
        puVar7 = (ulong *)(uVar14 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                          *(ulong *)(param_1 + 0x28));
        if (*(undefined8 **)(lVar17 + (long)puVar7 * 0x10) == puStack_88) goto LAB_10bd17e2c;
      }
      bVar23 = NEON_umaxv(CONCAT17(-(bVar30 == 0x80),
                                   CONCAT16(-(bVar23 == 0x80),
                                            CONCAT15(-(cVar29 == -0x80),
                                                     CONCAT14(-(cVar28 == -0x80),
                                                              CONCAT13(-(cVar27 == -0x80),
                                                                       CONCAT12(-(cVar26 == -0x80),
                                                                                CONCAT11(-(cVar25 ==
                                                                                          -0x80),-((
                                                  char)uVar24 == -0x80)))))))),1);
      if ((bVar23 & 1) != 0) break;
      lVar11 = lVar11 + 8;
      uVar14 = lVar11 + uVar14;
    }
    FUN_10bd1894c();
    lVar17 = *(long *)(param_1 + 0x20);
    puVar10 = (undefined8 *)(lVar17 + (long)puVar16 * 0x10);
    *puVar10 = puStack_88;
    puVar10[1] = 0;
    puVar7 = puVar16;
LAB_10bd17e2c:
    puVar10 = puStack_88;
    plVar20 = (long *)(lVar17 + (long)puVar7 * 0x10 + 8);
    lVar11 = *plVar20;
    if (lVar11 == 0) {
      piVar8 = (int *)0x90;
      __Znwm();
      piVar19 = piVar8 + 8;
      piVar19[0] = 0;
      piVar19[1] = 0;
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      piVar8[0xc] = 0;
      piVar8[0xd] = 0;
      piVar8[0x10] = 0;
      piVar8[0x11] = 0;
      piVar8[0x12] = 0;
      piVar8[0x13] = 0;
      piVar8[0x14] = 0xbd2b4a4;
      piVar8[0x15] = 1;
      piVar8[0x16] = 0x18;
      *(undefined1 *)(piVar8 + 0x17) = 0;
      *(code **)(piVar8 + 0x18) = FUN_10bd2b2dc;
      *(undefined ***)(piVar8 + 0x1a) = &PTR_DAT_110d9dbd8;
      piVar8[0x1e] = 0;
      piVar8[0x1f] = 0;
      piVar8[0x1c] = 0;
      piVar8[0x1d] = 0;
      piVar8[0x22] = 0;
      piVar8[0x23] = 0;
      piVar8[0x20] = 0;
      piVar8[0x21] = 0;
      *plVar20 = (long)piVar8;
      *(undefined8 **)(piVar8 + 0x20) = puVar10;
      lVar11 = *(long *)(param_1 + 8);
      if (lVar11 == 0) {
        lVar11 = *(long *)(puVar10[2] + 0x18);
      }
      *(long *)(piVar8 + 4) = param_1;
      *(long *)(piVar8 + 6) = lVar11;
      iVar6 = *(int *)((long)puVar10 + 0x7c);
      uVar5 = *(int *)((long)puVar10 + 4) + iVar6;
      uVar14 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      if ((int)uVar5 < 0 != SCARRY4(*(int *)((long)puVar10 + 4),iVar6)) {
        uVar14 = 0xffffffffffffffff;
      }
      __Znam();
      FUN_10bd187a4(piVar19,uVar14);
      iVar18 = 0;
      piVar8[1] = -1;
      for (lVar11 = 0; uVar15 = (ulong)*(int *)((long)puStack_88 + 4), lVar11 < (long)uVar15;
          lVar11 = lVar11 + 1) {
        iVar4 = (int)puStack_88[7] + (int)lVar11 * 0x58;
        func_0x00010bcfd6f4();
        puVar10 = puStack_88;
        if (iVar4 != 0) {
          if (piVar8[1] == -1) {
            piVar8[1] = 0x20;
            lVar17 = (long)*(int *)((long)puStack_88 + 4) << 2;
            if (*(int *)((long)puStack_88 + 4) < 0) {
              lVar17 = -1;
            }
            __Znam();
            for (lVar12 = 0; lVar12 < *(int *)((long)puVar10 + 4); lVar12 = lVar12 + 1) {
              *(undefined4 *)(lVar17 + lVar12 * 4) = 0xffffffff;
            }
            FUN_10bd187a4(piVar8 + 10);
          }
          *(int *)(*(long *)(piVar8 + 10) + lVar11 * 4) = iVar18;
          iVar18 = iVar18 + 1;
        }
      }
      iVar4 = 0x20;
      if (0 < iVar18) {
        iVar4 = (((iVar18 + 0x1f) / 0x20) * 4 + 0x27) / 8 << 3;
      }
      if (0 < iVar6) {
        piVar8[2] = iVar4;
        iVar4 = (iVar4 + iVar6 * 4 + 7) / 8 << 3;
      }
      lVar17 = 0;
      lVar11 = 0;
      iVar6 = iVar4;
      iVar18 = -1;
      if (0 < *(int *)(puStack_88 + 0x11)) {
        iVar6 = (iVar4 + 0x1f) / 8 << 3;
        iVar18 = iVar4;
      }
      piVar8[3] = iVar18;
      for (; lVar11 < (int)uVar15; lVar11 = lVar11 + 1) {
        uVar15 = puStack_88[7] + lVar17;
        FUN_10bd17cf4();
        if ((uVar15 & 1) == 0) {
          lVar12 = puStack_88[7] + lVar17;
          bVar1 = *(byte *)(lVar12 + 1);
          lVar21 = lVar12;
          func_0x00010b91adc8();
          uVar5 = (uint)lVar21;
          if (bVar1 < 0xc0) {
            iVar4 = 4;
            uVar5 = 1 << (ulong)(uVar5 & 0x1f);
            iVar18 = 8;
            if ((uVar5 & 0x634) != 0) goto LAB_10bd18070;
            iVar18 = 4;
            if ((uVar5 & 0x14a) == 0) {
              iVar4 = 1;
              iVar18 = 1;
            }
          }
          else {
            if (uVar5 - 1 < 8) {
              iVar18 = 0x10;
            }
            else if (uVar5 == 9) {
              iVar18 = 0x18;
            }
            else {
              func_0x00010b91c030();
              iVar18 = 0x38;
              if ((int)lVar12 == 0) {
                iVar18 = 0x18;
              }
            }
LAB_10bd18070:
            iVar4 = iVar18;
            iVar18 = 8;
          }
          iVar3 = 0;
          if (iVar18 != 0) {
            iVar3 = (iVar6 + iVar18 + -1) / iVar18;
          }
          *(int *)(uVar14 + lVar11 * 4) = iVar3 * iVar18;
          iVar6 = iVar3 * iVar18 + iVar4;
        }
        uVar15 = (ulong)*(uint *)((long)puStack_88 + 4);
        lVar17 = lVar17 + 0x58;
      }
      for (lVar11 = 0; iVar18 = *(int *)((long)puStack_88 + 0x7c), (int)lVar11 < iVar18;
          lVar11 = lVar11 + 1) {
        iVar6 = ((iVar6 + 7) / 8) * 8;
        *(int *)(uVar14 + (lVar11 + *(int *)((long)puStack_88 + 4)) * 4) = iVar6;
        iVar6 = iVar6 + 8;
      }
      piVar8[0xe] = -1;
      *piVar8 = iVar6;
      puVar10 = puStack_88;
      for (lVar11 = 0; lVar11 < iVar18; lVar11 = lVar11 + 1) {
        iVar18 = 0;
        for (lVar17 = 0; lVar12 = puVar10[8] + lVar11 * 0x38, lVar17 < *(int *)(lVar12 + 4);
            lVar17 = lVar17 + 1) {
          iVar4 = (int)*(undefined8 *)(lVar12 + 0x30) + iVar18;
          func_0x00010b91ad64();
          *(undefined4 *)(uVar14 + (long)iVar4 * 4) = 0x40000000;
          iVar18 = iVar18 + 0x58;
          puVar10 = puStack_88;
        }
        iVar18 = *(int *)((long)puVar10 + 0x7c);
      }
      param_2 = (undefined8 *)(long)iVar6;
      __Znwm();
      _bzero();
      *param_2 = &PTR_FUN_110d9cd50;
      param_2[1] = 0;
      param_2[2] = piVar8;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined8 **)(piVar8 + 0xc) = param_2;
      FUN_10bd17a90(param_2,0);
      NEON_rev64(*(undefined8 *)(piVar8 + 2),4);
      uVar24 = 0x70;
      __Znwm();
      FUN_10bd1b818();
      *(undefined8 *)(piVar8 + 0x1e) = uVar24;
      lVar11 = param_2[2];
      if ((*(undefined8 **)(lVar11 + 0x30) != param_2) &&
         (*(undefined8 **)(lVar11 + 0x30) != (undefined8 *)0x0)) {
        func_0x0001088914a0(&uStack_80,&UNK_10f834987);
        FUN_10bdb2a88(auStack_70,&UNK_10f83494d,0x23a,uStack_80,uStack_78);
        puVar10 = auStack_70;
        func_0x00010ae6c700();
        __ZdlPv(uVar24);
        __Unwind_Resume();
        lVar11 = *(long *)(puVar10[2] + 0x80);
        func_0x000107c30e04(puVar10 + 1);
        if (*(int *)(puVar10[2] + 0xc) != -1) {
          func_0x000107c3027c((long)puVar10 + (long)*(int *)(puVar10[2] + 0xc));
        }
        lVar12 = 0;
        lVar17 = 0;
        do {
          if (*(int *)(lVar11 + 4) <= lVar17) {
            return puVar10;
          }
          lVar21 = *(long *)(lVar11 + 0x38);
          iVar6 = (int)lVar21 + (int)lVar12;
          FUN_10bd17cf4();
          if (iVar6 == 0) {
            plVar20 = (long *)((long)puVar10 +
                              (long)*(int *)(*(long *)(puVar10[2] + 0x20) + lVar17 * 4));
            if ((*(byte *)(lVar21 + lVar12 + 1) >> 5 & 1) == 0) {
              func_0x00010bd18b3c();
              if (iVar6 == 9) goto LAB_10bd18418;
              func_0x00010bd18b3c();
              if (((iVar6 == 10) && (*(undefined8 **)(puVar10[2] + 0x30) != puVar10)) &&
                 (*(undefined8 **)(puVar10[2] + 0x30) != (undefined8 *)0x0)) goto LAB_10bd18478;
            }
            else {
              func_0x00010bd18b3c();
              switch(iVar6) {
              case 1:
              case 8:
                func_0x000107c282dc(plVar20);
                break;
              case 2:
                func_0x00010598e0e4(plVar20);
                break;
              case 3:
                func_0x000107c2a450(plVar20);
                break;
              case 4:
                func_0x0001088f2648(plVar20);
                break;
              case 5:
                func_0x0001098d3d0c(plVar20);
                break;
              case 6:
                func_0x0001098cf768(plVar20);
                break;
              case 7:
                func_0x00010b4c3c80(plVar20);
                break;
              case 9:
                func_0x000107c282b4(plVar20);
                break;
              case 10:
                iVar6 = (int)lVar21 + (int)lVar12;
                func_0x00010b91c030();
                if (iVar6 == 0) {
                  FUN_10bd188c8(plVar20);
                }
                else {
                  FUN_10bd29fa4(plVar20);
                }
              }
            }
          }
          else {
            lVar13 = *(long *)(lVar21 + lVar12 + 0x28);
            iVar18 = (int)((lVar13 - *(long *)(*(long *)(lVar13 + 0x10) + 0x40)) / 0x38);
            lVar13 = puVar10[2];
            if (*(int *)((long)puVar10 + (long)(*(int *)(lVar13 + 8) + iVar18 * 4)) ==
                *(int *)(lVar21 + lVar12 + 4)) {
              iVar18 = *(int *)(*(long *)(lVar13 + 0x20) +
                               (long)(*(int *)(*(long *)(lVar13 + 0x80) + 4) + iVar18) * 4);
              func_0x00010bd18b3c();
              plVar20 = (long *)((long)puVar10 + (long)iVar18);
              if (iVar6 == 9) {
LAB_10bd18418:
                func_0x000107c30258(plVar20);
              }
              else {
                func_0x00010bd18b3c();
                if (iVar6 == 10) {
LAB_10bd18478:
                  if ((long *)*plVar20 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar20 + 8))();
                  }
                }
              }
            }
          }
          lVar17 = lVar17 + 1;
          lVar12 = lVar12 + 0x58;
        } while( true );
      }
      lVar17 = 0;
      uVar24 = *(undefined8 *)(lVar11 + 0x10);
      lVar12 = *(long *)(lVar11 + 0x80);
      for (lVar11 = 0; lVar11 < *(int *)(lVar12 + 4); lVar11 = lVar11 + 1) {
        lVar21 = *(long *)(lVar12 + 0x38);
        uVar14 = lVar21 + lVar17;
        uVar15 = uVar14;
        func_0x00010b91adc8();
        if (((((int)uVar15 == 10) && ((*(byte *)(*(long *)(uVar14 + 0x38) + 0x8c) & 1) == 0)) &&
            (uVar15 = uVar14, FUN_10bd17cf4(), (uVar15 & 1) == 0)) &&
           ((*(byte *)(lVar21 + lVar17 + 1) >> 5 & 1) == 0)) {
          iVar6 = *(int *)(*(long *)(param_2[2] + 0x20) + lVar11 * 4);
          FUN_10bcee28c(uVar14);
          uVar9 = uVar24;
          FUN_10bd17d10(uVar24,uVar14);
          *(undefined8 *)((long)param_2 + (long)iVar6) = uVar9;
        }
        lVar17 = lVar17 + 0x58;
      }
    }
    else {
      param_2 = *(undefined8 **)(lVar11 + 0x30);
    }
  }
  return param_2;
}



/* Entry: 10bd18314; end: 10bd1852b;  */

long FUN_10bd18314(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
  func_0x000107c30e04(param_1 + 8);
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
  if (iVar2 != -1) {
    func_0x000107c3027c(param_1 + iVar2);
  }
  lVar6 = 0;
  lVar7 = 0;
  do {
    if (*(int *)(lVar5 + 4) <= lVar7) {
      return param_1;
    }
    lVar8 = *(long *)(lVar5 + 0x38);
    iVar2 = (int)lVar8 + (int)lVar6;
    FUN_10bd17cf4();
    if (iVar2 == 0) {
      plVar4 = (long *)(param_1 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar7 * 4))
      ;
      if ((*(byte *)(lVar8 + lVar6 + 1) >> 5 & 1) == 0) {
        func_0x00010bd18b3c();
        if (iVar2 == 9) goto LAB_10bd18418;
        func_0x00010bd18b3c();
        if (((iVar2 == 10) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar8 != param_1)) && (lVar8 != 0)
           ) goto LAB_10bd18478;
      }
      else {
        func_0x00010bd18b3c();
        switch(iVar2) {
        case 1:
        case 8:
          func_0x000107c282dc(plVar4);
          break;
        case 2:
          func_0x00010598e0e4(plVar4);
          break;
        case 3:
          func_0x000107c2a450(plVar4);
          break;
        case 4:
          func_0x0001088f2648(plVar4);
          break;
        case 5:
          func_0x0001098d3d0c(plVar4);
          break;
        case 6:
          func_0x0001098cf768(plVar4);
          break;
        case 7:
          func_0x00010b4c3c80(plVar4);
          break;
        case 9:
          func_0x000107c282b4(plVar4);
          break;
        case 10:
          iVar2 = (int)lVar8 + (int)lVar6;
          func_0x00010b91c030();
          if (iVar2 == 0) {
            FUN_10bd188c8(plVar4);
          }
          else {
            FUN_10bd29fa4(plVar4);
          }
        }
      }
    }
    else {
      lVar3 = *(long *)(lVar8 + lVar6 + 0x28);
      iVar1 = (int)((lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) / 0x38);
      lVar3 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + (*(int *)(lVar3 + 8) + iVar1 * 4)) == *(int *)(lVar8 + lVar6 + 4)) {
        iVar1 = *(int *)(*(long *)(lVar3 + 0x20) +
                        (long)(*(int *)(*(long *)(lVar3 + 0x80) + 4) + iVar1) * 4);
        func_0x00010bd18b3c();
        plVar4 = (long *)(param_1 + iVar1);
        if (iVar2 == 9) {
LAB_10bd18418:
          func_0x000107c30258(plVar4);
        }
        else {
          func_0x00010bd18b3c();
          if (iVar2 == 10) {
LAB_10bd18478:
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 8))();
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 0x58;
  } while( true );
}



/* Entry: 10bd1852c; end: 10bd1852f;  */

long FUN_10bd1852c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
  func_0x000107c30e04(param_1 + 8);
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
  if (iVar2 != -1) {
    func_0x000107c3027c(param_1 + iVar2);
  }
  lVar6 = 0;
  lVar7 = 0;
  do {
    if (*(int *)(lVar5 + 4) <= lVar7) {
      return param_1;
    }
    lVar8 = *(long *)(lVar5 + 0x38);
    iVar2 = (int)lVar8 + (int)lVar6;
    FUN_10bd17cf4();
    if (iVar2 == 0) {
      plVar4 = (long *)(param_1 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar7 * 4))
      ;
      if ((*(byte *)(lVar8 + lVar6 + 1) >> 5 & 1) == 0) {
        func_0x00010bd18b3c();
        if (iVar2 == 9) goto LAB_10bd18418;
        func_0x00010bd18b3c();
        if (((iVar2 == 10) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar8 != param_1)) && (lVar8 != 0)
           ) goto LAB_10bd18478;
      }
      else {
        func_0x00010bd18b3c();
        switch(iVar2) {
        case 1:
        case 8:
          func_0x000107c282dc(plVar4);
          break;
        case 2:
          func_0x00010598e0e4(plVar4);
          break;
        case 3:
          func_0x000107c2a450(plVar4);
          break;
        case 4:
          func_0x0001088f2648(plVar4);
          break;
        case 5:
          func_0x0001098d3d0c(plVar4);
          break;
        case 6:
          func_0x0001098cf768(plVar4);
          break;
        case 7:
          func_0x00010b4c3c80(plVar4);
          break;
        case 9:
          func_0x000107c282b4(plVar4);
          break;
        case 10:
          iVar2 = (int)lVar8 + (int)lVar6;
          func_0x00010b91c030();
          if (iVar2 == 0) {
            FUN_10bd188c8(plVar4);
          }
          else {
            FUN_10bd29fa4(plVar4);
          }
        }
      }
    }
    else {
      lVar3 = *(long *)(lVar8 + lVar6 + 0x28);
      iVar1 = (int)((lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) / 0x38);
      lVar3 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + (*(int *)(lVar3 + 8) + iVar1 * 4)) == *(int *)(lVar8 + lVar6 + 4)) {
        iVar1 = *(int *)(*(long *)(lVar3 + 0x20) +
                        (long)(*(int *)(*(long *)(lVar3 + 0x80) + 4) + iVar1) * 4);
        func_0x00010bd18b3c();
        plVar4 = (long *)(param_1 + iVar1);
        if (iVar2 == 9) {
LAB_10bd18418:
          func_0x000107c30258(plVar4);
        }
        else {
          func_0x00010bd18b3c();
          if (iVar2 == 10) {
LAB_10bd18478:
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 8))();
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 0x58;
  } while( true );
}



/* Entry: 10bd18530; end: 10bd18543;  */

void FUN_10bd18530(void)

{
  FUN_10bd18314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd18544; end: 10bd18657;  */

undefined8 * FUN_10bd18544(long param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *apuStack_48 [2];
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)(long)**(int **)(param_1 + 0x10);
  if (param_2 == (undefined8 *)0x0) {
    __Znwm();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _bzero();
    *puVar5 = &PTR_FUN_110d9cd50;
    puVar5[1] = 0;
    puVar5[2] = uVar4;
  }
  else {
    uStack_38 = 0xffffffffffffffff;
    ppuVar1 = apuStack_48;
    apuStack_48[0] = puVar5;
    func_0x0001053abb00(ppuVar1,&uStack_38,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppuVar1 != (undefined8 **)0x0) {
      puVar5 = (undefined8 *)(long)*(char *)((long)ppuVar1 + 0x17);
      ppuVar3 = ppuVar1;
      if ((long)puVar5 < 0) {
        ppuVar3 = (undefined8 **)*ppuVar1;
        puVar5 = ppuVar1[1];
      }
      FUN_10bdb2a08(apuStack_48,&UNK_10f317bd9,0x10a,ppuVar3,puVar5);
      func_0x0001053abb1c(apuStack_48,"Requested size is too large to fit into size_t.");
      ppuVar1 = apuStack_48;
      func_0x00010ae6c700();
      return ppuVar1[2] + 8;
    }
    puVar2 = param_2;
    func_0x0001053abb54(param_2,puVar5,1);
    _bzero();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *puVar2 = &PTR_FUN_110d9cd50;
    puVar2[1] = param_2;
    puVar2[2] = uVar4;
    puVar5 = puVar2;
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  FUN_10bd17a90(puVar5,1);
  return puVar5;
}



/* Entry: 10bd18658; end: 10bd18663;  */

long FUN_10bd18658(long param_1)

{
  return *(long *)(param_1 + 0x10) + 0x40;
}



/* Entry: 10bd18664; end: 10bd186df;  */

undefined8 * FUN_10bd18664(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110d9cda0;
  puVar1 = param_1 + 3;
  FUN_10bd186e0();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    if (*(long *)(lStack_28 + 8) != 0) {
      FUN_10bd187ec();
    }
    __ZdlPv();
    FUN_10bd1870c(&puStack_30);
  }
  func_0x00010ae7c720(param_1 + 7);
  FUN_10bd187bc(param_1 + 3);
  return param_1;
}



/* Entry: 10bd186e0; end: 10bd1870b;  */

undefined1  [16] FUN_10bd186e0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10bd188f8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10bd1870c; end: 10bd1873f;  */

long * FUN_10bd1870c(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10bd188f8();
  return param_1;
}



/* Entry: 10bd18740; end: 10bd18743;  */

undefined8 * FUN_10bd18740(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110d9cda0;
  puVar1 = param_1 + 3;
  FUN_10bd186e0();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    if (*(long *)(lStack_28 + 8) != 0) {
      FUN_10bd187ec();
    }
    __ZdlPv();
    FUN_10bd1870c(&puStack_30);
  }
  func_0x00010ae7c720(param_1 + 7);
  FUN_10bd187bc(param_1 + 3);
  return param_1;
}



/* Entry: 10bd18744; end: 10bd18757;  */

void FUN_10bd18744(void)

{
  FUN_10bd18664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd18758; end: 10bd187a3;  */

undefined8 FUN_10bd18758(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c2b9f0();
  FUN_10bd17d10(param_1,param_2);
  func_0x00010bd18b64();
  return param_2;
}



/* Entry: 10bd187a4; end: 10bd187bb;  */

void FUN_10bd187a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10bd187bc; end: 10bd187eb;  */

long * FUN_10bd187bc(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10bd187ec; end: 10bd1888b;  */

long FUN_10bd187ec(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10bd18314();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10bd1b878();
  }
  __ZdlPv();
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = *(int *)(lVar1 + 4);
    while (0 < iVar3) {
      *puVar2 = 0xcdcdcdcd;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    iVar3 = *(int *)(lVar1 + 4);
    while (0 < iVar3) {
      *puVar2 = 0xcdcdcdcd;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  FUN_10bd1888c();
  FUN_10bd1888c((undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 10bd1888c; end: 10bd188af;  */

undefined8 FUN_10bd1888c(undefined8 param_1)

{
  FUN_10bd188b0(param_1,0);
  return param_1;
}



/* Entry: 10bd188b0; end: 10bd188c7;  */

void FUN_10bd188b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10bd188c8; end: 10bd188f7;  */

long * FUN_10bd188c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10bd188f8; end: 10bd1894b;  */

void FUN_10bd188f8(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x10;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10bd1894c; end: 10bd18a5b;  */

void FUN_10bd1894c(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  lVar11 = param_2;
  func_0x000107c2b954();
  lVar6 = *param_1;
  if ((*(long *)(lVar6 + -8) == 0) && (*(char *)(lVar6 + (long)plVar3) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      FUN_10bd18a5c(param_1,uVar7 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_110d9cde8,auStack_38);
    }
    plVar3 = param_1;
    lVar11 = param_2;
    func_0x000107c2b954();
    lVar6 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) - (ulong)(*(char *)(lVar6 + (long)plVar3) == -0x80)
  ;
  bVar1 = (byte)param_2 & 0x7f;
  uVar7 = param_1[2];
  *(byte *)(lVar6 + (long)plVar3) = bVar1;
  *(byte *)(lVar6 + (uVar7 & (long)plVar3 - 7U) + (uVar7 & 7)) = bVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *plVar3;
  puVar9 = (undefined8 *)plVar3[1];
  lVar10 = plVar3[2];
  plVar3[2] = lVar11;
  func_0x000104ab30b8();
  lVar12 = plVar3[1];
  for (lVar11 = 0; lVar10 != lVar11; lVar11 = lVar11 + 1) {
    if (-1 < *(char *)(lVar6 + lVar11)) {
      plVar4 = plVar3;
      FUN_10bd044a0(plVar3,puVar9);
      plVar5 = plVar3;
      func_0x000107c2b954(plVar3,plVar4);
      bVar1 = (byte)plVar4 & 0x7f;
      uVar7 = plVar3[2];
      lVar8 = *plVar3;
      *(byte *)(lVar8 + (long)plVar5) = bVar1;
      *(byte *)(lVar8 + ((long)plVar5 - 7U & uVar7) + (uVar7 & 7)) = bVar1;
      uVar13 = *puVar9;
      puVar2 = (undefined8 *)(lVar12 + (long)plVar5 * 0x10);
      puVar2[1] = puVar9[1];
      *puVar2 = uVar13;
    }
    puVar9 = puVar9 + 2;
  }
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar6 + -8);
    return;
  }
  return;
}



/* Entry: 10bd18a5c; end: 10bd18b2b;  */

void FUN_10bd18a5c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar1 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      plVar4 = param_1;
      FUN_10bd044a0(param_1,puVar8);
      plVar5 = param_1;
      func_0x000107c2b954(param_1,plVar4);
      bVar2 = (byte)plVar4 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar5) = bVar2;
      *(byte *)(lVar7 + ((long)plVar5 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      uVar12 = *puVar8;
      puVar3 = (undefined8 *)(lVar11 + (long)plVar5 * 0x10);
      puVar3[1] = puVar8[1];
      *puVar3 = uVar12;
    }
    puVar8 = puVar8 + 2;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bd18b2c; end: 10bd18b6f;  */

void FUN_10bd18b2c(void)

{
  func_0x00010bd0b8a4();
  return;
}



/* Entry: 10bd18b70; end: 10bd18c2b;  */

void FUN_10bd18b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  puStack_38 = (undefined1 *)&uStack_50;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uStack_50 = param_4;
  uStack_48 = param_2;
  uStack_40 = param_3;
  if ((long)*(short *)(param_1 + 10) < 0) {
    lVar4 = puVar3[1];
    lStack_30 = *(long *)*puVar3;
    bVar2 = *(byte *)(lVar4 + 10);
    uStack_28 = 0;
    uStack_28._0_4_ = 0;
    while (lStack_30 != lVar4 || (uint)uStack_28 != bVar2) {
      lVar1 = lStack_30 + (ulong)((uint)uStack_28 & 0xff) * 0x20;
      func_0x00010bd1a1b4(&uStack_48,*(undefined4 *)(lVar1 + 0x10),lVar1 + 0x18);
      func_0x00010b4c386c(&lStack_30);
    }
  }
  else {
    puStack_38 = (undefined1 *)&uStack_50;
    for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      func_0x00010bd1a1b4(&uStack_48,*(undefined4 *)puVar3,puVar3 + 1);
      puVar3 = puVar3 + 4;
    }
  }
  return;
}



/* Entry: 10bd18c2c; end: 10bd18cc3;  */

long * FUN_10bd18c2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1;
  func_0x00010b4bf3a0();
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((long)puVar1 + 10) & 1) == 0)) {
    plVar2 = (long *)*puVar1;
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      return plVar2;
    }
    (**(code **)(*param_4 + 0x10))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bd18cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_4,*param_1);
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd18c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x10))(param_4,param_3);
  return param_4;
}



/* Entry: 10bd18cc4; end: 10bd18e3f;  */

long * FUN_10bd18cc4(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)((long)param_2 + 4);
  plVar2 = param_1;
  func_0x00010b4c0fe8();
  plVar2[2] = (long)param_2;
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)((long)plVar2 + 10);
    *(byte *)((long)plVar2 + 10) = bVar1 & 0xf0;
    param_2 = (long *)*plVar2;
    if ((bVar1 >> 4 & 1) != 0) {
      func_0x00010bd1a754();
      func_0x00010bd1a660();
                    /* WARNING: Could not recover jumptable at 0x00010bd18d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x28))(param_2,plVar2,*param_1);
      return param_2;
    }
  }
  else {
    func_0x00010787827c();
    *(char *)(plVar2 + 1) = (char)param_2;
    *(undefined1 *)((long)plVar2 + 9) = 0;
    *(undefined1 *)((long)plVar2 + 0xb) = 0;
    func_0x00010bd1a754();
    func_0x00010bd1a660();
    *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf;
    func_0x00010bd1a734();
    *plVar2 = (long)param_2;
    *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf0;
  }
  return param_2;
}



/* Entry: 10bd18e40; end: 10bd18eaf;  */

long * FUN_10bd18e40(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_38;
  
  uVar3 = (ulong)*(uint *)(param_2 + 4);
  plVar1 = param_1;
  func_0x00010b4c0fe8();
  plVar1[2] = param_2;
  if ((uVar3 & 1) != 0) {
    func_0x00010787827c();
    *(char *)(plVar1 + 1) = (char)param_2;
    *(undefined1 *)((long)plVar1 + 9) = 1;
    lStack_38 = *param_1;
    plVar2 = &lStack_38;
    func_0x00010b4c37a4();
    *plVar1 = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 10bd18eb0; end: 10bd18f7f;  */

ulong FUN_10bd18eb0(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong auStack_50 [2];
  
  FUN_10bd18e40();
  uVar1 = *param_1;
  FUN_10bd18f80();
  if (uVar1 == 0) {
    puVar3 = (ulong *)*param_1;
    if ((int)puVar3[1] == 0) {
      func_0x00010bd1a754();
      func_0x00010bd1a660();
      if (uVar1 == 0) {
        func_0x0001088914a0(&uStack_60,&UNK_10f8349d4);
        FUN_10bdb2a88(auStack_50,&UNK_10f834996,0xeb,uStack_60,uStack_58);
        puVar3 = auStack_50;
        func_0x00010ae6c700();
        uVar1 = puVar3[1];
        puVar2 = puVar3;
        func_0x000107c28174();
        if ((int)uVar1 < (int)puVar2) {
          uVar1 = puVar3[1];
          *(int *)(puVar3 + 1) = (int)uVar1 + 1;
          if ((*puVar3 & 1) != 0) {
            puVar3 = (ulong *)(*puVar3 + (long)(int)uVar1 * 8 + 7);
          }
          uVar1 = *puVar3;
        }
        else {
          uVar1 = 0;
        }
        return uVar1;
      }
    }
    else {
      if ((*puVar3 & 1) != 0) {
        puVar3 = (ulong *)(*puVar3 + 7);
      }
      uVar1 = *puVar3;
    }
    func_0x00010bd1a734();
    FUN_10bd1a34c(*param_1,uVar1);
  }
  return uVar1;
}



/* Entry: 10bd18f80; end: 10bd18fd3;  */

ulong FUN_10bd18f80(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  func_0x000107c28174();
  if ((int)uVar2 < (int)puVar1) {
    uVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar2 + 1;
    if ((*param_1 & 1) != 0) {
      param_1 = (ulong *)(*param_1 + (long)(int)uVar2 * 8 + 7);
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10bd18fd4; end: 10bd1910f;  */

undefined1 * FUN_10bd18fd4(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar1 = *param_1;
  FUN_10bcedf04(lVar1,param_1[2],param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010787827c();
    *(char *)(param_3 + 0xc) = (char)lVar2;
    *(byte *)(param_3 + 0xd) = *(byte *)(lVar1 + 1) >> 5 & 1;
    lVar2 = lVar1;
    FUN_10bcf1560();
    *(char *)(param_3 + 0xe) = (char)lVar2;
    *(long *)(param_3 + 0x20) = lVar1;
    lVar2 = lVar1;
    func_0x00010b91adc8();
    if ((int)lVar2 == 10) {
      lVar2 = lVar1;
      FUN_10bcee28c();
      func_0x00010bd1a660();
      *(long *)(param_3 + 0x10) = lVar2;
      func_0x000107c30278();
      *(long *)(param_3 + 0x18) = lVar2;
      if (*(long *)(param_3 + 0x10) == 0) {
        FUN_10bdb2a08(auStack_40,&UNK_10f834996,0x117,&UNK_10f8349e9,0x29);
        FUN_10bd19110(auStack_40,&UNK_10f834a13);
        lVar1 = *(long *)(lVar1 + 8) + 0x18;
        func_0x00010ae6c448();
        func_0x00010ae6c700(auStack_40);
        lVar2 = lVar1;
        _strlen(lVar1);
        func_0x00010ae6bd08(puVar3,lVar1,lVar2);
        return puVar3;
      }
      if ((*(byte *)(*(long *)(lVar1 + 0x38) + 0x28) >> 5 & 1) != 0) {
        *(char *)(param_3 + 0xf) = '\x02' - *(char *)(*(long *)(lVar1 + 0x38) + 0x89);
      }
    }
    else {
      lVar2 = lVar1;
      func_0x00010b91adc8();
      if ((int)lVar2 == 8) {
        *(code **)(param_3 + 0x10) = FUN_10bd19148;
        lVar2 = lVar1;
        FUN_10bcefa5c();
        *(long *)(param_3 + 0x18) = lVar2;
      }
    }
  }
  return (undefined1 *)(ulong)(lVar1 != 0);
}



/* Entry: 10bd19110; end: 10bd19147;  */

undefined8 FUN_10bd19110(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10bd19148; end: 10bd19163;  */

bool FUN_10bd19148(long param_1)

{
  FUN_10bcee5e4();
  return param_1 != 0;
}



/* Entry: 10bd19164; end: 10bd19227;  */

void FUN_10bd19164(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = param_1;
  FUN_10bd19228(param_1,(uint)param_2 & 7,param_2 >> 3,param_4,param_6,&uStack_80,&uStack_41);
  if ((uVar1 & 1) == 0) {
    if ((*param_5 & 1) == 0) {
      func_0x00010bd2b26c(param_5);
    }
    else {
      param_5 = (ulong *)((*param_5 & 0xfffffffffffffffe) + 8);
    }
    FUN_10bd36dd4(param_2,param_5,param_3,param_6);
  }
  else {
    FUN_10bd192bc(param_1,param_2 >> 3,uStack_41,&uStack_80,param_5,param_3,param_6);
  }
  return;
}



/* Entry: 10bd19228; end: 10bd192bb;  */

void FUN_10bd19228(void)

{
  long in_x4;
  
  if (*(long *)(in_x4 + 0x60) == 0) {
    func_0x00010bd1a6f4();
    func_0x00010b4c12d0();
  }
  else {
    FUN_10bd2b4f4();
    func_0x00010bd1a6f4();
    FUN_10bd1a0cc();
  }
  return;
}



/* Entry: 10bd192bc; end: 10bd19bfb;  */

/* WARNING: Possible PIC construction at 0x00010b4d2acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d29d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d26f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d273c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d28dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d290c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d27e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4d2818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d2834) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2850) */
/* WARNING: Removing unreachable block (ram,0x00010b4d27ec) */
/* WARNING: Removing unreachable block (ram,0x00010b4d27f4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2824) */
/* WARNING: Removing unreachable block (ram,0x00010b4d282c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d27fc) */
/* WARNING: Removing unreachable block (ram,0x00010b4d283c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2804) */
/* WARNING: Removing unreachable block (ram,0x00010b4d280c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2910) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2928) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2944) */
/* WARNING: Removing unreachable block (ram,0x00010b4d28e0) */
/* WARNING: Removing unreachable block (ram,0x00010b4d28e8) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2918) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2920) */
/* WARNING: Removing unreachable block (ram,0x00010b4d28f0) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2930) */
/* WARNING: Removing unreachable block (ram,0x00010b4d28f8) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2900) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2bfc) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2c14) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2c30) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2bcc) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2bd4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2c04) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2c0c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2bdc) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2c1c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2be4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2bec) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2728) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2740) */
/* WARNING: Removing unreachable block (ram,0x00010b4d275c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d26f8) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2700) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2730) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2738) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2708) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2748) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2710) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2718) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a04) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a38) */
/* WARNING: Removing unreachable block (ram,0x00010b4d29d4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d29dc) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a0c) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a14) */
/* WARNING: Removing unreachable block (ram,0x00010b4d29e4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2a24) */
/* WARNING: Removing unreachable block (ram,0x00010b4d29ec) */
/* WARNING: Removing unreachable block (ram,0x00010b4d29f4) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b00) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b18) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b34) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2ad8) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b08) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b10) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2ae0) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2b20) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2ae8) */
/* WARNING: Removing unreachable block (ram,0x00010b4d2af0) */
/* WARNING: Removing unreachable block (ram,0x00010b4d281c) */
/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_10bd192bc(ulong *******param_1,ulong *******param_2,int param_3,ulong *******param_4,
             ulong *******param_5,ulong *******param_6,ulong *******param_7)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  undefined8 uVar17;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong ******ppppppuVar18;
  ulong *******extraout_x8;
  ulong *******extraout_x8_00;
  ulong *******extraout_x8_01;
  ulong *******extraout_x8_02;
  ulong *******extraout_x8_03;
  ulong *******extraout_x8_04;
  ulong *******extraout_x8_05;
  ulong *******extraout_x8_06;
  ulong *******extraout_x8_07;
  ulong *******extraout_x8_08;
  ulong *******extraout_x8_09;
  ulong *******extraout_x8_10;
  int iVar19;
  ulong *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  undefined8 unaff_x30;
  ulong *******pppppppuStack_250;
  undefined8 *****pppppuStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  ulong *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint auStack_1c8 [3];
  uint uStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong *******pppppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int iStack_148;
  long lStack_128;
  ulong uStack_f8;
  undefined8 uStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined1 auStack_b0 [8];
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *****pppppuStack_98;
  ulong ******ppppppuStack_90;
  undefined2 uStack_88;
  undefined4 uStack_7c;
  ulong *******pppppppuStack_78;
  ulong *****pppppuStack_70;
  ulong *****pppppuStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_48;
  
  pppppppuVar11 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar20 = (ulong *******)&pppppppuStack_c0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar19 = *(byte *)((long)param_4 + 0xc) - 1;
  cVar6 = SBORROW4(iVar19,0x11);
  cVar7 = (int)(*(byte *)((long)param_4 + 0xc) - 0x12) < 0;
  uVar8 = iVar19 == 0x11;
  pppppppuVar15 = param_4;
  pppppppuVar16 = param_5;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = param_6;
  pppppppuStack_c0 = param_6;
  if (param_3 == 0) {
    switch(iVar19) {
    case 0:
      func_0x00010bd1a69c(*param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a630();
        func_0x00010b4bfb74();
        pppppppuVar16 = param_5;
        param_6 = param_6 + 1;
      }
      else {
        pppppppuVar15 = (ulong *******)param_4[4];
        func_0x00010bd1a684();
        func_0x00010b4bfaec();
        pppppppuVar16 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 1:
      func_0x00010bd1a69c(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a630();
        func_0x00010b4bfa10();
        pppppppuVar16 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        pppppppuVar15 = (ulong *******)param_4[4];
        func_0x00010bd1a684();
        func_0x00010b4bf988();
        pppppppuVar16 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 2:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a69c();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar16 = pppppppuStack_b8;
          func_0x00010bd1a684();
          func_0x00010b4bf738();
        }
        else {
          pppppppuVar16 = (ulong *******)param_4[4];
          pppppppuVar15 = pppppppuStack_b8;
          func_0x00010bd1a684();
          func_0x00010b4bf6c8();
        }
      }
      break;
    case 3:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a69c();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar16 = pppppppuStack_b8;
          func_0x00010bd1a684();
          func_0x00010b4bf908();
        }
        else {
          pppppppuVar16 = (ulong *******)param_4[4];
          pppppppuVar15 = pppppppuStack_b8;
          func_0x00010bd1a684();
          func_0x00010b4bf898();
        }
      }
      break;
    case 4:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a69c();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar16 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00010bd1a684();
          func_0x00010b4bf650();
        }
        else {
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar16 = (ulong *******)param_4[4];
          func_0x00010bd1a684();
          func_0x00010b4bf5c0();
        }
      }
      break;
    case 5:
      func_0x00010bd1a6e8(*param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a6b4();
        func_0x00010bd1a684();
        pppppppuVar16 = extraout_x8_03;
        func_0x00010b4bf908();
        pppppppuVar15 = param_4;
        param_6 = param_6 + 1;
      }
      else {
        func_0x00010bd1a644();
        pppppppuVar15 = extraout_x8_07;
        func_0x00010b4bf898();
        pppppppuVar16 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 6:
      func_0x00010bd1a6e8(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a6b4();
        func_0x00010bd1a684();
        pppppppuVar16 = extraout_x8_04;
        func_0x00010b4bf820();
        pppppppuVar15 = param_4;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x00010bd1a644();
        pppppppuVar15 = extraout_x8_08;
        func_0x00010b4bf7b0();
        pppppppuVar16 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 7:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a69c();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          uVar8 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar16 = (ulong *******)(ulong)!(bool)uVar8;
          func_0x00010bd1a684();
          func_0x00010b4bfcb8();
        }
        else {
          uVar8 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar15 = (ulong *******)(ulong)!(bool)uVar8;
          pppppppuVar16 = (ulong *******)param_4[4];
          func_0x00010bd1a684();
          func_0x00010b4bfc48();
        }
      }
      break;
    case 8:
    case 0xb:
      pppppppuVar15 = (ulong *******)param_4[4];
      func_0x00010bd1a684(*(byte *)((long)param_4 + 0xd));
      uVar8 = extraout_w8 == 1;
      if ((bool)uVar8) {
        func_0x00010b4c0018();
        pppppppuVar16 = param_5;
      }
      else {
        func_0x00010b4bff84();
        pppppppuVar16 = param_5;
      }
      func_0x000107c30264(&pppppppuStack_c0);
      if (pppppppuStack_c0 == (ulong *******)0x0) goto code_r0x00010bd19b48;
      param_6 = param_7;
      func_0x000107c30268(param_7,pppppppuStack_c0,pppppppuVar20);
      pppppppuVar15 = param_1;
      break;
    case 9:
      pppppppuVar15 = (ulong *******)param_4[2];
      func_0x00010bd1a644(*(byte *)((long)param_4 + 0xd));
      if (extraout_w8_01 == 1) {
        func_0x00010b4c02cc();
        pppppppuVar16 = param_5;
      }
      else {
        func_0x00010b4c00c0();
        pppppppuVar16 = param_5;
      }
      iVar19 = *(int *)(param_7 + 0xb);
      iVar23 = iVar19 + -1;
      uVar8 = iVar23 == 0;
      *(int *)(param_7 + 0xb) = iVar23;
      if (0 < iVar19) {
        uVar5 = (int)param_2 << 3 | 3;
        param_2 = (ulong *******)(ulong)uVar5;
        *(int *)((long)param_7 + 0x5c) = *(int *)((long)param_7 + 0x5c) + 1;
        func_0x00010bd1a6a8();
        func_0x000107c3032c();
        param_7[0xb] = (ulong ******)
                       CONCAT44((int)((ulong)param_7[0xb] >> 0x20) + -1,(int)param_7[0xb] + 1);
        uVar3 = *(uint *)(param_7 + 10);
        *(undefined4 *)(param_7 + 10) = 0;
        uVar8 = uVar3 == uVar5;
        goto code_r0x00010bd19af4;
      }
code_r0x00010bd19b48:
      param_6 = (ulong *******)0x0;
      break;
    case 10:
      pbVar1 = (byte *)((long)param_4 + 0xd);
      param_4 = (ulong *******)param_4[2];
      func_0x00010bd1a644(*pbVar1);
      uVar8 = extraout_w8_00 == 1;
      if ((bool)uVar8) {
        func_0x00010b4c02cc();
      }
      else {
        func_0x00010b4c00c0();
      }
      FUN_10bd1a618();
      if ((bool)uVar8) {
        func_0x00010bd1a720();
        pppppppuVar9 = param_7;
        func_0x00010055e218();
        if (pppppppuVar9 == (ulong *******)0x0) {
          return (ulong *******)0x0;
        }
        func_0x00010055e2f0(param_1,pppppppuVar9,param_7);
        *(int *)(param_7 + 0xb) = *(int *)(param_7 + 0xb) + 1;
        uStack_e8 = (ulong *******)CONCAT44(uStack_e8._4_4_,uStack_e8._4_4_);
        func_0x000100064534(param_7,&uStack_e8);
        if ((int)param_7 != 0) {
          return param_1;
        }
        return (ulong *******)0x0;
      }
      goto LAB_10bd19b9c;
    case 0xc:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a69c();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar16 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00010bd1a684();
          func_0x00010b4bf820();
        }
        else {
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar16 = (ulong *******)param_4[4];
          func_0x00010bd1a684();
          func_0x00010b4bf7b0();
        }
      }
      break;
    case 0xd:
      func_0x00010bd1a654();
      pppppppuVar9 = pppppppuStack_b8;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        ppppppuVar18 = param_4[3];
        (*(code *)param_4[2])(ppppppuVar18,pppppppuStack_b8);
        param_7 = pppppppuVar9;
        if (((ulong)ppppppuVar18 & 1) == 0) {
          if (((ulong)*param_5 & 1) == 0) {
            func_0x00010bd2b26c(param_5);
          }
          FUN_10bd369c4();
        }
        else {
          func_0x00010bd1a69c();
          if ((bool)uVar8) {
            func_0x00010bd1a6b4();
            func_0x00010bd1a684();
            pppppppuVar16 = pppppppuVar9;
            func_0x00010b4bff0c();
          }
          else {
            pppppppuVar16 = (ulong *******)param_4[4];
            func_0x00010bd1a684();
            pppppppuVar15 = pppppppuVar9;
            func_0x00010b4bfe9c();
          }
        }
      }
      break;
    case 0xe:
      func_0x00010bd1a6e8(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a6b4();
        func_0x00010bd1a684();
        pppppppuVar16 = extraout_x8_00;
        func_0x00010b4bf650();
        pppppppuVar15 = param_4;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x00010bd1a644();
        pppppppuVar15 = extraout_x8_05;
        func_0x00010b4bf5c0();
        pppppppuVar16 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 0xf:
      func_0x00010bd1a6e8(*param_6);
      if ((bool)uVar8) {
        func_0x00010bd1a6b4();
        func_0x00010bd1a684();
        pppppppuVar16 = extraout_x8_01;
        func_0x00010b4bf738();
        pppppppuVar15 = param_4;
        param_6 = param_6 + 1;
      }
      else {
        func_0x00010bd1a644();
        pppppppuVar15 = extraout_x8_06;
        func_0x00010b4bf6c8();
        pppppppuVar16 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 0x10:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a6e8(-((uint)pppppppuStack_b8 & 1) ^ (uint)pppppppuStack_b8 >> 1);
        if ((bool)uVar8) {
          func_0x00010bd1a6b4();
          func_0x00010bd1a684();
          pppppppuVar16 = extraout_x8;
          func_0x00010b4bf650();
        }
        else {
          pppppppuVar16 = (ulong *******)param_4[4];
          func_0x00010bd1a684();
          pppppppuVar15 = extraout_x8_09;
          func_0x00010b4bf5c0();
        }
      }
      break;
    case 0x11:
      func_0x00010bd1a654();
      pppppppuVar16 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00010bd1a6e8(-((ulong)pppppppuStack_b8 & 1) ^ (ulong)pppppppuStack_b8 >> 1);
        if ((bool)uVar8) {
          func_0x00010bd1a6b4();
          func_0x00010bd1a684();
          pppppppuVar16 = extraout_x8_02;
          func_0x00010b4bf738();
        }
        else {
          pppppppuVar16 = (ulong *******)param_4[4];
          func_0x00010bd1a684();
          pppppppuVar15 = extraout_x8_10;
          func_0x00010b4bf6c8();
        }
      }
    }
    goto LAB_10bd19b4c;
  }
  pppppppuVar20 = param_6;
  uStack_e8 = param_7;
  switch(iVar19) {
  case 0:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4d2fb0();
      return param_1;
    }
    break;
  case 1:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4d2ea8();
      return param_1;
    }
    break;
  case 2:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d2868;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d281c;
        }
        else {
          puVar28 = &UNK_10b4d27ec;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while ((param_6 < param_7 &&
             (func_0x00010b4d3510(), param_6 = param_1, param_1 != (ulong *******)0x0))) {
        param_1 = param_2;
        func_0x00010b227ed8(param_2,uStack_f8);
      }
      return param_6;
    }
    break;
  case 3:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d295c;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d2910;
        }
        else {
          puVar28 = &UNK_10b4d28e0;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000108767594(param_2,uStack_f8);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 4:
    pppppppuVar15 = param_2;
    func_0x00010bd1a630();
    pppppppuVar16 = (ulong *******)0x5;
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      pppppppuStack_78 = *(ulong ********)PTR____stack_chk_guard_11034bdc0;
      pppppppuVar20 = (ulong *******)&pppppppuStack_a8;
      pppppppuStack_a8 = pppppppuVar15;
      func_0x000107c30264();
      func_0x00010b4d3620();
      pppppppuVar10 = pppppppuVar20;
      if (pppppppuVar20 != (ulong *******)0x0) {
        while( true ) {
          pppppppuVar15 = (ulong *******)param_1[1];
          iVar23 = (int)pppppppuVar15 - (int)pppppppuVar20;
          iVar19 = (int)param_7;
          uVar8 = iVar19 == iVar23;
          if (iVar19 <= iVar23) break;
          func_0x00010b4d36a4();
          pppppppuVar10 = (ulong *******)0x0;
          pppppppuStack_a8 = pppppppuVar20;
          if (pppppppuVar20 == (ulong *******)0x0) goto code_r0x00010b4d2638;
          ppppppuVar18 = param_1[1];
          lVar22 = (long)iVar19 - (long)iVar23;
          if ((int)lVar22 < 0x11) {
            uStack_88 = 0;
            ppppppuStack_90 = (ulong ******)0x0;
            pppppuStack_98 = ppppppuVar18[1];
            pppppppuStack_a0 = (ulong *******)*ppppppuVar18;
            pppppppuStack_c0 = (ulong *******)CONCAT44(pppppppuStack_c0._4_4_,(int)lVar22);
            auStack_b0._4_4_ = 0x10;
            pppppppuVar15 = (ulong *******)(auStack_b0 + 4);
            func_0x000107c302a8(&pppppppuStack_c0,pppppppuVar15,&UNK_10f773ed4);
            if (pppppppuVar11 != (ulong *******)0x0) goto code_r0x00010b4d2658;
            param_7 = (ulong *******)((long)&pppppppuStack_a0 + lVar22);
            pppppppuVar11 =
                 (ulong *******)
                 ((long)&pppppppuStack_a0 + (long)((int)pppppppuVar20 - (int)ppppppuVar18));
            pppppppuVar15 = param_7;
            func_0x00010b4d36a4(pppppppuVar11,param_7);
            uVar8 = pppppppuVar11 == param_7;
            if ((bool)uVar8) {
              pppppppuVar10 = (ulong *******)((long)param_1[1] + lVar22);
            }
            else {
code_r0x00010b4d2634:
              pppppppuVar10 = (ulong *******)0x0;
            }
            goto code_r0x00010b4d2638;
          }
          uVar8 = *(int *)((long)param_1 + 0x1c) == 0x11;
          if (*(int *)((long)param_1 + 0x1c) < 0x11) goto code_r0x00010b4d2634;
          pppppppuVar10 = param_1;
          func_0x00010b4d1d34();
          if (pppppppuVar10 == (ulong *******)0x0) goto code_r0x00010b4d2638;
          func_0x00010b4d34c0();
          pppppppuVar20 = pppppppuVar10;
        }
        param_1 = (ulong *******)((long)pppppppuVar20 + (long)iVar19);
        pppppppuVar15 = param_1;
        func_0x00010b4d36a4();
        uVar8 = param_1 == pppppppuVar20;
        pppppppuVar10 = pppppppuVar20;
        if (!(bool)uVar8) {
          pppppppuVar10 = (ulong *******)0x0;
        }
      }
code_r0x00010b4d2638:
      func_0x00010b4d3458();
      if ((bool)uVar8) {
        return pppppppuVar10;
      }
      ___stack_chk_fail();
      pppppppuVar11 = pppppppuVar10;
code_r0x00010b4d2658:
      func_0x00010802bcb8();
      FUN_10bdb2a88(&pppppppuStack_c0,&UNK_10f7740e7,0x4ce,pppppppuVar11,pppppppuVar15);
      func_0x00010b4d3598();
      __Unwind_Resume();
      pcStack_c8 = (code *)&UNK_10b4d2680;
      uStack_e8 = param_7;
      pppppppuStack_e0 = pppppppuVar16;
      pppppppuStack_d8 = param_1;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar11 = pppppppuVar9;
        if (param_7 <= param_1) {
          return param_1;
        }
        func_0x00010b4d3510();
        if (pppppppuVar11 == (ulong *******)0x0) break;
        pppppppuVar9 = pppppppuVar16;
        func_0x000107c2845c(pppppppuVar16,uStack_f8 & 0xffffffff);
        param_1 = pppppppuVar11;
      }
      return (ulong *******)0x0;
    }
    break;
  case 5:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4cbe9c();
      return param_1;
    }
    break;
  case 6:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4cbfb4();
      return param_1;
    }
    break;
  case 7:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d2c48;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d2bfc;
        }
        else {
          puVar28 = &UNK_10b4d2bcc;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x00010b4bfd04(param_2,uStack_f8 != 0);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    goto code_r0x00010bd19ba0;
  case 0xc:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d2774;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d2728;
        }
        else {
          puVar28 = &UNK_10b4d26f8;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000107c29100(param_2,uStack_f8 & 0xffffffff);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0xd:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    pppppppuStack_a8 = (ulong *******)param_4[3];
    auStack_b0 = (undefined1  [8])param_4[2];
    pppppuStack_98 = (ulong *****)CONCAT44(pppppuStack_98._4_4_,(int)param_2);
    pppppppuVar20 = (ulong *******)&pppppppuStack_78;
    pppppppuStack_b8 = param_1;
    pppppppuStack_a0 = param_5;
    pppppppuStack_78 = param_6;
    func_0x000107c30264();
    if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x00010bd19b48;
    while( true ) {
      param_2 = (ulong *******)((long)param_7[1] - (long)pppppppuStack_78);
      iVar19 = (int)pppppppuVar20;
      iVar23 = (int)param_2;
      uVar8 = iVar19 == iVar23;
      if (iVar19 <= iVar23) break;
      FUN_10bd1a48c(pppppppuStack_78,param_7[1],&pppppppuStack_b8);
      if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x00010bd19b48;
      ppppppuVar18 = param_7[1];
      iVar24 = (int)pppppppuStack_78 - (int)ppppppuVar18;
      lVar22 = (long)iVar19 - (long)iVar23;
      if ((int)lVar22 < 0x11) {
        uStack_58 = 0;
        uStack_60 = 0;
        pppppuStack_68 = ppppppuVar18[1];
        pppppuStack_70 = *ppppppuVar18;
        ppppppuStack_90 = (ulong ******)CONCAT44(ppppppuStack_90._4_4_,(int)lVar22);
        uStack_7c = 0x10;
        param_4 = &ppppppuStack_90;
        param_5 = (ulong *******)&uStack_7c;
        func_0x000107c302a8(param_4,param_5,&UNK_10f773ed4);
        if (param_4 != (ulong *******)0x0) {
          func_0x00010802bcb8();
          pppppppuVar9 = (ulong *******)&UNK_10f834afd;
          uVar17 = 0x4ce;
          FUN_10bdb2a88(&ppppppuStack_90,&UNK_10f834afd,0x4ce);
          func_0x00010ae6c700(&ppppppuStack_90);
          goto LAB_10bd19bf0;
        }
        lVar12 = (long)&pppppuStack_70 + (long)iVar24;
        func_0x00010bd1a740();
        uVar8 = lVar12 == (long)&pppppuStack_70 + lVar22;
        if (!(bool)uVar8) goto code_r0x00010bd19b48;
        param_6 = (ulong *******)((long)param_7[1] + lVar22);
        goto LAB_10bd19b4c;
      }
      uVar8 = *(int *)((long)param_7 + 0x1c) == 0x11;
      if ((*(int *)((long)param_7 + 0x1c) < 0x11) ||
         (pppppppuVar9 = param_7, func_0x00010b4d1d34(), pppppppuVar9 == (ulong *******)0x0))
      goto code_r0x00010bd19b48;
      pppppppuVar20 = (ulong *******)(ulong)(uint)((iVar19 - iVar23) - iVar24);
      pppppppuStack_78 = (ulong *******)((long)pppppppuVar9 + (long)iVar24);
    }
    pppppppuVar9 = (ulong *******)((long)pppppppuStack_78 + (long)iVar19);
    param_1 = pppppppuStack_78;
    func_0x00010bd1a740();
    uVar8 = pppppppuVar9 == param_1;
code_r0x00010bd19af4:
    param_6 = param_1;
    if (!(bool)uVar8) {
      param_6 = (ulong *******)0x0;
    }
  default:
LAB_10bd19b4c:
    FUN_10bd1a618();
    param_4 = pppppppuVar15;
    param_5 = pppppppuVar16;
    if ((bool)uVar8) {
      func_0x00010bd1a720(param_6,unaff_x30);
      return param_6;
    }
    break;
  case 0xe:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4d2c98();
      return param_1;
    }
    break;
  case 0xf:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a6a8();
      func_0x00010bd1a720();
      func_0x000107c39c8c();
      func_0x00010b4d34fc();
      func_0x00010b4d2da0();
      return param_1;
    }
    break;
  case 0x10:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d2a50;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d2a04;
        }
        else {
          puVar28 = &UNK_10b4d29d4;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x000107c2845c(param_2,-((uint)uStack_f8 & 1) ^ (uint)uStack_f8 >> 1);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0x11:
    func_0x00010bd1a630();
    func_0x00010b4bfd70();
    FUN_10bd1a618();
    if ((bool)uVar8) {
      func_0x00010bd1a674();
      func_0x00010bd1a720();
      func_0x00010b4d36dc();
      func_0x00010b4d33f4();
      func_0x00010b4d3620();
      if (param_1 == (ulong *******)0x0) {
        func_0x00010b4d3458();
        if ((bool)uVar8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010802bcb8();
        func_0x00010b4d3418();
        puVar28 = &UNK_10b4d2b4c;
        func_0x00010b4d3598();
      }
      else {
        func_0x00010b4d354c();
        if ((bool)uVar8 || cVar7 != cVar6) {
          func_0x00010b4d353c();
          puVar28 = &UNK_10b4d2b00;
        }
        else {
          puVar28 = &UNK_10b4d2ad0;
        }
      }
      puStack_d0 = &stack0xffffffffffffffc0;
      pcStack_c8 = (code *)puVar28;
      func_0x00010b4d352c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x00010b4d3510();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        func_0x00010b227ed8(param_2,-(uStack_f8 & 1) ^ uStack_f8 >> 1);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
  }
LAB_10bd19b9c:
  ___stack_chk_fail();
  pppppppuVar20 = param_6;
code_r0x00010bd19ba0:
  uVar17 = 0x38;
  FUN_10bdb2a00(&pppppppuStack_b8,&UNK_10f834a54,0x38);
  pppppppuVar9 = (ulong *******)&UNK_10f773db9;
  func_0x00010b4c3038(&pppppppuStack_b8);
LAB_10bd19bf0:
  pppppppuVar11 = (ulong *******)&pppppppuStack_b8;
  func_0x00010ae6c700();
  __Unwind_Resume();
  pcStack_c8 = FUN_10bd19bfc;
  iVar19 = 0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = 0;
  pppppppuStack_1b8 = (undefined8 *******)0x0;
  uStack_1b0 = 0;
  uVar27 = 0;
  pppppppuStack_1a0 = pppppppuVar9;
  uStack_e8 = param_7;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = pppppppuVar20;
  puStack_d0 = &stack0xfffffffffffffff0;
  do {
    while( true ) {
      while( true ) {
        pppppppuVar15 = param_5;
        func_0x000107c302ac(param_5,&pppppppuStack_1a0);
        pppppppuVar9 = pppppppuStack_1a0;
        if (((ulong)pppppppuVar15 & 1) != 0) goto LAB_10bd19e90;
        pppppppuVar15 = (ulong *******)((long)pppppppuStack_1a0 + 1);
        uStack_1bc = (uint)*(byte *)pppppppuStack_1a0;
        if (uStack_1bc == 0x1a) break;
        if (*(byte *)pppppppuStack_1a0 == 0x10) {
          pppppppuStack_1a0 = pppppppuVar15;
          func_0x00010b4c39d0(pppppppuVar15,auStack_1c8);
          pppppppuStack_1a0 = pppppppuVar15;
          if ((pppppppuVar15 == (ulong *******)0x0) ||
             (uVar26 = (ulong)auStack_1c8[0], auStack_1c8[0] == 0)) goto LAB_10bd19e78;
          if (iVar19 == 0) {
            iVar19 = 1;
            uVar27 = uVar26;
          }
          else if (iVar19 == 2) {
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            pppppppuVar9 = pppppppuVar11;
            FUN_10bd19228(pppppppuVar11,2,uVar26,uVar17,param_5,&uStack_200,&uStack_201);
            if (((ulong)pppppppuVar9 & 1) == 0) {
              uVar27 = uStack_1b0;
              pppppppuVar13 = pppppppuStack_1b8;
              if (-1 < (long)uStack_1a8) {
                uVar27 = uStack_1a8 >> 0x38;
                pppppppuVar13 = &pppppppuStack_1b8;
              }
              if (((ulong)*param_4 & 1) == 0) {
                pppppppuVar9 = param_4;
                func_0x00010bd2b26c(param_4);
              }
              else {
                pppppppuVar9 = (ulong *******)(((ulong)*param_4 & 0xfffffffffffffffe) + 8);
              }
              func_0x00010bd1a534(uVar26,pppppppuVar13,uVar27,pppppppuVar9);
            }
            else {
              pppppppuVar9 = pppppppuVar11;
              if (uStack_1f8._5_1_ == '\x01') {
                func_0x00010b4c02cc(pppppppuVar11,uVar26,0xb);
              }
              else {
                func_0x00010b4c00c0(pppppppuVar11,uVar26,0xb,uStack_1f0,uStack_1e0);
              }
              func_0x00010b4c3a9c(&uStack_198,param_5,&uStack_210,&pppppppuStack_1b8);
              func_0x000107c3032c(pppppppuVar9,uStack_210,&uStack_198);
              if ((pppppppuVar9 == (ulong *******)0x0) || (iStack_148 != 0)) goto LAB_10bd19e78;
            }
            iVar19 = 3;
            uVar27 = uVar26;
          }
        }
        else {
          pppppppuStack_1a0 = pppppppuVar15;
          func_0x00010b4c3a44(pppppppuVar9,&uStack_1bc,0);
          if ((uStack_1bc == 0) || ((uStack_1bc & 7) == 4)) {
            *(uint *)(param_5 + 10) = uStack_1bc - 1;
            pppppppuVar9 = pppppppuStack_1a0;
            goto LAB_10bd19e90;
          }
          pppppppuVar9 = pppppppuVar11;
          func_0x00010bd1a6d8(pppppppuVar11,uStack_1bc,pppppppuStack_1a0);
          pppppppuStack_1a0 = pppppppuVar9;
          if (pppppppuVar9 == (ulong *******)0x0) goto LAB_10bd19e78;
        }
      }
      if (iVar19 != 1) break;
      pppppppuVar9 = pppppppuVar11;
      pppppppuStack_1a0 = pppppppuVar15;
      func_0x00010bd1a6d8(pppppppuVar11,uVar27 << 3 | 2);
      pppppppuStack_1a0 = pppppppuVar9;
      if (pppppppuVar9 == (ulong *******)0x0) goto LAB_10bd19e78;
      iVar19 = 3;
    }
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    pppppppuVar9 = (ulong *******)&pppppppuStack_1a0;
    pppppppuStack_1a0 = pppppppuVar15;
    func_0x000107c30264(pppppppuVar9);
    if ((pppppppuStack_1a0 == (ulong *******)0x0) ||
       (pppppppuVar15 = param_5,
       func_0x000107c30268(param_5,pppppppuStack_1a0,pppppppuVar9,&uStack_198),
       pppppppuStack_1a0 = pppppppuVar15, pppppppuVar15 == (ulong *******)0x0)) {
      bVar25 = false;
    }
    else {
      if (iVar19 == 0) {
        func_0x000107c27b9c(&pppppppuStack_1b8,&uStack_198);
        iVar19 = 2;
      }
      bVar25 = true;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
  } while (bVar25);
LAB_10bd19e78:
  pppppppuVar9 = (ulong *******)0x0;
LAB_10bd19e90:
  pppppppuVar13 = &pppppppuStack_1b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_1b8);
    pppppppuVar14 = pppppppuVar13;
    __Unwind_Resume();
    pppppuStack_248 = &pppppppuStack_250;
    puStack_238 = (undefined1 *)&pppppppuStack_250;
    pcStack_218 = FUN_10bd19f10;
    pppppppuStack_230 = param_4;
    pppppppuStack_228 = pppppppuVar13;
    ppuStack_220 = &puStack_d0;
    if ((long)*(short *)((long)pppppppuVar14 + 10) < 0) {
      ppppppuVar21 = pppppppuVar14[2];
      pppppuVar2 = ppppppuVar21[1];
      pppppppuStack_250 = (ulong *******)((long)ppppppuVar21[2] << 5);
      pppppuStack_248 = (undefined8 *****)**ppppppuVar21;
      bVar4 = *(byte *)((long)pppppuVar2 + 10);
      uStack_240 = 0;
      uStack_240._0_4_ = 0;
      while (pppppuStack_248 != pppppuVar2 || (uint)uStack_240 != bVar4) {
        func_0x00010bd1a568(&puStack_238,
                            (long)pppppuStack_248 + (ulong)(((uint)uStack_240 & 0xff) << 5) + 0x18);
        func_0x00010b4c386c(&pppppuStack_248);
      }
    }
    else {
      pppppppuStack_250 = (ulong *******)((ulong)*(ushort *)(pppppppuVar14 + 1) << 5);
      ppppppuVar21 = pppppppuVar14[2];
      for (lVar22 = (long)*(short *)((long)pppppppuVar14 + 10) << 5; lVar22 != 0;
          lVar22 = lVar22 + -0x20) {
        func_0x00010bd1a568(&pppppuStack_248,ppppppuVar21 + 1);
        ppppppuVar21 = ppppppuVar21 + 4;
      }
    }
    return pppppppuStack_250;
  }
  return pppppppuVar9;
}



/* Entry: 10bd19bfc; end: 10bd19f0f;  */

byte * FUN_10bd19bfc(byte *param_1,byte *param_2,undefined8 param_3,ulong *param_4,byte *param_5)

{
  undefined8 ***pppuVar1;
  byte bVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  ulong *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  byte *pbStack_190;
  undefined8 **ppuStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  ulong *puStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint auStack_108 [3];
  uint uStack_fc;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_88;
  long lStack_68;
  
  iVar14 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  ppppuStack_f8 = (undefined8 *****)0x0;
  uStack_f0 = 0;
  uVar13 = 0;
  pbStack_e0 = param_2;
  do {
    while( true ) {
      while( true ) {
        pbVar3 = param_5;
        func_0x000107c302ac(param_5,&pbStack_e0);
        pbVar5 = pbStack_e0;
        if (((ulong)pbVar3 & 1) != 0) goto LAB_10bd19e90;
        pbVar3 = pbStack_e0 + 1;
        uStack_fc = (uint)*pbStack_e0;
        if (uStack_fc == 0x1a) break;
        if (*pbStack_e0 == 0x10) {
          pbStack_e0 = pbVar3;
          func_0x00010b4c39d0(pbVar3,auStack_108);
          pbStack_e0 = pbVar3;
          if ((pbVar3 == (byte *)0x0) || (uVar12 = (ulong)auStack_108[0], auStack_108[0] == 0))
          goto LAB_10bd19e78;
          if (iVar14 == 0) {
            iVar14 = 1;
            uVar13 = uVar12;
          }
          else if (iVar14 == 2) {
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            pbVar5 = param_1;
            FUN_10bd19228(param_1,2,uVar12,param_3,param_5,&uStack_140,&uStack_141);
            if (((ulong)pbVar5 & 1) == 0) {
              uVar13 = uStack_f0;
              pppppuVar7 = (undefined8 *****)ppppuStack_f8;
              if (-1 < (long)uStack_e8) {
                uVar13 = uStack_e8 >> 0x38;
                pppppuVar7 = &ppppuStack_f8;
              }
              if ((*param_4 & 1) == 0) {
                puVar6 = param_4;
                func_0x00010bd2b26c(param_4);
              }
              else {
                puVar6 = (ulong *)((*param_4 & 0xfffffffffffffffe) + 8);
              }
              func_0x00010bd1a534(uVar12,pppppuVar7,uVar13,puVar6);
            }
            else {
              pbVar5 = param_1;
              if (uStack_138._5_1_ == '\x01') {
                func_0x00010b4c02cc(param_1,uVar12,0xb);
              }
              else {
                func_0x00010b4c00c0(param_1,uVar12,0xb,uStack_130,uStack_120);
              }
              func_0x00010b4c3a9c(&uStack_d8,param_5,&uStack_150,&ppppuStack_f8);
              func_0x000107c3032c(pbVar5,uStack_150,&uStack_d8);
              if ((pbVar5 == (byte *)0x0) || (iStack_88 != 0)) goto LAB_10bd19e78;
            }
            iVar14 = 3;
            uVar13 = uVar12;
          }
        }
        else {
          pbStack_e0 = pbVar3;
          func_0x00010b4c3a44(pbVar5,&uStack_fc,0);
          if ((uStack_fc == 0) || ((uStack_fc & 7) == 4)) {
            *(uint *)(param_5 + 0x50) = uStack_fc - 1;
            pbVar5 = pbStack_e0;
            goto LAB_10bd19e90;
          }
          pbVar5 = param_1;
          func_0x00010bd1a6d8(param_1,uStack_fc,pbStack_e0);
          pbStack_e0 = pbVar5;
          if (pbVar5 == (byte *)0x0) goto LAB_10bd19e78;
        }
      }
      if (iVar14 != 1) break;
      pbVar5 = param_1;
      pbStack_e0 = pbVar3;
      func_0x00010bd1a6d8(param_1,uVar13 << 3 | 2);
      pbStack_e0 = pbVar5;
      if (pbVar5 == (byte *)0x0) goto LAB_10bd19e78;
      iVar14 = 3;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    ppbVar4 = &pbStack_e0;
    pbStack_e0 = pbVar3;
    func_0x000107c30264(ppbVar4);
    if ((pbStack_e0 == (byte *)0x0) ||
       (pbVar5 = param_5, func_0x000107c30268(param_5,pbStack_e0,ppbVar4,&uStack_d8),
       pbStack_e0 = pbVar5, pbVar5 == (byte *)0x0)) {
      bVar11 = false;
    }
    else {
      if (iVar14 == 0) {
        func_0x000107c27b9c(&ppppuStack_f8,&uStack_d8);
        iVar14 = 2;
      }
      bVar11 = true;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  } while (bVar11);
LAB_10bd19e78:
  pbVar5 = (byte *)0x0;
LAB_10bd19e90:
  pppppuVar7 = &ppppuStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar5;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_f8);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  ppuStack_188 = (undefined8 **)&pbStack_190;
  puStack_178 = (undefined1 *)&pbStack_190;
  pcStack_158 = FUN_10bd19f10;
  puStack_170 = param_4;
  ppppuStack_168 = pppppuVar7;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((long)*(short *)((long)pppppuVar8 + 10) < 0) {
    ppppuVar9 = pppppuVar8[2];
    pppuVar1 = ppppuVar9[1];
    pbStack_190 = (byte *)((long)ppppuVar9[2] << 5);
    ppuStack_188 = **ppppuVar9;
    bVar2 = *(byte *)((long)pppuVar1 + 10);
    uStack_180 = 0;
    uStack_180._0_4_ = 0;
    while ((undefined8 ***)ppuStack_188 != pppuVar1 || (uint)uStack_180 != bVar2) {
      func_0x00010bd1a568(&puStack_178,
                          (long)ppuStack_188 + (ulong)(((uint)uStack_180 & 0xff) << 5) + 0x18);
      func_0x00010b4c386c(&ppuStack_188);
    }
  }
  else {
    pbStack_190 = (byte *)((ulong)*(ushort *)(pppppuVar8 + 1) << 5);
    ppppuVar9 = pppppuVar8[2];
    for (lVar10 = (long)*(short *)((long)pppppuVar8 + 10) << 5; lVar10 != 0; lVar10 = lVar10 + -0x20
        ) {
      func_0x00010bd1a568(&ppuStack_188,ppppuVar9 + 1);
      ppppuVar9 = ppppuVar9 + 4;
    }
  }
  return pbStack_190;
}



/* Entry: 10bd19f10; end: 10bd19fcf;  */

long FUN_10bd19f10(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined1 *puStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = (undefined1 *)&lStack_40;
  puStack_28 = (undefined1 *)&lStack_40;
  if ((long)*(short *)(param_1 + 10) < 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = (undefined1 *)puVar3[1];
    lStack_40 = puVar3[2] << 5;
    puStack_38 = *(undefined1 **)*puVar3;
    bVar2 = puVar1[10];
    uStack_30 = 0;
    uStack_30._0_4_ = 0;
    while (puStack_38 != puVar1 || (uint)uStack_30 != bVar2) {
      func_0x00010bd1a568(&puStack_28,puStack_38 + (ulong)(((uint)uStack_30 & 0xff) << 5) + 0x18);
      func_0x00010b4c386c(&puStack_38);
    }
  }
  else {
    lStack_40 = (ulong)*(ushort *)(param_1 + 8) << 5;
    lVar4 = *(long *)(param_1 + 0x10);
    for (lVar5 = (long)*(short *)(param_1 + 10) << 5; lVar5 != 0; lVar5 = lVar5 + -0x20) {
      func_0x00010bd1a568(&puStack_38,lVar4 + 8);
      lVar4 = lVar4 + 0x20;
    }
  }
  return lStack_40;
}



/* Entry: 10bd19fd0; end: 10bd1a0cb;  */

long * FUN_10bd19fd0(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  iVar1 = *(int *)(&UNK_10e607dc8 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) != '\x01') {
    if (iVar1 == 10) {
      plVar3 = (long *)*param_1;
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x70))();
        return plVar3;
      }
      plVar4 = plVar3;
      func_0x00010bd2cda8();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar4[5] + 0x18))(plVar3);
      return plVar3;
    }
    if (iVar1 != 9) {
      return (long *)0x0;
    }
    lVar2 = *param_1;
    func_0x00010b4cf314(lVar2);
    goto LAB_10bd1a0c0;
  }
  switch(iVar1) {
  case 1:
  case 3:
  case 6:
  case 8:
    uVar5 = *(uint *)(*param_1 + 4);
    lVar2 = (ulong)uVar5 << 2;
    break;
  case 2:
  case 4:
  case 5:
    uVar5 = *(uint *)(*param_1 + 4);
    lVar2 = (ulong)uVar5 << 3;
    break;
  case 7:
    uVar5 = *(int *)(*param_1 + 4) + 8;
    if (*(int *)(*param_1 + 4) < 1) {
      uVar5 = 0;
    }
    return (long *)((ulong)uVar5 + 0x10);
  case 9:
    lVar2 = *param_1;
    FUN_10bd1a59c(lVar2);
    goto LAB_10bd1a0c0;
  case 10:
    lVar2 = *param_1;
    func_0x00010bd1a150(lVar2);
LAB_10bd1a0c0:
    return (long *)(lVar2 + 0x18);
  default:
    return (long *)0x0;
  }
  plVar3 = (long *)(lVar2 + 0x18);
  if ((int)uVar5 < 1) {
    plVar3 = (long *)0x10;
  }
  return plVar3;
}



/* Entry: 10bd1a0cc; end: 10bd1a257;  */

void FUN_10bd1a0cc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5
                  ,undefined1 *param_6)

{
  int iVar1;
  
  FUN_10bd18fd4(param_4,param_3,param_5);
  if ((int)param_4 != 0) {
    iVar1 = *(int *)(&UNK_10e5b4b0c + (ulong)*(byte *)(param_5 + 0xc) * 4);
    *param_6 = 0;
    if (((param_2 == 2) && ((*(byte *)(param_5 + 0xd) & 1) != 0)) && (iVar1 - 5U < 0xfffffffd)) {
      *param_6 = 1;
    }
  }
  return;
}



/* Entry: 10bd1a258; end: 10bd1a29b;  */

undefined8 * FUN_10bd1a258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10bd1a29c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10bd1a29c; end: 10bd1a34b;  */

long FUN_10bd1a29c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_10bce044c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10bce02dc();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_10bce0268(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_10bce031c(&plStack_58);
  return lVar3;
}



/* Entry: 10bd1a34c; end: 10bd1a48b;  */

void FUN_10bd1a34c(ulong *param_1,long *param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *extraout_x9_02;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar6 = param_1[2];
  uVar1 = uVar6 == uVar5;
  plVar4 = param_2;
  if ((bool)uVar1) {
    puVar3 = param_1;
    func_0x0001053a91c8();
    iVar2 = (int)puVar3;
    if (iVar2 == 0) {
      func_0x00010bd1a710();
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_02;
      }
      uVar5 = param_1[1];
      func_0x00010bd1a6c0();
      if ((int)uVar5 < iVar2) {
        uVar5 = puVar3[(int)param_1[1]];
        func_0x00010bd1a6c0();
        puVar3[iVar2] = uVar5;
      }
      uVar5 = param_1[1];
      *(int *)(param_1 + 1) = (int)uVar5 + 1;
      puVar3[(int)uVar5] = (ulong)param_2;
      uVar5 = *param_1;
      if ((uVar5 & 1) != 0) {
        *(int *)(uVar5 - 1) = *(int *)(uVar5 - 1) + 1;
      }
      return;
    }
  }
  func_0x00010bd1a6a8();
  if ((param_3 == 0) && (uVar6 != 0)) {
    if (plVar4 != (long *)0x0) {
      func_0x00010b4d8014(uVar6,plVar4,&UNK_1053a933c);
    }
  }
  else if (uVar6 != param_3) {
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580(param_1,1);
code_r0x0001053a9270:
    uVar5 = *param_1;
  }
  else {
    puVar3 = param_1;
    func_0x0001053a91c8();
    uVar5 = param_1[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar5 == (int)puVar3;
    if ((int)uVar5 < (int)puVar3) {
      uVar1 = (*param_1 & 1) == 0;
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar5 = *puVar3;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar5;
      goto code_r0x0001053a9270;
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar5);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = (ulong)plVar4;
  return;
}



/* Entry: 10bd1a48c; end: 10bd1a533;  */

ulong * FUN_10bd1a48c(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  while ((puVar2 < param_2 && (func_0x00010bd1a654(), puVar2 = param_1, param_1 != (ulong *)0x0))) {
    lVar1 = param_3[2];
    (*(code *)param_3[1])(lVar1,uStack_48);
    if ((int)lVar1 == 0) {
      param_1 = (ulong *)param_3[3];
      if ((*param_1 & 1) == 0) {
        func_0x00010bd2b26c();
      }
      else {
        param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
      }
      FUN_10bd369c4();
    }
    else {
      param_1 = (ulong *)*param_3;
      func_0x000107c2845c(param_1,uStack_48);
    }
  }
  return puVar2;
}



/* Entry: 10bd1a534; end: 10bd1a59b;  */

void FUN_10bd1a534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10bd36a90(param_4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)();
  return;
}



/* Entry: 10bd1a59c; end: 10bd1a5ff;  */

long FUN_10bd1a59c(byte *param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  long lVar3;
  byte *extraout_x9;
  long lVar4;
  ulong uVar5;
  byte *pbVar2;
  
  if ((*param_1 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(int *)(param_1 + 0xc) * 8 + 0x10;
  }
  pbVar2 = param_1;
  func_0x00010bd1a6c0();
  uVar1 = (uint)pbVar2;
  func_0x00010bd1a710();
  if (!(bool)in_ZR) {
    param_1 = extraout_x9;
  }
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    lVar3 = *(long *)param_1;
    FUN_10bd1a600(lVar3);
    lVar4 = lVar3 + lVar4;
    param_1 = param_1 + 8;
  }
  return lVar4;
}



/* Entry: 10bd1a600; end: 10bd1a617;  */

long FUN_10bd1a600(long param_1)

{
  func_0x00010b4cf314();
  return param_1 + 0x18;
}



/* Entry: 10bd1a618; end: 10bd1a75b;  */

void FUN_10bd1a618(void)

{
  return;
}



/* Entry: 10bd1a75c; end: 10bd1a867;  */

void FUN_10bd1a75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong *extraout_x8_03;
  ulong *extraout_x8_04;
  undefined8 extraout_x8_05;
  int *piVar21;
  undefined8 *extraout_x8_06;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong uVar22;
  int iVar23;
  ulong *puVar24;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar25;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar26;
  code *pcVar27;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong auStack_118 [2];
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 *puStack_98;
  undefined4 *puStack_90;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  puVar26 = &stack0xfffffffffffffff0;
  uStack_100 = param_4;
  func_0x00010bd1b57c();
  uStack_fc = (undefined4)param_2;
  puVar10 = &UNK_10f834bdd;
  uStack_38 = extraout_x8;
  func_0x000107c284bc();
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puVar11 = &uStack_130;
  puVar18 = &uStack_fc;
  puStack_68 = puVar10;
  uStack_60 = param_2;
  func_0x00010bd048e4();
  puStack_98 = puVar11;
  puStack_90 = puVar18;
  func_0x000107c284bc();
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar11 = &uStack_148;
  puVar19 = &uStack_100;
  uStack_c8 = param_3;
  puStack_c0 = puVar18;
  func_0x00010bd048e4();
  puStack_f8 = puVar11;
  puStack_f0 = puVar19;
  func_0x00010ae8c6d8(auStack_118,&puStack_68,&puStack_98,&uStack_c8,&puStack_f8);
  func_0x00010bd1b5ec(uStack_101);
  puVar15 = extraout_x11;
  if (in_NG == in_OV) {
    puVar15 = extraout_x8_00;
  }
  func_0x00010ae775cc(param_1);
  puVar12 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd1b5cc();
  func_0x00010bd1b560();
  func_0x00010bd1b54c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar17 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd1b5cc();
  func_0x00010bd1b560();
  pcVar27 = FUN_10bd1a868;
  func_0x00010bd1b5bc();
  puVar7 = auStack_150;
  puVar11 = extraout_x8_01;
  puVar24 = auStack_118;
  do {
    puVar13 = puVar7 + -0x70;
    puVar14 = (ulong *)(puVar7 + -0x70);
    *(ulong **)(puVar7 + -0x20) = puVar24;
    *(ulong **)(puVar7 + -0x18) = puVar12;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(code **)(puVar7 + -8) = pcVar27;
    func_0x00010bd1b57c();
    *(undefined8 *)(puVar7 + -0x28) = extraout_x8_02;
    func_0x000107c284bc();
    *(ulong **)(puVar7 + -0x58) = puVar17;
    *(ulong **)(puVar7 + -0x50) = puVar15;
    func_0x0001089ddc68(puVar7 + -0x70,puVar7 + -0x58);
    func_0x00010bd1b5ec(puVar7[-0x59]);
    puVar17 = extraout_x11_00;
    if (in_NG == in_OV) {
      puVar17 = extraout_x8_03;
    }
    func_0x00010ae775cc(puVar11);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b54c(*(undefined8 *)(puVar7 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b5bc();
    *(ulong *)(puVar7 + -0xd0) = unaff_x28;
    *(ulong *)(puVar7 + -200) = unaff_x27;
    *(ulong **)(puVar7 + -0xc0) = unaff_x26;
    *(ulong **)(puVar7 + -0xb8) = unaff_x25;
    *(ulong *)(puVar7 + -0xb0) = unaff_x24;
    *(ulong **)(puVar7 + -0xa8) = unaff_x23;
    *(undefined ***)(puVar7 + -0xa0) = unaff_x22;
    *(ulong **)(puVar7 + -0x98) = unaff_x21;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x70;
    *(undefined1 **)(puVar7 + -0x88) = puVar13;
    *(undefined1 **)(puVar7 + -0x80) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x78) = FUN_10bd1a8f8;
    puVar26 = puVar7 + -0x80;
    puVar15 = puVar14;
    func_0x00010bd1b57c();
    *(undefined8 *)(puVar7 + -0xe0) = extraout_x8_05;
    uVar8 = (int)puVar15 == (int)puVar17[6];
    if ((int)puVar15 < (int)puVar17[6]) {
      func_0x00010bd1b624();
      puVar15 = (ulong *)(puVar7 + -0x1b8);
      func_0x00010bd1b5a4();
      puVar17 = unaff_x21;
    }
    else {
      iVar23 = (int)puVar14;
      uVar8 = *(int *)((long)puVar17 + 0x34) == iVar23;
      if (iVar23 <= *(int *)((long)puVar17 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar17 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar17[4];
        unaff_x22 = &PTR_PTR_113405ec0;
        puVar15 = puVar17;
LAB_10bd1a9cc:
        uVar8 = unaff_x25 == unaff_x26;
        if ((bool)uVar8) {
          *(undefined ***)(puVar7 + -0x110) = &PTR_FUN_110d9c200;
          *(undefined8 *)(puVar7 + -0x108) = 0;
          *(undefined8 *)(puVar7 + -0xf8) = 0;
          *(undefined8 *)(puVar7 + -0xf0) = 0;
          *(undefined8 *)(puVar7 + -0x100) = 0;
          *(int *)(puVar7 + -0xe8) = iVar23;
          *(undefined4 *)(puVar7 + -0x100) = 4;
          puVar12 = unaff_x23;
          if ((puVar17[3] & 1) != 0) {
            puVar12 = (ulong *)(puVar17[3] + 7);
          }
          uVar6 = (long)(int)puVar17[4];
          puVar17 = puVar12;
          while (uVar6 != 0) {
            uVar22 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar22;
            if (*(int *)(puVar17[uVar22] + 0x28) <= iVar23) {
              uVar6 = uVar2;
              puVar17 = puVar17 + uVar22 + 1;
            }
          }
          uVar8 = puVar17 == puVar12;
          if ((bool)uVar8) {
            *(int *)(puVar7 + -0x238) = iVar23;
            puVar10 = &UNK_10f834cc3;
            func_0x000107c284bc();
            *(undefined **)(puVar7 + -0x1b8) = puVar10;
            *(ulong **)(puVar7 + -0x1b0) = puVar15;
            *(undefined8 *)(puVar7 + -0x170) = 0;
            *(undefined8 *)(puVar7 + -0x168) = 0;
            *(undefined8 *)(puVar7 + -0x160) = 0;
            func_0x00010bd1b608();
            *(undefined **)(puVar7 + -0x200) = puVar10;
            *(ulong **)(puVar7 + -0x1f8) = puVar15;
            func_0x00010bd1b630();
            func_0x000107c2ba40();
            func_0x00010bd1b5ec(puVar7[-0x129]);
            func_0x00010ae775cc(puVar7 + -0x220);
            func_0x00010bd1b5c4();
            func_0x00010bd1b600();
            puVar15 = (ulong *)(puVar7 + -0x220);
            func_0x00010bd1b5a4();
            func_0x000107c31550(puVar7 + -0x220);
          }
          else {
            func_0x00010bd1b644(*(undefined8 *)(puVar17[-1] + 0x20));
            FUN_10bd05474(puVar7 + -0x1b8);
            func_0x00010bd1b644(*(undefined8 *)(puVar17[-1] + 0x18));
            FUN_10bd126b0(puVar7 + -0x1b8);
            FUN_10bd00070(puVar7 + -0x2a0,puVar7 + -0x1b8);
            FUN_10bd00070(puVar7 + -0x200,puVar7 + -0x2a0);
            puVar15 = (ulong *)(puVar7 + -0x200);
            FUN_10bd00070(extraout_x8_04 + 1);
            *extraout_x8_04 = 0;
            FUN_10bd12650(puVar7 + -0x200);
            FUN_10bd12650(puVar7 + -0x2a0);
            func_0x00010bd1b5b4();
          }
          puVar16 = (ulong *)(puVar7 + -0x110);
          FUN_10bd12994();
          goto LAB_10bd1a978;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)(puVar7 + -0x238) = 0;
          puVar10 = &UNK_10f834c44;
          func_0x000107c284bc();
          *(undefined **)(puVar7 + -0x1b8) = puVar10;
          *(ulong **)(puVar7 + -0x1b0) = puVar15;
          *(undefined8 *)(puVar7 + -0x170) = 0;
          *(undefined8 *)(puVar7 + -0x168) = 0;
          *(undefined8 *)(puVar7 + -0x160) = 0;
          func_0x00010bd1b608();
          *(undefined **)(puVar7 + -0x200) = puVar10;
          *(ulong **)(puVar7 + -0x1f8) = puVar15;
          puVar10 = &UNK_10f834c55;
          func_0x000107c284bc();
          *(undefined **)(puVar7 + -0x110) = puVar10;
          *(ulong **)(puVar7 + -0x108) = puVar15;
          func_0x00010bd1b630();
          func_0x000107c2ba44();
          func_0x00010bd1b5ec(puVar7[-0x129]);
          func_0x00010ae775cc(puVar7 + -0x220);
          func_0x00010bd1b5c4();
          func_0x00010bd1b600();
          puVar15 = (ulong *)(puVar7 + -0x220);
          func_0x00010bd1b5a4();
          puVar16 = (ulong *)(puVar7 + -0x220);
        }
        else {
          iVar25 = (int)unaff_x24;
          if ((iVar25 == 0) || (uVar8 = iVar3 == iVar25, iVar25 < iVar3)) break;
          *(int *)(puVar7 + -0x208) = iVar3;
          *(int *)(puVar7 + -0x204) = iVar25;
          puVar10 = &UNK_10f834c61;
          func_0x000107c284bc();
          *(undefined **)(puVar7 + -0x1b8) = puVar10;
          *(ulong **)(puVar7 + -0x1b0) = puVar15;
          *(undefined8 *)(puVar7 + -0x238) = 0;
          *(undefined8 *)(puVar7 + -0x230) = 0;
          *(undefined8 *)(puVar7 + -0x228) = 0;
          puVar13 = puVar7 + -0x238;
          puVar20 = puVar7 + -0x204;
          func_0x00010bd048e4();
          *(undefined1 **)(puVar7 + -0x200) = puVar13;
          *(undefined1 **)(puVar7 + -0x1f8) = puVar20;
          puVar10 = &UNK_10f834c9d;
          func_0x000107c284bc();
          *(undefined **)(puVar7 + -0x110) = puVar10;
          *(undefined1 **)(puVar7 + -0x108) = puVar20;
          *(undefined8 *)(puVar7 + -0x250) = 0;
          *(undefined8 *)(puVar7 + -0x248) = 0;
          *(undefined8 *)(puVar7 + -0x240) = 0;
          puVar13 = puVar7 + -0x250;
          puVar20 = puVar7 + -0x208;
          func_0x00010bd048e4();
          *(undefined1 **)(puVar7 + -0x140) = puVar13;
          *(undefined1 **)(puVar7 + -0x138) = puVar20;
          puVar10 = &DAT_10f62a9de;
          func_0x000107c284bc();
          *(undefined **)(puVar7 + -0x170) = puVar10;
          *(undefined1 **)(puVar7 + -0x168) = puVar20;
          puVar14 = (ulong *)(puVar7 + -0x220);
          func_0x0001089a5b70(puVar7 + -0x220,puVar7 + -0x1b8,puVar7 + -0x200,puVar7 + -0x110,
                              puVar7 + -0x140,puVar7 + -0x170);
          func_0x00010bd1b5ec(puVar7[-0x209]);
          func_0x00010ae775cc(puVar7 + -600);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + -0x220);
          func_0x00010bd1b574();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + -0x238);
          puVar15 = (ulong *)(puVar7 + -600);
          func_0x00010bd1b5a4();
          puVar16 = (ulong *)(puVar7 + -600);
        }
        goto LAB_10bd1a974;
      }
      func_0x00010bd1b624();
      puVar15 = (ulong *)(puVar7 + -0x1b8);
      func_0x00010bd1b5a4();
    }
    puVar16 = (ulong *)(puVar7 + -0x1b8);
LAB_10bd1a974:
    func_0x000107c31550();
LAB_10bd1a978:
    func_0x00010bd1b54c(*(undefined8 *)(puVar7 + -0xe0));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd1b58c();
    func_0x00010bd1b5f8();
    func_0x00010bd1b5b4();
    pcVar27 = FUN_10bd1add0;
    func_0x00010bd1b5d4();
    uVar5 = (int)puVar16[6] - 1;
    in_OV = SBORROW4(uVar5,3);
    in_NG = (int)puVar16[6] + -4 < 0;
    in_ZR = uVar5 == 3;
    puVar11 = extraout_x8_06;
    puVar12 = extraout_x8_04;
    puVar24 = puVar14;
    unaff_x21 = puVar17;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)puVar16 + 0x34) - 1;
      in_OV = SBORROW4(uVar5,2);
      in_NG = *(int *)((long)puVar16 + 0x34) + -3 < 0;
      in_ZR = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)puVar16[7] - 1;
        in_OV = SBORROW4(uVar5,2);
        in_NG = (int)puVar16[7] + -3 < 0;
        in_ZR = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar16 + 0x3c) - 1;
          bVar9 = (1 << (ulong)(*(uint *)((long)puVar16 + 0x3c) & 0x1f) & 0xdU) == 0;
          in_ZR = bVar1 || bVar9;
          in_NG = '\0';
          in_OV = '\0';
          if (bVar1 || bVar9) {
            puVar17 = (ulong *)&UNK_10f834e19;
            puVar7 = puVar7 + -0x2a0;
          }
          else {
            uVar5 = (int)puVar16[8] - 1;
            in_OV = SBORROW4(uVar5,2);
            in_NG = (int)puVar16[8] + -3 < 0;
            in_ZR = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)puVar16 + 0x44) - 1;
              in_OV = SBORROW4(uVar5,2);
              in_NG = *(int *)((long)puVar16 + 0x44) + -3 < 0;
              in_ZR = uVar5 == 2;
              if (uVar5 < 2) {
                *extraout_x8_06 = 0;
                return;
              }
              puVar17 = (ulong *)&UNK_10f834ed5;
              puVar7 = puVar7 + -0x2a0;
            }
            else {
              puVar17 = (ulong *)&UNK_10f834e76;
              puVar7 = puVar7 + -0x2a0;
            }
          }
        }
        else {
          puVar17 = (ulong *)&UNK_10f834dac;
          puVar7 = puVar7 + -0x2a0;
        }
      }
      else {
        puVar17 = (ulong *)&UNK_10f834d5b;
        puVar7 = puVar7 + -0x2a0;
      }
    }
    else {
      puVar17 = (ulong *)&UNK_10f834d00;
      puVar7 = puVar7 + -0x2a0;
    }
  } while( true );
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_10bd05474(puVar7 + -0x1b8);
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_10bd126b0(puVar7 + -0x1b8);
  puVar16 = (ulong *)(puVar7 + -0x1b8);
  FUN_10bd1add0(puVar7 + -0x200);
  unaff_x28 = *(ulong *)(puVar7 + -0x200);
  if (unaff_x28 == 0) {
    func_0x00010bd1b5f8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_04 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar21 = (int *)(unaff_x28 - 1);
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = *piVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar16 = extraout_x8_04;
    FUN_10bd1b484();
    func_0x00010bd1b5f8();
  }
  func_0x00010bd1b5b4();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_10bd1a978;
  goto LAB_10bd1a9cc;
}



/* Entry: 10bd1a868; end: 10bd1a8f7;  */

void FUN_10bd1a868(undefined8 *param_1,undefined *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar14;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar15;
  ulong *unaff_x19;
  int iVar16;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar17;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    func_0x000107c284bc();
    *(undefined **)((long)register0x00000008 + -0x58) = param_2;
    *(ulong **)((long)register0x00000008 + -0x50) = param_3;
    func_0x0001089ddc68((undefined1 *)((long)register0x00000008 + -0x70),
                        (undefined1 *)((long)register0x00000008 + -0x58));
    func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x59));
    puVar13 = extraout_x11;
    if (in_NG == in_OV) {
      puVar13 = extraout_x8_00;
    }
    func_0x00010ae775cc(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b5bc();
    *(ulong *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar9;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10bd1a8f8;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar9 = puVar10;
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_x8_02;
    uVar7 = (int)puVar9 == (int)puVar13[6];
    if ((int)puVar9 < (int)puVar13[6]) {
      func_0x00010bd1b624();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00010bd1b5a4();
      puVar13 = unaff_x21;
    }
    else {
      iVar16 = (int)puVar10;
      uVar7 = *(int *)((long)puVar13 + 0x34) == iVar16;
      if (iVar16 <= *(int *)((long)puVar13 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar13 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar13[4];
        unaff_x22 = &PTR_PTR_113405ec0;
        param_3 = puVar13;
LAB_10bd1a9cc:
        uVar7 = unaff_x25 == unaff_x26;
        if ((bool)uVar7) {
          *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_FUN_110d9c200;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(int *)((long)register0x00000008 + -0xe8) = iVar16;
          *(undefined4 *)((long)register0x00000008 + -0x100) = 4;
          puVar12 = unaff_x23;
          if ((puVar13[3] & 1) != 0) {
            puVar12 = (ulong *)(puVar13[3] + 7);
          }
          uVar6 = (long)(int)puVar13[4];
          puVar13 = puVar12;
          while (uVar6 != 0) {
            uVar15 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar15;
            if (*(int *)(puVar13[uVar15] + 0x28) <= iVar16) {
              uVar6 = uVar2;
              puVar13 = puVar13 + uVar15 + 1;
            }
          }
          uVar7 = puVar13 == puVar12;
          if ((bool)uVar7) {
            *(int *)((long)register0x00000008 + -0x238) = iVar16;
            puVar11 = &UNK_10f834cc3;
            func_0x000107c284bc();
            *(undefined **)((long)register0x00000008 + -0x1b8) = puVar11;
            *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
            *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
            func_0x00010bd1b608();
            *(undefined **)((long)register0x00000008 + -0x200) = puVar11;
            *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
            func_0x00010bd1b630();
            func_0x000107c2ba40();
            func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x129));
            func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x220));
            func_0x00010bd1b5c4();
            func_0x00010bd1b600();
            param_3 = (ulong *)((long)register0x00000008 + -0x220);
            func_0x00010bd1b5a4();
            func_0x000107c31550((undefined1 *)((long)register0x00000008 + -0x220));
          }
          else {
            func_0x00010bd1b644(*(undefined8 *)(puVar13[-1] + 0x20));
            FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x1b8));
            func_0x00010bd1b644(*(undefined8 *)(puVar13[-1] + 0x18));
            FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -0x2a0),
                          (undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -0x200),
                          (undefined1 *)((long)register0x00000008 + -0x2a0));
            param_3 = (ulong *)((long)register0x00000008 + -0x200);
            FUN_10bd00070(extraout_x8_01 + 1);
            *extraout_x8_01 = 0;
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -0x200));
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -0x2a0));
            func_0x00010bd1b5b4();
          }
          puVar12 = (ulong *)((long)register0x00000008 + -0x110);
          FUN_10bd12994();
          goto LAB_10bd1a978;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x238) = 0;
          puVar11 = &UNK_10f834c44;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar11;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          func_0x00010bd1b608();
          *(undefined **)((long)register0x00000008 + -0x200) = puVar11;
          *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
          puVar11 = &UNK_10f834c55;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar11;
          *(ulong **)((long)register0x00000008 + -0x108) = param_3;
          func_0x00010bd1b630();
          func_0x000107c2ba44();
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x129));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00010bd1b5c4();
          func_0x00010bd1b600();
          param_3 = (ulong *)((long)register0x00000008 + -0x220);
          func_0x00010bd1b5a4();
          puVar12 = (ulong *)((long)register0x00000008 + -0x220);
        }
        else {
          iVar17 = (int)unaff_x24;
          if ((iVar17 == 0) || (uVar7 = iVar3 == iVar17, iVar17 < iVar3)) break;
          *(int *)((long)register0x00000008 + -0x208) = iVar3;
          *(int *)((long)register0x00000008 + -0x204) = iVar17;
          puVar11 = &UNK_10f834c61;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar11;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x238);
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x204);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -0x200) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x1f8) = puVar9;
          puVar11 = &UNK_10f834c9d;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar11;
          *(undefined1 **)((long)register0x00000008 + -0x108) = puVar9;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x250);
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x208);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -0x140) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x138) = puVar9;
          puVar11 = &DAT_10f62a9de;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x170) = puVar11;
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar9;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x220);
          func_0x0001089a5b70((undefined1 *)((long)register0x00000008 + -0x220),
                              (undefined1 *)((long)register0x00000008 + -0x1b8),
                              (undefined1 *)((long)register0x00000008 + -0x200),
                              (undefined1 *)((long)register0x00000008 + -0x110),
                              (undefined1 *)((long)register0x00000008 + -0x140),
                              (undefined1 *)((long)register0x00000008 + -0x170));
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x209));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -600));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00010bd1b574();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x238));
          param_3 = (ulong *)((long)register0x00000008 + -600);
          func_0x00010bd1b5a4();
          puVar12 = (ulong *)((long)register0x00000008 + -600);
        }
        goto LAB_10bd1a974;
      }
      func_0x00010bd1b624();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00010bd1b5a4();
    }
    puVar12 = (ulong *)((long)register0x00000008 + -0x1b8);
LAB_10bd1a974:
    func_0x000107c31550();
LAB_10bd1a978:
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -0xe0));
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd1b58c();
    func_0x00010bd1b5f8();
    func_0x00010bd1b5b4();
    unaff_x30 = FUN_10bd1add0;
    func_0x00010bd1b5d4();
    uVar5 = (int)puVar12[6] - 1;
    in_OV = SBORROW4(uVar5,3);
    in_NG = (int)puVar12[6] + -4 < 0;
    in_ZR = uVar5 == 3;
    param_1 = extraout_x8_03;
    unaff_x19 = extraout_x8_01;
    unaff_x20 = puVar10;
    unaff_x21 = puVar13;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)puVar12 + 0x34) - 1;
      in_OV = SBORROW4(uVar5,2);
      in_NG = *(int *)((long)puVar12 + 0x34) + -3 < 0;
      in_ZR = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)puVar12[7] - 1;
        in_OV = SBORROW4(uVar5,2);
        in_NG = (int)puVar12[7] + -3 < 0;
        in_ZR = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar12 + 0x3c) - 1;
          bVar8 = (1 << (ulong)(*(uint *)((long)puVar12 + 0x3c) & 0x1f) & 0xdU) == 0;
          in_ZR = bVar1 || bVar8;
          in_NG = '\0';
          in_OV = '\0';
          if (bVar1 || bVar8) {
            param_2 = &UNK_10f834e19;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
          }
          else {
            uVar5 = (int)puVar12[8] - 1;
            in_OV = SBORROW4(uVar5,2);
            in_NG = (int)puVar12[8] + -3 < 0;
            in_ZR = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)puVar12 + 0x44) - 1;
              in_OV = SBORROW4(uVar5,2);
              in_NG = *(int *)((long)puVar12 + 0x44) + -3 < 0;
              in_ZR = uVar5 == 2;
              if (uVar5 < 2) {
                *extraout_x8_03 = 0;
                return;
              }
              param_2 = &UNK_10f834ed5;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
            }
            else {
              param_2 = &UNK_10f834e76;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
            }
          }
        }
        else {
          param_2 = &UNK_10f834dac;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
        }
      }
      else {
        param_2 = &UNK_10f834d5b;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
      }
    }
    else {
      param_2 = &UNK_10f834d00;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    }
  } while( true );
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x1b8));
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x1b8));
  puVar12 = (ulong *)((long)register0x00000008 + -0x1b8);
  FUN_10bd1add0((undefined1 *)((long)register0x00000008 + -0x200));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -0x200);
  if (unaff_x28 == 0) {
    func_0x00010bd1b5f8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_01 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar14 = (int *)(unaff_x28 - 1);
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar1) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar12 = extraout_x8_01;
    FUN_10bd1b484();
    func_0x00010bd1b5f8();
  }
  func_0x00010bd1b5b4();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_10bd1a978;
  goto LAB_10bd1a9cc;
}



/* Entry: 10bd1a8f8; end: 10bd1adcf;  */

void FUN_10bd1a8f8(ulong *param_1,undefined1 *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar15;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar16;
  undefined1 *unaff_x19;
  int iVar17;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar18;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = param_2;
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8_02;
    uVar8 = (int)puVar10 == (int)param_3[6];
    if ((int)puVar10 < (int)param_3[6]) {
      func_0x00010bd1b624();
      puVar14 = (ulong *)((long)register0x00000008 + -0x148);
      func_0x00010bd1b5a4();
      param_3 = unaff_x21;
    }
    else {
      iVar17 = (int)param_2;
      uVar8 = *(int *)((long)param_3 + 0x34) == iVar17;
      if (iVar17 <= *(int *)((long)param_3 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = param_3 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)param_3[4];
        unaff_x22 = &PTR_PTR_113405ec0;
        puVar14 = param_3;
LAB_10bd1a9cc:
        uVar8 = unaff_x25 == unaff_x26;
        puVar10 = param_2;
        if ((bool)uVar8) {
          *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_110d9c200;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(int *)((long)register0x00000008 + -0x78) = iVar17;
          *(undefined4 *)((long)register0x00000008 + -0x90) = 4;
          puVar11 = unaff_x23;
          if ((param_3[3] & 1) != 0) {
            puVar11 = (ulong *)(param_3[3] + 7);
          }
          uVar5 = (long)(int)param_3[4];
          unaff_x21 = puVar11;
          while (uVar5 != 0) {
            uVar16 = uVar5 >> 1;
            uVar2 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
            uVar5 = uVar16;
            if (*(int *)(unaff_x21[uVar16] + 0x28) <= iVar17) {
              uVar5 = uVar2;
              unaff_x21 = unaff_x21 + uVar16 + 1;
            }
          }
          uVar8 = unaff_x21 == puVar11;
          if ((bool)uVar8) {
            *(int *)((long)register0x00000008 + -0x1c8) = iVar17;
            puVar12 = &UNK_10f834cc3;
            func_0x000107c284bc();
            *(undefined **)((long)register0x00000008 + -0x148) = puVar12;
            *(ulong **)((long)register0x00000008 + -0x140) = puVar14;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
            func_0x00010bd1b608();
            *(undefined **)((long)register0x00000008 + -400) = puVar12;
            *(ulong **)((long)register0x00000008 + -0x188) = puVar14;
            func_0x00010bd1b630();
            func_0x000107c2ba40();
            func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0xb9));
            func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x1b0));
            func_0x00010bd1b5c4();
            func_0x00010bd1b600();
            puVar14 = (ulong *)((long)register0x00000008 + -0x1b0);
            func_0x00010bd1b5a4();
            func_0x000107c31550((undefined1 *)((long)register0x00000008 + -0x1b0));
          }
          else {
            func_0x00010bd1b644(*(undefined8 *)(unaff_x21[-1] + 0x20));
            FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x148));
            func_0x00010bd1b644(*(undefined8 *)(unaff_x21[-1] + 0x18));
            FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x148));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -0x230),
                          (undefined1 *)((long)register0x00000008 + -0x148));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -400),
                          (undefined1 *)((long)register0x00000008 + -0x230));
            puVar14 = (ulong *)((long)register0x00000008 + -400);
            FUN_10bd00070(param_1 + 1);
            *param_1 = 0;
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -400));
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -0x230));
            func_0x00010bd1b5b4();
          }
          puVar11 = (ulong *)((long)register0x00000008 + -0xa0);
          FUN_10bd12994();
          goto LAB_10bd1a978;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x1c8) = 0;
          puVar12 = &UNK_10f834c44;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x148) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x140) = puVar14;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          func_0x00010bd1b608();
          *(undefined **)((long)register0x00000008 + -400) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x188) = puVar14;
          puVar12 = &UNK_10f834c55;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0xa0) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x98) = puVar14;
          func_0x00010bd1b630();
          func_0x000107c2ba44();
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0xb9));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x1b0));
          func_0x00010bd1b5c4();
          func_0x00010bd1b600();
          puVar14 = (ulong *)((long)register0x00000008 + -0x1b0);
          func_0x00010bd1b5a4();
          puVar11 = (ulong *)((long)register0x00000008 + -0x1b0);
        }
        else {
          iVar18 = (int)unaff_x24;
          if ((iVar18 == 0) || (uVar8 = iVar3 == iVar18, iVar18 < iVar3)) break;
          *(int *)((long)register0x00000008 + -0x198) = iVar3;
          *(int *)((long)register0x00000008 + -0x194) = iVar18;
          puVar12 = &UNK_10f834c61;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x148) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x140) = puVar14;
          *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x1c8);
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x194);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -400) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x188) = puVar13;
          puVar12 = &UNK_10f834c9d;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0xa0) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x98) = puVar13;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x1e0);
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x198);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -200) = puVar13;
          puVar12 = &DAT_10f62a9de;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x100) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0xf8) = puVar13;
          param_2 = (undefined1 *)((long)register0x00000008 + -0x1b0);
          func_0x0001089a5b70((undefined1 *)((long)register0x00000008 + -0x1b0),
                              (undefined1 *)((long)register0x00000008 + -0x148),
                              (undefined1 *)((long)register0x00000008 + -400),
                              (undefined1 *)((long)register0x00000008 + -0xa0),
                              (undefined1 *)((long)register0x00000008 + -0xd0),
                              (undefined1 *)((long)register0x00000008 + -0x100));
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x199));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x1e8));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x1b0));
          func_0x00010bd1b574();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x1c8));
          puVar14 = (ulong *)((long)register0x00000008 + -0x1e8);
          func_0x00010bd1b5a4();
          puVar11 = (ulong *)((long)register0x00000008 + -0x1e8);
        }
        goto LAB_10bd1a974;
      }
      func_0x00010bd1b624();
      puVar14 = (ulong *)((long)register0x00000008 + -0x148);
      func_0x00010bd1b5a4();
    }
    puVar11 = (ulong *)((long)register0x00000008 + -0x148);
LAB_10bd1a974:
    func_0x000107c31550();
    puVar10 = param_2;
    unaff_x21 = param_3;
LAB_10bd1a978:
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd1b58c();
    func_0x00010bd1b5f8();
    func_0x00010bd1b5b4();
    func_0x00010bd1b5d4();
    uVar4 = (int)puVar11[6] - 1;
    cVar6 = SBORROW4(uVar4,3);
    cVar7 = (int)puVar11[6] + -4 < 0;
    uVar8 = uVar4 == 3;
    if (uVar4 < 3) {
      uVar4 = *(int *)((long)puVar11 + 0x34) - 1;
      cVar6 = SBORROW4(uVar4,2);
      cVar7 = *(int *)((long)puVar11 + 0x34) + -3 < 0;
      uVar8 = uVar4 == 2;
      if (uVar4 < 2) {
        uVar4 = (int)puVar11[7] - 1;
        cVar6 = SBORROW4(uVar4,2);
        cVar7 = (int)puVar11[7] + -3 < 0;
        uVar8 = uVar4 == 2;
        if (uVar4 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar11 + 0x3c) - 1;
          bVar9 = (1 << (ulong)(*(uint *)((long)puVar11 + 0x3c) & 0x1f) & 0xdU) == 0;
          uVar8 = bVar1 || bVar9;
          cVar7 = false;
          cVar6 = false;
          if (bVar1 || bVar9) {
            puVar12 = &UNK_10f834e19;
          }
          else {
            uVar4 = (int)puVar11[8] - 1;
            cVar6 = SBORROW4(uVar4,2);
            cVar7 = (int)puVar11[8] + -3 < 0;
            uVar8 = uVar4 == 2;
            if (uVar4 < 2) {
              uVar4 = *(int *)((long)puVar11 + 0x44) - 1;
              cVar6 = SBORROW4(uVar4,2);
              cVar7 = *(int *)((long)puVar11 + 0x44) + -3 < 0;
              uVar8 = uVar4 == 2;
              if (uVar4 < 2) {
                *extraout_x8_03 = 0;
                return;
              }
              puVar12 = &UNK_10f834ed5;
            }
            else {
              puVar12 = &UNK_10f834e76;
            }
          }
        }
        else {
          puVar12 = &UNK_10f834dac;
        }
      }
      else {
        puVar12 = &UNK_10f834d5b;
      }
    }
    else {
      puVar12 = &UNK_10f834d00;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    *(undefined1 **)((long)register0x00000008 + -0x250) = puVar10;
    *(ulong **)((long)register0x00000008 + -0x248) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x240) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x238) = FUN_10bd1add0;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x240);
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -600) = extraout_x8;
    func_0x000107c284bc();
    *(undefined **)((long)register0x00000008 + -0x288) = puVar12;
    *(ulong **)((long)register0x00000008 + -0x280) = puVar14;
    func_0x0001089ddc68((undefined1 *)((long)register0x00000008 + -0x2a0),
                        (undefined1 *)((long)register0x00000008 + -0x288));
    func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x289));
    param_3 = extraout_x11;
    if (cVar7 == cVar6) {
      param_3 = extraout_x8_00;
    }
    func_0x00010ae775cc(extraout_x8_03);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -600));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    unaff_x30 = FUN_10bd1a8f8;
    func_0x00010bd1b5bc();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    param_1 = extraout_x8_01;
  } while( true );
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x148));
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x148));
  puVar11 = (ulong *)((long)register0x00000008 + -0x148);
  FUN_10bd1add0((undefined1 *)((long)register0x00000008 + -400));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -400);
  if (unaff_x28 == 0) {
    func_0x00010bd1b5f8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *param_1 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar15 = (int *)(unaff_x28 - 1);
      do {
        cVar7 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar1) {
          *piVar15 = *piVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puVar11 = param_1;
    FUN_10bd1b484();
    func_0x00010bd1b5f8();
  }
  func_0x00010bd1b5b4();
  unaff_x25 = unaff_x25 + 1;
  unaff_x21 = param_3;
  if (unaff_x28 != 0) goto LAB_10bd1a978;
  goto LAB_10bd1a9cc;
}



/* Entry: 10bd1add0; end: 10bd1ae93;  */

void FUN_10bd1add0(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar15;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar16;
  ulong *unaff_x19;
  int iVar17;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar18;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar5 = (int)param_2[6] - 1;
    cVar7 = SBORROW4(uVar5,3);
    cVar8 = (int)param_2[6] + -4 < 0;
    uVar9 = uVar5 == 3;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)param_2 + 0x34) - 1;
      cVar7 = SBORROW4(uVar5,2);
      cVar8 = *(int *)((long)param_2 + 0x34) + -3 < 0;
      uVar9 = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)param_2[7] - 1;
        cVar7 = SBORROW4(uVar5,2);
        cVar8 = (int)param_2[7] + -3 < 0;
        uVar9 = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)param_2 + 0x3c) - 1;
          bVar10 = (1 << (ulong)(*(uint *)((long)param_2 + 0x3c) & 0x1f) & 0xdU) == 0;
          uVar9 = bVar1 || bVar10;
          cVar8 = false;
          cVar7 = false;
          if (bVar1 || bVar10) {
            puVar13 = &UNK_10f834e19;
          }
          else {
            uVar5 = (int)param_2[8] - 1;
            cVar7 = SBORROW4(uVar5,2);
            cVar8 = (int)param_2[8] + -3 < 0;
            uVar9 = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)param_2 + 0x44) - 1;
              cVar7 = SBORROW4(uVar5,2);
              cVar8 = *(int *)((long)param_2 + 0x44) + -3 < 0;
              uVar9 = uVar5 == 2;
              if (uVar5 < 2) {
                *param_1 = 0;
                return;
              }
              puVar13 = &UNK_10f834ed5;
            }
            else {
              puVar13 = &UNK_10f834e76;
            }
          }
        }
        else {
          puVar13 = &UNK_10f834dac;
        }
      }
      else {
        puVar13 = &UNK_10f834d5b;
      }
    }
    else {
      puVar13 = &UNK_10f834d00;
    }
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    func_0x000107c284bc();
    *(undefined **)((long)register0x00000008 + -0x58) = puVar13;
    *(ulong **)((long)register0x00000008 + -0x50) = param_3;
    func_0x0001089ddc68((undefined1 *)((long)register0x00000008 + -0x70),
                        (undefined1 *)((long)register0x00000008 + -0x58));
    func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x59));
    puVar14 = extraout_x11;
    if (cVar8 == cVar7) {
      puVar14 = extraout_x8_00;
    }
    func_0x00010ae775cc(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bd1b5bc();
    *(ulong *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar11;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10bd1a8f8;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar11 = puVar12;
    func_0x00010bd1b57c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_x8_02;
    uVar9 = (int)puVar11 == (int)puVar14[6];
    if ((int)puVar11 < (int)puVar14[6]) {
      func_0x00010bd1b624();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00010bd1b5a4();
      puVar14 = unaff_x21;
    }
    else {
      iVar17 = (int)puVar12;
      uVar9 = *(int *)((long)puVar14 + 0x34) == iVar17;
      if (iVar17 <= *(int *)((long)puVar14 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar14 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar14[4];
        unaff_x22 = &PTR_PTR_113405ec0;
        param_3 = puVar14;
LAB_10bd1a9cc:
        uVar9 = unaff_x25 == unaff_x26;
        if ((bool)uVar9) {
          *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_FUN_110d9c200;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(int *)((long)register0x00000008 + -0xe8) = iVar17;
          *(undefined4 *)((long)register0x00000008 + -0x100) = 4;
          puVar3 = unaff_x23;
          if ((puVar14[3] & 1) != 0) {
            puVar3 = (ulong *)(puVar14[3] + 7);
          }
          uVar6 = (long)(int)puVar14[4];
          puVar14 = puVar3;
          while (uVar6 != 0) {
            uVar16 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar16;
            if (*(int *)(puVar14[uVar16] + 0x28) <= iVar17) {
              uVar6 = uVar2;
              puVar14 = puVar14 + uVar16 + 1;
            }
          }
          uVar9 = puVar14 == puVar3;
          if ((bool)uVar9) {
            *(int *)((long)register0x00000008 + -0x238) = iVar17;
            puVar13 = &UNK_10f834cc3;
            func_0x000107c284bc();
            *(undefined **)((long)register0x00000008 + -0x1b8) = puVar13;
            *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
            *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
            func_0x00010bd1b608();
            *(undefined **)((long)register0x00000008 + -0x200) = puVar13;
            *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
            func_0x00010bd1b630();
            func_0x000107c2ba40();
            func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x129));
            func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x220));
            func_0x00010bd1b5c4();
            func_0x00010bd1b600();
            param_3 = (ulong *)((long)register0x00000008 + -0x220);
            func_0x00010bd1b5a4();
            func_0x000107c31550((undefined1 *)((long)register0x00000008 + -0x220));
          }
          else {
            func_0x00010bd1b644(*(undefined8 *)(puVar14[-1] + 0x20));
            FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x1b8));
            func_0x00010bd1b644(*(undefined8 *)(puVar14[-1] + 0x18));
            FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -0x2a0),
                          (undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_10bd00070((undefined1 *)((long)register0x00000008 + -0x200),
                          (undefined1 *)((long)register0x00000008 + -0x2a0));
            param_3 = (ulong *)((long)register0x00000008 + -0x200);
            FUN_10bd00070(extraout_x8_01 + 1);
            *extraout_x8_01 = 0;
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -0x200));
            FUN_10bd12650((undefined1 *)((long)register0x00000008 + -0x2a0));
            func_0x00010bd1b5b4();
          }
          param_2 = (ulong *)((long)register0x00000008 + -0x110);
          FUN_10bd12994();
          goto LAB_10bd1a978;
        }
        unaff_x27 = *unaff_x25;
        iVar4 = *(int *)(unaff_x27 + 0x28);
        if (iVar4 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x238) = 0;
          puVar13 = &UNK_10f834c44;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          func_0x00010bd1b608();
          *(undefined **)((long)register0x00000008 + -0x200) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
          puVar13 = &UNK_10f834c55;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x108) = param_3;
          func_0x00010bd1b630();
          func_0x000107c2ba44();
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x129));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00010bd1b5c4();
          func_0x00010bd1b600();
          param_3 = (ulong *)((long)register0x00000008 + -0x220);
          func_0x00010bd1b5a4();
          param_2 = (ulong *)((long)register0x00000008 + -0x220);
        }
        else {
          iVar18 = (int)unaff_x24;
          if ((iVar18 == 0) || (uVar9 = iVar4 == iVar18, iVar18 < iVar4)) break;
          *(int *)((long)register0x00000008 + -0x208) = iVar4;
          *(int *)((long)register0x00000008 + -0x204) = iVar18;
          puVar13 = &UNK_10f834c61;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x238);
          puVar11 = (undefined1 *)((long)register0x00000008 + -0x204);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -0x200) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x1f8) = puVar11;
          puVar13 = &UNK_10f834c9d;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar13;
          *(undefined1 **)((long)register0x00000008 + -0x108) = puVar11;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x250);
          puVar11 = (undefined1 *)((long)register0x00000008 + -0x208);
          func_0x00010bd048e4();
          *(undefined1 **)((long)register0x00000008 + -0x140) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x138) = puVar11;
          puVar13 = &DAT_10f62a9de;
          func_0x000107c284bc();
          *(undefined **)((long)register0x00000008 + -0x170) = puVar13;
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar11;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x220);
          func_0x0001089a5b70((undefined1 *)((long)register0x00000008 + -0x220),
                              (undefined1 *)((long)register0x00000008 + -0x1b8),
                              (undefined1 *)((long)register0x00000008 + -0x200),
                              (undefined1 *)((long)register0x00000008 + -0x110),
                              (undefined1 *)((long)register0x00000008 + -0x140),
                              (undefined1 *)((long)register0x00000008 + -0x170));
          func_0x00010bd1b5ec(*(undefined1 *)((long)register0x00000008 + -0x209));
          func_0x00010ae775cc((undefined1 *)((long)register0x00000008 + -600));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00010bd1b574();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x238));
          param_3 = (ulong *)((long)register0x00000008 + -600);
          func_0x00010bd1b5a4();
          param_2 = (ulong *)((long)register0x00000008 + -600);
        }
        goto LAB_10bd1a974;
      }
      func_0x00010bd1b624();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00010bd1b5a4();
    }
    param_2 = (ulong *)((long)register0x00000008 + -0x1b8);
LAB_10bd1a974:
    func_0x000107c31550();
LAB_10bd1a978:
    func_0x00010bd1b54c(*(undefined8 *)((long)register0x00000008 + -0xe0));
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd1b58c();
    func_0x00010bd1b5f8();
    func_0x00010bd1b5b4();
    unaff_x30 = FUN_10bd1add0;
    func_0x00010bd1b5d4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    param_1 = extraout_x8_03;
    unaff_x19 = extraout_x8_01;
    unaff_x20 = puVar12;
    unaff_x21 = puVar14;
  } while( true );
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_10bd05474((undefined1 *)((long)register0x00000008 + -0x1b8));
  func_0x00010bd1b644(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_10bd126b0((undefined1 *)((long)register0x00000008 + -0x1b8));
  param_2 = (ulong *)((long)register0x00000008 + -0x1b8);
  FUN_10bd1add0((undefined1 *)((long)register0x00000008 + -0x200));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -0x200);
  if (unaff_x28 == 0) {
    func_0x00010bd1b5f8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_01 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar15 = (int *)(unaff_x28 - 1);
      do {
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar1) {
          *piVar15 = *piVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    param_2 = extraout_x8_01;
    FUN_10bd1b484();
    func_0x00010bd1b5f8();
  }
  func_0x00010bd1b5b4();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_10bd1a978;
  goto LAB_10bd1a9cc;
}



/* Entry: 10bd1ae94; end: 10bd1af4b;  */

void FUN_10bd1ae94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_80;
  undefined1 auStack_78 [72];
  
  FUN_10bd05474(auStack_78,param_2);
  FUN_10bd126b0(auStack_78,param_3);
  FUN_10bd126b0(auStack_78,param_4);
  FUN_10bd1add0(&lStack_80,auStack_78);
  if (lStack_80 == 0) {
    func_0x00010bd1b61c();
    FUN_10bd1b4f0(param_1,auStack_78);
  }
  else {
    FUN_10bd1b494(param_1,&lStack_80);
    func_0x00010bd1b61c();
  }
  FUN_10bd12650(auStack_78);
  return;
}



/* Entry: 10bd1af4c; end: 10bd1b0c7;  */

void FUN_10bd1af4c(undefined8 *param_1,undefined8 param_2,undefined ***param_3,long param_4)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_80 = &PTR_FUN_110d9cda0;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_68 = &UNK_10e52b660;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_4 != 0) {
    pppuVar2 = &ppuStack_80;
    FUN_10bd18758(pppuVar2,param_4);
    (*(code *)(*pppuVar2)[2])();
    func_0x00010b4d1804(&pppuStack_98,param_3);
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      pppuStack_98 = &pppuStack_98;
    }
    func_0x000107c30344(pppuVar2,pppuStack_98,uStack_90);
    func_0x00010bd1b5cc();
    pppuVar1 = pppuVar2;
    if (pppuVar2 != (undefined ***)0x0) goto LAB_10bd1b028;
    FUN_10bdb2a88(&pppuStack_98,&UNK_10f834ba2,0x1e8,&UNK_10f834ce7,0x18);
    func_0x00010ae6c700(&pppuStack_98);
  }
  pppuVar2 = (undefined ***)0x0;
  pppuVar1 = param_3;
LAB_10bd1b028:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10bd1b0c8(param_2,pppuVar1,param_1);
  if (pppuVar2 != (undefined ***)0x0) {
    (*(code *)(*pppuVar2)[1])(pppuVar2);
  }
  FUN_10bd18664(&ppuStack_80);
  return;
}



/* Entry: 10bd1b0c8; end: 10bd1b44b;  */

undefined8 ** FUN_10bd1b0c8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  undefined8 auStack_190 [3];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  char *pcStack_160;
  undefined8 *puStack_158;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_d0 [48];
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_70;
  
  puVar10 = param_2;
  func_0x00010bd1b57c();
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_70 = extraout_x8;
  FUN_10bd2b4f4(puVar10);
  puVar5 = param_2;
  FUN_10bd1d54c(puVar10,param_2,&puStack_178);
  puVar1 = puStack_170;
  puVar10 = puStack_178;
  do {
    uVar2 = puVar10 == puVar1;
    if ((bool)uVar2) {
      ppuVar9 = &puStack_178;
      FUN_10bce0514();
      func_0x00010bd1b54c(uStack_70);
      if ((bool)uVar2) {
        return ppuVar9;
      }
      ___stack_chk_fail();
      ppuVar9 = &puStack_178;
      FUN_10bce0514();
      func_0x00010bd1b5bc();
      *ppuVar9 = (undefined8 *)*puVar5;
      *puVar5 = 0x36;
      FUN_10bd1b484();
      return ppuVar9;
    }
    puVar13 = (undefined *)*puVar10;
    if ((((byte)puVar13[1] >> 3 & 1) == 0) ||
       (puVar3 = puVar13, func_0x00010b91adc8(), (int)puVar3 != 10)) {
      puVar4 = puVar13;
      FUN_10bcefa5c();
      iVar11 = (int)param_1;
      puVar3 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        FUN_10bd2b4f4(param_2);
        FUN_10bd1fa08(puVar5,param_2,puVar13);
        puVar3 = puVar13;
        FUN_10bcefa5c();
        FUN_10bcee5e4();
        if (((puVar3 != (undefined *)0x0) &&
            ((*(byte *)(*(long *)(puVar3 + 0x18) + 0x28) >> 1 & 1) != 0)) &&
           (lVar12 = *(long *)(*(long *)(puVar3 + 0x18) + 0x50), iVar11 < *(int *)(lVar12 + 0x20)))
        {
          puVar4 = puVar3;
          func_0x00010bd1b5ac();
          puStack_a0 = puVar4;
          puStack_98 = puVar5;
          func_0x00010bd1b518(*(undefined8 *)(puVar3 + 8));
          puVar3 = &UNK_10f834f33;
          func_0x000107c284bc();
          puStack_100 = puVar3;
          puStack_f8 = puVar5;
          func_0x00010bd1b5dc(*(undefined4 *)(lVar12 + 0x20));
          func_0x00010bd1b568();
          puStack_130 = puVar3;
          puStack_128 = puVar5;
          func_0x00010bd1b534();
          func_0x00010bd1b598();
          func_0x00010bd1b574();
          func_0x00010bd1b560();
        }
      }
      if ((*(byte *)(*(long *)(puVar13 + 0x38) + 0x28) >> 1 & 1) != 0) {
        lVar12 = *(long *)(*(long *)(puVar13 + 0x38) + 0x78);
        if (iVar11 < *(int *)(lVar12 + 0x20)) {
          func_0x00010bd1b5ac();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x00010bd1b518(*(undefined8 *)(puVar13 + 8));
          puVar3 = &UNK_10f834f33;
          func_0x000107c284bc();
          puStack_100 = puVar3;
          puStack_f8 = puVar5;
          func_0x00010bd1b5dc(*(undefined4 *)(lVar12 + 0x20));
          func_0x00010bd1b568();
          puStack_130 = puVar3;
          puStack_128 = puVar5;
          func_0x00010bd1b534();
          func_0x00010bd1b598();
          func_0x00010bd1b574();
          func_0x00010bd1b560();
        }
        if (((*(uint *)(lVar12 + 0x10) >> 3 & 1) == 0) || (iVar11 < *(int *)(lVar12 + 0x28))) {
          if (((*(uint *)(lVar12 + 0x10) >> 2 & 1) == 0) || (iVar11 < *(int *)(lVar12 + 0x24)))
          goto LAB_10bd1b388;
          func_0x00010bd1b5ac();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x00010bd1b518(*(undefined8 *)(puVar13 + 8));
          puVar13 = &UNK_10f834f73;
          func_0x000107c284bc();
          uStack_194 = *(undefined4 *)(lVar12 + 0x24);
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          puVar8 = (undefined8 *)&uStack_194;
          puVar6 = &uStack_1b0;
          puStack_100 = puVar13;
          puStack_f8 = puVar5;
          func_0x00010bd048e4();
          pcVar7 = ": ";
          puStack_130 = (undefined *)puVar6;
          puStack_128 = puVar8;
          func_0x000107c284bc();
          pcStack_160 = pcVar7;
          puStack_158 = puVar8;
          func_0x0001089ec284(auStack_190,&puStack_a0,auStack_d0,&puStack_100,&puStack_130,
                              &pcStack_160,*(ulong *)(lVar12 + 0x18) & 0xfffffffffffffffc);
          puVar5 = auStack_190;
          func_0x000107c27940(param_3 + 0x18);
          func_0x00010bd1b560();
          puVar8 = &uStack_1b0;
        }
        else {
          func_0x00010bd1b5ac();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x00010bd1b518(*(undefined8 *)(puVar13 + 8));
          puVar13 = &UNK_10f834f55;
          func_0x000107c284bc();
          puStack_100 = puVar13;
          puStack_f8 = puVar5;
          func_0x00010bd1b5dc(*(undefined4 *)(lVar12 + 0x28));
          func_0x00010bd1b568();
          puStack_130 = puVar13;
          puStack_128 = puVar5;
          func_0x00010bd1b534();
          func_0x00010bd1b598();
          func_0x00010bd1b574();
          puVar8 = auStack_190;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
      }
    }
    else {
      FUN_10bd2b4f4(param_2);
      FUN_10bd1ff30(puVar5,param_2,puVar13,0);
      FUN_10bd1b0c8(param_1,puVar5,param_3);
    }
LAB_10bd1b388:
    puVar10 = puVar10 + 1;
  } while( true );
}



/* Entry: 10bd1b44c; end: 10bd1b483;  */

undefined8 * FUN_10bd1b44c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  FUN_10bd1b484();
  return param_1;
}



/* Entry: 10bd1b484; end: 10bd1b493;  */

void FUN_10bd1b484(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bd1b494; end: 10bd1b4df;  */

ulong * FUN_10bd1b494(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10bd1b4e0(param_1);
  return param_1;
}



/* Entry: 10bd1b4e0; end: 10bd1b4ef;  */

void FUN_10bd1b4e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bd1b4f0; end: 10bd1b517;  */

undefined8 * FUN_10bd1b4f0(undefined8 *param_1)

{
  FUN_10bd00070(param_1 + 1);
  *param_1 = 0;
  return param_1;
}



/* Entry: 10bd1b518; end: 10bd1b6a3;  */

void FUN_10bd1b518(void)

{
  return;
}



/* Entry: 10bd1b6a4; end: 10bd1b753;  */

void FUN_10bd1b6a4(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long unaff_x22;
  
  if (param_2 != param_1) {
    puVar2 = (ulong *)(param_1 + 8);
    if ((*(byte *)puVar2 & 1) != 0) {
      FUN_10bd2b174(puVar2);
    }
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
      if ((*puVar2 & 1) == 0) {
        func_0x00010bd2b26c();
      }
      if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
        func_0x00010bd374f4();
        for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
          func_0x00010bd37570();
          func_0x00010bd375bc();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd1b754; end: 10bd1b763;  */

undefined1 * FUN_10bd1b754(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [264];
  
  if (param_1 == param_2) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_138,param_3);
  func_0x00010ae6aba0(auStack_138,param_1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  func_0x00010ae6aba0(auStack_138,param_2);
  puVar1 = auStack_138;
  func_0x00010ae6a8f8(puVar1);
  func_0x00010ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10bd1b764; end: 10bd1b7eb;  */

undefined8 FUN_10bd1b764(undefined8 param_1)

{
  func_0x00010ae6bd08(param_1,&UNK_10f834fdb,0x45);
  return param_1;
}



/* Entry: 10bd1b7ec; end: 10bd1b817;  */

undefined * FUN_10bd1b7ec(long param_1)

{
  undefined *puVar1;
  
  FUN_10bcee5e4();
  if (param_1 == 0) {
    func_0x000107c280b4();
    puVar1 = &DAT_11383d918;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
  }
  return puVar1;
}



/* Entry: 10bd1b818; end: 10bd1b877;  */

long * FUN_10bd1b818(long *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  *param_1 = param_2;
  _memcpy(plVar1,param_3,0x48);
  if (param_4 == (long *)0x0) {
    func_0x000107c31578();
    param_2 = *param_1;
    param_4 = plVar1;
  }
  param_1[10] = (long)param_4;
  param_1[0xb] = param_5;
  param_1[0xd] = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_2 + 4) + -1;
  *(undefined4 *)((long)param_1 + 100) = 0;
  return param_1;
}



/* Entry: 10bd1b878; end: 10bd1b89b;  */

long FUN_10bd1b878(long param_1)

{
  __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 10bd1b89c; end: 10bd1b8d7;  */

undefined8 * FUN_10bd1b89c(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((bRam0000000113847388 & 1) == 0) {
      puVar1 = (undefined8 *)0x113847388;
      ___cxa_guard_acquire();
      if ((int)puVar1 != 0) {
        func_0x00010bd3755c();
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        FUN_10bd36684();
        puRam0000000113847380 = puVar1;
        ___cxa_guard_release(0x113847388);
      }
    }
    return puRam0000000113847380;
  }
  return (undefined8 *)((uVar2 & 0xfffffffffffffffe) + 8);
}



/* Entry: 10bd1b8d8; end: 10bd1b91b;  */

undefined8 FUN_10bd1b8d8(undefined8 param_1,long param_2)

{
  if ((*(byte *)(*(long *)(param_2 + 0x38) + 0x8a) & 1) != 0) {
    return 1;
  }
  if (*(char *)(*(long *)(param_2 + 0x38) + 0x89) == '\x01') {
    func_0x00010787827c(param_2);
    return 1;
  }
  return 0;
}



/* Entry: 10bd1b91c; end: 10bd1bb7b;  */

ulong * FUN_10bd1b91c(ulong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  func_0x00010bd24f94();
  uVar8 = param_1[6];
  FUN_10bd1b89c();
  FUN_10bd36928();
  puVar6 = (ulong *)((long)param_1 + (ulong)(uint)uVar8);
  if (*(uint *)(unaff_x20 + 5) != 0xffffffff) {
    param_1 = (ulong *)(unaff_x19 + (ulong)*(uint *)(unaff_x20 + 5));
    FUN_10bd19f10();
    puVar6 = (ulong *)((long)param_1 + (long)puVar6);
  }
  lVar7 = 0;
  uVar8 = 0;
  do {
    uVar5 = (ulong)(int)unaff_x20[0xc];
    uVar1 = uVar5 <= uVar8;
    uVar2 = uVar8 == uVar5;
    if (!(bool)uVar2 && (long)uVar5 <= (long)uVar8) {
      return puVar6;
    }
    puVar4 = (ulong *)(*(long *)(*unaff_x20 + 0x38) + lVar7);
    if ((*(byte *)((long)puVar4 + 1) >> 5 & 1) == 0) {
      func_0x00010bd25198();
      if (param_1 != (ulong *)0x0) {
        func_0x00010bd24cfc();
        FUN_10bd1bdd4();
        if ((int)param_1 == 0) goto LAB_10bd1bb3c;
      }
      func_0x00010bd255ac();
      if ((int)param_1 == 10) {
        if (unaff_x19 != unaff_x20[1]) {
          func_0x00010bd24cfc();
          FUN_10bd1be78();
          param_1 = (ulong *)*param_1;
          if (param_1 != (ulong *)0x0) {
            FUN_10bd2b5e4();
            goto LAB_10bd1bb38;
          }
        }
      }
      else if ((int)param_1 == 9) {
        param_1 = puVar4;
        FUN_10bd1bdfc();
        uVar2 = (int)param_1 == 1;
        if ((bool)uVar2) {
          func_0x00010bd25198();
          if (param_1 == (ulong *)0x0) {
            func_0x00010bd24cfc();
            FUN_10bd23d04();
            FUN_10bd1be48();
            puVar6 = (ulong *)((long)puVar6 + (long)param_1 + -0x10);
          }
          else {
            func_0x00010bd24cfc();
            FUN_10bd23c68();
            param_1 = (ulong *)*param_1;
            FUN_10bd1be48();
LAB_10bd1bb38:
            puVar6 = (ulong *)((long)param_1 + (long)puVar6);
          }
        }
        else {
          puVar3 = (ulong *)(unaff_x20 + 1);
          func_0x00010bd21e40(puVar3,puVar4);
          if ((int)puVar3 != 0) {
            func_0x00010bd24cfc();
            FUN_10bd23da0();
            func_0x00010b4cf314();
            param_1 = puVar3;
            goto LAB_10bd1bb38;
          }
          func_0x00010bd24cfc();
          FUN_10bd23e3c();
          func_0x00010bd256c4();
          uVar5 = extraout_x8_00;
          if ((bool)uVar2) {
            puVar4 = puVar3;
            func_0x00010bd25198();
            param_1 = (ulong *)0x0;
            if (puVar4 == (ulong *)0x0) goto LAB_10bd1bb3c;
            uVar5 = *puVar3;
          }
          param_1 = (ulong *)(uVar5 & 0xfffffffffffffffc);
          func_0x00010b4cf314();
          puVar6 = (ulong *)((long)puVar6 + (long)param_1 + 0x18);
        }
      }
    }
    else {
      func_0x00010bd255ac();
      func_0x00010bd2518c();
      if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1b9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b7e8)[extraout_x8] * 4 + 0x10bd1ba00))();
        return param_1;
      }
    }
LAB_10bd1bb3c:
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 0x58;
  } while( true );
}



/* Entry: 10bd1bb7c; end: 10bd1bdd3;  */

long FUN_10bd1bb7c(ulong param_1)

{
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == 0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24bb4();
      return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return unaff_x19 + (param_1 & 0xffffffff);
}



/* Entry: 10bd1bdd4; end: 10bd1bdfb;  */

bool FUN_10bd1bdd4(undefined8 param_1,long param_2,long param_3)

{
  ulong extraout_x8;
  
  func_0x00010bd25788(*(undefined8 *)(param_3 + 0x28));
  return *(int *)(param_2 + (extraout_x8 & 0xffffffff)) == *(int *)(param_3 + 4);
}



/* Entry: 10bd1bdfc; end: 10bd1be47;  */

undefined8 FUN_10bd1bdfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010787827c();
  if (((((int)lVar1 == 0xc) && ((*(byte *)(param_1 + 1) >> 5 & 1) == 0)) &&
      ((*(byte *)(param_1 + 1) >> 3 & 1) == 0)) && (*(int *)(*(long *)(param_1 + 0x38) + 0x80) == 1)
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10bd1be48; end: 10bd1be77;  */

long FUN_10bd1be48(byte *param_1)

{
  long lVar1;
  
  if (((*param_1 & 1) != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    func_0x00010ae7295c();
    return lVar1 + 0x10;
  }
  return 0x10;
}



/* Entry: 10bd1be78; end: 10bd1beb3;  */

long * FUN_10bd1be78(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd1beb4; end: 10bd1c8ef;  */

/* WARNING: Removing unreachable block (ram,0x00010bd1c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c870) */

ulong * FUN_10bd1beb4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar15;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  uint extraout_w11;
  ulong *puVar16;
  int iVar17;
  ulong *unaff_x24;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 **ppuVar23;
  code *pcVar24;
  ulong uVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_110 [2];
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  puVar16 = (ulong *)&UNK_10f835085;
  puVar8 = (ulong *)&UNK_10f8350c6;
  puVar9 = param_1;
  puVar10 = param_2;
  while( true ) {
    if (puVar10 == param_3) {
      return puVar9;
    }
    uVar18 = puVar10[1];
    if ((uVar18 & 1) != 0) {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
    }
    uVar20 = param_3[1];
    if ((uVar20 & 1) != 0) {
      uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    FUN_10bd2b4f4(puVar10);
    puVar9 = param_1;
    FUN_10bd1b754(param_2,param_1,&UNK_10f835085);
    if (param_2 != (ulong *)0x0) break;
    FUN_10bd2b4f4(param_3);
    FUN_10bd1b754(puVar9,param_1,&UNK_10f8350c6);
    if (puVar9 != (ulong *)0x0) {
      func_0x00010bd25474();
      func_0x00010bd25098();
      FUN_10bdb2a08();
      puVar10 = &uStack_90;
      func_0x00010b4c3038(puVar10,&UNK_10f8350e3);
      puVar9 = param_3;
      FUN_10bd2b4f4();
      func_0x00010bd2520c(puVar9[1]);
      FUN_10bd1b764(puVar10);
      func_0x00010bd2520c(*(undefined8 *)(*param_1 + 8));
      func_0x00010bd1b790(puVar10);
      goto LAB_10bd1c8e8;
    }
    if (uVar18 == uVar20) {
      lVar19 = 0;
      uVar18 = 0;
      func_0x00010bd25744(*(undefined4 *)((long)param_1 + 0x24));
      unaff_x24 = (ulong *)&UNK_10e60b7fc;
      goto LAB_10bd1bfb8;
    }
    puVar9 = puVar10;
    if (uVar18 != 0) {
      uVar20 = uVar18;
      puVar9 = param_3;
      param_3 = puVar10;
    }
    puVar10 = param_3;
    param_3 = puVar10;
    (**(code **)(*puVar10 + 0x10))(puVar10,uVar20);
    FUN_10bd2b2ec();
    param_2 = puVar10;
    FUN_10bd2b348(puVar9);
    unaff_x24 = puVar10;
  }
  func_0x00010bd25474();
  func_0x00010bd25098();
  FUN_10bdb2a08();
  param_3 = &uStack_90;
  FUN_10bce1854(param_3,&UNK_10f8350a2);
  puVar9 = puVar10;
  FUN_10bd2b4f4();
  func_0x00010bd25600(puVar9[1]);
  FUN_10bd1b764(param_3);
  func_0x00010bd25600(*(undefined8 *)(*param_1 + 8));
  func_0x00010bd1b790(param_3);
  goto LAB_10bd1c8e8;
LAB_10bd1bfb8:
  uVar20 = (ulong)(int)param_1[0xc];
  uVar5 = uVar20 <= uVar18;
  uVar6 = uVar18 == uVar20;
  if (!(bool)uVar6 && (long)uVar20 <= (long)uVar18) goto LAB_10bd1c1ec;
  lVar21 = *(long *)(*param_1 + 0x38);
  puVar9 = (ulong *)(lVar21 + lVar19);
  FUN_10bcddbd4();
  if (puVar9 == (ulong *)0x0) {
    puVar9 = param_1 + 1;
    FUN_10bd1d218(puVar9,lVar21 + lVar19);
    if (((ulong)puVar9 & 1) == 0) {
      bVar3 = *(byte *)(lVar21 + lVar19 + 1);
      puVar16 = (ulong *)(ulong)bVar3;
      func_0x00010bd252b0();
      if ((bVar3 >> 5 & 1) != 0) {
        func_0x00010bd2518c();
        if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b7f2)[extraout_x8_00] * 4 + 0x10bd1c034))();
          return puVar9;
        }
        func_0x00010bd25098();
        FUN_10bdb2a00();
        func_0x00010bd25434();
        func_0x00010bd252b0();
        func_0x00010bd252c0();
        param_1 = puVar9;
        goto LAB_10bd1c8e8;
      }
      if ((int)puVar9 == 10) {
code_r0x00010bd1c000:
        func_0x00010bd24c60();
        func_0x00010bd24bc8();
        uVar20 = *puVar16;
        *puVar16 = *puVar9;
        *puVar9 = uVar20;
      }
      else {
        func_0x00010bd252b0();
        if ((int)puVar9 == 9) {
          puVar8 = (ulong *)(lVar21 + lVar19);
          FUN_10bd1bdfc();
          if ((int)puVar8 == 1) {
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uStack_88 = puVar16[1];
            uStack_90 = *puVar16;
            *puVar16 = 0;
            puVar16[1] = 0;
            func_0x00010b4d1c44(puVar16,puVar8);
            func_0x00010b4d1c44(puVar8,&uStack_90);
            puVar9 = &uStack_90;
            func_0x000107c34fe8();
          }
          else {
            puVar9 = param_1 + 1;
            func_0x00010bd21e40(puVar9,lVar21 + lVar19);
            puVar8 = puVar9;
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            if ((int)puVar9 == 0) {
              uVar20 = *puVar8;
              *puVar8 = *puVar16;
              *puVar16 = uVar20;
              puVar9 = puVar8;
            }
            else {
              puVar9 = (ulong *)(lVar21 + lVar19);
              func_0x00010b91ad64();
              uStack_88 = puVar16[1];
              uStack_90 = *puVar16;
              uStack_80 = puVar16[2];
              uVar25 = puVar8[1];
              uVar20 = *puVar8;
              puVar16[2] = puVar8[2];
              puVar16[1] = uVar25;
              *puVar16 = uVar20;
              puVar8[2] = uStack_80;
              puVar8[1] = uStack_88;
              *puVar8 = uStack_90;
            }
          }
        }
        else {
          func_0x00010bd252b0();
          switch((int)puVar9) {
          case 1:
          case 3:
          case 8:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar20 = *puVar16;
            *(int *)puVar16 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar20;
            break;
          case 2:
          case 4:
            goto code_r0x00010bd1c000;
          case 5:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar20 = *puVar16;
            *puVar16 = *puVar9;
            *puVar9 = uVar20;
            break;
          case 6:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar20 = *puVar16;
            *(int *)puVar16 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar20;
            break;
          case 7:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar20 = *puVar16;
            *(char *)puVar16 = (char)*puVar9;
            *(char *)puVar9 = (char)uVar20;
            break;
          default:
            func_0x00010bd25098();
            FUN_10bdb2a00();
            func_0x00010bd25434();
            func_0x00010bd252b0();
            func_0x00010bd252c0();
            param_1 = puVar9;
            goto LAB_10bd1c8e8;
          }
        }
      }
    }
  }
  uVar18 = uVar18 + 1;
  lVar19 = lVar19 + 0x58;
  goto LAB_10bd1bfb8;
LAB_10bd1c1ec:
  if (*(int *)((long)param_1 + 0x44) != -1) {
    func_0x00010bd25744();
  }
  uVar18 = 0;
  uStack_c8 = (ulong)(*(uint *)(*param_1 + 0x7c) &
                     ((int)*(uint *)(*param_1 + 0x7c) >> 0x1f ^ 0xffffffffU)) * 0x38;
  while( true ) {
    uVar5 = uVar18 <= uStack_c8;
    uVar6 = uStack_c8 == uVar18;
    if ((bool)uVar6) break;
    unaff_x24 = (ulong *)*param_1;
    func_0x00010bd2537c(*(undefined4 *)((long)param_1 + 0x2c));
    uVar20 = (ulong)(uint)(extraout_w8 + extraout_w9 * 4);
    uVar15 = *(uint *)((long)puVar10 + uVar20);
    puVar16 = (ulong *)(ulong)uVar15;
    uVar2 = *(uint *)((long)param_3 + uVar20);
    puVar8 = (ulong *)(ulong)uVar2;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (uVar15 != 0) {
      FUN_10bcee2d0();
      puVar9 = unaff_x24;
      puStack_a8 = param_1;
      puStack_a0 = puVar10;
      puStack_98 = unaff_x24;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b804)[extraout_x8_01] * 4 + 0x10bd1c28c))();
        return puVar9;
      }
      func_0x00010bd24ed0();
      func_0x00010bd2505c();
      func_0x00010bd255d8();
      func_0x00010bd252c0();
LAB_10bd1c8b0:
      param_1 = auStack_70;
      func_0x00010ae6c700();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      func_0x00010bd24f74();
      goto LAB_10bd1c8e8;
    }
    unaff_x24 = (ulong *)0x0;
    if (uVar2 != 0) {
      puVar11 = (ulong *)*param_1;
      FUN_10bcee2d0(puVar11,puVar8);
      puVar9 = puVar11;
      puStack_c0 = param_1;
      puStack_b8 = param_3;
      puStack_b0 = puVar11;
      puStack_a8 = param_1;
      puStack_a0 = puVar10;
      puStack_98 = puVar11;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b80e)[extraout_x8_02] * 4 + 0x10bd1c390))();
        return puVar9;
      }
      func_0x00010bd24ed0();
      func_0x00010bd2505c();
      func_0x00010b91adc8(puVar11);
      func_0x00010bd252c0();
      goto LAB_10bd1c8b0;
    }
    func_0x00010bd2537c(*(undefined4 *)((long)param_1 + 0x2c));
    *(undefined4 *)((long)puVar10 + (ulong)(uint)(extraout_w8_00 + extraout_w9_00 * 4)) = 0;
    *(undefined4 *)
     ((long)param_3 + (ulong)(uint)(*(int *)((long)param_1 + 0x2c) + extraout_w9_00 * 4)) = 0;
    puVar9 = &uStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar18 = uVar18 + 0x38;
  }
  puVar16 = (ulong *)(ulong)(uint)param_1[4];
  if ((uint)param_1[4] != 0xffffffff) {
    lVar21 = 0;
    iVar17 = 0;
    for (lVar19 = 0; lVar19 < *(int *)(*param_1 + 4); lVar19 = lVar19 + 1) {
      puVar9 = (ulong *)(*(long *)(*param_1 + 0x38) + lVar21);
      if (((*(byte *)((long)puVar9 + 1) >> 5 & 1) == 0) && (FUN_10bcddbd4(), puVar9 == (ulong *)0x0)
         ) {
        iVar17 = iVar17 + 1;
      }
      lVar21 = lVar21 + 0x58;
    }
    uVar15 = (iVar17 + 0x1f) / 0x20;
    if ((uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10 != 0);
    }
  }
  puVar8 = (ulong *)(ulong)(uint)param_1[8];
  if ((uint)param_1[8] == 0xffffffff) {
LAB_10bd1c6e4:
    uVar15 = (uint)param_1[5];
    if (uVar15 != 0xffffffff) {
      puVar9 = (ulong *)((long)puVar10 + (ulong)uVar15);
      func_0x00010b4c0e68(puVar9,(long)param_3 + (ulong)uVar15);
    }
    return puVar9;
  }
  lVar21 = 0;
  lVar19 = 0;
  unaff_x24 = (ulong *)0x0;
  while( true ) {
    iVar17 = (int)unaff_x24;
    if (*(int *)(*param_1 + 4) <= lVar19) break;
    lVar22 = *(long *)(*param_1 + 0x38);
    puVar16 = (ulong *)(lVar22 + lVar21);
    if ((((*puVar16 & 0x2800) == 0) && (func_0x00010bd25198(), puVar9 == (ulong *)0x0)) &&
       (*(int *)(*(long *)(lVar22 + lVar21 + 0x38) + 0x80) == 0)) {
      puVar9 = param_1 + 1;
      func_0x00010bd21e40(puVar9,puVar16);
      unaff_x24 = (ulong *)(ulong)(uint)(iVar17 + (int)puVar9);
    }
    lVar19 = lVar19 + 1;
    lVar21 = lVar21 + 0x58;
  }
  if (iVar17 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (iVar17 + 0x20) / 0x20;
  }
  if (((*(uint *)((long)param_3 + (long)puVar8) ^ *(uint *)((long)puVar10 + (long)puVar8)) & 1) == 0
     ) {
    if ((uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10_00 != 0);
    }
    goto LAB_10bd1c6e4;
  }
  func_0x00010ae6a834((*(uint *)((long)puVar10 + (long)puVar8) ^ 0xffffffff) & 1,
                      (*(uint *)((long)param_3 + (long)puVar8) ^ 0xffffffff) & 1,&UNK_10f83516d);
  func_0x00010802bcb8();
  func_0x00010bd25098();
  FUN_10bdb2a88();
LAB_10bd1c8e8:
  puVar9 = &uStack_90;
  func_0x00010ae6c700();
  puVar11 = auStack_110;
  pcStack_d8 = FUN_10bd1c8f0;
  ppuVar23 = &puStack_e0;
  puStack_100 = puVar16;
  puStack_f8 = puVar10;
  puStack_f0 = param_3;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bd24fac();
  puVar10 = puVar9;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar10 != -1) {
    uVar18 = puVar9[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar15 = *(uint *)((long)param_3 + ((ulong)puVar10 >> 5 & 0x7ffffff) * 4 + (ulong)(uint)uVar18)
             >> (ulong)((uint)puVar10 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar10 == 10) {
    if (param_3 == (ulong *)puVar9[1]) {
      uVar15 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar15 = (int)puVar10 - 1;
  uVar5 = 7 < uVar15;
  uVar6 = uVar15 == 8;
  switch(uVar15) {
  case 0:
  case 7:
    func_0x00010bd24c14();
    func_0x00010bd20f0c();
    break;
  case 1:
    func_0x00010bd24c14();
    func_0x00010bd20f48();
    goto LAB_10bd1c9c8;
  case 2:
  case 5:
    func_0x00010bd24c14();
    func_0x00010bd20f84();
    break;
  case 3:
  case 4:
    func_0x00010bd24c14();
    func_0x00010bd20fc0();
LAB_10bd1c9c8:
    uVar18 = *puVar10;
code_r0x00010bd1c9cc:
    bVar7 = uVar18 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar15 = (uint)(byte)*puVar10;
    goto LAB_10bd1c9d4;
  case 8:
    func_0x00010bd25454();
    if ((int)puVar10 == 1) {
      func_0x00010bd24f2c();
      if (puVar10 == (ulong *)0x0) {
        func_0x00010bd25240();
        FUN_10bd1d218();
        if ((int)puVar10 == 0) {
          func_0x00010bd25240();
          FUN_10bd20d94();
          goto code_r0x00010bd1ca18;
        }
        func_0x00010bd25240();
        FUN_10bd20d94();
        func_0x00010bd25074();
        if ((extraout_w8_01 >> 5 & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
      }
      else {
        func_0x00010bd25240();
        FUN_10bd20e50();
code_r0x00010bd1ca18:
        puVar10 = (ulong *)((long)param_3 + ((ulong)puVar10 & 0xffffffff));
      }
      uVar15 = (uint)puVar10;
      func_0x00010b4d1b04();
      uVar15 = uVar15 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar10 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar18 = (ulong)*(char *)((*puVar10 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar18 < 0) {
        uVar18 = *(ulong *)((*puVar10 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar18 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(auStack_110);
    puVar12 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar24 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    puVar10 = auStack_110;
    while( true ) {
      *(undefined8 *)((long)puVar10 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar10 + -0x48) = unaff_d8;
      *(ulong **)((long)puVar10 + -0x40) = unaff_x24;
      *(ulong **)((long)puVar10 + -0x38) = puVar8;
      *(ulong **)((long)puVar10 + -0x30) = puVar16;
      *(ulong **)((long)puVar10 + -0x28) = puVar9;
      *(ulong **)((long)puVar10 + -0x20) = param_3;
      *(ulong **)((long)puVar10 + -0x18) = param_1;
      *(undefined1 ***)((long)puVar10 + -0x10) = ppuVar23;
      *(code **)((long)puVar10 + -8) = pcVar24;
      func_0x00010bd24b74();
      if (!(bool)uVar6) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong **)((long)puVar10 + -0x70) = param_3;
        *(ulong **)((long)puVar10 + -0x68) = param_1;
        *(undefined1 **)((long)puVar10 + -0x60) = (undefined1 *)((long)puVar10 + -0x10);
        *(code **)((long)puVar10 + -0x58) = FUN_10bd1cd90;
        func_0x00010bd24f94();
        func_0x00010bd24e7c();
        func_0x00010bd1d3e8();
        if ((int)puVar11 != -1) {
          func_0x00010bd25418();
          *(uint *)(extraout_x9 + (extraout_x10_01 & 0xffffffff) * 4) =
               extraout_w11 | extraout_w8_02;
        }
        return puVar11;
      }
      if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar16 = (ulong *)(puVar12 + extraout_x8_03);
        uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
        uVar14 = *(undefined8 *)((long)puVar10 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar10 + -0x58) = uVar14;
        func_0x00010b4bf3a0();
        if (puVar16 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar10 + -0x70) = puVar12;
        *(ulong **)((long)puVar10 + -0x68) = param_1;
        *(undefined8 *)((long)puVar10 + -0x60) = *(undefined8 *)((long)puVar10 + -0x60);
        *(undefined8 *)((long)puVar10 + -0x58) = *(undefined8 *)((long)puVar10 + -0x58);
        bVar4 = *(char *)((long)puVar16 + 9) != '\0';
        bVar7 = *(char *)((long)puVar16 + 9) == '\x01';
        if (bVar7) {
          func_0x00010b4c5260((char)puVar16[1]);
          puVar8 = puVar16;
          if (!bVar4 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar16;
          }
        }
        else {
          puVar8 = puVar16;
          if ((*(byte *)((long)puVar16 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar16[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar16;
              if ((*(byte *)((long)puVar16 + 10) >> 4 & 1) == 0) {
                pcVar24 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar24 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar24)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar16[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar16;
              func_0x000107c27fa8(puVar8);
            }
            *(byte *)((long)puVar16 + 10) = *(byte *)((long)puVar16 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)param_1 + 1) >> 5 & 1) != 0) break;
      puVar11 = param_1;
      FUN_10bcddbd4();
      if (puVar11 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar11 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_05] * 4 + 0x10bd1cba0))();
            return puVar11;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar11 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)param_1 + 1) >> 4 & 1) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[5];
      }
      uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
      uVar14 = *(undefined8 *)((long)puVar10 + -8);
      puVar11 = puVar9;
      puVar13 = puVar12;
      func_0x00010bd25668();
      *(ulong **)((long)puVar10 + -0x80) = puVar16;
      *(ulong **)((long)puVar10 + -0x78) = puVar9;
      *(undefined **)((long)puVar10 + -0x70) = puVar12;
      *(ulong **)((long)puVar10 + -0x68) = param_1;
      *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar10 + -0x58) = uVar14;
      uVar5 = *(int *)(uVar18 + 4) != 0;
      uVar6 = *(int *)(uVar18 + 4) == 1;
      if ((!(bool)uVar6) || ((*(byte *)(*(long *)(uVar18 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar16 = puVar11;
        func_0x00010bd252d8();
        if (*(int *)(puVar13 + (extraout_x8_06 & 0xffffffff)) != 0) {
          puVar11 = (ulong *)*puVar11;
          FUN_10bcee2d0();
          uVar18 = *(ulong *)(puVar13 + 8);
          puVar16 = puVar11;
          if ((uVar18 & 1) != 0) {
            func_0x00010bd25400();
            uVar18 = extraout_x8_08;
          }
          if (uVar18 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar16 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar16 = (ulong *)*puVar16;
              if (puVar16 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar16 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar11 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar16 = (ulong *)*puVar11;
                if (puVar16 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar16 = puVar11;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar13 + (extraout_x8_07 & 0xffffffff)) = 0;
        }
        return puVar16;
      }
      func_0x00010bd24e64();
      ppuVar23 = *(undefined1 ***)((long)puVar10 + -0x60);
      pcVar24 = *(code **)((long)puVar10 + -0x58);
      param_3 = *(ulong **)((long)puVar10 + -0x70);
      param_1 = *(ulong **)((long)puVar10 + -0x68);
      puVar16 = *(ulong **)((long)puVar10 + -0x80);
      puVar9 = *(ulong **)((long)puVar10 + -0x78);
      puVar10 = (ulong *)((long)puVar10 + -0x50);
      puVar12 = puVar13;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar11 = param_1;
    if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_04] * 4 + 0x10bd1cb5c))();
      return param_1;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar11;
  }
  bVar7 = (int)*puVar10 == 0;
code_r0x00010bd1c9d0:
  uVar15 = (uint)!bVar7;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar15 & 1);
}



/* Entry: 10bd1c8f0; end: 10bd1cac7;  */

ulong * FUN_10bd1c8f0(ulong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  code *pcVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_40 [2];
  
  puVar6 = auStack_40;
  puVar13 = &stack0xfffffffffffffff0;
  func_0x00010bd24fac();
  puVar7 = param_1;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar7 != -1) {
    uVar10 = param_1[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar12 = *(uint *)(unaff_x20 + (uint)uVar10 + ((ulong)puVar7 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)puVar7 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar7 == 10) {
    if (unaff_x20 == param_1[1]) {
      uVar12 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar12 = (int)puVar7 - 1;
  uVar3 = 7 < uVar12;
  uVar4 = uVar12 == 8;
  switch(uVar12) {
  case 0:
  case 7:
    func_0x00010bd24c14();
    func_0x00010bd20f0c();
    break;
  case 1:
    func_0x00010bd24c14();
    func_0x00010bd20f48();
    goto LAB_10bd1c9c8;
  case 2:
  case 5:
    func_0x00010bd24c14();
    func_0x00010bd20f84();
    break;
  case 3:
  case 4:
    func_0x00010bd24c14();
    func_0x00010bd20fc0();
LAB_10bd1c9c8:
    uVar10 = *puVar7;
code_r0x00010bd1c9cc:
    bVar5 = uVar10 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar12 = (uint)(byte)*puVar7;
    goto LAB_10bd1c9d4;
  case 8:
    func_0x00010bd25454();
    if ((int)puVar7 == 1) {
      func_0x00010bd24f2c();
      if (puVar7 == (ulong *)0x0) {
        func_0x00010bd25240();
        FUN_10bd1d218();
        if ((int)puVar7 == 0) {
          func_0x00010bd25240();
          FUN_10bd20d94();
          goto code_r0x00010bd1ca18;
        }
        func_0x00010bd25240();
        FUN_10bd20d94();
        func_0x00010bd25074();
        if ((extraout_w8 >> 5 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
      }
      else {
        func_0x00010bd25240();
        FUN_10bd20e50();
code_r0x00010bd1ca18:
        puVar7 = (ulong *)(unaff_x20 + ((ulong)puVar7 & 0xffffffff));
      }
      uVar12 = (uint)puVar7;
      func_0x00010b4d1b04();
      uVar12 = uVar12 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar7 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar10 = (ulong)*(char *)((*puVar7 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar10 < 0) {
        uVar10 = *(ulong *)((*puVar7 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar10 = puVar7[1];
      if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)puVar7 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(auStack_40);
    puVar8 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar14 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    puVar7 = auStack_40;
    while( true ) {
      *(undefined8 *)((long)puVar7 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar7 + -0x48) = unaff_d8;
      *(undefined8 *)((long)puVar7 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar7 + -0x38) = unaff_x23;
      *(undefined8 *)((long)puVar7 + -0x30) = unaff_x22;
      *(ulong **)((long)puVar7 + -0x28) = param_1;
      *(ulong *)((long)puVar7 + -0x20) = unaff_x20;
      *(ulong **)((long)puVar7 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar7 + -0x10) = puVar13;
      *(code **)((long)puVar7 + -8) = pcVar14;
      func_0x00010bd24b74();
      if (!(bool)uVar4) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong *)((long)puVar7 + -0x70) = unaff_x20;
        *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
        *(undefined1 **)((long)puVar7 + -0x60) = (undefined1 *)((long)puVar7 + -0x10);
        *(code **)((long)puVar7 + -0x58) = FUN_10bd1cd90;
        func_0x00010bd24f94();
        func_0x00010bd24e7c();
        func_0x00010bd1d3e8();
        if ((int)puVar6 != -1) {
          func_0x00010bd25418();
          *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8_00;
        }
        return puVar6;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar6 = (ulong *)(puVar8 + extraout_x8_00);
        uVar1 = *(undefined8 *)((long)puVar7 + -0x10);
        uVar11 = *(undefined8 *)((long)puVar7 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)puVar7 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar7 + -0x58) = uVar11;
        func_0x00010b4bf3a0();
        if (puVar6 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar7 + -0x70) = puVar8;
        *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
        *(undefined8 *)((long)puVar7 + -0x60) = *(undefined8 *)((long)puVar7 + -0x60);
        *(undefined8 *)((long)puVar7 + -0x58) = *(undefined8 *)((long)puVar7 + -0x58);
        bVar2 = *(char *)((long)puVar6 + 9) != '\0';
        bVar5 = *(char *)((long)puVar6 + 9) == '\x01';
        if (bVar5) {
          func_0x00010b4c5260((char)puVar6[1]);
          puVar7 = puVar6;
          if (!bVar2 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar6;
          }
        }
        else {
          puVar7 = puVar6;
          if ((*(byte *)((long)puVar6 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar6[1] * 4) == 10) {
              puVar7 = (ulong *)*puVar6;
              if ((*(byte *)((long)puVar6 + 10) >> 4 & 1) == 0) {
                pcVar14 = *(code **)(*puVar7 + 0x18);
              }
              else {
                pcVar14 = *(code **)(*puVar7 + 0x88);
              }
              (*pcVar14)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar6[1] * 4) == 9) {
              puVar7 = (ulong *)*puVar6;
              func_0x000107c27fa8(puVar7);
            }
            *(byte *)((long)puVar6 + 10) = *(byte *)((long)puVar6 + 10) & 0xf0 | 1;
          }
        }
        return puVar7;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
      puVar6 = unaff_x19;
      FUN_10bcddbd4();
      if (puVar6 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar6 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar3 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_02] * 4 + 0x10bd1cba0))();
            return puVar6;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar6 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = unaff_x19[5];
      }
      uVar1 = *(undefined8 *)((long)puVar7 + -0x10);
      uVar11 = *(undefined8 *)((long)puVar7 + -8);
      puVar6 = param_1;
      puVar9 = puVar8;
      func_0x00010bd25668();
      *(undefined8 *)((long)puVar7 + -0x80) = unaff_x22;
      *(ulong **)((long)puVar7 + -0x78) = param_1;
      *(undefined **)((long)puVar7 + -0x70) = puVar8;
      *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
      *(undefined8 *)((long)puVar7 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar7 + -0x58) = uVar11;
      uVar3 = *(int *)(uVar10 + 4) != 0;
      uVar4 = *(int *)(uVar10 + 4) == 1;
      if ((!(bool)uVar4) || ((*(byte *)(*(long *)(uVar10 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar7 = puVar6;
        func_0x00010bd252d8();
        if (*(int *)(puVar9 + (extraout_x8_03 & 0xffffffff)) != 0) {
          puVar6 = (ulong *)*puVar6;
          FUN_10bcee2d0();
          uVar10 = *(ulong *)(puVar9 + 8);
          puVar7 = puVar6;
          if ((uVar10 & 1) != 0) {
            func_0x00010bd25400();
            uVar10 = extraout_x8_05;
          }
          if (uVar10 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar7 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar7 = (ulong *)*puVar7;
              if (puVar7 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar7 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar6 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar7 = (ulong *)*puVar6;
                if (puVar7 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar7 = puVar6;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar9 + (extraout_x8_04 & 0xffffffff)) = 0;
        }
        return puVar7;
      }
      func_0x00010bd24e64();
      puVar13 = *(undefined1 **)((long)puVar7 + -0x60);
      pcVar14 = *(code **)((long)puVar7 + -0x58);
      unaff_x20 = *(ulong *)((long)puVar7 + -0x70);
      unaff_x19 = *(ulong **)((long)puVar7 + -0x68);
      unaff_x22 = *(undefined8 *)((long)puVar7 + -0x80);
      param_1 = *(ulong **)((long)puVar7 + -0x78);
      puVar7 = (ulong *)((long)puVar7 + -0x50);
      puVar8 = puVar9;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar6 = unaff_x19;
    if (!(bool)uVar3 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_01] * 4 + 0x10bd1cb5c))();
      return unaff_x19;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar6;
  }
  bVar5 = (int)*puVar7 == 0;
code_r0x00010bd1c9d0:
  uVar12 = (uint)!bVar5;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar12 & 1);
}



/* Entry: 10bd1cac8; end: 10bd1cd8f;  */

void FUN_10bd1cac8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar12;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    iVar4 = (int)param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010bd24b74();
    if (!(bool)in_ZR) {
      func_0x00010bd24e70();
      func_0x00010bd24e38();
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x58) = FUN_10bd1cd90;
      func_0x00010bd24f94();
      func_0x00010bd24e7c();
      func_0x00010bd1d3e8();
      if (iVar4 != -1) {
        func_0x00010bd25418();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00010bd250c0();
      puVar5 = (undefined8 *)(param_2 + extraout_x8_00);
      uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
      func_0x00010bd25668();
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
      func_0x00010b4bf3a0();
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x70) = param_2;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      bVar2 = *(char *)((long)puVar5 + 9) != '\0';
      bVar3 = *(char *)((long)puVar5 + 9) == '\x01';
      if (bVar3) {
        func_0x00010b4c5260(*(undefined1 *)(puVar5 + 1));
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
          return;
        }
      }
      else if ((*(byte *)((long)puVar5 + 10) & 1) == 0) {
        if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar5 + 1) * 4) == 10) {
          if ((*(byte *)((long)puVar5 + 10) >> 4 & 1) == 0) {
            pcVar11 = *(code **)(*(long *)*puVar5 + 0x18);
          }
          else {
            pcVar11 = *(code **)(*(long *)*puVar5 + 0x88);
          }
          (*pcVar11)();
        }
        else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar5 + 1) * 4) == 9) {
          func_0x000107c27fa8(*puVar5);
        }
        *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0 | 1;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) break;
    lVar9 = unaff_x19;
    FUN_10bcddbd4();
    if (lVar9 == 0) {
      func_0x00010bd24c14();
      iVar4 = (int)lVar9;
      FUN_10bd1c8f0();
      if (iVar4 != 0) {
        func_0x00010bd24c14();
        FUN_10bd1d3b4();
        func_0x00010bd24e30();
        func_0x00010bd2518c();
        if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_02] * 4 + 0x10bd1cba0))();
          return;
        }
      }
      goto LAB_10bd1cd6c;
    }
    func_0x00010bd24ba4();
    if ((int)lVar9 == 0) goto LAB_10bd1cd6c;
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x28);
    }
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
    param_1 = unaff_x21;
    lVar8 = param_2;
    func_0x00010bd25668();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x70) = param_2;
    *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
    in_CY = *(int *)(lVar9 + 4) != 0;
    in_ZR = *(int *)(lVar9 + 4) == 1;
    if ((!(bool)in_ZR) || ((*(byte *)(*(long *)(lVar9 + 0x30) + 1) >> 1 & 1) == 0)) {
      func_0x00010bd252d8();
      if (*(int *)(lVar8 + (extraout_x8_03 & 0xffffffff)) != 0) {
        plVar6 = (long *)*param_1;
        FUN_10bcee2d0();
        uVar12 = *(ulong *)(lVar8 + 8);
        plVar7 = plVar6;
        if ((uVar12 & 1) != 0) {
          func_0x00010bd25400();
          uVar12 = extraout_x8_05;
        }
        if (uVar12 == 0) {
          func_0x00010bd255ac();
          if ((int)plVar7 == 10) {
            func_0x00010bd24e64();
            func_0x00010bd20e14();
            if (*plVar7 != 0) {
              func_0x00010bd24eb8();
            }
          }
          else if ((int)plVar7 == 9) {
            FUN_10bd1bdfc();
            if ((int)plVar6 == 1) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              if (*plVar6 != 0) {
                func_0x000107c34fe8();
              }
              __ZdlPv();
            }
            else {
              func_0x00010bd24e64();
              FUN_10bd1f51c();
              func_0x000107c30258();
            }
          }
        }
        func_0x00010bd252d8();
        *(undefined4 *)(lVar8 + (extraout_x8_04 & 0xffffffff)) = 0;
      }
      return;
    }
    func_0x00010bd24e64();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = lVar8;
  }
  func_0x00010b91adc8();
  func_0x00010bd2518c();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_01] * 4 + 0x10bd1cb5c))();
    return;
  }
LAB_10bd1cd6c:
  func_0x00010bd25668();
  return;
}



/* Entry: 10bd1cd90; end: 10bd1cdc3;  */

void FUN_10bd1cd90(int param_1)

{
  uint extraout_w8;
  long extraout_x9;
  uint extraout_w10;
  uint extraout_w11;
  
  func_0x00010bd24f94();
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if (param_1 != -1) {
    func_0x00010bd25418();
    *(uint *)(extraout_x9 + (ulong)extraout_w10 * 4) = extraout_w11 | extraout_w8;
  }
  return;
}



/* Entry: 10bd1cdc4; end: 10bd1ce23;  */

long FUN_10bd1cdc4(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  func_0x00010ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,param_2);
  func_0x00010ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10bd1ce24; end: 10bd1ce9f;  */

undefined1  [16] FUN_10bd1ce24(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x000107c282d0();
    func_0x00010bd24ee4();
    FUN_10bcd67a8();
    func_0x00010bd252f8();
    FUN_10bd23f38();
    func_0x000107c282dc(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1cea0; end: 10bd1cf1b;  */

undefined1  [16] FUN_10bd1cea0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x00010598be78();
    func_0x00010bd24ee4();
    func_0x00010bd23f48();
    func_0x00010bd252f8();
    func_0x00010bd23f5c();
    func_0x00010598e0e4(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1cf1c; end: 10bd1cf97;  */

undefined1  [16] FUN_10bd1cf1c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001088ffb98();
    func_0x00010bd24ee4();
    func_0x00010bd23f6c();
    func_0x00010bd252f8();
    func_0x00010bd23f80();
    func_0x000107c2a450(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1cf98; end: 10bd1d013;  */

undefined1  [16] FUN_10bd1cf98(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001088f1584();
    func_0x00010bd24ee4();
    func_0x00010bd23f90();
    func_0x00010bd252f8();
    func_0x00010bd23fa4();
    func_0x0001088f2648(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1d014; end: 10bd1d08f;  */

undefined1  [16] FUN_10bd1d014(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001098ce904();
    func_0x00010bd24ee4();
    func_0x00010bd23fb4();
    func_0x00010bd252f8();
    func_0x00010bd23fc8();
    func_0x0001098cf768(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1d090; end: 10bd1d10b;  */

undefined1  [16] FUN_10bd1d090(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001098d378c();
    func_0x00010bd24ee4();
    func_0x00010bd23fd8();
    func_0x00010bd252f8();
    func_0x00010bd23fec();
    func_0x0001098d3d0c(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}


