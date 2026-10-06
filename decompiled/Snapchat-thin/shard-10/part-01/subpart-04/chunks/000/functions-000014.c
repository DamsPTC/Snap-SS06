/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d8390; end: 1078d83b3;  */

void FUN_1078d8390(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078d83b4(&uStack_11,param_1);
  return;
}



/* Entry: 1078d8738; end: 1078d8cb7;  */

undefined1  [16] FUN_1078d8738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  char *extraout_x10;
  char *extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  uint uVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong unaff_x22;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [24];
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [24];
  char cStack_1c8;
  undefined7 uStack_1c7;
  char *pcStack_1c0;
  byte bStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [280];
  
  uStack_1b0 = param_2;
  uStack_1a8 = param_3;
  func_0x000100060b18(&cStack_1c8,&uStack_1b0);
  func_0x0001078d8cec();
  lVar14 = extraout_x11;
  pcVar6 = extraout_x10;
  if (-1 < extraout_w9) {
    lVar14 = extraout_x8;
    pcVar6 = &cStack_1c8;
  }
  auStack_188[0] = 0x20;
  func_0x000100651c34(pcVar6,pcVar6 + lVar14,auStack_188);
  func_0x0001078d8cec();
  func_0x00010015bbdc(&cStack_1c8);
  func_0x0001078d8cec();
  pcVar7 = extraout_x10_00;
  pcVar6 = extraout_x10_00 + extraout_x11_00;
  if (-1 < extraout_w9_00) {
    pcVar7 = &cStack_1c8;
    pcVar6 = &cStack_1c8 + extraout_x8_00;
  }
  for (; pcVar7 != pcVar6; pcVar7 = pcVar7 + 1) {
    cVar3 = *pcVar7;
    ___tolower();
    *pcVar7 = cVar3;
  }
  lVar14 = 0x940;
  ppuVar1 = &PTR_DAT_1109e9368;
  do {
    ppuVar13 = ppuVar1;
    if (lVar14 == 0) {
      uVar12 = (uint)ppuVar13;
      if ((char)bStack_1b1 < '\0') {
        if ((pcStack_1c0 == (char *)0x0) || (*(char *)CONCAT71(uStack_1c7,cStack_1c8) != '#'))
        goto LAB_1078d88c8;
        if (pcStack_1c0 == (char *)0x4) goto LAB_1078d8868;
      }
      else {
        if ((bStack_1b1 == 0) || (cStack_1c8 != '#')) {
LAB_1078d88c8:
          pcVar6 = &cStack_1c8;
          __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(pcVar6,0x28,0);
          pcVar7 = &cStack_1c8;
          __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(pcVar7,0x29,0);
          if (pcVar6 == (char *)0xffffffffffffffff) goto LAB_1078d8bf8;
          if (-1 < (char)bStack_1b1) {
            pcStack_1c0 = (char *)(ulong)bStack_1b1;
          }
          if (pcVar7 + 1 != pcStack_1c0) goto LAB_1078d8bf8;
          func_0x0001000e1048(auStack_1e0,&cStack_1c8,0,pcVar6);
          func_0x0001000e1048(auStack_210,&cStack_1c8,pcVar6 + 1,(long)pcVar7 - (long)(pcVar6 + 1));
          lStack_1f8 = 0;
          lStack_1f0 = 0;
          uStack_1e8 = 0;
          func_0x0001078d8678(auStack_188,auStack_210,0x18);
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          while( true ) {
            plVar8 = (long *)auStack_188;
            func_0x000105c43344(plVar8,&uStack_1a0,0x2c);
            fVar20 = (float)param_1;
            if ((*(byte *)((long)plVar8 + *(long *)(*plVar8 + -0x18) + 0x20) & 5) != 0) break;
            func_0x000100206870(&lStack_1f8,&uStack_1a0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
          func_0x000105673d7c(auStack_188);
          puVar9 = auStack_210;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x0001078d8cb8();
          iVar4 = (int)puVar9;
          if (((ulong)puVar9 & 1) == 0) {
            func_0x0001078d8cb8();
            iVar4 = (int)puVar9;
            if (iVar4 != 0) goto LAB_1078d8a24;
            func_0x0001078d8cb8();
            iVar4 = (int)puVar9;
            if ((((ulong)puVar9 & 1) == 0) && (func_0x0001078d8cb8(), iVar4 == 0)) {
              func_0x0001078d8cd4();
              func_0x0001078d8d04();
LAB_1078d8bf8:
              uVar15 = 0;
              uVar11 = 0;
              uVar12 = 0;
              goto LAB_1078d8c04;
            }
            func_0x0001078d8cb8();
            if (iVar4 == 0) {
              if (lStack_1f0 - lStack_1f8 == 0x48) {
                fVar16 = 1.0;
                goto LAB_1078d8b18;
              }
              goto LAB_1078d8bd8;
            }
            if (lStack_1f0 - lStack_1f8 != 0x60) goto LAB_1078d8bd8;
            fVar16 = fVar20;
            func_0x0001078d857c(lStack_1f0 + -0x18);
            fVar20 = fVar16;
LAB_1078d8b18:
            func_0x0001078d84a0(lStack_1f8);
            uVar19 = (ulong)(uint)(fVar20 / 360.0);
            _modff(auStack_214);
            uVar15 = uVar19;
            func_0x0001078d857c(lStack_1f8 + 0x18);
            fVar18 = (float)uVar15;
            lVar14 = lStack_1f8 + 0x30;
            fVar17 = fVar18;
            func_0x0001078d857c(lVar14);
            uVar11 = (uint)lVar14;
            fVar20 = (fVar18 + fVar17) - fVar18 * fVar17;
            if (fVar17 <= 0.5) {
              fVar20 = (fVar18 + 1.0) * fVar17;
            }
            func_0x0001078d8cdc(0x3eaaaaab);
            func_0x0001078d8cfc(0x437f0000);
            uVar12 = uVar11;
            func_0x0001078d85ec(fVar17 * 2.0 - fVar20,fVar20,uVar19);
            func_0x0001078d8cfc();
            uVar5 = uVar12;
            func_0x0001078d8cdc(0xbeaaaaab);
            func_0x0001078d8cfc();
            uVar12 = uVar12 | uVar5 << 8;
            fVar20 = 0.0;
            if (0.0 <= fVar16) {
              fVar20 = fVar16;
            }
            fVar17 = 1.0;
            if (fVar16 <= 1.0) {
              fVar17 = fVar20;
            }
LAB_1078d8aa8:
            unaff_x22 = (ulong)(uint)fVar17;
            uVar15 = 1;
          }
          else {
LAB_1078d8a24:
            func_0x0001078d8cb8();
            if (iVar4 == 0) {
              if (lStack_1f0 - lStack_1f8 == 0x48) {
                fVar20 = 1.0;
                goto LAB_1078d8a68;
              }
            }
            else if (lStack_1f0 - lStack_1f8 == 0x60) {
              func_0x0001078d857c(lStack_1f0 + -0x18);
LAB_1078d8a68:
              lVar14 = lStack_1f8;
              func_0x0001078d84d4(lStack_1f8);
              uVar11 = (uint)lVar14;
              lVar14 = lStack_1f8 + 0x18;
              func_0x0001078d84d4(lVar14);
              lVar10 = lStack_1f8 + 0x30;
              func_0x0001078d84d4(lVar10);
              uVar12 = (uint)lVar14 | (int)lVar10 << 8;
              fVar16 = 0.0;
              if (0.0 <= fVar20) {
                fVar16 = fVar20;
              }
              fVar17 = 1.0;
              if (fVar20 <= 1.0) {
                fVar17 = fVar16;
              }
              goto LAB_1078d8aa8;
            }
LAB_1078d8bd8:
            uVar15 = 0;
            uVar11 = 0;
            uVar12 = 0;
          }
          func_0x0001078d8cd4();
          func_0x0001078d8d04();
          goto LAB_1078d8c04;
        }
        if (bStack_1b1 == 4) {
LAB_1078d8868:
          func_0x0001078d8cc0();
          func_0x0001078d84b8(auStack_188,0x10);
          func_0x0001078d8d0c();
          bVar2 = ppuVar13 < (undefined **)0x1000;
          uVar11 = (uint)((ulong)ppuVar13 >> 4) & 0xf0 | (uint)((ulong)ppuVar13 >> 8);
          uVar12 = (uVar12 & 0xf) << 8 | (uVar12 & 0xf) << 0xc |
                   (uint)((ulong)ppuVar13 >> 4) & 0xf | uVar12 & 0xf0;
          uVar5 = 0x3f800000;
          if (!bVar2) {
            uVar5 = uVar11;
          }
          unaff_x22 = (ulong)uVar5;
          uVar15 = (ulong)bVar2;
          if (!bVar2) {
            uVar11 = 0;
            uVar12 = 0;
          }
          goto LAB_1078d8c04;
        }
        pcStack_1c0 = (char *)(ulong)bStack_1b1;
      }
      if (pcStack_1c0 != (char *)0x7) goto LAB_1078d8bf8;
      func_0x0001078d8cc0();
      func_0x0001078d84b8(auStack_188,0x10);
      func_0x0001078d8d0c();
      uVar12 = (uVar12 & 0xff00 | (uVar12 & 0xff) << 0x10) >> 8;
      bVar2 = (ulong)ppuVar13 >> 0x18 == 0;
      uVar11 = 0x3f800000;
      if (!bVar2) {
        uVar11 = (uint)((ulong)ppuVar13 >> 0x18);
      }
      unaff_x22 = (ulong)uVar11;
      uVar15 = (ulong)bVar2;
      uVar11 = (uint)((ulong)ppuVar13 >> 0x10);
      if (!bVar2) {
        uVar11 = 0;
        uVar12 = 0;
      }
      goto LAB_1078d8c04;
    }
    pcVar6 = &cStack_1c8;
    func_0x000100152bb8(pcVar6,*ppuVar13);
    lVar14 = lVar14 + -0x10;
    ppuVar1 = ppuVar13 + 2;
  } while ((int)pcVar6 == 0);
  uVar11 = *(uint *)(ppuVar13 + 1);
  unaff_x22 = (ulong)*(uint *)((long)ppuVar13 + 0xc);
  uVar12 = uVar11 >> 8;
  uVar15 = 1;
LAB_1078d8c04:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&cStack_1c8);
  auVar21._0_8_ = (ulong)(uVar11 & 0xff | uVar12 << 8) | unaff_x22 << 0x20;
  auVar21._8_8_ = uVar15;
  return auVar21;
}



/* Entry: 1078d9774; end: 1078d97ef;  */

void FUN_1078d9774(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[2] = *param_4;
  *(int *)(param_1 + 1) = param_3;
  uVar2 = param_4[1];
  param_1[4] = param_4[2];
  param_1[3] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  if (-1 < param_3) {
    return;
  }
  func_0x0001078dbd18();
  func_0x00010724664c();
  func_0x0001078dbcf8();
  func_0x0001078dbd44();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078d97d8);
  (*pcVar1)();
}



/* Entry: 1078dada8; end: 1078daf3b;  */

/* WARNING: Possible PIC construction at 0x0001078dae28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078dae40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078daee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078dae44) */
/* WARNING: Removing unreachable block (ram,0x0001078dae68) */
/* WARNING: Removing unreachable block (ram,0x0001078dae90) */
/* WARNING: Removing unreachable block (ram,0x0001078dae98) */
/* WARNING: Removing unreachable block (ram,0x0001078daec4) */
/* WARNING: Removing unreachable block (ram,0x0001078daea0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae70) */
/* WARNING: Removing unreachable block (ram,0x0001078dae2c) */
/* WARNING: Removing unreachable block (ram,0x0001078daee8) */
/* WARNING: Removing unreachable block (ram,0x0001078daec8) */
/* WARNING: Removing unreachable block (ram,0x0001078daef0) */
/* WARNING: Removing unreachable block (ram,0x0001078daed0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae34) */

undefined8 * FUN_1078dada8(long param_1,uint param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  int iVar7;
  ulong uVar8;
  
  if (*(uint *)(param_1 + 8) < 4) {
    uVar6 = *(uint *)(&UNK_10deda900 + (ulong)*(uint *)(param_1 + 8) * 4) | param_2;
    iVar7 = 10;
    do {
      uVar6 = ((int)uVar6 >> 9) * 0x537 ^ uVar6 << 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar6 = uVar6 & 1;
    func_0x0001078dbe84();
    uVar8 = (ulong)(int)param_2;
    puVar1 = *(ulong **)(param_1 + 0x10);
    func_0x0001078db0d4(puVar1,*(undefined8 *)(param_1 + 0x18),0);
    func_0x0001078daba0();
    if (uVar6 == 0) {
      uVar8 = *puVar1 & (uVar8 ^ 0xffffffffffffffff);
    }
    else {
      func_0x0001078dbf48();
      uVar8 = extraout_x8;
    }
    *puVar1 = uVar8;
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    func_0x0001078db0d4(puVar2,*(undefined8 *)(param_1 + 0x30),0);
    func_0x0001078daba0();
    func_0x0001078dbf48();
    *puVar2 = extraout_x8_00;
    return puVar2;
  }
  func_0x0001078dbd18();
  __ZNSt11logic_errorC1EPKc();
  puVar3 = PTR___ZTISt11logic_error_110346a38;
  puVar5 = PTR___ZNSt11logic_errorD1Ev_110346148;
  func_0x0001078dbd44();
  iVar7 = (int)puVar3;
  iVar4 = (int)puVar5;
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  if ((((-1 < iVar7) && (iVar4 < *(int *)(param_1 + 4))) && (-1 < iVar4)) &&
     (iVar7 < *(int *)(param_1 + 4))) {
    puVar1 = (ulong *)(param_1 + 0x10);
    func_0x0001078db0f8(puVar1,(long)iVar4);
    uVar8 = (ulong)iVar7;
    func_0x0001078db128();
    return (undefined8 *)(ulong)((uVar8 & *puVar1) != 0);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1078db1f8; end: 1078db2bb;  */

char FUN_1078db1f8(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = param_1[1];
  if ((iVar1 < 1 || param_1[2] != iVar1) ||
     ((param_1[3] != iVar1 * 3 || param_1[4] != iVar1) || param_1[5] != iVar1)) {
    bVar3 = false;
    bVar2 = false;
  }
  else {
    bVar3 = iVar1 * 4 <= *param_1 && iVar1 <= param_1[6];
    bVar2 = iVar1 * 4 <= param_1[6] && iVar1 <= *param_1;
  }
  return bVar2 + bVar3;
}



/* Entry: 1078db674; end: 1078db67b;  */

void FUN_1078db674(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    func_0x000104be7d74(lVar2 + -0x18);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1078dbb98; end: 1078dbbff;  */

void FUN_1078dbb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010002b958(param_1,param_4);
    func_0x0001078dbf74();
    func_0x0001078a8660();
  }
  uStack_38 = 1;
  func_0x00010002b9fc(&uStack_40);
  return;
}



/* Entry: 1078dd390; end: 1078dd4c7;  */

void FUN_1078dd390(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  lVar7 = *param_1;
  while( true ) {
    if (lVar8 == 0) {
      return;
    }
    lVar2 = *(long *)(lVar8 + 0x28);
    lVar3 = *(long *)(lVar8 + 0x30);
    puVar5 = *(undefined8 **)(lVar7 + 0x20);
    if (lVar2 == 0 && lVar3 == 0) break;
    lVar4 = puVar5[4];
    if (lVar8 == puVar5[3] - lVar4) {
      puVar5[3] = lVar2 + lVar4;
    }
    lVar9 = lVar3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + lVar4 + 0x10) = lVar3;
      lVar9 = lVar7;
    }
    plVar6 = *(long **)(lVar9 + 0x20);
    if (*(long *)(lVar8 + 0x30) != 0) {
      *(long *)(*(long *)(lVar8 + 0x30) + plVar6[4] + 8) = lVar2;
    }
    plVar1 = (long *)(*plVar6 + (ulong)((int)plVar6[1] - 1U & *(uint *)(lVar8 + 0x54)) * 0x10);
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    lVar7 = *(long *)(lVar8 + 0x40);
    if (*plVar1 == lVar8 + 0x20) {
      *plVar1 = lVar7;
      lVar8 = *(long *)(lVar8 + 0x38);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x38);
    }
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x20) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x18) = lVar8;
    }
    *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    _free();
    lVar8 = lVar3;
    lVar7 = lVar9;
  }
  _free(*puVar5);
  _free(*(undefined8 *)(lVar7 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar8);
  return;
}



/* Entry: 1078ddbcc; end: 1078df5df;  */

/* WARNING: Possible PIC construction at 0x0001078df80c: Changing call to branch */

ulong * FUN_1078ddbcc(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  byte bVar10;
  char cVar11;
  ushort uVar12;
  short sVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong **ppuVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  ulong *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  int iVar26;
  ulong *puVar27;
  int iVar28;
  ulong *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  byte *pbVar39;
  long lVar40;
  uint uVar41;
  int iVar42;
  undefined4 uVar43;
  int iVar44;
  int iVar45;
  undefined4 *puVar46;
  undefined4 uVar47;
  int iVar48;
  ulong uVar49;
  ulong uVar50;
  int iVar51;
  ulong uVar52;
  int iVar53;
  ulong uVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  ulong *unaff_x19;
  ulong *puVar58;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar59;
  undefined8 *puVar60;
  undefined4 *puVar61;
  ulong *puVar62;
  ulong uVar63;
  undefined1 *puVar64;
  undefined *puVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  uint uStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a0;
  ulong *puStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  ulong uStack_180;
  int iStack_174;
  ulong *puStack_170;
  undefined8 *puStack_168;
  undefined4 *puStack_160;
  ulong *puStack_158;
  uint *puStack_150;
  undefined4 *puStack_148;
  undefined8 *puStack_140;
  undefined4 *puStack_138;
  ulong *puStack_130;
  uint uStack_124;
  byte *pbStack_120;
  ulong *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar58 = (ulong *)*param_2;
  puVar27 = param_3;
  puVar29 = param_4;
  if (((ulong)puVar58 | (ulong)param_4) >> 0x20 != 0) {
    puVar21 = (ulong *)0xffffd8f0;
    param_3 = unaff_x21;
    goto LAB_1078df448;
  }
  puVar22 = (undefined4 *)0xab10;
  puStack_198 = param_2;
  _malloc();
  if (puVar22 == (undefined4 *)0x0) {
    puVar21 = (ulong *)0xfffffffc;
    goto LAB_1078df448;
  }
  puStack_1a8 = puVar22 + 0xa4a;
  *puVar22 = 0;
  puVar22[0x2ac3] = 1;
  puVar22[0xac2] = 0xf;
  *(undefined8 *)(puVar22 + 0xac0) = 0x100000000;
  *(undefined8 *)(puVar22 + 0xabe) = 0;
  puVar21 = (ulong *)((long)param_3 + (long)param_4);
  puVar22[7] = 1;
  puVar22[4] = 1;
  if (param_4 == (ulong *)0x0) {
    uVar32 = 0;
    puVar22[2] = 0;
    unaff_x22 = param_3;
    puVar24 = param_3;
    if (puVar21 <= param_3) goto LAB_1078ddcb0;
LAB_1078ddc88:
    unaff_x22 = (ulong *)((long)puVar24 + 1);
    uVar36 = (uint)(byte)*puVar24;
  }
  else {
    unaff_x22 = (ulong *)((long)param_3 + 1);
    uVar32 = (uint)(byte)*param_3;
    puVar22[2] = (uint)(byte)*param_3;
    puVar24 = unaff_x22;
    if (unaff_x22 < puVar21) goto LAB_1078ddc88;
LAB_1078ddcb0:
    uVar36 = 0;
  }
  unaff_x19 = (ulong *)0x0;
  puVar22[3] = uVar36;
  uVar43 = 0xffffffff;
  uVar38 = 1;
  uVar47 = 0x24;
  puVar24 = param_1;
  puStack_138 = puVar22;
  if (((uVar32 & 0xf) == 8) &&
     (uVar33 = uVar36 | uVar32 << 8, uVar32 = uVar33 * 0x843 >> 0x10,
     (uVar36 & 0x20) == 0 &&
     (uVar33 + (uVar32 + ((uVar33 - uVar32 & 0xfffe) >> 1) >> 4) * -0x1f & 0xffff) == 0)) {
    unaff_x19 = (ulong *)0x0;
    uStack_190 = 0;
    puVar62 = (ulong *)0x0;
    puVar25 = (ulong *)0x0;
    uVar63 = 0;
    puVar58 = (ulong *)((long)param_1 + (long)puVar58);
    puStack_140 = (undefined8 *)(puVar22 + 0x12);
    puStack_150 = puVar22 + 0xb;
    puStack_168 = (undefined8 *)(puVar22 + 0x37a);
    puStack_1e8 = (undefined8 *)(puVar22 + 0x36);
    puStack_188 = (undefined8 *)(puVar22 + 0x6e2);
    puStack_148 = puVar22 + 0x72a;
    puStack_160 = puVar22 + 0xa4b;
    puStack_1a0 = puVar22 + 0x5a;
    puStack_1d8 = puVar22 + 0x25a;
    puStack_1e0 = puVar22 + 0x3c2;
    puStack_1d0 = puVar22 + 0x5c2;
    puVar60 = puStack_188;
    puStack_1c0 = param_3;
    puStack_1b8 = param_4;
    puStack_130 = puVar21;
LAB_1078dddac:
    do {
      uVar38 = (uint)puVar62;
      uVar36 = (uint)puVar25;
      uVar32 = (uint)uVar63;
      puVar21 = unaff_x19;
      if (uVar32 < 3) {
        if (unaff_x22 < puStack_130) {
          uVar35 = (ulong)(byte)*unaff_x22;
          unaff_x22 = (ulong *)((long)unaff_x22 + 1);
        }
        else {
          uVar35 = 0;
        }
        puVar21 = (ulong *)(uVar35 << (uVar63 & 0x3f) | (ulong)unaff_x19);
        uVar32 = uVar32 | 8;
      }
      uVar33 = (uint)puVar21 & 7;
      unaff_x19 = (ulong *)((ulong)puVar21 >> 3);
      uVar32 = uVar32 - 3;
      uVar63 = (ulong)uVar32;
      uVar41 = (uint)puVar21 >> 1 & 3;
      puStack_138[5] = uVar33;
      puStack_138[6] = uVar41;
      if (1 < uVar33) {
        puStack_1f0 = puVar58;
        puStack_170 = puVar24;
        if (uVar41 == 1) {
          *(undefined8 *)(puStack_138 + 0xb) = 0x2000000120;
          puStack_168[1] = 0x505050505050505;
          *puStack_168 = 0x505050505050505;
          puStack_168[3] = 0x505050505050505;
          puStack_168[2] = 0x505050505050505;
          puStack_140[1] = 0x808080808080808;
          *puStack_140 = 0x808080808080808;
          puStack_140[3] = 0x808080808080808;
          puStack_140[2] = 0x808080808080808;
          puStack_140[5] = 0x808080808080808;
          puStack_140[4] = 0x808080808080808;
          puStack_140[7] = 0x808080808080808;
          puStack_140[6] = 0x808080808080808;
          puStack_140[9] = 0x808080808080808;
          puStack_140[8] = 0x808080808080808;
          puStack_140[0xb] = 0x808080808080808;
          puStack_140[10] = 0x808080808080808;
          puStack_140[0xd] = 0x808080808080808;
          puStack_140[0xc] = 0x808080808080808;
          puStack_140[0xf] = 0x808080808080808;
          puStack_140[0xe] = 0x808080808080808;
          puStack_140[0x11] = 0x808080808080808;
          puStack_140[0x10] = 0x808080808080808;
          puStack_1e8[1] = 0x909090909090909;
          *puStack_1e8 = 0x909090909090909;
          puStack_1e8[3] = 0x909090909090909;
          puStack_1e8[2] = 0x909090909090909;
          puStack_1e8[5] = 0x909090909090909;
          puStack_1e8[4] = 0x909090909090909;
          puStack_1e8[7] = 0x909090909090909;
          puStack_1e8[6] = 0x909090909090909;
          puStack_1e8[9] = 0x909090909090909;
          puStack_1e8[8] = 0x909090909090909;
          puStack_1e8[0xb] = 0x909090909090909;
          puStack_1e8[10] = 0x909090909090909;
          puStack_1e8[0xd] = 0x909090909090909;
          puStack_1e8[0xc] = 0x909090909090909;
          *(undefined8 *)(puStack_138 + 0x52) = 0x707070707070707;
          *(undefined8 *)(puStack_138 + 0x54) = 0x707070707070707;
          uVar36 = 0x120;
          uVar38 = 0x20;
          *(undefined8 *)(puStack_138 + 0x56) = 0x707070707070707;
          *(undefined8 *)(puStack_138 + 0x58) = 0x808080808080808;
LAB_1078de1ec:
          iStack_174 = -uVar36;
          uStack_1ac = uVar38 + uVar36;
          uVar35 = (ulong)puVar21 >> 1 & 3;
          pbStack_120 = (byte *)(puStack_140 + uVar35 * 0x1b4);
          puVar61 = puStack_1a0 + uVar35 * 0x368;
          uStack_180 = (ulong)uVar36;
          puStack_158 = (ulong *)(ulong)uVar38;
          puStack_118 = unaff_x22;
          do {
            puVar15 = puStack_140;
            uVar38 = (uint)puVar62;
            uVar36 = (uint)puVar25;
            uVar32 = (uint)uVar63;
            puVar58 = (ulong *)0x1;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            puVar60 = puStack_140 + (ulong)uVar41 * 0x1b4 + 0x24;
            uStack_124 = uVar41;
            _bzero(puVar60,0xc80);
            uVar37 = uStack_1ac;
            uVar33 = puStack_150[uStack_124];
            pbVar39 = pbStack_120;
            uVar35 = (ulong)uVar33;
            if (uVar33 == 0) {
              iVar53 = 0;
              iVar31 = 0;
              iVar30 = 0;
              iVar28 = 0;
              puVar27 = (ulong *)0x0;
              iVar26 = 0;
              iVar19 = 0;
              iVar57 = 0;
              iVar55 = 0;
              iVar51 = 0;
              iVar48 = 0;
              iVar45 = 0;
              iVar44 = 0;
              iVar42 = 0;
              iVar20 = 0;
            }
            else {
              do {
                *(int *)((long)&uStack_110 + (ulong)*pbVar39 * 4) =
                     *(int *)((long)&uStack_110 + (ulong)*pbVar39 * 4) + 1;
                uVar35 = uVar35 - 1;
                pbVar39 = pbVar39 + 1;
              } while (uVar35 != 0);
              puVar27 = (ulong *)(uStack_e8 >> 0x20);
              iVar20 = uStack_110._4_4_;
              iVar42 = (int)uStack_108;
              iVar44 = uStack_108._4_4_;
              iVar45 = (int)uStack_100;
              iVar48 = uStack_100._4_4_;
              iVar51 = (int)uStack_f8;
              iVar55 = uStack_f8._4_4_;
              iVar57 = (int)uStack_f0;
              iVar19 = uStack_f0._4_4_;
              iVar26 = (int)uStack_e8;
              iVar28 = (int)uStack_e0;
              iVar30 = uStack_e0._4_4_;
              iVar31 = (int)uStack_d8;
              iVar53 = uStack_d8._4_4_;
            }
            uStack_c8 = 0;
            iStack_bc = (iVar20 * 2 + iVar42) * 2;
            iStack_c0 = iVar20 * 2;
            iStack_b8 = (iStack_bc + iVar44) * 2;
            iStack_b4 = (iStack_b8 + iVar45) * 2;
            iStack_b0 = (iStack_b4 + iVar48) * 2;
            iStack_ac = (iStack_b0 + iVar51) * 2;
            iStack_a8 = (iStack_ac + iVar55) * 2;
            iStack_a4 = (iStack_a8 + iVar57) * 2;
            iStack_a0 = (iStack_a4 + iVar19) * 2;
            iStack_9c = (iStack_a0 + iVar26) * 2;
            iStack_98 = (iStack_9c + (int)puVar27) * 2;
            iStack_94 = (iStack_98 + iVar28) * 2;
            iStack_90 = (iStack_94 + iVar30) * 2;
            iStack_8c = (iStack_90 + iVar31) * 2;
            uVar9 = iVar31 + iVar53 + iVar30 + iVar28;
            puVar29 = (ulong *)(ulong)uVar9;
            uVar56 = (int)puVar27 + iVar26;
            param_2 = (ulong *)(ulong)uVar56;
            iVar20 = uVar9 + uVar56 + iVar19 + iVar57 + iVar55 + iVar51 + iVar48 +
                     iVar45 + iVar44 + iVar42 + iVar20;
            iStack_88 = (iStack_8c + iVar53) * 2;
            unaff_x22 = puStack_118;
            puVar24 = puStack_170;
            if ((iStack_88 != 0x10000 && iVar20 != 0) && (iStack_88 == 0x10000 || iVar20 != 1)) {
              bVar17 = false;
              bVar14 = false;
              uVar43 = 0xffffffff;
              bVar18 = true;
              uVar47 = 0x23;
              goto LAB_1078df288;
            }
            if (uVar33 != 0) {
              uVar35 = 0;
              lVar40 = (ulong)uVar41 * 0xda0 + 0x920;
              uVar32 = 0xffffffff;
              do {
                bVar10 = *(byte *)((long)puVar15 + uVar35 + (ulong)uVar41 * 0xda0);
                uVar52 = (ulong)bVar10;
                if (bVar10 != 0) {
                  uVar49 = 0;
                  uVar36 = *(uint *)((long)&uStack_c8 + uVar52 * 4);
                  *(uint *)((long)&uStack_c8 + uVar52 * 4) = uVar36 + 1;
                  uVar54 = uVar52;
                  do {
                    uVar56 = (uint)uVar49;
                    uVar38 = uVar36 & 1;
                    uVar49 = (ulong)(uVar38 | uVar56 << 1);
                    uVar9 = (int)uVar54 - 1;
                    uVar54 = (ulong)uVar9;
                    uVar36 = uVar36 >> 1;
                  } while (uVar9 != 0);
                  if (bVar10 < 0xb) {
                    if (uVar56 << 1 < 0x400) {
                      do {
                        *(ushort *)((long)puVar61 + uVar49 * 2) =
                             (ushort)uVar35 | (ushort)bVar10 << 9;
                        uVar49 = uVar49 + (1L << (uVar52 & 0x3f));
                      } while (uVar49 < 0x400);
                    }
                  }
                  else {
                    uVar38 = uVar38 | uVar56 << 1 & 0x3ff;
                    sVar13 = *(short *)((long)puVar60 + (ulong)uVar38 * 2);
                    uVar36 = (uint)sVar13;
                    uVar9 = uVar32;
                    if (sVar13 == 0) {
                      *(short *)((long)puVar60 + (ulong)uVar38 * 2) = (short)uVar32;
                      uVar9 = uVar32 - 2;
                      uVar36 = uVar32;
                    }
                    uVar32 = uVar9;
                    uVar38 = (uVar56 & 0x7fffffff) >> 8;
                    if (bVar10 != 0xb) {
                      do {
                        while( true ) {
                          iVar20 = (uVar38 >> 1 & 1) + ~uVar36;
                          uVar36 = (uint)*(short *)((long)puVar15 + (long)iVar20 * 2 + lVar40);
                          if (uVar36 == 0) break;
                          uVar38 = uVar38 >> 1;
                          uVar9 = (int)uVar52 - 1;
                          uVar52 = (ulong)uVar9;
                          if (uVar9 < 0xc) goto LAB_1078de450;
                        }
                        *(short *)((long)puVar15 + (long)iVar20 * 2 + lVar40) = (short)uVar32;
                        uVar9 = uVar32 - 2;
                        uVar38 = uVar38 >> 1;
                        uVar56 = (int)uVar52 - 1;
                        uVar52 = (ulong)uVar56;
                        uVar36 = uVar32;
                        uVar32 = uVar9;
                      } while (0xb < uVar56);
                    }
LAB_1078de450:
                    *(ushort *)
                     ((long)puVar15 + (long)(int)((uVar38 >> 1 & 1) + ~uVar36) * 2 + lVar40) =
                         (ushort)uVar35;
                  }
                }
                uVar35 = uVar35 + 1;
              } while (uVar35 != uVar33);
            }
            puVar23 = puStack_138;
            if (uStack_124 == 2) {
              puVar46 = puStack_160;
              if ((int)puStack_158 == iStack_174) {
                puVar62 = (ulong *)0x0;
              }
              else {
                puVar58 = (ulong *)(ulong)uStack_1ac;
                puVar21 = puStack_130;
                puVar23 = puStack_148;
                puVar59 = (ulong *)0x0;
LAB_1078de590:
                do {
                  uVar32 = (uint)uVar63;
                  if (uVar32 < 0xf) {
                    if (1 < (long)puVar21 - (long)unaff_x22) {
                      unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) |
                                            (ulong)*(byte *)((long)unaff_x22 + 1) <<
                                            ((ulong)(uVar32 + 8) & 0x3f) | (ulong)unaff_x19);
                      unaff_x22 = (ulong *)((long)unaff_x22 + 2);
                      uVar32 = uVar32 | 0x10;
                      goto LAB_1078de5ec;
                    }
                    uVar12 = *(ushort *)((long)puVar23 + ((ulong)unaff_x19 & 0x3ff) * 2);
                    uVar36 = (uint)(short)uVar12;
                    if (-1 < (short)uVar12) {
                      if (uVar12 < 0x200 || uVar32 < (uint)(int)(short)uVar12 >> 9)
                      goto LAB_1078de63c;
LAB_1078de6dc:
                      sVar13 = *(short *)((long)puVar23 + ((ulong)unaff_x19 & 0x3ff) * 2);
                      goto joined_r0x0001078de5f4;
                    }
                    if (10 < uVar32) {
                      uVar38 = 0xc;
                      do {
                        uVar36 = (uint)*(short *)((long)puVar22 +
                                                 (((ulong)unaff_x19 >> ((ulong)(uVar38 - 2) & 0x3f)
                                                  & 1) + (long)(int)~uVar36) * 2 + 0x24a8);
                        if (-1 < (int)uVar36) break;
                        bVar17 = uVar38 <= uVar32;
                        uVar38 = uVar38 + 1;
                      } while (bVar17);
                      if (-1 < (int)uVar36) goto LAB_1078de6dc;
                    }
LAB_1078de63c:
                    if (puVar21 <= unaff_x22) {
                      unaff_x19 = (ulong *)(0L << (uVar63 & 0x3f) | (ulong)unaff_x19);
                      puVar62 = unaff_x22;
                      if (uVar32 < 7) goto LAB_1078de678;
LAB_1078de6d8:
                      uVar32 = uVar32 + 8;
                      unaff_x22 = puVar62;
                      goto LAB_1078de6dc;
                    }
                    puVar62 = (ulong *)((long)unaff_x22 + 1);
                    unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) |
                                         (ulong)unaff_x19);
                    unaff_x22 = puVar62;
                    if (6 < uVar32) goto LAB_1078de6d8;
LAB_1078de678:
                    uVar63 = uVar63 + 8;
                    uVar12 = *(ushort *)((long)puVar23 + ((ulong)unaff_x19 & 0x3ff) * 2);
                    uVar36 = (uint)(short)uVar12;
                    puVar62 = unaff_x22;
                    if ((short)uVar12 < 0) {
                      if (2 < uVar32) {
                        uVar38 = 0xc;
                        do {
                          uVar36 = (uint)*(short *)((long)puVar22 +
                                                   (((ulong)unaff_x19 >>
                                                     ((ulong)(uVar38 - 2) & 0x3f) & 1) +
                                                   (long)(int)~uVar36) * 2 + 0x24a8);
                          if (-1 < (int)uVar36) break;
                          uVar35 = (ulong)uVar38;
                          uVar38 = uVar38 + 1;
                        } while (uVar35 <= uVar63);
                        puVar46 = puStack_160;
                        if (-1 < (int)uVar36) goto LAB_1078de6d8;
                      }
                    }
                    else if (0x1ff < uVar12 && (uint)(int)(short)uVar12 >> 9 <= uVar63)
                    goto LAB_1078de6d8;
                    if (unaff_x22 < puVar21) {
                      uVar35 = (ulong)(byte)*unaff_x22;
                      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
                    }
                    else {
                      uVar35 = 0;
                    }
                    unaff_x19 = (ulong *)(uVar35 << (uVar63 & 0x3f) | (ulong)unaff_x19);
                    uVar32 = uVar32 | 0x10;
                    sVar13 = *(short *)((long)puVar23 + ((ulong)unaff_x19 & 0x3ff) * 2);
                    puVar25 = (ulong *)(long)sVar13;
                    if (-1 < sVar13) goto LAB_1078de5f8;
LAB_1078de6ec:
                    uVar35 = 10;
                    do {
                      uVar63 = (ulong)((int)uVar35 + 1);
                      sVar13 = *(short *)((long)puVar22 +
                                         (((ulong)unaff_x19 >> (uVar35 & 0x3f) & 1) +
                                         (long)(int)~(uint)puVar25) * 2 + 0x24a8);
                      puVar25 = (ulong *)(long)sVar13;
                      uVar35 = uVar63;
                    } while (sVar13 < 0);
                  }
                  else {
LAB_1078de5ec:
                    sVar13 = *(short *)((long)puVar23 + ((ulong)unaff_x19 & 0x3ff) * 2);
joined_r0x0001078de5f4:
                    puVar25 = (ulong *)(long)sVar13;
                    if (sVar13 < 0) goto LAB_1078de6ec;
LAB_1078de5f8:
                    uVar63 = (ulong)puVar25 >> 9 & 0x7fffff;
                    puVar25 = (ulong *)(ulong)((uint)puVar25 & 0x1ff);
                  }
                  unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar63 & 0x3f));
                  uVar32 = uVar32 - (int)uVar63;
                  uVar63 = (ulong)uVar32;
                  uVar36 = (uint)puVar25;
                  iVar20 = (int)puVar59;
                  if (uVar36 < 0x10) {
                    puVar62 = (ulong *)(ulong)(iVar20 + 1U);
                    *(char *)((long)puVar46 + (long)puVar59) = (char)puVar25;
                    puVar59 = puVar62;
                    if (uVar37 <= iVar20 + 1U) break;
                    goto LAB_1078de590;
                  }
                  if ((iVar20 == 0) && (uVar36 == 0x10)) {
                    uVar38 = 0;
                    uVar47 = 0x11;
                    goto LAB_1078df280;
                  }
                  cVar11 = (&UNK_10f4345a7)[uVar36 - 0x10];
                  uStack_190 = (ulong)cVar11;
                  uVar38 = (uint)cVar11;
                  if (uVar32 < (uint)(int)cVar11) {
                    do {
                      while (iVar42 = (int)uVar63, puVar21 <= unaff_x22) {
                        unaff_x19 = (ulong *)(0L << (uVar63 & 0x3f) | (ulong)unaff_x19);
                        uVar63 = (ulong)(iVar42 + 8U);
                        puVar27 = unaff_x22;
                        if (uVar38 <= iVar42 + 8U) goto LAB_1078de7a8;
                      }
                      puVar27 = (ulong *)((long)unaff_x22 + 1);
                      unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) |
                                           (ulong)unaff_x19);
                      uVar63 = (ulong)(iVar42 + 8U);
                      unaff_x22 = puVar27;
                    } while (iVar42 + 8U < (uint)(int)cVar11);
LAB_1078de7a8:
                    uVar32 = iVar42 + 8;
                    unaff_x22 = puVar27;
                    if (uVar36 == 0x10) goto LAB_1078de7b4;
LAB_1078de7f0:
                    param_2 = (ulong *)0x0;
                  }
                  else {
                    if (uVar36 != 0x10) goto LAB_1078de7f0;
LAB_1078de7b4:
                    param_2 = (ulong *)(ulong)*(byte *)((long)puVar46 + (ulong)(iVar20 - 1));
                  }
                  uVar33 = (uint)unaff_x19;
                  unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uStack_190 & 0x3f));
                  uVar63 = (ulong)(uVar32 - uVar38);
                  uVar32 = (uVar33 & (-1 << (ulong)(uVar38 & 0x1f) ^ 0xffffffffU)) +
                           (int)(char)(&UNK_10f4345ab)[uVar36 - 0x10];
                  puVar27 = (ulong *)(ulong)uVar32;
                  _memset((long)puVar46 + (long)puVar59);
                  uVar32 = uVar32 + iVar20;
                  puVar62 = (ulong *)(ulong)uVar32;
                  puVar46 = puStack_160;
                  puVar21 = puStack_130;
                  puVar23 = puStack_148;
                  puVar24 = puStack_170;
                  puVar59 = puVar62;
                } while (uVar32 < uVar37);
                uVar32 = (uint)uVar63;
                uVar38 = (uint)puVar62;
                if (uVar37 != uVar38) {
                  uVar47 = 0x15;
LAB_1078df280:
                  bVar17 = false;
                  uVar43 = 0xffffffff;
                  bVar18 = true;
                  bVar14 = false;
                  goto LAB_1078df288;
                }
              }
              puStack_118 = unaff_x22;
              puVar23 = puStack_138;
              uVar35 = uStack_180;
              _memcpy(puStack_140,puVar46,uStack_180);
              param_2 = (ulong *)((long)puVar46 + uVar35);
              puVar27 = puStack_158;
              _memcpy(puStack_168);
            }
            pbStack_120 = pbStack_120 + -0xda0;
            puVar61 = puVar61 + -0x368;
            uVar41 = uStack_124 - 1;
            puVar23[6] = uVar41;
            uVar35 = uStack_190;
            unaff_x22 = puStack_118;
            puVar59 = puStack_170;
            puVar21 = puStack_1c8;
          } while (0 < (int)uStack_124);
LAB_1078de87c:
          puStack_1c8 = puVar21;
          uVar36 = (uint)puVar25;
          puVar58 = (ulong *)0x1;
          puVar24 = puVar59;
          do {
            while( true ) {
              uVar32 = (uint)uVar63;
              lVar40 = (long)puStack_130 - (long)unaff_x22;
              if ((lVar40 >= 4 && (long)puStack_1f0 - (long)puVar24 != 1) &&
                  (lVar40 < 4 || 0 < (long)puStack_1f0 - (long)puVar24)) break;
              if (uVar32 < 0xf) {
                if (1 < lVar40) {
                  unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) |
                                        (ulong)*(byte *)((long)unaff_x22 + 1) <<
                                        ((ulong)(uVar32 + 8) & 0x3f) | (ulong)unaff_x19);
                  unaff_x22 = (ulong *)((long)unaff_x22 + 2);
                  uVar32 = uVar32 | 0x10;
                  goto LAB_1078de99c;
                }
                uVar12 = *(ushort *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
                uVar38 = (uint)(short)uVar12;
                uVar52 = uVar63;
                if ((short)uVar12 < 0) {
                  if (10 < uVar32) {
                    uVar33 = 0xc;
                    do {
                      uVar38 = (uint)*(short *)((long)puStack_1d8 +
                                               (((ulong)unaff_x19 >> ((ulong)(uVar33 - 2) & 0x3f) &
                                                1) + (long)(int)~uVar38) * 2);
                      if (-1 < (int)uVar38) break;
                      bVar17 = uVar33 <= uVar32;
                      uVar33 = uVar33 + 1;
                    } while (bVar17);
                    if (-1 < (int)uVar38) goto LAB_1078deabc;
                  }
LAB_1078de9f0:
                  if (unaff_x22 < puStack_130) {
                    uVar52 = (ulong)(byte)*unaff_x22 << (uVar63 & 0x3f);
                    unaff_x22 = (ulong *)((long)unaff_x22 + 1);
                  }
                  else {
                    uVar52 = 0L << (uVar63 & 0x3f);
                  }
                  unaff_x19 = (ulong *)(uVar52 | (ulong)unaff_x19);
                  if (uVar32 < 7) {
                    uVar52 = uVar63 + 8;
                    uVar12 = *(ushort *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
                    uVar38 = (uint)(short)uVar12;
                    if ((short)uVar12 < 0) {
                      if (2 < uVar32) {
                        uVar32 = 0xc;
                        do {
                          uVar38 = (uint)*(short *)((long)puStack_1d8 +
                                                   (((ulong)unaff_x19 >>
                                                     ((ulong)(uVar32 - 2) & 0x3f) & 1) +
                                                   (long)(int)~uVar38) * 2);
                          if (-1 < (int)uVar38) break;
                          uVar49 = (ulong)uVar32;
                          uVar32 = uVar32 + 1;
                        } while (uVar49 <= uVar52);
                        if (-1 < (int)uVar38) goto LAB_1078deabc;
                      }
                    }
                    else if (0x1ff < uVar12 && (uint)(int)(short)uVar12 >> 9 <= uVar52)
                    goto LAB_1078deabc;
                    if (unaff_x22 < puStack_130) {
                      uVar49 = (ulong)(byte)*unaff_x22;
                      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
                    }
                    else {
                      uVar49 = 0;
                    }
                    unaff_x19 = (ulong *)(uVar49 << (uVar52 & 0x3f) | (ulong)unaff_x19);
                    uVar52 = uVar63 | 0x10;
                  }
                  else {
                    uVar52 = uVar63 + 8;
                  }
                }
                else if (uVar12 < 0x200 || uVar32 < (uint)(int)(short)uVar12 >> 9)
                goto LAB_1078de9f0;
LAB_1078deabc:
                uVar32 = (uint)uVar52;
                sVar13 = *(short *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
                uVar63 = (ulong)sVar13;
                if (-1 < sVar13) goto LAB_1078de9a8;
LAB_1078deacc:
                uVar49 = 10;
                do {
                  uVar52 = (ulong)((int)uVar49 + 1);
                  sVar13 = *(short *)((long)puStack_1d8 +
                                     (((ulong)unaff_x19 >> (uVar49 & 0x3f) & 1) +
                                     (long)(int)~(uint)uVar63) * 2);
                  uVar63 = (ulong)sVar13;
                  uVar38 = (uint)sVar13;
                  uVar49 = uVar52;
                } while (sVar13 < 0);
              }
              else {
LAB_1078de99c:
                sVar13 = *(short *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
                uVar63 = (ulong)sVar13;
                if (sVar13 < 0) goto LAB_1078deacc;
LAB_1078de9a8:
                uVar52 = uVar63 >> 9 & 0x7fffff;
                uVar38 = (uint)uVar63 & 0x1ff;
              }
              unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar52 & 0x3f));
              uVar32 = uVar32 - (int)uVar52;
              uVar63 = (ulong)uVar32;
              if (0xff < uVar38) goto LAB_1078deb18;
              if (puStack_1f0 <= puVar24) {
                bVar18 = false;
                uVar43 = 2;
                bVar17 = true;
                uVar47 = 0x18;
                puVar21 = puStack_1c8;
                goto LAB_1078df248;
              }
              *(char *)puVar24 = (char)uVar38;
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
            if (uVar32 < 0x1e) {
              unaff_x19 = (ulong *)((ulong)(uint)*unaff_x22 << (uVar63 & 0x3f) | (ulong)unaff_x19);
              uVar32 = uVar32 | 0x20;
              unaff_x22 = (ulong *)((long)unaff_x22 + 4);
            }
            sVar13 = *(short *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
            uVar33 = (uint)sVar13;
            if (sVar13 < 0) {
              uVar63 = 10;
              do {
                uVar52 = (ulong)((int)uVar63 + 1);
                sVar13 = *(short *)((long)puStack_1d8 +
                                   (((ulong)unaff_x19 >> (uVar63 & 0x3f) & 1) + (long)(int)~uVar33)
                                   * 2);
                uVar33 = (uint)sVar13;
                uVar63 = uVar52;
              } while (sVar13 < 0);
            }
            else {
              uVar52 = (ulong)((uint)(int)sVar13 >> 9);
            }
            unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar52 & 0x3f));
            uVar32 = uVar32 - (int)uVar52;
            uVar63 = (ulong)uVar32;
            uVar38 = uVar33;
            if ((uVar33 >> 8 & 1) != 0) goto LAB_1078deb18;
            sVar13 = *(short *)((long)puStack_1a0 + ((ulong)unaff_x19 & 0x3ff) * 2);
            uVar38 = (uint)sVar13;
            if (sVar13 < 0) {
              uVar63 = 10;
              do {
                uVar52 = (ulong)((int)uVar63 + 1);
                sVar13 = *(short *)((long)puStack_1d8 +
                                   (((ulong)unaff_x19 >> (uVar63 & 0x3f) & 1) + (long)(int)~uVar38)
                                   * 2);
                uVar38 = (uint)sVar13;
                uVar63 = uVar52;
              } while (sVar13 < 0);
            }
            else {
              uVar52 = (ulong)((uint)(int)sVar13 >> 9);
            }
            unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar52 & 0x3f));
            uVar63 = (ulong)(uVar32 - (int)uVar52);
            *(char *)puVar24 = (char)uVar33;
            if ((uVar38 >> 8 & 1) != 0) goto LAB_1078deb10;
            *(char *)((long)puVar24 + 1) = (char)uVar38;
            puVar24 = (ulong *)((long)puVar24 + 2);
          } while( true );
        }
        if (uVar41 != 3) {
          if (uVar32 < 5) {
            if (unaff_x22 < puStack_130) {
              uVar35 = (ulong)(byte)*unaff_x22;
              unaff_x22 = (ulong *)((long)unaff_x22 + 1);
            }
            else {
              uVar35 = 0;
            }
            unaff_x19 = (ulong *)(uVar35 << (uVar63 & 0x3f) | (ulong)unaff_x19);
            uVar32 = uVar32 | 8;
          }
          uVar63 = (ulong)unaff_x19 >> 5;
          uVar32 = uVar32 - 5;
          uVar36 = ((uint)unaff_x19 & 0x1f) + 0x101;
          *puStack_150 = uVar36;
          if (uVar32 < 5) {
            if (unaff_x22 < puStack_130) {
              uVar35 = (ulong)(byte)*unaff_x22;
              unaff_x22 = (ulong *)((long)unaff_x22 + 1);
            }
            else {
              uVar35 = 0;
            }
            uVar63 = uVar35 << ((ulong)uVar32 & 0x3f) | uVar63;
            uVar32 = uVar32 | 8;
          }
          uVar35 = uVar63 >> 5;
          uVar32 = uVar32 - 5;
          uVar38 = ((uint)uVar63 & 0x1f) + 1;
          puStack_138[0xc] = uVar38;
          if (uVar32 < 4) {
            if (unaff_x22 < puStack_130) {
              uVar63 = (ulong)(byte)*unaff_x22;
              unaff_x22 = (ulong *)((long)unaff_x22 + 1);
            }
            else {
              uVar63 = 0;
            }
            uVar35 = uVar63 << ((ulong)uVar32 & 0x3f) | uVar35;
            uVar32 = uVar32 | 8;
          }
          puVar62 = (ulong *)0x0;
          uVar33 = ((uint)uVar35 & 0xf) + 4;
          puStack_138[0xd] = uVar33;
          puVar60[1] = 0;
          *puVar60 = 0;
          puVar60[3] = 0;
          puVar60[2] = 0;
          puVar60[5] = 0;
          puVar60[4] = 0;
          puVar60[7] = 0;
          puVar60[6] = 0;
          puVar60[9] = 0;
          puVar60[8] = 0;
          puVar60[0xb] = 0;
          puVar60[10] = 0;
          puVar60[0xd] = 0;
          puVar60[0xc] = 0;
          puVar60[0xf] = 0;
          puVar60[0xe] = 0;
          puVar60[0x11] = 0;
          puVar60[0x10] = 0;
          puVar60[0x13] = 0;
          puVar60[0x12] = 0;
          puVar60[0x15] = 0;
          puVar60[0x14] = 0;
          puVar60[0x17] = 0;
          puVar60[0x16] = 0;
          puVar60[0x19] = 0;
          puVar60[0x18] = 0;
          puVar60[0x1b] = 0;
          puVar60[0x1a] = 0;
          puVar60[0x1d] = 0;
          puVar60[0x1c] = 0;
          puVar60[0x1f] = 0;
          puVar60[0x1e] = 0;
          uVar63 = (ulong)(uVar32 - 4);
          unaff_x19 = (ulong *)(uVar35 >> 4);
          puVar60[0x21] = 0;
          puVar60[0x20] = 0;
          puVar60[0x23] = 0;
          puVar60[0x22] = 0;
          puVar58 = unaff_x22;
          do {
            uVar32 = (uint)uVar63;
            unaff_x22 = puVar58;
            if (uVar32 < 3) {
              if (puVar58 < puStack_130) {
                unaff_x22 = (ulong *)((long)puVar58 + 1);
                uVar35 = (ulong)(byte)*puVar58;
              }
              else {
                uVar35 = 0;
              }
              unaff_x19 = (ulong *)(uVar35 << (uVar63 & 0x3f) | (ulong)unaff_x19);
              uVar32 = uVar32 | 8;
            }
            bVar10 = (byte)unaff_x19;
            unaff_x19 = (ulong *)((ulong)unaff_x19 >> 3);
            uVar63 = (ulong)(uVar32 - 3);
            *(byte *)((long)puVar60 + (ulong)(byte)puVar62[0x21bdb56e]) = bVar10 & 7;
            puVar62 = (ulong *)((long)puVar62 + 1);
            puVar58 = unaff_x22;
          } while (puVar62 < (ulong *)(ulong)uVar33);
          puStack_138[0xd] = 0x13;
          goto LAB_1078de1ec;
        }
        bVar17 = false;
        uVar43 = 0xffffffff;
        bVar18 = true;
        uVar47 = 10;
LAB_1078df220:
        puVar58 = (ulong *)0x1;
        bVar14 = false;
        goto LAB_1078df288;
      }
      puVar21 = (ulong *)((ulong)unaff_x19 >> (uVar32 & 7));
      uVar32 = uVar32 & 0xfffffff8;
      if (uVar32 == 0) {
        if (unaff_x22 < puStack_130) {
          uVar38 = (uint)(byte)*unaff_x22;
          unaff_x22 = (ulong *)((long)unaff_x22 + 1);
        }
        else {
          uVar38 = 0;
        }
        *(char *)puStack_1a8 = (char)uVar38;
        unaff_x19 = puVar21;
        puVar62 = unaff_x22;
joined_r0x0001078dde2c:
        if (puVar62 < puStack_130) {
          unaff_x22 = (ulong *)((long)puVar62 + 1);
          uVar33 = (uint)(byte)*puVar62;
        }
        else {
          uVar33 = 0;
          unaff_x22 = puVar62;
        }
        *(char *)((long)puStack_1a8 + 1) = (char)uVar33;
LAB_1078ddf2c:
        if (unaff_x22 < puStack_130) {
          puVar62 = (ulong *)((long)unaff_x22 + 1);
          bVar10 = (byte)*unaff_x22;
          uVar41 = (uint)bVar10;
          *(byte *)((long)puStack_1a8 + 2) = bVar10;
          uVar37 = (uint)bVar10;
          if (puVar62 < puStack_130) goto LAB_1078ddf44;
LAB_1078ddf7c:
          *(undefined1 *)((long)puStack_1a8 + 3) = 0;
          uVar38 = uVar38 | uVar33 << 8;
          uVar37 = uVar37 ^ uVar38;
          unaff_x22 = puVar62;
        }
        else {
          uVar41 = 0;
          *(undefined1 *)((long)puStack_1a8 + 2) = 0;
          puVar62 = unaff_x22;
joined_r0x0001078ddf78:
          uVar37 = uVar41;
          if (puStack_130 <= puVar62) goto LAB_1078ddf7c;
LAB_1078ddf44:
          unaff_x22 = (ulong *)((long)puVar62 + 1);
          uVar63 = *puVar62;
          *(byte *)((long)puStack_1a8 + 3) = (byte)uVar63;
          uVar38 = uVar38 | uVar33 << 8;
          uVar37 = (uVar41 | (uint)(byte)uVar63 << 8) ^ uVar38;
        }
        uVar32 = 0;
        uVar63 = 0;
      }
      else {
        uVar38 = (uint)puVar21 & 0xff;
        *(char *)puStack_1a8 = (char)puVar21;
        unaff_x19 = (ulong *)((ulong)puVar21 >> 8);
        puVar62 = unaff_x22;
        if (uVar32 == 8) goto joined_r0x0001078dde2c;
        uVar33 = (uint)((ulong)puVar21 >> 8) & 0xff;
        *(char *)((long)puStack_1a8 + 1) = (char)((ulong)puVar21 >> 8);
        unaff_x19 = (ulong *)((ulong)puVar21 >> 0x10);
        if (uVar32 == 0x10) goto LAB_1078ddf2c;
        uVar41 = (uint)((ulong)puVar21 >> 0x10) & 0xff;
        *(char *)((long)puStack_1a8 + 2) = (char)((ulong)puVar21 >> 0x10);
        unaff_x19 = (ulong *)((ulong)puVar21 >> 0x18);
        if (uVar32 == 0x18) goto joined_r0x0001078ddf78;
        *(char *)((long)puStack_1a8 + 3) = (char)((ulong)puVar21 >> 0x18);
        unaff_x19 = (ulong *)((ulong)puVar21 >> 0x20);
        uVar32 = uVar32 - 0x20;
        uVar63 = (ulong)uVar32;
        uVar38 = uVar38 | uVar33 << 8;
        uVar37 = (uVar41 | ((uint)((ulong)puVar21 >> 0x18) & 0xff) << 8) ^ uVar38;
      }
      if (uVar37 != 0xffff) {
        bVar17 = false;
        uVar43 = 0xffffffff;
        bVar18 = true;
        uVar47 = 0x27;
        goto LAB_1078df220;
      }
      puVar62 = (ulong *)(ulong)uVar38;
      if ((uVar38 != 0) && (puVar21 = unaff_x19, puVar59 = puVar24, (int)uVar63 != 0)) {
        do {
          uVar38 = (uint)puVar62;
          uVar32 = (uint)uVar63;
          if (uVar32 < 8) {
            if (unaff_x22 < puStack_130) {
              puVar21 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) | (ulong)puVar21);
              uVar32 = uVar32 | 8;
              unaff_x22 = (ulong *)((long)unaff_x22 + 1);
            }
            else {
              uVar32 = uVar32 | 8;
            }
          }
          unaff_x19 = (ulong *)((ulong)puVar21 >> 8);
          uVar32 = uVar32 - 8;
          uVar63 = (ulong)uVar32;
          uVar36 = (uint)puVar21;
          if (puVar58 <= puVar59) {
            bVar18 = false;
            uVar36 = uVar36 & 0xff;
            uVar43 = 2;
            bVar17 = true;
            uVar47 = 0x34;
            puVar24 = puVar59;
            goto LAB_1078df220;
          }
          puVar24 = (ulong *)((long)puVar59 + 1);
          *(char *)puVar59 = (char)puVar21;
          puVar62 = (ulong *)(ulong)(uVar38 - 1);
        } while ((uVar38 - 1 != 0) && (puVar21 = unaff_x19, puVar59 = puVar24, uVar32 != 0));
        puVar25 = (ulong *)(ulong)(uVar36 & 0xff);
      }
      uVar36 = (uint)puVar25;
      uVar32 = (uint)uVar63;
      if ((int)puVar62 == 0) {
        bVar10 = *(byte *)(puStack_138 + 5);
        goto joined_r0x0001078df148;
      }
      do {
        uVar38 = (uint)puVar62;
        bVar17 = puVar58 <= puVar24;
        if (bVar17) {
          uVar43 = 2;
          uVar47 = 9;
LAB_1078df214:
          bVar18 = puVar24 < puVar58;
          goto LAB_1078df220;
        }
        if (puStack_130 <= unaff_x22) {
          uVar43 = 0xffffffff;
          uVar47 = 0x28;
          goto LAB_1078df214;
        }
        puVar21 = (ulong *)((long)puVar58 - (long)puVar24);
        if ((ulong *)((long)puStack_130 - (long)unaff_x22) <=
            (ulong *)((long)puVar58 - (long)puVar24)) {
          puVar21 = (ulong *)((long)puStack_130 - (long)unaff_x22);
        }
        if (puVar62 <= puVar21) {
          puVar21 = puVar62;
        }
        param_2 = unaff_x22;
        puVar27 = puVar21;
        _memcpy(puVar24);
        unaff_x22 = (ulong *)((long)unaff_x22 + (long)puVar21);
        puVar24 = (ulong *)((long)puVar24 + (long)puVar21);
        uVar38 = uVar38 - (int)puVar21;
        puVar62 = (ulong *)(ulong)uVar38;
      } while (uVar38 != 0);
      puVar62 = (ulong *)0x0;
      puVar60 = puStack_188;
    } while ((*(byte *)(puStack_138 + 5) & 1) == 0);
    goto LAB_1078df14c;
  }
  uVar34 = 0;
  uVar36 = 0;
  uVar32 = 0;
  bVar17 = false;
  bVar14 = false;
  bVar18 = true;
  goto LAB_1078df28c;
LAB_1078deb10:
  puVar24 = (ulong *)((long)puVar24 + 1);
LAB_1078deb18:
  uVar32 = (uint)uVar63;
  if ((uVar38 & 0x1ff) == 0x100) goto LAB_1078df130;
  uVar35 = (ulong)((uVar38 & 0x1ff) - 0x101);
  uVar38 = *(uint *)(&UNK_10deda978 + uVar35 * 4);
  if (0xffffffffffffffeb < uVar35 - 0x1c) {
    uVar36 = *(uint *)(&UNK_10deda9f4 + uVar35 * 4);
    while (uVar32 < uVar36) {
      while (puStack_130 <= unaff_x22) {
        unaff_x19 = (ulong *)(0L << (uVar63 & 0x3f) | (ulong)unaff_x19);
        uVar32 = (int)uVar63 + 8;
        uVar63 = (ulong)uVar32;
        if (uVar36 <= uVar32) goto LAB_1078deb9c;
      }
      unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) | (ulong)unaff_x19);
      uVar32 = (int)uVar63 + 8;
      uVar63 = (ulong)uVar32;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    }
LAB_1078deb9c:
    uVar33 = (uint)unaff_x19;
    unaff_x19 = (ulong *)((ulong)unaff_x19 >> ((ulong)uVar36 & 0x3f));
    uVar63 = (ulong)(uVar32 - uVar36);
    uVar38 = (uVar33 & (-1 << (ulong)(uVar36 & 0x1f) ^ 0xffffffffU)) + uVar38;
  }
  uVar52 = (ulong)uVar38;
  uVar32 = (uint)uVar63;
  if (uVar32 < 0xf) {
    if ((long)puStack_130 - (long)unaff_x22 < 2) {
      uVar12 = *(ushort *)((long)puStack_1e0 + ((ulong)unaff_x19 & 0x3ff) * 2);
      uVar36 = (uint)(short)uVar12;
      uVar35 = uVar63;
      if ((short)uVar12 < 0) {
        if (10 < uVar32) {
          uVar33 = 0xc;
          do {
            uVar36 = (uint)*(short *)((long)puStack_1d0 +
                                     (((ulong)unaff_x19 >> ((ulong)(uVar33 - 2) & 0x3f) & 1) +
                                     (long)(int)~uVar36) * 2);
            if (-1 < (int)uVar36) break;
            bVar17 = uVar33 <= uVar32;
            uVar33 = uVar33 + 1;
          } while (bVar17);
          if (-1 < (int)uVar36) goto LAB_1078decf8;
        }
LAB_1078dec4c:
        if (unaff_x22 < puStack_130) {
          uVar35 = (ulong)(byte)*unaff_x22;
          unaff_x22 = (ulong *)((long)unaff_x22 + 1);
        }
        else {
          uVar35 = 0;
        }
        unaff_x19 = (ulong *)(uVar35 << (uVar63 & 0x3f) | (ulong)unaff_x19);
        uVar35 = uVar63 + 8;
        if (uVar32 < 7) {
          uVar12 = *(ushort *)((long)puStack_1e0 + ((ulong)unaff_x19 & 0x3ff) * 2);
          uVar36 = (uint)(short)uVar12;
          if ((short)uVar12 < 0) {
            if (2 < uVar32) {
              uVar32 = 0xc;
              do {
                uVar36 = (uint)*(short *)((long)puStack_1d0 +
                                         (((ulong)unaff_x19 >> ((ulong)(uVar32 - 2) & 0x3f) & 1) +
                                         (long)(int)~uVar36) * 2);
                if (-1 < (int)uVar36) break;
                uVar49 = (ulong)uVar32;
                uVar32 = uVar32 + 1;
              } while (uVar49 <= uVar35);
              if (-1 < (int)uVar36) goto LAB_1078decf8;
            }
          }
          else if (0x1ff < uVar12 && (uint)(int)(short)uVar12 >> 9 <= uVar35) goto LAB_1078decf8;
          if (unaff_x22 < puStack_130) {
            uVar49 = (ulong)(byte)*unaff_x22;
            unaff_x22 = (ulong *)((long)unaff_x22 + 1);
          }
          else {
            uVar49 = 0;
          }
          unaff_x19 = (ulong *)(uVar49 << (uVar35 & 0x3f) | (ulong)unaff_x19);
          uVar35 = uVar63 | 0x10;
        }
      }
      else if (uVar12 < 0x200 || uVar32 < (uint)(int)(short)uVar12 >> 9) goto LAB_1078dec4c;
LAB_1078decf8:
      uVar32 = (uint)uVar35;
    }
    else {
      unaff_x19 = (ulong *)((ulong)(byte)*unaff_x22 << (uVar63 & 0x3f) |
                            (ulong)*(byte *)((long)unaff_x22 + 1) << ((ulong)(uVar32 + 8) & 0x3f) |
                           (ulong)unaff_x19);
      unaff_x22 = (ulong *)((long)unaff_x22 + 2);
      uVar32 = uVar32 | 0x10;
    }
  }
  sVar13 = *(short *)((long)puStack_1e0 + ((ulong)unaff_x19 & 0x3ff) * 2);
  uVar33 = (uint)sVar13;
  if (sVar13 < 0) {
    uVar63 = 10;
    do {
      uVar35 = (ulong)((int)uVar63 + 1);
      uVar33 = (uint)*(short *)((long)puStack_1d0 +
                               (((ulong)unaff_x19 >> (uVar63 & 0x3f) & 1) + (long)(int)~uVar33) * 2)
      ;
      uVar63 = uVar35;
    } while ((int)uVar33 < 0);
  }
  else {
    uVar35 = (ulong)((uint)(int)sVar13 >> 9);
    uVar33 = uVar33 & 0x1ff;
  }
  unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar35 & 0x3f));
  uVar63 = (ulong)(uVar32 - (int)uVar35);
  uVar36 = *(uint *)(&UNK_10dedaa70 + (ulong)uVar33 * 4);
  if ((ulong)uVar33 - 0x1e < 0xffffffffffffffe6) {
    uVar35 = 0;
  }
  else {
    uVar32 = *(uint *)(&UNK_10dedaaf0 + (ulong)uVar33 * 4);
    uVar35 = (ulong)uVar32;
    while (uVar33 = (uint)uVar63, uVar33 < uVar32) {
      if (unaff_x22 < puStack_130) {
        puVar21 = (ulong *)((long)unaff_x22 + 1);
        uVar49 = (ulong)(byte)*unaff_x22;
      }
      else {
        uVar49 = 0;
        puVar21 = unaff_x22;
      }
      unaff_x19 = (ulong *)(uVar49 << (uVar63 & 0x3f) | (ulong)unaff_x19);
      unaff_x22 = puVar21;
      uVar63 = (ulong)(uVar33 + 8);
    }
    uVar41 = (uint)unaff_x19;
    unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar35 & 0x3f));
    uVar63 = (ulong)(uVar33 - uVar32);
    uVar36 = (uVar41 & (-1 << (ulong)(uVar32 & 0x1f) ^ 0xffffffffU)) + uVar36;
  }
  uVar32 = (uint)uVar63;
  puVar25 = (ulong *)(ulong)uVar36;
  puVar21 = (ulong *)((long)puVar24 - (long)param_1);
  if (puVar21 < puVar25) {
    bVar17 = false;
    uVar43 = 0xffffffff;
    bVar18 = true;
    uVar47 = 0x25;
LAB_1078df248:
    uVar34 = (undefined4)uVar35;
    bVar14 = false;
    param_3 = puStack_1c0;
    param_4 = puStack_1b8;
    goto LAB_1078df28c;
  }
  puVar62 = (ulong *)((long)param_1 + ((long)puVar21 - (long)puVar25));
  puVar59 = puVar24;
  if (puVar24 <= puVar62) {
    puVar59 = puVar62;
  }
  if (puStack_1f0 < (ulong *)((long)puVar59 + uVar52)) {
    puVar59 = puVar24;
    if (uVar38 != 0) {
      uVar52 = 0;
      if (puVar24 <= puStack_1f0) {
        uVar52 = (long)puStack_1f0 - (long)puVar24;
      }
      uVar49 = (ulong)(uVar38 - 1);
      if (uVar52 <= uVar38 - 1) {
        uVar49 = uVar52;
      }
      puVar62 = puVar24;
      puStack_1c8 = puVar21;
      if ((0x1f < uVar49) && (0x1f < uVar36)) {
        uVar52 = uVar49 + 1 & 0x1f;
        uVar54 = 0x20;
        if (uVar52 != 0) {
          uVar54 = uVar52;
        }
        lVar40 = (uVar49 + 1) - uVar54;
        uVar38 = uVar38 - (int)lVar40;
        puStack_1c8 = (ulong *)((long)puVar21 + lVar40);
        puVar62 = (ulong *)((long)puVar24 + lVar40);
        lVar40 = ~uVar49 + uVar54;
        puVar21 = (ulong *)((long)puVar24 + (0x10 - (long)puVar25));
        puVar24 = puVar24 + 2;
        do {
          uVar52 = puVar21[-2];
          uVar54 = puVar21[1];
          uVar49 = *puVar21;
          puVar24[-1] = puVar21[-1];
          puVar24[-2] = uVar52;
          puVar24[1] = uVar54;
          *puVar24 = uVar49;
          puVar21 = puVar21 + 4;
          puVar24 = puVar24 + 4;
          lVar40 = lVar40 + 0x20;
        } while (lVar40 != 0);
      }
      iVar20 = 1 - uVar38;
      puVar21 = puStack_1c8;
      puVar24 = puVar62;
      do {
        if (puStack_1f0 <= puVar24) {
          bVar18 = false;
          uVar38 = -iVar20;
          uVar43 = 2;
          bVar17 = true;
          uVar47 = 0x35;
          goto LAB_1078df248;
        }
        puVar64 = (undefined1 *)(((long)param_1 - (long)puVar25) + (long)puVar21);
        puVar21 = (ulong *)((long)puVar21 + 1);
        puVar59 = (ulong *)((long)puVar24 + 1);
        *(undefined1 *)puVar24 = *puVar64;
        iVar20 = iVar20 + 1;
        puVar24 = puVar59;
      } while (iVar20 != 1);
    }
    goto LAB_1078de87c;
  }
  iVar42 = 2 - uVar38;
  iVar20 = iVar42;
  if (iVar42 < -2) {
    iVar20 = -3;
  }
  if (0x5c < iVar20 + uVar38) {
    puVar58 = (ulong *)((long)puVar24 + 1);
    if (iVar42 < -2) {
      iVar42 = -3;
    }
    lVar40 = ((ulong)(iVar42 + uVar38) / 3) * 3;
    puVar2 = (ulong *)((long)puVar58 + lVar40);
    puVar59 = (ulong *)((long)puVar24 + 2);
    puVar3 = (ulong *)((long)puVar59 + lVar40);
    puVar1 = (ulong *)((long)puVar24 + lVar40 + 3);
    lVar40 = lVar40 - (long)puVar25;
    puVar4 = (ulong *)((long)puVar24 + lVar40 + 1);
    puVar5 = (ulong *)((long)puVar24 + (1 - (long)puVar25));
    puVar6 = (ulong *)((long)puVar24 + lVar40 + 2);
    puVar7 = (ulong *)((long)puVar24 + (2 - (long)puVar25));
    puVar8 = (ulong *)((long)puVar24 + lVar40 + 3);
    param_2 = (ulong *)(ulong)(puVar59 < puVar4 && puVar62 < puVar1);
    puVar27 = (ulong *)(ulong)(puVar59 < puVar6 && puVar5 < puVar1);
    puVar29 = (ulong *)(ulong)(puVar59 < puVar8 && puVar7 < puVar1);
    puStack_118 = unaff_x22;
    if ((((((puVar2 <= puVar58 || puVar3 <= puVar24) && (puVar1 <= puVar24 || puVar2 <= puVar59)) &&
          (puVar4 <= puVar24 || puVar2 <= puVar62)) &&
         (((puVar6 <= puVar24 || puVar2 <= puVar5 && (puVar8 <= puVar24 || puVar2 <= puVar7)) &&
          ((puVar1 <= puVar58 || puVar3 <= puVar59 &&
           ((puVar4 <= puVar58 || puVar3 <= puVar62 && (puVar6 <= puVar58 || puVar3 <= puVar5)))))))
         ) && (puVar8 <= puVar58 || puVar3 <= puVar7)) &&
       (((puVar59 >= puVar4 || puVar62 >= puVar1 && (puVar59 >= puVar6 || puVar5 >= puVar1)) &&
        (puVar59 >= puVar8 || puVar7 >= puVar1)))) {
      uVar54 = (ulong)((iVar20 + uVar38) / 3 + 1);
      uVar50 = uVar54 & 0x7fffffe0;
      puVar59 = (ulong *)((long)puVar24 + uVar50 * 3);
      uVar38 = uVar38 + (int)uVar50 * -3;
      uVar52 = (ulong)uVar38;
      puVar58 = (ulong *)((long)puVar62 + uVar50 * 3);
      uVar49 = uVar50;
      do {
        uVar68 = *puVar62;
        uVar67 = puVar62[3];
        uVar66 = puVar62[2];
        uVar72 = puVar62[9];
        uVar71 = puVar62[8];
        uVar70 = puVar62[0xb];
        uVar69 = puVar62[10];
        uVar74 = puVar62[5];
        uVar73 = puVar62[4];
        uVar76 = puVar62[7];
        uVar75 = puVar62[6];
        puVar24[1] = puVar62[1];
        *puVar24 = uVar68;
        puVar24[3] = uVar67;
        puVar24[2] = uVar66;
        puVar24[5] = uVar74;
        puVar24[4] = uVar73;
        puVar24[7] = uVar76;
        puVar24[6] = uVar75;
        puVar62 = puVar62 + 0xc;
        puVar24[9] = uVar72;
        puVar24[8] = uVar71;
        puVar24[0xb] = uVar70;
        puVar24[10] = uVar69;
        puVar24 = puVar24 + 0xc;
        uVar49 = uVar49 - 0x20;
      } while (uVar49 != 0);
      puVar62 = puVar58;
      puVar24 = puVar59;
      if (uVar50 == uVar54) goto LAB_1078df0c0;
    }
  }
  do {
    *(char *)puVar24 = (char)*puVar62;
    *(undefined1 *)((long)puVar24 + 1) = *(undefined1 *)((long)puVar62 + 1);
    *(undefined1 *)((long)puVar24 + 2) = *(undefined1 *)((long)puVar62 + 2);
    puVar59 = (ulong *)((long)puVar24 + 3);
    puVar58 = (ulong *)((long)puVar62 + 3);
    uVar38 = (int)uVar52 - 3;
    uVar52 = (ulong)uVar38;
    puVar62 = puVar58;
    puVar24 = puVar59;
  } while (2 < (int)uVar38);
LAB_1078df0c0:
  if (0 < (int)uVar38) {
    *(char *)puVar59 = (char)*puVar58;
    if (uVar38 == 2) {
      *(undefined1 *)((long)puVar59 + 1) = *(undefined1 *)((long)puVar58 + 1);
    }
    puVar59 = (ulong *)((long)puVar59 + (ulong)uVar38);
  }
  goto LAB_1078de87c;
LAB_1078df130:
  puVar62 = (ulong *)0x100;
  bVar10 = *(byte *)(puStack_138 + 5);
  uStack_190 = uVar35;
  puVar58 = puStack_1f0;
  puVar60 = puStack_188;
joined_r0x0001078df148:
  if ((bVar10 & 1) != 0) goto LAB_1078df14c;
  goto LAB_1078dddac;
LAB_1078df14c:
  puVar58 = (ulong *)0x1;
  unaff_x19 = (ulong *)((ulong)unaff_x19 >> (uVar32 & 7));
  uVar32 = uVar32 & 0xfffffff8;
  if (uVar32 == 0) {
    if (unaff_x22 < puStack_130) {
      uVar38 = (uint)(byte)*unaff_x22;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    }
    else {
      uVar38 = 0;
    }
    uVar38 = uVar38 | puStack_138[4] << 8;
    puStack_138[4] = uVar38;
LAB_1078df514:
    if (unaff_x22 < puStack_130) {
      uVar37 = (uint)(byte)*unaff_x22;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    }
    else {
      uVar37 = 0;
    }
    uVar37 = uVar37 | uVar38 << 8;
    puStack_138[4] = uVar37;
LAB_1078df534:
    if (unaff_x22 < puStack_130) {
      uVar37 = (uint)(byte)*unaff_x22 | uVar37 << 8;
      puStack_138[4] = uVar37;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    }
    else {
      uVar37 = uVar37 << 8;
      puStack_138[4] = uVar37;
    }
joined_r0x0001078df574:
    if (unaff_x22 < puStack_130) {
      uVar32 = 0;
      uVar38 = (uint)(byte)*unaff_x22;
      unaff_x22 = (ulong *)((long)unaff_x22 + 1);
    }
    else {
      uVar32 = 0;
      uVar38 = 0;
    }
  }
  else {
    uVar33 = (uint)unaff_x19 & 0xff;
    uVar41 = puStack_138[4] << 8;
    uVar38 = uVar33 | uVar41;
    puStack_138[4] = uVar38;
    if (uVar32 == 8) {
      unaff_x19 = (ulong *)((ulong)unaff_x19 >> 8);
      goto LAB_1078df514;
    }
    uVar9 = (uint)((ulong)unaff_x19 >> 8) & 0xff;
    uVar37 = uVar9 | uVar38 << 8;
    puStack_138[4] = uVar37;
    if (uVar32 == 0x10) {
      unaff_x19 = (ulong *)((ulong)unaff_x19 >> 0x10);
      goto LAB_1078df534;
    }
    uVar37 = (uint)((ulong)unaff_x19 >> 0x10) & 0xff |
             (uVar9 | (uVar33 | uVar41 & 0xffff) << 8) << 8;
    puStack_138[4] = uVar37;
    if (uVar32 == 0x18) {
      unaff_x19 = (ulong *)((ulong)unaff_x19 >> 0x18);
      goto joined_r0x0001078df574;
    }
    uVar38 = (uint)((ulong)unaff_x19 >> 0x18) & 0xff;
    unaff_x19 = (ulong *)((ulong)unaff_x19 >> 0x20);
    uVar32 = uVar32 - 0x20;
  }
  bVar18 = false;
  uVar43 = 0;
  puStack_138[4] = uVar38 | uVar37 << 8;
  bVar17 = true;
  uVar38 = 4;
  uVar47 = 0x22;
  bVar14 = true;
LAB_1078df288:
  uVar34 = (undefined4)uStack_190;
  puVar21 = puStack_1c8;
  param_3 = puStack_1c0;
  param_4 = puStack_1b8;
LAB_1078df28c:
  *puStack_138 = uVar47;
  puStack_138[1] = uVar32;
  puStack_138[8] = uVar36;
  puStack_138[9] = uVar38;
  puStack_138[10] = uVar34;
  uVar63 = (long)puVar24 - (long)param_1;
  *(ulong **)(puStack_138 + 0xe) = unaff_x19;
  *(ulong **)(puStack_138 + 0x10) = puVar21;
  if (bVar17) {
    uVar32 = puStack_138[7] & 0xffff;
    uVar36 = (uint)puStack_138[7] >> 0x10;
    if (uVar63 != 0) {
      uVar52 = uVar63 % 0x15b0;
      uVar35 = uVar63;
      do {
        if (uVar52 < 8) {
          uVar49 = uVar52;
          puVar21 = param_1;
          uVar54 = uVar52;
          if (uVar52 != 0) goto LAB_1078df3b4;
        }
        else {
          uVar38 = 7;
          do {
            iVar20 = uVar32 + (byte)*param_1;
            iVar42 = iVar20 + (uint)*(byte *)((long)param_1 + 1);
            iVar44 = iVar42 + (uint)*(byte *)((long)param_1 + 2);
            iVar45 = iVar44 + (uint)*(byte *)((long)param_1 + 3);
            iVar48 = iVar45 + (uint)*(byte *)((long)param_1 + 4);
            iVar51 = iVar48 + (uint)*(byte *)((long)param_1 + 5);
            iVar55 = iVar51 + (uint)*(byte *)((long)param_1 + 6);
            param_2 = (ulong *)(ulong)*(byte *)((long)param_1 + 7);
            uVar32 = iVar55 + (uint)*(byte *)((long)param_1 + 7);
            uVar36 = iVar20 + uVar36 + iVar42 + iVar44 + iVar45 + iVar48 + iVar51 + iVar55 + uVar32;
            param_1 = param_1 + 1;
            uVar38 = uVar38 + 8;
          } while (uVar38 < (uint)uVar52);
          uVar49 = uVar52 - (uVar52 & 0x1ff8);
          puVar21 = param_1;
          uVar54 = uVar49;
          if ((uVar52 & 0x1ff8) <= uVar52 && uVar49 != 0) {
LAB_1078df3b4:
            do {
              param_2 = (ulong *)((long)param_1 + 1);
              puVar27 = (ulong *)(ulong)(byte)*param_1;
              uVar32 = uVar32 + (byte)*param_1;
              uVar36 = uVar32 + uVar36;
              uVar49 = uVar49 - 1;
              param_1 = param_2;
            } while (uVar49 != 0);
            param_1 = (ulong *)((long)puVar21 + uVar54);
            puVar29 = (ulong *)0x0;
          }
        }
        uVar32 = uVar32 % 0xfff1;
        uVar36 = uVar36 % 0xfff1;
        uVar35 = uVar35 - uVar52;
        uVar52 = 0x15b0;
      } while (uVar35 != 0);
    }
    uVar32 = uVar32 | uVar36 << 0x10;
    puStack_138[7] = uVar32;
    if (bVar14) {
      if (uVar32 == puStack_138[4]) {
LAB_1078df3fc:
        *puStack_198 = uVar63 & 0xffffffff;
        _free();
        puVar21 = (ulong *)0x0;
        goto LAB_1078df448;
      }
    }
    else if (!bVar18) goto LAB_1078df424;
LAB_1078df418:
    unaff_x19 = (ulong *)0xfffffffd;
    puVar58 = (ulong *)0x1;
  }
  else {
    puStack_138[0x2ac3] = uVar43;
    if (bVar18) goto LAB_1078df418;
    if (bVar14) goto LAB_1078df3fc;
LAB_1078df424:
    puVar58 = (ulong *)0x0;
    unaff_x19 = (ulong *)0xfffffffb;
  }
  param_3 = (ulong *)((long)unaff_x22 - (long)param_3);
  _free();
  iVar20 = (int)puVar58;
  if ((int)param_4 != (int)param_3) {
    iVar20 = 1;
  }
  uVar32 = (uint)unaff_x19;
  if (iVar20 == 0) {
    uVar32 = 0xfffffffd;
  }
  puVar21 = (ulong *)(ulong)uVar32;
LAB_1078df448:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar21;
  }
  puVar65 = &UNK_1078df5e0;
  ___stack_chk_fail();
  ppuVar16 = &puStack_1f0;
  do {
    puVar64 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)ppuVar16 + -0x90);
    *(ulong **)((long)ppuVar16 + -0x30) = unaff_x22;
    *(ulong **)((long)ppuVar16 + -0x28) = param_3;
    *(ulong **)((long)ppuVar16 + -0x20) = puVar58;
    *(ulong **)((long)ppuVar16 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar16 + -0x10) = puVar64;
    *(undefined **)((long)ppuVar16 + -8) = puVar65;
    *(undefined8 *)((long)ppuVar16 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_3 = (ulong *)((long)ppuVar16 + -0x88);
    puVar58 = (ulong *)0xc;
    puVar24 = puVar21;
    (*(code *)*puVar21)();
    unaff_x19 = puVar29;
    puVar62 = param_2;
    if ((int)puVar24 == 0) {
      if (*(long *)((long)ppuVar16 + -0x88) == -0x44cecedfa7abb455 &&
          *(int *)((long)ppuVar16 + -0x80) == 0xa1a0a0d) {
        param_3 = (ulong *)((long)ppuVar16 + -0x7c);
        puVar58 = (ulong *)0x34;
        puVar24 = puVar21;
        (*(code *)*puVar21)();
        unaff_x19 = puVar29;
        if ((int)puVar24 == 0) {
          puVar25 = (ulong *)0x1;
          param_3 = (ulong *)0x90;
          _calloc();
          if (puVar25 != (ulong *)0x0) {
            puVar58 = (ulong *)((long)ppuVar16 + -0x88);
            puVar24 = puVar25;
            param_3 = puVar21;
            unaff_x19 = param_2;
            func_0x0001078dfad4();
            iVar20 = (int)puVar24;
            unaff_x22 = puVar25;
            goto joined_r0x0001078df6e8;
          }
code_r0x0001078df750:
          puVar24 = (ulong *)0xd;
          unaff_x19 = puVar29;
        }
      }
      else if (*(long *)((long)ppuVar16 + -0x88) == -0x44cfcddfa7abb455 &&
               *(int *)((long)ppuVar16 + -0x80) == 0xa1a0a0d) {
        param_3 = (ulong *)((long)ppuVar16 + -0x7c);
        puVar58 = (ulong *)0x44;
        puVar24 = puVar21;
        (*(code *)*puVar21)();
        unaff_x19 = puVar29;
        if ((int)puVar24 == 0) {
          puVar25 = (ulong *)0x1;
          param_3 = (ulong *)0xa8;
          _calloc();
          if (puVar25 == (ulong *)0x0) goto code_r0x0001078df750;
          puVar58 = (ulong *)((long)ppuVar16 + -0x88);
          puVar24 = puVar25;
          param_3 = puVar21;
          unaff_x19 = param_2;
          func_0x0001078e1510();
          iVar20 = (int)puVar24;
          unaff_x22 = puVar25;
joined_r0x0001078df6e8:
          if (iVar20 != 0) {
            _free(unaff_x22);
            unaff_x22 = (ulong *)0x0;
            param_2 = puVar24;
          }
          *puVar27 = (ulong)unaff_x22;
          puVar62 = param_2;
        }
      }
      else {
        puVar24 = (ulong *)0xf;
      }
    }
    param_2 = puVar58;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar16 + -0x38)) {
      return puVar24;
    }
    ___stack_chk_fail();
    *(ulong **)((long)ppuVar16 + -0xc0) = unaff_x22;
    *(ulong **)((long)ppuVar16 + -0xb8) = puVar21;
    *(ulong **)((long)ppuVar16 + -0xb0) = puVar62;
    *(ulong **)((long)ppuVar16 + -0xa8) = puVar27;
    *(undefined1 **)((long)ppuVar16 + -0xa0) = (undefined1 *)((long)ppuVar16 + -0x10);
    *(undefined **)((long)ppuVar16 + -0x98) = &UNK_1078df75c;
    if (((param_3 == (ulong *)0x0) || (puVar24 == (ulong *)0x0)) || (unaff_x19 == (ulong *)0x0)) {
      return (ulong *)0xb;
    }
    puVar58 = (ulong *)0x28;
    puVar29 = unaff_x19;
    _malloc();
    if (puVar58 == (ulong *)0x0) {
      return (ulong *)0xd;
    }
    puVar58[3] = (ulong)param_3;
    puVar58[4] = 0;
    *puVar58 = (ulong)puVar24;
    puVar58[1] = 0;
    puVar58[2] = (ulong)param_3;
    *(ulong **)((long)ppuVar16 + -0xe8) = puVar58;
    *(undefined4 *)((long)ppuVar16 + -0xf0) = 2;
    *(undefined **)((long)ppuVar16 + -0x128) = &UNK_1078dd8b4;
    *(undefined **)((long)ppuVar16 + -0x120) = &UNK_1078dd94c;
    *(undefined **)((long)ppuVar16 + -0x118) = &UNK_1078dd998;
    *(undefined **)((long)ppuVar16 + -0x110) = &UNK_1078ddb10;
    *(undefined **)((long)ppuVar16 + -0x108) = &UNK_1078ddb34;
    *(undefined **)((long)ppuVar16 + -0x100) = &UNK_1078ddb68;
    *(undefined **)((long)ppuVar16 + -0xf8) = &UNK_1078ddb8c;
    *(undefined1 *)((long)ppuVar16 + -200) = 0;
    puVar21 = (ulong *)((long)ppuVar16 + -0x128);
    puVar65 = &UNK_1078df810;
    ppuVar16 = (ulong **)((long)ppuVar16 + -0x130);
    puVar27 = unaff_x19;
    puVar58 = param_2;
    unaff_x22 = puVar24;
  } while( true );
}



/* Entry: 1078e0c2c; end: 1078e0d67;  */

undefined8 FUN_1078e0c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1078e1e80; end: 1078e211f;  */

long FUN_1078e1e80(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar6 = 0;
  uVar4 = param_2 - 1;
  if (uVar4 == 0) {
    lVar13 = *(long *)(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x2c);
    uVar9 = *(uint *)(param_1 + 0x24);
    uVar11 = *(uint *)(lVar13 + 0x2c);
    uVar12 = *(uint *)(lVar13 + 0x30);
    uVar10 = *(uint *)(lVar13 + 0x34);
    uVar14 = (ulong)*(uint *)(param_1 + 0x38);
    uVar15 = *(uint *)(param_1 + 0x3c);
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x24));
    uVar16 = *(uint *)(lVar13 + 0x20) >> 3;
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x28));
  }
  else {
    lVar13 = *(long *)(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x2c);
    uVar9 = *(uint *)(param_1 + 0x24);
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x24));
    uVar11 = *(uint *)(lVar13 + 0x2c);
    uVar12 = *(uint *)(lVar13 + 0x30);
    uVar10 = *(uint *)(lVar13 + 0x34);
    uVar16 = *(uint *)(lVar13 + 0x20) >> 3;
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x28));
    uVar14 = (ulong)*(uint *)(param_1 + 0x38);
    uVar15 = *(uint *)(param_1 + 0x3c);
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xa0) + 8));
    do {
      uVar3 = (uint)((float)(uVar9 >> (ulong)(uVar4 & 0x1f)) / fVar18);
      uVar1 = uVar12;
      if (uVar12 <= uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = (uVar11 - 1) + (uVar7 >> (ulong)(uVar4 & 0x1f));
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = uVar3 / uVar11;
      }
      if (uVar3 < uVar11) {
        uVar2 = 1;
      }
      uVar5 = (uint)((float)(uVar8 >> (ulong)(uVar4 & 0x1f)) / fVar17);
      uVar3 = uVar10;
      if (uVar10 <= uVar5) {
        uVar3 = uVar5;
      }
      lVar6 = lVar6 + (ulong)(uint)(int)((float)(int)((float)((ulong)uVar15 * (ulong)uVar2 *
                                                              (ulong)(uVar1 * uVar16 * uVar3) *
                                                             uVar14) / fVar19) * fVar19);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (uVar12 <= (uint)(int)((float)uVar9 / fVar18)) {
    uVar12 = (int)((float)uVar9 / fVar18);
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = ((uVar7 - 1) + uVar11) / uVar11;
  }
  if (CARRY4(uVar7 - 1,uVar11)) {
    uVar4 = 1;
  }
  if (uVar10 <= (uint)(int)((float)uVar8 / fVar17)) {
    uVar10 = (int)((float)uVar8 / fVar17);
  }
  return lVar6 + (ulong)uVar15 * (ulong)uVar4 * (ulong)(uVar12 * uVar16 * uVar10) * uVar14;
}



/* Entry: 1078e364c; end: 1078e36af;  */

undefined8 FUN_1078e364c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong auStack_50 [3];
  undefined1 auStack_38 [24];
  
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  auStack_50[0] = (param_3 & 0x1f) << 0x14 | (param_2 & 0xf) << 0x10 | 0x5354;
  func_0x0001078e35f4(auStack_38,auStack_50);
  func_0x0001078e3604(param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 1078e5e34; end: 1078e5f3f;  */

void FUN_1078e5e34(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint extraout_w8;
  uint extraout_w9;
  uint extraout_w10;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar1 = *param_1;
  bVar3 = param_2[1] < param_1[1];
  if (uVar5 != uVar1) {
    bVar3 = uVar5 < uVar1;
  }
  uVar2 = *param_3;
  bVar4 = param_3[1] < param_2[1];
  if (uVar2 != uVar5) {
    bVar4 = uVar2 < uVar5;
  }
  if (bVar3) {
    if (bVar4) {
      *param_1 = uVar2;
      *param_3 = uVar1;
      uVar5 = param_1[1];
      param_1[1] = param_3[1];
    }
    else {
      *param_1 = uVar5;
      *param_2 = uVar1;
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar1;
      uVar2 = *param_2;
      uVar5 = *param_3;
      bVar3 = param_3[1] < uVar1;
      if (uVar5 != uVar2) {
        bVar3 = uVar5 < uVar2;
      }
      if (!bVar3) {
        return;
      }
      *param_2 = uVar5;
      *param_3 = uVar2;
      uVar5 = param_2[1];
      param_2[1] = param_3[1];
    }
    param_3[1] = uVar5;
  }
  else if (bVar4) {
    *param_2 = uVar2;
    *param_3 = uVar5;
    uVar5 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar5;
    func_0x000107917174(*param_2);
    uVar5 = extraout_w10;
    if (extraout_w8 != extraout_w9) {
      uVar5 = (uint)(extraout_w8 < extraout_w9);
    }
    if (uVar5 == 1) {
      *param_1 = extraout_w8;
      *param_2 = extraout_w9;
      uVar5 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar5;
      return;
    }
  }
  return;
}



/* Entry: 1078e648c; end: 1078e6493;  */

void FUN_1078e648c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x00010791667c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e6728; end: 1078e672b;  */

void FUN_1078e6728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt8bad_castD2Ev_110346988)();
  return;
}



/* Entry: 1078e67c8; end: 1078e67d3;  */

undefined * FUN_1078e67c8(void)

{
  return &UNK_10f43467c;
}



/* Entry: 1078e8d98; end: 1078e8dcf;  */

void FUN_1078e8d98(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x00010791667c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e97fc; end: 1078e9867;  */

void FUN_1078e97fc(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107915b9c();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078e9be4; end: 1078e9bef;  */

bool FUN_1078e9be4(long param_1)

{
  func_0x000107913ad0();
  if ((*(long *)(param_1 + 8) != 0) && (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18))) {
    return *(long *)(param_1 + 0x40) == 0;
  }
  return true;
}



/* Entry: 1078ea4e8; end: 1078eb307;  */

void FUN_1078ea4e8(long ******param_1,long ******param_2,undefined4 *param_3)

{
  long ******pppppplVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  long lVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  long ****pppplVar15;
  long lVar16;
  long ****pppplVar17;
  char cVar18;
  long ******pppppplVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long ****pppplVar33;
  long ******pppppplVar34;
  undefined8 extraout_x8;
  long ****pppplVar35;
  long ***ppplVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long lVar39;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined4 uVar40;
  long *****ppppplVar41;
  long lVar42;
  long ***ppplVar43;
  long lVar44;
  long lVar45;
  long extraout_x9;
  long lVar46;
  undefined4 uVar47;
  long extraout_x10;
  long extraout_x10_00;
  long *****ppppplVar48;
  undefined4 extraout_w11;
  long *****ppppplVar49;
  int iVar50;
  int iVar51;
  long ***ppplVar52;
  long ******pppppplVar53;
  uint uVar54;
  long ***ppplVar55;
  long ******pppppplVar56;
  long *****ppppplVar57;
  long ****pppplVar58;
  long ***ppplStack_840;
  long *****ppppplStack_838;
  long *****ppppplStack_830;
  undefined8 uStack_828;
  undefined1 uStack_820;
  long ***ppplStack_818;
  long *****ppppplStack_810;
  long *****ppppplStack_808;
  undefined8 uStack_800;
  undefined1 uStack_7f8;
  long ****apppplStack_7f0 [6];
  long **pplStack_7c0;
  long **pplStack_7b8;
  long **pplStack_7b0;
  long lStack_7a8;
  long **pplStack_7a0;
  long **pplStack_720;
  long **pplStack_708;
  long **pplStack_700;
  long ****pppplStack_6f8;
  long lStack_6f0;
  long **pplStack_6e8;
  long **pplStack_668;
  long lStack_640;
  long lStack_638;
  long *****ppppplStack_630;
  long *****ppppplStack_628;
  long *****ppppplStack_620;
  long *****ppppplStack_618;
  long ****pppplStack_610;
  long ***ppplStack_608;
  undefined4 uStack_600;
  undefined1 uStack_5fc;
  undefined4 auStack_5e8 [18];
  long ****pppplStack_5a0;
  undefined4 uStack_530;
  long ****pppplStack_4e8;
  undefined1 auStack_460 [16];
  long *****appppplStack_450 [2];
  long ****pppplStack_440;
  long ***ppplStack_438;
  long **pplStack_430;
  long **pplStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long *****ppppplStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long ***ppplStack_3e8;
  long ***ppplStack_3e0;
  long ***ppplStack_3d8;
  undefined4 uStack_360;
  long ***ppplStack_288;
  long ***ppplStack_280;
  long ****pppplStack_278;
  long lStack_270;
  long ****pppplStack_268;
  long lStack_260;
  long ****pppplStack_258;
  long lStack_250;
  long ****pppplStack_248;
  long lStack_240;
  long ****pppplStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  undefined2 uStack_200;
  long ***ppplStack_1f8;
  long ****pppplStack_1f0;
  long *****ppppplStack_1e8;
  long ****pppplStack_1e0;
  undefined1 uStack_1c8;
  long ***ppplStack_1c0;
  long ****pppplStack_1b8;
  long ****pppplStack_1b0;
  long *****ppppplStack_1a8;
  undefined1 uStack_190;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long ****pppplStack_158;
  long ****pppplStack_150;
  long ***ppplStack_148;
  long ****pppplStack_140;
  long ***ppplStack_138;
  long ****pppplStack_130;
  long ***ppplStack_128;
  long ****pppplStack_e0;
  long ***ppplStack_d8;
  char cStack_c0;
  byte bStack_bf;
  uint uStack_ac;
  uint uStack_a4;
  int iStack_9c;
  int iStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  undefined8 uStack_80;
  
  func_0x000107917384();
  func_0x000107913ca4();
  ppppplVar41 = param_2[1];
  pppplVar35 = **param_1;
  lVar42 = *(long *)(param_3 + 2);
  ppplVar36 = pppplVar35[(long)ppppplVar41 * 0x20 + 1];
  uVar21 = 1;
  pppppplVar30 = param_1;
  pppppplVar34 = param_2;
  uStack_80 = extraout_x8;
  if (ppplVar36 != pppplVar35[lVar42 * 0x20 + 1]) {
    ppplVar55 = pppplVar35[(long)ppppplVar41 * 0x20 + 5];
    ppplVar52 = pppplVar35[lVar42 * 0x20 + 5];
    uVar21 = false;
    if ((ppplVar55 != ppplVar52) ||
       ((uVar21 = 1,
        ppplVar36 != pppplVar35[lVar42 * 0x20 + 2] && ppplVar36 != pppplVar35[lVar42 * 0x20 + 3] &&
        (uVar21 = *(char *)(*param_1[1] + (long)ppplVar55 * 4 + 3) == '\x01', (bool)uVar21)))) {
      pppppplVar30 = param_2 + 4;
      pppppplVar34 = (long ******)(param_3 + 8);
      func_0x0001078eb5cc();
      if ((((ulong)pppppplVar30 & 1) == 0) &&
         ((ppplVar36 = pppplVar35[(long)ppppplVar41 * 0x20 + 7], -1 < (long)ppplVar36 &&
          (ppplVar43 = pppplVar35[lVar42 * 0x20 + 7], -1 < (long)ppplVar43)))) {
        lStack_638 = (long)param_2[8] + (long)ppplVar36;
        lVar12 = *(long *)(param_3 + 0x10);
        pppplVar2 = *param_1[1] + (long)ppplVar55 * 4;
        ppplVar55 = *pppplVar2;
        ppppplStack_618 = (long *****)(ppplVar55 + lStack_638 * 2);
        ppppplStack_620 = (long *****)(ppplVar55 + ((long)param_2[9] + (long)ppplVar36) * 2 + 2);
        pppplVar3 = *param_1[1] + (long)ppplVar52 * 4;
        ppplVar36 = *pppplVar3;
        ppppplStack_628 = (long *****)(ppplVar36 + (lVar12 + (long)ppplVar43) * 2);
        ppppplStack_630 =
             (long *****)(ppplVar36 + (*(long *)(param_3 + 0x12) + (long)ppplVar43) * 2 + 2);
        func_0x0001079186c8();
        func_0x0001078ebb84();
        func_0x0001078ebbdc(param_1,ppppplStack_618,&ppppplStack_620,*(undefined4 *)param_2,
                            param_3 + 8);
        func_0x0001079186c8();
        func_0x0001078ebc50();
        pppppplVar56 = (long ******)ppppplStack_618;
        func_0x0001079186e8();
        func_0x0001078ebca8();
        lStack_640 = lVar12 + (long)ppplVar43;
        func_0x0001079186a0();
        func_0x0001078ebb84();
        func_0x0001078ebbdc(param_1,ppppplStack_628,&ppppplStack_630,*param_3,param_2 + 4);
        func_0x0001079186a0();
        func_0x0001078ebc50();
        pppppplVar34 = (long ******)ppppplStack_628;
        func_0x0001078ebca8(param_1,ppppplStack_628,&ppppplStack_630,param_3[1],param_2 + 4);
        pppppplVar30 = (long ******)apppplStack_7f0;
        func_0x0001078ebdc8();
        ppppplVar48 = ppppplStack_620;
        pplStack_720 = (long **)pppplVar35[(long)ppppplVar41 * 0x20 + 1];
        pplStack_7b8 = (long **)pppplVar35[(long)ppppplVar41 * 0x20 + 5];
        pplStack_7c0 = (long **)pppplVar35[(long)ppppplVar41 * 0x20 + 4];
        pplStack_7b0 = (long **)pppplVar35[(long)ppppplVar41 * 0x20 + 6];
        pplStack_7a0 = (long **)pppplVar35[(long)ppppplVar41 * 0x20 + 8];
        lStack_7a8 = lStack_638;
        while( true ) {
          ppppplVar41 = ppppplStack_630;
          lVar12 = lStack_7a8;
          pppppplVar1 = pppppplVar56 + 2;
          uVar21 = 1;
          if (pppppplVar1 == (long ******)ppppplVar48) break;
          ppplVar52 = pppplVar35[lVar42 * 0x20 + 5];
          ppplVar36 = pppplVar35[lVar42 * 0x20 + 4];
          pppplVar58 = (long ****)pppplVar35[lVar42 * 0x20 + 7];
          ppppplVar57 = (long *****)pppplVar35[lVar42 * 0x20 + 6];
          pplStack_668 = (long **)pppplVar35[lVar42 * 0x20 + 1];
          pplStack_6e8 = (long **)pppplVar35[lVar42 * 0x20 + 8];
          uStack_800 = 0;
          uStack_7f8 = 0;
          pppppplVar37 = (long ******)ppppplStack_628;
          lVar45 = lStack_640;
          ppplStack_818 = (long ***)pppplVar2;
          ppppplStack_810 = (long *****)pppppplVar56;
          ppppplStack_808 = (long *****)pppppplVar1;
          pplStack_708 = (long **)ppplVar36;
          pplStack_700 = (long **)ppplVar52;
          pppplStack_6f8 = (long ****)ppppplVar57;
LAB_1078ea7b0:
          lVar44 = lVar45 + 1;
          pppppplVar56 = pppppplVar37 + 2;
          lStack_6f0 = lVar45;
          if (pppppplVar56 != (long ******)ppppplVar41) {
            uStack_828 = 0;
            uStack_820 = 0;
            ppppplVar32 = param_1[3];
            ppppplVar13 = param_1[4];
            pppppplVar38 = (long ******)param_1[2];
            uStack_200 = 0;
            ppplStack_840 = (long ***)pppplVar3;
            ppppplStack_838 = (long *****)pppppplVar37;
            ppppplStack_830 = (long *****)pppppplVar56;
            ppplStack_288 = (long ***)&ppplStack_818;
            ppplStack_280 = (long ***)&ppplStack_840;
            pppplStack_238 = (long ****)ppppplVar13;
            ppplStack_230 = (long ***)&ppplStack_818;
            ppplStack_228 = (long ***)&ppplStack_840;
            func_0x0001079170a0(&pppplStack_278,ppppplStack_810);
            func_0x0001079170a0(&pppplStack_268,ppppplStack_808);
            func_0x0001079170a0(&pppplStack_258,ppppplStack_838);
            pppppplVar30 = (long ******)&pppplStack_248;
            func_0x0001079170a0(&pppplStack_248,ppppplStack_830);
            uStack_1c8 = 0;
            uStack_190 = 0;
            pppppplVar34 = (long ******)ppppplStack_810;
            ppplStack_1f8 = (long ***)&ppplStack_818;
            pppplStack_1f0 = (long ****)ppppplVar13;
            ppppplStack_1e8 = &pppplStack_278;
            pppplStack_1e0 = (long ****)&pppplStack_268;
            ppplStack_1c0 = (long ***)&ppplStack_840;
            pppplStack_1b8 = (long ****)ppppplVar13;
            pppplStack_1b0 = (long ****)&pppplStack_258;
            ppppplStack_1a8 = &pppplStack_248;
            ppplStack_180 = (long ***)&ppplStack_1f8;
            ppplStack_178 = (long ***)&ppplStack_1c0;
            ppplStack_168 = (long ***)&ppplStack_1c0;
            ppplStack_160 = (long ***)&ppplStack_1f8;
            func_0x000107917084(ppppplStack_808);
            lVar39 = lStack_240;
            pppplVar17 = pppplStack_248;
            lVar16 = lStack_250;
            pppplVar15 = pppplStack_258;
            lVar46 = lStack_260;
            pppplVar33 = pppplStack_268;
            lVar4 = lStack_270;
            ppppplVar49 = (long *****)pppplStack_278;
            lStack_418 = 1;
            lStack_420 = 0;
            uStack_410 = 0;
            ppppplStack_408 = (long *****)0x0;
            pppppplVar37 = (long ******)((long)pppplStack_268 - (long)pppplStack_278);
            bVar22 = pppppplVar37 == (long ******)0x0 && lStack_260 == lStack_270;
            lStack_400 = 1;
            uStack_3f8 = 0;
            lVar45 = (long)pppplStack_248 - (long)pppplStack_258;
            bVar20 = lVar45 == 0 && lStack_240 == lStack_250;
            pppppplVar31 = pppppplVar30;
            pppppplVar19 = (long ******)&pppplStack_278;
            appppplStack_450[0] = (long *****)pppppplVar34;
            pppplStack_440 = (long ****)ppppplVar57;
            ppplStack_438 = (long ***)pppplVar58;
            pplStack_430 = (long **)ppplVar36;
            pplStack_428 = (long **)ppplVar52;
            if ((pppppplVar37 == (long ******)0x0 && lStack_260 == lStack_270) &&
               (lVar45 == 0 && lStack_240 == lStack_250)) {
              if (pppplStack_278 != pppplStack_258 || lStack_270 != lStack_250) goto LAB_1078ea9e8;
              func_0x0001079185b0();
              func_0x0001078ebf2c();
              pppppplVar53 = (long ******)&pppplStack_278;
            }
            else {
              ppppplVar5 = (long *****)pppplStack_278;
              if ((long)pppplStack_268 <= (long)pppplStack_278) {
                ppppplVar5 = (long *****)pppplStack_268;
              }
              ppppplVar6 = (long *****)pppplStack_278;
              if ((long)pppplStack_278 <= (long)pppplStack_268) {
                ppppplVar6 = (long *****)pppplStack_268;
              }
              ppppplVar7 = (long *****)pppplStack_258;
              if ((long)pppplStack_248 <= (long)pppplStack_258) {
                ppppplVar7 = (long *****)pppplStack_248;
              }
              ppppplVar8 = (long *****)pppplStack_258;
              if ((long)pppplStack_258 <= (long)pppplStack_248) {
                ppppplVar8 = (long *****)pppplStack_248;
              }
              if ((long)ppppplVar7 <= (long)ppppplVar6 && (long)ppppplVar5 <= (long)ppppplVar8) {
                lVar14 = lStack_270;
                if (lStack_260 <= lStack_270) {
                  lVar14 = lStack_260;
                }
                lVar9 = lStack_270;
                if (lStack_270 <= lStack_260) {
                  lVar9 = lStack_260;
                }
                lVar10 = lStack_250;
                if (lStack_240 <= lStack_250) {
                  lVar10 = lStack_240;
                }
                lVar11 = lStack_250;
                if (lStack_250 <= lStack_240) {
                  lVar11 = lStack_240;
                }
                if (lVar10 <= lVar9 && lVar14 <= lVar11) {
                  func_0x0001079183a8();
                  func_0x0001078ebfd0();
                  pppppplVar53 = pppppplVar30;
                  func_0x0001079183a8();
                  func_0x0001078ebfd0();
                  iVar50 = (int)pppppplVar30;
                  iVar23 = (int)pppppplVar53;
                  pppplStack_610 = (long ****)CONCAT44(iVar23,iVar50);
                  pppppplVar31 = pppppplVar53;
                  pppppplVar19 = pppppplVar30;
                  if (iVar23 * iVar50 != 1) {
                    func_0x000107917768();
                    func_0x0001078ebfd0();
                    pppppplVar31 = pppppplVar53;
                    func_0x000107917768();
                    func_0x000107917d80();
                    iVar51 = (int)pppppplVar53;
                    iVar24 = (int)pppppplVar31;
                    ppplStack_608 = (long ***)CONCAT44(iVar24,iVar51);
                    pppppplVar19 = pppppplVar53;
                    if (iVar24 * iVar51 != 1) {
                      lVar46 = lVar46 - lVar4;
                      lVar39 = lVar39 - lVar16;
                      if ((iVar23 == 0 && iVar50 == 0) && (iVar51 == 0 && iVar24 == 0)) {
LAB_1078eac9c:
                        pppppplVar30 = (long ******)-(long)pppppplVar37;
                        if (-1 < (long)pppppplVar37) {
                          pppppplVar30 = pppppplVar37;
                        }
                        lVar4 = -lVar46;
                        if (-1 < lVar46) {
                          lVar4 = lVar46;
                        }
                        lVar46 = -lVar45;
                        if (-1 < lVar45) {
                          lVar46 = lVar45;
                        }
                        lVar45 = -lVar39;
                        if (-1 < lVar39) {
                          lVar45 = lVar39;
                        }
                        func_0x0001078ec038(pppppplVar30,lVar4,lVar46,lVar45,bVar22,bVar20);
                        if (0xff < ((uint)pppppplVar30 & 0xffff)) {
                          if (((ulong)pppppplVar30 & 1) == 0) {
                            func_0x0001079185b0();
                            pppppplVar34 = appppplStack_450;
                            func_0x0001078ec0a4();
                          }
                          else {
                            pppppplVar30 = (long ******)&pppplStack_158;
                            pppppplVar34 = appppplStack_450;
                            func_0x0001078ec08c(pppppplVar30,pppppplVar34,auStack_460,ppppplVar49,
                                                pppplVar33,pppplVar15,pppplVar17,bVar22,bVar20);
                            ppppplVar49 = (long *****)&ppplStack_288;
                          }
                          goto LAB_1078ea9f0;
                        }
                      }
                      else {
                        lVar14 = lVar45 * lVar46 - lVar39 * (long)pppppplVar37;
                        if (lVar14 == 0) {
                          ppplStack_608 = (long ***)0x0;
                          pppplStack_610 = (long ****)0x0;
                          goto LAB_1078eac9c;
                        }
                        lStack_418 = lVar39 * (long)pppppplVar37 - lVar45 * lVar46;
                        pppppplVar53 = (long ******)
                                       (((long)ppppplVar49 - (long)pppplVar15) * lVar46 +
                                       (lVar16 - lVar4) * (long)pppppplVar37);
                        lStack_420 = lVar45 * (lVar4 - lVar16) +
                                     lVar39 * ((long)pppplVar15 - (long)ppppplVar49);
                        func_0x0001078ec2fc(&lStack_420);
                        pppppplVar30 = &ppppplStack_408;
                        ppppplStack_408 = (long *****)pppppplVar53;
                        lStack_400 = lVar14;
                        func_0x0001078ec2fc();
                      }
                      func_0x0001079185b0();
                      pppppplVar34 = (long ******)&pppplStack_610;
                      func_0x0001078ec0bc();
                      goto LAB_1078ea9f0;
                    }
                  }
                }
              }
LAB_1078ea9e8:
              pppppplVar53 = pppppplVar19;
              pppppplVar30 = pppppplVar31;
              func_0x0001079185b0();
              func_0x0001078ebf8c();
            }
LAB_1078ea9f0:
            cVar18 = cStack_c0;
            pppppplVar37 = pppppplVar56;
            lVar45 = lVar44;
            pppplStack_90 = (long ****)ppppplVar32;
            pppplStack_88 = (long ****)ppppplVar13;
            if (cStack_c0 != 'd') {
              pppppplVar30 = (long ******)&pppplStack_610;
              pppppplVar34 = (long ******)apppplStack_7f0;
              func_0x0001079170e8();
              iVar23 = iStack_98;
              if (cVar18 == 'i') {
                uStack_600 = 2;
                ppplStack_608 = ppplStack_148;
                pppplStack_610 = pppplStack_150;
                ppppplVar57 = (long *****)pppplStack_130;
                pppplVar58 = (long ****)ppplStack_128;
                func_0x000107916a94();
                lVar44 = 0x28;
                if (uStack_a4 != 1) {
                  lVar44 = 0xe0;
                }
                *(undefined4 *)(extraout_x9 + lVar44) = 1;
                lVar44 = 0xe0;
                if (uStack_a4 != 1) {
                  lVar44 = 0x28;
                }
                *(undefined4 *)(extraout_x9 + lVar44) = extraout_w11;
                goto LAB_1078eb2b4;
              }
              if (cVar18 == 't') {
                FUN_1078ed2fc(&pppplStack_610,3,ppppplVar49 + 0x26,ppppplVar49 + 0x39);
                pppplVar33 = (long ****)ppplStack_180;
                func_0x0001078ec28c();
                uVar54 = (uint)pppplVar33;
                func_0x000107914868();
                func_0x0001078ebfd0();
                uVar29 = uStack_a4;
                uVar28 = uVar54;
                func_0x0001079154a4();
                if (uVar28 * uVar29 == -1) {
                  uVar27 = uVar28;
                  func_0x0001079167ec();
                  if (uVar27 == uVar29) {
                    if (uVar54 == 0) {
                      uStack_530 = 1;
                      if (uVar28 != 1) {
                        uStack_530 = 2;
                      }
                      auStack_5e8[0] = 3;
                    }
                    else {
                      if (uVar54 != uVar28) goto LAB_1078eaebc;
                      uStack_530 = 1;
                      auStack_5e8[0] = uStack_530;
                      if (uVar28 != 1) {
                        uStack_530 = 2;
                        auStack_5e8[0] = uStack_530;
                      }
LAB_1078eb05c:
                      uStack_5fc = 1;
                    }
                  }
                  else {
LAB_1078eaebc:
                    if (uVar27 == uVar28) {
                      func_0x000107917d4c();
                      if (uVar27 == 0) goto LAB_1078eb2a8;
                      if (uVar27 == uVar28) {
                        auStack_5e8[0] = 1;
                        if (uVar28 != 1) {
                          auStack_5e8[0] = 2;
                        }
                        uStack_530 = 1;
                        if (uVar28 == 1) {
                          uStack_530 = 2;
                        }
                        goto LAB_1078eb298;
                      }
                    }
                    auStack_5e8[0] = 1;
                    if (uVar28 == 1) {
                      auStack_5e8[0] = 2;
                    }
                    uStack_530 = 1;
                    if (uVar28 != 1) {
                      uStack_530 = 2;
                    }
                  }
                }
                else {
                  uVar25 = uVar28;
                  func_0x000107917d4c();
                  uVar26 = uVar25;
                  func_0x0001079167ec();
                  uVar27 = uVar26;
                  func_0x0001079170c4();
                  bVar22 = uVar28 == 0;
                  bVar20 = uVar27 * uVar29 == 1;
                  if ((uVar26 == uVar29 || uVar26 == uVar28) ||
                     ((uVar28 == 0 && uVar29 == 0 && (uVar26 != 0xffffffff)))) {
                    if (uVar25 == 0 && (!bVar22 || bVar20)) {
LAB_1078eb2a8:
                      auStack_5e8[0] = 4;
                      uStack_530 = 4;
                    }
                    else if (uVar54 == 0) {
                      uVar40 = 1;
                      if (uVar27 == 1) {
                        uVar40 = 2;
                      }
                      uStack_530 = 3;
                      if (!bVar22 || bVar20) {
                        uStack_530 = uVar40;
                      }
                      auStack_5e8[0] = 3;
                    }
                    else if (uVar54 == uVar25 && uVar27 * uVar54 != -1) {
                      auStack_5e8[0] = 1;
                      if (uVar27 != 1) {
                        auStack_5e8[0] = 2;
                      }
                      uVar40 = 1;
                      if (uVar27 == 1) {
                        uVar40 = 2;
                      }
                      uStack_530 = 3;
                      if (!bVar22 || bVar20) {
                        uStack_530 = uVar40;
                      }
                    }
                    else {
                      if (uVar25 + uVar27 == 0) {
                        auStack_5e8[0] = 1;
                        if (uVar27 == 1) {
                          auStack_5e8[0] = 2;
                        }
                        uStack_530 = 1;
                        if (uVar27 != 1) {
                          uStack_530 = 2;
                        }
                      }
                      else {
                        if (uVar54 != -uVar27) goto LAB_1078eb2b4;
                        auStack_5e8[0] = 1;
                        if (uVar27 == 1) {
                          auStack_5e8[0] = 2;
                        }
                        uStack_530 = auStack_5e8[0];
                        if (bVar22 && !bVar20) goto LAB_1078eb1bc;
                      }
LAB_1078eb298:
                      uStack_5fc = 1;
                    }
                  }
                  else {
                    auStack_5e8[0] = 1;
                    if (uVar27 == 1) {
                      auStack_5e8[0] = 2;
                    }
                    uVar40 = 1;
                    if (uVar28 != 1 && uVar29 != 1) {
                      uVar40 = 2;
                    }
                    uStack_530 = 3;
                    if (!bVar22 || bVar20) {
                      uStack_5fc = 1;
                      uStack_530 = uVar40;
                    }
                  }
                }
LAB_1078eb2b4:
                pppppplVar34 = (long ******)&pppplStack_610;
              }
              else {
                if (cVar18 == 'm') {
                  ppppplVar32 = &pppplStack_610;
                  FUN_1078ed2fc(ppppplVar32,4,ppppplVar49 + 0x26,ppppplVar49 + 0x39);
                  uVar28 = uStack_a4;
                  uVar29 = uStack_ac;
                  uVar54 = (uint)ppppplVar32;
                  iVar50 = (int)ppppplVar49;
                  if (iVar23 == 1) {
                    func_0x0001079154a4();
                    if (uVar28 + uVar54 == 0) {
                      lVar44 = 0x28;
                      if (uVar54 != 0xffffffff) {
                        lVar44 = 0xe0;
                      }
                      *(undefined4 *)((long)&pppplStack_610 + lVar44) = 1;
                      lVar44 = 0xe0;
                      if (uVar54 != 0xffffffff) {
                        lVar44 = 0x28;
                      }
LAB_1078eac1c:
                      *(undefined4 *)((long)&pppplStack_610 + lVar44) = 2;
                      goto LAB_1078eb2b4;
                    }
                    uVar29 = uVar54;
                    func_0x0001079170c4();
                    iVar23 = iVar50 + 0x100;
                    func_0x0001078ed3c4();
                    if ((uVar54 & uVar28) != 0xffffffff || uVar29 != 1) {
                      if ((uVar28 == 1 && uVar54 == 1) && uVar29 == 0xffffffff) {
                        uStack_530 = 3;
                        if (iVar23 == -1) {
                          uStack_530 = 1;
                        }
                        auStack_5e8[0] = 1;
                        goto LAB_1078eb05c;
                      }
                      if (uVar28 == uVar54 && uVar28 == uVar29) {
                        uVar54 = (uint)((uVar29 == 1) != (iVar23 == 0));
                        uVar27 = uVar54;
                        if (iVar23 * uVar28 == -1) {
                          iVar24 = iVar23;
                          func_0x0001079138f0(ppplStack_180);
                          iVar50 = iVar50 + 0x100;
                          func_0x0001078ed3ec();
                          iVar24 = iVar50 * iVar24;
                          pppplVar33 = (long ****)ppplStack_180;
joined_r0x0001078eb254:
                          uVar27 = uVar54;
                          if (iVar24 == 1) {
                            func_0x0001079147d0(pppplVar33);
                            uVar27 = uVar54 ^ 1;
                            if (iVar50 * iVar23 != -1) {
                              uVar27 = uVar54;
                            }
                          }
                        }
LAB_1078eb274:
                        auStack_5e8[(ulong)uVar27 * 0x2e] = 1;
                        auStack_5e8[(ulong)(uVar27 ^ 1) * 0x2e] = 2;
                        goto LAB_1078eb298;
                      }
                      if (uVar54 == 0) {
                        if (uVar28 == uVar29) goto LAB_1078eb2a8;
                        auStack_5e8[0] = 1;
                        if (uVar29 == 1) {
                          auStack_5e8[0] = 2;
                        }
LAB_1078eb1bc:
                        uStack_530 = 3;
                      }
                      else {
LAB_1078eae9c:
                        uStack_600 = 8;
                      }
                      goto LAB_1078eb2b4;
                    }
LAB_1078eaea4:
                    auStack_5e8[0] = 2;
                    uStack_530 = 2;
                  }
                  else {
                    ppplVar55 = (long ***)ppplStack_168[2];
                    func_0x0001078ed378(ppplVar55,ppplStack_168[3],ppplStack_160);
                    uVar28 = (uint)ppplVar55;
                    if (uVar29 + uVar28 == 0) {
                      lVar44 = 0xe0;
                      if (uVar28 != 0xffffffff) {
                        lVar44 = 0x28;
                      }
                      *(undefined4 *)((long)&pppplStack_610 + lVar44) = 1;
                      lVar44 = 0x28;
                      if (uVar28 != 0xffffffff) {
                        lVar44 = 0xe0;
                      }
                      goto LAB_1078eac1c;
                    }
                    pppplVar33 = (long ****)ppplStack_160;
                    func_0x0001078ed3a4();
                    iVar23 = iVar50 + 0x118;
                    func_0x0001078ed3c4();
                    uVar54 = (uint)pppplVar33;
                    if ((uVar28 & uVar29) == 0xffffffff && uVar54 == 1) goto LAB_1078eaea4;
                    if ((uVar29 != 1 || uVar28 != 1) || uVar54 != 0xffffffff) {
                      if (uVar29 == uVar28 && uVar29 == uVar54) {
                        uVar54 = (uint)((uVar54 == 1) != (iVar23 != 0));
                        uVar27 = uVar54;
                        if (iVar23 * uVar29 == -1) {
                          iVar24 = iVar23;
                          func_0x0001079138f0(ppplStack_168);
                          iVar50 = iVar50 + 0x118;
                          func_0x0001078ed3ec();
                          iVar24 = iVar50 * iVar24;
                          pppplVar33 = (long ****)ppplStack_168;
                          goto joined_r0x0001078eb254;
                        }
                        goto LAB_1078eb274;
                      }
                      if (uVar28 != 0) goto LAB_1078eae9c;
                      if (uVar29 == uVar54) goto LAB_1078eb2a8;
                      uStack_530 = 1;
                      if (uVar54 == 1) {
                        uStack_530 = 2;
                      }
                      auStack_5e8[0] = 3;
                      goto LAB_1078eb2b4;
                    }
                    auStack_5e8[0] = 3;
                    if (iVar23 == -1) {
                      auStack_5e8[0] = 1;
                    }
                    uStack_530 = 1;
                  }
                  uStack_5fc = 1;
                  goto LAB_1078eb2b4;
                }
                uVar21 = cVar18 == 'c';
                if (!(bool)uVar21) {
                  if ((cVar18 == 'e') && ((bStack_bf & 1) == 0)) {
LAB_1078eadf4:
                    ppppplVar49 = ppppplVar49 + 0x26;
                    func_0x0001078ed470();
                    iVar24 = (int)ppppplVar49;
                    uStack_600 = 6;
                    pppplVar58 = (&pppplStack_150)[((ulong)ppppplVar49 & 0xffffffff) * 2 + 1];
                    ppppplVar57 = (long *****)
                                  (&pppplStack_150)[((ulong)ppppplVar49 & 0xffffffff) * 2];
                    pppplStack_610 = (long ****)ppppplVar57;
                    ppplStack_608 = (long ***)pppplVar58;
                    func_0x000107914f24(&pppplStack_130);
                    func_0x0001079144a4();
                    *(long *****)(extraout_x10_00 + 0x118) = pppplVar58;
                    *(long ******)(extraout_x10_00 + 0x110) = ppppplVar57;
                    *(undefined8 *)(extraout_x10_00 + 0x120) =
                         *(undefined8 *)(extraout_x8_01 + 0x28);
                    func_0x000107917d4c();
                    iVar23 = iVar24;
                    func_0x0001079167ec();
                    iVar50 = iVar23;
                    func_0x0001079154a4();
                    if ((iVar24 == 0) && (iVar23 == iVar50)) {
                      uStack_530 = 4;
                      auStack_5e8[0] = 4;
                    }
                    else {
                      if (iVar50 * iVar23 != -1) {
                        iVar23 = iVar24;
                      }
                      auStack_5e8[0] = 1;
                      if (iVar23 == -1) {
                        auStack_5e8[0] = 2;
                      }
                      uStack_530 = 1;
                      if (iVar23 != -1) {
                        uStack_530 = 2;
                      }
                    }
                    if (cVar18 == 'c') {
                      uStack_600 = 5;
                    }
                    goto LAB_1078eb2b4;
                  }
                  goto LAB_1078ea7b0;
                }
                if ((bStack_bf & 1) == 0) {
                  if (iStack_9c != 0) {
                    ppppplVar49 = ppppplVar49 + 0x26;
                    func_0x0001078ed470();
                    iVar51 = (int)ppppplVar49;
                    uStack_600 = 5;
                    pppplVar58 = (&pppplStack_150)[((ulong)ppppplVar49 & 0xffffffff) * 2 + 1];
                    ppppplVar57 = (long *****)
                                  (&pppplStack_150)[((ulong)ppppplVar49 & 0xffffffff) * 2];
                    pppplStack_610 = (long ****)ppppplVar57;
                    ppplStack_608 = (long ***)pppplVar58;
                    func_0x000107914f24(&pppplStack_130);
                    func_0x0001079144a4();
                    iVar50 = iStack_9c;
                    *(long *****)(extraout_x10 + 0x118) = pppplVar58;
                    *(long ******)(extraout_x10 + 0x110) = ppppplVar57;
                    *(undefined8 *)(extraout_x10 + 0x120) = *(undefined8 *)(extraout_x8_00 + 0x28);
                    func_0x0001079167ec();
                    iVar24 = iVar51;
                    func_0x0001079170c4();
                    func_0x0001079185a4();
                    iVar23 = iVar51;
                    if (!(bool)uVar21) {
                      iVar23 = iVar24;
                    }
                    iVar23 = iVar23 * iVar50;
                    uVar40 = 1;
                    if (iVar23 != 1) {
                      uVar40 = 2;
                    }
                    uVar47 = 1;
                    if (iVar23 == 1) {
                      uVar47 = 2;
                    }
                    uStack_530 = 4;
                    auStack_5e8[0] = 4;
                    if (iVar23 != 0) {
                      uStack_530 = uVar47;
                      auStack_5e8[0] = uVar40;
                    }
                    if (iVar51 == 0) {
                      FUN_1078ebe90(&ppplStack_818);
                    }
                    func_0x000107917690();
                    pppplStack_5a0 = (long ****)ppppplVar57;
                    if ((int)pppppplVar53 == 0) {
                      FUN_1078ebe90(&ppplStack_840);
                    }
                    func_0x000107917690();
                    pppplStack_4e8 = (long ****)ppppplVar57;
                    goto LAB_1078eb2b4;
                  }
                  goto LAB_1078eadf4;
                }
                pppppplVar30 = (long ******)&pppplStack_440;
                pppppplVar34 = (long ******)apppplStack_7f0;
                func_0x0001079170e8();
                iVar23 = iStack_98;
                if (iStack_9c == 1) {
                  func_0x0001079167ec();
                  if ((int)pppppplVar30 == 1) {
                    uVar40 = 2;
                  }
                  else {
                    if ((int)pppppplVar30 == 0) goto LAB_1078eb140;
                    uVar40 = 1;
                  }
                  uStack_360 = 3;
                  lStack_418 = CONCAT44(lStack_418._4_4_,uVar40);
                  pplStack_430 = (long **)CONCAT44(pplStack_430._4_4_,5);
                  ppplStack_438 = ppplStack_138;
                  pppplStack_440 = pppplStack_140;
                  ppplStack_3e0 = (long ***)ppppplVar49[0x33];
                  ppplStack_3e8 = (long ***)ppppplVar49[0x32];
                  ppplStack_3d8 = (long ***)ppppplVar49[0x34];
                  pppppplVar34 = (long ******)&pppplStack_440;
                  pppppplVar30 = pppppplVar38;
                  ppppplVar57 = (long *****)pppplStack_e0;
                  pppplVar58 = (long ****)ppplStack_d8;
                  func_0x0001078ed228();
                }
LAB_1078eb140:
                if (iVar23 != 1) goto LAB_1078ea7b0;
                func_0x0001079170c4();
                if ((int)pppppplVar30 == 1) {
                  uStack_360 = 2;
                }
                else {
                  if ((int)pppppplVar30 == 0) goto LAB_1078ea7b0;
                  uStack_360 = 1;
                }
                lStack_418 = CONCAT44(lStack_418._4_4_,3);
                pplStack_430 = (long **)CONCAT44(pplStack_430._4_4_,5);
                ppplStack_438 = ppplStack_148;
                pppplStack_440 = pppplStack_150;
                ppppplVar57 = (long *****)pppplStack_130;
                pppplVar58 = (long ****)ppplStack_128;
                func_0x000107916a94();
                pppppplVar34 = (long ******)&pppplStack_440;
              }
              func_0x0001078ed228();
              pppppplVar30 = pppppplVar38;
            }
            goto LAB_1078ea7b0;
          }
          lStack_7a8 = lVar12 + 1;
          pppppplVar56 = pppppplVar1;
        }
      }
    }
  }
  func_0x000107913564(uStack_80);
  if (!(bool)uVar21) {
    ___stack_chk_fail();
    ppppplVar48 = *pppppplVar34;
    ppppplVar41 = *pppppplVar30;
    if ((long)ppppplVar48 < (long)*pppppplVar30) {
      *pppppplVar30 = ppppplVar48;
      ppppplVar41 = ppppplVar48;
    }
    ppppplVar57 = pppppplVar30[2];
    if ((long)pppppplVar30[2] < (long)ppppplVar48) {
      pppppplVar30[2] = ppppplVar48;
      ppppplVar57 = ppppplVar48;
    }
    ppppplVar49 = pppppplVar34[1];
    ppppplVar48 = pppppplVar30[1];
    if ((long)ppppplVar49 < (long)pppppplVar30[1]) {
      pppppplVar30[1] = ppppplVar49;
      ppppplVar48 = ppppplVar49;
    }
    ppppplVar32 = pppppplVar30[3];
    if ((long)pppppplVar30[3] < (long)ppppplVar49) {
      pppppplVar30[3] = ppppplVar49;
      ppppplVar32 = ppppplVar49;
    }
    ppppplVar49 = pppppplVar34[2];
    if ((long)ppppplVar49 < (long)ppppplVar41) {
      *pppppplVar30 = ppppplVar49;
    }
    if ((long)ppppplVar57 < (long)ppppplVar49) {
      pppppplVar30[2] = ppppplVar49;
    }
    ppppplVar41 = pppppplVar34[3];
    if ((long)ppppplVar41 < (long)ppppplVar48) {
      pppppplVar30[1] = ppppplVar41;
    }
    if ((long)ppppplVar32 < (long)ppppplVar41) {
      pppppplVar30[3] = ppppplVar41;
    }
    return;
  }
  return;
}



/* Entry: 1078eb610; end: 1078eb63b;  */

void FUN_1078eb610(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078ebb44; end: 1078ebb5f;  */

void FUN_1078ebb44(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x000107913724();
  func_0x0001078eb44c();
  func_0x000107913740();
  func_0x0001078eb44c();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x0001078eb7f8;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x0001078eb770:
    func_0x000107913f30();
    func_0x0001078eb8f8();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto code_r0x0001078eb770;
    func_0x000107914c84();
    func_0x0001078eb95c();
    func_0x000107915ee0();
    FUN_1078eb610();
    func_0x00010791354c();
    func_0x0001078eb954();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107914c84();
      func_0x0001078eb95c();
      func_0x000107913880();
      func_0x0001078eb954();
      func_0x000107913894();
      func_0x0001078eb954();
      goto code_r0x0001078eb7f8;
    }
  }
  func_0x000107913f20();
  func_0x0001078eb8f8();
  func_0x000107913f10();
  func_0x0001078eb8f8();
code_r0x0001078eb7f8:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107915ee0();
      func_0x0001078eb95c();
      func_0x000107913a34();
      func_0x0001078eb954();
      func_0x000107913650();
      func_0x0001078eb954();
    }
    else {
      func_0x000107914708();
      func_0x0001078eb8f8();
      func_0x000107913ec0();
      func_0x0001078eb8f8();
    }
  }
  func_0x000107914d34(0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x0001079139c4();
    func_0x0001078eb954();
  }
  else {
    func_0x0001079146f8();
    func_0x0001078eb8f8();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078eb954();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078eb8f8();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078ebe90; end: 1078ebf2b;  */

undefined8 * FUN_1078ebe90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 4) == '\x01') {
    puVar2 = (undefined8 *)param_3[3];
  }
  else {
    plVar3 = (long *)*param_3;
    puVar2 = (undefined8 *)(param_3[2] + 0x10);
    puVar4 = (undefined8 *)plVar3[1];
    puVar1 = param_3;
    if (puVar2 == puVar4) {
      puVar2 = (undefined8 *)(*plVar3 + 0x10);
    }
    while( true ) {
      func_0x000107914c6c(param_1,param_2,*puVar2,puVar2[1]);
      func_0x0001078ea40c();
      if ((int)puVar1 == 0) break;
      puVar2 = puVar2 + 2;
      if (puVar2 == puVar4) {
        puVar2 = (undefined8 *)(*plVar3 + 0x10);
      }
    }
    param_3[3] = puVar2;
    *(undefined1 *)(param_3 + 4) = 1;
  }
  return puVar2;
}



/* Entry: 1078ec478; end: 1078ec92f;  */

/* WARNING: Possible PIC construction at 0x0001078ec60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ec654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ec610) */
/* WARNING: Removing unreachable block (ram,0x0001078ec658) */

ulong * FUN_1078ec478(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                     long param_6,ulong *param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long *plVar27;
  undefined1 uVar28;
  uint uVar29;
  uint extraout_w8;
  uint uVar30;
  uint uVar31;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *unaff_x19;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  double dVar35;
  ulong uVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  func_0x000107915f10();
  plVar27 = param_2;
  lVar21 = param_4;
  lVar22 = param_5;
  lVar23 = param_6;
  puVar25 = param_7;
  func_0x000107913c90();
  uStack_160 = lVar21 - lVar23;
  lStack_158 = (long)puVar25 - lVar23;
  uStack_18 = extraout_x8_00;
  func_0x0001078ec2fc(&uStack_160);
  lStack_180 = param_5 - param_6;
  lStack_178 = (long)puVar25 - lVar23;
  func_0x0001078ec2fc(&lStack_180);
  lStack_1a0 = param_6 - param_4;
  lStack_198 = lVar22 - lVar21;
  func_0x0001078ec2fc(&lStack_1a0);
  lStack_1c0 = (long)param_7 - param_4;
  lStack_1b8 = lVar22 - lVar21;
  func_0x0001078ec2fc(&lStack_1c0);
  lVar21 = param_4;
  func_0x000107917c4c();
  lVar22 = param_5;
  func_0x000107917c4c();
  lVar23 = param_6;
  func_0x000107917c98();
  uVar19 = (uint)lVar23;
  puVar25 = param_7;
  func_0x000107917c98();
  uVar20 = (uint)puVar25;
  uVar37 = 1;
  uVar36 = 0;
  uVar33 = (uint)lVar21;
  uVar29 = uVar33 - 1;
  uVar34 = (ulong)uVar29;
  if (uVar29 == 0) {
LAB_1078ec558:
    lStack_158 = 1;
    puVar25 = &uStack_160;
    uStack_160 = uVar36;
    func_0x0001078ec2fc();
    uVar37 = 1;
    uVar36 = 0;
    func_0x000107917f0c();
  }
  else if (uVar33 == 3) {
    uVar36 = 1;
    goto LAB_1078ec558;
  }
  uVar32 = (uint)lVar22;
  uVar5 = uVar32 - 1;
  if (uVar32 == 1) {
    lStack_180 = 0;
LAB_1078ec598:
    lStack_178 = 1;
    func_0x0001078ec2fc(&lStack_180);
    func_0x000107917f0c(1);
LAB_1078ec5b0:
    uVar30 = (uint)(param_4 < param_5);
    if (param_5 < param_4) {
      uVar30 = 0xffffffff;
    }
    uVar31 = (uint)(param_6 < (long)param_7);
    if ((long)param_7 < param_6) {
      uVar31 = 0xffffffff;
    }
    puVar25 = &uStack_148;
    func_0x0001078ec2c4();
    uStack_48 = 1;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 1;
    uStack_28 = 0;
    if (uVar29 < 3) {
      uStack_138 = ((undefined8 *)*param_2)[1];
      uStack_140 = *(undefined8 *)*param_2;
      puVar25 = &uStack_120;
      goto code_r0x0001078ec930;
    }
    if (uVar19 == 2) {
      func_0x000107915830(&uStack_148);
      goto code_r0x0001078ec930;
    }
    if (uVar5 < 3) {
      func_0x000107915830(&uStack_148);
      func_0x0001078ec9e8();
      *(undefined1 *)(uVar34 + 0x58) = 1;
      *(undefined8 *)(uVar34 + 0x30) = uStack_68;
      *(undefined8 *)(uVar34 + 0x28) = uStack_70;
      *(undefined8 *)(uVar34 + 0x38) = uStack_60;
      *(long *)(uVar34 + 0x48) = lStack_178;
      *(long *)(uVar34 + 0x40) = lStack_180;
      *(undefined8 *)(uVar34 + 0x50) = uStack_170;
      func_0x0001078ec9e8(&uStack_70);
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      uStack_40 = uStack_60;
    }
    uVar29 = (uint)(uVar5 < 3);
    if (uVar20 == 2 && uVar29 < 2) {
      func_0x000107915830(&uStack_148);
      func_0x0001078ec9e8();
      *(undefined1 *)(uVar34 + 0x58) = 1;
      *(long *)(uVar34 + 0x30) = lStack_1b8;
      *(long *)(uVar34 + 0x28) = lStack_1c0;
      func_0x000107915c64(uStack_1b0);
    }
    if (uVar29 == 2) {
      puVar24 = &uStack_38;
      func_0x0001078eca54(puVar24,&uStack_50);
      uVar11 = uStack_f8;
      uVar10 = uStack_100;
      uVar9 = uStack_108;
      uVar8 = uStack_110;
      uVar7 = uStack_118;
      uVar34 = uStack_120;
      uVar6 = uStack_138;
      uVar37 = uStack_140;
      if ((int)puVar24 != 0) {
        uStack_118 = uStack_e0;
        uStack_120 = uStack_e8;
        uStack_108 = uStack_d0;
        uStack_110 = uStack_d8;
        uStack_f8 = uStack_c0;
        uStack_100 = uStack_c8;
        uStack_f0 = uStack_b8;
        uStack_d0 = uVar9;
        uStack_d8 = uVar8;
        uStack_c0 = uVar11;
        uStack_c8 = uVar10;
        uStack_e0 = uVar7;
        uStack_e8 = uVar34;
        uStack_68 = uStack_138;
        uStack_70 = uStack_140;
        uStack_138 = uStack_128;
        uStack_140 = uStack_130;
        uStack_128 = uVar6;
        uStack_130 = uVar37;
      }
    }
    uVar1 = uVar20 & 0xfffffffd;
    iVar3 = -(uint)(uVar1 != 1);
    bVar14 = uVar19 - 4 < 0xfffffffd;
    bVar16 = (uVar19 & 0xfffffffd) != 1;
    bVar2 = bVar14;
    if (uVar20 == 2) {
      iVar3 = 1;
      bVar2 = 0xfffffffc < uVar19 - 4 && bVar16;
    }
    uVar19 = uVar32 & 0xfffffffd;
    cVar13 = !bVar16 && !bVar14;
    if (uVar1 == 1) {
      bVar2 = (bool)cVar13;
    }
    if (uVar1 == 1 && uVar20 - 1 < 3) {
      cVar13 = bVar2 + '\x01';
    }
    iVar4 = -(uint)(uVar19 != 1);
    bVar15 = uVar33 - 4 < 0xfffffffd;
    bVar17 = (uVar33 & 0xfffffffd) != 1;
    bVar16 = bVar15;
    if (uVar32 == 2) {
      iVar4 = 1;
      bVar16 = 0xfffffffc < uVar33 - 4 && bVar17;
    }
    cVar12 = !bVar17 && !bVar15;
    if (uVar19 == 1) {
      bVar16 = (bool)cVar12;
    }
    if (uVar19 == 1 && uVar5 < 3) {
      cVar12 = bVar16 + '\x01';
    }
    uStack_148 = (ulong)uVar29;
    puVar25 = (ulong *)0x63;
    *(undefined1 *)(unaff_x19 + 0x13) = 99;
    *(bool *)((long)unaff_x19 + 0x99) = uVar30 != uVar31;
    *(undefined8 *)((long)unaff_x19 + 0xb4) = 0;
    *(undefined8 *)((long)unaff_x19 + 0xac) = 0;
    *(undefined8 *)((long)unaff_x19 + 0xa4) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x9c) = 0;
    *(int *)((long)unaff_x19 + 0xbc) = iVar4;
    *(int *)(unaff_x19 + 0x18) = iVar3;
    if (2 < uVar5) {
      bVar15 = bVar16 == false;
    }
    if (2 < uVar20 - 1) {
      bVar14 = bVar2 == false;
    }
    if (((cVar12 == '\x01' && cVar13 == '\x01') && (bVar15)) && (bVar14)) {
      if (uVar30 == uVar31) {
        uVar28 = 0x61;
        uVar18 = true;
      }
      else {
        uVar18 = iVar4 == 0;
        uVar28 = 0x74;
        if (!(bool)uVar18) {
          uVar28 = 0x66;
        }
      }
LAB_1078ec908:
      *(undefined1 *)(unaff_x19 + 0x13) = uVar28;
    }
    else {
      uVar18 = cVar12 == '\x02' && cVar13 == '\x02';
      if (cVar12 == '\x02' && cVar13 == '\x02') {
        uVar28 = 0x65;
        goto LAB_1078ec908;
      }
    }
    func_0x000107917f58(99,&uStack_148);
    func_0x000107913564(uStack_18);
    if ((bool)uVar18) {
      return puVar25;
    }
  }
  else {
    if (uVar32 == 3) {
      lStack_180 = 1;
      goto LAB_1078ec598;
    }
    uVar18 = false;
    if ((uVar33 != 0 || uVar32 != 0) &&
       (uVar18 = 3 < uVar33 && uVar32 == 4, 3 >= uVar33 || uVar32 < 4)) goto LAB_1078ec5b0;
    func_0x000107913564(uStack_18);
    if ((bool)uVar18) {
      func_0x000107913ca4();
      func_0x0001078ec2c4();
      func_0x000107916388();
      *(undefined8 *)((long)unaff_x19 + 0xa2) = uVar37;
      *(ulong *)((long)unaff_x19 + 0x9a) = uVar36;
      func_0x000107918104(100);
      func_0x000107913564(extraout_x8);
      if ((bool)uVar18) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      dVar35 = (double)(long)unaff_x19;
      dVar38 = (double)(long)plVar27;
      dVar39 = (double)param_3;
      func_0x000107917da8();
      cVar13 = NAN(dVar35);
      uVar18 = dVar35 == 0.0;
      cVar12 = dVar35 < 0.0;
      if (!(bool)uVar18) {
        func_0x000107915fcc();
        if (cVar12 == cVar13) {
          uVar29 = 0xffffffff;
          if (0.0 < dVar35) {
            uVar29 = 1;
          }
          return (ulong *)(ulong)uVar29;
        }
        func_0x000107914b3c();
        uVar29 = extraout_w8;
        if (!(bool)uVar18 && cVar12 == cVar13) {
          uVar29 = 1;
        }
        if (dVar38 < dVar39) {
          return (ulong *)(ulong)uVar29;
        }
      }
      return (ulong *)0x0;
    }
  }
  ___stack_chk_fail();
code_r0x0001078ec930:
  puVar26 = puVar25;
  if (((bRam0000000113726a70 & 1) == 0) &&
     (func_0x000107917fa8(), puVar26 = unaff_x19, (int)puVar25 != 0)) {
    uRam0000000113726b38 = 1;
    uRam0000000113726b30 = 0;
    func_0x0001078ec2fc();
    ___cxa_guard_release(0x113726a70);
  }
  func_0x0001079184cc(0x113726b30);
  return puVar26;
}



/* Entry: 1078ecd48; end: 1078ecd5f;  */

void FUN_1078ecd48(void)

{
  __ZNSt11logic_errorC2ERKS_();
  func_0x00010791750c();
  return;
}



/* Entry: 1078ecea8; end: 1078eced3;  */

long FUN_1078ecea8(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt12domain_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 1078ed2fc; end: 1078ed377;  */

void FUN_1078ed2fc(void)

{
  bool bVar1;
  int extraout_w8;
  long unaff_x20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x0001079189a8();
  func_0x000107914b5c();
  func_0x000107915818();
  for (; bVar1 = unaff_x20 == 8, !bVar1; unaff_x20 = unaff_x20 + 4) {
    func_0x00010791784c();
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000018;
    if ((bVar1) || (uVar2 = in_stack_00000000, uVar3 = in_stack_00000008, extraout_w8 == 1)) {
      in_stack_00000020 = uVar2;
      in_stack_00000028 = uVar3;
      func_0x0001078ec2fc(&stack0x00000020);
      func_0x000107916268();
    }
    else {
      uVar2 = unaff_x24;
      if (unaff_x20 != 0) {
        uVar2 = unaff_x23;
      }
      func_0x000107915768(uVar2);
    }
  }
  return;
}



/* Entry: 1078eda8c; end: 1078eda97;  */

void FUN_1078eda8c(double *param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107913ad0();
  if (*(char *)(param_2 + 200) == '\x01') {
    dVar3 = *(double *)(param_2 + 0xa8);
    dVar1 = *param_1;
    if (dVar3 < *param_1) {
      *param_1 = dVar3;
      dVar1 = dVar3;
    }
    dVar2 = param_1[2];
    if (param_1[2] < dVar3) {
      param_1[2] = dVar3;
      dVar2 = dVar3;
    }
    dVar5 = *(double *)(param_2 + 0xb0);
    dVar3 = param_1[1];
    if (dVar5 < param_1[1]) {
      param_1[1] = dVar5;
      dVar3 = dVar5;
    }
    dVar4 = param_1[3];
    if (param_1[3] < dVar5) {
      param_1[3] = dVar5;
      dVar4 = dVar5;
    }
    dVar5 = *(double *)(param_2 + 0xb8);
    if (dVar5 < dVar1) {
      *param_1 = dVar5;
    }
    if (dVar2 < dVar5) {
      param_1[2] = dVar5;
    }
    dVar1 = *(double *)(param_2 + 0xc0);
    if (dVar1 < dVar3) {
      param_1[1] = dVar1;
    }
    if (dVar4 < dVar1) {
      param_1[3] = dVar1;
    }
    return;
  }
  return;
}



/* Entry: 1078edf10; end: 1078edf2f;  */

void FUN_1078edf10(void)

{
  func_0x000107913928();
  func_0x0001078ee048();
  func_0x000107917014();
  return;
}



/* Entry: 1078ee07c; end: 1078ee0c3;  */

void FUN_1078ee07c(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078eea1c; end: 1078eea8f;  */

ulong FUN_1078eea1c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x21;
  long lVar12;
  long unaff_x22;
  long lVar13;
  long lStack_40;
  ulong uStack_38;
  
  func_0x000107914c78();
  lVar13 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(param_2 + 0x20);
  uVar8 = lVar13 + 8;
  func_0x0001078eeda4(uVar8,lVar12 + 8);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(lVar13 + 8);
    lVar7 = *(long *)(lVar12 + 8);
    bVar4 = SBORROW8(lVar6,lVar7);
    bVar5 = lVar6 - lVar7 < 0;
    if (lVar6 == lVar7) {
      lVar6 = *(long *)(lVar13 + 0x10);
      lVar7 = *(long *)(lVar12 + 0x10);
      bVar4 = SBORROW8(lVar6,lVar7);
      bVar5 = lVar6 - lVar7 < 0;
      if (lVar6 == lVar7) {
        lVar6 = *(long *)(lVar13 + 0x18);
        lVar7 = *(long *)(lVar12 + 0x18);
        bVar4 = SBORROW8(lVar6,lVar7);
        bVar5 = lVar6 - lVar7 < 0;
        if (lVar6 == lVar7) {
          lVar6 = *(long *)(lVar13 + 0x28);
          lVar7 = *(long *)(lVar12 + 0x28);
          bVar4 = SBORROW8(lVar6,lVar7);
          bVar5 = lVar6 - lVar7 < 0;
          if (lVar6 == lVar7) {
            bVar4 = SBORROW8(*(long *)(lVar13 + 0x20),*(long *)(lVar12 + 0x20));
            bVar5 = *(long *)(lVar13 + 0x20) - *(long *)(lVar12 + 0x20) < 0;
          }
        }
      }
    }
    return (ulong)(bVar5 != bVar4);
  }
  uVar8 = lVar13 + 0x30;
  lVar12 = lVar12 + 0x30;
  func_0x0001078eee50();
  if ((uVar8 & 1) != 0) {
    func_0x0001079151cc();
    return uVar8;
  }
  func_0x000107915fb0();
  if (50.0 <= ABS(*(double *)(uVar8 + 0x10) - *(double *)(lVar12 + 0x10))) {
    return (ulong)(*(double *)(uVar8 + 0x10) < *(double *)(lVar12 + 0x10));
  }
  func_0x000107916810();
  func_0x00010791723c();
  bVar5 = false;
  lVar12 = 0;
  if (unaff_x21 != 0) {
    lVar12 = unaff_x22 / (long)unaff_x21;
  }
  uVar8 = unaff_x22 - lVar12 * unaff_x21;
  lVar13 = 0;
  if (uStack_38 != 0) {
    lVar13 = lStack_40 / (long)uStack_38;
  }
  uVar10 = lStack_40 - lVar13 * uStack_38;
  uVar11 = (long)uVar8 >> 0x3f;
  uVar9 = 0;
  if (unaff_x21 != 0) {
    uVar9 = (((uVar8 & (uVar11 ^ 0xffffffffffffffff)) - uVar8) + uVar11) / unaff_x21;
  }
  lVar12 = lVar12 - (uVar9 - uVar11);
  uVar1 = (long)uVar10 >> 0x3f;
  uVar3 = 0;
  if (uStack_38 != 0) {
    uVar3 = (((uVar10 & (uVar1 ^ 0xffffffffffffffff)) - uVar10) + uVar1) / uStack_38;
  }
  lVar13 = lVar13 - (uVar3 - uVar1);
  uVar8 = uVar8 + (uVar9 - uVar11) * unaff_x21;
  uVar11 = uVar10 + (uVar3 - uVar1) * uStack_38;
  while( true ) {
    if (lVar12 != lVar13) {
      bVar4 = lVar12 < lVar13;
      if (bVar5) {
        bVar4 = lVar13 < lVar12;
      }
      return (ulong)bVar4;
    }
    if ((uVar8 == 0) || (uVar11 == 0)) break;
    bVar5 = (bool)(bVar5 ^ 1);
    lVar12 = 0;
    if (uVar8 != 0) {
      lVar12 = (long)unaff_x21 / (long)uVar8;
    }
    uVar9 = unaff_x21 - lVar12 * uVar8;
    lVar13 = 0;
    if (uVar11 != 0) {
      lVar13 = (long)uStack_38 / (long)uVar11;
    }
    uVar10 = uStack_38 - lVar13 * uVar11;
    unaff_x21 = uVar8;
    uStack_38 = uVar11;
    uVar8 = uVar9;
    uVar11 = uVar10;
  }
  uVar2 = 0;
  if (uVar8 != uVar11) {
    uVar2 = (uint)((uVar8 != 0) != !bVar5);
  }
  return (ulong)uVar2;
}



/* Entry: 1078eefe8; end: 1078ef0b3;  */

long * FUN_1078eefe8(long *param_1)

{
  bool bVar1;
  long extraout_x8;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x21;
  long lVar4;
  
  func_0x000107914d70();
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    lVar4 = *unaff_x21;
    do {
      while( true ) {
        lVar3 = plVar2[4];
        bVar1 = unaff_x21[1] < plVar2[5];
        if (lVar4 != lVar3) {
          bVar1 = lVar4 < lVar3;
        }
        if (!bVar1) break;
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_1078ef07c;
      }
      bVar1 = plVar2[5] < unaff_x21[1];
      if (lVar4 != lVar3) {
        bVar1 = lVar3 < lVar4;
      }
      if (!bVar1) goto LAB_1078ef0a8;
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
LAB_1078ef07c:
  func_0x000107914cc4();
  lVar4 = *unaff_x21;
  param_1[5] = unaff_x21[1];
  param_1[4] = lVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  func_0x000107913628();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  plVar2 = param_1;
LAB_1078ef0a8:
  return plVar2 + 6;
}



/* Entry: 1078ef4dc; end: 1078ef963;  */

/* WARNING: Possible PIC construction at 0x0001078ef534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ef540) */
/* WARNING: Removing unreachable block (ram,0x0001078ef538) */
/* WARNING: Removing unreachable block (ram,0x0001078ef55c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef574) */
/* WARNING: Removing unreachable block (ram,0x0001078ef584) */
/* WARNING: Removing unreachable block (ram,0x0001078ef654) */
/* WARNING: Removing unreachable block (ram,0x0001078ef674) */
/* WARNING: Removing unreachable block (ram,0x0001078ef678) */
/* WARNING: Removing unreachable block (ram,0x0001078ef684) */
/* WARNING: Removing unreachable block (ram,0x0001078ef664) */
/* WARNING: Removing unreachable block (ram,0x0001078ef668) */
/* WARNING: Removing unreachable block (ram,0x0001078ef670) */
/* WARNING: Removing unreachable block (ram,0x0001078ef694) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6ac) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6b0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6e0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef704) */
/* WARNING: Removing unreachable block (ram,0x0001078ef710) */
/* WARNING: Removing unreachable block (ram,0x0001078ef57c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef594) */
/* WARNING: Removing unreachable block (ram,0x0001078ef59c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5cc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5b4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5bc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5dc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5e4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef614) */
/* WARNING: Removing unreachable block (ram,0x0001078ef620) */
/* WARNING: Removing unreachable block (ram,0x0001078ef624) */
/* WARNING: Removing unreachable block (ram,0x0001078ef62c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef720) */
/* WARNING: Removing unreachable block (ram,0x0001078ef728) */
/* WARNING: Removing unreachable block (ram,0x0001078ef640) */
/* WARNING: Removing unreachable block (ram,0x0001078ef644) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5ec) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef600) */
/* WARNING: Removing unreachable block (ram,0x0001078ef610) */

void FUN_1078ef4dc(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 uVar7;
  long extraout_x10;
  undefined8 extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  ulong extraout_x12_00;
  long extraout_x14;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x26;
  undefined8 *puVar10;
  undefined8 unaff_x30;
  undefined *puVar11;
  undefined8 in_register_00005008;
  undefined8 uVar12;
  
  func_0x0001079171b0();
  func_0x000107913e28();
  func_0x000107913ca4();
  func_0x000107917624();
  func_0x000107916210();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078ef740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8c8)[unaff_x26] * 4 + 0x1078ef744))();
    return;
  }
  if ((long)extraout_x8_00 < 0x240) {
    bVar3 = unaff_x20 == unaff_x19;
    if ((param_5 & 1) == 0) {
      lVar5 = unaff_x20;
      if (!bVar3) {
        while( true ) {
          unaff_x20 = unaff_x20 + 0x18;
          bVar3 = true;
          if (lVar5 + 0x18 == unaff_x19) break;
          lVar8 = *(long *)(lVar5 + 0x28);
          lVar9 = *(long *)(lVar5 + 0x10);
          cVar1 = SBORROW8(lVar8,lVar9);
          cVar2 = lVar8 - lVar9 < 0;
          uVar4 = lVar8 == lVar9;
          lVar5 = lVar5 + 0x18;
          if (lVar9 < lVar8) {
            func_0x0001079160f4(unaff_x20);
            do {
              func_0x000107916b2c();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x00010791627c();
            lVar5 = extraout_x9_03;
            unaff_x20 = extraout_x8_02;
          }
        }
      }
    }
    else if (!bVar3) {
      lVar5 = 0;
      while( true ) {
        lVar8 = unaff_x20 + 0x18;
        bVar3 = true;
        if (lVar8 == unaff_x19) break;
        if (*(long *)(unaff_x20 + 0x10) < *(long *)(unaff_x20 + 0x28)) {
          func_0x0001079160f4(lVar5);
          do {
            func_0x000107917a20();
            if (extraout_x11 == 0) break;
          } while (*(long *)(extraout_x12 + -8) < extraout_x10);
          func_0x00010791627c();
          lVar5 = extraout_x8_01;
          lVar8 = extraout_x9;
        }
        lVar5 = lVar5 + 0x18;
        unaff_x20 = lVar8;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      puVar10 = (undefined8 *)(unaff_x20 + (unaff_x26 >> 1) * 0x18);
      if (extraout_x8_00 < 0xc01) {
        func_0x000107915378();
        puVar11 = (undefined *)0x1078ef574;
      }
      else {
        func_0x000107914c3c();
        puVar11 = (undefined *)0x1078ef538;
        puVar10 = param_2;
      }
      goto code_r0x0001078ef964;
    }
    bVar3 = unaff_x20 == unaff_x19;
    if (!bVar3) {
      func_0x0001079181fc();
      lVar5 = 0;
      do {
        func_0x000107914c3c();
        func_0x0001078efbe0();
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      for (; bVar3 = unaff_x26 == 2, 1 < (long)unaff_x26; unaff_x26 = unaff_x26 - 1) {
        func_0x0001079169b0();
        do {
          func_0x0001079161b0();
          cVar2 = SBORROW8(extraout_x12_00,unaff_x26);
          lVar5 = extraout_x12_00 - unaff_x26;
          bVar3 = extraout_x12_00 == unaff_x26;
          if ((long)extraout_x12_00 < (long)unaff_x26) {
            lVar8 = *(long *)(extraout_x14 + 0x28);
            lVar9 = *(long *)(extraout_x14 + 0x40);
            cVar2 = SBORROW8(lVar8,lVar9);
            lVar5 = lVar8 - lVar9;
            bVar3 = lVar8 == lVar9;
          }
          cVar1 = lVar5 < 0;
          func_0x000107916f70();
        } while (bVar3 || cVar1 != cVar2);
        unaff_x19 = unaff_x19 + -0x18;
        cVar1 = SBORROW8(extraout_x9_00,unaff_x19);
        cVar2 = extraout_x9_00 - unaff_x19 < 0;
        uVar4 = extraout_x9_00 == unaff_x19;
        if ((bool)uVar4) {
          func_0x00010791511c();
        }
        else {
          func_0x000107915bd4();
          if ((cVar2 == cVar1) && (func_0x000107916b4c(), !(bool)uVar4 && cVar2 == cVar1)) {
            in_register_00005008 = extraout_x9_01[1];
            param_1 = *extraout_x9_01;
            do {
              func_0x0001079172c0();
              if (extraout_x11_00 == 0) break;
              func_0x0001079179d8();
            } while (!(bool)uVar4 && cVar2 == cVar1);
            func_0x0001079176b4();
            *(undefined8 *)(extraout_x9_02 + 0x10) = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x000107913564(extraout_x8);
  if (bVar3) {
    func_0x000107915868(unaff_x30);
    return;
  }
  puVar11 = &SUB_1078ef964;
  ___stack_chk_fail();
  puVar10 = param_2;
code_r0x0001078ef964:
  lVar5 = *(long *)(param_3 + 0x10);
  if ((long)puVar10[2] < lVar5) {
    if (lVar5 < (long)param_4[2]) {
      uVar6 = puVar10[2];
      in_register_00005008 = puVar10[1];
      param_1 = *puVar10;
      uVar7 = param_4[2];
      uVar12 = *param_4;
      puVar10[1] = param_4[1];
      *puVar10 = uVar12;
      puVar10[2] = uVar7;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(puVar11);
      uVar6 = extraout_x8_04;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar6;
  }
  else if (lVar5 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_03;
    if ((long)puVar10[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078efde4; end: 1078efe27;  */

void FUN_1078efde4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 == 0) {
    *param_1 = plVar3;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  param_1[3] = param_2[3];
  return;
}



/* Entry: 1078f011c; end: 1078f017b;  */

void FUN_1078f011c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[2];
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      if (puVar3 == puVar2) {
        *puVar1 = 0;
        puVar2 = (undefined8 *)puVar1[1];
      }
      else {
        puVar1[1] = 0;
      }
      if (puVar2 != (undefined8 *)0x0) {
        func_0x000104c04430();
        puVar1 = puVar2;
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1078f0a80; end: 1078f0acb;  */

/* WARNING: Possible PIC construction at 0x0001078f0aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f0aa4) */
/* WARNING: Removing unreachable block (ram,0x0001078f0ac4) */
/* WARNING: Removing unreachable block (ram,0x000107913ac4) */
/* WARNING: Removing unreachable block (ram,0x0001078f0aa8) */

undefined8 FUN_1078f0a80(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x000107914658();
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar1 = (long *)(*param_1 + param_3[1] * 0x20);
  lVar2 = *plVar1;
  uVar4 = (plVar1[1] - lVar2 >> 4) - 1;
  lVar5 = 0;
  if (uVar4 != 0) {
    lVar5 = param_3[3] / (long)uVar4;
  }
  lVar5 = param_3[3] - lVar5 * uVar4;
  puVar3 = (undefined8 *)(lVar2 + ((uVar4 & lVar5 >> 0x3f) + lVar5) * 0x10);
  uVar6 = *puVar3;
  param_4[1] = puVar3[1];
  *param_4 = uVar6;
  return 1;
}



/* Entry: 1078f0d9c; end: 1078f0e5f;  */

void FUN_1078f0d9c(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_0x000107915938();
  iVar1 = param_1;
  func_0x000107913aec();
  func_0x0001078e9d94();
  if (param_1 == 0 && iVar1 == 0) {
    func_0x000107913c44();
    func_0x000107915480();
    func_0x000107913aec();
    FUN_1078f1930();
  }
  else {
    iVar2 = iVar1;
    if (param_1 == 0) {
      func_0x000107913c44();
      func_0x000107915480();
      if (iVar2 == -1) {
        return;
      }
    }
    if (iVar1 == 0) {
      func_0x000107913aec();
      FUN_1078f1930();
      if (iVar2 == -1) {
        return;
      }
    }
    if ((param_1 == iVar1) && (func_0x000107914cd0(), iVar2 != 0)) {
      func_0x000107915b40();
    }
  }
  return;
}



/* Entry: 1078f1930; end: 1078f19c7;  */

undefined4
FUN_1078f1930(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  param_1 = param_3 - param_1;
  dVar3 = -(param_2 - param_4);
  func_0x0001078e65dc(param_1,0);
  if (((int)param_7 == 0) || (func_0x0001078e65dc(dVar3,0), (param_7 & 1) == 0)) {
    dVar3 = (param_4 * (param_2 - param_4) - param_3 * param_1) +
            param_6 * dVar3 + param_5 * param_1;
    uVar2 = 0xffffffff;
    if (0.0 < dVar3) {
      uVar2 = 1;
    }
    uVar1 = 0;
    if (dVar3 != 0.0) {
      uVar1 = uVar2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1078f1dcc; end: 1078f1e93;  */

void FUN_1078f1dcc(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_1078f1dcc();
    FUN_1078f1dcc(*(undefined8 *)(unaff_x19 + 8));
    func_0x000107917cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078f31e4; end: 1078f3293;  */

bool FUN_1078f31e4(ulong param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long extraout_x9;
  long extraout_x11;
  
  func_0x000107913cd4();
  func_0x000107917b70();
  if ((param_1 & 1) == 0) {
    func_0x000107914938();
    func_0x000107914a4c();
    func_0x0001079173dc();
    bVar1 = (bool)in_ZR && extraout_x9 == extraout_x11;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1078f3664; end: 1078f3c2f;  */

void FUN_1078f3664(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong extraout_x8;
  undefined1 *puVar8;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long lVar9;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  undefined1 *unaff_x24;
  undefined1 *unaff_x26;
  ulong uVar11;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined8 unaff_x30;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [112];
  undefined1 auStack_f8 [120];
  
  func_0x0001079175f0();
  func_0x0001079141cc();
  do {
    func_0x0001079177bc();
LAB_1078f368c:
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f3964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)unaff_x27[0x10dedb8ec] * 4 + 0x1078f3968))();
      return;
    }
    uVar1 = 0xa7e < extraout_x8;
    if ((long)extraout_x8 < 0xa80) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 != unaff_x24) {
          puVar5 = unaff_x21 + -0x70;
          while (unaff_x21 = unaff_x21 + 0x70, unaff_x21 != unaff_x24) {
            func_0x000107913f88();
            func_0x000107915848();
            func_0x0001078f3c30();
            if ((int)param_1 != 0) {
              func_0x000107913d48(auStack_f8);
              puVar6 = puVar5;
              do {
                param_1 = puVar6;
                func_0x000107914a98(param_1 + 0xe0,param_1 + 0x70);
                func_0x000107913f88();
                uVar11 = 0;
                func_0x00010791648c();
                puVar6 = param_1 + -0x70;
              } while ((uVar11 & 1) != 0);
              param_1 = param_1 + 0x70;
              func_0x000107914a98(param_1,auStack_f8);
            }
            puVar5 = puVar5 + 0x70;
          }
        }
        break;
      }
      if (unaff_x21 == unaff_x24) break;
      lVar9 = 0;
      puVar5 = unaff_x21;
      goto LAB_1078f3a14;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) break;
      func_0x0001079169f0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        func_0x0001078f40d8();
      }
      do {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)(unaff_x27 + -2) < 0;
        if ((long)unaff_x27 < 2) goto LAB_1078f3968;
        puVar5 = auStack_168;
        func_0x000107913cf0();
        puVar8 = (undefined1 *)0x0;
        uVar11 = (ulong)(unaff_x27 + -2) >> 1;
        puVar6 = unaff_x21;
        do {
          iVar4 = (int)puVar5;
          lVar9 = (long)puVar8 * 0x70;
          func_0x00010791419c();
          puVar7 = puVar6 + lVar9 + 0x70;
          puVar8 = unaff_x28;
          if (cVar3 != cVar2) {
            func_0x000107913f88();
            func_0x000107915320();
            func_0x0001078f3c30();
            puVar7 = (undefined1 *)(extraout_x9 + 0xe0);
            puVar8 = unaff_x24;
            if (iVar4 == 0) {
              puVar7 = puVar6 + lVar9 + 0x70;
              puVar8 = unaff_x28;
            }
          }
          func_0x000107913ce4();
          iVar4 = (int)puVar6;
          cVar2 = SBORROW8((long)puVar8,uVar11);
          cVar3 = (long)((long)puVar8 - uVar11) < 0;
          puVar5 = puVar6;
          puVar6 = puVar7;
          unaff_x28 = puVar8;
        } while ((long)puVar8 <= (long)uVar11);
        unaff_x24 = unaff_x24 + -0x70;
        if (puVar7 == unaff_x24) {
          puVar5 = auStack_168;
LAB_1078f3bbc:
          func_0x000107914a98(puVar7,puVar5);
        }
        else {
          func_0x0001079177b0();
          func_0x000107914a98();
          func_0x000107914808();
          if (0x70 < (long)(puVar7 + (0x70 - (long)unaff_x21))) {
            uVar11 = (ulong)(puVar7 + (0x70 - (long)unaff_x21)) / 0x70 - 2 >> 1;
            func_0x000107913f88();
            func_0x0001079152e8();
            func_0x0001078f3c30();
            if (iVar4 != 0) {
              func_0x000107913ce4(auStack_f8);
              puVar5 = unaff_x21 + uVar11 * 0x70;
              do {
                puVar7 = puVar5;
                func_0x000107913d48(puVar6);
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                puVar5 = unaff_x21 + uVar11 * 0x70;
                func_0x000107913f88();
                puVar8 = puVar5;
                func_0x0001078f3c30(puVar5,auStack_f8);
                puVar6 = puVar7;
              } while (((ulong)puVar8 & 1) != 0);
              puVar5 = auStack_f8;
              goto LAB_1078f3bbc;
            }
          }
        }
        unaff_x27 = unaff_x27 + -1;
      } while( true );
    }
    func_0x0001079185e8();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x000107916844();
      unaff_x27 = unaff_x20 + -0x70;
      func_0x000107916844(unaff_x21 + 0x70,unaff_x27,uStack_170);
      func_0x000107916844(unaff_x21 + 0xe0,unaff_x20 + 0x70,uStack_178);
      func_0x000107915808();
      func_0x0001078f3d34();
      func_0x000107913cf0(auStack_f8);
      func_0x000107913d48();
      func_0x000107914a80();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078f3d34();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) == 0) {
      puVar5 = unaff_x21 + -0x70;
      func_0x000107918368(unaff_x19[1]);
      func_0x0001079138a8();
      func_0x00010791648c();
      if (((ulong)puVar5 & 1) == 0) {
        param_1 = auStack_168;
        func_0x000107913cf0();
        func_0x0001079138a8();
        func_0x000107915260();
        func_0x0001078f3c30();
        puVar5 = unaff_x21;
        if (((ulong)param_1 & 1) == 0) {
          do {
            func_0x000107917870(puVar5 + 0x70);
            if ((bool)uVar1) break;
            func_0x000107913b40();
            func_0x0001078f3c30();
            puVar5 = unaff_x27;
          } while ((int)param_1 == 0);
        }
        else {
          do {
            unaff_x27 = puVar5 + 0x70;
            func_0x000107913b40();
            func_0x0001078f3c30();
            puVar5 = unaff_x27;
          } while (((ulong)param_1 & 1) == 0);
        }
        func_0x000107917738();
        puVar5 = unaff_x24;
        if (!(bool)uVar1) {
          do {
            unaff_x26 = puVar5 + -0x70;
            param_1 = auStack_168;
            func_0x000107913c20();
            func_0x00010791564c();
            puVar5 = unaff_x26;
          } while (((ulong)param_1 & 1) != 0);
        }
        while (unaff_x27 < unaff_x26) {
          func_0x000107914948();
          func_0x0001079171fc();
          func_0x000107914a98();
          puVar5 = unaff_x26;
          func_0x000107914a98(unaff_x26,auStack_f8);
          func_0x000107915de8(*unaff_x19);
          do {
            unaff_x27 = unaff_x27 + 0x70;
            func_0x000107913b40();
            func_0x0001078f3c30();
          } while ((int)puVar5 == 0);
          do {
            unaff_x26 = unaff_x26 + -0x70;
            param_1 = auStack_168;
            func_0x000107913c20();
            func_0x00010791564c();
          } while (((ulong)param_1 & 1) != 0);
        }
        unaff_x20 = unaff_x27 + -0x70;
        in_CY = unaff_x20 <= unaff_x21;
        in_ZR = unaff_x21 == unaff_x20;
        if (!(bool)in_ZR) {
          param_1 = unaff_x21;
          func_0x000107913d48();
        }
        func_0x000107914a80();
        unaff_x26 = (undefined1 *)0x0;
        goto LAB_1078f368c;
      }
    }
    else {
      func_0x000107918368(unaff_x19[1]);
    }
    func_0x000107913cf0(auStack_168);
    unaff_x27 = (undefined1 *)0x0;
    do {
      unaff_x27 = unaff_x27 + 0x70;
      puVar5 = unaff_x27 + (long)unaff_x21;
      func_0x0001079138a8(puVar5,auStack_168);
      func_0x0001078f3c30();
    } while (((ulong)puVar5 & 1) != 0);
    puVar5 = unaff_x21 + (long)unaff_x27;
    unaff_x20 = unaff_x24;
    if (unaff_x27 == (undefined1 *)0x70) {
      do {
        if (unaff_x20 <= puVar5) break;
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x20;
        func_0x00010791564c();
      } while (((ulong)puVar6 & 1) == 0);
    }
    else {
      do {
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x20;
        func_0x00010791564c();
      } while ((int)puVar6 == 0);
    }
    func_0x0001079178ac();
    while (unaff_x27 < unaff_x28) {
      func_0x000107914948();
      func_0x000107914a98(unaff_x27,unaff_x28);
      func_0x000107914a98(unaff_x28,auStack_f8);
      func_0x000107915de8(*unaff_x19);
      do {
        unaff_x27 = unaff_x27 + 0x70;
        func_0x000107913c20();
        puVar6 = unaff_x27;
        func_0x00010791564c();
      } while (((ulong)puVar6 & 1) != 0);
      do {
        unaff_x28 = unaff_x28 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x28;
        func_0x00010791564c();
      } while (((ulong)puVar6 & 1) == 0);
    }
    unaff_x28 = unaff_x27 + -0x70;
    if (unaff_x21 != unaff_x28) {
      func_0x000107915884();
      func_0x000107914a98();
    }
    param_1 = unaff_x28;
    func_0x000107914a98(unaff_x28,auStack_168);
    in_CY = unaff_x20 <= puVar5;
    in_ZR = puVar5 == unaff_x20;
    if (!(bool)in_CY) goto LAB_1078f384c;
    func_0x0001079145cc();
    func_0x0001078f3f78();
    func_0x00010791487c();
    func_0x0001078f3f78();
    if ((int)param_1 == 0) goto code_r0x0001078f3848;
    unaff_x24 = unaff_x28;
  } while (((ulong)unaff_x20 & 1) == 0);
LAB_1078f3968:
  func_0x000107914abc(unaff_x30);
  return;
LAB_1078f3a14:
  puVar5 = puVar5 + 0x70;
  if (puVar5 == unaff_x24) goto LAB_1078f3968;
  func_0x000107913f88();
  puVar6 = puVar5;
  func_0x0001078f3c30();
  if ((int)puVar6 != 0) {
    func_0x000107913ce4(auStack_f8);
    lVar10 = lVar9;
    do {
      func_0x000107914a98(unaff_x21 + lVar10 + 0x70);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -0x70;
      func_0x000107913f88();
      puVar6 = auStack_f8;
      func_0x0001078f3c30(puVar6,unaff_x21 + lVar10);
    } while (((ulong)puVar6 & 1) != 0);
    func_0x000107914a98();
  }
  lVar9 = lVar9 + 0x70;
  goto LAB_1078f3a14;
code_r0x0001078f3848:
  if (((ulong)unaff_x20 & 1) == 0) {
LAB_1078f384c:
    func_0x0001079141b4();
    FUN_1078f3664();
    unaff_x26 = (undefined1 *)0x0;
  }
  goto LAB_1078f368c;
}



/* Entry: 1078f4268; end: 1078f42b3;  */

undefined8 FUN_1078f4268(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 1078f453c; end: 1078f4587;  */

long FUN_1078f453c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x0001078e64cc(lVar1);
    }
  }
  return param_1;
}



/* Entry: 1078f49f8; end: 1078f4a9f;  */

long FUN_1078f49f8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000107914d70();
  func_0x000107915bc8();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x0001079147f8(), unaff_x22 = unaff_x20, (int)param_1 == 0) {
      func_0x0001079154bc();
      if ((int)param_1 == 0) goto LAB_1078f4a94;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078f4a48;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_00;
  }
LAB_1078f4a48:
  lVar1 = 0x98;
  __Znwm();
  func_0x0001079151e8();
  *(undefined8 *)(lVar1 + 0x30) = extraout_x8_01;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined2 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x78) = 0xbff0000000000000;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  func_0x000107913628();
  if (extraout_x8_02 != 0) {
    *unaff_x19 = extraout_x8_02;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_1078f4a94:
  return unaff_x20 + 0x38;
}



/* Entry: 1078f4c9c; end: 1078f4d47;  */

undefined8 * FUN_1078f4c9c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x38e38e38e38e38e < param_2) {
      func_0x0001078f4d48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1078f4d3c);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)(param_2 * 0x48);
    puVar3 = puVar4;
    __Znwm();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    puVar1 = puVar3 + param_2 * 9;
    param_1[2] = puVar1;
    for (; puVar4 != (undefined8 *)0x0; puVar4 = puVar4 + -9) {
      *puVar3 = 0xffffffffffffffff;
      puVar3[1] = 0xffffffffffffffff;
      puVar3[2] = 0xffffffffffffffff;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 9;
    }
    param_1[1] = puVar1;
  }
  func_0x000107914e8c();
  func_0x0001078f4d54();
  return param_1;
}



/* Entry: 1078f50ac; end: 1078f50b7;  */

void FUN_1078f50ac(ulong param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong unaff_x20;
  int unaff_w26;
  
  func_0x000107913ad0();
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    func_0x00010791744c();
    func_0x0001078edfa0();
    func_0x000107916fc0();
    if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
      func_0x00010791742c();
      in_ZR = unaff_w26 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x0001078f503c();
    }
  }
  return;
}



/* Entry: 1078f552c; end: 1078f5587;  */

void FUN_1078f552c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        func_0x0001078f4ea8();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1078f58f8; end: 1078f5973;  */

int FUN_1078f58f8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  int extraout_w8;
  int extraout_w9;
  
  if (param_2 - param_1 < 0x40) {
    return -1;
  }
  func_0x000107916af4();
  do {
    uVar1 = param_1 + 0x10;
    uVar5 = uVar1 == param_2;
    if ((bool)uVar5) break;
    func_0x000107915908();
    func_0x0001078f48b8();
    uVar4 = param_1 & 1;
    param_1 = uVar1;
  } while (uVar4 != 0);
  func_0x0001079184b8();
  iVar2 = -extraout_w9;
  if ((bool)uVar5) {
    iVar2 = extraout_w9;
  }
  iVar3 = 0;
  if (extraout_w8 == 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 1078f5cdc; end: 1078f5d37;  */

long FUN_1078f5cdc(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  func_0x000107917834();
  plVar3 = extraout_x8;
  while( true ) {
    iVar2 = (int)param_1;
    lVar4 = *plVar3;
    if (lVar4 == 0) break;
    param_1 = lVar4 + 0x20;
    func_0x000107918928();
    lVar1 = unaff_x22;
    if ((bool)in_ZR) {
      lVar1 = 0;
    }
    plVar3 = (long *)(lVar4 + lVar1);
    if ((bool)in_ZR) {
      unaff_x19 = lVar4;
    }
  }
  if ((unaff_x21 == unaff_x19) || (func_0x000107917c8c(), iVar2 != 0)) {
    unaff_x19 = unaff_x21;
  }
  return unaff_x19;
}



/* Entry: 1078f5fd4; end: 1078f601b;  */

void FUN_1078f5fd4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107914d64();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001079186b4();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      func_0x000107918860();
      while (func_0x00010791814c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x30;
        func_0x0001078e6404();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000107917c24();
  }
  func_0x00010791570c(0x30);
  return;
}



/* Entry: 1078f6428; end: 1078f6453;  */

ulong FUN_1078f6428(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 < (ulong)((long)(param_2 - param_1) / 0x18)) {
    return param_1 + param_3 * 0x18;
  }
  func_0x00010790162c();
  do {
    uVar1 = param_1;
    if (uVar1 == param_2) break;
    uVar2 = uVar1;
    func_0x0001078f6498();
    param_1 = uVar1 + 0x30;
  } while ((uVar2 & 1) != 0);
  return (ulong)(uVar1 == param_2);
}



/* Entry: 1078f8750; end: 1078f88d7;  */

void FUN_1078f8750(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  undefined8 auStack_68 [3];
  
  func_0x0001079142d0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  func_0x000107900424();
  uStack_b0 = 1;
  uStack_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  func_0x000107900424();
  puVar3 = unaff_x19 + 1;
  func_0x0001078f605c(*puVar3);
  *unaff_x19 = puVar3;
  unaff_x19[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_c0;
  do {
    if (puVar3 == &uStack_c0) {
      func_0x0001078f605c(uStack_c0);
      return;
    }
    puVar1 = unaff_x20;
    func_0x0001079005d8();
    if (unaff_x20 + 1 == puVar1) {
      bVar2 = 0;
LAB_1078f8814:
      if ((puVar3[4] == 1) || (puVar3[4] == 0)) {
        puVar1 = puVar3 + 8;
        func_0x000107900544();
        if ((int)puVar1 < 1) goto LAB_1078f8854;
      }
      else if ((bVar2 & 1) == 0) {
LAB_1078f8854:
        func_0x000107917d24(&uStack_b0,puVar3 + 7);
        func_0x0001079008bc(auStack_68,puVar3 + 0x10);
        uStack_90 = 0;
        FUN_1078f49f8();
        func_0x000107917ed4();
        puVar1 = auStack_68;
        func_0x0001078f4acc();
      }
    }
    else if (((*(byte *)(puVar1 + 7) & 1) == 0) && ((*(byte *)((long)puVar1 + 0x39) & 1) == 0)) {
      bVar2 = *(byte *)((long)puVar1 + 0x3a);
      goto LAB_1078f8814;
    }
    func_0x00010791598c();
    puVar3 = puVar1;
  } while( true );
}



/* Entry: 1078f9428; end: 1078f947f;  */

void FUN_1078f9428(ulong param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong unaff_x20;
  int unaff_w26;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    func_0x00010791743c();
    func_0x0001078eb5cc();
    func_0x000107916fb0();
    if ((unaff_w26 == 0) || ((param_1 & 1) == 0)) {
      func_0x000107916104();
      in_ZR = unaff_w26 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x0001078eb39c();
    }
  }
  return;
}



/* Entry: 1078f9728; end: 1078fa3cb;  */

/* WARNING: Possible PIC construction at 0x0001078f9848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f9984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f984c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9988) */
/* WARNING: Removing unreachable block (ram,0x0001078f99c8) */
/* WARNING: Removing unreachable block (ram,0x0001078f99d4) */
/* WARNING: Removing unreachable block (ram,0x0001078fa390) */
/* WARNING: Removing unreachable block (ram,0x0001078f98d4) */
/* WARNING: Removing unreachable block (ram,0x0001078f98e0) */
/* WARNING: Removing unreachable block (ram,0x0001078f98f8) */
/* WARNING: Removing unreachable block (ram,0x0001078f99ec) */
/* WARNING: Removing unreachable block (ram,0x0001078f99f8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a0c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a14) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a28) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a40) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a44) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a60) */
/* WARNING: Removing unreachable block (ram,0x0001078f9abc) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ad0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b2c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c84) */
/* WARNING: Removing unreachable block (ram,0x0001078f9cc8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9cd4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b40) */
/* WARNING: Removing unreachable block (ram,0x0001078f9bac) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d80) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d8c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa078) */
/* WARNING: Removing unreachable block (ram,0x0001078fa080) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d90) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f70) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f78) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f88) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fd4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fdc) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fe0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f90) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f98) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f9c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d98) */
/* WARNING: Removing unreachable block (ram,0x0001078f9da0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9bf0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c10) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c14) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c1c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c20) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c24) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c2c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fec) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ff4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ffc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa000) */
/* WARNING: Removing unreachable block (ram,0x0001078fa00c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa024) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c34) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fac) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c44) */
/* WARNING: Removing unreachable block (ram,0x0001078fa030) */
/* WARNING: Removing unreachable block (ram,0x0001078fa038) */
/* WARNING: Removing unreachable block (ram,0x0001078fa044) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c50) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c58) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c5c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa050) */
/* WARNING: Removing unreachable block (ram,0x0001078fa058) */
/* WARNING: Removing unreachable block (ram,0x0001078fa05c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa068) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c60) */
/* WARNING: Removing unreachable block (ram,0x0001078fa21c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa228) */
/* WARNING: Removing unreachable block (ram,0x0001078fa230) */
/* WARNING: Removing unreachable block (ram,0x0001078fa240) */
/* WARNING: Removing unreachable block (ram,0x0001078fa070) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c68) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c70) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c74) */
/* WARNING: Removing unreachable block (ram,0x0001078f9c7c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b48) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ce0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d70) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d78) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d7c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9cec) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e10) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e9c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ef0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fc0) */
/* WARNING: Removing unreachable block (ram,0x0001078fa090) */
/* WARNING: Removing unreachable block (ram,0x0001078f9fcc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa094) */
/* WARNING: Removing unreachable block (ram,0x0001078fa098) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0a0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ef8) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0a4) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0b4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e18) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e64) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e74) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e78) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e84) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e88) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0f8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e94) */
/* WARNING: Removing unreachable block (ram,0x0001078fa100) */
/* WARNING: Removing unreachable block (ram,0x0001078fa128) */
/* WARNING: Removing unreachable block (ram,0x0001078fa11c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa13c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9cf0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d0c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa148) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d18) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d1c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa14c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1a8) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1b0) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1c8) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1bc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1c0) */
/* WARNING: Removing unreachable block (ram,0x0001078fa1cc) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b50) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d24) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f04) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f24) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f28) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f2c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f30) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f34) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f38) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0dc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0e4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f3c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f40) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f44) */
/* WARNING: Removing unreachable block (ram,0x0001078fa29c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa2bc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa2e4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f48) */
/* WARNING: Removing unreachable block (ram,0x0001078fa31c) */
/* WARNING: Removing unreachable block (ram,0x0001078fa374) */
/* WARNING: Removing unreachable block (ram,0x0001078fa37c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d44) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d50) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d60) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b74) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dac) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dc8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dcc) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f58) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f68) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dd0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dd4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dd8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ddc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0c0) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0c8) */
/* WARNING: Removing unreachable block (ram,0x0001078fa0d4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9de0) */
/* WARNING: Removing unreachable block (ram,0x0001078f9de4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9de8) */
/* WARNING: Removing unreachable block (ram,0x0001078fa248) */
/* WARNING: Removing unreachable block (ram,0x0001078fa268) */
/* WARNING: Removing unreachable block (ram,0x0001078fa290) */
/* WARNING: Removing unreachable block (ram,0x0001078fa2ec) */
/* WARNING: Removing unreachable block (ram,0x0001078fa2fc) */
/* WARNING: Removing unreachable block (ram,0x0001078fa300) */
/* WARNING: Removing unreachable block (ram,0x0001078fa314) */
/* WARNING: Removing unreachable block (ram,0x0001078f9dec) */
/* WARNING: Removing unreachable block (ram,0x0001078f9f4c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9df0) */
/* WARNING: Removing unreachable block (ram,0x0001078fa324) */
/* WARNING: Removing unreachable block (ram,0x0001078f9df8) */
/* WARNING: Removing unreachable block (ram,0x0001078f9e00) */
/* WARNING: Removing unreachable block (ram,0x0001078fa32c) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b88) */
/* WARNING: Removing unreachable block (ram,0x0001078f9b94) */
/* WARNING: Removing unreachable block (ram,0x0001078f9ba4) */
/* WARNING: Removing unreachable block (ram,0x0001078f9d64) */
/* WARNING: Removing unreachable block (ram,0x0001078fa330) */
/* WARNING: Removing unreachable block (ram,0x0001078fa334) */
/* WARNING: Removing unreachable block (ram,0x0001078fa338) */
/* WARNING: Removing unreachable block (ram,0x0001078fa340) */
/* WARNING: Removing unreachable block (ram,0x0001078f9a58) */
/* WARNING: Removing unreachable block (ram,0x0001078fa34c) */

void FUN_1078f9728(ulong param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  bool bVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long *unaff_x19;
  long *unaff_x23;
  undefined *puVar3;
  
  func_0x000107915f10();
  func_0x000107913ca4();
  if ((((char)param_3[0xc] == '\x01') &&
      (bVar1 = param_3[10] + 1U == param_3[0xb], param_3[10] + 1U < (ulong)param_3[0xb])) ||
     (((char)param_6[0xc] == '\x01' &&
      (bVar1 = param_6[10] + 1U == param_6[0xb], param_6[10] + 1U < (ulong)param_6[0xb])))) {
    func_0x000107913564(extraout_x8);
    if (bVar1) {
      return;
    }
    puVar3 = &SUB_1078fa3cc;
    ___stack_chk_fail();
    param_3 = unaff_x19;
  }
  else {
    if (-1 < param_3[3]) {
      func_0x000107915928();
    }
    if (-1 < param_6[3]) {
      func_0x000107915928();
    }
    param_1 = param_3[8];
    puVar3 = (undefined *)0x1078f984c;
  }
  func_0x000107917a38(puVar3);
  func_0x000107915584();
  lVar2 = extraout_x8_00;
  do {
    if (*param_3 == *unaff_x23) {
code_r0x0001078fa408:
      *param_3 = lVar2;
      return;
    }
    func_0x000107916c48();
    if ((param_1 & 1) == 0) {
      lVar2 = *param_6;
      goto code_r0x0001078fa408;
    }
    func_0x000107915e90();
    lVar2 = extraout_x8_01;
  } while( true );
}



/* Entry: 1078faa9c; end: 1078faabf;  */

void FUN_1078faa9c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078fae78; end: 1078faedb;  */

void FUN_1078fae78(ulong param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107913cd4();
  func_0x000107917c40();
  if ((((param_1 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x60) & 1) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x60) & 1) == 0)) {
    FUN_1078f9728();
  }
  return;
}



/* Entry: 1078fb2ac; end: 1078fb2b3;  */

void FUN_1078fb2ac(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x0001078fb2f4;
      func_0x000107913d24();
      func_0x0001078f96f8();
      func_0x00010791354c();
      func_0x0001078fb478();
    }
    else {
code_r0x0001078fb2f4:
      func_0x000107913f30();
      func_0x0001078fb250();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078f9724();
          func_0x000107913880();
          func_0x0001078fb478();
          func_0x000107913894();
          func_0x0001078fb478();
          goto code_r0x0001078fb374;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078fb250();
    func_0x000107913f10();
    func_0x0001078fb250();
  }
code_r0x0001078fb374:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
code_r0x0001078fb3d4:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x0001078fb3dc;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078fb250();
      func_0x000107913ec0();
      func_0x0001078fb250();
      goto code_r0x0001078fb3d4;
    }
    func_0x000107915ee0();
    func_0x0001078f9724();
    func_0x000107913a34();
    func_0x0001078fb478();
    func_0x000107913650();
    func_0x0001078fb478();
code_r0x0001078fb3dc:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078fb478();
      goto code_r0x0001078fb400;
    }
  }
  func_0x0001079146f8();
  func_0x0001078fb250();
code_r0x0001078fb400:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078fb478();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078fb250();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078fbabc; end: 1078fbb1f;  */

void FUN_1078fbabc(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long in_x4;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078fba74();
  lVar4 = *(long *)(in_x4 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  cVar1 = SBORROW8(lVar4,lVar5);
  cVar2 = lVar4 - lVar5 < 0;
  bVar3 = lVar4 == lVar5;
  if ((((lVar5 < lVar4) && (func_0x000107915c28(), !bVar3 && cVar2 == cVar1)) &&
      (func_0x000107913b8c(), !bVar3 && cVar2 == cVar1)) &&
     (func_0x000107913b5c(), !bVar3 && cVar2 == cVar1)) {
    func_0x000107913dd0();
  }
  return;
}



/* Entry: 1078fc3d8; end: 1078fc4ab;  */

void FUN_1078fc3d8(void)

{
  int iVar1;
  ulong in_x3;
  
  func_0x0001079144b8();
  func_0x0001079162e8();
  iVar1 = (int)in_x3;
  func_0x000107914edc();
  func_0x0001078fc210();
  if ((in_x3 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010791360c();
      func_0x0001079156f4();
      func_0x0001078fc210();
      if (iVar1 != 0) {
        func_0x00010791345c();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x00010791345c();
      func_0x000107914edc();
      func_0x0001078fc210();
      if (iVar1 == 0) {
        return;
      }
      func_0x00010791360c();
    }
    else {
      func_0x000107914468();
    }
    func_0x0001079158c0();
  }
  return;
}



/* Entry: 1078fc810; end: 1078fc8c7;  */

void FUN_1078fc810(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0x30;
  if (param_5 != 1) {
    lVar1 = 0x38;
  }
  lVar2 = (param_2 - param_1) / 0x70;
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (param_4 < param_3) {
      if (param_3 <= lVar3 || lVar3 <= param_4) {
LAB_1078fc848:
        *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + 1;
      }
    }
    else if (param_3 <= lVar3 && lVar3 <= param_4) goto LAB_1078fc848;
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x70;
  } while( true );
}



/* Entry: 1078fd56c; end: 1078fe1d3;  */

/* WARNING: Possible PIC construction at 0x0001078fd698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fd69c) */

ulong FUN_1078fd56c(undefined8 *******param_1,undefined8 ***param_2,uint param_3,long *param_4,
                   uint *param_5,ulong *param_6,undefined8 param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  ulong *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 extraout_x8;
  ulong uVar19;
  undefined8 ***pppuVar20;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *extraout_x8_02;
  long extraout_x8_03;
  undefined8 ******ppppppuVar21;
  long extraout_x8_04;
  long lVar22;
  long extraout_x8_05;
  ulong extraout_x8_06;
  int *piVar23;
  undefined8 ******ppppppuVar24;
  undefined8 *******pppppppuVar25;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  uint uVar26;
  undefined8 *****pppppuVar27;
  long *plVar28;
  undefined8 *****pppppuVar29;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 ****ppppuVar30;
  undefined8 *******extraout_x11;
  long extraout_x11_00;
  undefined8 ***pppuVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  undefined8 ******ppppppuVar35;
  ulong uVar36;
  int iVar37;
  undefined8 ******ppppppuVar38;
  long lVar39;
  undefined4 *puVar40;
  undefined8 ******ppppppuVar41;
  undefined8 ******ppppppuVar42;
  undefined8 ******ppppppuVar43;
  undefined8 *******unaff_d12;
  undefined8 *******unaff_d15;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined1 auStack_100 [32];
  undefined8 ******ppppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  ulong uStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 ****appppuStack_38 [2];
  long lStack_28;
  undefined8 ******ppppppuStack_20;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  
  func_0x000107915964();
  pppppppuVar8 = param_1;
  func_0x000107913ca4();
  iVar7 = (int)param_7;
  uVar16 = *param_5;
  ppppppuVar24 = pppppppuVar8[9];
  pppppuVar27 = ppppppuVar24[1];
  ppppuVar30 = pppppuVar27[(ulong)((long)ppppppuVar24[4] + *param_4) >> 4];
  uVar19 = (long)ppppppuVar24[4] + *param_4 & 0xf;
  lVar34 = (long)(int)uVar16;
  ppppppuVar35 = (undefined8 ******)ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 0x11];
  uStack_10 = extraout_x8;
  if ((long)ppppppuVar35 < 0) {
    pppuVar20 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 0xf];
    if ((-1 < (long)pppuVar20) &&
       (ppppppuVar35 = (undefined8 ******)ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 0x10],
       -1 < (long)ppppppuVar35)) goto LAB_1078fd5e4;
LAB_1078fde4c:
    uVar16 = 1;
  }
  else {
    pppuVar20 = (undefined8 ***)0xffffffffffffffff;
LAB_1078fd5e4:
    *param_4 = (long)ppppppuVar35;
    ppuStack_128 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 7];
    ppuStack_130 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 6];
    ppuStack_118 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 9];
    ppuStack_120 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 8];
    ppuStack_110 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 10];
    if (-1 < (long)pppuVar20) {
      lVar39 = 0x38;
      if (ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 6] != (undefined8 ***)0x0) {
        lVar39 = 0x40;
      }
      plVar28 = (long *)(**(long **)((long)param_1 + lVar39) +
                        (long)ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 7] * 0x30);
      pppuVar14 = ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 9];
      if (-1 < (long)ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 8]) {
        plVar28 = (long *)(plVar28[3] + (long)ppppuVar30[uVar19 * 0x2f + lVar34 * 0x15 + 8] * 0x18);
      }
      uVar36 = 0;
      pppppuStack_d8 = (undefined8 *****)*plVar28;
      pppppuStack_d0 = (undefined8 *****)plVar28[1];
      ppppppuStack_e0 = (undefined8 ******)(pppppuStack_d8 + ((long)pppuVar14 + 1U) * 2);
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      uVar32 = (long)pppuVar20 +
               ((long)pppppuStack_d0 - (long)pppppuStack_d8 >> 4) + ~(ulong)pppuVar14;
      if ((long)pppuVar14 < (long)pppuVar20) {
        uVar32 = (long)pppuVar20 - ((long)pppuVar14 + 1U);
      }
      while( true ) {
        ppppppuVar24 = ppppppuStack_e0;
        uVar5 = uVar32 <= uVar36;
        in_ZR = uVar36 == uVar32;
        if (!(bool)in_ZR && (long)uVar32 <= (long)uVar36) break;
        uVar12 = *param_6;
        func_0x0001079180ec(param_6[1]);
        if ((bool)in_ZR) {
          uVar5 = 1;
          goto code_r0x0001078fe1d4;
        }
        while( true ) {
          puVar9 = param_6;
          func_0x0001078e96d4(param_6,ppppppuVar24);
          iVar7 = (int)puVar9;
          func_0x0001079180e0(param_6[1]);
          if ((!(bool)uVar5) || (func_0x0001079166b4(), iVar7 == 0)) break;
          func_0x000107916a3c(*param_6);
          func_0x0001078f3294(param_6,extraout_x8_00 + -2);
        }
        uVar36 = uVar36 + 1;
        pppppppuVar8 = &ppppppuStack_e0;
        func_0x0001078f3478();
      }
      ppppppuVar24 = param_1[9];
      ppppppuVar35 = (undefined8 ******)*param_4;
      pppppuVar27 = ppppppuVar24[1];
    }
    func_0x000107918248(pppppuVar27[(ulong)((long)ppppppuVar24[4] + (long)ppppppuVar35) >> 4] +
                        ((long)ppppppuVar24[4] + (long)ppppppuVar35 & 0xfU) * 0x2f);
    iVar7 = (int)param_7;
    if (!(bool)in_ZR) {
      if (iVar7 != 0) {
        *(undefined4 *)(ppppuVar30 + uVar19 * 0x2f + lVar34 * 0x15 + 0x19) = 1;
      }
      pppppuVar27 = param_1[2][4];
      uVar19 = (long)pppppuVar27 + (long)ppppppuVar35;
      pppppuVar29 = param_1[2][1];
      ppppuVar30 = pppppuVar29[uVar19 >> 4];
      uVar19 = uVar19 & 0xf;
      if (0 < (long)ppppuVar30[uVar19 * 0x2f + 3]) {
        func_0x000107916c80();
        lStack_28 = 0;
        ppppppuStack_20 = (undefined8 *******)0x0;
        pppppppuVar10 = pppppppuVar8 + 5;
        pppppppuVar25 = (undefined8 *******)*pppppppuVar10;
        uStack_50 = (undefined8 *******)0x0;
        lStack_48 = 0;
        uStack_40 = 0;
        pppppppuVar11 = pppppppuVar10;
        while (pppppppuVar25 != pppppppuVar8 + 6) {
          ppppppuVar24 = pppppppuVar25[4];
          func_0x00010791395c();
          lVar34 = extraout_x8_01 + (extraout_x9 & 0xffffffff) * 0x178;
          if ((*(byte *)(lVar34 + 0x20) & 1) == 0) {
            for (lVar39 = 0; uVar5 = lVar39 == 2, !(bool)uVar5; lVar39 = lVar39 + 1) {
              puVar40 = (undefined4 *)(lVar34 + 0x28 + lVar39 * 0xa8);
              func_0x0001079186e8();
              func_0x0001078fc784();
              lVar22 = *(long *)(puVar40 + 0xc);
              lVar3 = *(long *)(puVar40 + 0xe);
              func_0x000107918030();
              puVar2 = auStack_100;
              if (!(bool)uVar5) {
                puVar2 = extraout_x8_02;
              }
              ppppppuVar43 = *(undefined8 *******)(puVar2 + 8);
              iVar37 = -1;
              ppppppuVar38 = (undefined8 ******)pppppuStack_70;
              ppppppuVar21 = (undefined8 ******)pppppuStack_68;
              while ((ppppppuVar41 = ppppppuVar38, ppppppuVar42 = ppppppuVar21,
                     func_0x0001079147e8(), -10 < iVar37 + 1 && (((ulong)pppppppuVar11 & 1) != 0)))
              {
                func_0x0001079167d0();
                iVar37 = iVar37 + -1;
                ppppppuVar38 = ppppppuVar41;
                ppppppuVar21 = ppppppuVar42;
              }
              pppppuStack_70 = ppppppuVar38;
              pppppuStack_68 = ppppppuVar21;
              if (lVar22 != lVar3) {
                unaff_d12 = unaff_d15;
              }
              while( true ) {
                func_0x0001079185dc();
                func_0x0001079147e8();
                if ((int)pppppppuVar11 == 0) break;
                func_0x0001079167d0();
                func_0x0001079183f4();
              }
              pppppuStack_d8 = pppppuStack_68;
              ppppppuStack_e0 = (undefined8 ******)pppppuStack_70;
              uStack_c8 = 0xffffffffffffffff;
              pppppuStack_d0 = (undefined8 *****)0x0;
              uStack_ac = 0;
              uStack_a8 = 0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_a4 = 0;
              pppppuStack_c0 = ppppppuVar24;
              uStack_b8 = (int)lVar39;
              func_0x00010791690c(*puVar40);
              func_0x000107917e0c();
              uStack_c8 = 0xffffffffffffffff;
              pppppuStack_d0 = (undefined8 ******)0x0;
              uStack_b4 = 1;
              uStack_b0 = 0;
              uStack_ac = 0;
              uStack_a8 = 0;
              uStack_a4 = 0;
              ppppppuStack_e0 = unaff_d12;
              pppppuStack_d8 = ppppppuVar43;
              pppppuStack_c0 = ppppppuVar24;
              uStack_b8 = (int)lVar39;
              func_0x00010791690c(*puVar40);
              func_0x000107917e0c();
              if ((((ppppppuVar24 == ppppppuVar35) &&
                   (*(undefined8 ****)(puVar40 + 2) == (undefined8 ***)ppuStack_130)) &&
                  (*(undefined8 ****)(puVar40 + 6) == (undefined8 ***)ppuStack_120)) &&
                 (*(undefined8 ****)(puVar40 + 4) == (undefined8 ***)ppuStack_128)) {
                pppppppuVar11 = param_1;
                if (*(undefined8 ****)(puVar40 + 2) != (undefined8 ***)0x0) {
                  pppppppuVar11 = param_1 + 1;
                }
                pppppppuVar11 = (undefined8 *******)**pppppppuVar11;
                func_0x0001078fb500(pppppppuVar11,&ppuStack_130,*(undefined8 *)(puVar40 + 8));
                if ((lStack_28 == 0) || ((long)pppppppuVar11 < (long)ppppppuStack_20)) {
                  ppppppuStack_20 = pppppppuVar11;
                }
                lStack_28 = lStack_28 + 1;
              }
            }
          }
          func_0x00010002c7d4();
          pppppppuVar11 = pppppppuVar25;
        }
        if (lStack_28 != 0) {
          func_0x00010791395c();
          pppppuStack_d8 =
               (undefined8 *****)(extraout_x8_03 + (extraout_x9_00 & 0xffffffff) * 0x178);
          pppppuStack_d0 = (undefined8 *****)auStack_18;
          pppppppuVar8 = uStack_50;
          ppppppuStack_e0 = (undefined8 ******)appppuStack_38;
          func_0x0001078f3638(uStack_50,lStack_48,&ppppppuStack_e0);
          ppppppuVar24 = (undefined8 ******)0x0;
          lVar39 = lStack_48 - (long)uStack_50;
          pppppppuVar11 = uStack_50 + 2;
          for (lVar34 = 0; lVar39 / 0x70 != lVar34; lVar34 = lVar34 + 1) {
            if (lVar34 != 0) {
              func_0x000107915d14();
              ppppppuVar24 = (undefined8 ******)
                             ((long)ppppppuVar24 + ((ulong)pppppppuVar8 & 0xffffffff));
            }
            *pppppppuVar11 = ppppppuVar24;
            pppppppuVar11 = pppppppuVar11 + 0xe;
          }
          ppppppuVar24 = param_1[2];
          ppppppuStack_e0 = pppppppuVar10;
          pppppuStack_d0 = (undefined8 ******)0x0;
          pppppuStack_d8 = (undefined8 ******)0x0;
          pppppuStack_c0 = (undefined8 ******)0x0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          pppppppuVar11 = pppppppuVar10;
          pppppppuVar25 = (undefined8 *******)*pppppppuVar10;
          while (pppppuVar29 = pppppuStack_c0, pppppuVar27 = pppppuStack_d0,
                ppppppuVar35 = (undefined8 ******)pppppuStack_d8, pppppppuVar25 != pppppppuVar11 + 1
                ) {
            ppppppuVar35 = pppppppuVar25[4];
            uVar19 = (long)ppppppuVar24[4] + (long)ppppppuVar35;
            ppppuVar30 = ppppppuVar24[1][uVar19 >> 4];
            uVar19 = uVar19 & 0xf;
            if (((ulong)ppppuVar30[uVar19 * 0x2f + 4] & 1) == 0) {
              if ((*(int *)(ppppuVar30 + uVar19 * 0x2f + 5) == 1) &&
                 (*(int *)(ppppuVar30 + uVar19 * 0x2f + 0x1a) == 1)) goto LAB_1078fe078;
              ppppuVar13 = ppppuVar30 + uVar19 * 0x2f + 0x26;
              ppppuVar30 = ppppuVar30 + uVar19 * 0x2f + 0x11;
              for (lVar34 = 0; pppppppuVar11 = (undefined8 *******)ppppppuStack_e0, lVar34 != 2;
                  lVar34 = lVar34 + 1) {
                ppppppuVar38 = (undefined8 ******)*ppppuVar30;
                if (ppppppuVar38 == (undefined8 ******)0xffffffffffffffff) {
                  ppppppuVar38 = (undefined8 ******)ppppuVar30[-1];
                }
                iVar37 = *(int *)(ppppuVar30 + -0xc);
                if (iVar37 == 4) {
LAB_1078fdaf4:
                  if (ppppppuVar38 == ppppppuVar35) {
                    uVar15 = 0;
                    uVar5 = true;
                    goto LAB_1078fdc8c;
                  }
                  pppppuStack_68 = (undefined8 *****)CONCAT44(pppppuStack_68._4_4_,(int)lVar34);
                  uStack_58 = 0xffffffffffffffff;
                  pppppppuVar8 = (undefined8 *******)&pppppuStack_d8;
                  pppppuStack_70 = ppppppuVar35;
                  pppppuStack_60 = ppppppuVar38;
                  func_0x0001078fe2cc(pppppppuVar8,&pppppuStack_70);
                }
                else if (iVar37 == 3) {
                  ppppppuVar21 = (undefined8 ******)*ppppuVar13;
                  if (ppppppuVar21 == (undefined8 ******)0xffffffffffffffff) {
                    ppppppuVar21 = (undefined8 ******)ppppuVar13[-1];
                  }
                  if ((ppppppuVar38 != ppppppuVar21) &&
                     (pppppppuVar8 = (undefined8 *******)ppppppuStack_e0, func_0x000107916764(),
                     pppppppuVar8 == (undefined8 *******)0x0)) {
                    pppppuStack_68 = (undefined8 *****)CONCAT44(pppppuStack_68._4_4_,(int)lVar34);
                    uStack_58 = 0xffffffffffffffff;
                    pppppppuVar8 = (undefined8 *******)&pppppuStack_c0;
                    pppppuStack_70 = ppppppuVar35;
                    pppppuStack_60 = ppppppuVar38;
                    func_0x0001078fe2cc(pppppppuVar8,&pppppuStack_70);
                  }
                }
                else if (iVar37 == 1) goto LAB_1078fdaf4;
                ppppuVar13 = ppppuVar13 + -0x15;
                ppppuVar30 = ppppuVar30 + 0x15;
              }
            }
            func_0x000107917cec();
            pppppppuVar25 = pppppppuVar8;
          }
          ppppppuVar24 = (undefined8 ******)CONCAT44(uStack_b4,uStack_b8);
          uVar5 = (undefined8 ******)pppppuStack_c0 == ppppppuVar24;
          if (!(bool)uVar5) {
            while (ppppppuVar35 != (undefined8 ******)pppppuVar27) {
              func_0x0001079151b8();
              func_0x0001078fe354();
              func_0x00010791823c();
            }
            while ((undefined8 ******)pppppuVar29 != ppppppuVar24) {
              func_0x0001079151b8();
              func_0x0001078fe354();
              func_0x00010791823c();
            }
            for (; uVar5 = ppppppuVar35 == (undefined8 ******)pppppuVar27,
                ppppppuVar38 = (undefined8 ******)pppppuVar29, !(bool)uVar5;
                ppppppuVar35 = ppppppuVar35 + 4) {
              for (; ppppppuVar38 != ppppppuVar24; ppppppuVar38 = ppppppuVar38 + 4) {
                if ((ppppppuVar38[2] == ppppppuVar35[2]) && (ppppppuVar38[3] == ppppppuVar35[3]))
                goto LAB_1078fe078;
              }
            }
          }
          uVar15 = 1;
          goto LAB_1078fdc8c;
        }
        func_0x000107916380();
        goto LAB_1078fde4c;
      }
      uVar26 = 1;
      if (*(int *)(ppppuVar30 + uVar19 * 0x2f + 0x2e) != 1) {
        uVar26 = 0xffffffff;
      }
      uVar16 = 0;
      if (*(int *)(ppppuVar30 + uVar19 * 0x2f + 0x19) != 1) {
        uVar16 = uVar26;
      }
      *param_5 = uVar16;
      uVar5 = uVar16 == 0xffffffff;
      if (!(bool)uVar5) goto LAB_1078fdeb0;
      if (*(int *)(ppppuVar30 + uVar19 * 0x2f + 0x19) == 3 &&
          *(int *)(ppppuVar30 + uVar19 * 0x2f + 0x2e) == 3) goto LAB_1078fde4c;
      *param_5 = 0xffffffff;
      if (*(int *)(ppppuVar30 + uVar19 * 0x2f + 5) == 4 &&
          *(int *)(ppppuVar30 + uVar19 * 0x2f + 0x1a) == 4) {
        ppppppuStack_e0 = (undefined8 ******)((ulong)ppppppuStack_e0 & 0xffffffffffff0000);
        uStack_50 = (undefined8 *******)((ulong)uStack_50 & 0xffffffffffff0000);
        ppppuVar30 = ppppuVar30 + uVar19 * 0x2f + 0x11;
        for (lVar34 = 0; lVar34 != 2; lVar34 = lVar34 + 1) {
          pppuVar20 = *ppppuVar30;
          if ((pppuVar20 == (undefined8 ***)0xffffffffffffffff) &&
             (pppuVar20 = ppppuVar30[-1], pppuVar20 == (undefined8 ***)0xffffffffffffffff)) {
            bVar6 = false;
          }
          else {
            uVar19 = (long)pppuVar20 + (long)pppppuVar27;
            ppppuVar13 = pppppuVar29[uVar19 >> 4];
            uVar19 = uVar19 & 0xf;
            if (((long)ppppuVar13[uVar19 * 0x2f + 3] < 1) &&
               (*(int *)(ppppuVar13 + uVar19 * 0x2f + 5) != 1)) {
              bVar6 = (*(int *)(ppppuVar13 + uVar19 * 0x2f + 5) == 4 ||
                      *(int *)(ppppuVar13 + uVar19 * 0x2f + 0x1a) == 1) ||
                      *(int *)(ppppuVar13 + uVar19 * 0x2f + 0x1a) == 4;
            }
            else {
              bVar6 = true;
            }
          }
          *(bool *)((long)&ppppppuStack_e0 + lVar34) = bVar6;
          bVar1 = false;
          if (pppuVar20 == param_2) {
            bVar1 = bVar6;
          }
          *(bool *)((long)&uStack_50 + lVar34) = bVar1;
          ppppuVar30 = ppppuVar30 + 0x15;
        }
        if ((uint)(byte)uStack_50 == (uint)uStack_50._1_1_) {
          func_0x0001079180cc();
          lVar39 = 0xffffffff;
          pppppppuVar8 = &ppppppuStack_e0;
          lVar34 = extraout_x9_03;
          uVar19 = extraout_x10;
          while( true ) {
            iVar7 = (int)param_7;
            uVar16 = (uint)lVar39;
            if (lVar34 == 2) break;
            if (*(char *)((long)pppppppuVar8 + lVar34) == '\x01') {
              func_0x000107918650();
              lVar34 = extraout_x9_04;
              pppppppuVar8 = extraout_x11;
              if ((extraout_x10_00 & 1) == 0) {
                *param_5 = (uint)extraout_x9_04;
                uVar19 = 1;
                lVar39 = extraout_x9_04;
              }
              else {
                uVar19 = 1;
              }
            }
            lVar34 = lVar34 + 1;
          }
          if ((uVar19 & 1) == 0) goto LAB_1078fde4c;
          uVar5 = 1;
          goto LAB_1078fdeb0;
        }
        uVar16 = (byte)uStack_50 ^ 1;
        uVar5 = 0;
        goto LAB_1078fde9c;
      }
      bVar6 = false;
      pppuVar20 = ppppuVar30[uVar19 * 0x2f + 6];
      pppuVar14 = ppppuVar30[uVar19 * 0x2f + 0x1b];
      pppuVar31 = ppppuVar30[uVar19 * 0x2f + 0x17];
      ppppuVar13 = ppppuVar30 + uVar19 * 0x2f + 0x19;
      lVar39 = 0xffffffff;
      for (lVar34 = 0; uVar16 = (uint)lVar39, lVar34 != 2; lVar34 = lVar34 + 1) {
        if ((*(uint *)(ppppuVar13 + -0x14) == 1) && (((ulong)*ppppuVar13 & 0xfffffffe) != 2)) {
          if (bVar6) {
            if (pppuVar20 == pppuVar14) {
              bVar6 = ppppuVar13[-0x12] == (undefined8 ***)ppuStack_128;
              if (pppuVar31 != (undefined8 ***)0xffffffffffffffff &&
                  pppuVar31 == ppppuVar30[uVar19 * 0x2f + 0x2c]) goto LAB_1078fdc4c;
LAB_1078fdc64:
              if (bVar6) goto LAB_1078fdc68;
            }
            else {
              bVar6 = ppppuVar13[-0x13] == (undefined8 ***)ppuStack_130;
              if (pppuVar31 == (undefined8 ***)0xffffffffffffffff ||
                  pppuVar31 != ppppuVar30[uVar19 * 0x2f + 0x2c]) goto LAB_1078fdc64;
LAB_1078fdc4c:
              if (!bVar6) goto LAB_1078fdc68;
            }
            bVar6 = true;
          }
          else {
LAB_1078fdc68:
            *param_5 = (uint)lVar34;
            bVar6 = true;
            lVar39 = lVar34;
          }
        }
        ppppuVar13 = ppppuVar13 + 0x15;
      }
      if (!bVar6) goto LAB_1078fde4c;
      uVar5 = 1;
      goto LAB_1078fdeb0;
    }
    uVar16 = 3;
  }
  uVar5 = iVar7 == 0;
  if ((bool)uVar5) {
    uVar16 = uVar16 + 1;
  }
  uVar12 = (ulong)uVar16;
  goto LAB_1078fde58;
LAB_1078fe078:
  uVar5 = true;
  uVar15 = 0;
LAB_1078fdc8c:
  uStack_a8 = CONCAT31(uStack_a8._1_3_,uVar15);
  func_0x000107917d68();
  if (((ulong)pppppppuVar8 & 1) == 0) {
    ppppppuVar24 = param_1[2];
    pppppuVar27 = ppppppuVar24[1];
    uVar19 = (long)uStack_50[4] + (long)ppppppuVar24[4];
    piVar23 = (int *)((long)uStack_50 + 0x2c);
    uVar36 = (lStack_48 - (long)uStack_50) / 0x70;
    for (uVar32 = uVar36; uVar32 != 0; uVar32 = uVar32 - 1) {
      lVar34 = *(long *)(piVar23 + -7);
      if ((((lVar34 != 0) && (*piVar23 != 0)) &&
          (uVar12 = *(long *)(piVar23 + -3) + (long)ppppppuVar24[4], uVar33 = uVar12 & 0xf,
          iVar37 = *(int *)(pppppuVar27[uVar12 >> 4] + uVar33 * 0x2f + (long)piVar23[-1] * 0x15 + 5)
          , iVar37 == 4 || iVar37 == 1)) &&
         (pppppuVar27[uVar19 >> 4]
          [(uVar19 & 0xf) * 0x2f + (long)*(int *)(uStack_50 + 5) * 0x15 + 0x17] ==
          pppppuVar27[uVar12 >> 4][uVar33 * 0x2f + (long)piVar23[-1] * 0x15 + 0x17]))
      goto LAB_1078fdd50;
      piVar23 = piVar23 + 0x1c;
    }
    lVar34 = -1;
LAB_1078fdd50:
    uVar26 = 0;
    uVar19 = 1;
    for (piVar23 = (int *)((long)uStack_50 + 0x9c);
        (uVar5 = uVar19 == uVar36, uVar19 < uVar36 &&
        (uVar5 = *(long *)(piVar23 + -7) == lVar34, *(long *)(piVar23 + -7) <= lVar34));
        piVar23 = piVar23 + 0x1c) {
      if ((bool)uVar5 && *piVar23 == 1) {
        pppuVar20 = *(undefined8 ****)(piVar23 + -3);
        ppppuVar30 = pppppuVar27[(ulong)((long)ppppppuVar24[4] + (long)pppuVar20) >> 4];
        uVar32 = (long)ppppppuVar24[4] + (long)pppuVar20 & 0xf;
        uVar4 = piVar23[-1];
        lVar39 = (long)(int)uVar4;
        if ((((*(byte *)((long)ppppuVar30 + lVar39 * 0xa8 + uVar32 * 0x178 + 0xcd) & 1) == 0) &&
            (ppppuVar30[uVar32 * 0x2f + lVar39 * 0x15 + 0x13] == (undefined8 ***)0x0)) &&
           (ppppuVar30[uVar32 * 0x2f + lVar39 * 0x15 + 0x14] != (undefined8 ***)0x0)) {
          pppuVar14 = ppppuVar30[uVar32 * 0x2f + lVar39 * 0x15 + 0x11];
          if (pppuVar14 == (undefined8 ***)0xffffffffffffffff) {
            pppuVar14 = ppppuVar30[uVar32 * 0x2f + lVar39 * 0x15 + 0x10];
          }
          if (pppuVar20 == param_2 && uVar4 == param_3) {
            uVar18 = 4;
          }
          else {
            pppppppuVar8 = pppppppuVar10;
            func_0x0001078f1ad8(pppppppuVar10,pppuVar14);
            uVar17 = 1;
            if (pppppppuVar8 == (undefined8 *******)0x0) {
              uVar17 = 2;
            }
            uVar18 = 3;
            if (pppuVar20 != param_2) {
              uVar18 = uVar17;
            }
          }
          if (uVar26 < uVar18) {
            *param_4 = (long)pppuVar20;
            *param_5 = uVar4;
            uVar26 = uVar18;
          }
        }
      }
      uVar19 = uVar19 + 1;
    }
    if (uVar26 != 0) goto LAB_1078fde78;
    func_0x000107917d68();
    func_0x000107917d34();
    func_0x000107917c38();
    func_0x000107916380();
    if (((ulong)param_2 & 1) == 0) goto LAB_1078fde4c;
  }
  else {
LAB_1078fde78:
    func_0x000107917d34();
    func_0x000107917c38();
    func_0x000107916380();
  }
  if ((iVar7 == 0) || (func_0x00010791829c(), !(bool)uVar5)) {
    uVar16 = *param_5;
  }
  else {
LAB_1078fde9c:
    *param_5 = uVar16;
  }
LAB_1078fdeb0:
  func_0x000107917828(param_1[9]);
  func_0x00010791395c();
  lVar39 = extraout_x8_04 + (extraout_x9_01 & 0xffffffff) * 0x178;
  lVar34 = lVar39 + (long)(int)uVar16 * 0xa8;
  if (((*(byte *)(lVar34 + 0xcd) & 1) == 0) && (uVar5 = 1, *(int *)(lVar34 + 200) != 2)) {
    func_0x0001078fd50c(param_6,lVar39,param_1[0xd]);
    if (*(int *)(lVar34 + 0x28) == 4) {
      for (lVar22 = 0; lVar22 != 0x150; lVar22 = lVar22 + 0xa8) {
        if (*(int *)(lVar39 + 200 + lVar22) == 0) {
          *(undefined4 *)(lVar39 + 200 + lVar22) = 2;
        }
      }
    }
    else {
      *(undefined4 *)(lVar34 + 200) = 2;
    }
    uVar5 = *(long *)(lVar39 + 0x18) == 1;
    if (0 < *(long *)(lVar39 + 0x18)) {
      lVar34 = *(long *)(lVar34 + 0xa8);
      func_0x000107916c80();
      func_0x000107918820();
      while (uVar5 = param_6 == (ulong *)(extraout_x8_05 + 0x30), !(bool)uVar5) {
        func_0x000107913d6c(param_6[4]);
        piVar23 = (int *)(extraout_x9_02 + (extraout_x8_06 & 0xf) * 0x178 + 200);
        lVar39 = 2;
        do {
          if ((*piVar23 == 0) && (*(long *)(piVar23 + -8) == lVar34)) {
            *piVar23 = 2;
          }
          piVar23 = piVar23 + 0x2a;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        func_0x00010002c7d4();
      }
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 5;
  }
LAB_1078fde58:
  func_0x000107913564(uStack_10);
  if ((bool)uVar5) {
    return uVar12;
  }
  ___stack_chk_fail();
  func_0x000107914aac();
code_r0x0001078fe1d4:
  func_0x000107913cd4();
  func_0x000107917b70();
  if ((uVar12 & 1) == 0) {
    func_0x000107914938();
    func_0x000107914a4c();
    func_0x0001079173dc();
    uVar19 = (ulong)((bool)uVar5 && extraout_x9_05 == extraout_x11_00);
  }
  else {
    uVar19 = 1;
  }
  return uVar19;
}



/* Entry: 1078fe3c4; end: 1078fe3e7;  */

long FUN_1078fe3c4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0xaa + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078fe900; end: 1078fe903;  */

void FUN_1078fe900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1078ffa94; end: 1078ffb03;  */

undefined8 FUN_1078ffa94(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_1;
  bVar1 = lVar4 == param_1[1];
  if ((!bVar1) && (func_0x0001079174bc(), !bVar1)) {
    func_0x00010791589c();
    lVar3 = extraout_x8;
    for (; uVar2 = lVar4 == lVar3, !(bool)uVar2; lVar4 = lVar4 + 8) {
      while (func_0x000107916f18(), !(bool)uVar2) {
        func_0x00010791415c();
        func_0x0001078fe9c0();
        if (((ulong)param_1 & 1) == 0) {
          return 0;
        }
      }
      lVar3 = *(long *)(unaff_x21 + 8);
    }
  }
  return 1;
}



/* Entry: 1078fffec; end: 10790005b;  */

void FUN_1078fffec(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x10;
  
  func_0x000107917aac();
  func_0x00010791375c();
  if ((bool)in_ZR) {
    func_0x0001079165ec();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001079165e0(extraout_x8 - extraout_x10 >> 2);
      func_0x000107900080();
      func_0x000107913404();
      func_0x00010790005c();
      func_0x0001079135c0();
      func_0x0001079000cc();
    }
    else {
      func_0x000107913778();
      if (!(bool)in_ZR) {
        func_0x000107914138();
      }
      func_0x00010791461c();
    }
  }
  func_0x000107915e84();
  return;
}



/* Entry: 107900240; end: 107900253;  */

void FUN_107900240(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079004e0; end: 107900543;  */

void FUN_1079004e0(long *param_1)

{
  undefined1 auStack_90 [72];
  undefined1 auStack_48 [24];
  
  if (param_1[1] != *param_1) {
    func_0x000107915890();
    func_0x000107900940(auStack_90,param_1);
    func_0x000107915254();
    FUN_1078f49f8();
    func_0x0001078f88d8();
    func_0x0001078f4acc(auStack_48);
  }
  return;
}



/* Entry: 10790081c; end: 1079008bb;  */

void FUN_10790081c(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long alStack_a0 [5];
  long lStack_78;
  long alStack_60 [4];
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  iVar3 = (int)alStack_60;
  lVar4 = param_1[2];
  if (lVar4 == param_1[3]) {
    lVar4 = param_1[7];
    lVar5 = param_1[9];
    param_1[9] = lVar5 + 0x10;
    if (lVar5 + 0x10 == *(long *)(lVar4 + 8)) {
      param_1[7] = lVar4 + 0x18;
      func_0x0001079007c8();
    }
  }
  else {
    param_1[2] = lVar4 + 0x10;
  }
  func_0x000107900730(alStack_60,*param_1);
  func_0x0001079168c0();
  func_0x000107900758();
  if (iVar3 == 0) {
    return;
  }
  *param_1 = *param_1 + 0x30;
  func_0x00010791886c(param_1);
  while( true ) {
    if (unaff_x20 == unaff_x19[1]) {
      return;
    }
    func_0x00010791760c();
    func_0x0001079006f8();
    func_0x000107900730(alStack_a0);
    if ((alStack_60[0] != alStack_a0[0]) || (bVar1 = lStack_38 == lStack_78, !bVar1)) break;
    func_0x00010791835c();
    if (bVar1) {
      unaff_x20 = *unaff_x19;
    }
    else {
      func_0x0001079182b0();
      if (!bVar1) goto code_r0x0001079006b0;
    }
    unaff_x20 = unaff_x20 + 0x30;
    *unaff_x19 = unaff_x20;
  }
  unaff_x20 = *unaff_x19;
code_r0x0001079006b0:
  uVar2 = unaff_x20 == unaff_x19[1];
  if ((bool)uVar2) {
    return;
  }
  func_0x0001079006f8(alStack_60);
  func_0x000107917978();
  if (!(bool)uVar2) {
    unaff_x19[6] = lStack_40;
  }
  unaff_x19[7] = lStack_38;
  unaff_x19[8] = lStack_30;
  if (lStack_38 == lStack_30) {
    return;
  }
  unaff_x19[9] = lStack_28;
  return;
}



/* Entry: 107900b6c; end: 107900cc7;  */

void FUN_107900b6c(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 in_NG;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = param_1;
  func_0x00010791745c();
  plVar1 = param_2;
  if (!(bool)in_NG) {
    plVar1 = param_3;
    param_3 = param_2;
  }
  if (((*(byte *)(puVar3 + 5) & 1) != 0) ||
     ((func_0x000107917b54(param_3[3]), (int)puVar3 != 0 &&
      (func_0x000107917b4c(plVar1[3]), (int)puVar3 != 0)))) {
    func_0x000107917d00();
    iVar2 = (int)param_3 + 0x28;
    func_0x000107915908();
    func_0x0001078edf30();
    if (iVar2 != 0) {
      uVar7 = param_1[2];
      lVar4 = *plVar1;
      if (lVar4 == 2) {
        lVar4 = plVar1[1];
        func_0x000107900a20(lVar4,uVar7);
      }
      else {
        if (lVar4 == 1) {
          lVar6 = plVar1[1];
          lVar5 = plVar1[2];
          lVar4 = *(long *)param_1[1];
        }
        else {
          if (lVar4 != 0) {
            return;
          }
          lVar6 = plVar1[1];
          lVar5 = plVar1[2];
          lVar4 = *(long *)*param_1;
        }
        lVar4 = lVar4 + lVar6 * 0x30;
        if (-1 < lVar5) {
          lVar4 = *(long *)(lVar4 + 0x18) + lVar5 * 0x18;
        }
      }
      iVar2 = (int)lVar4;
      lVar4 = *param_3;
      if (lVar4 == 2) {
        func_0x000107900a20(param_3[1],uVar7);
      }
      else if ((lVar4 != 1) && (lVar4 != 0)) {
        return;
      }
      func_0x000107915908();
      func_0x0001079013f8();
      if ((-1 < iVar2) && ((puVar3[5] == -1 || ((double)param_3[4] < (double)puVar3[8])))) {
        func_0x000107917278();
      }
    }
  }
  return;
}



/* Entry: 10790113c; end: 107901197;  */

void FUN_10790113c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        FUN_107900b6c();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1079015a8; end: 10790162b;  */

void FUN_1079015a8(void)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001079164a8();
  while (func_0x000107914570(), (bool)in_CY) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    lVar1 = 8;
  }
  else {
    if (extraout_x8 != 2) goto LAB_1079015f8;
    lVar1 = 0x10;
  }
  unaff_x19[4] = lVar1;
LAB_1079015f8:
  while (unaff_x20 != unaff_x21) {
    func_0x0001079163e8();
  }
  lVar1 = unaff_x19[1];
  lVar2 = unaff_x19[2];
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107901f5c; end: 107902013;  */

void FUN_107901f5c(double param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  double dVar2;
  int *unaff_x19;
  double *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  
  func_0x000107917384();
  func_0x0001079142d0();
  while( true ) {
    if ((ulong)((long)unaff_x21 - (long)param_2) < 0x21) {
      return;
    }
    puVar1 = unaff_x21;
    dVar2 = -1.0;
    puVar4 = param_2;
    while (dVar5 = dVar2, puVar3 = puVar1, puVar4 = puVar4 + 2,
          puVar4 != (undefined8 *)(param_3 + -0x10)) {
      func_0x000107914d4c(*puVar4);
      func_0x0001078e9ca4();
      puVar1 = puVar4;
      dVar2 = param_1;
      if (param_1 <= dVar5) {
        puVar1 = puVar3;
        dVar2 = dVar5;
      }
    }
    param_1 = *unaff_x20;
    if (dVar5 <= param_1 || puVar3 == unaff_x21) break;
    *(undefined1 *)(puVar3 + 1) = 1;
    *unaff_x19 = *unaff_x19 + 1;
    func_0x000107914d88(param_2,puVar3 + 2);
    FUN_107901f5c();
    param_2 = puVar3;
  }
  return;
}



/* Entry: 1079025bc; end: 107902683;  */

void FUN_1079025bc(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001078e9868(param_1,param_2,1);
  if (param_4[1] == *param_4) {
    lVar1 = 0;
    if (-1 < *(long *)(param_1 + 0xe)) {
      lVar1 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0xe);
    }
    *(long *)(param_1 + 0x14) = lVar1;
  }
  else {
    func_0x00010791522c();
    func_0x0001078e9a00();
    lVar2 = *param_4;
    lVar3 = param_4[1];
    lVar1 = 0;
    if (-1 < *(long *)(param_1 + 0xe)) {
      lVar1 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0xe);
    }
    *(long *)(param_1 + 0x14) = lVar1;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      if (*param_1 != 5) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      }
      func_0x00010791812c(lVar2);
    }
  }
  return;
}



/* Entry: 107902c2c; end: 107902d03;  */

void FUN_107902c2c(ulong param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  undefined8 uVar3;
  undefined8 *unaff_x27;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    uVar3 = *unaff_x27;
    func_0x0001079161e4();
    func_0x000107902f78();
    uVar2 = unaff_x23;
    func_0x000107902f78();
    if (((param_1 & 1) != 0) || ((uint)uVar2 != 0)) {
      uVar1 = unaff_x19;
      if (((uint)param_1 & (uint)uVar2) == 0) {
        uVar1 = unaff_x21;
      }
      in_ZR = (uint)param_1 == 0;
      uVar2 = uVar1;
      if ((bool)in_ZR) {
        uVar2 = unaff_x20;
      }
      func_0x0001078eda1c(uVar2,uVar3);
    }
    unaff_x27 = unaff_x27 + 1;
    param_1 = uVar2;
  }
  return;
}



/* Entry: 107903050; end: 10790307b;  */

void FUN_107903050(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (param_2 < 0x555555555555556) {
    func_0x0001079175a0();
    return;
  }
  func_0x0001079030d4();
  func_0x000107914c78();
  func_0x000107916150();
  lVar2 = extraout_x9;
  while (lVar2 != unaff_x21) {
    func_0x0001079161c4();
    func_0x0001079138d4();
    func_0x000107915d84();
    lVar2 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x30) {
    func_0x0001079126fc();
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x22;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x22;
  unaff_x20[1] = uVar1;
  func_0x00010791351c();
  return;
}



/* Entry: 107903230; end: 1079032cf;  */

void FUN_107903230(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  ulong *in_stack_00000028;
  
  func_0x000107917aac();
  func_0x000107914d64();
  puVar5 = (ulong *)(param_1 + 0x10);
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 < (undefined8 *)*puVar5) {
    puVar4 = puVar3 + 1;
    *puVar3 = *unaff_x20;
  }
  else {
    func_0x000107918350((long)puVar3 - *unaff_x19 >> 3);
    func_0x0001079032d0();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    in_stack_00000028 = puVar5;
    if (param_1 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107903354();
    }
    in_stack_00000010 = (undefined8 *)(param_1 + (lVar2 - lVar1));
    in_stack_00000020 = param_1 + param_2 * 8;
    in_stack_00000018 = in_stack_00000010 + 1;
    *in_stack_00000010 = *unaff_x20;
    func_0x000107915724();
    func_0x000107903310();
    puVar4 = (undefined8 *)unaff_x19[1];
    func_0x00010790337c(&stack0x00000008);
  }
  unaff_x19[1] = (long)puVar4;
  return;
}



/* Entry: 107903598; end: 1079035e3;  */

long FUN_107903598(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000107903640(lVar1);
    }
  }
  return param_1;
}



/* Entry: 1079064d4; end: 107906503;  */

bool FUN_1079064d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  
  if (*param_1 != param_1[1]) {
    return false;
  }
  plVar4 = (long *)param_1[3];
  do {
    bVar3 = plVar4 == (long *)param_1[4];
    if (plVar4 == (long *)param_1[4]) {
      return bVar3;
    }
    lVar1 = *plVar4;
    plVar2 = plVar4 + 1;
    plVar4 = plVar4 + 3;
  } while (lVar1 == *plVar2);
  return bVar3;
}



/* Entry: 107906a60; end: 107906c0b;  */

void FUN_107906a60(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_107906a98;
      func_0x000107914d1c();
      func_0x000107913668();
      FUN_10790709c();
    }
    else {
LAB_107906a98:
      func_0x0001079142a0();
      func_0x000107907250();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x00010791683c();
          func_0x000107913810();
          FUN_10790709c();
          func_0x0001079137f8();
          FUN_10790709c();
          goto LAB_107906b10;
        }
      }
    }
    func_0x000107914290();
    func_0x000107907250();
    func_0x0001079142b0();
    func_0x000107907250();
  }
LAB_107906b10:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
LAB_107906b6c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_107906b74;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x000107907250();
      func_0x0001079142e0();
      func_0x000107907250();
      goto LAB_107906b6c;
    }
    func_0x00010791682c();
    func_0x000107913840();
    FUN_10790709c();
    func_0x000107913828();
    FUN_10790709c();
LAB_107906b74:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      FUN_10790709c();
      goto LAB_107906b98;
    }
  }
  func_0x0001079145ec();
  func_0x000107907250();
LAB_107906b98:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    FUN_10790709c();
  }
  else {
    func_0x0001079142f0();
    func_0x000107907250();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790709c; end: 10790724f;  */

void FUN_10790709c(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  uVar1 = unaff_x20 + 1;
  func_0x000107915afc();
  uVar4 = 1;
  if ((bool)in_ZR) goto LAB_107907154;
  uVar4 = extraout_x9 - extraout_x8 == 0x80;
  uVar2 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1079070dc:
    func_0x0001079142a0();
    func_0x000107907250();
  }
  else {
    uVar2 = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((99 < uVar1) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_1079070dc;
    func_0x000107914d28();
    func_0x000107913668();
    func_0x0001079073d4();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar2)) {
    in_CY = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((uVar1 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      func_0x000107916834();
      func_0x000107913810();
      func_0x0001079073d4();
      func_0x0001079137f8();
      func_0x0001079073d4();
      goto LAB_107907154;
    }
  }
  func_0x000107914290();
  func_0x000107907250();
  func_0x0001079142b0();
  func_0x000107907250();
LAB_107907154:
  func_0x000107915a78();
  if (!(bool)uVar4) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107916824();
      func_0x000107913840();
      func_0x0001079073d4();
      func_0x000107913828();
      func_0x0001079073d4();
    }
    else {
      func_0x0001079145fc();
      func_0x000107907250();
      func_0x0001079142e0();
      func_0x000107907250();
    }
  }
  func_0x000107914d34(uStack_60);
  if ((((bool)in_CY) && (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914200(), (bool)in_CY)
     ) {
    func_0x0001079137b0();
    func_0x0001079073d4();
  }
  else {
    func_0x0001079145ec();
    func_0x000107907250();
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar3 = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914280(), bVar3)) {
    func_0x0001079137c8();
    func_0x0001079073d4();
  }
  else {
    func_0x0001079142f0();
    func_0x000107907250();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 107907404; end: 107907427;  */

void FUN_107907404(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 107908368; end: 107908467;  */

/* WARNING: Possible PIC construction at 0x0001079083cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079085f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790864c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079085fc) */
/* WARNING: Removing unreachable block (ram,0x0001079083d0) */
/* WARNING: Removing unreachable block (ram,0x000107908408) */
/* WARNING: Removing unreachable block (ram,0x0001079083d4) */
/* WARNING: Removing unreachable block (ram,0x000107908414) */
/* WARNING: Removing unreachable block (ram,0x000107908454) */
/* WARNING: Removing unreachable block (ram,0x00010791595c) */
/* WARNING: Removing unreachable block (ram,0x000107908650) */

undefined1  [16]
FUN_107908368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 **ppuVar13;
  char cVar14;
  undefined1 in_ZR;
  bool bVar15;
  char cVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 uVar21;
  uint uVar22;
  mach_header *pmVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 uVar34;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x19;
  uint uVar35;
  ulong uVar36;
  int *piVar37;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar38;
  undefined *unaff_x30;
  undefined *puVar39;
  double dVar40;
  undefined8 extraout_var;
  undefined1 auVar41 [16];
  double dVar42;
  undefined8 in_register_00005028;
  double dVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  uint uStack_200;
  uint uStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1e8;
  int iStack_1e4;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  mach_header mStack_1b8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  dword dStack_178;
  dword dStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  mach_header *pmStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  int iStack_78;
  int iStack_74;
  undefined8 uStack_38;
  
  uVar31 = (uint)param_8;
  uVar30 = (undefined4)((ulong)param_7 >> 0x20);
  iVar28 = (int)param_7;
  uVar26 = (undefined4)((ulong)param_5 >> 0x20);
  iVar25 = (int)param_5;
  puVar24 = param_4;
  func_0x000107913c90();
  iStack_78 = iVar25 - param_6;
  iStack_74 = iVar28 - param_6;
  uStack_38 = extraout_x8_00;
  func_0x00010790831c(&iStack_78);
  if ((-1 < iStack_78) && (in_ZR = iStack_78 == iStack_74, iStack_78 <= iStack_74)) {
    func_0x0001079082e4();
    *unaff_x19 = 1;
    unaff_x19[1] = *param_4;
    puVar39 = (undefined *)0x1079083d0;
    ppuVar13 = (undefined8 **)auStack_80;
    pppppuVar38 = (undefined8 *****)&stack0xfffffffffffffff0;
    goto code_r0x0001079088e4;
  }
  func_0x000107913564(uStack_38);
  uVar27 = param_6;
  iVar29 = iVar28;
  uVar32 = uVar31;
  puVar12 = (undefined1 *)register0x00000008;
  if ((bool)in_ZR) {
LAB_10790822c:
    uVar21 = 1;
    *(undefined8 ******)(puVar12 + -0x10) = unaff_x29;
    *(undefined **)(puVar12 + -8) = unaff_x30;
    func_0x000107913ca4();
    *(undefined8 *)(puVar12 + -0x18) = extraout_x8;
    func_0x0001079082e4();
    uVar44 = func_0x000107916388();
    *(undefined8 *)((long)unaff_x19 + 0x72) = extraout_var;
    *(undefined8 *)((long)unaff_x19 + 0x6a) = uVar44;
    *(undefined8 *)(puVar12 + -0x20) = 0;
    *(undefined2 *)(unaff_x19 + 0xd) = 100;
    *(undefined8 *)((long)unaff_x19 + 0x82) = in_register_00005028;
    *(undefined8 *)((long)unaff_x19 + 0x7a) = param_2;
    uVar44 = *(undefined8 *)(puVar12 + -0x28);
    *(undefined8 *)((long)unaff_x19 + 0x8c) = *(undefined8 *)(puVar12 + -0x20);
    *(undefined8 *)((long)unaff_x19 + 0x84) = uVar44;
    func_0x000107913564(*(undefined8 *)(puVar12 + -0x18));
    if ((bool)uVar21) {
      auVar46._8_8_ = puVar24;
      auVar46._0_8_ = unaff_x19;
      return auVar46;
    }
    ___stack_chk_fail();
    *(undefined1 **)(puVar12 + -0x60) = puVar12 + -0x10;
    *(undefined **)(puVar12 + -0x58) = &LAB_10790827c;
    dVar42 = (double)(int)puVar24;
    dVar43 = (double)iVar25;
    dVar40 = (double)func_0x000107917da8((double)(int)unaff_x19,dVar42,dVar43,(double)(int)uVar27,
                                         (double)iVar29,(double)(int)uVar32);
    cVar16 = NAN(dVar40);
    uVar21 = dVar40 == 0.0;
    cVar14 = dVar40 < 0.0;
    if (!(bool)uVar21) {
      dVar40 = (double)func_0x000107915fcc();
      if (cVar14 == cVar16) {
        uVar31 = 0xffffffff;
        if (0.0 < dVar40) {
          uVar31 = 1;
        }
        uVar36 = (ulong)uVar31;
        goto code_r0x0001079082dc;
      }
      func_0x000107914b3c();
      uVar31 = extraout_w8;
      if (!(bool)uVar21 && cVar14 == cVar16) {
        uVar31 = 1;
      }
      uVar36 = (ulong)uVar31;
      if (dVar42 < dVar43) goto code_r0x0001079082dc;
    }
    uVar36 = 0;
code_r0x0001079082dc:
    auVar47._8_8_ = puVar24;
    auVar47._0_8_ = uVar36;
    return auVar47;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_210;
  puStack_88 = &UNK_107908468;
  pppppuVar38 = &ppppuStack_90;
  param_8 = CONCAT44(uVar30,iVar28);
  puStack_208 = (undefined8 *)CONCAT44(uVar26,iVar25);
  uVar27 = param_6;
  iVar29 = iVar28;
  uVar32 = uVar31;
  uVar33 = param_9;
  puStack_210 = puVar24;
  ppppuStack_90 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x000107913c90();
  iVar3 = iVar29 - uVar27;
  iVar4 = uVar33 - uVar32;
  uStack_1c8 = CONCAT44(iVar4,uVar27 - uVar32);
  uStack_100 = extraout_x8_01;
  func_0x00010790831c(&uStack_1c8);
  uStack_1d8 = CONCAT44(iVar4,iVar28 - uVar31);
  func_0x00010790831c(&uStack_1d8);
  iStack_1e8 = uVar31 - param_6;
  piVar37 = &iStack_1e8;
  iStack_1e4 = iVar3;
  func_0x00010790831c(&iStack_1e8);
  iStack_1f8 = param_9 - param_6;
  iStack_1f4 = iVar3;
  func_0x00010790831c(&iStack_1f8);
  uVar22 = param_6;
  func_0x000107917e20();
  func_0x000107917e20();
  uStack_200 = uVar31;
  func_0x000107917cf4();
  uStack_1fc = param_9;
  func_0x000107917cf4();
  uVar44 = 0x100000000;
  uVar33 = uVar22 - 1;
  uVar36 = (ulong)uVar33;
  if (uVar33 == 0) {
code_r0x00010790854c:
    uStack_1c8 = uVar44;
    func_0x00010790831c(&uStack_1c8);
    piVar37[0] = 0;
    piVar37[1] = 1;
    func_0x00010790831c(piVar37);
  }
  else if (uVar22 == 3) {
    piVar37 = &iStack_1f8;
    uVar44 = 0x100000001;
    goto code_r0x00010790854c;
  }
  uVar35 = (uint)param_8;
  uVar5 = uVar35 - 1;
  if (uVar35 == 1) {
    uStack_1d8 = 0x100000000;
    piVar37 = &iStack_1e8;
code_r0x00010790858c:
    func_0x00010790831c(&uStack_1d8);
    piVar37[0] = 1;
    piVar37[1] = 1;
    func_0x00010790831c(piVar37);
code_r0x0001079085a8:
    uVar27 = (uint)((int)param_6 < iVar28);
    if (iVar28 < (int)param_6) {
      uVar27 = 0xffffffff;
    }
    uVar32 = (uint)((int)uVar31 < (int)param_9);
    if ((int)param_9 < (int)uVar31) {
      uVar32 = 0xffffffff;
    }
    pmVar23 = &mStack_1b8;
    func_0x0001079082e4();
    uVar7 = uStack_1fc;
    uVar31 = uStack_200;
    pmStack_120 = &MACH_HEADER;
    puStack_118 = (undefined8 *)0x0;
    uStack_110 = 0x100000000;
    uStack_108 = 0;
    if (uVar33 < 3) {
      mStack_1b8._8_8_ = *(undefined8 *)*puStack_210;
      puVar39 = &UNK_1079085fc;
      ppuVar13 = &puStack_210;
      goto code_r0x0001079088e4;
    }
    if (uStack_200 == 2) {
      mStack_1b8._8_8_ = *(undefined8 *)*puStack_208;
      puVar39 = &UNK_107908650;
      ppuVar13 = &puStack_210;
      goto code_r0x0001079088e4;
    }
    if (uVar5 < 3) {
      func_0x000107916310(&mStack_1b8);
      *(undefined1 *)(uVar36 + 0x38) = 1;
      *(mach_header **)(uVar36 + 0x18) = pmVar23;
      *(undefined8 **)(uVar36 + 0x20) = puVar24;
      *(undefined8 *)(uVar36 + 0x30) = uStack_1d0;
      *(undefined8 *)(uVar36 + 0x28) = uStack_1d8;
      func_0x000107908994();
      pmStack_120 = pmVar23;
      puStack_118 = puVar24;
    }
    uVar33 = (uint)(uVar5 < 3);
    if (uVar7 == 2 && uVar33 < 2) {
      func_0x000107916310(&mStack_1b8);
      *(undefined1 *)(uVar36 + 0x38) = 1;
      func_0x0001079178b8(CONCAT44(iStack_1f4,iStack_1f8));
    }
    if (uVar33 == 2) {
      puVar24 = &uStack_110;
      func_0x0001079089f4(puVar24,&pmStack_120);
      uVar11 = uStack_188;
      uVar10 = uStack_190;
      uVar9 = uStack_198;
      uVar44 = mStack_1b8._24_8_;
      if ((int)puVar24 != 0) {
        auVar41._8_4_ = mStack_1b8.ncmds;
        auVar41._12_4_ = mStack_1b8.sizeofcmds;
        auVar41._0_4_ = mStack_1b8.cpusubtype;
        auVar41._4_4_ = mStack_1b8.filetype;
        uStack_198 = uStack_170;
        mStack_1b8.flags = dStack_178;
        mStack_1b8.reserved = dStack_174;
        uVar8 = mStack_1b8._24_8_;
        uStack_188 = uStack_160;
        uStack_190 = uStack_168;
        uStack_180 = uStack_158;
        uStack_170 = uVar9;
        mStack_1b8.flags = (dword)uVar44;
        mStack_1b8.reserved = SUB84(uVar44,4);
        dStack_178 = mStack_1b8.flags;
        dStack_174 = mStack_1b8.reserved;
        uStack_160 = uVar11;
        uStack_168 = uVar10;
        auVar41 = NEON_ext(auVar41,auVar41,8,1);
        mStack_1b8._16_8_ = auVar41._8_8_;
        mStack_1b8._8_8_ = auVar41._0_8_;
        mStack_1b8._24_8_ = uVar8;
      }
    }
    uVar1 = uVar7 & 0xfffffffd;
    iVar25 = -(uint)(uVar1 != 1);
    uVar2 = uVar31 - 4;
    bVar17 = uVar2 < 0xfffffffd;
    bVar19 = (uVar31 & 0xfffffffd) != 1;
    bVar15 = bVar17;
    if (uVar7 == 2) {
      iVar25 = 1;
      bVar15 = 0xfffffffc < uVar2 && bVar19;
    }
    uVar31 = uVar35 & 0xfffffffd;
    cVar16 = !bVar19 && !bVar17;
    if (uVar1 == 1) {
      bVar15 = (bool)cVar16;
    }
    if (uVar1 == 1 && uVar7 - 1 < 3) {
      cVar16 = bVar15 + '\x01';
    }
    iVar28 = -(uint)(uVar31 != 1);
    bVar18 = uVar22 - 4 < 0xfffffffd;
    bVar20 = (uVar22 & 0xfffffffd) != 1;
    bVar19 = bVar18;
    if (uVar35 == 2) {
      iVar28 = 1;
      bVar19 = 0xfffffffc < uVar22 - 4 && bVar20;
    }
    cVar14 = !bVar20 && !bVar18;
    if (uVar31 == 1) {
      bVar19 = (bool)cVar14;
    }
    if (uVar31 == 1 && uVar5 < 3) {
      cVar14 = bVar19 + '\x01';
    }
    mStack_1b8._0_8_ = ZEXT48(uVar33);
    *(undefined1 *)(unaff_x19 + 0xd) = 99;
    *(bool *)((long)unaff_x19 + 0x69) = uVar27 != uVar32;
    *(undefined8 *)((long)unaff_x19 + 0x84) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x7c) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x74) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x6c) = 0;
    *(int *)((long)unaff_x19 + 0x8c) = iVar28;
    *(int *)(unaff_x19 + 0x12) = iVar25;
    if (2 < uVar5) {
      bVar18 = bVar19 == false;
    }
    if (2 < uVar7 - 1) {
      bVar17 = bVar15 == false;
    }
    if (((cVar14 == '\x01' && cVar16 == '\x01') && (bVar18)) && (bVar17)) {
      if (uVar27 == uVar32) {
        uVar34 = 0x61;
        uVar21 = true;
      }
      else {
        uVar21 = iVar28 == 0;
        uVar34 = 0x74;
        if (!(bool)uVar21) {
          uVar34 = 0x66;
        }
      }
code_r0x0001079088a0:
      *(undefined1 *)(unaff_x19 + 0xd) = uVar34;
    }
    else {
      uVar21 = cVar14 == '\x02' && cVar16 == '\x02';
      if (cVar14 == '\x02' && cVar16 == '\x02') {
        uVar34 = 0x65;
        goto code_r0x0001079088a0;
      }
    }
    pmVar23 = &mStack_1b8;
    puVar24 = unaff_x19;
    func_0x000107914ab4();
    func_0x000107913564(uStack_100);
    if ((bool)uVar21) {
      auVar45._8_8_ = pmVar23;
      auVar45._0_8_ = puVar24;
      return auVar45;
    }
  }
  else {
    if (uVar35 == 3) {
      piVar37 = &iStack_1f8;
      uStack_1d8 = 0x100000001;
      goto code_r0x00010790858c;
    }
    bVar15 = false;
    if ((uVar22 != 0 || uVar35 != 0) &&
       (bVar15 = 3 < uVar22 && uVar35 == 4, 3 >= uVar22 || uVar35 < 4)) goto code_r0x0001079085a8;
    func_0x000107913564(uStack_100);
    unaff_x29 = (undefined8 *****)ppppuStack_90;
    unaff_x30 = puStack_88;
    puVar12 = auStack_80;
    if (bVar15) goto LAB_10790822c;
  }
  puVar39 = &SUB_1079088e4;
  ___stack_chk_fail();
code_r0x0001079088e4:
  *(undefined8 *)((long)ppuVar13 + -0x20) = param_8;
  *(undefined8 **)((long)ppuVar13 + -0x18) = unaff_x19;
  *(undefined8 ******)((long)ppuVar13 + -0x10) = pppppuVar38;
  *(undefined **)((long)ppuVar13 + -8) = puVar39;
  if ((bRam0000000113726a88 & 1) == 0) {
    iVar25 = 0x13726a88;
    ___cxa_guard_acquire();
    if (iVar25 != 0) {
      uRam0000000113726a98 = 0x100000000;
      func_0x00010790831c();
      ___cxa_guard_release(0x113726a88);
    }
  }
  auVar6._8_8_ = uRam0000000113726aa0;
  auVar6._0_8_ = uRam0000000113726a98;
  return auVar6;
}



/* Entry: 107908dd8; end: 107908df7;  */

/* WARNING: Possible PIC construction at 0x0001078e66f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078e66f4) */

void FUN_107908dd8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  if (param_1 < 0x80000000) {
    iVar2 = 0;
  }
  if (param_1 < -0x80000000) {
    iVar2 = 1;
  }
  if (iVar2 == 2) {
    puVar1 = (undefined8 *)0x8;
    ___cxa_allocate_exception();
    *puVar1 = 0;
    func_0x0001078e672c();
    ___cxa_throw();
  }
  else if (iVar2 != 1) {
    return;
  }
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar1 = 0;
  func_0x0001078e6750();
  *puVar1 = &PTR_FUN_1109e9e80;
  return;
}



/* Entry: 10790922c; end: 10790926b;  */

undefined4 FUN_10790922c(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_w8;
  long unaff_x19;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  func_0x000107917350();
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  func_0x0001079081b4();
  iVar5 = (int)*(undefined8 *)(unaff_x19 + 8);
  func_0x0001079081b4();
  iVar6 = puVar7[1];
  func_0x00010791747c(*puVar7);
  dVar8 = (double)iVar5;
  dVar9 = (double)iVar6;
  dVar10 = (double)param_3;
  func_0x000107917da8();
  cVar4 = NAN(dVar8);
  uVar3 = dVar8 == 0.0;
  cVar2 = dVar8 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar8 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar9 < dVar10) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1079095fc; end: 1079096bb;  */

void FUN_1079095fc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107914a04();
  if ((!(bool)in_CY || (bool)in_ZR) && (func_0x0001079147b4(), (bool)in_CY)) {
    func_0x000107914240();
    func_0x0001079135a4();
    func_0x0001079134a0();
    func_0x000107915c1c();
    if (!(bool)in_ZR) {
      func_0x000107917310();
      func_0x000107915144();
      func_0x000107914dd4();
      func_0x00010790976c();
      func_0x0001079148c4();
      func_0x000107915314();
      func_0x000107909798();
      func_0x0001079148b4();
      func_0x000107915314();
      func_0x000107909798();
    }
    func_0x00010791658c();
    func_0x000107914dd4();
    func_0x00010790976c();
    func_0x0001079165f8();
    func_0x000107914dd4();
    func_0x00010790976c();
    func_0x0001079151e0();
    func_0x00010791518c();
    func_0x000107915024();
    return;
  }
  func_0x000107914da4();
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001079093a0();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1079099e0; end: 107909b8b;  */

void FUN_1079099e0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_107909a18;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x000107909b8c();
    }
    else {
LAB_107909a18:
      func_0x0001079142a0();
      func_0x00010790997c();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916834();
          func_0x000107913810();
          func_0x000107909b8c();
          func_0x0001079137f8();
          func_0x000107909b8c();
          goto LAB_107909a90;
        }
      }
    }
    func_0x000107914290();
    func_0x00010790997c();
    func_0x0001079142b0();
    func_0x00010790997c();
  }
LAB_107909a90:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
LAB_107909aec:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_107909af4;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x00010790997c();
      func_0x0001079142e0();
      func_0x00010790997c();
      goto LAB_107909aec;
    }
    func_0x000107916824();
    func_0x000107913840();
    func_0x000107909b8c();
    func_0x000107913828();
    func_0x000107909b8c();
LAB_107909af4:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      func_0x000107909b8c();
      goto LAB_107909b18;
    }
  }
  func_0x0001079145ec();
  func_0x00010790997c();
LAB_107909b18:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    func_0x000107909b8c();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790997c();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790a068; end: 10790a217;  */

void FUN_10790a068(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_10790a11c;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_10790a0a4:
    func_0x0001079142a0();
    func_0x00010790a218();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto LAB_10790a0a4;
    func_0x000107914d1c();
    func_0x000107913668();
    func_0x00010790a274();
  }
  func_0x000107914220();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x0001079142c0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
      func_0x00010791683c();
      func_0x000107913810();
      func_0x00010790a274();
      func_0x0001079137f8();
      func_0x00010790a274();
      goto LAB_10790a11c;
    }
  }
  func_0x000107914290();
  func_0x00010790a218();
  func_0x0001079142b0();
  func_0x00010790a218();
LAB_10790a11c:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x00010791682c();
      func_0x000107913840();
      func_0x00010790a274();
      func_0x000107913828();
      func_0x00010790a274();
    }
    else {
      func_0x0001079145fc();
      func_0x00010790a218();
      func_0x0001079142e0();
      func_0x00010790a218();
    }
  }
  func_0x000107914d34(uStack_60);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914200(), (bool)in_CY)) {
    func_0x0001079137b0();
    func_0x00010790a274();
  }
  else {
    func_0x0001079145ec();
    func_0x00010790a218();
  }
  func_0x0001079141f0();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar2)) {
    func_0x0001079137c8();
    func_0x00010790a274();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790a218();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790a5a4; end: 10790ab6b;  */

/* WARNING: Possible PIC construction at 0x00010790a610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790a664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790ac70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790ac24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790ac74) */
/* WARNING: Removing unreachable block (ram,0x00010790ac84) */
/* WARNING: Removing unreachable block (ram,0x00010790aca4) */
/* WARNING: Removing unreachable block (ram,0x00010790acac) */
/* WARNING: Removing unreachable block (ram,0x00010790acb4) */
/* WARNING: Removing unreachable block (ram,0x00010790acb8) */
/* WARNING: Removing unreachable block (ram,0x000107914328) */
/* WARNING: Removing unreachable block (ram,0x00010790a644) */
/* WARNING: Removing unreachable block (ram,0x00010790a668) */
/* WARNING: Removing unreachable block (ram,0x00010790a678) */
/* WARNING: Removing unreachable block (ram,0x00010790a78c) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c8) */
/* WARNING: Removing unreachable block (ram,0x00010790a7d4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7a8) */
/* WARNING: Removing unreachable block (ram,0x00010790a7ac) */
/* WARNING: Removing unreachable block (ram,0x00010790a7c0) */
/* WARNING: Removing unreachable block (ram,0x00010790a7e4) */
/* WARNING: Removing unreachable block (ram,0x00010790a7f0) */
/* WARNING: Removing unreachable block (ram,0x00010790a7f4) */
/* WARNING: Removing unreachable block (ram,0x00010790a808) */
/* WARNING: Removing unreachable block (ram,0x00010790a840) */
/* WARNING: Removing unreachable block (ram,0x00010790a80c) */
/* WARNING: Removing unreachable block (ram,0x00010790a820) */
/* WARNING: Removing unreachable block (ram,0x00010790a830) */
/* WARNING: Removing unreachable block (ram,0x00010790a848) */
/* WARNING: Removing unreachable block (ram,0x00010790a854) */
/* WARNING: Removing unreachable block (ram,0x00010790a85c) */
/* WARNING: Removing unreachable block (ram,0x00010790a670) */
/* WARNING: Removing unreachable block (ram,0x00010790a688) */
/* WARNING: Removing unreachable block (ram,0x00010790a69c) */
/* WARNING: Removing unreachable block (ram,0x00010790a6b0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6cc) */
/* WARNING: Removing unreachable block (ram,0x00010790a6d0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e4) */
/* WARNING: Removing unreachable block (ram,0x00010790a6d8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6c0) */
/* WARNING: Removing unreachable block (ram,0x00010790a6c8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6e8) */
/* WARNING: Removing unreachable block (ram,0x00010790a6f0) */
/* WARNING: Removing unreachable block (ram,0x00010790a734) */
/* WARNING: Removing unreachable block (ram,0x00010790a740) */
/* WARNING: Removing unreachable block (ram,0x00010790a748) */
/* WARNING: Removing unreachable block (ram,0x00010790a764) */
/* WARNING: Removing unreachable block (ram,0x00010790a878) */
/* WARNING: Removing unreachable block (ram,0x00010790a880) */
/* WARNING: Removing unreachable block (ram,0x00010790a778) */
/* WARNING: Removing unreachable block (ram,0x00010790a77c) */
/* WARNING: Removing unreachable block (ram,0x00010790a6f8) */
/* WARNING: Removing unreachable block (ram,0x00010790a710) */
/* WARNING: Removing unreachable block (ram,0x00010790a720) */
/* WARNING: Removing unreachable block (ram,0x00010790a730) */
/* WARNING: Removing unreachable block (ram,0x00010790a638) */
/* WARNING: Removing unreachable block (ram,0x00010790a614) */
/* WARNING: Removing unreachable block (ram,0x00010790ac28) */
/* WARNING: Removing unreachable block (ram,0x00010790ac38) */
/* WARNING: Removing unreachable block (ram,0x00010790ac40) */
/* WARNING: Removing unreachable block (ram,0x00010790ac48) */
/* WARNING: Removing unreachable block (ram,0x00010790ac4c) */
/* WARNING: Removing unreachable block (ram,0x000107913e70) */

void FUN_10790a5a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *puVar10;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar11;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x11_01;
  undefined8 uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x000107915994();
  func_0x000107913e28();
  func_0x000107913ca4();
  uVar16 = (long)unaff_x19 - (long)unaff_x20 >> 4;
  uVar8 = uVar16 == 5;
  switch(uVar16) {
  case 0:
  case 1:
    goto LAB_10790ab54;
  case 2:
    uVar8 = *(int *)((long)unaff_x19 + -4) == *(int *)((long)unaff_x20 + 0xc);
    if (*(int *)((long)unaff_x20 + 0xc) < *(int *)((long)unaff_x19 + -4)) {
      func_0x000107916b00();
      uVar14 = unaff_x19[-2];
      unaff_x20[1] = unaff_x19[-1];
      *unaff_x20 = uVar14;
      unaff_x19[-1] = in_stack_00000018;
      unaff_x19[-2] = in_stack_00000010;
    }
    goto LAB_10790ab54;
  case 3:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      func_0x000107918814();
      func_0x0001079154c8();
      goto code_r0x00010790ab6c;
    }
    break;
  case 4:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      param_3 = unaff_x20 + 4;
      func_0x0001079154c8();
      param_1 = unaff_x20;
code_r0x00010790ac0c:
      func_0x000107913c7c();
      goto code_r0x00010790ab6c;
    }
    break;
  case 5:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      param_2 = unaff_x20 + 2;
      param_3 = unaff_x20 + 4;
      func_0x0001079154c8();
      func_0x0001079189a8();
      func_0x000107913c7c();
      param_1 = unaff_x20;
      goto code_r0x00010790ac0c;
    }
    break;
  default:
    if ((long)uVar16 < 0x18) {
      uVar8 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        puVar9 = unaff_x20;
        if (!(bool)uVar8) {
          while( true ) {
            unaff_x20 = unaff_x20 + 2;
            uVar8 = 1;
            if (puVar9 + 2 == unaff_x19) break;
            piVar1 = (int *)((long)puVar9 + 0x1c);
            piVar2 = (int *)((long)puVar9 + 0xc);
            puVar9 = puVar9 + 2;
            if (*piVar2 < *piVar1) {
              func_0x000107917918(unaff_x20);
              puVar9 = extraout_x11_01;
              do {
                puVar9[1] = puVar9[-1];
                *puVar9 = puVar9[-2];
                piVar1 = (int *)((long)puVar9 + -0x14);
                puVar9 = puVar9 + -2;
              } while (*piVar1 < extraout_w10_00);
              func_0x000107918268();
              puVar9 = extraout_x9_00;
              unaff_x20 = extraout_x8_02;
            }
          }
        }
      }
      else if (!(bool)uVar8) {
        lVar15 = 0;
        puVar9 = unaff_x20;
        while( true ) {
          puVar10 = puVar9 + 2;
          uVar8 = 1;
          if (puVar10 == unaff_x19) break;
          if (*(int *)((long)puVar9 + 0xc) < *(int *)((long)puVar9 + 0x1c)) {
            func_0x000107917918(lVar15);
            lVar15 = extraout_x11;
            do {
              puVar9 = (undefined8 *)((long)unaff_x20 + lVar15);
              puVar9[3] = puVar9[1];
              puVar9[2] = *puVar9;
              if (lVar15 == 0) break;
              lVar15 = lVar15 + -0x10;
            } while (*(int *)((long)puVar9 + -4) < extraout_w10);
            func_0x000107918268();
            lVar15 = extraout_x8_00;
            puVar10 = extraout_x9;
          }
          lVar15 = lVar15 + 0x10;
          puVar9 = puVar10;
        }
      }
    }
    else {
      if (unaff_x22 != 0) {
        puVar9 = unaff_x20 + (uVar16 & 0xfffffffffffffffe);
        if (uVar16 < 0x81) {
          func_0x000107915378();
          param_1 = puVar9;
        }
        else {
          func_0x000107916bac();
          param_3 = unaff_x19 + -2;
        }
        goto code_r0x00010790ab6c;
      }
      uVar8 = unaff_x20 == unaff_x19;
      if (!(bool)uVar8) {
        func_0x0001079181fc();
        lVar15 = 0;
        do {
          func_0x000107914c3c();
          func_0x00010790ae44();
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
        while( true ) {
          uVar8 = uVar16 - 2 == 0;
          if ((long)uVar16 < 2) break;
          func_0x000107916b00(uVar16 - 2);
          puVar9 = unaff_x20;
          uVar11 = extraout_x11_00;
          do {
            uVar4 = uVar11 << 1 | 1;
            uVar3 = uVar11 * 2 + 2;
            puVar10 = puVar9 + uVar11 * 2 + 2;
            uVar12 = uVar4;
            if (((long)uVar3 < (long)uVar16) &&
               (puVar10 = puVar9 + uVar11 * 2 + 4, uVar12 = uVar3,
               *(int *)((long)puVar9 + uVar11 * 0x10 + 0x1c) <=
               *(int *)((long)puVar9 + uVar11 * 0x10 + 0x2c))) {
              puVar10 = puVar9 + uVar11 * 2 + 2;
              uVar12 = uVar4;
            }
            uVar14 = *puVar10;
            puVar9[1] = puVar10[1];
            *puVar9 = uVar14;
            puVar9 = puVar10;
            uVar11 = uVar12;
          } while ((long)uVar12 <= (long)(extraout_x8_01 >> 1));
          puVar9 = unaff_x19 + -2;
          if (puVar10 == puVar9) {
            puVar10[1] = in_stack_00000018;
            *puVar10 = in_stack_00000010;
          }
          else {
            uVar14 = *puVar9;
            puVar10[1] = unaff_x19[-1];
            *puVar10 = uVar14;
            unaff_x19[-1] = in_stack_00000018;
            *puVar9 = in_stack_00000010;
            lVar15 = (long)puVar10 + (0x10 - (long)unaff_x20) >> 4;
            if (1 < lVar15) {
              uVar11 = lVar15 - 2U >> 1;
              iVar6 = *(int *)((long)puVar10 + 0xc);
              if (iVar6 < *(int *)((long)(unaff_x20 + uVar11 * 2) + 0xc)) {
                uVar14 = *puVar10;
                uVar5 = *(undefined4 *)(puVar10 + 1);
                puVar7 = unaff_x20 + uVar11 * 2;
                do {
                  puVar13 = puVar7;
                  uVar17 = *puVar13;
                  puVar10[1] = puVar13[1];
                  *puVar10 = uVar17;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1 >> 1;
                  puVar10 = puVar13;
                  puVar7 = unaff_x20 + uVar11 * 2;
                } while (iVar6 < *(int *)((long)(unaff_x20 + uVar11 * 2) + 0xc));
                *puVar13 = uVar14;
                *(undefined4 *)(puVar13 + 1) = uVar5;
                *(int *)((long)puVar13 + 0xc) = iVar6;
              }
            }
          }
          uVar16 = uVar16 - 1;
          unaff_x19 = puVar9;
        }
      }
    }
LAB_10790ab54:
    func_0x000107913564(extraout_x8);
    if ((bool)uVar8) {
      return;
    }
  }
  ___stack_chk_fail();
code_r0x00010790ab6c:
  iVar6 = *(int *)((long)param_2 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < iVar6) {
    if (iVar6 < *(int *)((long)param_3 + 0xc)) {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar18;
    }
    else {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      param_2[1] = uVar17;
      *param_2 = uVar14;
      if (*(int *)((long)param_3 + 0xc) <= *(int *)((long)param_2 + 0xc)) {
        return;
      }
      uVar17 = param_2[1];
      uVar14 = *param_2;
      uVar18 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar18;
    }
    param_3[1] = uVar17;
    *param_3 = uVar14;
  }
  else if (iVar6 < *(int *)((long)param_3 + 0xc)) {
    uVar17 = param_2[1];
    uVar14 = *param_2;
    uVar18 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar18;
    param_3[1] = uVar17;
    *param_3 = uVar14;
    if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_2 + 0xc)) {
      uVar17 = param_1[1];
      uVar14 = *param_1;
      uVar18 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      param_2[1] = uVar17;
      *param_2 = uVar14;
    }
  }
  return;
}



/* Entry: 10790af7c; end: 10790afdf;  */

void FUN_10790af7c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010791886c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x28;
      func_0x0001078f005c();
    }
    *(long *)(unaff_x19 + 8) = unaff_x20;
    func_0x000107915b14();
  }
  return;
}



/* Entry: 10790b97c; end: 10790ba4f;  */

void FUN_10790b97c(void)

{
  int iVar1;
  ulong in_x3;
  
  func_0x0001079144b8();
  func_0x0001079162f8();
  iVar1 = (int)in_x3;
  func_0x000107914edc();
  func_0x00010790b734();
  if ((in_x3 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010791360c();
      func_0x0001079156f4();
      func_0x00010790b734();
      if (iVar1 != 0) {
        func_0x00010791345c();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x00010791345c();
      func_0x000107914edc();
      func_0x00010790b734();
      if (iVar1 == 0) {
        return;
      }
      func_0x00010791360c();
    }
    else {
      func_0x000107914468();
    }
    func_0x0001079158c0();
  }
  return;
}



/* Entry: 10790c13c; end: 10790c1a3;  */

void FUN_10790c13c(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_48 [8];
  
  iVar1 = (int)auStack_48;
  func_0x000107916d34((double)param_1,(double)param_3);
  func_0x0001078ea1b4();
  func_0x000107916d2c((double)param_1,(double)param_3);
  if (iVar1 != 0) {
    func_0x000107913c20();
    func_0x0001078ea3b4();
  }
  return;
}



/* Entry: 10790cef4; end: 10790d077;  */

void FUN_10790cef4(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  func_0x000107916c08();
  if (1 < param_3) {
    lVar15 = (param_4 - param_1) / 0x68;
    uVar11 = param_3 - 2U >> 1;
    if (lVar15 <= (long)uVar11) {
      uVar9 = lVar15 << 1 | 1;
      lVar13 = param_1 + uVar9 * 0x68;
      uVar12 = lVar15 * 2 + 2;
      puVar10 = (uint *)*param_2;
      if ((long)uVar12 < param_3) {
        uVar2 = *puVar10;
        uVar4 = puVar10[1];
        uVar3 = *(undefined4 *)param_2[1];
        uVar5 = ((undefined4 *)param_2[1])[1];
        uVar6 = uVar2;
        func_0x000107915f28();
        func_0x00010790c958();
        lVar15 = lVar13 + 0x68;
        if (uVar6 == 0) {
          uVar12 = uVar9;
          lVar15 = lVar13;
        }
      }
      else {
        uVar2 = *puVar10;
        uVar4 = puVar10[1];
        uVar3 = *(undefined4 *)param_2[1];
        uVar5 = ((undefined4 *)param_2[1])[1];
        uVar12 = uVar9;
        lVar15 = lVar13;
      }
      uVar9 = (ulong)uVar2;
      func_0x0001079170f0(uVar9,uVar4,uVar3,uVar5,lVar15);
      if ((uVar9 & 1) == 0) {
        func_0x000107914ab4(&stack0x00000018,param_4);
        do {
          lVar13 = lVar15;
          func_0x0001079141e4(param_4);
          if ((long)uVar11 < (long)uVar12) break;
          uVar1 = uVar12 << 1 | 1;
          lVar14 = param_1 + uVar1 * 0x68;
          uVar9 = uVar12 * 2 + 2;
          iVar8 = *(int *)*param_2;
          uVar12 = uVar1;
          lVar15 = lVar14;
          if ((long)uVar9 < param_3) {
            iVar7 = iVar8;
            func_0x000107915f28();
            func_0x000107915d0c();
            uVar12 = uVar9;
            lVar15 = lVar14 + 0x68;
            if (iVar7 == 0) {
              uVar12 = uVar1;
              lVar15 = lVar14;
            }
          }
          func_0x000107915f28();
          func_0x00010790c958();
          param_4 = lVar13;
        } while (iVar8 == 0);
        func_0x000107914ab4(lVar13,&stack0x00000018);
      }
    }
  }
  return;
}



/* Entry: 10790d4d4; end: 10790d52f;  */

bool FUN_10790d4d4(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + ((ulong)(param_5 + param_2) >> 4) * 8) +
          (param_5 + param_2 & 0xfU) * 0x160;
  if ((*(int *)(lVar1 + 0x20) == 2) && (*(int *)(lVar1 + 0xc0) == 2)) {
    if (*(long *)(lVar1 + 0xa8) != param_3 || *(long *)(lVar1 + 0x148) != param_4) {
      return *(long *)(lVar1 + 0x148) == param_3 && *(long *)(lVar1 + 0xa8) == param_4;
    }
    return true;
  }
  return false;
}



/* Entry: 10790eee8; end: 10790ef63;  */

/* WARNING: Possible PIC construction at 0x00010790ef5c: Changing call to branch */

long FUN_10790eee8(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long lVar2;
  long extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x30;
  
  func_0x000107917a38();
  func_0x000107914d70();
  func_0x000107918318();
  if (!(bool)in_CY) {
    func_0x000107914ebc();
LAB_10790ef50:
    unaff_x19[1] = unaff_x24;
    return param_1;
  }
  func_0x0001079157d8();
  if (extraout_x10 == 0) {
    func_0x000107914bbc();
    unaff_x24 = extraout_x8;
    if ((bool)in_CY) {
      unaff_x24 = extraout_x9;
    }
    if (unaff_x24 >> 0x3b == 0) {
      func_0x000107917dec();
      lVar2 = param_1 + unaff_x24 * 0x20;
      func_0x000107914ebc(param_1 + unaff_x22);
      func_0x000107913970();
      *unaff_x19 = extraout_x8_00 + unaff_x23 * -0x20;
      unaff_x19[1] = unaff_x24;
      unaff_x19[2] = lVar2;
      if (unaff_x20 != 0) {
        func_0x000107914d94();
      }
      goto LAB_10790ef50;
    }
    func_0x000104bd35f4();
  }
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x24);
  lVar2 = (param_2 - param_1) / 0x68;
  while( true ) {
    if (lVar2 == 0) {
      return -1;
    }
    if (((*(long *)(piVar1 + -3) == unaff_x30) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1a;
    lVar2 = lVar2 + -1;
  }
  return *(long *)(piVar1 + -7);
}



/* Entry: 10790f1f8; end: 10790f28f;  */

void FUN_10790f1f8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000107914d64();
  func_0x00010791839c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x000107913d98();
      if (!bVar2) {
        func_0x000107916c70();
      }
      func_0x0001079181a8();
      param_2 = unaff_x21;
    }
    else {
      lVar3 = (long)(uVar1 - param_2) >> 2;
      if (uVar1 - param_2 == 0) {
        lVar3 = 1;
      }
      func_0x00010791877c();
      func_0x00010790f2b4();
      func_0x000107915b70(lVar3 * 2 + 6);
      func_0x0001079135d8();
      func_0x00010790f290();
      func_0x0001079135c0();
      func_0x00010790f300();
      param_2 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(param_2 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(param_2 + -8);
  return;
}



/* Entry: 10790f794; end: 10790f7f3;  */

ulong FUN_10790f794(ulong param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  uVar1 = param_3 == 99;
  if ((99 < param_3) ||
     (uVar1 = param_2[1] - *param_2 == 0x79, (ulong)(param_2[1] - *param_2) < 0x79)) {
    func_0x000107915d78(param_2,param_4);
    if (!(bool)uVar1) {
      func_0x000107914c78();
      lVar2 = extraout_x8;
      while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
          func_0x00010791460c();
          func_0x00010790f3ec();
          if (((ulong)param_2 & 1) == 0) {
            return 0;
          }
        }
      }
    }
    return 1;
  }
  func_0x000107913fec(param_1,param_2,param_3 + 1);
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if ((bool)uVar1) {
code_r0x00010790f398:
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x00010790f620();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914d88();
      func_0x00010790f620();
      goto code_r0x00010790f3c0;
    }
  }
  else {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x00010790f620();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x00010790f700();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107914aa0();
        func_0x00010790f700();
        if ((param_1 & 1) != 0) goto code_r0x00010790f398;
      }
    }
  }
  param_1 = 0;
code_r0x00010790f3c0:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 107910428; end: 1079104af;  */

void FUN_107910428(void)

{
  FUN_1079108c0();
  return;
}



/* Entry: 1079108c0; end: 1079108f3;  */

void FUN_1079108c0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107910e3c; end: 10791102f;  */

undefined8 FUN_107910e3c(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) {
LAB_107910f08:
    func_0x000107915a78();
    if ((bool)uVar3) {
LAB_107910f70:
      func_0x000107914d34(uStack_60);
      if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107914200(), (bool)in_CY)) {
        func_0x0001079137b0();
        func_0x0001079110a0();
        if ((param_1 & 1) != 0) {
LAB_107910fa8:
          func_0x0001079141f0();
          iVar4 = (int)param_1;
          if (((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) {
            func_0x000107914280();
            iVar4 = (int)param_1;
            if (!bVar2) goto LAB_107910fb0;
            func_0x0001079137c8();
            func_0x0001079110a0();
            if ((param_1 & 1) == 0) goto LAB_107910fe0;
          }
          else {
LAB_107910fb0:
            func_0x0001079142f0();
            func_0x000107911030();
            if (iVar4 == 0) goto LAB_107910fe0;
          }
          uVar5 = 1;
          goto LAB_107910fe4;
        }
      }
      else {
        func_0x0001079145ec();
        func_0x000107911030();
        if ((int)param_1 != 0) goto LAB_107910fa8;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x00010791682c();
        func_0x000107913840();
        func_0x0001079110a0();
        if ((int)param_1 != 0) {
          func_0x000107913828();
          func_0x0001079110a0();
          if ((param_1 & 1) != 0) goto LAB_107910f70;
        }
      }
      else {
        func_0x0001079145fc();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142e0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto LAB_107910f70;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_107910e78:
      func_0x0001079142a0();
      func_0x000107911030();
      if ((int)param_1 != 0) {
LAB_107910eac:
        func_0x000107914220();
        in_CY = 0;
        if ((bool)uVar1) {
          func_0x0001079142c0();
          in_CY = 0;
          if ((bool)uVar1) {
            in_CY = 0x62 < unaff_x20;
            uVar3 = unaff_x20 == 99;
            if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
              func_0x00010791683c();
              func_0x000107913810();
              func_0x0001079110a0();
              if ((int)param_1 != 0) {
                func_0x0001079137f8();
                func_0x0001079110a0();
                if ((param_1 & 1) != 0) goto LAB_107910f08;
              }
              goto LAB_107910fe0;
            }
          }
        }
        func_0x000107914290();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto LAB_107910f08;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto LAB_107910e78;
      func_0x000107914d1c();
      func_0x000107913668();
      func_0x0001079110a0();
      if ((param_1 & 1) != 0) goto LAB_107910eac;
    }
  }
LAB_107910fe0:
  uVar5 = 0;
LAB_107910fe4:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar5;
}



/* Entry: 107911454; end: 10791148b;  */

void FUN_107911454(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_107911454();
    FUN_107911454(*(undefined8 *)(unaff_x19 + 8));
    func_0x0001078f4acc(unaff_x19 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


