/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109b7c6a4; end: 109b7c71b;  */

bool FUN_109b7c6a4(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (0x1f < (ulong)param_2[1]) {
    pcVar1 = "";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x00010822d4a4(pcVar1,0x20,&uStack_40,(ulong)&uStack_40 | 4,(ulong)&uStack_40 | 8,
                        (ulong)&uStack_40 | 0xc,&uStack_30,0);
    return (int)pcVar1 == 0;
  }
  return false;
}



/* Entry: 109b7c71c; end: 109b7c773;  */

void FUN_109b7c71c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2af10(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2af18(&lStack_30);
  return;
}



/* Entry: 109b7c774; end: 109b7cc2f;  */

undefined8 * FUN_109b7c774(long param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  char *unaff_x20;
  char *unaff_x21;
  char *unaff_x22;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_109b7c864:
    pcVar3 = "";
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x18);
    }
    param_2 = (uint *)&UNK_10f432965;
    _fopen();
    puVar4 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      _fseek();
      unaff_x21 = pcVar3;
      _ftell();
      param_2 = (uint *)0x0;
      _fseek(pcVar3,0,0);
      if ((long)unaff_x21 < 0x80000000) {
        if ((((2 < *(int *)(param_1 + 0xa4)) || (*(int *)(param_1 + 0xa8) != 1)) ||
            (*(int *)(param_1 + 0xac) != (int)unaff_x21)) ||
           (((*(ushort *)(param_1 + 0xa0) & 0xfff) != 0 ||
            (unaff_x22 = *(char **)(param_1 + 0xb0), unaff_x22 == (char *)0x0)))) {
          uStack_60 = CONCAT44((int)unaff_x21,1);
          FUN_109a83fd0(param_1 + 0xa0,2,&uStack_60,0);
          unaff_x22 = *(char **)(param_1 + 0xb0);
        }
        param_2 = (uint *)0x1;
        _fread(unaff_x22,1,unaff_x21,pcVar3);
        _fclose(pcVar3);
        if (unaff_x22 == unaff_x21) {
          lVar14 = *(long *)(param_1 + 0xb0);
          if (lVar14 != 0) goto LAB_109b7c9b0;
          puVar4 = (undefined8 *)0x0;
          unaff_x20 = pcVar3;
          goto LAB_109b7c9e8;
        }
      }
      else {
        _fclose(pcVar3);
      }
LAB_109b7c9e4:
      puVar4 = (undefined8 *)0x0;
      unaff_x20 = pcVar3;
    }
  }
  else {
    uVar9 = (ulong)*(uint *)(param_1 + 0x3c);
    if ((int)*(uint *)(param_1 + 0x3c) < 3) {
      lVar14 = (long)*(int *)(param_1 + 0x44) * (long)*(int *)(param_1 + 0x40);
    }
    else {
      lVar14 = 1;
      piVar13 = *(int **)(param_1 + 0x78);
      do {
        lVar14 = lVar14 * *piVar13;
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar9 != 0);
    }
    if (lVar14 == 0) goto LAB_109b7c864;
    if (*(long *)(param_1 + 0x70) != 0) {
      piVar13 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      piVar13 = (int *)(*(long *)(param_1 + 0xd8) + 0x14);
      do {
        iVar12 = *piVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0xa0);
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xa4) < 1) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x38);
LAB_109b7c954:
      if (2 < *(int *)(param_1 + 0x3c)) goto LAB_109b7c988;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0x3c);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x40);
      puVar4 = *(undefined8 **)(param_1 + 0x80);
      puVar16 = *(undefined8 **)(param_1 + 0xe8);
      *puVar16 = *puVar4;
      puVar16[1] = puVar4[1];
    }
    else {
      lVar14 = 0;
      lVar15 = *(long *)(param_1 + 0xe0);
      do {
        *(undefined4 *)(lVar15 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0xa4) < 3) goto LAB_109b7c954;
LAB_109b7c988:
      param_2 = (uint *)(param_1 + 0x38);
      func_0x000109a84868(param_1 + 0xa0);
    }
    lVar14 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0xb0) = lVar14;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x68);
    puVar4 = (undefined8 *)0x0;
    pcVar3 = unaff_x20;
    if (lVar14 != 0) {
LAB_109b7c9b0:
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      param_2 = (uint *)0x20;
      func_0x00010822d4a4(lVar14,0x20,&uStack_60,(ulong)&uStack_60 | 4,(ulong)&uStack_60 | 8,
                          (ulong)&uStack_60 | 0xc,&uStack_50,0);
      if ((int)lVar14 != 0) goto LAB_109b7c9e4;
      *(undefined8 *)(param_1 + 8) = uStack_60;
      uVar7 = 0x10;
      if ((int)uStack_58 != 0) {
        uVar7 = 0x18;
      }
      uVar10 = 3;
      if ((int)uStack_58 != 0) {
        uVar10 = 4;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar7;
      *(undefined4 *)(param_1 + 0x100) = uVar10;
      puVar4 = (undefined8 *)0x1;
      unaff_x20 = pcVar3;
    }
  }
LAB_109b7c9e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  uStack_68 = 0x109b7ca58;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(uint *)(puVar4 + 1);
  pcStack_90 = unaff_x22;
  pcStack_88 = unaff_x21;
  pcStack_80 = unaff_x20;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((0 < (int)uVar8) && (uVar11 = *(uint *)((long)puVar4 + 0xc), 0 < (int)uVar11)) {
    if (param_2[3] == uVar8 && param_2[2] == uVar11) {
      uVar17 = *(uint *)(puVar4 + 2);
      if ((*param_2 & 0xfff) != uVar17) goto LAB_109b7cac8;
    }
    else {
      uVar17 = *(uint *)(puVar4 + 2);
LAB_109b7cac8:
      if ((((param_2[3] != uVar8) || (2 < (int)param_2[1])) || (param_2[2] != uVar11)) ||
         (((*param_2 & 0xfff) != (uVar17 & 0xfff) || (*(long *)(param_2 + 4) == 0)))) {
        uStack_a0 = uVar11;
        uStack_9c = uVar8;
        FUN_109a83fd0(param_2,2,&uStack_a0);
        uVar11 = param_2[2];
        uVar8 = param_2[3];
      }
    }
    lVar14 = *(long *)(param_2 + 4);
    if ((int)param_2[1] < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = (int)*(undefined8 *)(*(long *)(param_2 + 0x12) + (ulong)param_2[1] * 8 + -8);
    }
    if (*(int *)(puVar4 + 0x20) == 4) {
      uVar6 = puVar4[0x16];
      uVar9 = (ulong)*(uint *)((long)puVar4 + 0xa4);
      if ((int)*(uint *)((long)puVar4 + 0xa4) < 3) {
        lVar15 = (long)*(int *)((long)puVar4 + 0xac) * (long)*(int *)(puVar4 + 0x15);
      }
      else {
        lVar15 = 1;
        piVar13 = (int *)puVar4[0x1c];
        do {
          lVar15 = lVar15 * *piVar13;
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 1;
        } while (uVar9 != 0);
      }
      uVar17 = param_2[0x14];
      lVar5 = 3;
LAB_109b7cbe4:
      func_0x00010822d910(lVar5,uVar6,lVar15,lVar14,uVar17,(long)(int)(iVar12 * uVar8 * uVar11));
    }
    else {
      if (*(int *)(puVar4 + 0x20) == 3) {
        uVar6 = puVar4[0x16];
        uVar9 = (ulong)*(uint *)((long)puVar4 + 0xa4);
        if ((int)*(uint *)((long)puVar4 + 0xa4) < 3) {
          lVar15 = (long)*(int *)((long)puVar4 + 0xac) * (long)*(int *)(puVar4 + 0x15);
        }
        else {
          lVar15 = 1;
          piVar13 = (int *)puVar4[0x1c];
          do {
            lVar15 = lVar15 * *piVar13;
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 1;
          } while (uVar9 != 0);
        }
        uVar17 = param_2[0x14];
        lVar5 = 2;
        goto LAB_109b7cbe4;
      }
      lVar5 = 0;
    }
    if (lVar5 == lVar14) {
      puVar4 = (undefined8 *)0x1;
      goto LAB_109b7cbf8;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_109b7cbf8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar4;
  }
  ___stack_chk_fail();
  *puVar4 = &PTR_DAT_110b28b88;
  lVar14 = puVar4[7];
  puVar4[7] = 0;
  puVar4[8] = 0;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + -4);
    do {
      iVar12 = *piVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      _free(*(undefined8 *)(lVar14 + -0xc));
    }
  }
  lVar14 = puVar4[3];
  puVar4[3] = 0;
  puVar4[4] = 0;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + -4);
    do {
      iVar12 = *piVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      _free(*(undefined8 *)(lVar14 + -0xc));
    }
  }
  lVar14 = puVar4[1];
  puVar4[1] = 0;
  puVar4[2] = 0;
  if (lVar14 != 0) {
    piVar13 = (int *)(lVar14 + -4);
    do {
      iVar12 = *piVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      _free(*(undefined8 *)(lVar14 + -0xc));
    }
  }
  return puVar4;
}



/* Entry: 109b7cc30; end: 109b7cc33;  */

undefined8 * FUN_109b7cc30(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_DAT_110b28b88;
  lVar4 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  lVar4 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -4);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar4 + -0xc));
    }
  }
  return param_1;
}



/* Entry: 109b7cc34; end: 109b7cc47;  */

void FUN_109b7cc34(void)

{
  FUN_109b76b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109b7cc48; end: 109b7cc9f;  */

void FUN_109b7cc48(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c2af14(&lStack_30);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c2af1c(&lStack_30);
  return;
}



/* Entry: 109b7cca0; end: 109b7cfb3;  */

undefined8 FUN_109b7cca0(long param_1,uint *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  char *pcVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 **ppuVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 auStack_f8 [2];
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  uint *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uStack_c0 = 0x42ff0000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  lStack_80 = (long)&uStack_bc + 4;
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  piVar5 = (int *)*param_3;
  if (((ulong)(param_3[1] - (long)piVar5) < 5) || (*piVar5 != 0x40)) {
    bVar1 = true;
    fVar18 = 100.0;
  }
  else {
    uVar6 = piVar5[1];
    uVar2 = uVar6;
    if ((int)uVar6 < 2) {
      uVar2 = 1;
    }
    fVar18 = (float)uVar2;
    bVar1 = 100 < (int)uVar6;
  }
  puVar14 = (ulong *)&uStack_b0;
  lStack_c8 = 0;
  if (((*param_2 & 7) != 0) || (uVar2 = *param_2 >> 3 & 0x1ff, uVar2 == 1)) {
    uVar17 = 0;
    goto LAB_109b7cd54;
  }
  if (uVar2 == 0) {
    uStack_d0 = 0;
    auStack_e0[0] = 0x1010000;
    auStack_f8[0] = 0x2010000;
    puStack_f0 = &uStack_c0;
    uStack_e8 = 0;
    puStack_d8 = param_2;
    FUN_109ac9fc8(auStack_e0,auStack_f8,8,0);
    ppuVar12 = &puStack_78;
    iVar16 = 3;
  }
  else {
    iVar16 = uVar2 + 1;
    ppuVar12 = (undefined8 **)(param_2 + 0x12);
    puVar14 = (ulong *)(param_2 + 4);
  }
  if (bVar1) {
    if (iVar16 == 4) {
      uVar8 = *puVar14;
      uVar2 = *(uint *)(ppuVar12 + 1);
      puVar10 = &UNK_10824685c;
LAB_109b7cea0:
      fVar18 = 70.0;
      uVar17 = 1;
      goto LAB_109b7cee0;
    }
    if (iVar16 == 3) {
      uVar8 = *puVar14;
      uVar2 = *(uint *)(ppuVar12 + 1);
      puVar10 = &UNK_108246680;
      goto LAB_109b7cea0;
    }
LAB_109b7cf18:
    uVar17 = 0;
  }
  else {
    if (iVar16 == 4) {
      uVar8 = *puVar14;
      uVar2 = *(uint *)(ppuVar12 + 1);
      puVar10 = &UNK_10824685c;
    }
    else {
      if (iVar16 != 3) goto LAB_109b7cf18;
      uVar8 = *puVar14;
      uVar2 = *(uint *)(ppuVar12 + 1);
      puVar10 = &UNK_108246680;
    }
    uVar17 = 0;
LAB_109b7cee0:
    func_0x000108246188(fVar18,uVar8,uVar4,uVar3,uVar2,puVar10,uVar17,&lStack_c8);
    if (uVar8 == 0) goto LAB_109b7cf18;
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) {
      pcVar9 = "";
      if (*(char **)(param_1 + 0x18) != (char *)0x0) {
        pcVar9 = *(char **)(param_1 + 0x18);
      }
      _fopen(pcVar9,&UNK_10f5173d2);
      if (pcVar9 != (char *)0x0) {
        _fwrite(lStack_c8,uVar8,1,pcVar9);
        _fclose(pcVar9);
      }
    }
    else {
      lVar11 = *plVar13;
      uVar15 = plVar13[1] - lVar11;
      if (uVar8 < uVar15 || uVar8 - uVar15 == 0) {
        if (uVar8 < uVar15) {
          plVar13[1] = lVar11 + uVar8;
        }
      }
      else {
        func_0x000107c27d58(plVar13,uVar8 - uVar15);
        lVar11 = **(long **)(param_1 + 0x28);
      }
      _memcpy(lVar11,lStack_c8,uVar8);
    }
    uVar17 = 1;
  }
  if (lStack_c8 != 0) {
    _free();
  }
LAB_109b7cd54:
  if (lStack_88 != 0) {
    piVar5 = (int *)(lStack_88 + 0x14);
    do {
      iVar16 = *piVar5;
      cVar7 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar1) {
        *piVar5 = iVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar11 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return uVar17;
}



/* Entry: 109b7cfb4; end: 109b7cfbb;  */

void FUN_109b7cfb4(void)

{
  return;
}



/* Entry: 109b7cfbc; end: 109b7cff7;  */

void FUN_109b7cfbc(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7cff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7cff8; end: 109b7cfff;  */

void FUN_109b7cff8(void)

{
  return;
}



/* Entry: 109b7d000; end: 109b7d03b;  */

void FUN_109b7d000(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109b7d038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109b7d03c; end: 109b7d1df;  */

undefined8 *
FUN_109b7d03c(double param_1,double param_2,undefined8 param_3,uint *param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3;
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  uVar4 = uVar2;
  _CGColorSpaceGetModel();
  uVar6 = (uint)param_2;
  uVar5 = (uint)param_1;
  bVar1 = (param_4[2] != uVar6 || param_4[3] != uVar5) || 2 < (int)param_4[1];
  if ((int)uVar4 == 0) {
    if (((bVar1) || ((*param_4 & 0xfff) != 0)) ||
       (puVar3 = *(undefined8 **)(param_4 + 4), puVar3 == (undefined8 *)0x0)) {
      uStack_50 = uVar6;
      uStack_4c = uVar5;
      FUN_109a83fd0(param_4,2,&uStack_50,0);
      puVar3 = *(undefined8 **)(param_4 + 4);
      uVar6 = param_4[2];
      uVar5 = param_4[3];
    }
    uVar4 = **(undefined8 **)(param_4 + 0x12);
    uVar7 = 0;
  }
  else {
    if (((bVar1) || ((*param_4 & 0xfff) != 0x18)) ||
       (puVar3 = *(undefined8 **)(param_4 + 4), puVar3 == (undefined8 *)0x0)) {
      uStack_50 = uVar6;
      uStack_4c = uVar5;
      FUN_109a83fd0(param_4,2,&uStack_50,0x18);
      puVar3 = *(undefined8 **)(param_4 + 4);
      uVar6 = param_4[2];
      uVar5 = param_4[3];
    }
    uVar7 = 5;
    if (param_5 != 0) {
      uVar7 = 1;
    }
    uVar4 = **(undefined8 **)(param_4 + 0x12);
  }
  _CGBitmapContextCreate(puVar3,(long)(int)uVar5,(long)(int)uVar6,8,uVar4,uVar2,uVar7);
  func_0x00010bdc1020(param_3);
  _CGContextDrawImage(0,0,param_1,param_2,puVar3,param_3);
  _CGContextRelease();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_109b7e318(puVar3 + 6,puVar3[7]);
  if (puVar3[3] != 0) {
    puVar3[4] = puVar3[3];
    __ZdlPv();
  }
  if (*(char *)((long)puVar3 + 0x17) < '\0') {
    __ZdlPv(*puVar3);
  }
  return puVar3;
}



/* Entry: 109b7d1e0; end: 109b7d22b;  */

undefined8 * FUN_109b7d1e0(undefined8 *param_1)

{
  FUN_109b7e318(param_1 + 6,param_1[7]);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109b7d22c; end: 109b7d2d7;  */

bool FUN_109b7d22c(long param_1)

{
  undefined8 *puVar1;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_109b7d2d8(&plStack_48);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  FUN_109b7e318((undefined8 *)(param_1 + 0x30),*puVar1);
  *(long **)(param_1 + 0x30) = plStack_48;
  *(long *)(param_1 + 0x38) = lStack_40;
  *(long *)(param_1 + 0x40) = lStack_38;
  if (lStack_38 == 0) {
    *(undefined8 *)(param_1 + 0x30) = puVar1;
  }
  else {
    plStack_48 = &lStack_40;
    *(undefined8 **)(lStack_40 + 0x10) = puVar1;
    lStack_40 = 0;
    lStack_38 = 0;
  }
  FUN_109b7e318(&plStack_48,lStack_40);
  return *(long *)(param_1 + 0x40) != 0;
}



/* Entry: 109b7d2d8; end: 109b7dcef;  */

void FUN_109b7d2d8(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long *extraout_x8;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined1 uStack_122;
  byte bStack_121;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  
  plVar22 = param_2 + 6;
  plVar18 = param_2 + 7;
  plVar6 = (long *)*plVar22;
  while (plVar6 != plVar18) {
    plVar10 = (long *)plVar6[1];
    plVar15 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar21 = (long *)plVar15[2];
        bVar4 = (long *)*plVar21 != plVar15;
        plVar15 = plVar21;
      } while (bVar4);
    }
    else {
      do {
        plVar21 = plVar10;
        plVar10 = (long *)*plVar21;
      } while ((long *)*plVar21 != (long *)0x0);
    }
    if ((long *)*plVar22 == plVar6) {
      *plVar22 = (long)plVar21;
    }
    param_2[8] = param_2[8] + -1;
    func_0x000104c611f0(param_2[7],plVar6);
    func_0x000109b7e360(plVar6 + 4);
    __ZdlPv(plVar6);
    plVar6 = plVar21;
  }
  plVar6 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    plVar6 = (long *)*param_2;
  }
  _fopen(plVar6,&UNK_10f432965);
  if (plVar6 != (long *)0x0) {
    lVar11 = (long)plVar6;
    _feof();
    iVar5 = (int)lVar11;
    while (iVar5 == 0) {
      puVar8 = &uStack_122;
      _fread(puVar8,1,2,plVar6);
      if (puVar8 < (undefined1 *)0x2) break;
      uVar13 = bStack_121 - 0xc0;
      if (uVar13 < 0x3f) {
        if ((1L << ((ulong)uVar13 & 0x3f) & 0x4000fffd2cff0015U) == 0) {
          if ((ulong)uVar13 == 0x21) {
            ppuVar9 = &puStack_120;
            _fread(ppuVar9,1,2,plVar6);
            uVar14 = 0;
            if ((undefined8 **)0x1 < ppuVar9) {
              uVar14 = (ulong)((uint)((ushort)puStack_120 >> 8) |
                              ((ushort)puStack_120 & 0xff00ff) << 8);
            }
            uVar20 = uVar14 - 6;
            if (uVar14 < 6 || uVar20 == 0) {
              lVar11 = 1;
              ___cxa_allocate_exception();
              iVar5 = 0x10b296f8;
              ___cxa_throw();
              FUN_109b7ddb8(&puStack_c0);
              __Unwind_Resume();
              *(undefined4 *)(extraout_x8 + 6) = 0;
              extraout_x8[3] = 0;
              extraout_x8[2] = 0;
              extraout_x8[5] = 0;
              extraout_x8[4] = 0;
              extraout_x8[1] = 0;
              *extraout_x8 = 0;
              extraout_x8[7] = 0;
              extraout_x8[8] = 0;
              *(undefined2 *)(extraout_x8 + 9) = 0xffff;
              *(undefined4 *)((long)extraout_x8 + 0x4a) = 0;
              *(undefined2 *)((long)extraout_x8 + 0x4e) = 0;
              plVar6 = (long *)(lVar11 + 0x38);
              plVar22 = (long *)*plVar6;
              plVar18 = plVar6;
              if (plVar22 != (long *)0x0) {
                do {
                  lVar11 = 8;
                  if (iVar5 <= (int)plVar22[4]) {
                    lVar11 = 0;
                    plVar18 = plVar22;
                  }
                  plVar22 = *(long **)((long)plVar22 + lVar11);
                } while (plVar22 != (long *)0x0);
                if ((plVar18 != plVar6) && ((int)plVar18[4] <= iVar5)) {
                  if (plVar18 + 5 != extraout_x8) {
                    func_0x000109b7e150(extraout_x8,plVar18[5],plVar18[6],
                                        plVar18[6] - plVar18[5] >> 3);
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (extraout_x8 + 3,plVar18 + 8);
                  lVar11 = plVar18[0xb];
                  lVar24 = plVar18[0xe];
                  lVar23 = plVar18[0xd];
                  extraout_x8[7] = plVar18[0xc];
                  extraout_x8[6] = lVar11;
                  extraout_x8[9] = lVar24;
                  extraout_x8[8] = lVar23;
                }
              }
              return;
            }
            uVar14 = param_2[4] - param_2[3];
            if (uVar20 < uVar14 || uVar20 - uVar14 == 0) {
              if (uVar20 < uVar14) {
                param_2[4] = param_2[3] + uVar20;
              }
            }
            else {
              func_0x000107c27d58(param_2 + 3,uVar20 - uVar14);
            }
            _fseek(plVar6,6,1);
            _fread(param_2[3],1,uVar20,plVar6);
            _feof(plVar6);
            _fclose(plVar6);
            bVar2 = *(byte *)param_2[3];
            uVar13 = (uint)bVar2;
            if (uVar13 != 0x4d) {
              uVar13 = 0;
            }
            uVar12 = 0x49;
            if (bVar2 != 0x49) {
              uVar12 = uVar13;
            }
            uVar13 = 0;
            if (bVar2 == ((byte *)param_2[3])[1]) {
              uVar13 = uVar12;
            }
            *(uint *)(param_2 + 9) = uVar13;
            plVar6 = param_2;
            FUN_109b7de38(param_2,2);
            if ((int)plVar6 != 0x2a) goto LAB_109b7d3b8;
            plVar6 = param_2;
            func_0x000109b7de98(param_2,4);
            plVar10 = param_2;
            FUN_109b7de38(param_2,8);
            if ((int)plVar10 == 0) goto LAB_109b7d3b8;
            uVar14 = 0;
            uVar13 = (int)plVar6 + 2;
            goto LAB_109b7d70c;
          }
        }
        else {
          ppuVar9 = &puStack_120;
          _fread(ppuVar9,1,2,plVar6);
          lVar11 = -2;
          if ((undefined8 **)0x1 < ppuVar9) {
            lVar11 = (ulong)((uint)((ushort)puStack_120 >> 8) |
                            ((ushort)puStack_120 & 0xff00ff) << 8) - 2;
          }
          _fseek(plVar6,lVar11,1);
        }
      }
      lVar11 = (long)plVar6;
      _feof();
      iVar5 = (int)lVar11;
    }
    _fclose(plVar6);
  }
  goto LAB_109b7d3b8;
LAB_109b7d70c:
  do {
    uStack_90 = 0;
    puStack_98 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    uVar20 = (ulong)uVar13;
    puStack_b8 = (undefined8 *)0x0;
    puStack_c0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffff;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    plVar6 = param_2;
    FUN_109b7de38(param_2,uVar20);
    iVar5 = (int)plVar6;
    uStack_78 = SUB82(plVar6,0);
    if (iVar5 < 0x132) {
      if (iVar5 < 0x11a) {
        if (iVar5 < 0x110) {
          if (iVar5 == 0x10e) {
            FUN_109b7df20(&puStack_120,param_2,uVar20);
          }
          else {
            if (iVar5 != 0x10f) goto LAB_109b7d988;
            FUN_109b7df20(&puStack_120,param_2,uVar20);
          }
        }
        else {
          if (iVar5 != 0x110) {
            if (iVar5 == 0x112) {
              plVar6 = param_2;
              FUN_109b7de38(param_2,uVar20 + 8);
              uStack_76 = SUB82(plVar6,0);
              goto LAB_109b7daa4;
            }
            goto LAB_109b7d988;
          }
          FUN_109b7df20(&puStack_120,param_2,uVar20);
        }
LAB_109b7da94:
        puStack_a0 = puStack_118;
        puStack_a8 = puStack_120;
        puStack_98 = puStack_110;
      }
      else if (iVar5 < 0x128) {
        if (iVar5 == 0x11a) {
          FUN_109b7e00c(&puStack_120,param_2,uVar20);
        }
        else {
          if (iVar5 != 0x11b) goto LAB_109b7d988;
          FUN_109b7e00c(&puStack_120,param_2,uVar20);
        }
LAB_109b7d9cc:
        puStack_b8 = puStack_118;
        puStack_c0 = puStack_120;
        puStack_b0 = puStack_110;
      }
      else {
        if (iVar5 == 0x128) {
          plVar6 = param_2;
          FUN_109b7de38(param_2,uVar20 + 8);
          uStack_76 = SUB82(plVar6,0);
          goto LAB_109b7daa4;
        }
        if (iVar5 == 0x131) {
          FUN_109b7df20(&puStack_120,param_2,uVar20);
          goto LAB_109b7da94;
        }
LAB_109b7d988:
        uStack_78 = 0xffff;
      }
    }
    else if (iVar5 < 0x213) {
      if (iVar5 < 0x13f) {
        if (iVar5 == 0x132) {
          FUN_109b7df20(&puStack_120,param_2,uVar20);
          goto LAB_109b7da94;
        }
        if (iVar5 == 0x13e) {
          puStack_120 = (undefined8 *)0x0;
          puStack_118 = (undefined8 *)0x0;
          puStack_110 = (undefined8 *)0x0;
          plVar6 = param_2;
          func_0x000109b7de98(param_2,uVar20 + 8);
          plVar15 = param_2;
          func_0x000109b7de98(param_2,(ulong)plVar6 & 0xffffffff);
          plVar21 = param_2;
          func_0x000109b7de98(param_2,((ulong)plVar6 & 0xffffffff) + 4);
          FUN_109b7e094(&puStack_120,(ulong)plVar15 & 0xffffffff | (long)plVar21 << 0x20);
          uVar20 = (ulong)((int)plVar6 + 8);
          plVar6 = param_2;
          func_0x000109b7de98(param_2,uVar20);
          plVar15 = param_2;
          func_0x000109b7de98(param_2,uVar20 + 4);
          FUN_109b7e094(&puStack_120,(ulong)plVar6 & 0xffffffff | (long)plVar15 << 0x20);
          goto LAB_109b7d9cc;
        }
        goto LAB_109b7d988;
      }
      if (iVar5 == 0x13f) {
        puStack_120 = (undefined8 *)0x0;
        puStack_118 = (undefined8 *)0x0;
        puStack_110 = (undefined8 *)0x0;
        plVar6 = param_2;
        func_0x000109b7de98(param_2,uVar20 + 8);
        lVar11 = 6;
        do {
          plVar15 = param_2;
          func_0x000109b7de98(param_2,(ulong)plVar6 & 0xffffffff);
          plVar21 = param_2;
          func_0x000109b7de98(param_2,((ulong)plVar6 & 0xffffffff) + 4);
          FUN_109b7e094(&puStack_120,(ulong)plVar15 & 0xffffffff | (long)plVar21 << 0x20);
          plVar6 = (long *)(ulong)((int)plVar6 + 8);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      else {
        if (iVar5 != 0x211) goto LAB_109b7d988;
        puStack_120 = (undefined8 *)0x0;
        puStack_118 = (undefined8 *)0x0;
        puStack_110 = (undefined8 *)0x0;
        plVar6 = param_2;
        func_0x000109b7de98(param_2,uVar20 + 8);
        lVar11 = 3;
        do {
          plVar15 = param_2;
          func_0x000109b7de98(param_2,(ulong)plVar6 & 0xffffffff);
          plVar21 = param_2;
          func_0x000109b7de98(param_2,((ulong)plVar6 & 0xffffffff) + 4);
          FUN_109b7e094(&puStack_120,(ulong)plVar15 & 0xffffffff | (long)plVar21 << 0x20);
          plVar6 = (long *)(ulong)((int)plVar6 + 8);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
LAB_109b7da58:
      puStack_b8 = puStack_118;
      puStack_c0 = puStack_120;
      puStack_b0 = puStack_110;
    }
    else if (iVar5 < 0x8298) {
      if (iVar5 != 0x213) {
        if (iVar5 == 0x214) {
          puStack_120 = (undefined8 *)0x0;
          puStack_118 = (undefined8 *)0x0;
          puStack_110 = (undefined8 *)0x0;
          plVar6 = param_2;
          func_0x000109b7de98(param_2,uVar20 + 8);
          lVar11 = 6;
          do {
            plVar15 = param_2;
            func_0x000109b7de98(param_2,(ulong)plVar6 & 0xffffffff);
            plVar21 = param_2;
            func_0x000109b7de98(param_2,((ulong)plVar6 & 0xffffffff) + 4);
            FUN_109b7e094(&puStack_120,(ulong)plVar15 & 0xffffffff | (long)plVar21 << 0x20);
            plVar6 = (long *)(ulong)((int)plVar6 + 8);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          goto LAB_109b7da58;
        }
        goto LAB_109b7d988;
      }
      plVar6 = param_2;
      FUN_109b7de38(param_2,uVar20 + 8);
      uStack_76 = SUB82(plVar6,0);
    }
    else {
      if (iVar5 == 0x8298) {
        FUN_109b7df20(&puStack_120,param_2,uVar20);
        goto LAB_109b7da94;
      }
      if (iVar5 != 0x8769) goto LAB_109b7d988;
    }
LAB_109b7daa4:
    puStack_120 = (undefined8 *)CONCAT62(puStack_120._2_6_,uStack_78);
    puStack_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    puStack_118 = (undefined8 *)0x0;
    FUN_109b7e2a8(&puStack_118,puStack_c0,puStack_b8,(long)puStack_b8 - (long)puStack_c0 >> 3);
    if ((long)puStack_98 < 0) {
      func_0x000107c3192c(&puStack_100,puStack_a8,puStack_a0);
    }
    else {
      puStack_f8 = puStack_a0;
      puStack_100 = puStack_a8;
      puStack_f0 = puStack_98;
    }
    uStack_e8 = CONCAT44(uStack_8c,uStack_90);
    uStack_d0 = CONCAT26(uStack_72,CONCAT24(uStack_74,CONCAT22(uStack_76,uStack_78)));
    uStack_e0 = uStack_88;
    uStack_d8 = uStack_80;
    lVar11 = 0x78;
    __Znwm();
    uVar12 = (uint)(ushort)puStack_120;
    *(uint *)(lVar11 + 0x20) = uVar12;
    *(undefined8 **)(lVar11 + 0x30) = puStack_110;
    *(undefined8 **)(lVar11 + 0x28) = puStack_118;
    *(undefined8 *)(lVar11 + 0x38) = uStack_108;
    puStack_118 = (undefined8 *)0x0;
    puStack_110 = (undefined8 *)0x0;
    *(undefined8 **)(lVar11 + 0x48) = puStack_f8;
    *(undefined8 **)(lVar11 + 0x40) = puStack_100;
    *(undefined8 **)(lVar11 + 0x50) = puStack_f0;
    uStack_108 = 0;
    puStack_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    *(ulong *)(lVar11 + 0x70) =
         CONCAT26(uStack_72,CONCAT24(uStack_74,CONCAT22(uStack_76,uStack_78)));
    *(undefined8 *)(lVar11 + 0x68) = uStack_80;
    *(undefined8 *)(lVar11 + 0x60) = uStack_88;
    *(ulong *)(lVar11 + 0x58) = CONCAT44(uStack_8c,uStack_90);
    plVar15 = (long *)*plVar18;
    plVar6 = plVar18;
    while (plVar21 = plVar6, plVar15 != (long *)0x0) {
      while (plVar21 = plVar15, uVar1 = *(uint *)(plVar21 + 4),
            uVar1 == (ushort)puStack_120 || (int)uVar1 < (int)uVar12) {
        if ((int)uVar12 <= (int)uVar1) {
          func_0x000109b7e360((uint *)(lVar11 + 0x20),plVar21,plVar6);
          __ZdlPv(lVar11);
          goto LAB_109b7dbac;
        }
        plVar15 = (long *)plVar21[1];
        if ((long *)plVar21[1] == (long *)0x0) {
          plVar6 = plVar21 + 1;
          goto LAB_109b7db90;
        }
      }
      plVar6 = plVar21;
      plVar15 = (long *)*plVar21;
    }
LAB_109b7db90:
    func_0x000109b7e3a4(plVar22,plVar21,plVar6,lVar11);
LAB_109b7dbac:
    if ((long)puStack_f0 < 0) {
      __ZdlPv(puStack_100);
    }
    if (puStack_118 != (undefined8 *)0x0) {
      puStack_110 = puStack_118;
      __ZdlPv();
    }
    if ((long)puStack_98 < 0) {
      __ZdlPv(puStack_a8);
    }
    if (puStack_c0 != (undefined8 *)0x0) {
      puStack_b8 = puStack_c0;
      __ZdlPv();
    }
    uVar13 = uVar13 + 0xc;
    uVar14 = uVar14 + 1;
  } while (uVar14 != ((ulong)plVar10 & 0xffffffff));
LAB_109b7d3b8:
  plVar10 = param_1 + 1;
  *plVar10 = 0;
  param_1[2] = 0;
  *param_1 = plVar10;
  plVar22 = (long *)*plVar22;
  plVar6 = plVar10;
  do {
    if (plVar22 == plVar18) {
      return;
    }
    plVar19 = (long *)*plVar10;
    plVar17 = plVar10;
    plVar15 = plVar10;
    plVar21 = plVar10;
    if (plVar6 == plVar10) {
LAB_109b7d474:
      if (plVar19 != (long *)0x0) {
        plVar15 = plVar17 + 1;
        plVar21 = plVar17;
      }
      if (*plVar15 == 0) goto LAB_109b7d48c;
    }
    else {
      iVar5 = (int)plVar22[4];
      plVar16 = plVar10;
      plVar3 = plVar19;
      if (plVar19 == (long *)0x0) {
        do {
          plVar17 = (long *)plVar16[2];
          bVar4 = (long *)*plVar17 == plVar16;
          plVar16 = plVar17;
        } while (bVar4);
        if ((int)plVar17[4] < iVar5) goto LAB_109b7d474;
      }
      else {
        do {
          plVar17 = plVar3;
          plVar3 = (long *)plVar17[1];
        } while ((long *)plVar17[1] != (long *)0x0);
        if ((int)plVar17[4] < iVar5) goto LAB_109b7d474;
        do {
          while (plVar21 = plVar19, iVar5 < (int)plVar21[4]) {
            plVar19 = (long *)*plVar21;
            plVar15 = plVar21;
            if ((long *)*plVar21 == (long *)0x0) goto LAB_109b7d48c;
          }
          if (iVar5 <= (int)plVar21[4]) goto LAB_109b7d518;
          plVar19 = (long *)plVar21[1];
        } while ((long *)plVar21[1] != (long *)0x0);
        plVar15 = plVar21 + 1;
      }
LAB_109b7d48c:
      puVar7 = (undefined8 *)0x78;
      __Znwm();
      puStack_110 = (undefined8 *)0x0;
      *(int *)(puVar7 + 4) = (int)plVar22[4];
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puStack_120 = puVar7;
      puStack_118 = param_1;
      FUN_109b7e2a8(puVar7 + 5,plVar22[5],plVar22[6],plVar22[6] - plVar22[5] >> 3);
      if (*(char *)((long)plVar22 + 0x57) < '\0') {
        func_0x000107c3192c(puVar7 + 8,plVar22[8],plVar22[9]);
      }
      else {
        lVar23 = plVar22[9];
        lVar11 = plVar22[8];
        puVar7[10] = plVar22[10];
        puVar7[9] = lVar23;
        puVar7[8] = lVar11;
      }
      lVar23 = plVar22[0xc];
      lVar11 = plVar22[0xb];
      lVar24 = plVar22[0xd];
      puVar7[0xe] = plVar22[0xe];
      puVar7[0xd] = lVar24;
      puVar7[0xc] = lVar23;
      puVar7[0xb] = lVar11;
      func_0x000109b7e3a4(param_1,plVar21,plVar15,puVar7);
      plVar6 = (long *)*param_1;
    }
LAB_109b7d518:
    plVar15 = (long *)plVar22[1];
    plVar21 = plVar22;
    if ((long *)plVar22[1] == (long *)0x0) {
      do {
        plVar22 = (long *)plVar21[2];
        bVar4 = (long *)*plVar22 != plVar21;
        plVar21 = plVar22;
      } while (bVar4);
    }
    else {
      do {
        plVar22 = plVar15;
        plVar15 = (long *)*plVar22;
      } while ((long *)*plVar22 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 109b7dcf0; end: 109b7ddb7;  */

void FUN_109b7dcf0(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x4a) = 0;
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  plVar1 = (long *)(param_2 + 0x38);
  plVar2 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar2 != (long *)0x0) {
    do {
      lVar4 = 8;
      if (param_3 <= (int)plVar2[4]) {
        lVar4 = 0;
        plVar3 = plVar2;
      }
      plVar2 = *(long **)((long)plVar2 + lVar4);
    } while (plVar2 != (long *)0x0);
    if ((plVar3 != plVar1) && ((int)plVar3[4] <= param_3)) {
      if (plVar3 + 5 != param_1) {
        func_0x000109b7e150(param_1,plVar3[5],plVar3[6],plVar3[6] - plVar3[5] >> 3);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 3,plVar3 + 8);
      lVar4 = plVar3[0xb];
      lVar6 = plVar3[0xe];
      lVar5 = plVar3[0xd];
      param_1[7] = plVar3[0xc];
      param_1[6] = lVar4;
      param_1[9] = lVar6;
      param_1[8] = lVar5;
    }
  }
  return;
}



/* Entry: 109b7ddb8; end: 109b7de37;  */

long * FUN_109b7ddb8(long *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109b7de38; end: 109b7df1f;  */

/* WARNING: Possible PIC construction at 0x000109b7df48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109b7e034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109b7e054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b7e038) */
/* WARNING: Removing unreachable block (ram,0x000109b7df4c) */
/* WARNING: Removing unreachable block (ram,0x000109b7df6c) */
/* WARNING: Removing unreachable block (ram,0x000109b7df58) */
/* WARNING: Removing unreachable block (ram,0x000109b7df70) */
/* WARNING: Removing unreachable block (ram,0x000109b7df80) */
/* WARNING: Removing unreachable block (ram,0x000109b7df84) */
/* WARNING: Removing unreachable block (ram,0x000109b7dff4) */
/* WARNING: Removing unreachable block (ram,0x000109b7df88) */
/* WARNING: Removing unreachable block (ram,0x000109b7df9c) */
/* WARNING: Removing unreachable block (ram,0x000109b7dfa8) */
/* WARNING: Removing unreachable block (ram,0x000109b7df90) */
/* WARNING: Removing unreachable block (ram,0x000109b7dfc4) */
/* WARNING: Removing unreachable block (ram,0x000109b7dfcc) */
/* WARNING: Removing unreachable block (ram,0x000109b7df98) */
/* WARNING: Removing unreachable block (ram,0x000109b7dfdc) */
/* WARNING: Removing unreachable block (ram,0x000109b7e058) */

uint FUN_109b7de38(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined **unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  undefined8 uVar11;
  
  uVar1 = param_2 + 1;
  lVar9 = *(long *)(param_1 + 0x18);
  if (uVar1 < (ulong)(*(long *)(param_1 + 0x20) - lVar9)) {
    if (*(int *)(param_1 + 0x48) == 0x49) {
      uVar4 = CONCAT11(*(undefined1 *)(lVar9 + uVar1),*(undefined1 *)(lVar9 + param_2));
    }
    else {
      uVar4 = CONCAT11(*(undefined1 *)(lVar9 + param_2),*(undefined1 *)(lVar9 + uVar1));
    }
    return (uint)uVar4;
  }
  puVar10 = &stack0xfffffffffffffff0;
  ppuVar6 = (undefined **)0x1;
  ___cxa_allocate_exception();
  ppuVar8 = &PTR_DAT_110b296f8;
  uVar11 = 0x109b7de98;
  ___cxa_throw();
  puVar5 = &stack0xfffffffffffffff0;
  while( true ) {
    uVar1 = (long)ppuVar8 + 3;
    puVar3 = ppuVar6[3];
    if (uVar1 < (ulong)((long)ppuVar6[4] - (long)puVar3)) break;
    *(undefined1 **)(puVar5 + -0x10) = puVar10;
    *(undefined8 *)(puVar5 + -8) = uVar11;
    uVar7 = 1;
    ___cxa_allocate_exception();
    ppuVar6 = &PTR_DAT_110b296f8;
    lVar9 = 0;
    ___cxa_throw();
    *(undefined8 *)(puVar5 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x22;
    *(long *)(puVar5 + -0x38) = unaff_x21;
    *(undefined ***)(puVar5 + -0x30) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x18) = FUN_109b7df20;
    puVar10 = puVar5 + -0x20;
    ppuVar8 = (undefined **)(lVar9 + 4);
    uVar11 = 0x109b7df4c;
    puVar5 = puVar5 + -0x50;
    unaff_x19 = uVar7;
    unaff_x20 = ppuVar6;
    unaff_x21 = lVar9;
  }
  pbVar2 = puVar3 + (long)ppuVar8;
  if (*(int *)(ppuVar6 + 9) == 0x49) {
    return (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 8 | (uint)(byte)puVar3[uVar1] << 0x18 |
           (uint)*pbVar2;
  }
  return (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
         (uint)(byte)puVar3[uVar1];
}



/* Entry: 109b7df20; end: 109b7e00b;  */

void FUN_109b7df20(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar12;
  
  uVar3 = param_2;
  func_0x000109b7de98(param_2,param_3 + 4);
  uVar14 = uVar3 & 0xffffffff;
  uVar2 = (uint)uVar3;
  if (uVar2 < 5) {
    uVar13 = 8;
  }
  else {
    uVar13 = param_2;
    func_0x000109b7de98(param_2,param_3 + 8);
    uVar13 = uVar13 & 0xffffffff;
  }
  lVar9 = *(long *)(param_2 + 0x18);
  uVar10 = *(long *)(param_2 + 0x20) - lVar9;
  if (uVar10 < uVar13 || uVar10 < uVar13 + uVar14) {
    puVar5 = (undefined8 *)0x1;
    ___cxa_allocate_exception();
    ppuVar8 = &PTR_DAT_110b296f8;
    lVar9 = 0;
    ___cxa_throw();
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    ppuVar6 = ppuVar8;
    func_0x000109b7de98(ppuVar8,lVar9 + 8);
    ppuVar7 = ppuVar8;
    func_0x000109b7de98(ppuVar8,(ulong)ppuVar6 & 0xffffffff);
    func_0x000109b7de98(ppuVar8,((ulong)ppuVar6 & 0xffffffff) + 4);
    FUN_109b7e094(puVar5,(ulong)ppuVar7 & 0xffffffff | (long)ppuVar8 << 0x20);
    return;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar4 = param_1;
    if (uVar2 == 0) goto LAB_109b7dfdc;
  }
  else {
    puVar5 = (undefined8 *)0x19;
    if ((uVar14 | 7) != 0x17) {
      puVar5 = (undefined8 *)((uVar14 | 7) + 1);
    }
    puVar4 = puVar5;
    __Znwm();
    param_1[1] = uVar14;
    param_1[2] = (ulong)puVar5 | 0x8000000000000000;
    *param_1 = puVar4;
  }
  puVar1 = (undefined1 *)(uVar13 + lVar9);
  puVar12 = puVar1;
  do {
    puVar11 = puVar12 + 1;
    param_1 = (undefined8 *)((long)puVar4 + 1);
    *(undefined1 *)puVar4 = *puVar12;
    puVar12 = puVar11;
    puVar4 = param_1;
  } while (puVar11 != puVar1 + uVar14);
LAB_109b7dfdc:
  *(undefined1 *)param_1 = 0;
  return;
}



/* Entry: 109b7e00c; end: 109b7e093;  */

void FUN_109b7e00c(undefined8 *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2;
  func_0x000109b7de98(param_2,param_3 + 8);
  uVar2 = param_2;
  func_0x000109b7de98(param_2,uVar1 & 0xffffffff);
  func_0x000109b7de98(param_2,(uVar1 & 0xffffffff) + 4);
  FUN_109b7e094(param_1,uVar2 & 0xffffffff | param_2 << 0x20);
  return;
}



/* Entry: 109b7e094; end: 109b7e26f;  */

void FUN_109b7e094(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar11 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    lVar10 = (long)puVar1 - *param_1;
    uVar5 = (lVar10 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
      FUN_10928ca64();
      uVar5 = param_1[2];
      plVar2 = (long *)*param_1;
      if ((ulong)((long)(uVar5 - (long)plVar2) >> 3) < param_4) {
        plVar6 = param_2;
        plVar3 = param_3;
        uVar8 = param_4;
        if (plVar2 != (long *)0x0) {
          param_1[1] = (long)plVar2;
          __ZdlPv();
          uVar5 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        if (param_4 >> 0x3d != 0) {
          FUN_10928ca64();
          if ((ulong)plVar6 >> 0x3d != 0) {
            FUN_10928ca64();
            if (uVar8 != 0) {
              FUN_109b7e270();
              plVar7 = (long *)plVar2[1];
              for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
                *plVar7 = *plVar6;
                plVar7 = plVar7 + 1;
              }
              plVar2[1] = (long)plVar7;
            }
            return;
          }
          plVar3 = plVar2;
          FUN_10928ca78();
          *plVar2 = (long)plVar3;
          plVar2[1] = (long)plVar3;
          plVar2[2] = (long)(plVar3 + (long)plVar6);
          return;
        }
        uVar8 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar8 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar8 = 0x1fffffffffffffff;
        }
        FUN_109b7e270(param_1,uVar8);
        plVar2 = (long *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *plVar2 = *param_2;
          plVar2 = plVar2 + 1;
        }
        param_1[1] = (long)plVar2;
      }
      else {
        plVar6 = (long *)param_1[1];
        lVar10 = (long)plVar6 - (long)plVar2;
        if ((ulong)(lVar10 >> 3) < param_4) {
          plVar3 = (long *)((long)param_2 + lVar10);
          plVar7 = plVar6;
          if (plVar6 != plVar2) {
            do {
              *plVar2 = *param_2;
              lVar10 = lVar10 + -8;
              plVar2 = plVar2 + 1;
              param_2 = param_2 + 1;
            } while (lVar10 != 0);
          }
          for (; plVar3 != param_3; plVar3 = plVar3 + 1) {
            *plVar6 = *plVar3;
            plVar6 = plVar6 + 1;
            plVar7 = plVar7 + 1;
          }
          param_1[1] = (long)plVar7;
        }
        else {
          for (; param_2 != param_3; param_2 = param_2 + 1) {
            *plVar2 = *param_2;
            plVar2 = plVar2 + 1;
          }
          param_1[1] = (long)plVar2;
        }
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_10928ca78();
    puVar1 = (undefined8 *)((long)plVar2 + lVar10);
    puVar11 = puVar1 + 1;
    *puVar1 = param_2;
    lVar9 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar10 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar2 + uVar8);
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return;
}



/* Entry: 109b7e270; end: 109b7e2a7;  */

void FUN_109b7e270(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_10928ca78();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    return;
  }
  FUN_10928ca64();
  if (param_4 != 0) {
    FUN_109b7e270();
    puVar2 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (long)puVar2;
  }
  return;
}



/* Entry: 109b7e2a8; end: 109b7e317;  */

void FUN_109b7e2a8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_109b7e270(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109b7e318; end: 109b7e46f;  */

void FUN_109b7e318(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109b7e318(param_1,*param_2);
    FUN_109b7e318(param_1,param_2[1]);
    func_0x000109b7e360(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109b7e470; end: 109b7e4db;  */

void FUN_109b7e470(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_109b7e4dc(param_2,param_3,2,param_1);
  return;
}



/* Entry: 109b7e4dc; end: 109b7eabb;  */

long ** FUN_109b7e4dc(long **param_1,long **param_2,long *param_3,long **param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long **pplStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  int iStack_178;
  int iStack_174;
  undefined4 auStack_170 [2];
  long **pplStack_168;
  undefined8 uStack_160;
  undefined1 auStack_154 [4];
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplStack_e0 = (long **)0x0;
  pplStack_d8 = (long **)0x0;
  uStack_140._0_4_ = 0x42ff0000;
  uVar19 = (ulong)&uStack_140 | 8;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_140._4_4_ = 0;
  uStack_138 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  plStack_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  pplVar8 = param_2;
  plVar12 = param_3;
  uStack_100 = uVar19;
  puStack_f8 = &uStack_f0;
  FUN_109b80700(&uStack_d0);
  if (plStack_150 != (long *)0x0) {
    plVar16 = plStack_150 + 1;
    do {
      iVar17 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plStack_150 + 0x10))();
    }
  }
  plStack_148 = (long *)pplStack_c8;
  plStack_150 = uStack_d0;
  uStack_d0 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  func_0x000107c2af30(&uStack_d0);
  if (plStack_148 != (long *)0x0) {
    auStack_154 = (undefined1  [4])0x1;
    uVar18 = (uint)param_2;
    if (8 < (int)uVar18) {
      if ((uVar18 >> 4 & 1) == 0) {
        if ((uVar18 >> 5 & 1) == 0) {
          if ((uVar18 >> 6 & 1) != 0) {
            auStack_154 = (undefined1  [4])0x8;
          }
        }
        else {
          auStack_154 = (undefined1  [4])0x4;
        }
      }
      else {
        auStack_154 = (undefined1  [4])0x2;
      }
    }
    (**(code **)(*plStack_148 + 0x28))(plStack_148,auStack_154);
    (**(code **)(*plStack_148 + 0x18))();
    plVar16 = plStack_148;
    (**(code **)(*plStack_148 + 0x30))();
    pplVar8 = param_1;
    if (((ulong)plVar16 & 1) != 0) {
      uVar3 = (uint)plStack_148[1];
      uVar4 = *(uint *)((long)plStack_148 + 0xc);
      pplVar9 = (long **)plStack_148[1];
      pplVar8 = (long **)(ulong)uVar4;
      plVar12 = plStack_148;
      (**(code **)(*plStack_148 + 0x10))();
      if ((uVar18 >> 3 & 1) == 0) {
        uVar15 = 0;
        if (((ulong)param_2 & 2) != 0) {
          uVar15 = (uint)plVar12;
        }
        if ((((ulong)param_2 & 1) == 0) &&
           (((uVar18 >> 2 & 1) == 0 || (((ulong)plVar12 & 0xff8) == 0)))) {
          plVar12 = (long *)(ulong)(uVar15 & 7);
        }
        else {
          plVar12 = (long *)(ulong)(uVar15 & 7 | 0x10);
        }
      }
      iVar17 = (int)param_3;
      uVar18 = (uint)plVar12;
      if (((ulong)param_3 & 0xfffffffd) == 0) {
        if (iVar17 == 0) {
          FUN_109a38f44(pplVar8,uVar3);
          FUN_109a3907c();
          plVar12 = (long *)0x1;
          pplStack_e0 = pplVar8;
          FUN_109a85f44(&uStack_d0,pplVar8,0,1,0,0);
          if (lStack_108 != 0) {
            piVar1 = (int *)(lStack_108 + 0x14);
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
              func_0x000109a848d4(&uStack_140);
            }
          }
          if (0 < uStack_140._4_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(uStack_100 + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_140._4_4_);
          }
          goto LAB_109b7e800;
        }
        pplVar8 = param_4;
        if ((((2 < (int)*(uint *)((long)param_4 + 4)) || (*(uint *)(param_4 + 1) != uVar4)) ||
            (*(uint *)((long)param_4 + 0xc) != uVar3)) ||
           (((*(uint *)param_4 & 0xfff) != (uVar18 & 0xfff) || (param_4[2] == (long *)0x0)))) {
          uStack_d0 = (long *)CONCAT44(uVar3,uVar4);
          plVar12 = &uStack_d0;
          FUN_109a83fd0(param_4,2,plVar12);
        }
      }
      else {
        uVar15 = 0x80000000;
        if ((uVar18 & 7) != 4 && (uVar18 & 5) != 1) {
          uVar15 = 0;
        }
        FUN_109a3d32c(pplVar9,(uint)(0x442211088 >> ((uVar18 & 7) << 2)) & 0x78 | uVar15,
                      (uVar18 >> 3 & 0x1ff) + 1);
        plVar12 = (long *)0x1;
        pplStack_d8 = pplVar9;
        FUN_109a85f44(&uStack_d0);
        if (lStack_108 != 0) {
          piVar1 = (int *)(lStack_108 + 0x14);
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
            func_0x000109a848d4(&uStack_140);
          }
        }
        if (0 < uStack_140._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(uStack_100 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_140._4_4_);
        }
LAB_109b7e800:
        uStack_138 = SUB84(pplStack_c8,0);
        uStack_134 = (undefined4)((ulong)pplStack_c8 >> 0x20);
        uStack_140._0_4_ = SUB84(uStack_d0,0);
        uStack_128 = (undefined4)uStack_b8;
        uStack_124 = (undefined4)((ulong)uStack_b8 >> 0x20);
        uStack_130 = (undefined4)uStack_c0;
        uStack_12c = (undefined4)((ulong)uStack_c0 >> 0x20);
        uStack_118 = (undefined4)uStack_a8;
        uStack_114 = (undefined4)((ulong)uStack_a8 >> 0x20);
        uStack_120 = (undefined4)uStack_b0;
        uStack_11c = (undefined4)((ulong)uStack_b0 >> 0x20);
        lStack_108 = lStack_98;
        uStack_110 = (undefined4)uStack_a0;
        uStack_10c = (undefined4)((ulong)uStack_a0 >> 0x20);
        uStack_140._4_4_ = uStack_d0._4_4_;
        uVar7 = uStack_100;
        puVar13 = puStack_f8;
        if ((puStack_f8 != &uStack_f0) &&
           (uVar7 = uVar19, puVar13 = &uStack_f0, puStack_f8 != (undefined8 *)0x0)) {
          _free(puStack_f8[-1]);
        }
        puStack_f8 = puVar13;
        uStack_100 = uVar7;
        if (uStack_d0._4_4_ < 3) {
          puVar13 = (undefined8 *)((ulong)&uStack_d0 | 4);
          *puStack_f8 = *puStack_88;
          puStack_f8[1] = puStack_88[1];
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,0x42ff0000);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          *(undefined8 *)((long)puVar13 + 0x34) = 0;
          *(undefined8 *)((long)puVar13 + 0x2c) = 0;
          if (puStack_88 != auStack_80) {
            _free(puStack_88[-1]);
          }
        }
        else {
          uStack_100 = uStack_90;
          puStack_f8 = puStack_88;
        }
        pplVar8 = (long **)&uStack_140;
      }
      plVar16 = plStack_148;
      (**(code **)(*plStack_148 + 0x38))();
      if (((ulong)plVar16 & 1) != 0) {
        pplVar8 = (long **)auStack_154;
        plVar16 = plStack_148;
        (**(code **)(*plStack_148 + 0x28))();
        if (1 < (int)plVar16) {
          uStack_c0 = 0;
          uStack_d0 = (long *)CONCAT44(uStack_d0._4_4_,0x1010000);
          uStack_160 = 0;
          iStack_178 = 0;
          if (auStack_154 != (undefined1  [4])0x0) {
            iStack_178 = (int)uVar3 / (int)auStack_154;
          }
          iStack_174 = 0;
          if (auStack_154 != (undefined1  [4])0x0) {
            iStack_174 = (int)uVar4 / (int)auStack_154;
          }
          auStack_170[0] = 0x2010000;
          pplVar8 = (long **)auStack_170;
          plVar12 = (long *)&iStack_178;
          pplStack_168 = param_4;
          pplStack_c8 = param_4;
          FUN_109b0f718(0,0,&uStack_d0,pplVar8,plVar12,1);
        }
        pplVar9 = pplStack_d8;
        if (iVar17 != 1) {
          pplVar9 = param_4;
        }
        param_4 = pplStack_e0;
        if (iVar17 != 0) {
          param_4 = pplVar9;
        }
        goto LAB_109b7e99c;
      }
      FUN_109a3d454(&pplStack_d8);
      FUN_109a395e8(&pplStack_e0);
      if (param_4 == (long **)0x0) goto LAB_109b7e99c;
      if (param_4[7] != (long *)0x0) {
        piVar1 = (int *)((long)param_4[7] + 0x14);
        do {
          iVar17 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(param_4);
        }
      }
      param_4[7] = (long *)0x0;
      param_4[3] = (long *)0x0;
      param_4[2] = (long *)0x0;
      param_4[5] = (long *)0x0;
      param_4[4] = (long *)0x0;
      if (0 < (int)*(uint *)((long)param_4 + 4)) {
        lVar14 = 0;
        plVar16 = param_4[8];
        do {
          *(undefined4 *)((long)plVar16 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)*(uint *)((long)param_4 + 4));
      }
    }
  }
  param_4 = (long **)0x0;
LAB_109b7e99c:
  pplVar9 = &plStack_150;
  func_0x000107c2af30();
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
    do {
      iVar17 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 + -1 == 0) {
      pplVar9 = (long **)&uStack_140;
      func_0x000109a848d4();
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < uStack_140._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    pplVar9 = (long **)puStack_f8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_d0);
  func_0x000107c2af30(&plStack_150);
  func_0x00010567aa40(&uStack_140);
  pplVar10 = pplVar9;
  __Unwind_Resume(pplVar9);
  plStack_1a0 = param_3;
  pplStack_198 = pplVar9;
  puStack_190 = &stack0xfffffffffffffff0;
  pcStack_188 = FUN_109b7eabc;
  if (((ulong)*pplVar8 & 0x1f0000) == 0x10000) {
    puVar11 = (ulong *)pplVar8[1];
    uStack_1c0 = (ulong)&uStack_200 | 8;
    uStack_1f8 = puVar11[1];
    uStack_200 = *puVar11;
    uStack_1e8 = puVar11[3];
    uStack_1f0 = puVar11[2];
    uStack_1d8 = puVar11[5];
    uStack_1e0 = puVar11[4];
    uStack_1c8 = puVar11[7];
    uStack_1d0 = puVar11[6];
    puStack_1b8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    if (puVar11[7] != 0) {
      piVar1 = (int *)(puVar11[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar11 + 4) < 3) {
      uStack_1b0 = *(undefined8 *)puVar11[9];
      uStack_1a8 = ((undefined8 *)puVar11[9])[1];
    }
    else {
      uStack_200 = uStack_200 & 0xffffffff;
      func_0x000109a84868(&uStack_200);
    }
  }
  else {
    FUN_109a8a180(&uStack_200,pplVar8,0xffffffff);
  }
  FUN_109b7ec30(pplVar10,&uStack_200,plVar12,0);
  if (uStack_1c8 != 0) {
    piVar1 = (int *)(uStack_1c8 + 0x14);
    do {
      iVar17 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(&uStack_200);
    }
  }
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  if (0 < uStack_200._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_1c0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_200._4_4_);
  }
  if (puStack_1b8 != &uStack_1b0 && puStack_1b8 != (undefined8 *)0x0) {
    _free(puStack_1b8[-1]);
  }
  return pplVar10;
}



/* Entry: 109b7eabc; end: 109b7ec2f;  */

undefined8 FUN_109b7eabc(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_2 + 2);
    uStack_40 = (ulong)&uStack_80 | 8;
    uStack_78 = puVar5[1];
    uStack_80 = *puVar5;
    uStack_68 = puVar5[3];
    uStack_70 = puVar5[2];
    uStack_58 = puVar5[5];
    uStack_60 = puVar5[4];
    uStack_48 = puVar5[7];
    uStack_50 = puVar5[6];
    puStack_38 = &uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    if (puVar5[7] != 0) {
      piVar1 = (int *)(puVar5[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_30 = *(undefined8 *)puVar5[9];
      uStack_28 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_80 = uStack_80 & 0xffffffff;
      func_0x000109a84868(&uStack_80);
    }
  }
  else {
    FUN_109a8a180(&uStack_80,param_2,0xffffffff);
  }
  FUN_109b7ec30(param_1,&uStack_80,param_3,0);
  if (uStack_48 != 0) {
    piVar1 = (int *)(uStack_48 + 0x14);
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
      func_0x000109a848d4(&uStack_80);
    }
  }
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (0 < uStack_80._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_40 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_80._4_4_);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return param_1;
}



/* Entry: 109b7ec30; end: 109b7eff3;  */

long * FUN_109b7ec30(undefined8 param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 auStack_e0 [2];
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  uint *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  uint uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0x42ff0000;
  lStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar5 = *param_2 >> 3 & 0x1ff;
  puStack_58 = &uStack_50;
  if (uVar5 - 2 < 2 || uVar5 == 0) {
    FUN_109b80450(auStack_b0);
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8;
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8,*param_2 & 7);
      if (((ulong)plVar7 & 1) == 0) {
        plVar7 = plStack_a8;
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0);
        if (((ulong)plVar7 & 1) == 0) {
          puVar8 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *puVar8 = 1;
          puStack_c8 = puVar8 + 1;
          puStack_c0 = (uint *)0x21;
          *(undefined2 *)(puVar8 + 9) = 0x29;
          *(undefined8 *)(puVar8 + 3) = 0x616d726f4673693e;
          *(undefined8 *)(puVar8 + 1) = 0x2d7265646f636e65;
          *(undefined8 *)(puVar8 + 7) = 0x55385f5643286465;
          *(undefined8 *)(puVar8 + 5) = 0x74726f7070755374;
          FUN_109ac3188(0xffffff29,&puStack_c8,&UNK_10f5a1550,&UNK_10f5a142e,0x1ce);
          goto LAB_109b7ef44;
        }
        puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,0x2010000);
        puStack_c0 = &uStack_a0;
        uStack_b8 = 0;
        FUN_109a41858(0x3ff0000000000000,0,param_2,&puStack_c8,0);
        param_2 = &uStack_a0;
      }
      if (param_4 != 0) {
        uStack_b8 = 0;
        puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,0x1010000);
        auStack_e0[0] = 0x2010000;
        puStack_d8 = &uStack_a0;
        uStack_d0 = 0;
        puStack_c0 = param_2;
        FUN_109a491e0(&puStack_c8,auStack_e0,0);
        param_2 = &uStack_a0;
      }
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,param_1);
      plVar7 = plStack_a8;
      (**(code **)(*plStack_a8 + 0x28))(plStack_a8,param_2,param_3);
      func_0x000107c2af34(auStack_b0);
      if (lStack_68 != 0) {
        piVar1 = (int *)(lStack_68 + 0x14);
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
          func_0x000109a848d4(&uStack_a0);
        }
      }
      lStack_68 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      if (0 < (int)uStack_9c) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lStack_60 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uStack_9c);
      }
      if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
        _free(puStack_58[-1]);
      }
      return plVar7;
    }
    puVar8 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_c8 = puVar8 + 1;
    puStack_c0 = (uint *)0x33;
    *(undefined8 *)(puVar8 + 3) = 0x6120646e69662074;
    *(undefined8 *)(puVar8 + 1) = 0x6f6e20646c756f63;
    *(undefined4 *)((long)puVar8 + 0x33) = 0x6e6f6973;
    *(undefined1 *)((long)puVar8 + 0x37) = 0;
    *(undefined8 *)(puVar8 + 7) = 0x2065687420726f66;
    *(undefined8 *)(puVar8 + 5) = 0x2072657469727720;
    *(undefined8 *)(puVar8 + 0xb) = 0x736e657478652064;
    *(undefined8 *)(puVar8 + 9) = 0x6569666963657073;
    FUN_109ac3188(0xfffffffe,&puStack_c8,&UNK_10f5a1550,&UNK_10f5a142e,0x1cb);
  }
  else {
    puVar8 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar8 + 7) = 0x632e6567616d6920;
    *(undefined8 *)(puVar8 + 5) = 0x7c7c2031203d3d20;
    *(undefined8 *)(puVar8 + 0xb) = 0x7c2033203d3d2029;
    *(undefined8 *)(puVar8 + 9) = 0x28736c656e6e6168;
    *(undefined8 *)(puVar8 + 0xf) = 0x736c656e6e616863;
    *(undefined8 *)(puVar8 + 0xd) = 0x2e6567616d69207c;
    *puVar8 = 1;
    puStack_c8 = puVar8 + 1;
    puStack_c0 = (uint *)0x47;
    *(undefined1 *)((long)puVar8 + 0x4b) = 0;
    *(undefined8 *)((long)puVar8 + 0x43) = 0x34203d3d20292873;
    *(undefined8 *)(puVar8 + 3) = 0x2928736c656e6e61;
    *(undefined8 *)(puVar8 + 1) = 0x68632e6567616d69;
    FUN_109ac3188(0xffffff29,&puStack_c8,&UNK_10f5a1550,&UNK_10f5a142e,0x1c7);
  }
LAB_109b7ef44:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109b7ef48);
  (*pcVar6)();
}



/* Entry: 109b7eff4; end: 109b7f18f;  */

void FUN_109b7eff4(undefined4 *param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_2 + 2);
    uStack_40 = (ulong)&uStack_80 | 8;
    uStack_78 = puVar5[1];
    uStack_80 = *puVar5;
    uStack_68 = puVar5[3];
    uStack_70 = puVar5[2];
    uStack_58 = puVar5[5];
    uStack_60 = puVar5[4];
    uStack_48 = puVar5[7];
    uStack_50 = puVar5[6];
    puStack_38 = &uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    if (puVar5[7] != 0) {
      piVar1 = (int *)(puVar5[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_30 = *(undefined8 *)puVar5[9];
      uStack_28 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_80 = uStack_80 & 0xffffffff;
      func_0x000109a84868(&uStack_80);
    }
  }
  else {
    FUN_109a8a180(&uStack_80,param_2,0xffffffff);
  }
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_109b7f190(&uStack_80,param_3,param_1);
  if (uStack_48 != 0) {
    piVar1 = (int *)(uStack_48 + 0x14);
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
      func_0x000109a848d4(&uStack_80);
    }
  }
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (0 < uStack_80._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(uStack_40 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_80._4_4_);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return;
}



/* Entry: 109b7f190; end: 109b7f877;  */

void FUN_109b7f190(char **param_1,char **param_2,char **param_3)

{
  uint uVar1;
  char **ppcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  uint uVar9;
  char **ppcVar10;
  long *plVar11;
  char *pcVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint *extraout_x8;
  long lVar17;
  char *pcVar18;
  int *piVar19;
  undefined8 *puVar20;
  char **ppcVar21;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [4];
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint auStack_108 [2];
  long *plStack_100;
  char *pcStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char **ppcStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[2] != (char *)0x0) {
    uVar16 = (ulong)*(uint *)((long)param_1 + 4);
    if ((int)*(uint *)((long)param_1 + 4) < 3) {
      lVar17 = (long)(int)*(uint *)((long)param_1 + 0xc) * (long)(int)*(uint *)(param_1 + 1);
    }
    else {
      lVar17 = 1;
      piVar19 = (int *)param_1[8];
      do {
        lVar17 = lVar17 * *piVar19;
        uVar16 = uVar16 - 1;
        piVar19 = piVar19 + 1;
      } while (uVar16 != 0);
    }
    if ((lVar17 != 0) && ((*(byte *)((long)param_1 + 1) >> 6 & 1) != 0)) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_e8._0_4_ = 0x42ff0000;
      puStack_a8 = &uStack_e0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_e8._4_4_ = 0;
      uStack_e0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_bc = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      lStack_b0 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      pcStack_f8 = (char *)0x0;
      lStack_f0 = 0;
      puStack_a0 = &uStack_98;
      if ((int)(*(uint *)((long)param_1 + 0xc) * *(uint *)(param_1 + 1)) < 1) {
        auStack_108[0] = 0;
        auStack_108[1] = 0;
        plStack_100 = (long *)0x0;
        ppcVar21 = param_2;
        ppcVar10 = param_3;
      }
      else {
        if (lRam00000001137e1998 == lRam00000001137e1990) {
          ppcVar21 = (char **)0x0;
        }
        else {
          uVar16 = 0;
          ppcVar21 = (char **)0x0;
          lVar17 = 8;
          do {
            ppcVar10 = *(char ***)(lRam00000001137e1990 + lVar17);
            (**(code **)(*ppcVar10 + 0x48))();
            if (ppcVar21 <= ppcVar10) {
              ppcVar21 = ppcVar10;
            }
            uVar16 = uVar16 + 1;
            lVar17 = lVar17 + 0x10;
          } while (uVar16 < (ulong)(lRam00000001137e1998 - lRam00000001137e1990 >> 4));
        }
        uStack_78 = (char *)0x0;
        ppcStack_70 = (char **)0x0;
        puVar14 = (undefined4 *)(((ulong)ppcVar21 & 0xfffffffffffffffc) + 8);
        func_0x000107c2ae8c();
        uStack_78 = (char *)(puVar14 + 1);
        *puVar14 = 1;
        uStack_78[(long)ppcVar21] = '\0';
        ppcStack_70 = ppcVar21;
        _memset(uStack_78,0x20,ppcVar21);
        if ((int)*(uint *)((long)param_1 + 4) < 1) {
          lVar17 = 0;
        }
        else {
          lVar17 = *(long *)(param_1[9] + ((ulong)*(uint *)((long)param_1 + 4) * 2 + -2) * 4);
        }
        ppcVar10 = (char **)(lVar17 * (long)(int)*(uint *)((long)param_1 + 0xc) *
                                      (long)(int)*(uint *)(param_1 + 1));
        if (ppcVar21 <= ppcVar10) {
          ppcVar10 = ppcVar21;
        }
        pcVar18 = "";
        pcVar12 = pcVar18;
        if (uStack_78 != (char *)0x0) {
          pcVar12 = uStack_78;
        }
        ppcVar21 = (char **)param_1[2];
        _memcpy(pcVar12,ppcVar21);
        if (lRam00000001137e1998 != lRam00000001137e1990) {
          uVar16 = 0;
          lVar17 = 8;
          do {
            plVar11 = *(long **)(lRam00000001137e1990 + lVar17);
            ppcVar21 = (char **)&uStack_78;
            (**(code **)(*plVar11 + 0x50))(plVar11,ppcVar21);
            if ((int)plVar11 != 0) {
              (**(code **)(**(long **)(lRam00000001137e1990 + lVar17) + 0x58))(auStack_108);
              goto LAB_109b7f3a0;
            }
            uVar16 = uVar16 + 1;
            lVar17 = lVar17 + 0x10;
          } while (uVar16 < (ulong)(lRam00000001137e1998 - lRam00000001137e1990 >> 4));
        }
        auStack_108[0] = 0;
        auStack_108[1] = 0;
        plStack_100 = (long *)0x0;
LAB_109b7f3a0:
        pcVar12 = uStack_78;
        uStack_78 = (char *)0x0;
        ppcStack_70 = (char **)0x0;
        if (pcVar12 != (char *)0x0) {
          piVar19 = (int *)(pcVar12 + -4);
          do {
            iVar3 = *piVar19;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar7) {
              *piVar19 = iVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar3 + -1 == 0) {
            _free(*(undefined8 *)(pcVar12 + -0xc));
          }
        }
        if (plStack_100 != (long *)0x0) {
          plVar11 = plStack_100;
          ppcVar21 = param_1;
          (**(code **)(*plStack_100 + 0x20))(plStack_100,param_1);
          if (((ulong)plVar11 & 1) == 0) {
            FUN_109ac29a8(&uStack_78,0);
            pcVar12 = pcStack_f8;
            pcStack_f8 = (char *)0x0;
            lStack_f0 = 0;
            if (pcVar12 != (char *)0x0) {
              piVar19 = (int *)(pcVar12 + -4);
              do {
                iVar3 = *piVar19;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar7) {
                  *piVar19 = iVar3 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar3 + -1 == 0) {
                _free(*(undefined8 *)(pcVar12 + -0xc));
              }
            }
            pcVar12 = uStack_78;
            if (uStack_78 == (char *)0x0) {
              pcStack_f8 = (char *)0x0;
              lStack_f0 = (long)ppcStack_70;
            }
            else {
              piVar19 = (int *)(uStack_78 + -4);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar7) {
                  *piVar19 = *piVar19 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              pcStack_f8 = uStack_78;
              lStack_f0 = (long)ppcStack_70;
              uStack_78 = (char *)0x0;
              ppcStack_70 = (char **)0x0;
              if (pcVar12 != (char *)0x0) {
                piVar19 = (int *)(pcVar12 + -4);
                do {
                  iVar3 = *piVar19;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar7) {
                    *piVar19 = iVar3 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar3 + -1 == 0) {
                  _free(*(undefined8 *)(pcVar12 + -0xc));
                }
              }
            }
            pcVar12 = pcVar18;
            if (pcStack_f8 != (char *)0x0) {
              pcVar12 = pcStack_f8;
            }
            ppcVar21 = (char **)&UNK_10f5173d2;
            _fopen(pcVar12,&UNK_10f5173d2);
            if (pcVar12 == (char *)0x0) goto LAB_109b7f654;
            if ((int)*(uint *)((long)param_1 + 4) < 1) {
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)(param_1[9] + ((ulong)*(uint *)((long)param_1 + 4) * 2 + -2) * 4);
            }
            ppcVar10 = (char **)(lVar17 * (long)(int)*(uint *)(param_1 + 1) *
                                          (long)(int)*(uint *)((long)param_1 + 0xc));
            _fwrite(param_1[2],1,ppcVar10,pcVar12);
            _fclose(pcVar12);
            ppcVar21 = &pcStack_f8;
            (**(code **)(*plStack_100 + 0x18))(plStack_100,ppcVar21);
          }
          plVar11 = plStack_100;
          (**(code **)(*plStack_100 + 0x30))();
          if (((ulong)plVar11 & 1) == 0) {
            if (lStack_f0 != 0) {
              if (pcStack_f8 != (char *)0x0) {
                pcVar18 = pcStack_f8;
              }
              _remove(pcVar18);
            }
          }
          else {
            uVar4 = *(uint *)(plStack_100 + 1);
            uVar5 = *(uint *)((long)plStack_100 + 0xc);
            plVar11 = plStack_100;
            (**(code **)(*plStack_100 + 0x10))();
            uVar9 = (uint)plVar11;
            if (((uint)param_2 >> 3 & 1) == 0) {
              uVar1 = 0;
              if (((ulong)param_2 & 2) != 0) {
                uVar1 = uVar9;
              }
              if ((((ulong)param_2 & 1) == 0) &&
                 ((((uint)param_2 >> 2 & 1) == 0 || (((ulong)plVar11 & 0xff8) == 0)))) {
                uVar9 = uVar1 & 7;
              }
              else {
                uVar9 = uVar1 & 7 | 0x10;
              }
            }
            if ((((2 < (int)*(uint *)((long)param_3 + 4)) || (*(uint *)(param_3 + 1) != uVar5)) ||
                (*(uint *)((long)param_3 + 0xc) != uVar4)) ||
               (((*(uint *)param_3 & 0xfff) != (uVar9 & 0xfff) || (param_3[2] == (char *)0x0)))) {
              uStack_78 = (char *)CONCAT44(uVar4,uVar5);
              ppcVar10 = (char **)&uStack_78;
              FUN_109a83fd0(param_3,2);
            }
            plVar11 = plStack_100;
            ppcVar21 = param_3;
            (**(code **)(*plStack_100 + 0x38))(plStack_100,param_3);
            if (lStack_f0 != 0) {
              if (pcStack_f8 != (char *)0x0) {
                pcVar18 = pcStack_f8;
              }
              _remove(pcVar18);
            }
            if (((ulong)plVar11 & 1) == 0) {
              FUN_109a3d454(&uStack_80);
              FUN_109a395e8(&uStack_88);
              if (param_3[7] != (char *)0x0) {
                piVar19 = (int *)(param_3[7] + 0x14);
                do {
                  iVar3 = *piVar19;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar7) {
                    *piVar19 = iVar3 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar3 + -1 == 0) {
                  func_0x000109a848d4(param_3);
                }
              }
              param_3[7] = (char *)0x0;
              param_3[3] = (char *)0x0;
              param_3[2] = (char *)0x0;
              param_3[5] = (char *)0x0;
              param_3[4] = (char *)0x0;
              if (0 < (int)*(uint *)((long)param_3 + 4)) {
                lVar17 = 0;
                pcVar18 = param_3[8];
                do {
                  pcVar12 = pcVar18 + lVar17 * 4;
                  pcVar12[0] = '\0';
                  pcVar12[1] = '\0';
                  pcVar12[2] = '\0';
                  pcVar12[3] = '\0';
                  lVar17 = lVar17 + 1;
                } while (lVar17 < (int)*(uint *)((long)param_3 + 4));
              }
            }
          }
        }
      }
LAB_109b7f654:
      puVar13 = auStack_108;
      func_0x000107c2af30();
      pcVar18 = pcStack_f8;
      pcStack_f8 = (char *)0x0;
      lStack_f0 = 0;
      if (pcVar18 != (char *)0x0) {
        piVar19 = (int *)(pcVar18 + -4);
        do {
          iVar3 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          puVar13 = *(uint **)(pcVar18 + -0xc);
          _free();
        }
      }
      if (lStack_b0 != 0) {
        piVar19 = (int *)(lStack_b0 + 0x14);
        do {
          iVar3 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          puVar13 = (uint *)&uStack_e8;
          func_0x000109a848d4();
        }
      }
      lStack_b0 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      if (0 < uStack_e8._4_4_) {
        lVar17 = 0;
        do {
          puStack_a8[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_e8._4_4_);
      }
      if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
        puVar13 = (uint *)puStack_a0[-1];
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107c2af30(auStack_108);
      pcVar18 = pcStack_f8;
      pcStack_f8 = (char *)0x0;
      lStack_f0 = 0;
      if (pcVar18 != (char *)0x0) {
        piVar19 = (int *)(pcVar18 + -4);
        do {
          iVar3 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          _free(*(undefined8 *)(pcVar18 + -0xc));
        }
      }
      func_0x00010567aa40(&uStack_e8);
      __Unwind_Resume();
      if ((*puVar13 & 0x1f0000) == 0x10000) {
        puVar15 = *(ulong **)(puVar13 + 2);
        uStack_180 = (ulong)&uStack_1c0 | 8;
        uStack_1b8 = puVar15[1];
        uStack_1c0 = *puVar15;
        uStack_1a8 = puVar15[3];
        uStack_1b0 = puVar15[2];
        uStack_198 = puVar15[5];
        uStack_1a0 = puVar15[4];
        uStack_188 = puVar15[7];
        uStack_190 = puVar15[6];
        puStack_178 = &uStack_170;
        uStack_170 = 0;
        uStack_168 = 0;
        if (puVar15[7] != 0) {
          piVar19 = (int *)(puVar15[7] + 0x14);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar7) {
              *piVar19 = *piVar19 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (*(int *)((long)puVar15 + 4) < 3) {
          uStack_170 = *(undefined8 *)puVar15[9];
          uStack_168 = ((undefined8 *)puVar15[9])[1];
        }
        else {
          uStack_1c0 = uStack_1c0 & 0xffffffff;
          func_0x000109a84868(&uStack_1c0);
        }
      }
      else {
        FUN_109a8a180(&uStack_1c0);
      }
      auStack_220._0_4_ = 0x42ff0000;
      uStack_214 = 0;
      uStack_210 = 0;
      stack0xfffffffffffffde4 = 0;
      puStack_1e0 = auStack_218;
      uStack_204 = 0;
      uStack_200 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      uStack_1f4 = 0;
      uStack_1fc = 0;
      uStack_1f8 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      ppcVar2 = (char **)auStack_220;
      if (ppcVar10 != (char **)0x0) {
        ppcVar2 = ppcVar10;
      }
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      puStack_1d8 = &uStack_1d0;
      FUN_109b7f190(&uStack_1c0,ppcVar21,ppcVar2);
      ppcVar21 = (char **)auStack_220;
      if (ppcVar10 != (char **)0x0) {
        ppcVar21 = ppcVar10;
      }
      uVar9 = *(uint *)((long)ppcVar21 + 4);
      uVar4 = *(uint *)(ppcVar21 + 1);
      *extraout_x8 = *(uint *)ppcVar2;
      extraout_x8[1] = uVar9;
      extraout_x8[2] = uVar4;
      extraout_x8[3] = *(uint *)((long)ppcVar21 + 0xc);
      *(char **)(extraout_x8 + 4) = ppcVar21[2];
      pcVar18 = ppcVar21[3];
      *(char **)(extraout_x8 + 8) = ppcVar21[4];
      *(char **)(extraout_x8 + 6) = pcVar18;
      pcVar18 = ppcVar21[5];
      *(char **)(extraout_x8 + 0xc) = ppcVar21[6];
      *(char **)(extraout_x8 + 10) = pcVar18;
      pcVar18 = ppcVar21[7];
      *(char **)(extraout_x8 + 0xe) = pcVar18;
      *(uint **)(extraout_x8 + 0x10) = extraout_x8 + 2;
      puVar13 = extraout_x8 + 0x14;
      puVar13[0] = 0;
      puVar13[1] = 0;
      *(uint **)(extraout_x8 + 0x12) = puVar13;
      extraout_x8[0x16] = 0;
      extraout_x8[0x17] = 0;
      if (pcVar18 != (char *)0x0) {
        piVar19 = (int *)(pcVar18 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = *piVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        uVar9 = *(uint *)((long)ppcVar21 + 4);
      }
      if ((int)uVar9 < 3) {
        ppcVar21 = (char **)auStack_220;
        if (ppcVar10 != (char **)0x0) {
          ppcVar21 = ppcVar10;
        }
        pcVar18 = ppcVar21[9];
        puVar20 = *(undefined8 **)(extraout_x8 + 0x12);
        *puVar20 = *(undefined8 *)pcVar18;
        puVar20[1] = *(undefined8 *)(pcVar18 + 8);
      }
      else {
        extraout_x8[1] = 0;
        func_0x000109a84868(extraout_x8,ppcVar2);
      }
      if (lStack_1e8 != 0) {
        piVar19 = (int *)(lStack_1e8 + 0x14);
        do {
          iVar3 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(auStack_220);
        }
      }
      lStack_1e8 = 0;
      uStack_208 = 0;
      uStack_204 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      if (0 < (int)auStack_220._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)(puStack_1e0 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_220._4_4_);
      }
      if (puStack_1d8 != &uStack_1d0 && puStack_1d8 != (undefined8 *)0x0) {
        _free(puStack_1d8[-1]);
      }
      if (uStack_188 != 0) {
        piVar19 = (int *)(uStack_188 + 0x14);
        do {
          iVar3 = *piVar19;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar7) {
            *piVar19 = iVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_1c0);
        }
      }
      uStack_188 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      if (0 < uStack_1c0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)(uStack_180 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_1c0._4_4_);
      }
      if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
        _free(puStack_178[-1]);
      }
      return;
    }
  }
  puVar14 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar14 = 1;
  uStack_e8 = puVar14 + 1;
  uStack_e0 = 0x22;
  uStack_dc = 0;
  *(undefined8 *)(puVar14 + 3) = 0x2026262029287974;
  *(undefined8 *)(puVar14 + 1) = 0x706d652e66756221;
  *(undefined1 *)((long)puVar14 + 0x26) = 0;
  *(undefined2 *)(puVar14 + 9) = 0x2928;
  *(undefined8 *)(puVar14 + 7) = 0x73756f756e69746e;
  *(undefined8 *)(puVar14 + 5) = 0x6f4373692e667562;
  FUN_109ac3188(0xffffff29,&uStack_e8,&UNK_10f5a15b0,&UNK_10f5a142e,0x1ea);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109b7f79c);
  (*pcVar8)();
}



/* Entry: 109b7f878; end: 109b7fb5f;  */

void FUN_109b7f878(undefined4 *param_1,uint *param_2,undefined8 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar7 = *(ulong **)(param_2 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar7[1];
    uStack_b0 = *puVar7;
    uStack_98 = puVar7[3];
    uStack_a0 = puVar7[2];
    uStack_88 = puVar7[5];
    uStack_90 = puVar7[4];
    uStack_78 = puVar7[7];
    uStack_80 = puVar7[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar7[7] != 0) {
      piVar1 = (int *)(puVar7[7] + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (*(int *)((long)puVar7 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar7[9];
      uStack_58 = ((undefined8 *)puVar7[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    FUN_109a8a180(&uStack_b0,param_2,0xffffffff);
  }
  uStack_110 = 0x42ff0000;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  lStack_d0 = (long)&uStack_10c + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  puVar3 = &uStack_110;
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = param_4;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_c8 = &uStack_c0;
  FUN_109b7f190(&uStack_b0,param_3,puVar3);
  puVar2 = &uStack_110;
  if (param_4 != (undefined4 *)0x0) {
    puVar2 = param_4;
  }
  iVar9 = puVar2[1];
  uVar4 = puVar2[2];
  *param_1 = *puVar3;
  param_1[1] = iVar9;
  param_1[2] = uVar4;
  param_1[3] = puVar2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar2 + 4);
  uVar12 = *(undefined8 *)(puVar2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar12;
  uVar12 = *(undefined8 *)(puVar2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar12;
  lVar10 = *(long *)(puVar2 + 0xe);
  *(long *)(param_1 + 0xe) = lVar10;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar9 = puVar2[1];
  }
  if (iVar9 < 3) {
    puVar3 = &uStack_110;
    if (param_4 != (undefined4 *)0x0) {
      puVar3 = param_4;
    }
    puVar8 = *(undefined8 **)(puVar3 + 0x12);
    puVar11 = *(undefined8 **)(param_1 + 0x12);
    *puVar11 = *puVar8;
    puVar11[1] = puVar8[1];
  }
  else {
    param_1[1] = 0;
    func_0x000109a84868(param_1,puVar3);
  }
  if (lStack_d8 != 0) {
    piVar1 = (int *)(lStack_d8 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (0 < (int)uStack_10c) {
    lVar10 = 0;
    do {
      *(undefined4 *)(lStack_d0 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_10c);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  if (uStack_78 != 0) {
    piVar1 = (int *)(uStack_78 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109b7fb60; end: 109b8044f;  */

undefined8 FUN_109b7fb60(undefined8 param_1,uint *param_2,ulong *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  int *piVar16;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong uStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_2 + 2);
    uStack_60 = (ulong)&uStack_a0 | 8;
    uStack_98 = puVar12[1];
    uStack_a0 = *puVar12;
    uStack_88 = puVar12[3];
    uStack_90 = puVar12[2];
    uStack_78 = puVar12[5];
    uStack_80 = puVar12[4];
    uStack_68 = puVar12[7];
    uStack_70 = puVar12[6];
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
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
      uStack_50 = *(undefined8 *)puVar12[9];
      uStack_48 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_a0 = uStack_a0 & 0xffffffff;
      func_0x000109a84868(&uStack_a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_a0,param_2,0xffffffff);
  }
  uVar4 = (uint)uStack_a0 >> 3 & 0x1ff;
  if (1 < uVar4 - 2 && uVar4 != 0) {
    puVar11 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_110 = puVar11 + 1;
    uStack_108 = 0x2f;
    uStack_104 = 0;
    *(undefined1 *)((long)puVar11 + 0x33) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x7c7c2031203d3d20;
    *(undefined8 *)(puVar11 + 1) = 0x736c656e6e616863;
    *(undefined8 *)(puVar11 + 7) = 0x7c2033203d3d2073;
    *(undefined8 *)(puVar11 + 5) = 0x6c656e6e61686320;
    *(undefined8 *)((long)puVar11 + 0x2b) = 0x34203d3d20736c65;
    *(undefined8 *)((long)puVar11 + 0x23) = 0x6e6e616863207c7c;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a1425,&UNK_10f5a142e,0x252);
    goto LAB_109b802c8;
  }
  FUN_109b80450(auStack_b0,param_1);
  if (plStack_a8 == (long *)0x0) {
    puVar11 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_110 = puVar11 + 1;
    uStack_108 = 0x32;
    uStack_104 = 0;
    *(undefined8 *)(puVar11 + 3) = 0x6520646e69662074;
    *(undefined8 *)(puVar11 + 1) = 0x6f6e20646c756f63;
    *(undefined2 *)(puVar11 + 0xd) = 0x6e6f;
    *(undefined1 *)((long)puVar11 + 0x36) = 0;
    *(undefined8 *)(puVar11 + 7) = 0x732065687420726f;
    *(undefined8 *)(puVar11 + 5) = 0x66207265646f636e;
    *(undefined8 *)(puVar11 + 0xb) = 0x69736e6574786520;
    *(undefined8 *)(puVar11 + 9) = 0x6465696669636570;
    FUN_109ac3188(0xfffffffe,&uStack_110,&UNK_10f5a1425,&UNK_10f5a142e,0x256);
    goto LAB_109b802c8;
  }
  plVar6 = plStack_a8;
  (**(code **)(*plStack_a8 + 0x10))(plStack_a8,(uint)uStack_a0 & 7);
  if (((ulong)plVar6 & 1) == 0) {
    plVar6 = plStack_a8;
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8,0);
    if (((ulong)plVar6 & 1) == 0) {
      puVar11 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      uStack_110 = puVar11 + 1;
      uStack_108 = 0x21;
      uStack_104 = 0;
      *(undefined2 *)(puVar11 + 9) = 0x29;
      *(undefined8 *)(puVar11 + 3) = 0x616d726f4673693e;
      *(undefined8 *)(puVar11 + 1) = 0x2d7265646f636e65;
      *(undefined8 *)(puVar11 + 7) = 0x55385f5643286465;
      *(undefined8 *)(puVar11 + 5) = 0x74726f7070755374;
      FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a1425,&UNK_10f5a142e,0x25a);
      goto LAB_109b802c8;
    }
    uStack_110._0_4_ = 0x42ff0000;
    puStack_120 = &uStack_110;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_110._4_4_ = 0;
    uStack_108 = 0;
    puStack_d0 = &uStack_108;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    lStack_128 = CONCAT44(lStack_128._4_4_,0x2010000);
    uStack_118 = 0;
    puStack_c8 = &uStack_c0;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_a0,&lStack_128,0);
    if (uStack_d8 != 0) {
      piVar16 = (int *)(uStack_d8 + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (uStack_68 != 0) {
      piVar16 = (int *)(uStack_68 + 0x14);
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
        func_0x000109a848d4(&uStack_a0);
      }
    }
    uStack_68 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (uStack_a0._4_4_ < 1) {
LAB_109b7fd64:
      if (2 < uStack_110._4_4_) goto LAB_109b7fd98;
      uStack_a0 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
      uStack_98 = CONCAT44(uStack_104,uStack_108);
      *puStack_58 = *puStack_c8;
      puStack_58[1] = puStack_c8[1];
    }
    else {
      lVar13 = 0;
      do {
        *(undefined4 *)(uStack_60 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_a0._4_4_);
      if (uStack_a0._4_4_ < 3) goto LAB_109b7fd64;
LAB_109b7fd98:
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_110);
      func_0x000109a84868(&uStack_a0,&uStack_110);
    }
    uStack_88 = CONCAT44(uStack_f4,uStack_f8);
    uStack_90 = CONCAT44(uStack_fc,uStack_100);
    uStack_78 = CONCAT44(uStack_e4,uStack_e8);
    uStack_80 = CONCAT44(uStack_ec,uStack_f0);
    uStack_70 = CONCAT44(uStack_dc,uStack_e0);
    uStack_68 = uStack_d8;
    if (uStack_d8 != 0) {
      piVar16 = (int *)(uStack_d8 + 0x14);
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
        func_0x000109a848d4(&uStack_110);
      }
    }
    uStack_d8 = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    if (0 < uStack_110._4_4_) {
      lVar13 = 0;
      do {
        puStack_d0[lVar13] = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < uStack_110._4_4_);
    }
    if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
      _free(puStack_c8[-1]);
    }
  }
  plVar6 = plStack_a8;
  (**(code **)(*plStack_a8 + 0x20))(plStack_a8,param_3);
  if ((int)plVar6 == 0) {
    FUN_109ac29a8(&uStack_110,0);
    plVar6 = plStack_a8;
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,&uStack_110);
    if (((ulong)plVar6 & 1) == 0) {
      puVar7 = (undefined8 *)0xc;
      func_0x000107c2ae8c();
      lStack_128 = (long)puVar7 + 4;
      puStack_120 = (undefined8 *)0x4;
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = 0x65646f6300000001;
      FUN_109ac3188(0xffffff29,&lStack_128,&UNK_10f5a1425,&UNK_10f5a142e,0x26b);
    }
    else {
      plVar6 = plStack_a8;
      (**(code **)(*plStack_a8 + 0x28))(plStack_a8,&uStack_a0,param_4);
      (**(code **)(*plStack_a8 + 0x40))();
      if (((ulong)plVar6 & 1) == 0) {
        puVar7 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        lStack_128 = (long)puVar7 + 4;
        puStack_120 = (undefined8 *)0x4;
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = 0x65646f6300000001;
        FUN_109ac3188(0xffffff29,&lStack_128,&UNK_10f5a1425,&UNK_10f5a142e,0x26f);
      }
      else {
        pcVar8 = "";
        if ((char *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) != (char *)0x0) {
          pcVar8 = (char *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
        }
        _fopen(pcVar8,&UNK_10f432965);
        if (pcVar8 != (char *)0x0) {
          _fseek(pcVar8,0,2);
          pcVar9 = pcVar8;
          _ftell();
          pcVar14 = (char *)(param_3[1] - *param_3);
          if (pcVar9 < pcVar14 || (long)pcVar9 - (long)pcVar14 == 0) {
            if (pcVar9 < pcVar14) {
              param_3[1] = (ulong)(pcVar9 + *param_3);
            }
          }
          else {
            func_0x000107c27d58(param_3,(long)pcVar9 - (long)pcVar14);
          }
          _fseek(pcVar8,0,0);
          uVar10 = *param_3;
          _fread(uVar10,1,param_3[1] - uVar10,pcVar8);
          uVar15 = param_3[1] - *param_3;
          if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
            if (uVar10 < uVar15) {
              param_3[1] = *param_3 + uVar10;
            }
          }
          else {
            func_0x000107c27d58(param_3,uVar10 - uVar15);
          }
          _fclose(pcVar8);
          pcVar8 = "";
          if ((char *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110) != (char *)0x0) {
            pcVar8 = (char *)CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
          }
          _remove(pcVar8);
          lVar13 = CONCAT44(uStack_110._4_4_,(undefined4)uStack_110);
          uStack_110._0_4_ = 0;
          uStack_110._4_4_ = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          if (lVar13 != 0) {
            piVar16 = (int *)(lVar13 + -4);
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
              _free(*(undefined8 *)(lVar13 + -0xc));
            }
          }
          goto LAB_109b8000c;
        }
        puVar7 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        *puVar7 = 0x3d21206600000001;
        lStack_128 = (long)puVar7 + 4;
        puStack_120 = (undefined8 *)0x6;
        *(undefined1 *)((long)puVar7 + 10) = 0;
        *(undefined2 *)(puVar7 + 1) = 0x3020;
        FUN_109ac3188(0xffffff29,&lStack_128,&UNK_10f5a1425,&UNK_10f5a142e,0x272);
      }
    }
  }
  else {
    plVar6 = plStack_a8;
    (**(code **)(*plStack_a8 + 0x28))(plStack_a8,&uStack_a0,param_4);
    (**(code **)(*plStack_a8 + 0x40))();
    if (((ulong)plVar6 & 1) != 0) {
LAB_109b8000c:
      func_0x000107c2af34(auStack_b0);
      if (uStack_68 != 0) {
        piVar16 = (int *)(uStack_68 + 0x14);
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
          func_0x000109a848d4(&uStack_a0);
        }
      }
      uStack_68 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      if (0 < uStack_a0._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)(uStack_60 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_a0._4_4_);
      }
      if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
        _free(puStack_58[-1]);
      }
      return 1;
    }
    puVar7 = (undefined8 *)0xc;
    func_0x000107c2ae8c();
    uStack_110 = (undefined4 *)((long)puVar7 + 4);
    uStack_108 = 4;
    uStack_104 = 0;
    *(undefined1 *)(puVar7 + 1) = 0;
    *puVar7 = 0x65646f6300000001;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f5a1425,&UNK_10f5a142e,0x265);
  }
LAB_109b802c8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109b802cc);
  (*pcVar5)();
}



/* Entry: 109b80450; end: 109b806ff;  */

void FUN_109b80450(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  int *piVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcStack_70;
  undefined8 uStack_68;
  
  if (1 < (ulong)param_2[1]) {
    pcVar7 = "";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar7 = (char *)*param_2;
    }
    _strrchr(pcVar7,0x2e);
    puVar3 = PTR___DefaultRuneLocale_11034bcf8;
    if (pcVar7 != (char *)0x0) {
      uVar11 = 0;
      uVar14 = 0x80;
      do {
        cVar1 = pcVar7[uVar11 + 1];
        lVar8 = (long)cVar1;
        if (cVar1 < 0) {
          ___maskrune(lVar8,0x500);
          uVar4 = (uint)lVar8;
        }
        else {
          uVar4 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x500;
        }
        if (uVar4 == 0) {
          uVar14 = uVar11 & 0xffffffff;
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x80);
      if (lRam00000001137e19b0 != lRam00000001137e19a8) {
        uVar11 = 0;
        do {
          (**(code **)(**(long **)(lRam00000001137e19a8 + uVar11 * 0x10 + 8) + 0x30))(&pcStack_70);
          pcVar12 = pcStack_70;
          pcVar9 = "";
          if (pcStack_70 != (char *)0x0) {
            pcVar9 = pcStack_70;
          }
          _strchr(pcVar9,0x28);
          if (pcVar9 != (char *)0x0) {
            pcVar9 = pcVar9 + 1;
            _strchr(pcVar9,0x2e);
            while (pcVar9 != (char *)0x0) {
              if (uVar14 == 0) {
                uVar13 = 0;
LAB_109b805b8:
                if (uVar13 == uVar14) goto LAB_109b805c0;
              }
              else {
                uVar13 = 0;
                do {
                  cVar1 = pcVar9[uVar13 + 1];
                  lVar8 = (long)cVar1;
                  if (cVar1 < 0) {
                    ___maskrune(lVar8,0x500);
                    uVar4 = (uint)lVar8;
                  }
                  else {
                    uVar4 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x500;
                  }
                  if (uVar4 == 0) {
LAB_109b805ac:
                    uVar13 = uVar13 & 0xffffffff;
                    goto LAB_109b805b8;
                  }
                  iVar5 = (int)pcVar7[uVar13 + 1];
                  ___tolower();
                  iVar6 = (int)pcVar9[uVar13 + 1];
                  ___tolower();
                  if (iVar5 != iVar6) goto LAB_109b805ac;
                  uVar13 = uVar13 + 1;
                } while (uVar14 != uVar13);
LAB_109b805c0:
                cVar1 = pcVar9[uVar14 + 1];
                lVar8 = (long)cVar1;
                if (cVar1 < 0) {
                  ___maskrune(lVar8,0x500);
                  uVar4 = (uint)lVar8;
                }
                else {
                  uVar4 = *(uint *)(puVar3 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) & 0x500;
                }
                uVar13 = uVar14;
                if (uVar4 == 0) {
                  (**(code **)(**(long **)(lRam00000001137e19a8 + uVar11 * 0x10 + 8) + 0x38))
                            (param_1);
                  pcVar7 = pcStack_70;
                  pcStack_70 = (char *)0x0;
                  uStack_68 = 0;
                  if (pcVar7 == (char *)0x0) {
                    return;
                  }
                  piVar10 = (int *)(pcVar7 + -4);
                  do {
                    iVar5 = *piVar10;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                    if (bVar2) {
                      *piVar10 = iVar5 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (iVar5 + -1 != 0) {
                    return;
                  }
                  _free(*(undefined8 *)(pcVar7 + -0xc));
                  return;
                }
              }
              pcVar9 = pcVar9 + uVar13 + 2;
              _strchr(pcVar9,0x2e);
              pcVar12 = pcStack_70;
            }
          }
          pcStack_70 = (char *)0x0;
          uStack_68 = 0;
          if (pcVar12 != (char *)0x0) {
            piVar10 = (int *)(pcVar12 + -4);
            do {
              iVar5 = *piVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar2) {
                *piVar10 = iVar5 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar5 + -1 == 0) {
              _free(*(undefined8 *)(pcVar12 + -0xc));
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (ulong)(lRam00000001137e19b0 - lRam00000001137e19a8 >> 4));
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109b80700; end: 109b809bf;  */

void FUN_109b80700(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  undefined4 *puVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plStack_60;
  long *plStack_58;
  
  if (lRam00000001137e1998 == lRam00000001137e1990) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar10 = 0;
    plVar9 = (long *)0x0;
    lVar12 = 8;
    do {
      plVar4 = *(long **)(lRam00000001137e1990 + lVar12);
      (**(code **)(*plVar4 + 0x48))();
      if (plVar9 <= plVar4) {
        plVar9 = plVar4;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 < (ulong)(lRam00000001137e1998 - lRam00000001137e1990 >> 4));
  }
  pcVar5 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar5 = (char *)*param_2;
  }
  _fopen(pcVar5,&UNK_10f432965);
  if (pcVar5 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  piVar8 = (int *)(((ulong)plVar9 & 0xfffffffffffffffc) + 8);
  func_0x000107c2ae8c();
  plVar11 = (long *)(piVar8 + 1);
  *piVar8 = 1;
  *(undefined1 *)((long)plVar11 + (long)plVar9) = 0;
  plStack_60 = plVar11;
  plStack_58 = plVar9;
  _memset(plVar11,0x20,plVar9);
  plVar6 = plVar11;
  _fread(plVar11,1,plVar9,pcVar5);
  _fclose(pcVar5);
  plVar4 = plVar9;
  if (plVar6 <= plVar9) {
    plVar4 = plVar6;
  }
  if (plVar4 == (long *)0x0) {
    plVar9 = (long *)0x0;
LAB_109b80870:
    plStack_58 = (long *)0x0;
    plStack_60 = (long *)0x0;
    piVar8 = (int *)((long)plVar11 + -4);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)((long)plVar11 + -0xc));
    }
    plStack_58 = plVar4;
    if (plVar9 != (long *)0x0) {
      piVar8 = (int *)((long)plVar9 + -4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        iVar1 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_60 = plVar9;
      if (iVar1 + -1 == 0) {
        _free(*(undefined8 *)((long)plVar9 + -0xc));
      }
      goto LAB_109b808d0;
    }
  }
  else {
    if (plVar6 < plVar9) {
      puVar7 = (undefined4 *)(((ulong)plVar4 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      plVar9 = (long *)(puVar7 + 1);
      *puVar7 = 1;
      *(undefined1 *)((long)plVar9 + (long)plVar4) = 0;
      _memcpy(plVar9,plVar11,plVar4);
      goto LAB_109b80870;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = plStack_58;
    plVar9 = plStack_60;
    plVar11 = plStack_60;
    if (plStack_60 != (long *)0x0) goto LAB_109b80870;
  }
  plStack_60 = (long *)0x0;
LAB_109b808d0:
  if (lRam00000001137e1998 != lRam00000001137e1990) {
    uVar10 = 0;
    lVar12 = 8;
    do {
      plVar9 = *(long **)(lRam00000001137e1990 + lVar12);
      (**(code **)(*plVar9 + 0x50))(plVar9,&plStack_60);
      if ((int)plVar9 != 0) {
        (**(code **)(**(long **)(lRam00000001137e1990 + lVar12) + 0x58))(param_1);
        goto LAB_109b80938;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar10 < (ulong)(lRam00000001137e1998 - lRam00000001137e1990 >> 4));
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_109b80938:
  plVar9 = plStack_60;
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    piVar8 = (int *)((long)plVar9 + -4);
    do {
      iVar1 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)((long)plVar9 + -0xc));
    }
  }
  return;
}



/* Entry: 109b809c0; end: 109b809e7;  */

void FUN_109b809c0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x000107c2af34();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109b809e8; end: 109b80a9f;  */

void FUN_109b809e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000107c2af34();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109b80aa0; end: 109b80baf;  */

undefined8 FUN_109b80aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puStack_90;
  ulong uStack_88;
  
  if (param_4 == (uint *)0x0) {
    puVar5 = &UNK_10f5a15bf;
LAB_109b80b54:
    uVar8 = param_1;
    _fprintf(param_1,puVar5);
    if ((int)uVar8 < 0) goto LAB_109b80ba4;
  }
  else {
    uVar8 = param_1;
    _fprintf(param_1,&UNK_10f5a15bf);
    if ((int)uVar8 < 0) goto LAB_109b80ba4;
    uVar7 = *param_4;
    if ((uVar7 >> 1 & 1) != 0) {
      uVar8 = param_1;
      _fprintf(param_1,&UNK_10f5a15c5);
      if ((int)uVar8 < 0) goto LAB_109b80ba4;
      uVar7 = *param_4;
    }
    if ((uVar7 >> 2 & 1) != 0) {
      puVar5 = &UNK_10f5a15cf;
      goto LAB_109b80b54;
    }
  }
  uVar8 = param_1;
  _fprintf(param_1,&UNK_10f5a15dc);
  if ((-1 < (int)uVar8) && (_fprintf(param_1,&UNK_10f5a15f5), -1 < (int)param_1)) {
    return 0;
  }
LAB_109b80ba4:
  iVar2 = 1;
  uVar6 = 0;
  FUN_109b80bb0();
  if (iVar2 == 2) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined1 *)((long)puVar3 + 0x1a) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x6f6620656c696620;
    *(undefined8 *)(puVar3 + 1) = 0x6461622045424752;
    *(undefined8 *)((long)puVar3 + 0x12) = 0x203a74616d726f66;
    if (uVar6 == 0) {
      puVar9 = (undefined4 *)0x0;
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6;
      _strlen();
      puVar4 = (undefined4 *)((uVar10 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      puVar9 = puVar4 + 1;
      *puVar4 = 1;
      *(undefined1 *)((long)puVar9 + uVar10) = 0;
      _memcpy(puVar9,uVar6,uVar10);
    }
    uVar6 = uVar10 + 0x16;
    puVar4 = (undefined4 *)((uVar6 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_90 = (undefined8 *)(puVar4 + 1);
    *(undefined1 *)((long)puStack_90 + uVar6) = 0;
    uVar11 = *(undefined8 *)(puVar3 + 3);
    uVar8 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar4 + 0x12) = *(undefined8 *)((long)puVar3 + 0x12);
    *(undefined8 *)(puVar4 + 3) = uVar11;
    *(undefined8 *)(puVar4 + 1) = uVar8;
    uStack_88 = uVar6;
    _memcpy((long)puVar4 + 0x1a,puVar9,uVar10);
    FUN_109ac3188(0xfffffffe,&puStack_90,&UNK_10f5a16da,&UNK_10f5a16e5,0x61);
  }
  else if (iVar2 == 1) {
    puVar3 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_90 = (undefined8 *)(puVar3 + 1);
    uStack_88 = 0x10;
    *(undefined1 *)(puVar3 + 5) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x726f727265206574;
    *(undefined8 *)(puVar3 + 1) = 0x6972772045424752;
    FUN_109ac3188(0xfffffffe,&puStack_90,&UNK_10f5a16da,&UNK_10f5a16e5,0x5d);
  }
  else if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_90 = (undefined8 *)(puVar3 + 1);
    *puStack_90 = 0x6165722045424752;
    uStack_88 = 0xf;
    *(undefined1 *)((long)puVar3 + 0x13) = 0;
    *(undefined8 *)((long)puVar3 + 0xb) = 0x726f727265206461;
    FUN_109ac3188(0xfffffffe,&puStack_90,&UNK_10f5a16da,&UNK_10f5a16e5,0x5a);
  }
  else {
    puVar3 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 1) = 0x7272652045424752;
    *(undefined1 *)((long)puVar3 + 0x11) = 0;
    *(undefined8 *)((long)puVar3 + 9) = 0xa203a726f727265;
    if (uVar6 == 0) {
      puVar9 = (undefined4 *)0x0;
      uVar10 = 0;
    }
    else {
      uVar10 = uVar6;
      _strlen();
      puVar4 = (undefined4 *)((uVar10 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      puVar9 = puVar4 + 1;
      *puVar4 = 1;
      *(undefined1 *)((long)puVar9 + uVar10) = 0;
      _memcpy(puVar9,uVar6,uVar10);
    }
    uVar6 = uVar10 + 0xd;
    puVar4 = (undefined4 *)((uVar6 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_90 = (undefined8 *)(puVar4 + 1);
    *(undefined1 *)((long)puStack_90 + uVar6) = 0;
    uVar8 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar4 + 9) = *(undefined8 *)((long)puVar3 + 9);
    *(undefined8 *)(puVar4 + 1) = uVar8;
    uStack_88 = uVar6;
    _memcpy((long)puVar4 + 0x11,puVar9,uVar10);
    FUN_109ac3188(0xfffffffe,&puStack_90,&UNK_10f5a16da,&UNK_10f5a16e5,0x66);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109b80e64);
  (*pcVar1)();
}



/* Entry: 109b80bb0; end: 109b80f8b;  */

void FUN_109b80bb0(int param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puStack_50;
  ulong uStack_48;
  
  if (param_1 == 2) {
    puVar3 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined1 *)((long)puVar3 + 0x1a) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x6f6620656c696620;
    *(undefined8 *)(puVar3 + 1) = 0x6461622045424752;
    *(undefined8 *)((long)puVar3 + 0x12) = 0x203a74616d726f66;
    if (param_2 == 0) {
      puVar6 = (undefined4 *)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = param_2;
      _strlen();
      puVar4 = (undefined4 *)((uVar7 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      puVar6 = puVar4 + 1;
      *puVar4 = 1;
      *(undefined1 *)((long)puVar6 + uVar7) = 0;
      _memcpy(puVar6,param_2,uVar7);
    }
    uVar1 = uVar7 + 0x16;
    puVar4 = (undefined4 *)((uVar1 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_50 = (undefined8 *)(puVar4 + 1);
    *(undefined1 *)((long)puStack_50 + uVar1) = 0;
    uVar8 = *(undefined8 *)(puVar3 + 3);
    uVar5 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar4 + 0x12) = *(undefined8 *)((long)puVar3 + 0x12);
    *(undefined8 *)(puVar4 + 3) = uVar8;
    *(undefined8 *)(puVar4 + 1) = uVar5;
    uStack_48 = uVar1;
    _memcpy((long)puVar4 + 0x1a,puVar6,uVar7);
    FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f5a16da,&UNK_10f5a16e5,0x61);
  }
  else if (param_1 == 1) {
    puVar3 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_50 = (undefined8 *)(puVar3 + 1);
    uStack_48 = 0x10;
    *(undefined1 *)(puVar3 + 5) = 0;
    *(undefined8 *)(puVar3 + 3) = 0x726f727265206574;
    *(undefined8 *)(puVar3 + 1) = 0x6972772045424752;
    FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f5a16da,&UNK_10f5a16e5,0x5d);
  }
  else if (param_1 == 0) {
    puVar3 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    puStack_50 = (undefined8 *)(puVar3 + 1);
    *puStack_50 = 0x6165722045424752;
    uStack_48 = 0xf;
    *(undefined1 *)((long)puVar3 + 0x13) = 0;
    *(undefined8 *)((long)puVar3 + 0xb) = 0x726f727265206461;
    FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f5a16da,&UNK_10f5a16e5,0x5a);
  }
  else {
    puVar3 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 1) = 0x7272652045424752;
    *(undefined1 *)((long)puVar3 + 0x11) = 0;
    *(undefined8 *)((long)puVar3 + 9) = 0xa203a726f727265;
    if (param_2 == 0) {
      puVar6 = (undefined4 *)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = param_2;
      _strlen();
      puVar4 = (undefined4 *)((uVar7 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      puVar6 = puVar4 + 1;
      *puVar4 = 1;
      *(undefined1 *)((long)puVar6 + uVar7) = 0;
      _memcpy(puVar6,param_2,uVar7);
    }
    uVar1 = uVar7 + 0xd;
    puVar4 = (undefined4 *)((uVar1 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    *puVar4 = 1;
    puStack_50 = (undefined8 *)(puVar4 + 1);
    *(undefined1 *)((long)puStack_50 + uVar1) = 0;
    uVar5 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)((long)puVar4 + 9) = *(undefined8 *)((long)puVar3 + 9);
    *(undefined8 *)(puVar4 + 1) = uVar5;
    uStack_48 = uVar1;
    _memcpy((long)puVar4 + 0x11,puVar6,uVar7);
    FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f5a16da,&UNK_10f5a16e5,0x66);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109b80e64);
  (*pcVar2)();
}



/* Entry: 109b80f8c; end: 109b8123f;  */

undefined8 FUN_109b80f8c(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  char cVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined1 uStack_182;
  byte bStack_181;
  uint uStack_f4;
  char cStack_f0;
  char cStack_ef;
  undefined6 uStack_ee;
  long lStack_e8;
  long lStack_e0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
    *(undefined1 *)(param_4 + 1) = 0;
    uVar14 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_4 + 5) = uVar14;
  }
  pcVar7 = &cStack_f0;
  iVar12 = param_1;
  _fgets(pcVar7,0x80);
  if (pcVar7 == (char *)0x0) {
LAB_109b8120c:
    FUN_109b80bb0();
LAB_109b81214:
    puVar9 = &UNK_10f5a1617;
LAB_109b81234:
    pcVar7 = (char *)0x2;
    FUN_109b80bb0(2);
LAB_109b8123c:
    ___stack_chk_fail();
    pfVar11 = (float *)(puVar9 + 8);
    iVar12 = iVar12 + 1;
    do {
      iVar12 = iVar12 + -1;
      if (iVar12 < 1) {
        return 0;
      }
      fVar16 = pfVar11[-1];
      fVar17 = *pfVar11;
      fVar15 = pfVar11[-2];
      fVar13 = fVar16;
      if (fVar16 <= fVar17) {
        fVar13 = fVar17;
      }
      fVar2 = fVar15;
      if (fVar15 <= fVar13) {
        fVar2 = fVar13;
      }
      if (1e-32 <= fVar2) {
        fVar13 = fVar2;
        _frexpf(&uStack_188);
        fVar2 = (fVar13 * 256.0) / fVar2;
        uStack_184 = (undefined1)(int)(fVar17 * fVar2);
        uStack_183 = (undefined1)(int)(fVar16 * fVar2);
        uStack_182 = (undefined1)(int)(fVar15 * fVar2);
        bStack_181 = (byte)uStack_188 ^ 0x80;
      }
      else {
        bStack_181 = 0;
        uStack_182 = 0;
        uStack_183 = 0;
        uStack_184 = 0;
      }
      pfVar11 = pfVar11 + 3;
      puVar8 = &uStack_184;
      _fwrite(puVar8,4,1,pcVar7);
    } while (puVar8 != (undefined1 *)0x0);
    FUN_109b80bb0(1,0);
    return 0;
  }
  if (((param_4 != (uint *)0x0) && (cStack_f0 == '#')) && (cStack_ef == '?')) {
    uVar10 = 0;
    *param_4 = *param_4 | 1;
    puVar9 = PTR___DefaultRuneLocale_11034bcf8;
    do {
      cVar1 = *(char *)((long)&uStack_ee + uVar10);
      uVar6 = (ulong)cVar1;
      if (cVar1 == '\0') break;
      if (cVar1 < '\0') {
        ___maskrune(uVar6,0x4000);
        uVar5 = (uint)uVar6;
      }
      else {
        uVar5 = *(uint *)(puVar9 + (uVar6 & 0xffffffff) * 4 + 0x3c) & 0x4000;
      }
      if (uVar5 != 0) break;
      *(undefined1 *)((long)param_4 + uVar10 + 4) = *(undefined1 *)((long)&uStack_ee + uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xf);
    *(undefined1 *)((long)param_4 + (uVar10 & 0xffffffff) + 4) = 0;
  }
  bVar4 = false;
LAB_109b810cc:
  do {
    pcVar7 = &cStack_f0;
    iVar12 = param_1;
    _fgets(pcVar7,0x80);
    if (pcVar7 == (char *)0x0) goto LAB_109b8120c;
    if (cStack_f0 != '#') {
      if (cStack_f0 == '\n') {
        if (CONCAT11(cStack_ef,10) != 10) goto LAB_109b81214;
        if (!bVar4) {
          puVar9 = &UNK_10f5a1641;
          goto LAB_109b81234;
        }
        pcVar7 = &cStack_f0;
        iVar12 = param_1;
        _fgets(pcVar7,0x80);
        if (pcVar7 != (char *)0x0) {
          puVar9 = &UNK_10f5a165a;
          pcVar7 = &cStack_f0;
          _sscanf();
          if ((int)pcVar7 < 2) {
            puVar9 = &UNK_10f5a1666;
            goto LAB_109b81234;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
            return 0;
          }
          goto LAB_109b8123c;
        }
        goto LAB_109b8120c;
      }
      bVar3 = CONCAT62(uStack_ee,CONCAT11(cStack_ef,cStack_f0)) == 0x333d54414d524f46;
      if ((bVar3 && lStack_e8 == 0x6c725f7469622d32) && lStack_e0 == 0xa656267725f65 ||
          param_4 == (uint *)0x0) {
        bVar4 = (bool)(((bVar3 && lStack_e8 == 0x6c725f7469622d32) && lStack_e0 == 0xa656267725f65)
                      | bVar4);
        goto LAB_109b810cc;
      }
      pcVar7 = &cStack_f0;
      _sscanf(pcVar7,&UNK_10f5a1602);
      if ((int)pcVar7 == 1) {
        param_4[5] = uStack_f4;
        uVar5 = 2;
      }
      else {
        pcVar7 = &cStack_f0;
        _sscanf(pcVar7,&UNK_10f5a160b);
        if ((int)pcVar7 != 1) goto LAB_109b810cc;
        param_4[6] = uStack_f4;
        uVar5 = 4;
      }
      *param_4 = *param_4 | uVar5;
    }
  } while( true );
}



/* Entry: 109b81240; end: 109b81353;  */

undefined8 FUN_109b81240(undefined8 param_1,long param_2,int param_3)

{
  float fVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_68 [4];
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  byte bStack_61;
  
  pfVar3 = (float *)(param_2 + 8);
  param_3 = param_3 + 1;
  do {
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return 0;
    }
    fVar6 = pfVar3[-1];
    fVar7 = *pfVar3;
    fVar5 = pfVar3[-2];
    fVar4 = fVar6;
    if (fVar6 <= fVar7) {
      fVar4 = fVar7;
    }
    fVar1 = fVar5;
    if (fVar5 <= fVar4) {
      fVar1 = fVar4;
    }
    if (1e-32 <= fVar1) {
      fVar4 = fVar1;
      _frexpf(auStack_68);
      fVar1 = (fVar4 * 256.0) / fVar1;
      uStack_64 = (undefined1)(int)(fVar7 * fVar1);
      uStack_63 = (undefined1)(int)(fVar6 * fVar1);
      uStack_62 = (undefined1)(int)(fVar5 * fVar1);
      bStack_61 = auStack_68[0] ^ 0x80;
    }
    else {
      bStack_61 = 0;
      uStack_62 = 0;
      uStack_63 = 0;
      uStack_64 = 0;
    }
    pfVar3 = pfVar3 + 3;
    puVar2 = &uStack_64;
    _fwrite(puVar2,4,1,param_1);
  } while (puVar2 != (undefined1 *)0x0);
  FUN_109b80bb0(1,0);
  return 0;
}



/* Entry: 109b81354; end: 109b81417;  */

long FUN_109b81354(ulong param_1,float *param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  float *pfVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 uVar17;
  ulong uVar18;
  byte bVar19;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar20;
  ulong uVar21;
  undefined8 unaff_x21;
  undefined1 *puVar22;
  undefined8 unaff_x22;
  uint uVar23;
  int iVar24;
  ulong unaff_x23;
  undefined1 *puVar25;
  int iVar26;
  undefined8 unaff_x24;
  ulong uVar27;
  undefined8 unaff_x25;
  undefined1 *puVar28;
  byte bVar29;
  uint uVar30;
  undefined8 unaff_x26;
  ulong uVar31;
  undefined8 unaff_x27;
  long lVar32;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  double unaff_d12;
  undefined8 unaff_d13;
  
  iVar11 = (int)((ulong)param_5 >> 0x20);
  uVar10 = (uint)param_5;
code_r0x000109b81354:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_3 < 1) {
    return 0;
  }
  uVar7 = param_3 + 1;
  while( true ) {
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x34);
    uVar8 = 1;
    uVar21 = param_1;
    _fread(puVar25,4);
    if (puVar25 == (undefined1 *)0x0) break;
    if (*(byte *)((long)register0x00000008 + -0x31) == 0) {
      fVar37 = 0.0;
      fVar36 = 0.0;
      fVar33 = 0.0;
    }
    else {
      dVar35 = 1.0;
      _ldexp(*(byte *)((long)register0x00000008 + -0x31) - 0x88);
      fVar37 = (float)dVar35;
      fVar33 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x34));
      fVar33 = fVar37 * fVar33;
      fVar36 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x33));
      fVar36 = fVar37 * fVar36;
      fVar38 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x32));
      fVar37 = fVar37 * fVar38;
    }
    *param_2 = fVar37;
    param_2[1] = fVar36;
    param_2[2] = fVar33;
    param_2 = param_2 + 3;
    uVar7 = uVar7 - 1;
    if (uVar7 < 2) {
      return 0;
    }
  }
  pfVar5 = (float *)0x0;
  FUN_109b80bb0();
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_d13;
  *(double *)((long)register0x00000008 + -200) = unaff_d12;
  *(ulong *)((long)register0x00000008 + -0xc0) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0xb8) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0xb0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x78) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = (ulong)uVar7;
  *(ulong *)((long)register0x00000008 + -0x60) = param_1;
  *(float **)((long)register0x00000008 + -0x58) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = FUN_109b81418;
  uVar7 = (uint)uVar8;
  if (uVar7 - 0x8000 < 0xffff8008) {
LAB_109b81738:
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    pfVar5 = pfVar5 + 2;
    iVar11 = (int)uVar21 * uVar7 + 1;
    do {
      iVar11 = iVar11 + -1;
      if (iVar11 < 1) {
        return 0;
      }
      fVar37 = pfVar5[-1];
      fVar38 = *pfVar5;
      fVar36 = pfVar5[-2];
      fVar33 = fVar37;
      if (fVar37 <= fVar38) {
        fVar33 = fVar38;
      }
      fVar34 = fVar36;
      if (fVar36 <= fVar33) {
        fVar34 = fVar33;
      }
      if (1e-32 <= fVar34) {
        fVar33 = fVar34;
        _frexpf((undefined1 *)((long)register0x00000008 + -0xa8));
        fVar34 = (fVar33 * 256.0) / fVar34;
        uVar12 = (undefined1)(int)(fVar38 * fVar34);
        uVar15 = (undefined1)(int)(fVar37 * fVar34);
        uVar17 = (undefined1)(int)(fVar36 * fVar34);
        bVar19 = (byte)*(undefined4 *)((long)register0x00000008 + -0xa8) ^ 0x80;
      }
      else {
        bVar19 = 0;
        uVar17 = 0;
        uVar15 = 0;
        uVar12 = 0;
      }
      pfVar5 = pfVar5 + 3;
      *(byte *)((long)register0x00000008 + -0xa1) = bVar19;
      *(undefined1 *)((long)register0x00000008 + -0xa2) = uVar17;
      *(undefined1 *)((long)register0x00000008 + -0xa3) = uVar15;
      *(undefined1 *)((long)register0x00000008 + -0xa4) = uVar12;
      puVar20 = (undefined1 *)((long)register0x00000008 + -0xa4);
      _fwrite(puVar20,4,1,puVar25);
    } while (puVar20 != (undefined1 *)0x0);
    FUN_109b80bb0(1,0);
    return 0;
  }
  uVar3 = (ulong)(uVar7 << 2);
  _malloc();
  *(ulong *)((long)register0x00000008 + -0xe8) = uVar3;
  if (uVar3 == 0) goto LAB_109b81738;
  if ((int)uVar21 < 1) {
LAB_109b81700:
    _free(*(undefined8 *)((long)register0x00000008 + -0xe8));
    return 0;
  }
  uVar23 = uVar7 << 1;
  *(uint *)((long)register0x00000008 + -0xfc) = uVar7 >> 8;
  uVar30 = uVar7 * 3;
  unaff_d8 = 0x3949f623d5a8a733;
  uVar3 = uVar8 & 0xffffffff;
  *(uint *)((long)register0x00000008 + -0x104) = uVar30;
  *(uint *)((long)register0x00000008 + -0x100) = uVar23;
  while( true ) {
    uVar31 = (ulong)uVar30;
    uVar27 = (ulong)uVar23;
    lVar32 = 0x4070000000000000;
    *(undefined2 *)((long)register0x00000008 + -0xd6) = 0x202;
    *(char *)((long)register0x00000008 + -0xd4) =
         (char)*(undefined4 *)((long)register0x00000008 + -0xfc);
    *(char *)((long)register0x00000008 + -0xd3) = (char)uVar8;
    puVar20 = (undefined1 *)((long)register0x00000008 + -0xd6);
    uVar9 = 1;
    puVar22 = puVar25;
    _fwrite(puVar20,4);
    if (puVar20 == (undefined1 *)0x0) break;
    *(int *)((long)register0x00000008 + -0xf8) = (int)uVar21 + -1;
    *(int *)((long)register0x00000008 + -0xf4) = (int)uVar21;
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0xe8);
    uVar21 = uVar3;
    do {
      fVar37 = pfVar5[1];
      unaff_d10 = (ulong)(uint)fVar37;
      fVar38 = pfVar5[2];
      unaff_d11 = (ulong)(uint)fVar38;
      fVar36 = *pfVar5;
      unaff_d9 = (ulong)(uint)fVar36;
      fVar33 = fVar37;
      if (fVar37 <= fVar38) {
        fVar33 = fVar38;
      }
      fVar34 = fVar36;
      if (fVar36 <= fVar33) {
        fVar34 = fVar33;
      }
      unaff_d12 = (double)fVar34;
      if (1e-32 <= unaff_d12) {
        _frexpf((undefined1 *)((long)register0x00000008 + -0xdc));
        fVar33 = (float)(((double)fVar34 * 256.0) / unaff_d12);
        uVar12 = (undefined1)(int)(fVar38 * fVar33);
        uVar15 = (undefined1)(int)(fVar37 * fVar33);
        uVar17 = (undefined1)(int)(fVar36 * fVar33);
        bVar19 = (byte)*(undefined4 *)((long)register0x00000008 + -0xdc) ^ 0x80;
      }
      else {
        bVar19 = 0;
        uVar17 = 0;
        uVar15 = 0;
        uVar12 = 0;
      }
      *(byte *)((long)register0x00000008 + -0xd3) = bVar19;
      *(undefined1 *)((long)register0x00000008 + -0xd4) = uVar17;
      *(undefined1 *)((long)register0x00000008 + -0xd5) = uVar15;
      *puVar20 = uVar12;
      puVar20[uVar3] = uVar15;
      puVar20[uVar27] = uVar17;
      puVar20[uVar31] = bVar19;
      pfVar5 = pfVar5 + 3;
      puVar20 = puVar20 + 1;
      *(undefined1 *)((long)register0x00000008 + -0xd6) = uVar12;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
    *(float **)((long)register0x00000008 + -0xf0) = pfVar5;
    uVar21 = 0;
    do {
      unaff_x23 = 0;
      lVar32 = *(long *)((long)register0x00000008 + -0xe8) + uVar21 * uVar3;
      do {
        uVar27 = unaff_x23;
        uVar31 = 0;
        do {
          uVar9 = uVar31;
          iVar24 = (int)uVar9;
          uVar27 = (long)(int)uVar27 + (long)iVar24;
          iVar26 = (int)uVar27;
          if (iVar26 + 1 < (int)uVar7) {
            uVar18 = 1;
            do {
              uVar31 = uVar18;
              if ((*(char *)(lVar32 + uVar27) != *(char *)(lVar32 + (iVar26 + (int)uVar18))) ||
                 (uVar31 = uVar18 + 1, 0x7d < uVar18)) break;
              uVar18 = uVar31;
            } while ((long)(uVar31 + uVar27) < (long)uVar3);
          }
          else {
            uVar31 = 1;
          }
          uVar30 = (uint)uVar31;
        } while (iVar26 < (int)uVar7 && uVar30 < 4);
        uVar23 = (uint)unaff_x23;
        if ((iVar24 < 2) || (iVar24 != iVar26 - uVar23)) {
          while ((int)uVar23 < iVar26) {
            iVar24 = (int)unaff_x23;
            uVar23 = iVar26 - iVar24;
            if (0x7f < (int)uVar23) {
              uVar23 = 0x80;
            }
            pfVar5 = (float *)(ulong)uVar23;
            *(char *)((long)register0x00000008 + -0xd2) = (char)uVar23;
            puVar20 = (undefined1 *)((long)register0x00000008 + -0xd2);
            uVar9 = 1;
            puVar22 = puVar25;
            _fwrite(puVar20,1);
            if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
            lVar13 = lVar32 + iVar24;
            uVar9 = 1;
            puVar22 = puVar25;
            _fwrite(lVar13,(long)(int)uVar23);
            if (lVar13 == 0) goto LAB_109b81778;
            uVar23 = uVar23 + iVar24;
            unaff_x23 = (ulong)uVar23;
          }
        }
        else {
          *(byte *)((long)register0x00000008 + -0xd2) = (byte)uVar9 | 0x80;
          *(undefined1 *)((long)register0x00000008 + -0xd1) = *(undefined1 *)(lVar32 + (int)uVar23);
          puVar20 = (undefined1 *)((long)register0x00000008 + -0xd2);
          uVar9 = 1;
          puVar22 = puVar25;
          _fwrite(puVar20,2);
          unaff_x23 = uVar27;
          if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
        }
        if (3 < uVar30) {
          *(byte *)((long)register0x00000008 + -0xd2) = (byte)uVar31 ^ 0x80;
          *(undefined1 *)((long)register0x00000008 + -0xd1) = *(undefined1 *)(lVar32 + uVar27);
          puVar20 = (undefined1 *)((long)register0x00000008 + -0xd2);
          uVar9 = 1;
          puVar22 = puVar25;
          _fwrite(puVar20,2);
          if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
          unaff_x23 = (ulong)((int)unaff_x23 + uVar30);
        }
      } while ((int)unaff_x23 < (int)uVar7);
      uVar21 = uVar21 + 1;
    } while (uVar21 != 4);
    uVar21 = (ulong)*(uint *)((long)register0x00000008 + -0xf8);
    pfVar5 = *(float **)((long)register0x00000008 + -0xf0);
    uVar30 = *(uint *)((long)register0x00000008 + -0x104);
    uVar23 = *(uint *)((long)register0x00000008 + -0x100);
    if (*(int *)((long)register0x00000008 + -0xf4) < 2) goto LAB_109b81700;
  }
  _free(*(undefined8 *)((long)register0x00000008 + -0xe8));
LAB_109b81778:
  param_1 = 1;
  param_2 = (float *)0x0;
  FUN_109b80bb0();
  *(undefined8 *)((long)register0x00000008 + -0x170) = 0x80;
  *(long *)((long)register0x00000008 + -0x168) = lVar32;
  *(ulong *)((long)register0x00000008 + -0x160) = uVar31;
  *(ulong *)((long)register0x00000008 + -0x158) = uVar3;
  *(ulong *)((long)register0x00000008 + -0x150) = uVar27;
  *(ulong *)((long)register0x00000008 + -0x148) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x140) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0x138) = puVar25;
  *(ulong *)((long)register0x00000008 + -0x130) = uVar21;
  *(float **)((long)register0x00000008 + -0x128) = pfVar5;
  *(undefined1 **)((long)register0x00000008 + -0x120) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(code **)((long)register0x00000008 + -0x118) = FUN_109b81784;
  param_3 = (int)uVar9;
  if (0xffff8007 < param_3 - 0x8000U) {
    if ((int)puVar22 < 1) {
      puVar25 = (undefined1 *)0x0;
LAB_109b819b8:
      _free(puVar25);
      return 0;
    }
    puVar25 = (undefined1 *)0x0;
    *(ulong *)((long)register0x00000008 + -0x1a0) = (ulong)(uint)(param_3 << 2);
    *(ulong *)((long)register0x00000008 + -400) = (ulong)(uint)(param_3 << 1);
    *(ulong *)((long)register0x00000008 + -0x198) = (ulong)(uint)(param_3 * 3);
    *(ulong *)((long)register0x00000008 + -0x180) = uVar9 & 0xffffffff;
    *(int *)((long)register0x00000008 + -0x188) = param_3;
    do {
      puVar20 = (undefined1 *)((long)register0x00000008 + -0x174);
      lVar32 = 1;
      uVar21 = param_1;
      _fread(puVar20,4);
      iVar26 = (int)uVar21;
      if (puVar20 == (undefined1 *)0x0) {
LAB_109b81a6c:
        _free(puVar25);
        FUN_109b80bb0(0,0);
LAB_109b81a80:
        _free(puVar25);
        puVar6 = &UNK_10f5a16b8;
        do {
          FUN_109b80bb0(2,puVar6);
LAB_109b81a98:
          _free(puVar25);
          puVar6 = &UNK_10f5a1683;
        } while( true );
      }
      bVar19 = *(byte *)((long)register0x00000008 + -0x174);
      bVar29 = *(byte *)((long)register0x00000008 + -0x173);
      if (bVar19 != 2 || bVar29 != 2) goto LAB_109b819e8;
      if (*(char *)((long)register0x00000008 + -0x172) < '\0') goto LAB_109b819e4;
      if ((int)CONCAT11(*(char *)((long)register0x00000008 + -0x172),
                        *(undefined1 *)((long)register0x00000008 + -0x171)) != (int)uVar9)
      goto LAB_109b81a98;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)((long)register0x00000008 + -0x1a0);
        _malloc();
        iVar24 = (int)param_6;
        if (puVar25 == (undefined1 *)0x0) {
          iVar4 = 0xf5a1698;
          lVar13 = 3;
          FUN_109b80bb0();
          if (iVar11 != 0) {
            uVar7 = 0;
            if (iVar24 != 0) {
              uVar7 = 2;
            }
            do {
              if (0 < (int)uVar10) {
                uVar21 = 0;
                do {
                  *(char *)(lVar32 + uVar21) =
                       (char)((uint)*(byte *)(lVar13 + 1) * 0x2591 +
                              (uint)*(byte *)(lVar13 + (ulong)uVar7) * 0x74c +
                              (uint)*(byte *)(lVar13 + ((ulong)uVar7 ^ 2)) * 0x1323 + 0x2000 >> 0xe)
                  ;
                  uVar21 = uVar21 + 1;
                  lVar13 = lVar13 + 3;
                } while (((ulong)uVar10 & 0x7fffffff) != uVar21);
              }
              lVar13 = lVar13 + (int)(uVar10 * -3 + iVar4);
              lVar32 = lVar32 + iVar26;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          return lVar13;
        }
      }
      lVar32 = 0;
      puVar20 = puVar25;
      do {
        lVar32 = lVar32 + 1;
        lVar13 = *(long *)((long)register0x00000008 + -0x180);
        while (puVar20 < puVar25 + lVar32 * lVar13) {
          puVar28 = (undefined1 *)((long)register0x00000008 + -0x176);
          _fread(puVar28,2,1,param_1);
          if (puVar28 == (undefined1 *)0x0) goto LAB_109b81a6c;
          bVar19 = *(byte *)((long)register0x00000008 + -0x176);
          lVar16 = (long)(puVar25 + lVar32 * lVar13) - (long)puVar20;
          uVar7 = (uint)bVar19;
          if (bVar19 < 0x81) {
            if ((uVar7 == 0) || (lVar16 < (long)(ulong)bVar19)) goto LAB_109b81a80;
            puVar28 = puVar20 + 1;
            *puVar20 = *(undefined1 *)((long)register0x00000008 + -0x175);
            uVar7 = uVar7 - 1;
            puVar20 = puVar28;
            if (uVar7 != 0) {
              _fread(puVar28,(ulong)uVar7,1,param_1);
              if (puVar20 == (undefined1 *)0x0) goto LAB_109b81a6c;
              puVar20 = puVar28 + uVar7;
            }
          }
          else {
            if (lVar16 < (long)(ulong)(uVar7 - 0x80)) goto LAB_109b81a80;
            _memset(puVar20,*(undefined1 *)((long)register0x00000008 + -0x175));
            puVar20 = puVar20 + (ulong)(bVar19 - 0x81) + 1;
          }
        }
      } while (lVar32 != 4);
      *(int *)((long)register0x00000008 + -0x184) = (int)puVar22;
      lVar32 = 0;
      lVar13 = *(long *)((long)register0x00000008 + -0x198);
      lVar16 = *(long *)((long)register0x00000008 + -400);
      lVar14 = *(long *)((long)register0x00000008 + -0x180);
      do {
        bVar19 = puVar25[lVar32];
        *(byte *)((long)register0x00000008 + -0x174) = bVar19;
        bVar29 = puVar25[lVar32 + lVar14];
        *(byte *)((long)register0x00000008 + -0x173) = bVar29;
        bVar1 = puVar25[lVar32 + lVar16];
        *(byte *)((long)register0x00000008 + -0x172) = bVar1;
        bVar2 = puVar25[lVar32 + lVar13];
        *(byte *)((long)register0x00000008 + -0x171) = bVar2;
        if (bVar2 == 0) {
          fVar37 = 0.0;
          fVar36 = 0.0;
          fVar33 = 0.0;
        }
        else {
          dVar35 = 1.0;
          _ldexp(bVar2 - 0x88);
          fVar37 = (float)dVar35;
          fVar33 = (float)bVar19 * fVar37;
          fVar36 = (float)bVar29 * fVar37;
          fVar37 = (float)bVar1 * fVar37;
        }
        *param_2 = fVar37;
        param_2[1] = fVar36;
        param_2[2] = fVar33;
        param_2 = param_2 + 3;
        lVar32 = lVar32 + 1;
      } while (*(long *)((long)register0x00000008 + -0x180) != lVar32);
      uVar9 = (ulong)*(uint *)((long)register0x00000008 + -0x188);
      uVar7 = *(int *)((long)register0x00000008 + -0x184) - 1;
      puVar22 = (undefined1 *)(ulong)uVar7;
      if (uVar7 == 0 || *(int *)((long)register0x00000008 + -0x184) < 1) goto LAB_109b819b8;
    } while( true );
  }
  param_3 = (int)puVar22 * param_3;
  goto LAB_109b81a4c;
LAB_109b819e4:
  bVar29 = 2;
LAB_109b819e8:
  if (*(byte *)((long)register0x00000008 + -0x171) == 0) {
    fVar37 = 0.0;
    fVar36 = 0.0;
    fVar33 = 0.0;
  }
  else {
    dVar35 = 1.0;
    _ldexp(*(byte *)((long)register0x00000008 + -0x171) - 0x88);
    fVar37 = (float)dVar35;
    fVar33 = (float)bVar19 * fVar37;
    fVar36 = (float)bVar29 * fVar37;
    fVar38 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x172));
    fVar37 = fVar37 * fVar38;
  }
  *param_2 = fVar37;
  param_2[1] = fVar36;
  param_2[2] = fVar33;
  _free(puVar25);
  param_3 = (int)puVar22 * (int)uVar9 + -1;
  param_2 = param_2 + 3;
LAB_109b81a4c:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x120);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x118);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x130);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x128);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x140);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x138);
  unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x150);
  unaff_x23 = *(ulong *)((long)register0x00000008 + -0x148);
  unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x160);
  unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x158);
  unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x170);
  unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x168);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  goto code_r0x000109b81354;
}



/* Entry: 109b81418; end: 109b81783;  */

long FUN_109b81418(undefined1 *param_1,float *param_2,ulong param_3,ulong param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 uVar17;
  ulong uVar18;
  byte bVar19;
  float *unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar20;
  ulong unaff_x21;
  undefined1 *puVar21;
  undefined8 unaff_x22;
  uint uVar22;
  int iVar23;
  ulong unaff_x23;
  undefined8 unaff_x24;
  ulong uVar24;
  undefined8 unaff_x25;
  undefined1 *puVar25;
  byte bVar26;
  uint uVar27;
  undefined8 unaff_x26;
  ulong uVar28;
  undefined8 unaff_x27;
  long lVar29;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined8 unaff_d8;
  float fVar33;
  ulong unaff_d9;
  float fVar34;
  ulong unaff_d10;
  float fVar35;
  ulong unaff_d11;
  double unaff_d12;
  undefined8 unaff_d13;
  
  iVar11 = (int)((ulong)param_5 >> 0x20);
  uVar10 = (uint)param_5;
code_r0x000109b81418:
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(double *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar7 = (uint)param_3;
  if (0xffff8007 < uVar7 - 0x8000) {
    uVar3 = (ulong)(uVar7 << 2);
    _malloc();
    *(ulong *)((long)register0x00000008 + -0xa8) = uVar3;
    if (uVar3 != 0) {
      if ((int)param_4 < 1) {
LAB_109b81700:
        _free(*(undefined8 *)((long)register0x00000008 + -0xa8));
        return 0;
      }
      uVar22 = uVar7 << 1;
      *(uint *)((long)register0x00000008 + -0xbc) = uVar7 >> 8;
      uVar27 = uVar7 * 3;
      unaff_d8 = 0x3949f623d5a8a733;
      uVar3 = param_3 & 0xffffffff;
      *(uint *)((long)register0x00000008 + -0xc4) = uVar27;
      *(uint *)((long)register0x00000008 + -0xc0) = uVar22;
      while( true ) {
        uVar28 = (ulong)uVar27;
        uVar24 = (ulong)uVar22;
        lVar29 = 0x4070000000000000;
        *(undefined2 *)((long)register0x00000008 + -0x96) = 0x202;
        *(char *)((long)register0x00000008 + -0x94) =
             (char)*(undefined4 *)((long)register0x00000008 + -0xbc);
        *(char *)((long)register0x00000008 + -0x93) = (char)param_3;
        puVar20 = (undefined1 *)((long)register0x00000008 + -0x96);
        uVar9 = 1;
        puVar21 = param_1;
        _fwrite(puVar20,4);
        if (puVar20 == (undefined1 *)0x0) break;
        *(int *)((long)register0x00000008 + -0xb8) = (int)param_4 + -1;
        *(int *)((long)register0x00000008 + -0xb4) = (int)param_4;
        puVar20 = *(undefined1 **)((long)register0x00000008 + -0xa8);
        uVar9 = uVar3;
        do {
          fVar34 = param_2[1];
          unaff_d10 = (ulong)(uint)fVar34;
          fVar35 = param_2[2];
          unaff_d11 = (ulong)(uint)fVar35;
          fVar33 = *param_2;
          unaff_d9 = (ulong)(uint)fVar33;
          fVar30 = fVar34;
          if (fVar34 <= fVar35) {
            fVar30 = fVar35;
          }
          fVar31 = fVar33;
          if (fVar33 <= fVar30) {
            fVar31 = fVar30;
          }
          unaff_d12 = (double)fVar31;
          if (1e-32 <= unaff_d12) {
            _frexpf((undefined1 *)((long)register0x00000008 + -0x9c));
            fVar30 = (float)(((double)fVar31 * 256.0) / unaff_d12);
            uVar12 = (undefined1)(int)(fVar35 * fVar30);
            uVar15 = (undefined1)(int)(fVar34 * fVar30);
            uVar17 = (undefined1)(int)(fVar33 * fVar30);
            bVar19 = (byte)*(undefined4 *)((long)register0x00000008 + -0x9c) ^ 0x80;
          }
          else {
            bVar19 = 0;
            uVar17 = 0;
            uVar15 = 0;
            uVar12 = 0;
          }
          *(byte *)((long)register0x00000008 + -0x93) = bVar19;
          *(undefined1 *)((long)register0x00000008 + -0x94) = uVar17;
          *(undefined1 *)((long)register0x00000008 + -0x95) = uVar15;
          *puVar20 = uVar12;
          puVar20[uVar3] = uVar15;
          puVar20[uVar24] = uVar17;
          puVar20[uVar28] = bVar19;
          param_2 = param_2 + 3;
          puVar20 = puVar20 + 1;
          *(undefined1 *)((long)register0x00000008 + -0x96) = uVar12;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        *(float **)((long)register0x00000008 + -0xb0) = param_2;
        param_4 = 0;
        do {
          unaff_x23 = 0;
          lVar29 = *(long *)((long)register0x00000008 + -0xa8) + param_4 * uVar3;
          do {
            uVar24 = unaff_x23;
            uVar28 = 0;
            do {
              uVar9 = uVar28;
              iVar23 = (int)uVar9;
              uVar24 = (long)(int)uVar24 + (long)iVar23;
              iVar8 = (int)uVar24;
              if (iVar8 + 1 < (int)uVar7) {
                uVar18 = 1;
                do {
                  uVar28 = uVar18;
                  if ((*(char *)(lVar29 + uVar24) != *(char *)(lVar29 + (iVar8 + (int)uVar18))) ||
                     (uVar28 = uVar18 + 1, 0x7d < uVar18)) break;
                  uVar18 = uVar28;
                } while ((long)(uVar28 + uVar24) < (long)uVar3);
              }
              else {
                uVar28 = 1;
              }
              uVar27 = (uint)uVar28;
            } while (iVar8 < (int)uVar7 && uVar27 < 4);
            uVar22 = (uint)unaff_x23;
            if ((iVar23 < 2) || (iVar23 != iVar8 - uVar22)) {
              while ((int)uVar22 < iVar8) {
                iVar23 = (int)unaff_x23;
                uVar22 = iVar8 - iVar23;
                if (0x7f < (int)uVar22) {
                  uVar22 = 0x80;
                }
                param_2 = (float *)(ulong)uVar22;
                *(char *)((long)register0x00000008 + -0x92) = (char)uVar22;
                puVar20 = (undefined1 *)((long)register0x00000008 + -0x92);
                uVar9 = 1;
                puVar21 = param_1;
                _fwrite(puVar20,1);
                if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
                lVar13 = lVar29 + iVar23;
                uVar9 = 1;
                puVar21 = param_1;
                _fwrite(lVar13,(long)(int)uVar22);
                if (lVar13 == 0) goto LAB_109b81778;
                uVar22 = uVar22 + iVar23;
                unaff_x23 = (ulong)uVar22;
              }
            }
            else {
              *(byte *)((long)register0x00000008 + -0x92) = (byte)uVar9 | 0x80;
              *(undefined1 *)((long)register0x00000008 + -0x91) =
                   *(undefined1 *)(lVar29 + (int)uVar22);
              puVar20 = (undefined1 *)((long)register0x00000008 + -0x92);
              uVar9 = 1;
              puVar21 = param_1;
              _fwrite(puVar20,2);
              unaff_x23 = uVar24;
              if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
            }
            if (3 < uVar27) {
              *(byte *)((long)register0x00000008 + -0x92) = (byte)uVar28 ^ 0x80;
              *(undefined1 *)((long)register0x00000008 + -0x91) = *(undefined1 *)(lVar29 + uVar24);
              puVar20 = (undefined1 *)((long)register0x00000008 + -0x92);
              uVar9 = 1;
              puVar21 = param_1;
              _fwrite(puVar20,2);
              if (puVar20 == (undefined1 *)0x0) goto LAB_109b81778;
              unaff_x23 = (ulong)((int)unaff_x23 + uVar27);
            }
          } while ((int)unaff_x23 < (int)uVar7);
          param_4 = param_4 + 1;
        } while (param_4 != 4);
        param_4 = (ulong)*(uint *)((long)register0x00000008 + -0xb8);
        param_2 = *(float **)((long)register0x00000008 + -0xb0);
        uVar27 = *(uint *)((long)register0x00000008 + -0xc4);
        uVar22 = *(uint *)((long)register0x00000008 + -0xc0);
        if (*(int *)((long)register0x00000008 + -0xb4) < 2) goto LAB_109b81700;
      }
      _free(*(undefined8 *)((long)register0x00000008 + -0xa8));
LAB_109b81778:
      unaff_x20 = 1;
      unaff_x19 = (float *)0x0;
      FUN_109b80bb0();
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0x80;
      *(long *)((long)register0x00000008 + -0x128) = lVar29;
      *(ulong *)((long)register0x00000008 + -0x120) = uVar28;
      *(ulong *)((long)register0x00000008 + -0x118) = uVar3;
      *(ulong *)((long)register0x00000008 + -0x110) = uVar24;
      *(ulong *)((long)register0x00000008 + -0x108) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x100) = param_3;
      *(undefined1 **)((long)register0x00000008 + -0xf8) = param_1;
      *(ulong *)((long)register0x00000008 + -0xf0) = param_4;
      *(float **)((long)register0x00000008 + -0xe8) = param_2;
      *(undefined1 **)((long)register0x00000008 + -0xe0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0xd8) = FUN_109b81784;
      iVar8 = (int)uVar9;
      if (0xffff8007 < iVar8 - 0x8000U) {
        if ((int)puVar21 < 1) {
          puVar20 = (undefined1 *)0x0;
LAB_109b819b8:
          _free(puVar20);
          return 0;
        }
        puVar20 = (undefined1 *)0x0;
        *(ulong *)((long)register0x00000008 + -0x160) = (ulong)(uint)(iVar8 << 2);
        *(ulong *)((long)register0x00000008 + -0x150) = (ulong)(uint)(iVar8 << 1);
        *(ulong *)((long)register0x00000008 + -0x158) = (ulong)(uint)(iVar8 * 3);
        *(ulong *)((long)register0x00000008 + -0x140) = uVar9 & 0xffffffff;
        *(int *)((long)register0x00000008 + -0x148) = iVar8;
        do {
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x134);
          lVar29 = 1;
          uVar3 = unaff_x20;
          _fread(puVar4,4);
          iVar8 = (int)uVar3;
          if (puVar4 == (undefined1 *)0x0) {
LAB_109b81a6c:
            _free(puVar20);
            FUN_109b80bb0(0,0);
LAB_109b81a80:
            _free(puVar20);
            puVar6 = &UNK_10f5a16b8;
            do {
              FUN_109b80bb0(2,puVar6);
LAB_109b81a98:
              _free(puVar20);
              puVar6 = &UNK_10f5a1683;
            } while( true );
          }
          bVar19 = *(byte *)((long)register0x00000008 + -0x134);
          bVar26 = *(byte *)((long)register0x00000008 + -0x133);
          if (bVar19 != 2 || bVar26 != 2) goto LAB_109b819e8;
          if (*(char *)((long)register0x00000008 + -0x132) < '\0') goto LAB_109b819e4;
          if ((int)CONCAT11(*(char *)((long)register0x00000008 + -0x132),
                            *(undefined1 *)((long)register0x00000008 + -0x131)) != (int)uVar9)
          goto LAB_109b81a98;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = *(undefined1 **)((long)register0x00000008 + -0x160);
            _malloc();
            iVar23 = (int)param_6;
            if (puVar20 == (undefined1 *)0x0) {
              iVar5 = 0xf5a1698;
              lVar13 = 3;
              FUN_109b80bb0();
              if (iVar11 != 0) {
                uVar7 = 0;
                if (iVar23 != 0) {
                  uVar7 = 2;
                }
                do {
                  if (0 < (int)uVar10) {
                    uVar3 = 0;
                    do {
                      *(char *)(lVar29 + uVar3) =
                           (char)((uint)*(byte *)(lVar13 + 1) * 0x2591 +
                                  (uint)*(byte *)(lVar13 + (ulong)uVar7) * 0x74c +
                                  (uint)*(byte *)(lVar13 + ((ulong)uVar7 ^ 2)) * 0x1323 + 0x2000 >>
                                 0xe);
                      uVar3 = uVar3 + 1;
                      lVar13 = lVar13 + 3;
                    } while (((ulong)uVar10 & 0x7fffffff) != uVar3);
                  }
                  lVar13 = lVar13 + (int)(uVar10 * -3 + iVar5);
                  lVar29 = lVar29 + iVar8;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              return lVar13;
            }
          }
          lVar29 = 0;
          puVar4 = puVar20;
          do {
            lVar29 = lVar29 + 1;
            lVar13 = *(long *)((long)register0x00000008 + -0x140);
            while (puVar4 < puVar20 + lVar29 * lVar13) {
              puVar25 = (undefined1 *)((long)register0x00000008 + -0x136);
              _fread(puVar25,2,1,unaff_x20);
              if (puVar25 == (undefined1 *)0x0) goto LAB_109b81a6c;
              bVar19 = *(byte *)((long)register0x00000008 + -0x136);
              lVar16 = (long)(puVar20 + lVar29 * lVar13) - (long)puVar4;
              uVar7 = (uint)bVar19;
              if (bVar19 < 0x81) {
                if ((uVar7 == 0) || (lVar16 < (long)(ulong)bVar19)) goto LAB_109b81a80;
                puVar25 = puVar4 + 1;
                *puVar4 = *(undefined1 *)((long)register0x00000008 + -0x135);
                uVar7 = uVar7 - 1;
                puVar4 = puVar25;
                if (uVar7 != 0) {
                  _fread(puVar25,(ulong)uVar7,1,unaff_x20);
                  if (puVar4 == (undefined1 *)0x0) goto LAB_109b81a6c;
                  puVar4 = puVar25 + uVar7;
                }
              }
              else {
                if (lVar16 < (long)(ulong)(uVar7 - 0x80)) goto LAB_109b81a80;
                _memset(puVar4,*(undefined1 *)((long)register0x00000008 + -0x135));
                puVar4 = puVar4 + (ulong)(bVar19 - 0x81) + 1;
              }
            }
          } while (lVar29 != 4);
          *(int *)((long)register0x00000008 + -0x144) = (int)puVar21;
          lVar29 = 0;
          lVar13 = *(long *)((long)register0x00000008 + -0x158);
          lVar16 = *(long *)((long)register0x00000008 + -0x150);
          lVar14 = *(long *)((long)register0x00000008 + -0x140);
          do {
            bVar19 = puVar20[lVar29];
            *(byte *)((long)register0x00000008 + -0x134) = bVar19;
            bVar26 = puVar20[lVar29 + lVar14];
            *(byte *)((long)register0x00000008 + -0x133) = bVar26;
            bVar1 = puVar20[lVar29 + lVar16];
            *(byte *)((long)register0x00000008 + -0x132) = bVar1;
            bVar2 = puVar20[lVar29 + lVar13];
            *(byte *)((long)register0x00000008 + -0x131) = bVar2;
            if (bVar2 == 0) {
              fVar34 = 0.0;
              fVar33 = 0.0;
              fVar30 = 0.0;
            }
            else {
              dVar32 = 1.0;
              _ldexp(bVar2 - 0x88);
              fVar34 = (float)dVar32;
              fVar30 = (float)bVar19 * fVar34;
              fVar33 = (float)bVar26 * fVar34;
              fVar34 = (float)bVar1 * fVar34;
            }
            *unaff_x19 = fVar34;
            unaff_x19[1] = fVar33;
            unaff_x19[2] = fVar30;
            unaff_x19 = unaff_x19 + 3;
            lVar29 = lVar29 + 1;
          } while (*(long *)((long)register0x00000008 + -0x140) != lVar29);
          uVar9 = (ulong)*(uint *)((long)register0x00000008 + -0x148);
          uVar7 = *(int *)((long)register0x00000008 + -0x144) - 1;
          puVar21 = (undefined1 *)(ulong)uVar7;
          if (uVar7 == 0 || *(int *)((long)register0x00000008 + -0x144) < 1) goto LAB_109b819b8;
        } while( true );
      }
      iVar8 = (int)puVar21 * iVar8;
      goto LAB_109b81a4c;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  param_2 = param_2 + 2;
  iVar11 = (int)param_4 * uVar7 + 1;
  do {
    iVar11 = iVar11 + -1;
    if (iVar11 < 1) {
      return 0;
    }
    fVar34 = param_2[-1];
    fVar35 = *param_2;
    fVar33 = param_2[-2];
    fVar30 = fVar34;
    if (fVar34 <= fVar35) {
      fVar30 = fVar35;
    }
    fVar31 = fVar33;
    if (fVar33 <= fVar30) {
      fVar31 = fVar30;
    }
    if (1e-32 <= fVar31) {
      fVar30 = fVar31;
      _frexpf((undefined1 *)((long)register0x00000008 + -0x68));
      fVar31 = (fVar30 * 256.0) / fVar31;
      uVar12 = (undefined1)(int)(fVar35 * fVar31);
      uVar15 = (undefined1)(int)(fVar34 * fVar31);
      uVar17 = (undefined1)(int)(fVar33 * fVar31);
      bVar19 = (byte)*(undefined4 *)((long)register0x00000008 + -0x68) ^ 0x80;
    }
    else {
      bVar19 = 0;
      uVar17 = 0;
      uVar15 = 0;
      uVar12 = 0;
    }
    param_2 = param_2 + 3;
    *(byte *)((long)register0x00000008 + -0x61) = bVar19;
    *(undefined1 *)((long)register0x00000008 + -0x62) = uVar17;
    *(undefined1 *)((long)register0x00000008 + -99) = uVar15;
    *(undefined1 *)((long)register0x00000008 + -100) = uVar12;
    puVar20 = (undefined1 *)((long)register0x00000008 + -100);
    _fwrite(puVar20,4,1,param_1);
  } while (puVar20 != (undefined1 *)0x0);
  FUN_109b80bb0(1,0);
  return 0;
LAB_109b819e4:
  bVar26 = 2;
LAB_109b819e8:
  if (*(byte *)((long)register0x00000008 + -0x131) == 0) {
    fVar34 = 0.0;
    fVar33 = 0.0;
    fVar30 = 0.0;
  }
  else {
    dVar32 = 1.0;
    _ldexp(*(byte *)((long)register0x00000008 + -0x131) - 0x88);
    fVar34 = (float)dVar32;
    fVar30 = (float)bVar19 * fVar34;
    fVar33 = (float)bVar26 * fVar34;
    fVar35 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x132));
    fVar34 = fVar34 * fVar35;
  }
  *unaff_x19 = fVar34;
  unaff_x19[1] = fVar33;
  unaff_x19[2] = fVar30;
  _free(puVar20);
  iVar8 = (int)puVar21 * (int)uVar9 + -1;
  unaff_x19 = unaff_x19 + 3;
LAB_109b81a4c:
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x100);
  unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x110);
  unaff_x23 = *(ulong *)((long)register0x00000008 + -0x108);
  unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x120);
  unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x118);
  unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x130);
  unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x128);
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xe8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) =
       *(undefined8 *)((long)register0x00000008 + -0xe0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)((long)register0x00000008 + -0xd8);
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
  if (iVar8 < 1) {
    return 0;
  }
  uVar7 = iVar8 + 1;
  while( true ) {
    unaff_x21 = (ulong)uVar7;
    param_1 = (undefined1 *)((long)register0x00000008 + -0x104);
    param_3 = 1;
    param_4 = unaff_x20;
    _fread(param_1,4);
    if (param_1 == (undefined1 *)0x0) break;
    if (*(byte *)((long)register0x00000008 + -0x101) == 0) {
      fVar34 = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
    }
    else {
      dVar32 = 1.0;
      _ldexp(*(byte *)((long)register0x00000008 + -0x101) - 0x88);
      fVar34 = (float)dVar32;
      fVar30 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x104));
      fVar30 = fVar34 * fVar30;
      fVar33 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x103));
      fVar33 = fVar34 * fVar33;
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x102));
      fVar34 = fVar34 * fVar35;
    }
    *unaff_x19 = fVar34;
    unaff_x19[1] = fVar33;
    unaff_x19[2] = fVar30;
    unaff_x19 = unaff_x19 + 3;
    uVar7 = uVar7 - 1;
    if (uVar7 < 2) {
      return 0;
    }
  }
  param_2 = (float *)0x0;
  unaff_x30 = FUN_109b81418;
  FUN_109b80bb0();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  goto code_r0x000109b81418;
}



/* Entry: 109b81784; end: 109b81abb;  */

long FUN_109b81784(ulong param_1,float *param_2,ulong param_3,undefined1 *param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  long lVar19;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  undefined1 uVar23;
  ulong uVar24;
  byte bVar25;
  float *unaff_x19;
  float *pfVar26;
  undefined1 *puVar27;
  ulong unaff_x20;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  uint uVar28;
  int iVar29;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined1 *puVar30;
  byte bVar31;
  uint uVar32;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  double unaff_d12;
  undefined8 unaff_d13;
  
  iVar17 = (int)((ulong)param_5 >> 0x20);
  uVar16 = (uint)param_5;
code_r0x000109b81784:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  iVar14 = (int)param_3;
  if (0xffff8007 < iVar14 - 0x8000U) {
    if ((int)param_4 < 1) {
      puVar27 = (undefined1 *)0x0;
LAB_109b819b8:
      _free(puVar27);
      return 0;
    }
    puVar27 = (undefined1 *)0x0;
    *(ulong *)((long)register0x00000008 + -0x90) = (ulong)(uint)(iVar14 << 2);
    *(ulong *)((long)register0x00000008 + -0x80) = (ulong)(uint)(iVar14 << 1);
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)(uint)(iVar14 * 3);
    *(ulong *)((long)register0x00000008 + -0x70) = param_3 & 0xffffffff;
    *(int *)((long)register0x00000008 + -0x78) = iVar14;
    do {
      puVar10 = (undefined1 *)((long)register0x00000008 + -100);
      lVar15 = 1;
      uVar9 = param_1;
      _fread(puVar10,4);
      iVar14 = (int)uVar9;
      if (puVar10 == (undefined1 *)0x0) {
LAB_109b81a6c:
        _free(puVar27);
        FUN_109b80bb0(0,0);
LAB_109b81a80:
        _free(puVar27);
        puVar12 = &UNK_10f5a16b8;
        do {
          FUN_109b80bb0(2,puVar12);
LAB_109b81a98:
          _free(puVar27);
          puVar12 = &UNK_10f5a1683;
        } while( true );
      }
      bVar25 = *(byte *)((long)register0x00000008 + -100);
      bVar31 = *(byte *)((long)register0x00000008 + -99);
      if (bVar25 != 2 || bVar31 != 2) goto LAB_109b819e8;
      if (*(char *)((long)register0x00000008 + -0x62) < '\0') goto LAB_109b819e4;
      if ((int)CONCAT11(*(char *)((long)register0x00000008 + -0x62),
                        *(undefined1 *)((long)register0x00000008 + -0x61)) != (int)param_3)
      goto LAB_109b81a98;
      if (puVar27 == (undefined1 *)0x0) {
        puVar27 = *(undefined1 **)((long)register0x00000008 + -0x90);
        _malloc();
        iVar29 = (int)param_6;
        if (puVar27 == (undefined1 *)0x0) {
          iVar11 = 0xf5a1698;
          lVar19 = 3;
          FUN_109b80bb0();
          if (iVar17 != 0) {
            uVar13 = 0;
            if (iVar29 != 0) {
              uVar13 = 2;
            }
            do {
              if (0 < (int)uVar16) {
                uVar9 = 0;
                do {
                  *(char *)(lVar15 + uVar9) =
                       (char)((uint)*(byte *)(lVar19 + 1) * 0x2591 +
                              (uint)*(byte *)(lVar19 + (ulong)uVar13) * 0x74c +
                              (uint)*(byte *)(lVar19 + ((ulong)uVar13 ^ 2)) * 0x1323 + 0x2000 >> 0xe
                             );
                  uVar9 = uVar9 + 1;
                  lVar19 = lVar19 + 3;
                } while (((ulong)uVar16 & 0x7fffffff) != uVar9);
              }
              lVar19 = lVar19 + (int)(uVar16 * -3 + iVar11);
              lVar15 = lVar15 + iVar14;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          return lVar19;
        }
      }
      lVar15 = 0;
      puVar10 = puVar27;
      do {
        lVar15 = lVar15 + 1;
        lVar19 = *(long *)((long)register0x00000008 + -0x70);
        while (puVar10 < puVar27 + lVar15 * lVar19) {
          puVar30 = (undefined1 *)((long)register0x00000008 + -0x66);
          _fread(puVar30,2,1,param_1);
          if (puVar30 == (undefined1 *)0x0) goto LAB_109b81a6c;
          bVar25 = *(byte *)((long)register0x00000008 + -0x66);
          lVar22 = (long)(puVar27 + lVar15 * lVar19) - (long)puVar10;
          uVar13 = (uint)bVar25;
          if (bVar25 < 0x81) {
            if ((uVar13 == 0) || (lVar22 < (long)(ulong)bVar25)) goto LAB_109b81a80;
            puVar30 = puVar10 + 1;
            *puVar10 = *(undefined1 *)((long)register0x00000008 + -0x65);
            uVar13 = uVar13 - 1;
            puVar10 = puVar30;
            if (uVar13 != 0) {
              _fread(puVar30,(ulong)uVar13,1,param_1);
              if (puVar10 == (undefined1 *)0x0) goto LAB_109b81a6c;
              puVar10 = puVar30 + uVar13;
            }
          }
          else {
            if (lVar22 < (long)(ulong)(uVar13 - 0x80)) goto LAB_109b81a80;
            _memset(puVar10,*(undefined1 *)((long)register0x00000008 + -0x65));
            puVar10 = puVar10 + (ulong)(bVar25 - 0x81) + 1;
          }
        }
      } while (lVar15 != 4);
      *(int *)((long)register0x00000008 + -0x74) = (int)param_4;
      lVar15 = 0;
      lVar19 = *(long *)((long)register0x00000008 + -0x88);
      lVar22 = *(long *)((long)register0x00000008 + -0x80);
      lVar20 = *(long *)((long)register0x00000008 + -0x70);
      do {
        bVar25 = puVar27[lVar15];
        *(byte *)((long)register0x00000008 + -100) = bVar25;
        bVar31 = puVar27[lVar15 + lVar20];
        *(byte *)((long)register0x00000008 + -99) = bVar31;
        bVar7 = puVar27[lVar15 + lVar22];
        *(byte *)((long)register0x00000008 + -0x62) = bVar7;
        bVar8 = puVar27[lVar15 + lVar19];
        *(byte *)((long)register0x00000008 + -0x61) = bVar8;
        if (bVar8 == 0) {
          fVar37 = 0.0;
          fVar36 = 0.0;
          fVar33 = 0.0;
        }
        else {
          dVar35 = 1.0;
          _ldexp(bVar8 - 0x88);
          fVar37 = (float)dVar35;
          fVar33 = (float)bVar25 * fVar37;
          fVar36 = (float)bVar31 * fVar37;
          fVar37 = (float)bVar7 * fVar37;
        }
        *param_2 = fVar37;
        param_2[1] = fVar36;
        param_2[2] = fVar33;
        param_2 = param_2 + 3;
        lVar15 = lVar15 + 1;
      } while (*(long *)((long)register0x00000008 + -0x70) != lVar15);
      param_3 = (ulong)*(uint *)((long)register0x00000008 + -0x78);
      uVar13 = *(int *)((long)register0x00000008 + -0x74) - 1;
      param_4 = (undefined1 *)(ulong)uVar13;
      if (uVar13 == 0 || *(int *)((long)register0x00000008 + -0x74) < 1) goto LAB_109b819b8;
    } while( true );
  }
  iVar14 = (int)param_4 * iVar14;
  goto LAB_109b81a4c;
LAB_109b819e4:
  bVar31 = 2;
LAB_109b819e8:
  if (*(byte *)((long)register0x00000008 + -0x61) == 0) {
    fVar37 = 0.0;
    fVar36 = 0.0;
    fVar33 = 0.0;
  }
  else {
    dVar35 = 1.0;
    _ldexp(*(byte *)((long)register0x00000008 + -0x61) - 0x88);
    fVar37 = (float)dVar35;
    fVar33 = (float)bVar25 * fVar37;
    fVar36 = (float)bVar31 * fVar37;
    fVar38 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x62));
    fVar37 = fVar37 * fVar38;
  }
  *param_2 = fVar37;
  param_2[1] = fVar36;
  param_2[2] = fVar33;
  _free(puVar27);
  iVar14 = (int)param_4 * (int)param_3 + -1;
  param_2 = param_2 + 3;
LAB_109b81a4c:
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x40);
  unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x60);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar1;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if (iVar14 < 1) {
    return 0;
  }
  uVar13 = iVar14 + 1;
  while( true ) {
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x34);
    unaff_x22 = 1;
    unaff_x20 = param_1;
    _fread(unaff_x21,4);
    if (unaff_x21 == (undefined1 *)0x0) break;
    if (*(byte *)((long)register0x00000008 + -0x31) == 0) {
      fVar37 = 0.0;
      fVar36 = 0.0;
      fVar33 = 0.0;
    }
    else {
      dVar35 = 1.0;
      _ldexp(*(byte *)((long)register0x00000008 + -0x31) - 0x88);
      fVar37 = (float)dVar35;
      fVar33 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x34));
      fVar33 = fVar37 * fVar33;
      fVar36 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x33));
      fVar36 = fVar37 * fVar36;
      fVar38 = (float)NEON_ucvtf((uint)*(byte *)((long)register0x00000008 + -0x32));
      fVar37 = fVar37 * fVar38;
    }
    *param_2 = fVar37;
    param_2[1] = fVar36;
    param_2[2] = fVar33;
    param_2 = param_2 + 3;
    uVar13 = uVar13 - 1;
    if (uVar13 < 2) {
      return 0;
    }
  }
  unaff_x19 = (float *)0x0;
  FUN_109b80bb0();
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_d13;
  *(double *)((long)register0x00000008 + -200) = unaff_d12;
  *(ulong *)((long)register0x00000008 + -0xc0) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0xb8) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0xb0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar2;
  *(ulong *)((long)register0x00000008 + -0x78) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
  *(ulong *)((long)register0x00000008 + -0x68) = (ulong)uVar13;
  *(ulong *)((long)register0x00000008 + -0x60) = param_1;
  *(float **)((long)register0x00000008 + -0x58) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x48) = FUN_109b81418;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
  uVar13 = (uint)unaff_x22;
  if (0xffff8007 < uVar13 - 0x8000) {
    uVar9 = (ulong)(uVar13 << 2);
    _malloc();
    *(ulong *)((long)register0x00000008 + -0xe8) = uVar9;
    if (uVar9 != 0) {
      if ((int)unaff_x20 < 1) {
LAB_109b81700:
        _free(*(undefined8 *)((long)register0x00000008 + -0xe8));
        return 0;
      }
      uVar28 = uVar13 << 1;
      *(uint *)((long)register0x00000008 + -0xfc) = uVar13 >> 8;
      uVar32 = uVar13 * 3;
      unaff_d8 = 0x3949f623d5a8a733;
      unaff_x28 = 0x80;
      unaff_x25 = unaff_x22 & 0xffffffff;
      *(uint *)((long)register0x00000008 + -0x104) = uVar32;
      *(uint *)((long)register0x00000008 + -0x100) = uVar28;
      while( true ) {
        unaff_x26 = (ulong)uVar32;
        unaff_x24 = (ulong)uVar28;
        unaff_x27 = 0x4070000000000000;
        *(undefined2 *)((long)register0x00000008 + -0xd6) = 0x202;
        *(char *)((long)register0x00000008 + -0xd4) =
             (char)*(undefined4 *)((long)register0x00000008 + -0xfc);
        *(char *)((long)register0x00000008 + -0xd3) = (char)unaff_x22;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0xd6);
        param_3 = 1;
        param_4 = unaff_x21;
        _fwrite(puVar27,4);
        if (puVar27 == (undefined1 *)0x0) break;
        *(int *)((long)register0x00000008 + -0xf8) = (int)unaff_x20 + -1;
        *(int *)((long)register0x00000008 + -0xf4) = (int)unaff_x20;
        puVar27 = *(undefined1 **)((long)register0x00000008 + -0xe8);
        uVar9 = unaff_x25;
        do {
          fVar37 = unaff_x19[1];
          unaff_d10 = (ulong)(uint)fVar37;
          fVar38 = unaff_x19[2];
          unaff_d11 = (ulong)(uint)fVar38;
          fVar36 = *unaff_x19;
          unaff_d9 = (ulong)(uint)fVar36;
          fVar33 = fVar37;
          if (fVar37 <= fVar38) {
            fVar33 = fVar38;
          }
          fVar34 = fVar36;
          if (fVar36 <= fVar33) {
            fVar34 = fVar33;
          }
          unaff_d12 = (double)fVar34;
          if (1e-32 <= unaff_d12) {
            _frexpf((undefined1 *)((long)register0x00000008 + -0xdc));
            fVar33 = (float)(((double)fVar34 * 256.0) / unaff_d12);
            uVar18 = (undefined1)(int)(fVar38 * fVar33);
            uVar21 = (undefined1)(int)(fVar37 * fVar33);
            uVar23 = (undefined1)(int)(fVar36 * fVar33);
            bVar25 = (byte)*(undefined4 *)((long)register0x00000008 + -0xdc) ^ 0x80;
          }
          else {
            bVar25 = 0;
            uVar23 = 0;
            uVar21 = 0;
            uVar18 = 0;
          }
          *(byte *)((long)register0x00000008 + -0xd3) = bVar25;
          *(undefined1 *)((long)register0x00000008 + -0xd4) = uVar23;
          *(undefined1 *)((long)register0x00000008 + -0xd5) = uVar21;
          *puVar27 = uVar18;
          puVar27[unaff_x25] = uVar21;
          puVar27[unaff_x24] = uVar23;
          puVar27[unaff_x26] = bVar25;
          unaff_x19 = unaff_x19 + 3;
          puVar27 = puVar27 + 1;
          *(undefined1 *)((long)register0x00000008 + -0xd6) = uVar18;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        *(float **)((long)register0x00000008 + -0xf0) = unaff_x19;
        unaff_x20 = 0;
        do {
          unaff_x23 = 0;
          unaff_x27 = *(long *)((long)register0x00000008 + -0xe8) + unaff_x20 * unaff_x25;
          do {
            unaff_x24 = unaff_x23;
            unaff_x26 = 0;
            do {
              uVar9 = unaff_x26;
              iVar29 = (int)uVar9;
              unaff_x24 = (long)(int)unaff_x24 + (long)iVar29;
              iVar14 = (int)unaff_x24;
              if (iVar14 + 1 < (int)uVar13) {
                uVar24 = 1;
                do {
                  unaff_x26 = uVar24;
                  if ((*(char *)(unaff_x27 + unaff_x24) !=
                       *(char *)(unaff_x27 + (iVar14 + (int)uVar24))) ||
                     (unaff_x26 = uVar24 + 1, 0x7d < uVar24)) break;
                  uVar24 = unaff_x26;
                } while ((long)(unaff_x26 + unaff_x24) < (long)unaff_x25);
              }
              else {
                unaff_x26 = 1;
              }
              uVar32 = (uint)unaff_x26;
            } while (iVar14 < (int)uVar13 && uVar32 < 4);
            uVar28 = (uint)unaff_x23;
            if ((iVar29 < 2) || (iVar29 != iVar14 - uVar28)) {
              while ((int)uVar28 < iVar14) {
                iVar29 = (int)unaff_x23;
                uVar28 = iVar14 - iVar29;
                if (0x7f < (int)uVar28) {
                  uVar28 = 0x80;
                }
                unaff_x19 = (float *)(ulong)uVar28;
                *(char *)((long)register0x00000008 + -0xd2) = (char)uVar28;
                puVar27 = (undefined1 *)((long)register0x00000008 + -0xd2);
                param_3 = 1;
                param_4 = unaff_x21;
                _fwrite(puVar27,1);
                if (puVar27 == (undefined1 *)0x0) goto LAB_109b81778;
                lVar15 = unaff_x27 + iVar29;
                param_3 = 1;
                param_4 = unaff_x21;
                _fwrite(lVar15,(long)(int)uVar28);
                if (lVar15 == 0) goto LAB_109b81778;
                uVar28 = uVar28 + iVar29;
                unaff_x23 = (ulong)uVar28;
              }
            }
            else {
              *(byte *)((long)register0x00000008 + -0xd2) = (byte)uVar9 | 0x80;
              *(undefined1 *)((long)register0x00000008 + -0xd1) =
                   *(undefined1 *)(unaff_x27 + (int)uVar28);
              puVar27 = (undefined1 *)((long)register0x00000008 + -0xd2);
              param_3 = 1;
              param_4 = unaff_x21;
              _fwrite(puVar27,2);
              unaff_x23 = unaff_x24;
              if (puVar27 == (undefined1 *)0x0) goto LAB_109b81778;
            }
            if (3 < uVar32) {
              *(byte *)((long)register0x00000008 + -0xd2) = (byte)unaff_x26 ^ 0x80;
              *(undefined1 *)((long)register0x00000008 + -0xd1) =
                   *(undefined1 *)(unaff_x27 + unaff_x24);
              puVar27 = (undefined1 *)((long)register0x00000008 + -0xd2);
              param_3 = 1;
              param_4 = unaff_x21;
              _fwrite(puVar27,2);
              if (puVar27 == (undefined1 *)0x0) goto LAB_109b81778;
              unaff_x23 = (ulong)((int)unaff_x23 + uVar32);
            }
          } while ((int)unaff_x23 < (int)uVar13);
          unaff_x20 = unaff_x20 + 1;
        } while (unaff_x20 != 4);
        unaff_x20 = (ulong)*(uint *)((long)register0x00000008 + -0xf8);
        unaff_x19 = *(float **)((long)register0x00000008 + -0xf0);
        uVar32 = *(uint *)((long)register0x00000008 + -0x104);
        uVar28 = *(uint *)((long)register0x00000008 + -0x100);
        if (*(int *)((long)register0x00000008 + -0xf4) < 2) goto LAB_109b81700;
      }
      _free(*(undefined8 *)((long)register0x00000008 + -0xe8));
LAB_109b81778:
      param_1 = 1;
      param_2 = (float *)0x0;
      unaff_x30 = FUN_109b81784;
      FUN_109b80bb0();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
      goto code_r0x000109b81784;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -200);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0xb8);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  pfVar26 = unaff_x19 + 2;
  iVar17 = (int)unaff_x20 * uVar13 + 1;
  do {
    iVar17 = iVar17 + -1;
    if (iVar17 < 1) {
      return 0;
    }
    fVar37 = pfVar26[-1];
    fVar38 = *pfVar26;
    fVar36 = pfVar26[-2];
    fVar33 = fVar37;
    if (fVar37 <= fVar38) {
      fVar33 = fVar38;
    }
    fVar34 = fVar36;
    if (fVar36 <= fVar33) {
      fVar34 = fVar33;
    }
    if (1e-32 <= fVar34) {
      fVar33 = fVar34;
      _frexpf((undefined1 *)((long)register0x00000008 + -0xa8));
      fVar34 = (fVar33 * 256.0) / fVar34;
      uVar18 = (undefined1)(int)(fVar38 * fVar34);
      uVar21 = (undefined1)(int)(fVar37 * fVar34);
      uVar23 = (undefined1)(int)(fVar36 * fVar34);
      bVar25 = (byte)*(undefined4 *)((long)register0x00000008 + -0xa8) ^ 0x80;
    }
    else {
      bVar25 = 0;
      uVar23 = 0;
      uVar21 = 0;
      uVar18 = 0;
    }
    pfVar26 = pfVar26 + 3;
    *(byte *)((long)register0x00000008 + -0xa1) = bVar25;
    *(undefined1 *)((long)register0x00000008 + -0xa2) = uVar23;
    *(undefined1 *)((long)register0x00000008 + -0xa3) = uVar21;
    *(undefined1 *)((long)register0x00000008 + -0xa4) = uVar18;
    puVar27 = (undefined1 *)((long)register0x00000008 + -0xa4);
    _fwrite(puVar27,4,1,unaff_x21);
  } while (puVar27 != (undefined1 *)0x0);
  FUN_109b80bb0(1,0);
  return 0;
}



/* Entry: 109b81abc; end: 109b8249f;  */

void FUN_109b81abc(long param_1,int param_2,long param_3,int param_4,ulong param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (int)(param_5 >> 0x20);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (param_6 != 0) {
      uVar2 = 2;
    }
    do {
      if (0 < (int)param_5) {
        uVar3 = 0;
        do {
          *(char *)(param_3 + uVar3) =
               (char)((uint)*(byte *)(param_1 + 1) * 0x2591 +
                      (uint)*(byte *)(param_1 + (ulong)uVar2) * 0x74c +
                      (uint)*(byte *)(param_1 + ((ulong)uVar2 ^ 2)) * 0x1323 + 0x2000 >> 0xe);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + 3;
        } while ((param_5 & 0x7fffffff) != uVar3);
      }
      param_1 = param_1 + ((int)param_5 * -3 + param_2);
      param_3 = param_3 + param_4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* Entry: 109b824a0; end: 109b824f7; -[CaptureDelegate init] */

long FUN_109b824a0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return param_1;
}



/* Entry: 109b824f8; end: 109b82567; -[CaptureDelegate dealloc] */

void FUN_109b824f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _free();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _free();
  }
  FUN_109a3d454(param_1 + 0x20);
  FUN_109a3d454(param_1 + 0x30);
  FUN_109a3d454(param_1 + 0x38);
  puStack_28 = PTR_PTR_112701250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109b82568; end: 109b825bf; -[CaptureDelegate captureOutput:didOutputSampleBuffer:fromConnection:] */

void FUN_109b82568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _CMSampleBufferGetImageBuffer();
  _CVBufferRetain();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 8) = 1;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbbdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVBufferRelease_11034a178)(uVar1);
  return;
}



/* Entry: 109b825c0; end: 109b825c7; -[CaptureDelegate getOutput] */

undefined8 FUN_109b825c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109b825c8; end: 109b827cb; -[CaptureDelegate updateImage] */

undefined8 FUN_109b825c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar7 = 0;
  }
  else {
    _objc_sync_enter();
    lVar1 = *(long *)(param_1 + 0x10);
    _CVBufferRetain();
    *(undefined4 *)(param_1 + 8) = 0;
    _objc_sync_exit(param_1);
    _CVPixelBufferLockBaseAddress(lVar1,0);
    lVar6 = lVar1;
    _CVPixelBufferGetBaseAddress(lVar1);
    lVar2 = lVar1;
    _CVPixelBufferGetWidth();
    lVar3 = lVar1;
    _CVPixelBufferGetHeight();
    lVar4 = lVar1;
    _CVPixelBufferGetBytesPerRow();
    if (lVar4 != 0) {
      lVar9 = *(long *)(param_1 + 0x40);
      if (lVar9 == lVar4 * lVar3) {
        lVar10 = *(long *)(param_1 + 0x18);
      }
      else {
        *(long *)(param_1 + 0x40) = lVar4 * lVar3;
        if (*(long *)(param_1 + 0x18) != 0) {
          _free();
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          _free();
        }
        lVar9 = *(long *)(param_1 + 0x40);
        lVar10 = lVar9;
        _malloc();
        *(long *)(param_1 + 0x18) = lVar10;
        lVar5 = lVar9;
        _malloc();
        *(long *)(param_1 + 0x28) = lVar5;
      }
      _memcpy(lVar10,lVar6,lVar9);
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
        lVar6 = 0x90;
        func_0x000107c2ae8c();
        FUN_109a3cf68();
        *(long *)(param_1 + 0x20) = lVar6;
      }
      *(int *)(lVar6 + 0x28) = (int)lVar2;
      *(int *)(lVar6 + 0x2c) = (int)lVar3;
      *(undefined4 *)(lVar6 + 8) = 4;
      *(undefined4 *)(lVar6 + 0x10) = 8;
      *(int *)(lVar6 + 0x60) = (int)lVar4;
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_1 + 0x18);
      uVar8 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x50) = uVar8;
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 == 0) {
        lVar6 = 0x90;
        func_0x000107c2ae8c();
        FUN_109a3cf68();
        *(long *)(param_1 + 0x30) = lVar6;
        uVar8 = *(undefined4 *)(param_1 + 0x40);
      }
      *(int *)(lVar6 + 0x28) = (int)lVar2;
      *(int *)(lVar6 + 0x2c) = (int)lVar3;
      *(undefined4 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0x10) = 8;
      *(int *)(lVar6 + 0x60) = (int)lVar4;
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_1 + 0x28);
      lVar6 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(lVar6 + 0x50) = uVar8;
      FUN_109ad14f4(*(undefined8 *)(param_1 + 0x20),lVar6,1);
      FUN_109a9a73c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30));
    }
    _CVPixelBufferUnlockBaseAddress(lVar1,0);
    _CVBufferRelease(lVar1);
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 109b827cc; end: 109b828ef; -[CvAbstractCamera init] */

undefined8 * FUN_109b827cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701258;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x00010befa240();
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    func_0x00010bf181e0();
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    func_0x00010c0ed100();
    puVar1[4] = puVar2;
    puVar2 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
    func_0x00010c07ef40();
    *(char *)(puVar1 + 5) = (char)puVar2;
    _NSLog(&PTR____CFConstantStringClassReference_110f2d538);
    *(undefined1 *)((long)puVar1 + 0x2a) = 0;
    func_0x00010c18adc0(puVar1);
    func_0x00010c18ae00(puVar1);
    func_0x00010c18afa0(puVar1);
    func_0x00010c18ade0(puVar1);
    func_0x00010c1d91a0(puVar1);
    func_0x00010c21d5a0(puVar1);
  }
  return puVar1;
}



/* Entry: 109b828f0; end: 109b82a1f; -[CvAbstractCamera initWithParentView:] */

undefined8 * FUN_109b828f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112701258;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x00010befa240();
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    func_0x00010bf181e0();
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    func_0x00010c0ed100();
    puVar1[4] = puVar2;
    puVar2 = PTR__OBJC_CLASS___UIImagePickerController_1126b4af0;
    func_0x00010c07ef40();
    *(char *)(puVar1 + 5) = (char)puVar2;
    _NSLog(&PTR____CFConstantStringClassReference_110f2d538);
    *(undefined1 *)((long)puVar1 + 0x2a) = 0;
    func_0x00010c18adc0(puVar1);
    func_0x00010c18ae00(puVar1);
    func_0x00010c18afa0(puVar1);
    func_0x00010c18ade0(puVar1);
    func_0x00010c1d91a0(puVar1);
    func_0x00010c21d5a0(puVar1);
  }
  return puVar1;
}



/* Entry: 109b82a20; end: 109b82a83; -[CvAbstractCamera dealloc] */

void FUN_109b82a20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x00010c12d560();
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x00010bf949e0();
  puStack_28 = PTR_PTR_112701258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109b82a84; end: 109b82b0f; -[CvAbstractCamera start] */

void FUN_109b82a84(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110f2d558);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_performSelectorOnMainThread_with_11261be08,PTR_s_start_112671080,0,0);
    return;
  }
  if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2a) = 1;
    func_0x00010c289f20(param_1);
    if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c24e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startCaptureSession_112671320);
      return;
    }
  }
  return;
}



/* Entry: 109b82b10; end: 109b82b27; -[CvAbstractCamera pause] */

void FUN_109b82b10(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 0;
  func_0x00010bf31140();
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109b82b28; end: 109b82cf3; -[CvAbstractCamera stop] */

/* WARNING: Possible PIC construction at 0x000109b82d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b82d30) */
/* WARNING: Removing unreachable block (ram,0x00010c24d960) */

void FUN_109b82b28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  lVar1 = param_1;
  func_0x00010bf31140();
  func_0x00010c066460();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010bf31140(param_1);
      func_0x00010c12cba0();
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  lVar1 = param_1;
  func_0x00010bf31140();
  func_0x00010c0ef240();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010bf31140(param_1);
      func_0x00010c12d760();
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  func_0x00010bf31140(param_1);
  func_0x00010c2568a0();
  func_0x00010c179220(param_1);
  func_0x00010c1793e0(param_1);
  lVar2 = param_1;
  func_0x00010c221280();
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar2;
  func_0x00010c142cc0();
  if ((int)lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010bf68b20();
    uVar4 = 1;
    if (lVar3 != 2) {
      uVar4 = 2;
    }
  }
  else {
    func_0x00010c255780(lVar2);
    lVar3 = lVar2;
    func_0x00010bf68b20();
    uVar4 = 1;
    if (lVar3 != 2) {
      uVar4 = 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c18add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s_setDefaultAVCaptureDevicePositio_112640590,uVar4);
  return;
}



/* Entry: 109b82cf4; end: 109b82d63; -[CvAbstractCamera switchCameras] */

/* WARNING: Possible PIC construction at 0x000109b82d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109b82d30) */
/* WARNING: Removing unreachable block (ram,0x00010c24d960) */

void FUN_109b82cf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c142cc0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf68b20();
    uVar2 = 1;
    if (lVar1 != 2) {
      uVar2 = 2;
    }
  }
  else {
    func_0x00010c255780(param_1);
    lVar1 = param_1;
    func_0x00010bf68b20();
    uVar2 = 1;
    if (lVar1 != 2) {
      uVar2 = 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c18add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setDefaultAVCaptureDevicePositio_112640590,uVar2);
  return;
}



/* Entry: 109b82d64; end: 109b82dbb; -[CvAbstractCamera deviceOrientationDidChange:] */

void FUN_109b82d64(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  func_0x00010c0ed100();
  if (puVar1 + -1 < (undefined *)0x4) {
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  _NSLog(&PTR____CFConstantStringClassReference_110f2d578);
                    /* WARNING: Could not recover jumptable at 0x00010c288370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateOrientation_11267fb00);
  return;
}



/* Entry: 109b82dbc; end: 109b82e83; -[CvAbstractCamera createCaptureSession] */

void FUN_109b82dbc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_alloc_init(PTR__OBJC_CLASS___AVCaptureSession_1126b70a8);
  func_0x00010c179220(param_1);
  uVar3 = param_1;
  func_0x00010bf31140();
  iVar1 = (int)uVar3;
  func_0x00010bf68b40(param_1);
  func_0x00010bf2d600();
  uVar3 = param_1;
  func_0x00010bf31140();
  iVar2 = (int)uVar3;
  if (iVar1 == 0) {
    func_0x00010bf2d600();
    if (iVar2 == 0) {
      _NSLog(&PTR____CFConstantStringClassReference_110f2d598);
      return;
    }
    func_0x00010bf31140(param_1);
  }
  else {
    func_0x00010bf68b40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fdc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109b82e84; end: 109b82f37; -[CvAbstractCamera createCaptureDevice] */

void FUN_109b82e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  uVar1 = param_1;
  func_0x00010bf68b20(param_1);
  func_0x00010c18c1e0(param_1,param_2,uVar1);
  func_0x00010c06f000();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d5b8);
  func_0x00010c104260();
  _NSLog(&PTR____CFConstantStringClassReference_110f2d5d8);
  return;
}



/* Entry: 109b82f38; end: 109b8309f; -[CvAbstractCamera createVideoPreviewLayer] */

void FUN_109b82f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  _objc_alloc(PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20);
  func_0x00010bf31140(param_5);
  func_0x00010c044f40(puVar2);
  func_0x00010c1793e0(param_5);
  uVar3 = param_5;
  func_0x00010bf31540();
  _objc_opt_respondsToSelector();
  uVar4 = param_5;
  func_0x00010bf31540();
  iVar1 = (int)uVar4;
  if ((uVar3 & 1) == 0) {
    func_0x00010c079540();
    if (iVar1 != 0) {
      uVar3 = param_5;
      func_0x00010bf31540(param_5);
      func_0x00010bf68b60(param_5);
      func_0x00010c1d6440(uVar3);
    }
  }
  else {
    func_0x00010bf48b00();
    func_0x00010c0832c0();
    if (iVar1 != 0) {
      uVar3 = param_5;
      func_0x00010bf31540(param_5);
      func_0x00010bf48b00();
      func_0x00010bf68b60(param_5);
      func_0x00010c221b40(uVar3);
    }
  }
  if (*(long *)(param_5 + 0x50) != 0) {
    func_0x00010c0f3c80(param_5);
    func_0x00010bf20c00();
    func_0x00010bf31540(param_5);
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    func_0x00010bf31540(param_5);
    func_0x00010c2218a0();
    uVar3 = param_5;
    func_0x00010c0f3c80(param_5);
    func_0x00010c08c0e0();
    func_0x00010bf31540(param_5);
    func_0x00010befbb20(uVar3);
  }
  _NSLog(&PTR____CFConstantStringClassReference_110f2d5f8);
  return;
}



/* Entry: 109b830a0; end: 109b8330f; -[CvAbstractCamera setDesiredCameraPosition:] */

void FUN_109b830a0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf712e0(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  uVar6 = 0;
  if (puVar2 != (undefined *)0x0) {
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar1);
        }
        lVar8 = *(long *)((long)puVar9 * 8);
        lVar3 = lVar8;
        func_0x00010c104260();
        if (lVar3 == param_3) {
          func_0x00010bf31140(param_1);
          func_0x00010bf17e40();
          puVar1 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
          func_0x00010bf70940();
          if (puVar1 == (undefined *)0x0) {
            func_0x00010c09e4e0();
            _NSLog(&PTR____CFConstantStringClassReference_110f2d618);
          }
          lVar4 = lVar8;
          func_0x00010c0732c0();
          if ((int)lVar4 != 0) {
            lVar4 = lVar8;
            func_0x00010c09fb80();
            if ((int)lVar4 == 0) {
              func_0x00010c09e4e0();
              _NSLog(&PTR____CFConstantStringClassReference_110f2d638);
            }
            else {
              func_0x00010c19e0c0(lVar8);
              func_0x00010c280c60(lVar8);
            }
          }
          func_0x00010bf31140(param_1);
          func_0x00010bef93a0();
          uVar5 = param_1;
          func_0x00010bf31140();
          func_0x00010c066460();
          uVar6 = uVar5;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          while (uVar6 != 0) {
            uVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(uVar5);
              }
              func_0x00010bf31140(param_1);
              func_0x00010c12cba0();
              uVar10 = uVar10 + 1;
            } while (uVar6 != uVar10);
            uVar6 = uVar5;
            func_0x00010bf52a60();
          }
          func_0x00010bf31140(param_1);
          func_0x00010bef93a0();
          func_0x00010bf31140();
          func_0x00010bf427c0();
          uVar6 = param_1;
          goto LAB_109b832d8;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    uVar6 = 0;
  }
LAB_109b832d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(uVar6 + 0x28) == '\x01') {
    uVar5 = uVar6;
    func_0x00010bf31220();
    if ((uVar5 & 1) == 0) {
      func_0x00010bf55060(uVar6);
      func_0x00010bf55020(uVar6);
      func_0x00010bf55040(uVar6);
      uVar5 = uVar6;
      func_0x00010c28fd60();
      if ((int)uVar5 == 0) {
        func_0x00010bf55a80(uVar6);
      }
      else {
        func_0x00010bf59fe0(uVar6);
      }
      *(undefined1 *)(uVar6 + 0x29) = 1;
    }
    func_0x00010bf31140(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 109b83310; end: 109b8338b; -[CvAbstractCamera startCaptureSession] */

void FUN_109b83310(ulong param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = param_1;
    func_0x00010bf31220();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf55060(param_1);
      func_0x00010bf55020(param_1);
      func_0x00010bf55040(param_1);
      uVar1 = param_1;
      func_0x00010c28fd60();
      if ((int)uVar1 == 0) {
        func_0x00010bf55a80(param_1);
      }
      else {
        func_0x00010bf59fe0(param_1);
      }
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    func_0x00010bf31140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 109b8338c; end: 109b833df; -[CvAbstractCamera createCaptureOutput] */

void FUN_109b8338c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  func_0x00010c11f020(puVar1);
  return;
}



/* Entry: 109b833e0; end: 109b83433; -[CvAbstractCamera createCustomVideoPreview] */

void FUN_109b833e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  func_0x00010c11f020(puVar1);
  return;
}



/* Entry: 109b83434; end: 109b83437; -[CvAbstractCamera updateOrientation] */

void FUN_109b83434(void)

{
  return;
}



/* Entry: 109b83438; end: 109b8355f; -[CvAbstractCamera updateSize] */

void FUN_109b83438(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  func_0x00010bf68b40();
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf68b40();
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010bf68b40();
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010bf68b40();
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = param_1;
          func_0x00010bf68b40();
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = param_1;
            func_0x00010bf68b40();
            func_0x00010c0720c0();
            uVar3 = 0x1e0;
            if ((uVar2 & 1) == 0) {
              uVar2 = param_1;
              func_0x00010bf68b40();
              iVar1 = (int)uVar2;
              func_0x00010c0720c0();
              uVar3 = 0x2d0;
              if (iVar1 == 0) {
                uVar3 = 0x1e0;
              }
            }
          }
          else {
            uVar3 = 0x120;
          }
          goto LAB_109b834c0;
        }
      }
    }
  }
  uVar3 = 0x1e0;
LAB_109b834c0:
  func_0x00010c1aacc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1aa3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImageHeight__112648310,uVar3);
  return;
}



/* Entry: 109b83560; end: 109b835eb; -[CvAbstractCamera lockFocus] */

void FUN_109b83560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c0732c0();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d658);
    }
    else {
      func_0x00010c19e0c0(puVar1,param_2,0);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b835ec; end: 109b83677; -[CvAbstractCamera unlockFocus] */

void FUN_109b835ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c0732c0();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d678);
    }
    else {
      func_0x00010c19e0c0(puVar1,param_2,2);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b83678; end: 109b83703; -[CvAbstractCamera lockExposure] */

void FUN_109b83678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c072580();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d698);
    }
    else {
      func_0x00010c199040(puVar1,param_2,0);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b83704; end: 109b8378f; -[CvAbstractCamera unlockExposure] */

void FUN_109b83704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c072580();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d6b8);
    }
    else {
      func_0x00010c199040(puVar1,param_2,2);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b83790; end: 109b8381b; -[CvAbstractCamera lockBalance] */

void FUN_109b83790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c083b20();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d6d8);
    }
    else {
      func_0x00010c2254c0(puVar1,param_2,0);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b8381c; end: 109b838a7; -[CvAbstractCamera unlockBalance] */

void FUN_109b8381c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bf69340(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,param_2,
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  puVar2 = puVar1;
  func_0x00010c083b20();
  if ((int)puVar2 != 0) {
    uStack_28 = 0;
    puVar2 = puVar1;
    func_0x00010c09fb80(puVar1,param_2,&uStack_28);
    if ((int)puVar2 == 0) {
      func_0x00010c09e4e0();
      _NSLog(&PTR____CFConstantStringClassReference_110f2d6f8);
    }
    else {
      func_0x00010c2254c0(puVar1,param_2,2);
      func_0x00010c280c60(puVar1);
    }
  }
  return;
}



/* Entry: 109b838a8; end: 109b838af; -[CvAbstractCamera imageWidth] */

undefined4 FUN_109b838a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* Entry: 109b838b0; end: 109b838b7; -[CvAbstractCamera setImageWidth:] */

void FUN_109b838b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 109b838b8; end: 109b838bf; -[CvAbstractCamera imageHeight] */

undefined4 FUN_109b838b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



/* Entry: 109b838c0; end: 109b838c7; -[CvAbstractCamera setImageHeight:] */

void FUN_109b838c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return;
}



/* Entry: 109b838c8; end: 109b838cf; -[CvAbstractCamera defaultFPS] */

undefined4 FUN_109b838c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* Entry: 109b838d0; end: 109b838d7; -[CvAbstractCamera setDefaultFPS:] */

void FUN_109b838d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 109b838d8; end: 109b838df; -[CvAbstractCamera defaultAVCaptureDevicePosition] */

undefined8 FUN_109b838d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109b838e0; end: 109b838e7; -[CvAbstractCamera setDefaultAVCaptureDevicePosition:] */

void FUN_109b838e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 109b838e8; end: 109b838ef; -[CvAbstractCamera defaultAVCaptureVideoOrientation] */

undefined8 FUN_109b838e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109b838f0; end: 109b838f7; -[CvAbstractCamera setDefaultAVCaptureVideoOrientation:] */

void FUN_109b838f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 109b838f8; end: 109b838ff; -[CvAbstractCamera defaultAVCaptureSessionPreset] */

undefined8 FUN_109b838f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109b83900; end: 109b83907; -[CvAbstractCamera setDefaultAVCaptureSessionPreset:] */

void FUN_109b83900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83908; end: 109b8390f; -[CvAbstractCamera captureSession] */

undefined8 FUN_109b83908(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109b83910; end: 109b83917; -[CvAbstractCamera setCaptureSession:] */

void FUN_109b83910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83918; end: 109b8391f; -[CvAbstractCamera captureVideoPreviewLayer] */

undefined8 FUN_109b83918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109b83920; end: 109b83927; -[CvAbstractCamera setCaptureVideoPreviewLayer:] */

void FUN_109b83920(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83928; end: 109b8392f; -[CvAbstractCamera videoCaptureConnection] */

undefined8 FUN_109b83928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109b83930; end: 109b83937; -[CvAbstractCamera setVideoCaptureConnection:] */

void FUN_109b83930(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83938; end: 109b8393f; -[CvAbstractCamera running] */

undefined1 FUN_109b83938(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 109b83940; end: 109b83947; -[CvAbstractCamera captureSessionLoaded] */

undefined1 FUN_109b83940(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 109b83948; end: 109b8394f; -[CvAbstractCamera useAVCaptureVideoPreviewLayer] */

undefined1 FUN_109b83948(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 109b83950; end: 109b83957; -[CvAbstractCamera setUseAVCaptureVideoPreviewLayer:] */

void FUN_109b83950(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 109b83958; end: 109b8395f; -[CvAbstractCamera parentView] */

undefined8 FUN_109b83958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109b83960; end: 109b83967; -[CvAbstractCamera setParentView:] */

void FUN_109b83960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_11034d320)();
  return;
}



/* Entry: 109b83968; end: 109b83b4f; -[CvPhotoCamera takePicture] */

void FUN_109b83968(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    lVar1 = param_1;
    func_0x00010c2556c0();
    lVar2 = param_1;
    func_0x00010c299420(param_1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x109b839e8;
    puStack_30 = &UNK_110b29738;
    lStack_28 = param_1;
    func_0x00010bf312e0(lVar1,param_2,lVar2,&puStack_48);
  }
  return;
}



/* Entry: 109b83b50; end: 109b83b6b;  */

void FUN_109b83b50(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),3);
  return;
}



/* Entry: 109b83b6c; end: 109b83bb7; -[CvPhotoCamera stop] */

void FUN_109b83b6c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701260;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_stop_112673008);
  func_0x00010c20bea0(param_1);
  return;
}



/* Entry: 109b83bb8; end: 109b83deb; -[CvPhotoCamera createStillImageOutput] */

void FUN_109b83bb8(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_alloc_init(PTR__OBJC_CLASS___AVCaptureStillImageOutput_1126ddfe0);
  func_0x00010c20bea0(param_1);
  func_0x00010bf720a0(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c2556c0(param_1);
  func_0x00010c1d7160();
  lVar4 = param_1;
  func_0x00010bf31140(param_1);
  func_0x00010c2556c0(param_1);
  func_0x00010befa4c0(lVar4);
  lVar5 = param_1;
  func_0x00010c2556c0();
  func_0x00010bf48e00();
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar9 = *(long *)(lVar10 * 8);
      func_0x00010c065e00();
      lVar6 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar9);
          }
          iVar3 = (int)*(undefined8 *)(lVar8 * 8);
          func_0x00010c0c6c20();
          func_0x00010c071ae0();
          if (iVar3 != 0) {
            func_0x00010c221280(param_1);
            goto LAB_109b83d70;
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar6 = lVar9;
        func_0x00010bf52a60();
      }
LAB_109b83d70:
      lVar6 = param_1;
      func_0x00010c299420();
      if (lVar6 != 0) goto LAB_109b83da4;
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
LAB_109b83da4:
  _NSLog(&PTR____CFConstantStringClassReference_110f2d738);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf59250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


