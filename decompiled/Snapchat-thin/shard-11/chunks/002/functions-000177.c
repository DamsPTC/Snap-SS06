/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108353b88; end: 108353bb3;  */

bool FUN_108353b88(ushort *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return (*param_1 & 0xe000) != 0 || *(long *)(param_1 + 4) != 0;
  }
  return true;
}



/* Entry: 108353bb4; end: 108353be7;  */

ulong FUN_108353bb4(uint param_1,long param_2)

{
  if ((int)param_2 != 0) {
    FUN_108353a50(param_2);
    return param_2 * (ulong)param_1;
  }
  return (ulong)(param_1 + 7 >> 3);
}



/* Entry: 108353be8; end: 108353c57;  */

void FUN_108353be8(long param_1,long param_2,long param_3,undefined1 param_4,undefined1 param_5)

{
  long lVar1;
  
  FUN_108353c58();
  *(long *)(param_1 + 0x10) = param_2;
  if (param_3 != 0) {
    FUN_108376b90(param_2 + 8,param_3);
    func_0x0001083773e0(*(long *)(param_1 + 0x10) + 8);
    func_0x0001083772e0(*(long *)(param_1 + 0x10) + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(lVar1 + 0x18) = 1;
    *(undefined1 *)(lVar1 + 0x19) = param_4;
    *(undefined1 *)(lVar1 + 0x1a) = param_5;
  }
  return;
}



/* Entry: 108353c58; end: 108353c77;  */

void FUN_108353c58(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1083540e0(param_1,&uStack_11);
  return;
}



/* Entry: 108353c78; end: 108353d57;  */

byte FUN_108353c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_108395df4(param_3,param_1,param_2);
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 108353d58; end: 108353d77;  */

void FUN_108353d58(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000108354180(param_1,&uStack_11);
  return;
}



/* Entry: 108353d78; end: 108353da3;  */

undefined8 FUN_108353d78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_1083541f0(param_1,uVar1);
  return param_1;
}



/* Entry: 108353da4; end: 108353e47;  */

bool FUN_108353da4(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    (**(code **)(*param_3 + 0x28))(&uStack_28,param_3,param_1);
    uStack_30 = uStack_28;
    uStack_28 = 0;
    func_0x000108354260();
    func_0x000108353d00();
    FUN_10815b554(&uStack_30);
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x10) == '\x01') {
      bVar1 = *(long *)(*(long *)(param_1 + 0x18) + 8) != 0;
    }
    else {
      bVar1 = false;
    }
    func_0x000108354238();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108353e48; end: 108353ecf;  */

void FUN_108353e48(ulong *param_1,ulong param_2,short *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  uVar3 = (ulong)*(uint *)(param_3 + 0x16) & 0xfffff | (param_2 & 0xfffff) << 0x14;
  *param_1 = uVar3 | uVar2 & 0xffffff0000000000;
  uVar1 = 0x10000000000;
  if (param_3[1] != 0 && *param_3 != 0) {
    uVar1 = 0;
  }
  *param_1 = uVar1 | uVar3 | uVar2 & 0xfffffe0000000000;
  uVar3 = uVar1 | uVar3 | (ulong)(*(byte *)(param_3 + 0x14) & 7) << 0x29;
  *param_1 = uVar2 & 0xfffff00000000000 | uVar3;
  uVar1 = 0xfff00000000000;
  if (param_3[1] != 0 && *param_3 != 0) {
    uVar1 = 0;
  }
  *param_1 = uVar1 | uVar2 & 0xff00000000000000 | uVar3;
  uVar4 = NEON_rev32(*(undefined8 *)param_3,2);
  uVar3 = NEON_ext(uVar4,*(undefined8 *)param_3,4,1);
  param_1[1] = uVar3;
  return;
}



/* Entry: 108353ed0; end: 108353fcf;  */

void FUN_108353ed0(ulong *param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  
  if ((3 << (ulong)((uint)param_2 & 0x1f) & (uint)(*param_1 >> 0x2c) & 0xfff) != 0) {
    return;
  }
  uVar5 = 2;
  switch(param_2 & 0xffffffff) {
  case 0:
    func_0x00010835428c();
    bVar3 = 0x100 < extraout_w8;
    goto code_r0x000108353f40;
  default:
    goto LAB_108353fb8;
  case 2:
    pcVar6 = *(code **)(*param_4 + 0x30);
    break;
  case 4:
    func_0x00010835428c();
    bVar3 = 0xfe < extraout_w8_00;
code_r0x000108353f40:
    uVar4 = 1;
    if (bVar3) {
      uVar4 = 2;
    }
    uVar5 = (ulong)uVar4;
    goto LAB_108353fb8;
  case 6:
    uVar2 = *(ushort *)((long)param_1 + 0xc);
    if (*(ushort *)((long)param_1 + 0xc) <= *(ushort *)((long)param_1 + 0xe)) {
      uVar2 = *(ushort *)((long)param_1 + 0xe);
    }
    uVar4 = 1;
    if ((*param_1 & 0xe0000000000) != 0xa0000000000) {
      uVar4 = 2;
    }
    uVar1 = 2;
    if (uVar2 < 0x101) {
      uVar1 = uVar4;
    }
    uVar5 = (ulong)uVar1;
    goto LAB_108353fb8;
  case 8:
    pcVar6 = *(code **)(*param_4 + 0x38);
    break;
  case 10:
    pcVar6 = *(code **)(*param_4 + 0x40);
  }
  (*pcVar6)(param_4,param_3);
  uVar4 = 1;
  if ((int)param_4 == 0) {
    uVar4 = 2;
  }
  uVar5 = (ulong)uVar4;
LAB_108353fb8:
  *param_1 = *param_1 &
             ((ulong)(uint)~(3 << (ulong)((uint)param_2 & 0x1f)) << 0x2c | 0xff000fffffffffff) |
             (uVar5 << (param_2 & 0x3f) & 0xfff) << 0x2c;
  return;
}



/* Entry: 108353fd0; end: 108354037;  */

void FUN_108353fd0(ulong *param_1,uint param_2,long param_3)

{
  *param_1 = *param_1 & ((ulong)(uint)~(3 << (ulong)(param_2 & 0x1f)) << 0x2c | 0xff000fffffffffff)
             | (param_3 << ((ulong)param_2 & 0x3f) & 0xfffU) << 0x2c;
  return;
}



/* Entry: 108354038; end: 1083540b3;  */

undefined4 *
FUN_108354038(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  func_0x000108354000(param_4,param_5);
  *param_3 = param_1;
  param_3[1] = param_2;
  bVar5 = ((uint)param_4 & (uint)((int)param_5 != 1)) == 0;
  uVar1 = 0xffffffff00000000;
  if (bVar5) {
    uVar1 = 0;
  }
  uVar2 = 0xc000000000000;
  if (bVar5) {
    uVar2 = 0;
  }
  bVar5 = ((uint)param_4 & (uint)((int)param_5 != 2)) == 0;
  uVar3 = 0xffffffff;
  if (bVar5) {
    uVar3 = 0;
  }
  uVar4 = 3;
  if (bVar5) {
    uVar4 = 0;
  }
  *(ulong *)(param_3 + 2) = uVar1 | uVar3;
  *(ulong *)(param_3 + 4) = uVar2 | uVar4;
  return param_3;
}



/* Entry: 1083540b4; end: 1083540df;  */

void FUN_1083540b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083540d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083540e0; end: 1083541ef;  */

undefined8 * FUN_1083540e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  FUN_10840f8d0(param_1,0x29,8);
  iVar1 = *(int *)(param_1 + 1);
  param_1[1] = puVar2 + 4;
  puVar2[4] = 0x108354130;
  func_0x000108354240((int)puVar2 - iVar1);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_108376ad8(puVar2 + 1);
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined1 *)((long)puVar2 + 0x1a) = 0;
  return puVar2;
}



/* Entry: 1083541f0; end: 10835429f;  */

void FUN_1083541f0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083540d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083542a0; end: 1083542f7;  */

undefined8 * FUN_1083542a0(undefined8 *param_1,uint *param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[2] = (ulong)*param_2;
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = param_3;
  if ((param_4 == 0) || (FUN_108343d54(), (param_4 & 1) == 0)) {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}



/* Entry: 1083542f8; end: 108354f7b;  */

/* WARNING: Removing unreachable block (ram,0x0001083546a0) */
/* WARNING: Removing unreachable block (ram,0x0001083546b4) */
/* WARNING: Removing unreachable block (ram,0x00010835461c) */
/* WARNING: Removing unreachable block (ram,0x00010835463c) */
/* WARNING: Removing unreachable block (ram,0x00010835465c) */
/* WARNING: Removing unreachable block (ram,0x000108354690) */
/* WARNING: Removing unreachable block (ram,0x0001083547a8) */
/* WARNING: Removing unreachable block (ram,0x00010835459c) */
/* WARNING: Removing unreachable block (ram,0x000108354c78) */
/* WARNING: Removing unreachable block (ram,0x0001083547d0) */
/* WARNING: Removing unreachable block (ram,0x0001083547ec) */
/* WARNING: Removing unreachable block (ram,0x0001083547e4) */
/* WARNING: Removing unreachable block (ram,0x0001083547f0) */
/* WARNING: Removing unreachable block (ram,0x000108354828) */
/* WARNING: Removing unreachable block (ram,0x000108354830) */
/* WARNING: Removing unreachable block (ram,0x000108354888) */
/* WARNING: Removing unreachable block (ram,0x000108354c94) */
/* WARNING: Removing unreachable block (ram,0x000108354cac) */
/* WARNING: Removing unreachable block (ram,0x000108354d00) */
/* WARNING: Removing unreachable block (ram,0x000108354d08) */
/* WARNING: Removing unreachable block (ram,0x000108354d84) */

void FUN_1083542f8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long *param_7,long *param_8,ulong param_9,ulong *param_10)

{
  float *pfVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  ushort *puVar24;
  undefined1 *puVar25;
  ushort *puVar26;
  int iVar27;
  long lVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  ulong uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  long lStack_ae0;
  undefined4 uStack_a64;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  long lStack_9e0;
  undefined8 auStack_9d8 [5];
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 auStack_8e0 [24];
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  float fStack_7e0;
  uint uStack_7d8;
  undefined1 auStack_778 [512];
  undefined1 *puStack_578;
  undefined8 uStack_570;
  ushort auStack_568 [64];
  ushort *puStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [512];
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [512];
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = auStack_2c8;
  uStack_c0 = 0x8000000000;
  puStack_2d8 = auStack_4d8;
  uStack_2d0 = 0x8000000000;
  puStack_4e8 = auStack_568;
  uStack_4e0 = 0x8000000000;
  puStack_578 = auStack_778;
  uStack_570 = 0x8000000000;
  plVar14 = param_8;
  FUN_10831775c();
  iVar27 = (int)plVar14;
  if ((int)(uint)uStack_c0 < iVar27) {
    if ((uint)uStack_c0 == 0) {
      FUN_108354fac(0x3ff0000000000000,&puStack_c8,plVar14);
    }
    iVar27 = iVar27 - (uint)uStack_c0;
    FUN_108354fac(0x3ff8000000000000,&puStack_c8,iVar27);
    iVar27 = (uint)uStack_c0 + iVar27;
LAB_1083543f4:
    uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar27);
  }
  else if (iVar27 < (int)(uint)uStack_c0) {
    if (((uint)uStack_c0 & ((int)(uint)uStack_c0 >> 0x1f ^ 0xffffffffU)) < (uint)uStack_c0 - iVar27)
    goto LAB_108354e24;
    goto LAB_1083543f4;
  }
  func_0x0001083190bc(&puStack_2d8,plVar14);
  puVar11 = puStack_c8;
  puVar10 = puStack_2d8;
  FUN_108318f38(&puStack_4e8,plVar14);
  func_0x0001083190bc(&puStack_578,plVar14);
  puVar9 = puStack_4e8;
  puVar8 = puStack_578;
  if ((*(int *)(param_5 + 0x20) != 4) ||
     (uVar32 = param_9, FUN_1083762bc(), lStack_ae0 = param_5, (uVar32 & 1) == 0)) {
    lStack_ae0 = param_5 + 0x10;
  }
  fVar44 = *(float *)(param_8 + 5);
  fVar43 = *(float *)((long)param_8 + 0x2c);
  uVar37 = (ulong)(uint)fVar43;
  uStack_9a8 = param_10[1];
  uStack_9b0 = *param_10;
  uStack_998 = param_10[3];
  uStack_9a0 = param_10[2];
  uStack_990 = param_10[4];
  FUN_108363df0(fVar44,&uStack_9b0);
  puVar22 = (undefined8 *)*param_8;
  puVar21 = puVar22 + param_8[1] * 0xc;
  uVar32 = 1;
  for (; uVar13 = SBORROW8((long)puVar22,(long)puVar21), puVar22 != puVar21; puVar22 = puVar22 + 0xc
      ) {
    puVar26 = (ushort *)*puVar22;
    puVar25 = (undefined1 *)puVar22[1];
    lVar28 = puVar22[2];
    uVar15 = param_9;
    FUN_1083a298c(param_9,puVar22 + 9,&uStack_9b0);
    if ((int)uVar15 != 0) {
      FUN_1083a26e0(auStack_8e0,puVar22 + 9,param_9,lStack_ae0,*(undefined4 *)(param_5 + 0x24));
      FUN_1083a2c54(auStack_9d8,auStack_8e0);
      uVar29 = auStack_9d8[0];
      func_0x0001083550d0();
      iVar27 = 0;
      while (lVar28 != 0) {
        func_0x00010835513c();
        if (!(bool)uVar13) {
          uVar19 = 8;
          uVar16 = uVar29;
          FUN_1083a1488(uVar29,8,(ulong)*puVar26 << 2);
          uVar20 = (uint)((ulong)uVar16 >> 0x34) & 3;
          uVar13 = SBORROW4(uVar20,2);
          if (uVar20 == 2) {
            func_0x00010835508c();
            uStack_820 = (undefined4)uVar16;
            uStack_81c = (undefined4)((ulong)uVar16 >> 0x20);
            puVar9[iVar27] = (ushort)uVar16;
            *(ulong *)(puVar8 + (long)iVar27 * 8) = CONCAT44(uVar19,uStack_81c);
            iVar27 = iVar27 + 1;
            uStack_818 = uVar19;
          }
          else {
            uVar13 = SBORROW4(uVar20,1);
            if (uVar20 == 1) {
              func_0x000108355064();
            }
          }
        }
        func_0x0001083550c0();
      }
      func_0x0001083550d8();
      puVar26 = (ushort *)0x0;
      if (iVar27 != 0) {
        puVar26 = puVar9;
      }
      FUN_108375f34(&uStack_820,param_9);
      uVar20 = *(byte *)((long)puVar22 + 0x5d) - 1;
      uVar13 = SBORROW4(uVar20,2);
      uStack_7d8 = uStack_7d8 & 0xfffffffe;
      if (uVar20 < 2) {
        uStack_7d8 = uStack_7d8 + 1;
      }
      if (CONCAT44(uStack_814,uStack_818) == 0 && CONCAT44(uStack_81c,uStack_820) == 0) {
        uVar32 = (ulong)(uint)fStack_7e0;
        uVar13 = NAN(fStack_7e0);
      }
      FUN_108375e94(&uStack_820);
      uVar29 = auStack_9d8[0];
      if (iVar27 == 0) {
        puVar26 = (ushort *)0x0;
        puVar25 = (undefined1 *)0x0;
        lVar28 = 0;
      }
      else {
        func_0x0001083550d0();
        iVar23 = 0;
        while (iVar27 != 0) {
          func_0x00010835513c();
          if (!(bool)uVar13) {
            uVar19 = 10;
            uVar16 = uVar29;
            FUN_1083a1488(uVar29,10,(ulong)*puVar26 << 2);
            uVar20 = (uint)((ulong)uVar16 >> 0x36) & 3;
            uVar13 = SBORROW4(uVar20,2);
            if (uVar20 == 2) {
              func_0x00010835508c();
              uStack_820 = (undefined4)uVar16;
              uStack_81c = (undefined4)((ulong)uVar16 >> 0x20);
              puVar9[iVar23] = (ushort)uVar16;
              *(ulong *)(puVar8 + (long)iVar23 * 8) = CONCAT44(uVar19,uStack_81c);
              iVar23 = iVar23 + 1;
              uStack_818 = uVar19;
            }
            else {
              uVar13 = SBORROW4(uVar20,1);
              if (uVar20 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        uVar13 = 0;
        puVar25 = (undefined1 *)0x0;
        if (iVar23 != 0) {
          puVar25 = puVar8;
        }
        puVar26 = (ushort *)0x0;
        if (iVar23 != 0) {
          puVar26 = puVar9;
        }
        lVar28 = (long)iVar23;
      }
      FUN_1083145d8(auStack_9d8);
      func_0x0001083a261c(auStack_8e0);
    }
    if (lVar28 != 0) {
      uVar15 = 0;
      FUN_10828e338();
      if ((uVar15 & 1) == 0) {
        FUN_1083a2b0c(auStack_8e0,puVar22 + 9,param_9,lStack_ae0,*(undefined4 *)(param_5 + 0x24),
                      &uStack_9b0);
        FUN_1083a2c54(&uStack_a40,auStack_8e0);
        uVar15 = uStack_a40;
        uVar29 = *(undefined8 *)(uStack_a40 + 0x5c);
        uVar32 = (ulong)*(uint *)(uStack_a40 + 0x4c);
        uVar37 = (ulong)*(uint *)(uStack_a40 + 0x50);
        uStack_818 = (undefined4)uStack_9a8;
        uStack_814 = (undefined4)(uStack_9a8 >> 0x20);
        uStack_820 = (undefined4)uStack_9b0;
        uStack_81c = (undefined4)(uStack_9b0 >> 0x20);
        uStack_808 = uStack_998;
        uStack_810 = uStack_9a0;
        uStack_800 = uStack_990;
        param_3 = uStack_9b0;
        param_4 = uStack_9a0;
        FUN_108363ef4(&uStack_820);
        func_0x0001083550d0();
        iVar23 = 0;
        iVar27 = 0;
        while (lVar28 != 0) {
          func_0x000108355128();
          uVar33 = uVar32;
          uVar38 = uVar37;
          if (!(bool)uVar13) {
            FUN_1081790bc(&uStack_820);
            uVar17 = (ulong)*puVar26;
            uVar33 = uVar32;
            uVar38 = uVar37;
            uVar19 = (int)uVar29;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar20 = (uint)(uVar17 >> 0x2e) & 3;
            uVar13 = SBORROW4(uVar20,2);
            if (uVar20 == 2) {
              func_0x00010835508c();
              uStack_980 = (undefined4)uVar17;
              uStack_97c = (undefined4)(uVar17 >> 0x20);
              puVar9[iVar23] = (ushort)uVar17;
              *(ulong *)(puVar8 + (long)iVar23 * 8) = CONCAT44(uVar19,uStack_97c);
              iVar23 = iVar23 + 1;
              uStack_978 = uVar19;
            }
            else {
              uVar13 = SBORROW4(uVar20,1);
              if (uVar20 == 1) {
                uVar33 = (ulong)(uint)(int)(float)uVar37;
                uVar38 = (ulong)(uint)(int)(float)uVar32;
                *(undefined8 *)(puVar11 + (long)iVar27 * 8) =
                     *(undefined8 *)(*(long *)(uVar15 + 0x130) + (uVar17 >> 0x14 & 0xfffff) * 8);
                *(ulong *)(puVar10 + (long)iVar27 * 8) =
                     CONCAT44((int)(float)uVar37,(int)(float)uVar32);
                iVar27 = iVar27 + 1;
              }
            }
          }
          func_0x0001083550c0();
          uVar32 = uVar33;
          uVar37 = uVar38;
        }
        func_0x0001083550d8();
        puVar25 = (undefined1 *)0x0;
        if (iVar27 != 0) {
          puVar25 = puVar10;
        }
        puVar2 = (undefined1 *)0x0;
        if (iVar27 != 0) {
          puVar2 = puVar11;
        }
        uStack_810 = (ulong)iVar27;
        uStack_820 = SUB84(puVar2,0);
        uStack_81c = (undefined4)((ulong)puVar2 >> 0x20);
        uStack_818 = SUB84(puVar25,0);
        uStack_814 = (undefined4)((ulong)puVar25 >> 0x20);
        (**(code **)(*param_7 + 0x10))(param_7,&uStack_820,param_9);
        FUN_1083145d8(&uStack_a40);
        func_0x0001083a261c(auStack_8e0);
        if (iVar23 == 0) goto LAB_108354db4;
        lVar28 = (long)iVar23;
        puVar25 = puVar8;
        puVar26 = puVar9;
      }
      FUN_1083a2b0c(&uStack_820,puVar22 + 9,param_9,lStack_ae0,*(undefined4 *)(param_5 + 0x24),
                    0x113254e20);
      FUN_1083a2c80(auStack_8e0,&uStack_820);
      puVar18 = auStack_8e0;
      puVar24 = puVar26;
      FUN_1083a2cd4(puVar18,puVar26,lVar28);
      pfVar1 = (float *)(puVar25 + 4);
      fVar31 = -3.4028235e+38;
      for (; puVar24 != (ushort *)0x0; puVar24 = (ushort *)((long)puVar24 + -1)) {
        uVar42 = (undefined4)param_4;
        uVar39 = (undefined4)param_3;
        uVar34 = (undefined4)uVar37;
        uVar19 = (undefined4)uVar32;
        if ((*(short *)*puVar18 != 0) && (((short *)*puVar18)[1] != 0)) {
          FUN_10835060c();
          uStack_a40 = CONCAT44(uVar34,uVar19);
          uStack_a38 = CONCAT44(uVar42,uVar39);
          func_0x0001081836ec(fVar44 + pfVar1[-1],fVar43 + *pfVar1,&uStack_a40);
          FUN_1082fdf34(&uStack_9b0,&uStack_980,&uStack_a40);
          uVar29 = CONCAT44(uStack_974,uStack_978);
          func_0x000108355150(uVar29,CONCAT44(uStack_97c,uStack_980));
          fVar35 = (float)uVar29;
          func_0x0001083550e8();
          fVar5 = (float)uStack_a38;
          fVar36 = (float)uStack_a40;
          uVar29 = uStack_970;
          func_0x000108355150(uStack_970,CONCAT44(uStack_974,uStack_978));
          fVar40 = (float)uVar29;
          func_0x0001083550e8();
          fVar7 = uStack_a38._4_4_;
          fVar4 = uStack_a40._4_4_;
          uVar29 = uStack_968;
          func_0x000108355150(uStack_968,uStack_970);
          fVar41 = (float)uVar29;
          func_0x0001083550e8();
          fVar6 = (float)uStack_a38;
          fVar3 = (float)uStack_a40;
          uVar29 = CONCAT44(uStack_97c,uStack_980);
          func_0x000108355150(uVar29,uStack_968);
          fVar30 = (float)uVar29;
          func_0x0001083550e8();
          fVar35 = fVar35 / (fVar5 - fVar36);
          if (fVar35 <= fVar31) {
            fVar35 = fVar31;
          }
          fVar40 = fVar40 / (fVar7 - fVar4);
          if (fVar40 <= fVar35) {
            fVar40 = fVar35;
          }
          fVar41 = fVar41 / (fVar6 - fVar3);
          if (fVar41 <= fVar40) {
            fVar41 = fVar40;
          }
          uVar37 = (ulong)(uint)fVar41;
          param_4 = (ulong)(uint)uStack_a40._4_4_;
          param_3 = (ulong)(uint)(uStack_a38._4_4_ - uStack_a40._4_4_);
          fVar31 = fVar30 / (uStack_a38._4_4_ - uStack_a40._4_4_);
          uVar32 = (ulong)(uint)fVar31;
          if (fVar31 <= fVar41) {
            fVar31 = fVar41;
          }
        }
        puVar18 = puVar18 + 1;
        pfVar1 = pfVar1 + 2;
      }
      if (0.0 < fVar31) {
        fVar36 = fVar31 * *(float *)(puVar22 + 10);
        uVar13 = NAN(fVar36);
        fVar41 = 256.0 / *(float *)(puVar22 + 10);
        if (fVar36 <= 256.0) {
          fVar41 = fVar31;
        }
        func_0x00010815f6c0(auStack_9d8,fVar41,fVar41);
        FUN_1083a2b0c(&uStack_980,puVar22 + 9,param_9,lStack_ae0,*(undefined4 *)(param_5 + 0x24),
                      auStack_9d8);
        FUN_1083a2c54(&lStack_9e0,&uStack_980);
        uVar29 = *(undefined8 *)(lStack_9e0 + 0x5c);
        uVar37 = (ulong)*(uint *)(lStack_9e0 + 0x50);
        uStack_a38 = uStack_9a8;
        uStack_a40 = uStack_9b0;
        uStack_a28 = uStack_998;
        uStack_a30 = uStack_9a0;
        uStack_a20 = uStack_990;
        param_3 = uStack_9b0;
        param_4 = uStack_9a0;
        FUN_108363ef4(*(undefined4 *)(lStack_9e0 + 0x4c),&uStack_a40);
        func_0x0001083550d0();
        iVar27 = 0;
        while (lVar28 != 0) {
          func_0x000108355128();
          if (!(bool)uVar13) {
            FUN_1081790bc(&uStack_a40);
            uVar32 = (ulong)*puVar26;
            uVar19 = (int)uVar29;
            FUN_108318d84();
            func_0x0001083550f8();
            uVar20 = (uint)(uVar32 >> 0x2e) & 3;
            uVar13 = SBORROW4(uVar20,2);
            if (uVar20 == 2) {
              func_0x00010835508c();
              uStack_a64 = (undefined4)(uVar32 >> 0x20);
              puVar9[iVar27] = (ushort)uVar32;
              *(ulong *)(puVar8 + (long)iVar27 * 8) = CONCAT44(uVar19,uStack_a64);
              iVar27 = iVar27 + 1;
            }
            else {
              uVar13 = SBORROW4(uVar20,1);
              if (uVar20 == 1) {
                func_0x000108355064();
              }
            }
          }
          func_0x0001083550c0();
        }
        func_0x0001083550d8();
        uVar32 = 0x3f800000;
        FUN_1083145d8(&lStack_9e0);
        func_0x0001083a261c(&uStack_980);
      }
      FUN_1083a2cb4(auStack_8e0);
      func_0x0001083a261c(&uStack_820);
    }
LAB_108354db4:
  }
  func_0x0001083550e0(auStack_778);
  func_0x000108355104();
  func_0x0001083550e0(auStack_4d8);
  func_0x000108355110();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_108354e24:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x108354e28);
  (*pcVar12)();
}



/* Entry: 108354f7c; end: 108354fab;  */

undefined8 * FUN_108354f7c(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108354fac; end: 108355063;  */

void FUN_108354fac(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int unaff_w20;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000018;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - uVar1) < param_2) {
    if ((int)(uVar1 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
      uVar4 = *unaff_x25;
      *(undefined8 *)(unaff_x22 + (long)unaff_w20 * 8) =
           *(undefined8 *)(*(long *)(unaff_x24 + 0x130) + ((ulong)param_1 >> 0x14 & 0xfffff) * 8);
      *(undefined8 *)(in_stack_00000018 + (long)unaff_w20 * 8) = uVar4;
      return;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 8;
    uVar3 = (ulong)(uVar1 + param_2);
    FUN_10840fe24();
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(puVar2,*param_1,(long)*(int *)(param_1 + 1) << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    uVar3 = uVar3 >> 3;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *param_1 = puVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar3 << 1 | 1;
  }
  return;
}



/* Entry: 108355064; end: 10835515b;  */

void FUN_108355064(ulong param_1)

{
  undefined8 uVar1;
  int unaff_w20;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000058;
  
  uVar1 = *unaff_x25;
  *(undefined8 *)(unaff_x22 + (long)unaff_w20 * 8) =
       *(undefined8 *)(*(long *)(unaff_x24 + 0x130) + (param_1 >> 0x14 & 0xfffff) * 8);
  *(undefined8 *)(in_stack_00000058 + (long)unaff_w20 * 8) = uVar1;
  return;
}



/* Entry: 10835515c; end: 108355183;  */

void FUN_10835515c(void)

{
  int iVar1;
  
  FUN_108346020();
  FUN_108374af0();
  FUN_1083337b0();
  FUN_108334868();
  FUN_108334ab8();
  FUN_108366480();
  if ((bRam00000001138270c0 & 1) == 0) {
    iVar1 = 0x138270c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138270c0);
      return;
    }
  }
  return;
}



/* Entry: 108355184; end: 1083551f7;  */

long FUN_108355184(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  for (lVar2 = (long)*(int *)(param_1 + 0x20) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    if ((*(byte *)(*plVar1 + 0xc) & 1) == 0) {
      (**(code **)(*(long *)*plVar1 + 0x18))();
    }
    plVar1 = plVar1 + 1;
  }
  FUN_108355448((long *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108410224();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1083551f8; end: 10835528b;  */

void FUN_1083551f8(long param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_2 != 0) {
    func_0x0001081efc58();
    uVar1 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x20) <= (int)uVar1) break;
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x18) + uVar1 * 8) + 0xc) == '\x01') {
        FUN_10835528c(param_1 + 0x18,uVar1);
        uVar1 = (ulong)((int)uVar1 - 1);
      }
      uVar1 = (ulong)((int)uVar1 + 1);
    }
    func_0x0001083552d8(param_1 + 0x18,param_2);
    FUN_108355578();
  }
  return;
}



/* Entry: 10835528c; end: 10835536f;  */

void FUN_10835528c(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)(int)param_1[1] + -1;
  FUN_1082b91e4(*param_1 + (long)param_2 * 8);
  iVar1 = (int)lVar2;
  if (param_2 != iVar1) {
    *(undefined8 *)(*param_1 + (long)param_2 * 8) = *(undefined8 *)(*param_1 + lVar2 * 8);
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



/* Entry: 108355370; end: 1083553e7;  */

void FUN_108355370(void)

{
  long unaff_x19;
  long *plVar1;
  long lVar2;
  
  func_0x000108355580();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  for (lVar2 = (long)*(int *)(unaff_x19 + 0x20) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    if ((*(byte *)(*plVar1 + 0xc) & 1) == 0) {
      (**(code **)(*(long *)*plVar1 + 0x18))();
    }
    plVar1 = plVar1 + 1;
  }
  FUN_1083553e8((long *)(unaff_x19 + 0x18));
  func_0x000108355578();
  return;
}



/* Entry: 1083553e8; end: 10835540b;  */

void FUN_1083553e8(long param_1)

{
  FUN_108355480();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10835540c; end: 108355447;  */

void FUN_10835540c(void)

{
  long unaff_x19;
  
  func_0x000108355580();
  FUN_1083553e8(unaff_x19 + 0x18);
  func_0x000108355578();
  return;
}



/* Entry: 108355448; end: 10835547f;  */

undefined8 * FUN_108355448(undefined8 *param_1)

{
  FUN_108355480();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108355480; end: 1083554b7;  */

void FUN_108355480(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_1082b91e4();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1083554b8; end: 10835550b;  */

void FUN_1083554b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10835550c; end: 108355577;  */

void FUN_10835550c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108355578; end: 1083555af;  */

undefined8 * FUN_108355578(void)

{
  undefined8 in_stack_00000008;
  
  FUN_1081efca4(in_stack_00000008);
  return &stack0x00000008;
}



/* Entry: 1083555b0; end: 10835566f;  */

ulong FUN_1083555b0(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5,ulong *param_6)

{
  code *pcVar1;
  ulong *puVar2;
  long lVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_5 + 0x30) == 0) {
    uStack_40 = *param_6;
  }
  else {
    if (*(int *)(param_5 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108355670);
      (*pcVar1)();
    }
    if (**(long **)(param_5 + 0x10) == 0) {
      uStack_38 = param_6[1];
      param_1 = *param_6;
      uStack_40 = param_1;
    }
    else {
      FUN_108355ea4();
      uStack_40 = CONCAT44(param_2,(int)param_1);
      uStack_38 = CONCAT44(param_4,param_3);
    }
    for (lVar3 = 1; lVar3 < *(int *)(param_5 + 0x30); lVar3 = lVar3 + 1) {
      puVar2 = param_6;
      if (*(long *)(*(long *)(param_5 + 0x10) + lVar3 * 8) != 0) {
        FUN_108355ea4();
        uStack_50 = (undefined4)param_1;
        puVar2 = (ulong *)&uStack_50;
        uStack_4c = param_2;
        uStack_48 = param_3;
        uStack_44 = param_4;
      }
      func_0x00010838ed50(&uStack_40,puVar2);
    }
  }
  return uStack_40 & 0xffffffff;
}



/* Entry: 108355670; end: 108355687;  */

uint FUN_108355670(uint param_1)

{
  FUN_108355688();
  return param_1 ^ 1;
}



/* Entry: 108355688; end: 108355707;  */

bool FUN_108355688(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x58))();
    if (((ulong)plVar1 & 1) == 0) {
      for (lVar4 = 0; bVar3 = lVar4 < (int)param_1[6], lVar4 < (int)param_1[6]; lVar4 = lVar4 + 1) {
        uVar2 = *(ulong *)(param_1[2] + lVar4 * 8);
        if ((uVar2 != 0) && (FUN_108355688(), (uVar2 & 1) != 0)) {
          return bVar3;
        }
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 108355708; end: 108355793;  */

void FUN_108355708(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108355edc();
  (**(code **)(*param_1 + 0x40))();
  if ((int)param_1 != 0) {
    if (*(int *)(unaff_x20 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x108355794);
      (*pcVar5)();
    }
    if (**(long **)(unaff_x20 + 0x10) == 0) {
      iVar6 = (int)*unaff_x19;
      FUN_10833e038();
      if (iVar6 == 0) {
        return;
      }
    }
    plVar7 = (long *)*unaff_x19;
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return;
}



/* Entry: 108355794; end: 1083558a7;  */

undefined8 * FUN_108355794(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a3e8e8;
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(bool *)(param_1 + 7) = (~param_4 & 0x101) == 0;
  do {
    iVar3 = iRam0000000113254e04;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254e04,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113254e04 = iRam0000000113254e04 + 1;
    }
  } while ((cVar1 != '\0') || (iVar3 == 0));
  *(int *)((long)param_1 + 0x3c) = iVar3;
  FUN_1083558a8(plVar6,param_3);
  uVar7 = 0;
  while( true ) {
    if (uVar7 == ((uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU))) {
      return param_1;
    }
    if (((param_4 >> 8 & 1) == 0) &&
       ((lVar5 = *(long *)(param_2 + uVar7 * 8), lVar5 == 0 || (*(char *)(lVar5 + 0x38) == '\x01')))
       ) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    if ((long)*(int *)(param_1 + 6) <= (long)uVar7) break;
    FUN_10819a4d8(*plVar6 + uVar7 * 8,param_2 + uVar7 * 8);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108355890);
  (*pcVar4)();
}



/* Entry: 1083558a8; end: 10835594b;  */

void FUN_1083558a8(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar2 = uVar4 + (long)(int)param_1[4] * 8;
  while (uVar4 < uVar2) {
    uVar2 = uVar2 - 8;
    FUN_10811e834();
  }
  if ((uint)param_1[4] == param_2) {
    puVar3 = (ulong *)*param_1;
  }
  else {
    if (3 < (int)(uint)param_1[4]) {
      _free(*param_1);
    }
    if ((int)param_2 < 4) {
      puVar3 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar3 = (ulong *)0x0;
      }
    }
    else {
      puVar3 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar3,8);
    }
    *param_1 = (ulong)puVar3;
    *(uint *)(param_1 + 4) = param_2;
  }
  puVar1 = puVar3 + (int)param_2;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  return;
}



/* Entry: 10835594c; end: 1083559af;  */

undefined8 * FUN_10835594c(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083559b0; end: 108355a2f;  */

void FUN_1083559b0(void)

{
  long *unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x000108355edc();
  (**(code **)(*unaff_x19 + 0x38))();
  for (lVar2 = 0; lVar2 < *(int *)(unaff_x20 + 0x30); lVar2 = lVar2 + 1) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + lVar2 * 8);
    (**(code **)(*unaff_x19 + 0x20))();
    if (lVar1 != 0) {
      (**(code **)(*unaff_x19 + 0x58))();
    }
  }
  return;
}



/* Entry: 108355a30; end: 108355c07;  */

void FUN_108355a30(undefined8 param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  long lStack_84;
  long lStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  piVar3 = (int *)param_3[0x29];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  FUN_10833dd8c(param_1);
  if (((int)param_3[0x19] < (int)param_3[0x1a]) &&
     (*(int *)((long)param_3 + 0xcc) < *(int *)((long)param_3 + 0xd4))) {
    plVar2 = param_3 + 9;
    func_0x000108341318();
    if (((ulong)plVar2 & 1) != 0) {
      uVar6 = 0;
      uVar5 = 0;
      if ((char)param_2[7] == '\x01') {
        lVar4 = param_3[0x1b];
        uVar7 = 0;
        if (lVar4 != 0) {
          uVar5 = *(undefined4 *)(lVar4 + 0x1c);
          uVar7 = *(undefined8 *)(lVar4 + 0xc);
          uVar6 = *(undefined8 *)(lVar4 + 0x14);
        }
      }
      else {
        uVar7 = 0;
      }
      uVar1 = *(undefined4 *)((long)param_2 + 0x3c);
      FUN_10816eab0(&uStack_118,param_3 + 9);
      lStack_7c = param_3[0x1a];
      lStack_84 = param_3[0x19];
      uStack_a4 = uStack_110;
      uStack_ac = uStack_118;
      uStack_94 = uStack_100;
      uStack_9c = uStack_108;
      uStack_8c = uStack_f8;
      uStack_b0 = uVar1;
      uStack_74 = uVar5;
      uStack_70 = uVar7;
      uStack_68 = uVar6;
      func_0x0001081421e0(&uStack_ac);
      plVar2 = *(long **)(*param_3 + 0x10);
      if ((plVar2 == (long *)0x0) ||
         ((**(code **)(*plVar2 + 0x18))(plVar2,&uStack_b0,param_1), (int)plVar2 == 0)) {
        (**(code **)(*param_2 + 0x60))(&uStack_118,param_2,param_3);
        FUN_10833de08(param_1,&uStack_118);
        FUN_1083414c4(&uStack_118);
        plVar2 = *(long **)(*param_3 + 0x10);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_b0,param_2,param_1);
        }
      }
      else {
        lVar4 = param_3[0x29];
        if (lVar4 != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 108355c08; end: 108355d17;  */

void FUN_108355c08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000108355edc();
  func_0x00010833de38();
  bVar1 = *(char *)(param_8 + 0x10) != '\x01';
  uStack_40 = param_6;
  lStack_38 = param_7;
  if (bVar1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_108341348();
    uStack_58 = (undefined8 *)CONCAT44(param_2,param_1);
    uStack_50 = CONCAT44(param_4,param_3);
    puVar2 = &uStack_58;
    FUN_108341380();
    param_7 = param_8;
  }
  uStack_48 = !bVar1;
  uStack_58 = puVar2;
  uStack_50 = param_7;
  (**(code **)(*unaff_x20 + 0x68))();
  return;
}



/* Entry: 108355d18; end: 108355e27;  */

void FUN_108355d18(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x30))) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
    if (plVar2 == (long *)0x0) {
      uStack_28 = param_4[1];
      uStack_30 = *param_4;
      if (*(char *)(param_5 + 2) == '\x01') {
        func_0x00010821b838(&uStack_30,param_5);
      }
    }
    else {
      uStack_28 = param_5[1];
      uStack_30 = *param_5;
      uStack_20 = *(undefined4 *)(param_5 + 2);
      (**(code **)(*plVar2 + 0x68))(plVar2,param_3,param_4,&uStack_30);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108355db4);
  (*pcVar1)();
}



/* Entry: 108355e28; end: 108355e77;  */

void FUN_108355e28(undefined8 param_1,long param_2,uint param_3,long *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int *piVar5;
  long lVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  long lStack_84;
  long lStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_2 + 0x30))) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x10) + (ulong)param_3 * 8);
    if (plVar4 == (long *)0x0) {
      param_4 = param_4 + 0x1b;
      func_0x000108341e84(param_1);
      uVar8 = 0;
      if (*param_4 != 0) {
        do {
          func_0x000108341c8c();
          uVar8 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = uVar8;
      _memcpy(unaff_x19 + 1,unaff_x20 + 8,0x48);
      uVar8 = 0;
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        do {
          func_0x000108341c8c();
          uVar8 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      unaff_x19[10] = uVar8;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
      unaff_x19[0xc] = *(undefined8 *)(unaff_x20 + 0x60);
      unaff_x19[0xb] = uVar8;
      return;
    }
    piVar5 = (int *)param_4[0x29];
    if (piVar5 != (int *)0x0) {
      *piVar5 = *piVar5 + 1;
    }
    FUN_10833dd8c(param_1);
    if (((int)param_4[0x19] < (int)param_4[0x1a]) &&
       (*(int *)((long)param_4 + 0xcc) < *(int *)((long)param_4 + 0xd4))) {
      plVar3 = param_4 + 9;
      func_0x000108341318();
      if (((ulong)plVar3 & 1) != 0) {
        uVar8 = 0;
        uVar7 = 0;
        if ((char)plVar4[7] == '\x01') {
          lVar6 = param_4[0x1b];
          uVar9 = 0;
          if (lVar6 != 0) {
            uVar7 = *(undefined4 *)(lVar6 + 0x1c);
            uVar9 = *(undefined8 *)(lVar6 + 0xc);
            uVar8 = *(undefined8 *)(lVar6 + 0x14);
          }
        }
        else {
          uVar9 = 0;
        }
        uVar1 = *(undefined4 *)((long)plVar4 + 0x3c);
        FUN_10816eab0(&uStack_118,param_4 + 9);
        lStack_7c = param_4[0x1a];
        lStack_84 = param_4[0x19];
        uStack_a4 = uStack_110;
        uStack_ac = uStack_118;
        uStack_94 = uStack_100;
        uStack_9c = uStack_108;
        uStack_8c = uStack_f8;
        uStack_b0 = uVar1;
        uStack_74 = uVar7;
        uStack_70 = uVar9;
        uStack_68 = uVar8;
        func_0x0001081421e0(&uStack_ac);
        plVar3 = *(long **)(*param_4 + 0x10);
        if ((plVar3 == (long *)0x0) ||
           ((**(code **)(*plVar3 + 0x18))(plVar3,&uStack_b0,param_1), (int)plVar3 == 0)) {
          (**(code **)(*plVar4 + 0x60))(&uStack_118,plVar4,param_4);
          FUN_10833de08(param_1,&uStack_118);
          FUN_1083414c4(&uStack_118);
          plVar3 = *(long **)(*param_4 + 0x10);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,&uStack_b0,plVar4,param_1);
          }
        }
        else {
          lVar6 = param_4[0x29];
          if (lVar6 != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108355e5c);
  (*pcVar2)();
}



/* Entry: 108355e78; end: 108355ea3;  */

undefined8 FUN_108355e78(undefined8 param_1)

{
  FUN_1083558a8(param_1,0);
  return param_1;
}



/* Entry: 108355ea4; end: 108355ee7;  */

void FUN_108355ea4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108355eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 108355ee8; end: 108355f4f;  */

void FUN_108355ee8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a3e9a0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = param_2;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 1;
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  puVar1[0xb] = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  FUN_108355f50(&uStack_28);
  return;
}



/* Entry: 108355f50; end: 108355f9b;  */

long * FUN_108355f50(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108355f9c; end: 10835606b;  */

void FUN_108355f9c(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char cStack_39;
  undefined8 uStack_38;
  
  if ((param_2 & 1) != 0) {
    cStack_39 = cRam0000000113826cc0;
    if (cRam0000000113826cc0 == '\0') {
      iVar6 = 0x13826cc0;
      FUN_10825bc50(0x113826cc0,&cStack_39,1,0,0);
      if (iVar6 != 0) {
        FUN_108355ee8(&uStack_38,0x200000);
        uVar5 = uStack_38;
        uStack_38 = 0;
        FUN_108356f50(0x113826cc8,uVar5);
        FUN_1082e1f34(&uStack_38);
        cRam0000000113826cc0 = '\x02';
        goto LAB_108356040;
      }
    }
    do {
    } while (cRam0000000113826cc0 != '\x02');
  }
LAB_108356040:
  lVar4 = lRam0000000113826cc8;
  if (lRam0000000113826cc8 != 0) {
    piVar1 = (int *)(lRam0000000113826cc8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10835606c; end: 1083560ff;  */

undefined8 * FUN_10835606c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_110a3e9a0;
  for (lVar3 = 0; lVar3 < *(int *)((long)param_1 + 0x14); lVar3 = lVar3 + 1) {
    lVar1 = param_1[3];
    if (*(int *)(lVar1 + lVar2) != 0) {
      lVar1 = *(long *)(lVar1 + lVar2 + 8);
      if (lVar1 != 0) {
        FUN_1083414c4(lVar1 + 0x50);
      }
      __ZdlPv(lVar1);
    }
    lVar2 = lVar2 + 0x10;
  }
  FUN_108410074(param_1 + 10);
  FUN_108356530(param_1 + 7);
  FUN_1083565dc(param_1 + 3);
  return param_1;
}



/* Entry: 108356100; end: 108356113;  */

void FUN_108356100(void)

{
  FUN_10835606c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108356114; end: 1083561ab;  */

bool FUN_108356114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  func_0x000108357044();
  lVar1 = param_1 + 0x10;
  FUN_108356630(lVar1,param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x20);
    if (lVar1 != *plVar2) {
      FUN_1083566bc(plVar2,lVar1);
      func_0x0001083566e8(plVar2,lVar1);
    }
    func_0x0001083416a0(param_3,lVar1 + 0x50);
  }
  func_0x000108356fc4();
  return lVar1 != 0;
}



/* Entry: 1083561ac; end: 10835646b;  */

void FUN_1083561ac(long param_1,undefined8 param_2,undefined1 *param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lStack_70 = param_1 + 0x50;
  puStack_68 = param_3;
  func_0x0001081efc58();
  lVar12 = param_1 + 0x10;
  FUN_108356630(lVar12,param_2);
  if (lVar12 != 0) {
    func_0x000108356fbc();
  }
  puVar7 = (undefined1 *)0xd0;
  __Znwm();
  _memcpy();
  FUN_108341774(puVar7 + 0x50,param_4);
  *(undefined8 *)(puVar7 + 0xc0) = 0;
  *(undefined8 *)(puVar7 + 200) = 0;
  *(undefined1 **)(puVar7 + 0xb8) = param_3;
  iVar2 = *(int *)(param_1 + 0x14);
  puStack_60 = puVar7;
  if (iVar2 * 3 <= *(int *)(param_1 + 0x10) * 4) {
    iVar5 = iVar2 << 1;
    if (iVar2 < 1) {
      iVar5 = 4;
    }
    FUN_108356d74(param_1 + 0x10,iVar5);
  }
  FUN_108356e10(param_1 + 0x10,&puStack_60);
  func_0x0001083566e8(param_1 + 0x20,puVar7);
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x20))();
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (long)param_4;
  plVar8 = (long *)(param_1 + 0x30);
  ppuVar9 = &puStack_68;
  FUN_1083569c4();
  if (plVar8 == (long *)0x0) {
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
    plVar8 = (long *)0x1;
    puStack_60 = (undefined1 *)&plStack_90;
    FUN_108356ef0();
    plStack_80 = plVar8 + (long)ppuVar9;
    plStack_88 = plVar8 + 1;
    *plVar8 = (long)puVar7;
    plStack_58 = (long *)CONCAT71(plStack_58._1_7_,1);
    plStack_90 = plVar8;
    func_0x000108356f24(&puStack_60);
    plStack_50 = plStack_88;
    plStack_58 = plStack_90;
    plStack_48 = plStack_80;
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    iVar2 = *(int *)(param_1 + 0x34);
    puStack_60 = param_3;
    if (iVar2 * 3 <= *(int *)(param_1 + 0x30) * 4) {
      iVar5 = iVar2 << 1;
      if (iVar2 < 1) {
        iVar5 = 4;
      }
      FUN_108356bf0(param_1 + 0x30,iVar5);
    }
    FUN_108356cbc(param_1 + 0x30,&puStack_60);
    FUN_1083565c4(&plStack_58);
    FUN_1083565c4(&plStack_90);
  }
  else {
    plVar3 = (long *)plVar8[1];
    if (plVar3 < (long *)plVar8[2]) {
      plVar14 = plVar3 + 1;
      *plVar3 = (long)puVar7;
    }
    else {
      lVar12 = (long)plVar3 - *plVar8;
      uVar1 = (lVar12 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_108356edc();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x108356418);
        (*pcVar6)();
      }
      uVar10 = plVar8[2] - *plVar8;
      uVar11 = (long)uVar10 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar11 = 0x1fffffffffffffff;
      }
      FUN_108356ef0();
      lVar4 = *plVar8;
      plVar3 = (long *)(uVar11 + lVar12);
      lVar13 = (long)plVar3 - (plVar8[1] - lVar4);
      plVar14 = plVar3 + 1;
      *plVar3 = (long)puVar7;
      _memcpy(lVar13,lVar4);
      lVar12 = *plVar8;
      *plVar8 = lVar13;
      plVar8[1] = (long)plVar14;
      plVar8[2] = uVar11 + (long)ppuVar9 * 8;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    plVar8[1] = (long)plVar14;
  }
  while ((*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48) &&
         (*(undefined1 **)(param_1 + 0x28) != puVar7))) {
    func_0x000108356fbc();
  }
  FUN_1081efc78(&lStack_70);
  return;
}



/* Entry: 10835646c; end: 1083564af;  */

void FUN_10835646c(long param_1)

{
  func_0x000108357044();
  while (*(long *)(param_1 + 0x48) != 0) {
    func_0x000108356fbc();
  }
  func_0x000108356fc4();
  return;
}



/* Entry: 1083564b0; end: 10835652f;  */

void FUN_1083564b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_1 + 0x50;
  uStack_38 = param_2;
  func_0x0001081efc58();
  puVar2 = (undefined8 *)(param_1 + 0x30);
  FUN_1083569c4(puVar2,&uStack_38);
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar2[1];
    for (plVar3 = (long *)*puVar2; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      *(undefined8 *)(*plVar3 + 0xb8) = 0;
      func_0x000108356fbc();
    }
    FUN_108356a28(param_1 + 0x30,&uStack_38);
  }
  FUN_1081efc78(&lStack_40);
  return;
}



/* Entry: 108356530; end: 108356593;  */

long * FUN_108356530(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + -8);
    if (lVar1 != 0) {
      lVar3 = lVar1 * -0x28;
      lVar1 = lVar2 + lVar1 * 0x28;
      do {
        lVar1 = lVar1 + -0x28;
        FUN_108356594(lVar1);
        lVar3 = lVar3 + 0x28;
      } while (lVar3 != 0);
    }
    __ZdaPv(lVar2 + -0x10);
  }
  return param_1;
}



/* Entry: 108356594; end: 1083565c3;  */

void FUN_108356594(int *param_1)

{
  if (*param_1 != 0) {
    FUN_1083565c4(param_1 + 4);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083565c4; end: 1083565db;  */

void FUN_1083565c4(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083565dc; end: 10835662f;  */

long * FUN_1083565dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    __ZdaPv(lVar1 + -0x10);
  }
  return param_1;
}



/* Entry: 108356630; end: 1083566bb;  */

undefined8 FUN_108356630(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  int iVar5;
  
  uVar3 = param_2;
  FUN_108356710();
  iVar5 = 0;
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar4 <= iVar5) {
      return 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)(uVar2 - 1 & (uint)uVar3) * 0x10);
    if (*puVar1 == 0) break;
    if (((uint)uVar3 == *puVar1) &&
       (uVar4 = param_2, FUN_108356734(param_2,*(undefined8 *)(puVar1 + 2)), (uVar4 & 1) != 0)) {
      return *(undefined8 *)(puVar1 + 2);
    }
    func_0x000108357050();
    iVar5 = iVar5 + 1;
    uVar4 = extraout_x8;
  }
  return 0;
}



/* Entry: 1083566bc; end: 10835670f;  */

void FUN_1083566bc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0xc0);
  lVar2 = *(long *)(param_2 + 200);
  if (lVar1 == 0) {
    *param_1 = lVar2;
  }
  else {
    *(long *)(lVar1 + 200) = lVar2;
  }
  if (lVar2 == 0) {
    param_1[1] = lVar1;
  }
  else {
    *(long *)(lVar2 + 0xc0) = lVar1;
  }
  *(long *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  return;
}



/* Entry: 108356710; end: 108356733;  */

uint FUN_108356710(undefined8 param_1)

{
  uint uVar1;
  
  FUN_108343308(param_1,0x50,0);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108356734; end: 1083567ab;  */

bool FUN_108356734(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_1 == *param_2) {
    piVar1 = param_1 + 1;
    func_0x000108363bec(piVar1,param_2 + 1);
    if ((int)piVar1 != 0) {
      piVar1 = param_1 + 0xb;
      FUN_108279bb8(piVar1,param_2 + 0xb);
      if (((int)piVar1 != 0) && (param_1[0xf] == param_2[0xf])) {
        param_1 = param_1 + 0x10;
        _memcmp(param_1,param_2 + 0x10,0x10);
        return (int)param_1 == 0;
      }
    }
  }
  return false;
}



/* Entry: 1083567ac; end: 1083569c3;  */

void FUN_1083567ac(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  
  plVar14 = (long *)(param_2 + 0xb8);
  if (*plVar14 != 0) {
    plVar6 = (long *)(param_1 + 0x30);
    FUN_1083569c4(plVar6,plVar14);
    if (plVar6 != (long *)0x0) {
      puVar9 = (ulong *)*plVar6;
      puVar3 = (ulong *)plVar6[1];
      lVar11 = (long)puVar3 + (-8 - (long)puVar9);
      if ((lVar11 == 0) && (*puVar9 == param_2)) {
        FUN_108356a28(param_1 + 0x30,plVar14);
      }
      else {
        for (; puVar9 != puVar3; puVar9 = puVar9 + 1) {
          if (*puVar9 == param_2) {
            if (puVar9 + 1 != puVar3) {
              _memmove(puVar9,puVar9 + 1,lVar11);
            }
            plVar6[1] = (long)puVar9 + lVar11;
            break;
          }
          lVar11 = lVar11 + -8;
        }
      }
    }
  }
  plVar14 = *(long **)(param_2 + 0x50);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) - (long)plVar14;
  FUN_1083566bc(param_1 + 0x20,param_2);
  uVar7 = param_2;
  FUN_108356710();
  uVar8 = (ulong)*(uint *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x14) - 1 & (uint)uVar7;
  uVar12 = (ulong)uVar10;
  for (iVar13 = 0; iVar13 < (int)uVar8; iVar13 = iVar13 + 1) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar10 * 0x10);
    uVar4 = *puVar1;
    if (uVar4 == 0) break;
    if (((uint)uVar7 == uVar4) &&
       (uVar8 = param_2, FUN_108356734(param_2,*(undefined8 *)(puVar1 + 2)), (uVar8 & 1) != 0)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      do {
        lVar11 = *(long *)(param_1 + 0x18);
        uVar10 = (uint)uVar12;
        puVar1 = (uint *)(lVar11 + (long)(int)uVar10 * 0x10);
        do {
          uVar4 = (int)uVar12 - 1;
          if ((int)uVar12 < 1) {
            uVar4 = *(int *)(param_1 + 0x14) + uVar4;
          }
          uVar12 = (ulong)uVar4;
          uVar5 = *(uint *)(lVar11 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4));
          if (uVar5 == 0) {
            if (*puVar1 != 0) {
              *puVar1 = 0;
            }
            uVar10 = *(uint *)(param_1 + 0x14);
            if ((4 < (int)uVar10) && (*(int *)(param_1 + 0x10) * 4 <= (int)uVar10)) {
              FUN_108356d74(param_1 + 0x10,uVar10 >> 1);
            }
            goto LAB_1083569a4;
          }
          uVar2 = *(int *)(param_1 + 0x14) - 1U & uVar5;
        } while (((int)uVar4 <= (int)uVar2 && (int)uVar2 < (int)uVar10) ||
                (((int)uVar10 < (int)uVar4 && ((int)uVar2 < (int)uVar10 || (int)uVar4 <= (int)uVar2)
                 )));
        if (uVar10 != uVar4) {
          *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(lVar11 + (long)(int)uVar4 * 0x10 + 8);
          *puVar1 = uVar5;
        }
      } while( true );
    }
    func_0x000108357050();
    uVar8 = extraout_x8;
  }
LAB_1083569a4:
  FUN_1083414c4((long *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1083569c4; end: 108356a27;  */

int * FUN_1083569c4(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *piVar6;
  long unaff_x19;
  
  func_0x000108356f9c();
  func_0x000108356ff8();
  uVar2 = extraout_x9;
  lVar3 = extraout_x10;
  iVar4 = extraout_w12;
  iVar5 = extraout_w11;
  while (iVar5 != 0) {
    piVar6 = (int *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * (long)iVar4);
    if (*piVar6 == 0) break;
    if (((int)param_1 == *piVar6) && (lVar3 == *(long *)(piVar6 + 2))) {
      piVar6 = piVar6 + 2;
      goto LAB_108356a0c;
    }
    func_0x000108357014();
    uVar2 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    iVar4 = extraout_w12_00;
    iVar5 = extraout_w11_00;
  }
  piVar6 = (int *)0x0;
LAB_108356a0c:
  piVar1 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    piVar1 = piVar6 + 2;
  }
  return piVar1;
}



/* Entry: 108356a28; end: 108356bcb;  */

void FUN_108356a28(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int *unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  uint uVar10;
  ulong uVar12;
  long unaff_x22;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar11;
  
  func_0x000108356f9c();
  uVar11 = unaff_x19[1];
  uVar10 = uVar11 - 1 & param_1;
  uVar3 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 2);
    puVar9 = (uint *)(lVar6 + (long)(int)uVar10 * 0x28);
    uVar7 = *puVar9;
    if (uVar7 == 0) break;
    if ((param_1 == uVar7) && (*unaff_x20 == *(long *)(puVar9 + 2))) {
      *unaff_x19 = *unaff_x19 + -1;
      uVar3 = uVar10;
      while( true ) {
        uVar11 = uVar3;
        uVar3 = uVar10 - 1;
        bVar1 = (int)uVar10 < 1;
        uVar10 = uVar3;
        if (bVar1) {
          uVar10 = unaff_x19[1] + uVar3;
        }
        puVar9 = (uint *)(lVar6 + (long)(int)uVar10 * 0x28);
        uVar7 = *puVar9;
        if (uVar7 == 0) break;
        uVar2 = unaff_x19[1] - 1U & uVar7;
        uVar3 = uVar11;
        if ((int)uVar2 < (int)uVar10 || (int)uVar11 <= (int)uVar2) {
          if ((((int)uVar10 <= (int)uVar11) ||
              ((int)uVar11 <= (int)uVar2 && (int)uVar2 < (int)uVar10)) &&
             (uVar3 = uVar10, uVar11 != uVar10)) {
            puVar13 = (uint *)(lVar6 + (long)(int)uVar11 * 0x28);
            if (*puVar13 == 0) {
              FUN_108356c94(puVar13 + 2,puVar9 + 2);
              uVar7 = *puVar9;
            }
            else {
              puVar14 = puVar13 + 4;
              *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar9 + 2);
              if (*(long *)puVar14 != 0) {
                *(long *)(puVar13 + 6) = *(long *)puVar14;
                __ZdlPv();
                puVar14[0] = 0;
                puVar14[1] = 0;
                puVar13[6] = 0;
                puVar13[7] = 0;
                puVar13[8] = 0;
                puVar13[9] = 0;
                uVar7 = *puVar9;
              }
              uVar15 = *(undefined8 *)(puVar9 + 4);
              *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar9 + 6);
              *(undefined8 *)(puVar13 + 4) = uVar15;
              *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar9 + 8);
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              puVar9[9] = 0;
            }
            *puVar13 = uVar7;
            lVar6 = *(long *)(unaff_x19 + 2);
          }
        }
      }
      FUN_108356594(lVar6 + (long)(int)uVar11 * 0x28);
      uVar10 = unaff_x19[1];
      if ((4 < (int)uVar10) && (*unaff_x19 * 4 <= (int)uVar10)) {
        uVar5 = (ulong)(uVar10 >> 1);
        uVar12 = uVar5;
        func_0x000108356fdc();
        puVar4 = (undefined8 *)((uVar12 & 0xffffffff) * 0x28 + 0x10);
        __Znam();
        *puVar4 = 0x28;
        puVar4[1] = uVar5;
        lVar6 = uVar5 * 0x28;
        puVar8 = puVar4 + 2;
        do {
          *(undefined4 *)puVar8 = 0;
          lVar6 = lVar6 + -0x28;
          puVar8 = puVar8 + 5;
        } while (lVar6 != 0);
        *(undefined8 **)(unaff_x19 + 2) = puVar4 + 2;
        lVar6 = unaff_x22 + 8;
        for (uVar12 = (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
            uVar12 = uVar12 - 1) {
          if (*(int *)(lVar6 + -8) != 0) {
            FUN_108356cbc(unaff_x19,lVar6);
          }
          lVar6 = lVar6 + 0x28;
        }
        FUN_108356530(&stack0xffffffffffffffc8);
        return;
      }
      return;
    }
    uVar7 = 0;
    if ((int)uVar10 < 1) {
      uVar7 = uVar11;
    }
    uVar10 = (uVar10 + uVar7) - 1;
    uVar3 = uVar3 - 1;
  }
  return;
}



/* Entry: 108356bcc; end: 108356bef;  */

uint FUN_108356bcc(undefined8 param_1)

{
  uint uVar1;
  
  FUN_108343308(param_1,8,0);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108356bf0; end: 108356c93;  */

void FUN_108356bf0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  uint unaff_w21;
  ulong uVar4;
  long unaff_x22;
  undefined1 auStack_38 [8];
  
  uVar4 = param_2;
  func_0x000108356fdc();
  puVar1 = (undefined8 *)((uVar4 & 0xffffffff) * 0x28 + 0x10);
  __Znam();
  *puVar1 = 0x28;
  puVar1[1] = param_2 & 0xffffffff;
  lVar2 = (param_2 & 0xffffffff) * 0x28;
  puVar3 = puVar1 + 2;
  do {
    *(undefined4 *)puVar3 = 0;
    lVar2 = lVar2 + -0x28;
    puVar3 = puVar3 + 5;
  } while (lVar2 != 0);
  *(undefined8 **)(unaff_x19 + 8) = puVar1 + 2;
  lVar2 = unaff_x22 + 8;
  for (uVar4 = (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    if (*(int *)(lVar2 + -8) != 0) {
      FUN_108356cbc();
    }
    lVar2 = lVar2 + 0x28;
  }
  FUN_108356530(auStack_38);
  return;
}



/* Entry: 108356c94; end: 108356cbb;  */

void FUN_108356c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 108356cbc; end: 108356d37;  */

int * FUN_108356cbc(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *unaff_x19;
  
  func_0x000108356f9c();
  piVar4 = param_1;
  func_0x000108356ff8();
  iVar1 = extraout_w9;
  lVar2 = extraout_x10;
  iVar3 = extraout_w12;
  iVar5 = extraout_w11;
  while( true ) {
    if (iVar5 == 0) {
      return param_1;
    }
    param_1 = (int *)(*(long *)(unaff_x19 + 2) + (long)iVar1 * (long)iVar3);
    if (*param_1 == 0) break;
    if (((int)piVar4 == *param_1) && (lVar2 == *(long *)(param_1 + 2))) {
      FUN_108356594();
      FUN_108356c94(param_1 + 2);
      *param_1 = (int)piVar4;
      return param_1;
    }
    func_0x000108357014();
    iVar1 = extraout_w9_00;
    lVar2 = extraout_x10_00;
    iVar3 = extraout_w12_00;
    iVar5 = extraout_w11_00;
  }
  FUN_108356d38();
  *unaff_x19 = *unaff_x19 + 1;
  return param_1;
}



/* Entry: 108356d38; end: 108356d73;  */

undefined4 * FUN_108356d38(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_108356594();
  FUN_108356c94(param_1 + 2,param_2);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 108356d74; end: 108356e0f;  */

void FUN_108356d74(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  uint unaff_w21;
  ulong uVar4;
  long unaff_x22;
  undefined1 auStack_38 [8];
  
  uVar4 = param_2;
  func_0x000108356fdc();
  puVar1 = (undefined8 *)((uVar4 & 0xffffffff) * 0x10 + 0x10);
  __Znam();
  *puVar1 = 0x10;
  puVar1[1] = param_2 & 0xffffffff;
  lVar2 = (param_2 & 0xffffffff) << 4;
  puVar3 = puVar1 + 2;
  do {
    *(undefined4 *)puVar3 = 0;
    lVar2 = lVar2 + -0x10;
    puVar3 = puVar3 + 2;
  } while (lVar2 != 0);
  *(undefined8 **)(unaff_x19 + 8) = puVar1 + 2;
  lVar2 = unaff_x22 + 8;
  for (uVar4 = (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    if (*(int *)(lVar2 + -8) != 0) {
      FUN_108356e10();
    }
    lVar2 = lVar2 + 0x10;
  }
  FUN_1083565dc(auStack_38);
  return;
}



/* Entry: 108356e10; end: 108356edb;  */

void FUN_108356e10(int *param_1,ulong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = *param_2;
  uVar4 = uVar6;
  FUN_108356710();
  iVar7 = 0;
  iVar5 = param_1[1];
  uVar3 = (uint)uVar4;
  uVar8 = iVar5 - 1U & uVar3;
  while( true ) {
    if (iVar5 <= iVar7) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar8 * 0x10);
    if (*puVar1 == 0) break;
    if (uVar3 == *puVar1) {
      uVar4 = uVar6;
      FUN_108356734(uVar6,*(undefined8 *)(puVar1 + 2));
      if ((uVar4 & 1) != 0) {
        *(ulong *)(puVar1 + 2) = *param_2;
        *puVar1 = uVar3;
        return;
      }
      iVar5 = param_1[1];
    }
    iVar2 = 0;
    if ((int)uVar8 < 1) {
      iVar2 = iVar5;
    }
    uVar8 = (uVar8 + iVar2) - 1;
    iVar7 = iVar7 + 1;
  }
  *(ulong *)(puVar1 + 2) = *param_2;
  *puVar1 = uVar3;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 108356edc; end: 108356eef;  */

undefined1  [16] FUN_108356edc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)puVar1 >> 0x3d == 0) {
    lVar2 = (long)puVar1 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = puVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(puVar1 + 1) & 1) == 0) {
    FUN_1083565c4(*puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 108356ef0; end: 108356f4f;  */

undefined1  [16] FUN_108356ef0(undefined8 *param_1,undefined8 param_2)

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
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_1083565c4(*param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 108356f50; end: 108357063;  */

void FUN_108356f50(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108356f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108357064; end: 10835708f;  */

undefined8 * FUN_108357064(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3ea18;
  FUN_1082e1f34(param_1 + 2);
  return param_1;
}



/* Entry: 108357090; end: 108357137;  */

void FUN_108357090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  FUN_108355f9c(&uStack_38,1);
  uVar2 = uStack_38;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_DAT_110a3ea18;
  uStack_38 = 0;
  puVar1[2] = uVar2;
  uVar2 = *param_2;
  puVar1[4] = param_2[1];
  puVar1[3] = uVar2;
  *(undefined4 *)(puVar1 + 5) = 4;
  FUN_1082e1f34(&uStack_38);
  *puVar1 = &PTR_DAT_110a3ea68;
  uStack_38 = 0;
  *param_1 = puVar1;
  FUN_108357138(&uStack_38);
  return;
}



/* Entry: 108357138; end: 108357183;  */

long * FUN_108357138(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108357184; end: 1083571eb;  */

void FUN_108357184(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010835c2ac(param_1 + 0.001,param_2 + 0.001,param_3,param_4,0xba83126f);
  func_0x00010812f180();
  return;
}



/* Entry: 1083571ec; end: 1083573ab;  */

void FUN_1083571ec(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  float *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  func_0x00010835c404();
  if (param_3 == 0) {
    func_0x00010835c3dc();
    lStack_118 = 0;
    uStack_120 = 0x3f80000000000000;
    uStack_108 = 0;
    uStack_110 = 0x3f800000;
    uVar6 = 0;
    fVar7 = 0.0;
    fVar3 = 1.0;
    fVar4 = 0.0;
    fVar5 = 1.0;
    uVar8 = 0;
  }
  else {
    pfVar1 = unaff_x20;
    FUN_1083483c0();
    if ((param_3 == 2) || ((int)pfVar1 != 0)) {
      uStack_b8 = 0;
      uStack_c0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0x3f80000000000000;
      uStack_98 = 0x3f800000;
      uStack_a0 = 0;
      uStack_88 = 0x3f80000000000000;
      uStack_90 = 0;
      fVar3 = *unaff_x20;
      uVar6 = *(ulong *)(unaff_x20 + 1);
      fVar7 = unaff_x20[3];
      fVar4 = unaff_x20[4];
      uStack_108 = *(ulong *)(unaff_x20 + 7);
      uStack_110 = *(ulong *)(unaff_x20 + 5);
      lStack_118 = *(long *)(unaff_x20 + 0xb);
      uStack_120 = *(undefined8 *)(unaff_x20 + 9);
      uVar8 = *(ulong *)(unaff_x20 + 0xd);
      fVar5 = unaff_x20[0xf];
    }
    else {
      FUN_10816eab0(&uStack_c0);
      FUN_1083573ac(*param_4,param_4[1],&uStack_c0,0,&uStack_100);
      func_0x00010835c3dc();
      uVar6 = uStack_f8 >> 0x20;
      uStack_110 = uStack_f0 & 0xffffffff;
      uStack_108 = uStack_e8 >> 0x20;
      lStack_118 = uStack_f8 << 0x20;
      uStack_120 = 0x3f80000000000000;
      uVar8 = uStack_f0 >> 0x20;
      FUN_10835e868(1.0 / (float)uStack_100,1.0 / (float)uStack_f0,&uStack_c0);
      fVar3 = (float)uStack_100;
      fVar4 = uStack_100._4_4_;
      fVar5 = (float)uStack_e0;
      fVar7 = (float)uStack_e8;
    }
  }
  uStack_f8 = 0;
  uStack_100 = 0x3f800000;
  uStack_e8 = 0;
  uStack_f0 = 0x3f80000000000000;
  uStack_d8 = 0x3f800000;
  uStack_e0 = 0;
  uStack_c8 = 0x3f80000000000000;
  uStack_d0 = 0;
  puVar2 = &uStack_c0;
  FUN_10835eccc(puVar2,&uStack_100);
  if ((int)puVar2 != 0) {
    *(float *)(unaff_x19 + 8) = fVar3;
    *(ulong *)((long)unaff_x19 + 0x44) = uVar6;
    *(float *)((long)unaff_x19 + 0x4c) = fVar7;
    *(float *)(unaff_x19 + 10) = fVar4;
    *(ulong *)((long)unaff_x19 + 0x5c) = uStack_108;
    *(ulong *)((long)unaff_x19 + 0x54) = uStack_110;
    *(long *)((long)unaff_x19 + 0x6c) = lStack_118;
    *(undefined8 *)((long)unaff_x19 + 100) = uStack_120;
    *(ulong *)((long)unaff_x19 + 0x74) = uVar8;
    *(float *)((long)unaff_x19 + 0x7c) = fVar5;
    unaff_x19[1] = uStack_b8;
    *unaff_x19 = uStack_c0;
    unaff_x19[3] = uStack_a8;
    unaff_x19[2] = uStack_b0;
    unaff_x19[5] = uStack_98;
    unaff_x19[4] = uStack_a0;
    unaff_x19[7] = uStack_88;
    unaff_x19[6] = uStack_90;
    unaff_x19[0x15] = uStack_d8;
    unaff_x19[0x14] = uStack_e0;
    unaff_x19[0x17] = uStack_c8;
    unaff_x19[0x16] = uStack_d0;
    unaff_x19[0x11] = uStack_f8;
    unaff_x19[0x10] = uStack_100;
    unaff_x19[0x13] = uStack_e8;
    unaff_x19[0x12] = uStack_f0;
  }
  return;
}



/* Entry: 1083573ac; end: 10835746b;  */

void FUN_1083573ac(float param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  puVar2 = param_3;
  fStack_48 = param_1;
  uStack_44 = param_2;
  FUN_108365804(param_3,&fStack_50,param_4);
  if ((int)puVar2 == 0) {
    FUN_108365a88(param_3,&fStack_48);
    bVar1 = true;
    if ((0.00024414062 < ABS(param_1)) && (bVar1 = true, !NAN(param_1 - param_1))) {
      bVar1 = false;
    }
    fStack_50 = 1.0;
    if (!bVar1) {
      fStack_50 = SQRT(param_1);
    }
    fStack_4c = fStack_50;
    if (param_4 != (undefined8 *)0x0) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      uVar6 = param_3[3];
      uVar5 = param_3[2];
      param_4[4] = param_3[4];
      param_4[1] = uVar4;
      *param_4 = uVar3;
      param_4[3] = uVar6;
      param_4[2] = uVar5;
      func_0x000108363fe4(1.0 / fStack_50,1.0 / fStack_50,param_4);
    }
  }
  func_0x00010815f6c0(auStack_78,fStack_50,fStack_4c);
  func_0x00010835c294();
  return;
}



/* Entry: 10835746c; end: 1083574e7;  */

undefined8 FUN_10835746c(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010835c404();
  FUN_10835eccc();
  if ((int)unaff_x20 != 0) {
    FUN_108346c5c(unaff_x19 + 0x40);
    FUN_108346c5c(unaff_x19 + 0x80);
    func_0x00010835c268();
    FUN_10833e354();
  }
  return unaff_x20;
}



/* Entry: 1083574e8; end: 10835752f;  */

ulong FUN_1083574e8(float *param_1,undefined8 param_2)

{
  ulong auStack_20 [2];
  
  if ((*param_1 < param_1[2]) && (param_1[1] < param_1[3])) {
    auStack_20[0] = 0;
    auStack_20[1] = 0;
    FUN_108364f90(param_2,auStack_20,param_1,1);
    return auStack_20[0] & 0xffffffff;
  }
  return 0;
}



/* Entry: 108357530; end: 10835766f;  */

undefined1  [16] FUN_108357530(ulong param_1,ulong param_2)

{
  float *pfVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  float *unaff_x19;
  int *unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  func_0x00010835c2c4();
  FUN_10821a6d8();
  if ((param_1 & 1) == 0) {
    pfVar1 = unaff_x19;
    FUN_1082878d0();
    if ((int)pfVar1 == 0) {
      FUN_10817500c();
      func_0x00010835c268();
      func_0x00010835c398();
      FUN_108357184();
      uVar2 = (ulong)unaff_x20 >> 0x20;
      uVar3 = param_2 >> 0x20;
    }
    else {
      dVar5 = (double)unaff_x19[2] + (double)*unaff_x20 * (double)*unaff_x19;
      dVar4 = (double)unaff_x19[2] + (double)unaff_x20[2] * (double)*unaff_x19;
      dVar8 = (double)unaff_x19[5] + (double)unaff_x20[1] * (double)unaff_x19[4];
      dVar6 = (double)unaff_x19[5] + (double)unaff_x20[3] * (double)unaff_x19[4];
      dVar7 = dVar4;
      if (dVar5 <= dVar4) {
        dVar7 = dVar5;
      }
      dVar7 = (double)NEON_fminnm((long)(dVar7 + 0.0010000000474974513),0x41dfffffffc00000);
      if (dVar7 <= -2147483647.0) {
        dVar7 = -2147483647.0;
      }
      unaff_x20 = (int *)(ulong)(uint)(int)dVar7;
      dVar7 = dVar6;
      if (dVar8 <= dVar6) {
        dVar7 = dVar8;
      }
      dVar7 = (double)NEON_fminnm((long)(dVar7 + 0.0010000000474974513),0x41dfffffffc00000);
      if (dVar7 <= -2147483647.0) {
        dVar7 = -2147483647.0;
      }
      if (dVar4 <= dVar5) {
        dVar4 = dVar5;
      }
      func_0x00010835c438((int)dVar7,dVar4,0xbf50624de0000000,unaff_x20);
      param_2 = (ulong)(uint)(int)dVar4;
      if (dVar6 <= dVar8) {
        dVar6 = dVar8;
      }
      func_0x00010835c438(dVar6);
      uVar3 = (ulong)(uint)(int)dVar6;
      uVar2 = extraout_x8;
    }
  }
  else {
    unaff_x20 = (int *)0x0;
    uVar2 = 0;
    param_2 = 0;
    uVar3 = 0;
  }
  auVar9._0_8_ = (ulong)unaff_x20 & 0xffffffff | uVar2 << 0x20;
  auVar9._8_8_ = param_2 & 0xffffffff | uVar3 << 0x20;
  return auVar9;
}



/* Entry: 108357670; end: 1083576db;  */

undefined4 FUN_108357670(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStack_18 [2];
  
  FUN_1083645e0(param_2,auStack_18,param_1,1);
  return auStack_18[0];
}



/* Entry: 1083576dc; end: 108357763;  */

undefined1  [16] FUN_1083576dc(undefined8 param_1,int param_2)

{
  float *unaff_x20;
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  func_0x00010835c2c4();
  FUN_1082878d0();
  if (param_2 == 0) {
    fStack_38 = *unaff_x20;
    uStack_34 = 0;
    func_0x00010835c3a8();
    fStack_3c = unaff_x20[1];
    uVar2 = 0;
    func_0x00010835c3a8();
    uStack_40 = (undefined4)uVar2;
    FUN_1082878c8(&fStack_38);
    uVar3 = uVar2;
    FUN_1082878c8(&uStack_40);
  }
  else {
    fVar1 = *unaff_x20;
    fVar4 = unaff_x20[1];
    func_0x00010835c3a8(fVar1,fVar4);
    uVar2 = (ulong)(uint)ABS(fVar1);
    uVar3 = (ulong)(uint)ABS(fVar4);
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 108357764; end: 1083577af;  */

undefined8 FUN_108357764(void)

{
  ulong uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010835c2c4();
  FUN_10810c9b4(extraout_x8);
  FUN_10818cfd0();
  uVar1 = extraout_x8;
  FUN_108363f68();
  func_0x000108365dc8();
  if ((uVar1 & 1) == 0) {
    FUN_108364350(unaff_x19,unaff_x20,unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1083577b0; end: 10835782b;  */

undefined1  [16] FUN_1083577b0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 **ppuStack_30;
  undefined1 *puStack_28;
  
  puVar3 = &uStack_60;
  puStack_28 = (undefined1 *)param_1[1];
  ppuStack_30 = (undefined8 **)*param_1;
  if ((param_4 == 3) || (param_4 == 0)) {
    pppuVar2 = &ppuStack_30;
    uStack_40 = param_2;
    uStack_38 = param_3;
    func_0x00010821b838(pppuVar2,&uStack_40);
    if (((ulong)pppuVar2 & 1) == 0) {
      if (param_4 == 3) {
        ppuStack_30 = (undefined8 ***)0x0;
        puStack_28 = (undefined1 *)0x0;
      }
      else {
        uStack_58 = uStack_38;
        uStack_60 = uStack_40;
        puStack_48 = puStack_28;
        ppuStack_50 = ppuStack_30;
        pppuVar2 = &ppuStack_50;
        FUN_10838f374();
        ppuStack_30 = pppuVar2;
        puStack_28 = (undefined1 *)puVar3;
      }
    }
  }
  auVar1._8_8_ = puStack_28;
  auVar1._0_8_ = ppuStack_30;
  return auVar1;
}



/* Entry: 10835782c; end: 1083578af;  */

undefined8 FUN_10835782c(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)(*param_1 + 0.5),0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  fVar2 = (float)NEON_fminnm((float)(double)(long)(param_1[1] + 0.5),0x4effffff);
  if (fVar2 <= -2.1474835e+09) {
    fVar2 = -2.1474835e+09;
  }
  return CONCAT44((int)fVar2,(int)fVar1);
}



/* Entry: 1083578b0; end: 1083578db;  */

void FUN_1083578b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_108357530(&uStack_20,param_1);
  return;
}



/* Entry: 1083578dc; end: 108357947;  */

void FUN_1083578dc(int param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  if ((param_2[2] <= *param_2) || (param_2[3] <= param_2[1])) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 2);
    uStack_40 = *(undefined8 *)param_2;
    FUN_1083011b8(param_1,&uStack_30,&uStack_40);
    if (param_1 != 0) {
      param_3[1] = uStack_28;
      *param_3 = uStack_30;
    }
  }
  return;
}



/* Entry: 108357948; end: 108357acb;  */

float * FUN_108357948(float *param_1,int *param_2,long *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 extraout_s0;
  double dVar4;
  double dVar5;
  undefined4 extraout_s1;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 extraout_s2;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 in_s3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*param_2 < param_2[2]) && (param_2[1] < param_2[3])) {
    pfVar1 = param_1;
    FUN_1082878d0();
    if ((int)pfVar1 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x00010835c30c(*(undefined8 *)param_2);
      uStack_50 = CONCAT44(extraout_s1,extraout_s0);
      uStack_48 = CONCAT44(in_s3,extraout_s2);
      puVar3 = &uStack_40;
      FUN_1083011b8(param_1,puVar3,&uStack_50);
      if ((int)param_1 == 0) {
        return param_1;
      }
      uStack_48 = uStack_38;
      uStack_50 = uStack_40;
      puVar2 = &uStack_50;
      FUN_108341380();
      *param_3 = (long)puVar2;
      param_3[1] = (long)puVar3;
      return param_1;
    }
    if ((*param_1 == 0.0) || (param_1[4] == 0.0)) {
      return (float *)0x0;
    }
    dVar4 = (double)*param_1;
    dVar5 = (double)param_1[4];
    auVar9._0_8_ = (long)(int)*(undefined8 *)param_2;
    auVar9._8_8_ = (long)(int)((ulong)*(undefined8 *)param_2 >> 0x20);
    auVar7 = NEON_scvtf(auVar9,8);
    dVar6 = (auVar7._0_8_ - (double)param_1[2]) / dVar4;
    dVar10 = (auVar7._8_8_ - (double)param_1[5]) / dVar5;
    auVar11._0_8_ = (long)(int)*(undefined8 *)(param_2 + 2);
    auVar11._8_8_ = (long)(int)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    auVar7 = NEON_scvtf(auVar11,8);
    dVar4 = (auVar7._0_8_ - (double)param_1[2]) / dVar4;
    dVar5 = (auVar7._8_8_ - (double)param_1[5]) / dVar5;
    auVar12._0_8_ =
         (long)((double)((ulong)dVar6 ^ ((ulong)dVar6 ^ (ulong)dVar4) & -(ulong)(dVar4 < dVar6)) +
               0.0010000000474974513);
    auVar12._8_8_ =
         (long)((double)((ulong)dVar10 ^ ((ulong)dVar10 ^ (ulong)dVar5) & -(ulong)(dVar5 < dVar10))
               + 0.0010000000474974513);
    auVar7._0_8_ = (long)((double)((ulong)dVar4 ^
                                  ((ulong)dVar4 ^ (ulong)dVar6) & ~-(ulong)(dVar6 < dVar4)) +
                         -0.0010000000474974513);
    auVar7._8_8_ = (long)((double)((ulong)dVar5 ^
                                  ((ulong)dVar5 ^ (ulong)dVar10) & ~-(ulong)(dVar10 < dVar5)) +
                         -0.0010000000474974513);
    auVar8._8_8_ = 0x41dfffffffc00000;
    auVar8._0_8_ = 0x41dfffffffc00000;
    auVar7 = NEON_fminnm(auVar7,auVar8,8);
    auVar9 = NEON_fminnm(auVar12,auVar8,8);
    auVar13._8_8_ = 0xc1dfffffffc00000;
    auVar13._0_8_ = 0xc1dfffffffc00000;
    auVar9 = NEON_fmaxnm(auVar9,auVar13,8);
    auVar7 = NEON_fmaxnm(auVar7,auVar13,8);
    *(int *)(param_3 + 1) = (int)(long)auVar7._0_8_;
    *(int *)((long)param_3 + 0xc) = (int)(long)auVar7._8_8_;
    *(int *)param_3 = (int)(long)auVar9._0_8_;
    *(int *)((long)param_3 + 4) = (int)(long)auVar9._8_8_;
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
  }
  return (float *)0x1;
}



/* Entry: 108357acc; end: 108357b27;  */

void FUN_108357acc(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long alStack_88 [11];
  long lStack_30;
  
  func_0x00010835c1b0(alStack_88,param_2,param_3,*(undefined8 *)(param_3 + 200),
                      *(undefined8 *)(param_3 + 0xd0));
  if (alStack_88[0] != 0) {
    piVar1 = (int *)(alStack_88[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = alStack_88[0];
  param_1[1] = lStack_30;
  FUN_1083414c4(alStack_88);
  return;
}



/* Entry: 108357b28; end: 108357c6f;  */

long * FUN_108357b28(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *unaff_x20;
  undefined8 uStack_d68;
  long *plStack_d60;
  long *plStack_d58;
  undefined1 *puStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined1 auStack_d30 [8];
  undefined8 uStack_d28;
  long lStack_d20;
  undefined8 uStack_d18;
  long alStack_d10 [392];
  long lStack_d0;
  char cStack_68;
  undefined8 uStack_48;
  
  func_0x00010835c0cc();
  plVar1 = param_1;
  lStack_d20 = param_3;
  uStack_d18 = param_4;
  uStack_48 = extraout_x8;
  if (*param_1 == 0) {
LAB_108357be4:
    uStack_d28 = 0;
    alStack_d10[0] = 0;
    func_0x00010835c3b0();
    func_0x00010835c178();
  }
  else {
    unaff_x20 = param_1;
    if ((param_5 & 1) == 0) {
      plVar1 = &lStack_d20;
      func_0x00010821b838(plVar1,param_1 + 0xb);
      if (((ulong)plVar1 & 1) == 0) goto LAB_108357be4;
    }
    if ((param_1[10] == 0) && ((param_5 & 1) == 0)) {
      in_ZR = *(int *)((long)param_1 + 0x24) == 3;
      if ((bool)in_ZR) {
        plVar1 = param_1 + 5;
        FUN_108358b38(plVar1,auStack_d30);
        if ((int)plVar1 != 0) {
          func_0x00010835c44c();
          func_0x00010835c368();
          goto LAB_108357bfc;
        }
      }
    }
    uStack_d40 = 0;
    uStack_d38 = 0x3f000000;
    FUN_10835b99c(alStack_d10,param_2,&lStack_d20,(uint)param_5 ^ 1,0,&uStack_d40);
    in_ZR = cStack_68 == '\x01';
    if ((bool)in_ZR) {
      FUN_108359104(param_1,param_2,*(undefined8 *)(lStack_d0 + 8),0,0);
    }
    func_0x00010835c1a8(alStack_d10);
    plVar1 = alStack_d10;
    func_0x00010835bc64();
  }
LAB_108357bfc:
  func_0x00010835c0b8(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x00010835c178();
  func_0x00010835c120();
  uStack_d48 = 0x108357c70;
  plStack_d60 = unaff_x20;
  plStack_d58 = plVar1;
  puStack_d50 = &stack0xfffffffffffffff0;
  if (*plVar2 != 0) {
    func_0x000108357cb4(extraout_x8_00);
    *(undefined4 *)(extraout_x8_00 + 1) = 1;
    return plVar2;
  }
  uStack_d68 = 0;
  FUN_1083413f4(extraout_x8_00,&uStack_d68);
  func_0x000108341fb4();
  return extraout_x8_00;
}



/* Entry: 108357c70; end: 108357d0f;  */

long * FUN_108357c70(long *param_1,long *param_2)

{
  undefined8 uStack_28;
  
  if (*param_2 != 0) {
    func_0x000108357cb4(param_1);
    *(undefined4 *)(param_1 + 1) = 1;
    return param_2;
  }
  uStack_28 = 0;
  FUN_1083413f4(param_1,&uStack_28);
  func_0x000108341fb4();
  return param_1;
}



/* Entry: 108357d10; end: 108357d1b;  */

void FUN_108357d10(undefined1 (*param_1) [16],int *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  auVar1 = *param_1;
  auVar10 = NEON_ext(auVar1,auVar1,8,1);
  uVar8 = (long)auVar1._0_4_ + (long)*param_2;
  uVar9 = (long)auVar1._4_4_ + (long)param_2[1];
  uVar6 = (long)auVar10._0_4_ - (long)*param_2;
  uVar7 = (long)auVar10._4_4_ - (long)param_2[1];
  uVar8 = uVar8 ^ (uVar8 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar8);
  uVar9 = uVar9 ^ (uVar9 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar9);
  uVar6 = uVar6 ^ (uVar6 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar6);
  uVar7 = uVar7 ^ (uVar7 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar7);
  uVar4 = (uint)uVar6;
  uVar5 = (uint)uVar7;
  uVar2 = (uint)uVar8;
  uVar3 = (uint)uVar9;
  *(uint *)(*param_1 + 8) = uVar4 ^ (uVar4 ^ 0x7fffffff) & ~-(uint)((long)uVar6 < 0x7fffffff);
  *(uint *)(*param_1 + 0xc) = uVar5 ^ (uVar5 ^ 0x7fffffff) & ~-(uint)((long)uVar7 < 0x7fffffff);
  *(uint *)*param_1 = uVar2 ^ (uVar2 ^ 0x7fffffff) & ~-(uint)((long)uVar8 < 0x7fffffff);
  *(uint *)(*param_1 + 4) = uVar3 ^ (uVar3 ^ 0x7fffffff) & ~-(uint)((long)uVar9 < 0x7fffffff);
  return;
}



/* Entry: 108357d1c; end: 108357e7f;  */

long * FUN_108357d1c(long *param_1,long *param_2,uint *param_3,undefined8 *param_4,int param_5)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  ulong uStack_50;
  ulong uStack_48;
  
  ppuVar4 = &puStack_80;
  uVar1 = (ulong)*param_3;
  uVar5 = (ulong)param_3[1];
  func_0x00010835c3f0(*param_2);
  FUN_108219ff8();
  uVar6 = *param_4;
  uVar7 = 0;
  if (param_5 == 0) {
    uVar7 = 3;
  }
  puVar2 = &uStack_50;
  uStack_50 = uVar1;
  uStack_48 = uVar5;
  FUN_1083577b0(puVar2,uVar6,param_4[1],uVar7);
  iStack_54 = (int)((ulong)uVar6 >> 0x20);
  iStack_5c = (int)((ulong)puVar2 >> 0x20);
  if ((int)uVar6 <= (int)puVar2 || iStack_54 <= iStack_5c) {
    FUN_1083413f4(param_1,&stack0xffffffffffffffd8);
    func_0x000108341fb4();
    return param_1;
  }
  iStack_60 = (int)puVar2 - *param_3;
  iStack_5c = iStack_5c - param_3[1];
  iStack_58 = (int)uVar6 - *param_3;
  iStack_54 = iStack_54 - param_3[1];
  FUN_108337e44(auStack_68,*param_2,&iStack_60);
  puStack_80 = puVar2;
  func_0x00010835c3b0();
  func_0x00010835c178();
  func_0x0001083416d0(param_1 + 10,param_2 + 10);
  plVar3 = (long *)(*param_2 + 0xc);
  FUN_108279bb8(plVar3,*param_1 + 0xc);
  if ((int)plVar3 == 0) {
    uStack_78 = *(undefined8 *)(*param_2 + 0x14);
    puStack_80 = *(ulong **)(*param_2 + 0xc);
    if ((int)param_2[1] == 0) {
      func_0x00010835c3d0(&puStack_80);
      func_0x0001082889e4();
    }
    func_0x000108219544(&puStack_80,*param_1 + 0xc);
    if ((int)ppuVar4 == 0) {
      return (long *)ppuVar4;
    }
    uVar7 = 2;
  }
  else {
    uVar7 = (undefined4)param_2[1];
    ppuVar4 = (ulong **)plVar3;
  }
  *(undefined4 *)(param_1 + 1) = uVar7;
  return (long *)ppuVar4;
}



/* Entry: 108357e80; end: 108358357;  */

long ** FUN_108357e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                     undefined8 *param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined5 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined5 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long **pplVar16;
  float *pfVar17;
  int iVar18;
  long **pplVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined1 in_b1;
  byte bVar23;
  undefined1 in_register_00005021;
  undefined1 uVar24;
  undefined1 in_register_00005022;
  undefined1 uVar25;
  undefined1 in_register_00005023;
  undefined1 uVar26;
  byte bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1d8 [40];
  long **pplStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long **pplStack_180;
  float *pfStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long lStack_150;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  float afStack_c0 [3];
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)((long)param_4 + 0x24) == 3) {
    uVar10 = param_4[10];
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      FUN_10833e038();
    }
  }
  else {
    uVar10 = 1;
  }
  FUN_10817500c(param_6);
  uStack_b0 = CONCAT44(CONCAT13(in_register_00005023,
                                CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)))
                       ,param_1);
  uStack_a8 = CONCAT44(param_3,param_2);
  puStack_128 = (undefined8 *)param_4[0xc];
  plStack_130 = (long *)param_4[0xb];
  puVar11 = param_5;
  FUN_10838ef38(0x3a83126f,param_5,&plStack_130,param_6);
  if (((ulong)puVar11 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      plVar12 = param_4 + 5;
      lVar13 = *param_4;
      FUN_1083415b0();
      uStack_f0 = (long *)0x0;
      puVar11 = &uStack_f0;
      uStack_e8 = lVar13;
      FUN_1083578b0();
      plVar15 = param_4 + 0xb;
      plStack_130 = plVar12;
      puStack_128 = puVar11;
      func_0x000108219544(plVar15,&plStack_130);
      if (((ulong)plVar15 & 1) != 0) goto LAB_108357f30;
    }
    uStack_e8 = param_4[0xc];
    lVar13 = param_4[0xb];
    plVar15 = &uStack_f0;
    puVar11 = param_5;
    uStack_f0 = (long *)lVar13;
    FUN_108357530();
    uVar21 = (undefined4)lVar13;
    plStack_130 = plVar15;
    puStack_128 = puVar11;
    FUN_10817500c(&plStack_130);
    uStack_f0 = (long *)CONCAT44(CONCAT13(in_register_00005023,
                                          CONCAT12(in_register_00005022,
                                                   CONCAT11(in_register_00005021,in_b1))),uVar21);
    uStack_e8 = CONCAT44(param_3,param_2);
    FUN_10838ed10(&uStack_b0,&uStack_f0);
    pplVar19 = (long **)0x4;
  }
  else {
LAB_108357f30:
    pplVar19 = (long **)0x0;
  }
  lVar13 = *param_4;
  FUN_1083415b0();
  fVar29 = (float)(int)((ulong)lVar13 >> 0x20);
  afStack_c0[0] = 0.0;
  afStack_c0[1] = 0.0;
  uStack_e8 = param_4[6];
  uStack_f0 = (long *)param_4[5];
  uStack_d8 = param_4[8];
  uStack_e0 = param_4[7];
  lStack_d0 = param_4[9];
  puStack_128 = (undefined8 *)param_5[1];
  plStack_130 = (long *)*param_5;
  uStack_118 = param_5[3];
  uStack_120 = param_5[2];
  uStack_110 = param_5[4];
  afStack_c0[2] = (float)(int)lVar13;
  fStack_b4 = fVar29;
  FUN_108358358(&uStack_f0,&plStack_130);
  plStack_130 = (long *)CONCAT44(uStack_e8._4_4_,(int)uStack_f0);
  puStack_128 = (undefined8 *)(uStack_d8 << 0x20);
  uStack_120 = CONCAT44((undefined4)uStack_e0,uStack_f0._4_4_);
  uStack_118 = uStack_d8 & 0xffffffff00000000;
  uStack_108 = 0x3f800000;
  uStack_110 = 0;
  uStack_100 = (undefined4)uStack_e8;
  uStack_fc = uStack_e0._4_4_;
  uStack_f8 = 0;
  uStack_f4 = (undefined4)lStack_d0;
  puVar11 = &uStack_f0;
  FUN_108358394(puVar11,0);
  uVar9 = (uint)puVar11;
  uVar1 = uVar9 & 0xffff & (uint)(0xff < (uVar9 & 0xffff));
  if ((param_7 == 3) || (*(int *)((long)param_4 + 0x24) != 3)) {
    uVar20 = 0;
  }
  else {
    lVar14 = (long)param_4 + 0xc;
    FUN_1081753ec(lVar14,&UNK_10df1cfa0);
    uVar9 = (uint)lVar14;
    uVar20 = uVar9 & (uVar1 ^ 1);
  }
  fVar30 = 1.5;
  if ((char)param_4[2] == '\0') {
    fVar30 = 0.5;
  }
  fVar28 = (float)(int)lVar13 - fVar30;
  fVar29 = fVar29 - fVar30;
  fStack_140 = fVar30;
  fStack_13c = fVar30;
  fStack_138 = fVar28;
  fStack_134 = fVar29;
  func_0x00010835c258();
  fVar31 = fVar30;
  if (uVar1 == 0 && ((uVar9 ^ 0xffffffff) & 1) == 0) {
    uVar8 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    if (((ulong)puVar11 & 1) == 0) {
      uVar8 = 0x6f;
      uVar24 = 0x12;
      uVar25 = 0x83;
      uVar26 = 0x3a;
    }
    fVar31 = 0.0;
    if (((ulong)puVar11 & 0xff00) == 0) {
      fVar31 = 0.001;
    }
    fStack_140 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar8))) + fVar30;
    fVar30 = fVar31 + fVar30;
    fVar28 = fVar28 - (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar8)));
    fVar29 = fVar29 - fVar31;
    fVar31 = fStack_140;
    fStack_13c = fVar30;
    fStack_138 = fVar28;
    fStack_134 = fVar29;
  }
  iVar22 = (int)param_4[1];
  bVar7 = iVar22 != 0;
  uVar8 = uVar20 == 0;
  pfVar17 = &fStack_140;
  if ((bool)uVar8) {
    pfVar17 = afStack_c0;
  }
  pplVar16 = &plStack_130;
  FUN_10838efac(0x3a83126f,pplVar16,pfVar17,&uStack_b0);
  if (((ulong)pplVar16 & 1) == 0) {
    uVar8 = (int)uVar10 == 0;
    uVar9 = 3;
    if ((bool)uVar8) {
      uVar9 = 1;
    }
    uVar9 = (uint)pplVar19 | uVar9;
    pplVar19 = (long **)(ulong)uVar9;
    if (uVar20 != 0) {
      lStack_168 = uStack_e8;
      plStack_170 = uStack_f0;
      uStack_158 = uStack_d8;
      lStack_160 = uStack_e0;
      lStack_150 = lStack_d0;
      pplVar16 = &plStack_170;
      pfVar17 = &fStack_a0;
      FUN_1083656d4(pplVar16,pfVar17);
      if ((((int)pplVar16 == 0) || (0.2 < ABS(fStack_a0 + -1.0))) ||
         (uVar8 = ABS(fStack_9c + -1.0) == 0.2, 0.2 < ABS(fStack_9c + -1.0))) {
        pplVar19 = (long **)(ulong)(uVar9 | 0x10);
        bVar7 = (int)param_4[1] == 1;
        uVar8 = bVar7 || iVar22 == 0;
        bVar7 = !bVar7 && iVar22 != 0;
      }
    }
  }
  if (param_7 == 0) goto LAB_108358318;
  uVar8 = param_7 == 1;
  uVar9 = (uint)pplVar19;
  if (((bool)uVar8) && ((uVar9 >> 1 & 1) == 0)) {
    func_0x00010835c258();
    if (((ulong)pplVar16 & 1) == 0) {
      pfVar17 = (float *)&UNK_10df1cfa0;
      pplVar16 = (long **)((long)param_4 + 0xc);
      func_0x00010817505c(pplVar16,&UNK_10df1cfa0);
      if ((int)pplVar16 == 0) goto LAB_1083581cc;
    }
    if (bVar7 || uVar1 != 0) goto LAB_108358318;
  }
LAB_1083581cc:
  if (bVar7) {
    fStack_140 = fVar31 + -1.0;
    fStack_13c = fVar30 + -1.0;
    fStack_138 = fVar28 + 1.0;
    fStack_134 = fVar29 + 1.0;
  }
  uStack_b0 = CONCAT44((float)((ulong)uStack_b0 >> 0x20) + 0.5,(float)uStack_b0 + 0.5);
  uStack_a8 = CONCAT44((float)((ulong)uStack_a8 >> 0x20) + -0.5,(float)uStack_a8 + -0.5);
  pplVar16 = &plStack_130;
  pfVar17 = &fStack_140;
  FUN_10838efd8(0x3a83126f,pplVar16,pfVar17,&uStack_b0);
  auVar4[8] = (char)pfVar17;
  auVar4._0_8_ = pplVar16;
  auVar4[9] = (char)((ulong)pfVar17 >> 8);
  auVar4[10] = (char)((ulong)pfVar17 >> 0x10);
  auVar4[0xb] = (char)((ulong)pfVar17 >> 0x18);
  auVar4[0xc] = (char)((ulong)pfVar17 >> 0x20);
  auVar4[0xd] = (char)((ulong)pfVar17 >> 0x28);
  auVar4[0xe] = (char)((ulong)pfVar17 >> 0x30);
  auVar4[0xf] = (char)((ulong)pfVar17 >> 0x38);
  iVar22 = NEON_uminv(auVar4,4);
  if (iVar22 == 0) {
    plVar15 = (long *)*param_4;
    lVar13 = plVar15[2];
    pplStack_180 = pplVar16;
    pfStack_178 = pfVar17;
    (**(code **)(*plVar15 + 0x18))();
    lStack_190 = (long)plVar15 << 0x20;
    uStack_188 = 0;
    pplVar16 = (long **)*param_4;
    iVar22 = *(int *)(pplVar16 + 3);
    (*(code *)(*pplVar16)[3])();
    iVar18 = (int)((ulong)pplVar16 >> 0x20);
    iVar2 = *(int *)(*param_4 + 0xc);
    uVar10 = CONCAT44(-(uint)((int)((ulong)lVar13 >> 0x20) == (int)((ulong)lStack_190 >> 0x20)),
                      -(uint)((int)lVar13 == (int)lStack_190)) & 0x100000001;
    bVar23 = (byte)uVar10;
    bVar27 = (byte)(uVar10 >> 0x20);
    uVar6 = CONCAT14(iVar2 == 0,(uint)(iVar22 == iVar18));
    uVar3 = CONCAT14(bVar27,(uint)bVar23);
    if (*(int *)((long)param_4 + 0x24) - 1U < 2) {
      lVar13 = 0x100000000;
      if (iVar2 != 0) {
        lVar13 = 0;
      }
      if (iVar22 == iVar18) {
        lVar13 = lVar13 + 1;
      }
      uVar3 = CONCAT14(bVar27 & (byte)((ulong)lVar13 >> 0x20),(uint)(bVar23 & (byte)lVar13));
      uVar6 = CONCAT14(iVar2 == 0 & bVar27,(uint)(iVar22 == iVar18 & bVar23));
    }
    auVar5[1] = (char)((ulong)pplStack_180 >> 8);
    auVar5[0] = (byte)uVar3 | (byte)pplStack_180;
    auVar5[2] = (char)((ulong)pplStack_180 >> 0x10);
    auVar5[3] = (char)((ulong)pplStack_180 >> 0x18);
    auVar5[4] = (byte)((uint5)uVar3 >> 0x20) | (byte)((ulong)pplStack_180 >> 0x20);
    auVar5[5] = (char)((ulong)pplStack_180 >> 0x28);
    auVar5[6] = (char)((ulong)pplStack_180 >> 0x30);
    auVar5[7] = (char)((ulong)pplStack_180 >> 0x38);
    auVar5[8] = (byte)uVar6 | (byte)pfStack_178;
    auVar5[9] = (char)((ulong)pfStack_178 >> 8);
    auVar5[10] = (char)((ulong)pfStack_178 >> 0x10);
    auVar5[0xb] = (char)((ulong)pfStack_178 >> 0x18);
    auVar5[0xc] = (byte)((uint5)uVar6 >> 0x20) | (byte)((ulong)pfStack_178 >> 0x20);
    auVar5[0xd] = (char)((ulong)pfStack_178 >> 0x28);
    auVar5[0xe] = (char)((ulong)pfStack_178 >> 0x30);
    auVar5[0xf] = (char)((ulong)pfStack_178 >> 0x38);
    iVar22 = NEON_uminv(auVar5,4);
    uVar8 = iVar22 == 0;
    uVar1 = uVar9 | 8;
    if (!(bool)uVar8) {
      uVar1 = uVar9;
    }
    pplVar19 = (long **)(ulong)uVar1;
  }
LAB_108358318:
  func_0x00010835c0b8(uStack_98);
  if ((bool)uVar8) {
    return pplVar19;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_108358358;
  pplStack_1b0 = pplVar19;
  plStack_1a8 = param_4;
  puStack_1a0 = &stack0xfffffffffffffff0;
  FUN_1081600e0(auStack_1d8,pfVar17,pplVar16);
  func_0x00010835c294();
  return pplVar16;
}



/* Entry: 108358358; end: 108358393;  */

undefined8 FUN_108358358(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  FUN_1081600e0(auStack_48,param_2,param_1);
  func_0x00010835c294();
  return param_1;
}


