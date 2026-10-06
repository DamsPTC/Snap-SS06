/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086a656c; end: 1086a660f;  */

void FUN_1086a656c(undefined8 param_1,ulong param_2)

{
  code *extraout_x8;
  ulong uStack_28;
  
  uStack_28 = param_2;
  func_0x0001086b08ac();
  if ((param_2 >> 0x20 & 1) == 0) {
    func_0x0001086b0d38();
  }
  else {
    func_0x0001086b0d44();
    func_0x0001086b07ec();
    FUN_108843ae8(&uStack_28);
    func_0x0001086b07dc();
    func_0x0001086b0978();
  }
  func_0x0001086b0ddc();
  func_0x0001086b0bec();
  func_0x0001086b069c();
  (*extraout_x8)();
  func_0x0001086b0824();
  func_0x0001086b0970();
  return;
}



/* Entry: 1086a6610; end: 1086a67db;  */

void FUN_1086a6610(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  long *unaff_x20;
  long *plVar4;
  undefined **ppuStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  long alStack_5b0 [54];
  byte bStack_400;
  long alStack_3f8 [54];
  byte bStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined4 uStack_220;
  undefined1 auStack_210 [448];
  
  func_0x0001086b08b8();
  FUN_10886bb20(auStack_210,*param_3);
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_228 = 0;
  lStack_230 = 0;
  uStack_220 = 0x3f800000;
  func_0x000107c288bc(alStack_3f8,auStack_210);
  func_0x0001086b0a88(alStack_5b0);
  while ((((bStack_248 & 1) != 0 || ((bStack_400 & 1) != 0)) && (alStack_3f8[0] != alStack_5b0[0])))
  {
    plVar4 = alStack_3f8;
    func_0x000107c288c0();
    ppuStack_5d0 = &PTR_DAT_110a825f8;
    uStack_5c8 = 0;
    uStack_5b8 = 0;
    ppuVar2 = &PTR_PTR_113280c30;
    if ((undefined **)plVar4[0xf] != (undefined **)0x0) {
      ppuVar2 = (undefined **)plVar4[0xf];
    }
    func_0x0001086b0eb0(ppuVar2[0xc]);
    if (param_2 < 0) {
      param_2 = unaff_x20[1];
      unaff_x20 = (long *)*unaff_x20;
    }
    iVar3 = (int)&ppuStack_5d0;
    func_0x000107c30344();
    iVar1 = 0;
    if (uStack_5b8._4_4_ == 8) {
      iVar1 = iVar3;
    }
    if ((iVar1 == 1) && (*(int *)(lStack_5c0 + 0x1c) == 0x16)) {
      unaff_x20 = plVar4 + 3;
      FUN_10867b1ac(&uStack_240);
    }
    FUN_1088bf4ec(&ppuStack_5d0);
    func_0x000107c28980(alStack_3f8);
  }
  func_0x0001086b0384(alStack_5b0);
  func_0x0001086b0384(alStack_3f8);
  func_0x0001086b0a34();
  if (lStack_228 != 0) {
    FUN_10886488c(*param_3);
    func_0x000104be7444();
    for (plVar4 = (long *)lStack_230; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      func_0x000107c324ec();
      FUN_10867d0d8();
    }
  }
  func_0x00010867bb84(&uStack_240);
  func_0x000107c28948(auStack_210);
  return;
}



/* Entry: 1086a67dc; end: 1086a6977;  */

void FUN_1086a67dc(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  code *extraout_x8_00;
  long *extraout_x9;
  long lVar3;
  long lVar4;
  undefined1 auStack_378 [448];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [400];
  char cStack_10;
  
  func_0x0001086b0888();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10867d03c(extraout_x8,(long)(int)param_1[1]);
  func_0x000107c324c0(*param_1);
  plVar1 = param_1;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  for (lVar4 = (long)(int)param_1[1] << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    lVar3 = *plVar1;
    func_0x0001086b0ad0(auStack_378);
    FUN_108862e68();
    func_0x0001006b90c8(auStack_1b8,auStack_378);
    func_0x0001086b09c0();
    ppuVar2 = &PTR_PTR_113286e08;
    if (*(undefined ***)(lVar3 + 0x30) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(lVar3 + 0x30);
    }
    if (*(char *)(ppuVar2 + 0x28) == '\x01') {
      if (cStack_10 == '\x01') {
        FUN_10867b1ac(param_6,auStack_1a0);
      }
    }
    else {
      FUN_108844938();
      if ((1 << (ulong)((uint)lVar3 & 0x1f) & 0xf1b7c17fU) == 0) {
        if (cStack_10 != '\x01') {
          func_0x0001086b045c(param_5);
          (*extraout_x8_00)();
        }
        FUN_1086a2b34(auStack_378);
        func_0x000107c28984(auStack_1b8,auStack_378);
        func_0x0001086b09d0();
        func_0x0001086b0878(*(undefined8 *)(*param_4 + 0x10));
        FUN_10867b444(extraout_x8,auStack_1b8);
      }
    }
    func_0x000107c288dc(auStack_1b8);
    plVar1 = plVar1 + 1;
  }
  return;
}



/* Entry: 1086a6978; end: 1086a6a97;  */

bool FUN_1086a6978(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  func_0x0001086b0c34();
  func_0x0001086b0648();
  puVar7 = (undefined8 *)(param_1 + 0x18);
  func_0x000107c324c0(*puVar7);
  if (!(bool)in_ZR) {
    puVar7 = extraout_x9;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  while (puVar6 = puVar7 + iVar2, ((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    func_0x0001086b033c();
    uVar5 = 0;
    if (!(bool)in_ZR) {
      uVar5 = extraout_x8;
    }
    func_0x0001086b0a1c();
    puVar6 = puVar7;
    if ((uVar5 & 1) != 0) break;
    func_0x0001086b0f0c();
  }
  func_0x0001086b0274(*(undefined8 *)(param_1 + 0x18));
  uVar3 = puVar6 == (undefined8 *)(extraout_x8_00 + (long)*(int *)(param_1 + 0x20) * 8);
  bVar4 = !(bool)uVar3;
  if ((param_3 != 0) && ((bool)uVar3)) {
    puVar6 = (undefined8 *)(param_1 + 0x30);
    func_0x000107c324c0(*puVar6);
    puVar7 = puVar6;
    if (!(bool)uVar3) {
      puVar7 = extraout_x9_00;
    }
    puVar1 = puVar7 + *(int *)(param_1 + 0x38);
    for (lVar9 = (long)*(int *)(param_1 + 0x38) << 3; puVar8 = puVar1, lVar9 != 0;
        lVar9 = lVar9 + -8) {
      func_0x000107c324e8(*puVar7);
      uVar5 = 0;
      if (!(bool)uVar3) {
        uVar5 = extraout_x8_01;
      }
      func_0x0001086b0a1c();
      puVar8 = puVar7;
      if ((uVar5 & 1) != 0) break;
      puVar7 = puVar7 + 1;
    }
    func_0x000107c324c0(*(undefined8 *)(param_1 + 0x30));
    if (!(bool)uVar3) {
      puVar6 = extraout_x9_01;
    }
    bVar4 = puVar8 != puVar6 + *(int *)(param_1 + 0x38);
  }
  func_0x000107c32500();
  return bVar4;
}



/* Entry: 1086a6a98; end: 1086a6b5f;  */

bool FUN_1086a6a98(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar7 = *(int *)(param_1 + 0x38);
  bVar4 = *(char *)(param_1 + 0x101) != '\x01';
  bVar5 = *(int *)(param_1 + 0x20) != 1;
  uVar3 = (bVar4 || bVar5) || iVar7 == 0;
  if (((!bVar4 && !bVar5) && iVar7 != 0) && ((bVar4 || bVar5) || -1 < iVar7)) {
    return false;
  }
  iVar7 = 0;
  func_0x0001086b0c34();
  func_0x0001086b0648();
  puVar9 = (undefined8 *)(param_1 + 0x18);
  func_0x000107c324c0(*puVar9);
  if (!(bool)uVar3) {
    puVar9 = extraout_x9;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  while (puVar8 = puVar9 + iVar2, ((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    func_0x0001086b033c();
    uVar6 = 0;
    if (!(bool)uVar3) {
      uVar6 = extraout_x8;
    }
    func_0x0001086b0a1c();
    puVar8 = puVar9;
    if ((uVar6 & 1) != 0) break;
    func_0x0001086b0f0c();
  }
  func_0x0001086b0274(*(undefined8 *)(param_1 + 0x18));
  uVar3 = puVar8 == (undefined8 *)(extraout_x8_00 + (long)*(int *)(param_1 + 0x20) * 8);
  bVar4 = !(bool)uVar3;
  if ((iVar7 != 0) && ((bool)uVar3)) {
    puVar8 = (undefined8 *)(param_1 + 0x30);
    func_0x000107c324c0(*puVar8);
    puVar9 = puVar8;
    if (!(bool)uVar3) {
      puVar9 = extraout_x9_00;
    }
    puVar1 = puVar9 + *(int *)(param_1 + 0x38);
    for (lVar11 = (long)*(int *)(param_1 + 0x38) << 3; puVar10 = puVar1, lVar11 != 0;
        lVar11 = lVar11 + -8) {
      func_0x000107c324e8(*puVar9);
      uVar6 = 0;
      if (!(bool)uVar3) {
        uVar6 = extraout_x8_01;
      }
      func_0x0001086b0a1c();
      puVar10 = puVar9;
      if ((uVar6 & 1) != 0) break;
      puVar9 = puVar9 + 1;
    }
    func_0x000107c324c0(*(undefined8 *)(param_1 + 0x30));
    if (!(bool)uVar3) {
      puVar8 = extraout_x9_01;
    }
    bVar4 = puVar10 != puVar8 + *(int *)(param_1 + 0x38);
  }
  func_0x000107c32500();
  return bVar4;
}



/* Entry: 1086a6b60; end: 1086a6f87;  */

undefined1  [16]
FUN_1086a6b60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  ulong uStack_110;
  ulong uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 auStack_70 [4];
  
  plStack_88 = (long *)0x0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  auStack_70[0] = 0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  FUN_1086a6f88(param_4 + 0x18,&lStack_90);
  func_0x0001086a6fe4(param_4 + 0x30,&lStack_90);
  FUN_1086a6f88(param_3 + 0x18,&uStack_c0);
  func_0x0001086a6fe4(param_3 + 0x30,&uStack_c0);
  if (0 < *(int *)(param_4 + 0x38) || 0 < *(int *)(param_3 + 0x38)) {
    func_0x0001086b0880();
    func_0x0001086b0528();
    func_0x0001086b0880();
    func_0x0001086b0528();
    func_0x0001086b0880();
    func_0x0001086b0528();
    func_0x0001086b0880();
    func_0x0001086b0528();
  }
  uStack_110 = 0;
  uStack_108 = 0;
  lVar10 = 0;
  plVar13 = (long *)lStack_b0;
  plVar5 = plStack_88;
  do {
    plStack_88 = plVar5;
    if (plVar13 == (long *)0x0) {
      uStack_108 = uStack_108 << 8;
      for (plVar13 = (long *)lStack_80; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        func_0x000107c29ee0(auStack_d8,plVar13 + 2);
        FUN_1086a2390(&plStack_100);
        FUN_1086a703c(param_7,CONCAT44(uStack_ec,uStack_f0),0);
        func_0x00010867bb84(&plStack_100);
        func_0x000107c27914(auStack_d8);
        lVar10 = lVar10 + 1;
        uStack_108 = 0x100;
      }
      func_0x0001086a7074(&uStack_c0);
      func_0x0001086a7074(&lStack_90);
      auVar14._0_8_ = uStack_108 | uStack_110;
      auVar14._8_8_ = lVar10;
      return auVar14;
    }
    plVar11 = (long *)0x0;
    if ((plVar5 != (long *)0x0) && (lStack_78 != 0)) {
      plVar7 = &lStack_78;
      FUN_1086a9f1c(plVar7,plVar13 + 2);
      uVar8 = (long)plVar5 - 1;
      if (((ulong)plVar5 & uVar8) == 0) {
        plVar9 = (long *)((ulong)plVar7 & uVar8);
      }
      else {
        plVar9 = plVar7;
        if (plVar5 <= plVar7) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar5;
          }
          plVar9 = (long *)((long)plVar7 - uVar1 * (long)plVar5);
        }
      }
      plVar12 = *(long **)(lStack_90 + (long)plVar9 * 8);
      plVar11 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar12;
            if (plVar11 == (long *)0x0) goto LAB_1086a6d04;
            plVar4 = (long *)plVar11[1];
            plVar12 = plVar11;
            if (plVar4 != plVar7) break;
            puVar2 = auStack_70;
            FUN_1086a9f40(puVar2,plVar11 + 2,plVar13 + 2);
            if ((int)puVar2 != 0) goto LAB_1086a6d04;
          }
          if (((ulong)plVar5 & uVar8) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar8);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
        } while (plVar4 == plVar9);
        plVar11 = (long *)0x0;
      }
    }
LAB_1086a6d04:
    if (*(int *)(plVar13 + 6) == 1) {
      if (plVar11 != (long *)0x0) {
        uVar3 = (uint)uStack_108;
        if ((int)plVar11[6] == 0) {
          lVar10 = lVar10 + 1;
          uVar3 = 1;
        }
        uStack_108 = (ulong)uVar3;
        goto LAB_1086a6d68;
      }
    }
    else {
      if (*(int *)(plVar13 + 6) == 0) {
        if ((plVar11 != (long *)0x0) && ((int)plVar11[6] != 1)) {
          if (*(int *)((long)plVar13 + 0x34) != *(int *)((long)plVar11 + 0x34)) {
            lVar10 = lVar10 + 1;
          }
          goto LAB_1086a6d68;
        }
        lVar10 = lVar10 + 1;
        uStack_110 = 1;
      }
      if (plVar11 != (long *)0x0) {
LAB_1086a6d68:
        plVar5 = (long *)plVar11[1];
        uVar8 = (long)plStack_88 - 1;
        if (((ulong)plStack_88 & uVar8) == 0) {
          plVar5 = (long *)(uVar8 & (ulong)plVar5);
        }
        else if (plStack_88 <= plVar5) {
          uVar1 = 0;
          if (plStack_88 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plStack_88;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plStack_88);
        }
        lVar6 = *plVar11;
        plVar7 = *(long **)(lStack_90 + (long)plVar5 * 8);
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != plVar11);
        if (plVar9 == &lStack_80) {
LAB_1086a6de4:
          if (lVar6 == 0) {
LAB_1086a6e18:
            *(undefined8 *)(lStack_90 + (long)plVar5 * 8) = 0;
            lVar6 = *plVar11;
            goto LAB_1086a6e20;
          }
          plVar7 = *(long **)(lVar6 + 8);
          if (((ulong)plStack_88 & uVar8) == 0) {
            plVar12 = (long *)((ulong)plVar7 & uVar8);
          }
          else {
            plVar12 = plVar7;
            if (plStack_88 <= plVar7) {
              uVar1 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar1 = (ulong)plVar7 / (ulong)plStack_88;
              }
              plVar12 = (long *)((long)plVar7 - uVar1 * (long)plStack_88);
            }
          }
          if (plVar12 != plVar5) goto LAB_1086a6e18;
LAB_1086a6e28:
          if (((ulong)plStack_88 & uVar8) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar8);
          }
          else if (plStack_88 <= plVar7) {
            uVar8 = 0;
            if (plStack_88 != (long *)0x0) {
              uVar8 = (ulong)plVar7 / (ulong)plStack_88;
            }
            plVar7 = (long *)((long)plVar7 - uVar8 * (long)plStack_88);
          }
          if (plVar7 != plVar5) {
            *(long **)(lStack_90 + (long)plVar7 * 8) = plVar9;
            lVar6 = *plVar11;
          }
        }
        else {
          plVar7 = (long *)plVar9[1];
          if (((ulong)plStack_88 & uVar8) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar8);
          }
          else if (plStack_88 <= plVar7) {
            uVar1 = 0;
            if (plStack_88 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plStack_88;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plStack_88);
          }
          if (plVar7 != plVar5) goto LAB_1086a6de4;
LAB_1086a6e20:
          if (lVar6 != 0) {
            plVar7 = *(long **)(lVar6 + 8);
            goto LAB_1086a6e28;
          }
        }
        *plVar9 = lVar6;
        *plVar11 = 0;
        lStack_78 = lStack_78 + -1;
        uStack_f0 = 1;
        uStack_ec = 0;
        plStack_100 = plVar11;
        plStack_f8 = &lStack_80;
        FUN_1086abcf0(&plStack_100);
      }
    }
    plVar13 = (long *)*plVar13;
    plVar5 = plStack_88;
  } while( true );
}



/* Entry: 1086a6f88; end: 1086a703b;  */

void FUN_1086a6f88(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107c324c0(*param_1);
  func_0x0001086b0b98();
  while (unaff_x21 != 0) {
    func_0x0001086b05d8();
    if (((ulong)param_1 & 1) == 0) {
      lVar1 = unaff_x22;
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        lVar1 = *(long *)(unaff_x23 + 0x18);
      }
      param_1 = param_2;
      FUN_1086ab9c4(param_2,lVar1,(ulong)*(uint *)(unaff_x23 + 0x58) << 0x20);
    }
    func_0x0001086b0f78();
  }
  return;
}



/* Entry: 1086a703c; end: 1086a70c3;  */

void FUN_1086a703c(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107c32464();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_10867c274();
  }
  return;
}



/* Entry: 1086a70c4; end: 1086a7163;  */

undefined8 FUN_1086a70c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
    ppuVar5 = *(undefined ***)(*(long *)(param_1 + 0x90) + 0x20);
    ppuVar6 = &PTR_PTR_11326af28;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar6 = ppuVar5;
    }
    if (*(int *)((long)ppuVar6 + 0x24) == 2) {
      ppuVar6 = (undefined **)ppuVar6[3];
    }
    else {
      ppuVar6 = &PTR_PTR_11326aee0;
    }
    lVar7 = (long)*(char *)(((ulong)ppuVar6[4] & 0xfffffffffffffffc) + 0x17);
    if (lVar7 < 0) {
      lVar7 = *(long *)(((ulong)ppuVar6[4] & 0xfffffffffffffffc) + 8);
    }
    bVar2 = false;
    if (lVar7 != 0) {
      lVar7 = (long)*(char *)(((ulong)ppuVar6[3] & 0xfffffffffffffffc) + 0x17);
      if (lVar7 < 0) {
        lVar7 = *(long *)(((ulong)ppuVar6[3] & 0xfffffffffffffffc) + 8);
      }
      bVar2 = lVar7 != 0;
    }
    lVar7 = (long)*(char *)(((ulong)ppuVar6[2] & 0xfffffffffffffffc) + 0x17);
    if (lVar7 < 0) {
      lVar7 = *(long *)(((ulong)ppuVar6[2] & 0xfffffffffffffffc) + 8);
    }
    if (lVar7 == 0) {
      bVar2 = true;
    }
    if (bVar2) {
      func_0x00010069b43c(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18));
      lVar7 = extraout_x9;
      if (!bVar2) {
        lVar7 = extraout_x8;
      }
      uVar4 = *param_2;
      uVar1 = param_2[1];
      func_0x0001006933dc();
      puVar3 = param_2;
      func_0x0001006933dc();
      func_0x000100693448(uVar4,uVar1,param_2,(long)puVar3 + lVar7);
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 1086a7164; end: 1086a71af;  */

void FUN_1086a7164(int param_1)

{
  func_0x000107c324b0();
  FUN_1086a70c4();
  if (param_1 != 0) {
    func_0x0001086b0500();
    FUN_1086a70c4();
    if (param_1 != 0) {
      func_0x0001086b0314();
      func_0x0001086a70d8();
    }
  }
  return;
}



/* Entry: 1086a71b0; end: 1086a7253;  */

uint FUN_1086a71b0(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x38) - *(long *)(param_1 + 0x158);
  uVar2 = 3;
  if (*(long *)(param_2 + 0x38) != *(long *)(param_1 + 0x158)) {
    uVar2 = 4;
  }
  uVar1 = 2;
  if (lVar3 != 1) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (lVar3 < 2) {
    uVar2 = uVar1;
  }
  if (((uVar2 < 3 && *(int *)(param_2 + 0x70) == 3) &&
      (((lVar3 = *(long *)(param_2 + 0x60), uVar2 != 2 ||
        (*(int *)(param_1 + 0x38) != *(int *)(lVar3 + 0x20))) ||
       (*(int *)(param_1 + 0x50) != *(int *)(lVar3 + 0x38))))) &&
     (((*(byte *)(lVar3 + 0x11) >> 3 & 1) == 0 && (*(int *)(lVar3 + 0x104) != 8)))) {
    FUN_1086a6978(lVar3,param_3,1);
    return (uint)lVar3 ^ 1;
  }
  return 0;
}



/* Entry: 1086a7254; end: 1086a7313;  */

uint FUN_1086a7254(long param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  long extraout_x8;
  long extraout_x9;
  long lVar2;
  
  func_0x0001086b066c(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  if (*(int *)(lVar2 + 0x50) != 0) {
    if (*(int *)(lVar2 + 0x50) == 1) {
      lVar2 = lVar2 + 0x48;
      FUN_1086afe50(lVar2,0);
      uVar1 = (uint)lVar2;
      func_0x000107c32534();
      return uVar1 ^ 1;
    }
    return 1;
  }
  return 0;
}



/* Entry: 1086a7314; end: 1086a733f;  */

bool FUN_1086a7314(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x9;
  
  func_0x0001086b066c(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
    return false;
  }
  return 0 < *(int *)(*(long *)(lVar1 + 0x110) + 0x10);
}



/* Entry: 1086a7340; end: 1086a73d3;  */

uint FUN_1086a7340(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x19;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c32550();
    if ((0x1e < *(uint *)(param_1 + 0x30)) ||
       ((0x7fffffddU >> (ulong)(*(uint *)(param_1 + 0x30) & 0x1f) & 1) == 0)) {
      uVar1 = unaff_x19 + 0xe8;
      func_0x000107c28f58();
      if (((uVar1 & 1) == 0) && (*(long *)(unaff_x19 + 0xc0) - *(long *)(unaff_x19 + 0xb8) != 0x18))
      {
        func_0x000107c324ec();
        func_0x000107c28078();
        if ((uVar1 & 1) == 0) {
          uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x38);
          uVar2 = 1;
          if (uVar3 < 0x11) {
            uVar2 = 0x11e >> (ulong)(uVar3 & 0x1f);
          }
          goto LAB_1086a73b4;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
  }
LAB_1086a73b4:
  return uVar2 & 1;
}



/* Entry: 1086a73d4; end: 1086a750b;  */

undefined * FUN_1086a73d4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  ppuVar3 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x28);
  }
  ppuVar2 = &PTR_PTR_113280a80;
  if ((undefined **)ppuVar3[0x13] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar3[0x13];
  }
  if (*(int *)((long)ppuVar2 + 0x1c) == 2) {
    ppuVar3 = (undefined **)ppuVar2[2];
  }
  else {
    ppuVar3 = &PTR_PTR_113280878;
  }
  return ppuVar3[2] + (long)ppuVar1[0x24];
}



/* Entry: 1086a750c; end: 1086a758b;  */

undefined1 * FUN_1086a750c(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_1f8 [464];
  char cStack_28;
  
  if ((*(int *)(param_1 + 0x318) == 2) && (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xc0)))
  {
    func_0x000107c29f64(auStack_1f8,*param_2,param_1,2);
    if (cStack_28 == '\x01') {
      puVar1 = auStack_1f8;
      func_0x0001086a74d4(puVar1);
    }
    else {
      puVar1 = (undefined1 *)0x0;
    }
    func_0x000107c288c8(auStack_1f8);
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* Entry: 1086a758c; end: 1086a75b3;  */

undefined8 FUN_1086a758c(int *param_1)

{
  if (*param_1 - 4U < 0x17) {
    return *(undefined8 *)(&UNK_10df42ab8 + (ulong)(*param_1 - 4U) * 8);
  }
  return 0x100000000;
}



/* Entry: 1086a75b4; end: 1086a75f3;  */

long FUN_1086a75b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar2 = lVar4;
    FUN_108848654(lVar4);
    lVar3 = lVar2 + lVar3;
  }
  return lVar3;
}



/* Entry: 1086a75f4; end: 1086a769f;  */

long FUN_1086a75f4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined1 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_10865ef28();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_1086a76a0(lVar1 + 0x38,param_4);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0xa8) = param_5[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined4 *)(param_1 + 0xb8) = param_6;
  *(undefined1 *)(param_1 + 0xbc) = param_7;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  return param_1;
}



/* Entry: 1086a76a0; end: 1086a76ab;  */

long FUN_1086a76a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8ea08,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  func_0x0001086b0f38();
  FUN_1086a76e0();
  return param_1;
}



/* Entry: 1086a76ac; end: 1086a76df;  */

long FUN_1086a76ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8ea08);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  func_0x0001086b0f38();
  FUN_1086a76e0();
  return param_1;
}



/* Entry: 1086a76e0; end: 1086a7737;  */

void FUN_1086a76e0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001088fb2c4();
    }
    else {
      FUN_1088fb294();
    }
  }
  return;
}



/* Entry: 1086a7738; end: 1086a7777;  */

long FUN_1086a7738(long param_1)

{
  FUN_1086a7778(param_1 + 0xc0);
  func_0x000104bee630(param_1 + 0xa0);
  FUN_1088f9cb4(param_1 + 0x38);
  func_0x000107c27914(param_1 + 0x20);
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1086a7778; end: 1086a7797;  */

void FUN_1086a7778(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1088fcbd8();
  }
  return;
}



/* Entry: 1086a7798; end: 1086a77a3;  */

void FUN_1086a7798(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x000108924924(param_1,0,param_2);
  func_0x000107c34a44(&PTR_FUN_110a96130);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x21 + 0x40);
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) != 0) {
    func_0x000108924d10();
  }
  func_0x000108924eb8();
  if (0x18 < (uint)extraout_x8_00) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010891c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df70cfd)[extraout_x8_00] * 4 + 0x10891c9a8))();
  return;
}



/* Entry: 1086a77a4; end: 1086a77d7;  */

undefined8 FUN_1086a77a4(undefined8 param_1)

{
  func_0x0001086b04f4(&UNK_110a96120);
  func_0x0001086b0d1c();
  FUN_1086a77d8();
  return param_1;
}



/* Entry: 1086a77d8; end: 1086a782f;  */

void FUN_1086a77d8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010891d960();
    }
    else {
      FUN_10891d930();
    }
  }
  return;
}



/* Entry: 1086a7830; end: 1086a785f;  */

void FUN_1086a7830(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  FUN_1086a7860();
  return;
}



/* Entry: 1086a7860; end: 1086a7873;  */

void FUN_1086a7860(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_108685190();
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    return;
  }
  return;
}



/* Entry: 1086a7874; end: 1086a78ef;  */

void FUN_1086a7874(long param_1)

{
  FUN_108685190();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 1086a78f0; end: 1086a797b;  */

long FUN_1086a78f0(long param_1)

{
  long lStack_28;
  
  FUN_1086a797c(param_1 + 0x4b8);
  func_0x0001086a799c(param_1 + 0x460);
  func_0x0001086a79bc(param_1 + 0x430);
  func_0x0001086a79dc(param_1 + 0x410);
  func_0x0001086a79fc(param_1 + 0x3e0);
  func_0x0001086a7a1c(param_1 + 0x3b8);
  func_0x0001086a7a3c(param_1 + 0x378);
  func_0x0001086a7a5c(param_1 + 0x350);
  func_0x0001086a7890(param_1 + 0x178);
  func_0x0001086a78b0(param_1 + 0x118);
  func_0x0001086a78d0(param_1 + 0xd0);
  func_0x0001086a78d0(param_1 + 0x88);
  func_0x000107c27ae4(param_1 + 0x70);
  FUN_10891cac8(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086a797c; end: 1086a7a7b;  */

void FUN_1086a797c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1088f0db4();
  }
  return;
}



/* Entry: 1086a7a7c; end: 1086a7b47;  */

void FUN_1086a7a7c(void)

{
  undefined8 *extraout_x8;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  func_0x0001086b0468();
  *extraout_x8 = &PTR_FUN_110a96130;
  extraout_x8[1] = 0;
  *(undefined4 *)(extraout_x8 + 8) = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[6] = 0;
  func_0x000107c29ee4(&ppuStack_50);
  FUN_1086a7b48(extraout_x8);
  func_0x000107c287d0();
  func_0x000107c32500();
  extraout_x8[6] = unaff_x21;
  if (*(int *)(unaff_x20 + 0x38) == 9) {
    ppuStack_50 = &PTR_DAT_110a95780;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x0001086a7bf8(extraout_x8);
    FUN_1086a7b58();
    FUN_10891ee58(&ppuStack_50);
  }
  return;
}



/* Entry: 1086a7b48; end: 1086a7b57;  */

void FUN_1086a7b48(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  func_0x0001086b0c4c();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c287e0();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086a7b58; end: 1086a7bc7;  */

void FUN_1086a7b58(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar4) {
      *(ulong *)(unaff_x19 + 8) = uVar3;
      *(ulong *)(param_2 + 8) = uVar1;
    }
    else {
      FUN_10891ef00();
    }
  }
  return;
}



/* Entry: 1086a7bc8; end: 1086a7c7f;  */

void FUN_1086a7bc8(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001086b0c4c();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c287e0();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086a7c80; end: 1086a7d7f;  */

long FUN_1086a7c80(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = param_3;
  func_0x0001086aff10();
  if ((undefined8 *)*plVar1 == (undefined8 *)plVar1[1]) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)*plVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_10869ff9c(param_1 + 0x20,param_4);
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar3 = *param_3;
  *(long *)(param_1 + 0x78) = param_3[1];
  *(long *)(param_1 + 0x70) = lVar3;
  *(long *)(param_1 + 0x80) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_1086a7d80(param_1 + 0x118,param_5);
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  *(undefined1 *)(param_1 + 0x3e0) = 0;
  *(undefined1 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  *(undefined1 *)(param_1 + 0x4e8) = 0;
  *(undefined1 *)(param_1 + 0x4f0) = 0;
  *(undefined1 *)(param_1 + 0x4f4) = 0;
  *(undefined1 *)(param_1 + 0x4f8) = param_6;
  *(undefined1 *)(param_1 + 0x4f9) = 0;
  return param_1;
}



/* Entry: 1086a7d80; end: 1086a7d9b;  */

void FUN_1086a7d80(long param_1)

{
  FUN_1086a0360();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1086a7d9c; end: 1086a7deb;  */

void FUN_1086a7d9c(void)

{
  long unaff_x19;
  
  func_0x0001086b0b64();
  func_0x0001086affac();
  func_0x0001086b014c();
  func_0x0001086b0198();
  FUN_1086a7e0c();
  func_0x0001086b0718();
  FUN_1086a7dec(unaff_x19 + 0x598);
  return;
}



/* Entry: 1086a7dec; end: 1086a7e0b;  */

void FUN_1086a7dec(void)

{
  undefined1 uStack_11;
  
  FUN_1086a8910(&uStack_11);
  return;
}



/* Entry: 1086a7e0c; end: 1086a7e7f;  */

long FUN_1086a7e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086aff10();
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  FUN_1086a7e80(lVar1 + 0x20,param_4);
  *(undefined8 *)(param_1 + 0x520) = param_5;
  *(undefined4 *)(param_1 + 0x528) = param_6;
  *(undefined4 *)(param_1 + 0x52c) = param_7;
  *(undefined4 *)(param_1 + 0x530) = param_8;
  *(undefined4 *)(param_1 + 0x534) = param_9;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  return param_1;
}



/* Entry: 1086a7e80; end: 1086a7f8f;  */

void FUN_1086a7e80(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c324b4();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1086a7798(param_1 + 0x20,unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x68) = *(undefined1 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  FUN_1086a7f90(unaff_x19 + 0x88,unaff_x20 + 0x88);
  FUN_1086a7f90(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  FUN_1086a807c(unaff_x19 + 0x118,unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  FUN_1086a80d4(unaff_x19 + 0x178,unaff_x20 + 0x178);
  FUN_1086a812c(unaff_x19 + 0x350,unaff_x20 + 0x350);
  FUN_1086a823c(unaff_x19 + 0x378,unaff_x20 + 0x378);
  FUN_1086a8334(unaff_x19 + 0x3b8,unaff_x20 + 0x3b8);
  FUN_1086a8420(unaff_x19 + 0x3e0,unaff_x20 + 0x3e0);
  FUN_1086a8510(unaff_x19 + 0x410,unaff_x20 + 0x410);
  FUN_1086a862c(unaff_x19 + 0x430,unaff_x20 + 0x430);
  FUN_1086a871c(unaff_x19 + 0x460,unaff_x20 + 0x460);
  FUN_1086a8818(unaff_x19 + 0x4b8,unaff_x20 + 0x4b8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x4f0);
  *(undefined2 *)(unaff_x19 + 0x4f8) = *(undefined2 *)(unaff_x20 + 0x4f8);
  *(undefined8 *)(unaff_x19 + 0x4f0) = uVar1;
  return;
}



/* Entry: 1086a7f90; end: 1086a7fb7;  */

void FUN_1086a7f90(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_1086a7fb8();
  return;
}



/* Entry: 1086a7fb8; end: 1086a7fcb;  */

void FUN_1086a7fb8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1086a7fe8();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1086a7fcc; end: 1086a7fe7;  */

void FUN_1086a7fcc(long param_1)

{
  FUN_1086a7fe8();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1086a7fe8; end: 1086a7ff3;  */

undefined8 FUN_1086a7fe8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b04f4(&UNK_110a98ca0,param_1,0,param_2);
  func_0x0001086b0f38();
  FUN_1086a8024();
  return param_1;
}



/* Entry: 1086a7ff4; end: 1086a8023;  */

undefined8 FUN_1086a7ff4(undefined8 param_1)

{
  func_0x0001086b04f4(&UNK_110a98ca0);
  func_0x0001086b0f38();
  FUN_1086a8024();
  return param_1;
}



/* Entry: 1086a8024; end: 1086a807b;  */

void FUN_1086a8024(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_108929728();
    }
    else {
      FUN_1089296f4();
    }
  }
  return;
}



/* Entry: 1086a807c; end: 1086a80a3;  */

void FUN_1086a807c(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_1086a80a4();
  return;
}



/* Entry: 1086a80a4; end: 1086a80b7;  */

void FUN_1086a80a4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1086a0360();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1086a80b8; end: 1086a80d3;  */

void FUN_1086a80b8(long param_1)

{
  FUN_1086a0360();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1086a80d4; end: 1086a80fb;  */

void FUN_1086a80d4(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  FUN_1086a80fc();
  return;
}



/* Entry: 1086a80fc; end: 1086a810f;  */

void FUN_1086a80fc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    func_0x00010528cf6c();
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    return;
  }
  return;
}



/* Entry: 1086a8110; end: 1086a812b;  */

void FUN_1086a8110(long param_1)

{
  func_0x00010528cf6c();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 1086a812c; end: 1086a8153;  */

void FUN_1086a812c(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1086a8154();
  return;
}



/* Entry: 1086a8154; end: 1086a8167;  */

void FUN_1086a8154(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086a8180();
    func_0x0001086b0f18();
    return;
  }
  return;
}



/* Entry: 1086a8168; end: 1086a817f;  */

void FUN_1086a8168(void)

{
  FUN_1086a8180();
  func_0x0001086b0f18();
  return;
}



/* Entry: 1086a8180; end: 1086a818b;  */

long FUN_1086a8180(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a95400,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_1086a81c4();
  return param_1;
}



/* Entry: 1086a818c; end: 1086a81c3;  */

long FUN_1086a818c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a95400);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_1086a81c4();
  return param_1;
}



/* Entry: 1086a81c4; end: 1086a823b;  */

void FUN_1086a81c4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    uVar3 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    uVar5 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(ulong *)(unaff_x19 + 8) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
      *(ulong *)(param_2 + 8) = uVar1;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
    }
    else {
      FUN_10891dbcc();
    }
  }
  return;
}



/* Entry: 1086a823c; end: 1086a8263;  */

void FUN_1086a823c(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1086a8264();
  return;
}



/* Entry: 1086a8264; end: 1086a8277;  */

void FUN_1086a8264(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1086a8294();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1086a8278; end: 1086a8293;  */

void FUN_1086a8278(long param_1)

{
  FUN_1086a8294();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1086a8294; end: 1086a829f;  */

long FUN_1086a8294(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a95f40,param_1,0,param_2);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  FUN_1086a82dc();
  return param_1;
}



/* Entry: 1086a82a0; end: 1086a82db;  */

long FUN_1086a82a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a95f40);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  FUN_1086a82dc();
  return param_1;
}



/* Entry: 1086a82dc; end: 1086a8333;  */

void FUN_1086a82dc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10891e394();
    }
    else {
      func_0x00010891e364();
    }
  }
  return;
}



/* Entry: 1086a8334; end: 1086a835b;  */

void FUN_1086a8334(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1086a835c();
  return;
}



/* Entry: 1086a835c; end: 1086a836f;  */

void FUN_1086a835c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086a8388();
    func_0x0001086b0f18();
    return;
  }
  return;
}



/* Entry: 1086a8370; end: 1086a8387;  */

void FUN_1086a8370(void)

{
  FUN_1086a8388();
  func_0x0001086b0f18();
  return;
}



/* Entry: 1086a8388; end: 1086a8393;  */

long FUN_1086a8388(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a961c0,param_1,0,param_2);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  FUN_1086a83c8();
  return param_1;
}



/* Entry: 1086a8394; end: 1086a83c7;  */

long FUN_1086a8394(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a961c0);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  FUN_1086a83c8();
  return param_1;
}



/* Entry: 1086a83c8; end: 1086a841f;  */

void FUN_1086a83c8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10891e9f4();
    }
    else {
      FUN_10891e9c4();
    }
  }
  return;
}



/* Entry: 1086a8420; end: 1086a8447;  */

void FUN_1086a8420(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1086a8448();
  return;
}



/* Entry: 1086a8448; end: 1086a845b;  */

void FUN_1086a8448(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1086a8478();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1086a845c; end: 1086a8477;  */

void FUN_1086a845c(long param_1)

{
  FUN_1086a8478();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1086a8478; end: 1086a8483;  */

undefined8 FUN_1086a8478(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b04f4(&UNK_110a95b30,param_1,0,param_2);
  func_0x0001086b08a0();
  FUN_1086a84b8();
  return param_1;
}



/* Entry: 1086a8484; end: 1086a84b7;  */

undefined8 FUN_1086a8484(undefined8 param_1)

{
  func_0x0001086b04f4(&UNK_110a95b30);
  func_0x0001086b08a0();
  FUN_1086a84b8();
  return param_1;
}



/* Entry: 1086a84b8; end: 1086a850f;  */

void FUN_1086a84b8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_108920440();
    }
    else {
      FUN_108920410();
    }
  }
  return;
}



/* Entry: 1086a8510; end: 1086a8537;  */

void FUN_1086a8510(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1086a8538();
  return;
}



/* Entry: 1086a8538; end: 1086a854b;  */

void FUN_1086a8538(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1086a8568();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1086a854c; end: 1086a8567;  */

void FUN_1086a854c(long param_1)

{
  FUN_1086a8568();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1086a8568; end: 1086a8573;  */

long FUN_1086a8568(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a94e10,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x14) = 0;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  FUN_1086a85ac();
  return param_1;
}



/* Entry: 1086a8574; end: 1086a85ab;  */

long FUN_1086a8574(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a94e10);
  *(undefined4 *)(lVar1 + 0x14) = 0;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  FUN_1086a85ac();
  return param_1;
}



/* Entry: 1086a85ac; end: 1086a862b;  */

void FUN_1086a85ac(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    uVar3 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      *(ulong *)(unaff_x19 + 8) = uVar4;
      *(ulong *)(param_2 + 8) = uVar2;
      uVar1 = *(undefined1 *)(unaff_x19 + 0x10);
      *(undefined1 *)(unaff_x19 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x10) = uVar1;
    }
    else {
      FUN_108920ef4();
    }
  }
  return;
}



/* Entry: 1086a862c; end: 1086a8653;  */

void FUN_1086a862c(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1086a8654();
  return;
}



/* Entry: 1086a8654; end: 1086a8667;  */

void FUN_1086a8654(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1086a8684();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1086a8668; end: 1086a8683;  */

void FUN_1086a8668(long param_1)

{
  FUN_1086a8684();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1086a8684; end: 1086a868f;  */

undefined8 FUN_1086a8684(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b04f4(&UNK_110a960d0,param_1,0,param_2);
  func_0x0001086b08a0();
  FUN_1086a86c4();
  return param_1;
}



/* Entry: 1086a8690; end: 1086a86c3;  */

undefined8 FUN_1086a8690(undefined8 param_1)

{
  func_0x0001086b04f4(&UNK_110a960d0);
  func_0x0001086b08a0();
  FUN_1086a86c4();
  return param_1;
}



/* Entry: 1086a86c4; end: 1086a871b;  */

void FUN_1086a86c4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_108921340();
    }
    else {
      FUN_108921310();
    }
  }
  return;
}



/* Entry: 1086a871c; end: 1086a8743;  */

void FUN_1086a871c(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_1086a8744();
  return;
}



/* Entry: 1086a8744; end: 1086a8757;  */

void FUN_1086a8744(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1086a8774();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 1086a8758; end: 1086a8773;  */

void FUN_1086a8758(long param_1)

{
  FUN_1086a8774();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1086a8774; end: 1086a877f;  */

long FUN_1086a8774(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a98cf0,param_1,0,param_2);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x32) = 0;
  *(undefined8 *)(lVar1 + 0x2a) = 0;
  FUN_1086a87c0();
  return param_1;
}



/* Entry: 1086a8780; end: 1086a87bf;  */

long FUN_1086a8780(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a98cf0);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x32) = 0;
  *(undefined8 *)(lVar1 + 0x2a) = 0;
  FUN_1086a87c0();
  return param_1;
}



/* Entry: 1086a87c0; end: 1086a8817;  */

void FUN_1086a87c0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010892a030();
    }
    else {
      FUN_108929ffc();
    }
  }
  return;
}



/* Entry: 1086a8818; end: 1086a883f;  */

void FUN_1086a8818(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1086a8840();
  return;
}



/* Entry: 1086a8840; end: 1086a8853;  */

void FUN_1086a8840(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086a8870();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086a8854; end: 1086a886f;  */

void FUN_1086a8854(long param_1)

{
  FUN_1086a8870();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086a8870; end: 1086a887b;  */

long FUN_1086a8870(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8c558,param_1,0,param_2);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  FUN_1086a88b8();
  return param_1;
}


