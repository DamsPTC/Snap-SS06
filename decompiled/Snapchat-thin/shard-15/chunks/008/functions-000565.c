/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bccf8e4; end: 10bccf95b;  */

long * FUN_10bccf8e4(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  puVar23 = *(undefined8 **)(param_1 + 0x10);
  plVar21 = (long *)*puVar23;
  if ((*(byte *)(plVar21 + 0x21) & 1) == 0) {
    piVar1 = (int *)((long)plVar21 + 0x10c);
    do {
      iVar5 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar3 = (uint)(iVar5 + -1 == 0 & *(byte *)((long)plVar21 + 0x109));
    if ((plVar21 != (long *)0x0) && (uVar3 != 0)) {
      (**(code **)(*plVar21 + 8))();
    }
    return (long *)(ulong)(uVar3 ^ 1);
  }
  func_0x000107c28150();
  if (plVar21[6] != 0) {
    plVar13 = plVar21 + 1;
    puVar11 = puVar23 + 1;
    plVar22 = plVar21 + 6;
    plVar25 = (long *)plVar21[2];
    plVar4 = (long *)plVar21[3];
    uVar8 = (long)plVar4 - (long)plVar25;
    lVar19 = 0;
    if (uVar8 != 0) {
      lVar19 = ((long)plVar4 - (long)plVar25 >> 3) * 0x24 + -1;
    }
    uVar16 = plVar21[5];
    puVar14 = puVar11;
    if (lVar19 == *plVar22 + uVar16) {
      if (uVar16 < 0x24) {
        plVar20 = plVar21 + 4;
        plVar26 = (long *)*plVar20;
        plVar27 = (long *)*plVar13;
        if (uVar8 < (ulong)((long)plVar26 - (long)plVar27)) {
          puVar14 = (undefined8 *)0xfc0;
          puVar17 = puVar11;
          __Znwm();
          if (plVar26 == plVar4) {
            if (plVar25 == plVar27) {
              lVar19 = (long)plVar26 - (long)plVar25 >> 2;
              if (plVar4 == plVar25) {
                lVar19 = 1;
              }
              plStack_70 = plVar20;
              FUN_10bccfe10();
              func_0x00010bcd02f4(lVar19 * 2 + 6);
              FUN_10bccfde8(&puStack_90,plVar21[2],plVar21[3]);
              puVar28 = (undefined8 *)plVar21[2];
              puVar17 = (undefined8 *)*plVar13;
              puVar24 = (undefined8 *)plVar21[4];
              puVar29 = (undefined8 *)plVar21[3];
              plVar21[2] = (long)puStack_88;
              *plVar13 = (long)puStack_90;
              plVar21[4] = (long)puStack_78;
              plVar21[3] = (long)puStack_80;
              puStack_90 = puVar17;
              puStack_88 = puVar28;
              puStack_80 = puVar29;
              puStack_78 = puVar24;
              func_0x00010bcd0330();
              plVar25 = (long *)plVar21[2];
            }
            plVar25[-1] = (long)puVar14;
            plVar21[2] = (long)plVar25;
            FUN_10bccfcf8(plVar13);
          }
          else {
            *plVar4 = (long)puVar14;
            plVar21[3] = (long)(plVar4 + 1);
            puVar14 = puVar17;
          }
        }
        else {
          puVar17 = (undefined8 *)((long)plVar26 - (long)plVar27 >> 2);
          if (plVar26 == plVar27) {
            puVar17 = (undefined8 *)0x1;
          }
          puVar15 = puVar11;
          plStack_98 = plVar20;
          FUN_10bccfe10();
          puVar28 = (undefined8 *)((long)puVar17 + uVar8);
          puVar29 = puVar17 + (long)puVar15;
          uVar12 = 0xfc0;
          puVar14 = puVar15;
          puStack_b8 = puVar17;
          puStack_b0 = puVar28;
          puStack_a8 = puVar28;
          puStack_a0 = puVar29;
          __Znwm();
          uStack_c0 = 0x24;
          puVar24 = puVar28;
          plStack_c8 = plVar22;
          if (uVar8 == (long)puVar15 * 8) {
            if (plVar4 == plVar25) {
              puVar24 = (undefined8 *)0x1;
              uStack_d0 = uVar12;
              plStack_70 = plVar20;
              FUN_10bccfe10();
              puStack_78 = puVar24 + (long)puVar14;
              puVar14 = puVar28;
              puStack_90 = puVar24;
              puStack_88 = puVar24;
              puStack_80 = puVar24;
              FUN_10bccfde8(&puStack_90,puVar28,puVar28);
              puVar2 = puStack_78;
              puVar24 = puStack_80;
              puVar18 = puStack_88;
              puVar15 = puStack_90;
              puStack_b8 = puStack_90;
              puStack_b0 = puStack_88;
              puStack_a0 = puStack_78;
              puStack_90 = puVar17;
              puStack_88 = puVar28;
              puStack_80 = puVar28;
              puStack_78 = puVar29;
              func_0x00010bcd0330();
              puVar17 = puVar15;
              puVar28 = puVar18;
              puVar29 = puVar2;
            }
            else {
              puVar28 = puVar28 + (((long)puVar28 - (long)puVar17 >> 3) + 1) / -2;
              puVar24 = puVar28;
              puStack_b0 = puVar28;
            }
          }
          puVar15 = puVar24 + 1;
          *puVar24 = uVar12;
          uStack_d0 = 0;
          puVar24 = (undefined8 *)plVar21[3];
          puStack_a8 = puVar15;
          while (puVar18 = (undefined8 *)plVar21[2], puVar24 != puVar18) {
            puVar18 = puVar28;
            if (puVar28 == puVar17) {
              if (puVar15 < puVar29) {
                lVar19 = (long)puVar15 - (long)puVar17;
                puVar2 = puVar15 + (((long)puVar29 - (long)puVar15 >> 3) + 1) / 2;
                puVar18 = (undefined8 *)((long)puVar2 - ((long)puVar15 - (long)puVar17));
                puVar15 = puVar2;
                if (lVar19 != 0) {
                  _memmove(puVar18,puVar28,lVar19);
                  puVar14 = puVar28;
                }
              }
              else {
                lVar19 = (long)puVar29 - (long)puVar17 >> 2;
                if ((long)puVar29 - (long)puVar17 == 0) {
                  lVar19 = 1;
                }
                plStack_70 = plVar20;
                FUN_10bccfe10(lVar19);
                func_0x00010bcd02f4(lVar19 * 2 + 6);
                puVar14 = puVar17;
                FUN_10bccfde8(&puStack_90,puVar17,puVar15);
                puVar10 = puStack_78;
                puVar9 = puStack_80;
                puVar18 = puStack_88;
                puVar2 = puStack_90;
                puStack_90 = puVar17;
                puStack_88 = puVar28;
                puStack_80 = puVar15;
                puStack_78 = puVar29;
                func_0x00010bcd0330();
                puVar17 = puVar2;
                puVar15 = puVar9;
                puVar29 = puVar10;
              }
            }
            puVar24 = puVar24 + -1;
            puVar28 = puVar18 + -1;
            *puVar28 = *puVar24;
          }
          puStack_b8 = (undefined8 *)*plVar13;
          *plVar13 = (long)puVar17;
          plVar21[2] = (long)puVar28;
          puStack_a0 = (undefined8 *)plVar21[4];
          puStack_a8 = (undefined8 *)plVar21[3];
          plVar21[3] = (long)puVar15;
          plVar21[4] = (long)puVar29;
          puStack_b0 = puVar18;
          func_0x00010bccfe44(&uStack_d0);
          func_0x00010bccfe70(&puStack_b8);
        }
      }
      else {
        plVar21[5] = uVar16 - 0x24;
        puVar14 = (undefined8 *)*plVar25;
        plVar21[2] = (long)(plVar25 + 1);
        FUN_10bccfcf8(plVar13);
      }
    }
    FUN_10bccf6ec(plVar13);
    *puVar14 = *puVar11;
    plVar13 = puVar14 + 1;
    (**(code **)(puVar23[2] + 0x10))(plVar13,puVar23 + 2);
    *(undefined1 *)(puVar14 + 0xc) = 0;
    puVar14[0xd] = param_1;
    plVar21[6] = plVar21[6] + 1;
    return plVar13;
  }
  *(int *)(plVar21 + 7) = (int)plVar21[7] + 1;
  puVar11 = (undefined8 *)0x80;
  __Znwm();
  lVar19 = plVar21[0x1f];
  *puVar11 = &PTR_FUN_110d9a520;
  puVar11[1] = lVar19;
  puVar11[2] = puVar23[1];
  (**(code **)(puVar23[2] + 0x10))(puVar11 + 3,puVar23 + 2);
  puVar11[0xe] = plVar21;
  puVar11[0xf] = param_1;
  plVar21 = (long *)plVar21[0x1f];
                    /* WARNING: Could not recover jumptable at 0x00010bccf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar21 + 0x18))(plVar21,puVar11);
  return plVar21;
}



/* Entry: 10bccf95c; end: 10bccfcf7;  */

void FUN_10bccf95c(long *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar14 = param_1 + 5;
  plVar16 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  uVar3 = (long)plVar2 - (long)plVar16;
  lVar12 = 0;
  if (uVar3 != 0) {
    lVar12 = ((long)plVar2 - (long)plVar16 >> 3) * 0x24 + -1;
  }
  uVar9 = param_1[4];
  puVar7 = param_2;
  if (lVar12 == *plVar14 + uVar9) {
    if (uVar9 < 0x24) {
      plVar13 = param_1 + 3;
      plVar17 = (long *)*plVar13;
      plVar18 = (long *)*param_1;
      if (uVar3 < (ulong)((long)plVar17 - (long)plVar18)) {
        puVar7 = (undefined8 *)0xfc0;
        puVar10 = param_2;
        __Znwm();
        if (plVar17 == plVar2) {
          if (plVar16 == plVar18) {
            lVar12 = (long)plVar17 - (long)plVar16 >> 2;
            if (plVar2 == plVar16) {
              lVar12 = 1;
            }
            plStack_70 = plVar13;
            FUN_10bccfe10();
            func_0x00010bcd02f4(lVar12 * 2 + 6);
            FUN_10bccfde8(&puStack_90,param_1[1],param_1[2]);
            puVar19 = (undefined8 *)param_1[1];
            puVar10 = (undefined8 *)*param_1;
            puVar15 = (undefined8 *)param_1[3];
            puVar20 = (undefined8 *)param_1[2];
            param_1[1] = (long)puStack_88;
            *param_1 = (long)puStack_90;
            param_1[3] = (long)puStack_78;
            param_1[2] = (long)puStack_80;
            puStack_90 = puVar10;
            puStack_88 = puVar19;
            puStack_80 = puVar20;
            puStack_78 = puVar15;
            func_0x00010bcd0330();
            plVar16 = (long *)param_1[1];
          }
          plVar16[-1] = (long)puVar7;
          param_1[1] = (long)plVar16;
          FUN_10bccfcf8(param_1);
        }
        else {
          *plVar2 = (long)puVar7;
          param_1[2] = (long)(plVar2 + 1);
          puVar7 = puVar10;
        }
      }
      else {
        puVar10 = (undefined8 *)((long)plVar17 - (long)plVar18 >> 2);
        if (plVar17 == plVar18) {
          puVar10 = (undefined8 *)0x1;
        }
        puVar8 = param_2;
        plStack_98 = plVar13;
        FUN_10bccfe10();
        puVar19 = (undefined8 *)((long)puVar10 + uVar3);
        puVar20 = puVar10 + (long)puVar8;
        uVar6 = 0xfc0;
        puVar7 = puVar8;
        puStack_b8 = puVar10;
        puStack_b0 = puVar19;
        puStack_a8 = puVar19;
        puStack_a0 = puVar20;
        __Znwm();
        uStack_c0 = 0x24;
        puVar15 = puVar19;
        plStack_c8 = plVar14;
        if (uVar3 == (long)puVar8 * 8) {
          if (plVar2 == plVar16) {
            puVar15 = (undefined8 *)0x1;
            uStack_d0 = uVar6;
            plStack_70 = plVar13;
            FUN_10bccfe10();
            puStack_78 = puVar15 + (long)puVar7;
            puVar7 = puVar19;
            puStack_90 = puVar15;
            puStack_88 = puVar15;
            puStack_80 = puVar15;
            FUN_10bccfde8(&puStack_90,puVar19,puVar19);
            puVar1 = puStack_78;
            puVar15 = puStack_80;
            puVar11 = puStack_88;
            puVar8 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar10;
            puStack_88 = puVar19;
            puStack_80 = puVar19;
            puStack_78 = puVar20;
            func_0x00010bcd0330();
            puVar10 = puVar8;
            puVar19 = puVar11;
            puVar20 = puVar1;
          }
          else {
            puVar19 = puVar19 + (((long)puVar19 - (long)puVar10 >> 3) + 1) / -2;
            puVar15 = puVar19;
            puStack_b0 = puVar19;
          }
        }
        puVar8 = puVar15 + 1;
        *puVar15 = uVar6;
        uStack_d0 = 0;
        puVar15 = (undefined8 *)param_1[2];
        puStack_a8 = puVar8;
        while (puVar11 = (undefined8 *)param_1[1], puVar15 != puVar11) {
          puVar11 = puVar19;
          if (puVar19 == puVar10) {
            if (puVar8 < puVar20) {
              lVar12 = (long)puVar8 - (long)puVar10;
              puVar1 = puVar8 + (((long)puVar20 - (long)puVar8 >> 3) + 1) / 2;
              puVar11 = (undefined8 *)((long)puVar1 - ((long)puVar8 - (long)puVar10));
              puVar8 = puVar1;
              if (lVar12 != 0) {
                _memmove(puVar11,puVar19,lVar12);
                puVar7 = puVar19;
              }
            }
            else {
              lVar12 = (long)puVar20 - (long)puVar10 >> 2;
              if ((long)puVar20 - (long)puVar10 == 0) {
                lVar12 = 1;
              }
              plStack_70 = plVar13;
              FUN_10bccfe10(lVar12);
              func_0x00010bcd02f4(lVar12 * 2 + 6);
              puVar7 = puVar10;
              FUN_10bccfde8(&puStack_90,puVar10,puVar8);
              puVar5 = puStack_78;
              puVar4 = puStack_80;
              puVar11 = puStack_88;
              puVar1 = puStack_90;
              puStack_90 = puVar10;
              puStack_88 = puVar19;
              puStack_80 = puVar8;
              puStack_78 = puVar20;
              func_0x00010bcd0330();
              puVar10 = puVar1;
              puVar8 = puVar4;
              puVar20 = puVar5;
            }
          }
          puVar15 = puVar15 + -1;
          puVar19 = puVar11 + -1;
          *puVar19 = *puVar15;
        }
        puStack_b8 = (undefined8 *)*param_1;
        *param_1 = (long)puVar10;
        param_1[1] = (long)puVar19;
        puStack_a0 = (undefined8 *)param_1[3];
        puStack_a8 = (undefined8 *)param_1[2];
        param_1[2] = (long)puVar8;
        param_1[3] = (long)puVar20;
        puStack_b0 = puVar11;
        func_0x00010bccfe44(&uStack_d0);
        func_0x00010bccfe70(&puStack_b8);
      }
    }
    else {
      param_1[4] = uVar9 - 0x24;
      puVar7 = (undefined8 *)*plVar16;
      param_1[1] = (long)(plVar16 + 1);
      FUN_10bccfcf8(param_1);
    }
  }
  FUN_10bccf6ec(param_1);
  *puVar7 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar7 + 1,param_2 + 1);
  *(undefined1 *)(puVar7 + 0xc) = param_3;
  puVar7[0xd] = param_4;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10bccfcf8; end: 10bccfde7;  */

void FUN_10bccfcf8(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10bccfe10();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10bccfde8(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010bccfe70(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10bccfde8; end: 10bccfe0f;  */

void FUN_10bccfde8(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10bccfe10; end: 10bccfee3;  */

undefined1  [16] FUN_10bccfe10(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10bccfee4; end: 10bccfee7;  */

void FUN_10bccfee4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10bccfee8; end: 10bccff8f;  */

long * FUN_10bccfee8(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  puVar23 = *(undefined8 **)(param_1 + 0x10);
  plVar20 = (long *)*puVar23;
  if ((*(byte *)(plVar20 + 0x21) & 1) == 0) {
    piVar1 = (int *)((long)plVar20 + 0x10c);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar3 = (uint)(iVar4 + -1 == 0 & *(byte *)((long)plVar20 + 0x109));
    if ((plVar20 != (long *)0x0) && (uVar3 != 0)) {
      (**(code **)(*plVar20 + 8))();
    }
    return (long *)(ulong)(uVar3 ^ 1);
  }
  func_0x000107c28150();
  if ((plVar20[6] == 0) && ((int)plVar20[7] == 0)) {
    plVar11 = puVar23 + 1;
    if ((char)plVar20[0x21] == '\x01') {
      plVar10 = plVar20;
      func_0x00010bcd02b8();
      *plVar10 = extraout_x8;
      lVar19 = (long)*(char *)((long)plVar20 + 0x57);
      if (lVar19 < 0) {
        plVar13 = (long *)plVar20[8];
        lVar19 = plVar20[9];
      }
      else {
        plVar13 = plVar20 + 8;
      }
      func_0x000107c316cc(&stack0xffffffffffffffb8,plVar13,lVar19);
      (*(code *)*plVar11)(plVar11);
      func_0x00010bcd02dc();
      *plVar10 = 0;
      plVar20 = plVar11;
    }
    func_0x00010bcd030c();
    return plVar20;
  }
  plVar11 = plVar20 + 1;
  puVar2 = puVar23 + 1;
  plVar10 = plVar20 + 6;
  puVar22 = (undefined8 *)plVar20[2];
  puVar21 = (undefined8 *)plVar20[3];
  uVar7 = (long)puVar21 - (long)puVar22;
  lVar19 = 0;
  if (uVar7 != 0) {
    lVar19 = ((long)puVar21 - (long)puVar22 >> 3) * 0x24 + -1;
  }
  uVar16 = plVar20[5];
  puVar14 = puVar2;
  if (lVar19 == *plVar10 + uVar16) {
    if (uVar16 < 0x24) {
      plVar13 = plVar20 + 4;
      puVar24 = (undefined8 *)*plVar13;
      puVar25 = (undefined8 *)*plVar11;
      if (uVar7 < (ulong)((long)puVar24 - (long)puVar25)) {
        puVar14 = (undefined8 *)0xfc0;
        puVar17 = puVar2;
        __Znwm();
        if (puVar24 == puVar21) {
          if (puVar22 == puVar25) {
            lVar19 = (long)puVar24 - (long)puVar22 >> 2;
            if (puVar21 == puVar22) {
              lVar19 = 1;
            }
            plStack_70 = plVar13;
            FUN_10bccfe10();
            func_0x00010bcd02f4(lVar19 * 2 + 6);
            FUN_10bccfde8(&puStack_90,plVar20[2],plVar20[3]);
            puVar21 = (undefined8 *)plVar20[2];
            puVar22 = (undefined8 *)*plVar11;
            puVar25 = (undefined8 *)plVar20[4];
            puVar24 = (undefined8 *)plVar20[3];
            plVar20[2] = (long)puStack_88;
            *plVar11 = (long)puStack_90;
            plVar20[4] = (long)puStack_78;
            plVar20[3] = (long)puStack_80;
            puStack_90 = puVar22;
            puStack_88 = puVar21;
            puStack_80 = puVar24;
            puStack_78 = puVar25;
            func_0x00010bcd0330();
            puVar22 = (undefined8 *)plVar20[2];
          }
          puVar22[-1] = puVar14;
          plVar20[2] = (long)puVar22;
          FUN_10bccfcf8(plVar11);
        }
        else {
          *puVar21 = puVar14;
          plVar20[3] = (long)(puVar21 + 1);
          puVar14 = puVar17;
        }
      }
      else {
        puVar17 = (undefined8 *)((long)puVar24 - (long)puVar25 >> 2);
        if (puVar24 == puVar25) {
          puVar17 = (undefined8 *)0x1;
        }
        puVar15 = puVar2;
        plStack_98 = plVar13;
        FUN_10bccfe10();
        puVar24 = (undefined8 *)((long)puVar17 + uVar7);
        puVar25 = puVar17 + (long)puVar15;
        uVar12 = 0xfc0;
        puVar14 = puVar15;
        puStack_b8 = puVar17;
        puStack_b0 = puVar24;
        puStack_a8 = puVar24;
        puStack_a0 = puVar25;
        __Znwm();
        uStack_c0 = 0x24;
        puVar18 = puVar24;
        plStack_c8 = plVar10;
        if (uVar7 == (long)puVar15 * 8) {
          if (puVar21 == puVar22) {
            puVar22 = (undefined8 *)0x1;
            uStack_d0 = uVar12;
            plStack_70 = plVar13;
            FUN_10bccfe10();
            puStack_78 = puVar22 + (long)puVar14;
            puVar14 = puVar24;
            puStack_90 = puVar22;
            puStack_88 = puVar22;
            puStack_80 = puVar22;
            FUN_10bccfde8(&puStack_90,puVar24,puVar24);
            puVar15 = puStack_78;
            puVar18 = puStack_80;
            puVar21 = puStack_88;
            puVar22 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar17;
            puStack_88 = puVar24;
            puStack_80 = puVar24;
            puStack_78 = puVar25;
            func_0x00010bcd0330();
            puVar17 = puVar22;
            puVar24 = puVar21;
            puVar25 = puVar15;
          }
          else {
            puVar24 = puVar24 + (((long)puVar24 - (long)puVar17 >> 3) + 1) / -2;
            puVar18 = puVar24;
            puStack_b0 = puVar24;
          }
        }
        puVar22 = puVar18 + 1;
        *puVar18 = uVar12;
        uStack_d0 = 0;
        puVar21 = (undefined8 *)plVar20[3];
        puStack_a8 = puVar22;
        while (puVar18 = (undefined8 *)plVar20[2], puVar21 != puVar18) {
          puVar18 = puVar24;
          if (puVar24 == puVar17) {
            if (puVar22 < puVar25) {
              lVar19 = (long)puVar22 - (long)puVar17;
              puVar15 = puVar22 + (((long)puVar25 - (long)puVar22 >> 3) + 1) / 2;
              puVar18 = (undefined8 *)((long)puVar15 - ((long)puVar22 - (long)puVar17));
              puVar22 = puVar15;
              if (lVar19 != 0) {
                _memmove(puVar18,puVar24,lVar19);
                puVar14 = puVar24;
              }
            }
            else {
              lVar19 = (long)puVar25 - (long)puVar17 >> 2;
              if ((long)puVar25 - (long)puVar17 == 0) {
                lVar19 = 1;
              }
              plStack_70 = plVar13;
              FUN_10bccfe10(lVar19);
              func_0x00010bcd02f4(lVar19 * 2 + 6);
              puVar14 = puVar17;
              FUN_10bccfde8(&puStack_90,puVar17,puVar22);
              puVar9 = puStack_78;
              puVar8 = puStack_80;
              puVar18 = puStack_88;
              puVar15 = puStack_90;
              puStack_90 = puVar17;
              puStack_88 = puVar24;
              puStack_80 = puVar22;
              puStack_78 = puVar25;
              func_0x00010bcd0330();
              puVar17 = puVar15;
              puVar22 = puVar8;
              puVar25 = puVar9;
            }
          }
          puVar21 = puVar21 + -1;
          puVar24 = puVar18 + -1;
          *puVar24 = *puVar21;
        }
        puStack_b8 = (undefined8 *)*plVar11;
        *plVar11 = (long)puVar17;
        plVar20[2] = (long)puVar24;
        puStack_a0 = (undefined8 *)plVar20[4];
        puStack_a8 = (undefined8 *)plVar20[3];
        plVar20[3] = (long)puVar22;
        plVar20[4] = (long)puVar25;
        puStack_b0 = puVar18;
        func_0x00010bccfe44(&uStack_d0);
        func_0x00010bccfe70(&puStack_b8);
      }
    }
    else {
      plVar20[5] = uVar16 - 0x24;
      puVar14 = (undefined8 *)*puVar22;
      plVar20[2] = (long)(puVar22 + 1);
      FUN_10bccfcf8(plVar11);
    }
  }
  FUN_10bccf6ec(plVar11);
  *puVar14 = *puVar2;
  plVar11 = puVar14 + 1;
  (**(code **)(puVar23[2] + 0x10))(plVar11,puVar23 + 2);
  *(undefined1 *)(puVar14 + 0xc) = 1;
  puVar14[0xd] = param_1;
  plVar20[6] = plVar20[6] + 1;
  return plVar11;
}



/* Entry: 10bccff90; end: 10bccffb3;  */

void FUN_10bccff90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10bccffb4; end: 10bcd013f;  */

void FUN_10bccffb4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [88];
  undefined8 uStack_48;
  
  func_0x00010bcd0210();
  puVar6 = *(undefined1 **)(param_1 + 0x10);
  uVar1 = *(int *)(puVar6 + 0x38) + -1 == 0;
  *(int *)(puVar6 + 0x38) = *(int *)(puVar6 + 0x38) + -1;
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    do {
      if (*(long *)(puVar6 + 0x30) == 0) {
LAB_10bcd00ac:
        if ((puVar6[0x108] & 1) == 0) goto LAB_10bcd0108;
        if (*(long *)(puVar6 + 0x30) != 0) goto LAB_10bcd00c0;
        goto LAB_10bccffe8;
      }
      lVar4 = *(long *)(*(long *)(puVar6 + 0x10) + (*(ulong *)(puVar6 + 0x28) / 0x24) * 8);
      uVar5 = *(ulong *)(puVar6 + 0x28) % 0x24;
      uVar1 = *(char *)(lVar4 + uVar5 * 0x70 + 0x60) == '\x01';
      if (!(bool)uVar1) goto LAB_10bcd00ac;
      puVar3 = (undefined8 *)(lVar4 + uVar5 * 0x70);
      uStack_a8 = *puVar3;
      (**(code **)(puVar3[1] + 0x10))(auStack_a0);
      uVar7 = *(undefined8 *)
               (*(long *)(*(long *)(puVar6 + 0x10) + (*(ulong *)(puVar6 + 0x28) / 0x24) * 8) +
                (*(ulong *)(puVar6 + 0x28) % 0x24) * 0x70 + 0x68);
      func_0x00010bcd0328();
      puVar2 = puVar6;
      FUN_10bccf454(puVar6,&uStack_a8,uVar7);
      func_0x00010bcd0280();
      param_1 = auStack_a0;
      (*extraout_x8_00)();
    } while (((ulong)puVar2 & 1) != 0);
    goto LAB_10bccffec;
  }
  goto LAB_10bccffe8;
  while( true ) {
    func_0x00010bcd0328();
    func_0x00010bcd030c();
    if (((ulong)param_1 & 1) == 0) break;
LAB_10bcd0108:
    if (*(long *)(puVar6 + 0x30) == 0) goto LAB_10bccffe8;
  }
  goto LAB_10bccffec;
  while( true ) {
    *(int *)(puVar6 + 0x38) = *(int *)(puVar6 + 0x38) + 1;
    param_1 = puVar6;
    FUN_10bccf534(puVar6,lVar4,*(undefined8 *)(lVar4 + 0x68));
    func_0x00010bcd0328();
    if (*(long *)(puVar6 + 0x30) == 0) break;
LAB_10bcd00c0:
    lVar4 = *(long *)(*(long *)(puVar6 + 0x10) + (*(ulong *)(puVar6 + 0x28) / 0x24) * 8) +
            (*(ulong *)(puVar6 + 0x28) % 0x24) * 0x70;
    if ((*(byte *)(lVar4 + 0x60) & 1) != 0) break;
  }
LAB_10bccffe8:
  func_0x00010bcd030c();
LAB_10bccffec:
  func_0x00010bcd01dc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bcd0240();
  func_0x00010bcd02cc(*(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x24) * 8)
                        + (*(ulong *)(param_1 + 0x20) % 0x24) * 0x70 + 8));
  lVar4 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = lVar4 + 1U;
  if (0x47 < lVar4 + 1U) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x24;
  }
  return;
}



/* Entry: 10bcd0140; end: 10bcd01c3;  */

void FUN_10bcd0140(long param_1)

{
  ulong uVar1;
  
  func_0x00010bcd02cc(*(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x24) * 8)
                        + (*(ulong *)(param_1 + 0x20) % 0x24) * 0x70 + 8));
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x47 < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x24;
  }
  return;
}



/* Entry: 10bcd01c4; end: 10bcd0353;  */

void FUN_10bcd01c4(void)

{
  return;
}



/* Entry: 10bcd0354; end: 10bcd03eb;  */

undefined8 * FUN_10bcd0354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a638;
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_10bcd0438(param_1 + 0x15);
  func_0x00010bcd04a4(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcd03ec; end: 10bcd03ef;  */

undefined8 * FUN_10bcd03ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a5d8;
  _dispatch_group_wait(param_1[0x21],0xffffffffffffffff);
  _dispatch_release(param_1[0x20]);
  _dispatch_release(param_1[0x21]);
  *param_1 = &PTR_FUN_110d9a638;
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  FUN_10bcd0438(param_1 + 0x15);
  func_0x00010bcd04a4(param_1 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcd03f0; end: 10bcd0403;  */

void FUN_10bcd03f0(void)

{
  func_0x00010bcd03a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd0404; end: 10bcd042f;  */

bool FUN_10bcd0404(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  uVar3 = 0;
  _dispatch_queue_get_label();
  func_0x000100152bac(param_1 + 8);
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (uVar3 == uVar1) {
    func_0x000107c60bf4(unaff_x20,0,0xffffffffffffffff,unaff_x19,uVar3);
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bcd0430; end: 10bcd0437;  */

void FUN_10bcd0430(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcd0434);
  (*pcVar1)();
}



/* Entry: 10bcd0438; end: 10bcd054b;  */

long FUN_10bcd0438(long param_1)

{
  func_0x00010bcd045c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10bcd054c; end: 10bcd0563;  */

void FUN_10bcd054c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcd0564; end: 10bcd05df;  */

undefined8 FUN_10bcd0564(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110d9a668;
  func_0x000104c62e60(param_1[0xc],param_1[0xc],FUN_10bcd05f8);
  _dispatch_release(param_1[0xc]);
  func_0x000107c3a578();
  *param_1 = extraout_x8;
  FUN_10bcd060c(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10bcd05e0; end: 10bcd05e3;  */

undefined8 FUN_10bcd05e0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110d9a668;
  func_0x000104c62e60(param_1[0xc],param_1[0xc],FUN_10bcd05f8);
  _dispatch_release(param_1[0xc]);
  func_0x000107c3a578();
  *param_1 = extraout_x8;
  FUN_10bcd060c(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10bcd05e4; end: 10bcd05f7;  */

void FUN_10bcd05e4(void)

{
  FUN_10bcd0564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd05f8; end: 10bcd060b;  */

void FUN_10bcd05f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_set_specific_11034c100)(param_1,0x1138471c8,0,0);
  return;
}



/* Entry: 10bcd060c; end: 10bcd067f;  */

undefined8 FUN_10bcd060c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010bcd0640(&uStack_28);
  return param_1;
}



/* Entry: 10bcd0680; end: 10bcd0687;  */

void FUN_10bcd0680(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x80;
    func_0x000107c31488();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bcd0688; end: 10bcd06c3;  */

void FUN_10bcd0688(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x80;
    func_0x000107c31488();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10bcd06c4; end: 10bcd073b;  */

void FUN_10bcd06c4(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = 0x1138471c8;
  _dispatch_get_specific();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    uStack_28 = 1;
    lStack_30 = lVar2;
    __ZNSt3__115recursive_mutex4lockEv();
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_38 = lVar2;
    FUN_10bcd273c(lVar1,&lStack_38);
    func_0x000107c281c0(&lStack_30);
  }
  return;
}



/* Entry: 10bcd073c; end: 10bcd085b;  */

undefined8 * FUN_10bcd073c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110d9a6b0;
  param_1[1] = &PTR_DAT_110d9a720;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = param_1 + 7;
  func_0x000107c31490();
  lVar2 = param_2;
  func_0x000107c31494(param_1 + 7);
  do {
    lVar7 = param_2 + -0xfd8;
    do {
      if (param_2 == lVar2) {
        param_1[0xc] = 0;
        puVar5 = (undefined8 *)param_1[8];
        while( true ) {
          puVar6 = (undefined8 *)param_1[9];
          uVar3 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[8] + 8);
          param_1[8] = puVar5;
        }
        if (uVar3 == 1) {
          uVar4 = 0x13;
        }
        else {
          if (uVar3 != 2) goto LAB_10bcd081c;
          uVar4 = 0x27;
        }
        param_1[0xb] = uVar4;
LAB_10bcd081c:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        func_0x00010bcd09e0(param_1 + 7,param_1[8]);
        if (param_1[7] != 0) {
          __ZdlPv();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        return param_1;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar7 = lVar7 + 0x68;
      param_2 = param_2 + 0x68;
    } while (*plVar1 != lVar7);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10bcd085c; end: 10bcd0867;  */

undefined8 * FUN_10bcd085c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110d9a6b0;
  param_1[1] = &PTR_DAT_110d9a720;
  __ZNSt3__15mutexD1Ev(param_1 + 0xd);
  plVar1 = param_1 + 7;
  func_0x000107c31490();
  lVar2 = param_2;
  func_0x000107c31494(param_1 + 7);
  do {
    lVar7 = param_2 + -0xfd8;
    do {
      if (param_2 == lVar2) {
        param_1[0xc] = 0;
        puVar5 = (undefined8 *)param_1[8];
        while( true ) {
          puVar6 = (undefined8 *)param_1[9];
          uVar3 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[8] + 8);
          param_1[8] = puVar5;
        }
        if (uVar3 == 1) {
          uVar4 = 0x13;
        }
        else {
          if (uVar3 != 2) goto LAB_10bcd081c;
          uVar4 = 0x27;
        }
        param_1[0xb] = uVar4;
LAB_10bcd081c:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        func_0x00010bcd09e0(param_1 + 7,param_1[8]);
        if (param_1[7] != 0) {
          __ZdlPv();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
        return param_1;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar7 = lVar7 + 0x68;
      param_2 = param_2 + 0x68;
    } while (*plVar1 != lVar7);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10bcd0868; end: 10bcd087b;  */

void FUN_10bcd0868(void)

{
  FUN_10bcd073c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd087c; end: 10bcd088b;  */

void FUN_10bcd087c(long param_1)

{
  FUN_10bcd073c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd088c; end: 10bcd098f;  */

void FUN_10bcd088c(undefined ***param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined ***pppuVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar6 = &puStack_90;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_1 + 0x15;
  do {
    iVar2 = *(int *)pppuVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
    if (bVar4) {
      *(int *)pppuVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_1 != (undefined ***)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)(*param_1)[1];
      func_0x000107c3a57c(uStack_28);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bcd0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_10bcd096c;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0xac) = 1;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    puStack_90 = &UNK_1053a6a3c;
    ppuStack_88 = &PTR_DAT_110d9a7a0;
    uStack_30 = 0;
    func_0x000107c3148c(param_1 + 7);
    param_1 = &ppuStack_88;
    (*(code *)*ppuStack_88)();
    UNRECOVERED_JUMPTABLE = (code *)ppuVar6;
  }
  func_0x000107c3a57c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
LAB_10bcd096c:
  uVar5 = SUB81(UNRECOVERED_JUMPTABLE,0);
  ___stack_chk_fail();
  (*(code *)*ppuStack_88)(&ppuStack_88);
  __Unwind_Resume();
  *(undefined1 *)(param_1 + 0x17) = uVar5;
  return;
}



/* Entry: 10bcd0990; end: 10bcd09fb;  */

void FUN_10bcd0990(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb8) = param_2;
  return;
}



/* Entry: 10bcd09fc; end: 10bcd0aeb;  */

void FUN_10bcd09fc(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      func_0x000107c314a4();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10bcd0aec(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000107c314a8(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10bcd0aec; end: 10bcd0b13;  */

void FUN_10bcd0aec(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10bcd0b14; end: 10bcd0bdb;  */

void FUN_10bcd0b14(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)*param_1;
  lVar2 = ((undefined8 *)*param_1)[1];
  if (param_2 != param_3) {
    lVar4 = *plVar3;
    while( true ) {
      lVar1 = ((lVar4 - lVar2) + 0xfd8) / 0x68;
      lVar4 = (param_3 - param_2) / 0x68;
      if (lVar1 <= lVar4) {
        lVar4 = lVar1;
      }
      lVar4 = lVar4 * 0x68;
      lVar1 = param_2 + lVar4;
      for (; lVar4 != 0; lVar4 = lVar4 + -0x68) {
        func_0x000107c314ac(lVar2,param_2);
        param_2 = param_2 + 0x68;
        lVar2 = lVar2 + 0x68;
      }
      if (param_3 == lVar1) break;
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar4 = lVar2;
      param_2 = lVar1;
    }
    if (lVar2 == *plVar3 + 0xfd8) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
    }
  }
  param_1 = (undefined8 *)*param_1;
  *param_1 = plVar3;
  param_1[1] = lVar2;
  return;
}



/* Entry: 10bcd0bdc; end: 10bcd0bff;  */

void FUN_10bcd0bdc(void)

{
  return;
}



/* Entry: 10bcd0c00; end: 10bcd115f;  */

void FUN_10bcd0c00(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  puVar5 = param_1;
  plVar6 = param_2;
  func_0x000107c31480(param_1,param_2,param_5);
  lVar17 = 0;
  *puVar5 = &PTR_FUN_110d9a7c8;
  puVar5[0x21] = 0;
  puVar5[0x20] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x25] = 0;
  puVar5[0x24] = 0;
  puVar5[0x26] = 0x32aaaba7;
  puVar5[0x28] = 0;
  puVar5[0x27] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0x3cb0b1bb;
  puVar5[0x30] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x32] = 0;
  puVar5[0x31] = 0;
  puVar5[0x34] = 0;
  puVar5[0x33] = 0;
  puVar5[0x36] = 0;
  puVar5[0x35] = 0;
  puVar5[0x38] = 0;
  puVar5[0x37] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x39] = 0;
  *(undefined4 *)(puVar5 + 0x3b) = 0x3f800000;
  plVar1 = puVar5 + 0x36;
  plVar2 = puVar5 + 0x39;
  puVar5[0x3c] = 0;
  puVar5[0x3c] = param_3;
  do {
    if (lVar17 == param_3) {
      func_0x00010bcd1e78(param_1);
      return;
    }
    plVar15 = param_2;
    func_0x000107c27e5c();
    plStack_90 = plVar15;
    plStack_88 = plVar6;
    func_0x000107c2793c(&UNK_10f82fc57);
    func_0x000107c3173c(auStack_a8);
    plVar15 = (long *)param_1[0x35];
    if (plVar15 < (long *)param_1[0x36]) {
      func_0x00010bcd1e4c();
      plVar6 = plVar15 + 1;
      param_1[0x35] = plVar6;
    }
    else {
      puVar5 = param_1 + 0x34;
      func_0x000107313d30(puVar5,((long)plVar15 - param_1[0x34] >> 3) + 1);
      lVar8 = param_1[0x34];
      lVar3 = param_1[0x35];
      plStack_70 = plVar1;
      if (puVar5 == (undefined8 *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = plVar1;
        func_0x000107313df0();
      }
      plVar15 = (long *)((long)plVar6 + (lVar3 - lVar8));
      plStack_78 = plVar6 + (long)puVar5;
      plStack_90 = plVar6;
      plStack_88 = plVar15;
      plStack_80 = plVar15;
      func_0x00010bcd1e4c();
      plStack_80 = plVar15 + 1;
      func_0x000107313d70(param_1 + 0x34,&plStack_90);
      plVar6 = (long *)param_1[0x35];
      func_0x000107313f64(&plStack_90);
    }
    param_1[0x35] = plVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    plVar16 = *(long **)(param_1[0x35] + -8);
    plVar11 = param_1 + 0x3a;
    plVar6 = plVar16;
    func_0x000108b86130();
    plVar14 = (long *)param_1[0x38];
    if (plVar14 != (long *)0x0) {
      uVar7 = (long)plVar14 - 1;
      if (((ulong)plVar14 & uVar7) == 0) {
        plVar15 = (long *)(uVar7 & (ulong)plVar11);
      }
      else {
        plVar15 = plVar11;
        if (plVar14 <= plVar11) {
          uVar10 = 0;
          if (plVar14 != (long *)0x0) {
            uVar10 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar15 = (long *)((long)plVar11 - uVar10 * (long)plVar14);
        }
      }
      plVar9 = *(long **)(param_1[0x37] + (long)plVar15 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10bcd0e20;
            plVar12 = (long *)plVar9[1];
            if (plVar12 != plVar11) break;
            if (plVar16 == (long *)plVar9[2]) goto LAB_10bcd10c8;
          }
          if (((ulong)plVar14 & uVar7) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar7);
          }
          else if (plVar14 <= plVar12) {
            uVar10 = 0;
            if (plVar14 != (long *)0x0) {
              uVar10 = (ulong)plVar12 / (ulong)plVar14;
            }
            plVar12 = (long *)((long)plVar12 - uVar10 * (long)plVar14);
          }
        } while (plVar12 == plVar15);
      }
    }
LAB_10bcd0e20:
    plVar9 = (long *)0x18;
    __Znwm();
    plStack_80 = (long *)0x1;
    *plVar9 = 0;
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar16;
    plStack_88 = plVar2;
    if ((plVar14 == (long *)0x0) ||
       (*(float *)(param_1 + 0x3b) * (float)plVar14 < (float)(param_1[0x3a] + 1))) {
      uVar7 = 1;
      if ((long *)0x2 < plVar14) {
        uVar7 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
      }
      plVar15 = (long *)(uVar7 | (long)plVar14 << 1);
      plVar16 = (long *)(long)((float)(param_1[0x3a] + 1) / *(float *)(param_1 + 0x3b));
      if (plVar15 <= plVar16) {
        plVar15 = plVar16;
      }
      plStack_90 = plVar9;
      if ((long)plVar15 - 1U == 0) {
        plVar15 = (long *)0x2;
      }
      else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar14 = (long *)param_1[0x38];
      }
      if (plVar14 < plVar15) {
LAB_10bcd0ec4:
        plVar14 = plVar15;
        if ((ulong)plVar14 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10bcd10f4);
          (*pcVar4)();
        }
        plVar6 = (long *)((long)plVar14 << 3);
        __Znwm();
        func_0x00010bcd181c(param_1 + 0x37);
        param_1[0x38] = plVar14;
        lVar8 = param_1[0x37];
        for (plVar15 = (long *)0x0; plVar14 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
          *(undefined8 *)(lVar8 + (long)plVar15 * 8) = 0;
        }
        plVar15 = (long *)*plVar2;
        if (plVar15 != (long *)0x0) {
          plVar16 = (long *)plVar15[1];
          uVar10 = (long)plVar14 - 1;
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar16 / (ulong)plVar14;
          }
          plVar12 = plVar16;
          if (plVar14 <= plVar16) {
            plVar12 = (long *)((long)plVar16 - uVar7 * (long)plVar14);
          }
          if (((ulong)plVar14 & uVar10) == 0) {
            plVar12 = (long *)((ulong)plVar16 & uVar10);
          }
          *(long **)(lVar8 + (long)plVar12 * 8) = plVar2;
          while (plVar16 = plVar15, plVar15 = (long *)*plVar16, plVar15 != (long *)0x0) {
            plVar13 = (long *)plVar15[1];
            if (((ulong)plVar14 & uVar10) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar10);
            }
            else if (plVar14 <= plVar13) {
              uVar7 = 0;
              if (plVar14 != (long *)0x0) {
                uVar7 = (ulong)plVar13 / (ulong)plVar14;
              }
              plVar13 = (long *)((long)plVar13 - uVar7 * (long)plVar14);
            }
            if (plVar13 != plVar12) {
              if (*(long *)(lVar8 + (long)plVar13 * 8) == 0) {
                *(long **)(lVar8 + (long)plVar13 * 8) = plVar16;
                plVar12 = plVar13;
              }
              else {
                *plVar16 = *plVar15;
                *plVar15 = **(undefined8 **)(lVar8 + (long)plVar13 * 8);
                **(long **)(lVar8 + (long)plVar13 * 8) = (long)plVar15;
                plVar15 = plVar16;
              }
            }
          }
        }
      }
      else if (plVar15 < plVar14) {
        plVar16 = (long *)(long)((float)(ulong)param_1[0x3a] / *(float *)(param_1 + 0x3b));
        if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar16) {
          plVar16 = (long *)(1L << (-LZCOUNT((long)plVar16 + -1) & 0x3fU));
        }
        if (plVar15 <= plVar16) {
          plVar15 = plVar16;
        }
        if (plVar15 < plVar14) {
          if (plVar15 != (long *)0x0) goto LAB_10bcd0ec4;
          plVar6 = (long *)0x0;
          func_0x00010bcd181c(param_1 + 0x37);
          plVar14 = (long *)0x0;
          param_1[0x38] = 0;
        }
        else {
          plVar14 = (long *)param_1[0x38];
        }
      }
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar15 = (long *)((long)plVar14 - 1U & (ulong)plVar11);
      }
      else {
        plVar15 = plVar11;
        if (plVar14 <= plVar11) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar15 = (long *)((long)plVar11 - uVar7 * (long)plVar14);
        }
      }
    }
    lVar8 = param_1[0x37];
    plVar11 = *(long **)(lVar8 + (long)plVar15 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar9 = *plVar2;
      *plVar2 = (long)plVar9;
      *(long **)(lVar8 + (long)plVar15 * 8) = plVar2;
      if (*plVar9 != 0) {
        plVar15 = *(long **)(*plVar9 + 8);
        if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar14 - 1U);
        }
        else if (plVar14 <= plVar15) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar15 / (ulong)plVar14;
          }
          plVar15 = (long *)((long)plVar15 - uVar7 * (long)plVar14);
        }
        *(long **)(lVar8 + (long)plVar15 * 8) = plVar9;
      }
    }
    else {
      *plVar9 = *plVar11;
      *plVar11 = (long)plVar9;
    }
    plStack_90 = (long *)0x0;
    param_1[0x3a] = param_1[0x3a] + 1;
    FUN_10bcd1834(&plStack_90);
LAB_10bcd10c8:
    lVar17 = lVar17 + 1;
  } while( true );
}



/* Entry: 10bcd1160; end: 10bcd11ff;  */

void FUN_10bcd1160(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_110d9a7c8;
  while( true ) {
    lVar2 = param_1[0x34];
    lVar1 = param_1[0x35];
    if ((ulong)(lVar1 - lVar2 >> 3) <= uVar3) break;
    uStack_38 = 0;
    FUN_10bcd1200(param_1 + 0x20,&uStack_38);
    uVar3 = uVar3 + 1;
  }
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    __ZNSt3__16thread4joinEv(lVar2);
  }
  FUN_10bcd178c(param_1 + 0x37);
  func_0x000107314018(param_1 + 0x34);
  func_0x00010bcd1604(param_1 + 0x20);
  FUN_10bcd0354(param_1);
  return;
}



/* Entry: 10bcd1200; end: 10bcd125b;  */

void FUN_10bcd1200(long param_1)

{
  undefined8 uStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  uStack_28 = 0;
  func_0x00010bcd1860(param_1,&uStack_28);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x70);
  return;
}



/* Entry: 10bcd125c; end: 10bcd125f;  */

void FUN_10bcd125c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_110d9a7c8;
  while( true ) {
    lVar2 = param_1[0x34];
    lVar1 = param_1[0x35];
    if ((ulong)(lVar1 - lVar2 >> 3) <= uVar3) break;
    uStack_38 = 0;
    FUN_10bcd1200(param_1 + 0x20,&uStack_38);
    uVar3 = uVar3 + 1;
  }
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    __ZNSt3__16thread4joinEv(lVar2);
  }
  FUN_10bcd178c(param_1 + 0x37);
  func_0x000107314018(param_1 + 0x34);
  func_0x00010bcd1604(param_1 + 0x20);
  FUN_10bcd0354(param_1);
  return;
}



/* Entry: 10bcd1260; end: 10bcd1273;  */

void FUN_10bcd1260(void)

{
  FUN_10bcd1160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd1274; end: 10bcd12df;  */

void FUN_10bcd1274(long param_1,undefined8 *param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010bcd1e6c();
  __ZNSt3__15mutex4lockEv(param_1 + 0x130);
  lVar1 = unaff_x19 + 0x100;
  FUN_10bcd18a4();
  if (lVar1 == 0) {
    FUN_10bcd18cc(unaff_x19 + 0x100);
  }
  FUN_10bcd1708(unaff_x19 + 0x100);
  *param_2 = unaff_x20;
  *(long *)(unaff_x19 + 0x128) = *(long *)(unaff_x19 + 0x128) + 1;
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_1103465f0)(unaff_x19 + 0x170);
  return;
}



/* Entry: 10bcd12e0; end: 10bcd13b3;  */

undefined8 FUN_10bcd12e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = param_1;
  func_0x000107c27d0c();
  uVar8 = *(ulong *)(param_1 + 0x1c0);
  if ((uVar8 != 0) && (*(long *)(param_1 + 0x1d0) != 0)) {
    uVar3 = param_1 + 0x1d0;
    func_0x000108b86130(uVar3,lVar2);
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar8 <= uVar3) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar3 / uVar8;
        }
        uVar5 = uVar3 - uVar5 * uVar8;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x1b8) + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar3 != uVar7) break;
          if (plVar6[2] == lVar2) {
            return 1;
          }
        }
        if ((uVar8 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar8 <= uVar7) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar7 / uVar8;
          }
          uVar7 = uVar7 - uVar1 * uVar8;
        }
      } while (uVar7 == uVar5);
    }
  }
  return 0;
}



/* Entry: 10bcd13b4; end: 10bcd148b;  */

void FUN_10bcd13b4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010bcd1e6c();
  uVar2 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)0x30;
  uStack_38 = uVar2;
  __Znwm();
  uStack_38 = 0;
  uVar4 = *unaff_x20;
  *puVar3 = uVar2;
  puVar3[1] = uVar4;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(unaff_x20 + 1);
  uVar2 = unaff_x20[2];
  puVar3[4] = unaff_x20[3];
  puVar3[3] = uVar2;
  puVar3[5] = unaff_x20[4];
  unaff_x20[2] = 0;
  unaff_x20[3] = 0;
  unaff_x20[4] = 0;
  func_0x000107c2844c();
  if (unaff_w19 == 0) {
    func_0x00010bcd1e14();
    func_0x000107c28454(&uStack_38);
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcd1460);
  (*pcVar1)();
}



/* Entry: 10bcd148c; end: 10bcd15c7;  */

undefined8 FUN_10bcd148c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__119__thread_local_dataEv();
  uVar6 = *param_1;
  *param_1 = 0;
  func_0x000107c28450();
  lVar8 = param_1[1];
  puVar2 = (undefined8 *)param_1[3];
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    puVar2 = param_1 + 3;
  }
  _pthread_setname_np(puVar2);
  lVar5 = lVar8 + 8;
  func_0x000107c27e5c();
  lStack_40 = lVar5;
  uStack_38 = uVar6;
  func_0x000107c2793c(&UNK_10f82fc5e);
  func_0x000107c3173c(auStack_58);
  lVar5 = lVar8 + 0x130;
  while( true ) {
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    lStack_40 = lVar5;
    __ZNSt3__15mutex4lockEv(lVar5);
    while (*(long *)(lVar8 + 0x128) == 0) {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar8 + 0x170,&lStack_40);
    }
    FUN_10bcd1dec();
    func_0x000107c2798c(&lStack_40);
    if (unaff_x21 == 0) break;
    func_0x00010bcd1e58();
  }
  plVar1 = (long *)(lVar8 + 0x1e0);
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    while( true ) {
      __ZNSt3__15mutex4lockEv(lVar5);
      lVar7 = *(long *)(lVar8 + 0x128);
      if (lVar7 != 0) {
        FUN_10bcd1dec();
      }
      __ZNSt3__15mutex6unlockEv(lVar5);
      if (lVar7 == 0) break;
      func_0x00010bcd1e58();
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010bcd1e14();
  return 0;
}



/* Entry: 10bcd15c8; end: 10bcd1653;  */

long * FUN_10bcd15c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
    func_0x000107c28454(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd1654; end: 10bcd1697;  */

long * FUN_10bcd1654(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10bcd1698();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10bcd1768();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd1698; end: 10bcd1707;  */

void FUN_10bcd1698(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_10bcd1708();
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  if (uVar3 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar2 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10bcd1708; end: 10bcd173b;  */

void FUN_10bcd1708(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10bcd173c; end: 10bcd1767;  */

long * FUN_10bcd173c(long *param_1)

{
  FUN_10bcd1768();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd1768; end: 10bcd178b;  */

void FUN_10bcd1768(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10bcd178c; end: 10bcd1803;  */

long FUN_10bcd178c(long param_1)

{
  func_0x00010bcd17b4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10bcd1804(param_1,0);
  return param_1;
}



/* Entry: 10bcd1804; end: 10bcd1833;  */

void FUN_10bcd1804(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcd1834; end: 10bcd18a3;  */

long * FUN_10bcd1834(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd18a4; end: 10bcd18cb;  */

long FUN_10bcd18a4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10bcd18cc; end: 10bcd1bd7;  */

void FUN_10bcd18cc(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 unaff_x20;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong *puStack_120;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  
  if (param_1[4] < 0x200) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    puVar6 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar6;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0x1000;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          puStack_70 = puVar6;
          FUN_10bcd1cec();
          func_0x00010bcd1e1c(lVar11 * 2 + 6);
          FUN_10bcd1cc4(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (ulong)puStack_88;
          *param_1 = (ulong)puStack_90;
          param_1[3] = (ulong)puStack_78;
          param_1[2] = (ulong)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010bcd1e34();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (ulong)puVar12;
        FUN_10bcd1bd8(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (ulong)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      puStack_98 = puVar6;
      FUN_10bcd1cec();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0x1000;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uStack_c0 = 0x200;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          puStack_70 = puVar6;
          FUN_10bcd1cec();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_10bcd1cc4(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010bcd1e34();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            puStack_70 = puVar6;
            FUN_10bcd1cec(lVar11);
            func_0x00010bcd1e1c(lVar11 * 2 + 6);
            FUN_10bcd1cc4(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x00010bcd1e34();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (ulong)puVar9;
      param_1[1] = (ulong)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (ulong)puVar12;
      param_1[3] = (ulong)puVar15;
      puStack_b0 = puVar10;
      func_0x00010bcd1d20(&uStack_d0);
      func_0x00010bcd1d4c(&puStack_b8);
    }
    func_0x00010bcd1e78();
    return;
  }
  param_1[4] = param_1[4] - 0x200;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  puVar6 = param_1;
  func_0x00010bcd1e78(param_1,uVar7);
  func_0x00010bcd1e6c();
  puStack_120 = puVar6 + 3;
  puVar12 = (undefined8 *)puVar6[2];
  if (puVar12 == (undefined8 *)*puStack_120) {
    uVar17 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      uVar13 = (long)((long)puVar12 - uVar17) >> 2;
      if ((long)puVar12 - uVar17 == 0) {
        uVar13 = 1;
      }
      uVar17 = uVar13;
      FUN_10bcd1cec();
      uStack_138 = uVar17 + (uVar13 >> 2) * 8;
      uStack_128 = uVar17 + uVar8 * 8;
      uStack_140 = uVar17;
      uStack_130 = uStack_138;
      FUN_10bcd1cc4(&uStack_140,param_1[1],param_1[2]);
      uVar8 = param_1[1];
      uVar17 = *param_1;
      uVar18 = param_1[3];
      uVar13 = param_1[2];
      param_1[1] = uStack_138;
      *param_1 = uStack_140;
      param_1[3] = uStack_128;
      param_1[2] = uStack_130;
      uStack_140 = uVar17;
      uStack_138 = uVar8;
      uStack_130 = uVar13;
      uStack_128 = uVar18;
      func_0x00010bcd1d4c(&uStack_140);
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = param_1[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      param_1[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = unaff_x20;
  param_1[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 10bcd1bd8; end: 10bcd1cc3;  */

void FUN_10bcd1bd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010bcd1e6c();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10bcd1cec();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10bcd1cc4(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010bcd1d4c(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10bcd1cc4; end: 10bcd1ceb;  */

void FUN_10bcd1cc4(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 10bcd1cec; end: 10bcd1deb;  */

undefined1  [16] FUN_10bcd1cec(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10bcd1dec; end: 10bcd1e93;  */

void FUN_10bcd1dec(void)

{
  long unaff_x19;
  ulong uVar1;
  
  uVar1 = *(long *)(unaff_x19 + 0x120) + 1;
  *(long *)(unaff_x19 + 0x128) = *(long *)(unaff_x19 + 0x128) + -1;
  *(ulong *)(unaff_x19 + 0x120) = uVar1;
  if (0x3ff < uVar1) {
    __ZdlPv(**(undefined8 **)(unaff_x19 + 0x108));
    *(long *)(unaff_x19 + 0x108) = *(long *)(unaff_x19 + 0x108) + 8;
    *(long *)(unaff_x19 + 0x120) = *(long *)(unaff_x19 + 0x120) + -0x200;
  }
  return;
}



/* Entry: 10bcd1e94; end: 10bcd1fbb;  */

undefined8 * FUN_10bcd1e94(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x000107c31484();
  *puVar2 = &PTR_FUN_110d9a810;
  puVar2[0xc] = 0;
  FUN_10bcd209c(puVar2 + 0xd);
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar3 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar4 = (undefined8 *)0x10;
  uStack_38 = uVar3;
  __Znwm();
  uStack_38 = 0;
  *puVar4 = uVar3;
  puVar4[1] = param_1;
  puVar5 = auStack_48;
  puStack_40 = puVar4;
  func_0x000107c2844c(puVar5,FUN_10bcd2270,puVar4);
  if ((int)puVar5 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_10bcd2400(&puStack_40);
    func_0x000107c28454(&uStack_38);
    func_0x000107c284c4(puVar2 + 0xc,auStack_48);
    __ZNSt3__16threadD1Ev(auStack_48);
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bcd1f5c);
  (*pcVar1)();
}



/* Entry: 10bcd1fbc; end: 10bcd2027;  */

undefined8 FUN_10bcd1fbc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110d9a810;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 1);
  *(undefined1 *)(param_1 + 0x15) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 1);
  FUN_10bcd2028(param_1 + 0xd);
  __ZNSt3__16thread4joinEv(param_1 + 0xc);
  FUN_10bcd2248(param_1 + 0xd);
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  func_0x000107c3a578();
  *param_1 = extraout_x8;
  FUN_10bcd060c(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10bcd2028; end: 10bcd205f;  */

void FUN_10bcd2028(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  __ZNSt3__15mutex4lockEv(uVar1);
  __ZNSt3__15mutex6unlockEv(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_1103465f0)(param_1);
  return;
}



/* Entry: 10bcd2060; end: 10bcd2063;  */

undefined8 FUN_10bcd2060(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110d9a810;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 1);
  *(undefined1 *)(param_1 + 0x15) = 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 1);
  FUN_10bcd2028(param_1 + 0xd);
  __ZNSt3__16thread4joinEv(param_1 + 0xc);
  FUN_10bcd2248(param_1 + 0xd);
  __ZNSt3__16threadD1Ev(param_1 + 0xc);
  func_0x000107c3a578();
  *param_1 = extraout_x8;
  FUN_10bcd060c(param_1 + 9);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10bcd2064; end: 10bcd2077;  */

void FUN_10bcd2064(void)

{
  FUN_10bcd1fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd2078; end: 10bcd209b;  */

void FUN_10bcd2078(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c314bc();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  __ZNSt3__15mutex4lockEv(uVar1);
  __ZNSt3__15mutex6unlockEv(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_1103465f0)(param_1 + 0x68);
  return;
}



/* Entry: 10bcd209c; end: 10bcd20ef;  */

undefined8 * FUN_10bcd209c(undefined8 *param_1)

{
  *param_1 = 0x3cb0b1bb;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  FUN_10bcd20f0(param_1 + 6);
  return param_1;
}



/* Entry: 10bcd20f0; end: 10bcd210f;  */

void FUN_10bcd20f0(void)

{
  undefined1 uStack_11;
  
  FUN_10bcd2110(&uStack_11);
  return;
}



/* Entry: 10bcd2110; end: 10bcd21b7;  */

undefined1 * FUN_10bcd2110(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10bcd21b8(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_110b00d28;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0x32aaaba7;
  puStack_30[5] = 0;
  puStack_30[4] = 0;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[10] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_10bcd2238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10bcd21e0();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10bcd21b8; end: 10bcd21df;  */

long FUN_10bcd21b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcd21e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcd21e0; end: 10bcd220f;  */

long FUN_10bcd21e0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcd2210; end: 10bcd2237;  */

long FUN_10bcd2210(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bcd2238; end: 10bcd2247;  */

void FUN_10bcd2238(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcd2248; end: 10bcd226f;  */

void FUN_10bcd2248(long param_1)

{
  FUN_10bcd2210(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1);
  return;
}



/* Entry: 10bcd2270; end: 10bcd23ff;  */

undefined8 FUN_10bcd2270(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 **ppuStack_50;
  long lStack_48;
  
  puStack_90 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  lVar6 = param_1[1];
  while( true ) {
    uStack_78 = 1;
    lStack_80 = lVar6 + 8;
    __ZNSt3__115recursive_mutex4lockEv(lVar6 + 8);
    if ((*(byte *)(lVar6 + 0xa8) & 1) != 0) break;
    if (*(long *)(lVar6 + 0x48) == *(long *)(lVar6 + 0x50)) {
      uStack_88 = 0x7fffffffffffffff;
    }
    else {
      uStack_88 = *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x68);
    }
    ppuStack_60 = *(undefined8 ***)(lVar6 + 0x98);
    lStack_48 = *(long *)(lVar6 + 0xa0);
    if (lStack_48 != 0) {
      plVar1 = (long *)(lStack_48 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = 1;
    ppuStack_50 = ppuStack_60;
    __ZNSt3__15mutex4lockEv();
    plStack_68 = &lStack_80;
    func_0x00010731a274(&lStack_80);
    lVar4 = lVar6 + 0x68;
    ppuStack_70 = &ppuStack_60;
    func_0x000104c38e48(lVar4,&ppuStack_60,&uStack_88);
    FUN_10bcd2430(&ppuStack_70);
    FUN_10bcd2458(&plStack_68);
    func_0x000107c2798c(&ppuStack_60);
    pppuVar5 = &ppuStack_50;
    FUN_10bcd2210();
    if ((int)lVar4 == 1) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppuStack_50 = pppuVar5;
      FUN_10bcd273c(lVar6,&ppuStack_50);
    }
    func_0x00010bcd2488();
  }
  func_0x00010bcd2488();
  FUN_10bcd2400(&puStack_90);
  return 0;
}



/* Entry: 10bcd2400; end: 10bcd242f;  */

long * FUN_10bcd2400(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcd2430; end: 10bcd2457;  */

undefined8 * FUN_10bcd2430(undefined8 *param_1)

{
  func_0x000107c280c4(*param_1);
  return param_1;
}



/* Entry: 10bcd2458; end: 10bcd247f;  */

undefined8 * FUN_10bcd2458(undefined8 *param_1)

{
  func_0x0001090c7748(*param_1);
  return param_1;
}



/* Entry: 10bcd2480; end: 10bcd248f;  */

void FUN_10bcd2480(void)

{
  return;
}



/* Entry: 10bcd2490; end: 10bcd251b;  */

void FUN_10bcd2490(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001138471e0 & 1) == 0) {
    iVar3 = 0x138471e0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_10bcd251c(0x1138471d0);
      ___cxa_guard_release(0x1138471e0);
    }
  }
  lVar2 = lRam00000001138471d8;
  uVar1 = uRam00000001138471d0;
  param_1[1] = lRam00000001138471d8;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107c3a594();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10bcd251c; end: 10bcd2537;  */

void FUN_10bcd251c(void)

{
  undefined1 uStack_11;
  
  FUN_10bcd2a2c(&uStack_11);
  return;
}



/* Entry: 10bcd2538; end: 10bcd273b;  */

void FUN_10bcd2538(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_80;
  
  lVar10 = param_1;
  func_0x000107c3a58c();
  __ZNSt3__115recursive_mutex4lockEv(lVar10 + 8);
  uVar8 = *(ulong *)(param_1 + 0x50);
  uVar6 = *(ulong *)(param_1 + 0x48);
  for (uVar11 = uVar6; uVar11 != uVar8; uVar11 = uVar11 + 0x80) {
    uVar12 = uVar11;
    if (*(long *)(uVar11 + 0x60) == param_2) goto LAB_10bcd25a0;
  }
LAB_10bcd25fc:
  lVar10 = (long)(uVar8 - uVar6) >> 7;
  uVar5 = lVar10 - 2U == 0;
  if (1 < lVar10) {
    uVar11 = lVar10 - 2U >> 1;
    uVar12 = uVar11;
    do {
      uVar5 = uVar11 == uVar12;
      if ((long)uVar12 <= (long)uVar11) {
        uVar9 = (uVar12 & 0x3fffffffffffffff) << 1 | 1;
        uVar13 = uVar6 + uVar9 * 0x80;
        uVar8 = uVar12 * 2 + 2;
        uVar14 = uVar9;
        if ((long)uVar8 < lVar10) {
          plVar1 = (long *)(uVar13 + 0x68);
          lVar7 = *(long *)(uVar9 * 0x80 + uVar6 + 0x80 + 0x68);
          lVar3 = 0x80;
          if (*plVar1 <= lVar7) {
            lVar3 = 0;
          }
          uVar13 = uVar13 + lVar3;
          uVar14 = uVar8;
          if (*plVar1 <= lVar7) {
            uVar14 = uVar9;
          }
        }
        uVar8 = uVar6 + uVar12 * 0x80;
        uVar5 = *(long *)(uVar13 + 0x68) == *(long *)(uVar8 + 0x68);
        if (*(long *)(uVar13 + 0x68) <= *(long *)(uVar8 + 0x68)) {
          func_0x00010bcd2bd4();
          uVar9 = uVar8;
          do {
            uVar8 = uVar13;
            FUN_10bcd27f8(uVar9,uVar8);
            uVar5 = uVar11 == uVar14;
            if ((long)uVar11 < (long)uVar14) break;
            uVar2 = uVar14 << 1 | 1;
            uVar13 = uVar6 + uVar2 * 0x80;
            uVar9 = uVar14 * 2 + 2;
            uVar14 = uVar2;
            if ((long)uVar9 < lVar10) {
              plVar1 = (long *)(uVar13 + 0x68);
              lVar7 = *(long *)(uVar2 * 0x80 + uVar6 + 0x80 + 0x68);
              lVar3 = 0x80;
              if (*plVar1 <= lVar7) {
                lVar3 = 0;
              }
              uVar13 = uVar13 + lVar3;
              uVar14 = uVar9;
              if (*plVar1 <= lVar7) {
                uVar14 = uVar2;
              }
            }
            uVar5 = *(long *)(uVar13 + 0x68) == lStack_80;
            uVar9 = uVar8;
          } while (*(long *)(uVar13 + 0x68) <= lStack_80);
          func_0x00010bcd2be0();
          func_0x00010bcd2b9c();
        }
      }
      uVar12 = uVar12 - 1;
    } while (-1 < (long)uVar12);
  }
  func_0x000107c3a588(extraout_x8);
  if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 8);
    return;
  }
  ___stack_chk_fail();
  FUN_10bcd27f8(uVar11,uVar8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10bcd273c);
  (*pcVar4)();
LAB_10bcd25a0:
  while (uVar6 = uVar12 + 0x80, uVar6 != uVar8) {
    plVar1 = (long *)(uVar12 + 0xe0);
    uVar12 = uVar6;
    if (*plVar1 != param_2) {
      FUN_10bcd27f8(uVar11,uVar6);
      uVar11 = uVar11 + 0x80;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x50);
  if (uVar11 == uVar8) {
    uVar6 = *(ulong *)(param_1 + 0x48);
  }
  else {
    FUN_10bcd0688((ulong *)(param_1 + 0x48),uVar11);
    uVar6 = *(ulong *)(param_1 + 0x48);
    uVar8 = *(ulong *)(param_1 + 0x50);
  }
  goto LAB_10bcd25fc;
}



/* Entry: 10bcd273c; end: 10bcd27e3;  */

void FUN_10bcd273c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x000107c3a5b0();
  func_0x000107c3a58c();
  uStack_38 = extraout_x8;
  while( true ) {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    bVar1 = true;
    if ((lVar2 == *(long *)(unaff_x20 + 0x50)) ||
       (bVar1 = *(long *)(lVar2 + 0x68) == *unaff_x19,
       !bVar1 && *unaff_x19 <= *(long *)(lVar2 + 0x68))) break;
    if ((**(byte **)(lVar2 + 0x70) & 1) == 0) {
      (**(code **)(**(long **)(*(long *)(unaff_x20 + 0x48) + 0x60) + 0x10))();
    }
    func_0x00010bcd28b8(*(undefined8 *)(unaff_x20 + 0x48),*(long *)(unaff_x20 + 0x50));
    func_0x000107c314d4(auStack_b8,*(long *)(unaff_x20 + 0x50) + -0x80);
    param_1 = unaff_x20 + 0x48;
    FUN_10bcd27e4();
    func_0x00010bcd2b9c();
  }
  func_0x000107c3a588(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = *(long *)(param_1 + 8) + -0x80;
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != lVar3) {
    lVar2 = lVar2 + -0x80;
    func_0x000107c31488();
  }
  *(long *)(param_1 + 8) = lVar3;
  return;
}



/* Entry: 10bcd27e4; end: 10bcd27f7;  */

void FUN_10bcd27e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -0x80;
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x80;
    func_0x000107c31488();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10bcd27f8; end: 10bcd286f;  */

void FUN_10bcd27f8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c3a5b0();
  func_0x000107c314b0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  func_0x00010bcd282c(unaff_x20 + 0x70,unaff_x19 + 0x70);
  return;
}



/* Entry: 10bcd2870; end: 10bcd28a3;  */

void FUN_10bcd2870(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c314c8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x80;
  return;
}



/* Entry: 10bcd28a4; end: 10bcd28db;  */

void FUN_10bcd28a4(void)

{
  func_0x000104bd47e8(&UNK_10f82fc83);
  FUN_10bcd28dc();
  return;
}



/* Entry: 10bcd28dc; end: 10bcd299f;  */

long FUN_10bcd28dc(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x000107c3a58c();
  uVar3 = param_4 == 2;
  uStack_38 = extraout_x8;
  if (1 < param_4) {
    func_0x00010bcd2bd4();
    lVar4 = param_1;
    FUN_10bcd29a0(param_1,param_3);
    param_2 = param_2 + -0x80;
    uVar3 = param_2 == lVar4;
    if ((bool)uVar3) {
      FUN_10bcd27f8(lVar4,auStack_b8);
      param_1 = lVar4;
      param_3 = param_4;
    }
    else {
      FUN_10bcd27f8(lVar4,param_2);
      FUN_10bcd27f8(param_2,auStack_b8);
      func_0x000107c314d0(param_1,lVar4 + 0x80,param_3,(lVar4 + 0x80) - param_1 >> 7);
    }
    func_0x00010bcd2b9c();
  }
  func_0x000107c3a588(uStack_38);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bcd2b9c();
  func_0x00010bcd2b94();
  uVar5 = 0;
  do {
    lVar4 = param_1 + uVar5 * 0x80;
    uVar2 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    param_1 = lVar4 + 0x80;
    uVar5 = uVar2;
    if (((long)uVar1 < param_3) &&
       (param_1 = lVar4 + 0x100, uVar5 = uVar1, *(long *)(lVar4 + 0xe8) <= *(long *)(lVar4 + 0x168))
       ) {
      param_1 = lVar4 + 0x80;
      uVar5 = uVar2;
    }
    FUN_10bcd27f8();
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return param_1;
}



/* Entry: 10bcd29a0; end: 10bcd2a2b;  */

long FUN_10bcd29a0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    lVar2 = param_1 + uVar5 * 0x80;
    uVar3 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    lVar4 = lVar2 + 0x80;
    uVar5 = uVar3;
    if (((long)uVar1 < param_3) &&
       (lVar4 = lVar2 + 0x100, uVar5 = uVar1, *(long *)(lVar2 + 0xe8) <= *(long *)(lVar2 + 0x168)))
    {
      lVar4 = lVar2 + 0x80;
      uVar5 = uVar3;
    }
    FUN_10bcd27f8(param_1,lVar4);
    param_1 = lVar4;
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return lVar4;
}



/* Entry: 10bcd2a2c; end: 10bcd2a93;  */

undefined1 * FUN_10bcd2a2c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c3a58c();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10bcd2a94(auStack_40);
  FUN_10bcd2aec();
  func_0x000107c3a5ac();
  func_0x00010bcd2b54();
  func_0x000107c3a588(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010bcd2b54();
  func_0x00010bcd2b94();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10bcd2abc();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10bcd2a94; end: 10bcd2abb;  */

long FUN_10bcd2a94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10bcd2abc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10bcd2abc; end: 10bcd2aeb;  */

undefined8 * FUN_10bcd2abc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x147ae147ae147af) {
    puVar1 = (undefined8 *)(param_2 * 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d9a870;
  FUN_10bcd1e94(param_1 + 3);
  return param_1;
}



/* Entry: 10bcd2aec; end: 10bcd2b23;  */

undefined8 * FUN_10bcd2aec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d9a870;
  FUN_10bcd1e94(param_1 + 3);
  return param_1;
}



/* Entry: 10bcd2b24; end: 10bcd2b27;  */

void FUN_10bcd2b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9a870;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bcd2b28; end: 10bcd2b3b;  */

void FUN_10bcd2b28(void)

{
  func_0x00010bcd2b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd2b3c; end: 10bcd2b67;  */

void FUN_10bcd2b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcd2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcd2b68; end: 10bcd2b7b;  */

void FUN_10bcd2b68(void)

{
  func_0x00010bcd2b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcd2b7c; end: 10bcd2bf7;  */

void FUN_10bcd2b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcd2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10bcd2bf8; end: 10bcd2ce7;  */

void FUN_10bcd2bf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x000107c2b43c();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    unaff_x20 = puVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar1,0x40);
    for (lVar2 = 0; lVar2 != 0x20; lVar2 = lVar2 + 1) {
      *(ulong *)((long)register0x00000008 + -0x70) = (ulong)(byte)unaff_x21[lVar2];
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      func_0x000107c2793c(&UNK_10f82fc8a);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x88));
      func_0x000107c27fc4(puVar1,(undefined1 *)((long)register0x00000008 + -0x88));
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
    unaff_x30 = FUN_10bcd2ce8;
    __Unwind_Resume(unaff_x20);
    unaff_x22 = 0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10bcd2ce8; end: 10bcd2ceb;  */

void FUN_10bcd2ce8(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  long lVar1;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x000107c2b43c();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    unaff_x20 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,0x40);
    for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 1) {
      *(ulong *)((long)register0x00000008 + -0x70) = (ulong)(byte)unaff_x21[lVar1];
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      func_0x000107c2793c(&UNK_10f82fc8a);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x88));
      func_0x000107c27fc4(param_1,(undefined1 *)((long)register0x00000008 + -0x88));
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    unaff_x30 = FUN_10bcd2ce8;
    __Unwind_Resume(unaff_x20);
    unaff_x22 = 0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
    unaff_x19 = param_1;
  }
  return;
}


