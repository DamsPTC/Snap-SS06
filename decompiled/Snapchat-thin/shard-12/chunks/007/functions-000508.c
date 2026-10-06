/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10976c014; end: 10976c0a3;  */

void FUN_10976c014(long param_1,int param_2,int param_3)

{
  FUN_10976c3f8();
  *(long *)(param_1 + 0x4960) = (long)param_2;
  *(long *)(param_1 + 0x4940) = (long)param_2;
  *(long *)(param_1 + 0x4968) = (long)param_3;
  *(long *)(param_1 + 0x4948) = (long)param_3;
  *(undefined1 *)(param_1 + 0x48e3) = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') || (*(char *)(*(long *)(param_1 + 0x48f8) + 9) != '\0')) {
    FUN_10976c93c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e8),*(undefined8 *)(param_1 + 0x48f0)
                  ,*(long *)(param_1 + 0x48f8),*(undefined4 *)(param_1 + 0x4900),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1 + 0x1838,param_1 + 0x10,0x1828);
  return;
}



/* Entry: 10976c0a4; end: 10976c217;  */

void FUN_10976c0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lStack_68;
  long lStack_60;
  int iStack_58;
  int iStack_54;
  
  if (*(char *)(*(long *)(param_1 + 0x48f8) + 9) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x48e1) == '\0';
  }
  iVar3 = (int)param_2;
  iVar2 = (int)param_3;
  if ((*(long *)(param_1 + 0x4940) != (long)iVar3) ||
     (*(long *)(param_1 + 0x4948) != (long)iVar2 || bVar1)) {
    FUN_10976d298(param_1,*(long *)(param_1 + 0x4940),*(long *)(param_1 + 0x4948),param_2,param_3,
                  &iStack_54,&iStack_58);
    lStack_68 = (long)(iStack_54 + *(int *)(param_1 + 0x4940));
    lStack_60 = (long)(iStack_58 + *(int *)(param_1 + 0x4948));
    lVar4 = (long)(iStack_54 + iVar3);
    lVar5 = (long)(iStack_58 + iVar2);
    if (*(char *)(param_1 + 0x48e3) != '\0') {
      FUN_10976d448(param_1);
      *(undefined1 *)(param_1 + 0x48e3) = 0;
      *(undefined1 *)(param_1 + 0x48e0) = 1;
      *(long *)(param_1 + 0x4930) = lVar4;
      *(long *)(param_1 + 0x4938) = lVar5;
    }
    if (*(char *)(param_1 + 0x4970) != '\0') {
      FUN_10976d4ec(param_1,param_1 + 0x10,&lStack_68,lVar4,lVar5,0);
    }
    *(undefined1 *)(param_1 + 0x4970) = 1;
    *(undefined4 *)(param_1 + 0x4974) = 2;
    *(long *)(param_1 + 0x4980) = lStack_60;
    *(long *)(param_1 + 0x4978) = lStack_68;
    *(long *)(param_1 + 0x4988) = lVar4;
    *(long *)(param_1 + 0x4990) = lVar5;
    if (bVar1) {
      FUN_10976c93c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e8),
                    *(undefined8 *)(param_1 + 0x48f0),*(undefined8 *)(param_1 + 0x48f8),
                    *(undefined4 *)(param_1 + 0x4900),0);
    }
    *(long *)(param_1 + 0x4940) = (long)iVar3;
    *(long *)(param_1 + 0x4948) = (long)iVar2;
  }
  return;
}



/* Entry: 10976c218; end: 10976c3f7;  */

void FUN_10976c218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_10976d298(param_1,*(undefined4 *)(param_1 + 0x4940),*(undefined4 *)(param_1 + 0x4948),param_2,
                param_3,&iStack_64,&iStack_68);
  FUN_10976d298(param_1,param_4,param_5,param_6,param_7,&iStack_6c,&iStack_70);
  iVar3 = (int)param_2;
  iVar1 = (int)param_3;
  *(int *)(*(long *)(param_1 + 8) + 0x20) =
       (((int)param_5 - iVar1 >> 0x10) * (iVar3 >> 0x10) -
       ((int)param_4 - iVar3 >> 0x10) * (iVar1 >> 0x10)) + *(int *)(*(long *)(param_1 + 8) + 0x20);
  lStack_80 = (long)(iStack_64 + *(int *)(param_1 + 0x4940));
  lStack_78 = (long)(iStack_68 + *(int *)(param_1 + 0x4948));
  lVar4 = (long)(iStack_64 + iVar3);
  lVar2 = (long)(iStack_68 + iVar1);
  if (*(char *)(param_1 + 0x48e3) != '\0') {
    FUN_10976d448(param_1);
    *(undefined1 *)(param_1 + 0x48e3) = 0;
    *(undefined1 *)(param_1 + 0x48e0) = 1;
    *(long *)(param_1 + 0x4930) = lVar4;
    *(long *)(param_1 + 0x4938) = lVar2;
  }
  if (*(char *)(param_1 + 0x4970) != '\0') {
    FUN_10976d4ec(param_1,param_1 + 0x10,&lStack_80,lVar4,lVar2,0);
  }
  *(undefined1 *)(param_1 + 0x4970) = 1;
  *(undefined4 *)(param_1 + 0x4974) = 4;
  *(long *)(param_1 + 0x4980) = lStack_78;
  *(long *)(param_1 + 0x4978) = lStack_80;
  *(long *)(param_1 + 0x4988) = lVar4;
  *(long *)(param_1 + 0x4990) = lVar2;
  *(long *)(param_1 + 0x4998) = (long)(iStack_6c + (int)param_4);
  *(long *)(param_1 + 0x49a0) = (long)(iStack_70 + (int)param_5);
  *(long *)(param_1 + 0x49a8) = (long)(iStack_6c + (int)param_6);
  *(long *)(param_1 + 0x49b0) = (long)(iStack_70 + (int)param_7);
  if (*(char *)(*(long *)(param_1 + 0x48f8) + 9) != '\0') {
    FUN_10976c93c(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48e8),*(undefined8 *)(param_1 + 0x48f0)
                  ,*(long *)(param_1 + 0x48f8),*(undefined4 *)(param_1 + 0x4900),0);
  }
  *(long *)(param_1 + 0x4940) = (long)(int)param_6;
  *(long *)(param_1 + 0x4948) = (long)(int)param_7;
  return;
}



/* Entry: 10976c3f8; end: 10976c477;  */

void FUN_10976c3f8(long param_1)

{
  if (*(char *)(param_1 + 0x48e0) != '\0') {
    *(undefined1 *)(param_1 + 0x48e1) = 1;
    FUN_10976c0a4(param_1,*(undefined4 *)(param_1 + 0x4960),*(undefined4 *)(param_1 + 0x4968));
    if (*(char *)(param_1 + 0x4970) != '\0') {
      FUN_10976d4ec(param_1,param_1 + 0x10,param_1 + 0x4920,*(undefined8 *)(param_1 + 0x4930),
                    *(undefined8 *)(param_1 + 0x4938),1);
    }
    *(undefined1 *)(param_1 + 0x48e3) = 1;
    *(undefined2 *)(param_1 + 0x48e0) = 0;
    *(undefined1 *)(param_1 + 0x4970) = 0;
  }
  return;
}



/* Entry: 10976c478; end: 10976c657;  */

void FUN_10976c478(long param_1,int *param_2,int *param_3,long param_4,char *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  char *pcVar15;
  uint auStack_a0 [10];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = param_5[9];
  lVar9 = 9;
  if (cVar1 != '\0') {
    lVar9 = 10;
  }
  puVar14 = auStack_a0 + 2;
  pcVar15 = param_5;
  iVar12 = 0;
  do {
    uVar8 = puVar14[-2];
    *puVar14 = uVar8;
    iVar6 = iVar12;
    if (*pcVar15 != '\0') {
      iVar6 = iVar12 + 1;
      lVar5 = param_1;
      FUN_10976bf40(param_1,iVar12);
      *puVar14 = (int)lVar5 + uVar8;
    }
    puVar14 = puVar14 + 1;
    lVar9 = lVar9 + -1;
    pcVar15 = pcVar15 + 1;
    iVar12 = iVar6;
  } while (lVar9 != 0);
  if (cVar1 == '\0') {
    iStack_74 = *param_3;
  }
  iVar12 = iStack_74;
  if (param_6 == 0) {
    if (param_5[10] == '\0') {
      iVar13 = *param_2;
    }
    else {
      lVar9 = param_1;
      FUN_10976bf40(param_1,iVar6);
      iVar13 = (int)lVar9 + iStack_78;
      iVar6 = iVar6 + 1;
    }
    iVar12 = iStack_74;
    iStack_70 = iVar13;
    if (param_5[0xb] == '\0') {
      iVar12 = *param_3;
    }
    else {
      lVar9 = param_1;
      FUN_10976bf40(param_1,iVar6);
      iVar12 = (int)lVar9 + iVar12;
    }
  }
  else {
    iVar2 = iStack_78 - *param_2;
    iVar13 = -iVar2;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    iVar3 = iStack_74 - *param_3;
    iVar2 = -iVar3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    lVar9 = param_1;
    FUN_10976bf40(param_1,iVar6);
    if (iVar2 < iVar13) {
      iVar13 = (int)lVar9 + iStack_78;
      iVar12 = *param_3;
    }
    else {
      iVar13 = *param_2;
      iVar12 = (int)lVar9 + iVar12;
    }
    iStack_70 = iVar13;
  }
  iStack_6c = iVar12;
  lVar9 = 0;
  bVar4 = true;
  do {
    bVar11 = bVar4;
    uVar7 = (ulong)auStack_a0[lVar9 + 2];
    uVar8 = auStack_a0[lVar9 + 3];
    lVar5 = param_4;
    FUN_10976c218();
    lVar9 = 6;
    bVar4 = false;
  } while (bVar11);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *param_2 = iVar13;
  *param_3 = iVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((uint)uVar7 <= (uint)((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10)) >> 3)) {
    *(uint *)(*(long *)(lVar5 + 0x10) + (uVar7 & 0xffffffff) * 8) = uVar8;
    *(undefined4 *)(*(long *)(lVar5 + 0x10) + (uVar7 & 0xffffffff) * 8 + 4) = 0;
    return;
  }
  piVar10 = *(int **)(lVar5 + 8);
  if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
    *piVar10 = 0x82;
    return;
  }
  return;
}



/* Entry: 10976c658; end: 10976c6a3;  */

void FUN_10976c658(long param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 <= (uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3)) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8) = param_3;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8 + 4) = 0;
    return;
  }
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *piVar1 = 0x82;
    return;
  }
  return;
}



/* Entry: 10976c6a4; end: 10976c72b;  */

ulong FUN_10976c6a4(long param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 < 0x100) {
    pcVar2 = (char *)(ulong)*(ushort *)
                             (*(long *)(*(long *)(param_1 + 0x488) + 0x30) + (ulong)param_2 * 2);
    (**(code **)(*(long *)(param_1 + 0x488) + 0x28))();
    uVar1 = *(uint *)(param_1 + 0x468);
    if (uVar1 != 0) {
      uVar4 = 0;
      lVar5 = *(long *)(param_1 + 0x460);
      do {
        pcVar3 = *(char **)(lVar5 + uVar4 * 8);
        if (((pcVar3 != (char *)0x0) && (*pcVar3 == *pcVar2)) &&
           (_strcmp(pcVar3,pcVar2), (int)pcVar3 == 0)) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return 0xffffffff;
}



/* Entry: 10976c72c; end: 10976c7db;  */

void FUN_10976c72c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  
  if (1 < (int)param_2) {
    if ((uint)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3) < param_2) {
      piVar3 = *(int **)(param_1 + 8);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        *piVar3 = 0x82;
        return;
      }
    }
    else {
      uVar4 = 0;
      if (param_2 != 0) {
        uVar4 = param_3 / param_2;
      }
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = -param_3 / param_2;
      }
      iVar2 = -(uVar4 * param_2);
      if ((param_3 & 0x80000000) != 0) {
        iVar2 = uVar1 * param_2;
      }
      if (param_3 + iVar2 != 0) {
        uVar6 = 0x200000000;
        iVar8 = -1;
        iVar5 = -1;
        uVar4 = param_2;
        do {
          lVar9 = *(long *)(param_1 + 0x10);
          uVar7 = uVar6;
          if (iVar5 == iVar8) {
            iVar5 = iVar8 + 1;
            uVar7 = *(undefined8 *)(lVar9 + (long)iVar5 * 8);
            iVar8 = iVar5;
          }
          iVar8 = iVar8 + param_3 + iVar2;
          uVar1 = param_2 & iVar8 >> 0x1f;
          if ((int)param_2 <= iVar8) {
            uVar1 = -param_2;
          }
          iVar8 = uVar1 + iVar8;
          uVar6 = *(undefined8 *)(lVar9 + (long)iVar8 * 8);
          *(undefined8 *)(lVar9 + (long)iVar8 * 8) = uVar7;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}



/* Entry: 10976c7dc; end: 10976c8a3;  */

void FUN_10976c7dc(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if ((param_2 < 0x100) && (lVar3 = *(long *)(param_1 + 0x418), *(long *)(lVar3 + 0x520) != 0)) {
    (*(code *)**(undefined8 **)(lVar3 + 0x1368))();
    if (*(uint *)(lVar3 + 0x24) != 0) {
      uVar2 = 0;
      do {
        if (*(ushort *)(*(long *)(lVar3 + 0x520) + uVar2 * 2) == param_2) {
          if ((int)uVar2 < 0) {
            return;
          }
          uVar1 = *(undefined8 *)(param_1 + 8);
          (**(code **)(param_1 + 0x478))(uVar1,uVar2,&lStack_38,&lStack_40);
          if ((int)uVar1 != 0) {
            return;
          }
          lVar3 = 0;
          if (lStack_38 != 0) {
            lVar3 = lStack_38 + lStack_40;
          }
          param_3[1] = lStack_38;
          param_3[2] = lVar3;
          param_3[3] = lStack_38;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (*(uint *)(lVar3 + 0x24) != uVar2);
    }
  }
  return;
}



/* Entry: 10976c8a4; end: 10976c93b;  */

void FUN_10976c8a4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  if (param_3 < 0x61) {
    param_1[2] = param_3;
    param_1[3] = param_3 + 7 >> 3;
    *(undefined2 *)(param_1 + 1) = 0x101;
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        puVar1 = (undefined1 *)param_2[3];
        if (puVar1 < (undefined1 *)param_2[2]) {
          param_2[3] = puVar1 + 1;
          uVar4 = *puVar1;
        }
        else {
          piVar2 = (int *)*param_2;
          if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
            uVar4 = 0;
          }
          else {
            *piVar2 = 0x55;
            uVar4 = 0;
          }
        }
        *(undefined1 *)((long)param_1 + uVar3 + 0x20) = uVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulong)param_1[3]);
    }
  }
  else {
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0x12;
      return;
    }
  }
  return;
}



/* Entry: 10976c93c; end: 10976d15f;  */

ulong * FUN_10976c93c(ulong *param_1,ulong *param_2,long param_3,undefined8 *param_4,
                     undefined8 param_5,ulong param_6)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong *puVar18;
  int *piVar19;
  ulong unaff_x22;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iStack_144;
  ulong uStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  ulong *puStack_100;
  int iStack_f4;
  undefined8 *puStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = *param_1;
  iVar10 = (int)param_6;
  puVar8 = param_1;
  puVar9 = param_2;
  if ((iVar10 == 0) && (puVar8 = (ulong *)param_1[1], (char)puVar8[3] == '\0')) {
    uStack_a0 = *param_4;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_10976c93c(puVar8,param_2,param_3,&uStack_a0,param_5,1);
  }
  if (*(char *)(param_4 + 1) == '\0') {
    uVar24 = *(long *)(param_3 + 0x20) + param_2[4];
    if (uVar24 < 0x61) {
      param_4[2] = uVar24;
      param_4[3] = uVar24 + 7 >> 3;
      *(undefined2 *)(param_4 + 1) = 0x101;
      if (uVar24 != 0) {
        uVar21 = 0;
        do {
          *(undefined1 *)((long)param_4 + uVar21 + 0x20) = 0xff;
          uVar21 = uVar21 + 1;
          uVar16 = param_4[3];
        } while (uVar21 < uVar16);
        *(byte *)((long)param_4 + uVar16 + 0x1f) =
             *(byte *)((long)param_4 + uVar16 + 0x1f) & (byte)(-1 << (ulong)(-(int)uVar24 & 7));
        if (*(char *)(param_4 + 1) == '\0') goto LAB_10976cce0;
      }
      goto LAB_10976c9d0;
    }
    piVar19 = (int *)*param_4;
    if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
      *piVar19 = 0x12;
    }
LAB_10976cce0:
    if (*(char *)(uVar20 + 0xc) == '\0') goto LAB_10976d110;
    *(undefined4 *)*param_4 = 0;
    puVar11 = (undefined1 *)((long)param_1 + 0x19);
  }
  else {
LAB_10976c9d0:
    param_1[4] = 0;
    uStack_98 = param_4[1];
    uStack_a0 = *param_4;
    uStack_88 = param_4[3];
    uStack_90 = param_4[2];
    uStack_78 = param_4[5];
    uStack_80 = param_4[4];
    uVar24 = param_2[4];
    if ((ulong)param_4[2] < uVar24) goto LAB_10976d110;
    if (*(char *)(uVar20 + 0x141) != '\0') {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_10976db24(param_1,uVar20 + 0x178,&uStack_c0);
      puVar9 = &uStack_c0;
      puVar8 = param_1;
      FUN_10976db24(param_1,puVar9,uVar20 + 0x158);
    }
    iStack_f4 = iVar10;
    puStack_f0 = param_4;
    if (uVar24 == 0) {
      uVar17 = (uint)param_1[4];
      if (iVar10 != 0) goto LAB_10976cd00;
      *(undefined8 *)(param_1[2] + 0x20) = 0;
    }
    else {
      uVar21 = 0;
      pbVar26 = (byte *)&uStack_80;
      puStack_e8 = (ulong *)(uVar20 + 0x1a8);
      unaff_x22 = 0x80;
      param_6 = 0x80;
      pbVar25 = pbVar26;
      do {
        if (((uint)param_6 & (uint)*pbVar25) != 0) {
          FUN_10976dd3c(&uStack_c0,param_2,uVar21,uVar20,param_5,
                        *(undefined4 *)((long)param_1 + 0x1c),1);
          puVar8 = &uStack_e0;
          puVar9 = param_2;
          FUN_10976dd3c(puVar8,param_2,uVar21,uVar20,param_5,*(undefined4 *)((long)param_1 + 0x1c),0
                       );
          if ((((uint)uStack_c0 >> 4 & 1) == 0) && (((uint)uStack_e0 >> 4 & 1) == 0)) {
            uVar16 = (ulong)*(uint *)(uVar20 + 0x13c);
            if (*(uint *)(uVar20 + 0x13c) != 0) {
              iVar10 = *(int *)(uVar20 + 0x14c);
              puVar14 = puStack_e8;
              do {
                iVar13 = uStack_b0._4_4_;
                if ((char)*puVar14 == '\0') {
                  if ((uStack_e0 & 10) != 0) {
                    uVar17 = (int)puVar14[-2] - iVar10;
                    puVar8 = (ulong *)(ulong)uVar17;
                    if (((int)uVar17 <= (int)uStack_d0) &&
                       (uVar17 = *(int *)((long)puVar14 + -0xc) + iVar10,
                       puVar8 = (ulong *)(ulong)uVar17, (int)uStack_d0 <= (int)uVar17)) {
                      if (*(char *)(uVar20 + 0x140) == '\0') {
                        uVar17 = uStack_d0._4_4_ + 0x8000U & 0xffff0000;
                        if ((*(int *)(uVar20 + 0x148) <= (int)uStack_d0 - (int)puVar14[-2]) &&
                           (uVar23 = *(int *)((long)puVar14 + -4) + 0x10000,
                           (int)uVar17 <= (int)uVar23)) {
                          uVar17 = uVar23;
                        }
                      }
                      else {
                        uVar17 = *(uint *)((long)puVar14 + -4);
                      }
                      iVar13 = uVar17 - uStack_d0._4_4_;
                      if ((uint)uStack_c0 != 0) {
                        uStack_b0 = CONCAT44(uStack_b0._4_4_ + iVar13,(int)uStack_b0);
                        uStack_c0 = uStack_c0 | 0x10;
                      }
                      goto LAB_10976cbf0;
                    }
                  }
                }
                else if (((uStack_c0 & 5) != 0) && ((int)puVar14[-2] - iVar10 <= (int)uStack_b0)) {
                  uVar17 = *(int *)((long)puVar14 + -0xc) + iVar10;
                  puVar8 = (ulong *)(ulong)uVar17;
                  if ((int)uStack_b0 <= (int)uVar17) {
                    if (*(char *)(uVar20 + 0x140) == '\0') {
                      uVar17 = uStack_b0._4_4_ + 0x8000U & 0xffff0000;
                      if ((*(int *)(uVar20 + 0x148) <=
                           *(int *)((long)puVar14 + -0xc) - (int)uStack_b0) &&
                         (uVar23 = *(int *)((long)puVar14 + -4) - 0x10000,
                         (int)uVar23 <= (int)uVar17)) {
                        uVar17 = uVar23;
                      }
                    }
                    else {
                      uVar17 = *(uint *)((long)puVar14 + -4);
                    }
                    uStack_b0 = CONCAT44(uVar17,(int)uStack_b0);
                    uStack_c0 = uStack_c0 | 0x10;
                    if ((uint)uStack_e0 != 0) {
                      iVar13 = uVar17 - iVar13;
LAB_10976cbf0:
                      uStack_d0 = CONCAT44(iVar13 + uStack_d0._4_4_,(int)uStack_d0);
                      uStack_e0 = uStack_e0 | 0x10;
                    }
                    goto LAB_10976cc00;
                  }
                }
                puVar14 = (ulong *)((long)puVar14 + 0x14);
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
          else {
LAB_10976cc00:
            puVar9 = &uStack_c0;
            puVar8 = param_1;
            FUN_10976db24(param_1,puVar9,&uStack_e0);
            *pbVar25 = *pbVar25 & ((byte)param_6 ^ 0xff);
          }
        }
        param_4 = puStack_f0;
        bVar7 = (uVar21 & 7) != 7;
        uVar17 = 0x80;
        if (bVar7) {
          uVar17 = (uint)param_6 >> 1;
        }
        param_6 = (ulong)uVar17;
        if (!bVar7) {
          pbVar25 = pbVar25 + 1;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar24);
      if (iStack_f4 == 0) {
        uVar21 = 0;
        param_6 = 0x80;
        unaff_x22 = 0x80;
        do {
          if (((uint)unaff_x22 & (uint)*pbVar26) != 0) {
            FUN_10976dd3c(&uStack_c0,param_2,uVar21,uVar20,param_5,
                          *(undefined4 *)((long)param_1 + 0x1c),1);
            FUN_10976dd3c(&uStack_e0,param_2,uVar21,uVar20,param_5,
                          *(undefined4 *)((long)param_1 + 0x1c),0);
            puVar9 = &uStack_c0;
            puVar8 = param_1;
            FUN_10976db24(param_1,puVar9,&uStack_e0);
          }
          bVar7 = (uVar21 & 7) != 7;
          uVar17 = 0x80;
          if (bVar7) {
            uVar17 = (uint)unaff_x22 >> 1;
          }
          unaff_x22 = (ulong)uVar17;
          if (!bVar7) {
            pbVar26 = pbVar26 + 1;
          }
          uVar21 = uVar21 + 1;
        } while (uVar24 != uVar21);
      }
      else {
        uVar17 = (uint)param_1[4];
LAB_10976cd00:
        param_4 = puStack_f0;
        if (((uVar17 == 0) || (0 < (int)param_1[7])) ||
           ((int)(param_1 + 7)[(ulong)(uVar17 - 1) * 4] < 0)) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c0 = 0x31;
          uStack_a8 = (ulong)*(uint *)((long)param_1 + 0x1c);
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          puVar9 = &uStack_c0;
          puVar8 = param_1;
          FUN_10976db24(param_1,puVar9,&uStack_e0);
        }
      }
      *(undefined8 *)(param_1[2] + 0x20) = 0;
      uVar17 = (uint)param_1[4];
    }
    if (uVar17 != 0) {
      puVar18 = param_1 + 2;
      uVar20 = (ulong)uVar17;
      unaff_x22 = 0;
      puVar14 = param_1 + 5;
      lVar12 = (long)param_1 + 0x1c;
      lStack_108 = lVar12;
      puStack_100 = param_2;
      puStack_e8 = puVar18;
      do {
        puVar1 = puVar14 + unaff_x22 * 4;
        uVar17 = (uint)*puVar1 & 0xc;
        param_6 = (ulong)uVar17;
        uVar24 = unaff_x22;
        if (uVar17 != 0) {
          uVar24 = unaff_x22 + 1;
        }
        if (((uint)*puVar1 >> 4 & 1) == 0) {
          uVar4 = *(uint *)((long)puVar1 + 0x14);
          uVar5 = *(uint *)((long)puVar14 + (uVar24 * 8 + 5) * 4);
          uVar23 = 0x10000 - (uVar4 & 0xffff);
          uVar6 = 0x10000 - (uVar5 & 0xffff);
          if (uVar6 <= uVar23) {
            uVar23 = uVar6;
          }
          uVar22 = uVar5 & 0xffff;
          uVar6 = uVar4 & 0xffff;
          uVar3 = 0;
          if (uVar22 != 0 && uVar6 != 0) {
            uVar3 = uVar23;
          }
          if (uVar22 <= uVar6) {
            uVar6 = uVar22;
          }
          uVar23 = -uVar6;
          if ((uVar24 < (int)uVar20 - 1) &&
             (*(int *)((long)param_1 + (uVar24 + 1) * 0x20 + 0x3c) < (int)(uVar5 + uVar3 + 0x8000)))
          {
            if ((unaff_x22 == 0) ||
               (*(int *)(lVar12 + unaff_x22 * 0x20) <= (int)((uVar4 - uVar6) + -0x8000))) {
              uVar22 = uVar23;
              if (uVar6 <= uVar3) goto LAB_10976ced4;
            }
            else {
              uVar23 = 0;
            }
            uVar22 = uVar23;
            if (((byte)puVar14[(uVar24 + 1) * 4] >> 4 & 1) == 0) {
              uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3 - uVar23);
              puVar9 = &uStack_c0;
              uStack_c0 = uVar24;
              FUN_10976d234(*puVar18);
              puVar18 = puStack_e8;
              lVar12 = lStack_108;
              param_2 = puStack_100;
            }
          }
          else if (((unaff_x22 == 0) ||
                   (uVar22 = uVar3,
                   *(int *)(lVar12 + unaff_x22 * 0x20) <= (int)((uVar4 - uVar6) + -0x8000))) &&
                  (uVar22 = uVar23, uVar3 <= uVar6)) {
            uVar22 = uVar3;
          }
LAB_10976ced4:
          *(uint *)((long)puVar1 + 0x14) = uVar22 + uVar4;
          if (uVar17 != 0) {
            *(uint *)((long)puVar14 + (uVar24 * 8 + 5) * 4) = uVar22 + uVar5;
          }
        }
        puVar8 = (ulong *)0x10000;
        if ((unaff_x22 != 0) && (uVar23 = (uint)puVar1[2] - (uint)puVar1[-2], uVar23 != 0)) {
          uVar4 = *(uint *)((long)puVar1 + 0x14) - *(uint *)((long)puVar1 + -0xc);
          lVar15 = (long)(int)uVar4;
          uVar21 = (ulong)(int)uVar23;
          uVar20 = -uVar21;
          if (-1 < (long)uVar21) {
            uVar20 = uVar21;
          }
          lVar2 = -lVar15;
          if (-1 < lVar15) {
            lVar2 = lVar15;
          }
          uVar5 = 0;
          if (uVar20 != 0) {
            uVar5 = (uint)((lVar2 * 0x10000 + (uVar20 >> 1)) / uVar20);
          }
          uVar6 = -uVar5;
          if (-1 < (int)(uVar4 ^ uVar23)) {
            uVar6 = uVar5;
          }
          *(uint *)(puVar1 + -1) = uVar6;
        }
        if (uVar17 != 0) {
          unaff_x22 = unaff_x22 + 1;
          uVar17 = (uint)puVar14[uVar24 * 4 + 2] - (uint)puVar1[2];
          if (uVar17 != 0) {
            uVar23 = *(uint *)((long)puVar14 + (uVar24 * 8 + 5) * 4) -
                     *(uint *)((long)puVar1 + 0x14);
            lVar15 = (long)(int)uVar23;
            uVar24 = (ulong)(int)uVar17;
            uVar20 = -uVar24;
            if (-1 < (long)uVar24) {
              uVar20 = uVar24;
            }
            lVar2 = -lVar15;
            if (-1 < lVar15) {
              lVar2 = lVar15;
            }
            uVar4 = 0;
            if (uVar20 != 0) {
              uVar4 = (uint)((lVar2 * 0x10000 + (uVar20 >> 1)) / uVar20);
            }
            uVar5 = -uVar4;
            if (-1 < (int)(uVar23 ^ uVar17)) {
              uVar5 = uVar4;
            }
            *(uint *)(puVar1 + 3) = uVar5;
          }
        }
        unaff_x22 = unaff_x22 + 1;
        uVar24 = param_1[4];
        uVar20 = (ulong)(uint)uVar24;
      } while (unaff_x22 < uVar20);
      uVar21 = *puVar18;
      lVar12 = *(long *)(uVar21 + 0x20);
      if (lVar12 != 0) {
        lVar15 = *(long *)(uVar21 + 0x10);
        piVar19 = (int *)(*(long *)(uVar21 + 0x30) + lVar15 * (lVar12 + -1) + 8);
        do {
          puVar18 = puVar14 + *(long *)(piVar19 + -2) * 4;
          iVar10 = *piVar19;
          uVar17 = iVar10 + *(uint *)((long)puVar18 + 0x14);
          if (((int)(uVar17 + 0x8000) <= (int)*(uint *)((long)puVar18 + 0x34)) &&
             (*(uint *)((long)puVar18 + 0x14) = uVar17, (*puVar18 & 0xc) != 0)) {
            *(uint *)((long)puVar18 + -0xc) = *(uint *)((long)puVar18 + -0xc) + iVar10;
          }
          piVar19 = (int *)((long)piVar19 - lVar15);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      param_4 = puStack_f0;
      if ((iStack_f4 == 0) && ((uint)uVar24 != 0)) {
        uVar24 = 0;
        do {
          uVar17 = (uint)*puVar14;
          if ((uVar17 >> 5 & 1) == 0) {
            uVar20 = puVar14[1];
            if (param_2[4] <= uVar20) {
              piVar19 = (int *)param_2[1];
              if ((piVar19 == (int *)0x0) || (*piVar19 != 0)) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                *piVar19 = 0x82;
                uVar17 = (uint)*puVar14;
              }
            }
            puVar11 = (undefined1 *)(param_2[6] + param_2[2] * uVar20);
            lVar12 = 0xc;
            if ((uVar17 & 10) != 0) {
              lVar12 = 0x10;
            }
            *(uint *)(puVar11 + lVar12) = *(uint *)((long)puVar14 + 0x14);
            *puVar11 = 1;
            uVar20 = (ulong)(uint)param_1[4];
          }
          uVar24 = uVar24 + 1;
          puVar14 = puVar14 + 4;
        } while (uVar24 < uVar20);
      }
    }
    *(undefined1 *)(param_1 + 3) = 1;
    puVar11 = (undefined1 *)((long)param_4 + 9);
  }
  *puVar11 = 0;
LAB_10976d110:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10976d160;
  iStack_144 = 0;
  uVar20 = puVar8[2];
  puVar14 = (ulong *)0x0;
  if (uVar20 != 0) {
    puVar14 = (ulong *)(0x7fffffffffffffff / uVar20);
  }
  if (puVar9 <= puVar14) {
    uVar24 = *puVar8;
    uStack_140 = unaff_x22;
    puStack_138 = param_2;
    puStack_130 = param_1;
    uStack_128 = param_6;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x000109755910(uVar24,1,puVar8[5],uVar20 * (long)puVar9,puVar8[6],&iStack_144);
    puVar8[6] = uVar24;
    if (iStack_144 == 0) {
      puVar8[3] = (ulong)puVar9;
      puVar8[5] = uVar20 * (long)puVar9;
      if ((ulong *)puVar8[4] <= puVar9) {
        return (ulong *)0x1;
      }
      piVar19 = (int *)puVar8[1];
      if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
        *piVar19 = 0x82;
      }
      puVar8[4] = (ulong)puVar9;
      return (ulong *)0x0;
    }
  }
  piVar19 = (int *)puVar8[1];
  if ((piVar19 != (int *)0x0) && (*piVar19 == 0)) {
    *piVar19 = 0x40;
  }
  return (ulong *)0x0;
}



/* Entry: 10976d160; end: 10976d233;  */

undefined8 FUN_10976d160(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int iStack_34;
  
  iStack_34 = 0;
  uVar3 = param_1[2];
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = 0x7fffffffffffffff / uVar3;
  }
  if (param_2 <= uVar1) {
    uVar2 = *param_1;
    func_0x000109755910(uVar2,1,param_1[5],uVar3 * param_2,param_1[6],&iStack_34);
    param_1[6] = uVar2;
    if (iStack_34 == 0) {
      param_1[3] = param_2;
      param_1[5] = uVar3 * param_2;
      if ((ulong)param_1[4] <= param_2) {
        return 1;
      }
      piVar4 = (int *)param_1[1];
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        *piVar4 = 0x82;
      }
      param_1[4] = param_2;
      return 0;
    }
  }
  piVar4 = (int *)param_1[1];
  if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
    *piVar4 = 0x40;
  }
  return 0;
}



/* Entry: 10976d234; end: 10976d297;  */

void FUN_10976d234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == *(long *)(param_1 + 0x18)) {
    lVar1 = param_1;
    FUN_10976d160(param_1,lVar2 * 2 + 0x10);
    if ((int)lVar1 == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x20);
  }
  _memcpy(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x10) * lVar2,param_2);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 10976d298; end: 10976d447;  */

void FUN_10976d298(long *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  bVar1 = *(char *)(*param_1 + 0x134) == '\0';
  iVar2 = -param_4;
  if (bVar1) {
    iVar2 = param_4;
  }
  iVar4 = -param_5;
  if (bVar1) {
    iVar4 = param_5;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((long)param_1 + 0x48e2) == '\0') {
    return;
  }
  *(int *)(param_1[1] + 0x20) =
       ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10)) +
       *(int *)(param_1[1] + 0x20);
  if (iVar2 < 0) {
    if (iVar4 < 0) {
      if (iVar4 * -2 < -iVar2) goto LAB_10976d360;
      iVar3 = (int)param_1[0x922];
      if (iVar2 * -2 < -iVar4) goto LAB_10976d3d4;
      iVar2 = -0xb332;
    }
    else {
      if (iVar4 * 2 < -iVar2) {
LAB_10976d360:
        *param_6 = 0;
        iVar2 = *(int *)((long)param_1 + 0x4914) << 1;
        goto LAB_10976d440;
      }
      iVar3 = (int)param_1[0x922];
      if (iVar2 * -2 < iVar4) {
        *param_6 = iVar3;
        goto LAB_10976d3d8;
      }
      iVar2 = 0xb333;
    }
    *param_6 = (int)((ulong)((long)iVar3 * (long)iVar2 + ((long)iVar3 * (long)iVar2 >> 0x3f) +
                            0x8000) >> 0x10);
    iVar2 = *(int *)((long)param_1 + 0x4914);
    iVar4 = 0x1b333;
LAB_10976d430:
    iVar2 = (int)((ulong)((long)iVar2 * (long)iVar4 + ((long)iVar2 * (long)iVar4 >> 0x3f) + 0x8000)
                 >> 0x10);
  }
  else {
    if (iVar4 < 0) {
      if (iVar2 <= iVar4 * -2) {
        iVar3 = (int)param_1[0x922];
        if (iVar2 * 2 < -iVar4) {
LAB_10976d3d4:
          *param_6 = -iVar3;
          goto LAB_10976d3d8;
        }
        *param_6 = (int)((ulong)((long)iVar3 * -0xb332 + ((long)iVar3 * -0xb332 >> 0x3f) + 0x8000)
                        >> 0x10);
        iVar2 = *(int *)((long)param_1 + 0x4914);
        iVar4 = 0x4ccd;
        goto LAB_10976d430;
      }
    }
    else if (iVar2 <= iVar4 * 2) {
      if (iVar4 <= iVar2 * 2) {
        lVar5 = (long)(int)param_1[0x922] * 0xb333;
        *param_6 = (int)((ulong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
        lVar5 = (long)*(int *)((long)param_1 + 0x4914) * 0x4ccd;
        iVar2 = (int)((ulong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
        goto LAB_10976d440;
      }
      *param_6 = (int)param_1[0x922];
LAB_10976d3d8:
      iVar2 = *(int *)((long)param_1 + 0x4914);
      goto LAB_10976d440;
    }
    iVar2 = 0;
    *param_6 = 0;
  }
LAB_10976d440:
  *param_7 = iVar2;
  return;
}



/* Entry: 10976d448; end: 10976d4eb;  */

void FUN_10976d448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_40;
  
  uStack_40 = 1;
  uStack_78 = *(undefined8 *)(param_1 + 0x4958);
  uStack_80 = *(undefined8 *)(param_1 + 0x4950);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_10976c014(param_1,*(undefined4 *)(param_1 + 0x4960),*(undefined4 *)(param_1 + 0x4968));
  }
  FUN_10976d92c(param_1,param_1 + 0x10,&uStack_70,param_2,param_3);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&uStack_80);
  *(undefined8 *)(param_1 + 0x4958) = uStack_68;
  *(undefined8 *)(param_1 + 0x4950) = uStack_70;
  *(undefined8 *)(param_1 + 0x4920) = param_2;
  *(undefined8 *)(param_1 + 0x4928) = param_3;
  return;
}



/* Entry: 10976d4ec; end: 10976d92b;  */

void FUN_10976d4ec(long param_1,long param_2,long *param_3,long param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  long alStack_80 [2];
  int iStack_70;
  
  iVar9 = *(int *)(param_1 + 0x4974);
  lVar16 = 0x4988;
  if (iVar9 != 2) {
    lVar16 = 0x49a8;
  }
  lVar21 = *(long *)(param_1 + lVar16);
  lVar6 = param_1 + 0x4988;
  if (iVar9 != 2) {
    lVar6 = param_1 + 0x49a8;
  }
  lVar18 = *(long *)(lVar6 + 8);
  lVar27 = *param_3;
  lVar8 = param_3[1];
  if (lVar21 == lVar27 && lVar18 == lVar8) {
LAB_10976d650:
    lVar21 = 0;
    lVar27 = 0;
LAB_10976d658:
    bVar10 = true;
  }
  else {
    lVar28 = 0x4978;
    if (iVar9 != 2) {
      lVar28 = 0x4998;
    }
    lVar7 = param_1 + 0x4978;
    if (iVar9 != 2) {
      lVar7 = param_1 + 0x4998;
    }
    iVar20 = (int)lVar21;
    iVar24 = (int)*(long *)(param_1 + lVar28);
    iVar11 = (iVar20 - iVar24) + 0x10 >> 5;
    iVar17 = (int)lVar18;
    iVar23 = (int)*(long *)(lVar7 + 8);
    iVar1 = (iVar17 - iVar23) + 0x10 >> 5;
    iVar22 = (int)lVar27;
    iVar14 = ((int)param_4 - iVar22) + 0x10 >> 5;
    iVar19 = (int)lVar8;
    iVar2 = ((int)param_5 - iVar19) + 0x10 >> 5;
    uVar12 = (((long)iVar11 * (long)iVar2 >> 0x3f) + (long)iVar11 * (long)iVar2 + 0x8000 >> 0x10) -
             (((long)iVar1 * (long)iVar14 >> 0x3f) + (long)iVar1 * (long)iVar14 + 0x8000 >> 0x10);
    iVar11 = (int)uVar12;
    if (iVar11 == 0) goto LAB_10976d650;
    iVar1 = (iVar19 - iVar23) + 0x10 >> 5;
    iVar3 = (iVar22 - iVar24) + 0x10 >> 5;
    uVar15 = (((long)iVar2 * (long)iVar3 >> 0x3f) + (long)iVar2 * (long)iVar3 + 0x8000 >> 0x10) -
             (((long)iVar14 * (long)iVar1 >> 0x3f) + (long)iVar14 * (long)iVar1 + 0x8000 >> 0x10);
    uVar13 = (ulong)iVar11;
    if ((uVar12 & 0xffffffff) == 0) {
      iVar11 = 0x7fffffff;
    }
    else {
      uVar12 = -uVar13;
      if (-1 < (long)uVar13) {
        uVar12 = uVar13;
      }
      uVar4 = -uVar15;
      if (-1 < (long)uVar15) {
        uVar4 = uVar15;
      }
      iVar11 = 0;
      if (uVar12 != 0) {
        iVar11 = (int)(((uVar12 >> 1) + uVar4 * 0x10000) / uVar12);
      }
    }
    iVar1 = -iVar11;
    if (-1 < (long)(uVar13 ^ uVar15)) {
      iVar1 = iVar11;
    }
    iVar14 = iVar24 + (int)((ulong)(((long)iVar1 * (long)(iVar20 - iVar24) >> 0x3f) +
                                    (long)iVar1 * (long)(iVar20 - iVar24) + 0x8000) >> 0x10);
    iVar11 = iVar23 + (int)((ulong)(((long)iVar1 * (long)(iVar17 - iVar23) >> 0x3f) +
                                    (long)iVar1 * (long)(iVar17 - iVar23) + 0x8000) >> 0x10);
    lVar26 = (long)iVar14;
    if (lVar21 == *(long *)(param_1 + lVar28)) {
      iVar24 = iVar14 - iVar24;
      iVar1 = -iVar24;
      if (-1 < iVar24) {
        iVar1 = iVar24;
      }
      lVar26 = lVar21;
      if (*(int *)(param_1 + 0x491c) <= iVar1) {
        lVar26 = (long)iVar14;
      }
    }
    lVar28 = (long)iVar11;
    if (lVar18 == *(long *)(lVar7 + 8)) {
      iVar23 = iVar11 - iVar23;
      iVar1 = -iVar23;
      if (-1 < iVar23) {
        iVar1 = iVar23;
      }
      lVar28 = lVar18;
      if (*(int *)(param_1 + 0x491c) <= iVar1) {
        lVar28 = (long)iVar11;
      }
    }
    lVar21 = lVar26;
    if (lVar27 == param_4) {
      iVar1 = (int)lVar26 - (int)param_4;
      iVar11 = -iVar1;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar21 = param_4;
      if (*(int *)(param_1 + 0x491c) <= iVar11) {
        lVar21 = lVar26;
      }
    }
    lVar27 = lVar28;
    if (lVar8 == param_5) {
      iVar1 = (int)lVar28 - (int)param_5;
      iVar11 = -iVar1;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar27 = param_5;
      if (*(int *)(param_1 + 0x491c) <= iVar11) {
        lVar27 = lVar28;
      }
    }
    lVar18 = lVar21 - (iVar22 + iVar20) / 2;
    lVar8 = (long)-(int)lVar18;
    if (-1 < lVar18) {
      lVar8 = lVar18;
    }
    if (*(int *)(param_1 + 0x4918) < lVar8) goto LAB_10976d658;
    lVar18 = lVar27 - (iVar19 + iVar17) / 2;
    lVar8 = (long)-(int)lVar18;
    if (-1 < lVar18) {
      lVar8 = lVar18;
    }
    if (*(int *)(param_1 + 0x4918) < lVar8) goto LAB_10976d658;
    bVar10 = false;
    *(long *)(param_1 + lVar16) = lVar21;
    *(long *)(lVar6 + 8) = lVar27;
  }
  lStack_a8 = *(long *)(param_1 + 0x4958);
  lStack_b0 = *(long *)(param_1 + 0x4950);
  if (iVar9 == 4) {
    iStack_70 = iVar9;
    FUN_10976d92c(param_1,param_2,&lStack_a0,*(undefined4 *)(param_1 + 0x4988),
                  *(undefined4 *)(param_1 + 0x4990));
    FUN_10976d92c(param_1,param_2,auStack_90,*(undefined4 *)(param_1 + 0x4998),
                  *(undefined4 *)(param_1 + 0x49a0));
    plVar25 = alStack_80;
    FUN_10976d92c(param_1,param_2,plVar25,*(undefined4 *)(param_1 + 0x49a8),
                  *(undefined4 *)(param_1 + 0x49b0));
    lVar16 = 0x18;
  }
  else {
    if (iVar9 != 2) goto LAB_10976d760;
    lVar16 = param_2;
    if (param_6 != 0) {
      lVar16 = param_1 + 0x1838;
    }
    plVar25 = &lStack_a0;
    iStack_70 = iVar9;
    FUN_10976d92c(param_1,lVar16,plVar25,*(undefined4 *)(param_1 + 0x4988),
                  *(undefined4 *)(param_1 + 0x4990));
    if ((lStack_b0 == lStack_a0) && (lStack_a8 == lStack_98)) goto LAB_10976d760;
    lVar16 = 8;
  }
  (**(code **)(*(long *)(param_1 + 8) + lVar16))(*(long *)(param_1 + 8),&lStack_b0);
  lVar16 = *plVar25;
  *(long *)(param_1 + 0x4958) = plVar25[1];
  *(long *)(param_1 + 0x4950) = lVar16;
LAB_10976d760:
  bVar5 = false;
  if (param_6 == 0) {
    bVar5 = (bool)(bVar10 ^ 1);
  }
  if (!bVar5) {
    if (param_6 != 0) {
      param_2 = param_1 + 0x1838;
    }
    FUN_10976d92c(param_1,param_2,&lStack_a0,(int)*param_3,(int)param_3[1]);
    if ((lStack_a0 != *(long *)(param_1 + 0x4950)) || (lStack_98 != *(long *)(param_1 + 0x4958))) {
      iStack_70 = 2;
      lStack_a8 = *(undefined8 *)(param_1 + 0x4958);
      lStack_b0 = *(long *)(param_1 + 0x4950);
      (**(code **)(*(long *)(param_1 + 8) + 8))(*(long *)(param_1 + 8),&lStack_b0);
      *(long *)(param_1 + 0x4958) = lStack_98;
      *(long *)(param_1 + 0x4950) = lStack_a0;
    }
  }
  if (!bVar10) {
    *param_3 = lVar21;
    param_3[1] = lVar27;
  }
  return;
}



/* Entry: 10976d92c; end: 10976da1f;  */

void FUN_10976d92c(long *param_1,undefined8 param_2,long *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar1 = (int)((ulong)(((long)*(int *)((long)param_1 + 0x48c4) * (long)(int)param_5 >> 0x3f) +
                        (long)*(int *)((long)param_1 + 0x48c4) * (long)(int)param_5 + 0x8000) >>
               0x10) +
          (int)((ulong)(((long)(int)param_1[0x918] * (long)param_4 >> 0x3f) +
                        (long)(int)param_1[0x918] * (long)param_4 + 0x8000) >> 0x10);
  FUN_10976da20(param_2,param_5);
  lVar6 = *param_1;
  iVar2 = *(int *)(lVar6 + 0x48);
  iVar3 = *(int *)(lVar6 + 0x50);
  iVar5 = (int)param_2;
  lVar4 = param_1[0x91b];
  *param_3 = (long)((int)((ulong)(((long)*(int *)(lVar6 + 0x4c) * (long)iVar5 >> 0x3f) +
                                  (long)*(int *)(lVar6 + 0x4c) * (long)iVar5 + 0x8000) >> 0x10) +
                    (int)param_1[0x91a] +
                   (int)((ulong)(((long)*(int *)(lVar6 + 0x44) * (long)iVar1 >> 0x3f) +
                                 (long)*(int *)(lVar6 + 0x44) * (long)iVar1 + 0x8000) >> 0x10));
  param_3[1] = (long)((int)((ulong)(((long)iVar2 * (long)iVar1 >> 0x3f) + (long)iVar2 * (long)iVar1
                                   + 0x8000) >> 0x10) +
                     (int)lVar4 +
                     (int)((ulong)(((long)iVar3 * (long)iVar5 >> 0x3f) + (long)iVar3 * (long)iVar5 +
                                  0x8000) >> 0x10));
  return;
}



/* Entry: 10976da20; end: 10976db23;  */

ulong FUN_10976da20(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    return ((long)*(int *)(param_1 + 0x1c) * (long)param_2 >> 0x3f) +
           (long)*(int *)(param_1 + 0x1c) * (long)param_2 + 0x8000U >> 0x10;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar4 = *(int *)(param_1 + 0x20) - 1;
  uVar1 = uVar2;
  if (uVar2 <= uVar4) {
    uVar1 = uVar4;
  }
  uVar6 = (ulong)uVar1;
  uVar5 = (ulong)(uVar2 - 1);
  lVar8 = uVar6 - uVar2;
  piVar7 = (int *)(param_1 + (ulong)uVar2 * 0x20 + 0x58);
  do {
    if (lVar8 == 0) {
      if (uVar1 != 0) goto LAB_10976da74;
      goto LAB_10976da8c;
    }
    iVar3 = *piVar7;
    uVar2 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar2;
    lVar8 = lVar8 + -1;
    piVar7 = piVar7 + 8;
  } while (iVar3 <= param_2);
  do {
    uVar6 = uVar5;
    if (uVar2 == 0) {
LAB_10976da8c:
      *(undefined4 *)(param_1 + 0x24) = 0;
      iVar3 = param_2 - *(int *)(param_1 + 0x38);
      if (param_2 < *(int *)(param_1 + 0x38)) {
        return (ulong)(uint)(*(int *)(param_1 + 0x3c) +
                            (int)((ulong)(((long)*(int *)(param_1 + 0x1c) * (long)iVar3 >> 0x3f) +
                                          (long)*(int *)(param_1 + 0x1c) * (long)iVar3 + 0x8000) >>
                                 0x10));
      }
      uVar6 = 0;
LAB_10976daf8:
      lVar8 = param_1 + 0x28 + uVar6 * 0x20;
      param_2 = param_2 - *(int *)(lVar8 + 0x10);
      return (ulong)(uint)(*(int *)(lVar8 + 0x14) +
                          (int)((ulong)(((long)*(int *)(lVar8 + 0x18) * (long)param_2 >> 0x3f) +
                                        (long)*(int *)(lVar8 + 0x18) * (long)param_2 + 0x8000) >>
                               0x10));
    }
LAB_10976da74:
    if (*(int *)(param_1 + 0x38 + uVar6 * 0x20) <= param_2) {
      *(int *)(param_1 + 0x24) = (int)uVar6;
      goto LAB_10976daf8;
    }
    uVar2 = (int)uVar6 - 1;
    uVar5 = (ulong)uVar2;
  } while( true );
}



/* Entry: 10976db24; end: 10976dd3b;  */

void FUN_10976db24(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(int *)param_2 == 0) {
    bVar4 = true;
    param_2 = param_3;
  }
  else if (*(int *)param_3 == 0) {
    bVar4 = true;
  }
  else {
    if (*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10)) {
      return;
    }
    bVar4 = false;
  }
  uVar10 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar15 = 0;
    piVar8 = (int *)(param_1 + 0x38);
    do {
      if (*(int *)(param_2 + 0x10) <= *piVar8) {
        if (*piVar8 == *(int *)(param_2 + 0x10)) {
          return;
        }
        if ((!bVar4) && (*piVar8 <= *(int *)(param_3 + 0x10))) {
          return;
        }
        uVar10 = uVar15;
        if ((*(byte *)(piVar8 + -4) >> 3 & 1) != 0) {
          return;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      piVar8 = piVar8 + 8;
    } while (uVar10 != uVar15);
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar6 + 0x18) != '\0') && ((*param_2 >> 4 & 1) == 0)) {
    iVar7 = *(int *)(param_2 + 0x10);
    if (bVar4) {
      FUN_10976da20(lVar6,iVar7);
      iVar7 = (int)lVar6;
      pbVar9 = param_2;
    }
    else {
      FUN_10976da20(lVar6,iVar7 + (*(int *)(param_3 + 0x10) - iVar7) / 2);
      iVar7 = (*(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10)) / 2;
      iVar7 = (int)((ulong)(((long)*(int *)(param_1 + 0x1c) * (long)iVar7 >> 0x3f) +
                            (long)*(int *)(param_1 + 0x1c) * (long)iVar7 + 0x8000) >> 0x10);
      *(int *)(param_2 + 0x14) = (int)lVar6 - iVar7;
      iVar7 = (int)lVar6 + iVar7;
      pbVar9 = param_3;
    }
    *(int *)(pbVar9 + 0x14) = iVar7;
  }
  uVar14 = (uint)uVar10;
  if ((uVar14 == 0) ||
     (*(int *)(param_1 + (ulong)(uVar14 - 1) * 0x20 + 0x3c) <= *(int *)(param_2 + 0x14))) {
    uVar3 = *(uint *)(param_1 + 0x20);
    iVar7 = uVar14 - uVar3;
    if (uVar14 < uVar3) {
      if (bVar4) {
        iVar11 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar11 = *(int *)(param_3 + 0x14);
      }
      if (*(int *)(param_1 + (uVar10 & 0xffffffff) * 0x20 + 0x3c) < iVar11) {
        return;
      }
    }
    uVar13 = uVar3;
    if (!bVar4) {
      uVar13 = uVar3 + 1;
    }
    if (uVar13 < 0xc0) {
      if (uVar3 != uVar14) {
        uVar12 = uVar3;
        do {
          uVar12 = uVar12 - 1;
          uVar15 = (ulong)uVar13;
          uVar13 = uVar13 - 1;
          puVar1 = (undefined8 *)(param_1 + 0x28 + (ulong)uVar12 * 0x20);
          uVar16 = *puVar1;
          uVar18 = puVar1[3];
          uVar17 = puVar1[2];
          puVar2 = (undefined8 *)(param_1 + 0x28 + uVar15 * 0x20);
          puVar2[1] = puVar1[1];
          *puVar2 = uVar16;
          puVar2[3] = uVar18;
          puVar2[2] = uVar17;
          bVar5 = iVar7 != -1;
          iVar7 = iVar7 + 1;
        } while (bVar5);
      }
      uVar16 = *(undefined8 *)param_2;
      uVar18 = *(undefined8 *)(param_2 + 0x18);
      uVar17 = *(undefined8 *)(param_2 + 0x10);
      puVar1 = (undefined8 *)(param_1 + 0x28 + (uVar10 & 0xffffffff) * 0x20);
      puVar1[1] = *(undefined8 *)(param_2 + 8);
      *puVar1 = uVar16;
      puVar1[3] = uVar18;
      puVar1[2] = uVar17;
      *(uint *)(param_1 + 0x20) = uVar3 + 1;
      if (!bVar4) {
        puVar1 = (undefined8 *)(param_1 + 0x28 + (ulong)(uVar14 + 1) * 0x20);
        uVar16 = *(undefined8 *)param_3;
        uVar18 = *(undefined8 *)(param_3 + 0x18);
        uVar17 = *(undefined8 *)(param_3 + 0x10);
        puVar1[1] = *(undefined8 *)(param_3 + 8);
        *puVar1 = uVar16;
        puVar1[3] = uVar18;
        puVar1[2] = uVar17;
        *(uint *)(param_1 + 0x20) = uVar3 + 2;
      }
    }
  }
  return;
}



/* Entry: 10976dd3c; end: 10976de67;  */

void FUN_10976dd3c(uint *param_1,long param_2,ulong param_3,long param_4,int param_5,uint param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = param_3;
  if (*(ulong *)(param_2 + 0x20) <= param_3) {
    piVar6 = *(int **)(param_2 + 8);
    if ((piVar6 == (int *)0x0) || (*piVar6 != 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      *piVar6 = 0x82;
    }
  }
  pcVar4 = (char *)(*(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x10) * uVar3);
  iVar10 = *(int *)(pcVar4 + 4);
  iVar1 = *(int *)(pcVar4 + 8);
  iVar2 = iVar1 - iVar10;
  if (iVar2 == -0x140000) {
    if (param_7 == 0) {
      uVar5 = 2;
LAB_10976de10:
      *param_1 = uVar5;
      uVar8 = iVar10 + param_5 + *(int *)(param_4 + 0x130) * 2;
      param_1[4] = uVar8;
      param_1[6] = param_6;
      *(ulong *)(param_1 + 2) = param_3;
      if (*pcVar4 != '\0') {
        lVar9 = 0x10;
        goto LAB_10976de38;
      }
      goto LAB_10976de4c;
    }
LAB_10976ddac:
    *param_1 = 0;
    uVar8 = param_1[4] + param_5;
    param_1[4] = uVar8;
    param_1[6] = param_6;
    *(ulong *)(param_1 + 2) = param_3;
  }
  else {
    iVar7 = iVar1;
    if (iVar2 == -0x150000) {
      if (param_7 == 0) goto LAB_10976ddac;
      uVar5 = 1;
    }
    else {
      if (-1 < iVar2) {
        iVar7 = iVar10;
        iVar10 = iVar1;
      }
      if (param_7 == 0) {
        uVar5 = 8;
        goto LAB_10976de10;
      }
      uVar5 = 4;
    }
    *param_1 = uVar5;
    uVar8 = iVar7 + param_5;
    param_1[4] = uVar8;
    param_1[6] = param_6;
    *(ulong *)(param_1 + 2) = param_3;
    if (*pcVar4 != '\0') {
      lVar9 = 0xc;
LAB_10976de38:
      param_1[5] = *(uint *)(pcVar4 + lVar9);
      *param_1 = uVar5 | 0x10;
      return;
    }
  }
LAB_10976de4c:
  param_1[5] = (uint)((ulong)(((long)(int)uVar8 * (long)(int)param_6 >> 0x3f) +
                              (long)(int)uVar8 * (long)(int)param_6 + 0x8000) >> 0x10);
  return;
}



/* Entry: 10976de68; end: 10976ee7f;  */

ulong * FUN_10976de68(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  bool bVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  ulong *puVar45;
  ulong *puVar46;
  uint uVar47;
  undefined8 uStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong auStack_190 [18];
  undefined8 uStack_100;
  ulong auStack_f0 [16];
  long lStack_70;
  ulong *puVar26;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*(ushort *)((long)param_2 + 2) == 0) || ((short)*param_2 == 0)) {
    puVar11 = (ulong *)0x0;
    goto LAB_10976e25c;
  }
  uStack_100 = 0;
  auStack_190[0xf] = 0;
  auStack_190[0xe] = 0;
  auStack_190[0x11] = 0;
  auStack_190[0x10] = 0;
  auStack_190[0xb] = 0;
  auStack_190[10] = 0;
  auStack_190[0xd] = 0;
  auStack_190[0xc] = 0;
  auStack_190[7] = 0;
  auStack_190[6] = 0;
  auStack_190[9] = 0;
  auStack_190[8] = 0;
  auStack_190[3] = 0;
  auStack_190[2] = 0;
  auStack_190[5] = 0;
  auStack_190[4] = 0;
  puStack_198 = (ulong *)0x0;
  puStack_1a0 = (ulong *)0x0;
  auStack_190[1] = 0;
  auStack_190[0] = 0;
  puStack_1b8 = (ulong *)0x0;
  uStack_1c0 = 0;
  puStack_1b0 = (ulong *)0x0;
  puVar46 = (ulong *)*param_3;
  puVar11 = puVar46;
  puVar20 = param_3;
  puVar34 = param_4;
  puStack_1a8 = puVar46;
  (*(code *)puVar46[1])(puVar46,(ulong)*(ushort *)((long)param_2 + 2) * 0x48);
  if (puVar11 == (ulong *)0x0) {
    puStack_1b8 = (ulong *)0x0;
LAB_10976e008:
    puVar11 = (ulong *)0x40;
    param_4 = puVar34;
  }
  else {
    puStack_1b8 = puVar11;
    if ((ulong)(ushort)*param_2 == 0) {
      puStack_1b0 = (ulong *)0x0;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uStack_1c0 = (ulong)uVar6;
LAB_10976e014:
      uVar47 = (uint)uVar6;
      uVar17 = 0;
      bVar30 = true;
      bVar1 = true;
      puVar45 = puStack_1b0;
    }
    else {
      puVar45 = puVar46;
      (*(code *)puVar46[1])(puVar46,(ulong)(ushort)*param_2 << 4);
      if (puVar45 == (ulong *)0x0) {
        puStack_1b0 = (ulong *)0x0;
        goto LAB_10976e008;
      }
      uVar5 = (ushort)*param_2;
      uVar17 = (ulong)uVar5;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uVar47 = (uint)uVar6;
      uStack_1c0 = (ulong)CONCAT24(uVar5,uVar47);
      puStack_1b0 = puVar45;
      if (uVar5 == 0) goto LAB_10976e014;
      uVar19 = 0;
      uVar31 = param_2[3];
      puVar20 = puVar45;
      lVar29 = 0;
      do {
        lVar42 = (ulong)*(ushort *)(uVar31 + uVar19 * 2) + 1;
        puVar34 = puVar11 + lVar29 * 9;
        *puVar20 = (ulong)puVar34;
        uVar14 = (int)lVar42 - (int)lVar29;
        *(uint *)(puVar20 + 1) = uVar14;
        if (uVar14 != 0) {
          *puVar34 = (ulong)(puVar11 + lVar42 * 9 + -9);
          puVar34[2] = (ulong)puVar20;
          puVar39 = puVar34;
          if (uVar14 != 1) {
            puVar35 = puVar11 + lVar29 * 9 + 9;
            do {
              puVar39 = puVar35;
              puVar39[-8] = (ulong)puVar39;
              *puVar39 = (ulong)(puVar39 + -9);
              puVar39[2] = (ulong)puVar20;
              uVar14 = uVar14 - 1;
              puVar35 = puVar39 + 9;
            } while (1 < uVar14);
          }
          puVar39[1] = (ulong)puVar34;
        }
        puVar20 = puVar20 + 2;
        uVar19 = uVar19 + 1;
        lVar29 = lVar42;
      } while (uVar19 != uVar17);
      bVar30 = false;
      bVar1 = false;
    }
    puVar34 = param_4;
    puStack_1b0 = puVar45;
    if (uVar47 != 0) {
      uVar19 = 0;
      uVar31 = param_2[1];
      puVar20 = puVar11 + 3;
      plVar43 = (long *)(uVar31 + 8);
      do {
        *(undefined4 *)puVar20 = 0;
        bVar32 = *(byte *)(param_2[2] + uVar19);
        *(uint *)puVar20 = bVar32 & 1 ^ 1;
        plVar2 = (long *)(uVar31 + ((long)((puVar20[-3] - (long)puVar11 >> 3) * 0x38e38e3900000000)
                                   >> 0x1c));
        lVar29 = plVar43[-1];
        lVar42 = *plVar43;
        uVar36 = lVar29 - *plVar2;
        uVar37 = lVar42 - plVar2[1];
        uVar33 = -uVar36;
        if (-1 < (long)uVar36) {
          uVar33 = uVar36;
        }
        uVar27 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar27 = uVar37;
        }
        iVar16 = 1;
        if (0x7fffffffffffffff < uVar37) {
          iVar16 = 2;
        }
        iVar38 = 0;
        if (uVar33 * 0xc < uVar27) {
          iVar38 = iVar16;
        }
        iVar16 = 8;
        iVar12 = iVar16;
        if (0x7fffffffffffffff < uVar36) {
          iVar12 = 4;
        }
        if (uVar27 * 0xc < uVar33) {
          iVar38 = iVar12;
        }
        *(int *)(puVar20 + 1) = iVar38;
        plVar2 = (long *)(uVar31 + ((((long)(puVar20[-2] - (long)puVar11) >> 3) * 0x38e38e39 << 0x20
                                    ) >> 0x1c));
        uVar37 = *plVar2 - lVar29;
        uVar27 = plVar2[1] - lVar42;
        uVar33 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar33 = uVar37;
        }
        uVar40 = -uVar27;
        if (-1 < (long)uVar27) {
          uVar40 = uVar27;
        }
        if (uVar40 * 0xc < uVar33) {
          if (0x7fffffffffffffff < uVar37) {
            iVar16 = 4;
          }
        }
        else if (uVar33 * 0xc < uVar40) {
          iVar16 = 1;
          if (0x7fffffffffffffff < uVar27) {
            iVar16 = 2;
          }
        }
        else {
          iVar16 = 0;
        }
        *(int *)((long)puVar20 + 0xc) = iVar16;
        if ((bVar32 & 1) == 0) {
          uVar18 = 3;
LAB_10976e184:
          *(undefined4 *)puVar20 = uVar18;
        }
        else if ((iVar38 == iVar16) && ((iVar38 != 0 || (func_0x00010975375c(), (int)uVar36 != 0))))
        {
          uVar18 = 2;
          goto LAB_10976e184;
        }
        param_5 = (ulong *)0x38e38e3900000000;
        plVar43 = plVar43 + 2;
        uVar19 = uVar19 + 1;
        puVar20 = puVar20 + 9;
      } while (uVar47 != uVar19);
      puVar11 = puVar11 + 6;
      puVar20 = (ulong *)param_2[1];
      do {
        *(undefined4 *)((long)puVar11 + -0x14) = 0;
        puVar11[-1] = 0;
        uVar19 = *puVar20;
        puVar11[1] = puVar20[1];
        *puVar11 = uVar19;
        uVar47 = uVar47 - 1;
        puVar11 = puVar11 + 9;
        puVar20 = puVar20 + 2;
        puVar34 = (ulong *)((ulong)param_4 & 0xffffffff);
        bVar30 = bVar1;
      } while (uVar47 != 0);
    }
    if (!bVar30) {
      uVar19 = 0;
      do {
        if (3 < (uint)(puVar45 + uVar19 * 2)[1]) {
          puVar20 = (ulong *)puVar45[uVar19 * 2];
          puVar11 = puVar20;
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == puVar20) goto LAB_10976e2ac;
            uVar31 = puVar11[6];
            uVar33 = puVar11[7];
          } while (uVar31 - puVar20[6] == 0 && puVar20[7] == uVar33);
          puVar39 = puVar20;
          do {
            do {
              puVar35 = puVar39;
              puVar39 = (ulong *)*puVar35;
              if (puVar39 == puVar20) goto LAB_10976e2ac;
              lVar29 = puVar35[6] - puVar39[6];
              lVar42 = puVar35[7] - puVar39[7];
            } while (lVar29 == 0 && lVar42 == 0);
            lVar13 = lVar29 * (puVar20[7] - uVar33) + lVar42 * (uVar31 - puVar20[6]);
            uVar47 = (uint)(lVar13 >> 0x3f);
            if (0 < lVar13) {
              uVar47 = uVar47 + 1;
            }
            puVar24 = puVar35;
          } while (uVar47 == 0);
          do {
            param_5 = puVar24;
            bVar1 = false;
            uVar36 = uVar31;
            uVar37 = uVar33;
            do {
              do {
                puVar24 = puVar11;
                puVar11 = (ulong *)puVar24[1];
                if (puVar11 == puVar35) {
                  bVar1 = true;
                }
                uVar31 = puVar11[6];
                uVar33 = puVar11[7];
                lVar13 = uVar31 - uVar36;
                lVar41 = uVar33 - uVar37;
                uVar36 = uVar31;
                uVar37 = uVar33;
              } while (lVar13 == 0 && lVar41 == 0);
              lVar15 = lVar41 * lVar29 - lVar13 * lVar42;
              uVar14 = (uint)(lVar15 >> 0x3f);
              if (0 < lVar15) {
                uVar14 = uVar14 + 1;
              }
            } while (uVar14 == 0);
            if ((int)(uVar14 ^ uVar47) < 0) {
              do {
                *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
                param_5 = (ulong *)param_5[1];
              } while (param_5 != puVar24);
              *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
            }
            lVar29 = lVar13;
            lVar42 = lVar41;
            uVar47 = uVar14;
          } while (!bVar1);
        }
LAB_10976e2ac:
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar17);
    }
    puVar20 = param_1 + 5;
    puVar11 = auStack_190;
    param_4 = puVar46;
    puStack_1a0 = param_2;
    puStack_198 = param_3;
    FUN_10976f1f0(auStack_190,param_1 + 3);
    if ((int)puVar11 == 0) {
      puVar11 = auStack_190 + 9;
      puVar20 = param_1 + 0xb;
      FUN_10976f1f0(puVar11,param_1 + 9);
      puVar45 = puStack_198;
      param_4 = puVar46;
      if ((int)puVar11 == 0) {
        uVar17 = puStack_198[0x32];
        puVar11 = (ulong *)puStack_198[0x65];
        if ((int)param_3[0x67] == 0) {
LAB_10976e3fc:
          bVar1 = true;
        }
        else {
          lVar29 = (long)puVar11 * (long)(int)param_3[0x68];
          uVar19 = lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10;
          uVar31 = uVar19 + 0x20 & 0xffffffffffffffc0;
          if (uVar31 == 0 || uVar19 == uVar31) goto LAB_10976e3fc;
          puVar20 = puVar11;
          FUN_1097532ac(puVar11,uVar31,uVar19);
          lVar29 = SUB168(SEXT816((long)uVar17) * SEXT816(0x5c28f5c28f5c28f5),8) - uVar17;
          uVar33 = uVar17;
          if ((long)uVar31 < (long)uVar19) {
            uVar33 = ((lVar29 >> 5) - (lVar29 >> 0x3f)) + uVar17;
          }
          puVar46 = (ulong *)0x0;
          param_5 = (ulong *)0x0;
          FUN_10976ee80(puVar45,uVar33,puVar20);
          bVar1 = false;
        }
        uVar9 = uStack_100;
        bVar30 = false;
        lVar29 = 0;
        uVar47 = (uint)puVar34;
        uStack_100._5_3_ = SUB83(uVar9,5);
        uStack_100._0_5_ =
             CONCAT14(uVar47 != 1,
                      CONCAT13(uVar47 == 2 || uVar47 == 4,CONCAT12((uVar47 & 0xfffffffe) == 2,0x101)
                              ));
        uVar47 = (uint)uStack_1c0;
        bVar10 = true;
        do {
          bVar8 = bVar10;
          uVar19 = (ulong)uVar47;
          if (uVar47 != 0) {
            puVar20 = (ulong *)puStack_1a0[1];
            puVar34 = puStack_1b8 + 7;
            uVar31 = uVar19;
            do {
              *(undefined4 *)((long)puVar34 + -0x1c) = 0;
              puVar39 = puVar20;
              if (!bVar8) {
                puVar39 = puVar20 + 1;
              }
              lVar42 = 8;
              if (!bVar8) {
                lVar42 = 0;
              }
              uVar36 = *(ulong *)((long)puVar20 + lVar42);
              uVar33 = *puVar39;
              puVar34[-2] = 0;
              puVar34[-1] = uVar33;
              *puVar34 = uVar36;
              puVar20 = puVar20 + 2;
              uVar14 = (int)uVar31 - 1;
              uVar31 = (ulong)uVar14;
              puVar34 = puVar34 + 9;
            } while (uVar14 != 0);
          }
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = 0;
            do {
              if ((int)(puStack_1b0 + uVar31 * 2)[1] != 0) {
                puVar34 = (ulong *)puStack_1b0[uVar31 * 2];
                puVar20 = puVar34;
                do {
                  puVar20 = (ulong *)*puVar20;
                  if (puVar20 == puVar34) goto LAB_10976e5d4;
                } while (puVar20[6] == puVar34[6]);
                puVar35 = (ulong *)puVar20[1];
                puVar34 = puVar35;
                puVar39 = puVar35;
                while (puVar34 = (ulong *)puVar34[1], puVar34 != puVar35) {
                  uVar33 = puVar34[6];
                  uVar36 = puVar39[6];
                  if (uVar33 != uVar36) {
                    if ((long)puVar20[6] < (long)uVar36) {
                      if ((long)uVar33 < (long)uVar36) {
LAB_10976e580:
                        do {
                          *(uint *)((long)puVar39 + 0x1c) = *(uint *)((long)puVar39 + 0x1c) | 0x40;
                          puVar39 = (ulong *)puVar39[1];
                        } while (puVar39 != puVar34);
                      }
                    }
                    else if ((long)uVar36 < (long)uVar33) goto LAB_10976e580;
                    puVar20 = (ulong *)*puVar34;
                    puVar39 = puVar34;
                  }
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uStack_1c0._4_4_);
          }
          for (uVar31 = 0; (uint)uVar31 < uVar47; uVar31 = (ulong)((int)uVar31 + 1)) {
            puVar34 = puStack_1b8 + uVar31 * 9;
            uVar14 = *(uint *)((long)puVar34 + 0x1c);
            puVar20 = puVar34;
            if ((uVar14 >> 6 & 1) != 0) {
              do {
                puVar20 = (ulong *)*puVar20;
                if (puVar20 == puVar34) goto LAB_10976e5d4;
                uVar36 = puVar20[7];
                uVar33 = puVar34[7];
                puVar39 = puVar34;
              } while (uVar36 == uVar33);
              do {
                puVar39 = (ulong *)puVar39[1];
                if (puVar39 == puVar34) goto LAB_10976e5d4;
                uVar37 = puVar39[7];
              } while (uVar37 == uVar33);
              if (((long)uVar36 < (long)uVar33) && ((long)uVar33 < (long)uVar37)) {
                uVar14 = uVar14 | 0x80;
              }
              else {
                if (((long)uVar36 <= (long)uVar33) || ((long)uVar33 <= (long)uVar37))
                goto LAB_10976e5d4;
                uVar14 = uVar14 | 0x100;
              }
              *(uint *)((long)puVar34 + 0x1c) = uVar14;
            }
LAB_10976e5d4:
          }
          puVar20 = auStack_190 + lVar29 * 9;
          iVar16 = (int)*puVar20;
          if (iVar16 != 0) {
            uVar31 = auStack_190[lVar29 * 9 + 1];
            do {
              puVar46 = &uStack_1c0;
              FUN_10976f488(uVar31,puVar45,lVar29);
              uVar31 = uVar31 + 0x30;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          puVar21 = *(undefined4 **)((uint *)auStack_190[lVar29 * 9 + 7] + 2);
          uVar44 = *(uint *)auStack_190[lVar29 * 9 + 7];
          uVar14 = 3;
          if (!bVar8) {
            uVar14 = 0xc;
          }
          puVar34 = (ulong *)(ulong)uVar14;
          uVar31 = puVar45[lVar29 * 0x33 + 0x32];
          if (uVar31 == 0) {
            uVar14 = 0x7fffffff;
          }
          else {
            uVar33 = -uVar31;
            if (-1 < (long)uVar31) {
              uVar33 = uVar31;
            }
            uVar14 = 0;
            if (uVar33 != 0) {
              uVar14 = (uint)(((uVar33 >> 1) + 0x200000) / uVar33);
            }
          }
          uVar3 = -uVar14;
          if (-1 < (long)uVar31) {
            uVar3 = uVar14;
          }
          if (0xb < (int)uVar3) {
            uVar3 = 0xc;
          }
          puVar45 = (ulong *)(ulong)uVar3;
          if (uVar44 < 2) {
            if (uVar44 == 1) goto LAB_10976e768;
LAB_10976e79c:
            if ((int)uVar19 != 0) {
              puVar22 = (uint *)((long)puStack_1b8 + 0x1c);
              uVar31 = uVar19;
              do {
                if ((*(long *)(puVar22 + 3) != 0) && ((*puVar22 >> 4 & 1) == 0)) {
                  *puVar22 = *puVar22 | 0x10;
                }
                puVar22 = puVar22 + 0x12;
                uVar47 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar47;
              } while (uVar47 != 0);
            }
          }
          else if (uVar47 != 0) {
            uVar14 = puVar21[4];
            if (uVar47 <= (uint)puVar21[4]) {
              uVar14 = uVar47;
            }
            puVar22 = puVar21 + 10;
            do {
              uVar47 = *puVar22;
              if ((uint)uStack_1c0 <= *puVar22) {
                uVar47 = (uint)uStack_1c0;
              }
              if (uVar14 <= uVar47 && uVar47 - uVar14 != 0) {
                puVar46 = puStack_1b8 + (ulong)uVar14 * 9;
                FUN_10976f840(puVar20,puVar22[-4],*(undefined8 *)(puVar22 + -2));
                FUN_10976f948(puVar20,puVar46,uVar47 - uVar14,puVar45,puVar34);
              }
              uVar44 = uVar44 - 1;
              puVar22 = puVar22 + 6;
              uVar14 = uVar47;
            } while (1 < uVar44);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar21 = *(undefined4 **)(auStack_190[lVar29 * 9 + 7] + 8);
LAB_10976e768:
            puVar46 = puStack_1b8;
            FUN_10976f840(puVar20,*puVar21,*(undefined8 *)(puVar21 + 2));
            FUN_10976f948(puVar20,puVar46,uVar19);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar46 = puVar45;
            param_5 = puVar34;
            goto LAB_10976e79c;
          }
          puVar34 = puStack_1b8;
          puVar20 = (ulong *)0x30;
          uVar47 = (uint)uVar19;
          if (bVar30) {
            uVar31 = uVar19;
            puVar45 = puStack_1b8;
            if (uVar47 != 0) {
              do {
                if ((((puVar45[4] & 0xc) != 0) || ((*(byte *)((long)puVar45 + 0x24) & 0xc) != 0)) &&
                   (uVar14 = *(uint *)((long)puVar45 + 0x1c), (uVar14 >> 4 & 1) == 0)) {
                  uVar33 = puVar45[6];
                  iVar16 = (int)param_3[0x67];
                  if (iVar16 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + 0x69;
                    do {
                      lVar42 = uVar33 - (long)*(int *)((long)puVar39 + 4);
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)uVar33 <= (long)(int)*puVar39 + (long)(int)uVar36) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 <= *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[3];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + 6;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  uVar44 = (uint)param_3[200];
                  if (uVar44 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + (ulong)uVar44 * 6 + 0xc4;
                    do {
                      lVar42 = (long)(int)*puVar39 - uVar33;
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)*(int *)((long)puVar39 + 4) - (long)(int)uVar36 <= (long)uVar33) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 < *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[4];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + -6;
                      uVar44 = uVar44 - 1;
                    } while (uVar44 != 0);
                  }
                }
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
                puVar45 = puVar45 + 9;
              } while (uVar14 != 0);
              goto LAB_10976e8fc;
            }
          }
          else {
LAB_10976e8fc:
            if (uVar47 != 0) {
              uVar33 = puStack_198[lVar29 * 0x33 + 0x32];
              puVar45 = puStack_1b8 + 5;
              uVar31 = uVar19;
              do {
                piVar23 = (int *)*puVar45;
                if (piVar23 != (int *)0x0) {
                  uVar14 = *(uint *)((long)puVar45 + -0xc);
                  if ((uVar14 >> 9 & 1) == 0) {
                    if ((uVar14 >> 10 & 1) == 0) {
                      lVar42 = puVar45[1] - (long)*piVar23;
                      if (lVar42 == 0 || (long)puVar45[1] < (long)*piVar23) {
                        uVar36 = *(long *)(piVar23 + 2) +
                                 ((long)(lVar42 * uVar33 + ((long)(lVar42 * uVar33) >> 0x3f) +
                                        0x8000) >> 0x10);
                      }
                      else {
                        puVar20 = (ulong *)(long)piVar23[1];
                        lVar13 = *(long *)(piVar23 + 2);
                        if (lVar42 < (long)puVar20) {
                          FUN_1097532ac();
                          uVar36 = lVar42 + lVar13;
                        }
                        else {
                          lVar42 = (lVar42 - (long)puVar20) * uVar33;
                          uVar36 = *(long *)(piVar23 + 4) + lVar13 +
                                   (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                        }
                      }
                    }
                    else {
                      uVar36 = *(long *)(piVar23 + 4) + *(long *)(piVar23 + 2);
                    }
                  }
                  else {
                    uVar36 = *(ulong *)(piVar23 + 2);
                  }
                  puVar45[3] = uVar36;
                  *(uint *)((long)puVar45 + -0xc) = uVar14 | 0x20;
                }
                puVar39 = puStack_1a8;
                puVar45 = puVar45 + 9;
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
              } while (uVar14 != 0);
              uVar14 = 0;
              puVar35 = puVar34 + uVar19 * 9;
              puVar45 = puVar34;
              do {
                uVar14 = (*(uint *)((long)puVar45 + 0x1c) >> 4 & 1) + uVar14;
                puVar45 = puVar45 + 9;
              } while (puVar45 < puVar35);
              if (uVar14 != 0) {
                if (uVar14 < 0x11) {
                  puVar45 = auStack_f0;
                }
                else if ((uVar14 >> 0x1c != 0) ||
                        (puVar45 = puStack_1a8, (*(code *)puStack_1a8[1])(puStack_1a8,uVar14 * 8),
                        puVar45 == (ulong *)0x0)) goto LAB_10976ec28;
                uVar31 = 0;
                puVar24 = puVar34;
                do {
                  if ((*(byte *)((long)puVar24 + 0x1c) >> 4 & 1) != 0) {
                    puVar25 = puVar45 + uVar31;
                    if ((int)uVar31 != 0) {
                      uVar36 = puVar24[6];
                      do {
                        puVar26 = puVar25 + -1;
                        if (*(long *)(*puVar26 + 0x30) <= (long)uVar36) break;
                        *puVar25 = *puVar26;
                        puVar25 = puVar26;
                      } while (puVar45 < puVar26);
                    }
                    *puVar25 = (ulong)puVar24;
                    uVar31 = (ulong)((int)uVar31 + 1);
                  }
                  puVar24 = puVar24 + 9;
                } while (puVar24 < puVar35);
                iVar16 = (int)uVar31;
                do {
                  uVar14 = *(uint *)((long)puVar34 + 0x1c);
                  if ((uVar14 >> 4 & 1) == 0) {
                    uVar44 = (uint)puVar34[3];
                    if ((uVar44 >> 1 & 1) != 0) {
                      if (((int)puVar34[4] == 0) ||
                         ((int)puVar34[4] != *(int *)((long)puVar34 + 0x24) ||
                          (uVar44 & 4) == 0 && (uVar14 & 0x40) == 0)) goto LAB_10976eb94;
                      *(uint *)(puVar34 + 3) = uVar44 & 0xfffffffd;
                    }
                    uVar36 = puVar34[6];
                    if (iVar16 == 0) {
LAB_10976eb54:
                      uVar37 = *puVar45;
LAB_10976eb6c:
                      lVar42 = (uVar36 - *(long *)(uVar37 + 0x30)) * uVar33;
                      uVar36 = *(long *)(uVar37 + 0x40) +
                               (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    else {
                      lVar42 = 0;
                      uVar37 = 0xffffffff;
                      do {
                        if ((long)uVar36 < *(long *)(*(long *)((long)puVar45 + lVar42) + 0x30)) {
                          if (lVar42 == 0) goto LAB_10976eb54;
                          uVar27 = uVar37 & 0xffffffff;
                          break;
                        }
                        uVar37 = uVar37 + 1;
                        lVar42 = lVar42 + 8;
                        uVar27 = (ulong)(iVar16 - 1);
                      } while (uVar31 << 3 != lVar42);
                      uVar37 = 0;
                      uVar27 = puVar45[uVar27];
                      puVar24 = puVar45 + uVar31;
                      do {
                        puVar24 = puVar24 + -1;
                        if (uVar31 == uVar37) {
                          uVar37 = 0;
                          goto LAB_10976eb60;
                        }
                        uVar37 = uVar37 + 1;
                      } while ((long)uVar36 <= *(long *)(*puVar24 + 0x30));
                      uVar37 = (ulong)((iVar16 - (int)uVar37) + 1);
LAB_10976eb60:
                      if (uVar37 == uVar31) {
                        uVar37 = puVar45[iVar16 - 1];
                        goto LAB_10976eb6c;
                      }
                      lVar42 = uVar36 - *(long *)(uVar27 + 0x30);
                      if (lVar42 == 0) {
                        uVar36 = *(ulong *)(uVar27 + 0x40);
                      }
                      else {
                        uVar37 = puVar45[uVar37];
                        if (uVar36 == *(ulong *)(uVar37 + 0x30)) {
                          uVar36 = *(ulong *)(uVar37 + 0x40);
                        }
                        else {
                          lVar13 = *(long *)(uVar27 + 0x40);
                          puVar20 = (ulong *)(*(ulong *)(uVar37 + 0x30) - *(long *)(uVar27 + 0x30));
                          FUN_1097532ac(lVar42,*(long *)(uVar37 + 0x40) - lVar13);
                          uVar36 = lVar42 + lVar13;
                        }
                      }
                    }
                    puVar34[8] = uVar36;
                    *(uint *)((long)puVar34 + 0x1c) = uVar14 | 0x20;
                  }
LAB_10976eb94:
                  puVar34 = puVar34 + 9;
                } while (puVar34 < puVar35);
                if (puVar45 != auStack_f0) {
                  (*(code *)puVar39[2])(puVar39,puVar45);
                }
              }
            }
          }
LAB_10976ec28:
          puVar45 = puStack_198;
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = puStack_198[lVar29 * 0x33 + 0x32];
            uVar33 = puStack_198[lVar29 * 0x33 + 0x33];
            puVar34 = puStack_1b0;
            iVar16 = uStack_1c0._4_4_;
            do {
              if ((uint)puVar34[1] != 0) {
                uVar14 = 0;
                uVar27 = 0;
                uVar37 = *puVar34;
                uVar40 = uVar37 + (ulong)(uint)puVar34[1] * 0x48;
                uVar36 = uVar37;
                do {
                  uVar4 = uVar36;
                  if (uVar27 != 0) {
                    uVar4 = uVar27;
                  }
                  uVar44 = *(uint *)(uVar36 + 0x1c) & 0x20;
                  if (uVar44 != 0) {
                    uVar27 = uVar4;
                  }
                  uVar14 = uVar14 + (uVar44 >> 5);
                  uVar36 = uVar36 + 0x48;
                } while (uVar36 < uVar40);
                uVar36 = uVar27;
                if (uVar14 < 2) {
                  if (uVar14 == 1) {
                    lVar29 = *(long *)(uVar27 + 0x30) * uVar31;
                    uVar33 = *(long *)(uVar27 + 0x40) - (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10)
                    ;
                  }
                  do {
                    if (uVar37 != uVar27) {
                      lVar29 = *(long *)(uVar37 + 0x30) * uVar31;
                      *(ulong *)(uVar37 + 0x40) =
                           uVar33 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    uVar37 = uVar37 + 0x48;
                  } while (uVar37 < uVar40);
                }
                else {
                  do {
                    do {
                      uVar37 = uVar36;
                      uVar36 = *(ulong *)(uVar37 + 8);
                      if (uVar36 == uVar27) goto LAB_10976edb8;
                      uVar40 = uVar36;
                    } while ((*(byte *)(uVar36 + 0x1c) >> 5 & 1) != 0);
                    do {
                      uVar40 = *(ulong *)(uVar40 + 8);
                    } while ((*(byte *)(uVar40 + 0x1c) >> 5 & 1) == 0);
                    lVar42 = *(long *)(uVar37 + 0x30);
                    lVar29 = *(long *)(uVar40 + 0x30);
                    uVar4 = lVar42 - lVar29;
                    uVar7 = uVar40;
                    if (lVar42 <= lVar29) {
                      uVar4 = lVar29 - lVar42;
                      lVar29 = lVar42;
                      uVar7 = uVar37;
                      uVar37 = uVar40;
                    }
                    puVar35 = *(ulong **)(uVar7 + 0x40);
                    puVar39 = *(ulong **)(uVar37 + 0x40);
                    if (uVar4 == 0) {
                      uVar37 = 0x10000;
                    }
                    else {
                      lVar13 = (long)puVar39 - (long)puVar35;
                      lVar42 = -lVar13;
                      if (-1 < lVar13) {
                        lVar42 = lVar13;
                      }
                      uVar7 = 0;
                      if (uVar4 != 0) {
                        uVar7 = (lVar42 * 0x10000 + (uVar4 >> 1)) / uVar4;
                      }
                      uVar37 = -uVar7;
                      if ((long)puVar35 <= (long)puVar39) {
                        uVar37 = uVar7;
                      }
                    }
                    do {
                      lVar13 = *(long *)(uVar36 + 0x30) - lVar29;
                      param_5 = puVar35;
                      lVar42 = lVar13 * uVar37;
                      if ((long)uVar4 <= lVar13) {
                        param_5 = puVar39;
                        lVar42 = (lVar13 - uVar4) * uVar31;
                      }
                      puVar46 = param_5;
                      if (lVar13 < 1) {
                        puVar46 = puVar35;
                        lVar42 = lVar13 * uVar31;
                      }
                      puVar20 = (ulong *)((long)puVar46 +
                                         (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10));
                      *(ulong **)(uVar36 + 0x40) = puVar20;
                      uVar36 = *(ulong *)(uVar36 + 8);
                    } while (uVar36 != uVar40);
                    uVar36 = uVar40;
                  } while (uVar40 != uVar27);
                }
              }
LAB_10976edb8:
              puVar34 = puVar34 + 2;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          if (uVar47 != 0) {
            puVar34 = (ulong *)puStack_1a0[1];
            pbVar28 = (byte *)puStack_1a0[2];
            bVar32 = 0x20;
            if (!bVar8) {
              bVar32 = 0x40;
            }
            puVar39 = puStack_1b8 + 8;
            do {
              puVar35 = puVar34;
              if (!bVar8) {
                puVar35 = puVar34 + 1;
              }
              *puVar35 = *puVar39;
              if ((*(byte *)((long)puVar39 + -0x24) >> 4 & 1) != 0) {
                *pbVar28 = *pbVar28 | bVar32;
              }
              puVar39 = puVar39 + 9;
              pbVar28 = pbVar28 + 1;
              puVar34 = puVar34 + 2;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (!bVar1) {
            puVar46 = (ulong *)0x0;
            param_5 = (ulong *)0x0;
            puVar20 = puVar11;
            FUN_10976ee80(puStack_198,uVar17);
          }
          bVar30 = true;
          lVar29 = 1;
          bVar10 = false;
        } while (bVar8);
        puVar11 = (ulong *)0x0;
        param_4 = puVar46;
      }
    }
  }
  puVar46 = puStack_1a8;
  FUN_10976fb18(auStack_190 + 9,puStack_1a8);
  param_1 = auStack_190;
  FUN_10976fb18(param_1,puVar46);
  param_3 = puVar20;
  if (puStack_1b8 != (ulong *)0x0) {
    param_1 = puVar46;
    (*(code *)puVar46[2])();
    param_3 = puVar20;
  }
  param_2 = puStack_1b0;
  if (puStack_1b0 != (ulong *)0x0) {
    (*(code *)puVar46[2])();
    param_1 = puVar46;
  }
LAB_10976e25c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar11 = param_1;
  if (((ulong *)param_1[0x32] != param_2) || ((ulong *)param_1[0x33] != param_4)) {
    param_1[0x32] = (ulong)param_2;
    param_1[0x33] = (ulong)param_4;
    FUN_10976fb94(param_1,0);
  }
  if (((ulong *)param_1[0x65] != param_3) || ((ulong *)param_1[0x66] != param_5)) {
    param_1[0x65] = (ulong)param_3;
    param_1[0x66] = (ulong)param_5;
    puVar11 = param_1;
    FUN_10976fb94(param_1,1);
    if ((long)param_3 < 0x20c49ba) {
      bVar1 = (long)param_3 * 0x7d < (long)(param_1[0x1eb] * 8);
    }
    else {
      bVar1 = (long)param_3 < (long)(param_1[0x1eb] << 3) / 0x7d;
    }
    puVar20 = param_1 + 0x67;
    *(bool *)((long)param_1 + 0xf6c) = bVar1;
    uVar17 = (ulong)(uint)param_1[0x1ec];
    if (0 < (int)(uint)param_1[0x1ec]) {
      lVar29 = (long)param_3 * uVar17;
      do {
        if (lVar29 + (lVar29 >> 0x3f) + 0x8000 < 0x210000) goto LAB_10976ef7c;
        lVar29 = lVar29 - (long)param_3;
        uVar19 = uVar17 - 1;
        bVar1 = 0 < (long)uVar17;
        uVar17 = uVar19;
      } while (uVar19 != 0 && bVar1);
      uVar17 = 0;
    }
LAB_10976ef7c:
    iVar16 = 0;
    *(int *)((long)param_1 + 0xf64) = (int)uVar17;
    do {
      puVar46 = param_1 + 0x18a;
      if (iVar16 == 1) {
        puVar46 = param_1 + 200;
      }
      puVar34 = param_1 + 0x129;
      if (iVar16 != 2) {
        puVar34 = puVar46;
      }
      puVar46 = puVar20;
      if (iVar16 != 0) {
        puVar46 = puVar34;
      }
      iVar38 = (int)*puVar46;
      if (iVar38 != 0) {
        puVar46 = puVar46 + 3;
        do {
          lVar29 = (long)param_3 * (long)(int)puVar46[-1];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -4);
          puVar46[2] = (long)param_5 + (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
          puVar46[3] = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
          lVar29 = (long)param_3 * (long)(int)puVar46[-2];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -0xc);
          *puVar46 = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10) + 0x20 &
                     0xffffffffffffffc0;
          puVar46[1] = lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10;
          iVar38 = iVar38 + -1;
          puVar46 = puVar46 + 6;
        } while (iVar38 != 0);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
    bVar1 = true;
    do {
      bVar30 = bVar1;
      lVar29 = 0;
      if (!bVar30) {
        lVar29 = 0x308;
      }
      piVar23 = (int *)((long)puVar20 + lVar29) + 2;
      iVar16 = *(int *)((long)puVar20 + lVar29);
      if (iVar16 != 0) {
        lVar29 = 0x610;
        if (!bVar30) {
          lVar29 = 0x918;
        }
        iVar38 = *(int *)((long)puVar20 + lVar29);
        do {
          if (iVar38 != 0) {
            puVar11 = (ulong *)((long)param_1 + lVar29 + 0x360);
            iVar12 = iVar38;
            do {
              uVar14 = *piVar23 - (int)puVar11[-4];
              uVar47 = -uVar14;
              if (-1 < (int)uVar14) {
                uVar47 = uVar14;
              }
              if ((long)((long)param_3 * (ulong)uVar47 +
                         ((long)((long)param_3 * (ulong)uVar47) >> 0x3f) + 0x8000) < 0x400000) {
                uVar17 = *puVar11;
                *(ulong *)(piVar23 + 10) = puVar11[1];
                *(ulong *)(piVar23 + 8) = uVar17;
                uVar17 = puVar11[-2];
                *(ulong *)(piVar23 + 6) = puVar11[-1];
                *(ulong *)(piVar23 + 4) = uVar17;
                break;
              }
              puVar11 = puVar11 + 6;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          piVar23 = piVar23 + 0xc;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      bVar1 = false;
    } while (bVar30);
  }
  return puVar11;
}



/* Entry: 10976ee80; end: 10976f0cf;  */

void FUN_10976ee80(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  
  if ((*(long *)(param_1 + 400) != param_2) || (*(long *)(param_1 + 0x198) != param_4)) {
    *(long *)(param_1 + 400) = param_2;
    *(long *)(param_1 + 0x198) = param_4;
    FUN_10976fb94(param_1,0);
  }
  if ((*(long *)(param_1 + 0x328) != param_3) || (*(long *)(param_1 + 0x330) != param_5)) {
    *(long *)(param_1 + 0x328) = param_3;
    *(long *)(param_1 + 0x330) = param_5;
    FUN_10976fb94(param_1,1);
    if (param_3 < 0x20c49ba) {
      bVar1 = param_3 * 0x7d < *(long *)(param_1 + 0xf58) * 8;
    }
    else {
      bVar1 = param_3 < (*(long *)(param_1 + 0xf58) << 3) / 0x7d;
    }
    piVar2 = (int *)(param_1 + 0x338);
    *(bool *)(param_1 + 0xf6c) = bVar1;
    uVar12 = (ulong)*(uint *)(param_1 + 0xf60);
    if (0 < (int)*(uint *)(param_1 + 0xf60)) {
      lVar11 = param_3 * uVar12;
      do {
        if (lVar11 + (lVar11 >> 0x3f) + 0x8000 < 0x210000) goto LAB_10976ef7c;
        lVar11 = lVar11 - param_3;
        uVar5 = uVar12 - 1;
        bVar1 = 0 < (long)uVar12;
        uVar12 = uVar5;
      } while (uVar5 != 0 && bVar1);
      uVar12 = 0;
    }
LAB_10976ef7c:
    iVar10 = 0;
    *(int *)(param_1 + 0xf64) = (int)uVar12;
    do {
      piVar15 = (int *)(param_1 + 0xc50);
      if (iVar10 == 1) {
        piVar15 = (int *)(param_1 + 0x640);
      }
      piVar4 = (int *)(param_1 + 0x948);
      if (iVar10 != 2) {
        piVar4 = piVar15;
      }
      piVar15 = piVar2;
      if (iVar10 != 0) {
        piVar15 = piVar4;
      }
      iVar13 = *piVar15;
      if (iVar13 != 0) {
        puVar14 = (ulong *)(piVar15 + 6);
        do {
          lVar11 = param_3 * (int)puVar14[-1];
          lVar16 = param_3 * *(int *)((long)puVar14 + -4);
          puVar14[2] = param_5 + (lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10);
          puVar14[3] = param_5 + (lVar11 + (lVar11 >> 0x3f) + 0x8000 >> 0x10);
          lVar11 = param_3 * (int)puVar14[-2];
          lVar16 = param_3 * *(int *)((long)puVar14 + -0xc);
          *puVar14 = param_5 + 0x20 + (lVar11 + (lVar11 >> 0x3f) + 0x8000 >> 0x10) &
                     0xffffffffffffffc0;
          puVar14[1] = lVar16 + (lVar16 >> 0x3f) + 0x8000 >> 0x10;
          iVar13 = iVar13 + -1;
          puVar14 = puVar14 + 6;
        } while (iVar13 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
    bVar1 = true;
    do {
      bVar7 = bVar1;
      lVar11 = 0;
      if (!bVar7) {
        lVar11 = 0x308;
      }
      piVar15 = (int *)((long)piVar2 + lVar11) + 2;
      iVar10 = *(int *)((long)piVar2 + lVar11);
      if (iVar10 != 0) {
        lVar11 = 0x610;
        if (!bVar7) {
          lVar11 = 0x918;
        }
        iVar13 = *(int *)((long)piVar2 + lVar11);
        do {
          if (iVar13 != 0) {
            puVar8 = (undefined8 *)(param_1 + 0x360 + lVar11);
            iVar9 = iVar13;
            do {
              uVar6 = *piVar15 - *(int *)(puVar8 + -4);
              uVar3 = -uVar6;
              if (-1 < (int)uVar6) {
                uVar3 = uVar6;
              }
              if ((long)(param_3 * (ulong)uVar3 + ((long)(param_3 * (ulong)uVar3) >> 0x3f) + 0x8000)
                  < 0x400000) {
                uVar17 = *puVar8;
                *(undefined8 *)(piVar15 + 10) = puVar8[1];
                *(undefined8 *)(piVar15 + 8) = uVar17;
                uVar17 = puVar8[-2];
                *(undefined8 *)(piVar15 + 6) = puVar8[-1];
                *(undefined8 *)(piVar15 + 4) = uVar17;
                break;
              }
              puVar8 = puVar8 + 6;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          piVar15 = piVar15 + 0xc;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      bVar1 = false;
    } while (bVar7);
  }
  return;
}



/* Entry: 10976f0d0; end: 10976f1a7;  */

undefined8 FUN_10976f0d0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *puVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(code **)(param_1 + 0x90) = FUN_10976fc30;
  *(code **)(param_1 + 0x98) = FUN_10976ee80;
  *(code **)(param_1 + 0xa0) = FUN_10976fe5c;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x109770164;
  *(code **)(param_1 + 0xc0) = FUN_109770168;
  *(code **)(param_1 + 200) = FUN_1097701d4;
  *(code **)(param_1 + 0xd0) = FUN_10977039c;
  *(code **)(param_1 + 0xd8) = FUN_10977044c;
  *(undefined8 **)(param_1 + 0xa8) = puVar1;
  *(undefined8 *)(param_1 + 0xb0) = 0x10977013c;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x109770a28;
  *(code **)(param_1 + 0xf8) = FUN_109770a2c;
  *(code **)(param_1 + 0x100) = FUN_109770b2c;
  *(undefined8 *)(param_1 + 0x108) = 0x109770bc4;
  *(code **)(param_1 + 0x110) = FUN_109770c5c;
  *(undefined8 **)(param_1 + 0xe0) = puVar1;
  *(code **)(param_1 + 0xe8) = FUN_109770a00;
  return 0;
}



/* Entry: 10976f1a8; end: 10976f1ef;  */

void FUN_10976f1a8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_109770d90(param_1 + 0x30,uVar1);
  FUN_109770d90(param_1 + 0x60,uVar1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10976f1f0; end: 10976f3f3;  */

undefined8 FUN_10976f1f0(uint *param_1,uint *param_2,int *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = *param_2;
  uVar9 = (ulong)uVar13;
  if ((uVar13 & 0x7fffffff) != 0) {
    if ((uVar13 & 0x7fffffff) >> 0x1b == 0) {
      lVar4 = param_4;
      (**(code **)(param_4 + 8))(param_4,uVar13 << 4);
      if (lVar4 != 0) goto LAB_10976f250;
      uVar2 = 0x40;
    }
    else {
      uVar2 = 10;
    }
    lVar4 = 0x10;
    goto LAB_10976f3d8;
  }
  lVar4 = 0;
LAB_10976f250:
  *(long *)(param_1 + 4) = lVar4;
  if (uVar13 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
LAB_10976f2ac:
    (**(code **)(param_4 + 8))(param_4,uVar9 << 6 | 0x20);
    if (param_4 != 0) {
      lVar4 = 0;
      if (*(long *)(param_1 + 4) != 0) {
        lVar4 = *(long *)(param_1 + 4) + uVar9 * 8;
      }
      *(long *)(param_1 + 6) = lVar4;
      *param_1 = uVar13;
      param_1[1] = 0;
      param_1[8] = 0;
      *(long *)(param_1 + 10) = param_4;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      if (uVar13 != 0) {
        puVar3 = *(undefined8 **)(param_2 + 2);
        puVar5 = *(undefined8 **)(param_1 + 2);
        do {
          *puVar5 = *puVar3;
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar3 + 1);
          puVar5 = puVar5 + 6;
          puVar3 = (undefined8 *)((long)puVar3 + 0xc);
          uVar12 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar12;
        } while (uVar12 != 0);
      }
      if (param_3 != (int *)0x0) {
        piVar7 = *(int **)(param_3 + 2);
        iVar8 = *param_3;
        *(int **)(param_1 + 0xe) = param_3;
        if (iVar8 != 0) {
          do {
            iVar1 = *piVar7;
            if (iVar1 != 0) {
              uVar13 = 0;
              iVar6 = 0;
              uVar12 = 0;
              pbVar10 = *(byte **)(piVar7 + 2);
              do {
                pbVar11 = pbVar10;
                if (uVar13 == 0) {
                  pbVar11 = pbVar10 + 1;
                  uVar12 = (uint)*pbVar10;
                  uVar13 = 0x80;
                }
                if ((uVar13 & uVar12) != 0) {
                  FUN_10976f3f4(param_1,iVar6);
                }
                uVar13 = uVar13 >> 1;
                iVar6 = iVar6 + 1;
                pbVar10 = pbVar11;
              } while (iVar1 != iVar6);
            }
            piVar7 = piVar7 + 6;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          uVar13 = *param_1;
          uVar12 = param_1[1];
          goto LAB_10976f394;
        }
      }
      uVar12 = 0;
LAB_10976f394:
      if (uVar13 != 0 && uVar12 != uVar13) {
        uVar12 = 0;
        do {
          FUN_10976f3f4(param_1,uVar12);
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar12);
      }
      return 0;
    }
    uVar2 = 0x40;
LAB_10976f3c8:
    lVar4 = 0x28;
  }
  else {
    if (uVar13 < 0x2aaaaab) {
      lVar4 = param_4;
      (**(code **)(param_4 + 8))(param_4,uVar9 * 0x30);
      if (lVar4 != 0) {
        *(long *)(param_1 + 2) = lVar4;
        if ((uVar13 & 0x7fffffff) >> 0x19 == 0) goto LAB_10976f2ac;
        uVar2 = 10;
        goto LAB_10976f3c8;
      }
      uVar2 = 0x40;
    }
    else {
      uVar2 = 10;
    }
    lVar4 = 8;
  }
LAB_10976f3d8:
  *(undefined8 *)((long)param_1 + lVar4) = 0;
  return uVar2;
}



/* Entry: 10976f3f4; end: 10976f487;  */

void FUN_10976f3f4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    piVar3 = (int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x30);
    if (((uint)piVar3[6] >> 2 & 1) == 0) {
      piVar3[6] = piVar3[6] | 4;
      puVar4 = *(undefined8 **)(param_1 + 6);
      uVar2 = param_1[1];
      piVar3[8] = 0;
      piVar3[9] = 0;
      if (uVar2 != 0) {
        puVar6 = puVar4;
        uVar5 = uVar2;
        do {
          piVar7 = (int *)*puVar6;
          if ((*piVar7 <= piVar3[1] + *piVar3) && (*piVar3 <= piVar7[1] + *piVar7)) {
            *(int **)(piVar3 + 8) = piVar7;
            break;
          }
          puVar6 = puVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar2 < uVar1) {
        param_1[1] = uVar2 + 1;
        puVar4[uVar2] = piVar3;
      }
    }
  }
  return;
}



/* Entry: 10976f488; end: 10976f83f;  */

void FUN_10976f488(int *param_1,long param_2,uint param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  
  if ((*(byte *)(param_1 + 6) >> 3 & 1) != 0) {
    return;
  }
  lVar19 = param_2 + (ulong)param_3 * 0x198;
  lVar6 = *(long *)(lVar19 + 400);
  iVar7 = *param_1;
  iVar9 = param_1[1];
  lVar12 = lVar6 * iVar7;
  uVar8 = *(long *)(lVar19 + 0x198) + (lVar12 + (lVar12 >> 0x3f) + 0x8000 >> 0x10);
  lVar12 = lVar6 * iVar9 + (lVar6 * iVar9 >> 0x3f) + 0x8000;
  uVar18 = lVar12 >> 0x10;
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_4 + 0xc0) != '\0') {
      cVar1 = *(char *)(param_4 + 0xc2);
      *(ulong *)(param_1 + 4) = uVar18;
LAB_10976f5fc:
      piVar17 = *(int **)(param_1 + 8);
      if (piVar17 != (int *)0x0) {
        if ((*(byte *)(piVar17 + 6) >> 3 & 1) == 0) {
          FUN_10976f488(piVar17,param_2,param_3,param_4);
          iVar7 = *param_1;
          iVar9 = param_1[1];
        }
        lVar6 = ((long)(iVar7 + (iVar9 >> 1)) - ((long)*piVar17 + (long)(piVar17[1] >> 1))) * lVar6;
        uVar8 = (*(long *)(piVar17 + 2) - (lVar12 >> 0x11)) + (*(long *)(piVar17 + 4) >> 1) +
                (lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10);
      }
      uVar13 = uVar8;
      if (*(char *)(param_4 + 0xc4) != '\0') {
        if ((long)uVar18 < 0x41) {
          if ((long)uVar18 < 0x20) {
            uVar11 = uVar8 + 0x20 & 0xffffffffffffffc0;
            uVar13 = uVar11;
            if (0 < (long)uVar18) {
              uVar13 = uVar8 + uVar18 + 0x20 & 0xffffffffffffffc0;
              uVar2 = uVar11 - uVar8;
              uVar10 = uVar13 - (uVar8 + uVar18);
              uVar8 = -uVar2;
              if (-1 < (long)uVar2) {
                uVar8 = uVar2;
              }
              uVar2 = -uVar10;
              if (-1 < (long)uVar10) {
                uVar2 = uVar10;
              }
              if (uVar8 <= uVar2) {
                uVar13 = uVar11;
              }
            }
          }
          else {
            uVar13 = uVar8 + (uVar18 >> 1) & 0xffffffffffffffc0;
            uVar18 = 0x40;
          }
        }
        else {
          uVar11 = *(ulong *)(lVar19 + 0x18);
          uVar2 = uVar18 - uVar11;
          uVar8 = -uVar2;
          if (-1 < (long)uVar2) {
            uVar8 = uVar2;
          }
          if ((long)uVar11 < 0x31) {
            uVar11 = 0x30;
          }
          if (0x27 < uVar8) {
            uVar11 = uVar18;
          }
          if (uVar11 < 0xc0) {
            uVar8 = uVar11 & 0x3f;
            uVar18 = uVar11;
            if (9 < uVar8) {
              if (uVar8 < 0x20) {
                uVar18 = uVar11 & 0xc0 | 10;
              }
              else {
                uVar18 = uVar11 & 0xc0 | 0x36;
                if (0x35 < uVar8) {
                  uVar18 = uVar11;
                }
              }
            }
          }
          else {
            uVar18 = uVar11 + 0x20 & 0x7fffffffffffffc0;
          }
        }
      }
      uVar2 = (uVar13 + 0x20 & 0xffffffffffffffc0) - uVar13;
      uVar11 = (uVar13 + uVar18 + 0x20 & 0xffffffffffffffc0) - (uVar13 + uVar18);
      uVar8 = -uVar2;
      if (-1 < (long)uVar2) {
        uVar8 = uVar2;
      }
      uVar10 = -uVar11;
      if (-1 < (long)uVar11) {
        uVar10 = uVar11;
      }
      if (uVar8 <= uVar10) {
        uVar11 = uVar2;
      }
      *(ulong *)(param_1 + 2) = uVar11 + uVar13;
      *(ulong *)(param_1 + 4) = uVar18;
      if (cVar1 != '\0') {
        uVar8 = 0x40;
        if (0x3f < (long)uVar18) {
          uVar8 = uVar18 + 0x20 & 0x7fffffffffffffc0;
        }
        uVar18 = uVar11 + uVar13 + (uVar8 >> 1);
        uVar13 = uVar18 + 0x20 & 0xffffffffffffffc0;
        if ((uVar8 & 0x40) != 0) {
          uVar13 = uVar18 & 0xffffffffffffffc0 | 0x20;
        }
        *(ulong *)(param_1 + 2) = uVar13 - (uVar8 >> 1);
        *(ulong *)(param_1 + 4) = uVar8;
      }
      goto LAB_10976f81c;
    }
  }
  else if (*(char *)(param_4 + 0xc1) != '\0') {
    cVar1 = *(char *)(param_4 + 0xc3);
    *(ulong *)(param_1 + 4) = uVar18;
    iVar14 = *(int *)(param_2 + 0x338);
    if (iVar14 != 0) {
      plVar3 = (long *)(param_2 + 0x350);
      do {
        lVar4 = (long)(iVar9 + iVar7) - (long)*(int *)((long)plVar3 + -4);
        if (lVar4 < -(long)*(int *)(param_2 + 0xf68)) break;
        if (iVar9 + iVar7 <= (int)plVar3[-1] + *(int *)(param_2 + 0xf68)) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (lVar4 <= *(int *)(param_2 + 0xf64))) {
            lVar4 = *plVar3;
            iVar14 = 3;
            iVar15 = 1;
            goto LAB_10976f55c;
          }
          break;
        }
        plVar3 = plVar3 + 6;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    lVar4 = 0;
    iVar15 = 0;
    iVar14 = 2;
LAB_10976f55c:
    uVar16 = *(uint *)(param_2 + 0x640);
    if (uVar16 != 0) {
      plVar3 = (long *)(param_2 + (ulong)uVar16 * 0x30 + 0x628);
      do {
        lVar5 = (long)(int)plVar3[-1] - (long)iVar7;
        if (lVar5 < -(long)*(int *)(param_2 + 0xf68)) break;
        if (*(int *)((long)plVar3 + -4) - *(int *)(param_2 + 0xf68) <= iVar7) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (lVar5 < *(int *)(param_2 + 0xf64))) {
            lVar5 = *plVar3;
            goto LAB_10976f5ac;
          }
          break;
        }
        plVar3 = plVar3 + -6;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    lVar5 = 0;
    iVar14 = iVar15;
LAB_10976f5ac:
    if (iVar14 == 1) {
      *(ulong *)(param_1 + 2) = lVar4 - uVar18;
      if (cVar1 == '\0') goto LAB_10976f81c;
      uVar8 = 0x40;
      if (0x3f < (long)uVar18) {
        uVar8 = uVar18 + 0x20 & 0x7fffffffffffffc0;
      }
      *(ulong *)(param_1 + 2) = lVar4 - uVar8;
    }
    else if (iVar14 == 3) {
      *(long *)(param_1 + 2) = lVar5;
      uVar8 = lVar4 - lVar5;
    }
    else {
      if (iVar14 != 2) goto LAB_10976f5fc;
      *(long *)(param_1 + 2) = lVar5;
      if (cVar1 == '\0') goto LAB_10976f81c;
      uVar8 = 0x40;
      if (0x3f < (long)uVar18) {
        uVar8 = uVar18 + 0x20 & 0x7fffffffffffffc0;
      }
    }
    *(ulong *)(param_1 + 4) = uVar8;
    goto LAB_10976f81c;
  }
  *(ulong *)(param_1 + 2) = uVar8;
  *(ulong *)(param_1 + 4) = uVar18;
LAB_10976f81c:
  param_1[6] = param_1[6] | 8;
  return;
}



/* Entry: 10976f840; end: 10976f947;  */

void FUN_10976f840(uint *param_1,uint param_2,byte *param_3)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  
  uVar11 = *param_1;
  if (uVar11 != 0) {
    puVar4 = (uint *)(*(long *)(param_1 + 2) + 0x18);
    uVar7 = uVar11;
    do {
      *puVar4 = *puVar4 & 0xfffffffb;
      puVar4[4] = 0xffffffff;
      puVar4 = puVar4 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_2 == 0) {
    param_1[1] = 0;
    return;
  }
  lVar5 = 0;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  do {
    pbVar3 = param_3;
    if (uVar10 == 0) {
      pbVar3 = param_3 + 1;
      uVar8 = (uint)*param_3;
      uVar10 = 0x80;
    }
    if ((uVar10 & uVar8) != 0) {
      lVar1 = *(long *)(param_1 + 2) + lVar5;
      if (((*(uint *)(lVar1 + 0x18) >> 2 & 1) == 0) &&
         (*(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 4, uVar7 < uVar11)) {
        *(long *)(*(long *)(param_1 + 4) + (ulong)uVar7 * 8) = lVar1;
        uVar7 = uVar7 + 1;
      }
    }
    uVar10 = uVar10 >> 1;
    lVar5 = lVar5 + 0x30;
    param_3 = pbVar3;
  } while ((ulong)param_2 * 0x30 - lVar5 != 0);
  param_1[1] = uVar7;
  if (1 < uVar7) {
    lVar5 = *(long *)(param_1 + 4);
    uVar6 = 1;
    do {
      piVar9 = *(int **)(lVar5 + uVar6 * 8);
      iVar2 = *piVar9;
      uVar11 = (uint)uVar6 - 1;
      do {
        piVar12 = *(int **)(lVar5 + (ulong)uVar11 * 8);
        if (*piVar12 < iVar2) break;
        *(int **)(lVar5 + (ulong)(uVar11 + 1) * 8) = piVar12;
        *(int **)(lVar5 + (ulong)uVar11 * 8) = piVar9;
        uVar11 = uVar11 - 1;
      } while (uVar11 < (uint)uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



/* Entry: 10976f948; end: 10976fb17;  */

void FUN_10976f948(long param_1,long param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  if (param_3 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    lVar11 = (long)param_4;
    uVar2 = *(uint *)(param_1 + 4);
    uVar12 = (ulong)uVar2;
    uVar1 = 0x100;
    uVar4 = 0x80;
    if (param_5 != 0xc) {
      uVar1 = 0x80;
      uVar4 = 0x100;
    }
    lVar3 = -(long)param_4;
    do {
      uVar13 = *(uint *)(param_2 + 0x1c);
      if ((uVar13 >> 4 & 1) == 0) {
        lVar14 = *(long *)(param_2 + 0x30);
        uVar7 = *(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20);
        if ((uVar7 & param_5 & 10) == 0) {
          if ((uVar7 & param_5) == 0) {
            if ((uVar13 >> 6 & 1) != 0) {
              if ((uVar13 & uVar4) == 0) {
                if (((uVar13 & uVar1) != 0) && (uVar6 = uVar12, puVar5 = puVar10, uVar2 != 0)) {
                  do {
                    piVar8 = (int *)*puVar5;
                    lVar9 = lVar14 - ((long)*piVar8 + (long)piVar8[1]);
                    if ((lVar11 > lVar9 && lVar9 != lVar3) && (lVar11 <= lVar9 || lVar3 <= lVar9)) {
                      uVar7 = 0x410;
                      goto LAB_10976fab8;
                    }
                    uVar6 = uVar6 - 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar6 != 0);
                }
LAB_10976fac4:
                puVar5 = puVar10;
                uVar6 = uVar12;
                if (*(long *)(param_2 + 0x28) == 0 && uVar2 != 0) {
                  do {
                    piVar8 = (int *)*puVar5;
                    if ((*piVar8 <= lVar14) && (lVar14 <= piVar8[1] + *piVar8)) {
                      *(int **)(param_2 + 0x28) = piVar8;
                      break;
                    }
                    uVar6 = uVar6 - 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar6 != 0);
                }
              }
              else {
                uVar6 = uVar12;
                puVar5 = puVar10;
                if (uVar2 != 0) {
LAB_10976fa30:
                  piVar8 = (int *)*puVar5;
                  if (lVar11 <= lVar14 - *piVar8 || lVar14 - *piVar8 <= lVar3)
                  goto code_r0x00010976fa48;
                  uVar7 = 0x210;
LAB_10976fab8:
                  *(int **)(param_2 + 0x28) = piVar8;
                  *(uint *)(param_2 + 0x1c) = uVar7 | uVar13;
                  goto LAB_10976fac4;
                }
              }
            }
          }
          else {
            uVar6 = uVar12;
            puVar5 = puVar10;
            if (uVar2 != 0) {
              do {
                piVar8 = (int *)*puVar5;
                lVar9 = lVar14 - ((long)*piVar8 + (long)piVar8[1]);
                if ((lVar11 > lVar9 && lVar9 != lVar3) && (lVar11 <= lVar9 || lVar3 <= lVar9)) {
                  uVar13 = uVar13 | 0x410;
                  goto LAB_10976fa58;
                }
                uVar6 = uVar6 - 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 != 0);
            }
          }
        }
        else {
          uVar6 = uVar12;
          puVar5 = puVar10;
          if (uVar2 != 0) {
LAB_10976f9b0:
            piVar8 = (int *)*puVar5;
            if (lVar11 <= lVar14 - *piVar8 || lVar14 - *piVar8 <= lVar3) goto code_r0x00010976f9c8;
            uVar13 = uVar13 | 0x210;
LAB_10976fa58:
            *(uint *)(param_2 + 0x1c) = uVar13;
            *(int **)(param_2 + 0x28) = piVar8;
          }
        }
      }
LAB_10976fa60:
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
code_r0x00010976fa48:
  uVar6 = uVar6 - 1;
  puVar5 = puVar5 + 1;
  if (uVar6 == 0) goto LAB_10976fac4;
  goto LAB_10976fa30;
code_r0x00010976f9c8:
  uVar6 = uVar6 - 1;
  puVar5 = puVar5 + 1;
  if (uVar6 == 0) goto LAB_10976fa60;
  goto LAB_10976f9b0;
}



/* Entry: 10976fb18; end: 10976fb93;  */

void FUN_10976fb18(undefined8 *param_1,long param_2)

{
  if (param_1[5] != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_1[2] != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1[2] = 0;
  if (param_1[1] != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10976fb94; end: 10976fc2f;  */

void FUN_10976fb94(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  
  param_1 = param_1 + (ulong)param_2 * 0x198;
  if (*(int *)(param_1 + 8) != 0) {
    lVar4 = *(long *)(param_1 + 400);
    lVar6 = lVar4 * *(int *)(param_1 + 0x10);
    lVar6 = lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10;
    *(long *)(param_1 + 0x18) = lVar6;
    *(ulong *)(param_1 + 0x20) = lVar6 + 0x20U & 0xffffffffffffffc0;
    iVar5 = *(int *)(param_1 + 8) + -1;
    if (iVar5 != 0) {
      piVar7 = (int *)(param_1 + 0x28);
      do {
        lVar6 = lVar4 * *piVar7;
        lVar6 = lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10;
        uVar3 = lVar6 - *(long *)(param_1 + 0x18);
        uVar1 = -uVar3;
        if (-1 < (long)uVar3) {
          uVar1 = uVar3;
        }
        lVar2 = *(long *)(param_1 + 0x18);
        if (0x7f < uVar1) {
          lVar2 = lVar6;
        }
        *(long *)(piVar7 + 2) = lVar2;
        *(ulong *)(piVar7 + 4) = lVar2 + 0x20U & 0xffffffffffffffc0;
        piVar7 = piVar7 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



/* Entry: 10976fc30; end: 10976fe5b;  */

undefined8 FUN_10976fc30(long *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar5 = param_1;
  (*(code *)param_1[1])(param_1,0xf70);
  if (plVar5 == (long *)0x0) {
    uVar6 = 0x40;
  }
  else {
    *plVar5 = (long)param_1;
    *(uint *)(plVar5 + 0x35) = (uint)*(ushort *)(param_2 + 0x80);
    bVar2 = *(byte *)(param_2 + 0x84);
    uVar7 = (uint)bVar2;
    if (bVar2 != 0) {
      psVar8 = (short *)(param_2 + 0x88);
      plVar10 = plVar5 + 0x38;
      do {
        *(int *)plVar10 = (int)*psVar8;
        uVar7 = uVar7 - 1;
        psVar8 = psVar8 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar7 != 0);
    }
    *(uint *)(plVar5 + 0x34) = bVar2 + 1;
    *(uint *)(plVar5 + 2) = (uint)*(ushort *)(param_2 + 0x82);
    bVar2 = *(byte *)(param_2 + 0x85);
    uVar7 = (uint)bVar2;
    if (bVar2 != 0) {
      psVar8 = (short *)(param_2 + 0xa2);
      plVar10 = plVar5 + 5;
      do {
        *(int *)plVar10 = (int)*psVar8;
        uVar7 = uVar7 - 1;
        psVar8 = psVar8 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar7 != 0);
    }
    *(uint *)(plVar5 + 1) = bVar2 + 1;
    FUN_10976fe8c(plVar5 + 0x67,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                  *(undefined1 *)(param_2 + 9),param_2 + 0x28,*(undefined4 *)(param_2 + 0x7c),0);
    uVar7 = 1;
    FUN_10976fe8c(plVar5 + 0x67,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                  *(undefined1 *)(param_2 + 0xb),param_2 + 0x58,*(undefined4 *)(param_2 + 0x7c),1);
    if ((ulong)*(byte *)(param_2 + 8) != 0) {
      uVar9 = 0;
      psVar8 = (short *)(param_2 + 0xe);
      do {
        sVar3 = (short)uVar7;
        uVar7 = (int)(short)(*psVar8 - psVar8[-1]);
        if ((int)(short)(*psVar8 - psVar8[-1]) <= (int)sVar3) {
          uVar7 = (int)sVar3;
        }
        uVar9 = uVar9 + 2;
        psVar8 = psVar8 + 2;
      } while (uVar9 < *(byte *)(param_2 + 8));
    }
    if ((ulong)*(byte *)(param_2 + 9) != 0) {
      uVar9 = 0;
      psVar8 = (short *)(param_2 + 0x2a);
      do {
        sVar3 = (short)uVar7;
        uVar7 = (int)(short)(*psVar8 - psVar8[-1]);
        if ((int)(short)(*psVar8 - psVar8[-1]) <= (int)sVar3) {
          uVar7 = (int)sVar3;
        }
        uVar9 = uVar9 + 2;
        psVar8 = psVar8 + 2;
      } while (uVar9 < *(byte *)(param_2 + 9));
    }
    if ((ulong)*(byte *)(param_2 + 10) != 0) {
      uVar9 = 0;
      psVar8 = (short *)(param_2 + 0x3e);
      do {
        sVar3 = (short)uVar7;
        uVar7 = (int)(short)(*psVar8 - psVar8[-1]);
        if ((int)(short)(*psVar8 - psVar8[-1]) <= (int)sVar3) {
          uVar7 = (int)sVar3;
        }
        uVar9 = uVar9 + 2;
        psVar8 = psVar8 + 2;
      } while (uVar9 < *(byte *)(param_2 + 10));
    }
    if ((ulong)*(byte *)(param_2 + 0xb) != 0) {
      uVar9 = 0;
      psVar8 = (short *)(param_2 + 0x5a);
      do {
        sVar3 = (short)uVar7;
        uVar7 = (int)(short)(*psVar8 - psVar8[-1]);
        if ((int)(short)(*psVar8 - psVar8[-1]) <= (int)sVar3) {
          uVar7 = (int)sVar3;
        }
        uVar9 = uVar9 + 2;
        psVar8 = psVar8 + 2;
      } while (uVar9 < *(byte *)(param_2 + 0xb));
    }
    uVar6 = 0;
    uVar4 = 0;
    if ((uVar7 & 0xffff) != 0) {
      uVar4 = (uVar7 >> 1 & 0x7fff | 0x3e80000) / (uVar7 & 0xffff);
    }
    uVar9 = *(ulong *)(param_2 + 0x70);
    if ((long)(ulong)uVar4 <= (long)*(ulong *)(param_2 + 0x70)) {
      uVar9 = (ulong)uVar4;
    }
    plVar5[0x1eb] = uVar9;
    uVar1 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(plVar5 + 0x1ec) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(plVar5 + 0x1ed) = uVar1;
    plVar5[0x33] = 0;
    plVar5[0x32] = 0;
    plVar5[0x66] = 0;
    plVar5[0x65] = 0;
  }
  *param_3 = plVar5;
  return uVar6;
}



/* Entry: 10976fe5c; end: 10976fe8b;  */

void FUN_10976fe5c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x129) = 0;
    *(undefined4 *)(param_1 + 0x18a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010976fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 10976fe8c; end: 10977003f;  */

void FUN_10976fe8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  lVar3 = 0x308;
  if (param_7 != 0) {
    lVar3 = 0x918;
  }
  piVar1 = (int *)(param_1 + lVar3);
  lVar3 = 0;
  if (param_7 != 0) {
    lVar3 = 0x610;
  }
  piVar8 = (int *)(param_1 + lVar3);
  *piVar8 = 0;
  *piVar1 = 0;
  FUN_109770040(0,param_2,param_3,piVar8,piVar1);
  FUN_109770040(1,param_4,param_5,piVar8,piVar1);
  iVar7 = *piVar8;
  iVar4 = *piVar1;
  piVar9 = piVar8;
  iVar11 = iVar7;
  if (iVar7 != 0) {
    do {
      if (iVar11 + -1 == 0) {
        iVar10 = piVar9[2];
        iVar12 = piVar9[3];
      }
      else {
        if (iVar11 == 0) break;
        iVar10 = piVar9[2];
        iVar5 = piVar9[0xe] - iVar10;
        iVar12 = piVar9[3];
        if (iVar5 < piVar9[3]) {
          piVar9[3] = iVar5;
          iVar12 = iVar5;
        }
      }
      piVar9[4] = iVar10 + iVar12;
      piVar9[5] = iVar10;
      piVar9 = piVar9 + 0xc;
      iVar11 = iVar11 + -1;
    } while( true );
  }
  piVar9 = piVar1;
  iVar11 = iVar4;
  if (iVar4 != 0) {
    do {
      if (iVar11 + -1 == 0) {
        iVar10 = piVar9[2];
        iVar12 = piVar9[3];
      }
      else {
        if (iVar11 == 0) break;
        iVar10 = piVar9[2];
        iVar5 = iVar10 - piVar9[0xe];
        iVar12 = piVar9[3];
        if (piVar9[3] < iVar5) {
          piVar9[3] = iVar5;
          iVar12 = iVar5;
        }
      }
      piVar9[4] = iVar10;
      piVar9[5] = iVar10 + iVar12;
      piVar9 = piVar9 + 0xc;
      iVar11 = iVar11 + -1;
    } while( true );
  }
  iVar11 = 1;
  do {
    if (iVar7 != 0) {
      iVar10 = piVar8[4];
      piVar8[5] = piVar8[5] - param_6;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        piVar8 = piVar8 + 2;
      }
      else {
        piVar9 = piVar8 + 0x11;
        do {
          piVar8 = piVar9;
          iVar5 = (*piVar8 - iVar10) / 2;
          iVar12 = iVar10 + iVar5;
          iVar6 = iVar12;
          if (param_6 <= iVar5) {
            iVar12 = iVar10 + param_6;
            iVar6 = *piVar8 - param_6;
          }
          *piVar8 = iVar6;
          piVar8[-0xd] = iVar12;
          iVar10 = piVar8[-1];
          iVar7 = iVar7 + -1;
          piVar9 = piVar8 + 0xc;
        } while (iVar7 != 0);
        piVar8 = piVar8 + -3;
      }
      piVar8[2] = iVar10 + param_6;
    }
    bVar2 = iVar11 != 0;
    piVar8 = piVar1;
    iVar7 = iVar4;
    iVar11 = iVar11 + -1;
  } while (bVar2);
  return;
}



/* Entry: 109770040; end: 109770167;  */

void FUN_109770040(int param_1,uint param_2,short *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  
  uVar8 = *param_4;
  uVar9 = *param_5;
  if (1 < param_2) {
    bVar7 = true;
    do {
      uVar1 = uVar8;
      psVar5 = param_3;
      psVar6 = param_3 + 1;
      if (bVar7 || param_1 != 0) {
        uVar1 = uVar9;
        psVar5 = param_3 + 1;
        psVar6 = param_3;
      }
      puVar13 = param_4;
      if (bVar7 || param_1 != 0) {
        puVar13 = param_5;
      }
      sVar3 = *psVar5;
      uVar4 = (int)*psVar6 - (int)sVar3;
      puVar10 = puVar13 + 2;
      uVar12 = (uint)sVar3;
      puVar11 = puVar10;
      if (uVar1 != 0) {
        lVar14 = 0;
        puVar11 = puVar13 + (ulong)(uVar1 - 1) * 0xc + 0xe;
LAB_109770098:
        uVar2 = *puVar10;
        if (uVar2 != uVar12 && (int)sVar3 <= (int)uVar2) {
          lVar14 = (ulong)uVar1 - lVar14;
          puVar13 = puVar13 + (ulong)uVar1 * 0xc + -10;
          do {
            *(undefined8 *)(puVar13 + 0xe) = *(undefined8 *)(puVar13 + 2);
            *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)puVar13;
            *(undefined8 *)(puVar13 + 0x12) = *(undefined8 *)(puVar13 + 6);
            *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(puVar13 + 4);
            *(undefined8 *)(puVar13 + 0x16) = *(undefined8 *)(puVar13 + 10);
            *(undefined8 *)(puVar13 + 0x14) = *(undefined8 *)(puVar13 + 8);
            puVar13 = puVar13 + -0xc;
            lVar14 = lVar14 + -1;
            puVar11 = puVar10;
          } while (lVar14 != 0);
          goto LAB_1097700e8;
        }
        if (uVar2 != uVar12) goto code_r0x0001097700a8;
        if ((int)uVar4 < 0) {
          if ((int)puVar10[1] <= (int)uVar4) goto LAB_1097700f8;
        }
        else if ((int)uVar4 <= (int)puVar10[1]) goto LAB_1097700f8;
        puVar10[1] = uVar4;
        goto LAB_1097700f8;
      }
LAB_1097700e8:
      *puVar11 = uVar12;
      puVar11[1] = uVar4;
      if (bVar7 || param_1 != 0) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
LAB_1097700f8:
      bVar7 = false;
      param_3 = param_3 + 2;
      param_2 = param_2 - 2;
    } while (1 < param_2);
  }
  *param_4 = uVar8;
  *param_5 = uVar9;
  return;
code_r0x0001097700a8:
  puVar10 = puVar10 + 0xc;
  lVar14 = lVar14 + 1;
  if (uVar1 == (uint)lVar14) goto LAB_1097700e8;
  goto LAB_109770098;
}



/* Entry: 109770168; end: 1097701d3;  */

void FUN_109770168(uint *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long *plVar6;
  uint *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  ulong unaff_x22;
  uint *puVar8;
  undefined1 auStack_c8 [8];
  ulong uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  uint *puStack_90;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_30 = *param_3 + (*param_3 >> 0x3f) + 0x8000 >> 0x10;
  lStack_28 = param_3[1] + (param_3[1] >> 0x3f) + 0x8000 >> 0x10;
  plVar6 = (long *)0x1;
  FUN_109770700();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_1097701d4;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puStack_a8 = unaff_x19;
  puStack_40 = &stack0xfffffffffffffff0;
  if (param_1[2] == 0) {
    bVar2 = param_2 != 0;
    puStack_a8 = param_1;
    if (param_1[4] == 1) {
      unaff_x22 = 0;
      unaff_x20 = *(undefined8 *)param_1;
      do {
        unaff_x21 = plVar6 + 2;
        uVar5 = *plVar6 + (*plVar6 >> 0x3f) + 0x8000U >> 0x10;
        puVar4 = param_1 + (ulong)bVar2 * 0xc + 6;
        FUN_10977077c(param_1 + (ulong)bVar2 * 0xc + 6,uVar5,
                      plVar6[1] + (plVar6[1] >> 0x3f) + 0x8000U >> 0x10,unaff_x20,
                      (long)&uStack_84 + unaff_x22);
        param_2 = (uint)uVar5;
        if ((int)puVar4 != 0) goto LAB_109770364;
        unaff_x22 = unaff_x22 + 4;
        plVar6 = unaff_x21;
      } while (unaff_x22 != 0xc);
      unaff_x22 = (ulong)uStack_80;
      unaff_x21 = (long *)(ulong)uStack_7c;
      puVar4 = param_1 + (ulong)bVar2 * 0xc + 0xe;
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        puVar8 = *(uint **)(param_1 + (ulong)bVar2 * 0xc + 0x10);
        do {
          uVar1 = *puVar8;
          if ((((uStack_84 < uVar1) &&
               ((0x80U >> (ulong)(uStack_84 & 7) &
                (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_84 >> 3))) != 0)) ||
              ((uStack_80 < uVar1 &&
               ((0x80U >> (ulong)(uStack_80 & 7) &
                (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_80 >> 3))) != 0)))) ||
             ((uStack_7c < uVar1 &&
              ((0x80U >> (ulong)(uStack_7c & 7) &
               (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_7c >> 3))) != 0))))
          goto LAB_109770320;
          puVar8 = puVar8 + 6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = unaff_x20;
      func_0x000109770944(puVar4,unaff_x20,&puStack_90);
      param_2 = (uint)uVar7;
      puVar8 = puStack_90;
      if ((int)puVar4 == 0) {
LAB_109770320:
        puVar4 = puVar8;
        param_2 = uStack_84;
        func_0x0001097708d0(puVar8,uStack_84,unaff_x20);
        if ((int)puVar4 == 0) {
          puVar4 = puVar8;
          uVar5 = unaff_x22;
          func_0x0001097708d0(puVar8,unaff_x22,unaff_x20);
          param_2 = (uint)uVar5;
          if ((int)puVar4 == 0) {
            plVar6 = unaff_x21;
            func_0x0001097708d0(puVar8,unaff_x21,unaff_x20);
            param_2 = (uint)plVar6;
            puVar4 = puVar8;
            if ((int)puVar8 == 0) goto LAB_109770368;
          }
        }
      }
    }
    else {
      puVar4 = (uint *)0x6;
    }
LAB_109770364:
    param_1[2] = (uint)puVar4;
    puVar8 = puVar4;
  }
LAB_109770368:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (puVar8[2] == 0) {
    pcStack_98 = FUN_10977039c;
    if (puVar8[4] == 1) {
      uVar7 = *(undefined8 *)puVar8;
      puVar4 = puVar8 + 10;
      if (*puVar4 != 0) {
        *(uint *)(*(long *)(puVar8 + 0xc) + (ulong)*puVar4 * 0x18 + -8) = param_2;
      }
      uStack_c0 = unaff_x22;
      plStack_b8 = unaff_x21;
      uStack_b0 = unaff_x20;
      ppuStack_a0 = &puStack_40;
      func_0x000109770944(puVar4,uVar7,auStack_c8);
      uVar3 = (uint)puVar4;
      if (uVar3 == 0) {
        puVar4 = puVar8 + 0x16;
        if (*puVar4 != 0) {
          *(uint *)(*(long *)(puVar8 + 0x18) + (ulong)*puVar4 * 0x18 + -8) = param_2;
        }
        func_0x000109770944(puVar4,uVar7,auStack_c8);
        uVar3 = (uint)puVar4;
        if (uVar3 == 0) {
          return;
        }
      }
    }
    else {
      uVar3 = 6;
    }
    puVar8[2] = uVar3;
    return;
  }
  return;
}



/* Entry: 1097701d4; end: 10977039b;  */

void FUN_1097701d4(uint *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long *plVar6;
  uint *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  ulong unaff_x22;
  uint *puVar8;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  uint *puStack_60;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puStack_78 = unaff_x19;
  if (param_1[2] == 0) {
    bVar2 = param_2 != 0;
    puStack_78 = param_1;
    if (param_1[4] == 1) {
      unaff_x22 = 0;
      unaff_x20 = *(undefined8 *)param_1;
      do {
        unaff_x21 = param_3 + 2;
        uVar5 = *param_3 + (*param_3 >> 0x3f) + 0x8000U >> 0x10;
        puVar4 = param_1 + (ulong)bVar2 * 0xc + 6;
        FUN_10977077c(param_1 + (ulong)bVar2 * 0xc + 6,uVar5,
                      param_3[1] + (param_3[1] >> 0x3f) + 0x8000U >> 0x10,unaff_x20,
                      (long)&uStack_54 + unaff_x22);
        param_2 = (uint)uVar5;
        if ((int)puVar4 != 0) goto LAB_109770364;
        unaff_x22 = unaff_x22 + 4;
        param_3 = unaff_x21;
      } while (unaff_x22 != 0xc);
      unaff_x22 = (ulong)uStack_50;
      unaff_x21 = (long *)(ulong)uStack_4c;
      puVar4 = param_1 + (ulong)bVar2 * 0xc + 0xe;
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        puVar8 = *(uint **)(param_1 + (ulong)bVar2 * 0xc + 0x10);
        do {
          uVar1 = *puVar8;
          if ((((uStack_54 < uVar1) &&
               ((0x80U >> (ulong)(uStack_54 & 7) &
                (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_54 >> 3))) != 0)) ||
              ((uStack_50 < uVar1 &&
               ((0x80U >> (ulong)(uStack_50 & 7) &
                (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_50 >> 3))) != 0)))) ||
             ((uStack_4c < uVar1 &&
              ((0x80U >> (ulong)(uStack_4c & 7) &
               (uint)*(byte *)(*(long *)(puVar8 + 2) + (ulong)(uStack_4c >> 3))) != 0))))
          goto LAB_109770320;
          puVar8 = puVar8 + 6;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar7 = unaff_x20;
      func_0x000109770944(puVar4,unaff_x20,&puStack_60);
      param_2 = (uint)uVar7;
      puVar8 = puStack_60;
      if ((int)puVar4 == 0) {
LAB_109770320:
        puVar4 = puVar8;
        param_2 = uStack_54;
        func_0x0001097708d0(puVar8,uStack_54,unaff_x20);
        if ((int)puVar4 == 0) {
          puVar4 = puVar8;
          uVar5 = unaff_x22;
          func_0x0001097708d0(puVar8,unaff_x22,unaff_x20);
          param_2 = (uint)uVar5;
          if ((int)puVar4 == 0) {
            plVar6 = unaff_x21;
            func_0x0001097708d0(puVar8,unaff_x21,unaff_x20);
            param_2 = (uint)plVar6;
            puVar4 = puVar8;
            if ((int)puVar8 == 0) goto LAB_109770368;
          }
        }
      }
    }
    else {
      puVar4 = (uint *)0x6;
    }
LAB_109770364:
    param_1[2] = (uint)puVar4;
    puVar8 = puVar4;
  }
LAB_109770368:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (puVar8[2] == 0) {
    pcStack_68 = FUN_10977039c;
    if (puVar8[4] == 1) {
      uVar7 = *(undefined8 *)puVar8;
      puVar4 = puVar8 + 10;
      if (*puVar4 != 0) {
        *(uint *)(*(long *)(puVar8 + 0xc) + (ulong)*puVar4 * 0x18 + -8) = param_2;
      }
      uStack_90 = unaff_x22;
      plStack_88 = unaff_x21;
      uStack_80 = unaff_x20;
      puStack_70 = &stack0xfffffffffffffff0;
      func_0x000109770944(puVar4,uVar7,auStack_98);
      uVar3 = (uint)puVar4;
      if (uVar3 == 0) {
        puVar4 = puVar8 + 0x16;
        if (*puVar4 != 0) {
          *(uint *)(*(long *)(puVar8 + 0x18) + (ulong)*puVar4 * 0x18 + -8) = param_2;
        }
        func_0x000109770944(puVar4,uVar7,auStack_98);
        uVar3 = (uint)puVar4;
        if (uVar3 == 0) {
          return;
        }
      }
    }
    else {
      uVar3 = 6;
    }
    puVar8[2] = uVar3;
    return;
  }
  return;
}



/* Entry: 10977039c; end: 10977044b;  */

void FUN_10977039c(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 2) == 1) {
    uVar3 = *param_1;
    puVar2 = (uint *)(param_1 + 5);
    if (*puVar2 != 0) {
      *(undefined4 *)(param_1[6] + (ulong)*puVar2 * 0x18 + -8) = param_2;
    }
    func_0x000109770944(puVar2,uVar3,auStack_38);
    iVar1 = (int)puVar2;
    if (iVar1 == 0) {
      puVar2 = (uint *)(param_1 + 0xb);
      if (*puVar2 != 0) {
        *(undefined4 *)(param_1[0xc] + (ulong)*puVar2 * 0x18 + -8) = param_2;
      }
      func_0x000109770944(puVar2,uVar3,auStack_38);
      iVar1 = (int)puVar2;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  else {
    iVar1 = 6;
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



/* Entry: 10977044c; end: 10977044f;  */

ulong * FUN_10977044c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  bool bVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  ulong *puVar45;
  ulong *puVar46;
  uint uVar47;
  undefined8 uStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong auStack_190 [18];
  undefined8 uStack_100;
  ulong auStack_f0 [16];
  long lStack_70;
  ulong *puVar26;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*(ushort *)((long)param_2 + 2) == 0) || ((short)*param_2 == 0)) {
    puVar11 = (ulong *)0x0;
    goto LAB_10976e25c;
  }
  uStack_100 = 0;
  auStack_190[0xf] = 0;
  auStack_190[0xe] = 0;
  auStack_190[0x11] = 0;
  auStack_190[0x10] = 0;
  auStack_190[0xb] = 0;
  auStack_190[10] = 0;
  auStack_190[0xd] = 0;
  auStack_190[0xc] = 0;
  auStack_190[7] = 0;
  auStack_190[6] = 0;
  auStack_190[9] = 0;
  auStack_190[8] = 0;
  auStack_190[3] = 0;
  auStack_190[2] = 0;
  auStack_190[5] = 0;
  auStack_190[4] = 0;
  puStack_198 = (ulong *)0x0;
  puStack_1a0 = (ulong *)0x0;
  auStack_190[1] = 0;
  auStack_190[0] = 0;
  puStack_1b8 = (ulong *)0x0;
  uStack_1c0 = 0;
  puStack_1b0 = (ulong *)0x0;
  puVar46 = (ulong *)*param_3;
  puVar11 = puVar46;
  puVar20 = param_3;
  puVar34 = param_4;
  puStack_1a8 = puVar46;
  (*(code *)puVar46[1])(puVar46,(ulong)*(ushort *)((long)param_2 + 2) * 0x48);
  if (puVar11 == (ulong *)0x0) {
    puStack_1b8 = (ulong *)0x0;
LAB_10976e008:
    puVar11 = (ulong *)0x40;
    param_4 = puVar34;
  }
  else {
    puStack_1b8 = puVar11;
    if ((ulong)(ushort)*param_2 == 0) {
      puStack_1b0 = (ulong *)0x0;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uStack_1c0 = (ulong)uVar6;
LAB_10976e014:
      uVar47 = (uint)uVar6;
      uVar17 = 0;
      bVar30 = true;
      bVar1 = true;
      puVar45 = puStack_1b0;
    }
    else {
      puVar45 = puVar46;
      (*(code *)puVar46[1])(puVar46,(ulong)(ushort)*param_2 << 4);
      if (puVar45 == (ulong *)0x0) {
        puStack_1b0 = (ulong *)0x0;
        goto LAB_10976e008;
      }
      uVar5 = (ushort)*param_2;
      uVar17 = (ulong)uVar5;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uVar47 = (uint)uVar6;
      uStack_1c0 = (ulong)CONCAT24(uVar5,uVar47);
      puStack_1b0 = puVar45;
      if (uVar5 == 0) goto LAB_10976e014;
      uVar19 = 0;
      uVar31 = param_2[3];
      puVar20 = puVar45;
      lVar29 = 0;
      do {
        lVar42 = (ulong)*(ushort *)(uVar31 + uVar19 * 2) + 1;
        puVar34 = puVar11 + lVar29 * 9;
        *puVar20 = (ulong)puVar34;
        uVar14 = (int)lVar42 - (int)lVar29;
        *(uint *)(puVar20 + 1) = uVar14;
        if (uVar14 != 0) {
          *puVar34 = (ulong)(puVar11 + lVar42 * 9 + -9);
          puVar34[2] = (ulong)puVar20;
          puVar39 = puVar34;
          if (uVar14 != 1) {
            puVar35 = puVar11 + lVar29 * 9 + 9;
            do {
              puVar39 = puVar35;
              puVar39[-8] = (ulong)puVar39;
              *puVar39 = (ulong)(puVar39 + -9);
              puVar39[2] = (ulong)puVar20;
              uVar14 = uVar14 - 1;
              puVar35 = puVar39 + 9;
            } while (1 < uVar14);
          }
          puVar39[1] = (ulong)puVar34;
        }
        puVar20 = puVar20 + 2;
        uVar19 = uVar19 + 1;
        lVar29 = lVar42;
      } while (uVar19 != uVar17);
      bVar30 = false;
      bVar1 = false;
    }
    puVar34 = param_4;
    puStack_1b0 = puVar45;
    if (uVar47 != 0) {
      uVar19 = 0;
      uVar31 = param_2[1];
      puVar20 = puVar11 + 3;
      plVar43 = (long *)(uVar31 + 8);
      do {
        *(undefined4 *)puVar20 = 0;
        bVar32 = *(byte *)(param_2[2] + uVar19);
        *(uint *)puVar20 = bVar32 & 1 ^ 1;
        plVar2 = (long *)(uVar31 + ((long)((puVar20[-3] - (long)puVar11 >> 3) * 0x38e38e3900000000)
                                   >> 0x1c));
        lVar29 = plVar43[-1];
        lVar42 = *plVar43;
        uVar36 = lVar29 - *plVar2;
        uVar37 = lVar42 - plVar2[1];
        uVar33 = -uVar36;
        if (-1 < (long)uVar36) {
          uVar33 = uVar36;
        }
        uVar27 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar27 = uVar37;
        }
        iVar16 = 1;
        if (0x7fffffffffffffff < uVar37) {
          iVar16 = 2;
        }
        iVar38 = 0;
        if (uVar33 * 0xc < uVar27) {
          iVar38 = iVar16;
        }
        iVar16 = 8;
        iVar12 = iVar16;
        if (0x7fffffffffffffff < uVar36) {
          iVar12 = 4;
        }
        if (uVar27 * 0xc < uVar33) {
          iVar38 = iVar12;
        }
        *(int *)(puVar20 + 1) = iVar38;
        plVar2 = (long *)(uVar31 + ((((long)(puVar20[-2] - (long)puVar11) >> 3) * 0x38e38e39 << 0x20
                                    ) >> 0x1c));
        uVar37 = *plVar2 - lVar29;
        uVar27 = plVar2[1] - lVar42;
        uVar33 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar33 = uVar37;
        }
        uVar40 = -uVar27;
        if (-1 < (long)uVar27) {
          uVar40 = uVar27;
        }
        if (uVar40 * 0xc < uVar33) {
          if (0x7fffffffffffffff < uVar37) {
            iVar16 = 4;
          }
        }
        else if (uVar33 * 0xc < uVar40) {
          iVar16 = 1;
          if (0x7fffffffffffffff < uVar27) {
            iVar16 = 2;
          }
        }
        else {
          iVar16 = 0;
        }
        *(int *)((long)puVar20 + 0xc) = iVar16;
        if ((bVar32 & 1) == 0) {
          uVar18 = 3;
LAB_10976e184:
          *(undefined4 *)puVar20 = uVar18;
        }
        else if ((iVar38 == iVar16) && ((iVar38 != 0 || (func_0x00010975375c(), (int)uVar36 != 0))))
        {
          uVar18 = 2;
          goto LAB_10976e184;
        }
        param_5 = (ulong *)0x38e38e3900000000;
        plVar43 = plVar43 + 2;
        uVar19 = uVar19 + 1;
        puVar20 = puVar20 + 9;
      } while (uVar47 != uVar19);
      puVar11 = puVar11 + 6;
      puVar20 = (ulong *)param_2[1];
      do {
        *(undefined4 *)((long)puVar11 + -0x14) = 0;
        puVar11[-1] = 0;
        uVar19 = *puVar20;
        puVar11[1] = puVar20[1];
        *puVar11 = uVar19;
        uVar47 = uVar47 - 1;
        puVar11 = puVar11 + 9;
        puVar20 = puVar20 + 2;
        puVar34 = (ulong *)((ulong)param_4 & 0xffffffff);
        bVar30 = bVar1;
      } while (uVar47 != 0);
    }
    if (!bVar30) {
      uVar19 = 0;
      do {
        if (3 < (uint)(puVar45 + uVar19 * 2)[1]) {
          puVar20 = (ulong *)puVar45[uVar19 * 2];
          puVar11 = puVar20;
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == puVar20) goto LAB_10976e2ac;
            uVar31 = puVar11[6];
            uVar33 = puVar11[7];
          } while (uVar31 - puVar20[6] == 0 && puVar20[7] == uVar33);
          puVar39 = puVar20;
          do {
            do {
              puVar35 = puVar39;
              puVar39 = (ulong *)*puVar35;
              if (puVar39 == puVar20) goto LAB_10976e2ac;
              lVar29 = puVar35[6] - puVar39[6];
              lVar42 = puVar35[7] - puVar39[7];
            } while (lVar29 == 0 && lVar42 == 0);
            lVar13 = lVar29 * (puVar20[7] - uVar33) + lVar42 * (uVar31 - puVar20[6]);
            uVar47 = (uint)(lVar13 >> 0x3f);
            if (0 < lVar13) {
              uVar47 = uVar47 + 1;
            }
            puVar24 = puVar35;
          } while (uVar47 == 0);
          do {
            param_5 = puVar24;
            bVar1 = false;
            uVar36 = uVar31;
            uVar37 = uVar33;
            do {
              do {
                puVar24 = puVar11;
                puVar11 = (ulong *)puVar24[1];
                if (puVar11 == puVar35) {
                  bVar1 = true;
                }
                uVar31 = puVar11[6];
                uVar33 = puVar11[7];
                lVar13 = uVar31 - uVar36;
                lVar41 = uVar33 - uVar37;
                uVar36 = uVar31;
                uVar37 = uVar33;
              } while (lVar13 == 0 && lVar41 == 0);
              lVar15 = lVar41 * lVar29 - lVar13 * lVar42;
              uVar14 = (uint)(lVar15 >> 0x3f);
              if (0 < lVar15) {
                uVar14 = uVar14 + 1;
              }
            } while (uVar14 == 0);
            if ((int)(uVar14 ^ uVar47) < 0) {
              do {
                *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
                param_5 = (ulong *)param_5[1];
              } while (param_5 != puVar24);
              *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
            }
            lVar29 = lVar13;
            lVar42 = lVar41;
            uVar47 = uVar14;
          } while (!bVar1);
        }
LAB_10976e2ac:
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar17);
    }
    puVar20 = param_1 + 5;
    puVar11 = auStack_190;
    param_4 = puVar46;
    puStack_1a0 = param_2;
    puStack_198 = param_3;
    FUN_10976f1f0(auStack_190,param_1 + 3);
    if ((int)puVar11 == 0) {
      puVar11 = auStack_190 + 9;
      puVar20 = param_1 + 0xb;
      FUN_10976f1f0(puVar11,param_1 + 9);
      puVar45 = puStack_198;
      param_4 = puVar46;
      if ((int)puVar11 == 0) {
        uVar17 = puStack_198[0x32];
        puVar11 = (ulong *)puStack_198[0x65];
        if ((int)param_3[0x67] == 0) {
LAB_10976e3fc:
          bVar1 = true;
        }
        else {
          lVar29 = (long)puVar11 * (long)(int)param_3[0x68];
          uVar19 = lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10;
          uVar31 = uVar19 + 0x20 & 0xffffffffffffffc0;
          if (uVar31 == 0 || uVar19 == uVar31) goto LAB_10976e3fc;
          puVar20 = puVar11;
          FUN_1097532ac(puVar11,uVar31,uVar19);
          lVar29 = SUB168(SEXT816((long)uVar17) * SEXT816(0x5c28f5c28f5c28f5),8) - uVar17;
          uVar33 = uVar17;
          if ((long)uVar31 < (long)uVar19) {
            uVar33 = ((lVar29 >> 5) - (lVar29 >> 0x3f)) + uVar17;
          }
          puVar46 = (ulong *)0x0;
          param_5 = (ulong *)0x0;
          FUN_10976ee80(puVar45,uVar33,puVar20);
          bVar1 = false;
        }
        uVar9 = uStack_100;
        bVar30 = false;
        lVar29 = 0;
        uVar47 = (uint)puVar34;
        uStack_100._5_3_ = SUB83(uVar9,5);
        uStack_100._0_5_ =
             CONCAT14(uVar47 != 1,
                      CONCAT13(uVar47 == 2 || uVar47 == 4,CONCAT12((uVar47 & 0xfffffffe) == 2,0x101)
                              ));
        uVar47 = (uint)uStack_1c0;
        bVar10 = true;
        do {
          bVar8 = bVar10;
          uVar19 = (ulong)uVar47;
          if (uVar47 != 0) {
            puVar20 = (ulong *)puStack_1a0[1];
            puVar34 = puStack_1b8 + 7;
            uVar31 = uVar19;
            do {
              *(undefined4 *)((long)puVar34 + -0x1c) = 0;
              puVar39 = puVar20;
              if (!bVar8) {
                puVar39 = puVar20 + 1;
              }
              lVar42 = 8;
              if (!bVar8) {
                lVar42 = 0;
              }
              uVar36 = *(ulong *)((long)puVar20 + lVar42);
              uVar33 = *puVar39;
              puVar34[-2] = 0;
              puVar34[-1] = uVar33;
              *puVar34 = uVar36;
              puVar20 = puVar20 + 2;
              uVar14 = (int)uVar31 - 1;
              uVar31 = (ulong)uVar14;
              puVar34 = puVar34 + 9;
            } while (uVar14 != 0);
          }
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = 0;
            do {
              if ((int)(puStack_1b0 + uVar31 * 2)[1] != 0) {
                puVar34 = (ulong *)puStack_1b0[uVar31 * 2];
                puVar20 = puVar34;
                do {
                  puVar20 = (ulong *)*puVar20;
                  if (puVar20 == puVar34) goto LAB_10976e5d4;
                } while (puVar20[6] == puVar34[6]);
                puVar35 = (ulong *)puVar20[1];
                puVar34 = puVar35;
                puVar39 = puVar35;
                while (puVar34 = (ulong *)puVar34[1], puVar34 != puVar35) {
                  uVar33 = puVar34[6];
                  uVar36 = puVar39[6];
                  if (uVar33 != uVar36) {
                    if ((long)puVar20[6] < (long)uVar36) {
                      if ((long)uVar33 < (long)uVar36) {
LAB_10976e580:
                        do {
                          *(uint *)((long)puVar39 + 0x1c) = *(uint *)((long)puVar39 + 0x1c) | 0x40;
                          puVar39 = (ulong *)puVar39[1];
                        } while (puVar39 != puVar34);
                      }
                    }
                    else if ((long)uVar36 < (long)uVar33) goto LAB_10976e580;
                    puVar20 = (ulong *)*puVar34;
                    puVar39 = puVar34;
                  }
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uStack_1c0._4_4_);
          }
          for (uVar31 = 0; (uint)uVar31 < uVar47; uVar31 = (ulong)((int)uVar31 + 1)) {
            puVar34 = puStack_1b8 + uVar31 * 9;
            uVar14 = *(uint *)((long)puVar34 + 0x1c);
            puVar20 = puVar34;
            if ((uVar14 >> 6 & 1) != 0) {
              do {
                puVar20 = (ulong *)*puVar20;
                if (puVar20 == puVar34) goto LAB_10976e5d4;
                uVar36 = puVar20[7];
                uVar33 = puVar34[7];
                puVar39 = puVar34;
              } while (uVar36 == uVar33);
              do {
                puVar39 = (ulong *)puVar39[1];
                if (puVar39 == puVar34) goto LAB_10976e5d4;
                uVar37 = puVar39[7];
              } while (uVar37 == uVar33);
              if (((long)uVar36 < (long)uVar33) && ((long)uVar33 < (long)uVar37)) {
                uVar14 = uVar14 | 0x80;
              }
              else {
                if (((long)uVar36 <= (long)uVar33) || ((long)uVar33 <= (long)uVar37))
                goto LAB_10976e5d4;
                uVar14 = uVar14 | 0x100;
              }
              *(uint *)((long)puVar34 + 0x1c) = uVar14;
            }
LAB_10976e5d4:
          }
          puVar20 = auStack_190 + lVar29 * 9;
          iVar16 = (int)*puVar20;
          if (iVar16 != 0) {
            uVar31 = auStack_190[lVar29 * 9 + 1];
            do {
              puVar46 = &uStack_1c0;
              FUN_10976f488(uVar31,puVar45,lVar29);
              uVar31 = uVar31 + 0x30;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          puVar21 = *(undefined4 **)((uint *)auStack_190[lVar29 * 9 + 7] + 2);
          uVar44 = *(uint *)auStack_190[lVar29 * 9 + 7];
          uVar14 = 3;
          if (!bVar8) {
            uVar14 = 0xc;
          }
          puVar34 = (ulong *)(ulong)uVar14;
          uVar31 = puVar45[lVar29 * 0x33 + 0x32];
          if (uVar31 == 0) {
            uVar14 = 0x7fffffff;
          }
          else {
            uVar33 = -uVar31;
            if (-1 < (long)uVar31) {
              uVar33 = uVar31;
            }
            uVar14 = 0;
            if (uVar33 != 0) {
              uVar14 = (uint)(((uVar33 >> 1) + 0x200000) / uVar33);
            }
          }
          uVar3 = -uVar14;
          if (-1 < (long)uVar31) {
            uVar3 = uVar14;
          }
          if (0xb < (int)uVar3) {
            uVar3 = 0xc;
          }
          puVar45 = (ulong *)(ulong)uVar3;
          if (uVar44 < 2) {
            if (uVar44 == 1) goto LAB_10976e768;
LAB_10976e79c:
            if ((int)uVar19 != 0) {
              puVar22 = (uint *)((long)puStack_1b8 + 0x1c);
              uVar31 = uVar19;
              do {
                if ((*(long *)(puVar22 + 3) != 0) && ((*puVar22 >> 4 & 1) == 0)) {
                  *puVar22 = *puVar22 | 0x10;
                }
                puVar22 = puVar22 + 0x12;
                uVar47 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar47;
              } while (uVar47 != 0);
            }
          }
          else if (uVar47 != 0) {
            uVar14 = puVar21[4];
            if (uVar47 <= (uint)puVar21[4]) {
              uVar14 = uVar47;
            }
            puVar22 = puVar21 + 10;
            do {
              uVar47 = *puVar22;
              if ((uint)uStack_1c0 <= *puVar22) {
                uVar47 = (uint)uStack_1c0;
              }
              if (uVar14 <= uVar47 && uVar47 - uVar14 != 0) {
                puVar46 = puStack_1b8 + (ulong)uVar14 * 9;
                FUN_10976f840(puVar20,puVar22[-4],*(undefined8 *)(puVar22 + -2));
                FUN_10976f948(puVar20,puVar46,uVar47 - uVar14,puVar45,puVar34);
              }
              uVar44 = uVar44 - 1;
              puVar22 = puVar22 + 6;
              uVar14 = uVar47;
            } while (1 < uVar44);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar21 = *(undefined4 **)(auStack_190[lVar29 * 9 + 7] + 8);
LAB_10976e768:
            puVar46 = puStack_1b8;
            FUN_10976f840(puVar20,*puVar21,*(undefined8 *)(puVar21 + 2));
            FUN_10976f948(puVar20,puVar46,uVar19);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar46 = puVar45;
            param_5 = puVar34;
            goto LAB_10976e79c;
          }
          puVar34 = puStack_1b8;
          puVar20 = (ulong *)0x30;
          uVar47 = (uint)uVar19;
          if (bVar30) {
            uVar31 = uVar19;
            puVar45 = puStack_1b8;
            if (uVar47 != 0) {
              do {
                if ((((puVar45[4] & 0xc) != 0) || ((*(byte *)((long)puVar45 + 0x24) & 0xc) != 0)) &&
                   (uVar14 = *(uint *)((long)puVar45 + 0x1c), (uVar14 >> 4 & 1) == 0)) {
                  uVar33 = puVar45[6];
                  iVar16 = (int)param_3[0x67];
                  if (iVar16 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + 0x69;
                    do {
                      lVar42 = uVar33 - (long)*(int *)((long)puVar39 + 4);
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)uVar33 <= (long)(int)*puVar39 + (long)(int)uVar36) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 <= *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[3];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + 6;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  uVar44 = (uint)param_3[200];
                  if (uVar44 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + (ulong)uVar44 * 6 + 0xc4;
                    do {
                      lVar42 = (long)(int)*puVar39 - uVar33;
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)*(int *)((long)puVar39 + 4) - (long)(int)uVar36 <= (long)uVar33) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 < *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[4];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + -6;
                      uVar44 = uVar44 - 1;
                    } while (uVar44 != 0);
                  }
                }
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
                puVar45 = puVar45 + 9;
              } while (uVar14 != 0);
              goto LAB_10976e8fc;
            }
          }
          else {
LAB_10976e8fc:
            if (uVar47 != 0) {
              uVar33 = puStack_198[lVar29 * 0x33 + 0x32];
              puVar45 = puStack_1b8 + 5;
              uVar31 = uVar19;
              do {
                piVar23 = (int *)*puVar45;
                if (piVar23 != (int *)0x0) {
                  uVar14 = *(uint *)((long)puVar45 + -0xc);
                  if ((uVar14 >> 9 & 1) == 0) {
                    if ((uVar14 >> 10 & 1) == 0) {
                      lVar42 = puVar45[1] - (long)*piVar23;
                      if (lVar42 == 0 || (long)puVar45[1] < (long)*piVar23) {
                        uVar36 = *(long *)(piVar23 + 2) +
                                 ((long)(lVar42 * uVar33 + ((long)(lVar42 * uVar33) >> 0x3f) +
                                        0x8000) >> 0x10);
                      }
                      else {
                        puVar20 = (ulong *)(long)piVar23[1];
                        lVar13 = *(long *)(piVar23 + 2);
                        if (lVar42 < (long)puVar20) {
                          FUN_1097532ac();
                          uVar36 = lVar42 + lVar13;
                        }
                        else {
                          lVar42 = (lVar42 - (long)puVar20) * uVar33;
                          uVar36 = *(long *)(piVar23 + 4) + lVar13 +
                                   (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                        }
                      }
                    }
                    else {
                      uVar36 = *(long *)(piVar23 + 4) + *(long *)(piVar23 + 2);
                    }
                  }
                  else {
                    uVar36 = *(ulong *)(piVar23 + 2);
                  }
                  puVar45[3] = uVar36;
                  *(uint *)((long)puVar45 + -0xc) = uVar14 | 0x20;
                }
                puVar39 = puStack_1a8;
                puVar45 = puVar45 + 9;
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
              } while (uVar14 != 0);
              uVar14 = 0;
              puVar35 = puVar34 + uVar19 * 9;
              puVar45 = puVar34;
              do {
                uVar14 = (*(uint *)((long)puVar45 + 0x1c) >> 4 & 1) + uVar14;
                puVar45 = puVar45 + 9;
              } while (puVar45 < puVar35);
              if (uVar14 != 0) {
                if (uVar14 < 0x11) {
                  puVar45 = auStack_f0;
                }
                else if ((uVar14 >> 0x1c != 0) ||
                        (puVar45 = puStack_1a8, (*(code *)puStack_1a8[1])(puStack_1a8,uVar14 * 8),
                        puVar45 == (ulong *)0x0)) goto LAB_10976ec28;
                uVar31 = 0;
                puVar24 = puVar34;
                do {
                  if ((*(byte *)((long)puVar24 + 0x1c) >> 4 & 1) != 0) {
                    puVar25 = puVar45 + uVar31;
                    if ((int)uVar31 != 0) {
                      uVar36 = puVar24[6];
                      do {
                        puVar26 = puVar25 + -1;
                        if (*(long *)(*puVar26 + 0x30) <= (long)uVar36) break;
                        *puVar25 = *puVar26;
                        puVar25 = puVar26;
                      } while (puVar45 < puVar26);
                    }
                    *puVar25 = (ulong)puVar24;
                    uVar31 = (ulong)((int)uVar31 + 1);
                  }
                  puVar24 = puVar24 + 9;
                } while (puVar24 < puVar35);
                iVar16 = (int)uVar31;
                do {
                  uVar14 = *(uint *)((long)puVar34 + 0x1c);
                  if ((uVar14 >> 4 & 1) == 0) {
                    uVar44 = (uint)puVar34[3];
                    if ((uVar44 >> 1 & 1) != 0) {
                      if (((int)puVar34[4] == 0) ||
                         ((int)puVar34[4] != *(int *)((long)puVar34 + 0x24) ||
                          (uVar44 & 4) == 0 && (uVar14 & 0x40) == 0)) goto LAB_10976eb94;
                      *(uint *)(puVar34 + 3) = uVar44 & 0xfffffffd;
                    }
                    uVar36 = puVar34[6];
                    if (iVar16 == 0) {
LAB_10976eb54:
                      uVar37 = *puVar45;
LAB_10976eb6c:
                      lVar42 = (uVar36 - *(long *)(uVar37 + 0x30)) * uVar33;
                      uVar36 = *(long *)(uVar37 + 0x40) +
                               (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    else {
                      lVar42 = 0;
                      uVar37 = 0xffffffff;
                      do {
                        if ((long)uVar36 < *(long *)(*(long *)((long)puVar45 + lVar42) + 0x30)) {
                          if (lVar42 == 0) goto LAB_10976eb54;
                          uVar27 = uVar37 & 0xffffffff;
                          break;
                        }
                        uVar37 = uVar37 + 1;
                        lVar42 = lVar42 + 8;
                        uVar27 = (ulong)(iVar16 - 1);
                      } while (uVar31 << 3 != lVar42);
                      uVar37 = 0;
                      uVar27 = puVar45[uVar27];
                      puVar24 = puVar45 + uVar31;
                      do {
                        puVar24 = puVar24 + -1;
                        if (uVar31 == uVar37) {
                          uVar37 = 0;
                          goto LAB_10976eb60;
                        }
                        uVar37 = uVar37 + 1;
                      } while ((long)uVar36 <= *(long *)(*puVar24 + 0x30));
                      uVar37 = (ulong)((iVar16 - (int)uVar37) + 1);
LAB_10976eb60:
                      if (uVar37 == uVar31) {
                        uVar37 = puVar45[iVar16 - 1];
                        goto LAB_10976eb6c;
                      }
                      lVar42 = uVar36 - *(long *)(uVar27 + 0x30);
                      if (lVar42 == 0) {
                        uVar36 = *(ulong *)(uVar27 + 0x40);
                      }
                      else {
                        uVar37 = puVar45[uVar37];
                        if (uVar36 == *(ulong *)(uVar37 + 0x30)) {
                          uVar36 = *(ulong *)(uVar37 + 0x40);
                        }
                        else {
                          lVar13 = *(long *)(uVar27 + 0x40);
                          puVar20 = (ulong *)(*(ulong *)(uVar37 + 0x30) - *(long *)(uVar27 + 0x30));
                          FUN_1097532ac(lVar42,*(long *)(uVar37 + 0x40) - lVar13);
                          uVar36 = lVar42 + lVar13;
                        }
                      }
                    }
                    puVar34[8] = uVar36;
                    *(uint *)((long)puVar34 + 0x1c) = uVar14 | 0x20;
                  }
LAB_10976eb94:
                  puVar34 = puVar34 + 9;
                } while (puVar34 < puVar35);
                if (puVar45 != auStack_f0) {
                  (*(code *)puVar39[2])(puVar39,puVar45);
                }
              }
            }
          }
LAB_10976ec28:
          puVar45 = puStack_198;
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = puStack_198[lVar29 * 0x33 + 0x32];
            uVar33 = puStack_198[lVar29 * 0x33 + 0x33];
            puVar34 = puStack_1b0;
            iVar16 = uStack_1c0._4_4_;
            do {
              if ((uint)puVar34[1] != 0) {
                uVar14 = 0;
                uVar27 = 0;
                uVar37 = *puVar34;
                uVar40 = uVar37 + (ulong)(uint)puVar34[1] * 0x48;
                uVar36 = uVar37;
                do {
                  uVar4 = uVar36;
                  if (uVar27 != 0) {
                    uVar4 = uVar27;
                  }
                  uVar44 = *(uint *)(uVar36 + 0x1c) & 0x20;
                  if (uVar44 != 0) {
                    uVar27 = uVar4;
                  }
                  uVar14 = uVar14 + (uVar44 >> 5);
                  uVar36 = uVar36 + 0x48;
                } while (uVar36 < uVar40);
                uVar36 = uVar27;
                if (uVar14 < 2) {
                  if (uVar14 == 1) {
                    lVar29 = *(long *)(uVar27 + 0x30) * uVar31;
                    uVar33 = *(long *)(uVar27 + 0x40) - (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10)
                    ;
                  }
                  do {
                    if (uVar37 != uVar27) {
                      lVar29 = *(long *)(uVar37 + 0x30) * uVar31;
                      *(ulong *)(uVar37 + 0x40) =
                           uVar33 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    uVar37 = uVar37 + 0x48;
                  } while (uVar37 < uVar40);
                }
                else {
                  do {
                    do {
                      uVar37 = uVar36;
                      uVar36 = *(ulong *)(uVar37 + 8);
                      if (uVar36 == uVar27) goto LAB_10976edb8;
                      uVar40 = uVar36;
                    } while ((*(byte *)(uVar36 + 0x1c) >> 5 & 1) != 0);
                    do {
                      uVar40 = *(ulong *)(uVar40 + 8);
                    } while ((*(byte *)(uVar40 + 0x1c) >> 5 & 1) == 0);
                    lVar42 = *(long *)(uVar37 + 0x30);
                    lVar29 = *(long *)(uVar40 + 0x30);
                    uVar4 = lVar42 - lVar29;
                    uVar7 = uVar40;
                    if (lVar42 <= lVar29) {
                      uVar4 = lVar29 - lVar42;
                      lVar29 = lVar42;
                      uVar7 = uVar37;
                      uVar37 = uVar40;
                    }
                    puVar35 = *(ulong **)(uVar7 + 0x40);
                    puVar39 = *(ulong **)(uVar37 + 0x40);
                    if (uVar4 == 0) {
                      uVar37 = 0x10000;
                    }
                    else {
                      lVar13 = (long)puVar39 - (long)puVar35;
                      lVar42 = -lVar13;
                      if (-1 < lVar13) {
                        lVar42 = lVar13;
                      }
                      uVar7 = 0;
                      if (uVar4 != 0) {
                        uVar7 = (lVar42 * 0x10000 + (uVar4 >> 1)) / uVar4;
                      }
                      uVar37 = -uVar7;
                      if ((long)puVar35 <= (long)puVar39) {
                        uVar37 = uVar7;
                      }
                    }
                    do {
                      lVar13 = *(long *)(uVar36 + 0x30) - lVar29;
                      param_5 = puVar35;
                      lVar42 = lVar13 * uVar37;
                      if ((long)uVar4 <= lVar13) {
                        param_5 = puVar39;
                        lVar42 = (lVar13 - uVar4) * uVar31;
                      }
                      puVar46 = param_5;
                      if (lVar13 < 1) {
                        puVar46 = puVar35;
                        lVar42 = lVar13 * uVar31;
                      }
                      puVar20 = (ulong *)((long)puVar46 +
                                         (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10));
                      *(ulong **)(uVar36 + 0x40) = puVar20;
                      uVar36 = *(ulong *)(uVar36 + 8);
                    } while (uVar36 != uVar40);
                    uVar36 = uVar40;
                  } while (uVar40 != uVar27);
                }
              }
LAB_10976edb8:
              puVar34 = puVar34 + 2;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          if (uVar47 != 0) {
            puVar34 = (ulong *)puStack_1a0[1];
            pbVar28 = (byte *)puStack_1a0[2];
            bVar32 = 0x20;
            if (!bVar8) {
              bVar32 = 0x40;
            }
            puVar39 = puStack_1b8 + 8;
            do {
              puVar35 = puVar34;
              if (!bVar8) {
                puVar35 = puVar34 + 1;
              }
              *puVar35 = *puVar39;
              if ((*(byte *)((long)puVar39 + -0x24) >> 4 & 1) != 0) {
                *pbVar28 = *pbVar28 | bVar32;
              }
              puVar39 = puVar39 + 9;
              pbVar28 = pbVar28 + 1;
              puVar34 = puVar34 + 2;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (!bVar1) {
            puVar46 = (ulong *)0x0;
            param_5 = (ulong *)0x0;
            puVar20 = puVar11;
            FUN_10976ee80(puStack_198,uVar17);
          }
          bVar30 = true;
          lVar29 = 1;
          bVar10 = false;
        } while (bVar8);
        puVar11 = (ulong *)0x0;
        param_4 = puVar46;
      }
    }
  }
  puVar46 = puStack_1a8;
  FUN_10976fb18(auStack_190 + 9,puStack_1a8);
  param_1 = auStack_190;
  FUN_10976fb18(param_1,puVar46);
  param_3 = puVar20;
  if (puStack_1b8 != (ulong *)0x0) {
    param_1 = puVar46;
    (*(code *)puVar46[2])();
    param_3 = puVar20;
  }
  param_2 = puStack_1b0;
  if (puStack_1b0 != (ulong *)0x0) {
    (*(code *)puVar46[2])();
    param_1 = puVar46;
  }
LAB_10976e25c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar11 = param_1;
  if (((ulong *)param_1[0x32] != param_2) || ((ulong *)param_1[0x33] != param_4)) {
    param_1[0x32] = (ulong)param_2;
    param_1[0x33] = (ulong)param_4;
    FUN_10976fb94(param_1,0);
  }
  if (((ulong *)param_1[0x65] != param_3) || ((ulong *)param_1[0x66] != param_5)) {
    param_1[0x65] = (ulong)param_3;
    param_1[0x66] = (ulong)param_5;
    puVar11 = param_1;
    FUN_10976fb94(param_1,1);
    if ((long)param_3 < 0x20c49ba) {
      bVar1 = (long)param_3 * 0x7d < (long)(param_1[0x1eb] * 8);
    }
    else {
      bVar1 = (long)param_3 < (long)(param_1[0x1eb] << 3) / 0x7d;
    }
    puVar20 = param_1 + 0x67;
    *(bool *)((long)param_1 + 0xf6c) = bVar1;
    uVar17 = (ulong)(uint)param_1[0x1ec];
    if (0 < (int)(uint)param_1[0x1ec]) {
      lVar29 = (long)param_3 * uVar17;
      do {
        if (lVar29 + (lVar29 >> 0x3f) + 0x8000 < 0x210000) goto LAB_10976ef7c;
        lVar29 = lVar29 - (long)param_3;
        uVar19 = uVar17 - 1;
        bVar1 = 0 < (long)uVar17;
        uVar17 = uVar19;
      } while (uVar19 != 0 && bVar1);
      uVar17 = 0;
    }
LAB_10976ef7c:
    iVar16 = 0;
    *(int *)((long)param_1 + 0xf64) = (int)uVar17;
    do {
      puVar46 = param_1 + 0x18a;
      if (iVar16 == 1) {
        puVar46 = param_1 + 200;
      }
      puVar34 = param_1 + 0x129;
      if (iVar16 != 2) {
        puVar34 = puVar46;
      }
      puVar46 = puVar20;
      if (iVar16 != 0) {
        puVar46 = puVar34;
      }
      iVar38 = (int)*puVar46;
      if (iVar38 != 0) {
        puVar46 = puVar46 + 3;
        do {
          lVar29 = (long)param_3 * (long)(int)puVar46[-1];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -4);
          puVar46[2] = (long)param_5 + (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
          puVar46[3] = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
          lVar29 = (long)param_3 * (long)(int)puVar46[-2];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -0xc);
          *puVar46 = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10) + 0x20 &
                     0xffffffffffffffc0;
          puVar46[1] = lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10;
          iVar38 = iVar38 + -1;
          puVar46 = puVar46 + 6;
        } while (iVar38 != 0);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
    bVar1 = true;
    do {
      bVar30 = bVar1;
      lVar29 = 0;
      if (!bVar30) {
        lVar29 = 0x308;
      }
      piVar23 = (int *)((long)puVar20 + lVar29) + 2;
      iVar16 = *(int *)((long)puVar20 + lVar29);
      if (iVar16 != 0) {
        lVar29 = 0x610;
        if (!bVar30) {
          lVar29 = 0x918;
        }
        iVar38 = *(int *)((long)puVar20 + lVar29);
        do {
          if (iVar38 != 0) {
            puVar11 = (ulong *)((long)param_1 + lVar29 + 0x360);
            iVar12 = iVar38;
            do {
              uVar14 = *piVar23 - (int)puVar11[-4];
              uVar47 = -uVar14;
              if (-1 < (int)uVar14) {
                uVar47 = uVar14;
              }
              if ((long)((long)param_3 * (ulong)uVar47 +
                         ((long)((long)param_3 * (ulong)uVar47) >> 0x3f) + 0x8000) < 0x400000) {
                uVar17 = *puVar11;
                *(ulong *)(piVar23 + 10) = puVar11[1];
                *(ulong *)(piVar23 + 8) = uVar17;
                uVar17 = puVar11[-2];
                *(ulong *)(piVar23 + 6) = puVar11[-1];
                *(ulong *)(piVar23 + 4) = uVar17;
                break;
              }
              puVar11 = puVar11 + 6;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          piVar23 = piVar23 + 0xc;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      bVar1 = false;
    } while (bVar30);
  }
  return puVar11;
}



/* Entry: 109770450; end: 1097704af;  */

void FUN_109770450(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = param_1 + 3;
    uVar17 = *param_1;
    FUN_1097704b0(puVar5,param_2,uVar17);
    if ((int)puVar5 == 0) {
      if (*(uint *)(param_1 + 0xb) != 0) {
        *(int *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xb) * 0x18 + -8) = (int)param_2;
      }
      uVar2 = *(uint *)(param_1 + 0xd);
      uVar8 = (ulong)uVar2;
      if (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        uVar20 = uVar8;
        do {
          uVar11 = (ulong)uVar2;
          uVar10 = (int)uVar20 - 2;
          if (uVar10 < uVar2) {
            puVar18 = (uint *)(param_1[0xe] + uVar11 * 0x18);
            pbVar12 = *(byte **)(puVar18 + 2);
            uVar3 = *puVar18;
            do {
              puVar19 = (uint *)(param_1[0xe] + (ulong)uVar10 * 0x18);
              pbVar13 = *(byte **)(puVar19 + 2);
              uVar4 = *puVar19;
              uVar15 = uVar3;
              if (uVar4 <= uVar3) {
                uVar15 = uVar4;
              }
              if (7 < uVar15) {
                uVar1 = (uVar15 - 8 >> 3) + 1;
                pbVar14 = pbVar13;
                pbVar16 = pbVar12;
                do {
                  if ((*pbVar14 & *pbVar16) != 0) goto LAB_1097705ac;
                  uVar15 = uVar15 - 8;
                  pbVar14 = pbVar14 + 1;
                  pbVar16 = pbVar16 + 1;
                } while (7 < uVar15);
                pbVar13 = pbVar13 + uVar1;
                pbVar14 = pbVar12 + uVar1;
                if (uVar15 == 0) goto LAB_10977059c;
LAB_109770584:
                if ((uint)(*pbVar13 & *pbVar14) <= 0xffU >> (ulong)(uVar15 & 0x1f))
                goto LAB_10977059c;
LAB_1097705ac:
                if (uVar3 != 0) {
                  if (uVar4 < uVar3) {
                    puVar6 = puVar19;
                    FUN_109770684(puVar19,uVar3,uVar17);
                    if ((int)puVar6 != 0) {
                      return;
                    }
                    *puVar19 = uVar3;
                  }
                  if (7 < uVar3 + 7) {
                    uVar10 = uVar3 + 7 >> 3;
                    pbVar12 = *(byte **)(puVar19 + 2);
                    pbVar13 = *(byte **)(puVar18 + 2);
                    do {
                      *pbVar12 = *pbVar13 | *pbVar12;
                      uVar10 = uVar10 - 1;
                      pbVar12 = pbVar12 + 1;
                      pbVar13 = pbVar13 + 1;
                    } while (uVar10 != 0);
                  }
                }
                *puVar18 = 0;
                puVar18[4] = 0;
                iVar7 = *(int *)(param_1 + 0xd);
                uVar10 = iVar7 + ~uVar2;
                if (uVar10 != 0) {
                  uVar22 = *(undefined8 *)(puVar18 + 2);
                  uVar21 = *(undefined8 *)puVar18;
                  uVar9 = *(undefined8 *)(puVar18 + 4);
                  _memmove(puVar18,puVar18 + 6,(ulong)uVar10 * 0x18);
                  puVar18 = puVar18 + (ulong)uVar10 * 6;
                  *(undefined8 *)(puVar18 + 2) = uVar22;
                  *(undefined8 *)puVar18 = uVar21;
                  *(undefined8 *)(puVar18 + 4) = uVar9;
                  iVar7 = *(int *)(param_1 + 0xd);
                }
                uVar8 = (ulong)(iVar7 - 1U);
                *(uint *)(param_1 + 0xd) = iVar7 - 1U;
                break;
              }
              pbVar14 = pbVar12;
              if (uVar15 != 0) goto LAB_109770584;
LAB_10977059c:
              uVar10 = uVar10 - 1;
            } while (uVar10 < uVar2);
          }
          uVar2 = uVar2 - 1;
          uVar20 = uVar11;
        } while (uVar2 < (uint)uVar8);
      }
      return;
    }
  }
  return;
}



/* Entry: 1097704b0; end: 109770683;  */

void FUN_1097704b0(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_2;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar7 = (ulong)uVar2;
  if (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    uVar18 = uVar7;
    do {
      uVar10 = (ulong)uVar2;
      uVar9 = (int)uVar18 - 2;
      if (uVar9 < uVar2) {
        puVar16 = (uint *)(*(long *)(param_1 + 0x28) + uVar10 * 0x18);
        pbVar11 = *(byte **)(puVar16 + 2);
        uVar3 = *puVar16;
        do {
          puVar17 = (uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar9 * 0x18);
          pbVar12 = *(byte **)(puVar17 + 2);
          uVar4 = *puVar17;
          uVar14 = uVar3;
          if (uVar4 <= uVar3) {
            uVar14 = uVar4;
          }
          if (7 < uVar14) {
            uVar1 = (uVar14 - 8 >> 3) + 1;
            pbVar13 = pbVar12;
            pbVar15 = pbVar11;
            do {
              if ((*pbVar13 & *pbVar15) != 0) goto LAB_1097705ac;
              uVar14 = uVar14 - 8;
              pbVar13 = pbVar13 + 1;
              pbVar15 = pbVar15 + 1;
            } while (7 < uVar14);
            pbVar12 = pbVar12 + uVar1;
            pbVar13 = pbVar11 + uVar1;
            if (uVar14 == 0) goto LAB_10977059c;
LAB_109770584:
            if ((uint)(*pbVar12 & *pbVar13) <= 0xffU >> (ulong)(uVar14 & 0x1f)) goto LAB_10977059c;
LAB_1097705ac:
            if (uVar3 != 0) {
              if (uVar4 < uVar3) {
                puVar5 = puVar17;
                FUN_109770684(puVar17,uVar3,param_3);
                if ((int)puVar5 != 0) {
                  return;
                }
                *puVar17 = uVar3;
              }
              if (7 < uVar3 + 7) {
                uVar9 = uVar3 + 7 >> 3;
                pbVar11 = *(byte **)(puVar17 + 2);
                pbVar12 = *(byte **)(puVar16 + 2);
                do {
                  *pbVar11 = *pbVar12 | *pbVar11;
                  uVar9 = uVar9 - 1;
                  pbVar11 = pbVar11 + 1;
                  pbVar12 = pbVar12 + 1;
                } while (uVar9 != 0);
              }
            }
            *puVar16 = 0;
            puVar16[4] = 0;
            iVar6 = *(int *)(param_1 + 0x20);
            uVar9 = iVar6 + ~uVar2;
            if (uVar9 != 0) {
              uVar20 = *(undefined8 *)(puVar16 + 2);
              uVar19 = *(undefined8 *)puVar16;
              uVar8 = *(undefined8 *)(puVar16 + 4);
              _memmove(puVar16,puVar16 + 6,(ulong)uVar9 * 0x18);
              puVar16 = puVar16 + (ulong)uVar9 * 6;
              *(undefined8 *)(puVar16 + 2) = uVar20;
              *(undefined8 *)puVar16 = uVar19;
              *(undefined8 *)(puVar16 + 4) = uVar8;
              iVar6 = *(int *)(param_1 + 0x20);
            }
            uVar7 = (ulong)(iVar6 - 1U);
            *(uint *)(param_1 + 0x20) = iVar6 - 1U;
            break;
          }
          pbVar13 = pbVar11;
          if (uVar14 != 0) goto LAB_109770584;
LAB_10977059c:
          uVar9 = uVar9 - 1;
        } while (uVar9 < uVar2);
      }
      uVar2 = uVar2 - 1;
      uVar18 = uVar10;
    } while (uVar2 < (uint)uVar7);
  }
  return;
}



/* Entry: 109770684; end: 1097706ff;  */

int FUN_109770684(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iStack_24;
  
  uVar2 = *(uint *)(param_1 + 4) >> 3;
  uVar1 = param_2 + 7U >> 3;
  iStack_24 = 0;
  iVar3 = 0;
  if (uVar2 < uVar1) {
    uVar1 = uVar1 + 7 & 0x3ffffff8;
    FUN_1097539a8(param_3,1,uVar2,uVar1,*(undefined8 *)(param_1 + 8),&iStack_24);
    *(undefined8 *)(param_1 + 8) = param_3;
    iVar3 = iStack_24;
    if (iStack_24 == 0) {
      *(uint *)(param_1 + 4) = uVar1 << 3;
    }
  }
  return iVar3;
}



/* Entry: 109770700; end: 10977077b;  */

void FUN_109770700(undefined8 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  param_3 = param_3 + 1;
  do {
    puVar1 = param_1 + (ulong)(param_2 != 0) * 6 + 3;
    FUN_10977077c(puVar1,*param_4,param_4[2],*param_1,0);
    if ((int)puVar1 != 0) {
      *(int *)(param_1 + 1) = (int)puVar1;
      return;
    }
    param_4 = param_4 + 4;
    param_3 = param_3 + -1;
  } while (1 < param_3);
  return;
}



/* Entry: 10977077c; end: 1097708cf;  */

void FUN_10977077c(uint *param_1,uint param_2,uint param_3,long param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iStack_6c;
  long lStack_68;
  
  uVar7 = 3;
  if (param_3 != 0xffffffeb) {
    uVar7 = 1;
  }
  uVar2 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_2 - 0x15;
  if (param_3 != 0xffffffeb) {
    uVar3 = param_2;
  }
  uVar4 = *param_1;
  lVar6 = *(long *)(param_1 + 2);
  if (uVar4 != 0) {
    uVar9 = 0;
    puVar5 = (uint *)(lVar6 + 4);
    do {
      if ((puVar5[-1] == uVar3) && (*puVar5 == uVar2)) goto LAB_10977085c;
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 != uVar9);
  }
  uVar9 = uVar4 + 1;
  lVar8 = lVar6;
  if (param_1[1] < uVar9) {
    uVar1 = (uVar4 & 0xfffffff8) + 8;
    lVar8 = param_4;
    func_0x000109755910(param_4,0xc,param_1[1],uVar1,lVar6,&iStack_6c);
    *(long *)(param_1 + 2) = lVar8;
    if (iStack_6c != 0) {
      return;
    }
    param_1[1] = uVar1;
  }
  *param_1 = uVar9;
  lVar8 = lVar8 + (ulong)uVar9 * 0xc;
  *(uint *)(lVar8 + -0xc) = uVar3;
  *(uint *)(lVar8 + -8) = uVar2;
  *(uint *)(lVar8 + -4) = uVar7 & (int)param_3 >> 0x1f;
  uVar9 = uVar4;
LAB_10977085c:
  puVar5 = param_1 + 4;
  if (*puVar5 == 0) {
    func_0x000109770944(puVar5,param_4,&lStack_68);
    if ((int)puVar5 != 0) {
      return;
    }
  }
  else {
    lStack_68 = *(long *)(param_1 + 6) + (ulong)*puVar5 * 0x18 + -0x18;
  }
  FUN_1097708d0(lStack_68,uVar9,param_4);
  if (((int)lStack_68 == 0) && (param_5 != (uint *)0x0)) {
    *param_5 = uVar9;
  }
  return;
}



/* Entry: 1097708d0; end: 1097709ff;  */

void FUN_1097708d0(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  if (*param_1 <= param_2) {
    puVar1 = param_1;
    FUN_109770684(param_1,param_2 + 1);
    if ((int)puVar1 != 0) {
      return;
    }
    *param_1 = param_2 + 1;
  }
  *(byte *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 3)) =
       *(byte *)(*(long *)(param_1 + 2) + (ulong)(param_2 >> 3)) |
       (byte)(0x80 >> (ulong)(param_2 & 7));
  return;
}



/* Entry: 109770a00; end: 109770a2b;  */

void FUN_109770a00(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 109770a2c; end: 109770b2b;  */

void FUN_109770a2c(undefined8 *param_1,undefined8 param_2,ulong param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *unaff_x19;
  uint uVar9;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  code *pcVar13;
  long alStack_168 [32];
  long lStack_68;
  
  iVar2 = (int)param_3;
  puVar12 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  uVar6 = param_2;
  plVar7 = param_4;
  if (0 < iVar2) {
    unaff_x24 = 0;
    unaff_x20 = param_3;
    do {
      uVar8 = 0;
      uVar9 = (uint)unaff_x20;
      uVar11 = uVar9;
      if (0xf < uVar9) {
        uVar11 = 0x10;
      }
      unaff_x23 = (ulong)uVar11;
      do {
        unaff_x24 = param_4[uVar8] + unaff_x24;
        alStack_168[uVar8] = unaff_x24 + (unaff_x24 >> 0x3f) + 0x8000 >> 0x10;
        uVar8 = uVar8 + 1;
      } while (uVar11 << 1 != uVar8);
      uVar8 = 0;
      do {
        alStack_168[uVar8 + 1] = alStack_168[uVar8 + 1] - alStack_168[uVar8];
        uVar8 = uVar8 + 2;
      } while (uVar8 < uVar11 << 1);
      plVar7 = alStack_168;
      puVar3 = param_1;
      uVar6 = param_2;
      uVar8 = unaff_x23;
      FUN_109770700(param_1,param_2,unaff_x23,plVar7);
      iVar2 = (int)uVar8;
      unaff_x20 = (ulong)(uVar9 - uVar11);
      unaff_x19 = param_4;
      unaff_x21 = param_2;
      unaff_x22 = param_1;
    } while (uVar9 - uVar11 != 0 && (int)uVar11 <= (int)uVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (*(int *)(puVar3 + 1) != 0) {
      return;
    }
    pcVar13 = FUN_109770b2c;
    piVar4 = (int *)(puVar3 + 3);
    piVar5 = (int *)(puVar3 + 9);
    iVar1 = *piVar5;
    if (iVar1 + *piVar4 == iVar2) {
      uVar10 = *puVar3;
      FUN_109770c60(piVar4,plVar7,iVar1,*piVar4,uVar6,uVar10,param_7,param_8,unaff_x24,unaff_x23,
                    unaff_x22,unaff_x21,unaff_x20,unaff_x19,puVar12,FUN_109770b2c);
      iVar2 = (int)piVar4;
      if (iVar2 == 0) {
        FUN_109770c60(piVar5,plVar7,0,iVar1,uVar6,uVar10,param_7,param_8,unaff_x24,unaff_x23,
                      unaff_x22,unaff_x21,unaff_x20,unaff_x19,puVar12,pcVar13);
        iVar2 = (int)piVar5;
        if (iVar2 == 0) {
          return;
        }
      }
      *(int *)(puVar3 + 1) = iVar2;
    }
    return;
  }
  return;
}



/* Entry: 109770b2c; end: 109770c5b;  */

void FUN_109770b2c(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  piVar3 = (int *)(param_1 + 3);
  piVar4 = (int *)(param_1 + 9);
  iVar1 = *piVar4;
  if (iVar1 + *piVar3 == param_3) {
    uVar5 = *param_1;
    FUN_109770c60(piVar3,param_4,iVar1,*piVar3,param_2,uVar5);
    iVar2 = (int)piVar3;
    if (iVar2 == 0) {
      FUN_109770c60(piVar4,param_4,0,iVar1,param_2,uVar5);
      iVar2 = (int)piVar4;
      if (iVar2 == 0) {
        return;
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



/* Entry: 109770c5c; end: 109770c5f;  */

ulong * FUN_109770c5c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  bool bVar30;
  ulong uVar31;
  byte bVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  ulong *puVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  ulong *puVar45;
  ulong *puVar46;
  uint uVar47;
  undefined8 uStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong auStack_190 [18];
  undefined8 uStack_100;
  ulong auStack_f0 [16];
  long lStack_70;
  ulong *puVar26;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*(ushort *)((long)param_2 + 2) == 0) || ((short)*param_2 == 0)) {
    puVar11 = (ulong *)0x0;
    goto LAB_10976e25c;
  }
  uStack_100 = 0;
  auStack_190[0xf] = 0;
  auStack_190[0xe] = 0;
  auStack_190[0x11] = 0;
  auStack_190[0x10] = 0;
  auStack_190[0xb] = 0;
  auStack_190[10] = 0;
  auStack_190[0xd] = 0;
  auStack_190[0xc] = 0;
  auStack_190[7] = 0;
  auStack_190[6] = 0;
  auStack_190[9] = 0;
  auStack_190[8] = 0;
  auStack_190[3] = 0;
  auStack_190[2] = 0;
  auStack_190[5] = 0;
  auStack_190[4] = 0;
  puStack_198 = (ulong *)0x0;
  puStack_1a0 = (ulong *)0x0;
  auStack_190[1] = 0;
  auStack_190[0] = 0;
  puStack_1b8 = (ulong *)0x0;
  uStack_1c0 = 0;
  puStack_1b0 = (ulong *)0x0;
  puVar46 = (ulong *)*param_3;
  puVar11 = puVar46;
  puVar20 = param_3;
  puVar34 = param_4;
  puStack_1a8 = puVar46;
  (*(code *)puVar46[1])(puVar46,(ulong)*(ushort *)((long)param_2 + 2) * 0x48);
  if (puVar11 == (ulong *)0x0) {
    puStack_1b8 = (ulong *)0x0;
LAB_10976e008:
    puVar11 = (ulong *)0x40;
    param_4 = puVar34;
  }
  else {
    puStack_1b8 = puVar11;
    if ((ulong)(ushort)*param_2 == 0) {
      puStack_1b0 = (ulong *)0x0;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uStack_1c0 = (ulong)uVar6;
LAB_10976e014:
      uVar47 = (uint)uVar6;
      uVar17 = 0;
      bVar30 = true;
      bVar1 = true;
      puVar45 = puStack_1b0;
    }
    else {
      puVar45 = puVar46;
      (*(code *)puVar46[1])(puVar46,(ulong)(ushort)*param_2 << 4);
      if (puVar45 == (ulong *)0x0) {
        puStack_1b0 = (ulong *)0x0;
        goto LAB_10976e008;
      }
      uVar5 = (ushort)*param_2;
      uVar17 = (ulong)uVar5;
      uVar6 = *(ushort *)((long)param_2 + 2);
      uVar47 = (uint)uVar6;
      uStack_1c0 = (ulong)CONCAT24(uVar5,uVar47);
      puStack_1b0 = puVar45;
      if (uVar5 == 0) goto LAB_10976e014;
      uVar19 = 0;
      uVar31 = param_2[3];
      puVar20 = puVar45;
      lVar29 = 0;
      do {
        lVar42 = (ulong)*(ushort *)(uVar31 + uVar19 * 2) + 1;
        puVar34 = puVar11 + lVar29 * 9;
        *puVar20 = (ulong)puVar34;
        uVar14 = (int)lVar42 - (int)lVar29;
        *(uint *)(puVar20 + 1) = uVar14;
        if (uVar14 != 0) {
          *puVar34 = (ulong)(puVar11 + lVar42 * 9 + -9);
          puVar34[2] = (ulong)puVar20;
          puVar39 = puVar34;
          if (uVar14 != 1) {
            puVar35 = puVar11 + lVar29 * 9 + 9;
            do {
              puVar39 = puVar35;
              puVar39[-8] = (ulong)puVar39;
              *puVar39 = (ulong)(puVar39 + -9);
              puVar39[2] = (ulong)puVar20;
              uVar14 = uVar14 - 1;
              puVar35 = puVar39 + 9;
            } while (1 < uVar14);
          }
          puVar39[1] = (ulong)puVar34;
        }
        puVar20 = puVar20 + 2;
        uVar19 = uVar19 + 1;
        lVar29 = lVar42;
      } while (uVar19 != uVar17);
      bVar30 = false;
      bVar1 = false;
    }
    puVar34 = param_4;
    puStack_1b0 = puVar45;
    if (uVar47 != 0) {
      uVar19 = 0;
      uVar31 = param_2[1];
      puVar20 = puVar11 + 3;
      plVar43 = (long *)(uVar31 + 8);
      do {
        *(undefined4 *)puVar20 = 0;
        bVar32 = *(byte *)(param_2[2] + uVar19);
        *(uint *)puVar20 = bVar32 & 1 ^ 1;
        plVar2 = (long *)(uVar31 + ((long)((puVar20[-3] - (long)puVar11 >> 3) * 0x38e38e3900000000)
                                   >> 0x1c));
        lVar29 = plVar43[-1];
        lVar42 = *plVar43;
        uVar36 = lVar29 - *plVar2;
        uVar37 = lVar42 - plVar2[1];
        uVar33 = -uVar36;
        if (-1 < (long)uVar36) {
          uVar33 = uVar36;
        }
        uVar27 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar27 = uVar37;
        }
        iVar16 = 1;
        if (0x7fffffffffffffff < uVar37) {
          iVar16 = 2;
        }
        iVar38 = 0;
        if (uVar33 * 0xc < uVar27) {
          iVar38 = iVar16;
        }
        iVar16 = 8;
        iVar12 = iVar16;
        if (0x7fffffffffffffff < uVar36) {
          iVar12 = 4;
        }
        if (uVar27 * 0xc < uVar33) {
          iVar38 = iVar12;
        }
        *(int *)(puVar20 + 1) = iVar38;
        plVar2 = (long *)(uVar31 + ((((long)(puVar20[-2] - (long)puVar11) >> 3) * 0x38e38e39 << 0x20
                                    ) >> 0x1c));
        uVar37 = *plVar2 - lVar29;
        uVar27 = plVar2[1] - lVar42;
        uVar33 = -uVar37;
        if (-1 < (long)uVar37) {
          uVar33 = uVar37;
        }
        uVar40 = -uVar27;
        if (-1 < (long)uVar27) {
          uVar40 = uVar27;
        }
        if (uVar40 * 0xc < uVar33) {
          if (0x7fffffffffffffff < uVar37) {
            iVar16 = 4;
          }
        }
        else if (uVar33 * 0xc < uVar40) {
          iVar16 = 1;
          if (0x7fffffffffffffff < uVar27) {
            iVar16 = 2;
          }
        }
        else {
          iVar16 = 0;
        }
        *(int *)((long)puVar20 + 0xc) = iVar16;
        if ((bVar32 & 1) == 0) {
          uVar18 = 3;
LAB_10976e184:
          *(undefined4 *)puVar20 = uVar18;
        }
        else if ((iVar38 == iVar16) && ((iVar38 != 0 || (func_0x00010975375c(), (int)uVar36 != 0))))
        {
          uVar18 = 2;
          goto LAB_10976e184;
        }
        param_5 = (ulong *)0x38e38e3900000000;
        plVar43 = plVar43 + 2;
        uVar19 = uVar19 + 1;
        puVar20 = puVar20 + 9;
      } while (uVar47 != uVar19);
      puVar11 = puVar11 + 6;
      puVar20 = (ulong *)param_2[1];
      do {
        *(undefined4 *)((long)puVar11 + -0x14) = 0;
        puVar11[-1] = 0;
        uVar19 = *puVar20;
        puVar11[1] = puVar20[1];
        *puVar11 = uVar19;
        uVar47 = uVar47 - 1;
        puVar11 = puVar11 + 9;
        puVar20 = puVar20 + 2;
        puVar34 = (ulong *)((ulong)param_4 & 0xffffffff);
        bVar30 = bVar1;
      } while (uVar47 != 0);
    }
    if (!bVar30) {
      uVar19 = 0;
      do {
        if (3 < (uint)(puVar45 + uVar19 * 2)[1]) {
          puVar20 = (ulong *)puVar45[uVar19 * 2];
          puVar11 = puVar20;
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == puVar20) goto LAB_10976e2ac;
            uVar31 = puVar11[6];
            uVar33 = puVar11[7];
          } while (uVar31 - puVar20[6] == 0 && puVar20[7] == uVar33);
          puVar39 = puVar20;
          do {
            do {
              puVar35 = puVar39;
              puVar39 = (ulong *)*puVar35;
              if (puVar39 == puVar20) goto LAB_10976e2ac;
              lVar29 = puVar35[6] - puVar39[6];
              lVar42 = puVar35[7] - puVar39[7];
            } while (lVar29 == 0 && lVar42 == 0);
            lVar13 = lVar29 * (puVar20[7] - uVar33) + lVar42 * (uVar31 - puVar20[6]);
            uVar47 = (uint)(lVar13 >> 0x3f);
            if (0 < lVar13) {
              uVar47 = uVar47 + 1;
            }
            puVar24 = puVar35;
          } while (uVar47 == 0);
          do {
            param_5 = puVar24;
            bVar1 = false;
            uVar36 = uVar31;
            uVar37 = uVar33;
            do {
              do {
                puVar24 = puVar11;
                puVar11 = (ulong *)puVar24[1];
                if (puVar11 == puVar35) {
                  bVar1 = true;
                }
                uVar31 = puVar11[6];
                uVar33 = puVar11[7];
                lVar13 = uVar31 - uVar36;
                lVar41 = uVar33 - uVar37;
                uVar36 = uVar31;
                uVar37 = uVar33;
              } while (lVar13 == 0 && lVar41 == 0);
              lVar15 = lVar41 * lVar29 - lVar13 * lVar42;
              uVar14 = (uint)(lVar15 >> 0x3f);
              if (0 < lVar15) {
                uVar14 = uVar14 + 1;
              }
            } while (uVar14 == 0);
            if ((int)(uVar14 ^ uVar47) < 0) {
              do {
                *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
                param_5 = (ulong *)param_5[1];
              } while (param_5 != puVar24);
              *(uint *)(param_5 + 3) = (uint)param_5[3] | 4;
            }
            lVar29 = lVar13;
            lVar42 = lVar41;
            uVar47 = uVar14;
          } while (!bVar1);
        }
LAB_10976e2ac:
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar17);
    }
    puVar20 = param_1 + 5;
    puVar11 = auStack_190;
    param_4 = puVar46;
    puStack_1a0 = param_2;
    puStack_198 = param_3;
    FUN_10976f1f0(auStack_190,param_1 + 3);
    if ((int)puVar11 == 0) {
      puVar11 = auStack_190 + 9;
      puVar20 = param_1 + 0xb;
      FUN_10976f1f0(puVar11,param_1 + 9);
      puVar45 = puStack_198;
      param_4 = puVar46;
      if ((int)puVar11 == 0) {
        uVar17 = puStack_198[0x32];
        puVar11 = (ulong *)puStack_198[0x65];
        if ((int)param_3[0x67] == 0) {
LAB_10976e3fc:
          bVar1 = true;
        }
        else {
          lVar29 = (long)puVar11 * (long)(int)param_3[0x68];
          uVar19 = lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10;
          uVar31 = uVar19 + 0x20 & 0xffffffffffffffc0;
          if (uVar31 == 0 || uVar19 == uVar31) goto LAB_10976e3fc;
          puVar20 = puVar11;
          FUN_1097532ac(puVar11,uVar31,uVar19);
          lVar29 = SUB168(SEXT816((long)uVar17) * SEXT816(0x5c28f5c28f5c28f5),8) - uVar17;
          uVar33 = uVar17;
          if ((long)uVar31 < (long)uVar19) {
            uVar33 = ((lVar29 >> 5) - (lVar29 >> 0x3f)) + uVar17;
          }
          puVar46 = (ulong *)0x0;
          param_5 = (ulong *)0x0;
          FUN_10976ee80(puVar45,uVar33,puVar20);
          bVar1 = false;
        }
        uVar9 = uStack_100;
        bVar30 = false;
        lVar29 = 0;
        uVar47 = (uint)puVar34;
        uStack_100._5_3_ = SUB83(uVar9,5);
        uStack_100._0_5_ =
             CONCAT14(uVar47 != 1,
                      CONCAT13(uVar47 == 2 || uVar47 == 4,CONCAT12((uVar47 & 0xfffffffe) == 2,0x101)
                              ));
        uVar47 = (uint)uStack_1c0;
        bVar10 = true;
        do {
          bVar8 = bVar10;
          uVar19 = (ulong)uVar47;
          if (uVar47 != 0) {
            puVar20 = (ulong *)puStack_1a0[1];
            puVar34 = puStack_1b8 + 7;
            uVar31 = uVar19;
            do {
              *(undefined4 *)((long)puVar34 + -0x1c) = 0;
              puVar39 = puVar20;
              if (!bVar8) {
                puVar39 = puVar20 + 1;
              }
              lVar42 = 8;
              if (!bVar8) {
                lVar42 = 0;
              }
              uVar36 = *(ulong *)((long)puVar20 + lVar42);
              uVar33 = *puVar39;
              puVar34[-2] = 0;
              puVar34[-1] = uVar33;
              *puVar34 = uVar36;
              puVar20 = puVar20 + 2;
              uVar14 = (int)uVar31 - 1;
              uVar31 = (ulong)uVar14;
              puVar34 = puVar34 + 9;
            } while (uVar14 != 0);
          }
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = 0;
            do {
              if ((int)(puStack_1b0 + uVar31 * 2)[1] != 0) {
                puVar34 = (ulong *)puStack_1b0[uVar31 * 2];
                puVar20 = puVar34;
                do {
                  puVar20 = (ulong *)*puVar20;
                  if (puVar20 == puVar34) goto LAB_10976e5d4;
                } while (puVar20[6] == puVar34[6]);
                puVar35 = (ulong *)puVar20[1];
                puVar34 = puVar35;
                puVar39 = puVar35;
                while (puVar34 = (ulong *)puVar34[1], puVar34 != puVar35) {
                  uVar33 = puVar34[6];
                  uVar36 = puVar39[6];
                  if (uVar33 != uVar36) {
                    if ((long)puVar20[6] < (long)uVar36) {
                      if ((long)uVar33 < (long)uVar36) {
LAB_10976e580:
                        do {
                          *(uint *)((long)puVar39 + 0x1c) = *(uint *)((long)puVar39 + 0x1c) | 0x40;
                          puVar39 = (ulong *)puVar39[1];
                        } while (puVar39 != puVar34);
                      }
                    }
                    else if ((long)uVar36 < (long)uVar33) goto LAB_10976e580;
                    puVar20 = (ulong *)*puVar34;
                    puVar39 = puVar34;
                  }
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uStack_1c0._4_4_);
          }
          for (uVar31 = 0; (uint)uVar31 < uVar47; uVar31 = (ulong)((int)uVar31 + 1)) {
            puVar34 = puStack_1b8 + uVar31 * 9;
            uVar14 = *(uint *)((long)puVar34 + 0x1c);
            puVar20 = puVar34;
            if ((uVar14 >> 6 & 1) != 0) {
              do {
                puVar20 = (ulong *)*puVar20;
                if (puVar20 == puVar34) goto LAB_10976e5d4;
                uVar36 = puVar20[7];
                uVar33 = puVar34[7];
                puVar39 = puVar34;
              } while (uVar36 == uVar33);
              do {
                puVar39 = (ulong *)puVar39[1];
                if (puVar39 == puVar34) goto LAB_10976e5d4;
                uVar37 = puVar39[7];
              } while (uVar37 == uVar33);
              if (((long)uVar36 < (long)uVar33) && ((long)uVar33 < (long)uVar37)) {
                uVar14 = uVar14 | 0x80;
              }
              else {
                if (((long)uVar36 <= (long)uVar33) || ((long)uVar33 <= (long)uVar37))
                goto LAB_10976e5d4;
                uVar14 = uVar14 | 0x100;
              }
              *(uint *)((long)puVar34 + 0x1c) = uVar14;
            }
LAB_10976e5d4:
          }
          puVar20 = auStack_190 + lVar29 * 9;
          iVar16 = (int)*puVar20;
          if (iVar16 != 0) {
            uVar31 = auStack_190[lVar29 * 9 + 1];
            do {
              puVar46 = &uStack_1c0;
              FUN_10976f488(uVar31,puVar45,lVar29);
              uVar31 = uVar31 + 0x30;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          puVar21 = *(undefined4 **)((uint *)auStack_190[lVar29 * 9 + 7] + 2);
          uVar44 = *(uint *)auStack_190[lVar29 * 9 + 7];
          uVar14 = 3;
          if (!bVar8) {
            uVar14 = 0xc;
          }
          puVar34 = (ulong *)(ulong)uVar14;
          uVar31 = puVar45[lVar29 * 0x33 + 0x32];
          if (uVar31 == 0) {
            uVar14 = 0x7fffffff;
          }
          else {
            uVar33 = -uVar31;
            if (-1 < (long)uVar31) {
              uVar33 = uVar31;
            }
            uVar14 = 0;
            if (uVar33 != 0) {
              uVar14 = (uint)(((uVar33 >> 1) + 0x200000) / uVar33);
            }
          }
          uVar3 = -uVar14;
          if (-1 < (long)uVar31) {
            uVar3 = uVar14;
          }
          if (0xb < (int)uVar3) {
            uVar3 = 0xc;
          }
          puVar45 = (ulong *)(ulong)uVar3;
          if (uVar44 < 2) {
            if (uVar44 == 1) goto LAB_10976e768;
LAB_10976e79c:
            if ((int)uVar19 != 0) {
              puVar22 = (uint *)((long)puStack_1b8 + 0x1c);
              uVar31 = uVar19;
              do {
                if ((*(long *)(puVar22 + 3) != 0) && ((*puVar22 >> 4 & 1) == 0)) {
                  *puVar22 = *puVar22 | 0x10;
                }
                puVar22 = puVar22 + 0x12;
                uVar47 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar47;
              } while (uVar47 != 0);
            }
          }
          else if (uVar47 != 0) {
            uVar14 = puVar21[4];
            if (uVar47 <= (uint)puVar21[4]) {
              uVar14 = uVar47;
            }
            puVar22 = puVar21 + 10;
            do {
              uVar47 = *puVar22;
              if ((uint)uStack_1c0 <= *puVar22) {
                uVar47 = (uint)uStack_1c0;
              }
              if (uVar14 <= uVar47 && uVar47 - uVar14 != 0) {
                puVar46 = puStack_1b8 + (ulong)uVar14 * 9;
                FUN_10976f840(puVar20,puVar22[-4],*(undefined8 *)(puVar22 + -2));
                FUN_10976f948(puVar20,puVar46,uVar47 - uVar14,puVar45,puVar34);
              }
              uVar44 = uVar44 - 1;
              puVar22 = puVar22 + 6;
              uVar14 = uVar47;
            } while (1 < uVar44);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar21 = *(undefined4 **)(auStack_190[lVar29 * 9 + 7] + 8);
LAB_10976e768:
            puVar46 = puStack_1b8;
            FUN_10976f840(puVar20,*puVar21,*(undefined8 *)(puVar21 + 2));
            FUN_10976f948(puVar20,puVar46,uVar19);
            uVar19 = uStack_1c0 & 0xffffffff;
            puVar46 = puVar45;
            param_5 = puVar34;
            goto LAB_10976e79c;
          }
          puVar34 = puStack_1b8;
          puVar20 = (ulong *)0x30;
          uVar47 = (uint)uVar19;
          if (bVar30) {
            uVar31 = uVar19;
            puVar45 = puStack_1b8;
            if (uVar47 != 0) {
              do {
                if ((((puVar45[4] & 0xc) != 0) || ((*(byte *)((long)puVar45 + 0x24) & 0xc) != 0)) &&
                   (uVar14 = *(uint *)((long)puVar45 + 0x1c), (uVar14 >> 4 & 1) == 0)) {
                  uVar33 = puVar45[6];
                  iVar16 = (int)param_3[0x67];
                  if (iVar16 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + 0x69;
                    do {
                      lVar42 = uVar33 - (long)*(int *)((long)puVar39 + 4);
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)uVar33 <= (long)(int)*puVar39 + (long)(int)uVar36) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 <= *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[3];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + 6;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  uVar44 = (uint)param_3[200];
                  if (uVar44 != 0) {
                    uVar36 = param_3[0x1ed];
                    puVar39 = param_3 + (ulong)uVar44 * 6 + 0xc4;
                    do {
                      lVar42 = (long)(int)*puVar39 - uVar33;
                      if (lVar42 < -(long)(int)uVar36) break;
                      if (((long)*(int *)((long)puVar39 + 4) - (long)(int)uVar36 <= (long)uVar33) &&
                         ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                          (lVar42 < *(int *)((long)param_3 + 0xf64))))) {
                        puVar45[8] = puVar39[4];
                        uVar14 = uVar14 | 0x30;
                        *(uint *)((long)puVar45 + 0x1c) = uVar14;
                      }
                      puVar39 = puVar39 + -6;
                      uVar44 = uVar44 - 1;
                    } while (uVar44 != 0);
                  }
                }
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
                puVar45 = puVar45 + 9;
              } while (uVar14 != 0);
              goto LAB_10976e8fc;
            }
          }
          else {
LAB_10976e8fc:
            if (uVar47 != 0) {
              uVar33 = puStack_198[lVar29 * 0x33 + 0x32];
              puVar45 = puStack_1b8 + 5;
              uVar31 = uVar19;
              do {
                piVar23 = (int *)*puVar45;
                if (piVar23 != (int *)0x0) {
                  uVar14 = *(uint *)((long)puVar45 + -0xc);
                  if ((uVar14 >> 9 & 1) == 0) {
                    if ((uVar14 >> 10 & 1) == 0) {
                      lVar42 = puVar45[1] - (long)*piVar23;
                      if (lVar42 == 0 || (long)puVar45[1] < (long)*piVar23) {
                        uVar36 = *(long *)(piVar23 + 2) +
                                 ((long)(lVar42 * uVar33 + ((long)(lVar42 * uVar33) >> 0x3f) +
                                        0x8000) >> 0x10);
                      }
                      else {
                        puVar20 = (ulong *)(long)piVar23[1];
                        lVar13 = *(long *)(piVar23 + 2);
                        if (lVar42 < (long)puVar20) {
                          FUN_1097532ac();
                          uVar36 = lVar42 + lVar13;
                        }
                        else {
                          lVar42 = (lVar42 - (long)puVar20) * uVar33;
                          uVar36 = *(long *)(piVar23 + 4) + lVar13 +
                                   (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                        }
                      }
                    }
                    else {
                      uVar36 = *(long *)(piVar23 + 4) + *(long *)(piVar23 + 2);
                    }
                  }
                  else {
                    uVar36 = *(ulong *)(piVar23 + 2);
                  }
                  puVar45[3] = uVar36;
                  *(uint *)((long)puVar45 + -0xc) = uVar14 | 0x20;
                }
                puVar39 = puStack_1a8;
                puVar45 = puVar45 + 9;
                uVar14 = (int)uVar31 - 1;
                uVar31 = (ulong)uVar14;
              } while (uVar14 != 0);
              uVar14 = 0;
              puVar35 = puVar34 + uVar19 * 9;
              puVar45 = puVar34;
              do {
                uVar14 = (*(uint *)((long)puVar45 + 0x1c) >> 4 & 1) + uVar14;
                puVar45 = puVar45 + 9;
              } while (puVar45 < puVar35);
              if (uVar14 != 0) {
                if (uVar14 < 0x11) {
                  puVar45 = auStack_f0;
                }
                else if ((uVar14 >> 0x1c != 0) ||
                        (puVar45 = puStack_1a8, (*(code *)puStack_1a8[1])(puStack_1a8,uVar14 * 8),
                        puVar45 == (ulong *)0x0)) goto LAB_10976ec28;
                uVar31 = 0;
                puVar24 = puVar34;
                do {
                  if ((*(byte *)((long)puVar24 + 0x1c) >> 4 & 1) != 0) {
                    puVar25 = puVar45 + uVar31;
                    if ((int)uVar31 != 0) {
                      uVar36 = puVar24[6];
                      do {
                        puVar26 = puVar25 + -1;
                        if (*(long *)(*puVar26 + 0x30) <= (long)uVar36) break;
                        *puVar25 = *puVar26;
                        puVar25 = puVar26;
                      } while (puVar45 < puVar26);
                    }
                    *puVar25 = (ulong)puVar24;
                    uVar31 = (ulong)((int)uVar31 + 1);
                  }
                  puVar24 = puVar24 + 9;
                } while (puVar24 < puVar35);
                iVar16 = (int)uVar31;
                do {
                  uVar14 = *(uint *)((long)puVar34 + 0x1c);
                  if ((uVar14 >> 4 & 1) == 0) {
                    uVar44 = (uint)puVar34[3];
                    if ((uVar44 >> 1 & 1) != 0) {
                      if (((int)puVar34[4] == 0) ||
                         ((int)puVar34[4] != *(int *)((long)puVar34 + 0x24) ||
                          (uVar44 & 4) == 0 && (uVar14 & 0x40) == 0)) goto LAB_10976eb94;
                      *(uint *)(puVar34 + 3) = uVar44 & 0xfffffffd;
                    }
                    uVar36 = puVar34[6];
                    if (iVar16 == 0) {
LAB_10976eb54:
                      uVar37 = *puVar45;
LAB_10976eb6c:
                      lVar42 = (uVar36 - *(long *)(uVar37 + 0x30)) * uVar33;
                      uVar36 = *(long *)(uVar37 + 0x40) +
                               (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    else {
                      lVar42 = 0;
                      uVar37 = 0xffffffff;
                      do {
                        if ((long)uVar36 < *(long *)(*(long *)((long)puVar45 + lVar42) + 0x30)) {
                          if (lVar42 == 0) goto LAB_10976eb54;
                          uVar27 = uVar37 & 0xffffffff;
                          break;
                        }
                        uVar37 = uVar37 + 1;
                        lVar42 = lVar42 + 8;
                        uVar27 = (ulong)(iVar16 - 1);
                      } while (uVar31 << 3 != lVar42);
                      uVar37 = 0;
                      uVar27 = puVar45[uVar27];
                      puVar24 = puVar45 + uVar31;
                      do {
                        puVar24 = puVar24 + -1;
                        if (uVar31 == uVar37) {
                          uVar37 = 0;
                          goto LAB_10976eb60;
                        }
                        uVar37 = uVar37 + 1;
                      } while ((long)uVar36 <= *(long *)(*puVar24 + 0x30));
                      uVar37 = (ulong)((iVar16 - (int)uVar37) + 1);
LAB_10976eb60:
                      if (uVar37 == uVar31) {
                        uVar37 = puVar45[iVar16 - 1];
                        goto LAB_10976eb6c;
                      }
                      lVar42 = uVar36 - *(long *)(uVar27 + 0x30);
                      if (lVar42 == 0) {
                        uVar36 = *(ulong *)(uVar27 + 0x40);
                      }
                      else {
                        uVar37 = puVar45[uVar37];
                        if (uVar36 == *(ulong *)(uVar37 + 0x30)) {
                          uVar36 = *(ulong *)(uVar37 + 0x40);
                        }
                        else {
                          lVar13 = *(long *)(uVar27 + 0x40);
                          puVar20 = (ulong *)(*(ulong *)(uVar37 + 0x30) - *(long *)(uVar27 + 0x30));
                          FUN_1097532ac(lVar42,*(long *)(uVar37 + 0x40) - lVar13);
                          uVar36 = lVar42 + lVar13;
                        }
                      }
                    }
                    puVar34[8] = uVar36;
                    *(uint *)((long)puVar34 + 0x1c) = uVar14 | 0x20;
                  }
LAB_10976eb94:
                  puVar34 = puVar34 + 9;
                } while (puVar34 < puVar35);
                if (puVar45 != auStack_f0) {
                  (*(code *)puVar39[2])(puVar39,puVar45);
                }
              }
            }
          }
LAB_10976ec28:
          puVar45 = puStack_198;
          if (uStack_1c0._4_4_ != 0) {
            uVar31 = puStack_198[lVar29 * 0x33 + 0x32];
            uVar33 = puStack_198[lVar29 * 0x33 + 0x33];
            puVar34 = puStack_1b0;
            iVar16 = uStack_1c0._4_4_;
            do {
              if ((uint)puVar34[1] != 0) {
                uVar14 = 0;
                uVar27 = 0;
                uVar37 = *puVar34;
                uVar40 = uVar37 + (ulong)(uint)puVar34[1] * 0x48;
                uVar36 = uVar37;
                do {
                  uVar4 = uVar36;
                  if (uVar27 != 0) {
                    uVar4 = uVar27;
                  }
                  uVar44 = *(uint *)(uVar36 + 0x1c) & 0x20;
                  if (uVar44 != 0) {
                    uVar27 = uVar4;
                  }
                  uVar14 = uVar14 + (uVar44 >> 5);
                  uVar36 = uVar36 + 0x48;
                } while (uVar36 < uVar40);
                uVar36 = uVar27;
                if (uVar14 < 2) {
                  if (uVar14 == 1) {
                    lVar29 = *(long *)(uVar27 + 0x30) * uVar31;
                    uVar33 = *(long *)(uVar27 + 0x40) - (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10)
                    ;
                  }
                  do {
                    if (uVar37 != uVar27) {
                      lVar29 = *(long *)(uVar37 + 0x30) * uVar31;
                      *(ulong *)(uVar37 + 0x40) =
                           uVar33 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
                    }
                    uVar37 = uVar37 + 0x48;
                  } while (uVar37 < uVar40);
                }
                else {
                  do {
                    do {
                      uVar37 = uVar36;
                      uVar36 = *(ulong *)(uVar37 + 8);
                      if (uVar36 == uVar27) goto LAB_10976edb8;
                      uVar40 = uVar36;
                    } while ((*(byte *)(uVar36 + 0x1c) >> 5 & 1) != 0);
                    do {
                      uVar40 = *(ulong *)(uVar40 + 8);
                    } while ((*(byte *)(uVar40 + 0x1c) >> 5 & 1) == 0);
                    lVar42 = *(long *)(uVar37 + 0x30);
                    lVar29 = *(long *)(uVar40 + 0x30);
                    uVar4 = lVar42 - lVar29;
                    uVar7 = uVar40;
                    if (lVar42 <= lVar29) {
                      uVar4 = lVar29 - lVar42;
                      lVar29 = lVar42;
                      uVar7 = uVar37;
                      uVar37 = uVar40;
                    }
                    puVar35 = *(ulong **)(uVar7 + 0x40);
                    puVar39 = *(ulong **)(uVar37 + 0x40);
                    if (uVar4 == 0) {
                      uVar37 = 0x10000;
                    }
                    else {
                      lVar13 = (long)puVar39 - (long)puVar35;
                      lVar42 = -lVar13;
                      if (-1 < lVar13) {
                        lVar42 = lVar13;
                      }
                      uVar7 = 0;
                      if (uVar4 != 0) {
                        uVar7 = (lVar42 * 0x10000 + (uVar4 >> 1)) / uVar4;
                      }
                      uVar37 = -uVar7;
                      if ((long)puVar35 <= (long)puVar39) {
                        uVar37 = uVar7;
                      }
                    }
                    do {
                      lVar13 = *(long *)(uVar36 + 0x30) - lVar29;
                      param_5 = puVar35;
                      lVar42 = lVar13 * uVar37;
                      if ((long)uVar4 <= lVar13) {
                        param_5 = puVar39;
                        lVar42 = (lVar13 - uVar4) * uVar31;
                      }
                      puVar46 = param_5;
                      if (lVar13 < 1) {
                        puVar46 = puVar35;
                        lVar42 = lVar13 * uVar31;
                      }
                      puVar20 = (ulong *)((long)puVar46 +
                                         (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10));
                      *(ulong **)(uVar36 + 0x40) = puVar20;
                      uVar36 = *(ulong *)(uVar36 + 8);
                    } while (uVar36 != uVar40);
                    uVar36 = uVar40;
                  } while (uVar40 != uVar27);
                }
              }
LAB_10976edb8:
              puVar34 = puVar34 + 2;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          if (uVar47 != 0) {
            puVar34 = (ulong *)puStack_1a0[1];
            pbVar28 = (byte *)puStack_1a0[2];
            bVar32 = 0x20;
            if (!bVar8) {
              bVar32 = 0x40;
            }
            puVar39 = puStack_1b8 + 8;
            do {
              puVar35 = puVar34;
              if (!bVar8) {
                puVar35 = puVar34 + 1;
              }
              *puVar35 = *puVar39;
              if ((*(byte *)((long)puVar39 + -0x24) >> 4 & 1) != 0) {
                *pbVar28 = *pbVar28 | bVar32;
              }
              puVar39 = puVar39 + 9;
              pbVar28 = pbVar28 + 1;
              puVar34 = puVar34 + 2;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (!bVar1) {
            puVar46 = (ulong *)0x0;
            param_5 = (ulong *)0x0;
            puVar20 = puVar11;
            FUN_10976ee80(puStack_198,uVar17);
          }
          bVar30 = true;
          lVar29 = 1;
          bVar10 = false;
        } while (bVar8);
        puVar11 = (ulong *)0x0;
        param_4 = puVar46;
      }
    }
  }
  puVar46 = puStack_1a8;
  FUN_10976fb18(auStack_190 + 9,puStack_1a8);
  param_1 = auStack_190;
  FUN_10976fb18(param_1,puVar46);
  param_3 = puVar20;
  if (puStack_1b8 != (ulong *)0x0) {
    param_1 = puVar46;
    (*(code *)puVar46[2])();
    param_3 = puVar20;
  }
  param_2 = puStack_1b0;
  if (puStack_1b0 != (ulong *)0x0) {
    (*(code *)puVar46[2])();
    param_1 = puVar46;
  }
LAB_10976e25c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar11 = param_1;
  if (((ulong *)param_1[0x32] != param_2) || ((ulong *)param_1[0x33] != param_4)) {
    param_1[0x32] = (ulong)param_2;
    param_1[0x33] = (ulong)param_4;
    FUN_10976fb94(param_1,0);
  }
  if (((ulong *)param_1[0x65] != param_3) || ((ulong *)param_1[0x66] != param_5)) {
    param_1[0x65] = (ulong)param_3;
    param_1[0x66] = (ulong)param_5;
    puVar11 = param_1;
    FUN_10976fb94(param_1,1);
    if ((long)param_3 < 0x20c49ba) {
      bVar1 = (long)param_3 * 0x7d < (long)(param_1[0x1eb] * 8);
    }
    else {
      bVar1 = (long)param_3 < (long)(param_1[0x1eb] << 3) / 0x7d;
    }
    puVar20 = param_1 + 0x67;
    *(bool *)((long)param_1 + 0xf6c) = bVar1;
    uVar17 = (ulong)(uint)param_1[0x1ec];
    if (0 < (int)(uint)param_1[0x1ec]) {
      lVar29 = (long)param_3 * uVar17;
      do {
        if (lVar29 + (lVar29 >> 0x3f) + 0x8000 < 0x210000) goto LAB_10976ef7c;
        lVar29 = lVar29 - (long)param_3;
        uVar19 = uVar17 - 1;
        bVar1 = 0 < (long)uVar17;
        uVar17 = uVar19;
      } while (uVar19 != 0 && bVar1);
      uVar17 = 0;
    }
LAB_10976ef7c:
    iVar16 = 0;
    *(int *)((long)param_1 + 0xf64) = (int)uVar17;
    do {
      puVar46 = param_1 + 0x18a;
      if (iVar16 == 1) {
        puVar46 = param_1 + 200;
      }
      puVar34 = param_1 + 0x129;
      if (iVar16 != 2) {
        puVar34 = puVar46;
      }
      puVar46 = puVar20;
      if (iVar16 != 0) {
        puVar46 = puVar34;
      }
      iVar38 = (int)*puVar46;
      if (iVar38 != 0) {
        puVar46 = puVar46 + 3;
        do {
          lVar29 = (long)param_3 * (long)(int)puVar46[-1];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -4);
          puVar46[2] = (long)param_5 + (lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10);
          puVar46[3] = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10);
          lVar29 = (long)param_3 * (long)(int)puVar46[-2];
          lVar42 = (long)param_3 * (long)*(int *)((long)puVar46 + -0xc);
          *puVar46 = (long)param_5 + (lVar29 + (lVar29 >> 0x3f) + 0x8000 >> 0x10) + 0x20 &
                     0xffffffffffffffc0;
          puVar46[1] = lVar42 + (lVar42 >> 0x3f) + 0x8000 >> 0x10;
          iVar38 = iVar38 + -1;
          puVar46 = puVar46 + 6;
        } while (iVar38 != 0);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
    bVar1 = true;
    do {
      bVar30 = bVar1;
      lVar29 = 0;
      if (!bVar30) {
        lVar29 = 0x308;
      }
      piVar23 = (int *)((long)puVar20 + lVar29) + 2;
      iVar16 = *(int *)((long)puVar20 + lVar29);
      if (iVar16 != 0) {
        lVar29 = 0x610;
        if (!bVar30) {
          lVar29 = 0x918;
        }
        iVar38 = *(int *)((long)puVar20 + lVar29);
        do {
          if (iVar38 != 0) {
            puVar11 = (ulong *)((long)param_1 + lVar29 + 0x360);
            iVar12 = iVar38;
            do {
              uVar14 = *piVar23 - (int)puVar11[-4];
              uVar47 = -uVar14;
              if (-1 < (int)uVar14) {
                uVar47 = uVar14;
              }
              if ((long)((long)param_3 * (ulong)uVar47 +
                         ((long)((long)param_3 * (ulong)uVar47) >> 0x3f) + 0x8000) < 0x400000) {
                uVar17 = *puVar11;
                *(ulong *)(piVar23 + 10) = puVar11[1];
                *(ulong *)(piVar23 + 8) = uVar17;
                uVar17 = puVar11[-2];
                *(ulong *)(piVar23 + 6) = puVar11[-1];
                *(ulong *)(piVar23 + 4) = uVar17;
                break;
              }
              puVar11 = puVar11 + 6;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          piVar23 = piVar23 + 0xc;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      bVar1 = false;
    } while (bVar30);
  }
  return puVar11;
}



/* Entry: 109770c60; end: 109770d8f;  */

void FUN_109770c60(long param_1,long param_2,uint param_3,ulong param_4,undefined4 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint *puVar11;
  int *piStack_48;
  
  puVar11 = (uint *)(param_1 + 0x10);
  if (*puVar11 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*puVar11 * 0x18 + -8) = param_5;
  }
  puVar5 = puVar11;
  func_0x000109770944(puVar11,param_6,&piStack_48);
  if ((int)puVar5 == 0) {
    if (*puVar11 == 0) {
      func_0x000109770944(puVar11,param_6,&piStack_48);
      if ((int)puVar11 != 0) {
        return;
      }
    }
    else {
      piStack_48 = (int *)(*(long *)(param_1 + 0x18) + (ulong)*puVar11 * 0x18 + -0x18);
    }
    piVar6 = piStack_48;
    FUN_109770684(piStack_48,param_4,param_6);
    if (((int)piVar6 == 0) && (*piStack_48 = (int)param_4, (int)param_4 != 0)) {
      pbVar7 = *(byte **)(piStack_48 + 2);
      uVar8 = 0x80 >> (ulong)(param_3 & 7);
      pbVar9 = (byte *)(param_2 + (ulong)(param_3 >> 3));
      uVar10 = 0x80;
      do {
        bVar1 = *pbVar7 & ((byte)uVar10 ^ 0xff);
        if ((uVar8 & *pbVar9) != 0) {
          bVar1 = (byte)uVar10 | *pbVar7;
        }
        *pbVar7 = bVar1;
        uVar2 = uVar8 >> 1;
        bVar4 = 1 < uVar8;
        uVar8 = 0x80;
        pbVar3 = pbVar9 + 1;
        if (bVar4) {
          uVar8 = uVar2;
          pbVar3 = pbVar9;
        }
        pbVar9 = pbVar3;
        uVar2 = (int)uVar10 >> 1;
        bVar4 = uVar10 < 2;
        if (bVar4) {
          pbVar7 = pbVar7 + 1;
        }
        uVar10 = 0x80;
        if (!bVar4) {
          uVar10 = uVar2;
        }
        uVar2 = (int)param_4 - 1;
        param_4 = (ulong)uVar2;
      } while (uVar2 != 0);
    }
  }
  return;
}



/* Entry: 109770d90; end: 109770ddb;  */

void FUN_109770d90(undefined8 *param_1,long param_2)

{
  FUN_109770ddc(param_1 + 4);
  FUN_109770ddc(param_1 + 2,param_2);
  if (param_1[1] != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109770ddc; end: 109770e5f;  */

void FUN_109770ddc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = *(int *)((long)param_1 + 4);
  lVar1 = param_1[1];
  if (iVar2 != 0) {
    plVar3 = (long *)(lVar1 + 8);
    do {
      if (*plVar3 != 0) {
        (**(code **)(param_2 + 0x10))(param_2);
      }
      plVar3[-1] = 0;
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
      iVar2 = iVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (iVar2 != 0);
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 109770e60; end: 109770ee3;  */

undefined * FUN_109770e60(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    puVar2 = &DAT_10f57f82c;
    ppuVar1 = &PTR_DAT_110b0c8b8;
    do {
      _strcmp(puVar2,param_2);
      if ((int)puVar2 == 0) {
        return ppuVar1[1];
      }
      puVar2 = ppuVar1[2];
      ppuVar1 = ppuVar1 + 2;
    } while (puVar2 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}



/* Entry: 109770ee4; end: 10977113f;  */

ulong FUN_109770ee4(long param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined2 uStack_5b;
  uint uStack_54;
  
  uStack_54 = 0;
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 5) {
      lVar5 = *(long *)(param_2 + 0x128);
      uVar6 = *(uint *)(lVar5 + 8);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_2 + 0xa8) != 0) {
          (**(code **)(lVar8 + 0x10))(lVar8);
          lVar5 = *(long *)(param_2 + 0x128);
          uVar6 = *(uint *)(lVar5 + 8);
        }
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(uint *)(lVar5 + 8) = uVar6 & 0xfffffffe;
      }
      lVar5 = param_2;
      func_0x000109753ebc(param_2,0,param_4);
      if ((int)lVar5 == 0) {
        iVar2 = *(int *)(param_2 + 0x98);
        if ((iVar2 == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
LAB_10977112c:
          *(undefined4 *)(param_2 + 0x90) = 0x62697473;
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x80);
        iVar2 = iVar2 + iVar3 * 2;
        iVar1 = *(int *)(param_2 + 0x9c) + iVar3 * 2;
        *(int *)(param_2 + 0x98) = iVar2;
        *(int *)(param_2 + 0x9c) = iVar1;
        *(undefined1 *)(param_2 + 0xb2) = 2;
        *(int *)(param_2 + 0xa0) = iVar1;
        *(undefined2 *)(param_2 + 0xb0) = 0xff;
        lVar5 = lVar8;
        FUN_1097539a8(lVar8,(long)iVar1,0,iVar2,0,&uStack_54);
        *(long *)(param_2 + 0xa8) = lVar5;
        uVar9 = (ulong)uStack_54;
        if (uStack_54 == 0) {
          lStack_b8 = param_2 + 200;
          *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
          iVar2 = *(int *)(param_2 + 0xc4) + iVar3;
          iVar3 = *(int *)(param_2 + 0xc0) - iVar3;
          *(int *)(param_2 + 0xc0) = iVar3;
          *(int *)(param_2 + 0xc4) = iVar2;
          lVar10 = (long)(iVar3 * -0x40);
          lVar5 = (long)*(int *)(param_2 + 0x98) * 0x40 + (long)(iVar2 * -0x40);
          if (param_4 != (long *)0x0) {
            lVar10 = *param_4 + lVar10;
            lVar5 = param_4[1] + lVar5;
          }
          if ((lVar10 != 0 || lVar5 != 0) && (uVar4 = *(ushort *)(param_2 + 0xca), uVar4 != 0)) {
            uVar6 = 0;
            plVar7 = *(long **)(param_2 + 0xd0);
            do {
              *plVar7 = *plVar7 + lVar10;
              plVar7[1] = plVar7[1] + lVar5;
              uVar6 = uVar6 + 1;
              plVar7 = plVar7 + 2;
            } while (uVar6 < uVar4);
          }
          uStack_60 = *(undefined4 *)(param_1 + 0x80);
          uStack_b0 = 8;
          uStack_5c = *(undefined1 *)(param_1 + 0x84);
          uStack_5b = *(undefined2 *)(param_1 + 0x85);
          uVar9 = *(ulong *)(param_1 + 0x68);
          piStack_c0 = (int *)(param_2 + 0x98);
          (**(code **)(param_1 + 0x70))(uVar9,&piStack_c0);
          if ((lVar10 != 0 || lVar5 != 0) && (uVar4 = *(ushort *)(param_2 + 0xca), uVar4 != 0)) {
            uVar6 = 0;
            plVar7 = *(long **)(param_2 + 0xd0);
            do {
              *plVar7 = *plVar7 - lVar10;
              plVar7[1] = plVar7[1] - lVar5;
              uVar6 = uVar6 + 1;
              plVar7 = plVar7 + 2;
            } while (uVar6 < uVar4);
          }
          if ((int)uVar9 == 0) goto LAB_10977112c;
        }
      }
      else {
        uVar9 = 0x62;
      }
    }
    else {
      uVar9 = 0x13;
    }
  }
  else {
    uVar9 = 0x12;
  }
  lVar5 = *(long *)(param_2 + 0x128);
  uVar6 = *(uint *)(lVar5 + 8);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_2 + 0xa8) != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
      lVar5 = *(long *)(param_2 + 0x128);
      uVar6 = *(uint *)(lVar5 + 8);
    }
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(lVar5 + 8) = uVar6 & 0xfffffffe;
  }
  return uVar9;
}



/* Entry: 109771140; end: 1097711ef;  */

undefined8 FUN_109771140(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (((param_3 != 0) && (uVar5 = *(ulong *)(param_2 + 0xd0), uVar5 != 0)) &&
       ((ulong)*(ushort *)(param_2 + 0xca) != 0)) {
      uVar1 = uVar5 + (ulong)*(ushort *)(param_2 + 0xca) * 0x10;
      do {
        FUN_1097547e4(uVar5,param_3);
        uVar5 = uVar5 + 0x10;
      } while (uVar5 < uVar1);
    }
    if ((param_4 != (long *)0x0) && (uVar2 = *(ushort *)(param_2 + 0xca), uVar2 != 0)) {
      uVar3 = 0;
      lVar7 = param_4[1];
      lVar6 = *param_4;
      plVar4 = *(long **)(param_2 + 0xd0);
      do {
        plVar4[1] = plVar4[1] + lVar7;
        *plVar4 = *plVar4 + lVar6;
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 2;
      } while (uVar3 < uVar2);
    }
    return 0;
  }
  return 6;
}



/* Entry: 1097711f0; end: 10977122b;  */

void FUN_1097711f0(long param_1,long param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar12;
  long *plVar11;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x20)) {
    return;
  }
  if ((param_2 != -200) && (param_3 != (long *)0x0)) {
    uVar1 = *(ushort *)(param_2 + 0xca);
    if (uVar1 == 0) {
      lVar2 = 0;
      lVar4 = 0;
      lVar7 = 0;
      lVar9 = 0;
    }
    else {
      plVar12 = *(long **)(param_2 + 0xd0);
      lVar4 = *plVar12;
      lVar2 = plVar12[1];
      lVar7 = lVar2;
      lVar9 = lVar4;
      if (uVar1 != 1) {
        lVar3 = lVar2;
        lVar5 = lVar4;
        lVar6 = lVar2;
        lVar8 = lVar4;
        plVar10 = plVar12 + 2;
        do {
          plVar11 = plVar10 + 2;
          lVar9 = *plVar10;
          lVar7 = plVar10[1];
          lVar4 = lVar9;
          if (lVar5 <= lVar9) {
            lVar4 = lVar5;
          }
          if (lVar9 <= lVar8) {
            lVar9 = lVar8;
          }
          lVar2 = lVar7;
          if (lVar3 <= lVar7) {
            lVar2 = lVar3;
          }
          if (lVar7 <= lVar6) {
            lVar7 = lVar6;
          }
          lVar3 = lVar2;
          lVar5 = lVar4;
          lVar6 = lVar7;
          lVar8 = lVar9;
          plVar10 = plVar11;
        } while (plVar11 < plVar12 + (ulong)uVar1 * 2);
      }
    }
    *param_3 = lVar4;
    param_3[1] = lVar2;
    param_3[2] = lVar9;
    param_3[3] = lVar7;
  }
  return;
}



/* Entry: 10977122c; end: 1097713df;  */

ulong FUN_10977122c(long param_1,long param_2,int param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puStack_d8;
  int *piStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_44;
  
  uStack_44 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_50 = 0;
  if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x20)) {
    return 0x12;
  }
  if (param_3 != 5) {
    return 0x13;
  }
  if (param_4 != 0) {
    return 7;
  }
  piVar1 = (int *)(param_2 + 0x98);
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*piVar1 == 0) || (*(int *)(param_2 + 0xa0) == 0)) {
    iVar7 = 0;
LAB_1097712d8:
    if (((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) && (*(long *)(param_2 + 0xa8) != 0))
    {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
    *(ulong *)(param_2 + 0xa0) = uStack_68;
    *(undefined8 *)piVar1 = uStack_70;
    *(undefined8 *)(param_2 + 0xb0) = uStack_58;
    *(long *)(param_2 + 0xa8) = lStack_60;
    *(undefined8 *)(param_2 + 0xb8) = uStack_50;
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) - iVar7;
    *(int *)(param_2 + 0xc4) = *(int *)(param_2 + 0xc4) + iVar7;
    uVar6 = 0;
    if (lStack_60 != 0) {
      *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
    }
  }
  else {
    if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) == 0) {
      return 6;
    }
    uStack_50 = 0;
    lStack_60 = 0;
    iVar7 = *(int *)(param_1 + 0x80);
    iVar2 = *piVar1 + iVar7 * 2;
    uVar3 = *(int *)(param_2 + 0x9c) + iVar7 * 2;
    uStack_70 = CONCAT44(uVar3,iVar2);
    uStack_68 = (ulong)uVar3;
    uStack_58 = 0x200ff;
    lVar4 = lVar5;
    FUN_1097539a8(lVar5,(long)(int)uVar3,0,iVar2,0,&uStack_44);
    uVar6 = (ulong)uStack_44;
    lStack_60 = lVar4;
    if (uStack_44 == 0) {
      puStack_d8 = &uStack_70;
      uStack_78 = *(undefined4 *)(param_1 + 0x80);
      uStack_c8 = 8;
      uStack_74 = *(undefined2 *)(param_1 + 0x84);
      uVar6 = *(ulong *)(param_1 + 0x68);
      piStack_d0 = piVar1;
      (**(code **)(param_1 + 0x70))(uVar6,&puStack_d8);
      if ((int)uVar6 == 0) goto LAB_1097712d8;
    }
    if (lStack_60 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5);
    }
  }
  return uVar6;
}



/* Entry: 1097713e0; end: 109771427;  */

undefined8 FUN_1097713e0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  (*(code *)param_1[1])(param_1,8);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    *plVar1 = (long)param_1;
  }
  *param_2 = plVar1;
  return uVar2;
}



/* Entry: 109771428; end: 109771433;  */

void FUN_109771428(void)

{
  return;
}



/* Entry: 109771434; end: 10977158b;  */

long * FUN_109771434(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lStack_b8;
  uint uStack_b0;
  uint uStack_ac;
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
  
  plVar7 = (long *)0x6;
  if ((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) {
    if (*(int *)(param_2 + 2) == 8) {
      plVar6 = (long *)param_2[1];
      if ((plVar6 != (long *)0x0) && (puVar4 = (uint *)*param_2, puVar4 != (uint *)0x0)) {
        lVar3 = *param_1;
        if (lVar3 == 0) {
          plVar7 = (long *)0x20;
        }
        else if (0xffffffe0 < *(int *)(param_2 + 0xc) - 0x21U) {
          lVar5 = 0;
          uStack_ac = *puVar4;
          uStack_b0 = puVar4[1];
          if ((uStack_b0 != 0) && (uStack_ac != 0)) {
            uVar2 = (ulong)uStack_b0 * 0x20;
            uVar1 = 0;
            if ((ulong)uStack_b0 != 0) {
              uVar1 = 0x7fffffff / uVar2;
            }
            if (uVar1 < uStack_ac) {
              return (long *)0xa;
            }
            lVar5 = lVar3;
            (**(code **)(lVar3 + 8))(lVar3,uVar2 * uStack_ac);
            if (lVar5 == 0) {
              return (long *)0x40;
            }
            uStack_ac = *puVar4;
            uStack_b0 = puVar4[1];
          }
          uStack_60 = param_2[9];
          uStack_68 = param_2[8];
          uStack_50 = param_2[0xb];
          uStack_58 = param_2[10];
          uStack_48 = param_2[0xc];
          uStack_a0 = param_2[1];
          uStack_a8 = *param_2;
          uStack_90 = param_2[3];
          uStack_98 = param_2[2];
          uStack_80 = param_2[5];
          uStack_88 = param_2[4];
          uStack_70 = param_2[7];
          uStack_78 = param_2[6];
          lStack_b8 = lVar5;
          FUN_1097718bc(plVar6,&lStack_b8);
          if ((int)plVar6 == 0) {
            plVar6 = &lStack_b8;
            FUN_109771aa0();
            if ((int)plVar6 == 0) {
              plVar6 = &lStack_b8;
              func_0x000109771f50();
              if ((int)plVar6 == 0) {
                plVar6 = &lStack_b8;
                FUN_109772190(plVar6,puVar4);
              }
            }
          }
          plVar7 = plVar6;
          if (lVar5 != 0) {
            (**(code **)(lVar3 + 0x10))(lVar3,lVar5);
          }
        }
      }
    }
    else {
      plVar7 = (long *)0x61;
    }
  }
  return plVar7;
}



/* Entry: 10977158c; end: 10977159b;  */

void FUN_10977158c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109771598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(*param_1,param_1);
  return;
}



/* Entry: 10977159c; end: 1097715e3;  */

undefined8 FUN_10977159c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_1;
  (*(code *)param_1[1])(param_1,8);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0;
    *plVar1 = (long)param_1;
  }
  *param_2 = plVar1;
  return uVar2;
}



/* Entry: 1097715e4; end: 1097715ef;  */

void FUN_1097715e4(void)

{
  return;
}



/* Entry: 1097715f0; end: 10977172b;  */

void FUN_1097715f0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  long *plVar5;
  ulong uVar6;
  short *psVar7;
  long *plVar8;
  long *plStack_58;
  
  if ((((((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) &&
        (psVar7 = (short *)param_2[1], psVar7 != (short *)0x0)) &&
       ((psVar7[1] != 0 && (*psVar7 != 0)))) &&
      ((*(long *)(psVar7 + 0xc) != 0 &&
       ((*(long *)(psVar7 + 4) != 0 && (0xffffffe0 < *(int *)(param_2 + 0xc) - 0x21U)))))) &&
     (plVar8 = (long *)*param_1, plVar8 != (long *)0x0)) {
    psVar4 = psVar7;
    FUN_10975714c();
    bVar1 = *(byte *)((long)param_2 + 100);
    bVar2 = *(byte *)((long)param_2 + 0x65);
    plVar5 = plVar8;
    (*(code *)plVar8[1])(plVar8,0x10);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)plVar8;
      plVar5[1] = 0;
      plStack_58 = plVar5;
      func_0x00010975687c(psVar7,&PTR_FUN_110b0ca58,plVar5);
      if ((int)psVar7 == 0) {
        uVar6 = (ulong)psVar4 & 0xffffffff | (ulong)bVar1 << 0x20 | (ulong)bVar2 << 0x28;
        if (*(char *)((long)param_2 + 0x66) == '\0') {
          func_0x000109772780(uVar6,0,plVar5,*(undefined4 *)(param_2 + 0xc),*param_2);
          iVar3 = (int)uVar6;
        }
        else {
          FUN_109772364();
          iVar3 = (int)uVar6;
        }
        if (iVar3 == 0) {
          FUN_109773638(&plStack_58);
        }
      }
    }
  }
  return;
}



/* Entry: 10977172c; end: 10977173b;  */

void FUN_10977172c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109771738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(*param_1,param_1);
  return;
}



/* Entry: 10977173c; end: 1097718bb;  */

void FUN_10977173c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strcmp(param_2,&UNK_10f57fb11);
  if ((int)uVar1 == 0) {
    if (0xffffffe0 < *param_3 - 0x21U) {
      *(int *)(param_1 + 0x80) = *param_3;
    }
  }
  else {
    uVar1 = param_2;
    _strcmp(param_2,&UNK_10f57fb18);
    if ((int)uVar1 == 0) {
      *(bool *)(param_1 + 0x84) = *param_3 != 0;
    }
    else {
      uVar1 = param_2;
      _strcmp(param_2,&UNK_10f57fb22);
      if ((int)uVar1 == 0) {
        *(bool *)(param_1 + 0x85) = *param_3 != 0;
      }
      else {
        _strcmp(param_2,&UNK_10f57fb29);
        if ((int)param_2 == 0) {
          *(char *)(param_1 + 0x86) = (char)*param_3;
        }
      }
    }
  }
  return;
}



/* Entry: 1097718bc; end: 109771a9f;  */

undefined8 FUN_1097718bc(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  
  uVar4 = *(uint *)(param_2 + 1);
  uVar14 = (ulong)uVar4;
  iVar7 = param_1[1];
  if (iVar7 <= (int)uVar4) {
    uVar5 = *(uint *)((long)param_2 + 0xc);
    iVar8 = *param_1;
    if ((iVar8 <= (int)uVar5) && (cVar6 = *(char *)((long)param_1 + 0x1a), cVar6 != '\0')) {
      iVar1 = (int)(uVar4 - iVar7) / 2;
      iVar2 = (int)(uVar5 - iVar8) / 2;
      puVar15 = (undefined8 *)*param_2;
      lVar16 = *(long *)(param_1 + 4);
      if (cVar6 == '\x01') {
        if (0 < (int)uVar5) {
          uVar17 = 0;
          do {
            if (0 < (int)uVar4) {
              uVar9 = uVar17 - (long)iVar2;
              puVar10 = puVar15;
              uVar11 = -(long)iVar1;
              uVar13 = uVar14;
              do {
                puVar10[1] = 0;
                *puVar10 = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                if ((uVar11 < 0x8000000000000000 && (long)uVar11 < (long)iVar7) &&
                    (uVar9 < 0x8000000000000000 && (long)uVar9 < (long)iVar8)) {
                  uVar3 = (uint)uVar9;
                  if (*(char *)((long)param_2 + 0x75) != '\0') {
                    uVar3 = iVar8 + ~(uint)uVar9;
                  }
                  *(char *)(puVar10 + 3) =
                       -((*(byte *)(lVar16 + (int)(uVar3 * param_1[2] + ((uint)uVar11 >> 3))) >>
                          (ulong)(((uint)uVar11 ^ 0xffffffff) & 7) & 1) != 0);
                }
                uVar11 = uVar11 + 1;
                puVar10 = puVar10 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar17 = uVar17 + 1;
            puVar15 = puVar15 + uVar14 * 4;
          } while (uVar17 != uVar5);
        }
      }
      else {
        if (cVar6 != '\x02') {
          return 7;
        }
        if (0 < (int)uVar5) {
          uVar17 = 0;
          do {
            if (0 < (int)uVar4) {
              uVar9 = uVar17 - (long)iVar2;
              puVar10 = puVar15;
              uVar11 = -(long)iVar1;
              lVar12 = lVar16 - iVar1;
              uVar13 = uVar14;
              do {
                puVar10[1] = 0;
                *puVar10 = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                if ((uVar11 < 0x8000000000000000 && (long)uVar11 < (long)iVar7) &&
                    (uVar9 < 0x8000000000000000 && (long)uVar9 < (long)iVar8)) {
                  uVar3 = (uint)uVar9;
                  if (*(char *)((long)param_2 + 0x75) != '\0') {
                    uVar3 = iVar8 + ~(uint)uVar9;
                  }
                  *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(lVar12 + (int)(uVar3 * iVar7));
                }
                lVar12 = lVar12 + 1;
                uVar11 = uVar11 + 1;
                puVar10 = puVar10 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar17 = uVar17 + 1;
            puVar15 = puVar15 + uVar14 * 4;
          } while (uVar17 != uVar5);
        }
      }
      return 0;
    }
  }
  return 6;
}



/* Entry: 109771aa0; end: 10977218f;  */

undefined8 FUN_109771aa0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lStack_70;
  long lStack_68;
  
  lVar19 = *param_1;
  if (lVar19 == 0) {
    uVar10 = 6;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    uVar24 = (ulong)uVar5;
    if (0 < (int)uVar5) {
      uVar22 = 0;
      uVar6 = *(uint *)(param_1 + 1);
      uVar21 = (ulong)uVar6;
      lVar1 = (long)(int)uVar6;
      uVar23 = (long)(int)uVar6 - 1;
      do {
        if (0 < (int)uVar6) {
          uVar20 = 0;
          lVar2 = uVar22 + 1;
          do {
            lVar13 = uVar20 + uVar22 * (long)(int)uVar6;
            puVar3 = (undefined4 *)(lVar19 + lVar13 * 0x20);
            bVar7 = *(byte *)(puVar3 + 6);
            if (bVar7 == 0) {
LAB_109771c34:
              *puVar3 = 0x1900000;
              *(undefined8 *)(puVar3 + 4) = 0xc80000;
              *(undefined8 *)(puVar3 + 2) = 0xc80000;
            }
            else {
              if (bVar7 == 0xff) {
                if (uVar22 == 0) {
                  iVar18 = 0;
                }
                else {
                  if (*(char *)(puVar3 + lVar1 * -8 + 6) == '\0') goto LAB_109771c48;
                  iVar18 = 1;
                }
                if (lVar2 < (long)uVar24) {
                  if (*(char *)(puVar3 + uVar21 * 8 + 6) == '\0') goto LAB_109771c48;
                  iVar18 = iVar18 + 1;
                }
                if (uVar20 == 0) {
LAB_109771ba4:
                  if ((long)uVar20 < (long)uVar23) {
                    if (*(char *)(puVar3 + 0xe) == '\0') goto LAB_109771c48;
                    iVar18 = iVar18 + 1;
                  }
                  if ((uVar22 != 0) && (uVar20 != 0)) {
                    if (*(char *)(puVar3 + lVar1 * -8 + -2) == '\0') goto LAB_109771c60;
                    iVar18 = iVar18 + 1;
                  }
                  if ((uVar22 != 0) && ((long)uVar20 < (long)uVar23)) {
                    if (*(char *)(puVar3 + lVar1 * -8 + 0xe) == '\0') goto LAB_109771c48;
                    iVar18 = iVar18 + 1;
                  }
                  if ((lVar2 < (long)uVar24) && (uVar20 != 0)) {
                    if (*(char *)(puVar3 + uVar21 * 8 + -2) == '\0') goto LAB_109771c60;
                    iVar18 = iVar18 + 1;
                  }
                  if ((((lVar2 < (long)uVar24) && ((long)uVar20 < (long)uVar23)) &&
                      (*(char *)(puVar3 + uVar21 * 8 + 0xe) != '\0')) && (iVar18 == 7))
                  goto LAB_109771c34;
                  goto LAB_109771c48;
                }
                if (*(char *)(puVar3 + -2) != '\0') {
                  iVar18 = iVar18 + 1;
                  goto LAB_109771ba4;
                }
LAB_109771c60:
                lVar14 = 0;
                if (((uVar22 == 0) || ((long)uVar23 <= (long)uVar20)) ||
                   ((long)(ulong)(uVar5 - 1) <= (long)uVar22)) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = lVar13 * 0x20;
                  lStack_70 = (((ulong)*(byte *)(puVar3 + (1 - (long)(int)uVar6) * 8 + 6) * 0x100 +
                               (ulong)*(byte *)(puVar3 + (long)(int)~uVar6 * 8 + 6) * -0x100) -
                              (((ulong)*(byte *)(lVar19 + -8 + lVar13) * 0x16a0900 + 0x8000 >> 0x10)
                              + (ulong)*(byte *)(puVar3 + (uVar23 & 0xffffffff) * 8 + 6) * 0x100)) +
                              ((ulong)*(byte *)(lVar19 + 0x38 + lVar13) * 0x16a0900 + 0x8000 >> 0x10
                              ) + (ulong)*(byte *)(puVar3 + uVar21 * 8 + 0xe) * 0x100;
                  lStack_68 = ((ulong)*(byte *)(puVar3 + (uVar23 & 0xffffffff) * 8 + 6) * 0x100 -
                              ((ulong)*(byte *)(puVar3 + (1 - (long)(int)uVar6) * 8 + 6) * 0x100 +
                               ((ulong)*(byte *)(puVar3 + lVar1 * -8 + 6) * 0x16a0900 + 0x8000 >>
                               0x10) + (ulong)*(byte *)(puVar3 + (long)(int)~uVar6 * 8 + 6) * 0x100)
                              ) + (ulong)*(byte *)(puVar3 + uVar21 * 8 + 0xe) * 0x100 +
                              ((ulong)*(byte *)(puVar3 + uVar21 * 8 + 6) * 0x16a0900 + 0x8000 >>
                              0x10);
                  FUN_109753604(&lStack_70);
                  uVar16 = (uint)((ulong)bVar7 * 0x100);
                  if ((lStack_70 == 0) || (lStack_68 == 0)) {
                    iVar18 = 0x8000 - uVar16;
                  }
                  else {
                    uVar12 = (uint)lStack_70;
                    uVar4 = -uVar12;
                    if (-1 < (int)uVar12) {
                      uVar4 = uVar12;
                    }
                    uVar11 = (uint)lStack_68;
                    uVar12 = -uVar11;
                    if (-1 < (int)uVar11) {
                      uVar12 = uVar11;
                    }
                    uVar11 = uVar4;
                    if (uVar12 <= uVar4) {
                      uVar11 = uVar12;
                    }
                    uVar17 = (ulong)uVar11;
                    uVar11 = uVar4;
                    if (uVar4 <= uVar12) {
                      uVar11 = uVar12;
                    }
                    uVar15 = (ulong)uVar11;
                    if (uVar11 != 0) {
                      uVar8 = 0;
                      if (uVar15 != 0) {
                        uVar8 = ((ulong)(uVar11 >> 1) + uVar17 * 0x10000) / uVar15;
                      }
                      iVar18 = (int)(uVar8 >> 1);
                      if (iVar18 <= (int)uVar16) {
                        if (uVar16 < 0x10000U - iVar18) {
                          lVar13 = uVar15 * (long)(int)(0x8000 - uVar16);
                          iVar18 = (int)((ulong)(lVar13 + (lVar13 >> 0x3f) + 0x8000) >> 0x10);
                        }
                        else {
                          uVar17 = (uVar17 * (0x10000 - uVar16) + 0x8000 >> 0x10) * uVar15 + 0x8000
                                   >> 0xf;
                          uVar16 = (uint)uVar17 & 0xfffffffe;
                          if ((uVar17 & 0xfffffffe) != 0) {
                            uVar11 = 1 << (ulong)(0x30U - (int)LZCOUNT(uVar16) >> 1 & 0x1f);
                            do {
                              uVar16 = uVar11;
                              iVar18 = 0;
                              if ((ulong)uVar16 != 0) {
                                iVar18 = (int)(((uVar17 & 0xfffffffe) * 0x10000 - 1) / (ulong)uVar16
                                              );
                              }
                              uVar11 = uVar16 + iVar18 + 1 >> 1;
                            } while (uVar11 != uVar16);
                          }
                          iVar18 = uVar16 - (uVar12 + uVar4 >> 1);
                        }
                        goto LAB_109771e44;
                      }
                    }
                    uVar17 = (uVar17 * (ulong)bVar7 * 0x100 + 0x8000 >> 0x10) * uVar15 + 0x8000 >>
                             0xf;
                    uVar16 = (uint)uVar17 & 0xfffffffe;
                    if ((uVar17 & 0xfffffffe) != 0) {
                      uVar11 = 1 << (ulong)(0x30U - (int)LZCOUNT(uVar16) >> 1 & 0x1f);
                      do {
                        uVar16 = uVar11;
                        iVar18 = 0;
                        if ((ulong)uVar16 != 0) {
                          iVar18 = (int)(((uVar17 & 0xfffffffe) * 0x10000 - 1) / (ulong)uVar16);
                        }
                        uVar11 = uVar16 + iVar18 + 1 >> 1;
                      } while (uVar11 != uVar16);
                    }
                    iVar18 = (uVar12 + uVar4 >> 1) - uVar16;
                  }
LAB_109771e44:
                  lVar13 = lStack_70 * iVar18;
                  lVar13 = lVar13 + (lVar13 >> 0x3f) + 0x8000 >> 0x10;
                  lVar14 = lStack_68 * iVar18;
                  lVar14 = lVar14 + (lVar14 >> 0x3f) + 0x8000 >> 0x10;
                }
              }
              else {
LAB_109771c48:
                if (uVar20 != 0) goto LAB_109771c60;
                lVar14 = 0;
                lVar13 = 0;
              }
              plVar9 = (long *)(puVar3 + 2);
              *plVar9 = lVar13;
              *(long *)(puVar3 + 4) = lVar14;
              FUN_1097531c8();
              *puVar3 = (int)plVar9;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar21);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar24);
    }
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 109772190; end: 1097722db;  */

undefined8 FUN_109772190(long *param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  
  uVar5 = param_2[1];
  uVar12 = (ulong)uVar5;
  if (uVar5 == *(uint *)(param_1 + 1)) {
    uVar6 = *param_2;
    if (uVar6 == *(uint *)((long)param_1 + 0xc)) {
      if (0 < (int)uVar6) {
        lVar13 = 0;
        uVar14 = 0;
        pbVar15 = *(byte **)(param_2 + 4);
        uVar7 = (int)param_1[0xe] * 0x10000;
        uVar16 = (ulong)(int)uVar7;
        uVar1 = -uVar16;
        if (-1 < (long)uVar16) {
          uVar1 = uVar16;
        }
        do {
          lVar8 = lVar13;
          pbVar9 = pbVar15;
          uVar16 = uVar12;
          if (0 < (int)uVar5) {
            do {
              uVar11 = *(uint *)(*param_1 + lVar8);
              uVar4 = uVar11;
              if ((int)uVar7 <= (int)uVar11) {
                uVar4 = uVar7;
              }
              uVar3 = uVar7;
              if (-1 < (int)uVar11) {
                uVar3 = uVar4;
              }
              uVar4 = -uVar3;
              if ((byte)((uint *)(*param_1 + lVar8))[6] < 0x7f !=
                  (*(char *)((long)param_1 + 0x74) == '\0')) {
                uVar4 = uVar3;
              }
              lVar10 = (long)(int)uVar4;
              if (uVar7 == 0) {
                uVar11 = 0x7fffffff;
              }
              else {
                lVar2 = -lVar10;
                if (-1 < lVar10) {
                  lVar2 = lVar10;
                }
                uVar11 = 0;
                if (uVar1 != 0) {
                  uVar11 = (uint)(((uVar1 >> 1) + lVar2 * 0x10000) / uVar1);
                }
              }
              uVar3 = -uVar11;
              if (-1 < (int)(uVar4 ^ uVar7)) {
                uVar3 = uVar11;
              }
              uVar4 = -uVar3;
              if (-1 < (int)uVar3) {
                uVar4 = uVar3;
              }
              uVar11 = 0x7f;
              if ((uVar4 & 0xffff0000) == 0 || (int)uVar3 < 1) {
                uVar11 = uVar4 >> 9;
              }
              uVar4 = uVar11;
              if (0x7f < uVar11) {
                uVar4 = 0x80;
              }
              if ((int)uVar3 < 0) {
                uVar11 = -uVar4;
              }
              *pbVar9 = (byte)uVar11 ^ 0x80;
              uVar16 = uVar16 - 1;
              lVar8 = lVar8 + 0x20;
              pbVar9 = pbVar9 + 1;
            } while (uVar16 != 0);
          }
          uVar14 = uVar14 + 1;
          pbVar15 = pbVar15 + uVar12;
          lVar13 = lVar13 + uVar12 * 0x20;
        } while (uVar14 != uVar6);
        return 0;
      }
      return 0;
    }
  }
  return 6;
}



/* Entry: 1097722dc; end: 109772363;  */

void FUN_1097722dc(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lStack_30;
  long lStack_28;
  
  iVar3 = (int)&lStack_30;
  piVar1 = param_1 + (long)(param_4 * param_3) * 8 + (long)param_2 * 8;
  iVar2 = *param_1;
  if (*piVar1 + -0x10000 < iVar2) {
    lStack_30 = *(long *)(piVar1 + 2) + (long)(param_2 << 0x10);
    lStack_28 = *(long *)(piVar1 + 4) + (long)(param_3 << 0x10);
    FUN_1097531c8();
    if (iVar3 < iVar2) {
      *param_1 = iVar3;
      *(long *)(param_1 + 4) = lStack_28;
      *(long *)(param_1 + 2) = lStack_30;
    }
  }
  return;
}



/* Entry: 109772364; end: 109773637;  */

ulong FUN_109772364(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                   uint *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  byte bVar23;
  byte bVar24;
  long *plVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  int *piStack_78;
  long lStack_70;
  uint uStack_64;
  
  uStack_64 = 0;
  uVar29 = 6;
  if (((param_3 != (undefined8 *)0x0) && (param_5 != (uint *)0x0)) &&
     (piVar26 = (int *)*param_3, piVar26 != (int *)0x0)) {
    plVar25 = param_3 + 1;
    uVar14 = 0;
    for (lVar17 = *plVar25; iVar12 = (int)uVar14, lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x18)) {
      uVar14 = (ulong)(iVar12 + 1);
    }
    uVar3 = *param_5;
    uVar4 = param_5[1];
    piVar8 = piVar26;
    piStack_78 = piVar26;
    FUN_1097537e4(piVar26,uVar14 * 0x28,&uStack_64);
    uVar29 = (ulong)uStack_64;
    if (uStack_64 == 0) {
      piVar9 = piVar26;
      FUN_1097537e4(piVar26,uVar14 << 2,&uStack_64);
      uVar29 = (ulong)uStack_64;
      if (uStack_64 == 0) {
        if (iVar12 == 0) {
          lVar17 = 0;
        }
        else {
          uVar18 = 0;
          lVar17 = 0;
          plVar15 = plVar25;
          do {
            lVar28 = *plVar15;
            piVar11 = piVar8 + uVar18 * 10;
            if (piVar8 != (int *)0x0) {
              piVar11[8] = 0;
              piVar11[9] = 0;
              piVar11[2] = 0;
              piVar11[3] = 0;
              piVar11[0] = 0;
              piVar11[1] = 0;
              piVar11[6] = 0;
              piVar11[7] = 0;
              piVar11[4] = 0;
              piVar11[5] = 0;
            }
            uVar5 = *param_5;
            *(undefined8 *)piVar11 = *(undefined8 *)param_5;
            uVar6 = param_5[2];
            piVar11[2] = uVar6;
            *(short *)(piVar11 + 6) = (short)param_5[6];
            *(undefined1 *)((long)piVar11 + 0x1a) = *(undefined1 *)((long)param_5 + 0x1a);
            piVar10 = piVar26;
            FUN_1097537e4(piVar26,uVar6 * uVar5,&uStack_64);
            *(int **)(piVar11 + 4) = piVar10;
            uVar29 = (ulong)uStack_64;
            if (uStack_64 != 0) goto LAB_1097726f8;
            if (lVar28 == 0) {
LAB_109772590:
              iVar13 = 0;
            }
            else {
              plVar15 = *(long **)(lVar28 + 0x10);
              iVar13 = 0;
              if (plVar15 != (long *)0x0) {
                iVar16 = 0;
                do {
                  iVar13 = (int)plVar15[8];
                  if (iVar13 == 3) {
                    uVar19 = (plVar15[1] + plVar15[5]) * (plVar15[4] - *plVar15);
                    uVar29 = uVar19 + 0x3f;
                    if (-1 < (long)uVar19) {
                      uVar29 = uVar19;
                    }
                    lVar27 = plVar15[7];
                    uVar21 = (lVar27 + plVar15[5]) * (plVar15[6] - plVar15[4]);
                    uVar19 = uVar21 + 0x3f;
                    if (-1 < (long)uVar21) {
                      uVar19 = uVar21;
                    }
                    iVar16 = iVar16 + (int)(uVar29 >> 6) + (int)(uVar19 >> 6);
                    lVar20 = plVar15[2] - plVar15[6];
LAB_109772554:
                    lVar22 = 0x18;
                  }
                  else {
                    if (iVar13 == 2) {
                      lVar27 = plVar15[5];
                      uVar19 = (plVar15[1] + lVar27) * (plVar15[4] - *plVar15);
                      uVar29 = uVar19 + 0x3f;
                      if (-1 < (long)uVar19) {
                        uVar29 = uVar19;
                      }
                      iVar16 = iVar16 + (int)(uVar29 >> 6);
                      lVar20 = plVar15[2] - plVar15[4];
                      goto LAB_109772554;
                    }
                    if (iVar13 != 1) goto LAB_109772590;
                    lVar27 = plVar15[3];
                    lVar20 = plVar15[2] - *plVar15;
                    lVar22 = 8;
                  }
                  uVar19 = (*(long *)((long)plVar15 + lVar22) + lVar27) * lVar20;
                  uVar29 = uVar19 + 0x3f;
                  if (-1 < (long)uVar19) {
                    uVar29 = uVar19;
                  }
                  iVar16 = iVar16 + (int)(uVar29 >> 6);
                  plVar15 = (long *)plVar15[9];
                } while (plVar15 != (long *)0x0);
                iVar13 = 1;
                if (iVar16 < 1) {
                  iVar13 = 2;
                }
              }
            }
            piVar9[uVar18] = iVar13;
            iVar16 = (int)param_1;
            plVar15 = (long *)(lVar28 + 0x18);
            lVar27 = *plVar15;
            *plVar15 = 0;
            uVar29 = param_1 & 0xffffff00ffffffff;
            lStack_70 = lVar28;
            func_0x000109772780(uVar29,iVar13 == 1 && iVar16 == 1 || iVar13 == 2 && iVar16 == 0,
                                &piStack_78,param_4,piVar11);
            uStack_64 = (uint)uVar29;
            if (uStack_64 != 0) goto LAB_1097726fc;
            *plVar15 = lVar27;
            *(long *)(lStack_70 + 0x18) = lVar17;
            if (iVar16 == 1) {
              if (piVar9[uVar18] == 1) {
                iVar13 = 2;
              }
              else {
                if (piVar9[uVar18] != 2) goto LAB_109772624;
                iVar13 = 1;
              }
              piVar9[uVar18] = iVar13;
            }
LAB_109772624:
            uVar18 = uVar18 + 1;
            lVar17 = lStack_70;
          } while (uVar18 != uVar14);
        }
        *plVar25 = lVar17;
        if (0 < (int)uVar3) {
          uVar29 = 0;
          lVar17 = *(long *)(param_5 + 4);
          do {
            if (0 < (int)uVar4) {
              uVar18 = 0;
              do {
                lVar28 = uVar18 + uVar29 * uVar4;
                bVar23 = 0;
                bVar24 = 0xff;
                piVar11 = piVar9;
                uVar19 = uVar14;
                plVar25 = (long *)(piVar8 + 4);
                if (iVar12 != 0) {
                  do {
                    bVar7 = *(byte *)(*plVar25 + lVar28);
                    bVar1 = bVar23;
                    if (bVar23 <= bVar7) {
                      bVar1 = bVar7;
                    }
                    bVar2 = bVar24;
                    if (bVar7 <= bVar24) {
                      bVar2 = bVar7;
                    }
                    if (*piVar11 != 1) {
                      bVar24 = bVar2;
                      bVar1 = bVar23;
                    }
                    bVar23 = bVar1;
                    uVar19 = uVar19 - 1;
                    piVar11 = piVar11 + 1;
                    plVar25 = plVar25 + 5;
                  } while (uVar19 != 0);
                }
                if (bVar24 <= bVar23) {
                  bVar23 = bVar24;
                }
                *(byte *)(lVar17 + lVar28) = bVar23 ^ -((param_1 & 0xff00000000) != 0);
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar4);
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar3);
        }
        uVar29 = 0;
      }
LAB_1097726f8:
      if (piVar9 != (int *)0x0) {
LAB_1097726fc:
        (**(code **)(piVar26 + 4))(piVar26,piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      if (iVar12 == 0) {
        uVar29 = 0x61;
      }
      else {
        lVar17 = 0x10;
        do {
          if (*(long *)((long)piVar8 + lVar17) != 0) {
            (**(code **)(piVar26 + 4))(piVar26);
          }
          *(undefined8 *)((long)piVar8 + lVar17) = 0;
          lVar17 = lVar17 + 0x28;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        (**(code **)(piVar26 + 4))(piVar26,piVar8);
      }
    }
  }
  return uVar29;
}



/* Entry: 109773638; end: 1097736ab;  */

void FUN_109773638(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = plVar1[1];
  if (plVar1[1] != 0) {
    do {
      lVar4 = *(long *)(lVar3 + 0x18);
      lStack_38 = lVar3;
      func_0x000109773ce0(lVar2,&lStack_38);
      lVar3 = lVar4;
    } while (lVar4 != 0);
    if (*param_1 == 0) goto LAB_109773694;
  }
  (**(code **)(lVar2 + 0x10))(lVar2);
LAB_109773694:
  *param_1 = 0;
  return;
}



/* Entry: 1097736ac; end: 1097737df;  */

undefined8 FUN_1097736ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 6;
    }
    else {
      (*(code *)puVar1[1])(puVar1,0x20);
      if (puVar1 == (undefined8 *)0x0) {
        uVar2 = 0x40;
      }
      else {
        uVar2 = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        uVar3 = *param_1;
        puVar1[1] = param_1[1];
        *puVar1 = uVar3;
        puVar1[3] = param_2[1];
        param_2[1] = puVar1;
      }
    }
    return uVar2;
  }
  return 6;
}



/* Entry: 1097737e0; end: 109773d4b;  */

undefined8 FUN_1097737e0(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = 6;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    plVar3 = (long *)*param_3;
    plVar1 = (long *)param_3[1];
    if (((*plVar1 == *param_1) && (plVar1[1] == param_1[1])) ||
       ((*param_1 == *param_2 && (param_1[1] == param_2[1])))) {
      func_0x000109773724(param_2,param_3);
      uVar2 = 0;
    }
    else if (plVar3 == (long *)0x0) {
      uVar2 = 6;
    }
    else {
      (*(code *)plVar3[1])(plVar3,0x50);
      if (plVar3 == (long *)0x0) {
        uVar2 = 0x40;
      }
      else {
        uVar2 = 0;
        plVar3[7] = 0;
        plVar3[6] = 0;
        plVar3[9] = 0;
        plVar3[8] = 0;
        *(undefined4 *)(plVar3 + 8) = 2;
        plVar3[3] = 0;
        plVar3[2] = 0;
        plVar3[5] = 0;
        plVar3[4] = 0;
        plVar3[1] = 0;
        *plVar3 = 0;
        lVar4 = *plVar1;
        plVar3[1] = plVar1[1];
        *plVar3 = lVar4;
        lVar4 = *param_1;
        plVar3[5] = param_1[1];
        plVar3[4] = lVar4;
        lVar4 = *param_2;
        plVar3[3] = param_2[1];
        plVar3[2] = lVar4;
        plVar3[9] = plVar1[2];
        plVar1[2] = (long)plVar3;
        lVar4 = *param_2;
        plVar1[1] = param_2[1];
        *plVar1 = lVar4;
      }
    }
  }
  return uVar2;
}



/* Entry: 109773d4c; end: 109773e3b;  */

void FUN_109773d4c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)param_1[2] + (int)*param_1;
  iVar5 = (int)param_1[3] + (int)param_1[1];
  iVar3 = (int)param_1[4] + (int)param_1[2];
  iVar4 = (int)param_1[5] + (int)param_1[3];
  iVar7 = iVar3 + iVar1;
  iVar8 = iVar4 + iVar5;
  iVar2 = (int)param_1[4] + (int)param_1[6];
  iVar6 = (int)param_1[5] + (int)param_1[7];
  iVar3 = iVar2 + iVar3;
  iVar4 = iVar6 + iVar4;
  param_1[3] = (long)(iVar5 / 2);
  param_1[2] = (long)(iVar1 / 2);
  param_1[5] = (long)((int)(iVar8 + (-(uint)(iVar8 < 0) >> 0x1e)) >> 2);
  param_1[4] = (long)((int)(iVar7 + (-(uint)(iVar7 < 0) >> 0x1e)) >> 2);
  param_1[0xb] = (long)(iVar6 / 2);
  param_1[10] = (long)(iVar2 / 2);
  param_1[0xd] = param_1[7];
  param_1[0xc] = param_1[6];
  param_1[7] = (long)((int)(iVar8 + iVar4 + (-(uint)(iVar8 + iVar4 < 0) >> 0x1d)) >> 3);
  param_1[6] = (long)((int)(iVar7 + iVar3 + (-(uint)(iVar7 + iVar3 < 0) >> 0x1d)) >> 3);
  param_1[9] = (long)((int)(iVar4 + (-(uint)(iVar4 < 0) >> 0x1e)) >> 2);
  param_1[8] = (long)((int)(iVar3 + (-(uint)(iVar3 < 0) >> 0x1e)) >> 2);
  return;
}



/* Entry: 109773e3c; end: 109773ebf;  */

undefined8 FUN_109773e3c(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar4 = param_2;
  if ((param_1 + 4U <= *(ulong *)(param_2 + 200)) &&
     (uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8,
     0x105 < uVar2 && param_1 + (ulong)uVar2 <= *(ulong *)(param_2 + 200))) {
    if (*(int *)(param_2 + 0xd0) != 0) {
      lVar4 = 0;
      do {
        if (*(uint *)(param_2 + 0xd8) <= (uint)*(byte *)(param_1 + 6 + lVar4)) {
          lVar4 = 0x10;
          FUN_109753e48(param_2);
          goto LAB_109773eb4;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 != 0x100);
    }
    return 0;
  }
LAB_109773eb4:
  puVar3 = (ulong *)0x8;
  FUN_109753e48();
  lVar4 = *(long *)(lVar4 + 0x18);
  puVar3[1] = 0;
  uVar1 = *(ushort *)(lVar4 + 4);
  *puVar3 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109773ec0; end: 109773edb;  */

undefined8 FUN_109773ec0(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109773edc; end: 109773f5f;  */

void FUN_109773edc(void)

{
  func_0x00010977e978();
  return;
}



/* Entry: 109773f60; end: 10977407f;  */

short FUN_109773f60(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  
  uVar14 = *param_2 + 1;
  if (uVar14 >> 0x10 != 0) {
LAB_109774064:
    iVar10 = 0;
    sVar8 = 0;
LAB_10977406c:
    *param_2 = iVar10;
    return sVar8;
  }
  puVar13 = *(ushort **)(param_1 + 0x18);
LAB_109773f88:
  puVar9 = puVar13;
  func_0x00010977e978(puVar13,uVar14);
  if (puVar9 != (ushort *)0x0) {
    uVar3 = *puVar9;
    uVar5 = (uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8;
    uVar4 = puVar9[3];
    uVar1 = uVar14 & 0xff;
    if ((uVar14 < 0x100) && (uVar5 + ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) <= uVar1)) {
      uVar1 = 0x100;
      goto LAB_10977405c;
    }
    uVar6 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
    if (uVar6 != 0) {
      uVar7 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      uVar2 = uVar1;
      if (uVar7 > uVar1 || uVar1 - uVar7 == 0) {
        uVar2 = uVar7;
      }
      uVar11 = 0;
      if (uVar7 <= uVar1) {
        uVar11 = uVar1 - uVar7;
      }
      iVar10 = uVar2 + (uVar14 & 0xff00);
      if (uVar11 < uVar5) {
        puVar12 = (ushort *)((long)(puVar9 + 3) + (ulong)(uVar6 + uVar11 * 2));
        do {
          uVar3 = *puVar12 >> 8 | *puVar12 << 8;
          sVar8 = uVar3 + (puVar9[2] >> 8 | puVar9[2] << 8);
          if (uVar3 != 0 && sVar8 != 0) goto LAB_10977406c;
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar11 < uVar5);
      }
      uVar14 = iVar10 - (uint)(uVar5 != 0);
      goto LAB_10977404c;
    }
    if (uVar14 == 0x100) goto LAB_109774064;
  }
LAB_10977404c:
  uVar1 = (uVar14 & 0xffffff00) + 0x100;
  if (uVar14 < 0x100) {
    uVar1 = uVar14 + 1;
  }
LAB_10977405c:
  uVar14 = uVar1;
  if (0xffff < uVar14) goto LAB_109774064;
  goto LAB_109773f88;
}



/* Entry: 109774080; end: 109774207;  */

undefined8 FUN_109774080(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  long lVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  
  lVar11 = param_2;
  if ((param_1 + 4U <= *(ulong *)(param_2 + 200)) &&
     (uVar13 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8,
     pcVar3 = (char *)(param_1 + (ulong)uVar13),
     0x205 < uVar13 && pcVar3 <= *(char **)(param_2 + 200))) {
    lVar14 = 0;
    uVar13 = 0;
    do {
      puVar4 = (undefined1 *)(param_1 + 6 + lVar14);
      bVar5 = puVar4[1];
      if (1 < *(uint *)(param_2 + 0xd0) && (bVar5 & 7) != 0) goto LAB_1097741f0;
      uVar7 = (uint)(ushort)(CONCAT11(*puVar4,bVar5) >> 3);
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
      lVar14 = lVar14 + 2;
      uVar13 = uVar7;
    } while ((int)lVar14 != 0x200);
    pcVar2 = (char *)((long)(param_1 + 0x206U) + (ulong)(uVar7 << 3) + 8);
    if (pcVar2 <= *(char **)(param_2 + 200)) {
      uVar13 = 0;
      puVar17 = (ushort *)(param_1 + 0x206U);
      do {
        uVar8 = (uint)(puVar17[1] >> 8) | (puVar17[1] & 0xff00ff) << 8;
        puVar16 = puVar17 + 4;
        if (uVar8 != 0) {
          uVar6 = puVar17[3];
          if ((1 < *(uint *)(param_2 + 0xd0)) &&
             (((char)*puVar17 != '\0' || (0x100 - *(byte *)((long)puVar17 + 1) < uVar8)))) break;
          uVar9 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
          if (uVar9 != 0) {
            pcVar1 = (char *)((long)(puVar17 + 3) + (ulong)uVar9);
            if (pcVar1 < pcVar2 || pcVar3 < pcVar1 + (uVar8 << 1)) goto LAB_1097741fc;
            if (*(int *)(param_2 + 0xd0) != 0) {
              puVar15 = puVar16;
              do {
                puVar16 = puVar15 + 1;
                uVar6 = *puVar15 >> 8 | *puVar15 << 8;
                if ((uVar6 != 0) &&
                   (*(uint *)(param_2 + 0xd8) <=
                    (uint)(ushort)(uVar6 + (puVar17[2] >> 8 | puVar17[2] << 8)))) {
                  lVar11 = 0x10;
                  FUN_109753e48(param_2,0x10);
                  goto LAB_1097741f0;
                }
                puVar15 = puVar15 + 1;
              } while (puVar15 < (ushort *)((long)puVar17 + (ulong)(uVar8 << 1) + 8));
            }
          }
        }
        bVar10 = uVar13 == uVar7;
        uVar13 = uVar13 + 1;
        puVar17 = puVar16;
        if (bVar10) {
          return 0;
        }
      } while( true );
    }
  }
LAB_1097741f0:
  param_2 = 8;
  FUN_109753e48(lVar11);
LAB_1097741fc:
  puVar12 = (ulong *)0x9;
  FUN_109753e48();
  lVar11 = *(long *)(param_2 + 0x18);
  puVar12[1] = 2;
  uVar6 = *(ushort *)(lVar11 + 4);
  *puVar12 = (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109774208; end: 10977424b;  */

undefined8 FUN_109774208(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 2;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 10977424c; end: 1097742a7;  */

void FUN_10977424c(undefined8 *param_1,uint param_2)

{
  uint uStack_14;
  
  if (param_2 >> 0x10 == 0) {
    uStack_14 = param_2;
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      FUN_10977ebb8(param_1,&uStack_14,0);
    }
    else {
      FUN_10977e9d8(*param_1,param_1[3],&uStack_14,0);
    }
  }
  return;
}



/* Entry: 1097742a8; end: 10977433f;  */

/* WARNING: Removing unreachable block (ram,0x00010977ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010977ebb0) */
/* WARNING: Removing unreachable block (ram,0x00010977eb90) */

uint FUN_1097742a8(long *param_1,uint *param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  ushort *puVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ushort *puVar29;
  ushort *puVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar14;
  
  if (0xfffe < *param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    lVar31 = *param_1;
    lVar13 = param_1[3];
    uVar10 = (uint)(*(ushort *)(lVar13 + 6) >> 8);
    uVar16 = (*(ushort *)(lVar13 + 6) & 0xff00ff) << 8;
    uVar32 = uVar10 | uVar16;
    if (uVar32 < 2) {
      uVar10 = 0;
    }
    else {
      uVar24 = 0;
      puVar3 = (ushort *)(*(long *)(lVar31 + 0x330) + *(long *)(lVar31 + 0x338));
      uVar32 = uVar32 >> 1;
      uVar18 = (ulong)(uVar10 & 0xfffe | uVar16);
      uVar16 = *param_2 + 1;
      puVar29 = (ushort *)(lVar13 + uVar18 + 0x10);
      puVar30 = (ushort *)(lVar13 + 0xe);
      do {
        uVar26 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
        uVar33 = (uint)(*puVar30 >> 8) | (*puVar30 & 0xff00ff) << 8;
        if (uVar16 <= uVar26) {
          uVar16 = uVar26;
        }
        pbVar4 = (byte *)((long)puVar29 + uVar18);
        puVar22 = (ushort *)(pbVar4 + uVar18);
        bVar9 = uVar32 - 1 <= uVar24;
        uVar10 = uVar16;
        while (uVar16 = uVar10, uVar16 <= uVar33) {
          uVar34 = (int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1];
          uVar27 = (uint)(*puVar22 >> 8) | (*puVar22 & 0xff00ff) << 8;
          bVar8 = puVar3 < (ushort *)((long)puVar22 + (ulong)uVar27 + 2);
          uVar10 = 0;
          if ((uVar27 == 0 || ((uVar26 != 0xffff || uVar33 != 0xffff) || !bVar9)) || !bVar8) {
            uVar10 = uVar27;
          }
          if ((uVar27 != 0 && ((uVar26 == 0xffff && uVar33 == 0xffff) && bVar9)) && bVar8) {
            uVar34 = 1;
          }
          if (uVar10 == 0) {
            uVar27 = uVar34 + uVar16;
            uVar10 = uVar27 & 0xffff;
            if (*(uint *)(lVar31 + 0x20) <= uVar10) {
              if (((int)uVar27 < 0) && (-1 < (int)(uVar34 + uVar33))) {
                uVar10 = 0;
                uVar16 = -uVar34;
              }
              else {
                if ((0xffff < (int)uVar27) || ((int)(uVar34 + uVar33) < 0x10000)) break;
                uVar10 = 0;
                uVar16 = 0x10000 - uVar34;
              }
            }
          }
          else {
            if ((uVar10 == 0xffff) ||
               (puVar2 = (ushort *)((long)puVar22 + (ulong)(uVar10 + (uVar16 - uVar26) * 2)),
               puVar3 < puVar2)) break;
            uVar5 = *puVar2;
            uVar27 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
            uVar10 = 0;
            if ((uVar27 != 0) &&
               (uVar10 = uVar27 + uVar34 & 0xffff, *(uint *)(lVar31 + 0x20) <= uVar10)) {
              uVar10 = 0;
            }
          }
          if (uVar10 != 0) goto LAB_10977eb98;
          uVar10 = uVar16 + 1;
          if (0xfffe < uVar16) {
            uVar10 = 0;
            goto LAB_10977eb98;
          }
        }
        uVar24 = uVar24 + 1;
        puVar29 = puVar29 + 1;
        puVar30 = puVar30 + 1;
      } while (uVar24 != uVar32);
      uVar10 = 0;
LAB_10977eb98:
      *param_2 = uVar16;
    }
    return uVar10;
  }
  if (*param_2 == *(uint *)(param_1 + 5)) {
    FUN_10977f10c(param_1);
    uVar32 = *(uint *)((long)param_1 + 0x2c);
    if (uVar32 != 0) {
      *param_2 = *(uint *)(param_1 + 5);
      return uVar32;
    }
    return 0;
  }
  lVar31 = param_1[3];
  uVar5 = *(ushort *)(lVar31 + 6);
  uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
  if (uVar32 < 2) {
    return 0;
  }
  uVar10 = 0;
  lVar25 = *param_1;
  puVar3 = (ushort *)(*(long *)(lVar25 + 0x330) + *(long *)(lVar25 + 0x338));
  uVar16 = *param_2 + 1;
  uVar24 = ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) >> 1;
  uVar23 = (ulong)uVar24;
  uVar28 = (ulong)uVar32 & 0xfffe;
  lVar13 = lVar31 + 0xe;
  lVar1 = uVar28 + 2;
  uVar18 = uVar23;
  do {
    iVar19 = (int)uVar18;
    uVar32 = iVar19 + uVar10;
    uVar7 = uVar32 >> 1;
    uVar14 = (ulong)uVar7;
    puVar29 = (ushort *)(lVar13 + ((ulong)uVar32 & 0xfffffffe));
    uVar5 = *puVar29;
    uVar27 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
    puVar29 = (ushort *)((long)puVar29 + lVar1);
    uVar5 = *puVar29;
    uVar26 = uVar27;
    uVar33 = uVar16;
    uVar34 = uVar7;
    if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) <= uVar16) {
      if (uVar16 <= uVar27) {
        uVar15 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
        pbVar4 = (byte *)((long)puVar29 + uVar28);
        uVar20 = (int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1];
        puVar29 = (ushort *)(pbVar4 + uVar28);
        uVar6 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
        bVar8 = uVar24 - 1 <= uVar7;
        bVar9 = puVar3 < (ushort *)((long)puVar29 + (ulong)uVar6 + 2);
        if ((((uVar15 == 0xffff && uVar27 == 0xffff) && bVar8) && uVar6 != 0) && bVar9) {
          uVar20 = 1;
        }
        uVar17 = 0;
        if ((((uVar15 != 0xffff || uVar27 != 0xffff) || !bVar8) || uVar6 == 0) || !bVar9) {
          uVar17 = uVar6;
        }
        if ((*(byte *)(param_1 + 4) >> 1 & 1) != 0) {
          uVar6 = uVar7 + 1;
          uVar18 = (ulong)uVar6;
          uVar12 = uVar7;
          if (uVar17 == 0xffff) {
            uVar12 = uVar7 + 1;
          }
          if (uVar32 < 2) goto LAB_10977ee28;
          uVar35 = (ulong)((uVar7 - 1) * 2);
          uVar5 = *(ushort *)(lVar13 + uVar35);
          if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) < uVar16) goto LAB_10977ee28;
          uVar34 = iVar19 + uVar10 >> 1;
          uVar21 = (ulong)(uVar7 - 1) * 2;
          uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
          goto LAB_10977edbc;
        }
        if (uVar17 != 0xffff) goto LAB_10977ef20;
        break;
      }
      uVar10 = uVar7 + 1;
      uVar14 = uVar18;
    }
    uVar18 = uVar14;
  } while (uVar10 < (uint)uVar14);
  goto LAB_10977ec74;
  while( true ) {
    uVar35 = uVar21 & 0xfffffffe;
    uVar5 = *(ushort *)(lVar13 + uVar35);
    uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
    if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) < uVar16) break;
LAB_10977edbc:
    uVar26 = uVar32;
    uVar21 = uVar21 - 2;
    puVar30 = (ushort *)(lVar13 + lVar1 + uVar35);
    pbVar4 = (byte *)((long)puVar30 + uVar28);
    puVar29 = (ushort *)(pbVar4 + uVar28);
    uVar17 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
    uVar34 = uVar34 - 1;
    if (uVar17 != 0xffff) {
      uVar12 = uVar34;
    }
    if (uVar21 == 0xfffffffffffffffe) {
      uVar34 = 0;
      break;
    }
  }
  uVar5 = *puVar30;
  uVar15 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
  uVar20 = (int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1];
LAB_10977ee28:
  if (uVar12 != uVar6) {
LAB_10977eed8:
    uVar27 = uVar26;
    bVar9 = uVar12 != uVar34;
    uVar34 = uVar12;
    if (bVar9) {
      puVar29 = (ushort *)(lVar13 + (ulong)(uVar12 << 1));
      uVar5 = *puVar29;
      uVar27 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      puVar29 = (ushort *)((long)puVar29 + lVar1);
      uVar5 = *puVar29;
      uVar15 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      pbVar4 = (byte *)((long)puVar29 + uVar28);
      uVar20 = (int)(short)((ushort)*pbVar4 << 8) | (uint)pbVar4[1];
      puVar29 = (ushort *)(pbVar4 + uVar28);
      uVar17 = (uint)(*puVar29 >> 8) | (*puVar29 & 0xff00ff) << 8;
    }
LAB_10977ef20:
    if (uVar17 == 0) {
      uVar10 = uVar20 + uVar16;
      uVar32 = uVar10 & 0xffff;
      if (*(uint *)(lVar25 + 0x20) <= uVar32) {
        if (((int)uVar10 < 0) && (-1 < (int)(uVar27 + uVar20))) {
          uVar32 = 0;
          uVar33 = -uVar20;
        }
        else {
          uVar32 = 0;
          uVar33 = 0x10000 - uVar20;
          if ((int)(uVar27 + uVar20) < 0x10000 || 0xffff < (int)uVar10) {
            uVar33 = uVar16;
          }
        }
      }
    }
    else {
      puVar29 = (ushort *)((long)puVar29 + (ulong)(uVar17 + (uVar16 - uVar15) * 2));
      if (puVar3 < puVar29) {
        uVar32 = 0;
      }
      else {
        uVar5 = *puVar29;
        uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
        if (uVar32 == 0) {
          uVar32 = 0;
        }
        else {
          uVar32 = uVar32 + uVar20 & 0xffff;
          if (*(uint *)(lVar25 + 0x20) <= uVar32) {
            uVar32 = 0;
          }
        }
      }
    }
    goto LAB_10977ec80;
  }
  if (uVar34 != uVar7) {
    uVar26 = uVar27;
  }
  if (uVar6 < uVar24) {
    puVar30 = (ushort *)(lVar13 + uVar18 * 2);
    uVar5 = *(ushort *)((long)puVar30 + lVar1);
    if (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) <= uVar16) {
      puVar29 = (ushort *)(lVar31 + uVar23 * 8 + 0xe);
      lVar31 = ((iVar19 + uVar10 >> 1) - uVar23) + 2;
      uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      do {
        uVar15 = uVar32;
        puVar22 = puVar30;
        uVar17 = (uint)(puVar22[uVar23 * 3 + 1] >> 8) | (puVar22[uVar23 * 3 + 1] & 0xff00ff) << 8;
        uVar12 = (uint)uVar14;
        if (uVar17 != 0xffff) {
          uVar12 = (uint)uVar18;
        }
        uVar14 = (ulong)uVar12;
        uVar34 = uVar24;
        if (lVar31 == 0) goto LAB_10977efa8;
        uVar18 = uVar18 + 1;
        uVar5 = *(ushort *)((long)puVar22 + uVar28 + 4);
        lVar31 = lVar31 + 1;
        puVar30 = puVar22 + 1;
        uVar32 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      } while (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) <= uVar16);
      puVar29 = (ushort *)((long)(puVar22 + 1) + uVar28 + 2);
      uVar34 = (uint)uVar18;
LAB_10977efa8:
      uVar27 = (uint)(*puVar22 >> 8) | (*puVar22 & 0xff00ff) << 8;
      uVar34 = uVar34 - 1;
      if (uVar12 == uVar7) {
        uVar32 = 0;
        goto LAB_10977ec80;
      }
      uVar20 = (int)(short)((ushort)(byte)puVar22[uVar23 * 2 + 1] << 8) |
               (uint)*(byte *)((long)puVar22 + uVar23 * 4 + 3);
      uVar26 = uVar27;
      goto LAB_10977eed8;
    }
  }
LAB_10977ec74:
  uVar32 = 0;
  uVar27 = uVar26;
  uVar34 = uVar7;
LAB_10977ec80:
  if ((uVar27 < uVar33) && (uVar34 + 1 == uVar24)) {
    return 0;
  }
  plVar11 = param_1;
  FUN_10977f004();
  if ((int)plVar11 == 0) {
    *(uint *)(param_1 + 5) = uVar33;
    if (uVar32 == 0) {
      FUN_10977f10c(param_1);
      uVar32 = *(uint *)((long)param_1 + 0x2c);
      if (uVar32 == 0) {
        return 0;
      }
      uVar33 = *(uint *)(param_1 + 5);
    }
    else {
      *(uint *)((long)param_1 + 0x2c) = uVar32;
    }
  }
  else if (uVar32 == 0) {
    return 0;
  }
  *param_2 = uVar33;
  return uVar32;
}



/* Entry: 109774340; end: 10977466f;  */

uint FUN_109774340(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  if (param_1 + 4U <= *(ulong *)(param_2 + 200)) {
    uVar22 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    iVar14 = (int)param_1;
    if (*(ulong *)(param_2 + 200) < param_1 + (ulong)uVar22) {
      if (*(int *)(param_2 + 0xd0) != 0) goto LAB_109774664;
      uVar22 = (int)*(undefined8 *)(param_2 + 200) - iVar14;
    }
    if (uVar22 < (uint)((int)*(undefined8 *)(param_2 + 200) - iVar14)) {
      if (1 < *(uint *)(param_2 + 0xd0)) goto LAB_109774664;
      uVar22 = (int)*(undefined8 *)(param_2 + 200) - iVar14;
    }
    if (0xf < uVar22) {
      bVar3 = *(byte *)(param_1 + 6);
      bVar4 = *(byte *)(param_1 + 7);
      if ((*(uint *)(param_2 + 0xd0) < 2) || ((bVar4 & 1) == 0)) {
        uVar9 = bVar4 & 0xfffe | (uint)bVar3 << 8;
        if (uVar9 * 4 + 0x10 <= uVar22) {
          uVar6 = (uint)(ushort)(CONCAT11(bVar3,bVar4) >> 1);
          if (1 < *(uint *)(param_2 + 0xd0)) {
            if (((*(byte *)(param_1 + 0xd) | *(byte *)(param_1 + 9)) & 1) != 0) goto LAB_109774664;
            uVar5 = CONCAT11(*(undefined1 *)(param_1 + 8),*(byte *)(param_1 + 9));
            uVar17 = (uint)(uVar5 >> 1);
            if ((((uVar6 < uVar17) || ((uVar5 & 0xfffe) < uVar6)) ||
                (uVar17 + (ushort)(CONCAT11(*(undefined1 *)(param_1 + 0xc),*(byte *)(param_1 + 0xd))
                                  >> 1) != uVar6)) ||
               (uVar17 != 1 << (ulong)(*(ushort *)(param_1 + 10) >> 8 & 0x1f))) goto LAB_109774664;
          }
          if ((*(uint *)(param_2 + 0xd0) < 2) ||
             (uVar5 = *(ushort *)(param_1 + 0xe + (ulong)(uVar9 - 2)),
             (ushort)(uVar5 >> 8 | uVar5 << 8) == 0xffff)) {
            if (CONCAT11(bVar3,bVar4) < 2) {
              uVar11 = 0;
            }
            else {
              uVar17 = 0;
              uVar11 = 0;
              puVar18 = (ushort *)(param_1 + (ulong)uVar9 + 0x10);
              puVar19 = (ushort *)((long)puVar18 + (ulong)uVar9);
              pbVar20 = (byte *)((long)puVar19 + (ulong)uVar9);
              pbVar1 = pbVar20 + uVar9;
              uVar9 = uVar6 - 1;
              if (uVar6 < 2) {
                uVar6 = 1;
              }
              lVar15 = param_1 + (ulong)((uint)bVar3 * 0x100 + (uint)bVar4 >> 1) * 6 + 0x11;
              puVar16 = (ushort *)(param_1 + 0xe);
              uVar23 = 0;
              uVar21 = 0;
              do {
                uVar5 = *puVar18;
                uVar7 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
                if (uVar7 < ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8)) goto LAB_109774664;
                uVar8 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
                if ((uVar17 != 0) && (uVar8 <= uVar23)) {
                  if (*(int *)(param_2 + 0xd0) != 0) goto LAB_109774664;
                  if ((uVar8 < uVar21) || (uVar7 < uVar23)) {
                    uVar11 = uVar11 | 1;
                  }
                  else {
                    uVar11 = uVar11 | 2;
                  }
                }
                uVar23 = (uint)CONCAT11(*pbVar20,pbVar20[1]);
                if (uVar23 != 0) {
                  if (uVar23 == 0xffff) {
                    if ((((1 < *(uint *)(param_2 + 0xd0)) || (uVar17 != uVar9)) || (uVar8 != 0xffff)
                        ) || (uVar7 != 0xffff)) goto LAB_109774664;
                  }
                  else {
                    pbVar2 = pbVar20 + uVar23;
                    if (*(int *)(param_2 + 0xd0) == 0) {
                      if ((((uVar17 != uVar9) || (uVar8 != 0xffff)) || (uVar7 != 0xffff)) &&
                         ((pbVar2 < pbVar1 ||
                          (*(byte **)(param_2 + 200) < pbVar2 + ((uVar7 - uVar8) * 2 + 2)))))
                      goto LAB_109774664;
                    }
                    else if ((pbVar2 < pbVar1) ||
                            ((byte *)(param_1 + (ulong)uVar22) < pbVar2 + ((uVar7 - uVar8) * 2 + 2))
                            ) goto LAB_109774664;
                    if ((uVar8 < uVar7) && (*(int *)(param_2 + 0xd0) != 0)) {
                      uVar13 = (ulong)((uint)*pbVar20 * 0x100 + (uint)pbVar20[1]);
                      uVar23 = uVar8;
                      do {
                        sVar10 = CONCAT11(pbVar20[uVar13],*(undefined1 *)(lVar15 + uVar13));
                        if ((sVar10 != 0) &&
                           (*(uint *)(param_2 + 0xd8) <=
                            (uint)(ushort)(sVar10 + (*puVar19 >> 8 | *puVar19 << 8)))) {
                          lVar15 = 0x10;
                          FUN_109753e48(param_2);
                          param_2 = lVar15;
                          goto LAB_109774664;
                        }
                        uVar23 = uVar23 + 1;
                        uVar13 = uVar13 + 2;
                      } while (uVar23 < uVar7);
                    }
                  }
                }
                pbVar20 = pbVar20 + 2;
                uVar17 = uVar17 + 1;
                lVar15 = lVar15 + 2;
                puVar16 = puVar16 + 1;
                puVar18 = puVar18 + 1;
                puVar19 = puVar19 + 1;
                uVar23 = uVar7;
                uVar21 = uVar8;
              } while (uVar17 != uVar6);
            }
            return uVar11;
          }
        }
      }
    }
  }
LAB_109774664:
  puVar12 = (ulong *)0x8;
  FUN_109753e48();
  lVar15 = *(long *)(param_2 + 0x18);
  puVar12[1] = 4;
  uVar5 = *(ushort *)(lVar15 + 4);
  *puVar12 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109774670; end: 10977474f;  */

undefined8 FUN_109774670(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 4;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109774750; end: 1097747df;  */

undefined8 FUN_109774750(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ushort *puVar5;
  uint uVar6;
  
  lVar3 = param_2;
  if (((ushort *)(param_1 + 10U) <= *(ushort **)(param_2 + 200)) &&
     (uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8,
     uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8,
     param_1 + (ulong)uVar2 <= *(ulong *)(param_2 + 200) && uVar6 * 2 + 10 <= uVar2)) {
    if ((*(int *)(param_2 + 0xd0) != 0) && (uVar6 != 0)) {
      puVar5 = (ushort *)(param_1 + 10U);
      do {
        if (*(uint *)(param_2 + 0xd8) <= ((uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8)) {
          lVar3 = 0x10;
          FUN_109753e48(param_2);
          goto LAB_1097747d4;
        }
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    return 0;
  }
LAB_1097747d4:
  puVar4 = (ulong *)0x8;
  FUN_109753e48();
  lVar3 = *(long *)(lVar3 + 0x18);
  puVar4[1] = 6;
  uVar1 = *(ushort *)(lVar3 + 4);
  *puVar4 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 1097747e0; end: 109774863;  */

undefined8 FUN_1097747e0(long param_1,ulong *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 6;
  uVar1 = *(ushort *)(lVar2 + 4);
  *param_2 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
  return 0;
}



/* Entry: 109774864; end: 109774a67;  */

int FUN_109774864(long *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  if (*param_2 == -1) {
    return 0;
  }
  uVar15 = *(uint *)(param_1[3] + 0x200c);
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  if (uVar15 != 0) {
    pbVar17 = (byte *)(param_1[3] + 0x2010);
    uVar18 = *param_2 + 1;
    do {
      uVar19 = (uint)*pbVar17;
      bVar2 = pbVar17[1];
      bVar3 = pbVar17[2];
      bVar4 = pbVar17[3];
      uVar10 = uVar19 * 0x1000000 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
      uVar11 = (uint)pbVar17[4] << 0x18 | (uint)pbVar17[5] << 0x10 | (uint)pbVar17[6] << 8;
      uVar12 = uVar11 | pbVar17[7];
      uVar1 = uVar18;
      if (uVar18 <= uVar10) {
        uVar1 = uVar10;
      }
      uVar10 = uVar1;
      if (uVar1 <= uVar12) {
        iVar21 = 0;
        uVar13 = (uint)bVar2;
        uVar14 = (uint)bVar3;
        uVar8 = (uint)pbVar17[8] * 0x1000000;
        bVar5 = pbVar17[9];
        iVar16 = (uint)bVar5 * 0x10000;
        bVar6 = pbVar17[10];
        iVar9 = (uint)bVar6 * 0x100;
        bVar7 = pbVar17[0xb];
        uVar22 = ~uVar1 + uVar19 * 0x1000000 + uVar13 * 0x10000 + uVar14 * 0x100 + (uint)bVar4;
        uVar20 = (uint)bVar4;
        do {
          uVar10 = uVar1 + iVar21;
          if (uVar22 < (uVar8 | (uint)bVar5 << 0x10 | (uint)bVar6 << 8 | (uint)bVar7)) break;
          if (((uVar1 + uVar8 + iVar16 + iVar9 + (uint)bVar7) - uVar20) + uVar14 * -0x100 +
              uVar13 * -0x10000 + uVar19 * -0x1000000 + iVar21 != 0) {
            if (((uVar1 + uVar8 + iVar16 + iVar9 + (uint)bVar7) - uVar20) + uVar14 * -0x100 +
                uVar13 * -0x10000 + uVar19 * -0x1000000 + iVar21 < *(uint *)(*param_1 + 0x20)) {
              uVar15 = uVar13 * 0x10000 | uVar19 << 0x18 | (uint)bVar3 << 8 | uVar20;
              if (uVar18 <= uVar15) {
                uVar18 = uVar15;
              }
              iVar16 = uVar18 + iVar21;
              iVar21 = ((uVar18 + (uint)pbVar17[8] * 0x1000000 + (uint)bVar5 * 0x10000 +
                         (uint)bVar6 * 0x100 + (uint)bVar7) - uVar20) + (uint)bVar3 * -0x100 +
                       (uint)bVar2 * -0x10000 + (uint)*pbVar17 * -0x1000000 + iVar21;
              goto LAB_109774a0c;
            }
            uVar10 = uVar1 + iVar21;
            break;
          }
          if (uVar1 + iVar21 == 0xffffffff) {
            iVar21 = 0;
            iVar16 = 0;
            goto LAB_109774a0c;
          }
          iVar21 = iVar21 + 1;
          uVar22 = uVar22 - 1;
          uVar10 = pbVar17[7] + uVar11 + 1;
        } while ((uVar1 - 1) + iVar21 < uVar12);
      }
      uVar18 = uVar10;
      pbVar17 = pbVar17 + 0xc;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  iVar16 = 0;
  iVar21 = 0;
LAB_109774a0c:
  *param_2 = iVar16;
  return iVar21;
}



/* Entry: 109774a68; end: 109774c63;  */

undefined8 FUN_109774a68(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  long lVar14;
  ulong *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  
  pbVar16 = (byte *)(param_1 + 0x2010);
  if (((pbVar16 <= *(byte **)(param_2 + 200)) &&
      (uVar11 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 4) & 0xff00ff) << 8, uVar11 = uVar11 >> 0x10 | uVar11 << 0x10,
      0x200 < uVar11 >> 4 && uVar11 <= (uint)((int)*(undefined8 *)(param_2 + 200) - (int)param_1)))
     && (uVar11 = (*(uint *)(param_1 + 0x200c) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 0x200c) & 0xff00ff) << 8,
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10,
        uVar11 <= (uint)((int)*(undefined8 *)(param_2 + 200) - (int)pbVar16) / 0xc)) {
    if (uVar11 != 0) {
      uVar17 = 0;
      param_1 = param_1 + 0xc;
      uVar19 = 0;
      do {
        uVar8 = (uint)*pbVar16 * 0x1000000;
        uVar1 = uVar8 | (uint)pbVar16[1] << 0x10;
        bVar3 = pbVar16[2];
        bVar4 = pbVar16[3];
        uVar9 = CONCAT11(bVar3,bVar4) | uVar1;
        uVar20 = (ulong)uVar9;
        uVar18 = (uint)pbVar16[4];
        bVar5 = pbVar16[5];
        uVar2 = uVar18 * 0x1000000 | (uint)bVar5 << 0x10;
        bVar6 = pbVar16[6];
        bVar7 = pbVar16[7];
        uVar10 = CONCAT11(bVar6,bVar7) | uVar2;
        uVar12 = uVar10 - uVar9;
        if ((uVar10 < uVar9) || ((uVar17 != 0 && (uVar9 <= uVar19)))) goto LAB_109774c4c;
        if (*(int *)(param_2 + 0xd0) != 0) {
          uVar19 = (*(uint *)(pbVar16 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(pbVar16 + 8) & 0xff00ff) << 8;
          lVar14 = param_2;
          if (*(uint *)(param_2 + 0xd8) < uVar12 ||
              *(uint *)(param_2 + 0xd8) - uVar12 <= (uVar19 >> 0x10 | uVar19 << 0x10))
          goto LAB_109774c58;
          iVar21 = (uint)pbVar16[1] * 0x10000;
          if (uVar1 == 0) {
            if (uVar2 != 0) goto LAB_109774c4c;
            if (uVar12 != 0xffffffff) {
              iVar21 = ~(uint)bVar7 + uVar8 + iVar21 + (uint)CONCAT11(bVar3,bVar4) +
                       (uint)bVar6 * -0x100 + (uint)bVar5 * -0x10000 + uVar18 * -0x1000000;
              do {
                if ((((uint)*(byte *)(param_1 + (uVar20 >> 3 & 0x1fff)) << (ulong)((uint)uVar20 & 7)
                     ) >> 7 & 1) != 0) goto LAB_109774c4c;
                uVar20 = (ulong)((uint)uVar20 + 1);
                bVar13 = iVar21 != -1;
                iVar21 = iVar21 + 1;
              } while (bVar13);
            }
          }
          else if (uVar12 != 0xffffffff) {
            iVar21 = ~(uint)bVar7 + uVar8 + iVar21 + (uint)CONCAT11(bVar3,bVar4) +
                     (uint)bVar6 * -0x100 + (uint)bVar5 * -0x10000 + uVar18 * -0x1000000;
            do {
              uVar19 = (uint)uVar20;
              if (((((uint)*(byte *)(param_1 + (uVar20 >> 0x13)) << (ulong)(uVar19 >> 0x10 & 7)) >>
                    7 & 1) == 0) ||
                 ((((uint)*(byte *)(param_1 + (uVar20 >> 3 & 0x1fff)) << (ulong)(uVar19 & 7)) >> 7 &
                  1) == 0)) goto LAB_109774c4c;
              uVar20 = (ulong)(uVar19 + 1);
              bVar13 = iVar21 != -1;
              iVar21 = iVar21 + 1;
            } while (bVar13);
          }
        }
        pbVar16 = pbVar16 + 0xc;
        uVar17 = uVar17 + 1;
        uVar19 = uVar10;
      } while (uVar17 != uVar11);
    }
    return 0;
  }
LAB_109774c4c:
  lVar14 = 8;
  FUN_109753e48(param_2);
LAB_109774c58:
  puVar15 = (ulong *)0x10;
  FUN_109753e48();
  lVar14 = *(long *)(lVar14 + 0x18);
  puVar15[1] = 8;
  uVar11 = *(uint *)(lVar14 + 8);
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  *puVar15 = (ulong)(uVar11 >> 0x10 | uVar11 << 0x10);
  return 0;
}



/* Entry: 109774c64; end: 109774d3b;  */

undefined8 FUN_109774c64(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 8;
  uVar1 = *(uint *)(lVar2 + 8);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *param_2 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  return 0;
}



/* Entry: 109774d3c; end: 109774dcf;  */

undefined8 FUN_109774d3c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ushort *puVar5;
  ulong uVar6;
  
  lVar3 = param_2;
  if ((ushort *)(param_1 + 0x14U) <= *(ushort **)(param_2 + 200)) {
    uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if ((0x13 < uVar1 && (ulong)uVar1 <= (ulong)(*(long *)(param_2 + 200) - param_1)) &&
       (uVar2 = (*(uint *)(param_1 + 0x10) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0x10) & 0xff00ff) << 8,
       uVar6 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10), uVar6 <= (ulong)uVar1 - 0x14 >> 1)) {
      if ((*(int *)(param_2 + 0xd0) != 0) && (uVar6 != 0)) {
        puVar5 = (ushort *)(param_1 + 0x14U);
        do {
          if (*(uint *)(param_2 + 0xd8) <= ((uint)(*puVar5 >> 8) | (*puVar5 & 0xff00ff) << 8)) {
            lVar3 = 0x10;
            FUN_109753e48(param_2);
            goto LAB_109774dc4;
          }
          uVar6 = uVar6 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      return 0;
    }
  }
LAB_109774dc4:
  puVar4 = (ulong *)0x8;
  FUN_109753e48();
  lVar3 = *(long *)(lVar3 + 0x18);
  puVar4[1] = 10;
  uVar1 = *(uint *)(lVar3 + 8);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *puVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  return 0;
}



/* Entry: 109774dd0; end: 109774e0b;  */

undefined8 FUN_109774dd0(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 10;
  uVar1 = *(uint *)(lVar2 + 8);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *param_2 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  return 0;
}



/* Entry: 109774e0c; end: 109774e33;  */

void FUN_109774e0c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_10977f240(param_1,&uStack_14,0);
  return;
}



/* Entry: 109774e34; end: 109774eaf;  */

/* WARNING: Removing unreachable block (ram,0x00010977f2cc) */

uint FUN_109774e34(long *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*param_2 != 0xffffffff) {
    if (((char)param_1[5] == '\0') || (param_1[6] != (ulong)*param_2)) {
      uVar3 = *(uint *)(param_1[3] + 0xc);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 != 0) {
        uVar9 = 0;
        uVar1 = *param_2 + 1;
        uVar10 = uVar3;
        do {
          uVar8 = uVar9 + uVar10 >> 1;
          puVar2 = (uint *)(param_1[3] + 0x10 + (ulong)((uVar8 * 2 + (uVar9 + uVar10 >> 1)) * 4));
          uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          uVar5 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar6 = uVar1 - uVar4;
          uVar7 = uVar8;
          if (uVar4 <= uVar1) {
            if (uVar1 <= uVar5) {
              uVar9 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
              uVar10 = uVar9 >> 0x10 | uVar9 << 0x10;
              uVar9 = 0;
              if (!CARRY4(uVar6,uVar10)) {
                uVar9 = uVar10 + uVar6;
              }
              goto LAB_10977f2e8;
            }
            uVar9 = uVar8 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (uVar9 < uVar10);
        uVar9 = 0;
LAB_10977f2e8:
        if ((uVar1 <= uVar5) || (uVar8 = uVar8 + 1, uVar8 != uVar3)) {
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[6] = (ulong)uVar1;
          param_1[8] = (ulong)uVar8;
          if ((uVar9 == 0) || (*(uint *)(*param_1 + 0x20) <= uVar9)) {
            FUN_10977f364(param_1);
            if ((char)param_1[5] == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = *(uint *)(param_1 + 7);
            }
          }
          else {
            *(uint *)(param_1 + 7) = uVar9;
          }
          *param_2 = (uint)param_1[6];
          return uVar9;
        }
      }
      return 0;
    }
    FUN_10977f364(param_1);
    if ((char)param_1[5] != '\0') {
      uVar3 = *(uint *)(param_1 + 7);
      *param_2 = (uint)param_1[6];
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 109774eb0; end: 109774fc3;  */

undefined8 FUN_109774eb0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 + 0x10U <= *(ulong *)(param_2 + 200)) {
    uVar7 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    if (0xf < uVar7 && (ulong)uVar7 <= (ulong)(*(long *)(param_2 + 200) - param_1)) {
      uVar9 = (ulong)*(byte *)(param_1 + 0xc) * 0x1000000;
      uVar8 = uVar9 | (ulong)*(byte *)(param_1 + 0xd) << 0x10 | (ulong)*(byte *)(param_1 + 0xe) << 8
              | (ulong)*(byte *)(param_1 + 0xf);
      if (uVar8 <= (ulong)(uVar7 - 0x10) / 0xc) {
        if (uVar8 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            puVar1 = (uint *)(param_1 + 0x10U + lVar6);
            uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
            uVar3 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            if ((uVar3 < uVar2) || ((lVar6 != 0 && (uVar2 <= uVar7)))) goto LAB_109774fac;
            if ((*(int *)(param_2 + 0xd0) != 0) &&
               (uVar7 = (puVar1[2] & 0xff00ff00) >> 8 | (puVar1[2] & 0xff00ff) << 8, lVar4 = param_2
               , *(uint *)(param_2 + 0xd8) < uVar3 - uVar2 ||
                 *(uint *)(param_2 + 0xd8) - (uVar3 - uVar2) <= (uVar7 >> 0x10 | uVar7 << 0x10)))
            goto LAB_109774fb8;
            lVar6 = lVar6 + 0xc;
            uVar7 = uVar3;
          } while ((uVar9 + (ulong)*(byte *)(param_1 + 0xd) * 0x10000 +
                   (ulong)*(byte *)(param_1 + 0xe) * 0x100 + (ulong)*(byte *)(param_1 + 0xf)) * 0xc
                   != lVar6);
        }
        return 0;
      }
    }
  }
LAB_109774fac:
  lVar4 = 8;
  FUN_109753e48(param_2);
LAB_109774fb8:
  puVar5 = (ulong *)0x10;
  FUN_109753e48();
  lVar6 = *(long *)(lVar4 + 0x18);
  puVar5[1] = 0xc;
  uVar7 = *(uint *)(lVar6 + 8);
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  *puVar5 = (ulong)(uVar7 >> 0x10 | uVar7 << 0x10);
  return 0;
}



/* Entry: 109774fc4; end: 109774fff;  */

undefined8 FUN_109774fc4(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0xc;
  uVar1 = *(uint *)(lVar2 + 8);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *param_2 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  return 0;
}



/* Entry: 109775000; end: 109775027;  */

void FUN_109775000(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_10977f538(param_1,&uStack_14,0);
  return;
}



/* Entry: 109775028; end: 1097750a3;  */

/* WARNING: Removing unreachable block (ram,0x00010977f5c4) */

uint FUN_109775028(long *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*param_2 != 0xffffffff) {
    if (((char)param_1[5] == '\0') || (param_1[6] != (ulong)*param_2)) {
      uVar3 = *(uint *)(param_1[3] + 0xc);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 != 0) {
        uVar8 = 0;
        uVar1 = *param_2 + 1;
        uVar9 = uVar3;
        do {
          uVar7 = uVar8 + uVar9 >> 1;
          puVar2 = (uint *)(param_1[3] + 0x10 + (ulong)((uVar7 * 2 + (uVar8 + uVar9 >> 1)) * 4));
          uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
          uVar5 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
          uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar6 = uVar7;
          if ((uVar4 >> 0x10 | uVar4 << 0x10) <= uVar1) {
            if (uVar1 <= uVar5) {
              uVar8 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
              uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
              goto LAB_10977f5d4;
            }
            uVar8 = uVar7 + 1;
            uVar6 = uVar9;
          }
          uVar9 = uVar6;
        } while (uVar8 < uVar9);
        uVar8 = 0;
LAB_10977f5d4:
        if ((uVar1 <= uVar5) || (uVar7 = uVar7 + 1, uVar7 != uVar3)) {
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[6] = (ulong)uVar1;
          param_1[8] = (ulong)uVar7;
          if ((uVar8 == 0) || (*(uint *)(*param_1 + 0x20) <= uVar8)) {
            FUN_10977f650(param_1);
            if ((char)param_1[5] == '\0') {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(param_1 + 7);
            }
          }
          else {
            *(uint *)(param_1 + 7) = uVar8;
          }
          *param_2 = (uint)param_1[6];
          return uVar8;
        }
      }
      return 0;
    }
    FUN_10977f650(param_1);
    if ((char)param_1[5] != '\0') {
      uVar3 = *(uint *)(param_1 + 7);
      *param_2 = (uint)param_1[6];
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 1097750a4; end: 1097751af;  */

undefined8 FUN_1097750a4(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 + 0x10U <= *(ulong *)(param_2 + 200)) {
    uVar7 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    if (0xf < uVar7 && (ulong)uVar7 <= (ulong)(*(long *)(param_2 + 200) - param_1)) {
      uVar9 = (ulong)*(byte *)(param_1 + 0xc) * 0x1000000;
      uVar8 = uVar9 | (ulong)*(byte *)(param_1 + 0xd) << 0x10 | (ulong)*(byte *)(param_1 + 0xe) << 8
              | (ulong)*(byte *)(param_1 + 0xf);
      if (uVar8 <= (ulong)(uVar7 - 0x10) / 0xc) {
        if (uVar8 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            puVar1 = (uint *)(param_1 + 0x10U + lVar6);
            uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
            uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
            uVar3 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            if ((uVar3 < uVar2) || ((lVar6 != 0 && (uVar2 <= uVar7)))) goto LAB_109775198;
            if ((*(int *)(param_2 + 0xd0) != 0) &&
               (uVar7 = (puVar1[2] & 0xff00ff00) >> 8 | (puVar1[2] & 0xff00ff) << 8, lVar4 = param_2
               , *(uint *)(param_2 + 0xd8) <= (uVar7 >> 0x10 | uVar7 << 0x10))) goto LAB_1097751a4;
            lVar6 = lVar6 + 0xc;
            uVar7 = uVar3;
          } while ((uVar9 + (ulong)*(byte *)(param_1 + 0xd) * 0x10000 +
                   (ulong)*(byte *)(param_1 + 0xe) * 0x100 + (ulong)*(byte *)(param_1 + 0xf)) * 0xc
                   != lVar6);
        }
        return 0;
      }
    }
  }
LAB_109775198:
  lVar4 = 8;
  FUN_109753e48(param_2);
LAB_1097751a4:
  puVar5 = (ulong *)0x10;
  FUN_109753e48();
  lVar6 = *(long *)(lVar4 + 0x18);
  puVar5[1] = 0xd;
  uVar7 = *(uint *)(lVar6 + 8);
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  *puVar5 = (ulong)(uVar7 >> 0x10 | uVar7 << 0x10);
  return 0;
}



/* Entry: 1097751b0; end: 1097751ef;  */

undefined8 FUN_1097751b0(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[1] = 0xd;
  uVar1 = *(uint *)(lVar2 + 8);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *param_2 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  return 0;
}


