/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097fef80; end: 1097ff003;  */

void FUN_1097fef80(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == *(int *)(param_1 + 0x2c)) {
    lVar1 = param_1;
    FUN_1097ff004();
    if ((int)lVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  puVar3 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 0x28);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  uVar4 = *param_4;
  *(undefined8 *)(puVar3 + 4) = param_4[1];
  *(undefined8 *)(puVar3 + 2) = uVar4;
  uVar4 = *param_5;
  *(undefined8 *)(puVar3 + 8) = param_5[1];
  *(undefined8 *)(puVar3 + 6) = uVar4;
  return;
}



/* Entry: 1097ff004; end: 1097ff0b3;  */

undefined8 FUN_1097ff004(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar5 = (long)(int)param_1[0xb] << 2;
  puVar4 = *(undefined4 **)(param_1 + 0xc);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  bVar2 = SUB168(auVar1 * ZEXT816(0x28),8) == 0;
  puVar3 = (undefined4 *)((long)(int)param_1[0xb] * 0xa0);
  if (puVar4 == param_1 + 0xe) {
    if ((puVar3 != (undefined4 *)0x0 && bVar2) && (_malloc(), puVar3 != (undefined4 *)0x0)) {
      _memcpy();
      goto LAB_1097ff088;
    }
  }
  else if ((bVar2) && (_realloc(), puVar3 = puVar4, puVar4 != (undefined4 *)0x0)) {
LAB_1097ff088:
    *(undefined4 **)(param_1 + 0xc) = puVar3;
    param_1[0xb] = (int)uVar5;
    return 1;
  }
  *param_1 = 1;
  return 0;
}



/* Entry: 1097ff0b4; end: 1097ff3af;  */

void FUN_1097ff0b4(undefined8 param_1,long param_2)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  piVar7 = (int *)(param_2 + 0xc);
  lVar10 = -3;
  uVar12 = 0;
  do {
    piVar1 = (int *)(param_2 + uVar12 * 8);
    iVar11 = *piVar7 - piVar1[1];
    if (iVar11 == 0) {
      iVar11 = piVar7[-1] - *piVar1;
    }
    uVar9 = (ulong)((int)lVar10 + 4);
    if (-1 < iVar11) {
      uVar9 = uVar12;
    }
    piVar7 = piVar7 + 2;
    bVar6 = lVar10 != -1;
    lVar10 = lVar10 + 1;
    uVar12 = uVar9;
  } while (bVar6);
  uVar8 = (ulong)((int)uVar9 + 1) & 3;
  uVar12 = (ulong)((int)uVar9 - 1) & 3;
  piVar7 = (int *)(param_2 + uVar12 * 8);
  piVar1 = (int *)(param_2 + uVar8 * 8);
  iVar11 = piVar7[1] - piVar1[1];
  if (iVar11 == 0) {
    iVar11 = *piVar7 - *piVar1;
  }
  uVar4 = uVar8;
  if (-1 < iVar11) {
    uVar4 = uVar12;
    uVar12 = uVar8;
  }
  puVar14 = (ulong *)(param_2 + uVar9 * 8);
  iStack_70 = (int)*puVar14;
  puVar2 = (ulong *)(param_2 + uVar12 * 8);
  puVar3 = (ulong *)(param_2 + (uVar9 & 3 ^ 2) * 8);
  iStack_68 = (int)*puVar2 - iStack_70;
  if (iStack_68 == 0) {
    iVar11 = *(int *)((long)puVar14 + 4);
    iStack_64 = *(int *)((long)puVar2 + 4);
    if (iVar11 == iStack_64) {
      iVar15 = *(int *)((long)puVar3 + 4);
      iStack_68 = (int)*puVar3 - iStack_70;
      iStack_64 = iVar15 - iVar11;
      goto LAB_1097ff1b8;
    }
  }
  else {
    iStack_64 = *(int *)((long)puVar2 + 4);
    iVar11 = *(int *)((long)puVar14 + 4);
  }
  iStack_64 = iStack_64 - iVar11;
  iVar15 = *(int *)((long)puVar3 + 4);
LAB_1097ff1b8:
  puVar13 = (ulong *)(param_2 + uVar4 * 8);
  iVar5 = *(int *)((long)puVar13 + 4);
  iStack_70 = (int)*puVar13 - iStack_70;
  iStack_6c = iVar5 - iVar11;
  piVar7 = &iStack_68;
  FUN_1097f1294(piVar7,&iStack_70);
  uStack_90 = *puVar14;
  puVar14 = &uStack_88;
  uStack_80 = uStack_90;
  if (iVar5 < iVar15) {
    if ((int)piVar7 < 1) {
      uStack_78 = *puVar13;
      uStack_88 = *puVar2;
      FUN_1097ff3b0(param_1,iVar11,uStack_88 >> 0x20,&uStack_80,&uStack_90);
      uStack_90 = *puVar2;
      uStack_88 = *puVar3;
      FUN_1097ff3b0(param_1,uStack_90 >> 0x20,*(int *)((long)puVar13 + 4),&uStack_80,&uStack_90);
      uVar12 = *puVar13;
      puVar13 = puVar3;
      puVar14 = &uStack_78;
      uStack_80 = uVar12;
    }
    else {
      uStack_78 = *puVar2;
      uStack_88 = *puVar13;
      FUN_1097ff3b0(param_1,iVar11,uStack_78 >> 0x20,&uStack_80,&uStack_90);
      uStack_80 = *puVar2;
      uStack_78 = *puVar3;
      FUN_1097ff3b0(param_1,uStack_80 >> 0x20,*(int *)((long)puVar13 + 4),&uStack_80,&uStack_90);
      uVar12 = *puVar13;
      puVar13 = puVar3;
      uStack_90 = uVar12;
    }
  }
  else if ((int)piVar7 < 1) {
    uStack_78 = *puVar13;
    uStack_88 = *puVar2;
    FUN_1097ff3b0(param_1,iVar11,uStack_88 >> 0x20,&uStack_80,&uStack_90);
    uStack_90 = *puVar2;
    uStack_88 = *puVar3;
    FUN_1097ff3b0(param_1,uStack_90 >> 0x20,uStack_88 >> 0x20,&uStack_80,&uStack_90);
    uVar12 = *puVar3;
    uStack_90 = uVar12;
  }
  else {
    uStack_78 = *puVar2;
    uStack_88 = *puVar13;
    FUN_1097ff3b0(param_1,iVar11,uStack_78 >> 0x20,&uStack_80,&uStack_90);
    uStack_80 = *puVar2;
    uStack_78 = *puVar3;
    FUN_1097ff3b0(param_1,uStack_80 >> 0x20,uStack_78 >> 0x20,&uStack_80,&uStack_90);
    uVar12 = *puVar3;
    puVar14 = &uStack_78;
    uStack_80 = uVar12;
  }
  uVar9 = *puVar13;
  *puVar14 = uVar9;
  FUN_1097ff3b0(param_1,uVar12 >> 0x20,uVar9 >> 0x20,&uStack_80,&uStack_90);
  return;
}



/* Entry: 1097ff3b0; end: 1097ff4c3;  */

void FUN_1097ff3b0(long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar13 = param_4[1];
    uVar12 = *param_4;
    uVar11 = param_5[1];
    uVar10 = *param_5;
    iVar5 = *(int *)(param_1 + 0xc);
    iVar8 = (int)uVar12;
    iVar14 = (int)uVar13;
    if (iVar8 < iVar5 || iVar14 < iVar5) {
      iVar1 = *(int *)(param_1 + 4);
      iVar9 = (int)uVar10;
      iVar7 = (int)uVar11;
      if ((((iVar1 < iVar9) || (iVar1 < iVar7)) &&
          (iVar2 = *(int *)(param_1 + 0x10), param_2 < iVar2)) &&
         (iVar3 = *(int *)(param_1 + 8), iVar3 < param_3)) {
        if (iVar3 <= param_2) {
          iVar3 = param_2;
        }
        if (param_3 <= iVar2) {
          iVar2 = param_3;
        }
        if ((iVar8 <= iVar1) && (iVar14 <= iVar1)) {
          uVar13 = CONCAT44((int)((ulong)uVar13 >> 0x20),iVar1);
          uVar12 = CONCAT44((int)((ulong)uVar12 >> 0x20),iVar1);
          iVar8 = iVar1;
          iVar14 = iVar1;
        }
        if ((iVar5 <= iVar9) && (iVar5 <= iVar7)) {
          uVar11 = CONCAT44((int)((ulong)uVar11 >> 0x20),iVar5);
          uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),iVar5);
          iVar9 = iVar5;
          iVar7 = iVar5;
        }
        if ((iVar3 < iVar2) &&
           ((((iVar8 < iVar9 || ((int)((ulong)uVar10 >> 0x20) != (int)((ulong)uVar12 >> 0x20))) ||
             (iVar14 < iVar7)) || ((int)((ulong)uVar11 >> 0x20) != (int)((ulong)uVar13 >> 0x20)))))
        {
          FUN_1097fef80();
        }
      }
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == *(int *)(param_1 + 0x2c)) {
    lVar4 = param_1;
    FUN_1097ff004();
    if ((int)lVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar5 + 1;
  piVar6 = (int *)(*(long *)(param_1 + 0x30) + (long)iVar5 * 0x28);
  *piVar6 = param_2;
  piVar6[1] = param_3;
  uVar10 = *param_4;
  *(undefined8 *)(piVar6 + 4) = param_4[1];
  *(undefined8 *)(piVar6 + 2) = uVar10;
  uVar10 = *param_5;
  *(undefined8 *)(piVar6 + 8) = param_5[1];
  *(undefined8 *)(piVar6 + 6) = uVar10;
  return;
}



/* Entry: 1097ff4c4; end: 1097ff77f;  */

undefined4 * FUN_1097ff4c4(undefined4 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 8;
  if (*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc)) {
    lVar2 = 0;
  }
  lVar3 = 0;
  if (*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc)) {
    lVar3 = 8;
  }
  uStack_80 = *(undefined8 *)(param_3 + lVar3);
  uStack_88 = *(undefined8 *)(param_3 + lVar2);
  lVar2 = 0x18;
  if (*(int *)(param_3 + 0x14) <= *(int *)(param_3 + 0x1c)) {
    lVar2 = 0x10;
  }
  lVar3 = 0x10;
  if (*(int *)(param_3 + 0x14) <= *(int *)(param_3 + 0x1c)) {
    lVar3 = 0x18;
  }
  uStack_70 = *(undefined8 *)(param_3 + lVar3);
  uStack_78 = *(undefined8 *)(param_3 + lVar2);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = *(uint *)(param_2 + 0x14);
  puVar12 = &uStack_78;
  if (uVar4 == uVar5) {
    uVar6 = *(uint *)(param_2 + 4);
    uVar5 = uVar4;
    if ((int)uVar4 <= (int)uVar6) {
      uVar5 = uVar6;
    }
    if ((int)uVar6 <= (int)uVar4) {
      uVar4 = uVar6;
    }
    uVar19 = (ulong)uVar4;
    puVar13 = &uStack_88;
    FUN_1097d8ea8(puVar13,&uStack_78,uVar19);
    puVar15 = &uStack_88;
    if ((int)puVar13 < 1) {
      puVar12 = &uStack_88;
      puVar15 = &uStack_78;
    }
  }
  else {
    lVar2 = 0x10;
    if ((int)uVar4 <= (int)uVar5) {
      lVar2 = 8;
    }
    lVar3 = 8;
    if ((int)uVar4 <= (int)uVar5) {
      lVar3 = 0x10;
    }
    uStack_60 = *(undefined8 *)(param_2 + lVar3);
    uStack_68 = *(undefined8 *)(param_2 + lVar2);
    uVar6 = *(uint *)(param_2 + 4);
    uVar9 = uVar4 - uVar6;
    uVar10 = uVar5 - uVar6;
    puVar15 = &uStack_68;
    if ((int)(uVar9 ^ uVar10) < 0) {
      uVar5 = uVar4;
      if ((int)uVar4 <= (int)uVar6) {
        uVar5 = uVar6;
      }
      if ((int)uVar6 <= (int)uVar4) {
        uVar4 = uVar6;
      }
      puVar12 = &uStack_88;
      FUN_1097d8ea8(puVar12,&uStack_68,uVar4);
      puVar15 = &uStack_88;
      puVar13 = &uStack_68;
      if ((int)puVar12 < 1) {
        puVar15 = &uStack_68;
        puVar13 = &uStack_88;
      }
      FUN_1097ff3b0(param_1,uVar4,uVar5,puVar13,puVar15);
      uVar6 = *(uint *)(param_2 + 4);
      uVar4 = *(uint *)(param_2 + 0x14);
      uVar5 = uVar4;
      if ((int)uVar4 <= (int)uVar6) {
        uVar5 = uVar6;
      }
      if ((int)uVar6 <= (int)uVar4) {
        uVar4 = uVar6;
      }
      uVar19 = (ulong)uVar4;
      puVar13 = &uStack_78;
      FUN_1097d8ea8(&uStack_78,&uStack_68,uVar19);
      puVar12 = &uStack_68;
      puVar15 = &uStack_78;
      if ((int)puVar13 < 1) {
        puVar12 = &uStack_78;
        puVar15 = &uStack_68;
      }
    }
    else {
      uVar1 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar1 = uVar9;
      }
      uVar9 = -uVar10;
      if (-1 < (int)uVar10) {
        uVar9 = uVar10;
      }
      if (uVar1 < uVar9) {
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)uVar6) {
          uVar5 = uVar6;
        }
        if ((int)uVar6 <= (int)uVar4) {
          uVar4 = uVar6;
        }
        puVar13 = &uStack_88;
        FUN_1097d8ea8(puVar13,&uStack_78,uVar4);
        puVar14 = &uStack_88;
        puVar11 = &uStack_78;
        if ((int)puVar13 < 1) {
          puVar14 = &uStack_78;
          puVar11 = &uStack_88;
        }
        FUN_1097ff3b0(param_1,uVar4,uVar5,puVar11,puVar14);
        uVar6 = *(uint *)(param_2 + 0xc);
        uVar4 = *(uint *)(param_2 + 0x14);
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)uVar6) {
          uVar5 = uVar6;
        }
        if ((int)uVar6 <= (int)uVar4) {
          uVar4 = uVar6;
        }
        uVar19 = (ulong)uVar4;
        puVar13 = &uStack_68;
        FUN_1097d8ea8(&uStack_68,&uStack_78,uVar19);
        if ((int)puVar13 < 1) {
          puVar12 = &uStack_68;
          puVar15 = &uStack_78;
        }
      }
      else {
        uVar4 = uVar5;
        if ((int)uVar5 <= (int)uVar6) {
          uVar4 = uVar6;
        }
        if ((int)uVar6 <= (int)uVar5) {
          uVar5 = uVar6;
        }
        puVar14 = &uStack_78;
        FUN_1097d8ea8(&uStack_78,&uStack_88,uVar5);
        puVar13 = &uStack_88;
        if ((int)puVar14 < 1) {
          puVar12 = &uStack_88;
          puVar13 = &uStack_78;
        }
        FUN_1097ff3b0(param_1,uVar5,uVar4,puVar13,puVar12);
        uVar6 = *(uint *)(param_2 + 0xc);
        uVar4 = *(uint *)(param_2 + 0x14);
        uVar5 = uVar4;
        if ((int)uVar4 <= (int)uVar6) {
          uVar5 = uVar6;
        }
        if ((int)uVar6 <= (int)uVar4) {
          uVar4 = uVar6;
        }
        uVar19 = (ulong)uVar4;
        puVar13 = &uStack_68;
        FUN_1097d8ea8(&uStack_68,&uStack_88,uVar19);
        puVar12 = &uStack_88;
        if ((int)puVar13 < 1) {
          puVar12 = &uStack_68;
          puVar15 = &uStack_88;
        }
      }
    }
  }
  FUN_1097ff3b0(param_1,uVar19,uVar5,puVar12,puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    *param_1 = 0;
    *(undefined8 *)(param_1 + 10) = 0x1000000000;
    *(undefined4 **)(param_1 + 0xc) = param_1 + 0xe;
    param_1[8] = 0;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf0 | 1;
    do {
      if (*(int *)(uVar19 + 0x24) <= (int)param_1[0xb]) {
        param_1[10] = *(int *)(uVar19 + 0x24);
        bVar8 = *(byte *)(param_1 + 9);
        *(byte *)(param_1 + 9) = bVar8 | 0xc;
        *(byte *)(param_1 + 9) = bVar8 & 0xfe | 0xc | *(byte *)(uVar19 + 0x28) & 1;
        puVar16 = *(undefined4 **)(param_1 + 0xc);
        plVar17 = (long *)(uVar19 + 0x30);
        do {
          if (0 < (int)plVar17[2]) {
            iVar18 = 0;
            puVar12 = (undefined8 *)(plVar17[1] + 8);
            do {
              uVar7 = *(undefined4 *)((long)puVar12 + 4);
              *puVar16 = *(undefined4 *)((long)puVar12 + -4);
              puVar16[1] = uVar7;
              *(undefined8 *)(puVar16 + 2) = puVar12[-1];
              puVar16[4] = *(undefined4 *)(puVar12 + -1);
              uVar20 = NEON_rev64(*puVar12,4);
              *(undefined8 *)(puVar16 + 5) = uVar20;
              puVar16[7] = *(undefined4 *)((long)puVar12 + -4);
              *(undefined8 *)(puVar16 + 8) = *puVar12;
              puVar16 = puVar16 + 10;
              iVar18 = iVar18 + 1;
              puVar12 = puVar12 + 2;
            } while (iVar18 < (int)plVar17[2]);
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
        return (undefined4 *)0x0;
      }
      puVar16 = param_1;
      FUN_1097ff004();
    } while ((int)puVar16 != 0);
    if (*(undefined4 **)(param_1 + 0xc) != param_1 + 0xe) {
      _free();
    }
    return (undefined4 *)0x1;
  }
  return param_1;
}



/* Entry: 1097ff780; end: 1097ff983;  */

undefined8 FUN_1097ff780(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 10) = 0x1000000000;
  *(undefined4 **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf0 | 1;
  do {
    if (*(int *)(param_2 + 0x24) <= (int)param_1[0xb]) {
      param_1[10] = *(int *)(param_2 + 0x24);
      bVar2 = *(byte *)(param_1 + 9);
      *(byte *)(param_1 + 9) = bVar2 | 0xc;
      *(byte *)(param_1 + 9) = bVar2 & 0xfe | 0xc | *(byte *)(param_2 + 0x28) & 1;
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      plVar4 = (long *)(param_2 + 0x30);
      do {
        if (0 < (int)plVar4[2]) {
          iVar5 = 0;
          puVar6 = (undefined8 *)(plVar4[1] + 8);
          do {
            uVar1 = *(undefined4 *)((long)puVar6 + 4);
            *puVar3 = *(undefined4 *)((long)puVar6 + -4);
            puVar3[1] = uVar1;
            *(undefined8 *)(puVar3 + 2) = puVar6[-1];
            puVar3[4] = *(undefined4 *)(puVar6 + -1);
            uVar7 = NEON_rev64(*puVar6,4);
            *(undefined8 *)(puVar3 + 5) = uVar7;
            puVar3[7] = *(undefined4 *)((long)puVar6 + -4);
            *(undefined8 *)(puVar3 + 8) = *puVar6;
            puVar3 = puVar3 + 10;
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 2;
          } while (iVar5 < (int)plVar4[2]);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      return 0;
    }
    puVar3 = param_1;
    FUN_1097ff004();
  } while ((int)puVar3 != 0);
  if (*(undefined4 **)(param_1 + 0xc) != param_1 + 0xe) {
    _free();
  }
  return 1;
}



/* Entry: 1097ff984; end: 1097ffb07;  */

void FUN_1097ff984(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0x8000000080000000;
    *param_2 = 0x7fffffff7fffffff;
    if (0 < (int)uVar1) {
      piVar7 = (int *)(*(long *)(param_1 + 0x30) + 0x14);
      puVar8 = (uint *)0x7fffffff;
      puVar9 = (uint *)0x80000000;
      iVar10 = -0x80000000;
      iVar11 = 0x7fffffff;
      do {
        iVar2 = piVar7[-5];
        if (iVar2 < iVar11) {
          *(int *)((long)param_2 + 4) = iVar2;
          iVar11 = iVar2;
        }
        iVar3 = piVar7[-4];
        if (iVar10 < iVar3) {
          *(int *)((long)param_2 + 0xc) = iVar3;
          iVar10 = iVar3;
        }
        puVar5 = (uint *)(piVar7 + -3);
        puVar4 = (uint *)(ulong)*puVar5;
        if (((int)*puVar5 < (int)puVar8) &&
           ((iVar2 == piVar7[-2] ||
            (puVar4 = puVar5, FUN_1097ffb08(puVar5,iVar2), (int)puVar4 < (int)puVar8)))) {
          *(int *)param_2 = (int)puVar4;
          puVar8 = puVar4;
        }
        if ((piVar7[-1] < (int)puVar8) &&
           ((puVar4 = (uint *)(ulong)(uint)piVar7[-1], iVar3 == *piVar7 ||
            (FUN_1097ffb08(puVar5,iVar3), puVar4 = puVar5, (int)puVar5 < (int)puVar8)))) {
          *(int *)param_2 = (int)puVar4;
          puVar8 = puVar4;
        }
        puVar5 = (uint *)(piVar7 + 1);
        puVar4 = (uint *)(ulong)*puVar5;
        if (((int)puVar9 < (int)*puVar5) &&
           ((iVar2 == piVar7[2] ||
            (puVar4 = puVar5, FUN_1097ffb08(puVar5,iVar2), (int)puVar9 < (int)puVar4)))) {
          *(int *)(param_2 + 1) = (int)puVar4;
          puVar9 = puVar4;
        }
        if (((int)puVar9 < piVar7[3]) &&
           ((puVar4 = (uint *)(ulong)(uint)piVar7[3], iVar3 == piVar7[4] ||
            (FUN_1097ffb08(puVar5,iVar3), puVar4 = puVar5, (int)puVar9 < (int)puVar5)))) {
          *(int *)(param_2 + 1) = (int)puVar4;
          puVar9 = puVar4;
        }
        piVar7 = piVar7 + 10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



/* Entry: 1097ffb08; end: 1097ffc8b;  */

int FUN_1097ffb08(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1[1];
  if (iVar3 == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_1[3] == param_2) {
      return param_1[2];
    }
    iVar1 = *param_1;
    iVar4 = param_1[3] - param_1[1];
    if (iVar4 != 0) {
      iVar2 = 0;
      if ((long)iVar4 != 0) {
        iVar2 = (int)((((long)param_1[2] - (long)iVar1) * (long)iVar3) / (long)iVar4);
      }
      return iVar1 + iVar2;
    }
  }
  return iVar1;
}



/* Entry: 1097ffc8c; end: 1097ffe1b;  */

undefined8 * FUN_1097ffc8c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  iVar12 = *(int *)(param_1 + 0x28);
  if (iVar12 < 1) {
    return (undefined8 *)0x0;
  }
  lVar13 = 0;
  lVar14 = 0x24;
  do {
    piVar1 = (int *)(*(long *)(param_1 + 0x30) + lVar14);
    iVar2 = piVar1[-9];
    iVar5 = piVar1[-8];
    if (iVar2 != iVar5) {
      iVar3 = piVar1[-7];
      iVar6 = piVar1[-6];
      iVar4 = piVar1[-5];
      iVar7 = piVar1[-4];
      iVar12 = iVar3;
      if (iVar6 != iVar2) {
        iVar12 = 0;
        if ((long)(iVar6 - iVar7) != 0) {
          iVar12 = (int)(((long)(iVar2 - iVar7) * (long)(iVar3 - iVar4)) / (long)(iVar6 - iVar7));
        }
        iVar12 = iVar4 + iVar12;
      }
      if (iVar5 - iVar7 != 0) {
        iVar8 = 0;
        if ((long)(iVar6 - iVar7) != 0) {
          iVar8 = (int)(((long)(iVar5 - iVar7) * (long)(iVar3 - iVar4)) / (long)(iVar6 - iVar7));
        }
        iVar4 = iVar4 + iVar8;
      }
      iVar7 = piVar1[-3];
      iVar8 = piVar1[-2];
      iVar6 = piVar1[-1];
      iVar9 = *piVar1;
      iVar3 = iVar7;
      if (iVar8 != iVar2) {
        iVar3 = 0;
        if ((long)(iVar8 - iVar9) != 0) {
          iVar3 = (int)(((long)(iVar2 - iVar9) * (long)(iVar7 - iVar6)) / (long)(iVar8 - iVar9));
        }
        iVar3 = iVar6 + iVar3;
      }
      if (iVar5 - iVar9 != 0) {
        iVar10 = 0;
        if ((long)(iVar8 - iVar9) != 0) {
          iVar10 = (int)(((long)(iVar5 - iVar9) * (long)(iVar7 - iVar6)) / (long)(iVar8 - iVar9));
        }
        iVar6 = iVar6 + iVar10;
      }
      FUN_1097dc6f0(param_2);
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 1;
      *(int *)(param_2 + 1) = iVar12;
      *(int *)((long)param_2 + 0xc) = iVar2;
      *param_2 = param_2[1];
      puVar11 = param_2;
      func_0x0001097dc7a0(param_2,iVar3,iVar2);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      puVar11 = param_2;
      func_0x0001097dc7a0(param_2,iVar6,iVar5);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      puVar11 = param_2;
      func_0x0001097dc7a0(param_2,iVar4,iVar5);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      puVar11 = param_2;
      FUN_1097dcd9c();
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      iVar12 = *(int *)(param_1 + 0x28);
    }
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 0x28;
    if (iVar12 <= lVar13) {
      return (undefined8 *)0x0;
    }
  } while( true );
}



/* Entry: 1097ffe1c; end: 1097ffeab;  */

undefined8 * FUN_1097ffe1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [16];
  code *pcStack_38;
  undefined8 uStack_28;
  
  pcStack_38 = FUN_1097ffeac;
  uStack_28 = param_4;
  func_0x0001097ed40c(param_1 + 4,&uStack_58);
  puVar1 = (undefined8 *)(ulong)uStack_58;
  FUN_1097daf08(puVar1,iStack_54,iStack_50 + uStack_58,iStack_4c + iStack_54,param_2);
  puVar2 = puVar1;
  FUN_1097dad18();
  if ((int)puVar2 == 0) {
    puVar2 = puVar1;
    (*(code *)puVar1[1])(puVar1,auStack_48);
  }
  (*(code *)*puVar1)(puVar1);
  return puVar2;
}



/* Entry: 1097ffeac; end: 109800203;  */

undefined8 FUN_1097ffeac(long param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if (param_5 != 0) {
    iVar1 = param_2 << 8;
    iVar2 = (param_3 + param_2) * 0x100;
    do {
      if ((char)param_4[1] != '\0') {
        iStack_50 = *param_4 << 8;
        iStack_60 = param_4[2] << 8;
        iStack_5c = iVar1;
        iStack_58 = iStack_60;
        iStack_54 = iVar2;
        iStack_4c = iVar1;
        iStack_48 = iStack_50;
        iStack_44 = iVar2;
        FUN_1097fef80(*(undefined8 *)(param_1 + 0x20),iVar1,iVar2,&iStack_50,&iStack_60);
      }
      param_5 = param_5 - 1;
      param_4 = param_4 + 2;
    } while (1 < param_5);
  }
  return 0;
}



/* Entry: 109800204; end: 109800207;  */

undefined8 FUN_109800204(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar2 = param_1;
  FUN_1097ce268();
  puVar3 = puVar2;
  func_0x0001097ce2f0();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_1097cf084(puVar2);
    return 1;
  }
  uVar4 = 400;
  if (param_1[0x10] != 0) {
    uVar4 = 700;
  }
  *puVar3 = param_1[0xf];
  puVar3[1] = uVar4;
  pcVar6 = *(char **)(param_1 + 0xc);
  pcVar7 = pcVar6;
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    iVar5 = (int)pcVar7;
    if ((cVar1 == ' ') || (cVar1 == ':')) {
      if (pcVar6 < pcVar8) {
        FUN_1097ced04(puVar3,pcVar6,iVar5 - (int)pcVar6);
      }
      pcVar6 = pcVar8 + 1;
    }
    else if (cVar1 == '\0') {
      if (pcVar6 < pcVar8) {
        FUN_1097ced04(puVar3,pcVar6,iVar5 - (int)pcVar6);
      }
      *param_2 = puVar2;
      return 0;
    }
    pcVar8 = pcVar8 + 1;
    pcVar7 = (char *)(ulong)(iVar5 + 1);
  } while( true );
}



/* Entry: 109800208; end: 10980047f;  */

ulong FUN_109800208(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *in_x4;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double adStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dStack_b0 = 0.0;
  uStack_98 = 0;
  dStack_b8 = 1.0;
  auVar6 = NEON_fmov(0x3ff0000000000000,8);
  *(undefined4 *)(param_1 + 0x30) = 1;
  uVar1 = 1;
  uStack_a8 = auVar6._0_8_;
  uStack_a0 = auVar6._8_8_;
  _calloc(1,0x2c8);
  if (uVar1 == 0) {
    return 1;
  }
  uVar4 = uVar1;
  func_0x0001097eeeb4();
  if ((int)uVar4 != 0) goto LAB_109800308;
  *(undefined8 *)(uVar1 + 0x2b8) = 0;
  puVar2 = &UNK_10dffcd48;
  func_0x0001097e44ac();
  *(undefined4 *)(puVar2 + 0x40) = 1;
  *(undefined **)(uVar1 + 0x2b0) = puVar2;
  *(long *)(uVar1 + 0x2a8) = auVar6._8_8_;
  *(long *)(uVar1 + 0x2a0) = auVar6._0_8_;
  *(undefined8 *)(uVar1 + 0x268) = *(undefined8 *)(uVar1 + 0x110);
  *(undefined8 *)(uVar1 + 0x260) = *(undefined8 *)(uVar1 + 0x108);
  *(undefined8 *)(uVar1 + 0x278) = *(undefined8 *)(uVar1 + 0x120);
  *(undefined8 *)(uVar1 + 0x270) = *(undefined8 *)(uVar1 + 0x118);
  *(undefined8 *)(uVar1 + 0x288) = *(undefined8 *)(uVar1 + 0x130);
  *(undefined8 *)(uVar1 + 0x280) = *(undefined8 *)(uVar1 + 0x128);
  uVar4 = uVar1 + 0x260;
  FUN_1097d96d4(uVar4,&dStack_c0,&dStack_c8,1);
  if ((int)uVar4 == 0) {
    dVar5 = 1.0;
    if (dStack_c0 != 0.0) {
      dVar5 = dStack_c0;
    }
    dVar7 = 1.0;
    if (dStack_c8 != 0.0) {
      dVar7 = dStack_c8;
    }
    *(double *)(uVar1 + 0x2a0) = dVar5;
    *(double *)(uVar1 + 0x2a8) = dVar7;
    adStack_90[0] = 1.0 / (dVar5 * 0.0009765625);
    adStack_90[1] = 0.0;
    adStack_90[2] = 0.0;
    adStack_90[3] = 1.0 / (dVar7 * 0.0009765625);
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x0001097d92b4(uVar1 + 0x260,adStack_90,uVar1 + 0x260);
    *(double *)(uVar1 + 0x290) = dVar5 * 0.0009765625;
    *(double *)(uVar1 + 0x298) = dVar7 * 0.0009765625;
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_109800434:
      uVar4 = uVar1;
      func_0x0001097ef5bc(uVar1,&dStack_b8);
      if ((int)uVar4 == 0) {
        *(undefined8 *)(uVar1 + 0x230) = 0;
        *(double *)(uVar1 + 0x238) = -dStack_b8;
        *(undefined8 *)(uVar1 + 0x240) = 0;
        *(double *)(uVar1 + 0x248) = dStack_b8 + dStack_b0;
        *(undefined8 *)(uVar1 + 0x250) = uStack_a0;
        *(undefined8 *)(uVar1 + 600) = 0;
        *in_x4 = uVar1;
        return uVar4;
      }
    }
    else {
      _pthread_mutex_lock(uVar1 + 400);
      uVar4 = uVar1;
      func_0x0001097eedec();
      if ((int)uVar4 == 0) {
        uVar4 = uVar1;
        FUN_1098006a8(uVar1,0,0);
        uVar3 = uVar1;
        func_0x000109800738(uVar1,uVar4,0);
        FUN_1097f61ac(uVar4);
        uVar4 = uVar1;
        (**(code **)(param_1 + 0x38))(uVar1,uVar3,&dStack_b8);
        if (((int)uVar4 == 0x21) || ((int)uVar4 == 0)) {
          uVar4 = (ulong)*(uint *)(uVar3 + 4);
        }
        FUN_1098010d0(uVar3);
        func_0x0001097ef21c(uVar1);
        _pthread_mutex_unlock(uVar1 + 400);
        if ((int)uVar4 == 0) goto LAB_109800434;
      }
      else {
        _pthread_mutex_unlock(uVar1 + 400);
      }
    }
  }
  _pthread_mutex_unlock(0x1132e0348);
  func_0x0001097ef168(uVar1);
  _pthread_mutex_lock(0x1132e0348);
LAB_109800308:
  _free(uVar1);
  return uVar4;
}



/* Entry: 109800480; end: 1098006a7;  */

void FUN_109800480(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  if (((*(undefined **)(param_1 + 0x28) == &UNK_110b11ca8) ||
      (lVar1 = param_1, FUN_1097cefdc(param_1,0x19), (int)lVar1 == 0)) &&
     ((*(int *)(param_1 + 0x30) == 0 ||
      (lVar1 = param_1, FUN_1097cefdc(param_1,0x1a), (int)lVar1 == 0)))) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
  }
  return;
}



/* Entry: 1098006a8; end: 1098007f3;  */

/* WARNING: Removing unreachable block (ram,0x0001097ea974) */

undefined * FUN_1098006a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(long *)(param_1 + 0x2b8) != 0) {
    FUN_1097e4880();
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (param_3 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0x3ff0000000000000;
    FUN_1097cb1e0(&uStack_58);
    param_3 = &uStack_58;
  }
  func_0x0001097e44ac();
  *(undefined8 **)(param_1 + 0x2b8) = param_3;
  puVar1 = (undefined *)0x1;
  _calloc(1,600);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_10dffecb8;
  }
  else {
    FUN_1097f6418();
    *(undefined4 *)(puVar1 + 0x1a0) = 1;
    *(undefined8 *)(puVar1 + 0x1a8) = 0;
    *(undefined4 *)(puVar1 + 0x1b0) = 8;
    *(undefined8 *)(puVar1 + 0x1b8) = 0;
    *(undefined8 *)(puVar1 + 0x1c0) = 0;
    puVar1[0x30] = puVar1[0x30] | 4;
    *(undefined8 *)(puVar1 + 0x1f0) = 0;
    *(undefined8 *)(puVar1 + 0x1f8) = 0;
    *(undefined8 *)(puVar1 + 0x200) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x1d0) = 0;
    *(undefined8 *)(puVar1 + 0x1c8) = 0x100000000;
    *(undefined4 *)(puVar1 + 0x1d8) = 0;
    *(undefined8 *)(puVar1 + 0x208) = 0x32aaaba7;
    *(undefined8 *)(puVar1 + 0x218) = 0;
    *(undefined8 *)(puVar1 + 0x210) = 0;
    *(undefined8 *)(puVar1 + 0x228) = 0;
    *(undefined8 *)(puVar1 + 0x220) = 0;
    *(undefined8 *)(puVar1 + 0x238) = 0;
    *(undefined8 *)(puVar1 + 0x230) = 0;
    *(undefined8 *)(puVar1 + 0x240) = 0;
    *(undefined **)(puVar1 + 0x248) = puVar1 + 0x248;
    *(undefined **)(puVar1 + 0x250) = puVar1 + 0x248;
  }
  return puVar1;
}



/* Entry: 1098007f4; end: 10980082f;  */

void FUN_1098007f4(long param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(long *)(param_1 + 0x2b8) != 0) {
    FUN_1097e4880();
  }
  piVar2 = *(int **)(param_1 + 0x2b0);
  if (piVar2 != (int *)0x0) {
    if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
      _pthread_mutex_lock(0x1132e0448);
      iVar1 = *piVar2;
      *piVar2 = iVar1 + -1;
      _pthread_mutex_unlock(0x1132e0448);
      if (iVar1 + -1 == 0) {
        func_0x0001097e434c(piVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(piVar2);
        return;
      }
    }
    return;
  }
  return;
}



/* Entry: 109800830; end: 109800c13;  */

ulong * FUN_109800830(ulong *param_1,ulong *param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_90 [16];
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if (((param_3 >> 3 & 1) == 0) && (puVar2 = param_1, param_2[0x12] != 0))
  goto joined_r0x000109800ba0;
  uVar6 = param_1[6];
  dStack_80 = (double)param_1[0x46];
  dStack_78 = (double)param_1[0x47];
  dStack_70 = (double)param_1[0x48];
  dStack_68 = (double)param_1[0x49];
  dStack_60 = (double)param_1[0x4a];
  dStack_58 = (double)param_1[0x4b];
  puVar2 = param_1;
  if (*(long *)(uVar6 + 0x40) == 0) {
    if (*(long *)(uVar6 + 0x48) == 0) {
      return (ulong *)0x21;
    }
    if (((((double)param_1[0x1b] != 0.0) || ((double)param_1[0x1d] != 0.0)) ||
        ((double)param_1[0x1c] != 0.0)) || ((double)param_1[0x1e] != 0.0)) goto LAB_109800a3c;
LAB_109800930:
    FUN_1098006a8(param_1,0,param_4);
    uVar4 = 0;
  }
  else {
    if ((((double)param_1[0x1b] == 0.0) && ((double)param_1[0x1d] == 0.0)) &&
       (((double)param_1[0x1c] == 0.0 && ((double)param_1[0x1e] == 0.0)))) goto LAB_109800930;
    if ((int)param_1[0x17] == 1) {
      if (*(long *)(uVar6 + 0x48) == 0) {
        return (ulong *)0x21;
      }
LAB_109800a3c:
      puVar2 = param_1;
      FUN_1098006a8(param_1,0,param_4);
      uVar7 = NEON_ushl(CONCAT44((int)*param_2,(int)*param_2),0xffffffe6ffffffe8,4);
      auVar9._0_8_ = uVar7 & 0xffffff03;
      auVar9._8_8_ = (uVar7 & 0xffffff03ffffff03) >> 0x20;
      auVar9 = NEON_ucvtf(auVar9,8);
      auVar12 = NEON_fmov(0x3fd0000000000000,8);
      puVar2[0x12] = (ulong)(auVar9._8_8_ * auVar12._8_8_);
      puVar2[0x11] = (ulong)(auVar9._0_8_ * auVar12._0_8_);
      puVar3 = param_1;
      func_0x000109800738(param_1,puVar2,0);
      puVar5 = param_1;
      (**(code **)(uVar6 + 0x48))(param_1,*param_2 & 0xffffff,puVar3,&dStack_80);
      if ((int)puVar5 == 0) {
        puVar5 = (ulong *)(ulong)*(uint *)((long)puVar3 + 4);
        *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] & 0xf7 | 4;
      }
      FUN_1098010d0(puVar3);
      bVar1 = false;
    }
    else {
      FUN_1098006a8(param_1,1,param_4);
      puVar3 = param_1;
      func_0x000109800738(param_1,puVar2,1);
      puVar5 = param_1;
      (**(code **)(uVar6 + 0x40))(param_1,*param_2 & 0xffffff,puVar3,&dStack_80);
      if ((int)puVar5 == 0) {
        puVar5 = (ulong *)(ulong)*(uint *)((long)puVar3 + 4);
        *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] | 0xc;
      }
      FUN_1098010d0(puVar3);
      if ((int)param_1[0x58] == 0) {
        bVar1 = *(int *)((long)param_1 + 0x2c4) != 0;
      }
      else {
        bVar1 = true;
      }
      if ((int)puVar5 == 0x21) {
        if (*(long *)(uVar6 + 0x48) == 0) {
          puVar5 = (ulong *)0x21;
          goto joined_r0x000109800ad4;
        }
        if (puVar2 != (ulong *)0x0) {
          FUN_1097f61ac(puVar2);
        }
        goto LAB_109800a3c;
      }
    }
    if ((int)puVar5 != 0) {
joined_r0x000109800ad4:
      if (puVar2 != (ulong *)0x0) {
        FUN_1097f61ac(puVar2);
        return puVar5;
      }
      return puVar5;
    }
    uVar4 = 0;
    if (bVar1) {
      uVar4 = param_4;
    }
  }
  FUN_1097f0b20(param_2,param_1,puVar2,uVar4);
  if (dStack_70 == 0.0) {
    FUN_1097eb828(puVar2,auStack_90,param_1 + 0x4c);
    if ((int)puVar2 != 0) {
      return puVar2;
    }
    auVar12._0_8_ = (long)(int)auStack_90._0_8_;
    auVar12._8_8_ = (long)SUB84(auStack_90._0_8_,4);
    auVar9 = NEON_scvtf(auVar12,8);
    dVar8 = auVar9._0_8_ * 0.00390625;
    dVar11 = auVar9._8_8_ * 0.00390625;
    auVar13._0_8_ = (long)(int)auStack_90._8_8_;
    auVar13._8_8_ = (long)SUB84(auStack_90._8_8_,4);
    auVar9 = NEON_scvtf(auVar13,8);
    dStack_80 = dVar8 * (double)param_1[0x52];
    dStack_78 = dVar11 * (double)param_1[0x53];
    dStack_70 = (double)param_1[0x52] * (auVar9._0_8_ * 0.00390625 - dVar8);
    dStack_68 = (double)param_1[0x53] * (auVar9._8_8_ * 0.00390625 - dVar11);
  }
  if ((int)param_1[0x15] != 1) {
    auVar9 = NEON_fmov(0x3fe0000000000000,8);
    auVar10._0_8_ =
         (long)(int)(long)(double)(long)(dStack_60 / (double)param_1[0x54] + auVar9._0_8_);
    auVar10._8_8_ =
         (long)(int)(long)(double)(long)(dStack_58 / (double)param_1[0x55] + auVar9._8_8_);
    auVar9 = NEON_scvtf(auVar10,8);
    dStack_60 = (double)param_1[0x54] * auVar9._0_8_;
    dStack_58 = (double)param_1[0x55] * auVar9._8_8_;
  }
  puVar2 = param_2;
  FUN_1097f099c(param_2,param_1,&dStack_80);
joined_r0x000109800ba0:
  if ((param_3 >> 4 & 1) != 0) {
    if (((byte)param_2[0x1d] >> 3 & 1) == 0) {
      return (ulong *)0x64;
    }
    puVar2 = param_1;
    FUN_109800d5c(param_1,param_2,0x10,param_4);
    if ((int)puVar2 != 0) {
      return puVar2;
    }
  }
  if (((param_3 >> 1 & 1) == 0) ||
     (FUN_109800d5c(param_1,param_2,2,0), puVar2 = param_1, (int)param_1 == 0)) {
    if ((param_3 >> 2 & 1) == 0) {
      param_1 = (ulong *)0x0;
    }
    else {
      FUN_1097dc658();
      if (puVar2 == (ulong *)0x0) {
        param_1 = (ulong *)0x1;
      }
      else {
        param_1 = (ulong *)param_2[0x12];
        FUN_1097eacc8(param_1,puVar2);
        if ((int)param_1 == 0) {
          if (param_2[0x11] != 0) {
            FUN_1097dc6a4();
          }
          param_1 = (ulong *)0x0;
          param_2[0x11] = (ulong)puVar2;
          *(uint *)((long)param_2 + 0x7c) = *(uint *)((long)param_2 + 0x7c) | 4;
        }
        else {
          FUN_1097dc6a4(puVar2);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 109800c14; end: 109800ce3;  */

void FUN_109800c14(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  pcVar4 = *(code **)(*(long *)(param_3 + 0x30) + 0x58);
  if (pcVar4 == (code *)0x0) {
    return;
  }
  lVar7 = *param_6;
  uVar1 = *param_7;
  lVar3 = param_3;
  (*pcVar4)();
  if ((int)lVar3 != 0x21) {
    if ((int)lVar3 != 0) {
      return;
    }
    uVar2 = *param_7;
    uVar5 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      if (uVar2 == 0) {
        return;
      }
      dVar9 = *(double *)(param_3 + 0x40);
      dVar8 = *(double *)(param_3 + 0x38);
      dVar11 = *(double *)(param_3 + 0x50);
      dVar10 = *(double *)(param_3 + 0x48);
      dVar13 = *(double *)(param_3 + 0x60);
      dVar12 = *(double *)(param_3 + 0x58);
      pdVar6 = (double *)(*param_6 + 8);
      do {
        dVar14 = pdVar6[1];
        pdVar6[1] = param_2 + dVar11 * dVar14 + dVar9 * *pdVar6 + dVar13;
        *pdVar6 = param_1 + dVar10 * dVar14 + dVar8 * *pdVar6 + dVar12;
        uVar5 = uVar5 - 1;
        pdVar6 = pdVar6 + 3;
      } while (uVar5 != 0);
      return;
    }
  }
  if (lVar7 != *param_6) {
    _free();
    *param_6 = lVar7;
  }
  *param_7 = uVar1;
  return;
}



/* Entry: 109800ce4; end: 109800d4f;  */

ulong FUN_109800ce4(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uStack_28;
  
  uStack_28 = 0;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x30) + 0x50);
  param_2 = param_2 & 0xffffffff;
  if (pcVar2 != (code *)0x0) {
    lVar1 = param_1;
    (*pcVar2)(param_1,param_2,&uStack_28);
    if (((int)lVar1 != 0x21) && (param_2 = uStack_28, (int)lVar1 != 0)) {
      FUN_1097eed98(param_1,lVar1);
      param_2 = 0;
    }
  }
  return param_2;
}



/* Entry: 109800d50; end: 109800d5b;  */

undefined4 FUN_109800d50(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34);
}



/* Entry: 109800d5c; end: 109800eef;  */

undefined8 FUN_109800d5c(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  iVar1 = *(int *)(param_2 + 0x70);
  iVar2 = *(int *)(param_2 + 0x74);
  iVar3 = -(-iVar1 >> 8);
  if (0 < iVar1) {
    iVar3 = (iVar1 - 1U >> 8) + 1;
  }
  iVar1 = -(-iVar2 >> 8);
  if (0 < iVar2) {
    iVar1 = (iVar2 - 1U >> 8) + 1;
  }
  if (param_3 == 0x10) {
    uVar4 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0x98) - 1;
    if (uVar6 < 6) {
      uVar4 = (ulong)*(uint *)(&UNK_10e000700 + (ulong)uVar6 * 4);
    }
    else {
      uVar4 = 2;
    }
  }
  FUN_1097d8718(uVar4,iVar3 - (*(int *)(param_2 + 0x68) >> 8),
                iVar1 - (*(int *)(param_2 + 0x6c) >> 8));
  FUN_1097f7010((double)-(*(int *)(param_2 + 0x68) >> 8),(double)-(*(int *)(param_2 + 0x6c) >> 8));
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uStack_70 = uVar4;
  if (param_3 == 0x10) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = param_4;
    FUN_1097eae14(uVar5,&uStack_80);
    if ((int)uVar5 == 0) {
      if (((uint)uStack_48 == 0) && ((*(byte *)(param_2 + 0xe8) & 1) == 0)) {
        param_4 = 0;
      }
      func_0x0001097f0ba8(param_2,param_1,uVar4,param_4);
      return 0;
    }
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_48 = (ulong)(uint)uStack_48;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    FUN_1097eae14(uVar5,&uStack_80);
    if ((int)uVar5 == 0) {
      if (*(long *)(param_2 + 0x80) != 0) {
        FUN_1097f61ac();
      }
      *(ulong *)(param_2 + 0x80) = uVar4;
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = 2;
      }
      *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xfffffffd | uVar6;
      return 0;
    }
  }
  FUN_1097f61ac(uVar4);
  return uVar5;
}



/* Entry: 109800ef0; end: 109800ff3;  */

undefined1  [16] FUN_109800ef0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = param_1 >> 0x20;
  uVar5 = param_2 >> 0x20;
  uVar3 = (param_2 & 0xffffffff) * (param_1 & 0xffffffff);
  uVar1 = uVar5 * (param_1 & 0xffffffff) + (param_2 & 0xffffffff) * uVar4 + (uVar3 >> 0x20);
  lVar2 = uVar5 * uVar4 + 0x100000000;
  if ((param_2 & 0xffffffff) * uVar4 <= uVar1) {
    lVar2 = uVar5 * uVar4;
  }
  auVar6._8_8_ = (lVar2 - ((param_1 & (long)param_2 >> 0x3f) + (param_2 & (long)param_1 >> 0x3f))) +
                 (uVar1 >> 0x20);
  auVar6._0_8_ = uVar3 & 0xffffffff | uVar1 << 0x20;
  return auVar6;
}



/* Entry: 109800ff4; end: 10980106f;  */

undefined1  [16] FUN_109800ff4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = -param_2;
  if (~param_1 <= -param_1) {
    uVar5 = ~param_2;
  }
  uVar4 = param_2;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar4 = uVar5;
    param_1 = -param_1;
  }
  uVar5 = -param_3;
  if (-1 < (long)param_3) {
    uVar5 = param_3;
  }
  func_0x000109800f48(param_1,uVar4,uVar5);
  uVar1 = -uVar4;
  if (-1 < (long)param_2) {
    uVar1 = uVar4;
  }
  uVar2 = -param_1;
  if (-1 < (long)(param_2 ^ param_3)) {
    uVar2 = param_1;
  }
  uVar3 = 0x7fffffffffffffff;
  if (uVar4 != uVar5) {
    param_3 = uVar1;
    uVar3 = uVar2;
  }
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 109801070; end: 1098010cf;  */

long * FUN_109801070(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return (long *)&UNK_10e000808;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    return (long *)(&UNK_10e000718 + (ulong)(*(int *)((long)param_1 + 0x1c) - 1) * 0x28);
  }
  if ((*(byte *)(param_1 + 6) >> 1 & 1) != 0) {
    return (long *)&UNK_10e0008d0;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109801090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return param_1;
  }
  return (long *)&UNK_10e0008a8;
}



/* Entry: 1098010d0; end: 109801147;  */

void FUN_1098010d0(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    _pthread_mutex_lock(0x1132e0448);
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    _pthread_mutex_unlock(0x1132e0448);
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109801144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 8) + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 109801148; end: 109801c07;  */

ulong FUN_109801148(ulong param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 4);
  if (*puVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x20))();
    if ((uint)param_1 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        *puVar2 = (uint)param_1;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return param_1;
}



/* Entry: 109801c08; end: 109801c37;  */

long FUN_109801c08(long param_1)

{
  FUN_109801c38();
  FUN_1098024b8(param_1 + 0x20);
  return param_1;
}



/* Entry: 109801c38; end: 109801d0b;  */

void FUN_109801c38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000109801ca8(param_1);
  }
  if (param_1[1] != 0) {
    FUN_109825740();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  if ((param_1[6] != 0) && ((char)param_1[7] == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 109801d0c; end: 1098022fb;  */

void FUN_109801d0c(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_2 < 0) {
    param_2 = *(int *)((long)param_1 + 0x14);
  }
  if (*param_1 != 0 && 0 < param_2) {
    do {
      puVar11 = (undefined8 *)*param_1;
      plVar4 = puVar11 + 6;
      if (*plVar4 != 0) {
        uVar3 = 0;
        do {
          puVar5 = (undefined8 *)puVar11[4];
          if (puVar11 < puVar5) {
            puVar9 = (undefined8 *)puVar5[6];
            uVar6 = (ulong)(puVar9 != puVar11);
            lVar7 = puVar5[4];
            puVar2 = param_1;
            if (lVar7 != 0) {
              puVar2 = (ulong *)(lVar7 + (ulong)(*(undefined8 **)(lVar7 + 0x30) == puVar5) * 8 +
                                0x28);
            }
            lVar10 = puVar5[uVar6 + 5];
            *puVar2 = (ulong)puVar11;
            *(undefined8 **)(lVar10 + 0x20) = puVar11;
            puVar5[4] = puVar11;
            puVar11[4] = lVar7;
            plVar8 = puVar11 + 5;
            puVar5[5] = *plVar8;
            puVar5[6] = *plVar4;
            *(undefined8 **)(*plVar8 + 0x20) = puVar5;
            *(undefined8 **)(*plVar4 + 0x20) = puVar5;
            plVar8[puVar9 == puVar11] = (long)puVar5;
            plVar8[uVar6] = lVar10;
            uVar13 = puVar5[1];
            uVar12 = *puVar5;
            uVar15 = puVar5[3];
            uVar14 = puVar5[2];
            uVar16 = *puVar11;
            puVar5[1] = puVar11[1];
            *puVar5 = uVar16;
            uVar16 = puVar11[2];
            puVar5[3] = puVar11[3];
            puVar5[2] = uVar16;
            puVar11[1] = uVar13;
            *puVar11 = uVar12;
            puVar11[3] = uVar15;
            puVar11[2] = uVar14;
            puVar11 = puVar5;
          }
          uVar1 = (uint)param_1[3] >> uVar3;
          uVar3 = (ulong)((int)uVar3 + 1U & 0x1f);
          puVar11 = (undefined8 *)puVar11[(ulong)(uVar1 & 1) + 5];
          plVar4 = puVar11 + 6;
        } while (*plVar4 != 0);
      }
      puVar2 = param_1;
      func_0x000109802124(param_1,puVar11);
      if (puVar2 == (ulong *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *param_1;
      }
      func_0x000109801ef8(param_1,uVar3,puVar11);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 1098022fc; end: 109802407;  */

undefined8
FUN_1098022fc(float param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((((*param_3 <= *param_4) && (param_3[1] <= param_4[1])) && (param_3[2] <= param_4[2])) &&
     (((param_4[4] <= param_3[4] && (param_4[5] <= param_3[5])) && (param_4[6] <= param_3[6])))) {
    return 0;
  }
  fVar4 = (float)*(undefined8 *)param_4 - param_1;
  fVar5 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) - param_1;
  fVar6 = (float)*(undefined8 *)(param_4 + 2) - param_1;
  fVar2 = param_1 + (float)*(undefined8 *)(param_4 + 4);
  fVar3 = param_1 + (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  param_1 = param_1 + (float)*(undefined8 *)(param_4 + 6);
  *(ulong *)(param_4 + 2) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20) - 0.0,fVar6);
  *(ulong *)param_4 = CONCAT44(fVar5,fVar4);
  *(ulong *)(param_4 + 6) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20) + 0.0,param_1);
  *(ulong *)(param_4 + 4) = CONCAT44(fVar3,fVar2);
  fVar7 = *param_5;
  lVar1 = 0x10;
  if (fVar7 <= 0.0) {
    lVar1 = 0;
  }
  *(float *)((long)param_4 + lVar1) =
       fVar7 + (float)((uint)fVar4 ^ ((uint)fVar4 ^ (uint)fVar2) & -(uint)(0.0 < fVar7));
  lVar1 = 0x14;
  if (param_5[1] <= 0.0) {
    lVar1 = 4;
    fVar3 = fVar5;
  }
  *(float *)((long)param_4 + lVar1) = param_5[1] + fVar3;
  lVar1 = 0x18;
  if (param_5[2] <= 0.0) {
    lVar1 = 8;
    param_1 = fVar6;
  }
  *(float *)((long)param_4 + lVar1) = param_5[2] + param_1;
  func_0x000109802284();
  return 1;
}



/* Entry: 109802408; end: 109802447;  */

void FUN_109802408(long param_1,undefined8 param_2)

{
  func_0x000109802124();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_109825740();
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}



/* Entry: 109802448; end: 10980246b;  */

void FUN_109802448(void)

{
  return;
}



/* Entry: 10980246c; end: 1098024b7;  */

long FUN_10980246c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 1098024b8; end: 109802503;  */

long FUN_1098024b8(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109802504; end: 109802767;  */

undefined8 * FUN_109802504(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [4];
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_110b11d58;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0xb] = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined2 *)((long)param_1 + 0xdd) = 0x100;
  *(bool *)((long)param_1 + 0xdc) = param_2 == 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0xf] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0xa00000000;
  *(undefined8 *)((long)param_1 + 0xac) = 0x100000000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 1;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  if (param_2 == 0) {
    param_2 = 0x80;
    FUN_1098256f4(0x80,0x10);
    FUN_109804094();
    uVar3 = (ulong)*(uint *)((long)param_1 + 0xe4);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uStack_48 = 1;
  uStack_50 = 0;
  uStack_5c = 0;
  iVar2 = (int)uVar3;
  if (iVar2 < 2) {
    if (iVar2 != 1) {
      if (*(int *)(param_1 + 0x1d) < 1) {
        lVar4 = 0x20;
        FUN_1098256f4(0x20,0x10);
        uVar1 = *(uint *)((long)param_1 + 0xe4);
        if (0 < (int)uVar1) {
          lVar5 = 0;
          do {
            FUN_109803db0(lVar4 + lVar5,param_1[0x1e] + lVar5);
            lVar5 = lVar5 + 0x20;
          } while ((ulong)uVar1 * 0x20 - lVar5 != 0);
          uVar1 = *(uint *)((long)param_1 + 0xe4);
          if (0 < (int)uVar1) {
            lVar5 = 0;
            do {
              FUN_10980246c(param_1[0x1e] + lVar5);
              lVar5 = lVar5 + 0x20;
            } while ((ulong)uVar1 * 0x20 - lVar5 != 0);
          }
        }
        if (param_1[0x1e] != 0) {
          if (*(char *)(param_1 + 0x1f) == '\x01') {
            FUN_109825740();
          }
          param_1[0x1e] = 0;
        }
        *(undefined1 *)(param_1 + 0x1f) = 1;
        param_1[0x1e] = lVar4;
        *(undefined4 *)(param_1 + 0x1d) = 1;
      }
      uVar3 = -(uVar3 >> 0x1f) & 0xffffffe000000000 | uVar3 << 5;
      do {
        iVar2 = iVar2 + 1;
        FUN_109803db0(param_1[0x1e] + uVar3,auStack_60);
        uVar3 = uVar3 + 0x20;
      } while (iVar2 != 1);
    }
  }
  else {
    lVar4 = 0x20;
    do {
      FUN_10980246c(param_1[0x1e] + lVar4);
      lVar4 = lVar4 + 0x20;
    } while (uVar3 << 5 != lVar4);
  }
  *(undefined4 *)((long)param_1 + 0xe4) = 1;
  FUN_10980246c(auStack_60);
  return param_1;
}



/* Entry: 109802768; end: 1098027df;  */

undefined8 * FUN_109802768(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b11d58;
  if (*(char *)((long)param_1 + 0xdc) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x14])();
    if (param_1[0x14] != 0) {
      FUN_109825740();
    }
  }
  FUN_109803d30(param_1 + 0x1c);
  lVar1 = 0x48;
  do {
    FUN_109801c08((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x38);
  return param_1;
}



/* Entry: 1098027e0; end: 1098027e3;  */

undefined8 * FUN_1098027e0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110b11d58;
  if (*(char *)((long)param_1 + 0xdc) == '\x01') {
    (*(code *)**(undefined8 **)param_1[0x14])();
    if (param_1[0x14] != 0) {
      FUN_109825740();
    }
  }
  FUN_109803d30(param_1 + 0x1c);
  lVar1 = 0x48;
  do {
    FUN_109801c08((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x38);
  return param_1;
}



/* Entry: 1098027e4; end: 1098027f7;  */

void FUN_1098027e4(void)

{
  FUN_109802768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098027f8; end: 10980290b;  */

undefined8 *
FUN_1098027f8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x60;
  FUN_1098256f4(0x60,0x10);
  *puVar2 = param_5;
  *(undefined4 *)(puVar2 + 1) = param_6;
  *(undefined4 *)((long)puVar2 + 0xc) = param_7;
  uVar4 = *param_2;
  puVar2[5] = param_2[1];
  puVar2[4] = uVar4;
  uVar4 = *param_3;
  puVar2[7] = param_3[1];
  puVar2[6] = uVar4;
  puVar2[9] = 0;
  puVar2[10] = 0;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0xac);
  iVar1 = *(int *)(param_1 + 0xd8) + 1;
  *(int *)(param_1 + 0xd8) = iVar1;
  *(int *)(puVar2 + 2) = iVar1;
  lVar3 = param_1 + 8;
  func_0x000109801e68(lVar3,&uStack_70,puVar2);
  iVar1 = *(int *)(param_1 + 0xac);
  puVar2[8] = lVar3;
  puVar2[9] = 0;
  lVar3 = *(long *)(param_1 + 0x88 + (long)iVar1 * 8);
  puVar2[10] = lVar3;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0x48) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x88 + (long)iVar1 * 8) = puVar2;
  if ((*(byte *)(param_1 + 0xdd) & 1) == 0) {
    ppuStack_88 = &PTR_FUN_110b11e00;
    lStack_80 = param_1;
    puStack_78 = puVar2;
    FUN_10980290c(param_1 + 8,*(undefined8 *)(param_1 + 8),&uStack_70,&ppuStack_88);
    FUN_10980290c((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),&uStack_70,
                  &ppuStack_88);
  }
  return puVar2;
}



/* Entry: 10980290c; end: 109802bb7;  */

void FUN_10980290c(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_298 [4];
  undefined8 uStack_294;
  long *plStack_288;
  byte bStack_280;
  long alStack_278 [64];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    uVar11 = param_3[1];
    uVar10 = *param_3;
    uVar13 = param_3[3];
    uVar12 = param_3[2];
    bStack_280 = 0;
    plStack_288 = alStack_278;
    uStack_294 = 0x4000000000;
    uVar6 = 1;
    alStack_278[0] = param_2;
    do {
      uVar4 = (uint)uVar6;
      uVar8 = uVar4 - 1;
      uVar6 = (ulong)uVar8;
      pfVar7 = (float *)plStack_288[uVar6];
      uStack_294 = CONCAT44(uStack_294._4_4_,uVar8);
      if (((((*pfVar7 <= (float)uVar12) && ((float)uVar10 <= pfVar7[4])) &&
           (pfVar7[1] <= (float)((ulong)uVar12 >> 0x20))) &&
          (((float)((ulong)uVar10 >> 0x20) <= pfVar7[5] && (pfVar7[2] <= (float)uVar13)))) &&
         ((float)uVar11 <= pfVar7[6])) {
        if (*(long *)(pfVar7 + 0xc) == 0) {
          (**(code **)(*param_4 + 0x18))(param_4,pfVar7);
          uVar6 = uStack_294 & 0xffffffff;
        }
        else {
          uVar9 = (ulong)uStack_294._4_4_;
          if (uVar8 == uStack_294._4_4_) {
            uVar1 = uVar8 * 2;
            if (uVar8 == 0) {
              uVar1 = 1;
            }
            uVar9 = (ulong)uVar1;
            if (uVar4 <= uVar1) {
              plVar2 = (long *)(uVar9 << 3);
              FUN_1098256f4(plVar2,0x10);
              if (0 < (int)uStack_294) {
                lVar3 = 0;
                do {
                  *(undefined8 *)((long)plVar2 + lVar3) = *(undefined8 *)((long)plStack_288 + lVar3)
                  ;
                  lVar3 = lVar3 + 8;
                } while ((uStack_294 & 0xffffffff) * 8 - lVar3 != 0);
              }
              iVar5 = (int)uStack_294;
              if ((plStack_288 != (long *)0x0) && ((bStack_280 & 1) != 0)) {
                FUN_109825740();
                iVar5 = (int)uStack_294;
              }
              bStack_280 = 1;
              uStack_294 = (ulong)uVar1 << 0x20;
              uVar6 = (ulong)iVar5;
              uVar4 = iVar5 + 1;
              plStack_288 = plVar2;
              goto LAB_109802a9c;
            }
            plStack_288[uVar6] = *(long *)(pfVar7 + 10);
          }
          else {
LAB_109802a9c:
            plStack_288[uVar6] = *(long *)(pfVar7 + 10);
            uStack_294 = CONCAT44(uStack_294._4_4_,uVar4);
            uVar8 = (uint)uVar9;
            if (uVar4 == uVar8) {
              uVar1 = uVar8 << 1;
              if (uVar8 == 0) {
                uVar1 = 1;
              }
              uVar4 = uVar8;
              if ((int)uVar8 < (int)uVar1) {
                if (uVar1 == 0) {
                  plVar2 = (long *)0x0;
                }
                else {
                  plVar2 = (long *)(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                   );
                  FUN_1098256f4(plVar2,0x10);
                  uVar9 = uStack_294 & 0xffffffff;
                }
                if (0 < (int)uVar9) {
                  lVar3 = 0;
                  do {
                    *(undefined8 *)((long)plVar2 + lVar3) =
                         *(undefined8 *)((long)plStack_288 + lVar3);
                    lVar3 = lVar3 + 8;
                  } while (uVar9 << 3 != lVar3);
                }
                if ((plStack_288 != (long *)0x0) && ((bStack_280 & 1) != 0)) {
                  FUN_109825740();
                  uVar9 = uStack_294 & 0xffffffff;
                }
                bStack_280 = 1;
                uStack_294 = (ulong)uVar1 << 0x20;
                uVar4 = (uint)uVar9;
                plStack_288 = plVar2;
              }
            }
          }
          plStack_288[(int)uVar4] = *(long *)(pfVar7 + 0xc);
          uVar6 = (ulong)(uVar4 + 1);
          uStack_294 = CONCAT44(uStack_294._4_4_,uVar4 + 1);
        }
      }
    } while (0 < (int)uVar6);
    param_1 = auStack_298;
    FUN_10980246c(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_10980246c(auStack_298);
  __Unwind_Resume(param_1);
  return;
}



/* Entry: 109802bb8; end: 109802bbb;  */

void FUN_109802bb8(void)

{
  return;
}



/* Entry: 109802bbc; end: 109802c5b;  */

void FUN_109802bbc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0x48;
  if (*(int *)(param_2 + 0x58) != 2) {
    lVar1 = 8;
  }
  FUN_109802408(param_1 + lVar1,*(undefined8 *)(param_2 + 0x40));
  lVar1 = *(long *)(param_2 + 0x50);
  plVar2 = (long *)(param_1 + (long)*(int *)(param_2 + 0x58) * 8 + 0x88);
  if (*(long *)(param_2 + 0x48) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *plVar2 = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))(*(long **)(param_1 + 0xa0),param_2,param_3);
  FUN_109825740(param_2);
  *(undefined1 *)(param_1 + 0xde) = 1;
  return;
}



/* Entry: 109802c5c; end: 109802c6f;  */

void FUN_109802c5c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_3[1] = *(undefined8 *)(param_2 + 0x28);
  *param_3 = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_4[1] = *(undefined8 *)(param_2 + 0x38);
  *param_4 = uVar1;
  return;
}



/* Entry: 109802c70; end: 109802d07;  */

void FUN_109802c70(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuStack_50 = &PTR_FUN_110b11e68;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  lStack_48 = param_4;
  FUN_109802d08(*(undefined4 *)(param_4 + 0x2c),*(undefined8 *)(param_1 + 8),param_2,param_4 + 0x10,
                param_4 + 0x20,param_5,param_6,uVar1,&ppuStack_50);
  FUN_109802d08(*(undefined4 *)(param_4 + 0x2c),*(undefined8 *)(param_1 + 0x48),param_2,
                param_4 + 0x10,param_4 + 0x20,param_5,param_6,uVar1,&ppuStack_50);
  return;
}



/* Entry: 109802d08; end: 1098030b3;  */

void FUN_109802d08(float param_1,long param_2,float *param_3,float *param_4,uint *param_5,
                  undefined8 *param_6,undefined8 *param_7,long param_8,long *param_9)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    lVar10 = (long)*(int *)(param_8 + 4);
    if (*(int *)(param_8 + 4) < 0x80) {
      if (*(int *)(param_8 + 8) < 0x80) {
        lVar6 = 0x400;
        FUN_1098256f4(0x400,0x10);
        uVar1 = *(uint *)(param_8 + 4);
        if (0 < (int)uVar1) {
          lVar7 = 0;
          do {
            *(undefined8 *)(lVar6 + lVar7) = *(undefined8 *)(*(long *)(param_8 + 0x10) + lVar7);
            lVar7 = lVar7 + 8;
          } while ((ulong)uVar1 * 8 - lVar7 != 0);
        }
        if ((*(long *)(param_8 + 0x10) != 0) && ((*(byte *)(param_8 + 0x18) & 1) != 0)) {
          FUN_109825740();
        }
        *(undefined1 *)(param_8 + 0x18) = 1;
        *(long *)(param_8 + 0x10) = lVar6;
        *(undefined4 *)(param_8 + 8) = 0x80;
      }
      do {
        *(undefined8 *)(*(long *)(param_8 + 0x10) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 != 0x80);
    }
    *(undefined4 *)(param_8 + 4) = 0x80;
    uVar11 = (ulong)&uStack_a0 | 4;
    **(long **)(param_8 + 0x10) = param_2;
    uVar9 = (ulong)&uStack_a0 | 8;
    iVar8 = 0x7e;
    uVar14 = 1;
    do {
      while( true ) {
        iVar13 = (int)uVar14;
        uVar14 = (long)iVar13 - 1;
        lVar10 = *(long *)(param_8 + 0x10);
        puVar12 = *(undefined8 **)(lVar10 + uVar14 * 8);
        uStack_98 = (ulong)(uint)((float)puVar12[1] - (float)param_7[1]);
        uStack_a0 = CONCAT44((float)((ulong)*puVar12 >> 0x20) - (float)((ulong)*param_7 >> 0x20),
                             (float)*puVar12 - (float)*param_7);
        uStack_88 = (ulong)(uint)((float)puVar12[3] - (float)param_6[1]);
        uStack_90 = CONCAT44((float)((ulong)puVar12[2] >> 0x20) - (float)((ulong)*param_6 >> 0x20),
                             (float)puVar12[2] - (float)*param_6);
        fVar15 = (*(float *)(&uStack_a0 + (ulong)*param_5 * 2) - *param_3) * *param_4;
        fVar16 = *param_4 * (*(float *)(&uStack_a0 + (ulong)(1 - *param_5) * 2) - *param_3);
        fVar17 = (*(float *)(uVar11 + (ulong)param_5[1] * 0x10) - param_3[1]) * param_4[1];
        fVar18 = param_4[1] * (*(float *)(uVar11 + (ulong)(1 - param_5[1]) * 0x10) - param_3[1]);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if (fVar15 <= fVar18) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar17) && !NAN(fVar16)) {
            bVar3 = fVar17 < fVar16;
            bVar4 = fVar17 == fVar16;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) break;
LAB_109802fe8:
        if ((int)uVar14 == 0) goto LAB_109803074;
      }
      if (fVar17 <= fVar15) {
        fVar17 = fVar15;
      }
      if (fVar16 <= fVar18) {
        fVar18 = fVar16;
      }
      fVar15 = (*(float *)(uVar9 + (ulong)param_5[2] * 0x10) - param_3[2]) * param_4[2];
      fVar16 = param_4[2] * (*(float *)(uVar9 + (ulong)(1 - param_5[2]) * 0x10) - param_3[2]);
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (fVar17 <= fVar16) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar15) && !NAN(fVar18)) {
          bVar3 = fVar15 < fVar18;
          bVar4 = fVar15 == fVar18;
          bVar5 = false;
        }
      }
      if (!bVar4 && bVar3 == bVar5) goto LAB_109802fe8;
      if (fVar15 <= fVar17) {
        fVar15 = fVar17;
      }
      if (fVar18 <= fVar16) {
        fVar16 = fVar18;
      }
      if ((param_1 <= fVar15) || (fVar16 <= 0.0)) goto LAB_109802fe8;
      if (puVar12[6] == 0) {
        (**(code **)(*param_9 + 0x18))(param_9,puVar12);
        goto LAB_109802fe8;
      }
      if (iVar8 < (int)uVar14) {
        iVar2 = *(int *)(param_8 + 4);
        lVar6 = (long)iVar2;
        iVar8 = (int)(lVar6 << 1);
        if (iVar2 <= iVar8) {
          if ((iVar2 < iVar8) && (*(int *)(param_8 + 8) < iVar8)) {
            if (iVar2 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = lVar6 << 4;
              FUN_1098256f4(lVar10,0x10);
              uVar1 = *(uint *)(param_8 + 4);
              if (0 < (int)uVar1) {
                lVar7 = 0;
                do {
                  *(undefined8 *)(lVar10 + lVar7) =
                       *(undefined8 *)(*(long *)(param_8 + 0x10) + lVar7);
                  lVar7 = lVar7 + 8;
                } while ((ulong)uVar1 * 8 - lVar7 != 0);
              }
            }
            if ((*(long *)(param_8 + 0x10) != 0) && ((*(byte *)(param_8 + 0x18) & 1) != 0)) {
              FUN_109825740();
            }
            *(undefined1 *)(param_8 + 0x18) = 1;
            *(long *)(param_8 + 0x10) = lVar10;
            *(int *)(param_8 + 8) = iVar8;
          }
          if (iVar2 < iVar8) {
            do {
              *(undefined8 *)(*(long *)(param_8 + 0x10) + lVar6 * 8) = 0;
              lVar6 = lVar6 + 1;
            } while (iVar8 != lVar6);
            lVar10 = *(long *)(param_8 + 0x10);
          }
        }
        *(int *)(param_8 + 4) = iVar8;
        iVar8 = iVar8 + -2;
      }
      *(undefined8 *)(lVar10 + uVar14 * 8) = puVar12[5];
      uVar14 = (ulong)(iVar13 + 1U);
      *(undefined8 *)(*(long *)(param_8 + 0x10) + (long)iVar13 * 8) = puVar12[6];
    } while (iVar13 + 1U != 0);
  }
LAB_109803074:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1098030b4; end: 1098030b7;  */

void FUN_1098030b4(void)

{
  return;
}



/* Entry: 1098030b8; end: 109803117;  */

void FUN_1098030b8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = &PTR_FUN_110b11ed0;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_4;
  FUN_10980290c((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),&uStack_50,&ppuStack_30);
  FUN_10980290c((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),&uStack_50,
                &ppuStack_30);
  return;
}



/* Entry: 109803118; end: 10980311b;  */

void FUN_109803118(void)

{
  return;
}



/* Entry: 10980311c; end: 10980334f;  */

void FUN_10980311c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  if (*(int *)(param_2 + 0x58) == 2) {
    FUN_109802408(param_1 + 0x48,*(undefined8 *)(param_2 + 0x40));
    lVar4 = param_1 + 8;
    func_0x000109801e68(lVar4,&uStack_50,param_2);
    *(long *)(param_2 + 0x40) = lVar4;
  }
  else {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
    pfVar5 = *(float **)(param_2 + 0x40);
    if (((((*pfVar5 <= (float)uStack_40) && ((float)uStack_50 <= pfVar5[4])) &&
         (pfVar5[1] <= (float)((ulong)uStack_40 >> 0x20))) &&
        (((float)((ulong)uStack_50 >> 0x20) <= pfVar5[5] && (pfVar5[2] <= (float)uStack_38)))) &&
       ((float)uStack_48 <= pfVar5[6])) {
      fVar8 = (float)*(undefined8 *)(param_2 + 0x20);
      fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_2 + 0x28);
      fVar13 = *(float *)(param_1 + 0xa8);
      fVar9 = ((float)*(undefined8 *)(param_2 + 0x30) - fVar8) * 0.5 * fVar13;
      fVar11 = ((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) - fVar10) * 0.5 * fVar13;
      fVar13 = ((float)*(undefined8 *)(param_2 + 0x38) - fVar12) * 0.5 * fVar13;
      if ((float)*param_3 - fVar8 < 0.0) {
        fVar9 = -fVar9;
      }
      if ((float)((ulong)*param_3 >> 0x20) - fVar10 < 0.0) {
        fVar11 = -fVar11;
      }
      uStack_70 = (undefined **)CONCAT44(fVar11,fVar9);
      if ((float)param_3[1] - fVar12 < 0.0) {
        fVar13 = -fVar13;
      }
      uStack_68 = (ulong)(uint)fVar13;
      lVar4 = param_1 + 8;
      FUN_1098022fc(0x3d4ccccd,lVar4,pfVar5,&uStack_50,&uStack_70);
      iVar3 = (int)lVar4;
      if (iVar3 != 0) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      }
      goto LAB_109803200;
    }
    func_0x000109802284(param_1 + 8,pfVar5,&uStack_50);
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  }
  iVar3 = 1;
LAB_109803200:
  lVar4 = param_1 + 0x88;
  lVar6 = *(long *)(param_2 + 0x50);
  plVar1 = (long *)(lVar4 + (long)*(int *)(param_2 + 0x58) * 8);
  if (*(long *)(param_2 + 0x48) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x48) + 0x50);
  }
  *plVar1 = lVar6;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  uVar7 = *param_3;
  *(undefined8 *)(param_2 + 0x28) = param_3[1];
  *(undefined8 *)(param_2 + 0x20) = uVar7;
  uVar7 = *param_4;
  *(undefined8 *)(param_2 + 0x38) = param_4[1];
  *(undefined8 *)(param_2 + 0x30) = uVar7;
  iVar2 = *(int *)(param_1 + 0xac);
  *(int *)(param_2 + 0x58) = iVar2;
  *(undefined8 *)(param_2 + 0x48) = 0;
  lVar6 = *(long *)(lVar4 + (long)iVar2 * 8);
  *(long *)(param_2 + 0x50) = lVar6;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x48) = param_2;
  }
  *(long *)(lVar4 + (long)iVar2 * 8) = param_2;
  if ((iVar3 != 0) && (*(undefined1 *)(param_1 + 0xde) = 1, (*(byte *)(param_1 + 0xdd) & 1) == 0)) {
    uStack_70 = &PTR_FUN_110b11e00;
    uStack_68 = param_1;
    FUN_109803350((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_2 + 0x40),&uStack_70);
    FUN_109803350((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),
                  *(undefined8 *)(param_2 + 0x40),&uStack_70);
  }
  return;
}



/* Entry: 109803350; end: 109803b83;  */

void FUN_109803350(long param_1,long param_2,long param_3,long *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((*(int *)(param_1 + 0x24) < 0x80) && (*(int *)(param_1 + 0x28) < 0x80)) {
      lVar6 = 0x800;
      FUN_1098256f4(0x800,0x10);
      uVar3 = *(uint *)(param_1 + 0x24);
      if (0 < (int)uVar3) {
        lVar7 = 0;
        do {
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7);
          uVar10 = *puVar5;
          ((undefined8 *)(lVar6 + lVar7))[1] = puVar5[1];
          *(undefined8 *)(lVar6 + lVar7) = uVar10;
          lVar7 = lVar7 + 0x10;
        } while ((ulong)uVar3 * 0x10 - lVar7 != 0);
      }
      if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(long *)(param_1 + 0x30) = lVar6;
      *(undefined4 *)(param_1 + 0x28) = 0x80;
    }
    *(undefined4 *)(param_1 + 0x24) = 0x80;
    plVar8 = *(long **)(param_1 + 0x30);
    *plVar8 = param_2;
    plVar8[1] = param_3;
    iVar13 = 0x7c;
    uVar12 = 1;
    do {
      iVar11 = (int)uVar12;
      lVar7 = (long)iVar11;
      uVar12 = lVar7 - 1;
      lVar6 = *(long *)(param_1 + 0x30);
      plVar8 = (long *)(lVar6 + uVar12 * 0x10);
      pfVar1 = (float *)*plVar8;
      pfVar2 = (float *)plVar8[1];
      if (iVar13 < (int)uVar12) {
        iVar4 = *(int *)(param_1 + 0x24);
        iVar13 = (int)((long)iVar4 << 1);
        if ((iVar4 < iVar13) && (*(int *)(param_1 + 0x28) < iVar13)) {
          if (iVar4 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = (long)iVar4 << 5;
            FUN_1098256f4(lVar6,0x10);
            uVar3 = *(uint *)(param_1 + 0x24);
            if (0 < (int)uVar3) {
              lVar9 = 0;
              do {
                puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar9);
                uVar10 = *puVar5;
                ((undefined8 *)(lVar6 + lVar9))[1] = puVar5[1];
                *(undefined8 *)(lVar6 + lVar9) = uVar10;
                lVar9 = lVar9 + 0x10;
              } while ((ulong)uVar3 * 0x10 - lVar9 != 0);
            }
          }
          if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
            FUN_109825740();
          }
          *(undefined1 *)(param_1 + 0x38) = 1;
          *(long *)(param_1 + 0x30) = lVar6;
          *(int *)(param_1 + 0x28) = iVar13;
        }
        *(int *)(param_1 + 0x24) = iVar13;
        iVar13 = iVar13 + -4;
      }
      if (pfVar1 == pfVar2) {
        if (*(long *)(pfVar1 + 0xc) != 0) {
          uVar10 = *(undefined8 *)(pfVar1 + 10);
          puVar5 = (undefined8 *)(lVar6 + uVar12 * 0x10);
          puVar5[1] = uVar10;
          *puVar5 = uVar10;
          uVar10 = *(undefined8 *)(pfVar1 + 0xc);
          puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7 * 0x10);
          puVar5[1] = uVar10;
          *puVar5 = uVar10;
          uVar12 = (ulong)(iVar11 + 2);
          lVar6 = *(long *)(param_1 + 0x30) + lVar7 * 0x10;
          uVar10 = *(undefined8 *)(pfVar1 + 10);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(pfVar1 + 0xc);
          *(undefined8 *)(lVar6 + 0x10) = uVar10;
        }
      }
      else if ((((*pfVar1 <= pfVar2[4]) && (*pfVar2 <= pfVar1[4])) && (pfVar1[1] <= pfVar2[5])) &&
              (((pfVar2[1] <= pfVar1[5] && (pfVar1[2] <= pfVar2[6])) && (pfVar2[2] <= pfVar1[6]))))
      {
        if (*(long *)(pfVar1 + 0xc) == 0) {
          if (*(long *)(pfVar2 + 0xc) == 0) {
            (**(code **)(*param_4 + 0x10))(param_4,pfVar1,pfVar2);
          }
          else {
            lVar9 = *(long *)(pfVar2 + 10);
            plVar8 = (long *)(lVar6 + uVar12 * 0x10);
            *plVar8 = (long)pfVar1;
            plVar8[1] = lVar9;
            lVar6 = *(long *)(pfVar2 + 0xc);
            uVar12 = (ulong)(iVar11 + 1);
            plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x10);
            *plVar8 = (long)pfVar1;
            plVar8[1] = lVar6;
          }
        }
        else {
          puVar5 = (undefined8 *)(lVar6 + uVar12 * 0x10);
          if (*(long *)(pfVar2 + 0xc) == 0) {
            *puVar5 = *(undefined8 *)(pfVar1 + 10);
            puVar5[1] = pfVar2;
            uVar12 = (ulong)(iVar11 + 1);
            puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7 * 0x10);
            *puVar5 = *(undefined8 *)(pfVar1 + 0xc);
            puVar5[1] = pfVar2;
          }
          else {
            uVar10 = *(undefined8 *)(pfVar2 + 10);
            *puVar5 = *(undefined8 *)(pfVar1 + 10);
            puVar5[1] = uVar10;
            uVar10 = *(undefined8 *)(pfVar2 + 10);
            puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7 * 0x10);
            *puVar5 = *(undefined8 *)(pfVar1 + 0xc);
            puVar5[1] = uVar10;
            uVar10 = *(undefined8 *)(pfVar2 + 0xc);
            lVar6 = *(long *)(param_1 + 0x30) + lVar7 * 0x10;
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(pfVar1 + 10);
            *(undefined8 *)(lVar6 + 0x18) = uVar10;
            uVar10 = *(undefined8 *)(pfVar2 + 0xc);
            uVar12 = (ulong)(iVar11 + 3);
            lVar6 = *(long *)(param_1 + 0x30) + lVar7 * 0x10;
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(pfVar1 + 0xc);
            *(undefined8 *)(lVar6 + 0x28) = uVar10;
          }
        }
      }
    } while ((int)uVar12 != 0);
  }
  return;
}



/* Entry: 109803b84; end: 109803b93;  */

undefined8 FUN_109803b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 109803b94; end: 109803c23;  */

void FUN_109803b94(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 == (undefined8 *)0x0) {
    if (puVar2 == (undefined8 *)0x0) {
      uStack_10 = 0;
      uStack_8 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
    }
    else {
      uStack_18 = puVar2[1];
      uStack_20 = *puVar2;
      uStack_8 = puVar2[3];
      uStack_10 = puVar2[2];
    }
  }
  else if (puVar2 == (undefined8 *)0x0) {
    uStack_18 = puVar4[1];
    uStack_20 = *puVar4;
    uStack_8 = puVar4[3];
    uStack_10 = puVar4[2];
  }
  else {
    lVar3 = 0;
    do {
      pfVar1 = (float *)((long)puVar4 + lVar3 + 0x10);
      fVar5 = pfVar1[-4];
      fVar6 = *(float *)((long)puVar2 + lVar3);
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      *(float *)((long)&uStack_20 + lVar3) = fVar5;
      fVar5 = *pfVar1;
      fVar6 = ((float *)((long)puVar2 + lVar3))[4];
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      *(float *)((long)&uStack_10 + lVar3) = fVar5;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xc);
  }
  param_2[1] = uStack_18;
  *param_2 = uStack_20;
  param_3[1] = uStack_8;
  *param_3 = uStack_10;
  return;
}



/* Entry: 109803c24; end: 109803c93;  */

void FUN_109803c24(long param_1)

{
  if (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x5c) == 0) {
    FUN_109801c38(param_1 + 8);
    FUN_109801c38(param_1 + 0x48);
    *(undefined2 *)(param_1 + 0xdd) = 0x100;
    *(undefined8 *)(param_1 + 0xb4) = 0xa00000000;
    *(undefined8 *)(param_1 + 0xac) = 0x100000000;
    *(undefined8 *)(param_1 + 0xbc) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
  }
  return;
}



/* Entry: 109803c94; end: 109803c9b;  */

void FUN_109803c94(void)

{
  return;
}



/* Entry: 109803c9c; end: 109803ceb;  */

void FUN_109803c9c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  if (param_2 != param_3) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0xa0);
    (**(code **)(*plVar1 + 0x10))
              (plVar1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_3 + 0x28));
    *(int *)(*(long *)(param_1 + 8) + 0xbc) = *(int *)(*(long *)(param_1 + 8) + 0xbc) + 1;
  }
  return;
}



/* Entry: 109803cec; end: 109803d2f;  */

void FUN_109803cec(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109803cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,*(undefined8 *)(param_1[2] + 0x40));
  return;
}



/* Entry: 109803d30; end: 109803daf;  */

long FUN_109803d30(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_10980246c(*(long *)(param_1 + 0x10) + lVar2);
      lVar2 = lVar2 + 0x20;
    } while ((ulong)uVar1 * 0x20 - lVar2 != 0);
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109803db0; end: 109803e9f;  */

long FUN_109803db0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(uint *)(param_2 + 4);
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    *(uint *)(param_1 + 4) = uVar1;
  }
  else {
    lVar3 = uVar6 << 3;
    FUN_1098256f4(lVar3,0x10);
    uVar2 = *(uint *)(param_1 + 4);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar2 * 8 - lVar4 != 0);
    }
    if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
      FUN_109825740();
    }
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(long *)(param_1 + 0x10) = lVar3;
    *(uint *)(param_1 + 8) = uVar1;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
    uVar5 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 4) = uVar1;
    do {
      *(undefined8 *)(lVar3 + uVar5 * 8) = *(undefined8 *)(*(long *)(param_2 + 0x10) + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  return param_1;
}



/* Entry: 109803ea0; end: 109803fef;  */

void FUN_109803ea0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  iVar1 = (int)param_4 + (int)param_3;
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x10) +
           ((long)((ulong)(uint)(iVar1 - (iVar1 >> 0x1f)) << 0x20) >> 0x21) * 0x20);
  uStack_98 = puVar2[1];
  uStack_a0 = *puVar2;
  uStack_88 = puVar2[3];
  uStack_90 = puVar2[2];
  uVar5 = param_3;
  uVar7 = param_4;
  do {
    uVar8 = -(uVar5 >> 0x1f & 1) & 0xffffffe000000000 | (uVar5 & 0xffffffff) << 5;
    lVar9 = (long)(int)uVar5 + -1;
    do {
      uVar4 = uVar5;
      uVar3 = param_2;
      FUN_109803ff0(param_2,*(long *)(param_1 + 0x10) + uVar8,&uStack_a0);
      uVar8 = uVar8 + 0x20;
      lVar9 = lVar9 + 1;
      uVar5 = (ulong)((int)uVar4 + 1);
    } while ((uVar3 & 1) != 0);
    lVar10 = (-(uVar7 >> 0x1f & 1) & 0xffffffe000000000 | (uVar7 & 0xffffffff) << 5) + 0x20;
    lVar11 = (long)(int)uVar7 + 1;
    do {
      uVar6 = uVar7;
      lVar10 = lVar10 + -0x20;
      uVar3 = param_2;
      FUN_109803ff0(param_2,&uStack_a0,lVar10 + *(long *)(param_1 + 0x10));
      lVar11 = lVar11 + -1;
      uVar7 = (ulong)((int)uVar6 - 1);
    } while ((uVar3 & 1) != 0);
    if (lVar11 < lVar9) {
      uVar5 = uVar4 & 0xffffffff;
      uVar7 = uVar6 & 0xffffffff;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x10) + uVar8;
      uVar15 = *(undefined8 *)(lVar9 + -0x18);
      uVar14 = *(undefined8 *)(lVar9 + -0x20);
      uVar13 = *(undefined8 *)(lVar9 + -8);
      uVar12 = *(undefined8 *)(lVar9 + -0x10);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar10);
      uVar18 = *puVar2;
      uVar17 = puVar2[3];
      uVar16 = puVar2[2];
      *(undefined8 *)(lVar9 + -0x18) = puVar2[1];
      *(undefined8 *)(lVar9 + -0x20) = uVar18;
      *(undefined8 *)(lVar9 + -8) = uVar17;
      *(undefined8 *)(lVar9 + -0x10) = uVar16;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar10);
      puVar2[1] = uVar15;
      *puVar2 = uVar14;
      puVar2[3] = uVar13;
      puVar2[2] = uVar12;
    }
  } while ((int)uVar5 <= (int)uVar7);
  if ((int)param_3 < (int)uVar7) {
    FUN_109803ea0(param_1,param_2,param_3,uVar7);
  }
  if ((int)uVar5 < (int)param_4) {
    FUN_109803ea0(param_1,param_2,uVar5,param_4);
  }
  return;
}



/* Entry: 109803ff0; end: 109804093;  */

bool FUN_109803ff0(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x10);
  }
  lVar4 = *param_3;
  if (lVar4 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x10);
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *(int *)(lVar5 + 0x10);
  }
  lVar8 = param_3[1];
  if (lVar8 == 0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x10);
  }
  if (iVar6 < iVar3) {
    return true;
  }
  bVar1 = iVar9 < iVar7 && lVar2 == lVar4;
  if ((lVar2 == lVar4) && (iVar7 <= iVar9)) {
    if (lVar5 != lVar8) {
      return false;
    }
    bVar1 = (ulong)param_3[2] < (ulong)param_2[2];
  }
  return bVar1;
}



/* Entry: 109804094; end: 109804193;  */

undefined8 * FUN_109804094(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_FUN_110b11f48;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  param_1[0xe] = 0;
  lVar4 = 0x40;
  FUN_1098256f4(0x40,0x10);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      puVar2 = (undefined8 *)(param_1[3] + lVar5);
      uVar6 = *puVar2;
      uVar8 = puVar2[3];
      uVar7 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[3] = uVar8;
      puVar1[2] = uVar7;
      lVar5 = lVar5 + 0x20;
    } while ((ulong)uVar3 * 0x20 - lVar5 != 0);
  }
  if (param_1[3] != 0) {
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_109825740();
    }
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = lVar4;
  *(undefined4 *)(param_1 + 2) = 2;
  FUN_109804194(param_1);
  return param_1;
}



/* Entry: 109804194; end: 1098043db;  */

void FUN_109804194(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x34);
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < (int)uVar1) {
    if (uVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar4 = uVar2;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar1 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar4 = *(uint *)(param_1 + 0x34);
    }
    if ((int)uVar4 < 1) {
      if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) goto LAB_109804230;
    }
    else {
      uVar6 = (ulong)uVar4;
      puVar7 = puVar3;
      puVar9 = *(undefined4 **)(param_1 + 0x40);
      do {
        *puVar7 = *puVar9;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
LAB_109804230:
      if (*(char *)(param_1 + 0x48) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined4 **)(param_1 + 0x40) = puVar3;
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x40);
  }
  _bzero(puVar3 + (int)uVar2,(ulong)(uVar1 + ~uVar2) * 4 + 4);
  *(uint *)(param_1 + 0x34) = uVar1;
  uVar4 = *(uint *)(param_1 + 0x54);
  if ((int)uVar1 <= (int)uVar4) goto LAB_10980431c;
  if (*(int *)(param_1 + 0x58) < (int)uVar1) {
    if (uVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar5 = uVar4;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar1 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar5 = *(uint *)(param_1 + 0x54);
    }
    if ((int)uVar5 < 1) {
      if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) goto LAB_1098042e4;
    }
    else {
      uVar6 = (ulong)uVar5;
      puVar7 = puVar3;
      puVar9 = *(undefined4 **)(param_1 + 0x60);
      do {
        *puVar7 = *puVar9;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
LAB_1098042e4:
      if (*(char *)(param_1 + 0x68) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined4 **)(param_1 + 0x60) = puVar3;
    *(uint *)(param_1 + 0x58) = uVar1;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x60);
  }
  _bzero(puVar3 + (int)uVar4,(ulong)(uVar1 + ~uVar4) * 4 + 4);
LAB_10980431c:
  *(uint *)(param_1 + 0x54) = uVar1;
  if (0 < (int)uVar1) {
    _memset(*(undefined8 *)(param_1 + 0x40),0xff,(ulong)uVar1 << 2);
    _memset(*(undefined8 *)(param_1 + 0x60),0xff,(ulong)uVar1 << 2);
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x40);
    lVar10 = *(long *)(param_1 + 0x60);
    plVar11 = (long *)(*(long *)(param_1 + 0x18) + 8);
    do {
      uVar1 = *(uint *)(plVar11[-1] + 0x10) | *(int *)(*plVar11 + 0x10) << 0x10;
      uVar1 = uVar1 + (uVar1 << 0xf ^ 0xffffffff);
      uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
      uVar1 = uVar1 ^ uVar1 >> 6;
      uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
      uVar1 = (uVar1 ^ uVar1 >> 0x10) & *(int *)(param_1 + 0x10) - 1U;
      *(undefined4 *)(lVar10 + uVar6 * 4) = *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4);
      *(int *)(lVar8 + (long)(int)uVar1 * 4) = (int)uVar6;
      uVar6 = uVar6 + 1;
      plVar11 = plVar11 + 4;
    } while (uVar2 != uVar6);
  }
  return;
}



/* Entry: 1098043dc; end: 109804423;  */

undefined8 * FUN_1098043dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b11f48;
  FUN_10980501c(param_1 + 10);
  FUN_10980501c(param_1 + 6);
  FUN_109804fd0(param_1 + 1);
  return param_1;
}



/* Entry: 109804424; end: 109804427;  */

undefined8 * FUN_109804424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b11f48;
  FUN_10980501c(param_1 + 10);
  FUN_10980501c(param_1 + 6);
  FUN_109804fd0(param_1 + 1);
  return param_1;
}



/* Entry: 109804428; end: 109804447;  */

void FUN_109804428(long param_1)

{
  FUN_1098043dc();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109804448; end: 109804497;  */

void FUN_109804448(undefined8 param_1,long param_2,long *param_3)

{
  if ((param_3 != (long *)0x0) && (*(undefined8 **)(param_2 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_2 + 0x10))();
    (**(code **)(*param_3 + 0x78))(param_3,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return;
}



/* Entry: 109804498; end: 1098044cf;  */

void FUN_109804498(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  long *plStack_20;
  undefined8 uStack_18;
  
  ppuStack_30 = &PTR_FUN_110b12038;
  uStack_28 = param_2;
  plStack_20 = param_1;
  uStack_18 = param_3;
  (**(code **)(*param_1 + 0x70))(param_1,&ppuStack_30);
  return;
}



/* Entry: 1098044d0; end: 1098044d3;  */

void FUN_1098044d0(void)

{
  return;
}



/* Entry: 1098044d4; end: 109804507;  */

void FUN_1098044d4(long *param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_FUN_110b12088;
  uStack_18 = param_2;
  (**(code **)(*param_1 + 0x70))(param_1,&ppuStack_20);
  return;
}



/* Entry: 109804508; end: 1098045bf;  */

void FUN_109804508(void)

{
  return;
}



/* Entry: 1098045c0; end: 1098047ff;  */

long FUN_1098045c0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  lVar6 = param_2;
  if (*(int *)(param_2 + 0x10) <= *(int *)(param_3 + 0x10)) {
    lVar6 = param_3;
    param_3 = param_2;
  }
  uVar2 = *(uint *)(param_3 + 0x10) | *(int *)(lVar6 + 0x10) << 0x10;
  uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
  uVar2 = uVar2 ^ uVar2 >> 6;
  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
  uVar13 = (long)(int)(uVar2 ^ uVar2 >> 0x10) & (long)(int)param_1[2] - 1U;
  iVar12 = *(int *)(param_1[8] + uVar13 * 4);
  if (iVar12 != -1) {
    do {
      plVar1 = (long *)(param_1[3] + (long)iVar12 * 0x20);
      if ((*(uint *)(*plVar1 + 0x10) == *(uint *)(param_3 + 0x10)) &&
         (*(int *)(plVar1[1] + 0x10) == *(int *)(lVar6 + 0x10))) {
        (**(code **)(*param_1 + 0x40))(param_1,plVar1,param_4);
        lVar10 = plVar1[3];
        lVar4 = param_1[3];
        iVar12 = *(int *)(param_1[8] + uVar13 * 4);
        lVar5 = param_1[0xc];
        iVar11 = (int)((ulong)((long)plVar1 - lVar4) >> 5);
        if (iVar12 != iVar11) goto LAB_1098046c4;
        goto LAB_1098046ec;
      }
      iVar12 = *(int *)(param_1[0xc] + (long)iVar12 * 4);
    } while (iVar12 != -1);
  }
  return 0;
LAB_1098046c4:
  do {
    iVar7 = iVar12;
    iVar12 = *(int *)(lVar5 + (long)iVar7 * 4);
  } while (iVar12 != iVar11);
  if (iVar7 == -1) {
LAB_1098046ec:
    *(undefined4 *)(param_1[8] + uVar13 * 4) = *(undefined4 *)(lVar5 + (long)iVar11 * 4);
  }
  else {
    *(undefined4 *)(lVar5 + (long)iVar7 * 4) = *(undefined4 *)(lVar5 + (long)iVar11 * 4);
  }
  lVar5 = (long)*(int *)((long)param_1 + 0xc) + -1;
  plVar3 = (long *)param_1[0xe];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_3,lVar6,param_4);
  }
  iVar12 = (int)lVar5;
  if (iVar12 == iVar11) goto LAB_1098047d8;
  lVar6 = param_1[3];
  plVar3 = (long *)(lVar6 + lVar5 * 0x20);
  uVar2 = *(uint *)(*plVar3 + 0x10) | *(int *)(plVar3[1] + 0x10) << 0x10;
  uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
  uVar2 = uVar2 ^ uVar2 >> 6;
  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
  uVar13 = (long)(int)(uVar2 ^ uVar2 >> 0x10) & (long)(int)param_1[2] - 1U;
  iVar7 = *(int *)(param_1[8] + uVar13 * 4);
  lVar8 = param_1[0xc];
  if (iVar7 == iVar12) {
LAB_1098047ac:
    *(undefined4 *)(param_1[8] + uVar13 * 4) = *(undefined4 *)(lVar8 + lVar5 * 4);
  }
  else {
    do {
      iVar9 = iVar7;
      iVar7 = *(int *)(lVar8 + (long)iVar9 * 4);
    } while (iVar7 != iVar12);
    if (iVar9 == -1) goto LAB_1098047ac;
    *(undefined4 *)(lVar8 + (long)iVar9 * 4) = *(undefined4 *)(lVar8 + lVar5 * 4);
  }
  plVar1 = (long *)(lVar6 + (((long)plVar1 - lVar4) * 0x8000000 >> 0x20) * 0x20);
  lVar6 = *plVar3;
  lVar5 = plVar3[3];
  lVar4 = plVar3[2];
  plVar1[1] = plVar3[1];
  *plVar1 = lVar6;
  plVar1[3] = lVar5;
  plVar1[2] = lVar4;
  lVar6 = param_1[8];
  *(undefined4 *)(param_1[0xc] + (long)iVar11 * 4) = *(undefined4 *)(lVar6 + uVar13 * 4);
  *(int *)(lVar6 + uVar13 * 4) = iVar11;
LAB_1098047d8:
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  return lVar10;
}



/* Entry: 109804800; end: 109804893;  */

void FUN_109804800(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  
  if (0 < *(int *)((long)param_1 + 0xc)) {
    iVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[3] + (long)iVar3 * 0x20);
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x10))(param_2,puVar1);
      if ((int)plVar2 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,*puVar1,puVar1[1],param_3);
      }
    } while (iVar3 < *(int *)((long)param_1 + 0xc));
  }
  return;
}



/* Entry: 109804894; end: 109804a67;  */

void FUN_109804894(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  uint uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  if (*(char *)(param_4 + 0x30) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000109804a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
    return;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x38))();
  uStack_68 = 1;
  lStack_70 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uVar2 = *(uint *)((long)plVar4 + 4);
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    lVar10 = (ulong)uVar2 * 0xc;
    FUN_1098256f4(lVar10,0x10);
    uStack_68 = 1;
    uStack_78 = uVar2;
    lStack_70 = lVar10;
    _bzero();
    uVar6 = 0;
    puVar7 = (undefined4 *)(lVar10 + 8);
    plVar5 = (long *)(plVar4[2] + 8);
    do {
      if (plVar5[-1] == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(plVar5[-1] + 0x10);
      }
      if (*plVar5 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*plVar5 + 0x10);
      }
      puVar7[-1] = uVar8;
      *puVar7 = uVar9;
      puVar7[-2] = (int)uVar6;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 3;
      plVar5 = plVar5 + 4;
    } while (uVar2 != uVar6);
    uStack_7c = uVar2;
    if (uVar2 - 1 != 0) {
      FUN_1098050b4(auStack_80,0,uVar2 - 1);
    }
    iVar11 = 0;
    do {
      puVar1 = (undefined8 *)(plVar4[2] + (long)*(int *)(lVar10 + (long)iVar11 * 0xc) * 0x20);
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x10))(param_2,puVar1);
      if ((int)plVar5 == 0) {
        iVar11 = iVar11 + 1;
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,*puVar1,puVar1[1],param_3);
      }
      uVar3 = uStack_7c;
    } while (iVar11 < (int)uVar2);
  }
  uStack_7c = uVar3;
  FUN_109805068(auStack_80);
  return;
}



/* Entry: 109804a68; end: 109804cb7;  */

void FUN_109804a68(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uStack_71;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  uint uStack_68;
  undefined8 *puStack_60;
  byte bStack_58;
  
  bStack_58 = 1;
  puStack_60 = (undefined8 *)0x0;
  uStack_6c = 0;
  uStack_68 = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    puVar2 = (undefined8 *)0x0;
    uVar5 = 0;
    uVar6 = 0;
    lVar8 = 0;
    do {
      bStack_58 = 1;
      lVar9 = param_1[3];
      iVar4 = (int)uVar5;
      if ((int)uVar6 == iVar4) {
        uVar1 = iVar4 << 1;
        if (iVar4 == 0) {
          uVar1 = 1;
        }
        uVar6 = uVar5;
        if ((int)uVar1 <= iVar4) goto LAB_109804b04;
        if (uVar1 == 0) {
          puVar3 = (undefined8 *)0x0;
        }
        else {
          puVar3 = (undefined8 *)(-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5);
          FUN_1098256f4(puVar3,0x10);
          uVar5 = (ulong)uStack_6c;
          puVar2 = puStack_60;
        }
        uVar6 = uVar5;
        puVar7 = puVar3;
        if ((int)uVar5 < 1) {
          if ((puVar2 != (undefined8 *)0x0) && ((bStack_58 & 1) != 0)) goto LAB_109804b54;
        }
        else {
          do {
            uVar10 = *puVar2;
            uVar12 = puVar2[3];
            uVar11 = puVar2[2];
            puVar7[1] = puVar2[1];
            *puVar7 = uVar10;
            puVar7[3] = uVar12;
            puVar7[2] = uVar11;
            uVar6 = uVar6 - 1;
            puVar7 = puVar7 + 4;
            puVar2 = puVar2 + 4;
          } while (uVar6 != 0);
          if (bStack_58 == 1) {
LAB_109804b54:
            FUN_109825740();
            uVar5 = (ulong)uStack_6c;
          }
        }
        iVar4 = (int)uVar5;
        puVar2 = puVar3;
        uVar5 = (ulong)uVar1;
        uStack_68 = uVar1;
        puStack_60 = puVar3;
      }
      else {
LAB_109804b04:
        iVar4 = (int)uVar6;
      }
      bStack_58 = 1;
      puVar3 = (undefined8 *)(lVar9 + lVar8 * 0x20);
      puVar7 = puVar2 + (long)iVar4 * 4;
      uVar10 = *puVar3;
      uVar12 = puVar3[3];
      uVar11 = puVar3[2];
      puVar7[1] = puVar3[1];
      *puVar7 = uVar10;
      puVar7[3] = uVar12;
      puVar7[2] = uVar11;
      uStack_6c = iVar4 + 1;
      uVar6 = (ulong)uStack_6c;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0xc));
    if (-1 < iVar4) {
      lVar9 = 0;
      lVar8 = 0;
      do {
        (**(code **)(*param_1 + 0x18))
                  (param_1,*(undefined8 *)((long)puStack_60 + lVar9),
                   ((undefined8 *)((long)puStack_60 + lVar9))[1],param_2);
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (lVar8 < (int)uStack_6c);
    }
  }
  if (0 < *(int *)((long)param_1 + 0x54)) {
    lVar8 = 0;
    lVar9 = param_1[0xc];
    do {
      *(undefined4 *)(lVar9 + lVar8 * 4) = 0xffffffff;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0x54));
  }
  if (uStack_6c - 1 != 0 && 0 < (int)uStack_6c) {
    FUN_109803ea0(auStack_70,&uStack_71,0,uStack_6c - 1);
  }
  if (0 < (int)uStack_6c) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      (**(code **)(*param_1 + 0x10))
                (param_1,*(undefined8 *)((long)puStack_60 + lVar9),
                 ((undefined8 *)((long)puStack_60 + lVar9))[1]);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar8 < (int)uStack_6c);
  }
  FUN_109804fd0(auStack_70);
  return;
}



/* Entry: 109804cb8; end: 109804ef3;  */

long * FUN_109804cb8(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  plVar15 = param_1;
  (**(code **)(*param_1 + 0x50))();
  if ((int)plVar15 == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    lVar13 = param_2;
    if (*(int *)(param_2 + 0x10) <= *(int *)(param_3 + 0x10)) {
      lVar13 = param_3;
      param_3 = param_2;
    }
    uVar8 = *(uint *)(param_3 + 0x10) | *(int *)(lVar13 + 0x10) << 0x10;
    uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff);
    uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
    uVar8 = uVar8 ^ uVar8 >> 6;
    uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
    uVar8 = uVar8 ^ uVar8 >> 0x10;
    uVar4 = *(uint *)(param_1 + 2);
    uVar3 = uVar8 & uVar4 - 1;
    iVar14 = *(int *)(param_1[8] + (long)(int)uVar3 * 4);
    if (iVar14 != -1) {
      do {
        plVar15 = (long *)(param_1[3] + (long)iVar14 * 0x20);
        if ((*(uint *)(*plVar15 + 0x10) == *(uint *)(param_3 + 0x10)) &&
           (*(int *)(plVar15[1] + 0x10) == *(int *)(lVar13 + 0x10))) {
          return plVar15;
        }
        iVar14 = *(int *)(param_1[0xc] + (long)iVar14 * 4);
      } while (iVar14 != -1);
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
    uVar11 = uVar5;
    uVar16 = uVar4;
    if (uVar5 == uVar4) {
      uVar7 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar7 = 1;
      }
      uVar11 = uVar4;
      if ((int)uVar4 < (int)uVar7) {
        if (uVar7 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = -(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5;
          FUN_1098256f4(uVar9,0x10);
          uVar16 = *(uint *)((long)param_1 + 0xc);
        }
        if (0 < (int)uVar16) {
          lVar12 = 0;
          do {
            puVar1 = (undefined8 *)(uVar9 + lVar12);
            puVar2 = (undefined8 *)(param_1[3] + lVar12);
            uVar17 = *puVar2;
            uVar19 = puVar2[3];
            uVar18 = puVar2[2];
            puVar1[1] = puVar2[1];
            *puVar1 = uVar17;
            puVar1[3] = uVar19;
            puVar1[2] = uVar18;
            lVar12 = lVar12 + 0x20;
          } while ((ulong)uVar16 << 5 != lVar12);
        }
        if ((param_1[3] != 0) && ((char)param_1[4] == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[3] = uVar9;
        *(uint *)(param_1 + 2) = uVar7;
        uVar11 = *(uint *)((long)param_1 + 0xc);
        uVar16 = uVar7;
      }
    }
    uVar9 = (ulong)(int)uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar11 + 1;
    plVar15 = (long *)(param_1[3] + (long)(int)uVar5 * 0x20);
    plVar10 = (long *)param_1[0xe];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3,lVar13);
      uVar16 = *(uint *)(param_1 + 2);
    }
    if ((int)uVar4 < (int)uVar16) {
      FUN_109804194(param_1);
      uVar9 = (long)(int)param_1[2] - 1U & (long)(int)uVar8;
    }
    lVar12 = lVar13;
    if (*(int *)(lVar13 + 0x10) <= *(int *)(param_3 + 0x10)) {
      lVar12 = param_3;
      param_3 = lVar13;
    }
    plVar15[2] = 0;
    plVar15[3] = 0;
    lVar13 = param_1[8];
    uVar6 = *(undefined4 *)(lVar13 + uVar9 * 4);
    *plVar15 = param_3;
    plVar15[1] = lVar12;
    *(undefined4 *)(param_1[0xc] + (long)(int)uVar5 * 4) = uVar6;
    *(uint *)(lVar13 + uVar9 * 4) = uVar5;
  }
  return plVar15;
}



/* Entry: 109804ef4; end: 109804f77;  */

undefined8 FUN_109804ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109804f78; end: 109804fb3;  */

undefined8 FUN_109804f78(long param_1,long *param_2)

{
  if (*param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
              (*(long **)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return 0;
}



/* Entry: 109804fb4; end: 109804fcf;  */

void FUN_109804fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109804fd0; end: 10980501b;  */

long FUN_109804fd0(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980501c; end: 109805067;  */

long FUN_10980501c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109805068; end: 1098050b3;  */

long FUN_109805068(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 1098050b4; end: 1098051cf;  */

void FUN_1098050b4(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  
  do {
    iVar13 = (int)param_2;
    lVar9 = *(long *)(param_1 + 0x10) + (long)((iVar13 + (int)param_3) / 2) * 0xc;
    iVar1 = *(int *)(lVar9 + 4);
    iVar2 = *(int *)(lVar9 + 8);
    uVar8 = param_3;
    do {
      lVar9 = *(long *)(param_1 + 0x10);
      iVar7 = (int)param_2;
      param_2 = (ulong)iVar7;
      for (puVar10 = (undefined8 *)(lVar9 + (long)iVar7 * 0xc);
          (iVar1 < *(int *)((long)puVar10 + 4) ||
          (*(int *)((long)puVar10 + 4) == iVar1 && iVar2 < *(int *)(puVar10 + 1)));
          puVar10 = (undefined8 *)((long)puVar10 + 0xc)) {
        param_2 = param_2 + 1;
      }
      uVar6 = uVar8 & 0xffffffff;
      uVar5 = uVar8 >> 0x1f;
      iVar7 = (int)uVar8;
      uVar8 = (ulong)iVar7;
      lVar11 = ((-(uVar5 & 1) & 0xfffffffe00000000 | uVar6 << 1) + (long)iVar7) * 4;
      while( true ) {
        iVar7 = *(int *)(lVar9 + lVar11 + 4);
        if ((iVar1 <= iVar7) && (iVar1 != iVar7 || iVar2 <= *(int *)(lVar9 + lVar11 + 8))) break;
        uVar8 = uVar8 - 1;
        lVar11 = lVar11 + -0xc;
      }
      if ((long)param_2 <= (long)uVar8) {
        uVar3 = *(undefined4 *)(puVar10 + 1);
        uVar12 = *puVar10;
        uVar4 = *(undefined4 *)((undefined8 *)(lVar9 + lVar11) + 1);
        *puVar10 = *(undefined8 *)(lVar9 + lVar11);
        *(undefined4 *)(puVar10 + 1) = uVar4;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar11);
        *puVar10 = uVar12;
        *(undefined4 *)(puVar10 + 1) = uVar3;
        param_2 = (ulong)((int)param_2 + 1);
        uVar8 = (ulong)((int)uVar8 - 1);
      }
    } while ((int)param_2 <= (int)uVar8);
    if (iVar13 < (int)uVar8) {
      FUN_1098050b4(param_1);
    }
  } while ((int)param_2 < (int)param_3);
  return;
}



/* Entry: 1098051d0; end: 1098056a3;  */

void FUN_1098051d0(long param_1,long param_2,long *param_3,undefined8 param_4,int param_5)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar34;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uStack_90;
  ulong uStack_88;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar2 = *(long **)(param_1 + 0x10);
  fVar4 = *(float *)(plVar2 + 10);
  fVar17 = *(float *)((long)plVar2 + 0x54);
  fVar16 = *(float *)(plVar2 + 0xb);
  fVar15 = *(float *)(plVar2 + 0xc);
  fVar22 = *(float *)((long)plVar2 + 100);
  fVar13 = *(float *)(plVar2 + 0xd);
  auVar26._0_4_ = fVar15 - fVar4;
  auVar26._4_4_ = fVar22 - fVar17;
  auVar26._8_4_ = fVar13 - fVar16;
  auVar26._12_4_ = 0;
  fVar34 = *(float *)(plVar2 + 0xe);
  fVar23 = *(float *)((long)plVar2 + 0x74);
  fVar35 = *(float *)(plVar2 + 0xf);
  auVar44._0_4_ = fVar34 - fVar4;
  auVar44._4_4_ = fVar23 - fVar17;
  auVar44._8_4_ = fVar35 - fVar16;
  auVar44._12_4_ = 0;
  auVar24 = NEON_ext(auVar26,auVar26,0xc,1);
  auVar25 = NEON_ext(auVar24,auVar26,8,1);
  auVar24 = NEON_ext(auVar44,auVar44,0xc,1);
  auVar43 = NEON_ext(auVar24,auVar44,8,1);
  auVar24._0_4_ = auVar43._0_4_ * auVar26._0_4_ - auVar25._0_4_ * auVar44._0_4_;
  auVar24._4_4_ = auVar43._4_4_ * auVar26._4_4_ - auVar25._4_4_ * auVar44._4_4_;
  auVar24._8_4_ = auVar43._8_4_ * auVar26._8_4_ - auVar25._8_4_ * auVar44._8_4_;
  auVar24._12_4_ = auVar43._12_4_ * 0.0 - auVar25._12_4_ * 0.0;
  auVar44 = NEON_ext(auVar24,auVar24,0xc,1);
  auVar44 = NEON_ext(auVar44,auVar24,8,1);
  fVar7 = auVar44._0_4_;
  auVar43._0_4_ = fVar7 * fVar7;
  fVar50 = auVar44._4_4_;
  auVar43._4_4_ = fVar50 * fVar50;
  fVar14 = auVar44._8_4_;
  auVar43._8_4_ = fVar14 * fVar14;
  auVar43._12_4_ = 0;
  auVar44 = NEON_ext(auVar43,auVar43,8,1);
  fVar42 = auVar43._0_4_ + auVar43._4_4_ + auVar44._0_4_;
  if (1.4210855e-14 <= fVar42) {
    fVar45 = *(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x70);
    fVar48 = *(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x74);
    fVar49 = *(float *)(param_2 + 0x38) - *(float *)(param_2 + 0x78);
    fVar61 = (float)*(undefined8 *)(param_2 + 0x60) * fVar49 +
             *(float *)(param_2 + 0x40) * fVar45 + *(float *)(param_2 + 0x50) * fVar48;
    fVar62 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar49 +
             *(float *)(param_2 + 0x44) * fVar45 + *(float *)(param_2 + 0x54) * fVar48;
    fVar48 = (float)*(undefined8 *)(param_2 + 0x68) * fVar49 +
             *(float *)(param_2 + 0x48) * fVar45 + *(float *)(param_2 + 0x58) * fVar48;
    fVar45 = *(float *)(*(long *)(param_1 + 8) + 0x30) * *(float *)(*(long *)(param_1 + 8) + 0x20);
    fVar49 = *(float *)(param_1 + 0x18) + fVar45;
    fVar42 = 1.0 / SQRT(fVar42);
    auVar46._0_4_ = fVar7 * fVar42;
    auVar46._4_4_ = fVar50 * fVar42;
    auVar46._8_4_ = fVar14 * fVar42;
    auVar46._12_4_ = fVar42 * 0.0;
    auVar8._0_4_ = auVar46._0_4_ * (fVar61 - fVar4);
    auVar8._4_4_ = auVar46._4_4_ * (fVar62 - fVar17);
    auVar8._8_4_ = auVar46._8_4_ * (fVar48 - fVar16);
    auVar8._12_4_ = auVar46._12_4_ * 0.0;
    auVar44 = NEON_ext(auVar8,auVar8,8,1);
    fVar50 = auVar44._0_4_ + auVar8._0_4_ + auVar8._4_4_;
    fVar7 = -fVar50;
    if (0.0 <= fVar50) {
      fVar7 = fVar50;
    }
    if (fVar7 < fVar49) {
      auVar51._0_4_ = -(uint)(fVar50 < 0.0);
      auVar51._4_4_ = auVar51._0_4_;
      auVar51._8_4_ = auVar51._0_4_;
      auVar51._12_4_ = auVar51._0_4_;
      auVar56._0_4_ = -auVar46._0_4_;
      auVar56._4_4_ = -auVar46._4_4_;
      auVar56._8_4_ = -auVar46._8_4_;
      auVar56._12_4_ = -auVar46._12_4_;
      auVar57 = auVar56 ^ (auVar56 ^ auVar46) & ~auVar51;
      auVar47._0_4_ = fVar34 - fVar15;
      auVar47._4_4_ = fVar23 - fVar22;
      auVar47._8_4_ = fVar35 - fVar13;
      auVar47._12_4_ = 0;
      auVar39._0_4_ = fVar4 - fVar34;
      auVar39._4_4_ = fVar17 - fVar23;
      auVar39._8_4_ = fVar16 - fVar35;
      auVar39._12_4_ = 0;
      auVar44 = NEON_ext(auVar57,auVar57,0xc,1);
      auVar44 = NEON_ext(auVar44,auVar57,8,1);
      fVar50 = auVar44._0_4_;
      fVar14 = auVar44._4_4_;
      fVar42 = auVar44._8_4_;
      fVar54 = auVar44._12_4_;
      fVar55 = auVar57._0_4_;
      fVar58 = auVar57._4_4_;
      fVar59 = auVar57._8_4_;
      fVar60 = auVar57._12_4_;
      auVar5._0_4_ = fVar50 * auVar26._0_4_ - auVar25._0_4_ * fVar55;
      auVar5._4_4_ = fVar14 * auVar26._4_4_ - auVar25._4_4_ * fVar58;
      auVar5._8_4_ = fVar42 * auVar26._8_4_ - auVar25._8_4_ * fVar59;
      auVar5._12_4_ = fVar54 * 0.0 - auVar25._12_4_ * fVar60;
      auVar26 = NEON_ext(auVar5,auVar5,0xc,1);
      auVar26 = NEON_ext(auVar26,auVar5,8,1);
      auVar44 = NEON_ext(auVar47,auVar47,0xc,1);
      auVar44 = NEON_ext(auVar44,auVar47,8,1);
      auVar27._0_4_ = fVar50 * auVar47._0_4_ - auVar44._0_4_ * fVar55;
      auVar27._4_4_ = fVar14 * auVar47._4_4_ - auVar44._4_4_ * fVar58;
      auVar27._8_4_ = fVar42 * auVar47._8_4_ - auVar44._8_4_ * fVar59;
      auVar27._12_4_ = fVar54 * 0.0 - auVar44._12_4_ * fVar60;
      auVar44 = NEON_ext(auVar27,auVar27,0xc,1);
      auVar44 = NEON_ext(auVar44,auVar27,8,1);
      auVar24 = NEON_ext(auVar39,auVar39,0xc,1);
      auVar24 = NEON_ext(auVar24,auVar39,8,1);
      auVar40._0_4_ = fVar50 * auVar39._0_4_ - auVar24._0_4_ * fVar55;
      auVar40._4_4_ = fVar14 * auVar39._4_4_ - auVar24._4_4_ * fVar58;
      auVar40._8_4_ = fVar42 * auVar39._8_4_ - auVar24._8_4_ * fVar59;
      auVar40._12_4_ = fVar54 * 0.0 - auVar24._12_4_ * fVar60;
      auVar24 = NEON_ext(auVar40,auVar40,0xc,1);
      auVar24 = NEON_ext(auVar24,auVar40,8,1);
      auVar25._0_4_ = (fVar61 - fVar4) * auVar26._0_4_;
      auVar25._4_4_ = (fVar62 - fVar17) * auVar26._4_4_;
      auVar25._8_4_ = (fVar48 - fVar16) * auVar26._8_4_;
      auVar25._12_4_ = 0;
      auVar26 = NEON_ext(auVar25,auVar25,8,1);
      fVar4 = auVar26._0_4_ + auVar25._0_4_ + auVar25._4_4_;
      auVar18._0_4_ = (fVar61 - fVar15) * auVar44._0_4_;
      auVar18._4_4_ = (fVar62 - fVar22) * auVar44._4_4_;
      auVar18._8_4_ = (fVar48 - fVar13) * auVar44._8_4_;
      auVar18._12_4_ = 0;
      auVar26 = NEON_ext(auVar18,auVar18,8,1);
      fVar15 = auVar26._0_4_ + auVar18._0_4_ + auVar18._4_4_;
      auVar28._0_4_ = (fVar61 - fVar34) * auVar24._0_4_;
      auVar28._4_4_ = (fVar62 - fVar23) * auVar24._4_4_;
      auVar28._8_4_ = (fVar48 - fVar35) * auVar24._8_4_;
      auVar28._12_4_ = 0;
      auVar26 = NEON_ext(auVar28,auVar28,8,1);
      fVar22 = auVar26._0_4_ + auVar28._0_4_ + auVar28._4_4_;
      if ((((0.0 < fVar4) && (0.0 < fVar15)) && (0.0 < fVar22)) ||
         (((fVar4 <= 0.0 && (fVar15 <= 0.0)) && (fVar22 <= 0.0)))) {
        uStack_90 = CONCAT44(fVar62 - fVar58 * fVar7,fVar61 - fVar55 * fVar7);
        uStack_88 = (ulong)(uint)(fVar48 - fVar59 * fVar7);
      }
      else {
        (**(code **)(*plVar2 + 0xd0))();
        if ((int)plVar2 < 1) {
          return;
        }
        bVar1 = false;
        iVar3 = 0;
        fVar15 = fVar49 * fVar49;
        do {
          (**(code **)(**(long **)(param_1 + 0x10) + 0xd8))
                    (*(long **)(param_1 + 0x10),iVar3,&uStack_60,&fStack_70);
          fVar22 = fVar61 - (float)uStack_60;
          fVar13 = fVar62 - uStack_60._4_4_;
          fVar4 = fVar48 - (float)uStack_58;
          fVar17 = fStack_70 - (float)uStack_60;
          fVar16 = fStack_6c - uStack_60._4_4_;
          fVar34 = fStack_68 - (float)uStack_58;
          auVar30._0_4_ = fVar22 * fVar17;
          auVar30._4_4_ = fVar13 * fVar16;
          auVar30._8_4_ = fVar4 * fVar34;
          auVar30._12_4_ = 0;
          auVar26 = NEON_ext(auVar30,auVar30,8,1);
          fVar35 = auVar30._0_4_ + auVar30._4_4_ + auVar26._0_4_;
          fVar23 = 0.0;
          if (0.0 < fVar35) {
            auVar31._0_4_ = fVar17 * fVar17;
            auVar31._4_4_ = fVar16 * fVar16;
            auVar31._8_4_ = fVar34 * fVar34;
            auVar31._12_4_ = 0;
            auVar26 = NEON_ext(auVar31,auVar31,8,1);
            fVar23 = auVar26._0_4_ + auVar31._0_4_ + auVar31._4_4_;
            if (fVar23 <= fVar35) {
              fVar22 = fVar22 - fVar17;
              fVar13 = fVar13 - fVar16;
              fVar4 = fVar4 - fVar34;
              fVar23 = 1.0;
            }
            else {
              fVar23 = fVar35 / fVar23;
              fVar22 = fVar22 - fVar17 * fVar23;
              fVar13 = fVar13 - fVar16 * fVar23;
              fVar4 = fVar4 - fVar34 * fVar23;
            }
          }
          auVar41._8_8_ = uStack_88;
          auVar41._0_8_ = uStack_90;
          auVar6._0_4_ = (float)uStack_60 + fVar17 * fVar23;
          auVar6._4_4_ = uStack_60._4_4_ + fVar16 * fVar23;
          auVar6._8_4_ = (float)uStack_58 + fVar34 * fVar23;
          auVar6._12_4_ = uStack_58._4_4_ + 0.0;
          auVar11._0_4_ = fVar22 * fVar22;
          auVar11._4_4_ = fVar13 * fVar13;
          auVar11._8_4_ = fVar4 * fVar4;
          auVar11._12_4_ = 0;
          auVar26 = NEON_ext(auVar11,auVar11,8,1);
          fVar13 = auVar11._0_4_ + auVar11._4_4_ + auVar26._0_4_;
          auVar20._0_4_ = -(uint)(fVar13 < fVar15);
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_4_ = auVar20._0_4_;
          auVar20._12_4_ = auVar20._0_4_;
          auVar41 = auVar41 ^ (auVar41 ^ auVar6) & auVar20;
          fVar22 = fVar13;
          if (fVar13 >= fVar15) {
            fVar22 = fVar15;
          }
          uStack_88 = auVar41._8_8_;
          uStack_90 = auVar41._0_8_;
          bVar1 = (bool)(fVar13 < fVar15 | bVar1);
          iVar3 = iVar3 + 1;
          plVar2 = *(long **)(param_1 + 0x10);
          (**(code **)(*plVar2 + 0xd0))();
          fVar15 = fVar22;
        } while (iVar3 < (int)plVar2);
        if (!bVar1) {
          return;
        }
      }
      fVar22 = (float)uStack_90;
      fVar61 = fVar61 - fVar22;
      fVar13 = (float)((ulong)uStack_90 >> 0x20);
      fVar62 = fVar62 - fVar13;
      fVar4 = (float)uStack_88;
      fVar48 = fVar48 - fVar4;
      fVar17 = (float)(uStack_88 >> 0x20);
      auVar9._0_4_ = fVar61 * fVar61;
      auVar9._4_4_ = fVar62 * fVar62;
      auVar9._8_4_ = fVar48 * fVar48;
      auVar9._12_4_ = 0;
      auVar26 = NEON_ext(auVar9,auVar9,8,1);
      fVar15 = auVar9._0_4_ + auVar9._4_4_ + auVar26._0_4_;
      if (fVar15 < fVar49 * fVar49) {
        if (1.1920929e-07 < fVar15) {
          fVar16 = 1.0 / SQRT(fVar15);
          auVar57._0_4_ = fVar61 * fVar16;
          auVar57._4_4_ = fVar62 * fVar16;
          auVar57._8_4_ = fVar48 * fVar16;
          auVar57._12_4_ = fVar16 * 0.0;
          fVar45 = fVar45 - SQRT(fVar15);
        }
        fVar45 = -fVar45;
        fVar15 = auVar57._0_4_;
        fVar16 = auVar57._4_4_;
        fVar34 = auVar57._8_4_;
        fVar23 = auVar57._12_4_;
        if (param_5 == 0) {
          auVar32._0_4_ = fVar15 * *(float *)(param_2 + 0x40);
          auVar32._4_4_ = fVar16 * *(float *)(param_2 + 0x44);
          auVar32._8_4_ = fVar34 * *(float *)(param_2 + 0x48);
          auVar32._12_4_ = fVar23 * *(float *)(param_2 + 0x4c);
          auVar38._0_4_ = fVar15 * *(float *)(param_2 + 0x50);
          auVar38._4_4_ = fVar16 * *(float *)(param_2 + 0x54);
          auVar38._8_4_ = fVar34 * *(float *)(param_2 + 0x58);
          auVar38._12_4_ = fVar23 * *(float *)(param_2 + 0x5c);
          auVar44 = NEON_ext(auVar32,auVar32,8,1);
          auVar24 = NEON_ext(auVar38,auVar38,8,1);
          auVar26 = *(undefined1 (*) [16])(param_2 + 0x70);
          auVar53._0_4_ = fVar15 * *(float *)(param_2 + 0x60);
          auVar53._4_4_ = fVar16 * *(float *)(param_2 + 100);
          auVar53._8_4_ = fVar34 * *(float *)(param_2 + 0x68);
          auVar53._12_4_ = 0;
          uStack_60 = CONCAT44(auVar38._0_4_ + auVar38._4_4_ + auVar24._0_4_,
                               auVar32._0_4_ + auVar32._4_4_ + auVar44._0_4_);
          auVar44 = NEON_ext(auVar53,auVar53,8,1);
          uStack_58 = (ulong)(uint)(auVar53._0_4_ + auVar53._4_4_ + auVar44._0_4_ + auVar44._4_4_);
          auVar12._0_4_ = fVar22 * *(float *)(param_2 + 0x40);
          auVar12._4_4_ = fVar13 * *(float *)(param_2 + 0x44);
          auVar12._8_4_ = fVar4 * *(float *)(param_2 + 0x48);
          auVar12._12_4_ = fVar17 * *(float *)(param_2 + 0x4c);
          auVar21._0_4_ = fVar22 * *(float *)(param_2 + 0x50);
          auVar21._4_4_ = fVar13 * *(float *)(param_2 + 0x54);
          auVar21._8_4_ = fVar4 * *(float *)(param_2 + 0x58);
          auVar21._12_4_ = fVar17 * *(float *)(param_2 + 0x5c);
          auVar33._0_4_ = fVar22 * *(float *)(param_2 + 0x60);
          auVar33._4_4_ = fVar13 * *(float *)(param_2 + 100);
          auVar33._8_4_ = fVar4 * *(float *)(param_2 + 0x68);
          auVar24 = NEON_ext(auVar12,auVar12,8,1);
          auVar25 = NEON_ext(auVar21,auVar21,8,1);
          auVar33._12_4_ = 0;
          auVar44 = NEON_ext(auVar33,auVar33,8,1);
          fStack_70 = auVar26._0_4_ + auVar24._0_4_ + auVar12._0_4_ + auVar12._4_4_;
          fStack_6c = auVar26._4_4_ + auVar25._0_4_ + auVar21._0_4_ + auVar21._4_4_;
          fStack_68 = auVar26._8_4_ + auVar33._0_4_ + auVar33._4_4_ + auVar44._0_4_ + auVar44._4_4_;
          fStack_64 = auVar26._12_4_;
        }
        else {
          auVar29._0_4_ = fVar15 * *(float *)(param_2 + 0x40);
          auVar29._4_4_ = fVar16 * *(float *)(param_2 + 0x44);
          auVar29._8_4_ = fVar34 * *(float *)(param_2 + 0x48);
          auVar29._12_4_ = fVar23 * *(float *)(param_2 + 0x4c);
          auVar36._0_4_ = fVar15 * *(float *)(param_2 + 0x50);
          auVar36._4_4_ = fVar16 * *(float *)(param_2 + 0x54);
          auVar36._8_4_ = fVar34 * *(float *)(param_2 + 0x58);
          auVar36._12_4_ = fVar23 * *(float *)(param_2 + 0x5c);
          auVar44 = NEON_ext(auVar29,auVar29,8,1);
          auVar24 = NEON_ext(auVar36,auVar36,8,1);
          auVar26 = *(undefined1 (*) [16])(param_2 + 0x70);
          auVar52._0_4_ = fVar15 * *(float *)(param_2 + 0x60);
          auVar52._4_4_ = fVar16 * *(float *)(param_2 + 100);
          auVar52._8_4_ = fVar34 * *(float *)(param_2 + 0x68);
          auVar52._12_4_ = 0;
          fVar16 = auVar29._0_4_ + auVar29._4_4_ + auVar44._0_4_;
          fVar34 = auVar36._0_4_ + auVar36._4_4_ + auVar24._0_4_;
          auVar44 = NEON_ext(auVar52,auVar52,8,1);
          fVar15 = auVar52._0_4_ + auVar52._4_4_ + auVar44._0_4_ + auVar44._4_4_;
          uStack_58 = CONCAT44(0x80000000,-fVar15);
          uStack_60 = CONCAT44(-fVar34,-fVar16);
          auVar10._0_4_ = fVar22 * *(float *)(param_2 + 0x40);
          auVar10._4_4_ = fVar13 * *(float *)(param_2 + 0x44);
          auVar10._8_4_ = fVar4 * *(float *)(param_2 + 0x48);
          auVar10._12_4_ = fVar17 * *(float *)(param_2 + 0x4c);
          auVar19._0_4_ = fVar22 * *(float *)(param_2 + 0x50);
          auVar19._4_4_ = fVar13 * *(float *)(param_2 + 0x54);
          auVar19._8_4_ = fVar4 * *(float *)(param_2 + 0x58);
          auVar19._12_4_ = fVar17 * *(float *)(param_2 + 0x5c);
          auVar37._0_4_ = fVar22 * *(float *)(param_2 + 0x60);
          auVar37._4_4_ = fVar13 * *(float *)(param_2 + 100);
          auVar37._8_4_ = fVar4 * *(float *)(param_2 + 0x68);
          auVar24 = NEON_ext(auVar10,auVar10,8,1);
          auVar25 = NEON_ext(auVar19,auVar19,8,1);
          auVar37._12_4_ = 0;
          auVar44 = NEON_ext(auVar37,auVar37,8,1);
          fStack_64 = auVar26._12_4_ + 0.0;
          fStack_70 = auVar26._0_4_ + auVar24._0_4_ + auVar10._0_4_ + auVar10._4_4_ +
                      fVar16 * fVar45;
          fStack_6c = auVar26._4_4_ + auVar25._0_4_ + auVar19._0_4_ + auVar19._4_4_ +
                      fVar34 * fVar45;
          fStack_68 = auVar26._8_4_ + auVar37._0_4_ + auVar37._4_4_ + auVar44._0_4_ + auVar44._4_4_
                      + fVar15 * fVar45;
        }
        fStack_64 = fStack_64 + 0.0;
        (**(code **)(*param_3 + 0x20))(param_3,&uStack_60,&fStack_70);
      }
    }
  }
  return;
}



/* Entry: 1098056a4; end: 1098056ab;  */

void FUN_1098056a4(void)

{
  return;
}



/* Entry: 1098056ac; end: 109805733;  */

undefined8 *
FUN_1098056ac(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  long *plVar1;
  
  plVar1 = (long *)*param_3;
  *param_1 = &PTR_FUN_110b12130;
  param_1[1] = plVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  if ((param_2 == 0) &&
     ((**(code **)(*plVar1 + 0x30))
                (plVar1,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_5 + 0x10)),
     (int)plVar1 != 0)) {
    plVar1 = (long *)param_1[1];
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_5 + 0x10));
    param_1[3] = plVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 109805734; end: 109805787;  */

undefined8 * FUN_109805734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12130;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109805788; end: 10980578b;  */

undefined8 * FUN_109805788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12130;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 10980578c; end: 10980579f;  */

void FUN_10980578c(void)

{
  FUN_109805734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098057a0; end: 1098058b7;  */

undefined8
FUN_1098057a0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_d8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x18) != 0) {
    uStack_d0 = *(undefined8 *)(param_3 + 8);
    uStack_c8 = *(undefined8 *)(param_4 + 8);
    *(long *)(param_6 + 8) = *(long *)(param_2 + 0x18);
    uStack_40 = 0x5d5e0b6b;
    puVar3 = *(undefined8 **)(param_3 + 0x18);
    uStack_b8 = puVar3[1];
    uStack_c0 = *puVar3;
    uStack_a8 = puVar3[3];
    uStack_b0 = puVar3[2];
    uStack_98 = puVar3[5];
    uStack_a0 = puVar3[4];
    uStack_88 = puVar3[7];
    uStack_90 = puVar3[6];
    puVar3 = *(undefined8 **)(param_4 + 0x18);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    uStack_58 = puVar3[5];
    uStack_60 = puVar3[4];
    uStack_48 = puVar3[7];
    param_1 = puVar3[6];
    ppuStack_d8 = &PTR_FUN_110b12180;
    uStack_50 = param_1;
    FUN_109805e1c(&ppuStack_d8,&uStack_c0,param_6,*(undefined8 *)(param_5 + 0x18),0);
    if ((*(char *)(param_2 + 0x10) == '\x01') &&
       (lVar2 = *(long *)(param_6 + 8), *(int *)(lVar2 + 0x360) != 0)) {
      lVar4 = *(long *)(*(long *)(param_6 + 0x10) + 0x10);
      lVar5 = *(long *)(*(long *)(param_6 + 0x18) + 0x10);
      lVar1 = lVar4;
      if (*(long *)(lVar2 + 0x350) != lVar4) {
        lVar1 = lVar5;
        lVar5 = lVar4;
      }
      FUN_10982280c(lVar2,lVar1 + 0x10,lVar5 + 0x10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    return 0x3f800000;
  }
  return param_1;
}



/* Entry: 1098058b8; end: 1098058bf;  */

undefined8 FUN_1098058b8(void)

{
  return 0x3f800000;
}



/* Entry: 1098058c0; end: 10980599f;  */

void FUN_1098058c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x18);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 1098059a0; end: 109805a2f;  */

void FUN_1098059a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[1] * param_4[1] + *param_4 * *param_2 + param_4[2] * param_2[2];
  fVar3 = 1.0 - fVar1 * fVar1;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (0.0001 < fVar3) {
    fVar2 = param_4[1] * (param_3[1] - param_1[1]) + (*param_3 - *param_1) * *param_4 +
            (param_3[2] - param_1[2]) * param_4[2];
    fVar5 = param_2[1] * (param_3[1] - param_1[1]) + (*param_3 - *param_1) * *param_2 +
            (param_3[2] - param_1[2]) * param_2[2];
    fVar3 = 1.0 / fVar3;
    fVar4 = fVar3 * (fVar5 - fVar2 * fVar1);
    fVar5 = fVar3 * (fVar1 * fVar5 - fVar2);
  }
  *param_5 = fVar4;
  *param_6 = fVar5;
  return;
}



/* Entry: 109805a30; end: 109805c6b;  */

long * FUN_109805a30(uint param_1,undefined8 *param_2,uint param_3,ulong param_4,int *param_5)

{
  float *pfVar1;
  long *plVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  code *pcVar14;
  uint uVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  long lVar35;
  float fVar37;
  long lVar38;
  ulong uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_480;
  float afStack_3d0 [4];
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  float afStack_390 [4];
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float afStack_370 [12];
  undefined8 uStack_340;
  float afStack_338 [10];
  ulong uStack_310;
  ulong uStack_308;
  float afStack_2f0 [8];
  long lStack_2d0;
  float afStack_2c8 [22];
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float afStack_220 [4];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 uStack_1f8;
  float fStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long alStack_128 [8];
  long lStack_e8;
  ulong uStack_e0;
  int *piStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  long alStack_a8 [4];
  float afStack_88 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 2) {
    fStack_c0 = ((float)*param_2 + (float)param_2[1]) * 0.5;
    fVar36 = ((float)((ulong)*param_2 >> 0x20) + (float)((ulong)param_2[1] >> 0x20)) * 0.5;
  }
  else {
    uVar16 = (ulong)(param_1 - 1);
    fVar31 = 0.0;
    fVar37 = 0.0;
    fVar36 = 0.0;
    puVar20 = param_2;
    do {
      uVar41 = puVar20[1];
      fVar46 = (float)uVar41;
      fVar50 = (float)((ulong)*puVar20 >> 0x20);
      fVar54 = (float)((ulong)uVar41 >> 0x20);
      fVar40 = (float)*puVar20;
      fVar55 = -fVar46 * fVar50 + fVar40 * fVar54;
      fVar36 = fVar36 + fVar55;
      fVar31 = fVar31 + (fVar40 + fVar46) * fVar55;
      fVar37 = fVar37 + (fVar50 + fVar54) * fVar55;
      uVar16 = uVar16 - 1;
      puVar20 = puVar20 + 1;
    } while (uVar16 != 0);
    uVar41 = *(undefined8 *)((long)param_2 + (ulong)(param_1 << 1) * 4 + -8);
    fVar46 = (float)*param_2;
    fVar50 = (float)((ulong)uVar41 >> 0x20);
    fVar54 = (float)((ulong)*param_2 >> 0x20);
    fVar40 = (float)uVar41;
    fVar55 = -fVar46 * fVar50 + fVar40 * fVar54;
    if (ABS(fVar36 + fVar55) <= 1.1920929e-07) {
      fVar36 = 1e+18;
    }
    else {
      fVar36 = 1.0 / ((fVar36 + fVar55) * 3.0);
    }
    fStack_c0 = (fVar31 + (fVar40 + fVar46) * fVar55) * fVar36;
    fVar36 = (fVar37 + (fVar50 + fVar54) * fVar55) * fVar36;
  }
  uStack_b8 = 0;
  lVar30 = 0;
  pfVar17 = (float *)((long)param_2 + 4);
  fStack_bc = fVar36;
  do {
    fVar31 = *pfVar17 - fVar36;
    _atan2f(fVar31,pfVar17[-1] - fStack_c0);
    *(float *)((long)afStack_88 + lVar30) = fVar31;
    pfVar17 = pfVar17 + 2;
    lVar30 = lVar30 + 4;
  } while ((ulong)param_1 << 2 != lVar30);
  plVar8 = (long *)((ulong)param_1 << 2);
  plVar7 = (long *)&UNK_10dfd94a0;
  plVar27 = alStack_a8;
  _memset_pattern16();
  iVar11 = (int)param_4;
  *(undefined4 *)((long)alStack_a8 + (long)iVar11 * 4) = 0;
  *param_5 = iVar11;
  if (1 < param_3) {
    fVar31 = afStack_88[iVar11];
    uVar29 = 1;
    do {
      uVar16 = 0;
      param_5 = param_5 + 1;
      *param_5 = iVar11;
      fVar46 = fVar31 + (6.2831855 / (float)param_3) * (float)uVar29;
      uVar19 = param_4;
      fVar37 = 1e+09;
      fVar36 = fVar46 + -6.2831855;
      if (fVar46 <= 3.1415927) {
        fVar36 = fVar46;
      }
      do {
        if (*(int *)((long)alStack_a8 + uVar16 * 4) != 0) {
          fVar54 = ABS(afStack_88[uVar16] - fVar36);
          fVar46 = 6.2831855 - fVar54;
          if (fVar54 <= 3.1415927) {
            fVar46 = fVar54;
          }
          if (fVar46 < fVar37) {
            *param_5 = (int)uVar16;
            uVar19 = uVar16;
            fVar37 = fVar46;
          }
        }
        uVar16 = uVar16 + 1;
      } while (param_1 != uVar16);
      *(undefined4 *)((long)alStack_a8 + (long)(int)uVar19 * 4) = 0;
      uVar29 = uVar29 + 1;
    } while (uVar29 != param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar27;
  }
  ___stack_chk_fail();
  uStack_e0 = param_4;
  piStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_109805c6c;
  uVar16 = 0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar26 = (long *)0x4;
  plVar13 = plVar8;
  bVar6 = true;
  do {
    bVar4 = bVar6;
    uVar19 = uVar16 ^ 1;
    plVar21 = plVar7;
    iVar11 = -1;
    do {
      plVar7 = plVar13;
      if ((int)plVar26 < 1) {
        plVar26 = (long *)0x0;
      }
      else {
        lVar22 = 0;
        iVar25 = (int)plVar26 + 1;
        fVar31 = (float)iVar11;
        plVar26 = (long *)0x0;
        lVar24 = uVar16 << 2;
        lVar30 = uVar19 << 2;
        plVar13 = plVar7;
        do {
          fVar37 = *(float *)((long)plVar21 + lVar24);
          fVar46 = fVar37 * fVar31;
          fVar36 = *(float *)((long)plVar27 + uVar16 * 4);
          if (fVar46 < fVar36) {
            *(undefined4 *)plVar13 = *(undefined4 *)((long)plVar21 + lVar22);
            *(undefined4 *)((long)plVar13 + 4) = ((undefined4 *)((long)plVar21 + lVar22))[1];
            uVar29 = (int)plVar26 + 1;
            plVar26 = (long *)(ulong)uVar29;
            if ((uVar29 >> 3 & 1) != 0) goto LAB_109805dd0;
            plVar13 = plVar13 + 1;
            fVar37 = *(float *)((long)plVar21 + lVar24);
            fVar36 = *(float *)((long)plVar27 + uVar16 * 4);
            fVar46 = fVar37 * fVar31;
          }
          plVar2 = plVar21;
          if (iVar25 != 2) {
            plVar2 = (long *)((long)plVar21 + lVar22 + 8);
          }
          fVar54 = *(float *)((long)plVar2 + uVar16 * 4);
          if (fVar46 < fVar36 != fVar54 * fVar31 < fVar36) {
            *(float *)((long)plVar13 + uVar19 * 4) =
                 *(float *)((long)plVar21 + lVar30) +
                 (fVar31 * fVar36 - fVar37) *
                 ((*(float *)((long)plVar2 + uVar19 * 4) - *(float *)((long)plVar21 + lVar30)) /
                 (fVar54 - fVar37));
            *(float *)((long)plVar13 + uVar16 * 4) = *(float *)((long)plVar27 + uVar16 * 4) * fVar31
            ;
            uVar29 = (int)plVar26 + 1;
            plVar26 = (long *)(ulong)uVar29;
            if ((uVar29 >> 3 & 1) != 0) goto LAB_109805dd0;
            plVar13 = plVar13 + 1;
          }
          iVar25 = iVar25 + -1;
          lVar30 = lVar30 + 8;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
        } while (1 < iVar25);
      }
      plVar13 = alStack_128;
      if (plVar7 != plVar8) {
        plVar13 = plVar8;
      }
      bVar6 = iVar11 < 0;
      plVar21 = plVar7;
      iVar11 = iVar11 + 2;
    } while (bVar6);
    uVar16 = 1;
    bVar6 = false;
  } while (bVar4);
LAB_109805dd0:
  plVar13 = plVar8;
  if (plVar7 != plVar8) {
    plVar13 = (long *)(-(ulong)(((uint)plVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                      (ulong)((uint)plVar26 << 1) << 2);
    _memcpy();
    plVar27 = plVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar26;
  }
  ___stack_chk_fail();
  ppuStack_140 = &puStack_d0;
  pcStack_138 = FUN_109805e1c;
  lVar30 = 0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    puVar20 = (undefined8 *)((long)plVar7 + lVar30);
    *(undefined8 *)((long)afStack_338 + lVar30 + -8) = *puVar20;
    *(undefined8 *)((long)afStack_370 + lVar30) = puVar20[8];
    *(undefined4 *)((long)afStack_338 + lVar30) = *(undefined4 *)(puVar20 + 1);
    *(undefined4 *)((long)afStack_370 + lVar30 + 8) = *(undefined4 *)(puVar20 + 9);
    lVar30 = lVar30 + 0x10;
  } while (lVar30 != 0x30);
  plVar8 = (long *)plVar27[1];
  lVar23 = plVar8[7];
  lVar24 = plVar8[6];
  lVar30 = lVar24;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  fVar36 = fVar34;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  fVar31 = fVar36;
  (**(code **)(*plVar8 + 0x60))(plVar8);
  plVar27 = (long *)plVar27[2];
  lVar38 = plVar27[7];
  lVar35 = plVar27[6];
  lVar22 = lVar35;
  (**(code **)(*plVar27 + 0x60))(plVar27);
  fVar46 = fVar32;
  (**(code **)(*plVar27 + 0x60))(plVar27);
  fVar37 = fVar46;
  (**(code **)(*plVar27 + 0x60))(plVar27);
  plVar26 = plVar7 + 6;
  fVar34 = (float)lVar30;
  fVar40 = (float)lVar24 + fVar34;
  fVar36 = (float)((ulong)lVar24 >> 0x20) + fVar36;
  fVar31 = (float)lVar23 + fVar31;
  plVar8 = plVar7 + 0xe;
  fVar32 = (float)lVar22;
  fVar54 = (float)lVar35 + fVar32;
  fVar46 = (float)((ulong)lVar35 >> 0x20) + fVar46;
  fVar37 = (float)lVar38 + fVar37;
  fVar66 = (float)*plVar8 - (float)*plVar26;
  fVar67 = (float)((ulong)*plVar8 >> 0x20) - (float)((ulong)*plVar26 >> 0x20);
  fVar68 = (float)plVar7[0xf] - (float)plVar7[7];
  fVar50 = afStack_338[2] * fVar67 + fVar66 * (float)uStack_340 + afStack_338[6] * fVar68;
  fVar62 = (fVar40 + fVar40) * 0.5;
  fVar63 = (fVar36 + fVar36) * 0.5;
  uStack_1e8 = CONCAT44(fVar63,fVar62);
  fStack_1e0 = (fVar31 + fVar31) * 0.5;
  fVar64 = (fVar54 + fVar54) * 0.5;
  fVar65 = (fVar46 + fVar46) * 0.5;
  uStack_1f8 = CONCAT44(fVar65,fVar64);
  fStack_1f0 = (fVar37 + fVar37) * 0.5;
  fVar46 = afStack_338[2] * afStack_370[4] + afStack_370[0] * (float)uStack_340 +
           afStack_370[8] * afStack_338[6];
  fVar36 = afStack_338[2] * afStack_370[5] + afStack_370[1] * (float)uStack_340 +
           afStack_370[9] * afStack_338[6];
  fVar31 = afStack_338[2] * afStack_370[6] + afStack_370[2] * (float)uStack_340 +
           afStack_370[10] * afStack_338[6];
  fVar54 = ABS(fVar46);
  fVar40 = ABS(fVar36);
  fVar55 = ABS(fVar31);
  fVar37 = ABS(fVar50) - (fVar62 + fVar54 * fVar64 + fVar40 * fVar65 + fVar55 * fStack_1f0);
  if (0.0 < fVar37) goto LAB_10980717c;
  fVar56 = afStack_338[3] * fVar67 + fVar66 * uStack_340._4_4_ + afStack_338[7] * fVar68;
  fVar59 = afStack_338[3] * afStack_370[4] + afStack_370[0] * uStack_340._4_4_ +
           afStack_370[8] * afStack_338[7];
  fVar61 = afStack_338[3] * afStack_370[5] + afStack_370[1] * uStack_340._4_4_ +
           afStack_370[9] * afStack_338[7];
  fVar42 = afStack_338[3] * afStack_370[6] + afStack_370[2] * uStack_340._4_4_ +
           afStack_370[10] * afStack_338[7];
  fVar60 = ABS(fVar59);
  fVar58 = ABS(fVar61);
  fVar32 = ABS(fVar42);
  fVar34 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar37) {
    fVar34 = fVar37;
  }
  uVar29 = (uint)(-3.4028235e+38 < fVar37);
  pfVar17 = (float *)0x0;
  if (-3.4028235e+38 < fVar37) {
    pfVar17 = (float *)&uStack_340;
  }
  fVar44 = ABS(fVar56) - (fVar63 + fVar60 * fVar64 + fVar58 * fVar65 + fVar32 * fStack_1f0);
  if (0.0 < fVar44) goto LAB_10980717c;
  fVar33 = afStack_338[4] * fVar67 + fVar66 * afStack_338[0] + afStack_338[8] * fVar68;
  fVar51 = afStack_338[4] * afStack_370[4] + afStack_370[0] * afStack_338[0] +
           afStack_370[8] * afStack_338[8];
  fVar47 = afStack_338[4] * afStack_370[5] + afStack_370[1] * afStack_338[0] +
           afStack_370[9] * afStack_338[8];
  fVar43 = afStack_338[4] * afStack_370[6] + afStack_370[2] * afStack_338[0] +
           afStack_370[10] * afStack_338[8];
  fVar52 = ABS(fVar51);
  fVar53 = ABS(fVar47);
  fVar48 = ABS(fVar43);
  bVar6 = -3.4028235e+38 < fVar37 && fVar50 < 0.0;
  if (fVar34 < fVar44) {
    uVar29 = 2;
    pfVar17 = (float *)((long)&uStack_340 + 4);
    fVar34 = fVar44;
    bVar6 = fVar56 < 0.0;
  }
  fVar37 = ABS(fVar33) - (fStack_1e0 + fVar52 * fVar64 + fVar53 * fVar65 + fVar48 * fStack_1f0);
  if (0.0 < fVar37) goto LAB_10980717c;
  if (fVar34 < fVar37) {
    uVar29 = 3;
    pfVar17 = afStack_338;
    fVar34 = fVar37;
    bVar6 = fVar33 < 0.0;
  }
  fVar37 = fVar67 * afStack_370[4] + fVar66 * afStack_370[0] + fVar68 * afStack_370[8];
  fStack_480 = afStack_370[6];
  fVar44 = ABS(fVar37) - (fVar64 + fVar63 * fVar60 + fVar54 * fVar62 + fVar52 * fStack_1e0);
  if (0.0 < fVar44) goto LAB_10980717c;
  if (fVar34 < fVar44) {
    uVar29 = 4;
    pfVar17 = afStack_370;
    fVar34 = fVar44;
    bVar6 = fVar37 < 0.0;
  }
  fVar37 = fVar67 * afStack_370[5] + fVar66 * afStack_370[1] + fVar68 * afStack_370[9];
  fVar44 = ABS(fVar37) - (fVar65 + fVar63 * fVar58 + fVar40 * fVar62 + fVar53 * fStack_1e0);
  if (0.0 < fVar44) goto LAB_10980717c;
  if (fVar34 < fVar44) {
    uVar29 = 5;
    pfVar17 = afStack_370 + 1;
    fVar34 = fVar44;
    bVar6 = fVar37 < 0.0;
  }
  fVar37 = fVar67 * afStack_370[6] + fVar66 * afStack_370[2] + fVar68 * afStack_370[10];
  fVar66 = ABS(fVar37) - (fStack_1f0 + fVar63 * fVar32 + fVar55 * fVar62 + fVar48 * fStack_1e0);
  if (0.0 < fVar66) goto LAB_10980717c;
  if (fVar34 < fVar66) {
    uVar29 = 6;
    pfVar17 = afStack_370 + 2;
    bVar6 = fVar37 < 0.0;
    fVar34 = fVar66;
  }
  fVar40 = fVar40 + 1e-05;
  fVar55 = fVar55 + 1e-05;
  fVar60 = fVar60 + 1e-05;
  fVar52 = fVar52 + 1e-05;
  fVar37 = -(fVar56 * fVar51) + fVar59 * fVar33;
  fVar66 = ABS(fVar37) -
           (fStack_1e0 * fVar60 + fVar52 * fVar63 + fVar55 * fVar65 + fVar40 * fStack_1f0);
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fStack_48c = afStack_370[10];
  fStack_498 = afStack_370[8];
  fStack_494 = afStack_370[5];
  fStack_49c = afStack_370[4];
  fStack_490 = afStack_370[9];
  fVar54 = fVar54 + 1e-05;
  fVar58 = fVar58 + 1e-05;
  fVar53 = fVar53 + 1e-05;
  fVar44 = 0.0;
  fVar67 = fVar51 * fVar51 + 0.0;
  fVar68 = SQRT(fVar67 + fVar59 * fVar59);
  if (fVar68 <= 1.1920929e-07) {
    fVar69 = 0.0;
    fVar57 = 0.0;
  }
  else {
    fVar66 = fVar66 / fVar68;
    fVar69 = 0.0;
    fVar57 = 0.0;
    if (fVar34 < fVar66 * 1.05) {
      pfVar17 = (float *)0x0;
      fVar44 = 0.0 / fVar68;
      fVar69 = -fVar51 / fVar68;
      bVar6 = fVar37 < 0.0;
      uVar29 = 7;
      fVar57 = fVar59 / fVar68;
      fVar34 = fVar66;
    }
  }
  fVar37 = fVar47 * -fVar56 + fVar61 * fVar33;
  fVar66 = ABS(fVar37) -
           (fStack_1e0 * fVar58 + fVar53 * fVar63 + fVar55 * fVar64 + fVar54 * fStack_1f0);
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fVar32 = fVar32 + 1e-05;
  fVar48 = fVar48 + 1e-05;
  fVar49 = fVar47 * fVar47 + 0.0;
  fVar68 = SQRT(fVar49 + fVar61 * fVar61);
  if ((1.1920929e-07 < fVar68) && (fVar66 = fVar66 / fVar68, fVar34 < fVar66 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = 0.0 / fVar68;
    fVar69 = -fVar47 / fVar68;
    bVar6 = fVar37 < 0.0;
    uVar29 = 8;
    fVar57 = fVar61 / fVar68;
    fVar34 = fVar66;
  }
  fVar37 = fVar43 * -fVar56 + fVar42 * fVar33;
  fVar66 = ABS(fVar37) - (fStack_1e0 * fVar32 + fVar48 * fVar63 + fVar40 * fVar64 + fVar54 * fVar65)
  ;
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fVar68 = fVar43 * fVar43 + 0.0;
  fVar45 = SQRT(fVar68 + fVar42 * fVar42);
  if ((1.1920929e-07 < fVar45) && (fVar66 = fVar66 / fVar45, fVar34 < fVar66 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = 0.0 / fVar45;
    fVar69 = -fVar43 / fVar45;
    bVar6 = fVar37 < 0.0;
    uVar29 = 9;
    fVar57 = fVar42 / fVar45;
    fVar34 = fVar66;
  }
  fVar37 = -(fVar33 * fVar46) + fVar51 * fVar50;
  fVar66 = ABS(fVar37) -
           (fStack_1e0 * fVar54 + fVar52 * fVar62 + fVar32 * fVar65 + fVar58 * fStack_1f0);
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fVar67 = SQRT(fVar67 + fVar46 * fVar46);
  if ((1.1920929e-07 < fVar67) && (fVar66 = fVar66 / fVar67, fVar34 < fVar66 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = fVar51 / fVar67;
    fVar69 = 0.0 / fVar67;
    bVar6 = fVar37 < 0.0;
    uVar29 = 10;
    fVar57 = -fVar46 / fVar67;
    fVar34 = fVar66;
  }
  fVar37 = fVar36 * -fVar33 + fVar47 * fVar50;
  fVar66 = ABS(fVar37) -
           (fStack_1e0 * fVar40 + fVar53 * fVar62 + fVar32 * fVar64 + fVar60 * fStack_1f0);
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fVar67 = SQRT(fVar49 + fVar36 * fVar36);
  if ((1.1920929e-07 < fVar67) && (fVar66 = fVar66 / fVar67, fVar34 < fVar66 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = fVar47 / fVar67;
    fVar69 = 0.0 / fVar67;
    bVar6 = fVar37 < 0.0;
    uVar29 = 0xb;
    fVar57 = -fVar36 / fVar67;
    fVar34 = fVar66;
  }
  fVar37 = fVar31 * -fVar33 + fVar43 * fVar50;
  fVar66 = ABS(fVar37) - (fStack_1e0 * fVar55 + fVar48 * fVar62 + fVar58 * fVar64 + fVar60 * fVar65)
  ;
  if (1.1920929e-07 < fVar66) goto LAB_10980717c;
  fVar67 = SQRT(fVar68 + fVar31 * fVar31);
  if ((1.1920929e-07 < fVar67) && (fVar66 = fVar66 / fVar67, fVar34 < fVar66 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = fVar43 / fVar67;
    fVar69 = 0.0 / fVar67;
    bVar6 = fVar37 < 0.0;
    uVar29 = 0xc;
    fVar57 = -fVar31 / fVar67;
    fVar34 = fVar66;
  }
  fVar37 = -(fVar50 * fVar59) + fVar46 * fVar56;
  fVar54 = ABS(fVar37) - (fVar63 * fVar54 + fVar60 * fVar62 + fVar48 * fVar65 + fVar53 * fStack_1f0)
  ;
  if (1.1920929e-07 < fVar54) goto LAB_10980717c;
  fVar66 = SQRT(fVar46 * fVar46 + fVar59 * fVar59);
  if ((1.1920929e-07 < fVar66) && (fVar54 = fVar54 / fVar66, fVar34 < fVar54 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = -fVar59 / fVar66;
    fVar69 = fVar46 / fVar66;
    bVar6 = fVar37 < 0.0;
    uVar29 = 0xd;
    fVar57 = 0.0 / fVar66;
    fVar34 = fVar54;
  }
  fVar37 = fVar61 * -fVar50 + fVar36 * fVar56;
  fVar46 = ABS(fVar37) - (fVar63 * fVar40 + fVar58 * fVar62 + fVar48 * fVar64 + fVar52 * fStack_1f0)
  ;
  if (1.1920929e-07 < fVar46) goto LAB_10980717c;
  fVar54 = SQRT(fVar36 * fVar36 + fVar61 * fVar61);
  if ((1.1920929e-07 < fVar54) && (fVar46 = fVar46 / fVar54, fVar34 < fVar46 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar44 = -fVar61 / fVar54;
    fVar69 = fVar36 / fVar54;
    bVar6 = fVar37 < 0.0;
    uVar29 = 0xe;
    fVar57 = 0.0 / fVar54;
    fVar34 = fVar46;
  }
  fVar37 = fVar42 * -fVar50 + fVar31 * fVar56;
  fVar32 = ABS(fVar37) - (fVar63 * fVar55 + fVar32 * fVar62 + fVar53 * fVar64 + fVar52 * fVar65);
  if (1.1920929e-07 < fVar32) goto LAB_10980717c;
  fVar36 = SQRT(fVar31 * fVar31 + fVar42 * fVar42);
  if ((fVar36 <= 1.1920929e-07) || (fVar32 = fVar32 / fVar36, fVar32 * 1.05 <= fVar34)) {
    if (uVar29 == 0) goto LAB_10980717c;
    if (pfVar17 == (float *)0x0) goto LAB_10980695c;
    afStack_3d0[0] = *pfVar17;
    afStack_3d0[1] = pfVar17[4];
    afStack_3d0[2] = pfVar17[8];
  }
  else {
    fVar44 = -fVar42 / fVar36;
    fVar69 = fVar31 / fVar36;
    bVar6 = fVar37 < 0.0;
    uVar29 = 0xf;
    fVar57 = 0.0 / fVar36;
    fVar34 = fVar32;
LAB_10980695c:
    afStack_3d0[0] =
         uStack_340._4_4_ * fVar69 + fVar44 * (float)uStack_340 + fVar57 * afStack_338[0];
    afStack_3d0[1] = afStack_338[3] * fVar69 + fVar44 * afStack_338[2] + fVar57 * afStack_338[4];
    afStack_3d0[2] = afStack_338[7] * fVar69 + fVar44 * afStack_338[6] + fVar57 * afStack_338[8];
  }
  if (bVar6) {
    afStack_3d0[0] = -afStack_3d0[0];
    afStack_3d0[1] = -afStack_3d0[1];
    afStack_3d0[2] = -afStack_3d0[2];
  }
  if (uVar29 < 7) {
    if (uVar29 < 4) {
      pfVar17 = (float *)&uStack_340;
      pfVar18 = afStack_370;
      lVar30 = -0xa8;
      lVar22 = -0xb8;
      plVar7 = plVar8;
      plVar8 = plVar26;
      fVar34 = afStack_3d0[0];
      fVar32 = afStack_3d0[1];
      fVar31 = afStack_3d0[2];
    }
    else {
      fVar34 = -afStack_3d0[0];
      pfVar17 = afStack_370;
      pfVar18 = (float *)&uStack_340;
      lVar30 = -0xb8;
      lVar22 = -0xa8;
      fVar32 = -afStack_3d0[1];
      fVar31 = -afStack_3d0[2];
      fStack_480 = afStack_338[4];
      fStack_490 = afStack_338[7];
      fStack_48c = afStack_338[8];
      fStack_498 = afStack_338[6];
      fStack_494 = afStack_338[3];
      fStack_49c = afStack_338[2];
      plVar7 = plVar26;
    }
    lVar30 = lVar30 + -0x140;
    lVar22 = lVar22 + -0x140;
    fStack_380 = fVar32 * fStack_49c + fVar34 * *pfVar18 + fVar31 * fStack_498;
    fStack_37c = fVar32 * fStack_494 + fVar34 * pfVar18[1] + fVar31 * fStack_490;
    fStack_378 = fVar32 * fStack_480 + fVar34 * pfVar18[2] + fVar31 * fStack_48c;
    fVar36 = ABS(fStack_380);
    fVar46 = ABS(fStack_37c);
    fVar37 = ABS(fStack_378);
    if (fVar46 <= fVar36) {
      bVar6 = NAN(fVar36) || NAN(fVar37);
      bVar5 = fVar36 == fVar37;
      bVar4 = fVar36 < fVar37;
      uVar16 = (ulong)(!bVar5 && !bVar4);
      lVar24 = 0;
      if (fVar36 <= fVar37) {
        lVar24 = 2;
      }
    }
    else {
      uVar16 = 0;
      bVar6 = NAN(fVar46) || NAN(fVar37);
      bVar5 = fVar46 == fVar37;
      bVar4 = fVar46 < fVar37;
      lVar24 = 2;
      if (fVar37 < fVar46) {
        lVar24 = 1;
      }
    }
    lVar35 = 2;
    if (bVar5 || bVar4 != bVar6) {
      lVar35 = 1;
    }
    fVar37 = *(float *)((long)&ppuStack_140 + lVar24 * 4 + lVar22 + 0x140);
    lVar23 = 0;
    if (0.0 <= *(float *)((ulong)&fStack_380 | lVar24 << 2)) {
      do {
        *(float *)((long)afStack_390 + lVar23) =
             (*(float *)((long)plVar7 + lVar23) - *(float *)((long)plVar8 + lVar23)) +
             pfVar18[lVar24 + lVar23] * -fVar37;
        lVar23 = lVar23 + 4;
      } while (lVar23 != 0xc);
    }
    else {
      do {
        *(float *)((long)afStack_390 + lVar23) =
             (*(float *)((long)plVar7 + lVar23) - *(float *)((long)plVar8 + lVar23)) +
             pfVar18[lVar24 + lVar23] * fVar37;
        lVar23 = lVar23 + 4;
      } while (lVar23 != 0xc);
    }
    iVar11 = -4;
    if (uVar29 < 4) {
      iVar11 = -1;
    }
    uVar12 = iVar11 + uVar29;
    if (uVar12 == 0) {
      lVar24 = 2;
      lVar23 = 1;
    }
    else {
      lVar23 = 0;
      lVar24 = 1;
      if (uVar12 == 1) {
        lVar24 = 2;
      }
    }
    pfVar1 = pfVar17 + lVar23;
    fVar37 = *pfVar1;
    fVar46 = pfVar1[4];
    fVar40 = pfVar1[8];
    fVar55 = afStack_390[1] * fVar46 + fVar37 * afStack_390[0] + fVar40 * afStack_390[2];
    pfVar17 = pfVar17 + lVar24;
    fVar54 = *pfVar17;
    fVar50 = pfVar17[4];
    fVar36 = pfVar17[8];
    fVar62 = afStack_390[1] * fVar50 + fVar54 * afStack_390[0] + fVar36 * afStack_390[2];
    pfVar17 = pfVar18 + uVar16;
    fVar66 = fVar46 * pfVar17[4] + *pfVar17 * fVar37 + pfVar17[8] * fVar40;
    pfVar18 = pfVar18 + lVar35;
    fVar64 = fVar46 * pfVar18[4] + *pfVar18 * fVar37 + pfVar18[8] * fVar40;
    fVar65 = fVar50 * pfVar17[4] + *pfVar17 * fVar54 + pfVar17[8] * fVar36;
    fVar63 = fVar50 * pfVar18[4] + *pfVar18 * fVar54 + pfVar18[8] * fVar36;
    fVar37 = *(float *)((long)&ppuStack_140 + uVar16 * 4 + lVar22 + 0x140);
    fVar36 = fVar66 * fVar37;
    fVar37 = fVar65 * fVar37;
    fVar46 = *(float *)((long)&ppuStack_140 + lVar35 * 4 + lVar22 + 0x140);
    fVar54 = fVar64 * fVar46;
    fVar46 = fVar63 * fVar46;
    fVar40 = fVar55 - fVar36;
    fVar50 = fVar62 - fVar37;
    afStack_220[0] = fVar40 - fVar54;
    afStack_220[1] = fVar50 - fVar46;
    afStack_220[2] = fVar40 + fVar54;
    afStack_220[3] = fVar50 + fVar46;
    fVar36 = fVar55 + fVar36;
    fVar37 = fVar62 + fVar37;
    fStack_210 = fVar36 + fVar54;
    fStack_20c = fVar37 + fVar46;
    fStack_208 = fVar36 - fVar54;
    fStack_204 = fVar37 - fVar46;
    uStack_228 = *(undefined4 *)((long)&ppuStack_140 + lVar23 * 4 + lVar30 + 0x140);
    uStack_224 = *(undefined4 *)((long)&ppuStack_140 + lVar24 * 4 + lVar30 + 0x140);
    plVar27 = (long *)&uStack_228;
    FUN_109805c6c(plVar27,afStack_220,&uStack_270);
    if (0 < (int)plVar27) {
      uVar16 = 0;
      uVar19 = 0;
      fVar37 = 1.0 / (-(fVar64 * fVar65) + fVar63 * fVar66);
      fVar36 = *(float *)((long)&ppuStack_140 + (ulong)uVar12 * 4 + lVar30 + 0x140);
      do {
        lVar22 = 0;
        fVar46 = *(float *)(&uStack_270 + uVar16);
        fVar54 = *(float *)((long)&uStack_270 + uVar16 * 8 + 4);
        fVar40 = fVar46 - fVar55;
        fVar50 = fVar54 - fVar62;
        iVar11 = (int)uVar19;
        lVar24 = (long)iVar11;
        lVar30 = (-(uVar19 >> 0x1f) & 0xfffffffe00000000 | uVar19 << 1) + (long)iVar11;
        do {
          *(float *)((long)(afStack_2c8 + lVar30 + -2) + lVar22) =
               *(float *)((long)afStack_390 + lVar22) +
               pfVar17[lVar22] * (-(fVar64 * fVar37) * fVar50 + fVar40 * fVar63 * fVar37) +
               pfVar18[lVar22] * (fVar66 * fVar37 * fVar50 + fVar40 * -(fVar65 * fVar37));
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0xc);
        fVar40 = fVar36 - (fVar32 * afStack_2c8[lVar30 + -1] + afStack_2c8[lVar30 + -2] * fVar34 +
                          afStack_2c8[lVar30] * fVar31);
        afStack_2f0[lVar24] = fVar40;
        if (0.0 <= fVar40) {
          *(float *)(&uStack_270 + lVar24) = fVar46;
          *(float *)((long)&uStack_270 + (long)(int)(lVar24 << 1) * 4 + 4) = fVar54;
          uVar19 = (ulong)(iVar11 + 1);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != ((ulong)plVar27 & 0xffffffff));
      uVar12 = (uint)uVar19;
      if (0 < (int)uVar12) {
        uVar15 = uVar12;
        if (3 < uVar12) {
          uVar15 = 4;
        }
        if (uVar12 < 5) {
          uVar16 = CONCAT44(afStack_3d0[1],afStack_3d0[0]) ^ 0x8000000080000000;
          uVar39 = CONCAT44(afStack_3d0[3],afStack_3d0[2]) ^ 0x8000000080000000;
          if (uVar29 < 4) {
            uVar28 = 0;
            plVar7 = &lStack_2d0;
            do {
              lVar30 = 0;
              do {
                *(float *)((long)&uStack_310 + lVar30) =
                     *(float *)((long)plVar7 + lVar30) + *(float *)((long)plVar8 + lVar30);
                lVar30 = lVar30 + 4;
              } while (lVar30 != 0xc);
              plVar27 = plVar13;
              uStack_3a0 = uVar16;
              uStack_398 = uVar39;
              (**(code **)(*plVar13 + 0x20))(-afStack_2f0[uVar28],plVar13,&uStack_3a0,&uStack_310);
              uVar28 = uVar28 + 1;
              plVar7 = (long *)((long)plVar7 + 0xc);
            } while (uVar28 != uVar19);
          }
          else {
            uVar28 = 0;
            plVar7 = &lStack_2d0;
            do {
              lVar30 = 0;
              fVar34 = afStack_2f0[uVar28];
              do {
                *(float *)((long)&uStack_310 + lVar30) =
                     (*(float *)((long)plVar7 + lVar30) + *(float *)((long)plVar8 + lVar30)) -
                     fVar34 * *(float *)((long)afStack_3d0 + lVar30);
                lVar30 = lVar30 + 4;
              } while (lVar30 != 0xc);
              plVar27 = plVar13;
              uStack_3a0 = uVar16;
              uStack_398 = uVar39;
              (**(code **)(*plVar13 + 0x20))(-fVar34,plVar13,&uStack_3a0,&uStack_310);
              uVar28 = uVar28 + 1;
              plVar7 = (long *)((long)plVar7 + 0xc);
            } while (uVar28 != uVar19);
          }
        }
        else {
          uVar10 = 0;
          uVar16 = 1;
          fVar34 = afStack_2f0[0];
          do {
            fVar32 = afStack_2f0[uVar16];
            uVar3 = (int)uVar16;
            if (afStack_2f0[uVar16] <= fVar34) {
              fVar32 = fVar34;
              uVar3 = uVar10;
            }
            uVar10 = uVar3;
            fVar34 = fVar32;
            uVar16 = uVar16 + 1;
          } while (uVar19 != uVar16);
          FUN_109805a30(uVar19,&uStack_270,(ulong)uVar15,uVar10,&uStack_310);
          fVar31 = afStack_3d0[2];
          fVar32 = afStack_3d0[1];
          fVar34 = afStack_3d0[0];
          uVar16 = 0;
          uVar39 = CONCAT44(afStack_3d0[3],afStack_3d0[2]);
          uVar19 = CONCAT44(afStack_3d0[1],afStack_3d0[0]);
          do {
            lVar30 = 0;
            iVar11 = *(int *)((long)&uStack_310 + uVar16 * 4);
            do {
              *(float *)((long)&uStack_3a0 + lVar30) =
                   *(float *)((long)afStack_2c8 + lVar30 + (long)iVar11 * 0xc + -8) +
                   *(float *)((long)plVar8 + lVar30);
              lVar30 = lVar30 + 4;
            } while (lVar30 != 0xc);
            if (uVar29 < 4) {
              fVar37 = afStack_2f0[iVar11];
              pcVar14 = *(code **)(*plVar13 + 0x20);
              puVar9 = &uStack_3a0;
            }
            else {
              fVar37 = afStack_2f0[iVar11];
              uStack_3c0 = CONCAT44((float)(uStack_3a0 >> 0x20) - fVar32 * fVar37,
                                    (float)uStack_3a0 - fVar34 * fVar37);
              uStack_3b8 = (ulong)(uint)((float)uStack_398 - fVar31 * fVar37);
              pcVar14 = *(code **)(*plVar13 + 0x20);
              puVar9 = &uStack_3c0;
            }
            plVar27 = plVar13;
            uStack_3b0 = uVar19 ^ 0x8000000080000000;
            uStack_3a8 = uVar39 ^ 0x8000000080000000;
            (*pcVar14)(-fVar37,plVar13,&uStack_3b0,puVar9);
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
    }
  }
  else {
    lVar30 = 0;
    lStack_2d0 = *plVar26;
    afStack_2c8[0] = *(float *)(plVar7 + 7);
    puVar20 = &uStack_340;
    do {
      lVar22 = 0;
      fVar32 = *(float *)((long)&uStack_1e8 + lVar30 * 4);
      if (afStack_3d0[1] * afStack_338[lVar30 + 2] + afStack_338[lVar30 + -2] * afStack_3d0[0] +
          afStack_338[lVar30 + 6] * afStack_3d0[2] <= 0.0) {
        fVar32 = -fVar32;
      }
      do {
        *(float *)((long)afStack_2c8 + lVar22 + -8) =
             *(float *)((long)afStack_2c8 + lVar22 + -8) +
             *(float *)((long)puVar20 + lVar22 * 4) * fVar32;
        lVar22 = lVar22 + 4;
      } while (lVar22 != 0xc);
      lVar30 = lVar30 + 1;
      puVar20 = (undefined8 *)((long)puVar20 + 4);
    } while (lVar30 != 3);
    lVar30 = 0;
    uStack_270 = *plVar8;
    uStack_268 = (int)plVar7[0xf];
    pfVar17 = afStack_370;
    do {
      lVar22 = 0;
      fVar31 = *(float *)((long)&uStack_1f8 + lVar30 * 4);
      fVar32 = -fVar31;
      if (afStack_3d0[1] * afStack_370[lVar30 + 4] + afStack_370[lVar30] * afStack_3d0[0] +
          afStack_370[lVar30 + 8] * afStack_3d0[2] <= 0.0) {
        fVar32 = fVar31;
      }
      do {
        *(float *)((long)&uStack_270 + lVar22) =
             *(float *)((long)&uStack_270 + lVar22) + pfVar17[lVar22] * fVar32;
        lVar22 = lVar22 + 4;
      } while (lVar22 != 0xc);
      lVar30 = lVar30 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar30 != 3);
    uVar16 = (ulong)(uVar29 - 7) / 3;
    afStack_220[0] = afStack_338[uVar16 - 2];
    afStack_220[1] = afStack_338[uVar16 + 2];
    afStack_220[2] = afStack_338[uVar16 + 6];
    uVar16 = (ulong)((uVar29 - 7) % 3);
    afStack_2f0[0] = afStack_370[uVar16];
    afStack_2f0[1] = afStack_370[uVar16 + 4];
    afStack_2f0[2] = afStack_370[uVar16 + 8];
    FUN_1098059a0(&lStack_2d0,afStack_220,&uStack_270,afStack_2f0,&fStack_380,afStack_390);
    lVar30 = 0;
    do {
      *(float *)((long)afStack_2c8 + lVar30 + -8) =
           *(float *)((long)afStack_2c8 + lVar30 + -8) +
           fStack_380 * *(float *)((long)afStack_220 + lVar30);
      lVar30 = lVar30 + 4;
    } while (lVar30 != 0xc);
    lVar30 = 0;
    do {
      *(float *)((long)&uStack_270 + lVar30) =
           *(float *)((long)&uStack_270 + lVar30) +
           afStack_390[0] * *(float *)((long)afStack_2f0 + lVar30);
      lVar30 = lVar30 + 4;
    } while (lVar30 != 0xc);
    uStack_310 = CONCAT44(afStack_3d0[1],afStack_3d0[0]) ^ 0x8000000080000000;
    uStack_308 = CONCAT44(afStack_3d0[3],afStack_3d0[2]) ^ 0x8000000080000000;
    (**(code **)(*plVar13 + 0x20))(fVar34,plVar13,&uStack_310,&uStack_270);
    plVar27 = plVar13;
  }
LAB_10980717c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return plVar27;
  }
  ___stack_chk_fail();
  return plVar27;
}



/* Entry: 109805c6c; end: 109805e1b;  */

long * FUN_109805c6c(long *param_1,long *param_2,long *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  uint uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  long lVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c0;
  float afStack_310 [4];
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  float afStack_2d0 [4];
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float afStack_2b0 [12];
  undefined8 uStack_280;
  float afStack_278 [10];
  ulong uStack_250;
  ulong uStack_248;
  float afStack_230 [8];
  long lStack_210;
  float afStack_208 [22];
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float afStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_138;
  float fStack_130;
  undefined8 uStack_128;
  float fStack_120;
  long lStack_118;
  undefined1 *puStack_80;
  code *pcStack_78;
  long alStack_68 [8];
  long lStack_28;
  
  uVar10 = 0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = (long *)0x4;
  plVar11 = param_3;
  bVar5 = true;
  do {
    bVar3 = bVar5;
    uVar17 = uVar10 ^ 1;
    plVar19 = param_2;
    iVar8 = -1;
    do {
      param_2 = plVar11;
      if ((int)plVar24 < 1) {
        plVar24 = (long *)0x0;
      }
      else {
        lVar20 = 0;
        iVar23 = (int)plVar24 + 1;
        fVar39 = (float)iVar8;
        plVar24 = (long *)0x0;
        lVar22 = uVar10 << 2;
        lVar12 = uVar17 << 2;
        plVar11 = param_2;
        do {
          fVar34 = *(float *)((long)plVar19 + lVar22);
          fVar33 = fVar34 * fVar39;
          fVar38 = *(float *)((long)param_1 + uVar10 * 4);
          if (fVar33 < fVar38) {
            *(undefined4 *)plVar11 = *(undefined4 *)((long)plVar19 + lVar20);
            *(undefined4 *)((long)plVar11 + 4) = ((undefined4 *)((long)plVar19 + lVar20))[1];
            uVar26 = (int)plVar24 + 1;
            plVar24 = (long *)(ulong)uVar26;
            if ((uVar26 >> 3 & 1) != 0) goto LAB_109805dd0;
            plVar11 = plVar11 + 1;
            fVar34 = *(float *)((long)plVar19 + lVar22);
            fVar38 = *(float *)((long)param_1 + uVar10 * 4);
            fVar33 = fVar34 * fVar39;
          }
          plVar27 = plVar19;
          if (iVar23 != 2) {
            plVar27 = (long *)((long)plVar19 + lVar20 + 8);
          }
          fVar28 = *(float *)((long)plVar27 + uVar10 * 4);
          if (fVar33 < fVar38 != fVar28 * fVar39 < fVar38) {
            *(float *)((long)plVar11 + uVar17 * 4) =
                 *(float *)((long)plVar19 + lVar12) +
                 (fVar39 * fVar38 - fVar34) *
                 ((*(float *)((long)plVar27 + uVar17 * 4) - *(float *)((long)plVar19 + lVar12)) /
                 (fVar28 - fVar34));
            *(float *)((long)plVar11 + uVar10 * 4) = *(float *)((long)param_1 + uVar10 * 4) * fVar39
            ;
            uVar26 = (int)plVar24 + 1;
            plVar24 = (long *)(ulong)uVar26;
            if ((uVar26 >> 3 & 1) != 0) goto LAB_109805dd0;
            plVar11 = plVar11 + 1;
          }
          iVar23 = iVar23 + -1;
          lVar12 = lVar12 + 8;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + 8;
        } while (1 < iVar23);
      }
      plVar11 = alStack_68;
      if (param_2 != param_3) {
        plVar11 = param_3;
      }
      bVar5 = iVar8 < 0;
      plVar19 = param_2;
      iVar8 = iVar8 + 2;
    } while (bVar5);
    uVar10 = 1;
    bVar5 = false;
  } while (bVar3);
LAB_109805dd0:
  plVar11 = param_3;
  if (param_2 != param_3) {
    plVar11 = (long *)(-(ulong)(((uint)plVar24 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                      (ulong)((uint)plVar24 << 1) << 2);
    _memcpy();
    param_1 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar24;
  }
  ___stack_chk_fail();
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_109805e1c;
  lVar12 = 0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    puVar18 = (undefined8 *)((long)param_2 + lVar12);
    *(undefined8 *)((long)afStack_278 + lVar12 + -8) = *puVar18;
    *(undefined8 *)((long)afStack_2b0 + lVar12) = puVar18[8];
    *(undefined4 *)((long)afStack_278 + lVar12) = *(undefined4 *)(puVar18 + 1);
    *(undefined4 *)((long)afStack_2b0 + lVar12 + 8) = *(undefined4 *)(puVar18 + 9);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  plVar24 = (long *)param_1[1];
  lVar21 = plVar24[7];
  lVar22 = plVar24[6];
  lVar12 = lVar22;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  fVar38 = fVar31;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  fVar39 = fVar38;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  plVar24 = (long *)param_1[2];
  lVar35 = plVar24[7];
  lVar32 = plVar24[6];
  lVar20 = lVar32;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  fVar33 = fVar29;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  fVar34 = fVar33;
  (**(code **)(*plVar24 + 0x60))(plVar24);
  plVar27 = param_2 + 6;
  fVar31 = (float)lVar12;
  fVar37 = (float)lVar22 + fVar31;
  fVar38 = (float)((ulong)lVar22 >> 0x20) + fVar38;
  fVar39 = (float)lVar21 + fVar39;
  plVar19 = param_2 + 0xe;
  fVar29 = (float)lVar20;
  fVar28 = (float)lVar32 + fVar29;
  fVar33 = (float)((ulong)lVar32 >> 0x20) + fVar33;
  fVar34 = (float)lVar35 + fVar34;
  fVar62 = (float)*plVar19 - (float)*plVar27;
  fVar63 = (float)((ulong)*plVar19 >> 0x20) - (float)((ulong)*plVar27 >> 0x20);
  fVar64 = (float)param_2[0xf] - (float)param_2[7];
  fVar47 = afStack_278[2] * fVar63 + fVar62 * (float)uStack_280 + afStack_278[6] * fVar64;
  fVar58 = (fVar37 + fVar37) * 0.5;
  fVar59 = (fVar38 + fVar38) * 0.5;
  uStack_128 = CONCAT44(fVar59,fVar58);
  fStack_120 = (fVar39 + fVar39) * 0.5;
  fVar60 = (fVar28 + fVar28) * 0.5;
  fVar61 = (fVar33 + fVar33) * 0.5;
  uStack_138 = CONCAT44(fVar61,fVar60);
  fStack_130 = (fVar34 + fVar34) * 0.5;
  fVar33 = afStack_278[2] * afStack_2b0[4] + afStack_2b0[0] * (float)uStack_280 +
           afStack_2b0[8] * afStack_278[6];
  fVar38 = afStack_278[2] * afStack_2b0[5] + afStack_2b0[1] * (float)uStack_280 +
           afStack_2b0[9] * afStack_278[6];
  fVar39 = afStack_278[2] * afStack_2b0[6] + afStack_2b0[2] * (float)uStack_280 +
           afStack_2b0[10] * afStack_278[6];
  fVar28 = ABS(fVar33);
  fVar37 = ABS(fVar38);
  fVar51 = ABS(fVar39);
  fVar34 = ABS(fVar47) - (fVar58 + fVar28 * fVar60 + fVar37 * fVar61 + fVar51 * fStack_130);
  if (0.0 < fVar34) goto LAB_10980717c;
  fVar52 = afStack_278[3] * fVar63 + fVar62 * uStack_280._4_4_ + afStack_278[7] * fVar64;
  fVar55 = afStack_278[3] * afStack_2b0[4] + afStack_2b0[0] * uStack_280._4_4_ +
           afStack_2b0[8] * afStack_278[7];
  fVar57 = afStack_278[3] * afStack_2b0[5] + afStack_2b0[1] * uStack_280._4_4_ +
           afStack_2b0[9] * afStack_278[7];
  fVar40 = afStack_278[3] * afStack_2b0[6] + afStack_2b0[2] * uStack_280._4_4_ +
           afStack_2b0[10] * afStack_278[7];
  fVar56 = ABS(fVar55);
  fVar54 = ABS(fVar57);
  fVar29 = ABS(fVar40);
  fVar31 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar34) {
    fVar31 = fVar34;
  }
  uVar26 = (uint)(-3.4028235e+38 < fVar34);
  pfVar15 = (float *)0x0;
  if (-3.4028235e+38 < fVar34) {
    pfVar15 = (float *)&uStack_280;
  }
  fVar42 = ABS(fVar52) - (fVar59 + fVar56 * fVar60 + fVar54 * fVar61 + fVar29 * fStack_130);
  if (0.0 < fVar42) goto LAB_10980717c;
  fVar30 = afStack_278[4] * fVar63 + fVar62 * afStack_278[0] + afStack_278[8] * fVar64;
  fVar48 = afStack_278[4] * afStack_2b0[4] + afStack_2b0[0] * afStack_278[0] +
           afStack_2b0[8] * afStack_278[8];
  fVar44 = afStack_278[4] * afStack_2b0[5] + afStack_2b0[1] * afStack_278[0] +
           afStack_2b0[9] * afStack_278[8];
  fVar41 = afStack_278[4] * afStack_2b0[6] + afStack_2b0[2] * afStack_278[0] +
           afStack_2b0[10] * afStack_278[8];
  fVar49 = ABS(fVar48);
  fVar50 = ABS(fVar44);
  fVar45 = ABS(fVar41);
  bVar5 = -3.4028235e+38 < fVar34 && fVar47 < 0.0;
  if (fVar31 < fVar42) {
    uVar26 = 2;
    pfVar15 = (float *)((long)&uStack_280 + 4);
    fVar31 = fVar42;
    bVar5 = fVar52 < 0.0;
  }
  fVar34 = ABS(fVar30) - (fStack_120 + fVar49 * fVar60 + fVar50 * fVar61 + fVar45 * fStack_130);
  if (0.0 < fVar34) goto LAB_10980717c;
  if (fVar31 < fVar34) {
    uVar26 = 3;
    pfVar15 = afStack_278;
    fVar31 = fVar34;
    bVar5 = fVar30 < 0.0;
  }
  fVar34 = fVar63 * afStack_2b0[4] + fVar62 * afStack_2b0[0] + fVar64 * afStack_2b0[8];
  fStack_3c0 = afStack_2b0[6];
  fVar42 = ABS(fVar34) - (fVar60 + fVar59 * fVar56 + fVar28 * fVar58 + fVar49 * fStack_120);
  if (0.0 < fVar42) goto LAB_10980717c;
  if (fVar31 < fVar42) {
    uVar26 = 4;
    pfVar15 = afStack_2b0;
    fVar31 = fVar42;
    bVar5 = fVar34 < 0.0;
  }
  fVar34 = fVar63 * afStack_2b0[5] + fVar62 * afStack_2b0[1] + fVar64 * afStack_2b0[9];
  fVar42 = ABS(fVar34) - (fVar61 + fVar59 * fVar54 + fVar37 * fVar58 + fVar50 * fStack_120);
  if (0.0 < fVar42) goto LAB_10980717c;
  if (fVar31 < fVar42) {
    uVar26 = 5;
    pfVar15 = afStack_2b0 + 1;
    fVar31 = fVar42;
    bVar5 = fVar34 < 0.0;
  }
  fVar34 = fVar63 * afStack_2b0[6] + fVar62 * afStack_2b0[2] + fVar64 * afStack_2b0[10];
  fVar62 = ABS(fVar34) - (fStack_130 + fVar59 * fVar29 + fVar51 * fVar58 + fVar45 * fStack_120);
  if (0.0 < fVar62) goto LAB_10980717c;
  if (fVar31 < fVar62) {
    uVar26 = 6;
    pfVar15 = afStack_2b0 + 2;
    bVar5 = fVar34 < 0.0;
    fVar31 = fVar62;
  }
  fVar37 = fVar37 + 1e-05;
  fVar51 = fVar51 + 1e-05;
  fVar56 = fVar56 + 1e-05;
  fVar49 = fVar49 + 1e-05;
  fVar34 = -(fVar52 * fVar48) + fVar55 * fVar30;
  fVar62 = ABS(fVar34) -
           (fStack_120 * fVar56 + fVar49 * fVar59 + fVar51 * fVar61 + fVar37 * fStack_130);
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fStack_3cc = afStack_2b0[10];
  fStack_3d8 = afStack_2b0[8];
  fStack_3d4 = afStack_2b0[5];
  fStack_3dc = afStack_2b0[4];
  fStack_3d0 = afStack_2b0[9];
  fVar28 = fVar28 + 1e-05;
  fVar54 = fVar54 + 1e-05;
  fVar50 = fVar50 + 1e-05;
  fVar42 = 0.0;
  fVar63 = fVar48 * fVar48 + 0.0;
  fVar64 = SQRT(fVar63 + fVar55 * fVar55);
  if (fVar64 <= 1.1920929e-07) {
    fVar65 = 0.0;
    fVar53 = 0.0;
  }
  else {
    fVar62 = fVar62 / fVar64;
    fVar65 = 0.0;
    fVar53 = 0.0;
    if (fVar31 < fVar62 * 1.05) {
      pfVar15 = (float *)0x0;
      fVar42 = 0.0 / fVar64;
      fVar65 = -fVar48 / fVar64;
      bVar5 = fVar34 < 0.0;
      uVar26 = 7;
      fVar53 = fVar55 / fVar64;
      fVar31 = fVar62;
    }
  }
  fVar34 = fVar44 * -fVar52 + fVar57 * fVar30;
  fVar62 = ABS(fVar34) -
           (fStack_120 * fVar54 + fVar50 * fVar59 + fVar51 * fVar60 + fVar28 * fStack_130);
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fVar29 = fVar29 + 1e-05;
  fVar45 = fVar45 + 1e-05;
  fVar46 = fVar44 * fVar44 + 0.0;
  fVar64 = SQRT(fVar46 + fVar57 * fVar57);
  if ((1.1920929e-07 < fVar64) && (fVar62 = fVar62 / fVar64, fVar31 < fVar62 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = 0.0 / fVar64;
    fVar65 = -fVar44 / fVar64;
    bVar5 = fVar34 < 0.0;
    uVar26 = 8;
    fVar53 = fVar57 / fVar64;
    fVar31 = fVar62;
  }
  fVar34 = fVar41 * -fVar52 + fVar40 * fVar30;
  fVar62 = ABS(fVar34) - (fStack_120 * fVar29 + fVar45 * fVar59 + fVar37 * fVar60 + fVar28 * fVar61)
  ;
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fVar64 = fVar41 * fVar41 + 0.0;
  fVar43 = SQRT(fVar64 + fVar40 * fVar40);
  if ((1.1920929e-07 < fVar43) && (fVar62 = fVar62 / fVar43, fVar31 < fVar62 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = 0.0 / fVar43;
    fVar65 = -fVar41 / fVar43;
    bVar5 = fVar34 < 0.0;
    uVar26 = 9;
    fVar53 = fVar40 / fVar43;
    fVar31 = fVar62;
  }
  fVar34 = -(fVar30 * fVar33) + fVar48 * fVar47;
  fVar62 = ABS(fVar34) -
           (fStack_120 * fVar28 + fVar49 * fVar58 + fVar29 * fVar61 + fVar54 * fStack_130);
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fVar63 = SQRT(fVar63 + fVar33 * fVar33);
  if ((1.1920929e-07 < fVar63) && (fVar62 = fVar62 / fVar63, fVar31 < fVar62 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = fVar48 / fVar63;
    fVar65 = 0.0 / fVar63;
    bVar5 = fVar34 < 0.0;
    uVar26 = 10;
    fVar53 = -fVar33 / fVar63;
    fVar31 = fVar62;
  }
  fVar34 = fVar38 * -fVar30 + fVar44 * fVar47;
  fVar62 = ABS(fVar34) -
           (fStack_120 * fVar37 + fVar50 * fVar58 + fVar29 * fVar60 + fVar56 * fStack_130);
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fVar63 = SQRT(fVar46 + fVar38 * fVar38);
  if ((1.1920929e-07 < fVar63) && (fVar62 = fVar62 / fVar63, fVar31 < fVar62 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = fVar44 / fVar63;
    fVar65 = 0.0 / fVar63;
    bVar5 = fVar34 < 0.0;
    uVar26 = 0xb;
    fVar53 = -fVar38 / fVar63;
    fVar31 = fVar62;
  }
  fVar34 = fVar39 * -fVar30 + fVar41 * fVar47;
  fVar62 = ABS(fVar34) - (fStack_120 * fVar51 + fVar45 * fVar58 + fVar54 * fVar60 + fVar56 * fVar61)
  ;
  if (1.1920929e-07 < fVar62) goto LAB_10980717c;
  fVar63 = SQRT(fVar64 + fVar39 * fVar39);
  if ((1.1920929e-07 < fVar63) && (fVar62 = fVar62 / fVar63, fVar31 < fVar62 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = fVar41 / fVar63;
    fVar65 = 0.0 / fVar63;
    bVar5 = fVar34 < 0.0;
    uVar26 = 0xc;
    fVar53 = -fVar39 / fVar63;
    fVar31 = fVar62;
  }
  fVar34 = -(fVar47 * fVar55) + fVar33 * fVar52;
  fVar28 = ABS(fVar34) - (fVar59 * fVar28 + fVar56 * fVar58 + fVar45 * fVar61 + fVar50 * fStack_130)
  ;
  if (1.1920929e-07 < fVar28) goto LAB_10980717c;
  fVar62 = SQRT(fVar33 * fVar33 + fVar55 * fVar55);
  if ((1.1920929e-07 < fVar62) && (fVar28 = fVar28 / fVar62, fVar31 < fVar28 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = -fVar55 / fVar62;
    fVar65 = fVar33 / fVar62;
    bVar5 = fVar34 < 0.0;
    uVar26 = 0xd;
    fVar53 = 0.0 / fVar62;
    fVar31 = fVar28;
  }
  fVar34 = fVar57 * -fVar47 + fVar38 * fVar52;
  fVar33 = ABS(fVar34) - (fVar59 * fVar37 + fVar54 * fVar58 + fVar45 * fVar60 + fVar49 * fStack_130)
  ;
  if (1.1920929e-07 < fVar33) goto LAB_10980717c;
  fVar28 = SQRT(fVar38 * fVar38 + fVar57 * fVar57);
  if ((1.1920929e-07 < fVar28) && (fVar33 = fVar33 / fVar28, fVar31 < fVar33 * 1.05)) {
    pfVar15 = (float *)0x0;
    fVar42 = -fVar57 / fVar28;
    fVar65 = fVar38 / fVar28;
    bVar5 = fVar34 < 0.0;
    uVar26 = 0xe;
    fVar53 = 0.0 / fVar28;
    fVar31 = fVar33;
  }
  fVar34 = fVar40 * -fVar47 + fVar39 * fVar52;
  fVar29 = ABS(fVar34) - (fVar59 * fVar51 + fVar29 * fVar58 + fVar50 * fVar60 + fVar49 * fVar61);
  if (1.1920929e-07 < fVar29) goto LAB_10980717c;
  fVar38 = SQRT(fVar39 * fVar39 + fVar40 * fVar40);
  if ((fVar38 <= 1.1920929e-07) || (fVar29 = fVar29 / fVar38, fVar29 * 1.05 <= fVar31)) {
    if (uVar26 == 0) goto LAB_10980717c;
    if (pfVar15 == (float *)0x0) goto LAB_10980695c;
    afStack_310[0] = *pfVar15;
    afStack_310[1] = pfVar15[4];
    afStack_310[2] = pfVar15[8];
  }
  else {
    fVar42 = -fVar40 / fVar38;
    fVar65 = fVar39 / fVar38;
    bVar5 = fVar34 < 0.0;
    uVar26 = 0xf;
    fVar53 = 0.0 / fVar38;
    fVar31 = fVar29;
LAB_10980695c:
    afStack_310[0] =
         uStack_280._4_4_ * fVar65 + fVar42 * (float)uStack_280 + fVar53 * afStack_278[0];
    afStack_310[1] = afStack_278[3] * fVar65 + fVar42 * afStack_278[2] + fVar53 * afStack_278[4];
    afStack_310[2] = afStack_278[7] * fVar65 + fVar42 * afStack_278[6] + fVar53 * afStack_278[8];
  }
  if (bVar5) {
    afStack_310[0] = -afStack_310[0];
    afStack_310[1] = -afStack_310[1];
    afStack_310[2] = -afStack_310[2];
  }
  if (uVar26 < 7) {
    if (uVar26 < 4) {
      pfVar15 = (float *)&uStack_280;
      pfVar16 = afStack_2b0;
      lVar12 = -0xa8;
      lVar20 = -0xb8;
      plVar24 = plVar19;
      plVar19 = plVar27;
      fVar31 = afStack_310[0];
      fVar29 = afStack_310[1];
      fVar39 = afStack_310[2];
    }
    else {
      fVar31 = -afStack_310[0];
      pfVar15 = afStack_2b0;
      pfVar16 = (float *)&uStack_280;
      lVar12 = -0xb8;
      lVar20 = -0xa8;
      fVar29 = -afStack_310[1];
      fVar39 = -afStack_310[2];
      fStack_3c0 = afStack_278[4];
      fStack_3d0 = afStack_278[7];
      fStack_3cc = afStack_278[8];
      fStack_3d8 = afStack_278[6];
      fStack_3d4 = afStack_278[3];
      fStack_3dc = afStack_278[2];
      plVar24 = plVar27;
    }
    lVar12 = lVar12 + -0x80;
    lVar20 = lVar20 + -0x80;
    fStack_2c0 = fVar29 * fStack_3dc + fVar31 * *pfVar16 + fVar39 * fStack_3d8;
    fStack_2bc = fVar29 * fStack_3d4 + fVar31 * pfVar16[1] + fVar39 * fStack_3d0;
    fStack_2b8 = fVar29 * fStack_3c0 + fVar31 * pfVar16[2] + fVar39 * fStack_3cc;
    fVar38 = ABS(fStack_2c0);
    fVar33 = ABS(fStack_2bc);
    fVar34 = ABS(fStack_2b8);
    if (fVar33 <= fVar38) {
      bVar5 = NAN(fVar38) || NAN(fVar34);
      bVar4 = fVar38 == fVar34;
      bVar3 = fVar38 < fVar34;
      uVar10 = (ulong)(!bVar4 && !bVar3);
      lVar22 = 0;
      if (fVar38 <= fVar34) {
        lVar22 = 2;
      }
    }
    else {
      uVar10 = 0;
      bVar5 = NAN(fVar33) || NAN(fVar34);
      bVar4 = fVar33 == fVar34;
      bVar3 = fVar33 < fVar34;
      lVar22 = 2;
      if (fVar34 < fVar33) {
        lVar22 = 1;
      }
    }
    lVar32 = 2;
    if (bVar4 || bVar3 != bVar5) {
      lVar32 = 1;
    }
    fVar34 = *(float *)((long)&puStack_80 + lVar22 * 4 + lVar20 + 0x80);
    lVar21 = 0;
    if (0.0 <= *(float *)((ulong)&fStack_2c0 | lVar22 << 2)) {
      do {
        *(float *)((long)afStack_2d0 + lVar21) =
             (*(float *)((long)plVar24 + lVar21) - *(float *)((long)plVar19 + lVar21)) +
             pfVar16[lVar22 + lVar21] * -fVar34;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0xc);
    }
    else {
      do {
        *(float *)((long)afStack_2d0 + lVar21) =
             (*(float *)((long)plVar24 + lVar21) - *(float *)((long)plVar19 + lVar21)) +
             pfVar16[lVar22 + lVar21] * fVar34;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0xc);
    }
    iVar8 = -4;
    if (uVar26 < 4) {
      iVar8 = -1;
    }
    uVar9 = iVar8 + uVar26;
    if (uVar9 == 0) {
      lVar22 = 2;
      lVar21 = 1;
    }
    else {
      lVar21 = 0;
      lVar22 = 1;
      if (uVar9 == 1) {
        lVar22 = 2;
      }
    }
    pfVar1 = pfVar15 + lVar21;
    fVar34 = *pfVar1;
    fVar33 = pfVar1[4];
    fVar37 = pfVar1[8];
    fVar51 = afStack_2d0[1] * fVar33 + fVar34 * afStack_2d0[0] + fVar37 * afStack_2d0[2];
    pfVar15 = pfVar15 + lVar22;
    fVar28 = *pfVar15;
    fVar47 = pfVar15[4];
    fVar38 = pfVar15[8];
    fVar58 = afStack_2d0[1] * fVar47 + fVar28 * afStack_2d0[0] + fVar38 * afStack_2d0[2];
    pfVar15 = pfVar16 + uVar10;
    fVar62 = fVar33 * pfVar15[4] + *pfVar15 * fVar34 + pfVar15[8] * fVar37;
    pfVar16 = pfVar16 + lVar32;
    fVar60 = fVar33 * pfVar16[4] + *pfVar16 * fVar34 + pfVar16[8] * fVar37;
    fVar61 = fVar47 * pfVar15[4] + *pfVar15 * fVar28 + pfVar15[8] * fVar38;
    fVar59 = fVar47 * pfVar16[4] + *pfVar16 * fVar28 + pfVar16[8] * fVar38;
    fVar34 = *(float *)((long)&puStack_80 + uVar10 * 4 + lVar20 + 0x80);
    fVar38 = fVar62 * fVar34;
    fVar34 = fVar61 * fVar34;
    fVar33 = *(float *)((long)&puStack_80 + lVar32 * 4 + lVar20 + 0x80);
    fVar28 = fVar60 * fVar33;
    fVar33 = fVar59 * fVar33;
    fVar37 = fVar51 - fVar38;
    fVar47 = fVar58 - fVar34;
    afStack_160[0] = fVar37 - fVar28;
    afStack_160[1] = fVar47 - fVar33;
    afStack_160[2] = fVar37 + fVar28;
    afStack_160[3] = fVar47 + fVar33;
    fVar38 = fVar51 + fVar38;
    fVar34 = fVar58 + fVar34;
    fStack_150 = fVar38 + fVar28;
    fStack_14c = fVar34 + fVar33;
    fStack_148 = fVar38 - fVar28;
    fStack_144 = fVar34 - fVar33;
    uStack_168 = *(undefined4 *)((long)&puStack_80 + lVar21 * 4 + lVar12 + 0x80);
    uStack_164 = *(undefined4 *)((long)&puStack_80 + lVar22 * 4 + lVar12 + 0x80);
    plVar24 = (long *)&uStack_168;
    FUN_109805c6c(plVar24,afStack_160,&uStack_1b0);
    if (0 < (int)plVar24) {
      uVar10 = 0;
      uVar17 = 0;
      fVar34 = 1.0 / (-(fVar60 * fVar61) + fVar59 * fVar62);
      fVar38 = *(float *)((long)&puStack_80 + (ulong)uVar9 * 4 + lVar12 + 0x80);
      do {
        lVar20 = 0;
        fVar33 = *(float *)(&uStack_1b0 + uVar10);
        fVar28 = *(float *)((long)&uStack_1b0 + uVar10 * 8 + 4);
        fVar37 = fVar33 - fVar51;
        fVar47 = fVar28 - fVar58;
        iVar8 = (int)uVar17;
        lVar22 = (long)iVar8;
        lVar12 = (-(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) + (long)iVar8;
        do {
          *(float *)((long)(afStack_208 + lVar12 + -2) + lVar20) =
               *(float *)((long)afStack_2d0 + lVar20) +
               pfVar15[lVar20] * (-(fVar60 * fVar34) * fVar47 + fVar37 * fVar59 * fVar34) +
               pfVar16[lVar20] * (fVar62 * fVar34 * fVar47 + fVar37 * -(fVar61 * fVar34));
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0xc);
        fVar37 = fVar38 - (fVar29 * afStack_208[lVar12 + -1] + afStack_208[lVar12 + -2] * fVar31 +
                          afStack_208[lVar12] * fVar39);
        afStack_230[lVar22] = fVar37;
        if (0.0 <= fVar37) {
          *(float *)(&uStack_1b0 + lVar22) = fVar33;
          *(float *)((long)&uStack_1b0 + (long)(int)(lVar22 << 1) * 4 + 4) = fVar28;
          uVar17 = (ulong)(iVar8 + 1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != ((ulong)plVar24 & 0xffffffff));
      uVar9 = (uint)uVar17;
      if (0 < (int)uVar9) {
        uVar14 = uVar9;
        if (3 < uVar9) {
          uVar14 = 4;
        }
        if (uVar9 < 5) {
          uVar10 = CONCAT44(afStack_310[1],afStack_310[0]) ^ 0x8000000080000000;
          uVar36 = CONCAT44(afStack_310[3],afStack_310[2]) ^ 0x8000000080000000;
          if (uVar26 < 4) {
            uVar25 = 0;
            plVar27 = &lStack_210;
            do {
              lVar12 = 0;
              do {
                *(float *)((long)&uStack_250 + lVar12) =
                     *(float *)((long)plVar27 + lVar12) + *(float *)((long)plVar19 + lVar12);
                lVar12 = lVar12 + 4;
              } while (lVar12 != 0xc);
              plVar24 = plVar11;
              uStack_2e0 = uVar10;
              uStack_2d8 = uVar36;
              (**(code **)(*plVar11 + 0x20))(-afStack_230[uVar25],plVar11,&uStack_2e0,&uStack_250);
              uVar25 = uVar25 + 1;
              plVar27 = (long *)((long)plVar27 + 0xc);
            } while (uVar25 != uVar17);
          }
          else {
            uVar25 = 0;
            plVar27 = &lStack_210;
            do {
              lVar12 = 0;
              fVar31 = afStack_230[uVar25];
              do {
                *(float *)((long)&uStack_250 + lVar12) =
                     (*(float *)((long)plVar27 + lVar12) + *(float *)((long)plVar19 + lVar12)) -
                     fVar31 * *(float *)((long)afStack_310 + lVar12);
                lVar12 = lVar12 + 4;
              } while (lVar12 != 0xc);
              plVar24 = plVar11;
              uStack_2e0 = uVar10;
              uStack_2d8 = uVar36;
              (**(code **)(*plVar11 + 0x20))(-fVar31,plVar11,&uStack_2e0,&uStack_250);
              uVar25 = uVar25 + 1;
              plVar27 = (long *)((long)plVar27 + 0xc);
            } while (uVar25 != uVar17);
          }
        }
        else {
          uVar7 = 0;
          uVar10 = 1;
          fVar31 = afStack_230[0];
          do {
            fVar29 = afStack_230[uVar10];
            uVar2 = (int)uVar10;
            if (afStack_230[uVar10] <= fVar31) {
              fVar29 = fVar31;
              uVar2 = uVar7;
            }
            uVar7 = uVar2;
            fVar31 = fVar29;
            uVar10 = uVar10 + 1;
          } while (uVar17 != uVar10);
          FUN_109805a30(uVar17,&uStack_1b0,(ulong)uVar14,uVar7,&uStack_250);
          fVar39 = afStack_310[2];
          fVar29 = afStack_310[1];
          fVar31 = afStack_310[0];
          uVar10 = 0;
          uVar36 = CONCAT44(afStack_310[3],afStack_310[2]);
          uVar17 = CONCAT44(afStack_310[1],afStack_310[0]);
          do {
            lVar12 = 0;
            iVar8 = *(int *)((long)&uStack_250 + uVar10 * 4);
            do {
              *(float *)((long)&uStack_2e0 + lVar12) =
                   *(float *)((long)afStack_208 + lVar12 + (long)iVar8 * 0xc + -8) +
                   *(float *)((long)plVar19 + lVar12);
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0xc);
            if (uVar26 < 4) {
              fVar34 = afStack_230[iVar8];
              pcVar13 = *(code **)(*plVar11 + 0x20);
              puVar6 = &uStack_2e0;
            }
            else {
              fVar34 = afStack_230[iVar8];
              uStack_300 = CONCAT44((float)(uStack_2e0 >> 0x20) - fVar29 * fVar34,
                                    (float)uStack_2e0 - fVar31 * fVar34);
              uStack_2f8 = (ulong)(uint)((float)uStack_2d8 - fVar39 * fVar34);
              pcVar13 = *(code **)(*plVar11 + 0x20);
              puVar6 = &uStack_300;
            }
            plVar24 = plVar11;
            uStack_2f0 = uVar17 ^ 0x8000000080000000;
            uStack_2e8 = uVar36 ^ 0x8000000080000000;
            (*pcVar13)(-fVar34,plVar11,&uStack_2f0,puVar6);
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar14);
        }
      }
    }
  }
  else {
    lVar12 = 0;
    lStack_210 = *plVar27;
    afStack_208[0] = *(float *)(param_2 + 7);
    puVar18 = &uStack_280;
    do {
      lVar20 = 0;
      fVar29 = *(float *)((long)&uStack_128 + lVar12 * 4);
      if (afStack_310[1] * afStack_278[lVar12 + 2] + afStack_278[lVar12 + -2] * afStack_310[0] +
          afStack_278[lVar12 + 6] * afStack_310[2] <= 0.0) {
        fVar29 = -fVar29;
      }
      do {
        *(float *)((long)afStack_208 + lVar20 + -8) =
             *(float *)((long)afStack_208 + lVar20 + -8) +
             *(float *)((long)puVar18 + lVar20 * 4) * fVar29;
        lVar20 = lVar20 + 4;
      } while (lVar20 != 0xc);
      lVar12 = lVar12 + 1;
      puVar18 = (undefined8 *)((long)puVar18 + 4);
    } while (lVar12 != 3);
    lVar12 = 0;
    uStack_1b0 = *plVar19;
    uStack_1a8 = (int)param_2[0xf];
    pfVar15 = afStack_2b0;
    do {
      lVar20 = 0;
      fVar39 = *(float *)((long)&uStack_138 + lVar12 * 4);
      fVar29 = -fVar39;
      if (afStack_310[1] * afStack_2b0[lVar12 + 4] + afStack_2b0[lVar12] * afStack_310[0] +
          afStack_2b0[lVar12 + 8] * afStack_310[2] <= 0.0) {
        fVar29 = fVar39;
      }
      do {
        *(float *)((long)&uStack_1b0 + lVar20) =
             *(float *)((long)&uStack_1b0 + lVar20) + pfVar15[lVar20] * fVar29;
        lVar20 = lVar20 + 4;
      } while (lVar20 != 0xc);
      lVar12 = lVar12 + 1;
      pfVar15 = pfVar15 + 1;
    } while (lVar12 != 3);
    uVar10 = (ulong)(uVar26 - 7) / 3;
    afStack_160[0] = afStack_278[uVar10 - 2];
    afStack_160[1] = afStack_278[uVar10 + 2];
    afStack_160[2] = afStack_278[uVar10 + 6];
    uVar10 = (ulong)((uVar26 - 7) % 3);
    afStack_230[0] = afStack_2b0[uVar10];
    afStack_230[1] = afStack_2b0[uVar10 + 4];
    afStack_230[2] = afStack_2b0[uVar10 + 8];
    FUN_1098059a0(&lStack_210,afStack_160,&uStack_1b0,afStack_230,&fStack_2c0,afStack_2d0);
    lVar12 = 0;
    do {
      *(float *)((long)afStack_208 + lVar12 + -8) =
           *(float *)((long)afStack_208 + lVar12 + -8) +
           fStack_2c0 * *(float *)((long)afStack_160 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
    lVar12 = 0;
    do {
      *(float *)((long)&uStack_1b0 + lVar12) =
           *(float *)((long)&uStack_1b0 + lVar12) +
           afStack_2d0[0] * *(float *)((long)afStack_230 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
    uStack_250 = CONCAT44(afStack_310[1],afStack_310[0]) ^ 0x8000000080000000;
    uStack_248 = CONCAT44(afStack_310[3],afStack_310[2]) ^ 0x8000000080000000;
    (**(code **)(*plVar11 + 0x20))(fVar31,plVar11,&uStack_250,&uStack_1b0);
    plVar24 = plVar11;
  }
LAB_10980717c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return plVar24;
  }
  ___stack_chk_fail();
  return plVar24;
}



/* Entry: 109805e1c; end: 1098071c7;  */

void FUN_109805e1c(long param_1,long param_2,long *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  long lVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_350;
  float afStack_2a0 [4];
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  float afStack_260 [4];
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float afStack_240 [12];
  undefined8 uStack_210;
  float afStack_208 [10];
  ulong uStack_1e0;
  ulong uStack_1d8;
  float afStack_1c0 [8];
  undefined8 uStack_1a0;
  float afStack_198 [22];
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float afStack_f0 [4];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  long lStack_a8;
  
  lVar11 = 0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    puVar12 = (undefined8 *)(param_2 + lVar11);
    *(undefined8 *)((long)afStack_208 + lVar11 + -8) = *puVar12;
    *(undefined8 *)((long)afStack_240 + lVar11) = puVar12[8];
    *(undefined4 *)((long)afStack_208 + lVar11) = *(undefined4 *)(puVar12 + 1);
    *(undefined4 *)((long)afStack_240 + lVar11 + 8) = *(undefined4 *)(puVar12 + 9);
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x30);
  plVar26 = *(long **)(param_1 + 8);
  lVar21 = plVar26[7];
  lVar22 = plVar26[6];
  lVar11 = lVar22;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  fVar37 = fVar30;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  fVar38 = fVar37;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  plVar26 = *(long **)(param_1 + 0x10);
  lVar34 = plVar26[7];
  lVar31 = plVar26[6];
  lVar20 = lVar31;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  fVar32 = fVar28;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  fVar33 = fVar32;
  (**(code **)(*plVar26 + 0x60))(plVar26);
  puVar23 = (undefined8 *)(param_2 + 0x30);
  fVar30 = (float)lVar11;
  fVar36 = (float)lVar22 + fVar30;
  fVar37 = (float)((ulong)lVar22 >> 0x20) + fVar37;
  fVar38 = (float)lVar21 + fVar38;
  puVar12 = (undefined8 *)(param_2 + 0x70);
  fVar28 = (float)lVar20;
  fVar27 = (float)lVar31 + fVar28;
  fVar32 = (float)((ulong)lVar31 >> 0x20) + fVar32;
  fVar33 = (float)lVar34 + fVar33;
  fVar61 = (float)*puVar12 - (float)*puVar23;
  fVar62 = (float)((ulong)*puVar12 >> 0x20) - (float)((ulong)*puVar23 >> 0x20);
  fVar63 = (float)*(undefined8 *)(param_2 + 0x78) - (float)*(undefined8 *)(param_2 + 0x38);
  fVar46 = afStack_208[2] * fVar62 + fVar61 * (float)uStack_210 + afStack_208[6] * fVar63;
  fVar57 = (fVar36 + fVar36) * 0.5;
  fVar58 = (fVar37 + fVar37) * 0.5;
  uStack_b8 = CONCAT44(fVar58,fVar57);
  fStack_b0 = (fVar38 + fVar38) * 0.5;
  fVar59 = (fVar27 + fVar27) * 0.5;
  fVar60 = (fVar32 + fVar32) * 0.5;
  uStack_c8 = CONCAT44(fVar60,fVar59);
  fStack_c0 = (fVar33 + fVar33) * 0.5;
  fVar32 = afStack_208[2] * afStack_240[4] + afStack_240[0] * (float)uStack_210 +
           afStack_240[8] * afStack_208[6];
  fVar37 = afStack_208[2] * afStack_240[5] + afStack_240[1] * (float)uStack_210 +
           afStack_240[9] * afStack_208[6];
  fVar38 = afStack_208[2] * afStack_240[6] + afStack_240[2] * (float)uStack_210 +
           afStack_240[10] * afStack_208[6];
  fVar27 = ABS(fVar32);
  fVar36 = ABS(fVar37);
  fVar50 = ABS(fVar38);
  fVar33 = ABS(fVar46) - (fVar57 + fVar27 * fVar59 + fVar36 * fVar60 + fVar50 * fStack_c0);
  if (0.0 < fVar33) goto LAB_10980717c;
  fVar51 = afStack_208[3] * fVar62 + fVar61 * uStack_210._4_4_ + afStack_208[7] * fVar63;
  fVar54 = afStack_208[3] * afStack_240[4] + afStack_240[0] * uStack_210._4_4_ +
           afStack_240[8] * afStack_208[7];
  fVar56 = afStack_208[3] * afStack_240[5] + afStack_240[1] * uStack_210._4_4_ +
           afStack_240[9] * afStack_208[7];
  fVar39 = afStack_208[3] * afStack_240[6] + afStack_240[2] * uStack_210._4_4_ +
           afStack_240[10] * afStack_208[7];
  fVar55 = ABS(fVar54);
  fVar53 = ABS(fVar56);
  fVar28 = ABS(fVar39);
  fVar30 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar33) {
    fVar30 = fVar33;
  }
  uVar25 = (uint)(-3.4028235e+38 < fVar33);
  pfVar17 = (float *)0x0;
  if (-3.4028235e+38 < fVar33) {
    pfVar17 = (float *)&uStack_210;
  }
  fVar41 = ABS(fVar51) - (fVar58 + fVar55 * fVar59 + fVar53 * fVar60 + fVar28 * fStack_c0);
  if (0.0 < fVar41) goto LAB_10980717c;
  fVar29 = afStack_208[4] * fVar62 + fVar61 * afStack_208[0] + afStack_208[8] * fVar63;
  fVar47 = afStack_208[4] * afStack_240[4] + afStack_240[0] * afStack_208[0] +
           afStack_240[8] * afStack_208[8];
  fVar43 = afStack_208[4] * afStack_240[5] + afStack_240[1] * afStack_208[0] +
           afStack_240[9] * afStack_208[8];
  fVar40 = afStack_208[4] * afStack_240[6] + afStack_240[2] * afStack_208[0] +
           afStack_240[10] * afStack_208[8];
  fVar48 = ABS(fVar47);
  fVar49 = ABS(fVar43);
  fVar44 = ABS(fVar40);
  bVar5 = -3.4028235e+38 < fVar33 && fVar46 < 0.0;
  if (fVar30 < fVar41) {
    uVar25 = 2;
    pfVar17 = (float *)((long)&uStack_210 + 4);
    fVar30 = fVar41;
    bVar5 = fVar51 < 0.0;
  }
  fVar33 = ABS(fVar29) - (fStack_b0 + fVar48 * fVar59 + fVar49 * fVar60 + fVar44 * fStack_c0);
  if (0.0 < fVar33) goto LAB_10980717c;
  if (fVar30 < fVar33) {
    uVar25 = 3;
    pfVar17 = afStack_208;
    fVar30 = fVar33;
    bVar5 = fVar29 < 0.0;
  }
  fVar33 = fVar62 * afStack_240[4] + fVar61 * afStack_240[0] + fVar63 * afStack_240[8];
  fStack_350 = afStack_240[6];
  fVar41 = ABS(fVar33) - (fVar59 + fVar58 * fVar55 + fVar27 * fVar57 + fVar48 * fStack_b0);
  if (0.0 < fVar41) goto LAB_10980717c;
  if (fVar30 < fVar41) {
    uVar25 = 4;
    pfVar17 = afStack_240;
    fVar30 = fVar41;
    bVar5 = fVar33 < 0.0;
  }
  fVar33 = fVar62 * afStack_240[5] + fVar61 * afStack_240[1] + fVar63 * afStack_240[9];
  fVar41 = ABS(fVar33) - (fVar60 + fVar58 * fVar53 + fVar36 * fVar57 + fVar49 * fStack_b0);
  if (0.0 < fVar41) goto LAB_10980717c;
  if (fVar30 < fVar41) {
    uVar25 = 5;
    pfVar17 = afStack_240 + 1;
    fVar30 = fVar41;
    bVar5 = fVar33 < 0.0;
  }
  fVar33 = fVar62 * afStack_240[6] + fVar61 * afStack_240[2] + fVar63 * afStack_240[10];
  fVar61 = ABS(fVar33) - (fStack_c0 + fVar58 * fVar28 + fVar50 * fVar57 + fVar44 * fStack_b0);
  if (0.0 < fVar61) goto LAB_10980717c;
  if (fVar30 < fVar61) {
    uVar25 = 6;
    pfVar17 = afStack_240 + 2;
    bVar5 = fVar33 < 0.0;
    fVar30 = fVar61;
  }
  fVar36 = fVar36 + 1e-05;
  fVar50 = fVar50 + 1e-05;
  fVar55 = fVar55 + 1e-05;
  fVar48 = fVar48 + 1e-05;
  fVar33 = -(fVar51 * fVar47) + fVar54 * fVar29;
  fVar61 = ABS(fVar33) -
           (fStack_b0 * fVar55 + fVar48 * fVar58 + fVar50 * fVar60 + fVar36 * fStack_c0);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fStack_35c = afStack_240[10];
  fStack_368 = afStack_240[8];
  fStack_364 = afStack_240[5];
  fStack_36c = afStack_240[4];
  fStack_360 = afStack_240[9];
  fVar27 = fVar27 + 1e-05;
  fVar53 = fVar53 + 1e-05;
  fVar49 = fVar49 + 1e-05;
  fVar41 = 0.0;
  fVar62 = fVar47 * fVar47 + 0.0;
  fVar63 = SQRT(fVar62 + fVar54 * fVar54);
  if (fVar63 <= 1.1920929e-07) {
    fVar64 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar61 = fVar61 / fVar63;
    fVar64 = 0.0;
    fVar52 = 0.0;
    if (fVar30 < fVar61 * 1.05) {
      pfVar17 = (float *)0x0;
      fVar41 = 0.0 / fVar63;
      fVar64 = -fVar47 / fVar63;
      bVar5 = fVar33 < 0.0;
      uVar25 = 7;
      fVar52 = fVar54 / fVar63;
      fVar30 = fVar61;
    }
  }
  fVar33 = fVar43 * -fVar51 + fVar56 * fVar29;
  fVar61 = ABS(fVar33) -
           (fStack_b0 * fVar53 + fVar49 * fVar58 + fVar50 * fVar59 + fVar27 * fStack_c0);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fVar28 = fVar28 + 1e-05;
  fVar44 = fVar44 + 1e-05;
  fVar45 = fVar43 * fVar43 + 0.0;
  fVar63 = SQRT(fVar45 + fVar56 * fVar56);
  if ((1.1920929e-07 < fVar63) && (fVar61 = fVar61 / fVar63, fVar30 < fVar61 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = 0.0 / fVar63;
    fVar64 = -fVar43 / fVar63;
    bVar5 = fVar33 < 0.0;
    uVar25 = 8;
    fVar52 = fVar56 / fVar63;
    fVar30 = fVar61;
  }
  fVar33 = fVar40 * -fVar51 + fVar39 * fVar29;
  fVar61 = ABS(fVar33) - (fStack_b0 * fVar28 + fVar44 * fVar58 + fVar36 * fVar59 + fVar27 * fVar60);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fVar63 = fVar40 * fVar40 + 0.0;
  fVar42 = SQRT(fVar63 + fVar39 * fVar39);
  if ((1.1920929e-07 < fVar42) && (fVar61 = fVar61 / fVar42, fVar30 < fVar61 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = 0.0 / fVar42;
    fVar64 = -fVar40 / fVar42;
    bVar5 = fVar33 < 0.0;
    uVar25 = 9;
    fVar52 = fVar39 / fVar42;
    fVar30 = fVar61;
  }
  fVar33 = -(fVar29 * fVar32) + fVar47 * fVar46;
  fVar61 = ABS(fVar33) -
           (fStack_b0 * fVar27 + fVar48 * fVar57 + fVar28 * fVar60 + fVar53 * fStack_c0);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fVar62 = SQRT(fVar62 + fVar32 * fVar32);
  if ((1.1920929e-07 < fVar62) && (fVar61 = fVar61 / fVar62, fVar30 < fVar61 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = fVar47 / fVar62;
    fVar64 = 0.0 / fVar62;
    bVar5 = fVar33 < 0.0;
    uVar25 = 10;
    fVar52 = -fVar32 / fVar62;
    fVar30 = fVar61;
  }
  fVar33 = fVar37 * -fVar29 + fVar43 * fVar46;
  fVar61 = ABS(fVar33) -
           (fStack_b0 * fVar36 + fVar49 * fVar57 + fVar28 * fVar59 + fVar55 * fStack_c0);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fVar62 = SQRT(fVar45 + fVar37 * fVar37);
  if ((1.1920929e-07 < fVar62) && (fVar61 = fVar61 / fVar62, fVar30 < fVar61 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = fVar43 / fVar62;
    fVar64 = 0.0 / fVar62;
    bVar5 = fVar33 < 0.0;
    uVar25 = 0xb;
    fVar52 = -fVar37 / fVar62;
    fVar30 = fVar61;
  }
  fVar33 = fVar38 * -fVar29 + fVar40 * fVar46;
  fVar61 = ABS(fVar33) - (fStack_b0 * fVar50 + fVar44 * fVar57 + fVar53 * fVar59 + fVar55 * fVar60);
  if (1.1920929e-07 < fVar61) goto LAB_10980717c;
  fVar62 = SQRT(fVar63 + fVar38 * fVar38);
  if ((1.1920929e-07 < fVar62) && (fVar61 = fVar61 / fVar62, fVar30 < fVar61 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = fVar40 / fVar62;
    fVar64 = 0.0 / fVar62;
    bVar5 = fVar33 < 0.0;
    uVar25 = 0xc;
    fVar52 = -fVar38 / fVar62;
    fVar30 = fVar61;
  }
  fVar33 = -(fVar46 * fVar54) + fVar32 * fVar51;
  fVar27 = ABS(fVar33) - (fVar58 * fVar27 + fVar55 * fVar57 + fVar44 * fVar60 + fVar49 * fStack_c0);
  if (1.1920929e-07 < fVar27) goto LAB_10980717c;
  fVar61 = SQRT(fVar32 * fVar32 + fVar54 * fVar54);
  if ((1.1920929e-07 < fVar61) && (fVar27 = fVar27 / fVar61, fVar30 < fVar27 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = -fVar54 / fVar61;
    fVar64 = fVar32 / fVar61;
    bVar5 = fVar33 < 0.0;
    uVar25 = 0xd;
    fVar52 = 0.0 / fVar61;
    fVar30 = fVar27;
  }
  fVar33 = fVar56 * -fVar46 + fVar37 * fVar51;
  fVar32 = ABS(fVar33) - (fVar58 * fVar36 + fVar53 * fVar57 + fVar44 * fVar59 + fVar48 * fStack_c0);
  if (1.1920929e-07 < fVar32) goto LAB_10980717c;
  fVar27 = SQRT(fVar37 * fVar37 + fVar56 * fVar56);
  if ((1.1920929e-07 < fVar27) && (fVar32 = fVar32 / fVar27, fVar30 < fVar32 * 1.05)) {
    pfVar17 = (float *)0x0;
    fVar41 = -fVar56 / fVar27;
    fVar64 = fVar37 / fVar27;
    bVar5 = fVar33 < 0.0;
    uVar25 = 0xe;
    fVar52 = 0.0 / fVar27;
    fVar30 = fVar32;
  }
  fVar33 = fVar39 * -fVar46 + fVar38 * fVar51;
  fVar28 = ABS(fVar33) - (fVar58 * fVar50 + fVar28 * fVar57 + fVar49 * fVar59 + fVar48 * fVar60);
  if (1.1920929e-07 < fVar28) goto LAB_10980717c;
  fVar37 = SQRT(fVar38 * fVar38 + fVar39 * fVar39);
  if ((fVar37 <= 1.1920929e-07) || (fVar28 = fVar28 / fVar37, fVar28 * 1.05 <= fVar30)) {
    if (uVar25 == 0) goto LAB_10980717c;
    if (pfVar17 == (float *)0x0) goto LAB_10980695c;
    afStack_2a0[0] = *pfVar17;
    afStack_2a0[1] = pfVar17[4];
    afStack_2a0[2] = pfVar17[8];
  }
  else {
    fVar41 = -fVar39 / fVar37;
    fVar64 = fVar38 / fVar37;
    bVar5 = fVar33 < 0.0;
    uVar25 = 0xf;
    fVar52 = 0.0 / fVar37;
    fVar30 = fVar28;
LAB_10980695c:
    afStack_2a0[0] =
         uStack_210._4_4_ * fVar64 + fVar41 * (float)uStack_210 + fVar52 * afStack_208[0];
    afStack_2a0[1] = afStack_208[3] * fVar64 + fVar41 * afStack_208[2] + fVar52 * afStack_208[4];
    afStack_2a0[2] = afStack_208[7] * fVar64 + fVar41 * afStack_208[6] + fVar52 * afStack_208[8];
  }
  if (bVar5) {
    afStack_2a0[0] = -afStack_2a0[0];
    afStack_2a0[1] = -afStack_2a0[1];
    afStack_2a0[2] = -afStack_2a0[2];
  }
  if (uVar25 < 7) {
    if (uVar25 < 4) {
      pfVar17 = (float *)&uStack_210;
      pfVar18 = afStack_240;
      lVar11 = -0xa8;
      lVar20 = -0xb8;
      puVar19 = puVar12;
      puVar12 = puVar23;
      fVar30 = afStack_2a0[0];
      fVar28 = afStack_2a0[1];
      fVar38 = afStack_2a0[2];
    }
    else {
      fVar30 = -afStack_2a0[0];
      pfVar17 = afStack_240;
      pfVar18 = (float *)&uStack_210;
      lVar11 = -0xb8;
      lVar20 = -0xa8;
      fVar28 = -afStack_2a0[1];
      fVar38 = -afStack_2a0[2];
      fStack_350 = afStack_208[4];
      fStack_360 = afStack_208[7];
      fStack_35c = afStack_208[8];
      fStack_368 = afStack_208[6];
      fStack_364 = afStack_208[3];
      fStack_36c = afStack_208[2];
      puVar19 = puVar23;
    }
    lVar11 = lVar11 + -0x10;
    lVar20 = lVar20 + -0x10;
    fStack_250 = fVar28 * fStack_36c + fVar30 * *pfVar18 + fVar38 * fStack_368;
    fStack_24c = fVar28 * fStack_364 + fVar30 * pfVar18[1] + fVar38 * fStack_360;
    fStack_248 = fVar28 * fStack_350 + fVar30 * pfVar18[2] + fVar38 * fStack_35c;
    fVar37 = ABS(fStack_250);
    fVar32 = ABS(fStack_24c);
    fVar33 = ABS(fStack_248);
    if (fVar32 <= fVar37) {
      bVar5 = NAN(fVar37) || NAN(fVar33);
      bVar4 = fVar37 == fVar33;
      bVar3 = fVar37 < fVar33;
      uVar13 = (ulong)(!bVar4 && !bVar3);
      lVar22 = 0;
      if (fVar37 <= fVar33) {
        lVar22 = 2;
      }
    }
    else {
      uVar13 = 0;
      bVar5 = NAN(fVar32) || NAN(fVar33);
      bVar4 = fVar32 == fVar33;
      bVar3 = fVar32 < fVar33;
      lVar22 = 2;
      if (fVar33 < fVar32) {
        lVar22 = 1;
      }
    }
    lVar31 = 2;
    if (bVar4 || bVar3 != bVar5) {
      lVar31 = 1;
    }
    fVar33 = *(float *)(&stack0xfffffffffffffff0 + lVar22 * 4 + lVar20 + 0x10);
    lVar21 = 0;
    if (0.0 <= *(float *)((ulong)&fStack_250 | lVar22 << 2)) {
      do {
        *(float *)((long)afStack_260 + lVar21) =
             (*(float *)((long)puVar19 + lVar21) - *(float *)((long)puVar12 + lVar21)) +
             pfVar18[lVar22 + lVar21] * -fVar33;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0xc);
    }
    else {
      do {
        *(float *)((long)afStack_260 + lVar21) =
             (*(float *)((long)puVar19 + lVar21) - *(float *)((long)puVar12 + lVar21)) +
             pfVar18[lVar22 + lVar21] * fVar33;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0xc);
    }
    iVar9 = -4;
    if (uVar25 < 4) {
      iVar9 = -1;
    }
    uVar10 = iVar9 + uVar25;
    if (uVar10 == 0) {
      lVar22 = 2;
      lVar21 = 1;
    }
    else {
      lVar21 = 0;
      lVar22 = 1;
      if (uVar10 == 1) {
        lVar22 = 2;
      }
    }
    pfVar1 = pfVar17 + lVar21;
    fVar33 = *pfVar1;
    fVar32 = pfVar1[4];
    fVar36 = pfVar1[8];
    fVar50 = afStack_260[1] * fVar32 + fVar33 * afStack_260[0] + fVar36 * afStack_260[2];
    pfVar17 = pfVar17 + lVar22;
    fVar27 = *pfVar17;
    fVar46 = pfVar17[4];
    fVar37 = pfVar17[8];
    fVar57 = afStack_260[1] * fVar46 + fVar27 * afStack_260[0] + fVar37 * afStack_260[2];
    pfVar17 = pfVar18 + uVar13;
    fVar61 = fVar32 * pfVar17[4] + *pfVar17 * fVar33 + pfVar17[8] * fVar36;
    pfVar18 = pfVar18 + lVar31;
    fVar59 = fVar32 * pfVar18[4] + *pfVar18 * fVar33 + pfVar18[8] * fVar36;
    fVar60 = fVar46 * pfVar17[4] + *pfVar17 * fVar27 + pfVar17[8] * fVar37;
    fVar58 = fVar46 * pfVar18[4] + *pfVar18 * fVar27 + pfVar18[8] * fVar37;
    fVar37 = fVar61 * *(float *)(&stack0xfffffffffffffff0 + uVar13 * 4 + lVar20 + 0x10);
    fVar33 = fVar60 * *(float *)(&stack0xfffffffffffffff0 + uVar13 * 4 + lVar20 + 0x10);
    fVar27 = fVar59 * *(float *)(&stack0xfffffffffffffff0 + lVar31 * 4 + lVar20 + 0x10);
    fVar32 = fVar58 * *(float *)(&stack0xfffffffffffffff0 + lVar31 * 4 + lVar20 + 0x10);
    fVar36 = fVar50 - fVar37;
    fVar46 = fVar57 - fVar33;
    afStack_f0[0] = fVar36 - fVar27;
    afStack_f0[1] = fVar46 - fVar32;
    afStack_f0[2] = fVar36 + fVar27;
    afStack_f0[3] = fVar46 + fVar32;
    fVar37 = fVar50 + fVar37;
    fVar33 = fVar57 + fVar33;
    fStack_e0 = fVar37 + fVar27;
    fStack_dc = fVar33 + fVar32;
    fStack_d8 = fVar37 - fVar27;
    fStack_d4 = fVar33 - fVar32;
    uStack_f8 = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar21 * 4 + lVar11 + 0x10);
    uStack_f4 = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar22 * 4 + lVar11 + 0x10);
    puVar6 = &uStack_f8;
    FUN_109805c6c(puVar6,afStack_f0,&uStack_140);
    if (0 < (int)puVar6) {
      uVar13 = 0;
      uVar14 = 0;
      fVar33 = 1.0 / (-(fVar59 * fVar60) + fVar58 * fVar61);
      fVar37 = *(float *)(&stack0xfffffffffffffff0 + (ulong)uVar10 * 4 + lVar11 + 0x10);
      do {
        lVar20 = 0;
        fVar32 = *(float *)(&uStack_140 + uVar13);
        fVar27 = *(float *)((long)&uStack_140 + uVar13 * 8 + 4);
        fVar36 = fVar32 - fVar50;
        fVar46 = fVar27 - fVar57;
        iVar9 = (int)uVar14;
        lVar22 = (long)iVar9;
        lVar11 = (-(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + (long)iVar9;
        do {
          *(float *)((long)(afStack_198 + lVar11 + -2) + lVar20) =
               *(float *)((long)afStack_260 + lVar20) +
               pfVar17[lVar20] * (-(fVar59 * fVar33) * fVar46 + fVar36 * fVar58 * fVar33) +
               pfVar18[lVar20] * (fVar61 * fVar33 * fVar46 + fVar36 * -(fVar60 * fVar33));
          lVar20 = lVar20 + 4;
        } while (lVar20 != 0xc);
        fVar36 = fVar37 - (fVar28 * afStack_198[lVar11 + -1] + afStack_198[lVar11 + -2] * fVar30 +
                          afStack_198[lVar11] * fVar38);
        afStack_1c0[lVar22] = fVar36;
        if (0.0 <= fVar36) {
          *(float *)(&uStack_140 + lVar22) = fVar32;
          *(float *)((long)&uStack_140 + (long)(int)(lVar22 << 1) * 4 + 4) = fVar27;
          uVar14 = (ulong)(iVar9 + 1);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != ((ulong)puVar6 & 0xffffffff));
      uVar10 = (uint)uVar14;
      if (0 < (int)uVar10) {
        uVar16 = uVar10;
        if (3 < uVar10) {
          uVar16 = 4;
        }
        if (uVar10 < 5) {
          uVar13 = CONCAT44(afStack_2a0[1],afStack_2a0[0]) ^ 0x8000000080000000;
          uVar35 = CONCAT44(afStack_2a0[3],afStack_2a0[2]) ^ 0x8000000080000000;
          if (uVar25 < 4) {
            uVar24 = 0;
            puVar23 = &uStack_1a0;
            do {
              lVar11 = 0;
              do {
                *(float *)((long)&uStack_1e0 + lVar11) =
                     *(float *)((long)puVar23 + lVar11) + *(float *)((long)puVar12 + lVar11);
                lVar11 = lVar11 + 4;
              } while (lVar11 != 0xc);
              uStack_270 = uVar13;
              uStack_268 = uVar35;
              (**(code **)(*param_3 + 0x20))(-afStack_1c0[uVar24],param_3,&uStack_270,&uStack_1e0);
              uVar24 = uVar24 + 1;
              puVar23 = (undefined8 *)((long)puVar23 + 0xc);
            } while (uVar24 != uVar14);
          }
          else {
            uVar24 = 0;
            puVar23 = &uStack_1a0;
            do {
              lVar11 = 0;
              fVar30 = afStack_1c0[uVar24];
              do {
                *(float *)((long)&uStack_1e0 + lVar11) =
                     (*(float *)((long)puVar23 + lVar11) + *(float *)((long)puVar12 + lVar11)) -
                     fVar30 * *(float *)((long)afStack_2a0 + lVar11);
                lVar11 = lVar11 + 4;
              } while (lVar11 != 0xc);
              uStack_270 = uVar13;
              uStack_268 = uVar35;
              (**(code **)(*param_3 + 0x20))(-fVar30,param_3,&uStack_270,&uStack_1e0);
              uVar24 = uVar24 + 1;
              puVar23 = (undefined8 *)((long)puVar23 + 0xc);
            } while (uVar24 != uVar14);
          }
        }
        else {
          uVar8 = 0;
          uVar13 = 1;
          fVar30 = afStack_1c0[0];
          do {
            fVar28 = afStack_1c0[uVar13];
            uVar2 = (int)uVar13;
            if (afStack_1c0[uVar13] <= fVar30) {
              fVar28 = fVar30;
              uVar2 = uVar8;
            }
            uVar8 = uVar2;
            fVar30 = fVar28;
            uVar13 = uVar13 + 1;
          } while (uVar14 != uVar13);
          FUN_109805a30(uVar14,&uStack_140,(ulong)uVar16,uVar8,&uStack_1e0);
          fVar38 = afStack_2a0[2];
          fVar28 = afStack_2a0[1];
          fVar30 = afStack_2a0[0];
          uVar13 = 0;
          uVar35 = CONCAT44(afStack_2a0[3],afStack_2a0[2]);
          uVar14 = CONCAT44(afStack_2a0[1],afStack_2a0[0]);
          do {
            lVar11 = 0;
            iVar9 = *(int *)((long)&uStack_1e0 + uVar13 * 4);
            do {
              *(float *)((long)&uStack_270 + lVar11) =
                   *(float *)((long)afStack_198 + lVar11 + (long)iVar9 * 0xc + -8) +
                   *(float *)((long)puVar12 + lVar11);
              lVar11 = lVar11 + 4;
            } while (lVar11 != 0xc);
            if (uVar25 < 4) {
              fVar33 = afStack_1c0[iVar9];
              pcVar15 = *(code **)(*param_3 + 0x20);
              puVar7 = &uStack_270;
            }
            else {
              fVar33 = afStack_1c0[iVar9];
              uStack_290 = CONCAT44((float)(uStack_270 >> 0x20) - fVar28 * fVar33,
                                    (float)uStack_270 - fVar30 * fVar33);
              uStack_288 = (ulong)(uint)((float)uStack_268 - fVar38 * fVar33);
              pcVar15 = *(code **)(*param_3 + 0x20);
              puVar7 = &uStack_290;
            }
            uStack_280 = uVar14 ^ 0x8000000080000000;
            uStack_278 = uVar35 ^ 0x8000000080000000;
            (*pcVar15)(-fVar33,param_3,&uStack_280,puVar7);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar16);
        }
      }
    }
  }
  else {
    lVar11 = 0;
    uStack_1a0 = *puVar23;
    afStack_198[0] = *(float *)(param_2 + 0x38);
    puVar23 = &uStack_210;
    do {
      lVar20 = 0;
      fVar28 = *(float *)((long)&uStack_b8 + lVar11 * 4);
      if (afStack_2a0[1] * afStack_208[lVar11 + 2] + afStack_208[lVar11 + -2] * afStack_2a0[0] +
          afStack_208[lVar11 + 6] * afStack_2a0[2] <= 0.0) {
        fVar28 = -fVar28;
      }
      do {
        *(float *)((long)afStack_198 + lVar20 + -8) =
             *(float *)((long)afStack_198 + lVar20 + -8) +
             *(float *)((long)puVar23 + lVar20 * 4) * fVar28;
        lVar20 = lVar20 + 4;
      } while (lVar20 != 0xc);
      lVar11 = lVar11 + 1;
      puVar23 = (undefined8 *)((long)puVar23 + 4);
    } while (lVar11 != 3);
    lVar11 = 0;
    uStack_140 = *puVar12;
    uStack_138 = *(undefined4 *)(param_2 + 0x78);
    pfVar17 = afStack_240;
    do {
      lVar20 = 0;
      fVar38 = *(float *)((long)&uStack_c8 + lVar11 * 4);
      fVar28 = -fVar38;
      if (afStack_2a0[1] * afStack_240[lVar11 + 4] + afStack_240[lVar11] * afStack_2a0[0] +
          afStack_240[lVar11 + 8] * afStack_2a0[2] <= 0.0) {
        fVar28 = fVar38;
      }
      do {
        *(float *)((long)&uStack_140 + lVar20) =
             *(float *)((long)&uStack_140 + lVar20) + pfVar17[lVar20] * fVar28;
        lVar20 = lVar20 + 4;
      } while (lVar20 != 0xc);
      lVar11 = lVar11 + 1;
      pfVar17 = pfVar17 + 1;
    } while (lVar11 != 3);
    uVar13 = (ulong)(uVar25 - 7) / 3;
    afStack_f0[0] = afStack_208[uVar13 - 2];
    afStack_f0[1] = afStack_208[uVar13 + 2];
    afStack_f0[2] = afStack_208[uVar13 + 6];
    uVar13 = (ulong)((uVar25 - 7) % 3);
    afStack_1c0[0] = afStack_240[uVar13];
    afStack_1c0[1] = afStack_240[uVar13 + 4];
    afStack_1c0[2] = afStack_240[uVar13 + 8];
    FUN_1098059a0(&uStack_1a0,afStack_f0,&uStack_140,afStack_1c0,&fStack_250,afStack_260);
    lVar11 = 0;
    do {
      *(float *)((long)afStack_198 + lVar11 + -8) =
           *(float *)((long)afStack_198 + lVar11 + -8) +
           fStack_250 * *(float *)((long)afStack_f0 + lVar11);
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0xc);
    lVar11 = 0;
    do {
      *(float *)((long)&uStack_140 + lVar11) =
           *(float *)((long)&uStack_140 + lVar11) +
           afStack_260[0] * *(float *)((long)afStack_1c0 + lVar11);
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0xc);
    uStack_1e0 = CONCAT44(afStack_2a0[1],afStack_2a0[0]) ^ 0x8000000080000000;
    uStack_1d8 = CONCAT44(afStack_2a0[3],afStack_2a0[2]) ^ 0x8000000080000000;
    (**(code **)(*param_3 + 0x20))(fVar30,param_3,&uStack_1e0,&uStack_140);
  }
LAB_10980717c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1098071c8; end: 1098071cf;  */

void FUN_1098071c8(void)

{
  return;
}



/* Entry: 1098071d0; end: 1098072df;  */

undefined8 * FUN_1098071d0(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_110b121c0;
  *(undefined4 *)(param_1 + 1) = 2;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xa29] = param_2;
  param_1[6] = FUN_1098072e0;
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x18))();
  param_1[7] = plVar2;
  (**(code **)(*param_2 + 0x10))();
  lVar3 = 0;
  param_1[8] = param_2;
  puVar4 = param_1;
  do {
    lVar5 = -0x24;
    puVar6 = puVar4;
    do {
      plVar2 = (long *)param_1[0xa29];
      (**(code **)(*plVar2 + 0x20))(plVar2,lVar3,lVar5 + 0x24);
      puVar6[9] = plVar2;
      plVar2 = (long *)param_1[0xa29];
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar3,lVar5 + 0x24);
      puVar6[0x519] = plVar2;
      puVar6 = puVar6 + 1;
      bVar1 = lVar5 != -1;
      lVar5 = lVar5 + 1;
    } while (bVar1);
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 0x24;
  } while (lVar3 != 0x24);
  return param_1;
}



/* Entry: 1098072e0; end: 109807417;  */

void FUN_1098072e0(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)*param_1;
  lVar3 = *(long *)param_1[1];
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,lVar2,lVar3);
  if ((int)plVar1 != 0) {
    uStack_68 = *(undefined8 *)(lVar2 + 0xd0);
    lStack_58 = lVar2 + 0x10;
    uStack_70 = 0;
    uStack_50 = 0;
    fVar4 = -NAN;
    uStack_48 = 0xffffffffffffffff;
    uStack_98 = *(undefined8 *)(lVar3 + 0xd0);
    lStack_88 = lVar3 + 0x10;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffffffffffffffff;
    plVar1 = (long *)param_1[2];
    lStack_90 = lVar3;
    lStack_60 = lVar2;
    if ((long *)param_1[2] == (long *)0x0) {
      fVar4 = -NAN;
      (**(code **)(*param_2 + 0x10))(param_2,&uStack_70,&uStack_a0,0,1);
      param_1[2] = param_2;
      plVar1 = param_2;
      if (param_2 == (long *)0x0) {
        return;
      }
    }
    if (*(int *)(param_3 + 8) == 1) {
      (**(code **)(*plVar1 + 0x10))();
    }
    else {
      (**(code **)(*plVar1 + 0x18))();
      if (fVar4 < *(float *)(param_3 + 0xc)) {
        *(float *)(param_3 + 0xc) = fVar4;
      }
    }
  }
  return;
}



/* Entry: 109807418; end: 109807477;  */

undefined8 * FUN_109807418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b121c0;
  FUN_1098079e0(param_1 + 2);
  return param_1;
}



/* Entry: 109807478; end: 10980767b;  */

undefined8 * FUN_109807478(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
    puVar4 = (undefined4 *)0x1132e0498;
  }
  else {
    uVar7 = (undefined1)uRam00000001132e0498;
    uVar9 = (undefined1)((uint)uRam00000001132e0498 >> 8);
    uVar11 = (undefined1)((uint)uRam00000001132e0498 >> 0x10);
    uVar13 = (undefined1)((uint)uRam00000001132e0498 >> 0x18);
    (**(code **)(**(long **)(param_2 + 0xd0) + 0x28))();
    uStack_44 = CONCAT13(uVar13,CONCAT12(uVar11,CONCAT11(uVar9,uVar7)));
    uVar8 = (undefined1)uRam00000001132e0498;
    uVar10 = (undefined1)((uint)uRam00000001132e0498 >> 8);
    uVar12 = (undefined1)((uint)uRam00000001132e0498 >> 0x10);
    uVar14 = (undefined1)((uint)uRam00000001132e0498 >> 0x18);
    (**(code **)(**(long **)(param_3 + 0xd0) + 0x28))();
    uStack_48 = CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8)));
    puVar4 = &uStack_44;
    if ((float)CONCAT13(uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))) <=
        (float)CONCAT13(uVar13,CONCAT12(uVar11,CONCAT11(uVar9,uVar7)))) {
      puVar4 = &uStack_48;
    }
  }
  uVar15 = *puVar4;
  fVar16 = *(float *)(param_2 + 0xc4);
  if (*(float *)(param_3 + 0xc4) <= *(float *)(param_2 + 0xc4)) {
    fVar16 = *(float *)(param_3 + 0xc4);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  puVar6 = *(undefined8 **)(lVar5 + 0x10);
  if (puVar6 == (undefined8 *)0x0) {
    if ((*(byte *)(param_1 + 8) >> 2 & 1) != 0) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)0x380;
    FUN_1098256f4(0x380,0x10);
  }
  else {
    *(undefined8 *)(lVar5 + 0x10) = *puVar6;
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
  }
  *(undefined4 *)puVar6 = 0x401;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x16] = 0;
  puVar6[0x15] = 0;
  *(undefined4 *)(puVar6 + 0x17) = 0;
  *(undefined4 *)(puVar6 + 0x31) = 0;
  puVar6[0x2c] = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x30] = 0;
  puVar6[0x2f] = 0;
  *(undefined4 *)(puVar6 + 0x4b) = 0;
  puVar6[0x46] = 0;
  puVar6[0x45] = 0;
  puVar6[0x48] = 0;
  puVar6[0x47] = 0;
  puVar6[0x4a] = 0;
  puVar6[0x49] = 0;
  *(undefined4 *)(puVar6 + 0x65) = 0;
  puVar6[0x60] = 0;
  puVar6[0x5f] = 0;
  puVar6[0x62] = 0;
  puVar6[0x61] = 0;
  puVar6[100] = 0;
  puVar6[99] = 0;
  puVar6[0x6a] = param_2;
  puVar6[0x6b] = param_3;
  *(undefined4 *)(puVar6 + 0x6c) = 0;
  *(undefined4 *)((long)puVar6 + 0x364) = uVar15;
  *(float *)(puVar6 + 0x6d) = fVar16;
  *(undefined8 *)((long)puVar6 + 0x36c) = 0;
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)((long)puVar6 + 0x374) = uVar3;
  if (uVar3 == uVar1) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar3 = *(uint *)(param_1 + 0x14);
      }
      if (0 < (int)uVar3) {
        lVar5 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
          lVar5 = lVar5 + 8;
        } while ((ulong)uVar3 << 3 != lVar5);
      }
      if ((*(long *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
        FUN_109825740();
        uVar3 = *(uint *)(param_1 + 0x14);
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(ulong *)(param_1 + 0x20) = uVar2;
      *(uint *)(param_1 + 0x18) = uVar1;
    }
  }
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)(int)uVar3 * 8) = puVar6;
  *(uint *)(param_1 + 0x14) = uVar3 + 1;
  return puVar6;
}


