/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd2b470; end: 10bd2b49f;  */

void FUN_10bd2b470(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd2ced8();
  _strlen(param_2);
  func_0x00010bd2ce44();
  func_0x00010ae6bd08();
  return;
}



/* Entry: 10bd2b4a0; end: 10bd2b4a7;  */

void FUN_10bd2b4a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  FUN_10bd2d5d0();
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_10bd1d54c();
  lVar1 = lStack_40;
  for (lVar3 = lStack_48; lVar3 != lVar1; lVar3 = lVar3 + 8) {
    func_0x00010bd2dce0();
    FUN_10bd1cac8();
  }
  if ((*(byte *)(param_1 + (ulong)*(uint *)(lVar2 + 0x24)) & 1) != 0) {
    func_0x00010bd2dce0();
    func_0x00010bd1b8b8();
    FUN_10bd023ac();
  }
  FUN_10bce0514(&lStack_48);
  return;
}



/* Entry: 10bd2b4a8; end: 10bd2b4f3;  */

void FUN_10bd2b4a8(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bd2ced8();
  func_0x000107c278b8(auStack_38,&UNK_10f836023);
  FUN_10bd2d910();
  func_0x00010bd2ceb0();
  return;
}



/* Entry: 10bd2b4f4; end: 10bd2b507;  */

undefined1  [16] FUN_10bd2b4f4(long param_1)

{
  undefined1 auVar1 [16];
  long lStack_28;
  
  func_0x00010bd2cda8();
  lStack_28 = *(long *)(param_1 + 0x30);
  if (lStack_28 != 0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    if (**(int **)(lStack_28 + 0x18) != 0xdd) {
      FUN_10bd2c04c(*(int **)(lStack_28 + 0x18),&lStack_28);
    }
  }
  auVar1._8_8_ = *(undefined8 *)(param_1 + 0x38);
  auVar1._0_8_ = *(undefined8 *)(param_1 + 0x40);
  return auVar1;
}



/* Entry: 10bd2b508; end: 10bd2b55b;  */

undefined1  [16] FUN_10bd2b508(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    if (**(int **)(lVar1 + 0x18) != 0xdd) {
      lStack_28 = lVar1;
      FUN_10bd2c04c(*(int **)(lVar1 + 0x18),&lStack_28);
    }
  }
  auVar2._8_8_ = *(undefined8 *)(param_1 + 0x38);
  auVar2._0_8_ = *(undefined8 *)(param_1 + 0x40);
  return auVar2;
}



/* Entry: 10bd2b55c; end: 10bd2b55f;  */

undefined8 FUN_10bd2b55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puStack_68;
  
  lVar1 = param_1;
  FUN_10bd2b4f4();
  FUN_10bd2b4f4(param_1);
  puStack_68 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x53) == '\x01') {
    for (lVar2 = 0; lVar2 < *(int *)(lVar1 + 4); lVar2 = lVar2 + 1) {
      func_0x00010bd3ce84();
    }
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1d54c();
  }
  for (; puStack_68 != (undefined8 *)0x0; puStack_68 = puStack_68 + 1) {
    func_0x00010bd3c978(*puStack_68);
    FUN_10bd38cf0();
  }
  if (*(char *)(*(long *)(lVar1 + 0x20) + 0x50) == '\x01') {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd379b8();
  }
  else {
    func_0x00010bd3c96c();
    FUN_10bd1b89c();
    func_0x00010bd3cc90();
    FUN_10bd377f0();
  }
  func_0x00010bd3ca28();
  return param_3;
}



/* Entry: 10bd2b560; end: 10bd2b5cf;  */

long FUN_10bd2b560(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_10bd3ac80();
  lVar2 = lVar1;
  func_0x00010bd2cd98();
  *(int *)(param_1 + (ulong)*(uint *)(lVar2 + 0x18)) = (int)lVar1;
  return lVar1;
}



/* Entry: 10bd2b5d0; end: 10bd2b5e3;  */

long FUN_10bd2b5d0(long param_1,long param_2,undefined4 *param_3)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)param_2;
    return param_2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *param_3 = (int)(param_1 + param_2);
  return param_1 + param_2;
}



/* Entry: 10bd2b5e4; end: 10bd2b6a3;  */

void FUN_10bd2b5e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bd2cda8();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x18))(param_1);
  return;
}



/* Entry: 10bd2b6a4; end: 10bd2b6ff;  */

void FUN_10bd2b6a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10bd2b4a8(param_2,&uStack_38);
  FUN_10bcff8d8(param_1,&uStack_38,&DAT_10f68f19e,2);
  func_0x000107c278a8(&uStack_38);
  return;
}



/* Entry: 10bd2b700; end: 10bd2b723;  */

undefined8 * FUN_10bd2b700(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  undefined8 *puStack_90;
  long lStack_88;
  
  uVar7 = param_1;
  func_0x000107c3a8e8();
  func_0x00010bd2ced8();
  puVar6 = (undefined8 *)(uVar7 + 0x68);
  puVar12 = puVar6;
  puStack_90 = puVar6;
  func_0x00010ae7ccdc();
  func_0x00010bd2ce44();
  FUN_10bd2bf70();
  ppuVar4 = &puStack_90;
  FUN_10bcfe50c();
  if (((param_1 & 1) == 0) || (puVar12 == (undefined8 *)0x0)) {
    ppuVar11 = *(undefined8 ***)(*(long *)(unaff_x19 + 0x10) + 0x18);
    FUN_10bcedc88();
    if (ppuVar11 == ppuVar4) {
      puVar13 = *(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 8);
      lVar14 = (long)*(char *)((long)puVar13 + 0x17);
      puVar12 = puVar13;
      if (lVar14 < 0) {
        puVar12 = (undefined8 *)*puVar13;
        lVar14 = puVar13[1];
      }
      Hint_Prefetch(*(undefined8 *)(unaff_x20 + 8),0,2,0);
      ppuVar4 = &puStack_90;
      puStack_90 = puVar12;
      lStack_88 = lVar14;
      func_0x000107c315a0(*(undefined8 *)(unaff_x20 + 8));
      lVar8 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(ulong *)(unaff_x20 + 0x18);
      uVar9 = *(ulong *)(unaff_x20 + 8);
      uVar7 = uVar9 >> 0xc ^ (ulong)ppuVar4 >> 7;
      bVar3 = (byte)ppuVar4;
      uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        uVar19 = *(undefined8 *)(uVar9 + uVar7);
        cVar20 = (char)((ulong)uVar19 >> 8);
        cVar21 = (char)((ulong)uVar19 >> 0x10);
        cVar22 = (char)((ulong)uVar19 >> 0x18);
        cVar23 = (char)((ulong)uVar19 >> 0x20);
        cVar24 = (char)((ulong)uVar19 >> 0x28);
        bVar17 = (byte)((ulong)uVar19 >> 0x30);
        bVar25 = (byte)((ulong)uVar19 >> 0x38);
        for (uVar10 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                                 CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                          CONCAT13(-(cVar22 ==
                                                                    (char)(uVar18 >> 0x18)),
                                                                   CONCAT12(-(cVar21 ==
                                                                             (char)(uVar18 >> 0x10))
                                                                            ,CONCAT11(-(cVar20 ==
                                                                                       (char)(uVar18
                                                                                             >> 8)),
                                                                                      -((char)uVar19
                                                                                       == (char)
                                                  uVar18)))))))) & 0x8080808080808080; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
          uVar15 = *(ulong *)(*(long *)(lVar1 + uVar16 * 8) + 0x10);
          uVar5 = uVar15;
          _strlen();
          func_0x000107c27944(uVar15,uVar5,puVar12,lVar14);
          if ((uVar15 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(unaff_x20 + 0x10) + uVar16 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              puStack_90 = puVar6;
              func_0x000107c2b9f0(puVar6);
              func_0x00010bd2ce44();
              FUN_10bd2bf70();
              if ((uVar5 & 1) == 0) {
                FUN_10bd21cac(puVar12);
                func_0x00010bd2ce44();
                FUN_10bd2bf70();
                puVar6 = puVar12;
              }
              FUN_10bcfee98(&puStack_90);
              return puVar6;
            }
            goto LAB_10bd2b794;
          }
        }
        bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                     CONCAT16(-(bVar17 == 0x80),
                                              CONCAT15(-(cVar24 == -0x80),
                                                       CONCAT14(-(cVar23 == -0x80),
                                                                CONCAT13(-(cVar22 == -0x80),
                                                                         CONCAT12(-(cVar21 == -0x80)
                                                                                  ,CONCAT11(-(cVar20
                                                                                             == 
                                                  -0x80),-((char)uVar19 == -0x80)))))))),1);
        if ((bVar17 & 1) != 0) break;
        lVar8 = lVar8 + 8;
        uVar7 = lVar8 + uVar7;
      }
    }
LAB_10bd2b794:
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



/* Entry: 10bd2b724; end: 10bd2b90b;  */

undefined8 * FUN_10bd2b724(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint6 uVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined8 uVar19;
  byte bVar25;
  undefined8 *puStack_90;
  long lStack_88;
  
  func_0x00010bd2ced8();
  puVar6 = (undefined8 *)(param_1 + 0x68);
  puVar12 = puVar6;
  puStack_90 = puVar6;
  func_0x00010ae7ccdc();
  func_0x00010bd2ce44();
  FUN_10bd2bf70();
  ppuVar4 = &puStack_90;
  FUN_10bcfe50c();
  if (((param_2 & 1) == 0) || (puVar12 == (undefined8 *)0x0)) {
    ppuVar11 = *(undefined8 ***)(*(long *)(unaff_x19 + 0x10) + 0x18);
    FUN_10bcedc88();
    if (ppuVar11 == ppuVar4) {
      puVar13 = *(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 8);
      lVar14 = (long)*(char *)((long)puVar13 + 0x17);
      puVar12 = puVar13;
      if (lVar14 < 0) {
        puVar12 = (undefined8 *)*puVar13;
        lVar14 = puVar13[1];
      }
      Hint_Prefetch(*(undefined8 *)(unaff_x20 + 8),0,2,0);
      ppuVar4 = &puStack_90;
      puStack_90 = puVar12;
      lStack_88 = lVar14;
      func_0x000107c315a0(*(undefined8 *)(unaff_x20 + 8));
      lVar8 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(ulong *)(unaff_x20 + 0x18);
      uVar9 = *(ulong *)(unaff_x20 + 8);
      uVar7 = uVar9 >> 0xc ^ (ulong)ppuVar4 >> 7;
      bVar3 = (byte)ppuVar4;
      uVar18 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        uVar19 = *(undefined8 *)(uVar9 + uVar7);
        cVar20 = (char)((ulong)uVar19 >> 8);
        cVar21 = (char)((ulong)uVar19 >> 0x10);
        cVar22 = (char)((ulong)uVar19 >> 0x18);
        cVar23 = (char)((ulong)uVar19 >> 0x20);
        cVar24 = (char)((ulong)uVar19 >> 0x28);
        bVar17 = (byte)((ulong)uVar19 >> 0x30);
        bVar25 = (byte)((ulong)uVar19 >> 0x38);
        for (uVar10 = CONCAT17(-(bVar25 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar17 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar24 == (char)(uVar18 >> 0x28)),
                                                 CONCAT14(-(cVar23 == (char)(uVar18 >> 0x20)),
                                                          CONCAT13(-(cVar22 ==
                                                                    (char)(uVar18 >> 0x18)),
                                                                   CONCAT12(-(cVar21 ==
                                                                             (char)(uVar18 >> 0x10))
                                                                            ,CONCAT11(-(cVar20 ==
                                                                                       (char)(uVar18
                                                                                             >> 8)),
                                                                                      -((char)uVar19
                                                                                       == (char)
                                                  uVar18)))))))) & 0x8080808080808080; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar5 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
          uVar15 = *(ulong *)(*(long *)(lVar1 + uVar16 * 8) + 0x10);
          uVar5 = uVar15;
          _strlen();
          func_0x000107c27944(uVar15,uVar5,puVar12,lVar14);
          if ((uVar15 & 1) != 0) {
            puVar12 = *(undefined8 **)(*(long *)(unaff_x20 + 0x10) + uVar16 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              puStack_90 = puVar6;
              func_0x000107c2b9f0(puVar6);
              func_0x00010bd2ce44();
              FUN_10bd2bf70();
              if ((uVar5 & 1) == 0) {
                FUN_10bd21cac(puVar12);
                func_0x00010bd2ce44();
                FUN_10bd2bf70();
                puVar6 = puVar12;
              }
              FUN_10bcfee98(&puStack_90);
              return puVar6;
            }
            goto LAB_10bd2b794;
          }
        }
        bVar17 = NEON_umaxv(CONCAT17(-(bVar25 == 0x80),
                                     CONCAT16(-(bVar17 == 0x80),
                                              CONCAT15(-(cVar24 == -0x80),
                                                       CONCAT14(-(cVar23 == -0x80),
                                                                CONCAT13(-(cVar22 == -0x80),
                                                                         CONCAT12(-(cVar21 == -0x80)
                                                                                  ,CONCAT11(-(cVar20
                                                                                             == 
                                                  -0x80),-((char)uVar19 == -0x80)))))))),1);
        if ((bVar17 & 1) != 0) break;
        lVar8 = lVar8 + 8;
        uVar7 = lVar8 + uVar7;
      }
    }
LAB_10bd2b794:
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



/* Entry: 10bd2b90c; end: 10bd2b967;  */

void FUN_10bd2b90c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = (uint)param_2;
  lVar2 = param_1;
  func_0x000107c3a8e8();
  lVar3 = lVar2 + 0x68;
  func_0x00010ae7d914();
  func_0x00010bd2cf74();
  if ((uVar4 & 1) != 0) {
    plVar1 = (long *)(*(long *)(lVar2 + 0x78) + lVar3 * 0x10);
    *plVar1 = param_1;
    plVar1[1] = param_2;
  }
  return;
}



/* Entry: 10bd2b968; end: 10bd2bb73;  */

void FUN_10bd2b968(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(byte *)((long)param_2 + 1) >> 5 & 1) != 0) {
    puVar2 = param_2;
    func_0x00010b91adc8();
    switch((int)puVar2) {
    case 1:
    case 8:
      FUN_10bd2bb74();
      return;
    case 2:
      iVar1 = 0x137fe208;
      func_0x00010bd2ce90();
      if ((extraout_x9_01 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d4f0;
      break;
    case 3:
      iVar1 = 0x137fe1f8;
      func_0x00010bd2ce90();
      if ((extraout_x9_02 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d418;
      break;
    case 4:
      iVar1 = 0x137fe218;
      func_0x00010bd2ce90();
      if ((extraout_x9 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d5c8;
      break;
    case 5:
      iVar1 = 0x137fe238;
      func_0x00010bd2ce90();
      if ((extraout_x9_04 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d778;
      break;
    case 6:
      iVar1 = 0x137fe228;
      func_0x00010bd2ce90();
      if ((extraout_x9_05 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d6a0;
      break;
    case 7:
      iVar1 = 0x137fe248;
      func_0x00010bd2ce90();
      if ((extraout_x9_03 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d850;
      break;
    case 9:
      iVar1 = 0x137fe258;
      func_0x00010bd2ce90();
      if ((extraout_x9_06 & 1) != 0) {
        return;
      }
      func_0x00010bd2cd7c();
      if (iVar1 == 0) {
        return;
      }
      ppuVar3 = &PTR_DAT_110d9d928;
      break;
    case 10:
      puVar2 = param_2;
      func_0x00010b91c030();
      if ((int)puVar2 == 0) {
        iVar1 = 0x137fe278;
        func_0x00010bd2ce90();
        if ((extraout_x9_07 & 1) != 0) {
          return;
        }
        func_0x00010bd2cd7c();
        if (iVar1 == 0) {
          return;
        }
        ppuVar3 = &PTR_DAT_110d9dae0;
      }
      else {
        iVar1 = 0x137fe268;
        func_0x00010bd2ce90();
        if ((extraout_x9_00 & 1) != 0) {
          return;
        }
        func_0x00010bd2cd7c();
        if (iVar1 == 0) {
          return;
        }
        ppuVar3 = &PTR_FUN_110d9da08;
      }
      break;
    default:
      func_0x00010bd2cf04();
      FUN_10bdb2a00();
      func_0x00010bd16784(auStack_30,&UNK_10f836039);
      goto LAB_10bd2bb70;
    }
    *param_2 = ppuVar3;
    ___cxa_guard_release(param_2 + 1);
    return;
  }
  func_0x0001088914a0(auStack_40,&UNK_10f836024);
  func_0x00010bd2cf04();
  FUN_10bdb2a88();
LAB_10bd2bb70:
  func_0x00010bd2cdbc();
  if ((bRam00000001137fe1f0 & 1) == 0) {
    iVar1 = 0x137fe1f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001137fe1e8 = &PTR_FUN_110d9d318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137fe1f0);
      return;
    }
  }
  return;
}



/* Entry: 10bd2bb74; end: 10bd2bbbb;  */

void FUN_10bd2bb74(void)

{
  int iVar1;
  
  if ((bRam00000001137fe1f0 & 1) == 0) {
    iVar1 = 0x137fe1f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001137fe1e8 = &PTR_FUN_110d9d318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137fe1f0);
      return;
    }
  }
  return;
}



/* Entry: 10bd2bbbc; end: 10bd2bc17;  */

void FUN_10bd2bbbc(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  func_0x00010bd2ce24();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd2cee4(), iVar4 == 0)) {
    lVar6 = *unaff_x20;
    lVar5 = lVar6;
    FUN_10bd212dc();
    *(long *)(lVar6 + 0x68) = lVar5;
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bd2cfb0(uVar1);
    if ((bool)in_ZR) {
      func_0x00010bd2cf54();
    }
  }
  return;
}



/* Entry: 10bd2bc18; end: 10bd2bc2f;  */

void FUN_10bd2bc18(long param_1)

{
  if (param_1 != 0) {
    FUN_10bd2bc30();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd2bc30; end: 10bd2bca7;  */

long FUN_10bd2bc30(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x70) + -8);
  }
  func_0x00010ae7c720(param_1 + 0x68);
  FUN_10bd18664(param_1 + 0x28);
  func_0x00010bd2bc78(param_1 + 8);
  return param_1;
}



/* Entry: 10bd2bca8; end: 10bd2bcbb;  */

void FUN_10bd2bca8(void)

{
  FUN_10bd2bc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd2bcbc; end: 10bd2bd67;  */

ulong FUN_10bd2bcbc(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  ulong uStack_38;
  
  uVar4 = param_1;
  uStack_38 = param_2;
  FUN_10bd2b724();
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18);
    FUN_10bcedc88();
    if (uVar3 == uVar4) {
      uVar4 = param_1 + 0x28;
      FUN_10bd18758();
      lVar2 = param_1 + 0x68;
      lStack_40 = lVar2;
      func_0x000107c2b9f0();
      func_0x00010bd2cf74();
      puVar1 = (ulong *)(*(long *)(param_1 + 0x78) + lVar2 * 0x10);
      if ((param_2 & 1) != 0) {
        *puVar1 = uStack_38;
        puVar1[1] = 0;
      }
      puVar1[1] = uVar4;
      FUN_10bcfee98(&lStack_40);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 10bd2bd68; end: 10bd2becf;  */

void FUN_10bd2bd68(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar2 = param_1;
  FUN_10bd044a0(*param_1);
  lVar3 = 0;
  uVar5 = *param_1 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar4 = (byte)puVar2 & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar8 = *(undefined8 *)(*param_1 + uVar5);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar14 == bVar4),
                          CONCAT16(-(bVar13 == bVar4),
                                   CONCAT15(-(bVar12 == bVar4),
                                            CONCAT14(-(bVar11 == bVar4),
                                                     CONCAT13(-(bVar10 == bVar4),
                                                              CONCAT12(-(bVar9 == bVar4),
                                                                       CONCAT11(-(bVar7 == bVar4),
                                                                                -((byte)uVar8 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      if (*(long *)(param_1[1] +
                   (uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]) *
                   0x10) == *param_2) {
        return;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar5 = lVar3 + uVar5;
  }
  func_0x00010bd2be34(param_1);
  return;
}



/* Entry: 10bd2bed0; end: 10bd2bf5f;  */

void FUN_10bd2bed0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  plVar3 = param_1;
  func_0x000104ab30b8();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    plVar4 = plVar3;
    if (-1 < *(char *)(lVar1 + lVar7)) {
      func_0x00010bd2cecc();
      FUN_10bd044a0();
      plVar4 = param_1;
      func_0x000107c2b954(param_1,plVar3);
      func_0x000107c3a904((uint)plVar3 & 0x7f);
      uVar9 = *puVar5;
      puVar2 = (undefined8 *)(lVar8 + (long)plVar4 * 0x10);
      puVar2[1] = puVar5[1];
      *puVar2 = uVar9;
    }
    puVar5 = puVar5 + 2;
    plVar3 = plVar4;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bd2bf60; end: 10bd2bf6f;  */

void FUN_10bd2bf60(void)

{
  func_0x00010bd0b8a4();
  return;
}



/* Entry: 10bd2bf70; end: 10bd2c043;  */

undefined1  [16] FUN_10bd2bf70(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  long lStack_28;
  
  puVar9 = (ulong *)(param_1 + 0x70);
  Hint_Prefetch(*puVar9,0,2,0);
  puVar1 = puVar9;
  lStack_28 = param_2;
  FUN_10bd044a0(*puVar9,puVar9,&lStack_28);
  lVar3 = 0;
  uVar4 = *puVar9;
  uVar6 = uVar4 >> 0xc ^ (ulong)puVar1 >> 7;
  bVar5 = (byte)puVar1 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & *(ulong *)(param_1 + 0x80);
    uVar11 = *(undefined8 *)(uVar4 + uVar6);
    bVar10 = (byte)((ulong)uVar11 >> 8);
    bVar12 = (byte)((ulong)uVar11 >> 0x10);
    bVar13 = (byte)((ulong)uVar11 >> 0x18);
    bVar14 = (byte)((ulong)uVar11 >> 0x20);
    bVar15 = (byte)((ulong)uVar11 >> 0x28);
    bVar16 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == bVar5),
                          CONCAT16(-(bVar16 == bVar5),
                                   CONCAT15(-(bVar15 == bVar5),
                                            CONCAT14(-(bVar14 == bVar5),
                                                     CONCAT13(-(bVar13 == bVar5),
                                                              CONCAT12(-(bVar12 == bVar5),
                                                                       CONCAT11(-(bVar10 == bVar5),
                                                                                -((byte)uVar11 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
              *(ulong *)(param_1 + 0x80);
      if (*(long *)(*(long *)(param_1 + 0x78) + uVar8 * 0x10) == lStack_28) {
        if (uVar4 == 0) goto LAB_10bd2c034;
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x78) + uVar8 * 0x10 + 8);
        uVar2 = 1;
        goto LAB_10bd2c03c;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(bVar15 == 0x80),
                                                   CONCAT14(-(bVar14 == 0x80),
                                                            CONCAT13(-(bVar13 == 0x80),
                                                                     CONCAT12(-(bVar12 == 0x80),
                                                                              CONCAT11(-(bVar10 ==
                                                                                        0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
LAB_10bd2c034:
  uVar11 = 0;
  uVar2 = 0;
LAB_10bd2c03c:
  auVar18._8_8_ = uVar2;
  auVar18._0_8_ = uVar11;
  return auVar18;
}



/* Entry: 10bd2c044; end: 10bd2c04b;  */

void FUN_10bd2c044(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x10);
  uStack_20 = uVar1;
  func_0x000107c613d0();
  uStack_18 = uVar1;
  func_0x00010006881c(&uStack_20);
  return;
}



/* Entry: 10bd2c04c; end: 10bd2c09f;  */

void FUN_10bd2c04c(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010bd2ce24();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd2cee4(), iVar4 == 0)) {
    FUN_10bd21a50(*unaff_x20);
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bd2cfb0(uVar1);
    if ((bool)in_ZR) {
      func_0x00010bd2cf54();
    }
  }
  return;
}



/* Entry: 10bd2c0a0; end: 10bd2c0c3;  */

bool FUN_10bd2c0a0(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}



/* Entry: 10bd2c0c4; end: 10bd2c10f;  */

void FUN_10bd2c0c4(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 10bd2c110; end: 10bd2c123;  */

void FUN_10bd2c110(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c124; end: 10bd2c14f;  */

undefined1  [16] FUN_10bd2c124(long param_1,undefined1 *param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    return auVar3 << 0x40;
  }
  puVar4 = &uStack_30;
  if (param_2 != param_4) {
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
      puVar1 = param_2 + 0x10;
      puVar5 = param_4;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *puVar5;
        *puVar5 = uVar2;
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 1;
      }
      auVar6._8_8_ = param_4;
      auVar6._0_8_ = puVar1;
      return auVar6;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x000107c282d0();
    func_0x00010bd24ee4();
    FUN_10bcd67a8();
    func_0x00010bd252f8();
    FUN_10bd23f38();
    func_0x000107c282dc(&uStack_30);
    param_2 = (undefined1 *)puVar4;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 10bd2c150; end: 10bd2c157;  */

undefined8 FUN_10bd2c150(void)

{
  return 0;
}



/* Entry: 10bd2c158; end: 10bd2c177;  */

long FUN_10bd2c158(long *param_1)

{
  (**(code **)(*param_1 + 8))();
  return (long)(int)param_1;
}



/* Entry: 10bd2c178; end: 10bd2c1cf;  */

undefined8 FUN_10bd2c178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 10bd2c1d0; end: 10bd2c21b;  */

void FUN_10bd2c1d0(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 10bd2c21c; end: 10bd2c22f;  */

void FUN_10bd2c21c(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c230; end: 10bd2c25b;  */

undefined1  [16] FUN_10bd2c230(long param_1,uint *param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint auStack_30 [2];
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    auVar6._4_4_ = 0;
    auVar6._0_4_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = auStack_30;
  if (param_2 != param_4) {
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
      puVar2 = param_2 + 4;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (uint *)((long)param_2 + 1)) {
        uVar1 = *param_2;
        *(char *)param_2 = (char)*puVar3;
        *(char *)puVar3 = (char)uVar1;
        param_4 = (uint *)((long)param_4 + 1);
        puVar3 = (uint *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    func_0x00010bd25310();
    func_0x0001088ffb98();
    func_0x00010bd24ee4();
    func_0x00010bd23f6c();
    func_0x00010bd252f8();
    func_0x00010bd23f80();
    func_0x000107c2a450(auStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10bd2c25c; end: 10bd2c287;  */

undefined4 FUN_10bd2c25c(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c288; end: 10bd2c2d3;  */

void FUN_10bd2c288(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 10bd2c2d4; end: 10bd2c2e7;  */

void FUN_10bd2c2d4(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c2e8; end: 10bd2c313;  */

undefined1  [16] FUN_10bd2c2e8(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    auVar6._0_8_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = &uStack_30;
  if (param_2 != param_4) {
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
      puVar2 = param_2 + 2;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (undefined8 *)((long)param_2 + 1)) {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        *(undefined1 *)puVar3 = uVar1;
        param_4 = (undefined8 *)((long)param_4 + 1);
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x00010598be78();
    func_0x00010bd24ee4();
    func_0x00010bd23f48();
    func_0x00010bd252f8();
    func_0x00010bd23f5c();
    func_0x00010598e0e4(&uStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10bd2c314; end: 10bd2c343;  */

undefined8 FUN_10bd2c314(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c344; end: 10bd2c38f;  */

void FUN_10bd2c344(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 10bd2c390; end: 10bd2c3a3;  */

void FUN_10bd2c390(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c3a4; end: 10bd2c3cf;  */

undefined1  [16] FUN_10bd2c3a4(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    auVar6._0_8_ = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  puVar2 = &uStack_30;
  if (param_2 != param_4) {
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
      puVar2 = param_2 + 2;
      puVar3 = param_4;
      for (; param_2 != puVar2; param_2 = (undefined8 *)((long)param_2 + 1)) {
        uVar1 = *(undefined1 *)param_2;
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        *(undefined1 *)puVar3 = uVar1;
        param_4 = (undefined8 *)((long)param_4 + 1);
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = puVar2;
      return auVar4;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001088f1584();
    func_0x00010bd24ee4();
    func_0x00010bd23f90();
    func_0x00010bd252f8();
    func_0x00010bd23fa4();
    func_0x0001088f2648(&uStack_30);
    param_2 = puVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10bd2c3d0; end: 10bd2c3ff;  */

undefined8 FUN_10bd2c3d0(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c400; end: 10bd2c447;  */

void FUN_10bd2c400(undefined4 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined4 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 4) = param_1;
  return;
}



/* Entry: 10bd2c448; end: 10bd2c46f;  */

void FUN_10bd2c448(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c470; end: 10bd2c49b;  */

undefined1 *
FUN_10bd2c470(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    return param_1;
  }
  puVar3 = &uStack_30;
  if (param_2 != param_4) {
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
      puVar1 = param_2 + 0x10;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *param_4;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
      }
      return puVar1;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001098ce904();
    func_0x00010bd24ee4();
    func_0x00010bd23fb4();
    func_0x00010bd252f8();
    func_0x00010bd23fc8();
    func_0x0001098cf768(&uStack_30);
    param_2 = (undefined1 *)puVar3;
  }
  return param_2;
}



/* Entry: 10bd2c49c; end: 10bd2c4cb;  */

undefined4 FUN_10bd2c49c(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c4cc; end: 10bd2c513;  */

void FUN_10bd2c4cc(undefined8 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19 * 8) = param_1;
  return;
}



/* Entry: 10bd2c514; end: 10bd2c53b;  */

void FUN_10bd2c514(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c53c; end: 10bd2c567;  */

undefined1 *
FUN_10bd2c53c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    return param_1;
  }
  puVar3 = &uStack_30;
  if (param_2 != param_4) {
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
      puVar1 = param_2 + 0x10;
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        uVar2 = *param_2;
        *param_2 = *param_4;
        *param_4 = uVar2;
        param_4 = param_4 + 1;
      }
      return puVar1;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x0001098d378c();
    func_0x00010bd24ee4();
    func_0x00010bd23fd8();
    func_0x00010bd252f8();
    func_0x00010bd23fec();
    func_0x0001098d3d0c(&uStack_30);
    param_2 = (undefined1 *)puVar3;
  }
  return param_2;
}



/* Entry: 10bd2c568; end: 10bd2c597;  */

undefined8 FUN_10bd2c568(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c598; end: 10bd2c5e3;  */

void FUN_10bd2c598(undefined1 param_1)

{
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x00010bd2cd1c();
  (*extraout_x8)();
  *(undefined1 *)(*(long *)(unaff_x20 + 8) + (long)unaff_w19) = param_1;
  return;
}



/* Entry: 10bd2c5e4; end: 10bd2c60b;  */

void FUN_10bd2c5e4(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



/* Entry: 10bd2c60c; end: 10bd2c637;  */

undefined1  [16] FUN_10bd2c60c(long param_1,byte *param_2,long param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte abStack_30 [8];
  long lStack_28;
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2ccf4();
    func_0x00010bd2cdbc();
    auVar6._1_7_ = 0;
    auVar6[0] = *param_2;
    auVar6._8_8_ = param_2;
    return auVar6;
  }
  pbVar2 = abStack_30;
  if (param_2 != param_4) {
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
      pbVar2 = param_2 + 0x10;
      pbVar3 = param_4;
      for (; param_2 != pbVar2; param_2 = param_2 + 1) {
        bVar1 = *param_2;
        *param_2 = *pbVar3;
        *pbVar3 = bVar1;
        param_4 = param_4 + 1;
        pbVar3 = pbVar3 + 1;
      }
      auVar4._8_8_ = param_4;
      auVar4._0_8_ = pbVar2;
      return auVar4;
    }
    abStack_30[0] = 0;
    abStack_30[1] = 0;
    abStack_30[2] = 0;
    abStack_30[3] = 0;
    abStack_30[4] = 0;
    abStack_30[5] = 0;
    abStack_30[6] = 0;
    abStack_30[7] = 0;
    func_0x00010bd25310();
    func_0x00010b4c0d98();
    func_0x00010bd24ee4();
    func_0x00010bd23ffc();
    func_0x00010bd252f8();
    func_0x00010bd24010();
    func_0x00010b4c3c80(abStack_30);
    param_2 = pbVar2;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10bd2c638; end: 10bd2c66b;  */

undefined1 FUN_10bd2c638(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



/* Entry: 10bd2c66c; end: 10bd2c737;  */

void FUN_10bd2c66c(long *param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  
  plVar1 = param_1;
  func_0x00010bd2cd88();
  (**(code **)(*param_1 + 0x90))(param_1,param_3,plVar1);
  uVar4 = param_2[2];
  if ((uVar4 == 0) && (puVar2 = param_2, func_0x0001053a91c8(), (int)puVar2 == 0)) {
    puVar2 = param_2;
    if ((*param_2 & 1) != 0) {
      puVar2 = (ulong *)(*param_2 + 7);
    }
    uVar4 = param_2[1];
    puVar3 = param_2;
    func_0x000107c28174();
    if ((int)uVar4 < (int)puVar3) {
      uVar4 = puVar2[(int)param_2[1]];
      puVar3 = param_2;
      func_0x000107c28174();
      puVar2[(int)puVar3] = uVar4;
    }
    uVar4 = param_2[1];
    *(int *)(param_2 + 1) = (int)uVar4 + 1;
    puVar2[(int)uVar4] = (ulong)plVar1;
    uVar4 = *param_2;
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
    return;
  }
  func_0x00010bd2cecc();
  func_0x00010bd2ced8();
  if ((param_3 != 0) && (uVar4 != 0)) {
    func_0x00010b4d8014(uVar4,unaff_x19,&UNK_10b4bf200);
  }
  if (*(int *)((long)unaff_x20 + 0xc) < (int)unaff_x20[1]) {
    func_0x000107c303a8(unaff_x20,1);
LAB_10bd2c93c:
    uVar4 = *unaff_x20;
  }
  else {
    puVar2 = unaff_x20;
    func_0x0001053a91c8();
    uVar4 = unaff_x20[1];
    if ((int)puVar2 != 0) {
      func_0x00010bd2cf14(*unaff_x20);
      func_0x000107c282bc(*extraout_x8,unaff_x20[2]);
      uVar4 = *unaff_x20;
      goto LAB_10bd2c978;
    }
    puVar2 = unaff_x20;
    func_0x000107c28174();
    if ((int)uVar4 < (int)puVar2) {
      puVar2 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar2 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar4 = *puVar2;
      func_0x000107c28174(unaff_x20);
      func_0x00010bd2cf14(*unaff_x20);
      *extraout_x8_01 = uVar4;
      goto LAB_10bd2c93c;
    }
    uVar4 = *unaff_x20;
    if ((uVar4 & 1) == 0) goto LAB_10bd2c978;
  }
  *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
LAB_10bd2c978:
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  func_0x00010bd2cf14(uVar4);
  *extraout_x8_00 = unaff_x19;
  return;
}



/* Entry: 10bd2c738; end: 10bd2c747;  */

void FUN_10bd2c738(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = (long)(int)param_2[1] + -1;
  *(int *)(param_2 + 1) = (int)lVar2;
  if ((*param_2 & 1) != 0) {
    param_2 = (ulong *)(*param_2 + lVar2 * 8 + 7);
  }
  puVar1 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10bd2c748; end: 10bd2c8c3;  */

undefined1  [16]
FUN_10bd2c748(ulong *param_1,undefined1 *param_2,ulong *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  int extraout_w8;
  undefined1 *puVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 *unaff_x20;
  ulong uVar6;
  uint uVar7;
  long unaff_x23;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 != param_3) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar3 = &uStack_70;
    puVar4 = param_2;
    FUN_10bd2c9ec(puVar3,param_2);
    func_0x00010bd2ce44(*(undefined8 *)(*param_3 + 8));
    (*extraout_x8)();
    uVar2 = (uint)puVar3;
    for (uVar7 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      func_0x00010bd2ce44(*(undefined8 *)(*param_3 + 0x10));
      (*extraout_x8_00)();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,puVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
      puVar3 = param_1;
      puVar4 = param_2;
      FUN_10bd2ca10(param_1,param_2,auStack_88);
      func_0x00010bd2ceb0();
    }
    uVar7 = *(uint *)(param_2 + 8);
    func_0x00010bd2ce44(*(undefined8 *)(*param_3 + 0x18));
    (*extraout_x8_01)();
    for (uVar6 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1)
    {
      func_0x00010bd2ce44();
      FUN_10bd2ca10();
    }
    puVar3 = &uStack_70;
    func_0x000107c282b4(puVar3);
    auVar10._8_8_ = puVar4;
    auVar10._0_8_ = puVar3;
    return auVar10;
  }
  if (param_2 == param_4) {
    auVar11._8_8_ = param_4;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  if (*(long *)(param_2 + 0x10) == *(long *)(param_4 + 0x10)) {
    puVar4 = param_2 + 0x10;
    puVar5 = param_4;
    for (; param_2 != puVar4; param_2 = param_2 + 1) {
      uVar1 = *param_2;
      *param_2 = *puVar5;
      *puVar5 = uVar1;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    auVar8._8_8_ = param_4;
    auVar8._0_8_ = puVar4;
    return auVar8;
  }
  func_0x00010bd24f94();
  func_0x00010bd25710();
  if (extraout_w8 != 0) {
    param_2 = &stack0xffffffffffffffc8;
    func_0x000107c303bc(param_2,unaff_x20);
    param_4 = unaff_x20;
  }
  func_0x00010bd24ee4();
  func_0x00010bd24070();
  func_0x00010bd25568();
  if (unaff_x23 != 0) {
    param_2 = &stack0xffffffffffffffc8;
    func_0x000107c282b8(param_2);
  }
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Entry: 10bd2c8c4; end: 10bd2c8e3;  */

void FUN_10bd2c8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10bd2c8e4; end: 10bd2c8ef;  */

void FUN_10bd2c8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_3);
  return;
}



/* Entry: 10bd2c8f0; end: 10bd2c9eb;  */

void FUN_10bd2c8f0(undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  
  func_0x00010bd2ced8();
  if ((param_2 != 0) && (param_3 != 0)) {
    func_0x00010b4d8014(param_3);
  }
  if (*(int *)((long)unaff_x20 + 0xc) < (int)unaff_x20[1]) {
    func_0x000107c303a8();
LAB_10bd2c93c:
    uVar2 = *unaff_x20;
  }
  else {
    puVar1 = unaff_x20;
    func_0x0001053a91c8();
    uVar2 = unaff_x20[1];
    if ((int)puVar1 != 0) {
      func_0x00010bd2cf14(*unaff_x20);
      func_0x000107c282bc(*extraout_x8,unaff_x20[2]);
      uVar2 = *unaff_x20;
      goto LAB_10bd2c978;
    }
    puVar1 = unaff_x20;
    func_0x000107c28174();
    if ((int)uVar2 < (int)puVar1) {
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar2 = *puVar1;
      func_0x000107c28174();
      func_0x00010bd2cf14(*unaff_x20);
      *extraout_x8_01 = uVar2;
      goto LAB_10bd2c93c;
    }
    uVar2 = *unaff_x20;
    if ((uVar2 & 1) == 0) goto LAB_10bd2c978;
  }
  *(int *)(uVar2 - 1) = *(int *)(uVar2 - 1) + 1;
LAB_10bd2c978:
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  func_0x00010bd2cf14(uVar2);
  *extraout_x8_00 = unaff_x19;
  return;
}



/* Entry: 10bd2c9ec; end: 10bd2ca0f;  */

undefined1  [16] FUN_10bd2c9ec(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w8;
  long *plVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long alStack_38 [3];
  
  if (param_1 == param_2) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  if (param_1[2] != param_2[2]) {
    func_0x00010bd24f94();
    func_0x00010bd25710();
    if (extraout_w8 != 0) {
      param_1 = alStack_38;
      func_0x000107c303bc(param_1);
      param_2 = unaff_x20;
    }
    func_0x00010bd24ee4();
    func_0x00010bd24070();
    func_0x00010bd25568();
    if (alStack_38[0] != 0) {
      param_1 = alStack_38;
      func_0x000107c282b8(param_1);
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  plVar1 = param_1 + 2;
  plVar3 = param_2;
  for (; param_1 != plVar1; param_1 = (long *)((long)param_1 + 1)) {
    lVar2 = *param_1;
    *(char *)param_1 = (char)*plVar3;
    *(char *)plVar3 = (char)lVar2;
    param_2 = (long *)((long)param_2 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10bd2ca10; end: 10bd2ca5b;  */

void FUN_10bd2ca10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x00010bd2ced8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_3);
  func_0x00010bd2ce44(*(undefined8 *)(*unaff_x20 + 0x28));
  (*extraout_x8)();
  func_0x00010bd2ceb0();
  return;
}



/* Entry: 10bd2ca5c; end: 10bd2ca5f;  */

void FUN_10bd2ca5c(void)

{
  return;
}



/* Entry: 10bd2ca60; end: 10bd2ca97;  */

bool FUN_10bd2ca60(long param_1)

{
  func_0x00010bd2cf60();
  return *(int *)(param_1 + 8) == 0;
}



/* Entry: 10bd2ca98; end: 10bd2cabf;  */

void FUN_10bd2ca98(undefined8 *param_1)

{
  func_0x00010bd2cf60();
  func_0x00010bd2cf9c(*param_1);
  return;
}



/* Entry: 10bd2cac0; end: 10bd2cad3;  */

void FUN_10bd2cac0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bd2ce9c();
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10bd2cad4; end: 10bd2cb07;  */

long * FUN_10bd2cad4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  
  func_0x00010bd2ce9c();
  func_0x00010bd2cf9c(*param_1);
  if (param_4 != param_1) {
    func_0x00010bd2ced8();
    func_0x00010bd2cda8();
    plVar1 = param_1;
    func_0x00010bd2cd98();
    if (plVar1 != (long *)0x0 && plVar1 == param_1) {
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20);
      UNRECOVERED_JUMPTABLE = (code *)param_1[4];
      func_0x00010bd2ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x20;
    }
    FUN_10bd2b4f4();
    FUN_10bd2b4f4();
    param_1 = alStack_48;
    FUN_10bd208b4(param_1,auStack_38,&UNK_10f835f8a);
    if (param_1 != (long *)0x0) {
      lVar2 = (long)*(char *)((long)param_1 + 0x17);
      plVar1 = param_1;
      if (lVar2 < 0) {
        plVar1 = (long *)*param_1;
        lVar2 = param_1[1];
      }
      FUN_10bdb2a08(alStack_48,&UNK_10f835fad,0x66,plVar1,lVar2);
      plVar1 = alStack_48;
      FUN_10bd2b470(plVar1,&UNK_10f835fdf);
      func_0x00010ae6c448();
      func_0x00010bd16764();
      FUN_10bd2b4f4();
      lVar2 = *(long *)(unaff_x19 + 8) + 0x18;
      func_0x00010ae6c448(plVar1,lVar2);
      func_0x00010ae6c700(alStack_48);
      func_0x00010bd2ced8();
      _strlen(lVar2);
      func_0x00010bd2ce44();
      func_0x00010ae6bd08();
      return plVar1;
    }
    func_0x00010bd2cecc();
    FUN_10bd2cfc4();
  }
  return param_1;
}



/* Entry: 10bd2cb08; end: 10bd2cb53;  */

void FUN_10bd2cb08(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  (**(code **)(*param_3 + 0x10))(param_3,0);
  FUN_10bd2b348();
  FUN_10bd28ab0(param_2);
  func_0x00010bd24f94();
  uVar4 = param_3[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar5 = unaff_x20[2];
  if (uVar5 == uVar4) {
    puVar3 = unaff_x20;
    func_0x0001053a91c8();
    iVar2 = (int)puVar3;
    if (iVar2 == 0) {
      puVar3 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar3 = (ulong *)(*unaff_x20 + 7);
      }
      uVar4 = unaff_x20[1];
      func_0x00010bd253a0();
      if ((int)uVar4 < iVar2) {
        uVar4 = puVar3[(int)unaff_x20[1]];
        func_0x00010bd253a0();
        puVar3[iVar2] = uVar4;
      }
      uVar4 = unaff_x20[1];
      *(int *)(unaff_x20 + 1) = (int)uVar4 + 1;
      puVar3[(int)uVar4] = (ulong)unaff_x19;
      uVar4 = *unaff_x20;
      if ((uVar4 & 1) != 0) {
        *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
      }
      return;
    }
  }
  func_0x00010bd24ee4();
  func_0x00010bd2540c();
  if ((uVar4 == 0) && (uVar5 != 0)) {
    if (unaff_x20 != (ulong *)0x0) {
      func_0x00010b4d8014(uVar5,unaff_x20,&UNK_1053a933c);
    }
  }
  else if (uVar5 != uVar4) {
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20,uVar5);
    (**(code **)(*unaff_x20 + 0x20))();
  }
  uVar1 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580(unaff_x19,1);
code_r0x0001053a9270:
    uVar4 = *unaff_x19;
  }
  else {
    puVar3 = unaff_x19;
    func_0x0001053a91c8();
    uVar4 = unaff_x19[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = unaff_x19;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar3;
    if ((int)uVar4 < (int)puVar3) {
      uVar1 = (*unaff_x19 & 1) == 0;
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar4 = *puVar3;
      func_0x00010006818c(unaff_x19);
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *unaff_x19;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 10bd2cb54; end: 10bd2cb67;  */

void FUN_10bd2cb54(ulong *param_1)

{
  long lVar1;
  
  func_0x00010bd2ce9c();
  lVar1 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd1d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 10bd2cb68; end: 10bd2cc0f;  */

/* WARNING: Possible PIC construction at 0x000100064628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006462c) */

undefined1  [16] FUN_10bd2cb68(ulong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int ****ppppiVar5;
  int ***pppiVar6;
  uint *puVar7;
  ulong uVar8;
  int ****ppppiVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int ***apppiStack_58 [2];
  undefined8 uStack_48;
  
  func_0x00010bd2ce9c();
  param_3 = param_3 + ~*(uint *)((long)param_1 + 0xc);
  if (param_3 < 1) {
    auVar13._8_4_ = param_3;
    auVar13._0_8_ = param_1;
    auVar13._12_4_ = 0;
    return auVar13;
  }
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  uVar2 = uVar1 + param_3;
  puVar7 = (uint *)param_1[2];
  uVar10 = 1;
  if (0 < (int)uVar2) {
    if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
      uVar2 = uVar1 * 2 + 1;
    }
    uVar3 = 0x7fffffff;
    if (*(int *)((long)param_1 + 0xc) < 0x3ffffffb) {
      uVar3 = uVar2;
    }
    uVar10 = (ulong)uVar3;
  }
  ppppiVar5 = (int ****)(uVar10 * 8 + 8);
  if (puVar7 != (uint *)0x0) {
    uStack_48 = 0xffffffffffffffff;
    ppppiVar9 = apppiStack_58;
    apppiStack_58[0] = (int ***)ppppiVar5;
    func_0x0001053abb00(ppppiVar9,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppppiVar9 == (int ****)0x0) {
      puVar4 = puVar7;
      func_0x0001053abb54(puVar7,ppppiVar5,1);
      uVar8 = *param_1;
      if ((uVar8 & 1) == 0) {
        *puVar4 = (uint)(uVar8 != 0);
        *(ulong *)(puVar4 + 2) = uVar8;
      }
      else {
        ppppiVar9 = (int ****)(uVar8 - 1);
        ppppiVar5 = ppppiVar9;
        func_0x000107c610b4(puVar4,ppppiVar9,(long)*(int *)ppppiVar9 * 8 + 8);
        if (puVar7 == (uint *)0x0) {
          func_0x000107c60e14(ppppiVar9);
        }
        else {
          func_0x0001053abbbc(puVar7,ppppiVar9,
                              (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 8
                             );
          ppppiVar5 = ppppiVar9;
        }
      }
      *param_1 = (long)puVar4 + 1;
      *(int *)((long)param_1 + 0xc) = (int)uVar10 + -1;
      auVar11._8_8_ = ppppiVar5;
      auVar11._0_8_ = puVar4 + (long)(int)param_1[1] * 2 + 2;
      return auVar11;
    }
    pppiVar6 = (int ***)(long)*(char *)((long)ppppiVar9 + 0x17);
    ppppiVar5 = ppppiVar9;
    if ((long)pppiVar6 < 0) {
      ppppiVar5 = (int ****)*ppppiVar9;
      pppiVar6 = ppppiVar9[1];
    }
    func_0x000107c2b940(apppiStack_58,
                        "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                        ,0x10a,ppppiVar5,pppiVar6);
    func_0x0001053abb1c(apppiStack_58,"Requested size is too large to fit into size_t.");
    ppppiVar5 = apppiStack_58;
    func_0x000107c2b948(ppppiVar5);
  }
  ppppiVar9 = ppppiVar5;
  func_0x000107c60e20();
  auVar12._8_8_ = ppppiVar5;
  auVar12._0_8_ = ppppiVar9;
  return auVar12;
}



/* Entry: 10bd2cc10; end: 10bd2cc4b;  */

void FUN_10bd2cc10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd2cc4c; end: 10bd2cc97;  */

void FUN_10bd2cc4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  plVar4 = param_1;
  func_0x00010bd2cd88();
  (**(code **)(*param_1 + 0x90))(param_1,param_3,plVar4);
  func_0x00010bd24f94(param_2);
  uVar5 = plVar4[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar6 = unaff_x20[2];
  if (uVar6 == uVar5) {
    puVar3 = unaff_x20;
    func_0x0001053a91c8();
    iVar2 = (int)puVar3;
    if (iVar2 == 0) {
      puVar3 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar3 = (ulong *)(*unaff_x20 + 7);
      }
      uVar5 = unaff_x20[1];
      func_0x00010bd253a0();
      if ((int)uVar5 < iVar2) {
        uVar5 = puVar3[(int)unaff_x20[1]];
        func_0x00010bd253a0();
        puVar3[iVar2] = uVar5;
      }
      uVar5 = unaff_x20[1];
      *(int *)(unaff_x20 + 1) = (int)uVar5 + 1;
      puVar3[(int)uVar5] = (ulong)unaff_x19;
      uVar5 = *unaff_x20;
      if ((uVar5 & 1) != 0) {
        *(int *)(uVar5 - 1) = *(int *)(uVar5 - 1) + 1;
      }
      return;
    }
  }
  func_0x00010bd24ee4();
  func_0x00010bd2540c();
  if ((uVar5 == 0) && (uVar6 != 0)) {
    if (unaff_x20 != (ulong *)0x0) {
      func_0x00010b4d8014(uVar6,unaff_x20,&UNK_1053a933c);
    }
  }
  else if (uVar6 != uVar5) {
    (**(code **)(*unaff_x20 + 0x10))(unaff_x20,uVar6);
    (**(code **)(*unaff_x20 + 0x20))();
  }
  uVar1 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580(unaff_x19,1);
code_r0x0001053a9270:
    uVar5 = *unaff_x19;
  }
  else {
    puVar3 = unaff_x19;
    func_0x0001053a91c8();
    uVar5 = unaff_x19[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = unaff_x19;
    func_0x00010006818c();
    uVar1 = (int)uVar5 == (int)puVar3;
    if ((int)uVar5 < (int)puVar3) {
      uVar1 = (*unaff_x19 & 1) == 0;
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar5 = *puVar3;
      func_0x00010006818c(unaff_x19);
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar5;
      goto code_r0x0001053a9270;
    }
    uVar5 = *unaff_x19;
    if ((uVar5 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar5);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 10bd2cc98; end: 10bd2cca7;  */

void FUN_10bd2cc98(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = (long)(int)param_2[1] + -1;
  *(int *)(param_2 + 1) = (int)lVar1;
  if ((*param_2 & 1) != 0) {
    param_2 = (ulong *)(*param_2 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd1d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))();
  return;
}



/* Entry: 10bd2cca8; end: 10bd2ccdb;  */

undefined1  [16] FUN_10bd2cca8(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int extraout_w8;
  long *plVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_38 [3];
  
  if (param_1 != param_3) {
    func_0x00010bd2cd0c();
    func_0x00010bd2cd34();
    FUN_10bdb2a88();
    func_0x00010bd2cdbc();
    uVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bd2cec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,0);
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = param_2;
    return auVar8;
  }
  if (param_2 != param_4) {
    if (param_2[2] != param_4[2]) {
      func_0x00010bd24f94();
      func_0x00010bd25710();
      if (extraout_w8 != 0) {
        param_2 = alStack_38;
        func_0x000107c303c4(param_2);
        param_4 = unaff_x20;
      }
      func_0x00010bd24ee4();
      func_0x00010bd240fc();
      func_0x00010bd25568();
      if (alStack_38[0] != 0) {
        param_2 = alStack_38;
        FUN_10bd24138(param_2);
      }
      auVar6._8_8_ = param_4;
      auVar6._0_8_ = param_2;
      return auVar6;
    }
    plVar1 = param_2 + 2;
    plVar4 = param_4;
    for (; param_2 != plVar1; param_2 = (long *)((long)param_2 + 1)) {
      lVar2 = *param_2;
      *(char *)param_2 = (char)*plVar4;
      *(char *)plVar4 = (char)lVar2;
      param_4 = (long *)((long)param_4 + 1);
      plVar4 = (long *)((long)plVar4 + 1);
    }
    auVar5._8_8_ = param_4;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 10bd2ccdc; end: 10bd2cfc3;  */

void FUN_10bd2ccdc(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd2cec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0);
  return;
}



/* Entry: 10bd2cfc4; end: 10bd2cffb;  */

long ***** FUN_10bd2cfc4(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long lVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  uint uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  if (param_1 == param_2) {
    return param_1;
  }
  ppppplVar5 = param_2;
  FUN_10bd2cffc();
  func_0x00010bd2dce0();
  if (param_2 == ppppplVar5) {
    ppppplVar12 = param_2;
    ppppplVar13 = ppppplVar5;
    func_0x00010bd2dce0();
    func_0x00010ae6ab0c();
    func_0x00010802bcb8();
    ppppplVar7 = (long *****)&UNK_10f836135;
    FUN_10bdb2a88(&pppplStack_80,&UNK_10f836135,0x33,ppppplVar12,ppppplVar13);
  }
  else {
    ppppplVar12 = param_2;
    FUN_10bd2b4f4();
    pppplStack_68 = (long ****)ppppplVar12;
    func_0x00010bd2dd3c();
    ppppplVar7 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar12;
    FUN_10bd208b4(ppppplVar7,&pppplStack_68,&UNK_10f83616e);
    if (ppppplVar7 == (long *****)0x0) {
      FUN_10bd2d5d0();
      func_0x00010bd2ddb0();
      ppppplVar16 = (long *****)unaff_x21[0xb];
      ppppplVar12 = param_2;
      func_0x000107c3a8e8();
      ppppplVar17 = (long *****)param_2[0xb];
      ppppplVar13 = ppppplVar12;
      func_0x000107c3a8e8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar7 = unaff_x21;
      FUN_10bd1d54c();
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar16 == ppppplVar12) != (ppppplVar17 != ppppplVar13));
      pppplVar8 = pppplStack_80;
      do {
        uVar2 = pppplVar8 == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x00010bd2dd90();
          if (*ppppplVar7 != ppppplVar7[1]) {
            func_0x00010bd1b8b8(param_2,ppppplVar5);
            ppppplVar5 = param_2;
            func_0x00010bd2dd90();
            FUN_10bd36884(param_2,ppppplVar5);
          }
          ppppplVar5 = &pppplStack_80;
          FUN_10bce0514(ppppplVar5);
          return ppppplVar5;
        }
        ppppplVar12 = (long *****)*pppplVar8;
        if ((*(byte *)((long)ppppplVar12 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd78();
          switch((int)ppppplVar7) {
          case 1:
            func_0x00010bd2dcc0();
            FUN_10bd1d784();
            func_0x00010bd2dcd0();
            FUN_10bd1d830();
            break;
          case 2:
            func_0x00010bd2dcc0();
            FUN_10bd1daa0();
            func_0x00010bd2dcd0();
            FUN_10bd1db4c();
            break;
          case 3:
            func_0x00010bd2dcc0();
            FUN_10bd1ddc4();
            func_0x00010bd2dcd0();
            FUN_10bd1de70();
            break;
          case 4:
            func_0x00010bd2dcc0();
            FUN_10bd1e0e0();
            func_0x00010bd2dcd0();
            FUN_10bd1e18c();
            break;
          case 5:
            func_0x00010bd2dcc0();
            FUN_10bd1e748();
            func_0x00010bd2dcd0();
            FUN_10bd1e7f4();
            break;
          case 6:
            func_0x00010bd2dcc0();
            FUN_10bd1e404();
            func_0x00010bd2dcd0();
            FUN_10bd1e4b0();
            break;
          case 7:
            func_0x00010bd2dcc0();
            FUN_10bd1ea8c();
            func_0x00010bd2dcd0();
            FUN_10bd1eb3c();
            break;
          case 8:
            func_0x00010bd2dcc0();
            FUN_10bd1f9dc();
            func_0x00010bd2dcd0();
            FUN_10bd1fac4();
            break;
          case 9:
            func_0x00010bd2dcc0(appplStack_b0);
            FUN_10bd1edd0();
            func_0x00010bd2dcd0();
            FUN_10bd1f144();
            ppppplVar7 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x00010bd2dcc0();
            func_0x00010bd2dda8();
            if (unaff_x21 == param_2) {
              FUN_10bd2b4f4();
            }
            func_0x00010bd2dcd0();
            FUN_10bd2002c();
            FUN_10bd2b2ec();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x00010b91c030(), ppppplVar7 = ppppplVar12, (int)ppppplVar12 != 0)) {
            func_0x00010bd2dcc0();
            func_0x00010bd21278();
            ppppplVar7 = ppppplVar12;
            func_0x00010bd2dcd0();
            func_0x00010bd2123c();
            if (((((ulong)ppppplVar7[1] & 1) == 0) || (func_0x00010bd2dcec(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar12[1] & 1) == 0 || (func_0x00010bd2dcec(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar7)[6])();
              goto LAB_10bd2d464;
            }
          }
          func_0x00010bd2dcc0();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar7;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd78();
            switch((int)ppppplVar7) {
            case 1:
              func_0x00010bd2dcac();
              func_0x00010bd1d948();
              func_0x00010bd2dcd0();
              FUN_10bd1d9d8();
              break;
            case 2:
              func_0x00010bd2dcac();
              func_0x00010bd1dc68();
              func_0x00010bd2dcd0();
              FUN_10bd1dcf8();
              break;
            case 3:
              func_0x00010bd2dcac();
              func_0x00010bd1df88();
              func_0x00010bd2dcd0();
              FUN_10bd1e018();
              break;
            case 4:
              func_0x00010bd2dcac();
              func_0x00010bd1e2a8();
              func_0x00010bd2dcd0();
              FUN_10bd1e338();
              break;
            case 5:
              func_0x00010bd2dcac();
              FUN_10bd1e91c();
              func_0x00010bd2dcd0();
              FUN_10bd1e9ac();
              break;
            case 6:
              func_0x00010bd2dcac();
              FUN_10bd1e5d8();
              func_0x00010bd2dcd0();
              FUN_10bd1e668();
              break;
            case 7:
              func_0x00010bd2dcac();
              func_0x00010bd1ec54();
              func_0x00010bd2dcd0();
              FUN_10bd1ed08();
              break;
            case 8:
              func_0x00010bd2dcac();
              FUN_10bd1fc24();
              func_0x00010bd2dcd0();
              FUN_10bd1fce0();
              break;
            case 9:
              func_0x00010bd2dcac(appplStack_98);
              FUN_10bd1f74c();
              func_0x00010bd2dcd0();
              FUN_10bd1f8c4();
              ppppplVar7 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x00010bd2dcac();
              func_0x00010bd203bc();
              if (unaff_x21 == param_2) {
                FUN_10bd2b4f4();
              }
              func_0x00010bd2dcd0();
              FUN_10bd20468();
              FUN_10bd2b2ec();
            }
          }
        }
LAB_10bd2d464:
        pppplVar8 = pppplVar8 + 1;
      } while( true );
    }
    pppplVar8 = (long ****)(long)*(char *)((long)ppppplVar7 + 0x17);
    ppppplVar12 = ppppplVar7;
    if ((long)pppplVar8 < 0) {
      ppppplVar12 = (long *****)*ppppplVar7;
      pppplVar8 = ppppplVar7[1];
    }
    FUN_10bdb2a08(&pppplStack_80,&UNK_10f836135,0x36,ppppplVar12,pppplVar8);
    param_2 = &pppplStack_80;
    func_0x00010b4c31b4(param_2,&UNK_10f836190);
    func_0x00010ae6bd08();
    func_0x00010bd2dd6c(pppplStack_68[1]);
    ppppplVar7 = param_2;
    func_0x00010ae6bd08(param_2,&UNK_10f40acbc,4);
    func_0x00010bd2dd3c();
    func_0x00010bd2dd6c(ppppplVar7[1]);
    ppppplVar7 = (long *****)&DAT_10f684600;
    func_0x00010b4c3214(param_2);
  }
  ppppplVar12 = &pppplStack_80;
  func_0x00010ae6c700();
  pcStack_c8 = FUN_10bd2d5d0;
  pppplStack_e0 = (long ****)param_2;
  pppplStack_d8 = (long ****)ppppplVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10bd2b4f4();
  if (ppppplVar7 != (long *****)0x0) {
    return ppppplVar7;
  }
  func_0x00010bd2dd3c();
  if (ppppplVar12 == (long *****)0x0) {
    func_0x000107c278b8(auStack_f8,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar12[1]);
  }
  ppppplVar7 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_108,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_108,&UNK_10f8361cc);
  func_0x00010ae6c448();
  pppplVar8 = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar5 = (long *****)appplStack_108;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar12 = &pppplStack_230;
  func_0x00010bd2dd18();
  uStack_178 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar15 = *(uint *)((long)unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    ppppplVar7 = (long *****)((long)unaff_x21[7] + lVar9);
    uVar2 = *(int *)(ppppplVar7[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar5 == 0) {
        ppppplVar13 = (long *****)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar10 = unaff_x21[7];
    ppppplVar5 = &pppplStack_220;
    pppplVar8 = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_220 = (long ****)(ppppplVar5 + (long)pppplVar8);
    pppplStack_228 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = pppplVar10 + 0xb;
    ppppplVar12 = ppppplVar7;
    ppppplVar17 = ppppplVar5;
    pppplStack_230 = (long ****)ppppplVar5;
    ppppplVar16 = (long *****)pppplStack_228;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar17 = (long *****)pppplStack_230;
    ppppplVar16 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar13 = (long *****)(ulong)(ppppplVar17 == ppppplVar16);
    uVar2 = 1;
    ppppplVar7 = ppppplVar12;
    if (ppppplVar17 == ppppplVar16) break;
    ppppplVar11 = (long *****)*ppppplVar17;
    ppppplVar5 = ppppplVar11;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar11;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar11 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar12 = ppppplVar11;
          ppppplVar7 = ppppplVar11;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar7 = ppppplVar11;
          FUN_10bd1d250();
          uVar15 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar15,
                ppppplVar12 = ppppplVar7, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar7 = ppppplVar11;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar15 = uVar15 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar11;
        FUN_10bcee28c();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar7 = ppppplVar11;
          func_0x00010bd21278();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_1c8);
          func_0x00010bd2dd9c(&ppplStack_218);
          pppplVar8 = appplStack_1c8;
          FUN_10bd28990(ppppplVar5,pppplVar8);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_188;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              ppppplVar13 = (long *****)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar5 = (long *****)appplStack_1c8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar12 = ppppplVar7;
        }
      }
    }
    ppppplVar17 = ppppplVar17 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar12 = ppppplVar5;
    FUN_10bd2b4f4();
    ppppplVar13 = ppppplVar5;
    FUN_10bd2d5d0();
    uVar15 = *(uint *)((long)ppppplVar12 + 4);
    for (lVar9 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar12[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar16 = ppppplVar13, FUN_10bd1d188(ppppplVar13,ppppplVar5),
         ((ulong)ppppplVar16 & 1) == 0)) {
        func_0x000107c27fa4(&ppplStack_2a8,pppplVar8,
                            *(undefined8 *)((long)ppppplVar12[7] + lVar9 + 8));
        func_0x000107c27940(ppppplVar7,&ppplStack_2a8);
        func_0x00010bd2dd5c();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_10bd1d54c(ppppplVar13,ppppplVar5,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar10 = (long ****)ppplStack_2a8; pppplVar10 != (long ****)ppplVar1;
        pppplVar10 = pppplVar10 + 1) {
      ppplVar14 = *pppplVar10;
      func_0x00010bd2dd78();
      if ((int)ppppplVar13 == 10) {
        if ((*(byte *)((long)ppplVar14 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,0xffffffff);
          FUN_10bd2d910(ppppplVar13,auStack_2c0,ppppplVar7);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar13;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,uVar15);
            FUN_10bd2d910(ppppplVar13,auStack_2c0,ppppplVar7);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    ppppplVar5 = (long *****)&ppplStack_2a8;
    FUN_10bce0514(ppppplVar5);
    return ppppplVar5;
  }
  return ppppplVar13;
}



/* Entry: 10bd2cffc; end: 10bd2d093;  */

void FUN_10bd2cffc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  FUN_10bd2d5d0();
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_10bd1d54c();
  lVar1 = lStack_40;
  for (lVar3 = lStack_48; lVar3 != lVar1; lVar3 = lVar3 + 8) {
    func_0x00010bd2dce0();
    FUN_10bd1cac8();
  }
  if ((*(byte *)(param_1 + (ulong)*(uint *)(lVar2 + 0x24)) & 1) != 0) {
    func_0x00010bd2dce0();
    func_0x00010bd1b8b8();
    FUN_10bd023ac();
  }
  FUN_10bce0514(&lStack_48);
  return;
}



/* Entry: 10bd2d094; end: 10bd2d5cf;  */

long ***** FUN_10bd2d094(long *****param_1,long *****param_2)

{
  long ***ppplVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  undefined8 extraout_x8;
  long *****unaff_x21;
  long *****ppppplVar9;
  long lVar10;
  long ****pppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  uint uVar15;
  long *****ppppplVar16;
  long *****ppppplVar17;
  undefined1 auStack_2c0 [24];
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  long ****pppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  long ***appplStack_1c8 [8];
  long ***appplStack_188 [2];
  undefined8 uStack_178;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long ***ppplStack_b8;
  long ***appplStack_b0 [3];
  long ***appplStack_98 [3];
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  long ****pppplStack_68;
  
  if (param_1 == param_2) {
    ppppplVar13 = param_1;
    ppppplVar7 = param_2;
    func_0x00010bd2dce0(param_1,param_2,&UNK_10f836129);
    func_0x00010ae6ab0c();
    func_0x00010802bcb8();
    ppppplVar5 = (long *****)&UNK_10f836135;
    FUN_10bdb2a88(&pppplStack_80,&UNK_10f836135,0x33,ppppplVar13,ppppplVar7);
  }
  else {
    ppppplVar13 = param_1;
    FUN_10bd2b4f4();
    pppplStack_68 = (long ****)ppppplVar13;
    func_0x00010bd2dd3c();
    ppppplVar5 = &pppplStack_80;
    pppplStack_80 = (long ****)ppppplVar13;
    FUN_10bd208b4(ppppplVar5,&pppplStack_68,&UNK_10f83616e);
    if (ppppplVar5 == (long *****)0x0) {
      FUN_10bd2d5d0();
      func_0x00010bd2ddb0();
      ppppplVar16 = (long *****)unaff_x21[0xb];
      ppppplVar13 = param_1;
      func_0x000107c3a8e8();
      ppppplVar17 = (long *****)param_1[0xb];
      ppppplVar7 = ppppplVar13;
      func_0x000107c3a8e8();
      pppplStack_80 = (long ****)0x0;
      ppplStack_78 = (long ***)0x0;
      uStack_70 = 0;
      ppppplVar5 = unaff_x21;
      FUN_10bd1d54c();
      ppplStack_b8 = ppplStack_78;
      uStack_bc = (uint)((ppppplVar16 == ppppplVar13) != (ppppplVar17 != ppppplVar7));
      pppplVar8 = pppplStack_80;
      do {
        uVar2 = pppplVar8 == (long ****)ppplStack_b8;
        if ((bool)uVar2) {
          func_0x00010bd2dd90();
          if (*ppppplVar5 != ppppplVar5[1]) {
            func_0x00010bd1b8b8(param_1,param_2);
            ppppplVar5 = param_1;
            func_0x00010bd2dd90();
            FUN_10bd36884(param_1,ppppplVar5);
          }
          ppppplVar5 = &pppplStack_80;
          FUN_10bce0514(ppppplVar5);
          return ppppplVar5;
        }
        ppppplVar13 = (long *****)*pppplVar8;
        if ((*(byte *)((long)ppppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd78();
          switch((int)ppppplVar5) {
          case 1:
            func_0x00010bd2dcc0();
            FUN_10bd1d784();
            func_0x00010bd2dcd0();
            FUN_10bd1d830();
            break;
          case 2:
            func_0x00010bd2dcc0();
            FUN_10bd1daa0();
            func_0x00010bd2dcd0();
            FUN_10bd1db4c();
            break;
          case 3:
            func_0x00010bd2dcc0();
            FUN_10bd1ddc4();
            func_0x00010bd2dcd0();
            FUN_10bd1de70();
            break;
          case 4:
            func_0x00010bd2dcc0();
            FUN_10bd1e0e0();
            func_0x00010bd2dcd0();
            FUN_10bd1e18c();
            break;
          case 5:
            func_0x00010bd2dcc0();
            FUN_10bd1e748();
            func_0x00010bd2dcd0();
            FUN_10bd1e7f4();
            break;
          case 6:
            func_0x00010bd2dcc0();
            FUN_10bd1e404();
            func_0x00010bd2dcd0();
            FUN_10bd1e4b0();
            break;
          case 7:
            func_0x00010bd2dcc0();
            FUN_10bd1ea8c();
            func_0x00010bd2dcd0();
            FUN_10bd1eb3c();
            break;
          case 8:
            func_0x00010bd2dcc0();
            FUN_10bd1f9dc();
            func_0x00010bd2dcd0();
            FUN_10bd1fac4();
            break;
          case 9:
            func_0x00010bd2dcc0(appplStack_b0);
            FUN_10bd1edd0();
            func_0x00010bd2dcd0();
            FUN_10bd1f144();
            ppppplVar5 = (long *****)appplStack_b0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            break;
          case 10:
            func_0x00010bd2dcc0();
            func_0x00010bd2dda8();
            if (unaff_x21 == param_1) {
              FUN_10bd2b4f4();
            }
            func_0x00010bd2dcd0();
            FUN_10bd2002c();
            FUN_10bd2b2ec();
          }
        }
        else {
          if ((uStack_bc != 0) &&
             (func_0x00010b91c030(), ppppplVar5 = ppppplVar13, (int)ppppplVar13 != 0)) {
            func_0x00010bd2dcc0();
            func_0x00010bd21278();
            ppppplVar5 = ppppplVar13;
            func_0x00010bd2dcd0();
            func_0x00010bd2123c();
            if (((((ulong)ppppplVar5[1] & 1) == 0) || (func_0x00010bd2dcec(), !(bool)uVar2)) &&
               ((((ulong)ppppplVar13[1] & 1) == 0 || (func_0x00010bd2dcec(), !(bool)uVar2)))) {
              (*(code *)(*ppppplVar5)[6])();
              goto LAB_10bd2d464;
            }
          }
          func_0x00010bd2dcc0();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar5;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd78();
            switch((int)ppppplVar5) {
            case 1:
              func_0x00010bd2dcac();
              func_0x00010bd1d948();
              func_0x00010bd2dcd0();
              FUN_10bd1d9d8();
              break;
            case 2:
              func_0x00010bd2dcac();
              func_0x00010bd1dc68();
              func_0x00010bd2dcd0();
              FUN_10bd1dcf8();
              break;
            case 3:
              func_0x00010bd2dcac();
              func_0x00010bd1df88();
              func_0x00010bd2dcd0();
              FUN_10bd1e018();
              break;
            case 4:
              func_0x00010bd2dcac();
              func_0x00010bd1e2a8();
              func_0x00010bd2dcd0();
              FUN_10bd1e338();
              break;
            case 5:
              func_0x00010bd2dcac();
              FUN_10bd1e91c();
              func_0x00010bd2dcd0();
              FUN_10bd1e9ac();
              break;
            case 6:
              func_0x00010bd2dcac();
              FUN_10bd1e5d8();
              func_0x00010bd2dcd0();
              FUN_10bd1e668();
              break;
            case 7:
              func_0x00010bd2dcac();
              func_0x00010bd1ec54();
              func_0x00010bd2dcd0();
              FUN_10bd1ed08();
              break;
            case 8:
              func_0x00010bd2dcac();
              FUN_10bd1fc24();
              func_0x00010bd2dcd0();
              FUN_10bd1fce0();
              break;
            case 9:
              func_0x00010bd2dcac(appplStack_98);
              FUN_10bd1f74c();
              func_0x00010bd2dcd0();
              FUN_10bd1f8c4();
              ppppplVar5 = (long *****)appplStack_98;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              break;
            case 10:
              func_0x00010bd2dcac();
              func_0x00010bd203bc();
              if (unaff_x21 == param_1) {
                FUN_10bd2b4f4();
              }
              func_0x00010bd2dcd0();
              FUN_10bd20468();
              FUN_10bd2b2ec();
            }
          }
        }
LAB_10bd2d464:
        pppplVar8 = pppplVar8 + 1;
      } while( true );
    }
    pppplVar8 = (long ****)(long)*(char *)((long)ppppplVar5 + 0x17);
    ppppplVar13 = ppppplVar5;
    if ((long)pppplVar8 < 0) {
      ppppplVar13 = (long *****)*ppppplVar5;
      pppplVar8 = ppppplVar5[1];
    }
    FUN_10bdb2a08(&pppplStack_80,&UNK_10f836135,0x36,ppppplVar13,pppplVar8);
    param_1 = &pppplStack_80;
    func_0x00010b4c31b4(param_1,&UNK_10f836190);
    func_0x00010ae6bd08();
    func_0x00010bd2dd6c(pppplStack_68[1]);
    ppppplVar5 = param_1;
    func_0x00010ae6bd08(param_1,&UNK_10f40acbc,4);
    func_0x00010bd2dd3c();
    func_0x00010bd2dd6c(ppppplVar5[1]);
    ppppplVar5 = (long *****)&DAT_10f684600;
    func_0x00010b4c3214(param_1);
  }
  ppppplVar13 = &pppplStack_80;
  func_0x00010ae6c700();
  pcStack_c8 = FUN_10bd2d5d0;
  pppplStack_e0 = (long ****)param_1;
  pppplStack_d8 = (long ****)param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10bd2b4f4();
  if (ppppplVar5 != (long *****)0x0) {
    return ppppplVar5;
  }
  func_0x00010bd2dd3c();
  if (ppppplVar13 == (long *****)0x0) {
    func_0x000107c278b8(auStack_f8,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_f8,ppppplVar13[1]);
  }
  ppppplVar13 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_108,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_108,&UNK_10f8361cc);
  func_0x00010ae6c448();
  pppplVar8 = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar5 = (long *****)appplStack_108;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar7 = &pppplStack_230;
  func_0x00010bd2dd18();
  uStack_178 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar15 = *(uint *)((long)unaff_x21 + 4);
  for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
      lVar10 = lVar10 + 0x58) {
    ppppplVar13 = (long *****)((long)unaff_x21[7] + lVar10);
    uVar2 = *(int *)(ppppplVar13[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar5 == 0) {
        ppppplVar16 = (long *****)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_230 = (long ****)0x0;
  pppplStack_228 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  if (*(char *)((long)unaff_x21[4] + 0x53) == '\x01') {
    pppplVar11 = unaff_x21[7];
    ppppplVar5 = &pppplStack_220;
    pppplVar8 = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_220 = (long ****)(ppppplVar5 + (long)pppplVar8);
    pppplStack_228 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = pppplVar11 + 0xb;
    ppppplVar7 = ppppplVar13;
    ppppplVar9 = ppppplVar5;
    pppplStack_230 = (long ****)ppppplVar5;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar9 = (long *****)pppplStack_230;
    ppppplVar17 = (long *****)pppplStack_228;
  }
  while( true ) {
    ppppplVar16 = (long *****)(ulong)(ppppplVar9 == ppppplVar17);
    uVar2 = 1;
    ppppplVar13 = ppppplVar7;
    if (ppppplVar9 == ppppplVar17) break;
    ppppplVar12 = (long *****)*ppppplVar9;
    ppppplVar5 = ppppplVar12;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar12;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar12 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar7 = ppppplVar12;
          ppppplVar13 = ppppplVar12;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar13 = ppppplVar12;
          FUN_10bd1d250();
          uVar15 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar15,
                ppppplVar7 = ppppplVar13, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar13 = ppppplVar12;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar15 = uVar15 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar12;
        FUN_10bcee28c();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar13 = ppppplVar12;
          func_0x00010bd21278();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_1c8);
          func_0x00010bd2dd9c(&ppplStack_218);
          pppplVar8 = appplStack_1c8;
          FUN_10bd28990(ppppplVar5,pppplVar8);
          ppplStack_218 = (long ***)0x0;
          uStack_210 = 0;
          uStack_208 = 0;
          while (uVar2 = appplStack_1c8[0] == ppplStack_218, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_188;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              ppppplVar16 = (long *****)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar5 = (long *****)appplStack_1c8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar7 = ppppplVar13;
        }
      }
    }
    ppppplVar9 = ppppplVar9 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_178);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar7 = ppppplVar5;
    FUN_10bd2b4f4();
    ppppplVar16 = ppppplVar5;
    FUN_10bd2d5d0();
    uVar15 = *(uint *)((long)ppppplVar7 + 4);
    for (lVar10 = 0; (ulong)(uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar10 != 0;
        lVar10 = lVar10 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar7[7] + lVar10 + 0x48) + 0x30) == 3) &&
         (ppppplVar17 = ppppplVar16, FUN_10bd1d188(ppppplVar16,ppppplVar5),
         ((ulong)ppppplVar17 & 1) == 0)) {
        func_0x000107c27fa4(&ppplStack_2a8,pppplVar8,
                            *(undefined8 *)((long)ppppplVar7[7] + lVar10 + 8));
        func_0x000107c27940(ppppplVar13,&ppplStack_2a8);
        func_0x00010bd2dd5c();
      }
    }
    ppplStack_2a8 = (long ***)0x0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_298 = 0;
    FUN_10bd1d54c(ppppplVar16,ppppplVar5,&ppplStack_2a8);
    ppplVar1 = ppplStack_2a0;
    for (pppplVar11 = (long ****)ppplStack_2a8; pppplVar11 != (long ****)ppplVar1;
        pppplVar11 = pppplVar11 + 1) {
      ppplVar14 = *pppplVar11;
      func_0x00010bd2dd78();
      if ((int)ppppplVar16 == 10) {
        if ((*(byte *)((long)ppplVar14 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,0xffffffff);
          FUN_10bd2d910(ppppplVar16,auStack_2c0,ppppplVar13);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar16;
          for (uVar15 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar15;
              uVar15 = uVar15 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_2c0,pppplVar8,ppplVar14,uVar15);
            FUN_10bd2d910(ppppplVar16,auStack_2c0,ppppplVar13);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    ppppplVar5 = (long *****)&ppplStack_2a8;
    FUN_10bce0514(ppppplVar5);
    return ppppplVar5;
  }
  return ppppplVar16;
}



/* Entry: 10bd2d5d0; end: 10bd2d677;  */

long ** FUN_10bd2d5d0(long param_1,long **param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar12;
  long *****ppppplVar13;
  uint uVar14;
  long **pplVar15;
  long *plVar16;
  undefined1 auStack_200 [24];
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long ****pppplStack_170;
  long ****pppplStack_168;
  long ****pppplStack_160;
  long ***ppplStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  long ***appplStack_108 [8];
  long ***appplStack_c8 [2];
  undefined8 uStack_b8;
  long ***appplStack_48 [2];
  undefined1 auStack_38 [24];
  
  FUN_10bd2b4f4();
  if (param_2 != (long **)0x0) {
    return param_2;
  }
  func_0x00010bd2dd3c();
  if (param_1 == 0) {
    func_0x000107c278b8(auStack_38,&UNK_10f8361c4);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_38,*(undefined8 *)(param_1 + 8));
  }
  ppppplVar11 = (long *****)0x26;
  FUN_10bdb2a00(appplStack_48,&UNK_10f836135,0x26);
  func_0x00010b4d6a18(appplStack_48,&UNK_10f8361cc);
  func_0x00010ae6c448();
  pppplVar10 = (long ****)&UNK_10f8361f7;
  FUN_10bcf57f4();
  ppppplVar5 = (long *****)appplStack_48;
  func_0x00010ae6c700();
  func_0x00010bd2dd5c();
  func_0x00010bd2dcfc();
  ppppplVar7 = &pppplStack_170;
  func_0x00010bd2dd18();
  uStack_b8 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar14 = *(uint *)(unaff_x21 + 4);
  for (lVar12 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar12 != 0;
      lVar12 = lVar12 + 0x58) {
    ppppplVar11 = (long *****)(*(long *)(unaff_x21 + 0x38) + lVar12);
    uVar2 = *(int *)(ppppplVar11[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)ppppplVar5 == 0) {
        pplVar15 = (long **)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_170 = (long ****)0x0;
  pppplStack_168 = (long ****)0x0;
  pppplStack_160 = (long ****)0x0;
  if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x53) == '\x01') {
    lVar12 = *(long *)(unaff_x21 + 0x38);
    ppppplVar5 = &pppplStack_160;
    pppplVar10 = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_160 = (long ****)(ppppplVar5 + (long)pppplVar10);
    pppplStack_168 = (long ****)(ppppplVar5 + 1);
    *ppppplVar5 = (long ****)(lVar12 + 0x58);
    ppppplVar7 = ppppplVar11;
    ppppplVar9 = ppppplVar5;
    pppplStack_170 = (long ****)ppppplVar5;
    ppppplVar8 = (long *****)pppplStack_168;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar9 = (long *****)pppplStack_170;
    ppppplVar8 = (long *****)pppplStack_168;
  }
  while( true ) {
    pplVar15 = (long **)(ulong)(ppppplVar9 == ppppplVar8);
    uVar2 = 1;
    ppppplVar11 = ppppplVar7;
    if (ppppplVar9 == ppppplVar8) break;
    ppppplVar13 = (long *****)*ppppplVar9;
    ppppplVar5 = ppppplVar13;
    func_0x00010b91adc8();
    uVar2 = (int)ppppplVar5 == 10;
    if ((bool)uVar2) {
      ppppplVar6 = ppppplVar13;
      func_0x00010b91c030();
      if ((int)ppppplVar6 == 0) {
LAB_10bd2d7c4:
        ppppplVar5 = ppppplVar6;
        if ((*(byte *)((long)ppppplVar13 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar7 = ppppplVar13;
          ppppplVar11 = ppppplVar13;
          if (((ulong)ppppplVar5 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          ppppplVar11 = ppppplVar13;
          FUN_10bd1d250();
          uVar14 = 0;
          uVar4 = (uint)ppppplVar5;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar14,
                ppppplVar7 = ppppplVar11, !(bool)uVar2) {
            func_0x00010bd2dce0();
            ppppplVar11 = ppppplVar13;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar14 = uVar14 + 1;
            if (((ulong)ppppplVar5 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar13;
        FUN_10bcee28c();
        ppppplVar5 = (long *****)(ppppplVar5[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)ppppplVar5 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          ppppplVar11 = ppppplVar13;
          func_0x00010bd21278();
          if (((ulong)ppppplVar5[1] & 1) != 0) {
            ppppplVar6 = ppppplVar5;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_108);
          func_0x00010bd2dd9c(&ppplStack_158);
          pppplVar10 = appplStack_108;
          FUN_10bd28990(ppppplVar5,pppplVar10);
          ppplStack_158 = (long ***)0x0;
          uStack_150 = 0;
          uStack_148 = 0;
          while (uVar2 = appplStack_108[0] == ppplStack_158, !(bool)uVar2) {
            ppppplVar5 = (long *****)appplStack_c8;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)ppppplVar5 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              pplVar15 = (long **)0x0;
              goto LAB_10bd2d894;
            }
            ppppplVar5 = (long *****)appplStack_108;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar7 = ppppplVar11;
        }
      }
    }
    ppppplVar9 = ppppplVar9 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar7 = ppppplVar5;
    FUN_10bd2b4f4();
    ppppplVar8 = ppppplVar5;
    FUN_10bd2d5d0();
    uVar14 = *(uint *)((long)ppppplVar7 + 4);
    for (lVar12 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar12 != 0;
        lVar12 = lVar12 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar7[7] + lVar12 + 0x48) + 0x30) == 3) &&
         (ppppplVar9 = ppppplVar8, FUN_10bd1d188(ppppplVar8,ppppplVar5),
         ((ulong)ppppplVar9 & 1) == 0)) {
        func_0x000107c27fa4(&plStack_1e8,pppplVar10,
                            *(undefined8 *)((long)ppppplVar7[7] + lVar12 + 8));
        func_0x000107c27940(ppppplVar11,&plStack_1e8);
        func_0x00010bd2dd5c();
      }
    }
    plStack_1e8 = (long *)0x0;
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = 0;
    FUN_10bd1d54c(ppppplVar8,ppppplVar5,&plStack_1e8);
    plVar1 = plStack_1e0;
    for (plVar16 = plStack_1e8; plVar16 != plVar1; plVar16 = plVar16 + 1) {
      lVar12 = *plVar16;
      func_0x00010bd2dd78();
      if ((int)ppppplVar8 == 10) {
        if ((*(byte *)(lVar12 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_200,pppplVar10,lVar12,0xffffffff);
          FUN_10bd2d910(ppppplVar8,auStack_200,ppppplVar11);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar8;
          for (uVar14 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar14;
              uVar14 = uVar14 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_200,pppplVar10,lVar12,uVar14);
            FUN_10bd2d910(ppppplVar8,auStack_200,ppppplVar11);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    pplVar15 = &plStack_1e8;
    FUN_10bce0514(pplVar15);
    return pplVar15;
  }
  return pplVar15;
}



/* Entry: 10bd2d678; end: 10bd2d90f;  */

long ** FUN_10bd2d678(long *****param_1,long ****param_2,long *****param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar9;
  long *****ppppplVar10;
  uint uVar11;
  long **pplVar12;
  long *plVar13;
  undefined1 auStack_1b0 [24];
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ***ppplStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  long ***appplStack_b8 [8];
  long ***appplStack_78 [2];
  undefined8 uStack_68;
  
  ppppplVar6 = &pppplStack_120;
  func_0x00010bd2dd18();
  uStack_68 = extraout_x8;
  FUN_10bd2b4f4();
  func_0x00010bd2ddb0();
  uVar11 = *(uint *)(unaff_x21 + 4);
  for (lVar9 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
      lVar9 = lVar9 + 0x58) {
    param_3 = (long *****)(*(long *)(unaff_x21 + 0x38) + lVar9);
    uVar2 = *(int *)(param_3[9] + 6) == 3;
    if ((bool)uVar2) {
      func_0x00010bd2dce0();
      FUN_10bd1d188();
      if ((int)param_1 == 0) {
        pplVar12 = (long **)0x0;
        goto LAB_10bd2d898;
      }
    }
  }
  pppplStack_120 = (long ****)0x0;
  pppplStack_118 = (long ****)0x0;
  pppplStack_110 = (long ****)0x0;
  if (*(char *)(*(long *)(unaff_x21 + 0x20) + 0x53) == '\x01') {
    lVar9 = *(long *)(unaff_x21 + 0x38);
    param_1 = &pppplStack_110;
    param_2 = (long ****)0x1;
    FUN_10bce02dc();
    pppplStack_110 = (long ****)(param_1 + (long)param_2);
    pppplStack_118 = (long ****)(param_1 + 1);
    *param_1 = (long ****)(lVar9 + 0x58);
    ppppplVar6 = param_3;
    ppppplVar8 = param_1;
    pppplStack_120 = (long ****)param_1;
    ppppplVar7 = (long *****)pppplStack_118;
  }
  else {
    func_0x00010bd2dce0();
    FUN_10bd1d54c();
    ppppplVar8 = (long *****)pppplStack_120;
    ppppplVar7 = (long *****)pppplStack_118;
  }
  while( true ) {
    pplVar12 = (long **)(ulong)(ppppplVar8 == ppppplVar7);
    uVar2 = 1;
    param_3 = ppppplVar6;
    if (ppppplVar8 == ppppplVar7) break;
    ppppplVar10 = (long *****)*ppppplVar8;
    param_1 = ppppplVar10;
    func_0x00010b91adc8();
    uVar2 = (int)param_1 == 10;
    if ((bool)uVar2) {
      ppppplVar5 = ppppplVar10;
      func_0x00010b91c030();
      if ((int)ppppplVar5 == 0) {
LAB_10bd2d7c4:
        param_1 = ppppplVar5;
        if ((*(byte *)((long)ppppplVar10 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dce0();
          func_0x00010bd2dda8();
          func_0x000107c30328();
          ppppplVar6 = ppppplVar10;
          param_3 = ppppplVar10;
          if (((ulong)param_1 & 1) == 0) break;
        }
        else {
          func_0x00010bd2dce0();
          param_3 = ppppplVar10;
          FUN_10bd1d250();
          uVar11 = 0;
          uVar4 = (uint)param_1;
          while (uVar2 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar11,
                ppppplVar6 = param_3, !(bool)uVar2) {
            func_0x00010bd2dce0();
            param_3 = ppppplVar10;
            func_0x00010bd203bc();
            func_0x000107c30328();
            uVar11 = uVar11 + 1;
            if (((ulong)param_1 & 1) == 0) goto LAB_10bd2d890;
          }
        }
      }
      else {
        ppppplVar5 = ppppplVar10;
        FUN_10bcee28c();
        param_1 = (long *****)(ppppplVar5[7] + 0xb);
        func_0x00010b91adc8();
        uVar3 = (int)param_1 == 10;
        if ((bool)uVar3) {
          func_0x00010bd2dce0();
          param_3 = ppppplVar10;
          func_0x00010bd21278();
          if (((ulong)param_1[1] & 1) != 0) {
            ppppplVar5 = param_1;
            func_0x00010bd2dcec();
            uVar2 = 1;
            if ((bool)uVar3) goto LAB_10bd2d7c4;
          }
          func_0x00010bd2dd9c(appplStack_b8);
          func_0x00010bd2dd9c(&ppplStack_108);
          param_2 = appplStack_b8;
          FUN_10bd28990(param_1,param_2);
          ppplStack_108 = (long ***)0x0;
          uStack_100 = 0;
          uStack_f8 = 0;
          while (uVar2 = appplStack_b8[0] == ppplStack_108, !(bool)uVar2) {
            param_1 = (long *****)appplStack_78;
            FUN_10bd29438();
            func_0x000107c30328();
            if (((ulong)param_1 & 1) == 0) {
              func_0x00010bd2dd88();
              func_0x00010bd2dd80();
LAB_10bd2d890:
              pplVar12 = (long **)0x0;
              goto LAB_10bd2d894;
            }
            param_1 = (long *****)appplStack_b8;
            FUN_10bd21e18();
          }
          func_0x00010bd2dd88();
          func_0x00010bd2dd80();
          ppppplVar6 = param_3;
        }
      }
    }
    ppppplVar8 = ppppplVar8 + 1;
  }
LAB_10bd2d894:
  func_0x00010bd2dd44();
LAB_10bd2d898:
  func_0x00010bd2dd04(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010bd2dd44();
    func_0x00010bd2dcfc();
    ppppplVar6 = param_1;
    FUN_10bd2b4f4();
    ppppplVar7 = param_1;
    FUN_10bd2d5d0();
    uVar11 = *(uint *)((long)ppppplVar6 + 4);
    for (lVar9 = 0; (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar9 != 0;
        lVar9 = lVar9 + 0x58) {
      if ((*(int *)(*(long *)((long)ppppplVar6[7] + lVar9 + 0x48) + 0x30) == 3) &&
         (ppppplVar8 = ppppplVar7, FUN_10bd1d188(ppppplVar7,param_1), ((ulong)ppppplVar8 & 1) == 0))
      {
        func_0x000107c27fa4(&plStack_198,param_2,*(undefined8 *)((long)ppppplVar6[7] + lVar9 + 8));
        func_0x000107c27940(param_3,&plStack_198);
        func_0x00010bd2dd5c();
      }
    }
    plStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    FUN_10bd1d54c(ppppplVar7,param_1,&plStack_198);
    plVar1 = plStack_190;
    for (plVar13 = plStack_198; plVar13 != plVar1; plVar13 = plVar13 + 1) {
      lVar9 = *plVar13;
      func_0x00010bd2dd78();
      if ((int)ppppplVar7 == 10) {
        if ((*(byte *)(lVar9 + 1) >> 5 & 1) == 0) {
          func_0x00010bd2dd4c();
          func_0x00010bd2dda8();
          FUN_10bd2db00(auStack_1b0,param_2,lVar9,0xffffffff);
          FUN_10bd2d910(ppppplVar7,auStack_1b0,param_3);
          func_0x00010bd2dd34();
        }
        else {
          func_0x00010bd2dd4c();
          FUN_10bd1d250();
          uVar4 = (uint)ppppplVar7;
          for (uVar11 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar11;
              uVar11 = uVar11 + 1) {
            func_0x00010bd2dd4c();
            func_0x00010bd203bc();
            FUN_10bd2db00(auStack_1b0,param_2,lVar9,uVar11);
            FUN_10bd2d910(ppppplVar7,auStack_1b0,param_3);
            func_0x00010bd2dd34();
          }
        }
      }
    }
    pplVar12 = &plStack_198;
    FUN_10bce0514(pplVar12);
    return pplVar12;
  }
  return pplVar12;
}



/* Entry: 10bd2d910; end: 10bd2daff;  */

void FUN_10bd2d910(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_1;
  FUN_10bd2b4f4();
  uVar4 = param_1;
  FUN_10bd2d5d0();
  uVar6 = *(uint *)(uVar3 + 4);
  for (lVar7 = 0; (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar7 != 0;
      lVar7 = lVar7 + 0x58) {
    if ((*(int *)(*(long *)(*(long *)(uVar3 + 0x38) + lVar7 + 0x48) + 0x30) == 3) &&
       (uVar5 = uVar4, FUN_10bd1d188(uVar4,param_1), (uVar5 & 1) == 0)) {
      func_0x000107c27fa4(&plStack_78,param_2,*(undefined8 *)(*(long *)(uVar3 + 0x38) + lVar7 + 8));
      func_0x000107c27940(param_3,&plStack_78);
      func_0x00010bd2dd5c();
    }
  }
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_10bd1d54c(uVar4,param_1,&plStack_78);
  plVar1 = plStack_70;
  for (plVar8 = plStack_78; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar7 = *plVar8;
    func_0x00010bd2dd78();
    if ((int)uVar4 == 10) {
      if ((*(byte *)(lVar7 + 1) >> 5 & 1) == 0) {
        func_0x00010bd2dd4c();
        func_0x00010bd2dda8();
        FUN_10bd2db00(auStack_90,param_2,lVar7,0xffffffff);
        FUN_10bd2d910(uVar4,auStack_90,param_3);
        func_0x00010bd2dd34();
      }
      else {
        func_0x00010bd2dd4c();
        FUN_10bd1d250();
        uVar2 = (uint)uVar4;
        for (uVar6 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
          func_0x00010bd2dd4c();
          func_0x00010bd203bc();
          FUN_10bd2db00(auStack_90,param_2,lVar7,uVar6);
          FUN_10bd2d910(uVar4,auStack_90,param_3);
          func_0x00010bd2dd34();
        }
      }
    }
  }
  FUN_10bce0514(&plStack_78);
  return;
}



/* Entry: 10bd2db00; end: 10bd2dbf7;  */

/* WARNING: Removing unreachable block (ram,0x00010bd1c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c870) */

ulong * FUN_10bd2db00(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar17;
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
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  uint extraout_w11;
  ulong *puVar18;
  int iVar19;
  ulong *puVar20;
  ulong *unaff_x24;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 ***pppuVar25;
  code *pcVar26;
  ulong uVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_190 [2];
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  ulong uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong auStack_f0 [2];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [24];
  ulong auStack_68 [6];
  undefined8 uStack_38;
  
  func_0x00010bd2dd18();
  uStack_38 = extraout_x8_09;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
    func_0x00010bd2dd64();
  }
  else {
    func_0x00010bd2dd2c();
    func_0x00010bd2dd64();
    func_0x00010bd2dd2c();
  }
  uVar7 = (int)param_4 == -1;
  if (!(bool)uVar7) {
    func_0x00010bd2dd2c();
    func_0x0001089ac660(auStack_68,param_4);
    param_1 = auStack_68;
    func_0x0001089ddc68(auStack_80);
    func_0x00010bd2dd64();
    func_0x00010bd2dd34();
    func_0x00010bd2dd2c();
  }
  puVar18 = (ulong *)&DAT_10f62a9de;
  func_0x00010bd2dd2c();
  func_0x00010bd2dd04(uStack_38);
  if ((bool)uVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bd2dd34();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  __Unwind_Resume();
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10bd2dbf8;
  uVar15 = puVar18[1];
  if ((uVar15 & 1) != 0) {
    uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
  }
  puVar8 = puVar18;
  if ((uVar15 == 0) && (uVar15 = param_1[1], puVar8 = param_1, param_1 = puVar18, (uVar15 & 1) != 0)
     ) {
    uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
  }
  puVar12 = puVar8;
  (**(code **)(*puVar8 + 0x10))(puVar8,uVar15);
  puVar10 = param_1;
  (**(code **)(*puVar12 + 0x20))();
  (**(code **)(*param_1 + 0x18))(param_1);
  func_0x00010bd2dce0(*(undefined8 *)(*param_1 + 0x20));
  (*extraout_x8_10)();
  func_0x00010bd2dd3c();
  puVar18 = (ulong *)&UNK_10f835085;
  puVar20 = (ulong *)&UNK_10f8350c6;
  puVar9 = puVar10;
  puVar11 = puVar12;
  while( true ) {
    if (puVar11 == puVar8) {
      return puVar9;
    }
    uVar15 = puVar11[1];
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    uVar22 = puVar8[1];
    if ((uVar22 & 1) != 0) {
      uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    FUN_10bd2b4f4(puVar11);
    puVar9 = puVar10;
    FUN_10bd1b754(puVar12,puVar10,&UNK_10f835085);
    if (puVar12 != (ulong *)0x0) break;
    FUN_10bd2b4f4(puVar8);
    FUN_10bd1b754(puVar9,puVar10,&UNK_10f8350c6);
    if (puVar9 != (ulong *)0x0) {
      func_0x00010bd25474();
      func_0x00010bd25098();
      FUN_10bdb2a08();
      puVar11 = &uStack_110;
      func_0x00010b4c3038(puVar11,&UNK_10f8350e3);
      puVar9 = puVar8;
      FUN_10bd2b4f4();
      func_0x00010bd2520c(puVar9[1]);
      FUN_10bd1b764(puVar11);
      func_0x00010bd2520c(*(undefined8 *)(*puVar10 + 8));
      func_0x00010bd1b790(puVar11);
      goto LAB_10bd1c8e8;
    }
    if (uVar15 == uVar22) {
      lVar21 = 0;
      uVar15 = 0;
      func_0x00010bd25744(*(undefined4 *)((long)puVar10 + 0x24));
      unaff_x24 = (ulong *)&UNK_10e60b7fc;
      goto LAB_10bd1bfb8;
    }
    puVar9 = puVar11;
    if (uVar15 != 0) {
      uVar22 = uVar15;
      puVar9 = puVar8;
      puVar8 = puVar11;
    }
    puVar11 = puVar8;
    puVar8 = puVar11;
    (**(code **)(*puVar11 + 0x10))(puVar11,uVar22);
    FUN_10bd2b2ec();
    puVar12 = puVar11;
    FUN_10bd2b348(puVar9);
    unaff_x24 = puVar11;
  }
  func_0x00010bd25474();
  func_0x00010bd25098();
  FUN_10bdb2a08();
  puVar8 = &uStack_110;
  FUN_10bce1854(puVar8,&UNK_10f8350a2);
  puVar9 = puVar11;
  FUN_10bd2b4f4();
  func_0x00010bd25600(puVar9[1]);
  FUN_10bd1b764(puVar8);
  func_0x00010bd25600(*(undefined8 *)(*puVar10 + 8));
  func_0x00010bd1b790(puVar8);
  goto LAB_10bd1c8e8;
LAB_10bd1bfb8:
  uVar22 = (ulong)(int)puVar10[0xc];
  uVar5 = uVar22 <= uVar15;
  uVar7 = uVar15 == uVar22;
  if (!(bool)uVar7 && (long)uVar22 <= (long)uVar15) goto LAB_10bd1c1ec;
  lVar23 = *(long *)(*puVar10 + 0x38);
  puVar9 = (ulong *)(lVar23 + lVar21);
  FUN_10bcddbd4();
  if (puVar9 == (ulong *)0x0) {
    puVar9 = puVar10 + 1;
    FUN_10bd1d218(puVar9,lVar23 + lVar21);
    if (((ulong)puVar9 & 1) == 0) {
      bVar3 = *(byte *)(lVar23 + lVar21 + 1);
      puVar18 = (ulong *)(ulong)bVar3;
      func_0x00010bd252b0();
      if ((bVar3 >> 5 & 1) != 0) {
        func_0x00010bd2518c();
        if (!(bool)uVar5 || (bool)uVar7) {
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
        puVar10 = puVar9;
        goto LAB_10bd1c8e8;
      }
      if ((int)puVar9 == 10) {
code_r0x00010bd1c000:
        func_0x00010bd24c60();
        func_0x00010bd24bc8();
        uVar22 = *puVar18;
        *puVar18 = *puVar9;
        *puVar9 = uVar22;
      }
      else {
        func_0x00010bd252b0();
        if ((int)puVar9 == 9) {
          puVar20 = (ulong *)(lVar23 + lVar21);
          FUN_10bd1bdfc();
          if ((int)puVar20 == 1) {
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uStack_108 = puVar18[1];
            uStack_110 = *puVar18;
            *puVar18 = 0;
            puVar18[1] = 0;
            func_0x00010b4d1c44(puVar18,puVar20);
            func_0x00010b4d1c44(puVar20,&uStack_110);
            puVar9 = &uStack_110;
            func_0x000107c34fe8();
          }
          else {
            puVar9 = puVar10 + 1;
            func_0x00010bd21e40(puVar9,lVar23 + lVar21);
            puVar20 = puVar9;
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            if ((int)puVar9 == 0) {
              uVar22 = *puVar20;
              *puVar20 = *puVar18;
              *puVar18 = uVar22;
              puVar9 = puVar20;
            }
            else {
              puVar9 = (ulong *)(lVar23 + lVar21);
              func_0x00010b91ad64();
              uStack_108 = puVar18[1];
              uStack_110 = *puVar18;
              uStack_100 = puVar18[2];
              uVar27 = puVar20[1];
              uVar22 = *puVar20;
              puVar18[2] = puVar20[2];
              puVar18[1] = uVar27;
              *puVar18 = uVar22;
              puVar20[2] = uStack_100;
              puVar20[1] = uStack_108;
              *puVar20 = uStack_110;
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
            uVar22 = *puVar18;
            *(int *)puVar18 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar22;
            break;
          case 2:
          case 4:
            goto code_r0x00010bd1c000;
          case 5:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *puVar18 = *puVar9;
            *puVar9 = uVar22;
            break;
          case 6:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *(int *)puVar18 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar22;
            break;
          case 7:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *(char *)puVar18 = (char)*puVar9;
            *(char *)puVar9 = (char)uVar22;
            break;
          default:
            func_0x00010bd25098();
            FUN_10bdb2a00();
            func_0x00010bd25434();
            func_0x00010bd252b0();
            func_0x00010bd252c0();
            puVar10 = puVar9;
            goto LAB_10bd1c8e8;
          }
        }
      }
    }
  }
  uVar15 = uVar15 + 1;
  lVar21 = lVar21 + 0x58;
  goto LAB_10bd1bfb8;
LAB_10bd1c1ec:
  if (*(int *)((long)puVar10 + 0x44) != -1) {
    func_0x00010bd25744();
  }
  uVar15 = 0;
  uStack_148 = (ulong)(*(uint *)(*puVar10 + 0x7c) &
                      ((int)*(uint *)(*puVar10 + 0x7c) >> 0x1f ^ 0xffffffffU)) * 0x38;
  while( true ) {
    uVar5 = uVar15 <= uStack_148;
    uVar7 = uStack_148 == uVar15;
    if ((bool)uVar7) break;
    unaff_x24 = (ulong *)*puVar10;
    func_0x00010bd2537c(*(undefined4 *)((long)puVar10 + 0x2c));
    uVar22 = (ulong)(uint)(extraout_w8 + extraout_w9 * 4);
    uVar17 = *(uint *)((long)puVar11 + uVar22);
    puVar18 = (ulong *)(ulong)uVar17;
    uVar2 = *(uint *)((long)puVar8 + uVar22);
    puVar20 = (ulong *)(ulong)uVar2;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    if (uVar17 != 0) {
      FUN_10bcee2d0();
      puVar9 = unaff_x24;
      puStack_128 = puVar10;
      puStack_120 = puVar11;
      puStack_118 = unaff_x24;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar7) {
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
      puVar10 = auStack_f0;
      func_0x00010ae6c700();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
      func_0x00010bd24f74();
      goto LAB_10bd1c8e8;
    }
    unaff_x24 = (ulong *)0x0;
    if (uVar2 != 0) {
      puVar12 = (ulong *)*puVar10;
      FUN_10bcee2d0(puVar12,puVar20);
      puVar9 = puVar12;
      puStack_140 = puVar10;
      puStack_138 = puVar8;
      puStack_130 = puVar12;
      puStack_128 = puVar10;
      puStack_120 = puVar11;
      puStack_118 = puVar12;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b80e)[extraout_x8_02] * 4 + 0x10bd1c390))();
        return puVar9;
      }
      func_0x00010bd24ed0();
      func_0x00010bd2505c();
      func_0x00010b91adc8(puVar12);
      func_0x00010bd252c0();
      goto LAB_10bd1c8b0;
    }
    func_0x00010bd2537c(*(undefined4 *)((long)puVar10 + 0x2c));
    *(undefined4 *)((long)puVar11 + (ulong)(uint)(extraout_w8_00 + extraout_w9_00 * 4)) = 0;
    *(undefined4 *)
     ((long)puVar8 + (ulong)(uint)(*(int *)((long)puVar10 + 0x2c) + extraout_w9_00 * 4)) = 0;
    puVar9 = &uStack_108;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar15 = uVar15 + 0x38;
  }
  puVar18 = (ulong *)(ulong)(uint)puVar10[4];
  if ((uint)puVar10[4] != 0xffffffff) {
    lVar23 = 0;
    iVar19 = 0;
    for (lVar21 = 0; lVar21 < *(int *)(*puVar10 + 4); lVar21 = lVar21 + 1) {
      puVar9 = (ulong *)(*(long *)(*puVar10 + 0x38) + lVar23);
      if (((*(byte *)((long)puVar9 + 1) >> 5 & 1) == 0) && (FUN_10bcddbd4(), puVar9 == (ulong *)0x0)
         ) {
        iVar19 = iVar19 + 1;
      }
      lVar23 = lVar23 + 0x58;
    }
    uVar17 = (iVar19 + 0x1f) / 0x20;
    if ((uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10 != 0);
    }
  }
  puVar20 = (ulong *)(ulong)(uint)puVar10[8];
  if ((uint)puVar10[8] == 0xffffffff) {
LAB_10bd1c6e4:
    uVar17 = (uint)puVar10[5];
    if (uVar17 != 0xffffffff) {
      puVar9 = (ulong *)((long)puVar11 + (ulong)uVar17);
      func_0x00010b4c0e68(puVar9,(long)puVar8 + (ulong)uVar17);
    }
    return puVar9;
  }
  lVar23 = 0;
  lVar21 = 0;
  unaff_x24 = (ulong *)0x0;
  while( true ) {
    iVar19 = (int)unaff_x24;
    if (*(int *)(*puVar10 + 4) <= lVar21) break;
    lVar24 = *(long *)(*puVar10 + 0x38);
    puVar18 = (ulong *)(lVar24 + lVar23);
    if ((((*puVar18 & 0x2800) == 0) && (func_0x00010bd25198(), puVar9 == (ulong *)0x0)) &&
       (*(int *)(*(long *)(lVar24 + lVar23 + 0x38) + 0x80) == 0)) {
      puVar9 = puVar10 + 1;
      func_0x00010bd21e40(puVar9,puVar18);
      unaff_x24 = (ulong *)(ulong)(uint)(iVar19 + (int)puVar9);
    }
    lVar21 = lVar21 + 1;
    lVar23 = lVar23 + 0x58;
  }
  if (iVar19 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (iVar19 + 0x20) / 0x20;
  }
  if (((*(uint *)((long)puVar8 + (long)puVar20) ^ *(uint *)((long)puVar11 + (long)puVar20)) & 1) ==
      0) {
    if ((uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10_00 != 0);
    }
    goto LAB_10bd1c6e4;
  }
  func_0x00010ae6a834((*(uint *)((long)puVar11 + (long)puVar20) ^ 0xffffffff) & 1,
                      (*(uint *)((long)puVar8 + (long)puVar20) ^ 0xffffffff) & 1,&UNK_10f83516d);
  func_0x00010802bcb8();
  func_0x00010bd25098();
  FUN_10bdb2a88();
LAB_10bd1c8e8:
  puVar9 = &uStack_110;
  func_0x00010ae6c700();
  puVar12 = auStack_190;
  pcStack_158 = FUN_10bd1c8f0;
  pppuVar25 = &ppuStack_160;
  puStack_180 = puVar18;
  puStack_178 = puVar11;
  puStack_170 = puVar8;
  puStack_168 = puVar10;
  ppuStack_160 = &puStack_90;
  func_0x00010bd24fac();
  puVar11 = puVar9;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar11 != -1) {
    uVar15 = puVar9[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar17 = *(uint *)((long)puVar8 + ((ulong)puVar11 >> 5 & 0x7ffffff) * 4 + (ulong)(uint)uVar15)
             >> (ulong)((uint)puVar11 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar11 == 10) {
    if (puVar8 == (ulong *)puVar9[1]) {
      uVar17 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar17 = (int)puVar11 - 1;
  uVar5 = 7 < uVar17;
  uVar7 = uVar17 == 8;
  switch(uVar17) {
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
    uVar15 = *puVar11;
code_r0x00010bd1c9cc:
    bVar6 = uVar15 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar17 = (uint)(byte)*puVar11;
    goto LAB_10bd1c9d4;
  case 8:
    func_0x00010bd25454();
    if ((int)puVar11 == 1) {
      func_0x00010bd24f2c();
      if (puVar11 == (ulong *)0x0) {
        func_0x00010bd25240();
        FUN_10bd1d218();
        if ((int)puVar11 == 0) {
          func_0x00010bd25240();
          FUN_10bd20d94();
          goto code_r0x00010bd1ca18;
        }
        func_0x00010bd25240();
        FUN_10bd20d94();
        func_0x00010bd25074();
        if ((extraout_w8_01 >> 5 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
      }
      else {
        func_0x00010bd25240();
        FUN_10bd20e50();
code_r0x00010bd1ca18:
        puVar11 = (ulong *)((long)puVar8 + ((ulong)puVar11 & 0xffffffff));
      }
      uVar17 = (uint)puVar11;
      func_0x00010b4d1b04();
      uVar17 = uVar17 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar11 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar15 = (ulong)*(char *)((*puVar11 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar15 < 0) {
        uVar15 = *(ulong *)((*puVar11 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar15 = puVar11[1];
      if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
        uVar15 = (ulong)*(byte *)((long)puVar11 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(auStack_190);
    puVar13 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar26 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    puVar11 = auStack_190;
    while( true ) {
      *(undefined8 *)((long)puVar11 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar11 + -0x48) = unaff_d8;
      *(ulong **)((long)puVar11 + -0x40) = unaff_x24;
      *(ulong **)((long)puVar11 + -0x38) = puVar20;
      *(ulong **)((long)puVar11 + -0x30) = puVar18;
      *(ulong **)((long)puVar11 + -0x28) = puVar9;
      *(ulong **)((long)puVar11 + -0x20) = puVar8;
      *(ulong **)((long)puVar11 + -0x18) = puVar10;
      *(undefined1 ****)((long)puVar11 + -0x10) = pppuVar25;
      *(code **)((long)puVar11 + -8) = pcVar26;
      func_0x00010bd24b74();
      if (!(bool)uVar7) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong **)((long)puVar11 + -0x70) = puVar8;
        *(ulong **)((long)puVar11 + -0x68) = puVar10;
        *(undefined1 **)((long)puVar11 + -0x60) = (undefined1 *)((long)puVar11 + -0x10);
        *(code **)((long)puVar11 + -0x58) = FUN_10bd1cd90;
        func_0x00010bd24f94();
        func_0x00010bd24e7c();
        func_0x00010bd1d3e8();
        if ((int)puVar12 != -1) {
          func_0x00010bd25418();
          *(uint *)(extraout_x9 + (extraout_x10_01 & 0xffffffff) * 4) =
               extraout_w11 | extraout_w8_02;
        }
        return puVar12;
      }
      if ((*(byte *)((long)puVar10 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar18 = (ulong *)(puVar13 + extraout_x8_03);
        uVar1 = *(undefined8 *)((long)puVar11 + -0x10);
        uVar16 = *(undefined8 *)((long)puVar11 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)puVar11 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar11 + -0x58) = uVar16;
        func_0x00010b4bf3a0();
        if (puVar18 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar11 + -0x70) = puVar13;
        *(ulong **)((long)puVar11 + -0x68) = puVar10;
        *(undefined8 *)((long)puVar11 + -0x60) = *(undefined8 *)((long)puVar11 + -0x60);
        *(undefined8 *)((long)puVar11 + -0x58) = *(undefined8 *)((long)puVar11 + -0x58);
        bVar4 = *(char *)((long)puVar18 + 9) != '\0';
        bVar6 = *(char *)((long)puVar18 + 9) == '\x01';
        if (bVar6) {
          func_0x00010b4c5260((char)puVar18[1]);
          puVar8 = puVar18;
          if (!bVar4 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar18;
          }
        }
        else {
          puVar8 = puVar18;
          if ((*(byte *)((long)puVar18 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar18[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar18;
              if ((*(byte *)((long)puVar18 + 10) >> 4 & 1) == 0) {
                pcVar26 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar26 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar26)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar18[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar18;
              func_0x000107c27fa8(puVar8);
            }
            *(byte *)((long)puVar18 + 10) = *(byte *)((long)puVar18 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)puVar10 + 1) >> 5 & 1) != 0) break;
      puVar8 = puVar10;
      FUN_10bcddbd4();
      if (puVar8 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar8 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_05] * 4 + 0x10bd1cba0))();
            return puVar8;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar8 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)puVar10 + 1) >> 4 & 1) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = puVar10[5];
      }
      uVar1 = *(undefined8 *)((long)puVar11 + -0x10);
      uVar16 = *(undefined8 *)((long)puVar11 + -8);
      puVar12 = puVar9;
      puVar14 = puVar13;
      func_0x00010bd25668();
      *(ulong **)((long)puVar11 + -0x80) = puVar18;
      *(ulong **)((long)puVar11 + -0x78) = puVar9;
      *(undefined **)((long)puVar11 + -0x70) = puVar13;
      *(ulong **)((long)puVar11 + -0x68) = puVar10;
      *(undefined8 *)((long)puVar11 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar11 + -0x58) = uVar16;
      uVar5 = *(int *)(uVar15 + 4) != 0;
      uVar7 = *(int *)(uVar15 + 4) == 1;
      if ((!(bool)uVar7) || ((*(byte *)(*(long *)(uVar15 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar18 = puVar12;
        func_0x00010bd252d8();
        if (*(int *)(puVar14 + (extraout_x8_06 & 0xffffffff)) != 0) {
          puVar12 = (ulong *)*puVar12;
          FUN_10bcee2d0();
          uVar15 = *(ulong *)(puVar14 + 8);
          puVar18 = puVar12;
          if ((uVar15 & 1) != 0) {
            func_0x00010bd25400();
            uVar15 = extraout_x8_08;
          }
          if (uVar15 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar18 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar18 = (ulong *)*puVar18;
              if (puVar18 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar18 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar12 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar18 = (ulong *)*puVar12;
                if (puVar18 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar18 = puVar12;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar14 + (extraout_x8_07 & 0xffffffff)) = 0;
        }
        return puVar18;
      }
      func_0x00010bd24e64();
      pppuVar25 = *(undefined1 ****)((long)puVar11 + -0x60);
      pcVar26 = *(code **)((long)puVar11 + -0x58);
      puVar8 = *(ulong **)((long)puVar11 + -0x70);
      puVar10 = *(ulong **)((long)puVar11 + -0x68);
      puVar18 = *(ulong **)((long)puVar11 + -0x80);
      puVar9 = *(ulong **)((long)puVar11 + -0x78);
      puVar11 = (ulong *)((long)puVar11 + -0x50);
      puVar13 = puVar14;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar8 = puVar10;
    if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_04] * 4 + 0x10bd1cb5c))();
      return puVar10;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar8;
  }
  bVar6 = (int)*puVar11 == 0;
code_r0x00010bd1c9d0:
  uVar17 = (uint)!bVar6;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar17 & 1);
}



/* Entry: 10bd2dbf8; end: 10bd2dcab;  */

/* WARNING: Removing unreachable block (ram,0x00010bd1c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010bd1c870) */

ulong * FUN_10bd2dbf8(ulong *param_1,ulong *param_2)

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
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar17;
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
  code *extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  uint extraout_w11;
  ulong *puVar18;
  int iVar19;
  ulong *puVar20;
  ulong *unaff_x24;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined1 **ppuVar25;
  code *pcVar26;
  ulong uVar27;
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
  
  uVar15 = param_2[1];
  if ((uVar15 & 1) != 0) {
    uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
  }
  puVar12 = param_2;
  if ((uVar15 == 0) &&
     (uVar15 = param_1[1], puVar12 = param_1, param_1 = param_2, (uVar15 & 1) != 0)) {
    uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
  }
  puVar11 = puVar12;
  (**(code **)(*puVar12 + 0x10))(puVar12,uVar15);
  puVar9 = param_1;
  (**(code **)(*puVar11 + 0x20))();
  (**(code **)(*param_1 + 0x18))(param_1);
  func_0x00010bd2dce0(*(undefined8 *)(*param_1 + 0x20));
  (*extraout_x8_09)();
  func_0x00010bd2dd3c();
  puVar18 = (ulong *)&UNK_10f835085;
  puVar20 = (ulong *)&UNK_10f8350c6;
  puVar8 = puVar9;
  puVar10 = puVar11;
  while( true ) {
    if (puVar10 == puVar12) {
      return puVar8;
    }
    uVar15 = puVar10[1];
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    uVar22 = puVar12[1];
    if ((uVar22 & 1) != 0) {
      uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
    }
    FUN_10bd2b4f4(puVar10);
    puVar8 = puVar9;
    FUN_10bd1b754(puVar11,puVar9,&UNK_10f835085);
    if (puVar11 != (ulong *)0x0) break;
    FUN_10bd2b4f4(puVar12);
    FUN_10bd1b754(puVar8,puVar9,&UNK_10f8350c6);
    if (puVar8 != (ulong *)0x0) {
      func_0x00010bd25474();
      func_0x00010bd25098();
      FUN_10bdb2a08();
      puVar10 = &uStack_90;
      func_0x00010b4c3038(puVar10,&UNK_10f8350e3);
      puVar8 = puVar12;
      FUN_10bd2b4f4();
      func_0x00010bd2520c(puVar8[1]);
      FUN_10bd1b764(puVar10);
      func_0x00010bd2520c(*(undefined8 *)(*puVar9 + 8));
      func_0x00010bd1b790(puVar10);
      goto LAB_10bd1c8e8;
    }
    if (uVar15 == uVar22) {
      lVar21 = 0;
      uVar15 = 0;
      func_0x00010bd25744(*(undefined4 *)((long)puVar9 + 0x24));
      unaff_x24 = (ulong *)&UNK_10e60b7fc;
      goto LAB_10bd1bfb8;
    }
    puVar8 = puVar10;
    if (uVar15 != 0) {
      uVar22 = uVar15;
      puVar8 = puVar12;
      puVar12 = puVar10;
    }
    puVar10 = puVar12;
    puVar12 = puVar10;
    (**(code **)(*puVar10 + 0x10))(puVar10,uVar22);
    FUN_10bd2b2ec();
    puVar11 = puVar10;
    FUN_10bd2b348(puVar8);
    unaff_x24 = puVar10;
  }
  func_0x00010bd25474();
  func_0x00010bd25098();
  FUN_10bdb2a08();
  puVar12 = &uStack_90;
  FUN_10bce1854(puVar12,&UNK_10f8350a2);
  puVar8 = puVar10;
  FUN_10bd2b4f4();
  func_0x00010bd25600(puVar8[1]);
  FUN_10bd1b764(puVar12);
  func_0x00010bd25600(*(undefined8 *)(*puVar9 + 8));
  func_0x00010bd1b790(puVar12);
  goto LAB_10bd1c8e8;
LAB_10bd1bfb8:
  uVar22 = (ulong)(int)puVar9[0xc];
  uVar5 = uVar22 <= uVar15;
  uVar6 = uVar15 == uVar22;
  if (!(bool)uVar6 && (long)uVar22 <= (long)uVar15) goto LAB_10bd1c1ec;
  lVar23 = *(long *)(*puVar9 + 0x38);
  puVar8 = (ulong *)(lVar23 + lVar21);
  FUN_10bcddbd4();
  if (puVar8 == (ulong *)0x0) {
    puVar8 = puVar9 + 1;
    FUN_10bd1d218(puVar8,lVar23 + lVar21);
    if (((ulong)puVar8 & 1) == 0) {
      bVar3 = *(byte *)(lVar23 + lVar21 + 1);
      puVar18 = (ulong *)(ulong)bVar3;
      func_0x00010bd252b0();
      if ((bVar3 >> 5 & 1) != 0) {
        func_0x00010bd2518c();
        if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b7f2)[extraout_x8_00] * 4 + 0x10bd1c034))();
          return puVar8;
        }
        func_0x00010bd25098();
        FUN_10bdb2a00();
        func_0x00010bd25434();
        func_0x00010bd252b0();
        func_0x00010bd252c0();
        puVar9 = puVar8;
        goto LAB_10bd1c8e8;
      }
      if ((int)puVar8 == 10) {
code_r0x00010bd1c000:
        func_0x00010bd24c60();
        func_0x00010bd24bc8();
        uVar22 = *puVar18;
        *puVar18 = *puVar8;
        *puVar8 = uVar22;
      }
      else {
        func_0x00010bd252b0();
        if ((int)puVar8 == 9) {
          puVar20 = (ulong *)(lVar23 + lVar21);
          FUN_10bd1bdfc();
          if ((int)puVar20 == 1) {
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uStack_88 = puVar18[1];
            uStack_90 = *puVar18;
            *puVar18 = 0;
            puVar18[1] = 0;
            func_0x00010b4d1c44(puVar18,puVar20);
            func_0x00010b4d1c44(puVar20,&uStack_90);
            puVar8 = &uStack_90;
            func_0x000107c34fe8();
          }
          else {
            puVar8 = puVar9 + 1;
            func_0x00010bd21e40(puVar8,lVar23 + lVar21);
            puVar20 = puVar8;
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            if ((int)puVar8 == 0) {
              uVar22 = *puVar20;
              *puVar20 = *puVar18;
              *puVar18 = uVar22;
              puVar8 = puVar20;
            }
            else {
              puVar8 = (ulong *)(lVar23 + lVar21);
              func_0x00010b91ad64();
              uStack_88 = puVar18[1];
              uStack_90 = *puVar18;
              uStack_80 = puVar18[2];
              uVar27 = puVar20[1];
              uVar22 = *puVar20;
              puVar18[2] = puVar20[2];
              puVar18[1] = uVar27;
              *puVar18 = uVar22;
              puVar20[2] = uStack_80;
              puVar20[1] = uStack_88;
              *puVar20 = uStack_90;
            }
          }
        }
        else {
          func_0x00010bd252b0();
          switch((int)puVar8) {
          case 1:
          case 3:
          case 8:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *(int *)puVar18 = (int)*puVar8;
            *(int *)puVar8 = (int)uVar22;
            break;
          case 2:
          case 4:
            goto code_r0x00010bd1c000;
          case 5:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *puVar18 = *puVar8;
            *puVar8 = uVar22;
            break;
          case 6:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *(int *)puVar18 = (int)*puVar8;
            *(int *)puVar8 = (int)uVar22;
            break;
          case 7:
            func_0x00010bd24c60();
            func_0x00010bd24bc8();
            uVar22 = *puVar18;
            *(char *)puVar18 = (char)*puVar8;
            *(char *)puVar8 = (char)uVar22;
            break;
          default:
            func_0x00010bd25098();
            FUN_10bdb2a00();
            func_0x00010bd25434();
            func_0x00010bd252b0();
            func_0x00010bd252c0();
            puVar9 = puVar8;
            goto LAB_10bd1c8e8;
          }
        }
      }
    }
  }
  uVar15 = uVar15 + 1;
  lVar21 = lVar21 + 0x58;
  goto LAB_10bd1bfb8;
LAB_10bd1c1ec:
  if (*(int *)((long)puVar9 + 0x44) != -1) {
    func_0x00010bd25744();
  }
  uVar15 = 0;
  uStack_c8 = (ulong)(*(uint *)(*puVar9 + 0x7c) &
                     ((int)*(uint *)(*puVar9 + 0x7c) >> 0x1f ^ 0xffffffffU)) * 0x38;
  while( true ) {
    uVar5 = uVar15 <= uStack_c8;
    uVar6 = uStack_c8 == uVar15;
    if ((bool)uVar6) break;
    unaff_x24 = (ulong *)*puVar9;
    func_0x00010bd2537c(*(undefined4 *)((long)puVar9 + 0x2c));
    uVar22 = (ulong)(uint)(extraout_w8 + extraout_w9 * 4);
    uVar17 = *(uint *)((long)puVar10 + uVar22);
    puVar18 = (ulong *)(ulong)uVar17;
    uVar2 = *(uint *)((long)puVar12 + uVar22);
    puVar20 = (ulong *)(ulong)uVar2;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (uVar17 != 0) {
      FUN_10bcee2d0();
      puVar8 = unaff_x24;
      puStack_a8 = puVar9;
      puStack_a0 = puVar10;
      puStack_98 = unaff_x24;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b804)[extraout_x8_01] * 4 + 0x10bd1c28c))();
        return puVar8;
      }
      func_0x00010bd24ed0();
      func_0x00010bd2505c();
      func_0x00010bd255d8();
      func_0x00010bd252c0();
LAB_10bd1c8b0:
      puVar9 = auStack_70;
      func_0x00010ae6c700();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      func_0x00010bd24f74();
      goto LAB_10bd1c8e8;
    }
    unaff_x24 = (ulong *)0x0;
    if (uVar2 != 0) {
      puVar11 = (ulong *)*puVar9;
      FUN_10bcee2d0(puVar11,puVar20);
      puVar8 = puVar11;
      puStack_c0 = puVar9;
      puStack_b8 = puVar12;
      puStack_b0 = puVar11;
      puStack_a8 = puVar9;
      puStack_a0 = puVar10;
      puStack_98 = puVar11;
      func_0x00010b91adc8();
      func_0x00010bd2518c();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b80e)[extraout_x8_02] * 4 + 0x10bd1c390))();
        return puVar8;
      }
      func_0x00010bd24ed0();
      func_0x00010bd2505c();
      func_0x00010b91adc8(puVar11);
      func_0x00010bd252c0();
      goto LAB_10bd1c8b0;
    }
    func_0x00010bd2537c(*(undefined4 *)((long)puVar9 + 0x2c));
    *(undefined4 *)((long)puVar10 + (ulong)(uint)(extraout_w8_00 + extraout_w9_00 * 4)) = 0;
    *(undefined4 *)
     ((long)puVar12 + (ulong)(uint)(*(int *)((long)puVar9 + 0x2c) + extraout_w9_00 * 4)) = 0;
    puVar8 = &uStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar15 = uVar15 + 0x38;
  }
  puVar18 = (ulong *)(ulong)(uint)puVar9[4];
  if ((uint)puVar9[4] != 0xffffffff) {
    lVar23 = 0;
    iVar19 = 0;
    for (lVar21 = 0; lVar21 < *(int *)(*puVar9 + 4); lVar21 = lVar21 + 1) {
      puVar8 = (ulong *)(*(long *)(*puVar9 + 0x38) + lVar23);
      if (((*(byte *)((long)puVar8 + 1) >> 5 & 1) == 0) && (FUN_10bcddbd4(), puVar8 == (ulong *)0x0)
         ) {
        iVar19 = iVar19 + 1;
      }
      lVar23 = lVar23 + 0x58;
    }
    uVar17 = (iVar19 + 0x1f) / 0x20;
    if ((uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10 != 0);
    }
  }
  puVar20 = (ulong *)(ulong)(uint)puVar9[8];
  if ((uint)puVar9[8] == 0xffffffff) {
LAB_10bd1c6e4:
    uVar17 = (uint)puVar9[5];
    if (uVar17 != 0xffffffff) {
      puVar8 = (ulong *)((long)puVar10 + (ulong)uVar17);
      func_0x00010b4c0e68(puVar8,(long)puVar12 + (ulong)uVar17);
    }
    return puVar8;
  }
  lVar23 = 0;
  lVar21 = 0;
  unaff_x24 = (ulong *)0x0;
  while( true ) {
    iVar19 = (int)unaff_x24;
    if (*(int *)(*puVar9 + 4) <= lVar21) break;
    lVar24 = *(long *)(*puVar9 + 0x38);
    puVar18 = (ulong *)(lVar24 + lVar23);
    if ((((*puVar18 & 0x2800) == 0) && (func_0x00010bd25198(), puVar8 == (ulong *)0x0)) &&
       (*(int *)(*(long *)(lVar24 + lVar23 + 0x38) + 0x80) == 0)) {
      puVar8 = puVar9 + 1;
      func_0x00010bd21e40(puVar8,puVar18);
      unaff_x24 = (ulong *)(ulong)(uint)(iVar19 + (int)puVar8);
    }
    lVar21 = lVar21 + 1;
    lVar23 = lVar23 + 0x58;
  }
  if (iVar19 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (iVar19 + 0x20) / 0x20;
  }
  if (((*(uint *)((long)puVar12 + (long)puVar20) ^ *(uint *)((long)puVar10 + (long)puVar20)) & 1) ==
      0) {
    if ((uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x00010bd254d4();
      } while (extraout_x10_00 != 0);
    }
    goto LAB_10bd1c6e4;
  }
  func_0x00010ae6a834((*(uint *)((long)puVar10 + (long)puVar20) ^ 0xffffffff) & 1,
                      (*(uint *)((long)puVar12 + (long)puVar20) ^ 0xffffffff) & 1,&UNK_10f83516d);
  func_0x00010802bcb8();
  func_0x00010bd25098();
  FUN_10bdb2a88();
LAB_10bd1c8e8:
  puVar8 = &uStack_90;
  func_0x00010ae6c700();
  puVar11 = auStack_110;
  pcStack_d8 = FUN_10bd1c8f0;
  ppuVar25 = &puStack_e0;
  puStack_100 = puVar18;
  puStack_f8 = puVar10;
  puStack_f0 = puVar12;
  puStack_e8 = puVar9;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bd24fac();
  puVar10 = puVar8;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar10 != -1) {
    uVar15 = puVar8[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar17 = *(uint *)((long)puVar12 + ((ulong)puVar10 >> 5 & 0x7ffffff) * 4 + (ulong)(uint)uVar15)
             >> (ulong)((uint)puVar10 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar10 == 10) {
    if (puVar12 == (ulong *)puVar8[1]) {
      uVar17 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar17 = (int)puVar10 - 1;
  uVar5 = 7 < uVar17;
  uVar6 = uVar17 == 8;
  switch(uVar17) {
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
    uVar15 = *puVar10;
code_r0x00010bd1c9cc:
    bVar7 = uVar15 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar17 = (uint)(byte)*puVar10;
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
        puVar10 = (ulong *)((long)puVar12 + ((ulong)puVar10 & 0xffffffff));
      }
      uVar17 = (uint)puVar10;
      func_0x00010b4d1b04();
      uVar17 = uVar17 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar10 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar15 = (ulong)*(char *)((*puVar10 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar15 < 0) {
        uVar15 = *(ulong *)((*puVar10 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar15 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        uVar15 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(auStack_110);
    puVar13 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar26 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    puVar10 = auStack_110;
    while( true ) {
      *(undefined8 *)((long)puVar10 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar10 + -0x48) = unaff_d8;
      *(ulong **)((long)puVar10 + -0x40) = unaff_x24;
      *(ulong **)((long)puVar10 + -0x38) = puVar20;
      *(ulong **)((long)puVar10 + -0x30) = puVar18;
      *(ulong **)((long)puVar10 + -0x28) = puVar8;
      *(ulong **)((long)puVar10 + -0x20) = puVar12;
      *(ulong **)((long)puVar10 + -0x18) = puVar9;
      *(undefined1 ***)((long)puVar10 + -0x10) = ppuVar25;
      *(code **)((long)puVar10 + -8) = pcVar26;
      func_0x00010bd24b74();
      if (!(bool)uVar6) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong **)((long)puVar10 + -0x70) = puVar12;
        *(ulong **)((long)puVar10 + -0x68) = puVar9;
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
      if ((*(byte *)((long)puVar9 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar12 = (ulong *)(puVar13 + extraout_x8_03);
        uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
        uVar16 = *(undefined8 *)((long)puVar10 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar10 + -0x58) = uVar16;
        func_0x00010b4bf3a0();
        if (puVar12 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar10 + -0x70) = puVar13;
        *(ulong **)((long)puVar10 + -0x68) = puVar9;
        *(undefined8 *)((long)puVar10 + -0x60) = *(undefined8 *)((long)puVar10 + -0x60);
        *(undefined8 *)((long)puVar10 + -0x58) = *(undefined8 *)((long)puVar10 + -0x58);
        bVar4 = *(char *)((long)puVar12 + 9) != '\0';
        bVar7 = *(char *)((long)puVar12 + 9) == '\x01';
        if (bVar7) {
          func_0x00010b4c5260((char)puVar12[1]);
          puVar18 = puVar12;
          if (!bVar4 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar12;
          }
        }
        else {
          puVar18 = puVar12;
          if ((*(byte *)((long)puVar12 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar12[1] * 4) == 10) {
              puVar18 = (ulong *)*puVar12;
              if ((*(byte *)((long)puVar12 + 10) >> 4 & 1) == 0) {
                pcVar26 = *(code **)(*puVar18 + 0x18);
              }
              else {
                pcVar26 = *(code **)(*puVar18 + 0x88);
              }
              (*pcVar26)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar12[1] * 4) == 9) {
              puVar18 = (ulong *)*puVar12;
              func_0x000107c27fa8(puVar18);
            }
            *(byte *)((long)puVar12 + 10) = *(byte *)((long)puVar12 + 10) & 0xf0 | 1;
          }
        }
        return puVar18;
      }
      if ((*(byte *)((long)puVar9 + 1) >> 5 & 1) != 0) break;
      puVar12 = puVar9;
      FUN_10bcddbd4();
      if (puVar12 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar12 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_05] * 4 + 0x10bd1cba0))();
            return puVar12;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar12 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)puVar9 + 1) >> 4 & 1) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = puVar9[5];
      }
      uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
      uVar16 = *(undefined8 *)((long)puVar10 + -8);
      puVar11 = puVar8;
      puVar14 = puVar13;
      func_0x00010bd25668();
      *(ulong **)((long)puVar10 + -0x80) = puVar18;
      *(ulong **)((long)puVar10 + -0x78) = puVar8;
      *(undefined **)((long)puVar10 + -0x70) = puVar13;
      *(ulong **)((long)puVar10 + -0x68) = puVar9;
      *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar10 + -0x58) = uVar16;
      uVar5 = *(int *)(uVar15 + 4) != 0;
      uVar6 = *(int *)(uVar15 + 4) == 1;
      if ((!(bool)uVar6) || ((*(byte *)(*(long *)(uVar15 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar12 = puVar11;
        func_0x00010bd252d8();
        if (*(int *)(puVar14 + (extraout_x8_06 & 0xffffffff)) != 0) {
          puVar11 = (ulong *)*puVar11;
          FUN_10bcee2d0();
          uVar15 = *(ulong *)(puVar14 + 8);
          puVar12 = puVar11;
          if ((uVar15 & 1) != 0) {
            func_0x00010bd25400();
            uVar15 = extraout_x8_08;
          }
          if (uVar15 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar12 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar12 = (ulong *)*puVar12;
              if (puVar12 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar12 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar11 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar12 = (ulong *)*puVar11;
                if (puVar12 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar12 = puVar11;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar14 + (extraout_x8_07 & 0xffffffff)) = 0;
        }
        return puVar12;
      }
      func_0x00010bd24e64();
      ppuVar25 = *(undefined1 ***)((long)puVar10 + -0x60);
      pcVar26 = *(code **)((long)puVar10 + -0x58);
      puVar12 = *(ulong **)((long)puVar10 + -0x70);
      puVar9 = *(ulong **)((long)puVar10 + -0x68);
      puVar18 = *(ulong **)((long)puVar10 + -0x80);
      puVar8 = *(ulong **)((long)puVar10 + -0x78);
      puVar10 = (ulong *)((long)puVar10 + -0x50);
      puVar13 = puVar14;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar12 = puVar9;
    if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_04] * 4 + 0x10bd1cb5c))();
      return puVar9;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar12;
  }
  bVar7 = (int)*puVar10 == 0;
code_r0x00010bd1c9d0:
  uVar17 = (uint)!bVar7;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar17 & 1);
}



/* Entry: 10bd2dcac; end: 10bd2ddbb;  */

void FUN_10bd2dcac(void)

{
  return;
}



/* Entry: 10bd2ddbc; end: 10bd2de13;  */

void FUN_10bd2ddbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c27fa8(param_3);
  func_0x00010bd35fa4();
  FUN_10bd2e96c();
  return;
}



/* Entry: 10bd2de14; end: 10bd2dedf;  */

void FUN_10bd2de14(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined1 auStack_a0 [4];
  undefined1 uStack_9c;
  undefined1 uStack_99;
  int iStack_94;
  undefined1 uStack_8e;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340db40;
  (*(code *)PTR___tlv_bootstrap_11340db40)();
  iVar1 = *(int *)ppuVar2;
  if (iVar1 < 1) {
    *(undefined4 *)ppuVar2 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10bd2e8e8(auStack_a0);
  uStack_9c = 1;
  uStack_8e = 1;
  uStack_99 = uRam0000000113847378;
  if (iStack_94 < 0xd) {
    iStack_94 = 0xd;
  }
  FUN_10bd2ddbc(auStack_a0,param_2,param_1);
  FUN_10bd2dee0(param_1);
  func_0x00010bd362cc();
  *(int *)ppuVar2 = iVar1;
  return;
}



/* Entry: 10bd2dee0; end: 10bd2df17;  */

void FUN_10bd2dee0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      return;
    }
    puVar2 = (undefined8 *)*param_1;
  }
  else {
    puVar2 = param_1;
    if (*(char *)((long)param_1 + 0x17) == '\0') {
      return;
    }
  }
  if (*(char *)((long)puVar2 + lVar1 + -1) != ' ') {
    return;
  }
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    lVar1 = param_1[1] + -1;
    param_1[1] = lVar1;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = (long)*(char *)((long)param_1 + 0x17) + -1;
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)param_1 + lVar1) = 0;
  return;
}



/* Entry: 10bd2df18; end: 10bd2df83;  */

void FUN_10bd2df18(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  puVar1 = &UNK_110d9dc80;
  if (param_2 == 0) {
    puVar1 = &UNK_110d9dd48;
  }
  *puVar2 = puVar1 + 0x10;
  plVar3 = *(long **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd2df74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 10bd2df84; end: 10bd2dfa3;  */

long * FUN_10bd2df84(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  uVar4 = param_3;
  if (*(int *)(param_2 + 0x88) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    func_0x00010bd0b168();
    if (*plVar2 != 0) {
      lStack_120 = *plVar2;
      func_0x00010ae7ccdc();
      plVar1 = (long *)unaff_x21[5];
      func_0x00010bd0b498();
      plVar2 = plVar1;
      func_0x00010bd0baa8();
      if (plVar1 != (long *)0x0) goto LAB_10bcee008;
    }
    func_0x00010bd0b42c();
    param_2 = *unaff_x21;
    func_0x00010bd0b6d4();
    if (unaff_x21[1] != 0) {
      func_0x00010bd0b694(unaff_x21[5]);
      func_0x00010bd0b5d0(unaff_x21[5]);
    }
    plVar2 = (long *)unaff_x21[5];
    func_0x00010bd0b498();
    if ((plVar2 == (long *)0x0) &&
       ((plVar2 = (long *)unaff_x21[3], plVar2 == (long *)0x0 ||
        (uVar4 = param_3, FUN_10bcedf04(), param_2 = unaff_x20, plVar2 == (long *)0x0)))) {
      func_0x00010bd0b114();
      uVar4 = param_3;
      FUN_10bcee0ac();
      if ((int)plVar2 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar2 = (long *)unaff_x21[5];
        func_0x00010bd0b498();
        plVar5 = plVar2;
      }
      plVar1 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar5 = plVar2;
      plVar1 = plVar2;
    }
    func_0x00010bd0aefc();
    if ((int)unaff_x20 != 0) {
      func_0x00010bd0b6dc();
      in_ZR = (int)plVar2 == 0;
      plVar1 = plVar5;
      if ((bool)in_ZR) {
        plVar1 = (long *)0x0;
      }
    }
    func_0x00010bd0af04();
  }
LAB_10bcee008:
  func_0x000107c3a64c(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar5 = plVar2;
  func_0x00010bd0af04();
  func_0x00010bd0a974();
  plVar3 = &lStack_160;
  pcStack_138 = FUN_10bcee050;
  plVar1 = plVar5 + 0x21;
  lStack_160 = param_2;
  uStack_158 = uVar4;
  lStack_150 = unaff_x20;
  plStack_148 = plVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10bcfe858();
  if ((long *)plVar5[0x22] == plVar1 && (uint)plVar3 == (uint)*(byte *)(plVar5[0x22] + 10)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar1[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar2;
}



/* Entry: 10bd2dfa4; end: 10bd2e027;  */

undefined8 FUN_10bd2dfa4(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2;
  func_0x000107c27cf4(param_2,&UNK_10e5b484d);
  if (((uVar4 & 1) == 0) &&
     (func_0x000107c27cf4(param_2,&UNK_10e5b4862), uVar4 = param_2, (int)param_2 == 0)) {
    return 0;
  }
  func_0x00010bd362bc();
  uVar5 = *(undefined8 *)(*(long *)(uVar4 + 0x10) + 0x18);
  bVar1 = *(byte *)((long)param_3 + 0x17);
  uVar3 = bVar1 == 0;
  uVar4 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)bVar1) {
    uVar4 = (ulong)bVar1;
    puVar2 = param_3;
  }
  func_0x00010bd0a9dc(uVar5,puVar2,uVar4);
  func_0x00010bd0c218();
  func_0x00010bd0adc4();
  if (!(bool)uVar3) {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 10bd2e028; end: 10bd2e02f;  */

undefined8 FUN_10bd2e028(void)

{
  return 0;
}



/* Entry: 10bd2e030; end: 10bd2e0fb;  */

undefined8 * FUN_10bd2e030(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined1 auStack_140 [256];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  FUN_10bd2b4f4(param_3);
  FUN_10bd30738(auStack_140,param_3,param_2,*param_1,param_1[1],param_1[2],bVar1 ^ 1,
                *(undefined1 *)((long)param_1 + 0x19),*(undefined4 *)((long)param_1 + 0x1a),
                *(undefined1 *)((long)param_1 + 0x1e),*(undefined4 *)(param_1 + 4));
  FUN_10bd2e0fc(param_1);
  func_0x00010bd36388();
  return param_1;
}



/* Entry: 10bd2e0fc; end: 10bd2e22f;  */

void FUN_10bd2e0fc(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_38;
  
  uVar6 = param_1;
  uVar10 = param_3;
  uVar11 = param_4;
  func_0x00010bd35b80();
  uStack_38 = extraout_x8;
  do {
    iVar2 = *(int *)(param_4 + 0x28);
    cVar3 = SBORROW4(iVar2,1);
    cVar4 = iVar2 + -1 < 0;
    uVar5 = iVar2 == 1;
    if ((bool)uVar5) {
      if ((((*(byte *)(param_4 + 0xf5) & 1) == 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) &&
         (uVar6 = param_3, func_0x000107c30328(), (uVar6 & 1) == 0)) {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        puVar8 = &uStack_b0;
        FUN_10bd2b4a8(param_3);
        puVar7 = &UNK_10f8361fa;
        func_0x000107c284bc();
        puStack_68 = puVar7;
        puStack_60 = puVar8;
        func_0x00010bd35eb0();
        FUN_10bcff8d8(&uStack_b0);
        func_0x00010bd35ad8();
        uStack_98 = extraout_x10;
        if (cVar4 == cVar3) {
          uStack_98 = param_3;
        }
        func_0x00010bd3610c();
        func_0x00010bd35ddc();
        uVar1 = extraout_x11;
        uVar11 = extraout_x10_00;
        if (cVar4 == cVar3) {
          uVar1 = extraout_x8_00;
          uVar11 = param_3;
        }
        param_2 = 0xffffffff;
        uVar10 = 0;
        FUN_10bd2e3ec(param_4,0xffffffff,0,uVar11,uVar1);
        func_0x00010bd35f08();
        func_0x00010bd35d50();
        func_0x000107c278a8(&uStack_b0);
      }
      break;
    }
    func_0x00010bd35f2c();
    FUN_10bd309e4();
  } while ((uVar6 & 1) != 0);
  func_0x00010bd35aac(uStack_38);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd35f08();
  func_0x00010bd35d50();
  puVar8 = &uStack_b0;
  func_0x000107c278a8();
  func_0x00010bd35d38();
  puVar9 = &uStack_120;
  uStack_120 = param_2;
  uStack_118 = uVar10;
  FUN_10bd2e2a4(puVar9,*puVar8);
  if ((int)puVar9 != 0) {
    ppuStack_140 = &PTR_DAT_110cf0f18;
    uStack_130 = (undefined4)uVar10;
    uStack_128 = 0;
    uStack_138 = param_2;
    uStack_12c = uStack_130;
    FUN_10bd2e030(puVar8,&ppuStack_140,uVar11);
  }
  return;
}



/* Entry: 10bd2e230; end: 10bd2e2a3;  */

void FUN_10bd2e230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10bd2e2a4(puVar1,*param_1);
  if ((int)puVar1 != 0) {
    ppuStack_60 = &PTR_DAT_110cf0f18;
    uStack_50 = (undefined4)param_3;
    uStack_48 = 0;
    uStack_58 = param_2;
    uStack_4c = uStack_50;
    FUN_10bd2e030(param_1,&ppuStack_60,param_4);
  }
  return;
}



/* Entry: 10bd2e2a4; end: 10bd2e3eb;  */

void FUN_10bd2e2a4(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char in_NG;
  char in_OV;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong uVar10;
  undefined1 auStack_1a0 [16];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010bd35b80();
  uVar10 = *(ulong *)(param_1 + 8) >> 0x1f;
  plVar9 = param_2;
  uStack_68 = extraout_x8;
  if (uVar10 != 0) {
    puVar3 = &UNK_10f83676c;
    unaff_x21 = param_2;
    func_0x000107c284bc();
    unaff_x23 = *(undefined8 *)(param_1 + 8);
    func_0x0001089ed984(&uStack_100);
    unaff_x22 = &UNK_10f4eee82;
    func_0x000107c284bc();
    unaff_x24 = &DAT_10f35a1cf;
    uVar7 = unaff_x23;
    func_0x000107c284bc();
    uVar8 = 0x7fffffff;
    func_0x0001089ac660(&uStack_130);
    uStack_b0 = uStack_f8;
    uStack_b8 = uStack_100;
    uStack_80 = uStack_128;
    uStack_88 = uStack_130;
    puVar4 = &UNK_10f58a219;
    puStack_c8 = puVar3;
    plStack_c0 = unaff_x21;
    puStack_a8 = unaff_x22;
    uStack_a0 = unaff_x23;
    puStack_98 = unaff_x24;
    uStack_90 = uVar7;
    func_0x000107c284bc();
    unaff_x20 = auStack_148;
    puStack_78 = puVar4;
    uStack_70 = uVar8;
    func_0x00010ae8c7e0(auStack_148,&puStack_c8,6);
    func_0x00010bd35bac();
    uVar7 = extraout_x11;
    puVar1 = extraout_x10;
    if (in_NG == in_OV) {
      uVar7 = extraout_x8_00;
      puVar1 = unaff_x20;
    }
    plVar9 = (long *)0xffffffff;
    param_3 = 0;
    (**(code **)(*param_2 + 0x10))(param_2,0xffffffff,0,puVar1,uVar7);
    func_0x00010bd35d90();
    unaff_x19 = param_2;
  }
  bVar2 = uVar10 == 0;
  plVar5 = (long *)(ulong)bVar2;
  func_0x00010bd35aac(uStack_68);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x00010bd35c2c();
    func_0x00010bd35d38();
    pcStack_158 = FUN_10bd2e3ec;
    puStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    puStack_180 = unaff_x22;
    plStack_178 = unaff_x21;
    puStack_170 = unaff_x20;
    plStack_168 = unaff_x19;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x00010bd36590();
    *(undefined1 *)((long)plVar5 + 0xf5) = 1;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      func_0x00010bd360e8();
      if ((int)plVar9 < 0) {
        func_0x00010bdb2988(auStack_1a0);
        func_0x00010bd36264();
        func_0x00010bd3625c(*(undefined8 *)(plVar5[0x1b] + 8));
        func_0x00010bd35e70();
        func_0x00010bd35e84();
      }
      else {
        func_0x00010bdb2988(auStack_1a0);
        func_0x00010bd36264();
        func_0x00010bd3625c(*(undefined8 *)(plVar5[0x1b] + 8));
        func_0x00010bd35e70();
        func_0x00010b4c31f4();
        func_0x00010bd36424();
        func_0x00010b4c31f4();
        func_0x00010bd35e70();
        func_0x00010bd35e84();
      }
      FUN_10bdb2990(auStack_1a0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bd3615c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6,plVar9,param_3,unaff_x20,unaff_x19);
    return;
  }
  return;
}



/* Entry: 10bd2e3ec; end: 10bd2e4cb;  */

void FUN_10bd2e3ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [16];
  
  func_0x00010bd36590();
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd3615c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
    return;
  }
  func_0x00010bd360e8();
  if ((int)param_2 < 0) {
    func_0x00010bdb2988(auStack_50);
    func_0x00010bd36264();
    func_0x00010bd3625c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x00010bd35e70();
    func_0x00010bd35e84();
  }
  else {
    func_0x00010bdb2988(auStack_50);
    func_0x00010bd36264();
    func_0x00010bd3625c(*(undefined8 *)(param_1[0x1b] + 8));
    func_0x00010bd35e70();
    func_0x00010b4c31f4();
    func_0x00010bd36424();
    func_0x00010b4c31f4();
    func_0x00010bd35e70();
    func_0x00010bd35e84();
  }
  FUN_10bdb2990(auStack_50);
  return;
}



/* Entry: 10bd2e4cc; end: 10bd2e4fb;  */

void FUN_10bd2e4cc(undefined8 param_1,int param_2,long *param_3)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bd2e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x28))(param_3,"true",4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd2e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_10f6842c6,5);
  return;
}


