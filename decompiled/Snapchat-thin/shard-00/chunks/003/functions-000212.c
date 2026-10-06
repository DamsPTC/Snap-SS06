/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004cc8d4; end: 1004ccac3;  */

void FUN_1004cc8d4(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbStack_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0' || *param_1 == '\n') {
    return;
  }
  pcVar2 = param_1;
  func_0x000107c613d4(param_1,&UNK_10f6ccbb4,0xb);
  if ((int)pcVar2 == 0) {
    if (param_1[0xb] != '4') {
      return;
    }
    if (param_1[0xc] != ',') {
      return;
    }
    pcVar2 = param_1 + 0xd;
    func_0x000107c613d4(pcVar2,&UNK_10f6ccae4,9);
    if ((int)pcVar2 == 0) {
      for (pbVar4 = (byte *)(param_1 + 0x18); pbVar4[-0xb] != 0; pbVar4 = pbVar4 + 1) {
        if (pbVar4[-0xb] == 10) {
          pbVar3 = pbVar4 + -10;
          func_0x000107c613d4(pbVar3,&UNK_10f6ccb29,10);
          pbVar7 = pbVar4;
          if ((int)pbVar3 == 0) {
            do {
              do {
                pbVar3 = pbVar7;
                pbVar7 = pbVar3 + 1;
                bVar1 = *pbVar3;
              } while (bVar1 - 0x30 < 10);
            } while (bVar1 == 0x2d || bVar1 - 0x41 < 0x1a);
            *pbVar3 = 0;
            pbStack_48 = pbVar3;
            func_0x000107c34f98();
            *param_2 = pbVar4;
            *pbVar3 = bVar1;
            pbStack_48 = pbVar7;
            if (pbVar4 == (byte *)0x0) {
              uVar5 = 0x72;
              uVar6 = 0x1ce;
            }
            else {
              if (7 < *(uint *)(pbVar4 + 0xc)) {
                func_0x000107c34f9c(&pbStack_48,param_2 + 1);
                return;
              }
              uVar5 = 0x72;
              uVar6 = 0x1d5;
            }
          }
          else {
            uVar5 = 0x6b;
            uVar6 = 0x1bb;
          }
          goto LAB_1004cc950;
        }
      }
      uVar5 = 0x70;
      uVar6 = 0x1b6;
    }
    else {
      uVar5 = 0x6c;
      uVar6 = 0x1b1;
    }
  }
  else {
    uVar5 = 0x6d;
    uVar6 = 0x1a6;
  }
LAB_1004cc950:
  FUN_1004d2c58(9,0,uVar5,&UNK_10f6ccb34,uVar6);
  return;
}



/* Entry: 1004ccac4; end: 1004cccbb;  */

long * FUN_1004ccac4(long *param_1,long *param_2,long *param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  bool bVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar8;
  long lStack_590;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  long *plStack_570;
  long lStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined1 *puStack_550;
  code *pcStack_548;
  int iStack_538;
  int iStack_534;
  long alStack_530 [128];
  long alStack_130 [27];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_534 = 0;
  plVar5 = param_3;
  if (*param_1 == 0) {
LAB_1004ccc18:
    param_3 = unaff_x19;
    plVar8 = (long *)0x1;
    plVar4 = param_2;
    param_2 = unaff_x20;
    param_1 = unaff_x22;
    goto LAB_1004ccc84;
  }
  unaff_x21 = *param_3;
  pcVar2 = (code *)&UNK_10ae463d4;
  if (param_4 != (code *)0x0) {
    pcVar2 = param_4;
  }
  plVar3 = alStack_530;
  (*pcVar2)(plVar3,0x400,0,param_5);
  if ((int)plVar3 < 1) {
    plVar5 = (long *)0x68;
    uVar6 = 0x180;
  }
  else {
    unaff_x23 = param_1 + 1;
    plVar8 = (long *)*param_1;
    plVar4 = plVar3;
    func_0x000107c2b420();
    plVar5 = unaff_x23;
    func_0x000107c2b244();
    unaff_x24 = plVar3;
    if ((int)plVar8 == 0) goto LAB_1004ccc84;
    unaff_x24 = alStack_130;
    iStack_538 = (int)unaff_x21;
    alStack_130[9] = 0;
    alStack_130[8] = 0;
    alStack_130[0xb] = 0;
    alStack_130[10] = 0;
    alStack_130[0xd] = 0;
    alStack_130[0xc] = 0;
    alStack_130[0xf] = 0;
    alStack_130[0xe] = 0;
    alStack_130[0x11] = 0;
    alStack_130[0x10] = 0;
    alStack_130[0x13] = 0;
    alStack_130[0x12] = 0;
    alStack_130[0x15] = 0;
    alStack_130[0x14] = 0;
    alStack_130[0x17] = 0;
    alStack_130[0x16] = 0;
    alStack_130[0x19] = 0;
    alStack_130[0x18] = 0;
    plVar5 = alStack_130 + 8;
    func_0x000107c2b3dc(plVar5,*param_1);
    if ((int)plVar5 == 0) {
LAB_1004ccc3c:
      func_0x000107c2b3d8(alStack_130 + 8);
      param_3 = alStack_530;
      func_0x000107c60ee4(alStack_530,0x400);
      unaff_x20 = param_2;
    }
    else {
      plVar5 = alStack_130 + 8;
      func_0x000107c2b3e8(plVar5,param_2,&iStack_534,param_2,unaff_x21);
      if ((int)plVar5 == 0) goto LAB_1004ccc3c;
      unaff_x21 = (long)iStack_534;
      unaff_x20 = alStack_130 + 8;
      plVar5 = (long *)&iStack_538;
      func_0x000107c2b3ec(unaff_x20,(long)param_2 + unaff_x21);
      func_0x000107c2b3d8(alStack_130 + 8);
      param_1 = alStack_530;
      param_2 = (long *)0x400;
      func_0x000107c60ee4(alStack_530);
      alStack_130[5] = 0;
      alStack_130[4] = 0;
      alStack_130[7] = 0;
      alStack_130[6] = 0;
      alStack_130[1] = 0;
      alStack_130[0] = 0;
      alStack_130[3] = 0;
      alStack_130[2] = 0;
      if ((int)unaff_x20 != 0) {
        *param_3 = iStack_538 + unaff_x21;
        unaff_x19 = param_3;
        unaff_x22 = param_1;
        goto LAB_1004ccc18;
      }
    }
    alStack_130[7] = 0;
    alStack_130[6] = 0;
    alStack_130[5] = 0;
    alStack_130[4] = 0;
    alStack_130[3] = 0;
    alStack_130[2] = 0;
    alStack_130[1] = 0;
    alStack_130[0] = 0;
    plVar5 = (long *)0x65;
    uVar6 = 0x193;
    param_2 = unaff_x20;
  }
  plVar4 = (long *)0x0;
  FUN_1004d2c58(9,0,plVar5,&UNK_10f6ccb34,uVar6);
  plVar8 = (long *)0x0;
LAB_1004ccc84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar8;
  }
  func_0x000107c60e78();
  pcStack_548 = FUN_1004cccbc;
  lStack_590 = *plVar4;
  if ((plVar8 == (long *)0x0) || (*plVar8 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  plVar3 = plVar8;
  plStack_580 = unaff_x24;
  plStack_578 = unaff_x23;
  plStack_570 = param_1;
  lStack_568 = unaff_x21;
  plStack_560 = param_2;
  plStack_558 = param_3;
  puStack_550 = &stack0xfffffffffffffff0;
  FUN_1004cd664(plVar8,&lStack_590,plVar5,&UNK_110c87868);
  if (plVar3 != (long *)0x0) {
    lVar1 = (*plVar4 - lStack_590) + (long)plVar5;
    if (0 < lVar1) {
      plVar5 = plVar3 + 0x14;
      FUN_1004cd664(plVar5,&lStack_590,lVar1,&UNK_110c87968);
      if (plVar5 == (long *)0x0) {
        if ((!bVar7) &&
           (plStack_588 = plVar3, FUN_1004d164c(&plStack_588,&UNK_110c87868,0),
           plVar8 != (long *)0x0)) {
          *plVar8 = 0;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
    }
    *plVar4 = lStack_590;
  }
  return plVar3;
}



/* Entry: 1004cccbc; end: 1004cccbf;  */

long * FUN_1004cccbc(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lStack_50;
  long *plStack_48;
  
  lStack_50 = *param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar1 = param_1;
  FUN_1004cd664(param_1,&lStack_50,param_3,&UNK_110c87868);
  if (plVar1 != (long *)0x0) {
    param_3 = (*param_2 - lStack_50) + param_3;
    if (0 < param_3) {
      plVar2 = plVar1 + 0x14;
      FUN_1004cd664(plVar2,&lStack_50,param_3,&UNK_110c87968);
      if (plVar2 == (long *)0x0) {
        if ((!bVar3) &&
           (plStack_48 = plVar1, FUN_1004d164c(&plStack_48,&UNK_110c87868,0), param_1 != (long *)0x0
           )) {
          *param_1 = 0;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
    }
    *param_2 = lStack_50;
  }
  return plVar1;
}



/* Entry: 1004cccc0; end: 1004ccdab;  */

long * FUN_1004cccc0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lStack_50;
  long *plStack_48;
  
  lStack_50 = *param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar1 = param_1;
  FUN_1004cd664(param_1,&lStack_50,param_3,&UNK_110c87868);
  if (plVar1 != (long *)0x0) {
    param_3 = (*param_2 - lStack_50) + param_3;
    if (0 < param_3) {
      plVar2 = plVar1 + 0x14;
      FUN_1004cd664(plVar2,&lStack_50,param_3,&UNK_110c87968);
      if (plVar2 == (long *)0x0) {
        if ((!bVar3) &&
           (plStack_48 = plVar1, FUN_1004d164c(&plStack_48,&UNK_110c87868,0), param_1 != (long *)0x0
           )) {
          *param_1 = 0;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
    }
    *param_2 = lStack_50;
  }
  return plVar1;
}



/* Entry: 1004ccdac; end: 1004cd663;  */

/* WARNING: Possible PIC construction at 0x0001004ce3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004ce3c8) */
/* WARNING: Removing unreachable block (ram,0x0001004ce404) */
/* WARNING: Removing unreachable block (ram,0x0001004ce3cc) */
/* WARNING: Removing unreachable block (ram,0x0001004ce440) */
/* WARNING: Removing unreachable block (ram,0x0001004ce3dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ccdac(ulong *param_1,undefined8 *param_2,uint *param_3,byte *param_4,ulong param_5,
                  uint param_6,ulong param_7,undefined1 *param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  uint *unaff_x19;
  ulong *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  int iVar20;
  undefined1 *unaff_x23;
  code *pcVar21;
  int iVar22;
  uint *unaff_x24;
  long *plVar23;
  char *pcVar24;
  ulong uVar25;
  undefined8 unaff_x25;
  long lVar26;
  char *pcVar27;
  undefined8 unaff_x26;
  ulong *puVar28;
  code *pcVar29;
  ulong *puVar30;
  undefined4 uVar31;
  uint *unaff_x27;
  long lVar32;
  uint *puVar33;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStackY_100 [64];
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  iVar20 = param_9;
  uStack_68 = param_3;
  if (param_1 == (ulong *)0x0) {
    return;
  }
  if (0x3fffffff < (long)param_3) {
    uStack_68 = (uint *)0x3fffffff;
  }
  puVar33 = uStack_68;
  if (0x1d < param_9) {
    uVar14 = 0xc0;
    uVar17 = 0xba;
    goto LAB_1004cce28;
  }
  uVar1 = param_6 & 0xfffffbff;
  bVar3 = *param_4;
  uVar16 = (uint)param_5;
  iVar22 = (int)param_7;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      puVar15 = *(uint **)(param_4 + 0x10);
      if (puVar15 != (uint *)0x0) {
        if ((uVar16 != 0xffffffff) || (iVar22 != 0)) {
          uVar14 = 0x88;
          uVar17 = 0xc9;
          goto LAB_1004cce28;
        }
        uVar1 = param_9 + 1;
        puVar7 = &stack0xfffffffffffffff0;
        if (param_1 == (ulong *)0x0) {
          return;
        }
        uVar14 = *param_2;
        puVar11 = param_2;
        if ((*puVar15 >> 4 & 1) != 0) {
          pcStack_80 = (code *)((ulong)pcStack_80 & 0xffffffffffffff00);
          puVar6 = &stack0xffffffffffffffa8;
          uStack_78 = param_8;
          FUN_1004cd6c8(puVar6,0,0,(long)&uStack_68 + 7,&stack0xffffffffffffffa0,uStack_68,
                        puVar15[2],*puVar15 & 0xc0);
          if ((int)puVar6 == -1) {
            return;
          }
          if ((int)puVar6 == 0) {
            uVar14 = 0x9e;
            uVar17 = 0x1f7;
LAB_1004ce41c:
            FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
            return;
          }
          if (uStack_68._7_1_ == '\0') {
            uVar14 = 0x78;
            uVar17 = 0x1fc;
            goto LAB_1004ce41c;
          }
          puVar11 = (undefined8 *)&stack0xffffffffffffffa0;
          unaff_x30 = 0x1004ce3c8;
          register0x00000008 = (BADSPACEBASE *)&pcStack_80;
          puVar33 = unaff_x27;
          unaff_x19 = puVar15;
          unaff_x20 = param_1;
          unaff_x21 = param_2;
          unaff_x22 = (ulong)uVar1;
          unaff_x23 = param_8;
          unaff_x24 = unaff_x27;
          unaff_x25 = uVar14;
          unaff_x29 = puVar7;
        }
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(uint **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        uVar2 = *puVar15;
        uVar16 = uVar2 & 0xc0;
        *(undefined8 *)((long)register0x00000008 + -0x60) = *puVar11;
        *(uint **)((long)register0x00000008 + -0x58) = puVar33;
        if ((uVar2 & 6) == 0) {
          uVar14 = *(undefined8 *)(puVar15 + 8);
          if ((uVar2 >> 3 & 1) == 0) {
            *(uint *)((long)register0x00000008 + -0x80) = uVar1;
            puVar28 = param_1;
            FUN_1004ccdac(param_1,(undefined1 *)((long)register0x00000008 + -0x60),puVar33,uVar14,
                          0xffffffff,uVar2 & 0x400,0,param_8);
            if ((int)puVar28 == -1) {
              return;
            }
            if ((int)puVar28 == 0) {
              uVar14 = 0x9e;
              uVar17 = 0x276;
LAB_1004ce708:
              FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
              FUN_1004d19dc(param_1,puVar15);
              return;
            }
          }
          else {
            uVar2 = puVar15[2];
            *(uint *)((long)register0x00000008 + -0x80) = uVar1;
            puVar28 = param_1;
            FUN_1004ccdac(param_1,(undefined1 *)((long)register0x00000008 + -0x60),puVar33,uVar14,
                          uVar2,uVar16,0,param_8);
            if ((int)puVar28 == -1) {
              return;
            }
            if ((int)puVar28 == 0) {
              uVar14 = 0x9e;
              uVar17 = 0x26c;
              goto LAB_1004ce708;
            }
          }
        }
        else {
          if ((uVar2 >> 3 & 1) == 0) {
            uVar16 = 0;
            uVar19 = 0x10;
            if ((uVar2 & 2) != 0) {
              uVar19 = 0x11;
            }
          }
          else {
            uVar19 = puVar15[2];
          }
          *(undefined1 **)((long)register0x00000008 + -0x78) = param_8;
          *(undefined1 *)((long)register0x00000008 + -0x80) = 0;
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x58);
          FUN_1004cd6c8(puVar7,0,0,0,(undefined1 *)((long)register0x00000008 + -0x60),puVar33,uVar19
                        ,uVar16);
          if ((int)puVar7 == -1) {
            return;
          }
          if ((int)puVar7 == 0) {
            FUN_1004d2c58(0xc,0,0x9e,&UNK_10f6c4e57,0x238);
            return;
          }
          plVar23 = (long *)*param_1;
          if (plVar23 == (long *)0x0) {
            plVar23 = (long *)0x0;
            func_0x0001001e2bf4();
            *param_1 = (ulong)plVar23;
          }
          else {
            lVar13 = *plVar23;
            if (lVar13 != 0) {
              do {
                plVar8 = plVar23;
                FUN_1007345d8(plVar23,lVar13 + -1);
                *(long **)((long)register0x00000008 + -0x68) = plVar8;
                FUN_1004d164c((undefined1 *)((long)register0x00000008 + -0x68),
                              *(undefined8 *)(puVar15 + 8),0);
                lVar13 = *plVar23;
              } while (lVar13 != 0);
              plVar23 = (long *)*param_1;
            }
          }
          if (plVar23 == (long *)0x0) {
            uVar14 = 0x41;
            uVar17 = 0x24b;
            goto LAB_1004ce708;
          }
          for (pcVar24 = *(char **)((long)register0x00000008 + -0x58); 0 < (long)pcVar24;
              pcVar24 = pcVar27 + ((long)pcVar24 - lVar13)) {
            pcVar27 = *(char **)((long)register0x00000008 + -0x60);
            if (((pcVar24 != (char *)0x1) && (*pcVar27 == '\0')) && (pcVar27[1] == '\0')) {
              *(char **)((long)register0x00000008 + -0x60) = pcVar27 + 2;
              uVar14 = 0xb4;
              uVar17 = 599;
              goto LAB_1004ce708;
            }
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
            uVar14 = *(undefined8 *)(puVar15 + 8);
            *(uint *)((long)register0x00000008 + -0x80) = uVar1;
            puVar7 = (undefined1 *)((long)register0x00000008 + -0x68);
            FUN_1004ccdac(puVar7,(undefined1 *)((long)register0x00000008 + -0x60),pcVar24,uVar14,
                          0xffffffff,0,0,param_8);
            if ((int)puVar7 == 0) {
              uVar14 = 0x9e;
              uVar17 = 0x25d;
              goto LAB_1004ce708;
            }
            lVar13 = *(long *)((long)register0x00000008 + -0x60);
            puVar9 = (undefined8 *)*param_1;
            func_0x0001001e2c8c(puVar9,*(undefined8 *)((long)register0x00000008 + -0x68),*puVar9);
            if (puVar9 == (undefined8 *)0x0) {
              FUN_1004d164c((undefined1 *)((long)register0x00000008 + -0x68),
                            *(undefined8 *)(puVar15 + 8),0);
              uVar14 = 0x41;
              uVar17 = 0x263;
              goto LAB_1004ce708;
            }
          }
        }
        *puVar11 = *(undefined8 *)((long)register0x00000008 + -0x60);
        return;
      }
      if (*param_4 == 5) {
        uStack_78._4_4_ = uVar16;
        if (uVar16 == 0xfffffffc) {
          param_5 = 0xffffffff;
LAB_1004ce7ec:
          if (iVar22 != 0) {
            uVar14 = 0x87;
            uVar17 = 0x2a2;
            goto LAB_1004ce86c;
          }
          pcStack_90 = (code *)*param_2;
          iVar20 = 0;
          FUN_1004cd6c8(0,(long)&uStack_78 + 4,&uStack_68,0,&pcStack_90,uStack_68,0xffffffff,0,0);
          if (iVar20 == 0) {
            uVar14 = 0x9e;
            uVar17 = 0x2a9;
            goto LAB_1004ce86c;
          }
          if ((char)uStack_68 == '\0') {
            uVar18 = (ulong)uStack_78._4_4_;
          }
          else {
            uStack_78._4_4_ = 0xfffffffd;
            uVar18 = 0xfffffffd;
          }
        }
        else {
          uVar18 = param_5;
          param_5 = 0xffffffff;
        }
      }
      else {
        uStack_78._4_4_ = *(uint *)(param_4 + 8);
        uVar18 = (ulong)uStack_78._4_4_;
        if (uStack_78._4_4_ == 0xfffffffc) {
          if (-1 < (int)uVar16) {
            uVar14 = 0x89;
            uVar17 = 0x29e;
            goto LAB_1004ce86c;
          }
          goto LAB_1004ce7ec;
        }
      }
      uVar19 = (uint)uVar18;
      uVar16 = uVar19;
      uVar2 = 0;
      if ((uint)param_5 != 0xffffffff) {
        uVar16 = (uint)param_5;
        uVar2 = uVar1;
      }
      pcStack_90 = (code *)*param_2;
      ppcVar10 = &pcStack_80;
      FUN_1004cd6c8(ppcVar10,0,0,(long)&uStack_88 + 7,&pcStack_90,puVar33,uVar16,uVar2,(char)param_7
                   );
      if ((int)ppcVar10 == -1) {
        return;
      }
      if ((int)ppcVar10 == 0) {
        uVar14 = 0x9e;
        uVar17 = 0x2b8;
LAB_1004ce86c:
        FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
        return;
      }
      if (uVar19 - 0x10 < 2) {
        if (uStack_88._7_1_ == '\0') {
          uVar14 = 0xb2;
          uVar17 = 0x2c9;
          goto LAB_1004ce86c;
        }
LAB_1004ce91c:
        pcVar29 = (code *)*param_2;
        pcVar21 = pcStack_90 + ((long)pcStack_80 - (long)*param_2);
      }
      else {
        if (uVar19 == 0xfffffffd) {
          if (param_8 != (undefined1 *)0x0) {
            *param_8 = 0;
          }
          goto LAB_1004ce91c;
        }
        pcVar29 = pcStack_90;
        pcVar21 = pcStack_80;
        if (uStack_88._7_1_ != '\0') {
          uVar14 = 0xb3;
          uVar17 = 0x2d4;
          goto LAB_1004ce86c;
        }
      }
      pcStack_90 = pcStack_90 + (long)pcStack_80;
      pcStack_70 = pcVar29;
      if (*(long *)(param_4 + 8) == -4) {
        puVar33 = (uint *)*param_1;
        if ((uint *)*param_1 == (uint *)0x0) {
          uStack_68 = (uint *)0x0;
          puVar11 = &uStack_68;
          FUN_1004cd9f4(puVar11,&DAT_110c7b9f0,0);
          if (((int)puVar11 == 0) || (uStack_68 == (uint *)0x0)) {
            uStack_68 = (uint *)0x0;
            FUN_1004d164c(&uStack_68,&DAT_110c7b9f0,0);
            return;
          }
          *param_1 = (ulong)uStack_68;
          puVar33 = uStack_68;
        }
        if (*puVar33 != uVar19) {
          uStack_68 = puVar33;
          FUN_1004cf1b4(&uStack_68,0);
          *uStack_68 = uVar19;
          if (uVar19 == 1) {
            uStack_68[2] = 0;
          }
          else {
            uStack_68[2] = 0;
            uStack_68[3] = 0;
          }
        }
        puVar28 = (ulong *)(puVar33 + 2);
        puVar30 = param_1;
      }
      else {
        puVar33 = (uint *)0x0;
        puVar30 = (ulong *)0x0;
        puVar28 = param_1;
      }
      iVar20 = (int)pcVar21;
      if ((int)uVar19 < 6) {
        if ((int)uVar19 < 3) {
          if (uVar19 != 1) {
            if (uVar19 == 2) goto LAB_1004cea58;
            goto LAB_1004ceb4c;
          }
          if (iVar20 == 1) {
            *(uint *)puVar28 = (uint)(byte)*pcVar29;
            goto LAB_1004cec08;
          }
          uVar14 = 0x6a;
          uVar17 = 0x314;
        }
        else {
          if (uVar19 == 3) {
            FUN_1004d1ba8(puVar28,&pcStack_70,(long)iVar20);
            if (puVar28 == (ulong *)0x0) goto LAB_1004cec34;
            goto LAB_1004cec08;
          }
          if (uVar19 != 5) goto LAB_1004ceb4c;
          if (iVar20 == 0) {
            *puVar28 = 1;
            goto LAB_1004cebf8;
          }
          uVar14 = 0xa4;
          uVar17 = 0x30c;
        }
        goto LAB_1004cec30;
      }
      if ((int)uVar19 < 0x1c) {
        if (uVar19 == 6) {
          func_0x0001004cef74(puVar28,&pcStack_70,(long)iVar20);
          if (puVar28 != (ulong *)0x0) goto LAB_1004cec08;
          goto LAB_1004cec34;
        }
        if (uVar19 == 10) {
LAB_1004cea58:
          puVar12 = puVar28;
          FUN_1004cec58(puVar28,&pcStack_70,(long)iVar20);
          if (puVar12 == (ulong *)0x0) goto LAB_1004cec34;
          *(uint *)(*puVar28 + 4) = *(uint *)(*puVar28 + 4) & 0x100 | uVar19;
LAB_1004cebf8:
          if ((uVar19 == 5) && (puVar33 != (uint *)0x0)) {
            puVar33[2] = 0;
            puVar33[3] = 0;
          }
          goto LAB_1004cec08;
        }
LAB_1004ceb4c:
        uVar25 = *puVar28;
        if (uVar25 == 0) {
          func_0x0001004ce0c4();
          if (uVar18 == 0) {
            uVar14 = 0x41;
            uVar17 = 0x349;
            goto LAB_1004cec30;
          }
          *puVar28 = uVar18;
        }
        else {
          *(uint *)(uVar25 + 4) = uVar19;
          uVar18 = uVar25;
        }
        uVar25 = uVar18;
        FUN_1004cee54(uVar18,pcVar29,pcVar21);
        if ((int)uVar25 != 0) {
LAB_1004cec08:
          *param_2 = pcStack_90;
          return;
        }
        FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4e57,0x352);
        FUN_1001e33e0(*(undefined8 *)(uVar18 + 8));
        FUN_1001e33e0(uVar18);
        *puVar28 = 0;
      }
      else {
        if (uVar19 == 0x1c) {
          if (((ulong)pcVar21 & 3) == 0) goto LAB_1004ceb4c;
          uVar14 = 0xb5;
          uVar17 = 0x342;
        }
        else {
          if ((uVar19 != 0x1e) || (((ulong)pcVar21 & 1) == 0)) goto LAB_1004ceb4c;
          uVar14 = 0x68;
          uVar17 = 0x33e;
        }
LAB_1004cec30:
        FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
      }
LAB_1004cec34:
      uStack_68 = puVar33;
      FUN_1004d164c(&uStack_68,&DAT_110c7b9f0,0);
      if (puVar30 == (ulong *)0x0) {
        return;
      }
      *puVar30 = 0;
      return;
    }
    if (bVar3 != 1) {
      return;
    }
    pcStack_70 = (code *)*param_2;
    uVar2 = 0;
    if (uVar16 != 0xffffffff) {
      uVar2 = uVar1;
    }
    uVar1 = 0x10;
    if (uVar16 != 0xffffffff) {
      uVar1 = uVar16;
    }
    puVar11 = &uStack_68;
    FUN_1004cd6c8(puVar11,0,0,&uStack_78,&pcStack_70,uStack_68,uVar1,uVar2,param_7 & 0xff,param_8);
    if ((int)puVar11 == -1) {
      return;
    }
    if ((int)puVar11 == 0) {
      uVar14 = 0x9e;
      uVar17 = 0x14c;
      goto LAB_1004cce28;
    }
    if ((char)uStack_78 == '\0') {
      uVar14 = 0xa9;
      uVar17 = 0x151;
      goto LAB_1004cce28;
    }
    if ((*param_1 == 0) && (puVar28 = param_1, FUN_1004cd9f4(param_1,param_4,0), (int)puVar28 == 0))
    {
      uVar14 = 0x9e;
      uVar17 = 0x156;
      goto LAB_1004cce28;
    }
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (pcVar29 = *(code **)(*(long *)(param_4 + 0x20) + 0x10), pcVar29 == (code *)0x0)) {
      pcStack_90 = (code *)0x0;
      bVar4 = true;
    }
    else {
      iVar22 = 4;
      (*pcVar29)(4,param_1,param_4,0);
      if (iVar22 == 0) goto LAB_1004cd5f4;
      bVar4 = false;
      pcStack_90 = pcVar29;
    }
    lVar13 = *(long *)(param_4 + 0x10);
    lVar32 = *(long *)(param_4 + 0x18);
    if (lVar32 < 1) {
LAB_1004cd408:
      pcVar29 = (code *)0x0;
      puVar33 = uStack_68;
    }
    else {
      lVar26 = 0;
      do {
        if (((*(byte *)(lVar13 + 1) & 3) != 0) &&
           (puVar28 = param_1, FUN_1004ce228(param_1,lVar13,0), puVar28 != (ulong *)0x0)) {
          puVar30 = param_1;
          if ((*(byte *)((long)puVar28 + 1) >> 2 & 1) == 0) {
            puVar30 = (ulong *)(*param_1 + puVar28[2]);
          }
          FUN_1004d19dc(puVar30);
        }
        lVar26 = lVar26 + 1;
        lVar13 = lVar13 + 0x28;
        lVar32 = *(long *)(param_4 + 0x18);
      } while (lVar26 < lVar32);
      lVar13 = *(long *)(param_4 + 0x10);
      if (lVar32 < 1) goto LAB_1004cd408;
      pcVar29 = (code *)0x0;
      puVar33 = uStack_68;
      do {
        puVar28 = param_1;
        FUN_1004ce228(param_1,lVar13,1);
        if (puVar28 == (ulong *)0x0) goto LAB_1004cce30;
        puVar30 = param_1;
        if (((uint)*puVar28 >> 10 & 1) == 0) {
          puVar30 = (ulong *)(*param_1 + puVar28[2]);
        }
        if (puVar33 == (uint *)0x0) {
          uStack_68 = (uint *)0x0;
          lVar32 = *(long *)(param_4 + 0x18);
          goto LAB_1004cd550;
        }
        if (((1 < (long)puVar33) && (*pcStack_70 == (code)0x0)) && (pcStack_70[1] == (code)0x0)) {
          uVar14 = 0xb4;
          uVar17 = 0x17c;
          goto LAB_1004cce28;
        }
        uStack_88 = pcStack_70;
        uVar1 = 0;
        if (pcVar29 != (code *)(*(long *)(param_4 + 0x18) + -1)) {
          uVar1 = (uint)*puVar28 & 1;
        }
        puVar12 = puVar30;
        pcStack_80 = pcVar29;
        FUN_1004ce2d0(puVar30,&pcStack_70,puVar33,puVar28,uVar1,param_8,iVar20 + 1);
        if ((int)puVar12 == -1) {
          FUN_1004d19dc(puVar30,puVar28);
        }
        else {
          if ((int)puVar12 == 0) goto LAB_1004cce30;
          puVar33 = (uint *)((code *)((long)puVar33 + (long)uStack_88) + -(long)pcStack_70);
        }
        pcVar29 = pcStack_80 + 1;
        lVar13 = lVar13 + 0x28;
        lVar32 = *(long *)(param_4 + 0x18);
      } while ((long)pcVar29 < lVar32);
    }
    uStack_68 = puVar33;
    if (uStack_68 != (uint *)0x0) {
      uVar14 = 0xa8;
      uVar17 = 0x19f;
      goto LAB_1004cce28;
    }
LAB_1004cd550:
    if ((long)((ulong)pcVar29 & 0xffffffff) < lVar32) {
      uVar18 = (ulong)pcVar29 & 0xffffffff;
      do {
        puVar28 = param_1;
        FUN_1004ce228(param_1,lVar13,1);
        if (puVar28 == (ulong *)0x0) goto LAB_1004cce30;
        if ((*puVar28 & 1) == 0) {
          uVar14 = 0x79;
          uVar17 = 0x1b3;
LAB_1004cd29c:
          FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
          goto LAB_1004cce30;
        }
        puVar30 = param_1;
        if (((uint)*puVar28 >> 10 & 1) == 0) {
          puVar30 = (ulong *)(*param_1 + puVar28[2]);
        }
        FUN_1004d19dc(puVar30,puVar28);
        lVar13 = lVar13 + 0x28;
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < *(long *)(param_4 + 0x18));
    }
    pcVar29 = pcStack_70;
    puVar28 = param_1;
    FUN_1004cf278(param_1,*param_2,(int)pcStack_70 - (int)*param_2,param_4);
    if ((int)puVar28 != 0) {
      if (bVar4) {
LAB_1004cd5ec:
        *param_2 = pcVar29;
        return;
      }
      iVar20 = 5;
      (*pcStack_90)(5,param_1,param_4,0);
      if (iVar20 != 0) goto LAB_1004cd5ec;
    }
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0001004ccfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_4 + 0x20) + 0x20))
                  (param_1,param_2,uStack_68,param_4,param_5,uVar1,param_7,param_8);
        return;
      }
      if (bVar3 != 5) {
        return;
      }
      if (uVar16 == 0xffffffff) {
        pcStack_70 = (code *)*param_2;
        iVar20 = 0;
        FUN_1004cd6c8(0,&uStack_78,(long)&uStack_78 + 7,0,&pcStack_70,uStack_68,0xffffffff,0,1,
                      param_8);
        if (iVar20 == 0) {
          uVar14 = 0x9e;
          uVar17 = 0xe2;
        }
        else if (uStack_78._7_1_ == '\0') {
          if ((uint)uStack_78 < 0x1f) {
            uVar18 = *(ulong *)(&UNK_10e517ff0 + ((ulong)uStack_78 & 0xffffffff) * 8);
          }
          else {
            uVar18 = 0;
          }
          if ((*(ulong *)(param_4 + 8) & uVar18) != 0) {
            FUN_1004ce75c(param_1,param_2,puVar33,param_4,(ulong)uStack_78 & 0xffffffff,0,0,param_8)
            ;
            return;
          }
          if (iVar22 != 0) {
            return;
          }
          uVar14 = 0x9d;
          uVar17 = 0xf3;
        }
        else {
          if (iVar22 != 0) {
            return;
          }
          uVar14 = 0x9c;
          uVar17 = 0xeb;
        }
      }
      else {
        uVar14 = 0xc1;
        uVar17 = 0xd9;
      }
      goto LAB_1004cce28;
    }
    if (uVar16 != 0xffffffff) {
      uVar14 = 0xc1;
      uVar17 = 0x103;
      goto LAB_1004cce28;
    }
    if (*(long *)(param_4 + 0x20) == 0) {
      pcVar29 = (code *)0x0;
LAB_1004cd160:
      uVar31 = 1;
    }
    else {
      pcVar29 = *(code **)(*(long *)(param_4 + 0x20) + 0x10);
      if (pcVar29 == (code *)0x0) goto LAB_1004cd160;
      iVar5 = 4;
      (*pcVar29)(4,param_1,param_4,0);
      if (iVar5 == 0) goto LAB_1004cd5f4;
      uVar31 = 0;
    }
    uVar18 = *param_1;
    if (uVar18 == 0) {
      puVar28 = param_1;
      FUN_1004cd9f4(param_1,param_4,0);
      if ((int)puVar28 == 0) {
        uVar14 = 0x9e;
        uVar17 = 0x116;
        goto LAB_1004cce28;
      }
    }
    else {
      uVar1 = *(uint *)(uVar18 + *(long *)(param_4 + 8));
      if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(param_4 + 0x18))) {
        lVar13 = *(long *)(param_4 + 0x10) + (ulong)uVar1 * 0x28;
        puVar28 = param_1;
        if ((*(byte *)(lVar13 + 1) >> 2 & 1) == 0) {
          puVar28 = (ulong *)(uVar18 + *(long *)(lVar13 + 0x10));
        }
        FUN_1004d19dc(puVar28);
        *(undefined4 *)(*param_1 + *(long *)(param_4 + 8)) = 0xffffffff;
      }
    }
    pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,uVar31);
    pcStack_70 = (code *)*param_2;
    lVar13 = *(long *)(param_4 + 0x18);
    if (lVar13 < 1) {
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      puVar28 = *(ulong **)(param_4 + 0x10);
      uStack_88 = pcVar29;
      do {
        puVar30 = param_1;
        if ((*(byte *)((long)puVar28 + 1) >> 2 & 1) == 0) {
          puVar30 = (ulong *)(*param_1 + puVar28[2]);
        }
        FUN_1004ce2d0(puVar30,&pcStack_70,puVar33,puVar28,1,param_8,iVar20 + 1);
        pcVar29 = uStack_88;
        if ((int)puVar30 != -1) {
          if ((int)puVar30 == 0) {
            uVar14 = 0x9e;
            uVar17 = 0x129;
            goto LAB_1004cd29c;
          }
          lVar13 = *(long *)(param_4 + 0x18);
          break;
        }
        lVar32 = lVar32 + 1;
        puVar28 = puVar28 + 5;
        lVar13 = *(long *)(param_4 + 0x18);
      } while (lVar32 < lVar13);
    }
    if (lVar13 == lVar32) {
      if (iVar22 != 0) {
        FUN_1004d164c(param_1,param_4,0);
        return;
      }
      uVar14 = 0xa3;
      uVar17 = 0x135;
      goto LAB_1004cce28;
    }
    *(int *)(*param_1 + *(long *)(param_4 + 8)) = (int)lVar32;
    if (((ulong)pcStack_80 & 1) != 0) {
LAB_1004cd49c:
      *param_2 = pcStack_70;
      return;
    }
    iVar20 = 5;
    (*pcVar29)(5,param_1,param_4,0);
    if (iVar20 != 0) goto LAB_1004cd49c;
  }
LAB_1004cd5f4:
  uVar14 = 0x65;
  uVar17 = 0x1c4;
LAB_1004cce28:
  FUN_1004d2c58(0xc,0,uVar14,&UNK_10f6c4e57,uVar17);
  puVar28 = (ulong *)0x0;
LAB_1004cce30:
  if ((param_6 >> 10 & 1) == 0) {
    FUN_1004d164c(param_1,param_4,0);
  }
  if (puVar28 == (ulong *)0x0) {
    uVar14 = 2;
  }
  else {
    uVar14 = 4;
  }
  FUN_1004d2d00(uVar14);
  return;
}



/* Entry: 1004cd664; end: 1004cd6c7;  */

undefined8 FUN_1004cd664(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = 0;
  puVar1 = &uStack_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  uStack_40 = 0;
  puVar2 = puVar1;
  FUN_1004ccdac();
  if ((int)puVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}



/* Entry: 1004cd6c8; end: 1004cd8d3;  */

undefined8
FUN_1004cd6c8(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,long *param_5,
             long param_6,int param_7,int param_8,char param_9,undefined4 param_10,char *param_11)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lStack_78;
  long lStack_70;
  int iStack_68;
  int iStack_64;
  
  lVar6 = *param_5;
  lStack_78 = lVar6;
  if (param_11 != (char *)0x0) {
    if (*param_11 == '\0') {
      plVar2 = &lStack_78;
      FUN_1004cd8d4(plVar2,&lStack_70,&iStack_64,&iStack_68,param_6);
      uVar1 = (uint)plVar2;
      *(uint *)(param_11 + 4) = uVar1;
      *(long *)(param_11 + 8) = lStack_70;
      *(int *)(param_11 + 0x10) = iStack_64;
      *(int *)(param_11 + 0x14) = iStack_68;
      iVar5 = (int)lStack_78 - (int)lVar6;
      *(int *)(param_11 + 0x18) = iVar5;
      *param_11 = '\x01';
      if (uVar1 < 0x80) {
        if (param_6 < lStack_70 + iVar5) {
          uVar3 = 0xb1;
          uVar4 = 0x39d;
          goto LAB_1004cd86c;
        }
        goto LAB_1004cd7f0;
      }
    }
    else {
      uVar1 = *(uint *)(param_11 + 4);
      lStack_70 = *(long *)(param_11 + 8);
      iStack_64 = *(int *)(param_11 + 0x10);
      iStack_68 = *(int *)(param_11 + 0x14);
      lStack_78 = lVar6 + *(int *)(param_11 + 0x18);
      if ((uVar1 >> 7 & 1) == 0) goto LAB_1004cd7f0;
    }
    uVar3 = 0x67;
    uVar4 = 0x3a5;
LAB_1004cd86c:
    FUN_1004d2c58(0xc,0,uVar3,&UNK_10f6c4e57,uVar4);
    *param_11 = '\0';
    return 0;
  }
  plVar2 = &lStack_78;
  FUN_1004cd8d4(plVar2,&lStack_70,&iStack_64,&iStack_68,param_6);
  uVar1 = (uint)plVar2;
  if (0x7f < uVar1) {
    uVar3 = 0x67;
    uVar4 = 0x3a5;
    goto LAB_1004cd8ac;
  }
LAB_1004cd7f0:
  if (-1 < param_7) {
    if ((iStack_64 != param_7) || (iStack_68 != param_8)) {
      if (param_9 != '\0') {
        return 0xffffffff;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
      uVar3 = 0xbe;
      uVar4 = 0x3b1;
LAB_1004cd8ac:
      FUN_1004d2c58(0xc,0,uVar3,&UNK_10f6c4e57,uVar4);
      return 0;
    }
    if (param_11 != (char *)0x0) {
      *param_11 = '\0';
    }
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = (byte)uVar1 & 0x20;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lStack_70;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)iStack_68;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iStack_64;
  }
  *param_5 = lStack_78;
  return 1;
}



/* Entry: 1004cd8d4; end: 1004cd9f3;  */

uint FUN_1004cd8d4(long *param_1,ulong *param_2,uint *param_3,uint *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  int iStack_44;
  ulong uStack_40;
  uint uStack_38;
  undefined1 auStack_34 [4];
  
  if (param_5 < 0) {
    uVar4 = 0x71;
  }
  else {
    lStack_58 = *param_1;
    plVar3 = &lStack_58;
    lStack_50 = param_5;
    FUN_1002019bc(plVar3,&lStack_68,&uStack_38,&uStack_40,auStack_34,&iStack_44,1);
    if (((((int)plVar3 == 0) || (iStack_44 != 0)) ||
        (uVar2 = uStack_60 - uStack_40, uStack_60 < uStack_40)) ||
       (lStack_68 = lStack_68 + uStack_40, uStack_60 = uVar2, uVar2 >> 0x1e != 0)) {
      uVar4 = 0x87;
    }
    else {
      uVar1 = uStack_38 >> 0x18 & 0xc0;
      if (((uStack_38 & 0x1fffffff) < 0x100) || (uVar1 != 0)) {
        *param_1 = lStack_68;
        *param_2 = uVar2;
        *param_3 = uStack_38 & 0x1fffffff;
        *param_4 = uVar1;
        return uStack_38 >> 0x18 & 0x20;
      }
      uVar4 = 0x92;
    }
  }
  FUN_1004d2c58(0xc,0,0x7b,&UNK_10f6c4c74,uVar4);
  return 0x80;
}



/* Entry: 1004cd9f4; end: 1004cdcfb;  */

undefined8 FUN_1004cd9f4(long *param_1,byte *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  
  bVar2 = *param_2;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_1004cdaf8;
      func_0x0001004cdef8();
      iVar3 = (int)param_1;
      goto joined_r0x0001004cdb04;
    }
    if (bVar2 != 1) {
      return 1;
    }
    if (*(long *)(param_2 + 0x20) == 0) {
      pcVar8 = (code *)0x0;
LAB_1004cdb38:
      bVar13 = true;
    }
    else {
      pcVar8 = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
      if (pcVar8 == (code *)0x0) goto LAB_1004cdb38;
      iVar3 = 0;
      (*pcVar8)(0,param_1,param_2,0);
      if (iVar3 == 0) goto LAB_1004cdbbc;
      bVar13 = false;
      if (iVar3 == 2) {
        return 1;
      }
    }
    if ((int)param_3 != 0) goto LAB_1004cdb40;
    uVar12 = *(ulong *)(param_2 + 0x28);
    if (uVar12 < 0xfffffffffffffff8) {
      puVar5 = (ulong *)(uVar12 + 8);
      func_0x000107c610a0();
      if (puVar5 != (ulong *)0x0) {
        puVar9 = puVar5 + 1;
        *puVar5 = uVar12;
        *param_1 = (long)puVar9;
        if (uVar12 != 0) {
          func_0x000107c60ee4(puVar9,uVar12);
        }
        lVar10 = *(long *)(param_2 + 0x20);
        if (*param_2 == 1) {
          if (lVar10 != 0) {
            if ((*(byte *)(lVar10 + 8) & 1) != 0) {
              *(undefined4 *)((long)puVar9 + (long)*(int *)(lVar10 + 0xc)) = 1;
            }
LAB_1004cdcd0:
            if ((*(byte *)(lVar10 + 8) >> 1 & 1) != 0) {
              puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x18));
              *puVar1 = 0;
              puVar1[1] = 0;
              *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xfc;
              *(undefined4 *)(puVar1 + 2) = 1;
            }
          }
        }
        else if (lVar10 != 0) goto LAB_1004cdcd0;
LAB_1004cdb40:
        if (0 < *(long *)(param_2 + 0x18)) {
          lVar11 = 0;
          lVar10 = *(long *)(param_2 + 0x10);
          do {
            plVar4 = param_1;
            if ((*(byte *)(lVar10 + 1) >> 2 & 1) == 0) {
              plVar4 = (long *)(*param_1 + *(long *)(lVar10 + 0x10));
            }
            func_0x0001004cdef8(plVar4,lVar10);
            if ((int)plVar4 == 0) {
              FUN_1004d164c(param_1,param_2,param_3);
              goto LAB_1004cdc3c;
            }
            lVar10 = lVar10 + 0x28;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(long *)(param_2 + 0x18));
        }
        if (bVar13) {
          return 1;
        }
        goto LAB_1004cdb90;
      }
    }
LAB_1004cdc24:
    *param_1 = 0;
  }
  else {
    if (bVar2 == 2) {
      if (*(long *)(param_2 + 0x20) == 0) {
        pcVar8 = (code *)0x0;
LAB_1004cdb10:
        bVar13 = true;
LAB_1004cdb14:
        if ((int)param_3 == 0) {
          uVar12 = *(ulong *)(param_2 + 0x28);
          if (uVar12 < 0xfffffffffffffff8) {
            puVar5 = (ulong *)(uVar12 + 8);
            func_0x000107c610a0();
            if (puVar5 != (ulong *)0x0) {
              puVar9 = puVar5 + 1;
              *puVar5 = uVar12;
              *param_1 = (long)puVar9;
              if (uVar12 != 0) {
                func_0x000107c60ee4(puVar9,uVar12);
              }
              goto LAB_1004cdb1c;
            }
          }
          goto LAB_1004cdc24;
        }
        puVar9 = (ulong *)*param_1;
LAB_1004cdb1c:
        *(undefined4 *)((long)puVar9 + *(long *)(param_2 + 8)) = 0xffffffff;
        if (bVar13) {
          return 1;
        }
LAB_1004cdb90:
        iVar3 = 1;
        (*pcVar8)(1,param_1,param_2,0);
        if (iVar3 != 0) {
          return 1;
        }
        FUN_1004d164c(param_1,param_2,param_3);
      }
      else {
        pcVar8 = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
        if (pcVar8 == (code *)0x0) goto LAB_1004cdb10;
        iVar3 = 0;
        (*pcVar8)(0,param_1,param_2,0);
        if (iVar3 != 0) {
          bVar13 = false;
          if (iVar3 == 2) {
            return 1;
          }
          goto LAB_1004cdb14;
        }
      }
LAB_1004cdbbc:
      uVar6 = 0x65;
      uVar7 = 0xbb;
      goto LAB_1004cdc54;
    }
    if (bVar2 == 5) {
LAB_1004cdaf8:
      func_0x0001004cdffc(param_1,param_2);
      iVar3 = (int)param_1;
    }
    else {
      if (bVar2 != 4) {
        return 1;
      }
      if (*(long *)(param_2 + 0x20) == 0) {
        return 1;
      }
      pcVar8 = *(code **)(*(long *)(param_2 + 0x20) + 8);
      if (pcVar8 == (code *)0x0) {
        return 1;
      }
      (*pcVar8)(param_1,param_2);
      iVar3 = (int)param_1;
    }
joined_r0x0001004cdb04:
    if (iVar3 != 0) {
      return 1;
    }
  }
LAB_1004cdc3c:
  uVar6 = 0x41;
  uVar7 = 0xb5;
LAB_1004cdc54:
  FUN_1004d2c58(0xc,0,uVar6,&UNK_10f6c4f58,uVar7);
  return 0;
}



/* Entry: 1004cdcfc; end: 1004ce12b;  */

undefined8 FUN_1004cdcfc(int param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uStack_28;
  
  param_2 = (undefined8 *)*param_2;
  if (param_1 < 4) {
    if (param_1 != 1) {
      if (param_1 == 3) {
        func_0x000107c61280(param_2 + 0x16);
        FUN_10021f290(0x113311570,param_2,param_2 + 4);
        uStack_28 = param_2[0x14];
        FUN_1004d164c(&uStack_28,&UNK_110c87968,0);
        func_0x000107c2b1a8(param_2[0xb]);
        uStack_28 = param_2[0xc];
        FUN_1004d164c(&uStack_28,&DAT_110c87a80,0);
        uStack_28 = param_2[0xe];
        FUN_1004d164c(&uStack_28,&DAT_110c88320,0);
        func_0x000107c2b654(param_2[0xd]);
        uStack_28 = param_2[0xf];
        FUN_1004d164c(&uStack_28,&DAT_110c88d38,0);
        uStack_28 = param_2[0x10];
        FUN_1004d164c(&uStack_28,&DAT_110c894a0,0);
        FUN_100229fdc(param_2[0x15]);
        return 1;
      }
      return 1;
    }
    param_2[7] = 0;
    param_2[0xe] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[4] = 0;
    param_2[5] = 0xffffffffffffffff;
    puVar2 = param_2 + 0x16;
    func_0x000107c61284(puVar2,0);
    if ((int)puVar2 == 0) {
      return 1;
    }
    func_0x000107c60ebc();
LAB_1004cde68:
    FUN_100229fdc(param_2[0x15]);
    param_2[0x15] = 0;
    return 1;
  }
  if (param_1 == 4) goto LAB_1004cde68;
  if (param_1 != 5) {
    return 1;
  }
  puVar5 = (ulong *)*param_2;
  uVar1 = *puVar5;
  if (uVar1 == 0) {
LAB_1004cde94:
    if ((puVar5[7] != 0) || (puVar5[8] != 0)) {
      uVar3 = 0x8b;
      uVar4 = 0x87;
      goto LAB_1004cdee0;
    }
  }
  else {
    func_0x0001004d1e5c(uVar1,2);
    if (2 < uVar1) {
      uVar3 = 0x8c;
      uVar4 = 0x7f;
      goto LAB_1004cdee0;
    }
    if (uVar1 == 0) {
      puVar5 = (ulong *)*param_2;
      goto LAB_1004cde94;
    }
    if (uVar1 == 2) {
      return 1;
    }
    puVar5 = (ulong *)*param_2;
  }
  if (puVar5[9] == 0) {
    return 1;
  }
  uVar3 = 0x8b;
  uVar4 = 0x8d;
LAB_1004cdee0:
  FUN_1004d2c58(0xb,0,uVar3,&UNK_10f6ce546,uVar4);
  return 0;
}



/* Entry: 1004ce12c; end: 1004ce1ff;  */

undefined8 FUN_1004ce12c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0xb,0,0x41,&UNK_10f6ce38a,0xa1);
  }
  else {
    *puVar1 = 0x28;
    lVar2 = 0;
    FUN_1001e2bf4();
    plVar3 = puVar1 + 1;
    *plVar3 = lVar2;
    if (lVar2 != 0) {
      FUN_1001e6bb0();
      puVar1[3] = lVar2;
      if (lVar2 != 0) {
        puVar1[4] = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined4 *)(puVar1 + 2) = 1;
        *param_1 = plVar3;
        return 1;
      }
    }
    FUN_1004d2c58(0xb,0,0x41,&UNK_10f6ce38a,0xa1);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      FUN_1001e33e0(*(undefined8 *)(lVar2 + 8));
      FUN_1001e33e0(lVar2);
    }
    FUN_1001e33e0(plVar3);
  }
  return 0;
}



/* Entry: 1004ce200; end: 1004ce227;  */

undefined8 FUN_1004ce200(int param_1,long *param_2)

{
  if (param_1 == 3) {
    FUN_10021f114(*(undefined8 *)(*param_2 + 0x10));
  }
  return 1;
}



/* Entry: 1004ce228; end: 1004ce2cf;  */

long FUN_1004ce228(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 1) & 3) != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(*param_1 + *(long *)(lVar4 + 8));
    if (lVar1 == 0) {
      param_2 = *(long *)(lVar4 + 0x30);
    }
    else {
      FUN_10072ec28();
      lVar3 = *(long *)(lVar4 + 0x20);
      if (0 < lVar3) {
        lVar2 = *(long *)(lVar4 + 0x18) + 8;
        do {
          if (*(int *)(lVar2 + -8) == (int)lVar1) {
            return lVar2;
          }
          lVar2 = lVar2 + 0x30;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      param_2 = *(long *)(lVar4 + 0x28);
    }
    if (param_2 == 0) {
      if (param_3 != 0) {
        FUN_1004d2c58(0xc,0,0xba,&UNK_10f6c50d3,0x112);
      }
      param_2 = 0;
    }
  }
  return param_2;
}



/* Entry: 1004ce2d0; end: 1004ce75b;  */

/* WARNING: Possible PIC construction at 0x0001004ce3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004ce3c8) */
/* WARNING: Removing unreachable block (ram,0x0001004ce404) */
/* WARNING: Removing unreachable block (ram,0x0001004ce3cc) */
/* WARNING: Removing unreachable block (ram,0x0001004ce440) */
/* WARNING: Removing unreachable block (ram,0x0001004ce3dc) */

void FUN_1004ce2d0(long *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined4 uVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *plVar12;
  char *pcVar13;
  undefined8 unaff_x25;
  char *pcVar14;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_100 [136];
  undefined8 uStack_78;
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = &stack0xfffffffffffffff0;
  if (param_1 == (long *)0x0) {
    return;
  }
  uStack_60 = *param_2;
  puVar2 = param_2;
  if ((*param_4 >> 4 & 1) != 0) {
    auStack_100[0x80] = (undefined1)param_5;
    puVar2 = &uStack_58;
    uStack_78 = param_6;
    FUN_1004cd6c8(puVar2,0,0,&cStack_61,&uStack_60,param_3,param_4[2],*param_4 & 0xc0);
    if ((int)puVar2 == -1) {
      return;
    }
    if ((int)puVar2 == 0) {
      uVar6 = 0x9e;
      uVar7 = 0x1f7;
LAB_1004ce41c:
      FUN_1004d2c58(0xc,0,uVar6,&UNK_10f6c4e57,uVar7);
      return;
    }
    if (cStack_61 == '\0') {
      uVar6 = 0x78;
      uVar7 = 0x1fc;
      goto LAB_1004ce41c;
    }
    puVar2 = &uStack_60;
    param_5 = 0;
    unaff_x30 = 0x1004ce3c8;
    register0x00000008 = (BADSPACEBASE *)(auStack_100 + 0x80);
    param_3 = uStack_58;
    unaff_x19 = param_4;
    unaff_x20 = param_1;
    unaff_x21 = param_2;
    unaff_x22 = param_7;
    unaff_x23 = param_6;
    unaff_x24 = uStack_58;
    unaff_x25 = uStack_60;
    unaff_x29 = puVar3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar1 = *param_4;
  uVar8 = uVar1 & 0xc0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = *puVar2;
  *(undefined8 *)((long)register0x00000008 + -0x58) = param_3;
  uVar11 = (undefined4)param_7;
  if ((uVar1 & 6) == 0) {
    uVar6 = *(undefined8 *)(param_4 + 8);
    if ((uVar1 >> 3 & 1) == 0) {
      *(undefined4 *)((long)register0x00000008 + -0x80) = uVar11;
      plVar12 = param_1;
      FUN_1004ccdac(param_1,(undefined1 *)((long)register0x00000008 + -0x60),param_3,uVar6,
                    0xffffffff,uVar1 & 0x400,param_5,param_6);
      if ((int)plVar12 == -1) {
        return;
      }
      if ((int)plVar12 == 0) {
        uVar6 = 0x9e;
        uVar7 = 0x276;
LAB_1004ce708:
        FUN_1004d2c58(0xc,0,uVar6,&UNK_10f6c4e57,uVar7);
        FUN_1004d19dc(param_1,param_4);
        return;
      }
    }
    else {
      uVar1 = param_4[2];
      *(undefined4 *)((long)register0x00000008 + -0x80) = uVar11;
      plVar12 = param_1;
      FUN_1004ccdac(param_1,(undefined1 *)((long)register0x00000008 + -0x60),param_3,uVar6,uVar1,
                    uVar8,param_5,param_6);
      if ((int)plVar12 == -1) {
        return;
      }
      if ((int)plVar12 == 0) {
        uVar6 = 0x9e;
        uVar7 = 0x26c;
        goto LAB_1004ce708;
      }
    }
  }
  else {
    if ((uVar1 >> 3 & 1) == 0) {
      uVar8 = 0;
      uVar10 = 0x10;
      if ((uVar1 & 2) != 0) {
        uVar10 = 0x11;
      }
    }
    else {
      uVar10 = param_4[2];
    }
    *(undefined8 *)((long)register0x00000008 + -0x78) = param_6;
    *(char *)((long)register0x00000008 + -0x80) = (char)param_5;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_1004cd6c8(puVar3,0,0,0,(undefined1 *)((long)register0x00000008 + -0x60),param_3,uVar10,uVar8
                 );
    if ((int)puVar3 == -1) {
      return;
    }
    if ((int)puVar3 == 0) {
      FUN_1004d2c58(0xc,0,0x9e,&UNK_10f6c4e57,0x238);
      return;
    }
    plVar12 = (long *)*param_1;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
      func_0x0001001e2bf4();
      *param_1 = (long)plVar12;
    }
    else {
      lVar9 = *plVar12;
      if (lVar9 != 0) {
        do {
          plVar4 = plVar12;
          FUN_1007345d8(plVar12,lVar9 + -1);
          *(long **)((long)register0x00000008 + -0x68) = plVar4;
          FUN_1004d164c((undefined1 *)((long)register0x00000008 + -0x68),
                        *(undefined8 *)(param_4 + 8),0);
          lVar9 = *plVar12;
        } while (lVar9 != 0);
        plVar12 = (long *)*param_1;
      }
    }
    if (plVar12 == (long *)0x0) {
      uVar6 = 0x41;
      uVar7 = 0x24b;
      goto LAB_1004ce708;
    }
    for (pcVar13 = *(char **)((long)register0x00000008 + -0x58); 0 < (long)pcVar13;
        pcVar13 = pcVar14 + ((long)pcVar13 - lVar9)) {
      pcVar14 = *(char **)((long)register0x00000008 + -0x60);
      if (((pcVar13 != (char *)0x1) && (*pcVar14 == '\0')) && (pcVar14[1] == '\0')) {
        *(char **)((long)register0x00000008 + -0x60) = pcVar14 + 2;
        uVar6 = 0xb4;
        uVar7 = 599;
        goto LAB_1004ce708;
      }
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      uVar6 = *(undefined8 *)(param_4 + 8);
      *(undefined4 *)((long)register0x00000008 + -0x80) = uVar11;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x68);
      FUN_1004ccdac(puVar3,(undefined1 *)((long)register0x00000008 + -0x60),pcVar13,uVar6,0xffffffff
                    ,0,0,param_6);
      if ((int)puVar3 == 0) {
        uVar6 = 0x9e;
        uVar7 = 0x25d;
        goto LAB_1004ce708;
      }
      lVar9 = *(long *)((long)register0x00000008 + -0x60);
      puVar5 = (undefined8 *)*param_1;
      func_0x0001001e2c8c(puVar5,*(undefined8 *)((long)register0x00000008 + -0x68),*puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        FUN_1004d164c((undefined1 *)((long)register0x00000008 + -0x68),*(undefined8 *)(param_4 + 8),
                      0);
        uVar6 = 0x41;
        uVar7 = 0x263;
        goto LAB_1004ce708;
      }
    }
  }
  *puVar2 = *(undefined8 *)((long)register0x00000008 + -0x60);
  return;
}



/* Entry: 1004ce75c; end: 1004cec57;  */

void FUN_1004ce75c(ulong *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,ulong param_5
                  ,undefined4 param_6,int param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  byte **ppbVar2;
  uint **ppuVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  uint *puVar14;
  ulong *puVar15;
  uint uVar16;
  byte *pbStack_90;
  char cStack_81;
  byte *pbStack_80;
  uint uStack_74;
  byte *pbStack_70;
  uint *puStack_68;
  
  uVar16 = (uint)param_5;
  if (*param_4 == '\x05') {
    uStack_74 = uVar16;
    if (uVar16 == 0xfffffffc) {
      param_5 = 0xffffffff;
LAB_1004ce7ec:
      if (param_7 != 0) {
        uVar6 = 0x87;
        uVar7 = 0x2a2;
        goto LAB_1004ce86c;
      }
      pbStack_90 = (byte *)*param_2;
      iVar11 = 0;
      FUN_1004cd6c8(0,&uStack_74,&puStack_68,0,&pbStack_90,param_3,0xffffffff,0,0);
      if (iVar11 == 0) {
        uVar6 = 0x9e;
        uVar7 = 0x2a9;
        goto LAB_1004ce86c;
      }
      if ((char)puStack_68 == '\0') {
        uVar9 = (ulong)uStack_74;
      }
      else {
        uStack_74 = 0xfffffffd;
        uVar9 = 0xfffffffd;
      }
    }
    else {
      uVar9 = param_5;
      param_5 = 0xffffffff;
    }
  }
  else {
    uStack_74 = *(uint *)(param_4 + 8);
    uVar9 = (ulong)uStack_74;
    if (uStack_74 == 0xfffffffc) {
      if (-1 < (int)uVar16) {
        uVar6 = 0x89;
        uVar7 = 0x29e;
        goto LAB_1004ce86c;
      }
      goto LAB_1004ce7ec;
    }
  }
  uVar8 = (uint)uVar9;
  uVar16 = uVar8;
  uVar1 = 0;
  if ((uint)param_5 != 0xffffffff) {
    uVar16 = (uint)param_5;
    uVar1 = param_6;
  }
  pbStack_90 = (byte *)*param_2;
  ppbVar2 = &pbStack_80;
  FUN_1004cd6c8(ppbVar2,0,0,&cStack_81,&pbStack_90,param_3,uVar16,uVar1,(char)param_7);
  if ((int)ppbVar2 == -1) {
    return;
  }
  if ((int)ppbVar2 == 0) {
    uVar6 = 0x9e;
    uVar7 = 0x2b8;
LAB_1004ce86c:
    FUN_1004d2c58(0xc,0,uVar6,&UNK_10f6c4e57,uVar7);
    return;
  }
  if (uVar8 - 0x10 < 2) {
    if (cStack_81 == '\0') {
      uVar6 = 0xb2;
      uVar7 = 0x2c9;
      goto LAB_1004ce86c;
    }
LAB_1004ce91c:
    pbVar10 = (byte *)*param_2;
    pbVar12 = pbStack_90 + ((long)pbStack_80 - (long)*param_2);
  }
  else {
    if (uVar8 == 0xfffffffd) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_1004ce91c;
    }
    pbVar10 = pbStack_90;
    pbVar12 = pbStack_80;
    if (cStack_81 != '\0') {
      uVar6 = 0xb3;
      uVar7 = 0x2d4;
      goto LAB_1004ce86c;
    }
  }
  pbStack_90 = pbStack_90 + (long)pbStack_80;
  pbStack_70 = pbVar10;
  if (*(long *)(param_4 + 8) == -4) {
    puVar14 = (uint *)*param_1;
    if ((uint *)*param_1 == (uint *)0x0) {
      puStack_68 = (uint *)0x0;
      ppuVar3 = &puStack_68;
      FUN_1004cd9f4(ppuVar3,&DAT_110c7b9f0,0);
      if (((int)ppuVar3 == 0) || (puStack_68 == (uint *)0x0)) {
        puStack_68 = (uint *)0x0;
        FUN_1004d164c(&puStack_68,&DAT_110c7b9f0,0);
        return;
      }
      *param_1 = (ulong)puStack_68;
      puVar14 = puStack_68;
    }
    if (*puVar14 != uVar8) {
      puStack_68 = puVar14;
      FUN_1004cf1b4(&puStack_68,0);
      *puStack_68 = uVar8;
      if (uVar8 == 1) {
        puStack_68[2] = 0;
      }
      else {
        puStack_68[2] = 0;
        puStack_68[3] = 0;
      }
    }
    puVar5 = (ulong *)(puVar14 + 2);
    puVar15 = param_1;
  }
  else {
    puVar14 = (uint *)0x0;
    puVar15 = (ulong *)0x0;
    puVar5 = param_1;
  }
  iVar11 = (int)pbVar12;
  if ((int)uVar8 < 6) {
    if ((int)uVar8 < 3) {
      if (uVar8 != 1) {
        if (uVar8 == 2) goto LAB_1004cea58;
        goto LAB_1004ceb4c;
      }
      if (iVar11 == 1) {
        *(uint *)puVar5 = (uint)*pbVar10;
        goto LAB_1004cec08;
      }
      uVar6 = 0x6a;
      uVar7 = 0x314;
    }
    else {
      if (uVar8 == 3) {
        FUN_1004d1ba8(puVar5,&pbStack_70,(long)iVar11);
        if (puVar5 == (ulong *)0x0) goto LAB_1004cec34;
        goto LAB_1004cec08;
      }
      if (uVar8 != 5) goto LAB_1004ceb4c;
      if (iVar11 == 0) {
        *puVar5 = 1;
        goto LAB_1004cebf8;
      }
      uVar6 = 0xa4;
      uVar7 = 0x30c;
    }
    goto LAB_1004cec30;
  }
  if ((int)uVar8 < 0x1c) {
    if (uVar8 == 6) {
      func_0x0001004cef74(puVar5,&pbStack_70,(long)iVar11);
      if (puVar5 != (ulong *)0x0) goto LAB_1004cec08;
      goto LAB_1004cec34;
    }
    if (uVar8 == 10) {
LAB_1004cea58:
      puVar4 = puVar5;
      FUN_1004cec58(puVar5,&pbStack_70,(long)iVar11);
      if (puVar4 == (ulong *)0x0) goto LAB_1004cec34;
      *(uint *)(*puVar5 + 4) = *(uint *)(*puVar5 + 4) & 0x100 | uVar8;
LAB_1004cebf8:
      if ((uVar8 == 5) && (puVar14 != (uint *)0x0)) {
        puVar14[2] = 0;
        puVar14[3] = 0;
      }
      goto LAB_1004cec08;
    }
LAB_1004ceb4c:
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      func_0x0001004ce0c4();
      if (uVar9 == 0) {
        uVar6 = 0x41;
        uVar7 = 0x349;
        goto LAB_1004cec30;
      }
      *puVar5 = uVar9;
    }
    else {
      *(uint *)(uVar13 + 4) = uVar8;
      uVar9 = uVar13;
    }
    uVar13 = uVar9;
    FUN_1004cee54(uVar9,pbVar10,pbVar12);
    if ((int)uVar13 != 0) {
LAB_1004cec08:
      *param_2 = pbStack_90;
      return;
    }
    FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4e57,0x352);
    FUN_1001e33e0(*(undefined8 *)(uVar9 + 8));
    FUN_1001e33e0(uVar9);
    *puVar5 = 0;
  }
  else {
    if (uVar8 == 0x1c) {
      if (((ulong)pbVar12 & 3) == 0) goto LAB_1004ceb4c;
      uVar6 = 0xb5;
      uVar7 = 0x342;
    }
    else {
      if ((uVar8 != 0x1e) || (((ulong)pbVar12 & 1) == 0)) goto LAB_1004ceb4c;
      uVar6 = 0x68;
      uVar7 = 0x33e;
    }
LAB_1004cec30:
    FUN_1004d2c58(0xc,0,uVar6,&UNK_10f6c4e57,uVar7);
  }
LAB_1004cec34:
  puStack_68 = puVar14;
  FUN_1004d164c(&puStack_68,&DAT_110c7b9f0,0);
  if (puVar15 == (ulong *)0x0) {
    return;
  }
  *puVar15 = 0;
  return;
}



/* Entry: 1004cec58; end: 1004cee53;  */

int * FUN_1004cec58(undefined8 *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  char *pcVar12;
  
  if (param_3 >> 0x1e != 0) {
    uVar5 = 0xb1;
    uVar6 = 0xbb;
    goto LAB_1004ced34;
  }
  if (param_3 == 0) {
LAB_1004ced1c:
    uVar5 = 0xc4;
    uVar6 = 0xc3;
LAB_1004ced34:
    FUN_1004d2c58(0xc,0,uVar5,&UNK_10f6c491b,uVar6);
    return (int *)0x0;
  }
  pcVar12 = (char *)*param_2;
  cVar1 = *pcVar12;
  if (param_3 != 1) {
    if ((-1 < pcVar12[1] && cVar1 == '\0') || (pcVar12[1] < '\0' && cVar1 == -1))
    goto LAB_1004ced1c;
  }
  if ((param_1 == (undefined8 *)0x0) || (piVar11 = (int *)*param_1, piVar11 == (int *)0x0)) {
    piVar11 = (int *)0x2;
    func_0x0001004ce0c4();
    if (piVar11 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  if (cVar1 < '\0') {
    uVar10 = param_3;
    if (*pcVar12 == -1) {
      if (param_3 == 1) {
        uVar10 = 1;
      }
      else {
        if (pcVar12[1] == '\0') {
          uVar3 = 2;
          do {
            uVar7 = uVar3;
            if (param_3 == uVar7) goto LAB_1004cedb4;
            uVar3 = uVar7 + 1;
          } while (pcVar12[uVar7] == '\0');
          if (param_3 - 1 <= uVar7 - 1) goto LAB_1004cedb4;
        }
LAB_1004ced70:
        pcVar12 = pcVar12 + 1;
        uVar10 = param_3 - 1;
      }
    }
LAB_1004cedb4:
    piVar4 = piVar11;
    FUN_1004cee54(piVar11,pcVar12,uVar10);
    if ((int)piVar4 == 0) {
LAB_1004cede8:
      if ((param_1 != (undefined8 *)0x0) && ((int *)*param_1 == piVar11)) {
        return (int *)0x0;
      }
      FUN_1001e33e0(*(undefined8 *)(piVar11 + 2));
      FUN_1001e33e0(piVar11);
      return (int *)0x0;
    }
    if (cVar1 < '\0') {
      piVar11[1] = 0x102;
      iVar2 = *piVar11;
      if (iVar2 != 0) {
        bVar8 = 0;
        lVar9 = *(long *)(piVar11 + 2);
        uVar10 = (long)iVar2 - 1;
        do {
          cVar1 = *(char *)(lVar9 + uVar10);
          *(byte *)(lVar9 + uVar10) = -cVar1 - bVar8;
          bVar8 = bVar8 | cVar1 != '\0';
          uVar10 = uVar10 - 1;
        } while (uVar10 < (ulong)(long)iVar2);
      }
      goto LAB_1004cedd0;
    }
  }
  else {
    if (*pcVar12 == '\0') goto LAB_1004ced70;
    piVar4 = piVar11;
    FUN_1004cee54(piVar11,pcVar12,param_3);
    if ((int)piVar4 == 0) goto LAB_1004cede8;
  }
  piVar11[1] = 2;
LAB_1004cedd0:
  *param_2 = *param_2 + param_3;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = piVar11;
    return piVar11;
  }
  return piVar11;
}



/* Entry: 1004cee54; end: 1004cf14f;  */

undefined8 FUN_1004cee54(int *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 < 0) {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = param_2;
    func_0x000107c613d0();
    param_3 = (int)lVar2;
  }
  plVar3 = *(long **)(param_1 + 2);
  plVar4 = plVar3;
  if (param_3 < *param_1) {
    if (plVar3 != (long *)0x0) goto LAB_1004ceefc;
  }
  else if (plVar3 != (long *)0x0) {
    FUN_1001e43fc(plVar3,(long)(param_3 + 1));
    *(long **)(param_1 + 2) = plVar4;
    if (plVar4 != (long *)0x0) goto LAB_1004ceefc;
    goto LAB_1004cef34;
  }
  uVar1 = param_3 + 1;
  if (uVar1 < 0xfffffff8) {
    plVar4 = (long *)((long)(int)uVar1 + 8);
    func_0x000107c610a0();
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(int)uVar1;
      *(long **)(param_1 + 2) = plVar4 + 1;
      plVar4 = plVar4 + 1;
LAB_1004ceefc:
      *param_1 = param_3;
      if (param_2 != 0) {
        if (param_3 != 0) {
          func_0x000107c610b4(plVar4,param_2,(long)param_3);
          plVar4 = *(long **)(param_1 + 2);
        }
        *(undefined1 *)((long)plVar4 + (long)param_3) = 0;
      }
      return 1;
    }
  }
  plVar3 = (long *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
LAB_1004cef34:
  FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4c74,0x127);
  *(long **)(param_1 + 2) = plVar3;
  return 0;
}



/* Entry: 1004cf150; end: 1004cf1b3;  */

undefined8 * FUN_1004cf150(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4a15,0x100);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0x28;
    puVar2 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar2 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 5) = 1;
  }
  return puVar2;
}



/* Entry: 1004cf1b4; end: 1004cf277;  */

void FUN_1004cf1b4(long *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (param_2 == (char *)0x0) {
    piVar2 = (int *)*param_1;
    param_1 = (long *)(piVar2 + 2);
    iVar1 = *piVar2;
    if (iVar1 == 1) {
      iVar1 = -1;
LAB_1004cf208:
      *(int *)param_1 = iVar1;
      return;
    }
LAB_1004cf210:
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return;
    }
    if (iVar1 == -4) {
      FUN_1004cf1b4(param_1,0);
      FUN_1001e33e0(*param_1);
      goto LAB_1004cf250;
    }
    if (iVar1 == 5) goto LAB_1004cf250;
    if (iVar1 == 6) {
      FUN_1004d1a84(lVar3);
      goto LAB_1004cf250;
    }
  }
  else {
    if (*param_2 != '\x05') {
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 == 1) {
        iVar1 = *(int *)(param_2 + 0x28);
        goto LAB_1004cf208;
      }
      goto LAB_1004cf210;
    }
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_1001e33e0(*(undefined8 *)(lVar3 + 8));
  FUN_1001e33e0(lVar3);
  *param_1 = 0;
LAB_1004cf250:
  *param_1 = 0;
  return;
}



/* Entry: 1004cf278; end: 1004cf35b;  */

undefined8 FUN_1004cf278(long *param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (lVar4 = *(long *)(param_4 + 0x20), lVar4 == 0)) {
    return 1;
  }
  if ((*(byte *)(lVar4 + 8) >> 1 & 1) != 0) {
    plVar1 = (long *)(*param_1 + (long)*(int *)(lVar4 + 0x18));
    bVar2 = *(byte *)((long)plVar1 + 0x14);
    if ((bVar2 & 1) == 0) {
      FUN_1001e33e0(*plVar1);
      bVar2 = *(byte *)((long)plVar1 + 0x14);
    }
    *(byte *)((long)plVar1 + 0x14) = bVar2 & 0xfc | bVar2 >> 1 & 1;
    if ((bVar2 >> 1 & 1) == 0) {
      if (0xfffffff7 < param_3) {
LAB_1004cf348:
        *plVar1 = 0;
        return 0;
      }
      lVar4 = (long)(int)param_3;
      plVar3 = (long *)(lVar4 + 8);
      func_0x000107c610a0();
      if (plVar3 == (long *)0x0) goto LAB_1004cf348;
      *plVar3 = lVar4;
      *plVar1 = (long)(plVar3 + 1);
      if (param_3 == 0) {
        lVar4 = 0;
      }
      else {
        func_0x000107c610b4(plVar3 + 1,param_2,lVar4);
      }
    }
    else {
      *plVar1 = param_2;
      lVar4 = (long)(int)param_3;
    }
    plVar1[1] = lVar4;
    *(undefined4 *)(plVar1 + 2) = 0;
  }
  return 1;
}



/* Entry: 1004cf35c; end: 1004cf553;  */

void FUN_1004cf35c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong **ppuVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plStack_70;
  ulong *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar9 = *param_2;
  puStack_68 = (ulong *)0x0;
  if (0xfffff < param_3) {
    param_3 = 0x100000;
  }
  ppuVar3 = &puStack_68;
  lStack_60 = lVar9;
  FUN_1004ccdac(ppuVar3,&lStack_60,param_3,&UNK_110c873a8);
  puVar1 = puStack_68;
  if (0 < (int)ppuVar3) {
    if (*param_1 != 0) {
      FUN_1004cf584(param_1);
    }
    plStack_70 = (long *)0x0;
    iVar2 = (int)&plStack_70;
    FUN_1004ce12c();
    plVar8 = plStack_70;
    if (iVar2 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      lVar4 = plStack_70[2];
      FUN_1004cc558(lVar4,lStack_60 - lVar9);
      if (lVar4 != 0) {
        if (lStack_60 - lVar9 != 0) {
          func_0x000107c610b4(*(undefined8 *)(plVar8[2] + 8),lVar9,lStack_60 - lVar9);
        }
        if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0)) {
          uVar10 = 0;
          do {
            puVar11 = *(ulong **)(puVar1[1] + uVar10 * 8);
            if ((puVar11 != (ulong *)0x0) && (*puVar11 != 0)) {
              uVar12 = 0;
              do {
                lVar9 = *(long *)(puVar11[1] + uVar12 * 8);
                *(int *)(lVar9 + 0x10) = (int)uVar10;
                puVar5 = (undefined8 *)*plVar8;
                func_0x0001001e2c8c(puVar5,lVar9,*puVar5);
                if (puVar5 == (undefined8 *)0x0) goto LAB_1004cf4c0;
                uVar7 = *puVar11;
                if (uVar12 < uVar7) {
                  *(undefined8 *)(puVar11[1] + uVar12 * 8) = 0;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar7);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *puVar1);
        }
        plVar6 = plVar8;
        FUN_1004cf640();
        if ((int)plVar6 != 0) {
          FUN_1004d1b04(puVar1,FUN_1004d1af8,FUN_1004d1b74);
          *(undefined4 *)(plVar8 + 1) = 0;
          *param_1 = (long)plVar8;
          *param_2 = lStack_60;
          return;
        }
      }
    }
LAB_1004cf4c0:
    plStack_58 = plVar8;
    FUN_1004d164c(&plStack_58,&DAT_110c87418,0);
    if (puVar1 != (ulong *)0x0) {
      uVar10 = *puVar1;
      if (uVar10 != 0) {
        uVar12 = 0;
        do {
          if (*(long *)(puVar1[1] + uVar12 * 8) != 0) {
            FUN_1004d18b8();
            uVar10 = *puVar1;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar10);
      }
      FUN_1001e33e0(puVar1[1]);
      FUN_1001e33e0(puVar1);
    }
    FUN_1004d2c58(0xb,0,0xc,&UNK_10f6ce38a,0x101);
  }
  return;
}



/* Entry: 1004cf554; end: 1004cf583;  */

void FUN_1004cf554(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(param_1 + 8));
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004cf584; end: 1004cf63f;  */

void FUN_1004cf584(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_48;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar3 = (undefined8 *)*param_1, puVar3 != (undefined8 *)0x0)) {
    FUN_1004cf554(puVar3[2]);
    puVar4 = (ulong *)*puVar3;
    if (puVar4 != (ulong *)0x0) {
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        uVar5 = 0;
        do {
          lVar2 = *(long *)(puVar4[1] + uVar5 * 8);
          if (lVar2 != 0) {
            lStack_48 = lVar2;
            FUN_1004d164c(&lStack_48,&DAT_110c872e8,0);
            uVar1 = *puVar4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      FUN_1001e33e0(puVar4[1]);
      FUN_1001e33e0(puVar4);
    }
    if (puVar3[3] != 0) {
      FUN_1001e33e0();
    }
    FUN_1001e33e0(puVar3);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1004cf640; end: 1004cf9c3;  */

undefined8 FUN_1004cf640(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined4 *puVar19;
  ulong uVar20;
  int iVar21;
  ulong *puStack_68;
  
  if (param_1[3] != 0) {
    FUN_1001e33e0();
    param_1[3] = 0;
  }
  if (((long *)*param_1 == (long *)0x0) || (*(long *)*param_1 == 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar17 = 1;
  }
  else {
    puVar5 = (ulong *)0x0;
    FUN_1001e2bf4();
    puVar3 = PTR___DefaultRuneLocale_11034bcf8;
    if (puVar5 != (ulong *)0x0) {
      puVar16 = (undefined8 *)0x0;
      uVar20 = 0;
      iVar21 = -1;
LAB_1004cf6b0:
      puVar11 = (ulong *)*param_1;
      if ((puVar11 == (ulong *)0x0) || (*puVar11 <= uVar20)) {
        puVar11 = puVar5;
        FUN_1004d0b78(puVar5,0);
        if ((int)puVar11 < 0) goto LAB_1004cf960;
        *(int *)(param_1 + 4) = (int)puVar11;
        puVar10 = (ulong *)(((ulong)puVar11 & 0xffffffff) + 8);
        func_0x000107c610a0();
        if (puVar10 == (ulong *)0x0) {
          uVar17 = 0;
          puStack_68 = (ulong *)0x0;
        }
        else {
          puStack_68 = puVar10 + 1;
          *puVar10 = (ulong)puVar11 & 0xffffffff;
          param_1[3] = (long)puStack_68;
          FUN_1004d0b78(puVar5,&puStack_68);
          uVar17 = 1;
        }
        goto LAB_1004cf964;
      }
      puVar11 = *(ulong **)(puVar11[1] + uVar20 * 8);
      if ((int)puVar11[2] != iVar21) {
        puVar16 = (undefined8 *)0x0;
        FUN_1001e2bf4();
        if (puVar16 == (undefined8 *)0x0) goto LAB_1004cf960;
        puVar10 = puVar5;
        func_0x0001001e2c8c(puVar5,puVar16,*puVar5);
        if (puVar10 == (ulong *)0x0) {
          FUN_1001e33e0(puVar16[1]);
          FUN_1001e33e0(puVar16);
          goto LAB_1004cf960;
        }
        iVar21 = (int)puVar11[2];
      }
      puStack_68 = (ulong *)0x0;
      ppuVar6 = &puStack_68;
      FUN_1004cd9f4(ppuVar6,&DAT_110c872e8,0);
      puVar10 = puStack_68;
      uVar17 = 0;
      if (((int)ppuVar6 == 0) || (puStack_68 == (ulong *)0x0)) goto LAB_1004cf964;
      uVar7 = *puVar11;
      FUN_1004cf9c4();
      *puVar10 = uVar7;
      piVar18 = (int *)puVar10[1];
      puVar19 = (undefined4 *)puVar11[1];
      if ((uint)puVar19[1] < 0x1f && (1L << ((ulong)(uint)puVar19[1] & 0x3f) & 0xaba7efffU) == 0) {
        piVar18[1] = 0xc;
        piVar9 = piVar18 + 2;
        FUN_1004cfb18(piVar9,puVar19);
        iVar4 = (int)piVar9;
        *piVar18 = iVar4;
        if (iVar4 != -1) {
          pbVar12 = *(byte **)(piVar18 + 2);
          if (0 < iVar4) {
            uVar15 = (ulong)piVar9 & 0xffffffff;
            iVar4 = iVar4 + 1;
            uVar7 = uVar15;
            pbVar13 = pbVar12;
            do {
              if (((long)(char)*pbVar13 < 0) ||
                 ((*(uint *)(puVar3 + (long)(char)*pbVar13 * 4 + 0x3c) >> 0xe & 1) == 0))
              goto LAB_1004cf80c;
              pbVar13 = pbVar13 + 1;
              uVar7 = uVar7 - 1;
              iVar4 = iVar4 + -1;
            } while (1 < iVar4);
          }
          goto LAB_1004cf82c;
        }
      }
      else {
        piVar9 = piVar18;
        FUN_1004cee54(piVar18,*(undefined8 *)(puVar19 + 2),*puVar19);
        if ((int)piVar9 != 0) {
          piVar18[1] = puVar19[1];
          *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(puVar19 + 4);
          goto LAB_1004cf780;
        }
      }
      goto LAB_1004cf928;
    }
    uVar17 = 0;
  }
  return uVar17;
  while (uVar7 = (ulong)(iVar4 - 1U), iVar4 - 1U != 0 && 0 < iVar4) {
LAB_1004cf80c:
    uVar15 = uVar15 - 1;
    iVar4 = (int)uVar7;
    if (((long)(char)pbVar12[uVar15] < 0) ||
       ((*(uint *)(puVar3 + (long)(char)pbVar12[uVar15] * 4 + 0x3c) >> 0xe & 1) == 0)) {
      iVar14 = 0;
      goto LAB_1004cf838;
    }
  }
LAB_1004cf82c:
  iVar4 = (int)pbVar12;
LAB_1004cf8c4:
  *piVar18 = (int)pbVar12 - iVar4;
LAB_1004cf780:
  puVar8 = puVar16;
  func_0x0001001e2c8c(puVar16,puVar10,*puVar16);
  uVar20 = uVar20 + 1;
  if (puVar8 == (undefined8 *)0x0) {
LAB_1004cf928:
    puStack_68 = puVar10;
    FUN_1004d164c(&puStack_68,&DAT_110c872e8,0);
LAB_1004cf960:
    uVar17 = 0;
LAB_1004cf964:
    uVar20 = *puVar5;
    if (uVar20 != 0) {
      uVar7 = 0;
      do {
        if (*(long *)(puVar5[1] + uVar7 * 8) != 0) {
          FUN_1004d18b8();
          uVar20 = *puVar5;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar20);
    }
    FUN_1001e33e0(puVar5[1]);
    FUN_1001e33e0(puVar5);
    return uVar17;
  }
  goto LAB_1004cf6b0;
LAB_1004cf838:
  do {
    bVar2 = *pbVar13;
    if ((char)bVar2 < '\0') {
      *pbVar12 = bVar2;
LAB_1004cf878:
      pbVar13 = pbVar13 + 1;
      iVar14 = iVar14 + 1;
    }
    else {
      if ((*(uint *)(puVar3 + (ulong)bVar2 * 4 + 0x3c) >> 0xe & 1) == 0) {
        bVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41) {
          bVar1 = bVar2;
        }
        *pbVar12 = bVar1;
        goto LAB_1004cf878;
      }
      *pbVar12 = 0x20;
      do {
        iVar14 = iVar14 + 1;
        pbVar13 = pbVar13 + 1;
        if ((long)(char)*pbVar13 < 0) break;
      } while ((*(uint *)(puVar3 + (long)(char)*pbVar13 * 4 + 0x3c) >> 0xe & 1) != 0);
    }
    pbVar12 = pbVar12 + 1;
  } while (iVar14 < iVar4);
  iVar4 = (int)*(undefined8 *)(piVar18 + 2);
  goto LAB_1004cf8c4;
}



/* Entry: 1004cf9c4; end: 1004cfb17;  */

long * FUN_1004cf9c4(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar2 = param_1;
  FUN_1004cf150();
  if (plVar2 == (long *)0x0) {
    FUN_1004d2c58(8,0,0xc,&UNK_10f6c788b,0x75);
    return (long *)0x0;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if (uVar1 < 0xfffffff8) {
    lVar6 = (long)(int)uVar1;
    plVar3 = (long *)(lVar6 + 8);
    func_0x000107c610a0();
    if (plVar3 == (long *)0x0) {
      lVar6 = 0;
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar3 + 1;
      *plVar3 = lVar6;
      if ((uVar1 != 0) && (param_1[3] != 0)) {
        func_0x000107c610b4(plVar5,param_1[3],lVar6);
      }
      plVar2[3] = (long)plVar5;
      *(int *)(plVar2 + 2) = (int)param_1[2];
      *(uint *)((long)plVar2 + 0x14) = uVar1;
      lVar6 = param_1[1];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        func_0x0001001e6ec8();
        if (lVar6 == 0) goto LAB_1004cfac8;
      }
      lVar4 = *param_1;
      if ((lVar4 == 0) || (func_0x0001001e6ec8(), lVar4 != 0)) {
        *plVar2 = lVar4;
        plVar2[1] = lVar6;
        *(uint *)(plVar2 + 4) = *(uint *)(param_1 + 4) | 0xd;
        return plVar2;
      }
    }
  }
  else {
    plVar5 = (long *)0x0;
    lVar6 = 0;
  }
LAB_1004cfac8:
  FUN_1004d2c58(8,0,0x41,&UNK_10f6c788b,0x9e);
  FUN_1001e33e0(lVar6);
  FUN_1001e33e0(plVar5);
  FUN_1001e33e0(plVar2);
  return (long *)0x0;
}



/* Entry: 1004cfb18; end: 1004cfbbb;  */

void FUN_1004cfb18(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puStack_40;
  undefined4 auStack_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)&puStack_40;
  puStack_40 = auStack_38;
  if (((param_2 != (undefined4 *)0x0) && (uVar1 = param_2[1], uVar1 < 0x1f)) &&
     ((1L << ((ulong)uVar1 & 0x3f) & 0x2a23efffU) == 0)) {
    auStack_38[0] = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1004cfbbc(&puStack_40,*(undefined8 *)(param_2 + 2),*param_2,
                  (int)(char)(&UNK_10e517be0)[uVar1] | 0x1000,0x2000,0,0);
    if (-1 < iVar2) {
      *param_1 = uStack_30;
    }
  }
  return;
}



/* Entry: 1004cfbbc; end: 1004d0163;  */

uint *****
FUN_1004cfbbc(uint *****param_1,uint *****param_2,uint *****param_3,uint param_4,ulong param_5,
             ulong param_6,ulong param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint *****pppppuVar4;
  uint *****pppppuVar5;
  uint *****pppppuVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint ****ppppuVar11;
  int iVar12;
  long lVar13;
  uint *****pppppuVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  uint *****pppppuVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lStack_b0;
  uint ***pppuStack_a8;
  undefined4 uStack_9c;
  uint ****ppppuStack_98;
  long lStack_90;
  uint ***apppuStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_1;
  pppppuVar6 = param_2;
  if ((int)param_3 == -1) {
    pppppuVar4 = param_2;
    func_0x000107c613d0();
    param_3 = pppppuVar4;
  }
  uVar19 = param_4 - 0x1000;
  if ((uVar19 < 5) && ((0x17U >> (ulong)(param_4 & 0x1f) & 1) != 0)) {
    uVar20 = 0x2806;
    if (param_5 != 0) {
      uVar20 = param_5;
    }
    pcVar16 = (code *)(&PTR_FUN_110c7b640)[uVar19];
    uVar7 = *(undefined4 *)(&UNK_10e517bcc + (ulong)uVar19 * 4);
    iVar12 = (int)param_3;
    lVar10 = (long)iVar12;
    ppppuStack_98 = (uint ****)param_2;
    lStack_90 = lVar10;
    if (iVar12 == 0) {
      uVar15 = 0;
      uVar17 = 0;
    }
    else {
      lVar13 = 0;
      uVar17 = 0;
      do {
        pppppuVar4 = &ppppuStack_98;
        pppppuVar6 = (uint *****)apppuStack_88;
        (*pcVar16)();
        if ((int)pppppuVar4 == 0) {
          uVar8 = 0x89;
          goto LAB_1004cfdac;
        }
        if ((lVar13 == 0 && (param_4 == 0x1002 || param_4 == 0x1004)) &&
           ((uint)apppuStack_88[0] == 0xfeff)) {
          uVar7 = 0x7e;
          uVar8 = 0x95;
          goto LAB_1004cfdac;
        }
        if ((((uint)uVar20 >> 1 & 1) != 0) &&
           ((0x7f < (uint)apppuStack_88[0] ||
            ((0x19 < ((uint)apppuStack_88[0] & 0x5f) - 0x41 && 9 < (uint)apppuStack_88[0] - 0x30 &&
             ((0x3f < (uint)apppuStack_88[0] ||
              ((1L << ((ulong)(uint)apppuStack_88[0] & 0x3f) & 0xa400fb8100000000U) == 0)))))))) {
          uVar20 = uVar20 & 0xfffffffffffffffd;
        }
        uVar15 = uVar20 & 0xffffffffffffffef;
        if (((uint)(0x7f < (uint)apppuStack_88[0]) & (uint)uVar20 >> 4) == 0) {
          uVar15 = uVar20;
        }
        uVar2 = uVar15 & 0xfffffffffffffffb;
        if (((uint)(0xff < (uint)apppuStack_88[0]) & (uint)uVar15 >> 2) == 0) {
          uVar2 = uVar15;
        }
        uVar20 = uVar2 & 0xfffffffffffff7ff;
        if (((uint)(((uint)apppuStack_88[0] & 0xffff0000) != 0) & (uint)uVar2 >> 0xb) == 0) {
          uVar20 = uVar2;
        }
        if (uVar20 == 0) {
          uVar7 = 0x7e;
          uVar8 = 0xa7;
          goto LAB_1004cfdac;
        }
        lVar1 = 3;
        if (0xffff < (uint)apppuStack_88[0]) {
          lVar1 = 4;
        }
        lVar3 = 2;
        if (0x7ff < (uint)apppuStack_88[0]) {
          lVar3 = lVar1;
        }
        lVar1 = 1;
        if (0x7f < (uint)apppuStack_88[0]) {
          lVar1 = lVar3;
        }
        uVar17 = lVar1 + uVar17;
        lVar13 = lVar13 + -1;
      } while (lStack_90 != 0);
      uVar15 = -lVar13;
    }
    if (((long)param_6 < 1) || (param_6 <= uVar15)) {
      if (((long)param_7 < 1) || (uVar15 <= param_7)) {
        uVar19 = (uint)uVar20;
        if ((uVar19 >> 1 & 1) == 0) {
          if ((uVar19 >> 4 & 1) == 0) {
            if ((uVar19 >> 2 & 1) == 0) {
              if ((uVar19 >> 0xb & 1) == 0) {
                if ((uVar19 >> 8 & 1) == 0) {
                  if ((uVar19 >> 0xd & 1) == 0) {
                    uVar7 = 0x7e;
                    uVar8 = 0xd7;
                    goto LAB_1004cfdac;
                  }
                  uVar19 = 0x1000;
                  pppppuVar14 = (uint *****)0xc;
                  pcVar21 = FUN_1004d0194;
                  uVar15 = uVar17;
                }
                else {
                  uVar15 = uVar15 << 2;
                  uVar19 = 0x1004;
                  pppppuVar14 = (uint *****)0x1c;
                  pcVar21 = (code *)&UNK_10ae2070c;
                }
              }
              else {
                uVar15 = uVar15 << 1;
                uVar19 = 0x1002;
                pppppuVar14 = (uint *****)0x1e;
                pcVar21 = (code *)&UNK_10ae206c8;
              }
            }
            else {
              uVar19 = 0x1001;
              pcVar21 = (code *)&UNK_10ae206b4;
              pppppuVar14 = (uint *****)0x14;
            }
          }
          else {
            uVar19 = 0x1001;
            pcVar21 = (code *)&UNK_10ae206b4;
            pppppuVar14 = (uint *****)0x16;
          }
        }
        else {
          uVar19 = 0x1001;
          pcVar21 = (code *)&UNK_10ae206b4;
          pppppuVar14 = (uint *****)0x13;
        }
        if (param_1 == (uint *****)0x0) goto LAB_1004cfe70;
        pppppuVar18 = (uint *****)*param_1;
        if (pppppuVar18 == (uint *****)0x0) {
          pppppuVar5 = pppppuVar14;
          func_0x0001004ce0c4();
          if (pppppuVar5 == (uint *****)0x0) {
            uVar7 = 0x41;
            uVar8 = 0xea;
            goto LAB_1004cfdac;
          }
          *param_1 = (uint ****)pppppuVar5;
        }
        else {
          if (pppppuVar18[1] != (uint ****)0x0) {
            *(undefined4 *)pppppuVar18 = 0;
            FUN_1001e33e0();
            pppppuVar18[1] = (uint ****)0x0;
          }
          *(int *)((long)pppppuVar18 + 4) = (int)pppppuVar14;
          pppppuVar5 = pppppuVar18;
        }
        if (uVar19 == param_4) {
          FUN_1004cee54(pppppuVar5,param_2,param_3);
          pppppuVar4 = pppppuVar5;
          pppppuVar6 = param_2;
          if ((int)pppppuVar5 != 0) goto LAB_1004cfe70;
          uVar7 = 0x41;
          uVar8 = 0xf3;
          goto LAB_1004cfdac;
        }
        ppppuVar11 = apppuStack_88;
        FUN_1001ebea0(ppppuVar11,uVar15 + 1);
        if ((int)ppppuVar11 == 0) {
          uVar8 = 0x41;
          uVar9 = 0xfb;
LAB_1004d0114:
          pppppuVar6 = (uint *****)0x0;
          FUN_1004d2c58(0xc,0,uVar8,&UNK_10f6c498e,uVar9);
        }
        else {
          ppppuStack_98 = (uint ****)param_2;
          lStack_90 = lVar10;
          if (iVar12 != 0) {
            do {
              pppppuVar4 = &ppppuStack_98;
              (*pcVar16)(pppppuVar4,&uStack_9c);
              if ((int)pppppuVar4 == 0) {
LAB_1004d00fc:
                uVar8 = 0x44;
                uVar9 = 0x103;
                goto LAB_1004d0114;
              }
              ppppuVar11 = apppuStack_88;
              (*pcVar21)(ppppuVar11,uStack_9c);
              if ((int)ppppuVar11 == 0) goto LAB_1004d00fc;
            } while (lStack_90 != 0);
          }
          pppuStack_a8 = (uint ***)0x0;
          ppppuVar11 = apppuStack_88;
          FUN_1001ec260(ppppuVar11,0);
          if ((int)ppppuVar11 != 0) {
            pppppuVar4 = (uint *****)apppuStack_88;
            pppppuVar6 = (uint *****)&pppuStack_a8;
            func_0x0001001ed7c0(pppppuVar4,pppppuVar6,&lStack_b0);
            if (((int)pppppuVar4 != 0) && (0xffffffff80000000 < lStack_b0 - 0x80000000U)) {
              *(int *)pppppuVar5 = (int)lStack_b0 + -1;
              pppppuVar5[1] = (uint ****)pppuStack_a8;
              goto LAB_1004cfe70;
            }
          }
          pppppuVar6 = (uint *****)0x0;
          FUN_1004d2c58(0xc,0,0x44,&UNK_10f6c498e,0x10f);
          FUN_1001e33e0(pppuStack_a8);
        }
        if (pppppuVar18 == (uint *****)0x0) {
          FUN_1001e33e0(pppppuVar5[1]);
          FUN_1001e33e0(pppppuVar5);
        }
        pppppuVar4 = (uint *****)apppuStack_88;
        FUN_1001ed8c0();
        goto LAB_1004cfe6c;
      }
      FUN_1004d2c58(0xc,0,0xad,&UNK_10f6c498e,0xb7);
      pppppuVar6 = (uint *****)0x20;
      FUN_1007362c8(apppuStack_88,0x20,"%ld");
    }
    else {
      FUN_1004d2c58(0xc,0,0xae,&UNK_10f6c498e,0xb0);
      pppppuVar6 = (uint *****)0x20;
      FUN_1007362c8(apppuStack_88,0x20,"%ld");
    }
    pppppuVar4 = (uint *****)0x2;
    FUN_1004d2d00();
  }
  else {
    uVar7 = 0xb6;
    uVar8 = 0x7e;
LAB_1004cfdac:
    pppppuVar6 = (uint *****)0x0;
    pppppuVar4 = (uint *****)0xc;
    FUN_1004d2c58(0xc,0,uVar7,&UNK_10f6c498e,uVar8);
  }
LAB_1004cfe6c:
  pppppuVar14 = (uint *****)0xffffffff;
LAB_1004cfe70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppuVar14;
  }
  func_0x000107c60e78();
  if (pppppuVar4[1] != (uint ****)0x0) {
    ppppuVar11 = *pppppuVar4;
    *pppppuVar4 = (uint ****)((long)ppppuVar11 + 1);
    pppppuVar4[1] = (uint ****)((long)pppppuVar4[1] + -1);
    *(uint *)pppppuVar6 = (uint)*(byte *)ppppuVar11;
    return (uint *****)0x1;
  }
  return (uint *****)0x0;
}



/* Entry: 1004d0164; end: 1004d0193;  */

undefined8 FUN_1004d0164(long *param_1,uint *param_2)

{
  byte *pbVar1;
  
  if (param_1[1] != 0) {
    pbVar1 = (byte *)*param_1;
    *param_1 = (long)(pbVar1 + 1);
    param_1[1] = param_1[1] + -1;
    *param_2 = (uint)*pbVar1;
    return 1;
  }
  return 0;
}



/* Entry: 1004d0194; end: 1004d02bb;  */

/* WARNING: Removing unreachable block (ram,0x0001001ec244) */

long * FUN_1004d0194(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puStack_38;
  
  if (0x10 < ((uint)(param_2 >> 0x10) & 0xffff)) {
    return (long *)0x0;
  }
  uVar3 = (uint)param_2;
  if ((uVar3 & 0x1ff800) == 0xd800) {
    return (long *)0x0;
  }
  if ((uVar3 & 0xfffe) == 0xfffe) {
    return (long *)0x0;
  }
  if (0x1f < uVar3 - 0xfdd0) {
    if (0x7f < uVar3) {
      if (uVar3 < 0x800) {
        uVar2 = uVar3 >> 6 & 0xff | 0xc0;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        plVar1 = param_1;
        FUN_1001ec260(param_1,uVar3 >> 0xc & 0xff | 0xe0);
        if ((int)plVar1 == 0) {
          return (long *)0x0;
        }
        uVar2 = uVar3 >> 6 & 0xbf | 0x80;
      }
      else {
        plVar1 = param_1;
        FUN_1001ec260(param_1,uVar3 >> 0x12 & 0xff | 0xf0);
        if ((int)plVar1 == 0) {
          return (long *)0x0;
        }
        plVar1 = param_1;
        FUN_1001ec260(param_1,uVar3 >> 0xc & 0xbf | 0x80);
        if ((int)plVar1 == 0) {
          return (long *)0x0;
        }
        uVar2 = uVar3 >> 6 & 0xbf | 0x80;
      }
      plVar1 = param_1;
      FUN_1001ec260(param_1,uVar2);
      if ((int)plVar1 == 0) {
        return (long *)0x0;
      }
      uVar3 = uVar3 & 0x3f | 0xffffff80;
    }
    plVar1 = param_1;
    FUN_1001ebf4c();
    if ((int)plVar1 != 0) {
      param_1 = (long *)*param_1;
      plVar1 = param_1;
      FUN_1001ec148(param_1,&puStack_38);
      if ((int)plVar1 != 0) {
        param_1[1] = param_1[1] + 1;
        *puStack_38 = (char)uVar3;
        plVar1 = (long *)0x1;
      }
      return plVar1;
    }
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 1004d02bc; end: 1004d02c3; -[SCBlizzardEventLoggerAdapter abEventManager] */

undefined8 FUN_1004d02bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1004d02c4; end: 1004d060b; -[SCBlizzardABEventManager shouldLogEvent:] */

bool FUN_1004d02c4(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  puVar3 = param_2;
  puVar6 = param_4;
  func_0x000107c3cd94();
  if ((int)puVar3 == 0) {
    bVar1 = true;
  }
  else {
    puVar3 = param_4;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar4 = param_4;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar5 = param_4;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar6 = param_2;
    func_0x000107c42b00();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    iVar2 = (int)*(undefined8 *)(param_2 + 8);
    func_0x000107c41908();
    if (((iVar2 == 0) || (puVar7 != (undefined *)0x0 || puVar4 != (undefined *)0x0)) &&
       (puVar6 = puVar7, func_0x000107c49d0c(), ((ulong)puVar6 & 1) == 0)) {
      func_0x000107c50504(param_2);
    }
    puVar6 = param_2;
    func_0x000107c42b00();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar9 = puVar8;
    func_0x000107c6115c(puVar8,puVar6);
    if (((ulong)puVar9 & 1) == 0) {
LAB_1004d04fc:
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324();
      func_0x000107c61180();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c419ac();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c42b00(param_2);
      func_0x000107c61180();
      puVar6 = puVar9;
      func_0x000107c56bcc();
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar9);
      bVar1 = true;
    }
    else {
      puVar6 = puVar8;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar9 = puVar6;
      func_0x000107c49d0c();
      func_0x000107c61170(puVar6);
      if ((int)puVar9 == 0) goto LAB_1004d04fc;
      puVar6 = param_4;
      func_0x000107c4d9e8(param_4);
      func_0x000107c61180();
      func_0x000107c4223c();
      func_0x000107c61170(puVar6);
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41360(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      puVar10 = puVar8;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      puVar6 = puVar10;
      func_0x000107c5c9ec(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      if (6.0 <= param_1 / 3600.0) goto LAB_1004d04fc;
      bVar1 = false;
    }
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return bVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar6);
  iVar2 = (int)*(undefined8 *)(param_4 + 8);
  func_0x000107c41908();
  puVar3 = puVar6;
  puVar4 = puVar6;
  puVar5 = puVar6;
  if (iVar2 == 0) {
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) goto LAB_1004d072c;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) goto LAB_1004d0734;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      puVar7 = puVar6;
      func_0x000107c4d9e8(puVar6);
      func_0x000107c61180();
      bVar1 = puVar7 != (undefined *)0x0;
      func_0x000107c61170();
    }
LAB_1004d0740:
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
LAB_1004d072c:
      bVar1 = false;
      goto LAB_1004d0750;
    }
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c4d9e8(puVar6);
      func_0x000107c61180();
      bVar1 = puVar5 != (undefined *)0x0;
      goto LAB_1004d0740;
    }
LAB_1004d0734:
    bVar1 = false;
  }
  func_0x000107c61170(puVar4);
LAB_1004d0750:
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  return bVar1;
}



/* Entry: 1004d060c; end: 1004d0777; -[SCBlizzardABEventManager _validateEvent:] */

bool FUN_1004d060c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x000107c41908();
  lVar3 = param_3;
  lVar4 = param_3;
  lVar5 = param_3;
  if (iVar2 == 0) {
    func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6db78);
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1004d072c;
    func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110dce678);
    func_0x000107c61180();
    if (lVar4 == 0) goto LAB_1004d0734;
    func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6e738);
    func_0x000107c61180();
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      lVar6 = param_3;
      func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6d858);
      func_0x000107c61180();
      bVar1 = lVar6 != 0;
      func_0x000107c61170();
    }
LAB_1004d0740:
    func_0x000107c61170(lVar5);
  }
  else {
    func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110dce678);
    func_0x000107c61180();
    if (lVar3 == 0) {
LAB_1004d072c:
      bVar1 = false;
      goto LAB_1004d0750;
    }
    func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6e738);
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6d858);
      func_0x000107c61180();
      bVar1 = lVar5 != 0;
      goto LAB_1004d0740;
    }
LAB_1004d0734:
    bVar1 = false;
  }
  func_0x000107c61170(lVar4);
LAB_1004d0750:
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1004d0778; end: 1004d0b77;  */

/* WARNING: Removing unreachable block (ram,0x0001004d1510) */

long * FUN_1004d0778(long *param_1,long *param_2,byte *param_3,ulong param_4,ulong param_5,
                    uint param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 uVar17;
  uint uVar18;
  long *plVar19;
  undefined8 unaff_x27;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  int aiStack_54 [21];
  
  do {
    bVar2 = *param_3;
    if (bVar2 != 0) {
      lVar14 = *param_1;
      if (lVar14 == 0) {
        if (param_6 != 0) {
          return (long *)0x0;
        }
        uVar11 = 0x9b;
        uVar13 = 0x93;
        goto LAB_1004d0a84;
      }
      iVar3 = (int)param_4;
      if (bVar2 < 4) {
        if (bVar2 == 1) {
          lVar14 = (long)&uStack_68 + 4;
          FUN_1004d10c4(lVar14,param_2,param_1,param_3);
          if ((int)lVar14 != 0) {
            return (long *)(uStack_68 >> 0x20);
          }
          uStack_68 = uStack_68 & 0xffffffff;
          uVar17 = 0;
          if (iVar3 != -1) {
            uVar17 = (undefined4)param_5;
          }
          iVar1 = 0x10;
          if (iVar3 != -1) {
            iVar1 = iVar3;
          }
          if (*(long *)(param_3 + 0x18) < 1) {
            iVar3 = 0;
          }
          else {
            lVar20 = 0;
            lVar14 = *(long *)(param_3 + 0x10);
            do {
              plVar8 = param_1;
              FUN_1004ce228(param_1,lVar14,1);
              if (plVar8 == (long *)0x0) {
                return (long *)0xffffffff;
              }
              plVar9 = param_1;
              if ((*(byte *)((long)plVar8 + 1) >> 2 & 1) == 0) {
                plVar9 = (long *)(*param_1 + plVar8[2]);
              }
              FUN_1004d0c20(plVar9,0,plVar8,0xffffffff,0);
              iVar3 = (int)plVar9;
              if (iVar3 == -1) {
                return (long *)0xffffffff;
              }
              if ((int)(uStack_68._4_4_ ^ 0x7fffffff) < iVar3) {
                return (long *)0xffffffff;
              }
              iVar3 = uStack_68._4_4_ + iVar3;
              uStack_68 = CONCAT44(iVar3,(undefined4)uStack_68);
              lVar14 = lVar14 + 0x28;
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(long *)(param_3 + 0x18));
          }
          plVar8 = (long *)0x1;
          FUN_1004d14e8(1,iVar3,iVar1);
          if (((param_2 != (long *)0x0) && ((int)plVar8 != -1)) &&
             (func_0x0001004d1554(param_2,1,iVar3,iVar1,uVar17), 0 < *(long *)(param_3 + 0x18))) {
            lVar20 = 0;
            lVar14 = *(long *)(param_3 + 0x10);
            do {
              plVar9 = param_1;
              FUN_1004ce228(param_1,lVar14,1);
              if (plVar9 == (long *)0x0) {
                return (long *)0xffffffff;
              }
              plVar6 = param_1;
              if ((*(byte *)((long)plVar9 + 1) >> 2 & 1) == 0) {
                plVar6 = (long *)(*param_1 + plVar9[2]);
              }
              FUN_1004d0c20(plVar6,param_2,plVar9,0xffffffff,0);
              if ((int)plVar6 < 0) {
                return (long *)0xffffffff;
              }
              lVar14 = lVar14 + 0x28;
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(long *)(param_3 + 0x18));
          }
          return plVar8;
        }
        if (bVar2 == 2) {
          if (iVar3 != -1) {
            uVar11 = 0xc1;
            uVar13 = 0xb4;
            goto LAB_1004d0a84;
          }
          uVar10 = *(uint *)(lVar14 + *(long *)(param_3 + 8));
          if (((int)uVar10 < 0) || (*(long *)(param_3 + 0x18) <= (long)(ulong)uVar10)) {
            uVar11 = 0xa3;
            uVar13 = 0xb9;
            goto LAB_1004d0a84;
          }
          puVar12 = (ulong *)(*(long *)(param_3 + 0x10) + (ulong)uVar10 * 0x28);
          if ((*puVar12 & 1) != 0) {
            uVar11 = 0xc1;
            uVar13 = 0xbe;
            goto LAB_1004d0a84;
          }
          if (((uint)*puVar12 >> 10 & 1) == 0) {
            param_1 = (long *)(lVar14 + puVar12[2]);
          }
          param_4 = 0xffffffff;
          param_5 = 0;
          goto LAB_1004d0818;
        }
      }
      else {
        if (bVar2 == 4) {
          (**(code **)(*(long *)(param_3 + 0x20) + 0x28))(param_1,param_2,param_3,param_4,param_5);
          if ((int)param_1 != 0) {
            return param_1;
          }
          uVar11 = 0x44;
          uVar13 = 0xcd;
          goto LAB_1004d0a84;
        }
        if (bVar2 == 5) {
          if (iVar3 == -1) {
            param_4 = 0xffffffff;
            param_5 = 0;
            goto LAB_1004d088c;
          }
          uVar11 = 0xc1;
          uVar13 = 0xa9;
          goto LAB_1004d0a84;
        }
      }
      uVar11 = 0xc1;
      uVar13 = 0x105;
LAB_1004d0a84:
      FUN_1004d2c58(0xc,0,uVar11,&UNK_10f6c4ee2,uVar13);
      return (long *)0xffffffff;
    }
    puVar12 = *(ulong **)(param_3 + 0x10);
    if (puVar12 == (ulong *)0x0) {
LAB_1004d088c:
      uStack_58 = (uint)*(undefined8 *)(param_3 + 8);
      aiStack_54[0] = (int)((ulong)unaff_x27 >> 0x20);
      plVar8 = param_1;
      FUN_1004d1168(param_1,0,aiStack_54,&uStack_58,param_3);
      uVar10 = uStack_58;
      uVar5 = (uint)plVar8;
      if (-1 < (int)uVar5) {
        if (aiStack_54[0] == 0) {
          uVar18 = uStack_58;
          if ((uint)param_4 != 0xffffffff) {
            uVar18 = (uint)param_4;
          }
          uVar15 = (ulong)uVar18;
          if (param_2 != (long *)0x0) {
            if (0x14 < uStack_58 + 3 || (1 << (ulong)(uStack_58 + 3 & 0x1f) & 0x180001U) == 0) {
              func_0x0001004d1554(param_2,0,plVar8,uVar15,param_5);
            }
            FUN_1004d1168(param_1,*param_2,aiStack_54,&uStack_58,param_3);
            if ((int)param_1 < 0) {
              return (long *)0xffffffff;
            }
            *param_2 = *param_2 + ((ulong)plVar8 & 0xffffffff);
          }
          if (uVar10 + 3 < 0x15 && (1 << (ulong)(uVar10 + 3 & 0x1f) & 0x180001U) != 0) {
            return plVar8;
          }
          if (-1 < (int)uVar5) {
            iVar3 = 1;
            if (0x1e < (int)uVar18) {
              do {
                iVar3 = iVar3 + 1;
                uVar10 = (uint)uVar15;
                uVar15 = uVar15 >> 7;
              } while (0x7f < uVar10);
            }
            iVar3 = iVar3 + 1;
            if (0x7f < uVar5) {
              do {
                iVar3 = iVar3 + 1;
                uVar10 = (uint)plVar8;
                plVar8 = (long *)((ulong)plVar8 >> 8 & 0xffffff);
              } while (0xff < uVar10);
            }
            uVar10 = iVar3 + uVar5;
            if ((int)(uVar5 ^ 0x7fffffff) <= iVar3) {
              uVar10 = 0xffffffff;
            }
            return (long *)(ulong)uVar10;
          }
          return (long *)0xffffffff;
        }
        if (param_6 != 0) {
          return (long *)0x0;
        }
        FUN_1004d2c58(0xc,0,0x9b,&UNK_10f6c4ee2,0x200);
      }
      return (long *)0xffffffff;
    }
    if ((*puVar12 & 1) != 0) {
      uVar11 = 0xc1;
      uVar13 = 0x9c;
      goto LAB_1004d0a84;
    }
LAB_1004d0818:
    uVar10 = (uint)*puVar12;
    if ((uVar10 & 0x18) == 0) {
      uVar5 = 0;
      if ((int)param_4 != -1) {
        uVar5 = (uint)param_5 & 0xc0;
      }
    }
    else {
      if ((int)param_4 != -1) {
        uVar11 = 0xc1;
        uVar13 = 0x123;
        goto LAB_1004d0c7c;
      }
      param_4 = (ulong)(uint)puVar12[1];
      uVar5 = uVar10 & 0xc0;
    }
    param_5 = (ulong)uVar5;
    param_6 = uVar10 & 1;
    if ((uVar10 & 6) != 0) {
      puVar22 = (ulong *)*param_1;
      if (puVar22 == (ulong *)0x0) {
        if (param_6 != 0) {
          return (long *)0x0;
        }
        uVar11 = 0x9b;
        uVar13 = 0x144;
      }
      else {
        iVar3 = 0x10;
        if ((uVar10 & 2) != 0) {
          iVar3 = 0x11;
        }
        iVar1 = (int)param_4;
        if ((uVar10 & 0x10) != 0 || (int)param_4 == -1) {
          uVar5 = 0;
          iVar1 = iVar3;
        }
        uVar15 = *puVar22;
        if (uVar15 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          uVar21 = 0;
          do {
            if (uVar21 < uVar15) {
              uStack_78 = *(undefined8 *)(puVar22[1] + uVar21 * 8);
            }
            else {
              uStack_78 = 0;
            }
            puVar7 = &uStack_78;
            FUN_1004d0778(puVar7,0,puVar12[4],0xffffffff,0,0);
            uVar4 = (uint)puVar7;
            if (uVar4 == 0xffffffff || (int)(uVar4 ^ 0x7fffffff) < (int)uVar18) {
              return (long *)0xffffffff;
            }
            uVar18 = uVar4 + uVar18;
            uVar21 = uVar21 + 1;
            uVar15 = *puVar22;
          } while (uVar21 < uVar15);
        }
        plVar8 = (long *)0x1;
        FUN_1004d14e8(1,uVar18,iVar1);
        if ((int)plVar8 == -1) {
          return plVar8;
        }
        if ((uVar10 >> 4 & 1) == 0) {
          if (param_2 == (long *)0x0) {
            return plVar8;
          }
        }
        else {
          plVar9 = (long *)0x1;
          FUN_1004d14e8(1,plVar8,param_4);
          if (param_2 == (long *)0x0) {
            return plVar9;
          }
          if ((int)plVar9 == -1) {
            return plVar9;
          }
          func_0x0001004d1554(param_2,1,plVar8,param_4,param_5);
          plVar8 = plVar9;
        }
        func_0x0001004d1554(param_2,1,uVar18,iVar1,uVar5);
        uVar15 = puVar12[4];
        if (((uVar10 >> 1 & 1) == 0) || (uVar21 = *puVar22, uVar21 < 2)) {
          uVar21 = 0;
          do {
            if (*puVar22 <= uVar21) {
              return plVar8;
            }
            uStack_68 = *(undefined8 *)(puVar22[1] + uVar21 * 8);
            puVar7 = &uStack_68;
            FUN_1004d0778(puVar7,param_2,uVar15,0xffffffff,0,0);
            uVar21 = uVar21 + 1;
          } while (-1 < (int)puVar7);
          return (long *)0xffffffff;
        }
        if (uVar21 >> 0x3c == 0) {
          if (uVar18 < 0xfffffff8) {
            plVar9 = (long *)((long)(int)uVar18 + 8);
            func_0x000107c610a0();
            plVar6 = plVar9;
            if (plVar9 != (long *)0x0) {
              plVar6 = plVar9 + 1;
              *plVar9 = (long)(int)uVar18;
            }
          }
          else {
            plVar6 = (long *)0x0;
          }
          plVar9 = (long *)(uVar21 << 4 | 8);
          func_0x000107c610a0();
          if (plVar9 == (long *)0x0) {
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = plVar9 + 1;
            *plVar9 = uVar21 << 4;
            if (plVar6 != (long *)0x0) {
              uVar21 = 0;
              plVar19 = plVar9;
              plStack_70 = plVar6;
              do {
                if (*puVar22 <= uVar21) {
                  func_0x000107c612b4(plVar16,*puVar22,0x10,&UNK_10ae1e02c);
                  plStack_70 = (long *)*param_2;
                  uVar15 = *puVar22;
                  if (uVar15 != 0) {
                    uVar21 = 0;
                    do {
                      plVar19 = plVar9 + 2;
                      if ((int)*plVar19 == 0) {
                        lVar14 = 0;
                      }
                      else {
                        func_0x000107c610b4(plStack_70,plVar9[1]);
                        lVar14 = (long)(int)*plVar19;
                        uVar15 = *puVar22;
                      }
                      plStack_70 = (long *)((long)plStack_70 + lVar14);
                      uVar21 = uVar21 + 1;
                      plVar9 = plVar19;
                    } while (uVar21 < uVar15);
                  }
                  *param_2 = (long)plStack_70;
                  FUN_1001e33e0(plVar16);
                  FUN_1001e33e0(plVar6);
                  return plVar8;
                }
                uStack_68 = *(ulong *)(puVar22[1] + uVar21 * 8);
                plVar19[1] = (long)plStack_70;
                puVar7 = &uStack_68;
                FUN_1004d0778(puVar7,&plStack_70,uVar15,0xffffffff,0,0);
                *(int *)(plVar19 + 2) = (int)puVar7;
                uVar21 = uVar21 + 1;
                plVar19 = plVar19 + 2;
              } while (-1 < (int)puVar7);
              goto LAB_1004d1030;
            }
          }
          FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4ee2,0x1cd);
LAB_1004d1030:
          FUN_1001e33e0(plVar16);
          FUN_1001e33e0(plVar6);
          return (long *)0xffffffff;
        }
        uVar11 = 0x45;
        uVar13 = 0x1c5;
      }
LAB_1004d0c7c:
      FUN_1004d2c58(0xc,0,uVar11,&UNK_10f6c4ee2,uVar13);
      return (long *)0xffffffff;
    }
    param_3 = (byte *)puVar12[4];
    if ((uVar10 >> 4 & 1) != 0) {
      plVar8 = param_1;
      FUN_1004d0778(param_1,0,param_3,0xffffffff,0);
      if ((int)plVar8 < 1) {
        return plVar8;
      }
      plVar9 = (long *)0x1;
      FUN_1004d14e8(1,plVar8,param_4);
      if (param_2 != (long *)0x0) {
        if ((uint)plVar9 != 0xffffffff) {
          func_0x0001004d1554(param_2,1,plVar8,param_4,param_5);
          FUN_1004d0778(param_1,param_2,puVar12[4],0xffffffff,0,0);
          uVar10 = 0xffffffff;
          if (((ulong)param_1 & 0x80000000) == 0) {
            uVar10 = (uint)plVar9;
          }
          return (long *)(ulong)uVar10;
        }
        return plVar9;
      }
      return plVar9;
    }
  } while( true );
}



/* Entry: 1004d0b78; end: 1004d0c1f;  */

undefined8 * FUN_1004d0b78(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  
  if ((param_1 == (ulong *)0x0) || (*param_1 == 0)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x0;
    uVar3 = 0;
    do {
      uStack_48 = *(undefined8 *)(param_1[1] + uVar3 * 8);
      puVar1 = &uStack_48;
      FUN_1004d0778(puVar1,param_2,&DAT_110c87348,0xffffffff,0,0);
      if ((int)puVar1 < 0) {
        return puVar1;
      }
      puVar2 = (undefined8 *)(ulong)(uint)((int)puVar1 + (int)puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_1);
  }
  return puVar2;
}



/* Entry: 1004d0c20; end: 1004d10c3;  */

/* WARNING: Removing unreachable block (ram,0x0001004d1510) */

long * FUN_1004d0c20(long *param_1,long *param_2,ulong *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 unaff_x27;
  ulong uVar20;
  ulong *puVar21;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  uint uStack_58;
  int aiStack_54 [21];
  
code_r0x0001004d0c20:
  do {
    uVar10 = (uint)*param_3;
    if ((uVar10 & 0x18) == 0) {
      uVar1 = param_5 & 0xc0;
      param_5 = 0;
      if ((int)param_4 != -1) {
        param_5 = uVar1;
      }
    }
    else {
      if ((int)param_4 != -1) {
        uVar11 = 0xc1;
        uVar13 = 0x123;
        goto LAB_1004d0c7c;
      }
      param_4 = (ulong)(uint)param_3[1];
      param_5 = uVar10 & 0xc0;
    }
    uVar1 = uVar10 & 1;
    iVar3 = (int)param_4;
    if ((uVar10 & 6) != 0) {
      puVar21 = (ulong *)*param_1;
      if (puVar21 == (ulong *)0x0) {
        if (uVar1 != 0) {
          return (long *)0x0;
        }
        uVar11 = 0x9b;
        uVar13 = 0x144;
      }
      else {
        iVar16 = 0x10;
        if ((uVar10 & 2) != 0) {
          iVar16 = 0x11;
        }
        uVar1 = param_5;
        if ((uVar10 & 0x10) != 0 || iVar3 == -1) {
          uVar1 = 0;
          iVar3 = iVar16;
        }
        uVar14 = *puVar21;
        if (uVar14 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          uVar20 = 0;
          do {
            if (uVar20 < uVar14) {
              uStack_78 = *(undefined8 *)(puVar21[1] + uVar20 * 8);
            }
            else {
              uStack_78 = 0;
            }
            puVar7 = &uStack_78;
            FUN_1004d0778(puVar7,0,param_3[4],0xffffffff,0,0);
            uVar4 = (uint)puVar7;
            if (uVar4 == 0xffffffff || (int)(uVar4 ^ 0x7fffffff) < (int)uVar5) {
              return (long *)0xffffffff;
            }
            uVar5 = uVar4 + uVar5;
            uVar20 = uVar20 + 1;
            uVar14 = *puVar21;
          } while (uVar20 < uVar14);
        }
        plVar8 = (long *)0x1;
        FUN_1004d14e8(1,uVar5,iVar3);
        if ((int)plVar8 == -1) {
          return plVar8;
        }
        if ((uVar10 >> 4 & 1) == 0) {
          if (param_2 == (long *)0x0) {
            return plVar8;
          }
        }
        else {
          plVar9 = (long *)0x1;
          FUN_1004d14e8(1,plVar8,param_4);
          if (param_2 == (long *)0x0) {
            return plVar9;
          }
          if ((int)plVar9 == -1) {
            return plVar9;
          }
          func_0x0001004d1554(param_2,1,plVar8,param_4,param_5);
          plVar8 = plVar9;
        }
        func_0x0001004d1554(param_2,1,uVar5,iVar3,uVar1);
        uVar14 = param_3[4];
        if (((uVar10 >> 1 & 1) == 0) || (uVar20 = *puVar21, uVar20 < 2)) {
          uVar20 = 0;
          do {
            if (*puVar21 <= uVar20) {
              return plVar8;
            }
            uStack_68 = *(undefined8 *)(puVar21[1] + uVar20 * 8);
            puVar7 = &uStack_68;
            FUN_1004d0778(puVar7,param_2,uVar14,0xffffffff,0,0);
            uVar20 = uVar20 + 1;
          } while (-1 < (int)puVar7);
          return (long *)0xffffffff;
        }
        if (uVar20 >> 0x3c == 0) {
          if (uVar5 < 0xfffffff8) {
            plVar9 = (long *)((long)(int)uVar5 + 8);
            func_0x000107c610a0();
            plVar6 = plVar9;
            if (plVar9 != (long *)0x0) {
              plVar6 = plVar9 + 1;
              *plVar9 = (long)(int)uVar5;
            }
          }
          else {
            plVar6 = (long *)0x0;
          }
          plVar9 = (long *)(uVar20 << 4 | 8);
          func_0x000107c610a0();
          if (plVar9 == (long *)0x0) {
            plVar17 = (long *)0x0;
          }
          else {
            plVar17 = plVar9 + 1;
            *plVar9 = uVar20 << 4;
            if (plVar6 != (long *)0x0) {
              uVar20 = 0;
              plVar18 = plVar9;
              plStack_70 = plVar6;
              do {
                if (*puVar21 <= uVar20) {
                  func_0x000107c612b4(plVar17,*puVar21,0x10,&UNK_10ae1e02c);
                  plStack_70 = (long *)*param_2;
                  uVar14 = *puVar21;
                  if (uVar14 != 0) {
                    uVar20 = 0;
                    do {
                      plVar18 = plVar9 + 2;
                      if ((int)*plVar18 == 0) {
                        lVar15 = 0;
                      }
                      else {
                        func_0x000107c610b4(plStack_70,plVar9[1]);
                        lVar15 = (long)(int)*plVar18;
                        uVar14 = *puVar21;
                      }
                      plStack_70 = (long *)((long)plStack_70 + lVar15);
                      uVar20 = uVar20 + 1;
                      plVar9 = plVar18;
                    } while (uVar20 < uVar14);
                  }
                  *param_2 = (long)plStack_70;
                  FUN_1001e33e0(plVar17);
                  FUN_1001e33e0(plVar6);
                  return plVar8;
                }
                uStack_68 = *(ulong *)(puVar21[1] + uVar20 * 8);
                plVar18[1] = (long)plStack_70;
                puVar7 = &uStack_68;
                FUN_1004d0778(puVar7,&plStack_70,uVar14,0xffffffff,0,0);
                *(int *)(plVar18 + 2) = (int)puVar7;
                uVar20 = uVar20 + 1;
                plVar18 = plVar18 + 2;
              } while (-1 < (int)puVar7);
              goto LAB_1004d1030;
            }
          }
          FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4ee2,0x1cd);
LAB_1004d1030:
          FUN_1001e33e0(plVar17);
          FUN_1001e33e0(plVar6);
          return (long *)0xffffffff;
        }
        uVar11 = 0x45;
        uVar13 = 0x1c5;
      }
LAB_1004d0c7c:
      FUN_1004d2c58(0xc,0,uVar11,&UNK_10f6c4ee2,uVar13);
      return (long *)0xffffffff;
    }
    pbVar12 = (byte *)param_3[4];
    if ((uVar10 >> 4 & 1) != 0) {
      plVar8 = param_1;
      FUN_1004d0778(param_1,0,pbVar12,0xffffffff,0);
      if ((int)plVar8 < 1) {
        return plVar8;
      }
      plVar9 = (long *)0x1;
      FUN_1004d14e8(1,plVar8,param_4);
      if (param_2 != (long *)0x0) {
        if ((uint)plVar9 != 0xffffffff) {
          func_0x0001004d1554(param_2,1,plVar8,param_4,param_5);
          FUN_1004d0778(param_1,param_2,param_3[4],0xffffffff,0,0);
          uVar10 = 0xffffffff;
          if (((ulong)param_1 & 0x80000000) == 0) {
            uVar10 = (uint)plVar9;
          }
          return (long *)(ulong)uVar10;
        }
        return plVar9;
      }
      return plVar9;
    }
    bVar2 = *pbVar12;
    if (bVar2 != 0) {
      lVar15 = *param_1;
      if (lVar15 == 0) {
        if (uVar1 != 0) {
          return (long *)0x0;
        }
        uVar11 = 0x9b;
        uVar13 = 0x93;
        goto LAB_1004d0a84;
      }
      if (bVar2 < 4) {
        if (bVar2 == 1) {
          lVar15 = (long)&uStack_68 + 4;
          FUN_1004d10c4(lVar15,param_2,param_1,pbVar12);
          if ((int)lVar15 != 0) {
            return (long *)(uStack_68 >> 0x20);
          }
          uStack_68 = uStack_68 & 0xffffffff;
          uVar10 = 0;
          if (iVar3 != -1) {
            uVar10 = param_5;
          }
          iVar16 = 0x10;
          if (iVar3 != -1) {
            iVar16 = iVar3;
          }
          if (*(long *)(pbVar12 + 0x18) < 1) {
            iVar3 = 0;
          }
          else {
            lVar19 = 0;
            lVar15 = *(long *)(pbVar12 + 0x10);
            do {
              plVar8 = param_1;
              FUN_1004ce228(param_1,lVar15,1);
              if (plVar8 == (long *)0x0) {
                return (long *)0xffffffff;
              }
              plVar9 = param_1;
              if ((*(byte *)((long)plVar8 + 1) >> 2 & 1) == 0) {
                plVar9 = (long *)(*param_1 + plVar8[2]);
              }
              FUN_1004d0c20(plVar9,0,plVar8,0xffffffff,0);
              iVar3 = (int)plVar9;
              if (iVar3 == -1) {
                return (long *)0xffffffff;
              }
              if ((int)(uStack_68._4_4_ ^ 0x7fffffff) < iVar3) {
                return (long *)0xffffffff;
              }
              iVar3 = uStack_68._4_4_ + iVar3;
              uStack_68 = CONCAT44(iVar3,(undefined4)uStack_68);
              lVar15 = lVar15 + 0x28;
              lVar19 = lVar19 + 1;
            } while (lVar19 < *(long *)(pbVar12 + 0x18));
          }
          plVar8 = (long *)0x1;
          FUN_1004d14e8(1,iVar3,iVar16);
          if (((param_2 != (long *)0x0) && ((int)plVar8 != -1)) &&
             (func_0x0001004d1554(param_2,1,iVar3,iVar16,uVar10), 0 < *(long *)(pbVar12 + 0x18))) {
            lVar19 = 0;
            lVar15 = *(long *)(pbVar12 + 0x10);
            do {
              plVar9 = param_1;
              FUN_1004ce228(param_1,lVar15,1);
              if (plVar9 == (long *)0x0) {
                return (long *)0xffffffff;
              }
              plVar6 = param_1;
              if ((*(byte *)((long)plVar9 + 1) >> 2 & 1) == 0) {
                plVar6 = (long *)(*param_1 + plVar9[2]);
              }
              FUN_1004d0c20(plVar6,param_2,plVar9,0xffffffff,0);
              if ((int)plVar6 < 0) {
                return (long *)0xffffffff;
              }
              lVar15 = lVar15 + 0x28;
              lVar19 = lVar19 + 1;
            } while (lVar19 < *(long *)(pbVar12 + 0x18));
          }
          return plVar8;
        }
        if (bVar2 == 2) {
          if (iVar3 != -1) {
            uVar11 = 0xc1;
            uVar13 = 0xb4;
            goto LAB_1004d0a84;
          }
          uVar10 = *(uint *)(lVar15 + *(long *)(pbVar12 + 8));
          if (((int)uVar10 < 0) || (*(long *)(pbVar12 + 0x18) <= (long)(ulong)uVar10)) {
            uVar11 = 0xa3;
            uVar13 = 0xb9;
            goto LAB_1004d0a84;
          }
          param_3 = (ulong *)(*(long *)(pbVar12 + 0x10) + (ulong)uVar10 * 0x28);
          if ((*param_3 & 1) != 0) {
            uVar11 = 0xc1;
            uVar13 = 0xbe;
            goto LAB_1004d0a84;
          }
          if (((uint)*param_3 >> 10 & 1) == 0) {
            param_1 = (long *)(lVar15 + param_3[2]);
          }
          param_4 = 0xffffffff;
          param_5 = 0;
          goto code_r0x0001004d0c20;
        }
      }
      else {
        if (bVar2 == 4) {
          (**(code **)(*(long *)(pbVar12 + 0x20) + 0x28))(param_1,param_2,pbVar12,param_4,param_5);
          if ((int)param_1 != 0) {
            return param_1;
          }
          uVar11 = 0x44;
          uVar13 = 0xcd;
          goto LAB_1004d0a84;
        }
        if (bVar2 == 5) {
          if (iVar3 == -1) {
            param_4 = 0xffffffff;
            param_5 = 0;
            goto LAB_1004d088c;
          }
          uVar11 = 0xc1;
          uVar13 = 0xa9;
          goto LAB_1004d0a84;
        }
      }
      uVar11 = 0xc1;
      uVar13 = 0x105;
      goto LAB_1004d0a84;
    }
    param_3 = *(ulong **)(pbVar12 + 0x10);
    if (param_3 == (ulong *)0x0) {
LAB_1004d088c:
      uStack_58 = (uint)*(undefined8 *)(pbVar12 + 8);
      aiStack_54[0] = (int)((ulong)unaff_x27 >> 0x20);
      plVar8 = param_1;
      FUN_1004d1168(param_1,0,aiStack_54,&uStack_58,pbVar12);
      uVar10 = uStack_58;
      uVar5 = (uint)plVar8;
      if (-1 < (int)uVar5) {
        if (aiStack_54[0] == 0) {
          uVar1 = uStack_58;
          if ((uint)param_4 != 0xffffffff) {
            uVar1 = (uint)param_4;
          }
          uVar14 = (ulong)uVar1;
          if (param_2 != (long *)0x0) {
            if (0x14 < uStack_58 + 3 || (1 << (ulong)(uStack_58 + 3 & 0x1f) & 0x180001U) == 0) {
              func_0x0001004d1554(param_2,0,plVar8,uVar14,param_5);
            }
            FUN_1004d1168(param_1,*param_2,aiStack_54,&uStack_58,pbVar12);
            if ((int)param_1 < 0) {
              return (long *)0xffffffff;
            }
            *param_2 = *param_2 + ((ulong)plVar8 & 0xffffffff);
          }
          if (uVar10 + 3 < 0x15 && (1 << (ulong)(uVar10 + 3 & 0x1f) & 0x180001U) != 0) {
            return plVar8;
          }
          if (-1 < (int)uVar5) {
            iVar3 = 1;
            if (0x1e < (int)uVar1) {
              do {
                iVar3 = iVar3 + 1;
                uVar10 = (uint)uVar14;
                uVar14 = uVar14 >> 7;
              } while (0x7f < uVar10);
            }
            iVar3 = iVar3 + 1;
            if (0x7f < uVar5) {
              do {
                iVar3 = iVar3 + 1;
                uVar10 = (uint)plVar8;
                plVar8 = (long *)((ulong)plVar8 >> 8 & 0xffffff);
              } while (0xff < uVar10);
            }
            uVar10 = iVar3 + uVar5;
            if ((int)(uVar5 ^ 0x7fffffff) <= iVar3) {
              uVar10 = 0xffffffff;
            }
            return (long *)(ulong)uVar10;
          }
          return (long *)0xffffffff;
        }
        if (uVar1 != 0) {
          return (long *)0x0;
        }
        FUN_1004d2c58(0xc,0,0x9b,&UNK_10f6c4ee2,0x200);
      }
      return (long *)0xffffffff;
    }
    if ((*param_3 & 1) != 0) {
      uVar11 = 0xc1;
      uVar13 = 0x9c;
LAB_1004d0a84:
      FUN_1004d2c58(0xc,0,uVar11,&UNK_10f6c4ee2,uVar13);
      return (long *)0xffffffff;
    }
  } while( true );
}



/* Entry: 1004d10c4; end: 1004d1167;  */

undefined8 FUN_1004d10c4(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (((param_3 != (long *)0x0) && (*param_3 != 0)) &&
     (lVar2 = *(long *)(param_4 + 0x20), lVar2 != 0)) {
    if (((*(byte *)(lVar2 + 8) >> 1 & 1) != 0) &&
       (puVar1 = (undefined8 *)(*param_3 + (long)*(int *)(lVar2 + 0x18)), *(int *)(puVar1 + 2) == 0)
       ) {
      if (param_2 != (long *)0x0) {
        if (puVar1[1] == 0) {
          lVar2 = 0;
        }
        else {
          func_0x000107c610b4(*param_2,*puVar1);
          lVar2 = puVar1[1];
        }
        *param_2 = *param_2 + lVar2;
      }
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = (int)puVar1[1];
      }
      return 1;
    }
    return 0;
  }
  return 0;
}



/* Entry: 1004d1168; end: 1004d1383;  */

int FUN_1004d1168(long *param_1,long param_2,undefined4 *param_3,int *param_4,char *param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  char cStack_29;
  long lStack_28;
  
  *param_3 = 0;
  lStack_28 = param_2;
  if (*param_5 == '\0') {
    lVar4 = *(long *)(param_5 + 8);
    if (lVar4 != 1) {
      piVar9 = (int *)*param_1;
      if (piVar9 == (int *)0x0) goto LAB_1004d1364;
LAB_1004d11e0:
      if (lVar4 == -4) {
        iVar7 = *piVar9;
        if ((iVar7 < 0) && (iVar7 != -3)) {
          uVar5 = 0xbf;
          uVar6 = 0x26d;
          goto LAB_1004d1340;
        }
        *param_4 = iVar7;
        param_1 = (long *)(piVar9 + 2);
        goto LAB_1004d1244;
      }
    }
    iVar7 = *param_4;
  }
  else {
    piVar9 = (int *)*param_1;
    if (piVar9 == (int *)0x0) goto LAB_1004d1364;
    if (*param_5 != '\x05') {
      lVar4 = *(long *)(param_5 + 8);
      goto LAB_1004d11e0;
    }
    iVar3 = piVar9[1];
    if ((iVar3 < 0) && (iVar3 != -3)) {
      uVar5 = 0xbf;
      uVar6 = 0x254;
      goto LAB_1004d1340;
    }
    iVar1 = 10;
    if (iVar3 != 0x10a) {
      iVar1 = iVar3;
    }
    iVar7 = 2;
    if (iVar3 != 0x102) {
      iVar7 = iVar1;
    }
    *param_4 = iVar7;
  }
LAB_1004d1244:
  if (iVar7 < 5) {
    if (iVar7 == 1) {
      iVar7 = (int)*param_1;
      if (iVar7 == -1) goto LAB_1004d1364;
      if (*(long *)(param_5 + 8) != -4) {
        if (iVar7 == 0) {
          if (*(long *)(param_5 + 0x28) == 0) goto LAB_1004d1364;
        }
        else if (0 < *(long *)(param_5 + 0x28)) {
LAB_1004d1364:
          *param_3 = 1;
          return 0;
        }
      }
      cStack_29 = -(iVar7 != 0);
      iVar7 = 1;
      pcVar8 = &cStack_29;
      goto LAB_1004d130c;
    }
    if (iVar7 == 2) goto LAB_1004d12a8;
    if (iVar7 == 3) {
      lVar4 = *param_1;
      plVar2 = (long *)0x0;
      if (param_2 != 0) {
        plVar2 = &lStack_28;
      }
      FUN_10072d63c(lVar4,plVar2);
      iVar7 = (int)lVar4;
      goto LAB_1004d12bc;
    }
  }
  else {
    if (iVar7 == 5) {
      return 0;
    }
    if (iVar7 == 10) {
LAB_1004d12a8:
      lVar4 = *param_1;
      plVar2 = (long *)0x0;
      if (param_2 != 0) {
        plVar2 = &lStack_28;
      }
      func_0x000107c2b174(lVar4,plVar2);
      iVar7 = (int)lVar4;
LAB_1004d12bc:
      if (0 < iVar7) {
        return iVar7;
      }
      return -1;
    }
    if (iVar7 == 6) {
      iVar7 = *(int *)(*param_1 + 0x14);
      if (iVar7 == 0) {
        uVar5 = 0x86;
        uVar6 = 0x27c;
LAB_1004d1340:
        FUN_1004d2c58(0xc,0,uVar5,&UNK_10f6c4ee2,uVar6);
        return -1;
      }
      pcVar8 = *(char **)(*param_1 + 0x18);
      goto LAB_1004d130c;
    }
  }
  pcVar8 = *(char **)((int *)*param_1 + 2);
  iVar7 = *(int *)*param_1;
LAB_1004d130c:
  if (param_2 == 0) {
    return iVar7;
  }
  if (iVar7 == 0) {
    return 0;
  }
  func_0x000107c610b4(param_2,pcVar8,(long)iVar7);
  return iVar7;
}



/* Entry: 1004d1384; end: 1004d14e7;  */

/* WARNING: Removing unreachable block (ram,0x0001004d1510) */

ulong FUN_1004d1384(ulong param_1,long *param_2,long param_3,uint param_4,undefined8 param_5,
                   int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uStack_58;
  int iStack_54;
  
  uStack_58 = (uint)*(undefined8 *)(param_3 + 8);
  uVar5 = param_1;
  FUN_1004d1168(param_1,0,&iStack_54,&uStack_58,param_3);
  uVar3 = uStack_58;
  uVar2 = (uint)uVar5;
  if (-1 < (int)uVar2) {
    if (iStack_54 == 0) {
      uVar1 = uStack_58;
      if (param_4 != 0xffffffff) {
        uVar1 = param_4;
      }
      uVar6 = (ulong)uVar1;
      if (param_2 != (long *)0x0) {
        if (0x14 < uStack_58 + 3 || (1 << (ulong)(uStack_58 + 3 & 0x1f) & 0x180001U) == 0) {
          func_0x0001004d1554(param_2,0,uVar5,uVar6,param_5);
        }
        FUN_1004d1168(param_1,*param_2,&iStack_54,&uStack_58,param_3);
        if ((int)param_1 < 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + (uVar5 & 0xffffffff);
      }
      if (uVar3 + 3 < 0x15 && (1 << (ulong)(uVar3 + 3 & 0x1f) & 0x180001U) != 0) {
        return uVar5;
      }
      if ((int)uVar2 < 0) {
        return 0xffffffff;
      }
      iVar4 = 1;
      if (0x1e < (int)uVar1) {
        do {
          iVar4 = iVar4 + 1;
          uVar3 = (uint)uVar6;
          uVar6 = uVar6 >> 7;
        } while (0x7f < uVar3);
      }
      iVar4 = iVar4 + 1;
      if (0x7f < uVar2) {
        do {
          iVar4 = iVar4 + 1;
          uVar3 = (uint)uVar5;
          uVar5 = uVar5 >> 8 & 0xffffff;
        } while (0xff < uVar3);
      }
      uVar3 = iVar4 + uVar2;
      if ((int)(uVar2 ^ 0x7fffffff) <= iVar4) {
        uVar3 = 0xffffffff;
      }
      return (ulong)uVar3;
    }
    if (param_6 != 0) {
      return 0;
    }
    FUN_1004d2c58(0xc,0,0x9b,&UNK_10f6c4ee2,0x200);
  }
  return 0xffffffff;
}



/* Entry: 1004d14e8; end: 1004d164b;  */

int FUN_1004d14e8(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_2 < 0) {
    return -1;
  }
  iVar3 = 1;
  if (0x1e < (int)param_3) {
    do {
      iVar3 = iVar3 + 1;
      bVar1 = 0x7f < param_3;
      param_3 = param_3 >> 7;
    } while (bVar1);
  }
  if (param_1 == 2) {
    iVar3 = iVar3 + 3;
  }
  else {
    iVar3 = iVar3 + 1;
    uVar4 = param_2;
    if (0x7f < param_2) {
      do {
        iVar3 = iVar3 + 1;
        bVar1 = 0xff < uVar4;
        uVar4 = uVar4 >> 8;
      } while (bVar1);
    }
  }
  iVar2 = iVar3 + param_2;
  if ((int)(param_2 ^ 0x7fffffff) <= iVar3) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Entry: 1004d164c; end: 1004d18b7;  */

void FUN_1004d164c(long *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  bool bVar12;
  undefined8 unaff_x23;
  undefined8 auStack_38 [7];
  
  do {
    if (param_1 == (long *)0x0) {
      return;
    }
    bVar2 = *param_2;
    if (bVar2 != 0) {
      lVar8 = *param_1;
      if (lVar8 == 0) {
        return;
      }
      if (3 < bVar2) {
        if (bVar2 == 4) {
          if (*(long *)(param_2 + 0x20) == 0) {
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001004d1798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
          return;
        }
        if (bVar2 != 5) {
          return;
        }
        goto code_r0x0001004cf1b4;
      }
      if (bVar2 == 1) {
        plVar3 = param_1;
        FUN_1004d193c(param_1,param_2);
        if ((int)plVar3 == 0) {
          return;
        }
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
LAB_1004d1800:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_1004d1800;
          iVar7 = 2;
          (*UNRECOVERED_JUMPTABLE)(2,param_1,param_2,0);
          if (iVar7 == 2) {
            return;
          }
          bVar12 = false;
        }
        FUN_1004d1974(param_1,param_2);
        if (0 < *(long *)(param_2 + 0x18)) {
          lVar8 = 0;
          lVar6 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
          do {
            lVar6 = lVar6 + -0x28;
            plVar3 = param_1;
            FUN_1004ce228(param_1,lVar6,0);
            if (plVar3 != (long *)0x0) {
              plVar4 = param_1;
              if ((*(byte *)((long)plVar3 + 1) >> 2 & 1) == 0) {
                plVar4 = (long *)(*param_1 + plVar3[2]);
              }
              FUN_1004d19dc(plVar4);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(long *)(param_2 + 0x18));
        }
        if (!bVar12) {
          (*UNRECOVERED_JUMPTABLE)(3,param_1,param_2,0);
        }
      }
      else {
        if (bVar2 != 2) {
          return;
        }
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
LAB_1004d17a0:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_1004d17a0;
          iVar7 = 2;
          (*UNRECOVERED_JUMPTABLE)(2,param_1,param_2,0);
          if (iVar7 == 2) {
            return;
          }
          bVar12 = false;
          lVar8 = *param_1;
        }
        uVar1 = *(uint *)(lVar8 + *(long *)(param_2 + 8));
        if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(param_2 + 0x18))) {
          lVar6 = *(long *)(param_2 + 0x10) + (ulong)uVar1 * 0x28;
          plVar3 = param_1;
          if ((*(byte *)(lVar6 + 1) >> 2 & 1) == 0) {
            plVar3 = (long *)(lVar8 + *(long *)(lVar6 + 0x10));
          }
          FUN_1004d19dc(plVar3);
        }
        if (!bVar12) {
          (*UNRECOVERED_JUMPTABLE)(3,param_1,param_2,0);
        }
      }
      if (param_3 == 0) {
        FUN_1001e33e0(*param_1);
        *param_1 = 0;
      }
      return;
    }
    puVar5 = *(ulong **)(param_2 + 0x10);
    if (puVar5 == (ulong *)0x0) {
code_r0x0001004cf1b4:
      if (param_2 == (byte *)0x0) {
        piVar9 = (int *)*param_1;
        param_1 = (long *)(piVar9 + 2);
        iVar7 = *piVar9;
        if (iVar7 == 1) {
          iVar7 = -1;
LAB_1004cf208:
          *(int *)param_1 = iVar7;
          return;
        }
LAB_1004cf210:
        lVar8 = *param_1;
        if (lVar8 == 0) {
          return;
        }
        if (iVar7 == -4) {
          FUN_1004cf1b4(param_1,0);
          FUN_1001e33e0(*param_1);
          goto LAB_1004cf250;
        }
        if (iVar7 == 5) goto LAB_1004cf250;
        if (iVar7 == 6) {
          FUN_1004d1a84(lVar8);
          goto LAB_1004cf250;
        }
      }
      else {
        if (*param_2 != 5) {
          iVar7 = *(int *)(param_2 + 8);
          if (iVar7 == 1) {
            iVar7 = *(int *)(param_2 + 0x28);
            goto LAB_1004cf208;
          }
          goto LAB_1004cf210;
        }
        lVar8 = *param_1;
        if (lVar8 == 0) {
          return;
        }
      }
      FUN_1001e33e0(*(undefined8 *)(lVar8 + 8));
      FUN_1001e33e0(lVar8);
      *param_1 = 0;
LAB_1004cf250:
      *param_1 = 0;
      return;
    }
    if ((*puVar5 & 6) != 0) {
      puVar10 = (ulong *)*param_1;
      auStack_38[0] = unaff_x23;
      if ((puVar10 != (ulong *)0x0) && (*puVar10 != 0)) {
        uVar11 = 0;
        do {
          auStack_38[0] = *(undefined8 *)(puVar10[1] + uVar11 * 8);
          FUN_1004d164c(auStack_38,puVar5[4],0);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *puVar10);
      }
      FUN_1004d1b78(puVar10);
      *param_1 = 0;
      return;
    }
    param_2 = (byte *)puVar5[4];
    param_3 = (uint)*puVar5 & 0x400;
  } while( true );
}



/* Entry: 1004d18b8; end: 1004d193b;  */

void FUN_1004d18b8(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_38;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1[1] + uVar3 * 8);
      if (lVar2 != 0) {
        lStack_38 = lVar2;
        FUN_1004d164c(&lStack_38,&DAT_110c872e8,0);
        uVar1 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_1001e33e0(param_1[1]);
  if (param_1 != (ulong *)0x0) {
    param_1 = param_1 + -1;
    if (*param_1 + 8 != 0) {
      func_0x000107c60ee4(param_1,*param_1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1004d193c; end: 1004d1973;  */

long * FUN_1004d193c(long *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  
  if ((((*param_2 != '\x01') || (lVar7 = *(long *)(param_2 + 0x20), lVar7 == 0)) ||
      ((*(byte *)(lVar7 + 8) & 1) == 0)) || (*param_1 == 0)) {
    return (long *)0x1;
  }
  plVar4 = (long *)(*param_1 + (long)*(int *)(lVar7 + 0xc));
  iVar8 = (int)*plVar4;
  while( true ) {
    if (iVar8 == -1) {
      return (long *)0x0;
    }
    if (iVar8 == 0) break;
    iVar2 = iVar8 + -1;
    lVar7 = *plVar4;
    if ((int)lVar7 == iVar8) {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      bVar3 = cVar1 == '\0';
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar7;
    if (bVar3) {
      return (long *)(ulong)(iVar2 == 0);
    }
  }
  func_0x000107c60ebc();
  plVar5 = plVar4;
  if ((plVar4 == (long *)0x0) || (FUN_10021f0b0(), (int)plVar5 == 0)) {
    return plVar5;
  }
  if ((plVar4[2] != 0) && (pcVar6 = *(code **)(plVar4[2] + 0x88), pcVar6 != (code *)0x0)) {
    (*pcVar6)(plVar4);
    plVar4[1] = 0;
    *(int *)((long)plVar4 + 4) = 0;
  }
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = plVar4 + -1;
  if (*plVar4 + 8 != 0) {
    func_0x000107c60ee4(plVar4,*plVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar4);
  return plVar4;
}



/* Entry: 1004d1974; end: 1004d19db;  */

void FUN_1004d1974(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    plVar1 = (long *)(*param_1 + (long)*(int *)(lVar2 + 0x18));
    if ((*plVar1 != 0) && ((*(byte *)((long)plVar1 + 0x14) & 1) == 0)) {
      FUN_1001e33e0();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(byte *)((long)plVar1 + 0x14) = *(byte *)((long)plVar1 + 0x14) & 0xfc;
    *(undefined4 *)(plVar1 + 2) = 1;
  }
  return;
}



/* Entry: 1004d19dc; end: 1004d1a83;  */

void FUN_1004d19dc(long *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar12;
  undefined8 unaff_x23;
  undefined8 auStack_38 [7];
  
  do {
    uVar9 = *param_2;
    if ((uVar9 & 6) != 0) {
      puVar11 = (ulong *)*param_1;
      if ((puVar11 != (ulong *)0x0) && (*puVar11 != 0)) {
        uVar9 = 0;
        do {
          auStack_38[0] = *(undefined8 *)(puVar11[1] + uVar9 * 8);
          FUN_1004d164c(auStack_38,param_2[4],0);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *puVar11);
      }
      FUN_1004d1b78(puVar11);
      *param_1 = 0;
      return;
    }
    pbVar6 = (byte *)param_2[4];
    if (param_1 == (long *)0x0) {
      return;
    }
    bVar2 = *pbVar6;
    if (bVar2 != 0) {
      lVar8 = *param_1;
      if (lVar8 == 0) {
        return;
      }
      if (bVar2 < 4) {
        if (bVar2 == 1) {
          plVar3 = param_1;
          FUN_1004d193c(param_1,pbVar6);
          if ((int)plVar3 == 0) {
            return;
          }
          if (*(long *)(pbVar6 + 0x20) == 0) {
            UNRECOVERED_JUMPTABLE = (code *)0x0;
LAB_1004d1800:
            bVar12 = true;
          }
          else {
            UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pbVar6 + 0x20) + 0x10);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_1004d1800;
            iVar7 = 2;
            (*UNRECOVERED_JUMPTABLE)(2,param_1,pbVar6,0);
            if (iVar7 == 2) {
              return;
            }
            bVar12 = false;
          }
          FUN_1004d1974(param_1,pbVar6);
          if (0 < *(long *)(pbVar6 + 0x18)) {
            lVar8 = 0;
            lVar5 = *(long *)(pbVar6 + 0x10) + *(long *)(pbVar6 + 0x18) * 0x28;
            do {
              lVar5 = lVar5 + -0x28;
              plVar3 = param_1;
              FUN_1004ce228(param_1,lVar5,0);
              if (plVar3 != (long *)0x0) {
                plVar4 = param_1;
                if ((*(byte *)((long)plVar3 + 1) >> 2 & 1) == 0) {
                  plVar4 = (long *)(*param_1 + plVar3[2]);
                }
                FUN_1004d19dc(plVar4);
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(long *)(pbVar6 + 0x18));
          }
          if (!bVar12) {
            (*UNRECOVERED_JUMPTABLE)(3,param_1,pbVar6,0);
          }
        }
        else {
          if (bVar2 != 2) {
            return;
          }
          if (*(long *)(pbVar6 + 0x20) == 0) {
            UNRECOVERED_JUMPTABLE = (code *)0x0;
LAB_1004d17a0:
            bVar12 = true;
          }
          else {
            UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pbVar6 + 0x20) + 0x10);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_1004d17a0;
            iVar7 = 2;
            (*UNRECOVERED_JUMPTABLE)(2,param_1,pbVar6,0);
            if (iVar7 == 2) {
              return;
            }
            bVar12 = false;
            lVar8 = *param_1;
          }
          uVar1 = *(uint *)(lVar8 + *(long *)(pbVar6 + 8));
          if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(pbVar6 + 0x18))) {
            lVar5 = *(long *)(pbVar6 + 0x10) + (ulong)uVar1 * 0x28;
            plVar3 = param_1;
            if ((*(byte *)(lVar5 + 1) >> 2 & 1) == 0) {
              plVar3 = (long *)(lVar8 + *(long *)(lVar5 + 0x10));
            }
            FUN_1004d19dc(plVar3);
          }
          if (!bVar12) {
            (*UNRECOVERED_JUMPTABLE)(3,param_1,pbVar6,0);
          }
        }
        if ((uVar9 & 0x400) == 0) {
          FUN_1001e33e0(*param_1);
          *param_1 = 0;
        }
        return;
      }
      if (bVar2 == 4) {
        if (*(long *)(pbVar6 + 0x20) == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pbVar6 + 0x20) + 0x10);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0001004d1798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,pbVar6);
        return;
      }
      if (bVar2 != 5) {
        return;
      }
      break;
    }
    param_2 = *(ulong **)(pbVar6 + 0x10);
    auStack_38[0] = unaff_x23;
  } while (param_2 != (ulong *)0x0);
  if (pbVar6 == (byte *)0x0) {
    piVar10 = (int *)*param_1;
    param_1 = (long *)(piVar10 + 2);
    iVar7 = *piVar10;
    if (iVar7 == 1) {
      iVar7 = -1;
LAB_1004cf208:
      *(int *)param_1 = iVar7;
      return;
    }
LAB_1004cf210:
    lVar8 = *param_1;
    if (lVar8 == 0) {
      return;
    }
    if (iVar7 == -4) {
      FUN_1004cf1b4(param_1,0);
      FUN_1001e33e0(*param_1);
      goto LAB_1004cf250;
    }
    if (iVar7 == 5) goto LAB_1004cf250;
    if (iVar7 == 6) {
      FUN_1004d1a84(lVar8);
      goto LAB_1004cf250;
    }
  }
  else {
    if (*pbVar6 != 5) {
      iVar7 = *(int *)(pbVar6 + 8);
      if (iVar7 == 1) {
        iVar7 = *(int *)(pbVar6 + 0x28);
        goto LAB_1004cf208;
      }
      goto LAB_1004cf210;
    }
    lVar8 = *param_1;
    if (lVar8 == 0) {
      return;
    }
  }
  FUN_1001e33e0(*(undefined8 *)(lVar8 + 8));
  FUN_1001e33e0(lVar8);
  *param_1 = 0;
LAB_1004cf250:
  *param_1 = 0;
  return;
}



/* Entry: 1004d1a84; end: 1004d1af7;  */

void FUN_1004d1a84(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1001e33e0(*param_1);
      FUN_1001e33e0(param_1[1]);
      *param_1 = 0;
      param_1[1] = 0;
      uVar1 = *(uint *)(param_1 + 4);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1001e33e0(param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      uVar1 = *(uint *)(param_1 + 4);
    }
    if ((uVar1 & 1) != 0) {
      if (param_1 != (undefined8 *)0x0) {
        plVar2 = param_1 + -1;
        if (*plVar2 + 8 != 0) {
          func_0x000107c60ee4(plVar2,*plVar2 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar2);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1004d1af8; end: 1004d1b03;  */

void FUN_1004d1af8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004d1b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 1004d1b04; end: 1004d1b73;  */

void FUN_1004d1b04(ulong *param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
        (*param_2)(param_3);
        uVar1 = *param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_1001e33e0(param_1[1]);
  if (param_1 != (ulong *)0x0) {
    param_1 = param_1 + -1;
    if (*param_1 + 8 != 0) {
      func_0x000107c60ee4(param_1,*param_1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1004d1b74; end: 1004d1b77;  */

void FUN_1004d1b74(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(param_1 + 8));
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004d1b78; end: 1004d1ba7;  */

void FUN_1004d1b78(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(param_1 + 8));
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004d1ba8; end: 1004d1d7b;  */

undefined4 * FUN_1004d1ba8(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((long)param_3 < 1) {
    uVar2 = 0xae;
    uVar3 = 0x91;
LAB_1004d1c08:
    FUN_1004d2c58(0xc,0,uVar2,&UNK_10f6c47a3,uVar3);
    return (undefined4 *)0x0;
  }
  if (param_3 >> 0x1f != 0) {
    uVar2 = 0xad;
    uVar3 = 0x96;
    goto LAB_1004d1c08;
  }
  if ((param_1 == (long *)0x0) || (puVar4 = (undefined4 *)*param_1, puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)0x3;
    func_0x0001004ce0c4();
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  pbVar7 = (byte *)*param_2;
  pbVar5 = pbVar7 + 1;
  bVar1 = *pbVar7;
  if (bVar1 < 8) {
    if (bVar1 == 0) {
      *(ulong *)(puVar4 + 4) = *(ulong *)(puVar4 + 4) & 0xfffffffffffffff0 | 8;
      if (param_3 == 1) {
        pbVar6 = (byte *)0x0;
        pbVar7 = pbVar5;
        goto LAB_1004d1d38;
      }
    }
    else {
      if ((param_3 == 1) || (((uint)pbVar5[param_3 - 2] & ~(-1 << (ulong)(bVar1 & 0x1f))) != 0)) {
        uVar2 = 0xc2;
        uVar3 = 0xac;
        goto LAB_1004d1cc4;
      }
      *(ulong *)(puVar4 + 4) = (ulong)bVar1 | *(ulong *)(puVar4 + 4) & 0xfffffffffffffff0 | 8;
    }
    FUN_1002039d0(pbVar5,param_3 - 1);
    if (pbVar5 != (byte *)0x0) {
      pbVar7 = pbVar7 + param_3;
      pbVar6 = pbVar5;
LAB_1004d1d38:
      *puVar4 = (int)(param_3 - 1);
      FUN_1001e33e0(*(undefined8 *)(puVar4 + 2));
      *(byte **)(puVar4 + 2) = pbVar6;
      puVar4[1] = 3;
      if (param_1 != (long *)0x0) {
        *param_1 = (long)puVar4;
      }
      *param_2 = (long)pbVar7;
      return puVar4;
    }
    uVar2 = 0x41;
    uVar3 = 0xba;
  }
  else {
    uVar2 = 0x8d;
    uVar3 = 0xa4;
  }
LAB_1004d1cc4:
  FUN_1004d2c58(0xc,0,uVar2,&UNK_10f6c47a3,uVar3);
  if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 == puVar4)) {
    return (undefined4 *)0x0;
  }
  FUN_1001e33e0(*(undefined8 *)(puVar4 + 2));
  FUN_1001e33e0(puVar4);
  return (undefined4 *)0x0;
}



/* Entry: 1004d1d7c; end: 1004d1ed3;  */

void FUN_1004d1d7c(undefined8 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2[1] & 0xfffffeffU) == param_3) {
    iVar2 = *param_2;
    if (iVar2 < 9) {
      if (iVar2 != 0) {
        param_2 = *(int **)(param_2 + 2);
        func_0x000107c610b4((long)&lStack_28 - (long)iVar2,param_2);
      }
      *param_1 = 0;
      lVar3 = 1;
      goto LAB_1004d1e30;
    }
    uVar5 = 0xc4;
    uVar6 = 0x142;
  }
  else {
    uVar5 = 0xc3;
    uVar6 = 0x13d;
  }
  param_2 = (int *)0x0;
  FUN_1004d2c58(0xc,0,uVar5,&UNK_10f6c491b,uVar6);
  lVar3 = 0;
LAB_1004d1e30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (lVar3 != 0) {
    plVar4 = &lStack_58;
    FUN_1004d1d7c(plVar4,lVar3,param_2);
    if ((int)plVar4 != 0) {
      uVar1 = (uint)((ulong)-lStack_58 >> 0x3f);
      if (((uint)(lStack_58 != 0) & *(uint *)(lVar3 + 4) >> 8) == 0) {
        uVar1 = (uint)((ulong)lStack_58 >> 0x3f) ^ 1;
      }
      if (uVar1 != 0) {
        return;
      }
    }
    FUN_1001e83a0();
  }
  return;
}



/* Entry: 1004d1ed4; end: 1004d1edb;  */

/* WARNING: Removing unreachable block (ram,0x0001004d1f18) */

undefined8 FUN_1004d1ed4(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)0x18;
    func_0x000107c610a0();
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0x10;
      puVar8 = puVar4 + 1;
      *(undefined4 *)puVar8 = 1;
      puVar4[2] = param_2;
      FUN_1004d1fdc(puVar8);
      piVar5 = (int *)(param_1 + 0x10);
      func_0x000107c61290();
      if ((int)piVar5 == 0) {
        lVar6 = *(long *)(param_1 + 8);
        FUN_1004d20d4(lVar6,puVar8);
        if (lVar6 == 0) {
          puVar4 = *(undefined8 **)(param_1 + 8);
          func_0x0001001e2c8c(puVar4,puVar8,*puVar4);
          piVar5 = (int *)(param_1 + 0x10);
          func_0x000107c6128c();
          if ((int)piVar5 != 0) goto LAB_1004d1fd8;
          if (puVar4 != (undefined8 *)0x0) {
            return 1;
          }
          uVar9 = 0;
        }
        else {
          piVar5 = (int *)(param_1 + 0x10);
          func_0x000107c6128c();
          if ((int)piVar5 != 0) goto LAB_1004d1fd8;
          uVar9 = 1;
        }
        func_0x000107c2b5f8(puVar8);
        FUN_1001e33e0(puVar8);
        return uVar9;
      }
LAB_1004d1fd8:
      func_0x000107c60ebc();
      if (*piVar5 == 2) {
        piVar5 = (int *)(*(long *)(piVar5 + 2) + 0x18);
        iVar7 = *piVar5;
        do {
          if (iVar7 == -1) {
            return 1;
          }
          iVar1 = *piVar5;
          if (iVar1 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar3 = cVar2 == '\0';
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          iVar7 = iVar1;
        } while (!bVar3);
      }
      else if (*piVar5 == 1) {
        piVar5 = (int *)(*(long *)(piVar5 + 2) + 0x18);
        iVar7 = *piVar5;
        do {
          if (iVar7 == -1) {
            return 1;
          }
          iVar1 = *piVar5;
          if (iVar1 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar3 = cVar2 == '\0';
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          iVar7 = iVar1;
        } while (!bVar3);
      }
      return 1;
    }
    FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cd5a1,0x157);
  }
  return 0;
}



/* Entry: 1004d1edc; end: 1004d1fdb;  */

undefined8 FUN_1004d1edc(long param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)0x18;
    func_0x000107c610a0();
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0x10;
      uVar7 = 1;
      if (param_3 != 0) {
        uVar7 = 2;
      }
      puVar9 = puVar4 + 1;
      *(undefined4 *)puVar9 = uVar7;
      puVar4[2] = param_2;
      FUN_1004d1fdc(puVar9);
      piVar5 = (int *)(param_1 + 0x10);
      func_0x000107c61290();
      if ((int)piVar5 == 0) {
        lVar6 = *(long *)(param_1 + 8);
        FUN_1004d20d4(lVar6,puVar9);
        if (lVar6 == 0) {
          puVar4 = *(undefined8 **)(param_1 + 8);
          func_0x0001001e2c8c(puVar4,puVar9,*puVar4);
          piVar5 = (int *)(param_1 + 0x10);
          func_0x000107c6128c();
          if ((int)piVar5 != 0) goto LAB_1004d1fd8;
          if (puVar4 != (undefined8 *)0x0) {
            return 1;
          }
          uVar10 = 0;
        }
        else {
          piVar5 = (int *)(param_1 + 0x10);
          func_0x000107c6128c();
          if ((int)piVar5 != 0) goto LAB_1004d1fd8;
          uVar10 = 1;
        }
        func_0x000107c2b5f8(puVar9);
        FUN_1001e33e0(puVar9);
        return uVar10;
      }
LAB_1004d1fd8:
      func_0x000107c60ebc();
      if (*piVar5 == 2) {
        piVar5 = (int *)(*(long *)(piVar5 + 2) + 0x18);
        iVar8 = *piVar5;
        do {
          if (iVar8 == -1) {
            return 1;
          }
          iVar1 = *piVar5;
          if (iVar1 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar3 = cVar2 == '\0';
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          iVar8 = iVar1;
        } while (!bVar3);
      }
      else if (*piVar5 == 1) {
        piVar5 = (int *)(*(long *)(piVar5 + 2) + 0x18);
        iVar8 = *piVar5;
        do {
          if (iVar8 == -1) {
            return 1;
          }
          iVar1 = *piVar5;
          if (iVar1 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            bVar3 = cVar2 == '\0';
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          iVar8 = iVar1;
        } while (!bVar3);
      }
      return 1;
    }
    FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cd5a1,0x157);
  }
  return 0;
}



/* Entry: 1004d1fdc; end: 1004d2083;  */

undefined8 FUN_1004d1fdc(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  if (*param_1 == 2) {
    piVar1 = (int *)(*(long *)(param_1 + 2) + 0x18);
    iVar5 = *piVar1;
    do {
      if (iVar5 == -1) {
        return 1;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar4 = cVar3 == '\0';
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar5 = iVar2;
    } while (!bVar4);
  }
  else if (*param_1 == 1) {
    piVar1 = (int *)(*(long *)(param_1 + 2) + 0x18);
    iVar5 = *piVar1;
    do {
      if (iVar5 == -1) {
        return 1;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar4 = cVar3 == '\0';
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar5 = iVar2;
    } while (!bVar4);
  }
  return 1;
}



/* Entry: 1004d2084; end: 1004d20d3;  */

void FUN_1004d2084(ulong *param_1)

{
  if (((param_1 != (ulong *)0x0) && (param_1[4] != 0)) && ((int)param_1[2] == 0)) {
    if (1 < *param_1) {
      func_0x000107c612b4(param_1[1],*param_1,8);
    }
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1004d20d4; end: 1004d22bb;  */

long FUN_1004d20d4(ulong *param_1,int *param_2)

{
  int **ppiVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int *piStack_58;
  undefined8 uStack_50;
  int *piStack_48;
  
  piStack_58 = param_2;
  FUN_1004d2084();
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  if (param_1[4] == 0) {
    if (*param_1 == 0) {
      return 0;
    }
    uVar7 = 0;
    while (*(int **)(param_1[1] + uVar7 * 8) != param_2) {
      uVar7 = uVar7 + 1;
      if (*param_1 == uVar7) {
        return 0;
      }
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      return 0;
    }
    uVar5 = *param_1;
    if ((int)param_1[2] != 0) {
      if (uVar5 == 0) {
        return 0;
      }
      uVar8 = 0;
      do {
        uVar7 = uVar8 + ((uVar5 - uVar8) - 1 >> 1);
        uStack_50 = *(undefined8 *)(param_1[1] + uVar7 * 8);
        ppiVar1 = &piStack_48;
        piStack_48 = param_2;
        (*(code *)param_1[4])(ppiVar1,&uStack_50);
        if ((int)ppiVar1 < 1) {
          if (-1 < (int)ppiVar1) {
            if (uVar5 - uVar8 == 1) goto LAB_1004d21e4;
            uVar7 = uVar7 + 1;
          }
        }
        else {
          uVar8 = uVar7 + 1;
          uVar7 = uVar5;
        }
        uVar5 = uVar7;
        if (uVar7 <= uVar8) {
          return 0;
        }
      } while( true );
    }
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = 0;
    while( true ) {
      uStack_50 = *(undefined8 *)(param_1[1] + uVar7 * 8);
      ppiVar1 = &piStack_48;
      piStack_48 = param_2;
      (*(code *)param_1[4])(ppiVar1,&uStack_50);
      if ((int)ppiVar1 == 0) break;
      uVar7 = uVar7 + 1;
      if (*param_1 <= uVar7) {
        return 0;
      }
    }
  }
LAB_1004d21e4:
  if (*param_2 - 1U < 2) {
    for (; uVar7 < *param_1; uVar7 = uVar7 + 1) {
      if (uVar7 < *param_1) {
        piVar6 = *(int **)(param_1[1] + uVar7 * 8);
      }
      else {
        piVar6 = (int *)0x0;
      }
      ppiVar1 = &piStack_48;
      piStack_48 = piVar6;
      func_0x0001004d2374(ppiVar1,&piStack_58);
      if ((int)ppiVar1 != 0) {
        return 0;
      }
      if (*param_2 == 2) {
        lVar3 = *(long *)(piVar6 + 2);
        lVar4 = *(long *)(param_2 + 2);
        if ((*(long *)(lVar3 + 0x48) == *(long *)(lVar4 + 0x48) &&
            *(long *)(lVar3 + 0x50) == *(long *)(lVar4 + 0x50)) &&
            *(int *)(lVar3 + 0x58) == *(int *)(lVar4 + 0x58)) {
          return (long)piVar6;
        }
      }
      else {
        if (*param_2 != 1) {
          return (long)piVar6;
        }
        uVar2 = *(undefined8 *)(piVar6 + 2);
        func_0x000107c2b5d8(uVar2,*(undefined8 *)(param_2 + 2));
        if ((int)uVar2 == 0) {
          return (long)piVar6;
        }
      }
    }
  }
  else if (uVar7 < *param_1) {
    return *(long *)(param_1[1] + uVar7 * 8);
  }
  return 0;
}



/* Entry: 1004d22bc; end: 1004d22eb;  */

void FUN_1004d22bc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1004d164c(&uStack_18,&UNK_110c87868,0);
  return;
}



/* Entry: 1004d22ec; end: 1004d22f3; -[SCBlizzardFrameStart sessionId] */

undefined8 FUN_1004d22ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1004d22f4; end: 1004d22fb; -[SCBlizzardFrameStart s2CellL13L16] */

undefined8 FUN_1004d22f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1004d22fc; end: 1004d2303; -[SCBlizzardFrameStart mobileCountryCode] */

undefined8 FUN_1004d22fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1004d2304; end: 1004d230b; -[SCBlizzardFrameStart clientId] */

undefined8 FUN_1004d2304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1004d230c; end: 1004d2313; -[SCBlizzardFrameStart userGuid] */

undefined8 FUN_1004d230c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1004d2314; end: 1004d231b; -[SCBlizzardFrameStart logQueueName] */

undefined8 FUN_1004d2314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1004d231c; end: 1004d2323; -[SCBlizzardFrameStart appDataSaverMode] */

undefined1 FUN_1004d231c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1004d2324; end: 1004d232b; -[SCBlizzardFrameStart appBuild] */

undefined8 FUN_1004d2324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004d232c; end: 1004d2333; -[SCBlizzardFrameStart appStartupType] */

undefined8 FUN_1004d232c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1004d2334; end: 1004d233b; -[SCBlizzardFrameStart appVersion] */

undefined8 FUN_1004d2334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1004d233c; end: 1004d2343; -[SCBlizzardFrameStart deviceModel] */

undefined8 FUN_1004d233c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1004d2344; end: 1004d234b; -[SCBlizzardFrameStart locale] */

undefined8 FUN_1004d2344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1004d234c; end: 1004d2353; -[SCBlizzardFrameStart osVersion] */

undefined8 FUN_1004d234c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1004d2354; end: 1004d235b; -[SCBlizzardFrameStart osMinorVersion] */

undefined8 FUN_1004d2354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1004d235c; end: 1004d2363; -[SCBlizzardFrameStart blizzardSchemaVersion] */

undefined8 FUN_1004d235c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1004d2364; end: 1004d236b; -[SCBlizzardFrameStart appUi] */

undefined4 FUN_1004d2364(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1004d236c; end: 1004d23cf; -[SCBlizzardFrameStart appType] */

undefined4 FUN_1004d236c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1004d23d0; end: 1004d249f;  */

ulong FUN_1004d23d0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_28;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) {
    plVar2 = &lStack_28;
    lStack_28 = param_1;
    FUN_1004d0778(plVar2,0,&DAT_110c87418,0xffffffff,0,0);
    if (-1 < (int)plVar2) goto LAB_1004d2420;
LAB_1004d2484:
    uVar3 = 0xfffffffe;
  }
  else {
LAB_1004d2420:
    if ((*(long *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) {
      plVar2 = &lStack_28;
      lStack_28 = param_2;
      FUN_1004d0778(plVar2,0,&DAT_110c87418,0xffffffff,0,0);
      if ((int)plVar2 < 0) goto LAB_1004d2484;
    }
    uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        uVar3 = *(ulong *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcmp_11034c650)(uVar3,*(undefined8 *)(param_2 + 0x18));
        return uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 1004d24a0; end: 1004d24a7; -[SCAExperimentUserTreatment getPayloadIdentifier] */

undefined8 FUN_1004d24a0(void)

{
  return 0x349;
}



/* Entry: 1004d24a8; end: 1004d24b3; -[SCAExperimentUserTreatment toProtoWithAllowedFields:] */

void FUN_1004d24a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 1004d24b4; end: 1004d25bf; -[SCBlizzardFrameStart .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004d24cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d24e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d24fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d2514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d252c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d2544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d255c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004d2548) */
/* WARNING: Removing unreachable block (ram,0x0001004d2530) */
/* WARNING: Removing unreachable block (ram,0x0001004d2518) */
/* WARNING: Removing unreachable block (ram,0x0001004d2500) */
/* WARNING: Removing unreachable block (ram,0x0001004d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001004d24d0) */
/* WARNING: Removing unreachable block (ram,0x0001004d2560) */

void FUN_1004d24b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x98,0);
  return;
}



/* Entry: 1004d25c0; end: 1004d26eb; -[SCBlizzardEventLoggerAdapter _wrapAndLogEvent:region:] */

/* WARNING: Possible PIC construction at 0x0001004d260c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d266c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d2690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004d26c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004d2694) */
/* WARNING: Removing unreachable block (ram,0x0001004d2670) */
/* WARNING: Removing unreachable block (ram,0x0001004d2610) */
/* WARNING: Removing unreachable block (ram,0x0001004d2614) */
/* WARNING: Removing unreachable block (ram,0x0001004d26cc) */
/* WARNING: Removing unreachable block (ram,0x0001004d26d4) */

void FUN_1004d25c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c51600(param_1);
  func_0x000107c61180();
  func_0x000107c5ac64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1004d26ec; end: 1004d271b; -[SCBlizzardSamplingProvider shouldLogSpectrumEvent:] */

undefined8 FUN_1004d26ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61170(param_3);
  return 1;
}



/* Entry: 1004d271c; end: 1004d29e7; -[SCBlizzardEventLoggerAdapter _wrapEvent:] */

void FUN_1004d271c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  
  puVar1 = PTR_PTR_1126d04e0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar2 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c52060();
  func_0x000107c61180();
  uVar4 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5d970();
  func_0x000107c61180();
  uVar6 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c3dd80();
  func_0x000107c61180();
  uVar8 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c3dec4();
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c4e0d0();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar14 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar15 = uVar14;
  func_0x000107c5d9d4();
  func_0x000107c61180();
  uVar16 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar17 = uVar16;
  func_0x000107c41924();
  func_0x000107c61180();
  uVar18 = param_1;
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar19 = uVar18;
  func_0x000107c3cf24();
  func_0x000107c42aa0();
  func_0x000107c61180();
  uVar20 = param_1;
  func_0x000107c3de64();
  puVar21 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c4862c(puVar1,param_2,uVar3,uVar5,uVar7,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,
                      (int)uVar20);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004d29e8; end: 1004d2a2b; -[SCBlizzardEventConfigurer sessionId] */

void FUN_1004d29e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c52068();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c52060();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2a2c; end: 1004d2a6f; -[SCBlizzardEventConfigurer appBuild] */

void FUN_1004d2a2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c51944();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2a70; end: 1004d2ab3; -[SCBlizzardEventConfigurer appVersion] */

void FUN_1004d2a70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3dec4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2ab4; end: 1004d2af7; -[SCBlizzardEventConfigurer osVersion] */

void FUN_1004d2ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4e0d0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2af8; end: 1004d2b3b; -[SCBlizzardEventConfigurer clientId] */

void FUN_1004d2af8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2b3c; end: 1004d2b7f; -[SCBlizzardEventConfigurer userLocale] */

void FUN_1004d2b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5d9d4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2b80; end: 1004d2bc3; -[SCBlizzardEventConfigurer deviceModel] */

void FUN_1004d2b80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c42aac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c41924();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004d2bc4; end: 1004d2c57; -[SCBlizzardEventConfigurer accountAgeDays] */

long FUN_1004d2bc4(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = uRam00000001136c4a50;
  func_0x000107c41050(uRam00000001136c4a50);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3cf28();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9ec();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  return (long)(param_1 / 86400.0);
}



/* Entry: 1004d2c58; end: 1004d2cff;  */

void FUN_1004d2c58(uint *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined2 param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_1001e82f0();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      func_0x000107c60e5c();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    FUN_1001e33e0(*(undefined8 *)(puVar3 + 2));
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 *)puVar3 = param_4;
    *(undefined2 *)(puVar3 + 5) = param_5;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 1004d2d00; end: 1004d2dfb;  */

void FUN_1004d2d00(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar1 = (undefined8 *)0x59;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1 + 1;
    *puVar1 = 0x51;
    if (param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0x50;
      uVar7 = 0;
      plVar8 = (long *)register0x00000008;
      do {
        lVar4 = *plVar8;
        uVar6 = uVar7;
        if (lVar4 != 0) {
          lVar2 = lVar4;
          func_0x000107c613d0();
          uVar6 = lVar2 + uVar7;
          puVar1 = puVar3;
          if (uVar5 < uVar6) {
            if ((0xffffffffffffffea < uVar5) ||
               (FUN_1001e43fc(puVar3,uVar6 + 0x15), puVar1 == (undefined8 *)0x0)) {
              FUN_1001e33e0(puVar3);
              return;
            }
            uVar5 = uVar6 + 0x14;
          }
          puVar3 = puVar1;
          if (lVar2 != 0) {
            func_0x000107c610b4((long)puVar1 + uVar7,lVar4,lVar2);
          }
        }
        param_1 = param_1 + -1;
        uVar7 = uVar6;
        plVar8 = plVar8 + 1;
      } while (param_1 != 0);
    }
    *(undefined1 *)((long)puVar3 + uVar6) = 0;
    FUN_1004d2dfc(puVar3);
  }
  return;
}



/* Entry: 1004d2dfc; end: 1004d2f1b;  */

void FUN_1004d2dfc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1001e82f0();
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x180) != *(uint *)(lVar2 + 0x184)) {
      lVar2 = lVar2 + (ulong)*(uint *)(lVar2 + 0x180) * 0x18;
      FUN_1001e33e0(*(undefined8 *)(lVar2 + 8));
      *(long *)(lVar2 + 8) = param_1;
      return;
    }
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1004d2f1c; end: 1004d3047;  */

undefined4 FUN_1004d2f1c(long *param_1,uint param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 == 0) {
    uVar2 = 2;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    uVar5 = (ulong)param_2;
    plVar4 = param_1;
    uVar6 = uVar5;
    do {
      lVar1 = *plVar4;
      if ((lVar1 == 0) || (func_0x000107c613d0(), 0xfe < lVar1 - 1U)) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x38e,2,"Invalid protocol name length: %d.");
        return 2;
      }
      puVar3 = puVar3 + lVar1 + 1;
      *param_4 = (ulong)puVar3;
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    FUN_100460200();
    *param_3 = (ulong)puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      uVar2 = 0xc;
    }
    else {
      do {
        lVar1 = *param_1;
        func_0x000107c613d0();
        *puVar3 = (char)lVar1;
        func_0x000107c610b4(puVar3 + 1,*param_1,lVar1);
        puVar3 = puVar3 + 1 + lVar1;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
      uVar2 = 7;
      if (((undefined1 *)*param_3 <= puVar3) &&
         (uVar2 = 0, (long)puVar3 - (long)*param_3 != *param_4)) {
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}



/* Entry: 1004d3048; end: 1004d3103;  */

uint FUN_1004d3048(long param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_3;
  pbVar4 = param_2;
  uVar5 = uVar8;
  if (param_3 == 0) {
    param_1 = param_1 + 0x260;
    FUN_1001e6684(param_1,0);
    uVar2 = (uint)param_1 ^ 1;
  }
  else {
    do {
      if (uVar5 == 0) {
        puVar1 = (undefined8 *)(param_1 + 0x260);
        puVar3 = puVar1;
        FUN_1001e6684(puVar1,uVar8);
        if ((int)puVar3 != 0) {
          func_0x000107c610b4(*puVar1,param_2,uVar8);
          return 0;
        }
        goto LAB_1004d30f0;
      }
      uVar6 = (ulong)*pbVar4;
      uVar7 = uVar5 - 1;
      pbVar4 = pbVar4 + uVar6 + 1;
      uVar5 = uVar7 - uVar6;
    } while (uVar6 - 1 < uVar7);
    FUN_1004d2c58(0x10,0,0x13b,&UNK_10f6d0a17,0x895);
LAB_1004d30f0:
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1004d3104; end: 1004d317b;  */

void FUN_1004d3104(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x240) = param_2;
  *(undefined8 *)(param_1 + 0x248) = param_3;
  return;
}



/* Entry: 1004d317c; end: 1004d3273;  */

ulong * FUN_1004d317c(ulong *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *param_1 << 3;
  FUN_100460200();
  uVar4 = *param_1;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      *(ulong *)(lVar2 + uVar6 * 8) = param_1[1] + lVar5;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 != uVar6);
    if (1 < uVar4) {
      func_0x000107c612b4(lVar2,uVar4,8,FUN_1004d3540);
    }
  }
  puVar3 = (ulong *)0x10;
  FUN_100460200();
  uVar4 = *param_1;
  *puVar3 = uVar4;
  uVar4 = uVar4 << 5;
  FUN_100460200();
  puVar3[1] = uVar4;
  if (*param_1 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      FUN_10047fb38(&uStack_60,*(undefined8 *)(lVar2 + uVar4 * 8));
      puVar1 = (undefined8 *)(puVar3[1] + lVar5);
      puVar1[1] = uStack_58;
      *puVar1 = uStack_60;
      puVar1[3] = uStack_48;
      puVar1[2] = uStack_50;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 < *param_1);
  }
  FUN_100460314(lVar2);
  return puVar3;
}



/* Entry: 1004d3274; end: 1004d32cf;  */

undefined8 * FUN_1004d3274(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  FUN_1004d317c();
  param_1[0x11] = param_3;
  return param_1;
}



/* Entry: 1004d32d0; end: 1004d353f;  */

ulong * FUN_1004d32d0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  ulong auStack_d8 [18];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_e0 = param_4;
  FUN_1004d3274(auStack_d8);
  FUN_1004d3584();
  if (param_4 == (long *)0x0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0x2ce,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004d34ac);
    (*pcVar4)();
  }
  puVar8 = auStack_d8;
  (**(code **)(*param_4 + 0x20))(&plStack_e8,param_4);
  if (plStack_e8 == (long *)0x0) {
    FUN_1004d3704(&plStack_f0,auStack_d8,param_2,&plStack_e0);
    plVar5 = plStack_f0;
    if (plStack_e8 != (long *)0x0) {
      puVar8 = (ulong *)(plStack_e8 + 1);
      do {
        uVar11 = *puVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = uVar11 - 0xffffffff;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 >> 0x20 == 1) {
        (**(code **)*plStack_e8)(plStack_e8);
      }
      do {
        uVar11 = *puVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      }
    }
    plStack_f0 = (long *)0x0;
    plStack_e8 = plVar5;
    FUN_1004d6dac(&plStack_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar5 = plStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 0x100000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_f8 = plStack_e8;
    puVar8 = (ulong *)(plStack_e8 + 3);
    (**(code **)(*param_4 + 0x10))(param_1,param_4,puVar8,&plStack_f8);
    FUN_1004d6dac(&plStack_f8);
    param_1 = (long *)*param_1;
    if (param_1 == plStack_e8) {
      plVar5 = param_4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      param_1[2] = (long)param_4;
    }
  }
  else {
    *param_1 = (long)plStack_e8;
    plStack_e8 = (long *)0x0;
  }
  FUN_1004d6dac(&plStack_e8);
  puVar6 = auStack_d8;
  FUN_1004d6d80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  func_0x000107c60e78();
  if ((int)puVar8 != 0) {
    func_0x000104bd46a0();
    FUN_1004d6dac(&plStack_f8);
    FUN_1004d6dac(&plStack_e8);
    FUN_1004d6d80(auStack_d8);
  }
  func_0x000107c60bd8();
  uVar11 = *puVar6;
  uVar7 = *(undefined8 *)(uVar11 + 8);
  uVar12 = *puVar8;
  func_0x000107c613c0(uVar7,*(undefined8 *)(uVar12 + 8));
  uVar9 = (uint)(uVar12 < uVar11);
  if (uVar11 < uVar12) {
    uVar9 = 0xffffffff;
  }
  if ((uint)uVar7 != 0) {
    uVar9 = (uint)uVar7;
  }
  return (ulong *)(ulong)uVar9;
}



/* Entry: 1004d3540; end: 1004d3583;  */

uint FUN_1004d3540(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  uVar1 = *(undefined8 *)(uVar3 + 8);
  uVar4 = *param_2;
  func_0x000107c613c0(uVar1,*(undefined8 *)(uVar4 + 8));
  uVar2 = (uint)(uVar4 < uVar3);
  if (uVar3 < uVar4) {
    uVar2 = 0xffffffff;
  }
  if ((uint)uVar1 != 0) {
    uVar2 = (uint)uVar1;
  }
  return uVar2;
}



/* Entry: 1004d3584; end: 1004d35bb;  */

void FUN_1004d3584(undefined8 param_1)

{
  FUN_10047fdf4(param_1,"grpc.internal.subchannel_pool");
  return;
}


