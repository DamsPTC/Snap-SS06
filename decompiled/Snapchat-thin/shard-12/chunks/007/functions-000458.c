/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10956b908; end: 10956bf97;  */

void FUN_10956b908(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_f8;
  undefined4 uStack_f4;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined4 uStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0x68;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined8 *)((long)puVar7 + 0x24) = 1;
  *(undefined4 *)((long)puVar7 + 0x2c) = 1;
  puVar7[6] = &DAT_10e5b4a18;
  puVar7[7] = 0;
  puVar7[9] = 0x100000000;
  puVar7[8] = 0x100000000;
  puVar7[10] = &DAT_10e5b4a18;
  puVar7[0xb] = 0;
  *puVar7 = &PTR_DAT_110afcca0;
  *(undefined4 *)(puVar7 + 0xc) = 0;
  ppuStack_148 = &PTR_FUN_110af1170;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uVar10 = *(ulong *)(param_2 + 0x40);
  puVar13 = (ulong *)(param_2 + 0x40);
  if ((uVar10 & 1) != 0) {
    puVar13 = (ulong *)(uVar10 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar15 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar17 = *puVar13;
      uVar10 = uVar17 + 0x28;
      func_0x00010b4bee4c(uVar10,&UNK_10f574555,0x28);
      if ((uVar10 & 1) != 0) {
        func_0x00010b4bedfc(uVar17 + 0x28,&UNK_10f574555,0x28,&ppuStack_148);
        if (1 < (uint)uStack_120) {
          if (((uint)uStack_120 != 0x7fffffff) && ((uint)uStack_120 != 0x80000000))
          goto LAB_10956be9c;
          __ZNSt3__19to_stringEi(&pcStack_f0);
          FUN_10928a5e0(&pcStack_b0,&UNK_10f57457e,&pcStack_f0);
          func_0x000105687ee0(&pcStack_b0);
          goto LAB_10956bec0;
        }
        *(uint *)(puVar7 + 0xc) = (uint)uStack_120;
        puVar13 = &uStack_138;
        if ((uStack_138 & 1) != 0) {
          puVar13 = (ulong *)(uStack_138 + 7);
        }
        if ((int)uStack_130 == 0) goto LAB_10956bde4;
        uVar12 = 0;
        puVar1 = puVar13 + (int)uStack_130;
        goto LAB_10956baa0;
      }
      lVar15 = lVar15 + -8;
      puVar13 = puVar13 + 1;
    } while (lVar15 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
  goto LAB_10956bec0;
  while( true ) {
    puVar7[2] = puVar8;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    puVar13 = puVar13 + 1;
    if (puVar13 == puVar1) break;
LAB_10956baa0:
    uVar10 = *puVar13;
    pcStack_b0 = FUN_109589514;
    ppuStack_a8 = &PTR_FUN_110ae9180;
    iVar5 = *(int *)(uVar10 + 0x1c);
    if (iVar5 < 2) {
      if (iVar5 == 1) {
        uStack_a0 = *(undefined4 *)(*(long *)(uVar10 + 0x10) + 0x10);
        pcStack_b0 = FUN_109589524;
        ppuStack_a8 = &PTR_FUN_110afcd30;
      }
      else if (iVar5 == 0) {
        func_0x000105688514(&UNK_10f574524);
        goto LAB_10956bec0;
      }
    }
    else {
      if (iVar5 == 2) {
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        if (*(int *)(*(long *)(uVar10 + 0x10) + 0x18) != 0) {
          func_0x000107c303c4(&uStack_118,*(long *)(uVar10 + 0x10) + 0x10);
        }
        pcStack_f0 = FUN_10958a060;
        ppuStack_e8 = &PTR_FUN_110afcd48;
        puVar8 = (undefined8 *)0x18;
        __Znwm();
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        if ((int)uStack_110 != 0) {
          func_0x000107c303c4(puVar8,&uStack_118);
        }
        puStack_e0 = puVar8;
        FUN_10934c908(&uStack_118);
      }
      else {
        if (iVar5 != 3) goto LAB_10956bc28;
        lVar15 = *(long *)(uVar10 + 0x10);
        bVar3 = (*(byte *)(lVar15 + 0x10) & 1) != 0;
        if (bVar3) {
          uVar12 = *(uint *)(lVar15 + 0x38);
        }
        else {
          uVar12 = uVar12 & 0xffffff00;
        }
        FUN_10958a540(&uStack_118,lVar15 + 0x18);
        uStack_f4 = CONCAT31(uStack_f4._1_3_,bVar3);
        pcStack_f0 = (code *)0x10958a648;
        ppuStack_e8 = &PTR_FUN_110afcd60;
        puVar8 = (undefined8 *)0x28;
        uStack_f8 = uVar12;
        __Znwm();
        FUN_10958a540();
        puVar8[4] = CONCAT44(uStack_f4,uStack_f8);
        puStack_e0 = puVar8;
        FUN_10934c93c(&uStack_118);
      }
      pcStack_b0 = pcStack_f0;
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      (*(code *)ppuStack_e8[2])(&ppuStack_a8,&ppuStack_e8);
      (*(code *)*ppuStack_e8)(&ppuStack_e8);
    }
LAB_10956bc28:
    puVar8 = (undefined8 *)puVar7[2];
    if (puVar8 < (undefined8 *)puVar7[3]) {
      *puVar8 = pcStack_b0;
      (*(code *)ppuStack_a8[2])(puVar8 + 1,&ppuStack_a8);
      *(undefined1 *)(puVar8 + 8) = 0;
      puVar8 = puVar8 + 9;
    }
    else {
      lVar15 = (long)puVar8 - *plVar9;
      uVar10 = (lVar15 >> 3) * -0x71c71c71c71c71c7 + 1;
      if (0x38e38e38e38e38e < uVar10) {
        FUN_10958a9b4();
        goto LAB_10956bec0;
      }
      lVar11 = (long)puVar7[3] - *plVar9 >> 3;
      uVar17 = lVar11 * 0x1c71c71c71c71c72;
      if (uVar17 < uVar10 || uVar17 - uVar10 == 0) {
        uVar17 = uVar10;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
        uVar17 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar17) {
        func_0x000104c4f740();
        goto LAB_10956bec0;
      }
      lVar11 = uVar17 * 0x48;
      __Znwm();
      puVar8 = (undefined8 *)(lVar11 + lVar15);
      *puVar8 = pcStack_b0;
      (*(code *)ppuStack_a8[2])(puVar8 + 1,&ppuStack_a8);
      *(undefined1 *)(puVar8 + 8) = 0;
      puVar14 = (undefined8 *)puVar7[1];
      puVar4 = (undefined8 *)puVar7[2];
      puVar2 = (undefined8 *)((long)puVar8 + ((long)puVar14 - (long)puVar4));
      puVar16 = puVar14;
      puVar18 = puVar2;
      if ((long)puVar14 - (long)puVar4 != 0) {
        do {
          *puVar18 = *puVar16;
          (**(code **)(puVar16[1] + 0x10))(puVar18 + 1,puVar16 + 1);
          *(undefined1 *)(puVar18 + 8) = *(undefined1 *)(puVar16 + 8);
          puVar16 = puVar16 + 9;
          puVar18 = puVar18 + 9;
        } while (puVar16 != puVar4);
        puVar14 = puVar14 + 1;
        do {
          puVar16 = puVar14 + 8;
          (**(code **)*puVar14)(puVar14);
          puVar14 = puVar14 + 9;
        } while (puVar16 != puVar4);
        puVar14 = (undefined8 *)*plVar9;
      }
      puVar8 = puVar8 + 9;
      puVar7[1] = puVar2;
      puVar7[2] = puVar8;
      puVar7[3] = lVar11 + uVar17 * 0x48;
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
    }
  }
LAB_10956bde4:
  FUN_10934c50c(&ppuStack_148);
  *param_1 = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10956be9c:
  __ZNSt3__19to_stringEi(&pcStack_f0);
  FUN_10928a5e0(&pcStack_b0,&UNK_10f5745da,&pcStack_f0);
  func_0x000105687ee0(&pcStack_b0);
LAB_10956bec0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10956bec4);
  (*pcVar6)();
}



/* Entry: 10956bf98; end: 10956c26b;  */

void FUN_10956bf98(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110afce88;
  plVar8 = puVar3 + 1;
  *plVar8 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  ppuStack_b8 = &PTR_FUN_110af0e38;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uVar5 = *(ulong *)(param_2 + 0x40);
  puVar10 = (ulong *)(param_2 + 0x40);
  if ((uVar5 & 1) != 0) {
    puVar10 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar11 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar12 = *puVar10;
      uVar5 = uVar12 + 0x28;
      func_0x00010b4bee4c(uVar5,&UNK_10f574629,0x24);
      if ((uVar5 & 1) != 0) {
        puVar4 = &UNK_10f574629;
        func_0x00010b4bedfc(uVar12 + 0x28,&UNK_10f574629,0x24,&ppuStack_b8);
        uVar5 = (ulong)(int)uStack_a0;
        lVar11 = puVar3[1];
        if ((ulong)(puVar3[3] - lVar11 >> 5) < uVar5) {
          if ((int)uStack_a0 < 0) {
            FUN_10958b714();
            goto LAB_10956c220;
          }
          lVar9 = puVar3[2];
          plStack_68 = plVar8;
          FUN_10958b728();
          lVar9 = uVar5 + (lVar9 - lVar11);
          lVar11 = (long)puVar4 * 0x20;
          puVar4 = (undefined *)puVar3[2];
          lVar1 = lVar9 + (puVar3[1] - (long)puVar4);
          FUN_10958b75c(puVar3[1],puVar4,lVar1);
          uStack_88 = puVar3[1];
          puVar3[1] = lVar1;
          puVar3[2] = lVar9;
          lStack_70 = puVar3[3];
          puVar3[3] = uVar5 + lVar11;
          uStack_80 = uStack_88;
          uStack_78 = uStack_88;
          FUN_10958b848(&uStack_88);
          uVar5 = (ulong)(int)uStack_a0;
        }
        puVar10 = &uStack_a8;
        if ((uStack_a8 & 1) != 0) {
          puVar10 = (ulong *)(uStack_a8 + 7);
        }
        if ((int)uStack_a0 == 0) goto LAB_10956c1e8;
        uVar12 = puVar3[2];
        lVar11 = uVar5 << 3;
        goto LAB_10956c108;
      }
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
LAB_10956c220:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10956c224);
  (*pcVar2)();
LAB_10956c108:
  uVar5 = *puVar10;
  if (uVar12 < (ulong)puVar3[3]) {
    puVar4 = (undefined *)0x0;
    FUN_10934a280(uVar12,0,uVar5);
    uVar12 = uVar12 + 0x20;
    puVar3[2] = uVar12;
  }
  else {
    lVar9 = uVar12 - *plVar8;
    uVar12 = (lVar9 >> 5) + 1;
    if (uVar12 >> 0x3b != 0) {
      FUN_10958b714();
      goto LAB_10956c220;
    }
    uVar6 = puVar3[3] - *plVar8;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 == 0) {
      uVar7 = 0;
      puVar4 = (undefined *)0x0;
      plStack_68 = plVar8;
    }
    else {
      plStack_68 = plVar8;
      FUN_10958b728();
    }
    lVar9 = uVar7 + lVar9;
    lVar1 = uVar7 + (long)puVar4 * 0x20;
    uStack_88 = uVar7;
    uStack_80 = lVar9;
    uStack_78 = lVar9;
    lStack_70 = lVar1;
    FUN_10934a280(lVar9,0,uVar5);
    uVar12 = lVar9 + 0x20;
    puVar4 = (undefined *)puVar3[2];
    lVar9 = lVar9 + (puVar3[1] - (long)puVar4);
    FUN_10958b75c(puVar3[1],puVar4,lVar9);
    uStack_88 = puVar3[1];
    puVar3[1] = lVar9;
    puVar3[2] = uVar12;
    lStack_70 = puVar3[3];
    puVar3[3] = lVar1;
    uStack_80 = uStack_88;
    uStack_78 = uStack_88;
    FUN_10958b848(&uStack_88);
  }
  puVar3[2] = uVar12;
  puVar10 = puVar10 + 1;
  lVar11 = lVar11 + -8;
  if (lVar11 == 0) {
LAB_10956c1e8:
    func_0x00010934a640(&ppuStack_b8);
    *param_1 = puVar3;
    return;
  }
  goto LAB_10956c108;
}



/* Entry: 10956c26c; end: 10956c413;  */

void FUN_10956c26c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110afced8;
  ppuStack_90 = &PTR_FUN_110af3968;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  FUN_10958bd38(param_2,&ppuStack_90);
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0x000107c31930();
  puVar3 = &uStack_80;
  if ((uStack_80 & 1) != 0) {
    puVar3 = (ulong *)(uStack_80 + 7);
  }
  if ((int)uStack_78 != 0) {
    lVar4 = (long)(int)uStack_78 << 3;
    do {
      func_0x000107c2ac70(puVar2,*puVar3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  puVar2[3] = uStack_68;
  *(undefined4 *)(puVar2 + 4) = (undefined4)uStack_60;
  *(undefined4 *)((long)puVar2 + 0x24) = uStack_60._4_4_;
  if (uStack_50._4_4_ != 5) {
    ppuStack_58 = &PTR_PTR_1132de358;
  }
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(ppuStack_58 + 2);
  *(undefined4 *)((long)puVar2 + 0x2c) = *(undefined4 *)((long)ppuStack_58 + 0x14);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(ppuStack_58 + 3);
  *(undefined4 *)((long)puVar2 + 0x34) = *(undefined4 *)((long)ppuStack_58 + 0x1c);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(ppuStack_58 + 4);
  *(undefined1 *)((long)puVar2 + 0x3c) = *(undefined1 *)((long)ppuStack_58 + 0x24);
  uStack_98 = 0;
  FUN_10958c454(puVar1 + 1,puVar2);
  FUN_10958c454(&uStack_98,0);
  func_0x000109361848(&ppuStack_90);
  *param_1 = puVar1;
  return;
}



/* Entry: 10956c414; end: 10956c563;  */

void FUN_10956c414(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110afcf28;
  ppuStack_90 = &PTR_FUN_110af3968;
  uStack_88 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  FUN_10958bd38(param_2,&ppuStack_90);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0x000107c31930();
  puVar3 = &uStack_80;
  if ((uStack_80 & 1) != 0) {
    puVar3 = (ulong *)(uStack_80 + 7);
  }
  if ((int)uStack_78 != 0) {
    lVar4 = (long)(int)uStack_78 << 3;
    do {
      func_0x000107c2ac70(puVar2,*puVar3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(puVar2 + 3) = (undefined4)uStack_68;
  uStack_98 = 0;
  FUN_10958cbe0(puVar1 + 1,puVar2);
  FUN_10958cbe0(&uStack_98,0);
  func_0x000109361848(&ppuStack_90);
  *param_1 = puVar1;
  return;
}



/* Entry: 10956c564; end: 10956e76b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10956c564(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  int *piVar35;
  ulong uVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  ulong *puVar40;
  double dVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  long *plStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong *puStack_1d8;
  float fStack_1d0;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  char cStack_d9;
  undefined8 auStack_d8 [2];
  undefined8 uStack_c8;
  char cStack_c1;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (undefined8 *)0x220;
  __Znwm();
  *puVar8 = &PTR_FUN_110afd0d8;
  puVar8[2] = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  plVar10 = puVar8 + 4;
  puVar8[7] = 0;
  *(undefined4 *)(puVar8 + 8) = 0x3f800000;
  plVar12 = puVar8 + 9;
  puVar8[10] = 0;
  *plVar12 = 0;
  plVar31 = puVar8 + 10;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  puVar8[0xd] = 0;
  *(undefined4 *)(puVar8 + 0xe) = 0x3f800000;
  puVar8[0x10] = 0x1900000001e;
  puVar8[0xf] = 0x7fffffff00000012;
  puVar8[0x11] = 0x753000000190;
  puVar8[0x12] = 0x3b23d70a40400000;
  puVar8[0x13] = 0xffffffffffffffff;
  *(undefined2 *)(puVar8 + 0x14) = 0x101;
  puVar8[0x15] = 0xf00000020;
  puVar8[0x16] = 0x3e4ccccd3f4ccccd;
  *(undefined4 *)(puVar8 + 0x17) = 0x41700000;
  *(undefined1 *)(puVar8 + 0x18) = 1;
  puVar8[0x1a] = 0x3fe8000000000000;
  puVar8[0x19] = 0x3fe6666666666666;
  *(undefined1 *)(puVar8 + 0x1b) = 1;
  *(undefined8 *)((long)puVar8 + 0xe4) = 0x20000000a;
  *(undefined8 *)((long)puVar8 + 0xdc) = 0x6400000032;
  puVar8[0x20] = 0x3fe0000000000000;
  plVar37 = puVar8 + 0x21;
  puVar8[0x1f] = 0x3fd0000000000000;
  puVar8[0x1e] = 0x4004000000000000;
  FUN_109494eb0(plVar37);
  *(undefined1 *)(puVar8 + 0x34) = 1;
  *(undefined8 *)((long)puVar8 + 0x1a4) = 0x3e19999a3f8ccccd;
  puVar40 = puVar8 + 0x39;
  *(undefined8 *)((long)puVar8 + 0x1b4) = 0;
  *(undefined8 *)((long)puVar8 + 0x1ac) = 0;
  *(undefined8 *)((long)puVar8 + 0x1c4) = 0;
  *(undefined8 *)((long)puVar8 + 0x1bc) = 0;
  *(undefined8 *)((long)puVar8 + 0x1d4) = 0;
  *(undefined8 *)((long)puVar8 + 0x1cc) = 0;
  puVar8[0x3c] = 0;
  puVar8[0x3b] = 0;
  *(undefined4 *)(puVar8 + 0x3d) = 0x3f800000;
  *(undefined1 *)(puVar8 + 0x3e) = 0;
  puVar8[0x40] = 0;
  ppuStack_1c0 = &PTR_FUN_110af2860;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puStack_190 = &DAT_11383d918;
  puStack_188 = &DAT_11383d918;
  puStack_180 = &DAT_11383d918;
  puStack_178 = &DAT_11383d918;
  lStack_168 = 0;
  ppuStack_170 = (undefined **)0x0;
  lStack_158 = 0;
  lStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  lStack_140 = 0;
  uVar14 = *(ulong *)(param_2 + 0x40);
  puVar27 = (ulong *)(param_2 + 0x40);
  if ((uVar14 & 1) != 0) {
    puVar27 = (ulong *)(uVar14 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar29 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar32 = *puVar27;
      uVar14 = uVar32 + 0x28;
      func_0x00010b4bee4c(uVar14,&UNK_10f5746f0,0x20);
      if ((uVar14 & 1) != 0) {
        func_0x00010b4bedfc(uVar32 + 0x28,&UNK_10f5746f0,0x20,&ppuStack_1c0);
        puVar8[0x1c] = 0x1200000096;
        *(undefined2 *)(puVar8 + 0x14) = 0x101;
        if (((uint)uStack_1b0 >> 1 & 1) != 0) {
          *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(lStack_168 + 0x10);
          *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(lStack_168 + 0x14);
          *(undefined4 *)((long)puVar8 + 0x84) = *(undefined4 *)(lStack_168 + 0x18);
        }
        if (((uint)uStack_1b0 >> 2 & 1) != 0) {
          *(undefined1 *)(puVar8 + 0x34) = *(undefined1 *)(lStack_160 + 0x10);
        }
        if (((uint)uStack_1b0 >> 3 & 1) != 0) {
          *(undefined4 *)(puVar8 + 0x35) = *(undefined4 *)(lStack_158 + 0x10);
        }
        if (((uint)uStack_1b0 >> 4 & 1) != 0) {
          *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(lStack_150 + 0x10);
          *(undefined4 *)((long)puVar8 + 0xb4) = *(undefined4 *)(lStack_150 + 0x14);
        }
        if (((uint)uStack_1b0 >> 5 & 1) != 0) {
          *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(lStack_148 + 0x10);
          *(undefined4 *)((long)puVar8 + 0x11c) = *(undefined4 *)(lStack_148 + 0x14);
          *(undefined4 *)((long)puVar8 + 0x1ac) = *(undefined4 *)(lStack_148 + 0x18);
        }
        if (((uint)uStack_1b0 >> 6 & 1) != 0) {
          *(undefined1 *)(puVar8 + 0x3e) = 1;
          *(undefined4 *)((long)puVar8 + 500) = *(undefined4 *)(lStack_140 + 0x10);
          *(undefined4 *)(puVar8 + 0x3f) = *(undefined4 *)(lStack_140 + 0x14);
          *(undefined4 *)(puVar8 + 0x41) = *(undefined4 *)(lStack_140 + 0x18);
          *(undefined4 *)((long)puVar8 + 0x20c) = *(undefined4 *)(lStack_140 + 0x1c);
          puVar8[0x42] = (long)*(int *)(lStack_140 + 0x20);
          *(undefined4 *)(puVar8 + 0x43) = *(undefined4 *)(lStack_140 + 0x24);
          *(undefined4 *)((long)puVar8 + 0x21c) = *(undefined4 *)(lStack_140 + 0x28);
        }
        puVar27 = &uStack_1a8;
        if ((uStack_1a8 & 1) != 0) {
          puVar27 = (ulong *)(uStack_1a8 + 7);
        }
        if ((int)uStack_1a0 == 0) goto LAB_10956cfd0;
        puVar28 = puVar27 + (int)uStack_1a0;
        plVar38 = puVar8 + 6;
        goto LAB_10956c824;
      }
      lVar29 = lVar29 + -8;
      puVar27 = puVar27 + 1;
    } while (lVar29 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
  goto LAB_10956e520;
LAB_10956c824:
  do {
    uVar14 = *puVar27;
    FUN_10958ffdc(&plStack_120,&UNK_10f56e6fd,*(ulong *)(uVar14 + 0x18) & 0xfffffffffffffffc);
    FUN_10958ffdc(auStack_f0,&UNK_10f56e61a,(ulong)puStack_178 & 0xfffffffffffffffc);
    func_0x000104bd4884(&plStack_1f0,&plStack_120,2);
    lVar29 = 0;
    do {
      if ((&cStack_c1)[lVar29] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d8 + lVar29));
      }
      if (*(char *)((long)auStack_d8 + lVar29 + -1) < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar29));
      }
      lVar29 = lVar29 + -0x30;
    } while (lVar29 != -0x60);
    puVar9 = (ulong *)0x60;
    __Znwm();
    puVar33 = puVar9 + 1;
    *puVar33 = 0;
    puVar9[2] = 0;
    puVar34 = puVar9 + 3;
    *puVar34 = (ulong)&PTR_FUN_110af4778;
    *puVar9 = (ulong)&PTR_FUN_110afd128;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    func_0x000107c2791c(puVar9 + 7,&plStack_1f0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar33,0x10);
      if (bVar5) {
        *puVar33 = *puVar33 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    auStack_d8[0] = puVar8[0x2a];
    uStack_e0 = puVar8[0x29];
    uStack_c8 = puVar8[0x2c];
    auStack_d8[1] = puVar8[0x2b];
    uStack_c0 = puVar8[0x2d];
    uStack_b8 = (undefined4)puVar8[0x2e];
    uStack_ac = *(undefined8 *)((long)puVar8 + 0x17c);
    uStack_b4 = (undefined4)*(undefined8 *)((long)puVar8 + 0x174);
    uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x174) >> 0x20);
    plStack_118 = (long *)puVar8[0x22];
    plStack_120 = (long *)*plVar37;
    uStack_108 = puVar8[0x24];
    plStack_110 = (long *)puVar8[0x23];
    uStack_f8 = puVar8[0x26];
    uStack_100 = puVar8[0x25];
    auStack_f0[1] = puVar8[0x28];
    auStack_f0[0] = puVar8[0x27];
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    uStack_90 = *(char *)(puVar8 + 0x33) == '\x01';
    if ((bool)uStack_90) {
      uStack_98 = puVar8[0x32];
      uStack_a0 = puVar8[0x31];
    }
    uStack_88 = 1;
    puStack_220 = puVar34;
    puStack_218 = puVar9;
    puStack_138 = puVar34;
    puStack_130 = puVar9;
    FUN_10949201c(&uStack_210,0x3f800000,&puStack_220,&plStack_120);
    if ((uStack_210 == 0) ||
       (uVar32 = uStack_210, ___dynamic_cast(uStack_210,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b10,0),
       uVar32 == 0)) {
      puVar9 = &uStack_200;
    }
    else {
      plStack_1f8 = plStack_208;
      puVar9 = &uStack_210;
      uStack_200 = uVar32;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    plVar30 = plStack_208;
    if (plStack_208 != (long *)0x0) {
      plVar15 = plStack_208 + 1;
      do {
        lVar29 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plStack_208 + 0x10))(plStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    puVar9 = puStack_218;
    if (puStack_218 != (ulong *)0x0) {
      puVar33 = puStack_218 + 1;
      do {
        uVar32 = *puVar33;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar33,0x10);
        if (bVar5) {
          *puVar33 = uVar32 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar32 == 0) {
        (**(code **)(*puStack_218 + 0x10))(puStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar9);
      }
    }
    plVar30 = plStack_1f8;
    uVar32 = uStack_200;
    puVar9 = (ulong *)puVar8[2];
    if (puVar9 < (ulong *)puVar8[3]) {
      *puVar9 = uStack_200;
      puVar9[1] = (ulong)plStack_1f8;
      if (plStack_1f8 != (long *)0x0) {
        plVar15 = plStack_1f8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = *plVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar9 = puVar9 + 2;
    }
    else {
      lVar29 = puVar8[1];
      puVar34 = (ulong *)((long)puVar9 - lVar29);
      lVar11 = (long)puVar34 >> 4;
      uVar39 = lVar11 + 1;
      if (uVar39 >> 0x3c != 0) {
        FUN_109590084();
        goto LAB_10956e520;
      }
      uVar36 = (long)puVar8[3] - lVar29;
      uVar19 = (long)uVar36 >> 3;
      if (uVar19 <= uVar39) {
        uVar19 = uVar39;
      }
      if (0x7fffffffffffffef < uVar36) {
        uVar19 = 0xfffffffffffffff;
      }
      if (uVar19 >> 0x3c != 0) {
        func_0x000104c4f740();
        goto LAB_10956e520;
      }
      lVar43 = uVar19 << 4;
      __Znwm();
      puVar33 = (ulong *)(lVar43 + (long)puVar34);
      *puVar33 = uVar32;
      puVar33[1] = (ulong)plVar30;
      if (plVar30 != (long *)0x0) {
        plVar15 = plVar30 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = *plVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar29 = puVar8[1];
        puVar34 = (ulong *)(puVar8[2] - lVar29);
        lVar11 = (long)puVar34 >> 4;
      }
      puVar9 = puVar33 + 2;
      _memcpy(puVar33 + lVar11 * -2,lVar29,puVar34);
      puVar8[1] = puVar33 + lVar11 * -2;
      puVar8[2] = puVar9;
      puVar8[3] = lVar43 + uVar19 * 0x10;
      if (lVar29 != 0) {
        __ZdlPv(lVar29);
      }
    }
    puVar8[2] = puVar9;
    uVar39 = *(ulong *)(uVar14 + 0x10);
    uVar14 = ((ulong)(uint)((int)uVar32 << 3) + 8 ^ uVar32 >> 0x20) * -0x622015f714c7d297;
    uVar14 = (uVar32 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
    puVar33 = (ulong *)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
    puVar9 = (ulong *)puVar8[5];
    if (puVar9 != (ulong *)0x0) {
      uVar14 = (long)puVar9 - 1;
      if (((ulong)puVar9 & uVar14) == 0) {
        puVar34 = (ulong *)(uVar14 & (ulong)puVar33);
      }
      else {
        puVar34 = puVar33;
        if (puVar9 <= puVar33) {
          uVar19 = 0;
          if (puVar9 != (ulong *)0x0) {
            uVar19 = (ulong)puVar33 / (ulong)puVar9;
          }
          puVar34 = (ulong *)((long)puVar33 - uVar19 * (long)puVar9);
        }
      }
      plVar15 = *(long **)(*plVar10 + (long)puVar34 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_10956cbe4;
            puVar20 = (ulong *)plVar15[1];
            if (puVar20 != puVar33) break;
            if (plVar15[2] == uVar32) goto joined_r0x00010956cf80;
          }
          if (((ulong)puVar9 & uVar14) == 0) {
            puVar20 = (ulong *)((ulong)puVar20 & uVar14);
          }
          else if (puVar9 <= puVar20) {
            uVar19 = 0;
            if (puVar9 != (ulong *)0x0) {
              uVar19 = (ulong)puVar20 / (ulong)puVar9;
            }
            puVar20 = (ulong *)((long)puVar20 - uVar19 * (long)puVar9);
          }
        } while (puVar20 == puVar34);
      }
    }
LAB_10956cbe4:
    plVar15 = (long *)0x38;
    __Znwm();
    plStack_110 = (long *)0x0;
    *plVar15 = 0;
    plVar15[1] = (long)puVar33;
    plVar15[2] = uVar32;
    plVar15[3] = (long)plVar30;
    if (plVar30 != (long *)0x0) {
      plVar30 = plVar30 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar5) {
          *plVar30 = *plVar30 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar30 = (long *)(uVar39 & 0xfffffffffffffffc);
    plStack_120 = plVar15;
    plStack_118 = plVar10;
    if (*(char *)((long)plVar30 + 0x17) < '\0') {
      func_0x000107c3192c(plVar15 + 4,*plVar30,plVar30[1]);
    }
    else {
      lVar11 = plVar30[1];
      lVar29 = *plVar30;
      plVar15[6] = plVar30[2];
      plVar15[5] = lVar11;
      plVar15[4] = lVar29;
    }
    plStack_110 = (long *)CONCAT71(plStack_110._1_7_,1);
    if ((puVar9 == (ulong *)0x0) ||
       (*(float *)(puVar8 + 8) * (float)puVar9 < (float)(puVar8[7] + 1))) {
      uVar14 = 1;
      if ((ulong *)0x2 < puVar9) {
        uVar14 = (ulong)(((ulong)puVar9 & (long)puVar9 - 1U) != 0);
      }
      puVar34 = (ulong *)(uVar14 | (long)puVar9 << 1);
      puVar9 = (ulong *)(long)((float)(puVar8[7] + 1) / *(float *)(puVar8 + 8));
      if (puVar34 <= puVar9) {
        puVar34 = puVar9;
      }
      if ((long)puVar34 - 1U == 0) {
        puVar34 = (ulong *)0x2;
      }
      else if (((ulong)puVar34 & (long)puVar34 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar9 = (ulong *)puVar8[5];
      if (puVar9 < puVar34) {
LAB_10956ccd8:
        puVar9 = puVar34;
        if ((ulong)puVar9 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_10956e520;
        }
        lVar29 = (long)puVar9 << 3;
        __Znwm();
        lVar11 = *plVar10;
        *plVar10 = lVar29;
        if (lVar11 != 0) {
          __ZdlPv();
        }
        puVar34 = (ulong *)0x0;
        puVar8[5] = puVar9;
        do {
          *(undefined8 *)(*plVar10 + (long)puVar34 * 8) = 0;
          puVar34 = (ulong *)((long)puVar34 + 1);
        } while (puVar9 != puVar34);
        plVar30 = (long *)*plVar38;
        if (plVar30 != (long *)0x0) {
          puVar34 = (ulong *)plVar30[1];
          uVar14 = (long)puVar9 - 1;
          if (((ulong)puVar9 & uVar14) == 0) {
            puVar34 = (ulong *)((ulong)puVar34 & uVar14);
          }
          else if (puVar9 <= puVar34) {
            uVar32 = 0;
            if (puVar9 != (ulong *)0x0) {
              uVar32 = (ulong)puVar34 / (ulong)puVar9;
            }
            puVar34 = (ulong *)((long)puVar34 - uVar32 * (long)puVar9);
          }
          *(long **)(*plVar10 + (long)puVar34 * 8) = plVar38;
          plVar16 = (long *)*plVar30;
          while (plVar16 != (long *)0x0) {
            puVar20 = (ulong *)plVar16[1];
            if (((ulong)puVar9 & uVar14) == 0) {
              puVar20 = (ulong *)((ulong)puVar20 & uVar14);
            }
            else if (puVar9 <= puVar20) {
              uVar32 = 0;
              if (puVar9 != (ulong *)0x0) {
                uVar32 = (ulong)puVar20 / (ulong)puVar9;
              }
              puVar20 = (ulong *)((long)puVar20 - uVar32 * (long)puVar9);
            }
            plVar21 = plVar16;
            if (puVar20 != puVar34) {
              lVar29 = *plVar10;
              if (*(long *)(lVar29 + (long)puVar20 * 8) == 0) {
                *(long **)(lVar29 + (long)puVar20 * 8) = plVar30;
                puVar34 = puVar20;
              }
              else {
                *plVar30 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar29 + (long)puVar20 * 8);
                **(long **)(lVar29 + (long)puVar20 * 8) = (long)plVar16;
                plVar21 = plVar30;
              }
            }
            plVar30 = plVar21;
            plVar16 = (long *)*plVar21;
          }
        }
      }
      else if (puVar34 < puVar9) {
        puVar20 = (ulong *)(long)((float)(ulong)puVar8[7] / *(float *)(puVar8 + 8));
        if ((puVar9 < (ulong *)0x3) || (((ulong)puVar9 & (long)puVar9 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((ulong *)0x1 < puVar20) {
          puVar20 = (ulong *)(1L << (-LZCOUNT((long)puVar20 + -1) & 0x3fU));
        }
        if (puVar34 <= puVar20) {
          puVar34 = puVar20;
        }
        if (puVar34 < puVar9) {
          if (puVar34 != (ulong *)0x0) goto LAB_10956ccd8;
          lVar29 = *plVar10;
          *plVar10 = 0;
          if (lVar29 != 0) {
            __ZdlPv();
          }
          puVar9 = (ulong *)0x0;
          puVar8[5] = 0;
        }
        else {
          puVar9 = (ulong *)puVar8[5];
        }
      }
      if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
        puVar34 = (ulong *)((long)puVar9 - 1U & (ulong)puVar33);
      }
      else {
        puVar34 = puVar33;
        if (puVar9 <= puVar33) {
          uVar14 = 0;
          if (puVar9 != (ulong *)0x0) {
            uVar14 = (ulong)puVar33 / (ulong)puVar9;
          }
          puVar34 = (ulong *)((long)puVar33 - uVar14 * (long)puVar9);
        }
      }
    }
    lVar29 = *plVar10;
    plVar30 = *(long **)(lVar29 + (long)puVar34 * 8);
    if (plVar30 == (long *)0x0) {
      *plVar15 = *plVar38;
      *plVar38 = (long)plVar15;
      *(long **)(lVar29 + (long)puVar34 * 8) = plVar38;
      if (*plVar15 != 0) {
        puVar34 = *(ulong **)(*plVar15 + 8);
        if (((ulong)puVar9 & (long)puVar9 - 1U) == 0) {
          puVar34 = (ulong *)((ulong)puVar34 & (long)puVar9 - 1U);
        }
        else if (puVar9 <= puVar34) {
          uVar14 = 0;
          if (puVar9 != (ulong *)0x0) {
            uVar14 = (ulong)puVar34 / (ulong)puVar9;
          }
          puVar34 = (ulong *)((long)puVar34 - uVar14 * (long)puVar9);
        }
        *(long **)(*plVar10 + (long)puVar34 * 8) = plVar15;
      }
    }
    else {
      *plVar15 = *plVar30;
      *plVar30 = (long)plVar15;
    }
    puVar8[7] = puVar8[7] + 1;
    plVar30 = plStack_1f8;
joined_r0x00010956cf80:
    if (plVar30 != (long *)0x0) {
      plVar15 = plVar30 + 1;
      do {
        lVar29 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
    }
    puVar34 = puStack_130;
    if (puStack_130 != (ulong *)0x0) {
      puVar9 = puStack_130 + 1;
      do {
        uVar14 = *puVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar14 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar14 == 0) {
        (**(code **)(*puStack_130 + 0x10))(puStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar34);
      }
    }
    func_0x000104c4f944(&plStack_1f0);
    puVar27 = puVar27 + 1;
  } while (puVar27 != puVar28);
LAB_10956cfd0:
  ppuVar6 = ppuStack_170;
  plVar10 = (long *)0x70;
  __Znwm();
  ppuVar1 = &PTR_PTR_1132d8f10;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  uVar42 = *(undefined8 *)((long)puVar8 + 0x1a4);
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 4) = 0x3f800000;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plVar10[8] = 0;
  plVar10[7] = 0;
  FUN_10948cc68(plVar10 + 5,ppuVar1);
  plVar10[9] = 0;
  *(undefined4 *)(plVar10 + 0xc) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  *(undefined8 *)((long)plVar10 + 100) = uVar42;
  FUN_10948cbd4(plVar10 + 9,(plVar10[6] - plVar10[5] >> 4) * -0x5555555555555555);
  lVar29 = *plVar12;
  *plVar12 = (long)plVar10;
  if (lVar29 != 0) {
    func_0x0001095901c0();
  }
  plStack_118 = (long *)0x0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_100 = CONCAT44(uStack_100._4_4_,0x3f800000);
  puVar17 = (undefined8 *)puVar8[1];
  puVar2 = (undefined8 *)puVar8[2];
  if (puVar17 != puVar2) {
    do {
      (*(code *)**(undefined8 **)*puVar17)(&plStack_1f0);
      plVar30 = plStack_1e8;
      plVar10 = plStack_1f0;
      for (plVar38 = plStack_1f0; plStack_1f0 = plVar10, plVar38 != plVar30; plVar38 = plVar38 + 1)
      {
        piVar35 = (int *)*plVar38;
        if (*piVar35 != 0) {
          FUN_10948e5e8(*plVar12,piVar35);
          plVar10 = plStack_118;
          uVar14 = ((ulong)(uint)((int)piVar35 << 3) + 8 ^ (ulong)piVar35 >> 0x20) *
                   -0x622015f714c7d297;
          uVar14 = ((ulong)piVar35 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
          plVar15 = (long *)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
          if (plStack_118 != (long *)0x0) {
            uVar14 = (long)plStack_118 - 1;
            if (((ulong)plStack_118 & uVar14) == 0) {
              plVar37 = (long *)(uVar14 & (ulong)plVar15);
            }
            else {
              plVar37 = plVar15;
              if (plStack_118 <= plVar15) {
                uVar32 = 0;
                if (plStack_118 != (long *)0x0) {
                  uVar32 = (ulong)plVar15 / (ulong)plStack_118;
                }
                plVar37 = (long *)((long)plVar15 - uVar32 * (long)plStack_118);
              }
            }
            plVar16 = (long *)plStack_120[(long)plVar37];
            if (plVar16 != (long *)0x0) {
              do {
                while( true ) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_10956d18c;
                  plVar21 = (long *)plVar16[1];
                  if (plVar21 != plVar15) break;
                  if ((int *)plVar16[2] == piVar35) goto LAB_10956d2a0;
                }
                if (((ulong)plStack_118 & uVar14) == 0) {
                  plVar21 = (long *)((ulong)plVar21 & uVar14);
                }
                else if (plStack_118 <= plVar21) {
                  uVar32 = 0;
                  if (plStack_118 != (long *)0x0) {
                    uVar32 = (ulong)plVar21 / (ulong)plStack_118;
                  }
                  plVar21 = (long *)((long)plVar21 - uVar32 * (long)plStack_118);
                }
              } while (plVar21 == plVar37);
            }
          }
LAB_10956d18c:
          plVar16 = (long *)0x18;
          __Znwm();
          *plVar16 = 0;
          plVar16[1] = (long)plVar15;
          plVar16[2] = (long)piVar35;
          if ((plVar10 == (long *)0x0) ||
             ((float)uStack_100 * (float)plVar10 < (float)(uStack_108 + 1))) {
            uVar14 = 1;
            if ((long *)0x2 < plVar10) {
              uVar14 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)plVar10 << 1;
            uVar32 = (ulong)((float)(uStack_108 + 1) / (float)uStack_100);
            if (uVar14 <= uVar32) {
              uVar14 = uVar32;
            }
            FUN_109488220(&plStack_120,uVar14);
            plVar10 = plStack_118;
            if (((ulong)plStack_118 & (long)plStack_118 - 1U) == 0) {
              plVar37 = (long *)((long)plStack_118 - 1U & (ulong)plVar15);
            }
            else {
              plVar37 = plVar15;
              if (plStack_118 <= plVar15) {
                uVar14 = 0;
                if (plStack_118 != (long *)0x0) {
                  uVar14 = (ulong)plVar15 / (ulong)plStack_118;
                }
                plVar37 = (long *)((long)plVar15 - uVar14 * (long)plStack_118);
              }
            }
          }
          plVar15 = (long *)plStack_120[(long)plVar37];
          if (plVar15 == (long *)0x0) {
            *plVar16 = (long)plStack_110;
            plStack_120[(long)plVar37] = (long)&plStack_110;
            plStack_110 = plVar16;
            if (*plVar16 != 0) {
              plVar15 = *(long **)(*plVar16 + 8);
              if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
                plVar15 = (long *)((ulong)plVar15 & (long)plVar10 - 1U);
              }
              else if (plVar10 <= plVar15) {
                uVar14 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar14 = (ulong)plVar15 / (ulong)plVar10;
                }
                plVar15 = (long *)((long)plVar15 - uVar14 * (long)plVar10);
              }
              plVar15 = plStack_120 + (long)plVar15;
              goto LAB_10956d290;
            }
          }
          else {
            *plVar16 = *plVar15;
LAB_10956d290:
            *plVar15 = (long)plVar16;
          }
          uStack_108 = uStack_108 + 1;
        }
LAB_10956d2a0:
        plVar10 = plStack_1f0;
      }
      if (plVar10 != (long *)0x0) {
        plStack_1e8 = plVar10;
        __ZdlPv(plVar10);
      }
      puVar17 = puVar17 + 2;
    } while (puVar17 != puVar2);
  }
  FUN_10948e308(*plVar12,&plStack_120);
  plVar37 = (long *)puVar8[1];
  plVar38 = (long *)puVar8[2];
  if (plVar37 != plVar38) {
    plVar30 = puVar8 + 0xc;
    do {
      (*(code *)**(undefined8 **)*plVar37)(&puStack_138);
      puVar28 = puStack_130;
      for (puVar27 = puStack_138; puVar27 != puVar28; puVar27 = puVar27 + 1) {
        uVar32 = *puVar27;
        uVar14 = ((ulong)(uint)((int)uVar32 << 3) + 8 ^ uVar32 >> 0x20) * -0x622015f714c7d297;
        uVar14 = (uVar32 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
        plVar16 = (long *)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
        plVar15 = (long *)puVar8[0xb];
        if (plVar15 != (long *)0x0) {
          uVar14 = (long)plVar15 - 1;
          if (((ulong)plVar15 & uVar14) == 0) {
            plVar10 = (long *)((ulong)plVar16 & uVar14);
          }
          else {
            plVar10 = plVar16;
            if (plVar15 <= plVar16) {
              uVar39 = 0;
              if (plVar15 != (long *)0x0) {
                uVar39 = (ulong)plVar16 / (ulong)plVar15;
              }
              plVar10 = (long *)((long)plVar16 - uVar39 * (long)plVar15);
            }
          }
          puVar17 = *(undefined8 **)(*plVar31 + (long)plVar10 * 8);
          if (puVar17 != (undefined8 *)0x0) {
            for (plVar21 = (long *)*puVar17; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
              plVar18 = (long *)plVar21[1];
              if (plVar18 == plVar16) {
                if (plVar21[2] == uVar32) goto LAB_10956d688;
              }
              else {
                if (((ulong)plVar15 & uVar14) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & uVar14);
                }
                else if (plVar15 <= plVar18) {
                  uVar39 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar39 = (ulong)plVar18 / (ulong)plVar15;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar39 * (long)plVar15);
                }
                if (plVar18 != plVar10) break;
              }
            }
          }
        }
        plVar21 = (long *)0x28;
        __Znwm();
        plStack_1e0 = (long *)0x1;
        *plVar21 = 0;
        plVar21[1] = (long)plVar16;
        plVar21[3] = 0;
        plVar21[4] = 0;
        plVar21[2] = uVar32;
        plStack_1f0 = plVar21;
        plStack_1e8 = plVar31;
        if ((plVar15 == (long *)0x0) ||
           (*(float *)(puVar8 + 0xe) * (float)plVar15 < (float)(puVar8[0xd] + 1))) {
          uVar14 = 1;
          if ((long *)0x2 < plVar15) {
            uVar14 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
          }
          plVar10 = (long *)(uVar14 | (long)plVar15 << 1);
          plVar18 = (long *)(long)((float)(puVar8[0xd] + 1) / *(float *)(puVar8 + 0xe));
          if (plVar10 <= plVar18) {
            plVar10 = plVar18;
          }
          if ((long)plVar10 - 1U == 0) {
            plVar10 = (long *)0x2;
          }
          else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar15 = (long *)puVar8[0xb];
          }
          if (plVar15 < plVar10) {
LAB_10956d498:
            if ((ulong)plVar10 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10956e520;
            }
            lVar29 = (long)plVar10 << 3;
            __Znwm();
            lVar11 = *plVar31;
            *plVar31 = lVar29;
            if (lVar11 != 0) {
              __ZdlPv();
            }
            plVar15 = (long *)0x0;
            puVar8[0xb] = plVar10;
            do {
              *(undefined8 *)(*plVar31 + (long)plVar15 * 8) = 0;
              plVar15 = (long *)((long)plVar15 + 1);
            } while (plVar10 != plVar15);
            plVar18 = (long *)*plVar30;
            plVar15 = plVar10;
            if (plVar18 != (long *)0x0) {
              plVar22 = (long *)plVar18[1];
              uVar14 = (long)plVar10 - 1;
              if (((ulong)plVar10 & uVar14) == 0) {
                plVar22 = (long *)((ulong)plVar22 & uVar14);
              }
              else if (plVar10 <= plVar22) {
                uVar32 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar32 = (ulong)plVar22 / (ulong)plVar10;
                }
                plVar22 = (long *)((long)plVar22 - uVar32 * (long)plVar10);
              }
              *(long **)(*plVar31 + (long)plVar22 * 8) = plVar30;
              plVar23 = (long *)*plVar18;
              while (plVar23 != (long *)0x0) {
                plVar25 = (long *)plVar23[1];
                if (((ulong)plVar10 & uVar14) == 0) {
                  plVar25 = (long *)((ulong)plVar25 & uVar14);
                }
                else if (plVar10 <= plVar25) {
                  uVar32 = 0;
                  if (plVar10 != (long *)0x0) {
                    uVar32 = (ulong)plVar25 / (ulong)plVar10;
                  }
                  plVar25 = (long *)((long)plVar25 - uVar32 * (long)plVar10);
                }
                plVar24 = plVar23;
                if (plVar25 != plVar22) {
                  lVar29 = *plVar31;
                  if (*(long *)(lVar29 + (long)plVar25 * 8) == 0) {
                    *(long **)(lVar29 + (long)plVar25 * 8) = plVar18;
                    plVar22 = plVar25;
                  }
                  else {
                    *plVar18 = *plVar23;
                    *plVar23 = **(undefined8 **)(lVar29 + (long)plVar25 * 8);
                    **(long **)(lVar29 + (long)plVar25 * 8) = (long)plVar23;
                    plVar24 = plVar18;
                  }
                }
                plVar18 = plVar24;
                plVar23 = (long *)*plVar24;
              }
            }
          }
          else if (plVar10 < plVar15) {
            plVar18 = (long *)(long)((float)(ulong)puVar8[0xd] / *(float *)(puVar8 + 0xe));
            if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar18) {
              plVar18 = (long *)(1L << (-LZCOUNT((long)plVar18 + -1) & 0x3fU));
            }
            if (plVar10 <= plVar18) {
              plVar10 = plVar18;
            }
            if (plVar10 < plVar15) {
              if (plVar10 != (long *)0x0) goto LAB_10956d498;
              lVar29 = *plVar31;
              *plVar31 = 0;
              if (lVar29 != 0) {
                __ZdlPv();
              }
              puVar8[0xb] = 0;
              plVar15 = (long *)0x0;
            }
            else {
              plVar15 = (long *)puVar8[0xb];
            }
          }
          if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
            plVar10 = (long *)((long)plVar15 - 1U & (ulong)plVar16);
          }
          else {
            plVar10 = plVar16;
            if (plVar15 <= plVar16) {
              uVar14 = 0;
              if (plVar15 != (long *)0x0) {
                uVar14 = (ulong)plVar16 / (ulong)plVar15;
              }
              plVar10 = (long *)((long)plVar16 - uVar14 * (long)plVar15);
            }
          }
        }
        lVar29 = *plVar31;
        plVar16 = *(long **)(lVar29 + (long)plVar10 * 8);
        if (plVar16 == (long *)0x0) {
          *plVar21 = *plVar30;
          *plVar30 = (long)plVar21;
          *(long **)(lVar29 + (long)plVar10 * 8) = plVar30;
          if (*plVar21 != 0) {
            plVar10 = *(long **)(*plVar21 + 8);
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              plVar10 = (long *)((ulong)plVar10 & (long)plVar15 - 1U);
            }
            else if (plVar15 <= plVar10) {
              uVar14 = 0;
              if (plVar15 != (long *)0x0) {
                uVar14 = (ulong)plVar10 / (ulong)plVar15;
              }
              plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar15);
            }
            plVar16 = (long *)(*plVar31 + (long)plVar10 * 8);
            goto LAB_10956d674;
          }
        }
        else {
          *plVar21 = *plVar16;
LAB_10956d674:
          *plVar16 = (long)plVar21;
        }
        puVar8[0xd] = puVar8[0xd] + 1;
LAB_10956d688:
        lVar11 = plVar37[1];
        lVar29 = *plVar37;
        if (plVar37[1] != 0) {
          plVar10 = (long *)(plVar37[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar10 = (long *)plVar21[4];
        plVar21[4] = lVar11;
        plVar21[3] = lVar29;
        if (plVar10 != (long *)0x0) {
          plVar15 = plVar10 + 1;
          do {
            lVar29 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar29 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar29 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      if (puStack_138 != (ulong *)0x0) {
        puStack_130 = puStack_138;
        __ZdlPv(puStack_138);
      }
      plVar37 = plVar37 + 2;
    } while (plVar37 != plVar38);
  }
  uVar14 = uStack_108;
  if ((*(byte *)(puVar8 + 0x3e) & 1) == 0) {
LAB_10956e3fc:
    FUN_10948cb8c(&plStack_120);
    FUN_1093579bc(&ppuStack_1c0);
    *param_1 = puVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar10 = *(long **)(*plVar12 + 0x48);
    plVar31 = *(long **)(*plVar12 + 0x50);
    lVar29 = (long)plVar31 - (long)plVar10;
    plVar37 = (long *)((lVar29 >> 3) * -0x5555555555555555);
    func_0x000108a851e4(puVar8 + 0x36);
    plStack_1e8 = (long *)0x0;
    plStack_1f0 = (long *)0x0;
    puStack_1d8 = (ulong *)0x0;
    plStack_1e0 = (long *)0x0;
    fStack_1d0 = 1.0;
    if (plVar31 != plVar10) {
      plVar38 = (long *)0x0;
      puVar27 = puVar8 + 0x3b;
      plVar30 = plVar31;
      do {
        plVar15 = (long *)(*(long *)(*plVar12 + 0x48) + (long)plVar38 * 0x18);
        lVar11 = plVar15[1] - *plVar15;
        if (lVar11 != 0) {
          plVar15 = plStack_1e0;
          if (puStack_1d8 != (ulong *)0x0) {
            while (plVar15 != (long *)0x0) {
              plVar15 = (long *)*plVar15;
              __ZdlPv();
            }
            plStack_1e0 = (long *)0x0;
            if (plStack_1e8 != (long *)0x0) {
              plVar15 = (long *)0x0;
              do {
                plStack_1f0[(long)plVar15] = 0;
                plVar15 = (long *)((long)plVar15 + 1);
              } while (plStack_1e8 != plVar15);
            }
            puStack_1d8 = (ulong *)0x0;
          }
          puVar28 = (ulong *)0x0;
          uVar32 = 0;
          do {
            plVar15 = plStack_1e8;
            lVar43 = *(long *)(*plVar12 + 0x48);
            plVar16 = (long *)((*(long *)(*plVar12 + 0x50) - lVar43 >> 3) * -0x5555555555555555);
            if ((plVar16 < plVar38 || (long)plVar16 - (long)plVar38 == 0) ||
               (plVar16 = (long *)(lVar43 + (long)plVar38 * 0x18), lVar43 = *plVar16,
               (ulong)(plVar16[1] - lVar43 >> 6) <= uVar32)) {
              uVar39 = 0;
            }
            else {
              uVar39 = *(ulong *)(lVar43 + uVar32 * 0x40 + 0x30);
            }
            uVar19 = ((ulong)(uint)((int)uVar39 << 3) + 8 ^ uVar39 >> 0x20) * -0x622015f714c7d297;
            uVar19 = (uVar39 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
            plVar16 = (long *)((uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297);
            if (plStack_1e8 != (long *)0x0) {
              uVar19 = (long)plStack_1e8 - 1;
              if (((ulong)plStack_1e8 & uVar19) == 0) {
                plVar30 = (long *)((ulong)plVar16 & uVar19);
              }
              else {
                plVar30 = plVar16;
                if (plStack_1e8 <= plVar16) {
                  uVar36 = 0;
                  if (plStack_1e8 != (long *)0x0) {
                    uVar36 = (ulong)plVar16 / (ulong)plStack_1e8;
                  }
                  plVar30 = (long *)((long)plVar16 - uVar36 * (long)plStack_1e8);
                }
              }
              if ((undefined8 *)plStack_1f0[(long)plVar30] != (undefined8 *)0x0) {
                for (plVar21 = *(long **)plStack_1f0[(long)plVar30]; plVar21 != (long *)0x0;
                    plVar21 = (long *)*plVar21) {
                  plVar18 = (long *)plVar21[1];
                  if (plVar18 == plVar16) {
                    if (plVar21[2] == uVar39) goto LAB_10956dbec;
                  }
                  else {
                    if (((ulong)plStack_1e8 & uVar19) == 0) {
                      plVar18 = (long *)((ulong)plVar18 & uVar19);
                    }
                    else if (plStack_1e8 <= plVar18) {
                      uVar36 = 0;
                      if (plStack_1e8 != (long *)0x0) {
                        uVar36 = (ulong)plVar18 / (ulong)plStack_1e8;
                      }
                      plVar18 = (long *)((long)plVar18 - uVar36 * (long)plStack_1e8);
                    }
                    if (plVar18 != plVar30) break;
                  }
                }
              }
            }
            plVar21 = (long *)0x20;
            __Znwm();
            *plVar21 = 0;
            plVar21[1] = (long)plVar16;
            plVar21[2] = uVar39;
            *(undefined4 *)(plVar21 + 3) = 0;
            if ((plVar15 == (long *)0x0) ||
               (fStack_1d0 * (float)plVar15 < (float)((long)puVar28 + 1))) {
              uVar39 = 1;
              if ((long *)0x2 < plVar15) {
                uVar39 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
              }
              plVar30 = (long *)(uVar39 | (long)plVar15 << 1);
              plVar18 = (long *)(long)((float)((long)puVar28 + 1) / fStack_1d0);
              if (plVar30 <= plVar18) {
                plVar30 = plVar18;
              }
              plVar18 = plVar15;
              if ((long)plVar30 - 1U == 0) {
                plVar30 = (long *)0x2;
              }
              else if (((ulong)plVar30 & (long)plVar30 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
                plVar18 = plStack_1e8;
              }
              if (plVar18 < plVar30) {
LAB_10956da08:
                if ((ulong)plVar30 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_10956e520;
                }
                plVar15 = (long *)((long)plVar30 << 3);
                __Znwm();
                bVar5 = plStack_1f0 != (long *)0x0;
                plStack_1f0 = plVar15;
                if (bVar5) {
                  __ZdlPv();
                }
                plVar15 = (long *)0x0;
                do {
                  plStack_1f0[(long)plVar15] = 0;
                  plVar15 = (long *)((long)plVar15 + 1);
                } while (plVar30 != plVar15);
                plVar15 = plVar30;
                plStack_1e8 = plVar30;
                if (plStack_1e0 != (long *)0x0) {
                  plVar18 = (long *)plStack_1e0[1];
                  uVar39 = (long)plVar30 - 1;
                  if (((ulong)plVar30 & uVar39) == 0) {
                    plVar18 = (long *)((ulong)plVar18 & uVar39);
                  }
                  else if (plVar30 <= plVar18) {
                    uVar19 = 0;
                    if (plVar30 != (long *)0x0) {
                      uVar19 = (ulong)plVar18 / (ulong)plVar30;
                    }
                    plVar18 = (long *)((long)plVar18 - uVar19 * (long)plVar30);
                  }
                  plStack_1f0[(long)plVar18] = (long)&plStack_1e0;
                  plVar22 = (long *)*plStack_1e0;
                  plVar23 = plStack_1e0;
                  while (plVar22 != (long *)0x0) {
                    plVar25 = (long *)plVar22[1];
                    if (((ulong)plVar30 & uVar39) == 0) {
                      plVar25 = (long *)((ulong)plVar25 & uVar39);
                    }
                    else if (plVar30 <= plVar25) {
                      uVar19 = 0;
                      if (plVar30 != (long *)0x0) {
                        uVar19 = (ulong)plVar25 / (ulong)plVar30;
                      }
                      plVar25 = (long *)((long)plVar25 - uVar19 * (long)plVar30);
                    }
                    plVar24 = plVar22;
                    if (plVar25 != plVar18) {
                      if (plStack_1f0[(long)plVar25] == 0) {
                        plStack_1f0[(long)plVar25] = (long)plVar23;
                        plVar18 = plVar25;
                      }
                      else {
                        *plVar23 = *plVar22;
                        *plVar22 = *(long *)plStack_1f0[(long)plVar25];
                        *(long **)plStack_1f0[(long)plVar25] = plVar22;
                        plVar24 = plVar23;
                      }
                    }
                    plVar23 = plVar24;
                    plVar22 = (long *)*plVar24;
                  }
                }
              }
              else {
                plVar15 = plVar18;
                if (plVar30 < plVar18) {
                  plVar15 = (long *)(long)((float)puStack_1d8 / fStack_1d0);
                  if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((long *)0x1 < plVar15) {
                    plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 + -1) & 0x3fU));
                  }
                  plVar22 = plStack_1f0;
                  if (plVar30 <= plVar15) {
                    plVar30 = plVar15;
                  }
                  plVar15 = plStack_1e8;
                  if (plVar30 < plVar18) {
                    if (plVar30 != (long *)0x0) goto LAB_10956da08;
                    plStack_1f0 = (long *)0x0;
                    if (plVar22 != (long *)0x0) {
                      __ZdlPv();
                    }
                    plStack_1e8 = (long *)0x0;
                    plVar15 = (long *)0x0;
                  }
                }
              }
              if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                plVar30 = (long *)((long)plVar15 - 1U & (ulong)plVar16);
              }
              else {
                plVar30 = plVar16;
                if (plVar15 <= plVar16) {
                  uVar39 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar39 = (ulong)plVar16 / (ulong)plVar15;
                  }
                  plVar30 = (long *)((long)plVar16 - uVar39 * (long)plVar15);
                }
              }
            }
            plVar16 = (long *)plStack_1f0[(long)plVar30];
            if (plVar16 == (long *)0x0) {
              *plVar21 = (long)plStack_1e0;
              plStack_1f0[(long)plVar30] = (long)&plStack_1e0;
              plStack_1e0 = plVar21;
              if (*plVar21 != 0) {
                plVar16 = *(long **)(*plVar21 + 8);
                if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                  plVar16 = (long *)((ulong)plVar16 & (long)plVar15 - 1U);
                }
                else if (plVar15 <= plVar16) {
                  uVar39 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar39 = (ulong)plVar16 / (ulong)plVar15;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar39 * (long)plVar15);
                }
                plVar16 = plStack_1f0 + (long)plVar16;
                goto LAB_10956dbdc;
              }
            }
            else {
              *plVar21 = *plVar16;
LAB_10956dbdc:
              *plVar16 = (long)plVar21;
            }
            puVar28 = (ulong *)((long)puStack_1d8 + 1);
            puStack_1d8 = puVar28;
LAB_10956dbec:
            *(int *)(plVar21 + 3) = (int)plVar21[3] + 1;
            uVar32 = uVar32 + 1;
          } while (uVar32 != lVar11 >> 6);
          if (*(int *)((long)puVar8 + 500) == 0) {
            dVar41 = 1.0;
LAB_10956dc74:
            *(double *)(puVar8[0x36] + (long)plVar38 * 8) = dVar41;
            plVar16 = plStack_1e0;
          }
          else {
            plVar16 = plStack_1e0;
            if (*(int *)((long)puVar8 + 500) == 1) {
              dVar41 = (double)NEON_ucvtf(puStack_1d8);
              dVar41 = (double)uVar14 / dVar41;
              _log();
              goto LAB_10956dc74;
            }
          }
          for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            uVar32 = plVar16[2];
            uVar39 = ((ulong)(uint)((int)uVar32 << 3) + 8 ^ uVar32 >> 0x20) * -0x622015f714c7d297;
            uVar39 = (uVar32 >> 0x20 ^ uVar39 >> 0x2f ^ uVar39) * -0x622015f714c7d297;
            puVar9 = (ulong *)((uVar39 ^ uVar39 >> 0x2f) * -0x622015f714c7d297);
            puVar34 = (ulong *)puVar8[0x3a];
            if (puVar34 != (ulong *)0x0) {
              uVar39 = (long)puVar34 - 1;
              if (((ulong)puVar34 & uVar39) == 0) {
                puVar28 = (ulong *)((ulong)puVar9 & uVar39);
              }
              else {
                puVar28 = puVar9;
                if (puVar34 <= puVar9) {
                  uVar19 = 0;
                  if (puVar34 != (ulong *)0x0) {
                    uVar19 = (ulong)puVar9 / (ulong)puVar34;
                  }
                  puVar28 = (ulong *)((long)puVar9 - uVar19 * (long)puVar34);
                }
              }
              puVar17 = *(undefined8 **)(*puVar40 + (long)puVar28 * 8);
              if (puVar17 != (undefined8 *)0x0) {
                for (puVar33 = (ulong *)*puVar17; puVar33 != (ulong *)0x0;
                    puVar33 = (ulong *)*puVar33) {
                  puVar20 = (ulong *)puVar33[1];
                  if (puVar20 == puVar9) {
                    if (puVar33[2] == uVar32) goto LAB_10956e020;
                  }
                  else {
                    if (((ulong)puVar34 & uVar39) == 0) {
                      puVar20 = (ulong *)((ulong)puVar20 & uVar39);
                    }
                    else if (puVar34 <= puVar20) {
                      uVar19 = 0;
                      if (puVar34 != (ulong *)0x0) {
                        uVar19 = (ulong)puVar20 / (ulong)puVar34;
                      }
                      puVar20 = (ulong *)((long)puVar20 - uVar19 * (long)puVar34);
                    }
                    if (puVar20 != puVar28) break;
                  }
                }
              }
            }
            puVar33 = (ulong *)0x40;
            __Znwm();
            uStack_128 = 1;
            *puVar33 = 0;
            puVar33[1] = (ulong)puVar9;
            puVar33[2] = plVar16[2];
            puVar33[7] = 0;
            puVar33[4] = 0;
            puVar33[3] = 0;
            puVar33[6] = 0;
            puVar33[5] = 0;
            *(undefined4 *)(puVar33 + 7) = 0x3f800000;
            puStack_138 = puVar33;
            puStack_130 = puVar40;
            if ((puVar34 == (ulong *)0x0) ||
               (*(float *)(puVar8 + 0x3d) * (float)puVar34 < (float)(puVar8[0x3c] + 1))) {
              uVar32 = 1;
              if ((ulong *)0x2 < puVar34) {
                uVar32 = (ulong)(((ulong)puVar34 & (long)puVar34 - 1U) != 0);
              }
              puVar28 = (ulong *)(uVar32 | (long)puVar34 << 1);
              puVar20 = (ulong *)(long)((float)(puVar8[0x3c] + 1) / *(float *)(puVar8 + 0x3d));
              if (puVar28 <= puVar20) {
                puVar28 = puVar20;
              }
              if ((long)puVar28 - 1U == 0) {
                puVar28 = (ulong *)0x2;
              }
              else if (((ulong)puVar28 & (long)puVar28 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
                puVar34 = (ulong *)puVar8[0x3a];
              }
              if (puVar34 < puVar28) {
LAB_10956de24:
                if ((ulong)puVar28 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_10956e520;
                }
                uVar32 = (long)puVar28 << 3;
                __Znwm();
                uVar39 = *puVar40;
                *puVar40 = uVar32;
                if (uVar39 != 0) {
                  __ZdlPv();
                }
                puVar34 = (ulong *)0x0;
                puVar8[0x3a] = puVar28;
                do {
                  *(undefined8 *)(*puVar40 + (long)puVar34 * 8) = 0;
                  puVar34 = (ulong *)((long)puVar34 + 1);
                } while (puVar28 != puVar34);
                plVar30 = (long *)*puVar27;
                puVar34 = puVar28;
                if (plVar30 != (long *)0x0) {
                  puVar20 = (ulong *)plVar30[1];
                  uVar32 = (long)puVar28 - 1;
                  if (((ulong)puVar28 & uVar32) == 0) {
                    puVar20 = (ulong *)((ulong)puVar20 & uVar32);
                  }
                  else if (puVar28 <= puVar20) {
                    uVar39 = 0;
                    if (puVar28 != (ulong *)0x0) {
                      uVar39 = (ulong)puVar20 / (ulong)puVar28;
                    }
                    puVar20 = (ulong *)((long)puVar20 - uVar39 * (long)puVar28);
                  }
                  *(ulong **)(*puVar40 + (long)puVar20 * 8) = puVar27;
                  plVar21 = (long *)*plVar30;
                  while (plVar21 != (long *)0x0) {
                    puVar26 = (ulong *)plVar21[1];
                    if (((ulong)puVar28 & uVar32) == 0) {
                      puVar26 = (ulong *)((ulong)puVar26 & uVar32);
                    }
                    else if (puVar28 <= puVar26) {
                      uVar39 = 0;
                      if (puVar28 != (ulong *)0x0) {
                        uVar39 = (ulong)puVar26 / (ulong)puVar28;
                      }
                      puVar26 = (ulong *)((long)puVar26 - uVar39 * (long)puVar28);
                    }
                    plVar18 = plVar21;
                    if (puVar26 != puVar20) {
                      uVar39 = *puVar40;
                      if (*(long *)(uVar39 + (long)puVar26 * 8) == 0) {
                        *(long **)(uVar39 + (long)puVar26 * 8) = plVar30;
                        puVar20 = puVar26;
                      }
                      else {
                        *plVar30 = *plVar21;
                        *plVar21 = **(undefined8 **)(uVar39 + (long)puVar26 * 8);
                        **(long **)(uVar39 + (long)puVar26 * 8) = (long)plVar21;
                        plVar18 = plVar30;
                      }
                    }
                    plVar30 = plVar18;
                    plVar21 = (long *)*plVar18;
                  }
                }
              }
              else if (puVar28 < puVar34) {
                puVar20 = (ulong *)(long)((float)(ulong)puVar8[0x3c] / *(float *)(puVar8 + 0x3d));
                if ((puVar34 < (ulong *)0x3) || (((ulong)puVar34 & (long)puVar34 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((ulong *)0x1 < puVar20) {
                  puVar20 = (ulong *)(1L << (-LZCOUNT((long)puVar20 + -1) & 0x3fU));
                }
                if (puVar28 <= puVar20) {
                  puVar28 = puVar20;
                }
                if (puVar28 < puVar34) {
                  if (puVar28 != (ulong *)0x0) goto LAB_10956de24;
                  uVar32 = *puVar40;
                  *puVar40 = 0;
                  if (uVar32 != 0) {
                    __ZdlPv();
                  }
                  puVar8[0x3a] = 0;
                  puVar34 = (ulong *)0x0;
                }
                else {
                  puVar34 = (ulong *)puVar8[0x3a];
                }
              }
              if (((ulong)puVar34 & (long)puVar34 - 1U) == 0) {
                puVar28 = (ulong *)((long)puVar34 - 1U & (ulong)puVar9);
              }
              else {
                puVar28 = puVar9;
                if (puVar34 <= puVar9) {
                  uVar32 = 0;
                  if (puVar34 != (ulong *)0x0) {
                    uVar32 = (ulong)puVar9 / (ulong)puVar34;
                  }
                  puVar28 = (ulong *)((long)puVar9 - uVar32 * (long)puVar34);
                }
              }
            }
            uVar32 = *puVar40;
            puVar9 = *(ulong **)(uVar32 + (long)puVar28 * 8);
            if (puVar9 == (ulong *)0x0) {
              *puVar33 = *puVar27;
              *puVar27 = (ulong)puVar33;
              *(ulong **)(uVar32 + (long)puVar28 * 8) = puVar27;
              if (*puVar33 != 0) {
                puVar28 = *(ulong **)(*puVar33 + 8);
                if (((ulong)puVar34 & (long)puVar34 - 1U) == 0) {
                  puVar28 = (ulong *)((ulong)puVar28 & (long)puVar34 - 1U);
                }
                else if (puVar34 <= puVar28) {
                  uVar32 = 0;
                  if (puVar34 != (ulong *)0x0) {
                    uVar32 = (ulong)puVar28 / (ulong)puVar34;
                  }
                  puVar28 = (ulong *)((long)puVar28 - uVar32 * (long)puVar34);
                }
                puVar9 = (ulong *)(*puVar40 + (long)puVar28 * 8);
                goto LAB_10956e00c;
              }
            }
            else {
              *puVar33 = *puVar9;
LAB_10956e00c:
              *puVar9 = (ulong)puVar33;
            }
            puVar8[0x3c] = puVar8[0x3c] + 1;
LAB_10956e020:
            plVar30 = (long *)(ulong)*(uint *)(plVar16 + 3);
            dVar41 = *(double *)(puVar8[0x36] + (long)plVar38 * 8);
            plVar21 = (long *)puVar33[4];
            if (plVar21 != (long *)0x0) {
              uVar32 = (long)plVar21 - 1;
              if (((ulong)plVar21 & uVar32) == 0) {
                plVar15 = (long *)(uVar32 & (ulong)plVar38);
              }
              else {
                plVar15 = plVar38;
                if (plVar21 <= plVar38) {
                  uVar39 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar39 = (ulong)plVar38 / (ulong)plVar21;
                  }
                  plVar15 = (long *)((long)plVar38 - uVar39 * (long)plVar21);
                }
              }
              puVar17 = *(undefined8 **)(puVar33[3] + (long)plVar15 * 8);
              if (puVar17 != (undefined8 *)0x0) {
                for (puVar28 = (ulong *)*puVar17; puVar28 != (ulong *)0x0;
                    puVar28 = (ulong *)*puVar28) {
                  plVar18 = (long *)puVar28[1];
                  if (plVar18 == plVar38) {
                    if ((long *)puVar28[2] == plVar38) goto LAB_10956e1d0;
                  }
                  else {
                    if (((ulong)plVar21 & uVar32) == 0) {
                      plVar18 = (long *)((ulong)plVar18 & uVar32);
                    }
                    else if (plVar21 <= plVar18) {
                      uVar39 = 0;
                      if (plVar21 != (long *)0x0) {
                        uVar39 = (ulong)plVar18 / (ulong)plVar21;
                      }
                      plVar18 = (long *)((long)plVar18 - uVar39 * (long)plVar21);
                    }
                    if (plVar18 != plVar15) break;
                  }
                }
              }
            }
            puVar28 = (ulong *)0x20;
            __Znwm();
            *puVar28 = 0;
            puVar28[1] = (ulong)plVar38;
            puVar28[2] = (ulong)plVar38;
            puVar28[3] = 0;
            if ((plVar21 == (long *)0x0) ||
               (*(float *)(puVar33 + 7) * (float)plVar21 < (float)(puVar33[6] + 1))) {
              uVar32 = 1;
              if ((long *)0x2 < plVar21) {
                uVar32 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
              }
              uVar32 = uVar32 | (long)plVar21 << 1;
              uVar39 = (ulong)((float)(puVar33[6] + 1) / *(float *)(puVar33 + 7));
              if (uVar32 <= uVar39) {
                uVar32 = uVar39;
              }
              FUN_1095902e8(puVar33 + 3,uVar32);
              plVar21 = (long *)puVar33[4];
              if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
                plVar15 = (long *)((long)plVar21 - 1U & (ulong)plVar38);
              }
              else {
                plVar15 = plVar38;
                if (plVar21 <= plVar38) {
                  uVar32 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar32 = (ulong)plVar38 / (ulong)plVar21;
                  }
                  plVar15 = (long *)((long)plVar38 - uVar32 * (long)plVar21);
                }
              }
            }
            uVar32 = puVar33[3];
            puVar34 = *(ulong **)(uVar32 + (long)plVar15 * 8);
            if (puVar34 == (ulong *)0x0) {
              puVar34 = puVar33 + 5;
              *puVar28 = *puVar34;
              *puVar34 = (ulong)puVar28;
              *(ulong **)(uVar32 + (long)plVar15 * 8) = puVar34;
              if (*puVar28 != 0) {
                plVar18 = *(long **)(*puVar28 + 8);
                if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & (long)plVar21 - 1U);
                }
                else if (plVar21 <= plVar18) {
                  uVar32 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar32 = (ulong)plVar18 / (ulong)plVar21;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar32 * (long)plVar21);
                }
                puVar34 = (ulong *)(puVar33[3] + (long)plVar18 * 8);
                goto LAB_10956e1c0;
              }
            }
            else {
              *puVar28 = *puVar34;
LAB_10956e1c0:
              *puVar34 = (ulong)puVar28;
            }
            puVar33[6] = puVar33[6] + 1;
LAB_10956e1d0:
            puVar28[3] = (ulong)(dVar41 * (double)(long)plVar30);
          }
        }
        plVar38 = (long *)((long)plVar38 + 1);
      } while (plVar38 != plVar37);
    }
    plVar12 = (long *)0x30;
    __Znwm();
    lVar43 = puVar8[0x41];
    lVar11 = puVar8[0x42];
    lVar44 = puVar8[0x43];
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    if (plVar31 == plVar10) {
LAB_10956e2dc:
      plVar12[3] = lVar43;
      plVar12[4] = lVar11;
      plVar12[5] = lVar44;
      FUN_109590540(puVar8 + 0x40,plVar12);
      plVar10 = (long *)puVar8[0x3b];
      if (plVar10 != (long *)0x0) {
        plVar31 = (long *)puVar8[0x40];
        uVar3 = *(uint *)(puVar8 + 0x3f);
        do {
          uVar14 = (ulong)uVar3;
          FUN_10959057c(plVar10 + 3);
          for (plVar37 = (long *)plVar10[5]; plVar37 != (long *)0x0; plVar37 = (long *)*plVar37) {
            puVar40 = (ulong *)(*plVar31 + plVar37[2] * 0x18);
            plVar12 = (long *)puVar40[1];
            if (plVar12 < (long *)puVar40[2]) {
              *plVar12 = plVar10[2];
              plVar12[1] = plVar37[3];
              plVar12 = plVar12 + 2;
              uVar32 = uVar14;
            }
            else {
              lVar29 = (long)plVar12 - *puVar40;
              uVar32 = (lVar29 >> 4) + 1;
              if (uVar32 >> 0x3c != 0) {
                FUN_109590604();
                goto LAB_10956e520;
              }
              uVar19 = (long)puVar40[2] - *puVar40;
              uVar39 = (long)uVar19 >> 3;
              if (uVar39 <= uVar32) {
                uVar39 = uVar32;
              }
              if (0x7fffffffffffffef < uVar19) {
                uVar39 = 0xfffffffffffffff;
              }
              func_0x000109590618();
              uVar32 = *puVar40;
              uVar19 = puVar40[1];
              plVar38 = (long *)(uVar39 + lVar29);
              *plVar38 = plVar10[2];
              plVar38[1] = plVar37[3];
              plVar12 = plVar38 + 2;
              uVar36 = (long)plVar38 - (uVar19 - uVar32);
              _memcpy(uVar36);
              uVar19 = *puVar40;
              *puVar40 = uVar36;
              puVar40[1] = (ulong)plVar12;
              puVar40[2] = uVar39 + uVar14 * 0x10;
              if (uVar19 != 0) {
                __ZdlPv();
              }
            }
            puVar40[1] = (ulong)plVar12;
            uVar14 = uVar32;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      func_0x00010959064c(&plStack_1f0);
      goto LAB_10956e3fc;
    }
    if (plVar37 < (long *)0xaaaaaaaaaaaaaab) {
      lVar13 = lVar29;
      __Znwm();
      *plVar12 = lVar13;
      plVar12[2] = lVar13 + lVar29;
      _bzero();
      plVar12[1] = lVar13 + ((lVar29 - 0x18U) / 0x18) * 0x18 + 0x18;
      goto LAB_10956e2dc;
    }
  }
  FUN_1095904b8();
LAB_10956e520:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10956e524);
  (*pcVar7)();
}



/* Entry: 10956e76c; end: 10956e9c7;  */

void FUN_10956e76c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  uint uStack_58;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  *puVar2 = &PTR_DAT_110afd508;
  piVar6 = (int *)(puVar2 + 2);
  puVar2[3] = 0x100000000;
  piVar6[0] = 0;
  piVar6[1] = 1;
  puVar2[4] = &DAT_10e5b4a18;
  puVar2[5] = 0;
  ppuStack_a0 = &PTR_FUN_110af3498;
  uStack_98 = 0;
  uStack_88 = 0x100000000;
  uStack_90 = 0x100000000;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = &DAT_10e5b4a18;
  uVar5 = *(ulong *)(param_2 + 0x40);
  puVar8 = (ulong *)(param_2 + 0x40);
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar9 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar10 = *puVar8;
      uVar5 = uVar10 + 0x28;
      func_0x00010b4bee4c(uVar5,&UNK_10f5747d9,0x1d);
      if ((uVar5 & 1) != 0) {
        func_0x00010b4bedfc(uVar10 + 0x28,&UNK_10f5747d9,0x1d,&ppuStack_a0);
        *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_70;
        if (*(int *)((long)puVar2 + 0x14) != 1) {
          func_0x000107c30320(piVar6,0x10100280020,0);
        }
        puStack_60 = &uStack_90;
        if (uStack_88._4_4_ != uStack_90._4_4_) {
          uStack_58 = uStack_88._4_4_;
          uStack_68 = *(ulong *)(puStack_80 + (ulong)uStack_88._4_4_ * 8);
          if ((uStack_68 & 1) != 0) {
            uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
          }
          do {
            uVar10 = uStack_68;
            puVar7 = (undefined8 *)(uStack_68 + 8);
            uVar5 = *(ulong *)(uStack_68 + 0x10);
            puVar4 = (undefined8 *)*puVar7;
            if (-1 < (char)*(byte *)(uStack_68 + 0x1f)) {
              uVar5 = (ulong)*(byte *)(uStack_68 + 0x1f);
              puVar4 = puVar7;
            }
            piVar3 = piVar6;
            func_0x000107c27d5c(piVar6,puVar4,uVar5,0);
            if (piVar3 == (int *)0x0) {
              piVar3 = piVar6;
              func_0x000107c27d60(piVar6,*piVar6 + 1);
              if ((int)piVar3 != 0) {
                uVar5 = *(ulong *)(uVar10 + 0x10);
                puVar4 = *(undefined8 **)(uVar10 + 8);
                if (-1 < (char)*(byte *)(uVar10 + 0x1f)) {
                  uVar5 = (ulong)*(byte *)(uVar10 + 0x1f);
                  puVar4 = puVar7;
                }
                func_0x000107c27d5c(piVar6,puVar4,uVar5,0);
              }
              piVar3 = piVar6;
              func_0x000107c27d64(piVar6,0x28);
              func_0x000107c2821c(piVar3 + 2,puVar2[5],puVar7);
              piVar3[8] = *(int *)(uVar10 + 0x20);
              func_0x000107c27d68(piVar6,puVar4,piVar3);
              *piVar6 = *piVar6 + 1;
            }
            func_0x000107c27d54(&uStack_68);
          } while (uStack_68 != 0);
        }
        FUN_10935ebb0(&ppuStack_a0);
        *param_1 = puVar2;
        return;
      }
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10956e838);
  (*pcVar1)();
}



/* Entry: 10956e9c8; end: 10956f303;  */

/* WARNING: Removing unreachable block (ram,0x00010956ee14) */
/* WARNING: Removing unreachable block (ram,0x00010956efc8) */

void FUN_10956e9c8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint **ppuVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  bool bVar12;
  bool bVar13;
  uint ***pppuVar14;
  undefined4 *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint *****pppppuVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined4 *puVar22;
  uint ***pppuVar23;
  ushort *puVar24;
  undefined *puVar25;
  long lVar26;
  uint ***pppuVar27;
  ulong *puVar28;
  long lVar29;
  undefined4 *puVar30;
  uint **ppuVar31;
  undefined4 *puVar32;
  ulong *puVar33;
  ulong uVar35;
  uint ***pppuVar36;
  uint ****ppppuVar37;
  undefined4 *puVar38;
  uint ***pppuVar39;
  long lVar40;
  long *plVar41;
  uint ****ppppuStack_160;
  uint ****ppppuStack_158;
  uint ****ppppuStack_150;
  uint ***pppuStack_140;
  uint ***pppuStack_138;
  undefined8 uStack_130;
  uint ***pppuStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  int iStack_b0;
  uint ***pppuStack_a8;
  uint ***pppuStack_a0;
  uint ***pppuStack_98;
  uint ****ppppuStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  uint ****ppppuStack_78;
  uint ****ppppuStack_70;
  ulong *puVar34;
  
  puVar17 = (undefined8 *)0x60;
  __Znwm();
  plVar41 = puVar17 + 1;
  puVar17[2] = 0;
  *plVar41 = 0;
  puVar19 = puVar17 + 7;
  puVar17[8] = 0;
  *puVar19 = 0;
  *puVar17 = &PTR_DAT_110afd558;
  puVar17[4] = 0;
  puVar17[3] = 0;
  puVar17[6] = 0;
  puVar17[5] = 0;
  puVar17[9] = 0;
  ppuStack_110 = &PTR_FUN_110af2ed0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_e0 = &DAT_11383d918;
  puStack_d8 = &DAT_11383d918;
  iStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppuStack_d0 = (undefined **)0x0;
  uVar21 = *(ulong *)(param_2 + 0x40);
  puVar28 = (ulong *)(param_2 + 0x40);
  if ((uVar21 & 1) != 0) {
    puVar28 = (ulong *)(uVar21 + 7);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar29 = (long)*(int *)(param_2 + 0x48) << 3;
    do {
      uVar35 = *puVar28;
      uVar21 = uVar35 + 0x28;
      func_0x00010b4bee4c(uVar21,&UNK_10f5748a9,0x1e);
      if ((uVar21 & 1) != 0) {
        func_0x00010b4bedfc(uVar35 + 0x28,&UNK_10f5748a9,0x1e,&ppuStack_110);
        ppuVar4 = &PTR_PTR_1132de750;
        if (ppuStack_d0 != (undefined **)0x0) {
          ppuVar4 = ppuStack_d0;
        }
        puVar32 = (undefined4 *)ppuVar4[3];
        iVar10 = *(int *)(ppuVar4 + 2);
        uVar35 = (ulong)iVar10;
        lVar29 = uVar35 * 4;
        uVar21 = puVar17[6];
        puVar38 = (undefined4 *)puVar17[4];
        if ((ulong)((long)(uVar21 - (long)puVar38) >> 2) < uVar35) {
          if (puVar38 != (undefined4 *)0x0) {
            puVar17[5] = puVar38;
            __ZdlPv(puVar38);
            uVar21 = 0;
            puVar17[4] = 0;
            puVar17[5] = 0;
            puVar17[6] = 0;
          }
          if (iVar10 < 0) {
            FUN_10923f788();
            goto LAB_10956f1e4;
          }
          uVar5 = (long)uVar21 >> 1;
          if ((ulong)((long)uVar21 >> 1) <= uVar35) {
            uVar5 = uVar35;
          }
          if (0x7ffffffffffffffb < uVar21) {
            uVar5 = 0x3fffffffffffffff;
          }
          FUN_10925b938(puVar17 + 4,uVar5);
          puVar22 = (undefined4 *)puVar17[5];
          do {
            puVar38 = puVar22 + 1;
            *puVar22 = *puVar32;
            lVar29 = lVar29 + -4;
            puVar22 = puVar38;
            puVar32 = puVar32 + 1;
          } while (lVar29 != 0);
LAB_10956ebd4:
          puVar17[5] = puVar38;
        }
        else {
          puVar22 = (undefined4 *)puVar17[5];
          if (uVar35 <= (ulong)((long)puVar22 - (long)puVar38 >> 2)) {
            if (iVar10 != 0) {
              _memmove(puVar38,puVar32,lVar29);
            }
            puVar38 = puVar38 + uVar35;
            goto LAB_10956ebd4;
          }
          puVar30 = (undefined4 *)(((long)puVar22 - (long)puVar38) + (long)puVar32);
          puVar15 = puVar22;
          if (puVar22 != puVar38) {
            _memmove(puVar38,puVar32);
            puVar22 = (undefined4 *)puVar17[5];
            puVar15 = puVar22;
          }
          for (; puVar30 != puVar32 + uVar35; puVar30 = puVar30 + 1) {
            *puVar22 = *puVar30;
            puVar22 = puVar22 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar17[5] = puVar15;
        }
        *(int *)(puVar17 + 10) = uStack_c0._4_4_;
        if (uStack_c0._4_4_ == 1) {
          ppuVar6 = ppuStack_b8;
          if (iStack_b0 != 10) {
            ppuVar6 = &PTR_PTR_1132dd038;
          }
          puVar25 = ppuVar6[2];
          ppuVar7 = ppuVar6 + 2;
          if (((ulong)puVar25 & 1) != 0) {
            ppuVar7 = (undefined **)(puVar25 + 7);
          }
          pppuStack_140 = (uint ***)0x0;
          pppuStack_138 = (uint ***)0x0;
          uStack_130 = 0;
          FUN_1093c7d00(&pppuStack_140,ppuVar7,ppuVar7 + *(int *)(ppuVar6 + 3));
          puVar25 = ppuVar6[5];
          ppuVar7 = ppuVar6 + 5;
          if (((ulong)puVar25 & 1) != 0) {
            ppuVar7 = (undefined **)(puVar25 + 7);
          }
          pppuStack_128 = (uint ***)0x0;
          lStack_120 = 0;
          uStack_118 = 0;
          FUN_1093c7d00(&pppuStack_128,ppuVar7,ppuVar7 + *(int *)(ppuVar6 + 6));
          ppppuStack_160 = (uint ****)0x0;
          ppppuStack_158 = (uint ****)0x0;
          ppppuStack_150 = (uint ****)0x0;
          func_0x000107c31930(&ppppuStack_160,
                              ((long)pppuStack_138 - (long)pppuStack_140 >> 3) * -0x5555555555555555
                             );
          pppuVar27 = pppuStack_138;
          if (pppuStack_140 != pppuStack_138) {
            pppuVar39 = pppuStack_140;
            do {
              pppuStack_a8 = (uint ***)0x0;
              pppuStack_a0 = (uint ***)0x0;
              pppuStack_98 = (uint ***)0x0;
              ppuVar31 = pppuVar39[1];
              pppuVar36 = (uint ***)*pppuVar39;
              if (-1 < (char)*(byte *)((long)pppuVar39 + 0x17)) {
                ppuVar31 = (uint **)(ulong)*(byte *)((long)pppuVar39 + 0x17);
                pppuVar36 = pppuVar39;
              }
              if (ppuVar31 != (uint **)0x0) {
                uVar21 = 0;
                do {
                  uVar21 = uVar21 + *(byte *)pppuVar36;
                  if ((ulong)*(byte *)pppuVar36 != 0xff) {
                    uVar35 = (lStack_120 - (long)pppuStack_128 >> 3) * -0x5555555555555555;
                    if (uVar35 < uVar21 || uVar35 - uVar21 == 0) {
                      FUN_109520c48();
                      goto LAB_10956f1e4;
                    }
                    pppuVar23 = pppuStack_128 + uVar21 * 3;
                    ppuVar8 = pppuVar23[1];
                    pppuVar14 = (uint ***)*pppuVar23;
                    if (-1 < (char)*(byte *)((long)pppuVar23 + 0x17)) {
                      ppuVar8 = (uint **)(ulong)*(byte *)((long)pppuVar23 + 0x17);
                      pppuVar14 = pppuVar23;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (&pppuStack_a8,pppuVar14,ppuVar8);
                    uVar21 = 0;
                  }
                  pppuVar36 = (uint ***)((long)pppuVar36 + 1);
                  ppuVar31 = (uint **)((long)ppuVar31 - 1);
                } while (ppuVar31 != (uint **)0x0);
              }
              pppuVar14 = pppuStack_a0;
              pppuVar36 = pppuStack_a8;
              if (ppppuStack_158 < ppppuStack_150) {
                ppppuStack_158[2] = pppuStack_98;
                ppppuStack_158[1] = pppuVar14;
                *ppppuStack_158 = pppuVar36;
                ppppuStack_158 = ppppuStack_158 + 3;
              }
              else {
                lVar29 = (long)ppppuStack_158 - (long)ppppuStack_160;
                uVar21 = (lVar29 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar21) {
                  func_0x000104c60770();
                  goto LAB_10956f1e4;
                }
                lVar26 = (long)ppppuStack_150 - (long)ppppuStack_160 >> 3;
                uVar35 = lVar26 * 0x5555555555555556;
                if (uVar35 < uVar21 || uVar35 - uVar21 == 0) {
                  uVar35 = uVar21;
                }
                if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
                  uVar35 = 0xaaaaaaaaaaaaaaa;
                }
                pppppuVar18 = &ppppuStack_160;
                ppppuStack_70 = (uint ****)&ppppuStack_160;
                func_0x000104c60784();
                puVar1 = (undefined8 *)((long)pppppuVar18 + lVar29);
                puVar1[2] = pppuStack_98;
                puVar1[1] = pppuStack_a0;
                *puVar1 = pppuStack_a8;
                pppuStack_a0 = (uint ***)0x0;
                pppuStack_98 = (uint ***)0x0;
                pppuStack_a8 = (uint ***)0x0;
                ppppuVar37 = (uint ****)
                             ((long)puVar1 - ((long)ppppuStack_158 - (long)ppppuStack_160));
                _memcpy(ppppuVar37);
                ppppuStack_80 = ppppuStack_160;
                ppppuStack_78 = ppppuStack_150;
                ppppuStack_90 = ppppuStack_160;
                ppppuStack_88 = ppppuStack_160;
                ppppuStack_160 = ppppuVar37;
                ppppuStack_158 = (uint ****)(puVar1 + 3);
                ppppuStack_150 = (uint ****)(pppppuVar18 + uVar35 * 3);
                func_0x000107c31938(&ppppuStack_90);
                ppppuStack_158 = (uint ****)(puVar1 + 3);
              }
              pppuVar39 = pppuVar39 + 3;
            } while (pppuVar39 != pppuVar27);
          }
          func_0x000107c3193c(puVar19);
          puVar17[8] = ppppuStack_158;
          puVar17[7] = ppppuStack_160;
          puVar17[9] = ppppuStack_150;
          ppppuStack_158 = (uint ****)0x0;
          ppppuStack_150 = (uint ****)0x0;
          ppppuStack_160 = (uint ****)0x0;
          ppppuStack_90 = (uint ****)&ppppuStack_160;
          func_0x000104c607c8(&ppppuStack_90);
          ppppuStack_90 = &pppuStack_128;
          func_0x000104c607c8(&ppppuStack_90);
          ppppuStack_90 = &pppuStack_140;
          func_0x000104c607c8(&ppppuStack_90);
        }
        else {
          puVar28 = &uStack_f8;
          if ((uStack_f8 & 1) != 0) {
            puVar28 = (ulong *)(uStack_f8 + 7);
          }
          iVar10 = (int)uStack_f0;
          uVar21 = (ulong)(int)uStack_f0;
          lVar29 = puVar17[7];
          if ((ulong)((puVar17[9] - lVar29 >> 3) * -0x5555555555555555) < uVar21) {
            func_0x000107c3193c(puVar19);
            if (iVar10 < 0) {
              func_0x000104c60770();
              goto LAB_10956f1e4;
            }
            lVar29 = (long)(puVar17[9] - puVar17[7]) >> 3;
            uVar35 = lVar29 * 0x5555555555555556;
            if (uVar35 < uVar21 || uVar35 - uVar21 == 0) {
              uVar35 = uVar21;
            }
            if (0x555555555555554 < (ulong)(lVar29 * -0x5555555555555555)) {
              uVar35 = 0xaaaaaaaaaaaaaaa;
            }
            func_0x000104c60728(puVar19,uVar35);
            FUN_1093c7d84(puVar19,puVar28,puVar28 + uVar21,puVar17[8]);
          }
          else {
            lVar40 = puVar17[8];
            lVar26 = lVar40 - lVar29 >> 3;
            if (uVar21 <= (ulong)(lVar26 * -0x5555555555555555)) {
              if ((int)uStack_f0 != 0) {
                lVar26 = uVar21 << 3;
                do {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (lVar29,*puVar28);
                  lVar29 = lVar29 + 0x18;
                  lVar26 = lVar26 + -8;
                  puVar28 = puVar28 + 1;
                } while (lVar26 != 0);
                lVar40 = puVar17[8];
              }
              for (; lVar40 != lVar29; lVar40 = lVar40 + -0x18) {
              }
              puVar17[8] = lVar29;
              goto LAB_10956efdc;
            }
            puVar33 = puVar28;
            if (lVar40 != lVar29) {
              do {
                puVar34 = puVar33 + 1;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (lVar29,*puVar33);
                lVar29 = lVar29 + 0x18;
                puVar33 = puVar34;
              } while (puVar34 != puVar28 + lVar26 * 0xaaaaaaaaaaaaaab);
              lVar40 = puVar17[8];
            }
            FUN_1093c7d84(puVar19,puVar28 + lVar26 * 0xaaaaaaaaaaaaaab,puVar28 + uVar21,lVar40);
          }
          puVar17[8] = puVar19;
        }
LAB_10956efdc:
        if (((int *)puVar17[5] == (int *)puVar17[4]) ||
           (((long)(puVar17[8] - puVar17[7]) >> 3) * -0x5555555555555555 - (long)*(int *)puVar17[4]
            != 0)) {
          puVar25 = &UNK_10f57487a;
        }
        else {
          *(undefined4 *)((long)puVar17 + 0x54) = *(undefined4 *)((long)ppuVar4 + 0x24);
          uVar20 = 0x65;
          if (*(int *)(ppuVar4 + 5) == 1) {
            uVar20 = 0x66;
          }
          *(undefined4 *)(puVar17 + 0xb) = uVar20;
          puVar19 = (undefined8 *)((ulong)puStack_d8 & 0xfffffffffffffffc);
          lVar29 = (long)*(char *)((long)puVar19 + 0x17);
          if (lVar29 < 0) {
            lVar29 = puVar19[1];
            puVar19 = (undefined8 *)*puVar19;
          }
          pppuStack_140 = (uint ***)0x0;
          pppuStack_138 = (uint ***)0x0;
          uStack_130 = 0;
          FUN_109591c60(&pppuStack_140,puVar19,(long)puVar19 + lVar29,
                        ((long)puVar19 + lVar29) - (long)puVar19);
          if (*plVar41 != 0) {
            puVar17[2] = *plVar41;
            __ZdlPv();
            *plVar41 = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
          }
          pppuVar39 = pppuStack_138;
          pppuVar27 = pppuStack_140;
          puVar17[1] = pppuStack_140;
          puVar17[3] = uStack_130;
          puVar17[2] = pppuStack_138;
          if (*(int *)((long)puVar17 + 0x54) == 0) {
LAB_10956f150:
            func_0x00010935b254(&ppuStack_110);
            *param_1 = puVar17;
            return;
          }
          if (*(int *)((long)puVar17 + 0x54) == 1) {
            uVar21 = (long)pppuStack_138 - (long)pppuStack_140;
            if ((uVar21 & 1) == 0) {
              FUN_109246310(&pppuStack_140,uVar21 * 2);
              if (pppuVar39 != pppuVar27) {
                uVar21 = uVar21 >> 1;
                puVar24 = (ushort *)*plVar41;
                pppuVar27 = pppuStack_140;
                do {
                  uVar9 = *puVar24;
                  uVar11 = uVar9 >> 10;
                  uVar2 = uVar9 & 0x3ff;
                  bVar12 = (uVar11 & 0x1f) != 0;
                  bVar13 = (uVar9 & 0x3ff) != 0;
                  iVar10 = 0;
                  if (bVar12 || bVar13) {
                    iVar10 = (uVar11 & 0x1f) + 0x70;
                  }
                  uVar3 = 0;
                  if (bVar12 || bVar13) {
                    uVar3 = uVar2;
                  }
                  if ((uVar11 & 0x1f) == 0 && ((uVar11 & 0x1f) != 0 || (uVar9 & 0x3ff) != 0)) {
                    uVar3 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(uVar2) ^ 0x1f) & 0x1f) & 0x3ff;
                    iVar10 = 0x85 - (uint)LZCOUNT(uVar2);
                  }
                  *(uint *)pppuVar27 = (uint)(uVar9 >> 0xf) << 0x1f | iVar10 << 0x17 | uVar3 << 0xd;
                  uVar21 = uVar21 - 1;
                  puVar24 = puVar24 + 1;
                  pppuVar27 = (uint ***)((long)pppuVar27 + 4);
                } while (uVar21 != 0);
              }
              if (*plVar41 != 0) {
                puVar17[2] = *plVar41;
                __ZdlPv();
              }
              puVar17[2] = pppuStack_138;
              puVar17[1] = pppuStack_140;
              puVar17[3] = uStack_130;
              goto LAB_10956f150;
            }
            __ZNSt3__19to_stringEm(&ppppuStack_90,uVar21);
            FUN_10928a5e0(&pppuStack_140,&UNK_10f5748f1,&ppppuStack_90);
            func_0x000105687ee0(&pppuStack_140);
            goto LAB_10956f1e4;
          }
          puVar25 = &UNK_10f5748c8;
        }
        func_0x000105688514(puVar25);
        goto LAB_10956f1e4;
      }
      lVar29 = lVar29 + -8;
      puVar28 = puVar28 + 1;
    } while (lVar29 != 0);
  }
  func_0x000105688514(&UNK_10f573dd9);
LAB_10956f1e4:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10956f1e8);
  (*pcVar16)();
}



/* Entry: 10956f304; end: 10956f393;  */

void FUN_10956f304(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  ulong *puVar2;
  long lVar3;
  ulong unaff_x23;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x48) << 3;
    do {
      unaff_x23 = *puVar2;
      uVar1 = unaff_x23 + 0x28;
      func_0x00010b4bee4c(uVar1,&UNK_10f573e18,0x14);
      if ((uVar1 & 1) != 0) goto LAB_10956f36c;
      lVar3 = lVar3 + -8;
      unaff_x19 = param_2;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  param_2 = unaff_x19;
  func_0x000105688514(&UNK_10f573dd9);
LAB_10956f36c:
  lVar3 = unaff_x23 + 0x28;
  func_0x00010b4bee4c(lVar3,&UNK_10f573e18,0x14);
  if ((int)lVar3 != 0) {
    func_0x000100063660(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10956f394; end: 10956f44b;  */

undefined8 * FUN_10956f394(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110afbee8;
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    FUN_10956ff98();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10956f44c; end: 10956ff6b;  */

void FUN_10956f44c(long *param_1,int *param_2)

{
  char cVar1;
  undefined8 *****pppppuVar2;
  int ***pppiVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *****pppppiVar10;
  undefined8 **ppuVar11;
  int iVar12;
  long lVar13;
  int *****pppppiVar14;
  int ***pppiVar15;
  int iVar16;
  int ***pppiVar17;
  ulong uVar18;
  long lVar19;
  int ****ppppiVar20;
  int *****pppppiVar21;
  int ****ppppiStack_178;
  int ****ppppiStack_170;
  int ****ppppiStack_168;
  uint uStack_158;
  long *plStack_148;
  int ****ppppiStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_f8;
  undefined8 ****ppppuStack_f0;
  int ***pppiStack_e8;
  int ***pppiStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int **ppiStack_c0;
  int *piStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      == 0) {
LAB_10956fc68:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    FUN_10956189c(&ppppiStack_140);
    func_0x00010957076c(&lStack_a8);
    __Unwind_Resume(plVar6);
    return;
  }
LAB_10956f4cc:
  FUN_10956fffc(&lStack_a8);
  plVar6 = *(long **)(param_2 + 2);
  FUN_109565a70(plVar6,*param_2);
  lVar13 = *(long *)(param_2 + 2);
  while( true ) {
    plVar7 = &lStack_a8;
    func_0x000109570834();
    if (plVar7 == (long *)0x0) break;
    plVar7 = &lStack_a8;
    func_0x000109570834();
    if (plVar7 == (long *)0x1) {
      plVar7 = &lStack_a8;
      func_0x0001056853dc();
      uVar18 = plVar6[1];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)plVar6 + 0x17);
      }
      func_0x000104c4f768(&ppppiStack_178,uVar18 + 0x1d,&ppiStack_c0);
      pppppiVar14 = (int *****)ppppiStack_178;
      if (-1 < (long)ppppiStack_168) {
        pppppiVar14 = &ppppiStack_178;
      }
      if (uVar18 != 0) {
        plVar9 = (long *)*plVar6;
        if (-1 < *(char *)((long)plVar6 + 0x17)) {
          plVar9 = plVar6;
        }
        _memmove(pppppiVar14,plVar9,uVar18);
      }
      puVar8 = (undefined8 *)((long)pppppiVar14 + uVar18);
      puVar8[1] = 0x7475706e49656e69;
      *puVar8 = 0x676e456c6c69465f;
      *(undefined8 *)((long)puVar8 + 0x15) = 0x636556726f736e65;
      *(undefined8 *)((long)puVar8 + 0xd) = 0x5468746957747570;
      *(undefined1 *)((long)puVar8 + 0x1d) = 0;
      FUN_1095617dc(&ppppiStack_140,&ppppiStack_178,plVar6,lVar13 + 0x108);
      if ((long)ppppiStack_168 < 0) {
        __ZdlPv(ppppiStack_178);
      }
      if (plVar7[1] != *plVar7) {
        uVar18 = 0;
        do {
          FUN_10955bb58(&ppppiStack_178,param_1[0xc],uVar18);
          ppppiVar20 = ppppiStack_170;
          iVar12 = 1;
          for (pppppiVar14 = (int *****)ppppiStack_170; pppppiVar14 != (int *****)ppppiStack_168;
              pppppiVar14 = (int *****)((long)pppppiVar14 + 4)) {
            iVar12 = *(int *)pppppiVar14 * iVar12;
          }
          if (uStack_158 < 3) {
            iVar16 = *(int *)(&UNK_10dfd4b40 + (ulong)uStack_158 * 4);
          }
          else {
            iVar16 = 1;
          }
          _memcpy(ppppiStack_178,*(undefined8 *)(*plVar7 + uVar18 * 0x38),(long)(iVar16 * iVar12));
          if ((int *****)ppppiVar20 != (int *****)0x0) {
            __ZdlPv(ppppiVar20);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < (ulong)((plVar7[1] - *plVar7 >> 3) * 0x6db6db6db6db6db7));
      }
      goto LAB_10956f7a8;
    }
    plVar7 = &lStack_a8;
    func_0x000109570834();
    if (plVar7 == (long *)0x2) {
      plVar7 = &lStack_a8;
      FUN_109570b48();
      uVar18 = plVar6[1];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)plVar6 + 0x17);
      }
      func_0x000104c4f768(&ppppiStack_178,uVar18 + 0x1d,&ppiStack_c0);
      pppppiVar14 = (int *****)ppppiStack_178;
      if (-1 < (long)ppppiStack_168) {
        pppppiVar14 = &ppppiStack_178;
      }
      if (uVar18 != 0) {
        plVar9 = (long *)*plVar6;
        if (-1 < *(char *)((long)plVar6 + 0x17)) {
          plVar9 = plVar6;
        }
        _memmove(pppppiVar14,plVar9,uVar18);
      }
      puVar8 = (undefined8 *)((long)pppppiVar14 + uVar18);
      puVar8[1] = 0x7475706e49656e69;
      *puVar8 = 0x676e456c6c69465f;
      *(undefined8 *)((long)puVar8 + 0x15) = 0x70614d726f736e65;
      *(undefined8 *)((long)puVar8 + 0xd) = 0x5468746957747570;
      *(undefined1 *)((long)puVar8 + 0x1d) = 0;
      FUN_1095617dc(&ppppiStack_140,&ppppiStack_178,plVar6,lVar13 + 0x108);
      if ((long)ppppiStack_168 < 0) {
        __ZdlPv(ppppiStack_178);
      }
      FUN_10955be44(&ppppiStack_178,param_1[0xc]);
      if ((int *****)ppppiStack_178 == &ppppiStack_170) goto LAB_10956f8e8;
      pppppiVar14 = (int *****)ppppiStack_178;
      goto LAB_10956f87c;
    }
    plVar7 = &lStack_a8;
    func_0x000109570834();
    if (plVar7 == (long *)0x3) {
      func_0x000105681eb4(&lStack_a8);
      uVar18 = plVar6[1];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)plVar6 + 0x17);
      }
      func_0x000104c4f768(&ppppiStack_178,uVar18 + 0x25,&ppiStack_c0);
      pppppiVar14 = (int *****)ppppiStack_178;
      if (-1 < (long)ppppiStack_168) {
        pppppiVar14 = &ppppiStack_178;
      }
      if (uVar18 != 0) {
        plVar7 = (long *)*plVar6;
        if (-1 < *(char *)((long)plVar6 + 0x17)) {
          plVar7 = plVar6;
        }
        _memmove(pppppiVar14,plVar7,uVar18);
      }
      puVar8 = (undefined8 *)((long)pppppiVar14 + uVar18);
      puVar8[1] = 0x7475706e49656e69;
      *puVar8 = 0x676e456c6c69465f;
      puVar8[3] = 0x6f72506572757461;
      puVar8[2] = 0x65464c4d68746957;
      *(undefined8 *)((long)puVar8 + 0x1d) = 0x72656469766f7250;
      *(undefined1 *)((long)puVar8 + 0x25) = 0;
      FUN_1095617dc(&ppppiStack_140,&ppppiStack_178,plVar6,lVar13 + 0x108);
      if ((long)ppppiStack_168 < 0) {
        __ZdlPv(ppppiStack_178);
      }
      func_0x000105688514(&UNK_10f573ec2);
      goto LAB_10956fdf4;
    }
  }
  plVar7 = &lStack_a8;
  FUN_109570a30();
  uVar18 = plVar6[1];
  if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
    uVar18 = (ulong)*(byte *)((long)plVar6 + 0x17);
  }
  func_0x000104c4f768(&ppppiStack_178,uVar18 + 0xe,&ppiStack_c0);
  pppppiVar14 = (int *****)ppppiStack_178;
  if (-1 < (long)ppppiStack_168) {
    pppppiVar14 = &ppppiStack_178;
  }
  if (uVar18 != 0) {
    plVar9 = (long *)*plVar6;
    if (-1 < *(char *)((long)plVar6 + 0x17)) {
      plVar9 = plVar6;
    }
    _memmove(pppppiVar14,plVar9,uVar18);
  }
  puVar8 = (undefined8 *)((long)pppppiVar14 + uVar18);
  *puVar8 = 0x6f546567616d495f;
  *(undefined8 *)((long)puVar8 + 6) = 0x726f736e65546f54;
  *(undefined1 *)((long)puVar8 + 0xe) = 0;
  FUN_1095617dc(&ppppiStack_140,&ppppiStack_178,plVar6,lVar13 + 0x108);
  if ((long)ppppiStack_168 < 0) {
    __ZdlPv(ppppiStack_178);
  }
  if ((int)plVar7[0x24] != 0) {
    FUN_1092612e0();
    goto LAB_10956fdf4;
  }
  puVar8 = (undefined8 *)param_1[0xc] + 7;
  ppiStack_c0 = *(int ***)param_1[0xc];
  FUN_10937a098(puVar8,ppiStack_c0,&UNK_10dd5b8f9,&ppiStack_c0,&puStack_d8);
  FUN_10955bbac(&ppppiStack_178,puVar8 + 5);
  piStack_b8 = (int *)param_1[10];
  ppiStack_c0 = (int **)param_1[9];
  puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,(int)param_1[0xb]);
  FUN_10955cc30(plVar7,ppppiStack_178,param_1 + 1,&ppiStack_c0,(char)param_1[0xd]);
  if ((int *****)ppppiStack_170 != (int *****)0x0) {
    __ZdlPv();
  }
LAB_10956f7a8:
  FUN_10956189c(&ppppiStack_140);
  goto LAB_10956f908;
  while( true ) {
    lVar19 = plVar9[7];
    pppppiVar10 = pppppiVar14 + 7;
    ppppiVar20 = *pppppiVar10;
    func_0x0001056864d8();
    _memcpy(ppppiVar20,lVar19,(long)(int)pppppiVar10);
    pppppiVar10 = (int *****)pppppiVar14[1];
    pppppiVar21 = pppppiVar14;
    if ((int *****)pppppiVar14[1] == (int *****)0x0) {
      do {
        pppppiVar14 = (int *****)pppppiVar21[2];
        bVar5 = (int *****)*pppppiVar14 != pppppiVar21;
        pppppiVar21 = pppppiVar14;
      } while (bVar5);
    }
    else {
      do {
        pppppiVar14 = pppppiVar10;
        pppppiVar10 = (int *****)*pppppiVar14;
      } while ((int *****)*pppppiVar14 != (int *****)0x0);
    }
    if (pppppiVar14 == &ppppiStack_170) break;
LAB_10956f87c:
    plVar9 = plVar7;
    FUN_109570acc(plVar7,pppppiVar14 + 4);
    if (plVar7 + 1 == plVar9) {
      func_0x000107c31940(&puStack_d8,&UNK_10f573e86);
      if (*(char *)((long)pppppiVar14 + 0x37) < '\0') {
        func_0x000107c3192c(&ppppuStack_f0,pppppiVar14[4],pppppiVar14[5]);
      }
      else {
        pppiStack_e8 = (int ***)pppppiVar14[5];
        ppppuStack_f0 = (undefined8 ****)pppppiVar14[4];
        pppiStack_e0 = (int ***)pppppiVar14[6];
      }
      ppppiVar20 = (int ****)pppiStack_e8;
      pppppuVar2 = (undefined8 *****)ppppuStack_f0;
      if (-1 < (long)pppiStack_e0) {
        ppppiVar20 = (int ****)((ulong)pppiStack_e0 >> 0x38);
        pppppuVar2 = &ppppuStack_f0;
      }
      ppuVar11 = &puStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar11,pppppuVar2,ppppiVar20);
      piStack_b8 = (int *)ppuVar11[1];
      ppiStack_c0 = (int **)*ppuVar11;
      puStack_b0 = ppuVar11[2];
      ppuVar11[1] = (undefined8 *)0x0;
      ppuVar11[2] = (undefined8 *)0x0;
      *ppuVar11 = (undefined8 *)0x0;
      func_0x000105687ee0(&ppiStack_c0);
      goto LAB_10956fdf4;
    }
  }
LAB_10956f8e8:
  FUN_10954ae68(&ppppiStack_178,ppppiStack_170);
  FUN_10956189c(&ppppiStack_140);
LAB_10956f908:
  uVar18 = plVar6[1];
  if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
    uVar18 = (ulong)*(byte *)((long)plVar6 + 0x17);
  }
  func_0x000104c4f768(&ppppiStack_178,uVar18 + 0xd,&ppiStack_c0);
  pppppiVar14 = (int *****)ppppiStack_178;
  if (-1 < (long)ppppiStack_168) {
    pppppiVar14 = &ppppiStack_178;
  }
  if (uVar18 != 0) {
    plVar7 = (long *)*plVar6;
    if (-1 < *(char *)((long)plVar6 + 0x17)) {
      plVar7 = plVar6;
    }
    _memmove(pppppiVar14,plVar7,uVar18);
  }
  puVar8 = (undefined8 *)((long)pppppiVar14 + uVar18);
  *puVar8 = 0x49656e69676e455f;
  *(undefined8 *)((long)puVar8 + 5) = 0x656b6f766e49656e;
  *(undefined1 *)((long)puVar8 + 0xd) = 0;
  FUN_1095617dc(&ppppiStack_140,&ppppiStack_178,plVar6,lVar13 + 0x108);
  if ((long)ppppiStack_168 < 0) {
    __ZdlPv(ppppiStack_178);
  }
  FUN_10955bdd8(param_1[0xc]);
  FUN_10956189c(&ppppiStack_140);
  if (*(int *)((long)param_1 + 0x6c) == 1) {
    FUN_10955bee4(&ppiStack_c0,param_1[0xc]);
    uStack_d0 = 0;
    uStack_c8 = 0;
    puStack_d8 = &uStack_d0;
    pppiVar15 = (int ***)ppiStack_c0;
    while (pppiVar15 != (int ***)&piStack_b8) {
      FUN_109570d50(&ppppiStack_178,pppiVar15 + 7);
      func_0x000109571644(&ppppiStack_140,pppiVar15 + 4,&ppppiStack_178);
      FUN_109571484(&puStack_d8,&ppppiStack_140,&ppppiStack_140);
      plVar6 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar7 = plStack_f8 + 1;
        do {
          lVar13 = *plVar7;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (lStack_120 != 0) {
        lStack_118 = lStack_120;
        __ZdlPv();
      }
      if (lStack_130 < 0) {
        __ZdlPv(ppppiStack_140);
      }
      plVar6 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar7 = plStack_148 + 1;
        do {
          lVar13 = *plVar7;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if ((int *****)ppppiStack_170 != (int *****)0x0) {
        ppppiStack_168 = ppppiStack_170;
        __ZdlPv();
      }
      pppiVar3 = (int ***)pppiVar15[1];
      pppiVar17 = pppiVar15;
      if ((int ***)pppiVar15[1] == (int ***)0x0) {
        do {
          pppiVar15 = (int ***)pppiVar17[2];
          bVar5 = (int ***)*pppiVar15 != pppiVar17;
          pppiVar17 = pppiVar15;
        } while (bVar5);
      }
      else {
        do {
          pppiVar15 = pppiVar3;
          pppiVar3 = (int ***)*pppiVar15;
        } while ((int ***)*pppiVar15 != (int ***)0x0);
      }
    }
    FUN_109570504(param_2,&puStack_d8);
    FUN_1095719b0(uStack_d0);
    FUN_10954ae68(&ppiStack_c0,piStack_b8);
  }
  else {
    if (*(int *)((long)param_1 + 0x6c) == 2) {
      func_0x000105688514(&UNK_10f573ef3);
LAB_10956fdf4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10956fdf8);
      (*pcVar4)();
    }
    FUN_10955bca4(&ppppiStack_178,param_1[0xc]);
    ppiStack_c0 = (int **)0x0;
    piStack_b8 = (int *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    FUN_10957010c(&ppiStack_c0,
                  ((long)ppppiStack_170 - (long)ppppiStack_178 >> 3) * -0x3333333333333333);
    ppppiVar20 = ppppiStack_170;
    for (pppppiVar14 = (int *****)ppppiStack_178; pppppiVar14 != (int *****)ppppiVar20;
        pppppiVar14 = pppppiVar14 + 5) {
      FUN_109570d50(&ppppiStack_140,pppppiVar14);
      func_0x0001095701d0(&ppiStack_c0,&ppppiStack_140);
      plVar6 = plStack_110;
      if (plStack_110 != (long *)0x0) {
        plVar7 = plStack_110 + 1;
        do {
          lVar13 = *plVar7;
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
    }
    FUN_109570380(param_2,&ppiStack_c0);
    ppppiStack_140 = (int ****)&ppiStack_c0;
    FUN_109571360(&ppppiStack_140);
    ppppiStack_140 = (int ****)&ppppiStack_178;
    FUN_10954a4bc(&ppppiStack_140);
  }
  plVar6 = plStack_80;
  if (plStack_80 == alStack_98) {
    lVar13 = 0x20;
  }
  else {
    if (plStack_80 == (long *)0x0) goto LAB_10956fc0c;
    lVar13 = 0x28;
  }
  (**(code **)(*plStack_80 + lVar13))();
LAB_10956fc0c:
  plVar7 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar9 = plStack_a0 + 1;
    do {
      lVar13 = *plVar9;
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      plVar6 = plVar7;
    }
  }
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      == 0) goto LAB_10956fc68;
  goto LAB_10956f4cc;
}



/* Entry: 10956ff6c; end: 10956ff97;  */

void FUN_10956ff6c(void)

{
  return;
}



/* Entry: 10956ff98; end: 10956fffb;  */

void FUN_10956ff98(long param_1)

{
  long lStack_28;
  
  func_0x000109379fe8(param_1 + 0x60);
  func_0x000109379fe8(param_1 + 0x38);
  FUN_10938cda4(param_1 + 0x30,0);
  lStack_28 = param_1 + 0x18;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1;
  func_0x000104c607c8(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10956fffc; end: 10957010b;  */

long * FUN_10956fffc(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,auStack_58);
  plVar7 = alStack_48;
  func_0x000105687250(param_1 + 2);
  if (plStack_30 == alStack_48) {
    lVar8 = 0x20;
  }
  else {
    plVar4 = plStack_30;
    if (plStack_30 == (long *)0x0) goto LAB_109570084;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_30 + lVar8))();
  plVar4 = plStack_30;
LAB_109570084:
  if (plStack_50 != (long *)0x0) {
    plVar5 = plStack_50 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      plVar4 = plStack_50;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010957076c(plStack_50);
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  lVar8 = *plVar4;
  if ((long *)((plVar4[2] - lVar8 >> 3) * 0x6db6db6db6db6db7) < plVar7) {
    if ((long *)0x492492492492492 < plVar7) {
      FUN_109570be4();
      plVar5 = (long *)plVar4[1];
      if (plVar5 < (long *)plVar4[2]) {
        *plVar5 = *plVar7;
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[3] = 0;
        lVar8 = plVar7[1];
        plVar5[2] = plVar7[2];
        plVar5[1] = lVar8;
        plVar5[3] = plVar7[3];
        plVar7[2] = 0;
        plVar7[3] = 0;
        plVar7[1] = 0;
        *(int *)(plVar5 + 4) = (int)plVar7[4];
        lVar8 = plVar7[5];
        plVar5[6] = plVar7[6];
        plVar5[5] = lVar8;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar5 = plVar5 + 7;
        plVar7 = plVar4;
      }
      else {
        lVar8 = (long)plVar5 - *plVar4;
        uVar9 = (lVar8 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar9) {
          FUN_109570be4();
          func_0x00010928e90c(plVar4 + 5);
          if (plVar4[1] != 0) {
            plVar4[2] = plVar4[1];
            __ZdlPv();
          }
          return plVar4;
        }
        lVar10 = plVar4[2] - *plVar4 >> 3;
        uVar11 = lVar10 * -0x2492492492492492;
        if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
          uVar11 = uVar9;
        }
        if (0x249249249249248 < (ulong)(lVar10 * 0x6db6db6db6db6db7)) {
          uVar11 = 0x492492492492492;
        }
        plVar6 = plVar4;
        FUN_109570bf8();
        plVar1 = (long *)((long)plVar6 + lVar8);
        *plVar1 = *plVar7;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1[3] = 0;
        lVar8 = plVar7[1];
        plVar1[2] = plVar7[2];
        plVar1[1] = lVar8;
        plVar1[3] = plVar7[3];
        plVar7[2] = 0;
        plVar7[3] = 0;
        plVar7[1] = 0;
        *(int *)(plVar1 + 4) = (int)plVar7[4];
        lVar8 = plVar7[5];
        plVar1[6] = plVar7[6];
        plVar1[5] = lVar8;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar5 = plVar1 + 7;
        lVar8 = (long)plVar1 + (*plVar4 - plVar4[1]);
        func_0x000109570c40(*plVar4,plVar4[1],lVar8);
        lStack_118 = *plVar4;
        *plVar4 = lVar8;
        plVar4[1] = (long)plVar5;
        lStack_100 = plVar4[2];
        plVar4[2] = (long)(plVar6 + uVar11 * 7);
        plVar7 = &lStack_118;
        lStack_110 = lStack_118;
        lStack_108 = lStack_118;
        func_0x000109570d04(plVar7);
      }
      plVar4[1] = (long)plVar5;
      return plVar7;
    }
    lVar10 = plVar4[1];
    plVar5 = plVar4;
    FUN_109570bf8();
    lVar8 = (long)plVar5 + (lVar10 - lVar8);
    lVar10 = lVar8 + (*plVar4 - plVar4[1]);
    func_0x000109570c40(*plVar4,plVar4[1],lVar10);
    lStack_b8 = *plVar4;
    *plVar4 = lVar10;
    plVar4[1] = lVar8;
    lStack_a0 = plVar4[2];
    plVar4[2] = (long)(plVar5 + (long)plVar7 * 7);
    plVar4 = &lStack_b8;
    lStack_b0 = lStack_b8;
    lStack_a8 = lStack_b8;
    func_0x000109570d04(plVar4);
  }
  return plVar4;
}



/* Entry: 10957010c; end: 109570347;  */

long * FUN_10957010c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar3 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if ((undefined8 *)0x492492492492492 < param_2) {
      FUN_109570be4();
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        *puVar7 = *param_2;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        uVar8 = param_2[1];
        puVar7[2] = param_2[2];
        puVar7[1] = uVar8;
        puVar7[3] = param_2[3];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
        uVar8 = param_2[5];
        puVar7[6] = param_2[6];
        puVar7[5] = uVar8;
        param_2[5] = 0;
        param_2[6] = 0;
        puVar7 = puVar7 + 7;
        plVar2 = param_1;
      }
      else {
        lVar3 = (long)puVar7 - *param_1;
        uVar4 = (lVar3 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar4) {
          FUN_109570be4();
          func_0x00010928e90c(param_1 + 5);
          if (param_1[1] != 0) {
            param_1[2] = param_1[1];
            __ZdlPv();
          }
          return param_1;
        }
        lVar5 = param_1[2] - *param_1 >> 3;
        uVar6 = lVar5 * -0x2492492492492492;
        if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
          uVar6 = uVar4;
        }
        if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
          uVar6 = 0x492492492492492;
        }
        plVar2 = param_1;
        plStack_98 = param_1;
        FUN_109570bf8();
        puVar1 = (undefined8 *)((long)plVar2 + lVar3);
        *puVar1 = *param_2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        uVar8 = param_2[1];
        puVar1[2] = param_2[2];
        puVar1[1] = uVar8;
        puVar1[3] = param_2[3];
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
        uVar8 = param_2[5];
        puVar1[6] = param_2[6];
        puVar1[5] = uVar8;
        param_2[5] = 0;
        param_2[6] = 0;
        puVar7 = puVar1 + 7;
        lVar3 = (long)puVar1 + (*param_1 - param_1[1]);
        func_0x000109570c40(*param_1,param_1[1],lVar3);
        lStack_b8 = *param_1;
        *param_1 = lVar3;
        param_1[1] = (long)puVar7;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(plVar2 + uVar6 * 7);
        plVar2 = &lStack_b8;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x000109570d04(plVar2);
      }
      param_1[1] = (long)puVar7;
      return plVar2;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109570bf8();
    lVar3 = (long)plVar2 + (lVar5 - lVar3);
    lVar5 = lVar3 + (*param_1 - param_1[1]);
    func_0x000109570c40(*param_1,param_1[1],lVar5);
    lStack_58 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar3;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar2 + (long)param_2 * 7);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109570d04(param_1);
  }
  return param_1;
}



/* Entry: 109570348; end: 10957037f;  */

long FUN_109570348(long param_1)

{
  func_0x00010928e90c(param_1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109570380; end: 1095704bb;  */

long * FUN_109570380(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109570f14(auStack_68,param_2);
  puVar7 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar7[1];
  for (piVar2 = (int *)*puVar7; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_68);
    }
  }
  if (plStack_40 == alStack_58) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_109570438;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar8))();
LAB_109570438:
  plVar6 = plStack_40;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_60;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010928e90c(plVar6 + 8);
  if (plVar6[4] != 0) {
    plVar6[5] = plVar6[4];
    __ZdlPv();
  }
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    __ZdlPv(*plVar6);
  }
  return plVar6;
}



/* Entry: 1095704bc; end: 109570503;  */

undefined8 * FUN_1095704bc(undefined8 *param_1)

{
  func_0x00010928e90c(param_1 + 8);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109570504; end: 10957076b;  */

long * FUN_109570504(int *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  long lVar11;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long **pplStack_68;
  long *plStack_60;
  long lStack_58;
  long ***ppplStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar9 = (long **)*param_2;
  plVar5 = param_2 + 1;
  plVar8 = (long *)*plVar5;
  lVar11 = param_2[2];
  pplVar10 = &plStack_60;
  if (lVar11 != 0) {
    plVar8[2] = (long)&plStack_60;
    *param_2 = (long)plVar5;
    *plVar5 = 0;
    param_2[2] = 0;
    pplVar10 = pplVar9;
  }
  plVar5 = (long *)0x38;
  pplStack_68 = pplVar10;
  plStack_60 = plVar8;
  lStack_58 = lVar11;
  __Znwm();
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1108a6378;
  plVar5[1] = 0;
  plVar5[4] = (long)pplVar10;
  plVar6 = plVar5 + 5;
  *plVar6 = (long)plVar8;
  plVar5[6] = lVar11;
  if (lVar11 == 0) {
    plVar5[4] = (long)plVar6;
  }
  else {
    plVar8[2] = (long)plVar6;
    plStack_60 = (long *)0x0;
    lStack_58 = 0;
    plVar8 = (long *)0x0;
    pplStack_68 = &plStack_60;
  }
  plVar6 = plVar5 + 3;
  *plVar6 = (long)FUN_1095716cc;
  FUN_1095719b0(plVar8);
  pplStack_68 = (long **)&PTR_FUN_110afbfb8;
  plStack_a8 = plVar6;
  plStack_a0 = plVar5;
  plStack_60 = plVar6;
  ppplStack_50 = &pplStack_68;
  FUN_109567d5c(auStack_98,&plStack_a8,&pplStack_68);
  if (ppplStack_50 == &pplStack_68) {
    lVar11 = 0x20;
LAB_109570614:
    (**(code **)((long)*ppplStack_50 + lVar11))();
  }
  else if (ppplStack_50 != (long ***)0x0) {
    lVar11 = 0x28;
    goto LAB_109570614;
  }
  plVar5 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  puVar7 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar2 = (int *)puVar7[1];
  for (piVar1 = (int *)*puVar7; piVar1 != piVar2; piVar1 = piVar1 + 2) {
    if (*piVar1 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar1[1] * 0x50 + 0x18,auStack_98);
    }
  }
  if (plStack_70 == alStack_88) {
    lVar11 = 0x20;
LAB_1095706d0:
    (**(code **)(*plStack_70 + lVar11))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar11 = 0x28;
    goto LAB_1095706d0;
  }
  plVar5 = plStack_70;
  if (plStack_90 != (long *)0x0) {
    plVar8 = plStack_90 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  FUN_1095719b0(piVar1);
  __Unwind_Resume();
  plVar8 = (long *)plVar5[5];
  if (plVar8 == plVar5 + 2) {
    lVar11 = 0x20;
  }
  else {
    if (plVar8 == (long *)0x0) goto SUB_10951ea70;
    lVar11 = 0x28;
  }
  (**(code **)(*plVar8 + lVar11))();
SUB_10951ea70:
  plVar8 = (long *)plVar5[1];
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar11 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar5;
}



/* Entry: 10957076c; end: 10957090f;  */

long FUN_10957076c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109570910; end: 109570957;  */

void FUN_109570910(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_1108a63b8,&UNK_10ddb89a8);
  }
  return;
}



/* Entry: 109570958; end: 10957099f;  */

void FUN_109570958(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_1108a62f8,&UNK_10ddb8884);
  }
  return;
}



/* Entry: 1095709a0; end: 1095709e7;  */

void FUN_1095709a0(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110afbf28,&UNK_10dfd30b4);
  }
  return;
}



/* Entry: 1095709e8; end: 109570a2f;  */

void FUN_1095709e8(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_1108a60d0,&UNK_10ddb8514);
  }
  return;
}



/* Entry: 109570a30; end: 109570acb;  */

void FUN_109570a30(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_109570910();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109570a98);
  (*pcVar1)();
}



/* Entry: 109570acc; end: 109570b47;  */

long * FUN_109570acc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109570b48; end: 109570be3;  */

void FUN_109570b48(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_1095709a0();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109570bb0);
  (*pcVar1)();
}



/* Entry: 109570be4; end: 109570bf7;  */

void FUN_109570be4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar3 = puVar2[1];
        param_3[2] = puVar2[2];
        param_3[1] = uVar3;
        param_3[3] = puVar2[3];
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar2 + 4);
        uVar3 = puVar2[5];
        param_3[6] = puVar2[6];
        param_3[5] = uVar3;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2 = puVar2 + 7;
        param_3 = param_3 + 7;
      } while (puVar2 != param_2);
      do {
        func_0x000109570cc8(puVar1);
        puVar1 = puVar1 + 7;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 109570bf8; end: 109570d4f;  */

void FUN_109570bf8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        uVar2 = puVar1[1];
        param_3[2] = puVar1[2];
        param_3[1] = uVar2;
        param_3[3] = puVar1[3];
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar1 + 4);
        uVar2 = puVar1[5];
        param_3[6] = puVar1[6];
        param_3[5] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_3 = param_3 + 7;
      } while (puVar1 != param_2);
      do {
        func_0x000109570cc8(param_1);
        param_1 = param_1 + 7;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 109570d50; end: 109570eaf;  */

undefined8 * FUN_109570d50(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long *plStack_38;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uVar2 = *param_2;
  FUN_109285684(&uStack_60,param_2[1],param_2[2],(long)(param_2[2] - param_2[1]) >> 2);
  uVar3 = *(undefined4 *)(param_2 + 4);
  *param_1 = uVar2;
  param_1[2] = uStack_58;
  param_1[1] = uStack_60;
  param_1[3] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar6 = param_1;
  func_0x0001056864d8();
  lVar8 = (long)(int)puVar6;
  __Znam();
  plVar7 = (long *)0x20;
  lStack_40 = lVar8;
  __Znwm();
  *plVar7 = (long)&PTR_FUN_110afbf48;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = lVar8;
  plStack_38 = plVar7;
  FUN_10928e4cc(param_1 + 5,&lStack_40);
  plVar7 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  _memcpy(param_1[5],*param_1,(long)(int)puVar6);
  *param_1 = param_1[5];
  return param_1;
}



/* Entry: 109570eb0; end: 109570eb3;  */

void FUN_109570eb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109570eb4; end: 109570ec7;  */

void FUN_109570eb4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109570ec8; end: 109570ed7;  */

void FUN_109570ec8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 109570ed8; end: 109570f0f;  */

undefined8 FUN_109570ed8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afbf88);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109570f10; end: 109570f13;  */

void FUN_109570f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109570f14; end: 10957107f;  */

undefined ***
FUN_109570f14(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             long param_5,undefined *param_6)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)*param_2;
  ppuVar1 = (undefined **)param_2[1];
  ppuVar11 = (undefined **)param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pppuVar6 = (undefined ***)0x38;
  ppuStack_88 = ppuVar9;
  ppuStack_80 = ppuVar1;
  ppuStack_78 = ppuVar11;
  __Znwm();
  pppuVar6[2] = (undefined **)0x0;
  *pppuVar6 = &PTR_DAT_1108a6378;
  pppuVar6[1] = (undefined **)0x0;
  pppuVar6[4] = ppuVar9;
  pppuVar6[5] = ppuVar1;
  pppuVar6[6] = ppuVar11;
  ppuStack_80 = (undefined **)0x0;
  ppuStack_78 = (undefined **)0x0;
  ppuStack_88 = (undefined **)0x0;
  pppuVar10 = pppuVar6 + 3;
  *pppuVar10 = (undefined **)FUN_109571080;
  pppuStack_70 = &ppuStack_88;
  FUN_109571360(&pppuStack_70);
  ppuStack_68 = &PTR_FUN_110afd5b8;
  pppuVar7 = &ppuStack_68;
  pppuStack_98 = pppuVar10;
  pppuStack_90 = pppuVar6;
  pppuStack_60 = pppuVar10;
  pppuStack_50 = &ppuStack_68;
  FUN_109567d5c(param_1,&pppuStack_98);
  pppuStack_b8 = pppuStack_50;
  if (pppuStack_50 == &ppuStack_68) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_109570ff8;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_50 + lVar8))();
LAB_109570ff8:
  pppuVar6 = pppuStack_90;
  if (pppuStack_90 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_90 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar3) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_90)[2])(pppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_b8 = pppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuStack_b8;
  }
  ___stack_chk_fail();
  pppuStack_70 = &ppuStack_88;
  FUN_109571360(&pppuStack_70);
  pppuVar6 = pppuStack_b8;
  __Unwind_Resume();
  pcStack_a8 = FUN_109571080;
  iVar4 = (int)pppuVar6;
  pppuStack_c0 = &ppuStack_68;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[1] = 0;
      FUN_109571198();
      *param_4 = FUN_109571080;
      return (undefined ***)0x0;
    }
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 3) {
        return (undefined ***)&PTR_DAT_1108a62f8;
      }
      if (param_5 == 0) {
        uVar5 = (uint)(param_6 == &UNK_10ddb8884);
      }
      else {
        func_0x000107c31948(param_5,&PTR_DAT_1108a62f8);
        uVar5 = (uint)param_5;
      }
      if (uVar5 != 0) {
        return pppuVar7 + 1;
      }
      return (undefined ***)0x0;
    }
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    ppuVar9 = pppuVar7[1];
    param_4[2] = pppuVar7[2];
    param_4[1] = ppuVar9;
    param_4[3] = pppuVar7[3];
    pppuVar7[1] = (undefined **)0x0;
    pppuVar7[2] = (undefined **)0x0;
    pppuVar7[3] = (undefined **)0x0;
    *param_4 = FUN_109571080;
  }
  pppuStack_c8 = pppuVar7 + 1;
  FUN_109571360(&pppuStack_c8);
  *pppuVar7 = (undefined **)0x0;
  return (undefined ***)0x0;
}



/* Entry: 109571080; end: 109571197;  */

undefined **
FUN_109571080(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[1] = 0;
      FUN_109571198();
      *param_3 = FUN_109571080;
      return (undefined **)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_1108a62f8;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8884);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_1108a62f8);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)(param_2 + 1);
      }
      return (undefined **)0x0;
    }
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar2 = param_2[1];
    param_3[2] = param_2[2];
    param_3[1] = uVar2;
    param_3[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_3 = FUN_109571080;
  }
  puStack_28 = param_2 + 1;
  FUN_109571360(&puStack_28);
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 109571198; end: 10957121b;  */

void FUN_109571198(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10957121c(param_1,param_4);
    lVar1 = param_1;
    FUN_109571268(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10957121c; end: 109571267;  */

long * FUN_10957121c(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1;
    FUN_109570bf8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    return plVar1;
  }
  FUN_109570be4();
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1095712ec(param_4,param_2);
    param_4 = param_4 + 7;
  }
  return param_4;
}



/* Entry: 109571268; end: 1095712eb;  */

long FUN_109571268(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1095712ec(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 1095712ec; end: 10957135f;  */

undefined8 * FUN_1095712ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_109285684();
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 109571360; end: 1095713cf;  */

void FUN_109571360(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x000109570cc8(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095713d0; end: 1095713d7;  */

void FUN_1095713d0(void)

{
  return;
}



/* Entry: 1095713d8; end: 10957140b;  */

void FUN_1095713d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afd5b8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10957140c; end: 109571427;  */

void FUN_10957140c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afd5b8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109571428; end: 10957143b;  */

undefined * FUN_109571428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afd618);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10957143c; end: 109571477;  */

long FUN_10957143c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afd618);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109571478; end: 109571483;  */

undefined ** FUN_109571478(void)

{
  return &PTR_DAT_110afd618;
}



/* Entry: 109571484; end: 10957155b;  */

void FUN_109571484(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10955ae60(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x70;
    __Znwm();
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(lVar2 + 0x20,*param_3,param_3[1]);
    }
    else {
      uVar3 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    }
    uVar3 = param_3[3];
    *(undefined8 *)(lVar2 + 0x40) = param_3[4];
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    uVar3 = param_3[5];
    *(undefined8 *)(lVar2 + 0x50) = param_3[6];
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[4] = 0;
    *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_3 + 7);
    uVar3 = param_3[8];
    *(undefined8 *)(lVar2 + 0x68) = param_3[9];
    *(undefined8 *)(lVar2 + 0x60) = uVar3;
    param_3[8] = 0;
    param_3[9] = 0;
    FUN_10957155c(param_1,uStack_38,plVar1,lVar2);
  }
  return;
}



/* Entry: 10957155c; end: 1095716cb;  */

void FUN_10957155c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1095716cc; end: 1095719af;  */

undefined **
FUN_1095716cc(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plStack_58;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      plVar8 = param_3 + 2;
      *plVar8 = 0;
      plVar5 = param_3 + 1;
      *plVar5 = (long)plVar8;
      param_3[3] = 0;
      puVar13 = (undefined8 *)param_2[1];
      do {
        if (puVar13 == param_2 + 2) {
          *param_3 = FUN_1095716cc;
          return (undefined **)0x0;
        }
        plVar6 = (long *)*plVar8;
        plVar12 = plVar8;
        if ((long *)*plVar5 == plVar8) {
joined_r0x000109571800:
          plStack_58 = plVar12;
          plVar12 = plVar8;
          plVar9 = plVar8;
          if (plVar6 != (long *)0x0) {
            plVar12 = plStack_58 + 1;
            goto LAB_10957180c;
          }
LAB_109571828:
          plStack_58 = plVar9;
          lVar11 = 0x70;
          __Znwm();
          if (*(char *)((long)puVar13 + 0x37) < '\0') {
            func_0x000107c3192c(lVar11 + 0x20,puVar13[4],puVar13[5]);
          }
          else {
            uVar15 = puVar13[5];
            uVar7 = puVar13[4];
            *(undefined8 *)(lVar11 + 0x30) = puVar13[6];
            *(undefined8 *)(lVar11 + 0x28) = uVar15;
            *(undefined8 *)(lVar11 + 0x20) = uVar7;
          }
          uVar7 = puVar13[7];
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined8 *)(lVar11 + 0x38) = uVar7;
          *(undefined8 *)(lVar11 + 0x48) = 0;
          *(undefined8 *)(lVar11 + 0x50) = 0;
          FUN_109285684();
          *(undefined4 *)(lVar11 + 0x58) = *(undefined4 *)(puVar13 + 0xb);
          lVar10 = puVar13[0xd];
          uVar7 = puVar13[0xc];
          *(undefined8 *)(lVar11 + 0x68) = puVar13[0xd];
          *(undefined8 *)(lVar11 + 0x60) = uVar7;
          if (lVar10 != 0) {
            plVar6 = (long *)(lVar10 + 8);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_10957155c(plVar5,plStack_58,plVar12,lVar11);
        }
        else {
          plVar9 = plVar8;
          if (plVar6 == (long *)0x0) {
            do {
              plVar12 = (long *)plVar9[2];
              bVar3 = (long *)*plVar12 == plVar9;
              plVar9 = plVar12;
            } while (bVar3);
          }
          else {
            do {
              plVar12 = plVar6;
              plVar6 = (long *)plVar12[1];
            } while ((long *)plVar12[1] != (long *)0x0);
          }
          plVar6 = plVar12 + 4;
          func_0x000107c2abd4(plVar6,puVar13 + 4);
          if (((uint)plVar6 >> 7 & 1) != 0) {
            plVar6 = (long *)*plVar8;
            goto joined_r0x000109571800;
          }
          plVar12 = plVar5;
          FUN_10955ae60(plVar5,&plStack_58,puVar13 + 4);
LAB_10957180c:
          plVar9 = plStack_58;
          if (*plVar12 == 0) goto LAB_109571828;
        }
        puVar2 = (undefined8 *)puVar13[1];
        puVar14 = puVar13;
        if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
          do {
            puVar13 = (undefined8 *)puVar14[2];
            bVar3 = (undefined8 *)*puVar13 != puVar14;
            puVar14 = puVar13;
          } while (bVar3);
        }
        else {
          do {
            puVar13 = puVar2;
            puVar2 = (undefined8 *)*puVar13;
          } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
        }
      } while( true );
    }
    lVar11 = param_2[2];
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110afbf98;
      }
      if (param_4 == 0) {
        uVar4 = (uint)(param_5 == &UNK_10dfd31c0);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110afbf98);
        uVar4 = (uint)param_4;
      }
      if (uVar4 != 0) {
        return (undefined **)(param_2 + 1);
      }
      return (undefined **)0x0;
    }
    param_3[1] = param_2[1];
    plVar5 = param_2 + 2;
    lVar10 = *plVar5;
    plVar8 = param_3 + 2;
    *plVar8 = lVar10;
    lVar11 = param_2[3];
    param_3[3] = lVar11;
    if (lVar11 == 0) {
      param_3[1] = plVar8;
      lVar11 = *plVar5;
    }
    else {
      lVar11 = 0;
      *(long **)(lVar10 + 0x10) = plVar8;
      param_2[1] = plVar5;
      *plVar5 = 0;
      param_2[3] = 0;
    }
    *param_3 = FUN_1095716cc;
  }
  FUN_1095719b0(lVar11);
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 1095719b0; end: 1095719ef;  */

void FUN_1095719b0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1095719b0(*param_1);
    FUN_1095719b0(param_1[1]);
    func_0x0001095715f8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1095719f0; end: 1095719f7;  */

void FUN_1095719f0(void)

{
  return;
}



/* Entry: 1095719f8; end: 109571a2b;  */

void FUN_1095719f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afbfb8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109571a2c; end: 109571a47;  */

void FUN_109571a2c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afbfb8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109571a48; end: 109571a5b;  */

undefined * FUN_109571a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc018);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 109571a5c; end: 109571a97;  */

long FUN_109571a5c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc018);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109571a98; end: 109571aa3;  */

undefined ** FUN_109571a98(void)

{
  return &PTR_DAT_110afc018;
}



/* Entry: 109571aa4; end: 109571b4b;  */

undefined8 * FUN_109571aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afc038;
  FUN_10957273c(param_1 + 0xc,0);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109571b4c; end: 109572737;  */

void FUN_109571b4c(long *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *****pppppuVar3;
  int ***pppiVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  int *****pppppiVar11;
  undefined8 **ppuVar12;
  int iVar13;
  long lVar14;
  int *****pppppiVar15;
  undefined8 *puVar16;
  int ***pppiVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  int ***pppiVar21;
  long lVar22;
  ulong uVar23;
  int ****ppppiVar24;
  int *****pppppiVar25;
  int ****ppppiStack_178;
  int ****ppppiStack_170;
  int ****ppppiStack_168;
  uint uStack_158;
  long *plStack_148;
  undefined8 ****ppppuStack_140;
  int ***pppiStack_138;
  int ***pppiStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int **ppiStack_110;
  int *piStack_108;
  undefined8 *puStack_100;
  int ****ppppiStack_f0;
  long *plStack_e8;
  long *aplStack_e0 [2];
  long **pplStack_d0;
  long **pplStack_c8;
  long *plStack_c0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      == 0) {
LAB_1095724fc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    if ((long)ppppiStack_168 < 0) {
      __ZdlPv(ppppiStack_178);
    }
    func_0x00010957076c(&lStack_a0);
    __Unwind_Resume(plVar7);
    return;
  }
LAB_109571be4:
  FUN_10956fffc(&lStack_a0);
  plVar7 = *(long **)(param_2 + 2);
  FUN_109565a70(plVar7,*param_2);
  lVar14 = *(long *)(param_2 + 2);
  while( true ) {
    plVar8 = &lStack_a0;
    func_0x000109570834();
    if (plVar8 == (long *)0x0) {
      plVar8 = &lStack_a0;
      FUN_109570a30();
      uVar23 = plVar7[1];
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
      }
      func_0x000104c4f768(&ppppiStack_178,uVar23 + 0xe,&ppiStack_110);
      pppppiVar15 = (int *****)ppppiStack_178;
      if (-1 < (long)ppppiStack_168) {
        pppppiVar15 = &ppppiStack_178;
      }
      if (uVar23 != 0) {
        plVar10 = (long *)*plVar7;
        if (-1 < *(char *)((long)plVar7 + 0x17)) {
          plVar10 = plVar7;
        }
        _memmove(pppppiVar15,plVar10,uVar23);
      }
      puVar16 = (undefined8 *)((long)pppppiVar15 + uVar23);
      *puVar16 = 0x6f546567616d495f;
      *(undefined8 *)((long)puVar16 + 6) = 0x726f736e65546f54;
      *(undefined1 *)((long)puVar16 + 0xe) = 0;
      FUN_1095617dc(&ppppiStack_f0,&ppppiStack_178,plVar7,lVar14 + 0x108);
      if ((long)ppppiStack_168 < 0) {
        __ZdlPv(ppppiStack_178);
      }
      if ((int)plVar8[0x24] == 0) {
        FUN_109549328(&ppppiStack_178,param_1[0xc],0);
        piStack_108 = (int *)param_1[10];
        ppiStack_110 = (int **)param_1[9];
        puStack_100 = (undefined8 *)CONCAT44(puStack_100._4_4_,(int)param_1[0xb]);
        FUN_10955cc30(plVar8,ppppiStack_178,param_1 + 1,&ppiStack_110,(char)param_1[0xd]);
        if ((int *****)ppppiStack_170 != (int *****)0x0) {
          __ZdlPv();
        }
        goto LAB_109571f64;
      }
      FUN_1092612e0();
      goto LAB_1095725b8;
    }
    plVar8 = &lStack_a0;
    func_0x000109570834();
    if (plVar8 == (long *)0x1) {
      plVar8 = &lStack_a0;
      func_0x0001056853dc();
      uVar23 = plVar7[1];
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
      }
      func_0x000104c4f768(&ppppiStack_178,uVar23 + 0x1d,&ppiStack_110);
      pppppiVar15 = (int *****)ppppiStack_178;
      if (-1 < (long)ppppiStack_168) {
        pppppiVar15 = &ppppiStack_178;
      }
      if (uVar23 != 0) {
        plVar10 = (long *)*plVar7;
        if (-1 < *(char *)((long)plVar7 + 0x17)) {
          plVar10 = plVar7;
        }
        _memmove(pppppiVar15,plVar10,uVar23);
      }
      puVar16 = (undefined8 *)((long)pppppiVar15 + uVar23);
      puVar16[1] = 0x7475706e49656e69;
      *puVar16 = 0x676e456c6c69465f;
      *(undefined8 *)((long)puVar16 + 0x15) = 0x636556726f736e65;
      *(undefined8 *)((long)puVar16 + 0xd) = 0x5468746957747570;
      *(undefined1 *)((long)puVar16 + 0x1d) = 0;
      FUN_1095617dc(&ppppiStack_f0,&ppppiStack_178,plVar7,lVar14 + 0x108);
      if ((long)ppppiStack_168 < 0) {
        __ZdlPv(ppppiStack_178);
      }
      if (plVar8[1] != *plVar8) {
        uVar23 = 0;
        do {
          FUN_109549328(&ppppiStack_178,param_1[0xc],uVar23);
          ppppiVar24 = ppppiStack_170;
          iVar13 = 1;
          for (pppppiVar15 = (int *****)ppppiStack_170; pppppiVar15 != (int *****)ppppiStack_168;
              pppppiVar15 = (int *****)((long)pppppiVar15 + 4)) {
            iVar13 = *(int *)pppppiVar15 * iVar13;
          }
          if (uStack_158 < 3) {
            iVar18 = *(int *)(&UNK_10dfd4b40 + (ulong)uStack_158 * 4);
          }
          else {
            iVar18 = 1;
          }
          _memcpy(ppppiStack_178,*(undefined8 *)(*plVar8 + uVar23 * 0x38),(long)(iVar18 * iVar13));
          if ((int *****)ppppiVar24 != (int *****)0x0) {
            __ZdlPv(ppppiVar24);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)((plVar8[1] - *plVar8 >> 3) * 0x6db6db6db6db6db7));
      }
      goto LAB_109571f64;
    }
    plVar8 = &lStack_a0;
    func_0x000109570834();
    if (plVar8 == (long *)0x2) break;
    plVar8 = &lStack_a0;
    func_0x000109570834();
    if (plVar8 == (long *)0x3) goto code_r0x000109571c40;
  }
  plVar8 = &lStack_a0;
  FUN_109570b48();
  uVar23 = plVar7[1];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
    uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
  }
  func_0x000104c4f768(&ppppiStack_178,uVar23 + 0x1d,&ppiStack_110);
  pppppiVar15 = (int *****)ppppiStack_178;
  if (-1 < (long)ppppiStack_168) {
    pppppiVar15 = &ppppiStack_178;
  }
  if (uVar23 != 0) {
    plVar10 = (long *)*plVar7;
    if (-1 < *(char *)((long)plVar7 + 0x17)) {
      plVar10 = plVar7;
    }
    _memmove(pppppiVar15,plVar10,uVar23);
  }
  puVar16 = (undefined8 *)((long)pppppiVar15 + uVar23);
  puVar16[1] = 0x7475706e49656e69;
  *puVar16 = 0x676e456c6c69465f;
  *(undefined8 *)((long)puVar16 + 0x15) = 0x70614d726f736e65;
  *(undefined8 *)((long)puVar16 + 0xd) = 0x5468746957747570;
  *(undefined1 *)((long)puVar16 + 0x1d) = 0;
  FUN_1095617dc(&ppppiStack_f0,&ppppiStack_178,plVar7,lVar14 + 0x108);
  if ((long)ppppiStack_168 < 0) {
    __ZdlPv(ppppiStack_178);
  }
  FUN_109549804(&ppppiStack_178,param_1[0xc]);
  if ((int *****)ppppiStack_178 == &ppppiStack_170) goto LAB_1095720ac;
  pppppiVar15 = (int *****)ppppiStack_178;
  do {
    plVar10 = plVar8;
    FUN_109570acc(plVar8,pppppiVar15 + 4);
    if (plVar8 + 1 == plVar10) {
      func_0x000107c31940(&puStack_128,&UNK_10f573e86);
      if (*(char *)((long)pppppiVar15 + 0x37) < '\0') {
        func_0x000107c3192c(&ppppuStack_140,pppppiVar15[4],pppppiVar15[5]);
      }
      else {
        pppiStack_138 = (int ***)pppppiVar15[5];
        ppppuStack_140 = (undefined8 ****)pppppiVar15[4];
        pppiStack_130 = (int ***)pppppiVar15[6];
      }
      ppppiVar24 = (int ****)pppiStack_138;
      pppppuVar3 = (undefined8 *****)ppppuStack_140;
      if (-1 < (long)pppiStack_130) {
        ppppiVar24 = (int ****)((ulong)pppiStack_130 >> 0x38);
        pppppuVar3 = &ppppuStack_140;
      }
      ppuVar12 = &puStack_128;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar12,pppppuVar3,ppppiVar24);
      piStack_108 = (int *)ppuVar12[1];
      ppiStack_110 = (int **)*ppuVar12;
      puStack_100 = ppuVar12[2];
      ppuVar12[1] = (undefined8 *)0x0;
      ppuVar12[2] = (undefined8 *)0x0;
      *ppuVar12 = (undefined8 *)0x0;
      func_0x000105687ee0(&ppiStack_110);
LAB_1095725b8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1095725bc);
      (*pcVar5)();
    }
    lVar20 = plVar10[7];
    pppppiVar11 = pppppiVar15 + 7;
    ppppiVar24 = *pppppiVar11;
    func_0x0001056864d8();
    _memcpy(ppppiVar24,lVar20,(long)(int)pppppiVar11);
    pppppiVar11 = (int *****)pppppiVar15[1];
    pppppiVar25 = pppppiVar15;
    if ((int *****)pppppiVar15[1] == (int *****)0x0) {
      do {
        pppppiVar15 = (int *****)pppppiVar25[2];
        bVar6 = (int *****)*pppppiVar15 != pppppiVar25;
        pppppiVar25 = pppppiVar15;
      } while (bVar6);
    }
    else {
      do {
        pppppiVar15 = pppppiVar11;
        pppppiVar11 = (int *****)*pppppiVar15;
      } while ((int *****)*pppppiVar15 != (int *****)0x0);
    }
  } while (pppppiVar15 != &ppppiStack_170);
LAB_1095720ac:
  FUN_10954ae68(&ppppiStack_178,ppppiStack_170);
  FUN_10956189c(&ppppiStack_f0);
  goto LAB_1095720d0;
code_r0x000109571c40:
  plVar8 = &lStack_a0;
  func_0x000105681eb4();
  lVar20 = *plVar8;
  uVar23 = plVar7[1];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
    uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
  }
  func_0x000104c4f768(&ppppiStack_178,uVar23 + 0x25,&ppiStack_110);
  pppppiVar15 = (int *****)ppppiStack_178;
  if (-1 < (long)ppppiStack_168) {
    pppppiVar15 = &ppppiStack_178;
  }
  if (uVar23 != 0) {
    plVar8 = (long *)*plVar7;
    if (-1 < *(char *)((long)plVar7 + 0x17)) {
      plVar8 = plVar7;
    }
    _memmove(pppppiVar15,plVar8,uVar23);
  }
  puVar16 = (undefined8 *)((long)pppppiVar15 + uVar23);
  puVar16[1] = 0x7475706e49656e69;
  *puVar16 = 0x676e456c6c69465f;
  puVar16[3] = 0x6f72506572757461;
  puVar16[2] = 0x65464c4d68746957;
  *(undefined8 *)((long)puVar16 + 0x1d) = 0x72656469766f7250;
  *(undefined1 *)((long)puVar16 + 0x25) = 0;
  FUN_1095617dc(&ppppiStack_f0,&ppppiStack_178,plVar7,lVar14 + 0x108);
  if ((long)ppppiStack_168 < 0) {
    __ZdlPv(ppppiStack_178);
  }
  lVar22 = *(long *)param_1[0xc];
  _objc_retain(lVar20);
  uVar9 = *(undefined8 *)(lVar22 + 0x70);
  *(long *)(lVar22 + 0x70) = lVar20;
  _objc_release(uVar9);
LAB_109571f64:
  FUN_10956189c(&ppppiStack_f0);
LAB_1095720d0:
  uVar23 = plVar7[1];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
    uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
  }
  func_0x000104c4f768(&ppppiStack_178,uVar23 + 0xd,&ppiStack_110);
  pppppiVar15 = (int *****)ppppiStack_178;
  if (-1 < (long)ppppiStack_168) {
    pppppiVar15 = &ppppiStack_178;
  }
  if (uVar23 != 0) {
    plVar8 = (long *)*plVar7;
    if (-1 < *(char *)((long)plVar7 + 0x17)) {
      plVar8 = plVar7;
    }
    _memmove(pppppiVar15,plVar8,uVar23);
  }
  puVar16 = (undefined8 *)((long)pppppiVar15 + uVar23);
  *puVar16 = 0x49656e69676e455f;
  *(undefined8 *)((long)puVar16 + 5) = 0x656b6f766e49656e;
  *(undefined1 *)((long)puVar16 + 0xd) = 0;
  FUN_1095617dc(&ppppiStack_f0,&ppppiStack_178,plVar7,lVar14 + 0x108);
  if ((long)ppppiStack_168 < 0) {
    __ZdlPv(ppppiStack_178);
  }
  FUN_1095499dc(param_1[0xc]);
  FUN_10956189c(&ppppiStack_f0);
  if (*(int *)((long)param_1 + 0x6c) == 1) {
    FUN_1095498f0(&ppiStack_110,param_1[0xc]);
    uStack_120 = 0;
    uStack_118 = 0;
    puStack_128 = &uStack_120;
    pppiVar17 = (int ***)ppiStack_110;
    while (pppiVar17 != (int ***)&piStack_108) {
      FUN_109570d50(&ppppiStack_178,pppiVar17 + 7);
      func_0x000109571644(&ppppiStack_f0,pppiVar17 + 4,&ppppiStack_178);
      FUN_109571484(&puStack_128,&ppppiStack_f0,&ppppiStack_f0);
      plVar7 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar8 = plStack_a8 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (pplStack_d0 != (long **)0x0) {
        pplStack_c8 = pplStack_d0;
        __ZdlPv();
      }
      if ((long)aplStack_e0[0] < 0) {
        __ZdlPv(ppppiStack_f0);
      }
      plVar7 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar8 = plStack_148 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if ((int *****)ppppiStack_170 != (int *****)0x0) {
        ppppiStack_168 = ppppiStack_170;
        __ZdlPv();
      }
      pppiVar4 = (int ***)pppiVar17[1];
      pppiVar21 = pppiVar17;
      if ((int ***)pppiVar17[1] == (int ***)0x0) {
        do {
          pppiVar17 = (int ***)pppiVar21[2];
          bVar6 = (int ***)*pppiVar17 != pppiVar21;
          pppiVar21 = pppiVar17;
        } while (bVar6);
      }
      else {
        do {
          pppiVar17 = pppiVar4;
          pppiVar4 = (int ***)*pppiVar17;
        } while ((int ***)*pppiVar17 != (int ***)0x0);
      }
    }
    FUN_109570504(param_2,&puStack_128);
    FUN_1095719b0(uStack_120);
    FUN_10954ae68(&ppiStack_110,piStack_108);
  }
  else if (*(int *)((long)param_1 + 0x6c) == 2) {
    ppppiStack_178 = *(int *****)(*(long *)param_1[0xc] + 0x78);
    func_0x000105681da8(&ppppiStack_f0,&ppppiStack_178);
    puVar16 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
    piVar1 = (int *)puVar16[1];
    for (piVar19 = (int *)*puVar16; piVar19 != piVar1; piVar19 = piVar19 + 2) {
      if (*piVar19 == 0) {
        func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar19[1] * 0x50 + 0x18,&ppppiStack_f0
                           );
      }
    }
    if (pplStack_c8 == aplStack_e0) {
      lVar14 = 0x20;
LAB_109572434:
      (**(code **)((long)*pplStack_c8 + lVar14))();
    }
    else if (pplStack_c8 != (long **)0x0) {
      lVar14 = 0x28;
      goto LAB_109572434;
    }
    plVar7 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar8 = plStack_e8 + 1;
      do {
        lVar14 = *plVar8;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  else {
    FUN_1095496e0(&ppppiStack_178,param_1[0xc]);
    ppiStack_110 = (int **)0x0;
    piStack_108 = (int *)0x0;
    puStack_100 = (undefined8 *)0x0;
    FUN_10957010c(&ppiStack_110,
                  ((long)ppppiStack_170 - (long)ppppiStack_178 >> 3) * -0x3333333333333333);
    ppppiVar24 = ppppiStack_170;
    for (pppppiVar15 = (int *****)ppppiStack_178; pppppiVar15 != (int *****)ppppiVar24;
        pppppiVar15 = pppppiVar15 + 5) {
      FUN_109570d50(&ppppiStack_f0,pppppiVar15);
      func_0x0001095701d0(&ppiStack_110,&ppppiStack_f0);
      plVar7 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar8 = plStack_c0 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (plStack_e8 != (long *)0x0) {
        aplStack_e0[0] = plStack_e8;
        __ZdlPv();
      }
    }
    FUN_109570380(param_2,&ppiStack_110);
    ppppiStack_f0 = (int ****)&ppiStack_110;
    FUN_109571360(&ppppiStack_f0);
    ppppiStack_f0 = (int ****)&ppppiStack_178;
    FUN_10954a4bc(&ppppiStack_f0);
  }
  plVar7 = plStack_78;
  if (plStack_78 == alStack_90) {
    lVar14 = 0x20;
  }
  else {
    if (plStack_78 == (long *)0x0) goto LAB_1095724a0;
    lVar14 = 0x28;
  }
  (**(code **)(*plStack_78 + lVar14))();
LAB_1095724a0:
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar14 = *plVar10;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar7 = plVar8;
    }
  }
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      == 0) goto LAB_1095724fc;
  goto LAB_109571be4;
}



/* Entry: 109572738; end: 10957273b;  */

void FUN_109572738(void)

{
  return;
}



/* Entry: 10957273c; end: 10957277b;  */

void FUN_10957273c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10954aaf8(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10957277c; end: 10957280b;  */

void FUN_10957277c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  ulong *puVar2;
  long lVar3;
  ulong unaff_x23;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x48) << 3;
    do {
      unaff_x23 = *puVar2;
      uVar1 = unaff_x23 + 0x28;
      func_0x00010b4bee4c(uVar1,&UNK_10f573f22,0x1d);
      if ((uVar1 & 1) != 0) goto LAB_1095727e4;
      lVar3 = lVar3 + -8;
      unaff_x19 = param_2;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  param_2 = unaff_x19;
  func_0x000105688514(&UNK_10f573dd9);
LAB_1095727e4:
  lVar3 = unaff_x23 + 0x28;
  func_0x00010b4bee4c(lVar3,&UNK_10f573f22,0x1d);
  if ((int)lVar3 != 0) {
    func_0x000100063660(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10957280c; end: 10957287b;  */

undefined8 * FUN_10957280c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afc088;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_109572d2c();
  }
  return param_1;
}



/* Entry: 10957287c; end: 109572c67;  */

void FUN_10957287c(long *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    do {
      FUN_109572f9c(auStack_a0,param_2);
      puVar5 = auStack_a0;
      FUN_109570a30();
      if (*(int *)(puVar5 + 0x120) != 0) {
        FUN_1092612e0();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109572bfc);
        (*pcVar4)();
      }
      ppuStack_100 = &PTR_FUN_110af3f88;
      plStack_f8 = (long *)0x0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      lStack_f0 = 0;
      uStack_d8 = 0;
      if (*(long *)(**(long **)(param_2 + 2) +
                    (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                   0x90) == 0) {
        ppuStack_130 = &PTR_FUN_110af16c8;
        plStack_128 = (long *)0x0;
        uStack_118 = 0;
        uStack_110 = 0;
        lStack_120 = 0;
        uStack_108 = 0;
        FUN_109595a9c(auStack_d0,param_1[1],puVar5,&ppuStack_130);
        uVar3 = uStack_e8;
        lVar9 = lStack_f0;
        plVar10 = plStack_f8;
        plVar8 = plStack_f8;
        if (((ulong)plStack_f8 & 1) != 0) {
          plVar8 = *(long **)((ulong)plStack_f8 & 0xfffffffffffffffe);
        }
        plVar11 = plStack_c8;
        if (((ulong)plStack_c8 & 1) != 0) {
          plVar11 = *(long **)((ulong)plStack_c8 & 0xfffffffffffffffe);
        }
        if (plVar8 == plVar11) {
          plStack_f8 = plStack_c8;
          plStack_c8 = plVar10;
          uStack_e8 = uStack_b8;
          lStack_f0 = lStack_c0;
          uStack_b8 = uVar3;
          lStack_c0 = lVar9;
        }
        else {
          FUN_109365404(&ppuStack_100);
          FUN_10936566c(&ppuStack_100,auStack_d0);
        }
        FUN_1093653ac(auStack_d0);
        FUN_10934ffa0(&ppuStack_130);
      }
      else {
        FUN_1095730a0(auStack_d0);
        do {
          puVar6 = auStack_d0;
          FUN_1095734cc();
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = auStack_d0;
            FUN_10957358c(puVar6);
            FUN_109595a9c(&ppuStack_130,param_1[1],puVar5,puVar6);
            goto LAB_109572a10;
          }
          puVar6 = auStack_d0;
          FUN_1095734cc();
        } while (puVar6 != (undefined1 *)0x1);
        puVar6 = auStack_d0;
        FUN_10951e8bc(puVar6);
        FUN_109596b94(&ppuStack_130,param_1[1],puVar5,puVar6);
LAB_109572a10:
        uVar3 = uStack_e8;
        lVar9 = lStack_f0;
        plVar10 = plStack_f8;
        plVar8 = plStack_f8;
        if (((ulong)plStack_f8 & 1) != 0) {
          plVar8 = *(long **)((ulong)plStack_f8 & 0xfffffffffffffffe);
        }
        plVar11 = plStack_128;
        if (((ulong)plStack_128 & 1) != 0) {
          plVar11 = *(long **)((ulong)plStack_128 & 0xfffffffffffffffe);
        }
        if (plVar8 == plVar11) {
          plStack_f8 = plStack_128;
          plStack_128 = plVar10;
          uStack_e8 = uStack_118;
          lStack_f0 = lStack_120;
          uStack_118 = uVar3;
          lStack_120 = lVar9;
        }
        else {
          FUN_109365404(&ppuStack_100);
          FUN_10936566c(&ppuStack_100,&ppuStack_130);
        }
        FUN_1093653ac(&ppuStack_130);
        if (plStack_a8 == &lStack_c0) {
          lVar9 = 0x20;
LAB_109572a84:
          (**(code **)(*plStack_a8 + lVar9))();
        }
        else if (plStack_a8 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_109572a84;
        }
        plVar10 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar8 = plStack_c8 + 1;
          do {
            lVar9 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      FUN_109573200(param_2,&ppuStack_100);
      FUN_1093653ac(&ppuStack_100);
      plVar10 = plStack_78;
      if (plStack_78 == alStack_90) {
        lVar9 = 0x20;
LAB_109572b24:
        (**(code **)(*plStack_78 + lVar9))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar9 = 0x28;
        goto LAB_109572b24;
      }
      plVar8 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar11 = plStack_98 + 1;
        do {
          lVar9 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar10 = plVar8;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10934ffa0(&ppuStack_130);
    FUN_1093653ac(&ppuStack_100);
    FUN_10957342c(auStack_a0);
    __Unwind_Resume();
    puVar7 = (undefined8 *)plVar10[1];
    plVar8 = (long *)*puVar7;
    plVar10 = (long *)puVar7[1];
    while (plVar10 != plVar8) {
      plVar10 = plVar10 + -1;
      lVar9 = *plVar10;
      *plVar10 = 0;
      if (lVar9 != 0) {
        FUN_109572ea0(plVar10);
      }
    }
    puVar7[1] = plVar8;
    return;
  }
  return;
}



/* Entry: 109572c68; end: 109572c73;  */

void FUN_109572c68(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  plVar2 = (long *)*puVar1;
  plVar4 = (long *)puVar1[1];
  while (plVar4 != plVar2) {
    plVar4 = plVar4 + -1;
    lVar3 = *plVar4;
    *plVar4 = 0;
    if (lVar3 != 0) {
      FUN_109572ea0(plVar4);
    }
  }
  puVar1[1] = plVar2;
  return;
}



/* Entry: 109572c74; end: 109572d2b;  */

undefined8 * FUN_109572c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_110af3df0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  if (param_1 != param_2) {
    uVar4 = param_2[1];
    uVar2 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      param_1[1] = uVar4;
      param_2[1] = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_2 + 2) = 0;
      lVar3 = 0;
      do {
        uVar1 = *(undefined1 *)((long)param_1 + lVar3 + 0x18);
        *(undefined1 *)((long)param_1 + lVar3 + 0x18) =
             *(undefined1 *)((long)param_2 + lVar3 + 0x18);
        *(undefined1 *)((long)param_2 + lVar3 + 0x18) = uVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x30);
    }
    else {
      FUN_109363c90(param_1);
      FUN_109364234(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 109572d2c; end: 109572e43;  */

void FUN_109572d2c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x000109551254(param_1 + 0x38);
  func_0x0001095511fc(param_1 + 0x28);
  FUN_109572f74(param_1 + 0x20,0);
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    func_0x000109572d94();
  }
  lStack_28 = param_1;
  func_0x000109572e04(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109572e44; end: 109572e9f;  */

void FUN_109572e44(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != param_2) {
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      FUN_109572ea0(plVar2);
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109572ea0; end: 109572f73;  */

void FUN_109572ea0(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 0xd0) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    FUN_109544e84(param_2 + 0x90);
    if (*(long *)(param_2 + 0x68) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x68) + 0x14);
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
        func_0x000109a848d4(param_2 + 0x30);
      }
    }
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar6 = 0;
      lVar7 = *(long *)(param_2 + 0x70);
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_2 + 0x34));
    }
    lVar6 = *(long *)(param_2 + 0x78);
    if (lVar6 != param_2 + 0x80 && lVar6 != 0) {
      _free(*(undefined8 *)(lVar6 + -8));
    }
    FUN_109349e70(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109572f74; end: 109572f9b;  */

void FUN_109572f74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109363c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109572f9c; end: 10957309f;  */

long * FUN_109572f9c(undefined8 param_1,int *param_2,int param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  long alStack_a8 [3];
  long *plStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,
                **(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50);
  FUN_109573478(param_1,auStack_58);
  if (plStack_30 == alStack_48) {
    lVar6 = 0x20;
LAB_109573014:
    (**(code **)(*plStack_30 + lVar6))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_109573014;
  }
  if (plStack_50 != (long *)0x0) {
    plVar4 = plStack_50 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_30 = plStack_50;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plStack_30;
  }
  ___stack_chk_fail();
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  pcStack_68 = FUN_1095730a0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = auStack_58;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_1095659c8(auStack_b8,param_4 + (long)*(int *)(param_5 + (long)param_3 * 4) * 0x50 + 0x50);
  *plStack_30 = 0;
  plStack_30[1] = 0;
  plStack_30[5] = 0;
  func_0x0001095707b8(plStack_30,auStack_b8);
  func_0x000105687250(plStack_30 + 2,alStack_a8);
  if (plStack_90 == alStack_a8) {
    lVar6 = 0x20;
LAB_109573120:
    (**(code **)(*plStack_90 + lVar6))();
    plVar4 = plStack_90;
  }
  else {
    plVar4 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_109573120;
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar5 = plStack_b0 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      plVar4 = plStack_b0;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_1095731b4(plStack_b0);
  func_0x000105681f78(auStack_b8);
  __Unwind_Resume();
  plVar5 = (long *)plVar4[5];
  if (plVar5 == plVar4 + 2) {
    lVar6 = 0x20;
  }
  else {
    if (plVar5 == (long *)0x0) goto SUB_10951ea70;
    lVar6 = 0x28;
  }
  (**(code **)(*plVar5 + lVar6))();
SUB_10951ea70:
  plVar5 = (long *)plVar4[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return plVar4;
}



/* Entry: 1095730a0; end: 1095731b3;  */

long * FUN_1095730a0(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50 + 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,auStack_58);
  func_0x000105687250(param_1 + 2,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar6 = 0x20;
LAB_109573120:
    (**(code **)(*plStack_30 + lVar6))();
    plVar4 = plStack_30;
  }
  else {
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_109573120;
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar5 = plStack_50 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      plVar4 = plStack_50;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_1095731b4(plStack_50);
  func_0x000105681f78(auStack_58);
  __Unwind_Resume();
  plVar5 = (long *)plVar4[5];
  if (plVar5 == plVar4 + 2) {
    lVar6 = 0x20;
  }
  else {
    if (plVar5 == (long *)0x0) goto SUB_10951ea70;
    lVar6 = 0x28;
  }
  (**(code **)(*plVar5 + lVar6))();
SUB_10951ea70:
  plVar5 = (long *)plVar4[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return plVar4;
}



/* Entry: 1095731b4; end: 1095731ff;  */

long FUN_1095731b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109573200; end: 10957342b;  */

long * FUN_109573200(int *param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long alStack_88 [3];
  long *plStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109573720(&ppuStack_68);
  plVar6 = (long *)0x38;
  __Znwm();
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_1108a6378;
  plVar6[1] = 0;
  plVar8 = plVar6 + 3;
  *plVar8 = 0;
  plVar6[4] = 0;
  lVar7 = 0x30;
  __Znwm();
  FUN_109573720();
  plVar6[3] = (long)FUN_109573628;
  plVar6[4] = lVar7;
  FUN_1093653ac(&ppuStack_68);
  ppuStack_68 = &PTR_FUN_110afc0d8;
  plStack_a8 = plVar8;
  plStack_a0 = plVar6;
  plStack_60 = plVar8;
  pppuStack_50 = &ppuStack_68;
  FUN_109567d5c(auStack_98,&plStack_a8,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar7 = 0x20;
LAB_1095732c4:
    (**(code **)((long)*pppuStack_50 + lVar7))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar7 = 0x28;
    goto LAB_1095732c4;
  }
  plVar6 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar9[1];
  for (piVar2 = (int *)*puVar9; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_98);
    }
  }
  if (plStack_70 == alStack_88) {
    lVar7 = 0x20;
LAB_109573380:
    (**(code **)(*plStack_70 + lVar7))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109573380;
  }
  plVar6 = plStack_70;
  if (plStack_90 != (long *)0x0) {
    plVar8 = plStack_90 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar2);
  __ZdlPv();
  FUN_1093653ac(&ppuStack_68);
  __Unwind_Resume();
  plVar8 = (long *)plVar6[5];
  if (plVar8 == plVar6 + 2) {
    lVar7 = 0x20;
  }
  else {
    if (plVar8 == (long *)0x0) goto SUB_10951ea70;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar8 + lVar7))();
SUB_10951ea70:
  plVar8 = (long *)plVar6[1];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar6;
}



/* Entry: 10957342c; end: 109573477;  */

long FUN_10957342c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109573478; end: 1095734cb;  */

void FUN_109573478(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,param_2);
  func_0x000105687250(param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 1095734cc; end: 109573543;  */

long FUN_1095734cc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_109573544();
    lVar2 = *param_1;
    if (lVar2 != 0) {
      FUN_10951f7a4();
      puVar3 = &uStack_22;
      if (lVar1 == 0) {
        puVar3 = &uStack_21;
      }
      if (lVar1 == 0 && lVar2 == 0) {
        puVar3 = &stack0xffffffffffffffe0;
      }
      goto LAB_10957352c;
    }
    puVar3 = &uStack_22;
    if (lVar1 != 0) goto LAB_10957352c;
  }
  puVar3 = &stack0xffffffffffffffe0;
LAB_10957352c:
  return (long)puVar3 - (long)&uStack_22;
}



/* Entry: 109573544; end: 10957358b;  */

void FUN_109573544(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110af1790,&UNK_10dfd3404);
  }
  return;
}



/* Entry: 10957358c; end: 109573627;  */

void FUN_10957358c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_109573544();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095735f4);
  (*pcVar1)();
}



/* Entry: 109573628; end: 10957371f;  */

undefined **
FUN_109573628(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = 0x30;
      __Znwm();
      FUN_109365338();
      *param_3 = FUN_109573628;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
    FUN_1093653ac(param_2[1]);
    __ZdlPv();
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110af40f0;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10dfd168c);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110af40f0);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_109573628;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 109573720; end: 1095737c7;  */

undefined8 * FUN_109573720(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = param_1 + 2;
  *puVar3 = 0;
  *param_1 = &PTR_FUN_110af3f88;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_2) {
    uVar4 = param_2[1];
    uVar2 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      param_1[1] = uVar4;
      param_2[1] = 0;
      lVar5 = 0;
      do {
        uVar1 = *(undefined1 *)((long)puVar3 + lVar5);
        *(undefined1 *)((long)puVar3 + lVar5) = *(undefined1 *)((long)param_2 + lVar5 + 0x10);
        *(undefined1 *)((long)param_2 + lVar5 + 0x10) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
    }
    else {
      FUN_109365404(param_1);
      FUN_10936566c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1095737c8; end: 1095737cf;  */

void FUN_1095737c8(void)

{
  return;
}



/* Entry: 1095737d0; end: 109573803;  */

void FUN_1095737d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc0d8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109573804; end: 10957381f;  */

void FUN_109573804(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc0d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109573820; end: 109573857;  */

void FUN_109573820(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 8))
            (3,*(undefined8 **)(param_1 + 8),0,&PTR_DAT_110af40f0,&UNK_10dfd168c);
  return;
}



/* Entry: 109573858; end: 109573893;  */

long FUN_109573858(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc138);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109573894; end: 10957389f;  */

undefined ** FUN_109573894(void)

{
  return &PTR_DAT_110afc138;
}



/* Entry: 1095738a0; end: 10957390f;  */

undefined8 * FUN_1095738a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afc158;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_109573de4();
  }
  return param_1;
}



/* Entry: 109573910; end: 109573cfb;  */

void FUN_109573910(long *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined **ppuStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    do {
      FUN_109572f9c(auStack_a0,param_2);
      puVar5 = auStack_a0;
      FUN_109570a30();
      if (*(int *)(puVar5 + 0x120) != 0) {
        FUN_1092612e0();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109573c90);
        (*pcVar4)();
      }
      ppuStack_100 = &PTR_FUN_110af3f88;
      plStack_f8 = (long *)0x0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      lStack_f0 = 0;
      uStack_d8 = 0;
      if (*(long *)(**(long **)(param_2 + 2) +
                    (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                   0x90) == 0) {
        ppuStack_130 = &PTR_FUN_110af16c8;
        plStack_128 = (long *)0x0;
        uStack_118 = 0;
        uStack_110 = 0;
        lStack_120 = 0;
        uStack_108 = 0;
        FUN_109543e2c(auStack_d0,param_1[1],puVar5,&ppuStack_130);
        uVar3 = uStack_e8;
        lVar10 = lStack_f0;
        plVar7 = plStack_f8;
        plVar8 = plStack_f8;
        if (((ulong)plStack_f8 & 1) != 0) {
          plVar8 = *(long **)((ulong)plStack_f8 & 0xfffffffffffffffe);
        }
        plVar11 = plStack_c8;
        if (((ulong)plStack_c8 & 1) != 0) {
          plVar11 = *(long **)((ulong)plStack_c8 & 0xfffffffffffffffe);
        }
        if (plVar8 == plVar11) {
          plStack_f8 = plStack_c8;
          plStack_c8 = plVar7;
          uStack_e8 = uStack_b8;
          lStack_f0 = lStack_c0;
          uStack_b8 = uVar3;
          lStack_c0 = lVar10;
        }
        else {
          FUN_109365404(&ppuStack_100);
          FUN_10936566c(&ppuStack_100,auStack_d0);
        }
        FUN_1093653ac(auStack_d0);
        FUN_10934ffa0(&ppuStack_130);
      }
      else {
        FUN_1095730a0(auStack_d0);
        do {
          puVar6 = auStack_d0;
          FUN_1095734cc();
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = auStack_d0;
            FUN_10957358c(puVar6);
            FUN_109543e2c(&ppuStack_130,param_1[1],puVar5,puVar6);
            goto LAB_109573aa4;
          }
          puVar6 = auStack_d0;
          FUN_1095734cc();
        } while (puVar6 != (undefined1 *)0x1);
        puVar6 = auStack_d0;
        FUN_10951e8bc(puVar6);
        FUN_109544e14(&ppuStack_130,param_1[1],puVar5,puVar6);
LAB_109573aa4:
        uVar3 = uStack_e8;
        lVar10 = lStack_f0;
        plVar7 = plStack_f8;
        plVar8 = plStack_f8;
        if (((ulong)plStack_f8 & 1) != 0) {
          plVar8 = *(long **)((ulong)plStack_f8 & 0xfffffffffffffffe);
        }
        plVar11 = plStack_128;
        if (((ulong)plStack_128 & 1) != 0) {
          plVar11 = *(long **)((ulong)plStack_128 & 0xfffffffffffffffe);
        }
        if (plVar8 == plVar11) {
          plStack_f8 = plStack_128;
          plStack_128 = plVar7;
          uStack_e8 = uStack_118;
          lStack_f0 = lStack_120;
          uStack_118 = uVar3;
          lStack_120 = lVar10;
        }
        else {
          FUN_109365404(&ppuStack_100);
          FUN_10936566c(&ppuStack_100,&ppuStack_130);
        }
        FUN_1093653ac(&ppuStack_130);
        if (plStack_a8 == &lStack_c0) {
          lVar10 = 0x20;
LAB_109573b18:
          (**(code **)(*plStack_a8 + lVar10))();
        }
        else if (plStack_a8 != (long *)0x0) {
          lVar10 = 0x28;
          goto LAB_109573b18;
        }
        plVar7 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar8 = plStack_c8 + 1;
          do {
            lVar10 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      FUN_109573200(param_2,&ppuStack_100);
      FUN_1093653ac(&ppuStack_100);
      plVar7 = plStack_78;
      if (plStack_78 == alStack_90) {
        lVar10 = 0x20;
LAB_109573bb8:
        (**(code **)(*plStack_78 + lVar10))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar10 = 0x28;
        goto LAB_109573bb8;
      }
      plVar8 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar11 = plStack_98 + 1;
        do {
          lVar10 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar7 = plVar8;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10934ffa0(&ppuStack_130);
    FUN_1093653ac(&ppuStack_100);
    FUN_10957342c(auStack_a0);
    __Unwind_Resume();
    puVar12 = (undefined4 *)plVar7[1];
    lVar10 = *(long *)(puVar12 + 2);
    lVar9 = *(long *)(puVar12 + 4);
    while (lVar9 != lVar10) {
      lVar9 = lVar9 + -0x10;
      func_0x000109547450();
    }
    *(long *)(puVar12 + 4) = lVar10;
    *puVar12 = 0;
    return;
  }
  return;
}



/* Entry: 109573cfc; end: 109573d37;  */

void FUN_109573cfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  lVar1 = *(long *)(puVar3 + 2);
  lVar2 = *(long *)(puVar3 + 4);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    func_0x000109547450();
  }
  *(long *)(puVar3 + 4) = lVar1;
  *puVar3 = 0;
  return;
}



/* Entry: 109573d38; end: 109573de3;  */

undefined8 * FUN_109573d38(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  FUN_1093d98c8(param_1,100,10,10);
  param_1[4] = 10;
  param_1[3] = 10;
  return param_1;
}



/* Entry: 109573de4; end: 109573e3f;  */

void FUN_109573de4(long param_1)

{
  long lVar1;
  long lStack_28;
  
  FUN_109572f74(param_1 + 0x28,0);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    func_0x000109572d94();
  }
  lStack_28 = param_1 + 8;
  FUN_10954737c(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109573e40; end: 109573e47;  */

void FUN_109573e40(void)

{
  return;
}



/* Entry: 109573e48; end: 109574093;  */

void FUN_109573e48(long *param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uStack_b8;
  long *plStack_b0;
  long alStack_a8 [3];
  long *plStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
  lVar9 = **(long **)(param_2 + 2);
  plVar10 = param_1;
  if (*(long *)(lVar9 + (long)iVar7 * 0x50 + 0x40) != 0) {
    do {
      FUN_1095659c8(auStack_88,lVar9 + (long)iVar7 * 0x50);
      uStack_b8 = 0;
      plStack_b0 = (long *)0x0;
      plStack_90 = (long *)0x0;
      func_0x0001095707b8(&uStack_b8,auStack_88);
      func_0x000105687250(alStack_a8,alStack_78);
      if (plStack_60 == alStack_78) {
        lVar9 = 0x20;
LAB_109573efc:
        (**(code **)(*plStack_60 + lVar9))();
      }
      else if (plStack_60 != (long *)0x0) {
        lVar9 = 0x28;
        goto LAB_109573efc;
      }
      plVar10 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar6 = plStack_80 + 1;
        do {
          lVar9 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      iVar7 = (int)param_1[1];
      iVar8 = *(int *)((long)param_1 + 0xc);
      iVar3 = 0;
      if (iVar7 != 0) {
        iVar3 = iVar8 / iVar7;
      }
      if (iVar8 == iVar3 * iVar7) {
        plVar10 = (long *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
        piVar11 = (int *)*plVar10;
        piVar2 = (int *)plVar10[1];
        if (piVar11 != piVar2) {
          do {
            if (*piVar11 == 0) {
              func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar11[1] * 0x50 + 0x18,
                                  &uStack_b8);
            }
            piVar11 = piVar11 + 2;
          } while (piVar11 != piVar2);
          iVar8 = *(int *)((long)param_1 + 0xc);
        }
      }
      *(int *)((long)param_1 + 0xc) = iVar8 + 1;
      plVar10 = plStack_90;
      if (plStack_90 == alStack_a8) {
        lVar9 = 0x20;
LAB_109573fc4:
        (**(code **)(*plStack_90 + lVar9))();
      }
      else if (plStack_90 != (long *)0x0) {
        lVar9 = 0x28;
        goto LAB_109573fc4;
      }
      plVar6 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar1 = plStack_b0 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar10 = plVar6;
        }
      }
      iVar7 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar9 = **(long **)(param_2 + 2);
    } while (*(long *)(lVar9 + (long)iVar7 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined4 *)((long)plVar10 + 0xc) = 0;
  return;
}



/* Entry: 109574094; end: 10957409b;  */

void FUN_109574094(long param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 10957409c; end: 1095740e7;  */

long FUN_10957409c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1095740e8; end: 109574177;  */

void FUN_1095740e8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  ulong *puVar2;
  long lVar3;
  ulong unaff_x23;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x48) << 3;
    do {
      unaff_x23 = *puVar2;
      uVar1 = unaff_x23 + 0x28;
      func_0x00010b4bee4c(uVar1,&UNK_10f573f7a,0x1d);
      if ((uVar1 & 1) != 0) goto LAB_109574150;
      lVar3 = lVar3 + -8;
      unaff_x19 = param_2;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  param_2 = unaff_x19;
  func_0x000105688514(&UNK_10f573dd9);
LAB_109574150:
  lVar3 = unaff_x23 + 0x28;
  func_0x00010b4bee4c(lVar3,&UNK_10f573f7a,0x1d);
  if ((int)lVar3 != 0) {
    func_0x000100063660(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 109574178; end: 1095741e7;  */

undefined8 * FUN_109574178(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afc1f8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_109574704();
  }
  return param_1;
}



/* Entry: 1095741e8; end: 109574703;  */

void FUN_1095741e8(long *param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  code *pcStack_1e8;
  int *piStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined **ppuStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined **ppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long alStack_138 [3];
  char cStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  int *piStack_f8;
  int *piStack_f0;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1d0 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_1d8 = alStack_d0;
    pcStack_1e8 = (code *)alStack_138;
    unaff_x20 = 0x18;
    piStack_1e0 = param_2;
    do {
      FUN_109574760(auStack_e0);
      ppuStack_1c8 = &PTR_FUN_110af16c8;
      uStack_1c0 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      while( true ) {
        puVar8 = auStack_e0;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x0) break;
        puVar8 = auStack_e0;
        func_0x000109574af4();
        if (puVar8 == (undefined1 *)0x1) {
          FUN_109576bf0(auStack_e0);
          func_0x000105688514(&UNK_10f56faf5);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109574674);
          (*pcVar7)();
        }
      }
      puVar8 = auStack_e0;
      func_0x0001056853dc(puVar8);
      puVar16 = (undefined4 *)plStack_1d0[1];
      FUN_109557b34(&lStack_168,puVar16,puVar8);
      if (lStack_160 - lStack_168 == 0) {
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
      }
      else {
        uStack_118 = lStack_160 - lStack_168 >> 4;
        uStack_110 = 0;
        if (uStack_118 != 0) {
          uStack_110 = (undefined4)((ulong)(lStack_148 - lStack_150 >> 2) / uStack_118);
        }
        uStack_10c = *puVar16;
        uStack_108 = *(undefined8 *)(puVar16 + 1);
        uStack_100 = 0;
        uStack_ff = *(undefined1 *)(puVar16 + 3);
        pcStack_b0 = FUN_109576b9c;
        ppuStack_a8 = &PTR_FUN_110afc238;
        pcStack_a0 = FUN_109575348;
        FUN_109574c18(&piStack_f8,lStack_168,lStack_150,&uStack_118,&pcStack_b0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        piVar6 = piStack_f0;
        ppuStack_198 = &PTR_FUN_110af16c8;
        uStack_190 = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
        uStack_170 = 0;
        for (piVar1 = piStack_f8; piVar1 != piVar6; piVar1 = piVar1 + 3) {
          puVar9 = &uStack_188;
          func_0x000107c303b0(puVar9,FUN_10935032c);
          *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 1;
          uVar10 = puVar9[6];
          if (uVar10 == 0) {
            uVar10 = puVar9[1];
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            FUN_1093492b0();
            puVar9[6] = uVar10;
          }
          puVar11 = (undefined8 *)(lStack_168 + (long)*piVar1 * 0x10);
          uVar17 = *puVar11;
          uVar18 = puVar11[1];
          *(undefined8 *)(uVar10 + 0x10) = uVar17;
          *(ulong *)(uVar10 + 0x18) =
               CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                        (float)uVar18 - (float)uVar17);
          puVar11 = puVar9 + 3;
          func_0x000107c303b0(puVar11,FUN_10934a22c);
          *(int *)(puVar11 + 3) = piVar1[1];
          *(int *)((long)puVar11 + 0x1c) = piVar1[2];
          uVar10 = puVar11[1];
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(puVar11 + 2,*(long *)(puVar16 + 4) + (long)piVar1[1] * 0x18,uVar10);
          lVar14 = alStack_138[0];
          if (cStack_120 == '\x01') {
            iVar3 = *piVar1;
            *(uint *)(puVar9 + 2) = *(uint *)(puVar9 + 2) | 4;
            uVar10 = puVar9[8];
            if (uVar10 == 0) {
              uVar10 = puVar9[1];
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              FUN_1093616ac();
              puVar9[8] = uVar10;
            }
            lVar14 = lVar14 + (long)iVar3 * 0x60;
            *(undefined4 *)(uVar10 + 0x18) = *(undefined4 *)(lVar14 + 0xc);
            iVar3 = *(int *)(lVar14 + 8);
            *(int *)(uVar10 + 0x1c) = iVar3;
            uVar13 = *(ulong *)(uVar10 + 8);
            if ((uVar13 & 1) != 0) {
              uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar10 + 0x10,*(undefined8 *)(lVar14 + 0x10),
                                (long)*(int *)(lVar14 + 0xc) * (long)iVar3,uVar13);
          }
        }
        param_2 = piStack_1e0;
        if (piStack_f8 != (int *)0x0) {
          __ZdlPv(piStack_f8);
          param_2 = piStack_1e0;
        }
      }
      if (cStack_120 == '\x01') {
        pcStack_b0 = pcStack_1e8;
        FUN_1093702c4(&pcStack_b0);
      }
      if (lStack_150 != 0) {
        lStack_148 = lStack_150;
        __ZdlPv();
      }
      if (lStack_168 != 0) {
        lStack_160 = lStack_168;
        __ZdlPv();
      }
      uVar18 = uStack_1b0;
      uVar17 = uStack_1b8;
      uVar10 = uStack_1c0;
      uVar13 = uStack_1c0;
      if ((uStack_1c0 & 1) != 0) {
        uVar13 = *(ulong *)(uStack_1c0 & 0xfffffffffffffffe);
      }
      uVar15 = uStack_190;
      if ((uStack_190 & 1) != 0) {
        uVar15 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
      }
      if (uVar13 == uVar15) {
        uStack_1c0 = uStack_190;
        uStack_190 = uVar10;
        uStack_1b0 = uStack_180;
        uStack_1b8 = uStack_188;
        uStack_180 = uVar18;
        uStack_188 = uVar17;
      }
      else {
        FUN_10934fff8(&ppuStack_1c8);
        FUN_109350260(&ppuStack_1c8,&ppuStack_198);
      }
      FUN_10934ffa0(&ppuStack_198);
      FUN_109574870(param_2,&ppuStack_1c8);
      FUN_10934ffa0(&ppuStack_1c8);
      param_1 = plStack_b8;
      if (plStack_b8 == plStack_1d8) {
        lVar14 = 0x20;
LAB_1095745a0:
        (**(code **)(*plStack_b8 + lVar14))();
      }
      else if (plStack_b8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_1095745a0;
      }
      plVar12 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar2 = plStack_d8 + 1;
        do {
          lVar14 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar12;
        }
      }
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  FUN_109574bb4(&lStack_168);
  FUN_10934ffa0(&ppuStack_1c8);
  func_0x000109574aa8(auStack_e0);
  plVar12 = param_1;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109574704;
  uStack_210 = unaff_x20;
  plStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  if (plVar12[10] != 0) {
    plVar12[0xb] = plVar12[10];
    __ZdlPv();
  }
  plStack_218 = plVar12 + 5;
  FUN_10955a87c(&plStack_218);
  plStack_218 = plVar12 + 2;
  func_0x000104c607c8(&plStack_218);
  __ZdlPv(plVar12);
  return;
}



/* Entry: 109574704; end: 10957475f;  */

void FUN_109574704(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x28;
  FUN_10955a87c(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  __ZdlPv(param_1);
  return;
}


