/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a976648; end: 10a976737;  */

void FUN_10a976648(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000400;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  uStack_60 = 0x11e00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a976738(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686395;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68581c;
  uStack_38 = 0;
  FUN_10a9ad75c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68639b;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68581c;
  uStack_38 = 0;
  FUN_10a9adb84(param_1,&puStack_98);
  FUN_10a9add44(param_1);
  return;
}



/* Entry: 10a976738; end: 10a97680f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9767d0) */

undefined1  [16] FUN_10a976738(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f687470,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9ad660(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a976810; end: 10a976837;  */

void FUN_10a976810(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  lVar4 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
  if (lVar4 != 0) {
    FUN_10a0cf150(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a0cf198(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10a976838; end: 10a976877;  */

void FUN_10a976838(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3193c(param_1 + 0x18);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a976878; end: 10a97689f;  */

void FUN_10a976878(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  lVar4 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
  if (lVar4 != 0) {
    FUN_10a0cf150(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a0cf198(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10a9768a0; end: 10a9768df;  */

void FUN_10a9768a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3193c(param_1 + 0x30);
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10a9768e0; end: 10a976a17;  */

long * FUN_10a9768e0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar7 = 4;
  plVar4 = param_1;
  FUN_10a976a18();
  uVar8 = (ulong)((uint)plVar4 & 0x3fff);
  uVar9 = (param_1[1] - *param_1 >> 7) * -0x5555555555555555;
  if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
    lVar10 = *param_1 + uVar8 * 0x180;
    *(undefined8 *)(lVar10 + 0x28) = param_2;
    *(undefined8 *)(lVar10 + 0x30) = param_3;
    plVar5 = plVar4;
    func_0x00010a0fda30();
    *(long **)(lVar10 + 0x10) = plVar5;
    *(undefined8 *)(lVar10 + 0x18) = uVar7;
    lVar12 = param_4[1];
    lVar11 = *param_4;
    if (param_4[1] != 0) {
      plVar5 = (long *)(param_4[1] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar6 = *(long *)(lVar10 + 0x170);
    *(long *)(lVar10 + 0x170) = lVar12;
    *(long *)(lVar10 + 0x168) = lVar11;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*param_4 == 0) {
      *(undefined4 *)(lVar10 + 0xf0) = 3;
      *(undefined1 *)(lVar10 + 0xf4) = 1;
      *(undefined2 *)(lVar10 + 0x178) = 0x100;
      *(undefined8 *)(lVar10 + 300) = 0;
      *(undefined8 *)(lVar10 + 0x124) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x13c) = 0;
      *(undefined8 *)(lVar10 + 0x134) = 0x3f80000000000000;
      *(undefined8 *)(lVar10 + 0x14c) = 0x3f800000;
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(undefined8 *)(lVar10 + 0x15c) = 0x3f80000000000000;
      *(undefined8 *)(lVar10 + 0x154) = 0;
      if ((*(byte *)(lVar10 + 0x164) & 1) == 0) {
        *(undefined1 *)(lVar10 + 0x164) = 1;
      }
      *(undefined2 *)(lVar10 + 0xf8) = 0x100;
      *(undefined4 *)(lVar10 + 0xfc) = 0x3f800000;
      *(undefined1 *)(lVar10 + 0x100) = 1;
      *(undefined4 *)(lVar10 + 0x104) = 0x42c80000;
      *(undefined1 *)(lVar10 + 0x108) = 1;
      *(undefined4 *)(lVar10 + 0x11c) = 0x3f800000;
      *(undefined1 *)(lVar10 + 0x120) = 1;
      *(undefined4 *)(lVar10 + 0x10c) = 0x3f800000;
      *(undefined1 *)(lVar10 + 0x110) = 1;
      *(undefined4 *)(lVar10 + 0x114) = 0x41200000;
      *(undefined1 *)(lVar10 + 0x118) = 1;
    }
    return plVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a976a18);
  (*pcVar3)();
}



/* Entry: 10a976a18; end: 10a976b93;  */

undefined4 FUN_10a976a18(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a9ade00(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (param_1[1] - *param_1 >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar4 = (undefined1 *)(*param_1 + uVar3 * 0x180);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar4 + 2);
    *puVar4 = 0;
    return *(undefined4 *)(puVar4 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a976a90);
  (*pcVar2)();
}



/* Entry: 10a976b94; end: 10a976c33;  */

void FUN_10a976b94(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar6 = (ulong)param_2 & 0x3fff;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 7) * -0x5555555555555555;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    uVar2 = (ushort)param_2 & 0x3fff;
    puVar7 = (undefined1 *)(lVar1 + uVar6 * 0x180);
    uVar3 = *(uint *)(puVar7 + 4) >> 0xe & 0x7fff;
    iVar8 = 1;
    if (uVar3 != 0x7fff) {
      iVar8 = uVar3 + 1;
    }
    *(uint *)(puVar7 + 4) = param_2 & 0xe0003fff | iVar8 << 0xe;
    *(undefined2 *)(puVar7 + 2) = 0x3fff;
    *puVar7 = 2;
    if ((short)param_1[3] == 0x3fff) {
      *(ushort *)(param_1 + 3) = uVar2;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)param_1 + 0x1a);
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_10a976c30;
      *(ushort *)(lVar1 + uVar6 * 0x180 + 2) = uVar2;
    }
    *(ushort *)((long)param_1 + 0x1a) = uVar2;
    return;
  }
LAB_10a976c30:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a976c34);
  (*pcVar4)();
}



/* Entry: 10a976c34; end: 10a976d63;  */

bool FUN_10a976c34(long *param_1,uint param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar8 = (ulong)(param_2 & 0x3fff);
  uVar10 = (param_1[1] - *param_1 >> 7) * -0x5555555555555555;
  if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
    uVar10 = (ulong)*(uint *)(*param_1 + uVar8 * 0x180 + 8) & 0x3fff;
    uVar8 = (param_3[1] - *param_3 >> 4) * -0x5555555555555555;
    if ((uVar10 <= uVar8 && uVar8 - uVar10 != 0) &&
       (lVar6 = *param_3 + uVar10 * 0x30, plVar2 = *(long **)(lVar6 + 8),
       *(long **)(lVar6 + 0x10) != plVar2)) {
      lVar7 = *plVar2;
      lVar6 = *(long *)(lVar7 + 0x28);
      plVar2 = *(long **)(lVar7 + 0x30);
      if (plVar2 != (long *)0x0) {
        plVar11 = plVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = *(long *)(param_4 + 0xbf8);
      plVar11 = *(long **)(param_4 + 0xc00);
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (plVar2 != (long *)0x0) {
        plVar11 = plVar2 + 1;
        do {
          lVar9 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      return lVar6 != 0 && lVar6 == lVar7;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a976d64);
  (*pcVar5)();
}



/* Entry: 10a976d64; end: 10a977417;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a976d64(undefined1 *param_1,long *param_2,uint param_3,long param_4,int param_5,
                  undefined4 *param_6,undefined1 *param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  long lVar20;
  undefined1 uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long *plStack_280;
  undefined1 auStack_278 [8];
  undefined4 auStack_270 [8];
  long lStack_250;
  long lStack_248;
  undefined1 auStack_1d8 [8];
  long lStack_1d0;
  undefined8 auStack_1c8 [20];
  long lStack_128;
  undefined1 auStack_120 [160];
  undefined1 uStack_80;
  long lStack_78;
  long *plStack_70;
  
  uVar19 = (ulong)(param_3 & 0x3fff);
  uVar15 = (param_2[1] - *param_2 >> 7) * -0x5555555555555555;
  if (uVar15 < uVar19 || uVar15 - uVar19 == 0) goto LAB_10a9773e0;
  lVar24 = *param_2 + uVar19 * 0x180;
  lStack_78 = 0;
  plStack_70 = (long *)0x0;
  plStack_280 = *(long **)(lVar24 + 0x170);
  if (plStack_280 == (long *)0x0) {
LAB_10a976e24:
    piVar3 = (int *)(lVar24 + 0xf0);
    if (*(char *)(lVar24 + 0xf4) == '\0') {
      piVar3 = (int *)&UNK_10e4e5880;
    }
    if (*piVar3 != 3) {
      lVar23 = 0;
      bVar11 = true;
      goto LAB_10a976efc;
    }
    lVar23 = 0;
    bVar18 = true;
LAB_10a976e54:
    auStack_1d8[0] = 0;
    uStack_80 = 0;
    if (*(char *)(param_4 + 0x1150) == '\x01') {
      uVar21 = *(undefined1 *)(param_4 + 0xff8);
      auStack_1d8[0] = uVar21;
      lStack_1d0 = *(long *)(param_4 + 0x1000);
      if (lStack_1d0 != 0) {
        _memcpy(auStack_1c8,param_4 + 0x1008,lStack_1d0 * 0x50);
      }
      lStack_128 = *(long *)(param_4 + 0x10a8);
      if (lStack_128 != 0) {
        _memcpy(auStack_120,param_4 + 0x10b0,lStack_128 * 0x50);
      }
      bVar11 = true;
      uStack_80 = 1;
    }
    else {
      bVar11 = false;
      uVar21 = 0;
    }
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_70 = plStack_280;
    if (plStack_280 == (long *)0x0) goto LAB_10a976e24;
    lVar23 = *(long *)(lVar24 + 0x168);
    lStack_78 = lVar23;
    if (lVar23 == 0) goto LAB_10a976e24;
    piVar3 = (int *)(lVar24 + 0xf0);
    if (*(char *)(lVar24 + 0xf4) == '\0') {
      piVar3 = (int *)(lVar23 + 0x2a0);
    }
    if (*piVar3 == 3) {
      bVar18 = false;
      bVar11 = false;
      if ((*(byte *)(lVar23 + 0x6f8) & 1) != 0) goto LAB_10a976efc;
      goto LAB_10a976e54;
    }
    bVar11 = false;
LAB_10a976efc:
    bVar18 = bVar11;
    bVar11 = false;
    uVar21 = 0;
    auStack_1d8[0] = 0;
    uStack_80 = 0;
  }
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 4) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x1c) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x14) = 0x7fc000007fc00000;
  *(undefined4 *)(param_1 + 0x24) = 0x7fa00000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x94) = 3;
  uVar26 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x98) = uVar26;
  param_1[1] = uVar21;
  uVar15 = (param_2[1] - *param_2 >> 7) * -0x5555555555555555;
  if (uVar19 <= uVar15 && uVar15 - uVar19 != 0) {
    lVar20 = *param_2 + uVar19 * 0x180;
    plVar13 = *(long **)(lVar20 + 0x170);
    if ((plVar13 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar13 == (long *)0x0)) {
      puVar4 = (uint *)(lVar20 + 0xf0);
      if (*(char *)(lVar20 + 0xf4) == '\0') {
        puVar4 = (uint *)&UNK_10e4e5880;
      }
      uVar22 = *puVar4;
    }
    else {
      puVar4 = (uint *)&UNK_10e4e5880;
      if (*(long *)(lVar20 + 0x168) != 0) {
        puVar4 = (uint *)(*(long *)(lVar20 + 0x168) + 0x2a0);
      }
      puVar5 = (uint *)(lVar20 + 0xf0);
      if (*(char *)(lVar20 + 0xf4) == '\0') {
        puVar5 = puVar4;
      }
      uVar22 = *puVar5;
      plVar1 = plVar13 + 1;
      do {
        lVar16 = *plVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar16 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    lVar16 = 0xa0;
    if (param_5 == 0) {
      lVar16 = 0x50;
    }
    if ((uVar22 & 0xfffffffd) == 1) {
      fVar25 = *(float *)(lVar20 + lVar16);
      if ((fVar25 <= 0.0) || (fVar28 = ((float *)(lVar20 + lVar16))[1], fVar28 <= 0.0)) {
        bVar10 = false;
      }
      else {
        *(float *)(param_1 + 4) = fVar28;
        *(float *)(param_1 + 8) = fVar25;
        bVar10 = true;
      }
    }
    else {
      bVar10 = false;
    }
    if (bVar18) {
      puVar6 = (undefined *)(lVar24 + 0xf8);
      if (*(char *)(lVar24 + 0xf9) == '\0') {
        puVar6 = &UNK_10e4e58c4;
      }
      *param_1 = *puVar6;
      puVar7 = (undefined4 *)(lVar24 + 0xfc);
      if (*(char *)(lVar24 + 0x100) == '\0') {
        puVar7 = (undefined4 *)&UNK_10e4e58cc;
      }
      *(undefined4 *)(param_1 + 0x10) = *puVar7;
      puVar7 = (undefined4 *)(lVar24 + 0x104);
      if (*(char *)(lVar24 + 0x108) == '\0') {
        puVar7 = (undefined4 *)&UNK_10e4e58c8;
      }
      *(undefined4 *)(param_1 + 0x14) = *puVar7;
      if (!bVar10) {
        puVar7 = (undefined4 *)(lVar24 + 0x11c);
        if (*(char *)(lVar24 + 0x120) == '\0') {
          puVar7 = (undefined4 *)&UNK_10e4e58cc;
        }
        *(undefined4 *)(param_1 + 4) = *puVar7;
        puVar7 = (undefined4 *)(lVar24 + 0x10c);
        if (*(char *)(lVar24 + 0x110) == '\0') {
          puVar7 = (undefined4 *)&UNK_10e4e58cc;
        }
        *(undefined4 *)(param_1 + 8) = *puVar7;
      }
      puVar7 = (undefined4 *)(lVar24 + 0x114);
      if (*(char *)(lVar24 + 0x118) == '\0') {
        puVar7 = (undefined4 *)&UNK_10e4e58d0;
      }
      *(undefined4 *)(param_1 + 0xc) = *puVar7;
      puVar7 = (undefined4 *)(lVar24 + 0xf0);
      if (*(char *)(lVar24 + 0xf4) == '\0') {
        puVar7 = (undefined4 *)&UNK_10e4e5880;
      }
      *param_6 = *puVar7;
      puVar6 = (undefined *)(lVar24 + 0x178);
      if (*(char *)(lVar24 + 0x179) == '\0') {
        puVar6 = &UNK_10e4e58c4;
      }
      *param_7 = *puVar6;
      puVar14 = (undefined8 *)(lVar24 + 0x124);
      if (*(char *)(lVar24 + 0x164) == '\0') {
        puVar14 = (undefined8 *)&UNK_10e4e5884;
      }
    }
    else {
      puVar8 = (undefined1 *)(lVar24 + 0xf8);
      if (*(char *)(lVar24 + 0xf9) == '\0') {
        puVar8 = (undefined1 *)(lVar23 + 0x288);
      }
      *param_1 = *puVar8;
      puVar7 = (undefined4 *)(lVar24 + 0xfc);
      if (*(char *)(lVar24 + 0x100) == '\0') {
        puVar7 = (undefined4 *)(lVar23 + 0x260);
      }
      *(undefined4 *)(param_1 + 0x10) = *puVar7;
      puVar7 = (undefined4 *)(lVar24 + 0x104);
      if (*(char *)(lVar24 + 0x108) == '\0') {
        puVar7 = (undefined4 *)(lVar23 + 0x264);
      }
      *(undefined4 *)(param_1 + 0x14) = *puVar7;
      if (!bVar10) {
        FUN_10a42b51c(auStack_278,lVar23);
        puVar7 = (undefined4 *)(lVar24 + 0x11c);
        if (*(char *)(lVar24 + 0x120) == '\0') {
          puVar7 = (undefined4 *)((ulong)auStack_278 | 4);
        }
        *(undefined4 *)(param_1 + 4) = *puVar7;
        if (lStack_250 != 0) {
          lStack_248 = lStack_250;
          __ZdlPv();
        }
        FUN_10a42b51c(auStack_278,lVar23);
        puVar7 = (undefined4 *)(lVar24 + 0x10c);
        if (*(char *)(lVar24 + 0x110) == '\0') {
          puVar7 = auStack_270;
        }
        *(undefined4 *)(param_1 + 8) = *puVar7;
        if (lStack_250 != 0) {
          lStack_248 = lStack_250;
          __ZdlPv();
        }
      }
      puVar7 = (undefined4 *)(lVar24 + 0x114);
      if (*(char *)(lVar24 + 0x118) == '\0') {
        puVar7 = (undefined4 *)(lVar23 + 0x270);
      }
      *(undefined4 *)(param_1 + 0xc) = *puVar7;
      puVar7 = (undefined4 *)(lVar24 + 0xf0);
      if (*(char *)(lVar24 + 0xf4) == '\0') {
        puVar7 = (undefined4 *)(lVar23 + 0x2a0);
      }
      *param_6 = *puVar7;
      puVar8 = (undefined1 *)(lVar24 + 0x178);
      if (*(char *)(lVar24 + 0x179) == '\0') {
        puVar8 = (undefined1 *)(lVar23 + 0x289);
      }
      *param_7 = *puVar8;
      lVar23 = *(long *)(lVar23 + 0x178);
      if ((*(byte *)(lVar23 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar23);
      }
      puVar14 = (undefined8 *)(lVar24 + 0x124);
      if (*(char *)(lVar24 + 0x164) == '\0') {
        puVar14 = (undefined8 *)(lVar23 + 0xc0);
      }
    }
    uVar27 = puVar14[1];
    uVar26 = *puVar14;
    uVar30 = puVar14[3];
    uVar29 = puVar14[2];
    uVar31 = puVar14[4];
    uVar33 = puVar14[7];
    uVar32 = puVar14[6];
    param_8[5] = puVar14[5];
    param_8[4] = uVar31;
    param_8[7] = uVar33;
    param_8[6] = uVar32;
    param_8[1] = uVar27;
    *param_8 = uVar26;
    param_8[3] = uVar30;
    param_8[2] = uVar29;
    if (bVar11) {
      lVar24 = 0xb0;
      if (param_5 == 0) {
        lVar24 = 8;
      }
      FUN_10a42bb6c(param_1 + 0x28,*(undefined8 *)(auStack_1d8 + lVar24));
      uVar15 = *(ulong *)(auStack_1d8 + lVar24);
      if (uVar15 != 0) {
        lVar24 = 0;
        uVar19 = 0;
        lVar23 = 0xb8;
        if (param_5 == 0) {
          lVar23 = 0x10;
        }
        do {
          uVar17 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) *
                   -0x3333333333333333;
          if (uVar17 < uVar19 || uVar17 - uVar19 == 0) goto LAB_10a9773e0;
          puVar14 = (undefined8 *)(auStack_1d8 + lVar24 + lVar23);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar24);
          uVar26 = puVar14[4];
          uVar29 = puVar14[7];
          uVar27 = puVar14[6];
          puVar2[5] = puVar14[5];
          puVar2[4] = uVar26;
          puVar2[7] = uVar29;
          puVar2[6] = uVar27;
          uVar26 = puVar14[8];
          puVar2[9] = puVar14[9];
          puVar2[8] = uVar26;
          uVar29 = *puVar14;
          uVar27 = puVar14[3];
          uVar26 = puVar14[2];
          puVar2[1] = puVar14[1];
          *puVar2 = uVar29;
          puVar2[3] = uVar27;
          puVar2[2] = uVar26;
          uVar19 = uVar19 + 1;
          lVar24 = lVar24 + 0x50;
        } while (uVar15 != uVar19);
      }
    }
    if (plStack_280 != (long *)0x0) {
      plVar13 = plStack_280 + 1;
      do {
        lVar24 = *plVar13;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_280);
      }
    }
    return;
  }
LAB_10a9773e0:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a9773e4);
  (*pcVar12)();
}



/* Entry: 10a977418; end: 10a9774c3;  */

long * FUN_10a977418(long *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                    undefined4 param_5)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = param_1;
  FUN_10a9774c4(param_1,0);
  uVar3 = (ulong)((uint)plVar2 & 0x3fff);
  uVar4 = (param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    lVar5 = *param_1 + uVar3 * 0x48;
    *(undefined1 *)(lVar5 + 8) = param_2;
    *(undefined4 *)(lVar5 + 0xc) = param_3;
    if (*(int *)(lVar5 + 0x40) != 0) {
      FUN_10a3f9220(lVar5 + 0x30);
      *(undefined4 *)(lVar5 + 0x40) = 0;
    }
    *(undefined4 *)(lVar5 + 0x30) = 0;
    *(undefined1 *)(lVar5 + 0x10) = param_4;
    *(undefined4 *)(lVar5 + 0x14) = param_5;
    return plVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9774c4);
  (*pcVar1)();
}



/* Entry: 10a9774c4; end: 10a9775b3;  */

undefined4 FUN_10a9774c4(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a9ae200(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar4 = (undefined1 *)(*param_1 + uVar3 * 0x48);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar4 + 2);
    *puVar4 = 0;
    return *(undefined4 *)(puVar4 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a977544);
  (*pcVar2)();
}



/* Entry: 10a9775b4; end: 10a97765b;  */

void FUN_10a9775b4(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar6 = (ulong)param_2 & 0x3fff;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) * -0x71c71c71c71c71c7;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    uVar2 = (ushort)param_2 & 0x3fff;
    puVar7 = (undefined1 *)(lVar1 + uVar6 * 0x48);
    uVar3 = *(uint *)(puVar7 + 4) >> 0xe & 0x7fff;
    iVar8 = 1;
    if (uVar3 != 0x7fff) {
      iVar8 = uVar3 + 1;
    }
    *(uint *)(puVar7 + 4) = param_2 & 0xe0003fff | iVar8 << 0xe;
    *(undefined2 *)(puVar7 + 2) = 0x3fff;
    *puVar7 = 2;
    if ((short)param_1[3] == 0x3fff) {
      *(ushort *)(param_1 + 3) = uVar2;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)param_1 + 0x1a);
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_10a977658;
      *(ushort *)(lVar1 + uVar6 * 0x48 + 2) = uVar2;
    }
    *(ushort *)((long)param_1 + 0x1a) = uVar2;
    return;
  }
LAB_10a977658:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a97765c);
  (*pcVar4)();
}



/* Entry: 10a97765c; end: 10a9776bb;  */

void FUN_10a97765c(long *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uStack_14;
  
  uVar2 = (ulong)(param_2 & 0x3fff);
  uVar3 = (param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  uStack_14 = param_3;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    FUN_10a9776bc(*param_1 + uVar2 * 0x48 + 0x18,&uStack_14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9776bc);
  (*pcVar1)();
}



/* Entry: 10a9776bc; end: 10a97777f;  */

/* WARNING: Removing unreachable block (ram,0x00010a977814) */

void FUN_10a9776bc(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  int *piVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined4 *puVar13;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar12 = (long)puVar2 - *param_1;
    uVar1 = (lVar12 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x00010a98a15c();
      lVar12 = *param_1;
      lVar3 = param_1[1];
      do {
        if (lVar12 == lVar3) {
          return;
        }
        piVar11 = *(int **)(lVar12 + 0x18);
        piVar4 = *(int **)(lVar12 + 0x20);
        if (piVar11 == piVar4) {
LAB_10a9777f8:
          if (piVar4 < piVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a97784c);
            (*pcVar5)();
          }
          if (piVar11 != piVar4) {
            *(int **)(lVar12 + 0x20) = piVar11;
          }
        }
        else {
          do {
            if (*piVar11 == (int)param_2) {
              piVar9 = piVar11;
              if (piVar11 != piVar4) {
                while (piVar9 = piVar9 + 1, piVar9 != piVar4) {
                  if (*piVar9 != (int)param_2) {
                    *piVar11 = *piVar9;
                    piVar11 = piVar11 + 1;
                  }
                }
              }
              goto LAB_10a9777f8;
            }
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar4);
        }
        lVar12 = lVar12 + 0x48;
      } while( true );
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar8 = 0x3fffffffffffffff;
    }
    plVar6 = param_1;
    FUN_10a98a170();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar6 + lVar12);
    lVar10 = (long)puVar2 - (param_1[1] - lVar3);
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar10,lVar3);
    lVar12 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)plVar6 + uVar8 * 4;
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  return;
}



/* Entry: 10a977780; end: 10a9778ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a977814) */

void FUN_10a977780(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  do {
    if (lVar1 == lVar2) {
      return;
    }
    piVar6 = *(int **)(lVar1 + 0x18);
    piVar3 = *(int **)(lVar1 + 0x20);
    if (piVar6 == piVar3) {
LAB_10a9777f8:
      if (piVar3 < piVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a97784c);
        (*pcVar4)();
      }
      if (piVar6 != piVar3) {
        *(int **)(lVar1 + 0x20) = piVar6;
      }
    }
    else {
      do {
        if (*piVar6 == param_2) {
          piVar5 = piVar6;
          if (piVar6 != piVar3) {
            while (piVar5 = piVar5 + 1, piVar5 != piVar3) {
              if (*piVar5 != param_2) {
                *piVar6 = *piVar5;
                piVar6 = piVar6 + 1;
              }
            }
          }
          goto LAB_10a9777f8;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar3);
    }
    lVar1 = lVar1 + 0x48;
  } while( true );
}



/* Entry: 10a9778f0; end: 10a97796f;  */

undefined4 FUN_10a9778f0(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a9ae55c(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar4 = (undefined1 *)(*param_1 + uVar3 * 0xd0);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar4 + 2);
    *puVar4 = 0;
    return *(undefined4 *)(puVar4 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a977970);
  (*pcVar2)();
}



/* Entry: 10a977970; end: 10a977a0b;  */

long * FUN_10a977970(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = param_1;
  FUN_10a9778f0(param_1,2);
  uVar3 = (ulong)((uint)plVar2 & 0x3fff);
  uVar4 = (param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    lVar5 = *param_1 + uVar3 * 0xd0;
    func_0x00010a04a780(lVar5 + 0x48,param_2);
    *(undefined1 *)(lVar5 + 200) = 1;
    *(undefined2 *)(lVar5 + 0xa8) = 0x311;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
    param_1[4] = param_1[4] + 1;
    return plVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a977a0c);
  (*pcVar1)();
}



/* Entry: 10a977a0c; end: 10a977ab3;  */

void FUN_10a977a0c(long *param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = (ulong)(param_2 & 0x3fff);
  uVar4 = (param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a977ab4);
    (*pcVar1)();
  }
  lVar5 = *param_1 + uVar3 * 0xd0;
  *(undefined4 *)(lVar5 + 0x68) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x74) = 0;
  *(undefined8 *)(lVar5 + 0x6c) = 0;
  *(undefined4 *)(lVar5 + 0x7c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined4 *)(lVar5 + 0x90) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x9c) = 0;
  *(undefined8 *)(lVar5 + 0x94) = 0;
  *(undefined4 *)(lVar5 + 0xa4) = 0x3f800000;
  FUN_10a977b5c(lVar5 + 0x38);
  FUN_10a019700(lVar5 + 0x48);
  lVar2 = *(long *)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar2 = *(long *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a977ab4; end: 10a977b5b;  */

void FUN_10a977ab4(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar6 = (ulong)param_2 & 0x3fff;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    uVar2 = (ushort)param_2 & 0x3fff;
    puVar7 = (undefined1 *)(lVar1 + uVar6 * 0xd0);
    uVar3 = *(uint *)(puVar7 + 4) >> 0xe & 0x7fff;
    iVar8 = 1;
    if (uVar3 != 0x7fff) {
      iVar8 = uVar3 + 1;
    }
    *(uint *)(puVar7 + 4) = param_2 & 0xe0003fff | iVar8 << 0xe;
    *(undefined2 *)(puVar7 + 2) = 0x3fff;
    *puVar7 = 2;
    if ((short)param_1[3] == 0x3fff) {
      *(ushort *)(param_1 + 3) = uVar2;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)param_1 + 0x1a);
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_10a977b58;
      *(ushort *)(lVar1 + uVar6 * 0xd0 + 2) = uVar2;
    }
    *(ushort *)((long)param_1 + 0x1a) = uVar2;
    return;
  }
LAB_10a977b58:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a977b5c);
  (*pcVar4)();
}



/* Entry: 10a977b5c; end: 10a977bb7;  */

void FUN_10a977b5c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a977bb8; end: 10a977ca3;  */

void FUN_10a977bb8(long param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)(param_3 & 0x3fff);
  uVar7 = (param_2 - param_1 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a977c18);
    (*pcVar4)();
  }
  param_1 = param_1 + uVar6 * 0xd0;
  if (param_5 != 0) {
    plVar1 = (long *)(param_5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = param_4;
  *(long *)(param_1 + 0x10) = param_5;
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a977ca4; end: 10a9781b3;  */

void FUN_10a977ca4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68747e,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33578;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33578;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a978194;
    FUN_10a054dac(param_1,&UNK_10f6863a1,FUN_10a9ae984,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a9aeac4,FUN_10a9aebc8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b43,FUN_10a9aecf8,FUN_10a9aedf8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6863af,FUN_10a9aeec0,FUN_10a9af0e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6863bc,FUN_10a9af80c,FUN_10a9af8ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f60c3ae,FUN_10a9afb00,FUN_10a9afbb0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f60c3a9,FUN_10a9afe04,FUN_10a9afeb4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10a9aff6c,FUN_10a9b001c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6858de,FUN_10a9b00d4,FUN_10a9b01a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f417690,FUN_10a9b0350,FUN_10a9b0400);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657af7,FUN_10a9b04b8,FUN_10a9b0568);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b16,FUN_10a9b0620,FUN_10a9b06ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f657b4f,FUN_10a9b08a8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68747e,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a978194:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a978198);
  (*pcVar6)();
}



/* Entry: 10a9781b4; end: 10a97820f;  */

void FUN_10a9781b4(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = (ulong)(param_1 & 0x3fff);
  uVar6 = (param_3 - param_2 >> 7) * -0x5555555555555555;
  if ((((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
       (pcVar5 = (char *)(param_2 + uVar4 * 0x180), *(uint *)(pcVar5 + 4) == param_1)) &&
      (param_1 != 0)) && (*pcVar5 != '\x02')) {
    return;
  }
  puVar3 = &UNK_10f687490;
  FUN_10a00946c();
  lVar7 = *(long *)(puVar3 + 0x20);
  uVar1 = *(uint *)(puVar3 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar7 + 0x88),*(undefined8 *)(lVar7 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar6 = (*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
    *(byte *)(*(long *)(lVar7 + 0x88) + uVar4 * 0x180) = (byte)param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978280);
  (*pcVar2)();
}



/* Entry: 10a978210; end: 10a97827f;  */

void FUN_10a978210(long param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(byte *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180) = param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978280);
  (*pcVar2)();
}



/* Entry: 10a978280; end: 10a978383;  */

void FUN_10a978280(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_2 == 0) {
    uVar6 = 0xf6863cc;
    FUN_10a00946c();
    uVar8 = (ulong)(uVar6 & 0x3fff);
    uVar10 = (param_3 - param_2 >> 4) * -0x5555555555555555;
    if ((((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
         (pcVar9 = (char *)(param_2 + uVar8 * 0x30), *(uint *)(pcVar9 + 4) == uVar6)) &&
        (uVar6 != 0)) && (*pcVar9 != '\x02')) {
      return;
    }
    puVar7 = &UNK_10f6874c8;
    FUN_10a00946c();
    lVar12 = *(long *)(puVar7 + 0x20);
    uVar6 = *(uint *)(puVar7 + 0x18);
    FUN_10a9781b4((ulong)uVar6,*(undefined8 *)(lVar12 + 0x88),*(undefined8 *)(lVar12 + 0x90));
    uVar8 = (ulong)uVar6 & 0x3fff;
    uVar10 = (*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88) >> 7) * -0x5555555555555555;
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      lVar12 = *(long *)(lVar12 + 0x88) + uVar8 * 0x180;
      *(undefined4 *)(extraout_x8 + 8) = *(undefined4 *)(lVar12 + 0x164);
      uVar13 = *(undefined8 *)(lVar12 + 0x144);
      uVar15 = *(undefined8 *)(lVar12 + 0x15c);
      uVar14 = *(undefined8 *)(lVar12 + 0x154);
      extraout_x8[5] = *(undefined8 *)(lVar12 + 0x14c);
      extraout_x8[4] = uVar13;
      extraout_x8[7] = uVar15;
      extraout_x8[6] = uVar14;
      uVar15 = *(undefined8 *)(lVar12 + 0x124);
      uVar14 = *(undefined8 *)(lVar12 + 0x13c);
      uVar13 = *(undefined8 *)(lVar12 + 0x134);
      extraout_x8[1] = *(undefined8 *)(lVar12 + 300);
      *extraout_x8 = uVar15;
      extraout_x8[3] = uVar14;
      extraout_x8[2] = uVar13;
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a978464);
    (*pcVar5)();
  }
  lVar12 = *(long *)(param_1 + 0x20);
  uVar6 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar6,*(undefined8 *)(lVar12 + 0x88),*(undefined8 *)(lVar12 + 0x90));
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  FUN_10a978384(uVar2,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x68),
                *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  uVar8 = (ulong)uVar6 & 0x3fff;
  uVar10 = (*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a978378);
    (*pcVar5)();
  }
  *(undefined4 *)(*(long *)(lVar12 + 0x88) + uVar8 * 0x180 + 8) = uVar2;
  if (param_3 != 0) {
    plVar11 = (long *)(param_3 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = *(long **)(param_1 + 0x38);
  *(long *)(param_1 + 0x30) = param_2;
  *(long *)(param_1 + 0x38) = param_3;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar11);
      return;
    }
  }
  return;
}



/* Entry: 10a978384; end: 10a9783df;  */

void FUN_10a978384(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = (ulong)(param_1 & 0x3fff);
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if ((((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
       (pcVar5 = (char *)(param_2 + uVar4 * 0x30), *(uint *)(pcVar5 + 4) == param_1)) &&
      (param_1 != 0)) && (*pcVar5 != '\x02')) {
    return;
  }
  puVar3 = &UNK_10f6874c8;
  FUN_10a00946c();
  lVar7 = *(long *)(puVar3 + 0x20);
  uVar1 = *(uint *)(puVar3 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar7 + 0x88),*(undefined8 *)(lVar7 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar6 = (*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
    lVar7 = *(long *)(lVar7 + 0x88) + uVar4 * 0x180;
    *(undefined4 *)(extraout_x8 + 8) = *(undefined4 *)(lVar7 + 0x164);
    uVar8 = *(undefined8 *)(lVar7 + 0x144);
    uVar10 = *(undefined8 *)(lVar7 + 0x15c);
    uVar9 = *(undefined8 *)(lVar7 + 0x154);
    extraout_x8[5] = *(undefined8 *)(lVar7 + 0x14c);
    extraout_x8[4] = uVar8;
    extraout_x8[7] = uVar10;
    extraout_x8[6] = uVar9;
    uVar10 = *(undefined8 *)(lVar7 + 0x124);
    uVar9 = *(undefined8 *)(lVar7 + 0x13c);
    uVar8 = *(undefined8 *)(lVar7 + 0x134);
    extraout_x8[1] = *(undefined8 *)(lVar7 + 300);
    *extraout_x8 = uVar10;
    extraout_x8[3] = uVar9;
    extraout_x8[2] = uVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978464);
  (*pcVar2)();
}



/* Entry: 10a9783e0; end: 10a978463;  */

void FUN_10a9783e0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x88) + uVar3 * 0x180;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar5 + 0x164);
    uVar6 = *(undefined8 *)(lVar5 + 0x144);
    uVar8 = *(undefined8 *)(lVar5 + 0x15c);
    uVar7 = *(undefined8 *)(lVar5 + 0x154);
    param_1[5] = *(undefined8 *)(lVar5 + 0x14c);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    uVar8 = *(undefined8 *)(lVar5 + 0x124);
    uVar7 = *(undefined8 *)(lVar5 + 0x13c);
    uVar6 = *(undefined8 *)(lVar5 + 0x134);
    param_1[1] = *(undefined8 *)(lVar5 + 300);
    *param_1 = uVar8;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978464);
  (*pcVar2)();
}



/* Entry: 10a978464; end: 10a9784c7;  */

undefined8 FUN_10a978464(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined8 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0x104);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9784c8);
  (*pcVar2)();
}



/* Entry: 10a9784c8; end: 10a97853f;  */

void FUN_10a9784c8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar5 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar2 = *param_2;
    lVar6 = *(long *)(lVar6 + 0x88) + uVar4 * 0x180;
    *(undefined1 *)(lVar6 + 0x108) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(lVar6 + 0x104) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a978540);
  (*pcVar3)();
}



/* Entry: 10a978540; end: 10a97859f;  */

undefined8 FUN_10a978540(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined8 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0xfc);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9785a0);
  (*pcVar2)();
}



/* Entry: 10a9785a0; end: 10a978617;  */

void FUN_10a9785a0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar5 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar2 = *param_2;
    lVar6 = *(long *)(lVar6 + 0x88) + uVar4 * 0x180;
    *(undefined1 *)(lVar6 + 0x100) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(lVar6 + 0xfc) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a978618);
  (*pcVar3)();
}



/* Entry: 10a978618; end: 10a97867b;  */

undefined8 FUN_10a978618(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined8 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0x114);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97867c);
  (*pcVar2)();
}



/* Entry: 10a97867c; end: 10a9786f3;  */

void FUN_10a97867c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar5 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar2 = *param_2;
    lVar6 = *(long *)(lVar6 + 0x88) + uVar4 * 0x180;
    *(undefined1 *)(lVar6 + 0x118) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(lVar6 + 0x114) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9786f4);
  (*pcVar3)();
}



/* Entry: 10a9786f4; end: 10a9787b7;  */

undefined2 FUN_10a9786f4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined2 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0xf8);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978754);
  (*pcVar2)();
}



/* Entry: 10a9787b8; end: 10a97891b;  */

void FUN_10a9787b8(long param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((*(char *)(param_2 + 1) != '\x01') || ((0.0 < *param_2 && (*param_2 < 3.1415927)))) {
    lVar7 = *(long *)(param_1 + 0x20);
    uVar1 = *(uint *)(param_1 + 0x18);
    FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar7 + 0x88),*(undefined8 *)(lVar7 + 0x90));
    uVar5 = (ulong)uVar1 & 0x3fff;
    uVar6 = (*(long *)(lVar7 + 0x90) - *(long *)(lVar7 + 0x88) >> 7) * -0x5555555555555555;
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      fVar2 = *param_2;
      lVar7 = *(long *)(lVar7 + 0x88) + uVar5 * 0x180;
      *(undefined1 *)(lVar7 + 0x120) = *(undefined1 *)(param_2 + 1);
      *(float *)(lVar7 + 0x11c) = fVar2;
      return;
    }
  }
  else {
    func_0x000107c2b054(auStack_68,&UNK_10f68640d);
    if (((uint)param_2[1] & 1) == 0) {
      FUN_10a04f808();
    }
    else {
      __ZNSt3__19to_stringEf(&puStack_80,*param_2);
      if (-1 < (char)bStack_69) {
        uStack_78 = (ulong)bStack_69;
        puStack_80 = (undefined1 *)&puStack_80;
      }
      puVar4 = auStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar4,puStack_80,uStack_78);
      uStack_48 = puVar4[1];
      uStack_50 = *puVar4;
      uStack_40 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      FUN_10a0029c0(&uStack_50);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9788d0);
  (*pcVar3)();
}



/* Entry: 10a97891c; end: 10a97897f;  */

undefined8 FUN_10a97891c(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined8 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0x10c);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978980);
  (*pcVar2)();
}



/* Entry: 10a978980; end: 10a9789f7;  */

void FUN_10a978980(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar5 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar2 = *param_2;
    lVar6 = *(long *)(lVar6 + 0x88) + uVar4 * 0x180;
    *(undefined1 *)(lVar6 + 0x110) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(lVar6 + 0x10c) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9789f8);
  (*pcVar3)();
}



/* Entry: 10a9789f8; end: 10a978a57;  */

undefined8 FUN_10a9789f8(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined8 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0xf0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978a58);
  (*pcVar2)();
}



/* Entry: 10a978a58; end: 10a978ac3;  */

void FUN_10a978a58(long param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(undefined4 *)(*(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0x20) = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978ac4);
  (*pcVar2)();
}



/* Entry: 10a978ac4; end: 10a978b23;  */

long FUN_10a978ac4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a9781b4((ulong)uVar1,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x90));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 7) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(long *)(lVar5 + 0x88) + uVar3 * 0x180 + 0x38;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a978b24);
  (*pcVar2)();
}



/* Entry: 10a978b24; end: 10a978ba7;  */

undefined1  [16] FUN_10a978b24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f6874f5;
  return auVar1;
}



/* Entry: 10a978ba8; end: 10a979043;  */

void FUN_10a978ba8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f6874f5,0xb);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35270;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000019;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_64 = 0x124;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c35270;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f686493,FUN_10a9b0a34,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f6864aa,FUN_10a9b0c78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f6864bc,FUN_10a9b0e10,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f6864dc,FUN_10a9b1190,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f6864fb,FUN_10a9b1374,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f68651f,FUN_10a9b167c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f68653b;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000019;
  puStack_88 = &UNK_10f68581c;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_64 = 0x159;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar7 = param_1;
  FUN_10a9b17f0(param_1,&ppuStack_b0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f686548;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000019;
  puStack_88 = &UNK_10f68581c;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_64 = 0x159;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10a9b17f0();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f68655e,FUN_10a9b19e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a979024;
    FUN_10a054dac(param_1,&UNK_10f686571,FUN_10a9b1b4c,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_68 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_64 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)uVar10;
    uStack_5c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f6874f5,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a979024:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a979028);
  (*pcVar6)();
}



/* Entry: 10a979044; end: 10a979097;  */

undefined8 * FUN_10a979044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35228;
  FUN_10a3ecfcc(param_1 + 3);
  func_0x00010a3f6208(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a979098; end: 10a97909b;  */

undefined8 * FUN_10a979098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c35228;
  FUN_10a3ecfcc(param_1 + 3);
  func_0x00010a3f6208(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a97909c; end: 10a9790af;  */

void FUN_10a97909c(void)

{
  FUN_10a979044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9790b0; end: 10a97941b;  */

undefined1  [16]
FUN_10a9790b0(long *param_1,undefined *param_2,long *param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar17;
  long *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  long lVar18;
  ulong uVar19;
  undefined *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long lStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long *plStack_278;
  undefined *puStack_270;
  undefined8 ****ppppuStack_260;
  code *pcStack_258;
  long lStack_250;
  long *plStack_248;
  long lStack_240;
  long *plStack_238;
  undefined *puStack_230;
  long *plStack_228;
  undefined8 ****ppppuStack_220;
  code *pcStack_218;
  undefined8 ****ppppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 ****ppppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  if ((uint)param_3 < 4) {
    if (2 < param_5) goto LAB_10a979264;
    plVar5 = *(long **)(param_2 + 0x18);
    unaff_x20 = param_2;
    if ((short)plVar5[3] != 0x3fff ||
        0xffffffffffffc001 < (plVar5[1] - *plVar5 >> 3) * -0x71c71c71c71c71c7 - 0x3ffdU) {
      FUN_10a977418();
      lVar16 = *(long *)(param_2 + 0x18);
      plVar9 = *(long **)(param_2 + 0x20);
      plVar6 = (long *)0x70;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_FUN_110c34c08;
      plVar13 = plVar6;
      if (plVar9 == (long *)0x0) {
        plVar6[4] = 0;
        plVar6[5] = 0;
        *(int *)(plVar6 + 6) = (int)plVar5;
        plVar6[7] = lVar16;
        plVar6[8] = 0;
        plVar6[3] = (long)&PTR_DAT_110c338e0;
        plVar6[10] = 0;
        plVar6[9] = 0;
        plVar6[0xc] = 0;
        plVar6[0xb] = 0;
        plVar6[0xd] = 0;
      }
      else {
        plVar14 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[3] = (long)&PTR_DAT_110c33d90;
        *(int *)(plVar6 + 6) = (int)plVar5;
        plVar6[7] = lVar16;
        plVar6[8] = (long)plVar9;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          lVar16 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar13 = plVar9;
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        plVar6[3] = (long)&PTR_DAT_110c338e0;
        plVar6[10] = 0;
        plVar6[9] = 0;
        plVar6[0xc] = 0;
        plVar6[0xb] = 0;
        plVar6[0xd] = 0;
        do {
          lVar16 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          plVar13 = plVar9;
        }
      }
      *param_1 = (long)(plVar6 + 3);
      param_1[1] = (long)plVar6;
      auVar21._8_8_ = param_3;
      auVar21._0_8_ = plVar13;
      return auVar21;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f68657c);
LAB_10a979264:
    FUN_10a00946c(&UNK_10f6865c6);
  }
  puVar7 = &UNK_10f686618;
  FUN_10a00946c();
  uStack_58 = 0x10a97927c;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((uint)param_3 < 2) {
    lVar16 = *(long *)(puVar7 + 0x18);
    plVar5 = (long *)(lVar16 + 0x20);
    unaff_x20 = puVar7;
    if (*(short *)(lVar16 + 0x38) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar16 + 0x28) - *plVar5 >> 3) * -0x3333333333333333 - 0x3ffdU) {
      FUN_10a8fe104();
      lVar16 = *(long *)(puVar7 + 0x18);
      plVar9 = *(long **)(puVar7 + 0x20);
      plVar6 = (long *)0x60;
      __Znwm();
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (long)&PTR_DAT_110c34c58;
      plVar13 = plVar6;
      if (plVar9 == (long *)0x0) {
        plVar6[4] = 0;
        plVar6[5] = 0;
        *(int *)(plVar6 + 6) = (int)plVar5;
        plVar6[7] = lVar16;
        plVar6[8] = 0;
        plVar6[3] = (long)&PTR_DAT_110c33858;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        plVar6[9] = 0;
      }
      else {
        plVar14 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6[4] = 0;
        plVar6[5] = 0;
        plVar6[3] = (long)&PTR_DAT_110c33d38;
        *(int *)(plVar6 + 6) = (int)plVar5;
        plVar6[7] = lVar16;
        plVar6[8] = (long)plVar9;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          lVar16 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar13 = plVar9;
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        plVar6[3] = (long)&PTR_DAT_110c33858;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        plVar6[9] = 0;
        do {
          lVar16 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          plVar13 = plVar9;
        }
      }
      *extraout_x8 = (long)(plVar6 + 3);
      extraout_x8[1] = (long)plVar6;
      auVar22._8_8_ = param_3;
      auVar22._0_8_ = plVar13;
      return auVar22;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f686641);
  }
  puVar7 = &UNK_10f686689;
  FUN_10a00946c();
  pcStack_a8 = FUN_10a97941c;
  ppuStack_b0 = &puStack_60;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f68676f);
  }
  else {
    lVar16 = *(long *)(puVar7 + 0x18);
    plVar5 = (long *)(lVar16 + 0x40);
    unaff_x20 = puVar7;
    if (*(short *)(lVar16 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar16 + 0x48) - *plVar5 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      FUN_10a977970();
      uVar15 = *(undefined8 *)(puVar7 + 0x18);
      plVar13 = *(long **)(puVar7 + 0x20);
      puVar8 = (undefined8 *)0x48;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110c34cf8;
      plVar9 = puVar8 + 3;
      if (plVar13 != (long *)0x0) {
        plVar6 = plVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar6 = plVar9;
      uStack_100 = uVar15;
      plStack_f8 = plVar13;
      uStack_f0 = uVar15;
      plStack_e8 = plVar13;
      FUN_10a9b1d80(plVar9,uVar15,plVar13,plVar5);
      if (plVar13 != (long *)0x0) {
        plVar5 = plVar13 + 1;
        do {
          lVar16 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          plVar6 = plVar13;
        }
      }
      plVar5 = plStack_f8;
      *plVar9 = (long)&PTR_DAT_110c33708;
      if (plStack_f8 != (long *)0x0) {
        plVar13 = plStack_f8 + 1;
        do {
          lVar16 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar6 = plVar5;
        }
      }
      *extraout_x8_00 = (long)plVar9;
      extraout_x8_00[1] = (long)puVar8;
      auVar23._8_8_ = uVar15;
      auVar23._0_8_ = plVar6;
      return auVar23;
    }
  }
  puVar7 = &UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_f0);
  func_0x00010a3f6208(&uStack_100);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_108 = FUN_10a9795c8;
  plVar9 = (long *)param_3[1];
  plVar5 = param_3;
  pppuStack_110 = &ppuStack_b0;
  if ((plVar9 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x22 = param_3, plVar9 == (long *)0x0)) {
LAB_10a9797f4:
    FUN_10a00946c(&UNK_10f6867c2);
  }
  else {
    lVar16 = *param_3;
    plVar13 = plVar9 + 1;
    do {
      lVar18 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    unaff_x23 = 0;
    unaff_x21 = plVar9;
    if (lVar16 == 0) goto LAB_10a9797f4;
    unaff_x23 = *(long *)(puVar7 + 0x18);
    plVar9 = (long *)(unaff_x23 + 0x40);
    unaff_x24 = 0x4ec4ec4ec4ec4ec5;
    if (*(short *)(unaff_x23 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(unaff_x23 + 0x48) - *plVar9 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      FUN_10a9778f0(plVar9,2);
      uVar17 = (ulong)((uint)plVar9 & 0x3fff);
      uVar19 = (*(long *)(unaff_x23 + 0x48) - *(long *)(unaff_x23 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5
      ;
      if (uVar17 <= uVar19 && uVar19 - uVar17 != 0) {
        lVar16 = *(long *)(unaff_x23 + 0x40) + uVar17 * 0xd0;
        lVar20 = param_3[1];
        lVar18 = *param_3;
        if (param_3[1] != 0) {
          plVar5 = (long *)(param_3[1] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar10 = *(long *)(lVar16 + 0x20);
        *(long *)(lVar16 + 0x20) = lVar20;
        *(long *)(lVar16 + 0x18) = lVar18;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(undefined1 *)(lVar16 + 200) = 2;
        *(long *)(unaff_x23 + 0x60) = *(long *)(unaff_x23 + 0x60) + 1;
        uVar15 = *(undefined8 *)(puVar7 + 0x18);
        plVar13 = *(long **)(puVar7 + 0x20);
        puVar8 = (undefined8 *)0x48;
        __Znwm();
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = &PTR_DAT_110c34d48;
        plVar5 = puVar8 + 3;
        if (plVar13 != (long *)0x0) {
          plVar6 = plVar13 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar6 = plVar5;
        uStack_160 = uVar15;
        plStack_158 = plVar13;
        uStack_150 = uVar15;
        plStack_148 = plVar13;
        FUN_10a9b1e28(plVar5,uVar15,plVar13,plVar9);
        if (plVar13 != (long *)0x0) {
          plVar9 = plVar13 + 1;
          do {
            lVar16 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            plVar6 = plVar13;
          }
        }
        plVar9 = plStack_158;
        *plVar5 = (long)&PTR_DAT_110c33778;
        if (plStack_158 != (long *)0x0) {
          plVar13 = plStack_158 + 1;
          do {
            lVar16 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            plVar6 = plVar9;
          }
        }
        *extraout_x8_01 = (long)plVar5;
        extraout_x8_01[1] = (long)puVar8;
        auVar24._8_8_ = uVar15;
        auVar24._0_8_ = plVar6;
        return auVar24;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9797f4);
      (*pcVar4)();
    }
  }
  puVar11 = &UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_150);
  func_0x00010a3f6208(&uStack_160);
  __ZNSt3__119__shared_weak_countD2Ev(puVar7);
  __ZdlPv();
  puVar12 = puVar11;
  __Unwind_Resume();
  pcStack_168 = FUN_10a979834;
  lVar16 = *(long *)(puVar12 + 0x18);
  plVar9 = (long *)(lVar16 + 0x40);
  uStack_1a0 = unaff_x24;
  lStack_198 = unaff_x23;
  plStack_190 = unaff_x22;
  plStack_188 = unaff_x21;
  puStack_180 = puVar7;
  puStack_178 = puVar11;
  ppppuStack_170 = &pppuStack_110;
  if (*(short *)(lVar16 + 0x58) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar16 + 0x48) - *plVar9 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU)
  {
    FUN_10a9778f0(plVar9,2);
    uVar17 = (ulong)((uint)plVar9 & 0x3fff);
    uVar19 = (*(long *)(lVar16 + 0x48) - *(long *)(lVar16 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (uVar17 <= uVar19 && uVar19 - uVar17 != 0) {
      lVar18 = *(long *)(lVar16 + 0x40) + uVar17 * 0xd0;
      lVar20 = *plVar5;
      *(long *)(lVar18 + 0x30) = plVar5[1];
      *(long *)(lVar18 + 0x28) = lVar20;
      *(undefined1 *)(lVar18 + 200) = 3;
      *(long *)(lVar16 + 0x60) = *(long *)(lVar16 + 0x60) + 1;
      uVar15 = *(undefined8 *)(puVar12 + 0x18);
      plVar13 = *(long **)(puVar12 + 0x20);
      puVar8 = (undefined8 *)0x48;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_110c34d98;
      plVar5 = puVar8 + 3;
      if (plVar13 != (long *)0x0) {
        plVar6 = plVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar6 = plVar5;
      uStack_1c0 = uVar15;
      plStack_1b8 = plVar13;
      uStack_1b0 = uVar15;
      plStack_1a8 = plVar13;
      FUN_10a9b1e28(plVar5,uVar15,plVar13,plVar9);
      if (plVar13 != (long *)0x0) {
        plVar9 = plVar13 + 1;
        do {
          lVar16 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          plVar6 = plVar13;
        }
      }
      plVar9 = plStack_1b8;
      *plVar5 = (long)&PTR_DAT_110c337e8;
      if (plStack_1b8 != (long *)0x0) {
        plVar13 = plStack_1b8 + 1;
        do {
          lVar16 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          plVar6 = plVar9;
        }
      }
      *extraout_x8_02 = (long)plVar5;
      extraout_x8_02[1] = (long)puVar8;
      auVar25._8_8_ = uVar15;
      auVar25._0_8_ = plVar6;
      return auVar25;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9799ec);
    (*pcVar4)();
  }
  plVar9 = (long *)&UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_1b0);
  func_0x00010a3f6208(&uStack_1c0);
  __ZNSt3__119__shared_weak_countD2Ev(puVar12);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_1c8 = FUN_10a979a20;
  lVar18 = plVar5[3];
  plVar13 = (long *)(lVar18 + 0x68);
  ppppuStack_1d0 = &ppppuStack_170;
  if (*(short *)(lVar18 + 0x80) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar18 + 0x70) - *plVar13 >> 4) * -0x5555555555555555 - 0x3ffdU) {
    uVar15 = 3;
    FUN_10a97d38c(plVar13,3);
    lVar16 = plVar5[3];
    plVar5 = (long *)plVar5[4];
    plVar14 = (long *)0x48;
    __Znwm();
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_DAT_110c34de8;
    plVar6 = plVar14;
    if (plVar5 == (long *)0x0) {
      plVar14[4] = 0;
      plVar14[5] = 0;
      *(int *)(plVar14 + 6) = (int)plVar13;
      plVar14[7] = lVar16;
      plVar14[8] = 0;
      plVar14[3] = (long)&PTR_DAT_110c33490;
    }
    else {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar14[4] = 0;
      plVar14[5] = 0;
      plVar14[3] = (long)&PTR_DAT_110c33c30;
      *(int *)(plVar14 + 6) = (int)plVar13;
      plVar14[7] = lVar16;
      plVar14[8] = (long)plVar5;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar6 = plVar5;
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      plVar14[3] = (long)&PTR_DAT_110c33490;
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plVar5;
      }
    }
    *plVar9 = (long)(plVar14 + 3);
    plVar9[1] = (long)plVar14;
    auVar26._8_8_ = uVar15;
    auVar26._0_8_ = plVar6;
    return auVar26;
  }
  puVar7 = &UNK_10f686811;
  FUN_10a00946c();
  pcStack_218 = FUN_10a979ba0;
  lVar18 = *(long *)(puVar7 + 0x18);
  plVar13 = (long *)(lVar18 + 0x88);
  lStack_240 = lVar16;
  plStack_238 = unaff_x21;
  puStack_230 = puVar12;
  plStack_228 = plVar9;
  ppppuStack_220 = &ppppuStack_1d0;
  if (*(short *)(lVar18 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar18 + 0x90) - *plVar13 >> 7) * -0x5555555555555555 - 0x3ffdU) {
    FUN_10a8ffa20();
    lStack_250 = 0;
    plStack_248 = (long *)0x0;
    FUN_10a9768e0(plVar13,lVar18,plVar5,&lStack_250);
    FUN_10a9b1fd4(extraout_x8_03,*(undefined8 *)(puVar7 + 0x18),*(undefined8 *)(puVar7 + 0x20),
                  plVar13);
    FUN_10a979a20(&lStack_250,puVar7);
    plVar5 = plStack_248;
    uVar15 = *extraout_x8_03;
    lVar16 = lStack_250;
    FUN_10a978280(uVar15,lStack_250,plStack_248);
    if (plVar5 != (long *)0x0) {
      plVar9 = plVar5 + 1;
      do {
        lVar18 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        auVar30._8_8_ = lVar16;
        auVar30._0_8_ = plVar5;
        return auVar30;
      }
    }
    auVar27._8_8_ = lVar16;
    auVar27._0_8_ = uVar15;
    return auVar27;
  }
  puVar7 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_250);
  FUN_10a9b09dc(extraout_x8_03);
  puVar11 = puVar7;
  __Unwind_Resume();
  uStack_290 = 0x4ec4ec4ec4ec4ec5;
  pcStack_258 = FUN_10a979ce4;
  lStack_288 = unaff_x23;
  lStack_280 = lVar16;
  plStack_278 = plVar13;
  puStack_270 = puVar7;
  ppppuStack_260 = &ppppuStack_220;
  if (*plVar5 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar16 = *(long *)(puVar11 + 0x18);
    plVar9 = (long *)(lVar16 + 0x88);
    if (*(short *)(lVar16 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar16 + 0x90) - *plVar9 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar13 = plVar5;
      FUN_10a8ffa20();
      plVar6 = (long *)plVar5[1];
      plStack_298 = (long *)plVar5[1];
      lStack_2a0 = *plVar5;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar9,lVar16,plVar13,&lStack_2a0);
      FUN_10a9b1fd4(extraout_x8_04,*(undefined8 *)(puVar11 + 0x18),*(undefined8 *)(puVar11 + 0x20),
                    plVar9);
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 1;
        do {
          lVar16 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a979a20(&lStack_2a0,puVar11);
      plVar5 = plStack_298;
      uVar15 = *extraout_x8_04;
      lVar16 = lStack_2a0;
      FUN_10a978280(uVar15,lStack_2a0,plStack_298);
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar5 + 1;
        do {
          lVar18 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar28._8_8_ = lVar16;
      auVar28._0_8_ = uVar15;
      return auVar28;
    }
  }
  puVar7 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_2a0);
  FUN_10a9b09dc(extraout_x8_04);
  __Unwind_Resume(puVar7);
  auVar29._8_8_ = 0x11;
  auVar29._0_8_ = &UNK_10f687501;
  return auVar29;
}



/* Entry: 10a97941c; end: 10a9795c7;  */

undefined1  [16] FUN_10a97941c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *extraout_x8;
  ulong uVar16;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar17;
  ulong uVar18;
  long unaff_x20;
  long *unaff_x21;
  long *plVar19;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  undefined *puStack_1d0;
  undefined8 ****ppppuStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined1 ****ppppuStack_180;
  code *pcStack_178;
  undefined1 ***pppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f68676f);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    plVar6 = (long *)(lVar5 + 0x40);
    unaff_x20 = param_2;
    if (*(short *)(lVar5 + 0x58) != 0x3fff ||
        0xffffffffffffc001 < (*(long *)(lVar5 + 0x48) - *plVar6 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU
       ) {
      FUN_10a977970();
      uVar15 = *(undefined8 *)(param_2 + 0x18);
      plVar13 = *(long **)(param_2 + 0x20);
      puVar7 = (undefined8 *)0x48;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110c34cf8;
      plVar9 = puVar7 + 3;
      if (plVar13 != (long *)0x0) {
        plVar19 = plVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar19 = plVar9;
      uStack_60 = uVar15;
      plStack_58 = plVar13;
      uStack_50 = uVar15;
      plStack_48 = plVar13;
      FUN_10a9b1d80(plVar9,uVar15,plVar13,plVar6);
      if (plVar13 != (long *)0x0) {
        plVar6 = plVar13 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          plVar19 = plVar13;
        }
      }
      plVar6 = plStack_58;
      *plVar9 = (long)&PTR_DAT_110c33708;
      if (plStack_58 != (long *)0x0) {
        plVar13 = plStack_58 + 1;
        do {
          lVar5 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar19 = plVar6;
        }
      }
      *param_1 = (long)plVar9;
      param_1[1] = (long)puVar7;
      auVar21._8_8_ = uVar15;
      auVar21._0_8_ = plVar19;
      return auVar21;
    }
  }
  puVar8 = &UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_50);
  func_0x00010a3f6208(&uStack_60);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_68 = FUN_10a9795c8;
  plVar9 = (long *)param_3[1];
  plVar6 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((plVar9 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x22 = param_3, plVar9 == (long *)0x0)) {
LAB_10a9797f4:
    FUN_10a00946c(&UNK_10f6867c2);
  }
  else {
    lVar5 = *param_3;
    plVar13 = plVar9 + 1;
    do {
      lVar17 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    unaff_x23 = 0;
    unaff_x21 = plVar9;
    if (lVar5 == 0) goto LAB_10a9797f4;
    unaff_x23 = *(long *)(puVar8 + 0x18);
    plVar9 = (long *)(unaff_x23 + 0x40);
    unaff_x24 = 0x4ec4ec4ec4ec4ec5;
    if (*(short *)(unaff_x23 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(unaff_x23 + 0x48) - *plVar9 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      FUN_10a9778f0(plVar9,2);
      uVar16 = (ulong)((uint)plVar9 & 0x3fff);
      uVar18 = (*(long *)(unaff_x23 + 0x48) - *(long *)(unaff_x23 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5
      ;
      if (uVar16 <= uVar18 && uVar18 - uVar16 != 0) {
        lVar5 = *(long *)(unaff_x23 + 0x40) + uVar16 * 0xd0;
        lVar20 = param_3[1];
        lVar17 = *param_3;
        if (param_3[1] != 0) {
          plVar6 = (long *)(param_3[1] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar10 = *(long *)(lVar5 + 0x20);
        *(long *)(lVar5 + 0x20) = lVar20;
        *(long *)(lVar5 + 0x18) = lVar17;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(undefined1 *)(lVar5 + 200) = 2;
        *(long *)(unaff_x23 + 0x60) = *(long *)(unaff_x23 + 0x60) + 1;
        uVar15 = *(undefined8 *)(puVar8 + 0x18);
        plVar13 = *(long **)(puVar8 + 0x20);
        puVar7 = (undefined8 *)0x48;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_DAT_110c34d48;
        plVar6 = puVar7 + 3;
        if (plVar13 != (long *)0x0) {
          plVar19 = plVar13 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *plVar19 = *plVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar3) {
              *plVar19 = *plVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar19 = plVar6;
        uStack_c0 = uVar15;
        plStack_b8 = plVar13;
        uStack_b0 = uVar15;
        plStack_a8 = plVar13;
        FUN_10a9b1e28(plVar6,uVar15,plVar13,plVar9);
        if (plVar13 != (long *)0x0) {
          plVar9 = plVar13 + 1;
          do {
            lVar5 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            plVar19 = plVar13;
          }
        }
        plVar9 = plStack_b8;
        *plVar6 = (long)&PTR_DAT_110c33778;
        if (plStack_b8 != (long *)0x0) {
          plVar13 = plStack_b8 + 1;
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            plVar19 = plVar9;
          }
        }
        *extraout_x8 = (long)plVar6;
        extraout_x8[1] = (long)puVar7;
        auVar22._8_8_ = uVar15;
        auVar22._0_8_ = plVar19;
        return auVar22;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9797f4);
      (*pcVar4)();
    }
  }
  puVar11 = &UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_b0);
  func_0x00010a3f6208(&uStack_c0);
  __ZNSt3__119__shared_weak_countD2Ev(puVar8);
  __ZdlPv();
  puVar12 = puVar11;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a979834;
  lVar5 = *(long *)(puVar12 + 0x18);
  plVar9 = (long *)(lVar5 + 0x40);
  uStack_100 = unaff_x24;
  lStack_f8 = unaff_x23;
  plStack_f0 = unaff_x22;
  plStack_e8 = unaff_x21;
  puStack_e0 = puVar8;
  puStack_d8 = puVar11;
  ppuStack_d0 = &puStack_70;
  if (*(short *)(lVar5 + 0x58) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar5 + 0x48) - *plVar9 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU)
  {
    FUN_10a9778f0(plVar9,2);
    uVar16 = (ulong)((uint)plVar9 & 0x3fff);
    uVar18 = (*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (uVar16 <= uVar18 && uVar18 - uVar16 != 0) {
      lVar17 = *(long *)(lVar5 + 0x40) + uVar16 * 0xd0;
      lVar20 = *plVar6;
      *(long *)(lVar17 + 0x30) = plVar6[1];
      *(long *)(lVar17 + 0x28) = lVar20;
      *(undefined1 *)(lVar17 + 200) = 3;
      *(long *)(lVar5 + 0x60) = *(long *)(lVar5 + 0x60) + 1;
      uVar15 = *(undefined8 *)(puVar12 + 0x18);
      plVar13 = *(long **)(puVar12 + 0x20);
      puVar7 = (undefined8 *)0x48;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_DAT_110c34d98;
      plVar6 = puVar7 + 3;
      if (plVar13 != (long *)0x0) {
        plVar19 = plVar13 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar19 = plVar6;
      uStack_120 = uVar15;
      plStack_118 = plVar13;
      uStack_110 = uVar15;
      plStack_108 = plVar13;
      FUN_10a9b1e28(plVar6,uVar15,plVar13,plVar9);
      if (plVar13 != (long *)0x0) {
        plVar9 = plVar13 + 1;
        do {
          lVar5 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          plVar19 = plVar13;
        }
      }
      plVar9 = plStack_118;
      *plVar6 = (long)&PTR_DAT_110c337e8;
      if (plStack_118 != (long *)0x0) {
        plVar13 = plStack_118 + 1;
        do {
          lVar5 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          plVar19 = plVar9;
        }
      }
      *extraout_x8_00 = (long)plVar6;
      extraout_x8_00[1] = (long)puVar7;
      auVar23._8_8_ = uVar15;
      auVar23._0_8_ = plVar19;
      return auVar23;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9799ec);
    (*pcVar4)();
  }
  plVar9 = (long *)&UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_110);
  func_0x00010a3f6208(&uStack_120);
  __ZNSt3__119__shared_weak_countD2Ev(puVar12);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_128 = FUN_10a979a20;
  lVar17 = plVar6[3];
  plVar13 = (long *)(lVar17 + 0x68);
  pppuStack_130 = &ppuStack_d0;
  if (*(short *)(lVar17 + 0x80) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar17 + 0x70) - *plVar13 >> 4) * -0x5555555555555555 - 0x3ffdU) {
    uVar15 = 3;
    FUN_10a97d38c(plVar13,3);
    lVar5 = plVar6[3];
    plVar6 = (long *)plVar6[4];
    plVar14 = (long *)0x48;
    __Znwm();
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_DAT_110c34de8;
    plVar19 = plVar14;
    if (plVar6 == (long *)0x0) {
      plVar14[4] = 0;
      plVar14[5] = 0;
      *(int *)(plVar14 + 6) = (int)plVar13;
      plVar14[7] = lVar5;
      plVar14[8] = 0;
      plVar14[3] = (long)&PTR_DAT_110c33490;
    }
    else {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar14[4] = 0;
      plVar14[5] = 0;
      plVar14[3] = (long)&PTR_DAT_110c33c30;
      *(int *)(plVar14 + 6) = (int)plVar13;
      plVar14[7] = lVar5;
      plVar14[8] = (long)plVar6;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar19 = plVar6;
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      plVar14[3] = (long)&PTR_DAT_110c33490;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        plVar19 = plVar6;
      }
    }
    *plVar9 = (long)(plVar14 + 3);
    plVar9[1] = (long)plVar14;
    auVar24._8_8_ = uVar15;
    auVar24._0_8_ = plVar19;
    return auVar24;
  }
  puVar8 = &UNK_10f686811;
  FUN_10a00946c();
  pcStack_178 = FUN_10a979ba0;
  lVar17 = *(long *)(puVar8 + 0x18);
  plVar13 = (long *)(lVar17 + 0x88);
  lStack_1a0 = lVar5;
  plStack_198 = unaff_x21;
  puStack_190 = puVar12;
  plStack_188 = plVar9;
  ppppuStack_180 = &pppuStack_130;
  if (*(short *)(lVar17 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar17 + 0x90) - *plVar13 >> 7) * -0x5555555555555555 - 0x3ffdU) {
    FUN_10a8ffa20();
    lStack_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    FUN_10a9768e0(plVar13,lVar17,plVar6,&lStack_1b0);
    FUN_10a9b1fd4(extraout_x8_01,*(undefined8 *)(puVar8 + 0x18),*(undefined8 *)(puVar8 + 0x20),
                  plVar13);
    FUN_10a979a20(&lStack_1b0,puVar8);
    plVar6 = plStack_1a8;
    uVar15 = *extraout_x8_01;
    lVar5 = lStack_1b0;
    FUN_10a978280(uVar15,lStack_1b0,plStack_1a8);
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 1;
      do {
        lVar17 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        auVar28._8_8_ = lVar5;
        auVar28._0_8_ = plVar6;
        return auVar28;
      }
    }
    auVar25._8_8_ = lVar5;
    auVar25._0_8_ = uVar15;
    return auVar25;
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_1b0);
  FUN_10a9b09dc(extraout_x8_01);
  puVar11 = puVar8;
  __Unwind_Resume();
  uStack_1f0 = 0x4ec4ec4ec4ec4ec5;
  pcStack_1b8 = FUN_10a979ce4;
  lStack_1e8 = unaff_x23;
  lStack_1e0 = lVar5;
  plStack_1d8 = plVar13;
  puStack_1d0 = puVar8;
  ppppuStack_1c0 = &ppppuStack_180;
  if (*plVar6 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar5 = *(long *)(puVar11 + 0x18);
    plVar9 = (long *)(lVar5 + 0x88);
    if (*(short *)(lVar5 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar5 + 0x90) - *plVar9 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar13 = plVar6;
      FUN_10a8ffa20();
      plVar19 = (long *)plVar6[1];
      plStack_1f8 = (long *)plVar6[1];
      lStack_200 = *plVar6;
      if (plVar19 != (long *)0x0) {
        plVar6 = plVar19 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar9,lVar5,plVar13,&lStack_200);
      FUN_10a9b1fd4(extraout_x8_02,*(undefined8 *)(puVar11 + 0x18),*(undefined8 *)(puVar11 + 0x20),
                    plVar9);
      if (plVar19 != (long *)0x0) {
        plVar6 = plVar19 + 1;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      FUN_10a979a20(&lStack_200,puVar11);
      plVar6 = plStack_1f8;
      uVar15 = *extraout_x8_02;
      lVar5 = lStack_200;
      FUN_10a978280(uVar15,lStack_200,plStack_1f8);
      if (plVar6 != (long *)0x0) {
        plVar9 = plVar6 + 1;
        do {
          lVar17 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar26._8_8_ = lVar5;
      auVar26._0_8_ = uVar15;
      return auVar26;
    }
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_200);
  FUN_10a9b09dc(extraout_x8_02);
  __Unwind_Resume(puVar8);
  auVar27._8_8_ = 0x11;
  auVar27._0_8_ = &UNK_10f687501;
  return auVar27;
}



/* Entry: 10a9795c8; end: 10a979833;  */

undefined1  [16] FUN_10a9795c8(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar15;
  ulong uVar16;
  long *unaff_x21;
  long *plVar17;
  long *unaff_x22;
  long unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  undefined *puStack_170;
  undefined1 ****ppppuStack_160;
  code *pcStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  undefined *puStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar5 = (long *)param_3[1];
  plVar12 = param_3;
  if ((plVar5 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x22 = param_3, plVar5 == (long *)0x0)) {
LAB_10a9797f4:
    FUN_10a00946c(&UNK_10f6867c2);
  }
  else {
    lVar18 = *param_3;
    plVar10 = plVar5 + 1;
    do {
      lVar15 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    unaff_x23 = 0;
    unaff_x21 = plVar5;
    if (lVar18 == 0) goto LAB_10a9797f4;
    unaff_x23 = *(long *)(param_2 + 0x18);
    plVar5 = (long *)(unaff_x23 + 0x40);
    unaff_x24 = 0x4ec4ec4ec4ec4ec5;
    if (*(short *)(unaff_x23 + 0x58) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(unaff_x23 + 0x48) - *plVar5 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU) {
      FUN_10a9778f0(plVar5,2);
      uVar14 = (ulong)((uint)plVar5 & 0x3fff);
      uVar16 = (*(long *)(unaff_x23 + 0x48) - *(long *)(unaff_x23 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5
      ;
      if (uVar14 <= uVar16 && uVar16 - uVar14 != 0) {
        lVar18 = *(long *)(unaff_x23 + 0x40) + uVar14 * 0xd0;
        lVar19 = param_3[1];
        lVar15 = *param_3;
        if (param_3[1] != 0) {
          plVar12 = (long *)(param_3[1] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = *(long *)(lVar18 + 0x20);
        *(long *)(lVar18 + 0x20) = lVar19;
        *(long *)(lVar18 + 0x18) = lVar15;
        if (lVar6 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(undefined1 *)(lVar18 + 200) = 2;
        *(long *)(unaff_x23 + 0x60) = *(long *)(unaff_x23 + 0x60) + 1;
        uVar13 = *(undefined8 *)(param_2 + 0x18);
        plVar10 = *(long **)(param_2 + 0x20);
        puVar7 = (undefined8 *)0x48;
        __Znwm();
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_DAT_110c34d48;
        plVar12 = puVar7 + 3;
        if (plVar10 != (long *)0x0) {
          plVar17 = plVar10 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = *plVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = *plVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar17 = plVar12;
        uStack_60 = uVar13;
        plStack_58 = plVar10;
        uStack_50 = uVar13;
        plStack_48 = plVar10;
        FUN_10a9b1e28(plVar12,uVar13,plVar10,plVar5);
        if (plVar10 != (long *)0x0) {
          plVar5 = plVar10 + 1;
          do {
            lVar18 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            plVar17 = plVar10;
          }
        }
        plVar5 = plStack_58;
        *plVar12 = (long)&PTR_DAT_110c33778;
        if (plStack_58 != (long *)0x0) {
          plVar10 = plStack_58 + 1;
          do {
            lVar18 = *plVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = lVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            plVar17 = plVar5;
          }
        }
        *param_1 = (long)plVar12;
        param_1[1] = (long)puVar7;
        auVar20._8_8_ = uVar13;
        auVar20._0_8_ = plVar17;
        return auVar20;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9797f4);
      (*pcVar4)();
    }
  }
  puVar8 = &UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_50);
  func_0x00010a3f6208(&uStack_60);
  __ZNSt3__119__shared_weak_countD2Ev(param_2);
  __ZdlPv();
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_68 = FUN_10a979834;
  lVar18 = *(long *)(puVar9 + 0x18);
  plVar5 = (long *)(lVar18 + 0x40);
  uStack_a0 = unaff_x24;
  lStack_98 = unaff_x23;
  plStack_90 = unaff_x22;
  plStack_88 = unaff_x21;
  lStack_80 = param_2;
  puStack_78 = puVar8;
  puStack_70 = &stack0xfffffffffffffff0;
  if (*(short *)(lVar18 + 0x58) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar18 + 0x48) - *plVar5 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU)
  {
    FUN_10a9778f0(plVar5,2);
    uVar14 = (ulong)((uint)plVar5 & 0x3fff);
    uVar16 = (*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (uVar14 <= uVar16 && uVar16 - uVar14 != 0) {
      lVar15 = *(long *)(lVar18 + 0x40) + uVar14 * 0xd0;
      lVar19 = *plVar12;
      *(long *)(lVar15 + 0x30) = plVar12[1];
      *(long *)(lVar15 + 0x28) = lVar19;
      *(undefined1 *)(lVar15 + 200) = 3;
      *(long *)(lVar18 + 0x60) = *(long *)(lVar18 + 0x60) + 1;
      uVar13 = *(undefined8 *)(puVar9 + 0x18);
      plVar10 = *(long **)(puVar9 + 0x20);
      puVar7 = (undefined8 *)0x48;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_DAT_110c34d98;
      plVar12 = puVar7 + 3;
      if (plVar10 != (long *)0x0) {
        plVar17 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar17 = plVar12;
      uStack_c0 = uVar13;
      plStack_b8 = plVar10;
      uStack_b0 = uVar13;
      plStack_a8 = plVar10;
      FUN_10a9b1e28(plVar12,uVar13,plVar10,plVar5);
      if (plVar10 != (long *)0x0) {
        plVar5 = plVar10 + 1;
        do {
          lVar18 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          plVar17 = plVar10;
        }
      }
      plVar5 = plStack_b8;
      *plVar12 = (long)&PTR_DAT_110c337e8;
      if (plStack_b8 != (long *)0x0) {
        plVar10 = plStack_b8 + 1;
        do {
          lVar18 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar17 = plVar5;
        }
      }
      *extraout_x8 = (long)plVar12;
      extraout_x8[1] = (long)puVar7;
      auVar21._8_8_ = uVar13;
      auVar21._0_8_ = plVar17;
      return auVar21;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9799ec);
    (*pcVar4)();
  }
  plVar5 = (long *)&UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_b0);
  func_0x00010a3f6208(&uStack_c0);
  __ZNSt3__119__shared_weak_countD2Ev(puVar9);
  __ZdlPv();
  __Unwind_Resume();
  pcStack_c8 = FUN_10a979a20;
  lVar15 = plVar12[3];
  plVar10 = (long *)(lVar15 + 0x68);
  ppuStack_d0 = &puStack_70;
  if (*(short *)(lVar15 + 0x80) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar15 + 0x70) - *plVar10 >> 4) * -0x5555555555555555 - 0x3ffdU) {
    uVar13 = 3;
    FUN_10a97d38c(plVar10,3);
    lVar18 = plVar12[3];
    plVar12 = (long *)plVar12[4];
    plVar11 = (long *)0x48;
    __Znwm();
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_DAT_110c34de8;
    plVar17 = plVar11;
    if (plVar12 == (long *)0x0) {
      plVar11[4] = 0;
      plVar11[5] = 0;
      *(int *)(plVar11 + 6) = (int)plVar10;
      plVar11[7] = lVar18;
      plVar11[8] = 0;
      plVar11[3] = (long)&PTR_DAT_110c33490;
    }
    else {
      plVar1 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11[4] = 0;
      plVar11[5] = 0;
      plVar11[3] = (long)&PTR_DAT_110c33c30;
      *(int *)(plVar11 + 6) = (int)plVar10;
      plVar11[7] = lVar18;
      plVar11[8] = (long)plVar12;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar18 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        plVar17 = plVar12;
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      plVar11[3] = (long)&PTR_DAT_110c33490;
      do {
        lVar18 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        plVar17 = plVar12;
      }
    }
    *plVar5 = (long)(plVar11 + 3);
    plVar5[1] = (long)plVar11;
    auVar22._8_8_ = uVar13;
    auVar22._0_8_ = plVar17;
    return auVar22;
  }
  puVar8 = &UNK_10f686811;
  FUN_10a00946c();
  pcStack_118 = FUN_10a979ba0;
  lVar15 = *(long *)(puVar8 + 0x18);
  plVar10 = (long *)(lVar15 + 0x88);
  lStack_140 = lVar18;
  plStack_138 = unaff_x21;
  puStack_130 = puVar9;
  plStack_128 = plVar5;
  pppuStack_120 = &ppuStack_d0;
  if (*(short *)(lVar15 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 <
      (*(long *)(lVar15 + 0x90) - *plVar10 >> 7) * -0x5555555555555555 - 0x3ffdU) {
    FUN_10a8ffa20();
    lStack_150 = 0;
    plStack_148 = (long *)0x0;
    FUN_10a9768e0(plVar10,lVar15,plVar12,&lStack_150);
    FUN_10a9b1fd4(extraout_x8_00,*(undefined8 *)(puVar8 + 0x18),*(undefined8 *)(puVar8 + 0x20),
                  plVar10);
    FUN_10a979a20(&lStack_150,puVar8);
    plVar12 = plStack_148;
    uVar13 = *extraout_x8_00;
    lVar18 = lStack_150;
    FUN_10a978280(uVar13,lStack_150,plStack_148);
    if (plVar12 != (long *)0x0) {
      plVar5 = plVar12 + 1;
      do {
        lVar15 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
        auVar26._8_8_ = lVar18;
        auVar26._0_8_ = plVar12;
        return auVar26;
      }
    }
    auVar23._8_8_ = lVar18;
    auVar23._0_8_ = uVar13;
    return auVar23;
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_150);
  FUN_10a9b09dc(extraout_x8_00);
  puVar9 = puVar8;
  __Unwind_Resume();
  uStack_190 = 0x4ec4ec4ec4ec4ec5;
  pcStack_158 = FUN_10a979ce4;
  lStack_188 = unaff_x23;
  lStack_180 = lVar18;
  plStack_178 = plVar10;
  puStack_170 = puVar8;
  ppppuStack_160 = &pppuStack_120;
  if (*plVar12 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar18 = *(long *)(puVar9 + 0x18);
    plVar5 = (long *)(lVar18 + 0x88);
    if (*(short *)(lVar18 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar18 + 0x90) - *plVar5 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar10 = plVar12;
      FUN_10a8ffa20();
      plVar17 = (long *)plVar12[1];
      plStack_198 = (long *)plVar12[1];
      lStack_1a0 = *plVar12;
      if (plVar17 != (long *)0x0) {
        plVar12 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar5,lVar18,plVar10,&lStack_1a0);
      FUN_10a9b1fd4(extraout_x8_01,*(undefined8 *)(puVar9 + 0x18),*(undefined8 *)(puVar9 + 0x20),
                    plVar5);
      if (plVar17 != (long *)0x0) {
        plVar12 = plVar17 + 1;
        do {
          lVar18 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      FUN_10a979a20(&lStack_1a0,puVar9);
      plVar12 = plStack_198;
      uVar13 = *extraout_x8_01;
      lVar18 = lStack_1a0;
      FUN_10a978280(uVar13,lStack_1a0,plStack_198);
      if (plVar12 != (long *)0x0) {
        plVar5 = plVar12 + 1;
        do {
          lVar15 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar24._8_8_ = lVar18;
      auVar24._0_8_ = uVar13;
      return auVar24;
    }
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_1a0);
  FUN_10a9b09dc(extraout_x8_01);
  __Unwind_Resume(puVar8);
  auVar25._8_8_ = 0x11;
  auVar25._0_8_ = &UNK_10f687501;
  return auVar25;
}



/* Entry: 10a979834; end: 10a979a1f;  */

undefined1  [16] FUN_10a979834(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar16 = *(long *)(param_2 + 0x18);
  plVar5 = (long *)(lVar16 + 0x40);
  if (*(short *)(lVar16 + 0x58) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar16 + 0x48) - *plVar5 >> 4) * 0x4ec4ec4ec4ec4ec5 - 0x3ffdU)
  {
    FUN_10a9778f0(plVar5,2);
    uVar12 = (ulong)((uint)plVar5 & 0x3fff);
    uVar14 = (*(long *)(lVar16 + 0x48) - *(long *)(lVar16 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (uVar12 <= uVar14 && uVar14 - uVar12 != 0) {
      lVar13 = *(long *)(lVar16 + 0x40) + uVar12 * 0xd0;
      lVar17 = *param_3;
      *(long *)(lVar13 + 0x30) = param_3[1];
      *(long *)(lVar13 + 0x28) = lVar17;
      *(undefined1 *)(lVar13 + 200) = 3;
      *(long *)(lVar16 + 0x60) = *(long *)(lVar16 + 0x60) + 1;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      plVar15 = *(long **)(param_2 + 0x20);
      puVar6 = (undefined8 *)0x48;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110c34d98;
      plVar7 = puVar6 + 3;
      if (plVar15 != (long *)0x0) {
        plVar9 = plVar15 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = plVar7;
      uStack_60 = uVar11;
      plStack_58 = plVar15;
      uStack_50 = uVar11;
      plStack_48 = plVar15;
      FUN_10a9b1e28(plVar7,uVar11,plVar15,plVar5);
      if (plVar15 != (long *)0x0) {
        plVar5 = plVar15 + 1;
        do {
          lVar16 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          plVar9 = plVar15;
        }
      }
      plVar5 = plStack_58;
      *plVar7 = (long)&PTR_DAT_110c337e8;
      if (plStack_58 != (long *)0x0) {
        plVar15 = plStack_58 + 1;
        do {
          lVar16 = *plVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          plVar9 = plVar5;
        }
      }
      *param_1 = (long)plVar7;
      param_1[1] = (long)puVar6;
      auVar18._8_8_ = uVar11;
      auVar18._0_8_ = plVar9;
      return auVar18;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9799ec);
    (*pcVar4)();
  }
  plVar5 = (long *)&UNK_10f686747;
  FUN_10a00946c();
  func_0x00010a3f6208(&uStack_50);
  func_0x00010a3f6208(&uStack_60);
  __ZNSt3__119__shared_weak_countD2Ev(param_2);
  __ZdlPv();
  __Unwind_Resume();
  lVar13 = param_3[3];
  plVar7 = (long *)(lVar13 + 0x68);
  if (*(short *)(lVar13 + 0x80) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar13 + 0x70) - *plVar7 >> 4) * -0x5555555555555555 - 0x3ffdU
     ) {
    uVar11 = 3;
    FUN_10a97d38c(plVar7,3);
    lVar16 = param_3[3];
    plVar15 = (long *)param_3[4];
    plVar8 = (long *)0x48;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110c34de8;
    plVar9 = plVar8;
    if (plVar15 == (long *)0x0) {
      plVar8[4] = 0;
      plVar8[5] = 0;
      *(int *)(plVar8 + 6) = (int)plVar7;
      plVar8[7] = lVar16;
      plVar8[8] = 0;
      plVar8[3] = (long)&PTR_DAT_110c33490;
    }
    else {
      plVar1 = plVar15 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[3] = (long)&PTR_DAT_110c33c30;
      *(int *)(plVar8 + 6) = (int)plVar7;
      plVar8[7] = lVar16;
      plVar8[8] = (long)plVar15;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        plVar9 = plVar15;
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
      plVar8[3] = (long)&PTR_DAT_110c33490;
      do {
        lVar16 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        plVar9 = plVar15;
      }
    }
    *plVar5 = (long)(plVar8 + 3);
    plVar5[1] = (long)plVar8;
    auVar19._8_8_ = uVar11;
    auVar19._0_8_ = plVar9;
    return auVar19;
  }
  puVar10 = &UNK_10f686811;
  FUN_10a00946c();
  lVar13 = *(long *)(puVar10 + 0x18);
  plVar5 = (long *)(lVar13 + 0x88);
  lStack_e0 = lVar16;
  if (*(short *)(lVar13 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar13 + 0x90) - *plVar5 >> 7) * -0x5555555555555555 - 0x3ffdU
     ) {
    FUN_10a8ffa20();
    lStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    FUN_10a9768e0(plVar5,lVar13,param_3,&lStack_f0);
    FUN_10a9b1fd4(extraout_x8,*(undefined8 *)(puVar10 + 0x18),*(undefined8 *)(puVar10 + 0x20),plVar5
                 );
    FUN_10a979a20(&lStack_f0,puVar10);
    plVar5 = plStack_e8;
    uVar11 = *extraout_x8;
    lVar16 = lStack_f0;
    FUN_10a978280(uVar11,lStack_f0,plStack_e8);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        auVar23._8_8_ = lVar16;
        auVar23._0_8_ = plVar5;
        return auVar23;
      }
    }
    auVar20._8_8_ = lVar16;
    auVar20._0_8_ = uVar11;
    return auVar20;
  }
  puVar10 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_f0);
  FUN_10a9b09dc(extraout_x8);
  __Unwind_Resume();
  uStack_130 = 0x4ec4ec4ec4ec4ec5;
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar16 = *(long *)(puVar10 + 0x18);
    plVar5 = (long *)(lVar16 + 0x88);
    if (*(short *)(lVar16 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar16 + 0x90) - *plVar5 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar7 = param_3;
      FUN_10a8ffa20();
      plVar15 = (long *)param_3[1];
      plStack_138 = (long *)param_3[1];
      lStack_140 = *param_3;
      if (plVar15 != (long *)0x0) {
        plVar9 = plVar15 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar5,lVar16,plVar7,&lStack_140);
      FUN_10a9b1fd4(extraout_x8_00,*(undefined8 *)(puVar10 + 0x18),*(undefined8 *)(puVar10 + 0x20),
                    plVar5);
      if (plVar15 != (long *)0x0) {
        plVar5 = plVar15 + 1;
        do {
          lVar16 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      FUN_10a979a20(&lStack_140,puVar10);
      plVar5 = plStack_138;
      uVar11 = *extraout_x8_00;
      lVar16 = lStack_140;
      FUN_10a978280(uVar11,lStack_140,plStack_138);
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar13 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar21._8_8_ = lVar16;
      auVar21._0_8_ = uVar11;
      return auVar21;
    }
  }
  puVar10 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_140);
  FUN_10a9b09dc(extraout_x8_00);
  __Unwind_Resume(puVar10);
  auVar22._8_8_ = 0x11;
  auVar22._0_8_ = &UNK_10f687501;
  return auVar22;
}



/* Entry: 10a979a20; end: 10a979b9f;  */

undefined1  [16] FUN_10a979a20(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lStack_e0;
  long *plStack_d8;
  long lStack_90;
  long *plStack_88;
  
  lVar4 = param_2[3];
  plVar5 = (long *)(lVar4 + 0x68);
  if (*(short *)(lVar4 + 0x80) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar4 + 0x70) - *plVar5 >> 4) * -0x5555555555555555 - 0x3ffdU)
  {
    uVar9 = 3;
    FUN_10a97d38c(plVar5,3);
    lVar4 = param_2[3];
    plVar7 = (long *)param_2[4];
    plVar6 = (long *)0x48;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c34de8;
    plVar11 = plVar6;
    if (plVar7 == (long *)0x0) {
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(int *)(plVar6 + 6) = (int)plVar5;
      plVar6[7] = lVar4;
      plVar6[8] = 0;
      plVar6[3] = (long)&PTR_DAT_110c33490;
    }
    else {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6[4] = 0;
      plVar6[5] = 0;
      plVar6[3] = (long)&PTR_DAT_110c33c30;
      *(int *)(plVar6 + 6) = (int)plVar5;
      plVar6[7] = lVar4;
      plVar6[8] = (long)plVar7;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar11 = plVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      plVar6[3] = (long)&PTR_DAT_110c33490;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        plVar11 = plVar7;
      }
    }
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    auVar12._8_8_ = uVar9;
    auVar12._0_8_ = plVar11;
    return auVar12;
  }
  puVar8 = &UNK_10f686811;
  FUN_10a00946c();
  lVar4 = *(long *)(puVar8 + 0x18);
  plVar5 = (long *)(lVar4 + 0x88);
  if (*(short *)(lVar4 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar4 + 0x90) - *plVar5 >> 7) * -0x5555555555555555 - 0x3ffdU)
  {
    FUN_10a8ffa20();
    lStack_90 = 0;
    plStack_88 = (long *)0x0;
    FUN_10a9768e0(plVar5,lVar4,param_2,&lStack_90);
    FUN_10a9b1fd4(extraout_x8,*(undefined8 *)(puVar8 + 0x18),*(undefined8 *)(puVar8 + 0x20),plVar5);
    FUN_10a979a20(&lStack_90,puVar8);
    plVar5 = plStack_88;
    uVar9 = *extraout_x8;
    lVar4 = lStack_90;
    FUN_10a978280(uVar9,lStack_90,plStack_88);
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 1;
      do {
        lVar10 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        auVar16._8_8_ = lVar4;
        auVar16._0_8_ = plVar5;
        return auVar16;
      }
    }
    auVar13._8_8_ = lVar4;
    auVar13._0_8_ = uVar9;
    return auVar13;
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_90);
  FUN_10a9b09dc(extraout_x8);
  __Unwind_Resume();
  if (*param_2 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar4 = *(long *)(puVar8 + 0x18);
    plVar5 = (long *)(lVar4 + 0x88);
    if (*(short *)(lVar4 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar4 + 0x90) - *plVar5 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar7 = param_2;
      FUN_10a8ffa20();
      plVar11 = (long *)param_2[1];
      plStack_d8 = (long *)param_2[1];
      lStack_e0 = *param_2;
      if (plVar11 != (long *)0x0) {
        plVar6 = plVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar5,lVar4,plVar7,&lStack_e0);
      FUN_10a9b1fd4(extraout_x8_00,*(undefined8 *)(puVar8 + 0x18),*(undefined8 *)(puVar8 + 0x20),
                    plVar5);
      if (plVar11 != (long *)0x0) {
        plVar5 = plVar11 + 1;
        do {
          lVar4 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      FUN_10a979a20(&lStack_e0,puVar8);
      plVar5 = plStack_d8;
      uVar9 = *extraout_x8_00;
      lVar4 = lStack_e0;
      FUN_10a978280(uVar9,lStack_e0,plStack_d8);
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar10 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar14._8_8_ = lVar4;
      auVar14._0_8_ = uVar9;
      return auVar14;
    }
  }
  puVar8 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_e0);
  FUN_10a9b09dc(extraout_x8_00);
  __Unwind_Resume(puVar8);
  auVar15._8_8_ = 0x11;
  auVar15._0_8_ = &UNK_10f687501;
  return auVar15;
}



/* Entry: 10a979ba0; end: 10a979ce3;  */

undefined1  [16] FUN_10a979ba0(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_90;
  long *plStack_88;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_2 + 0x18);
  plVar9 = (long *)(lVar4 + 0x88);
  if (*(short *)(lVar4 + 0xa0) != 0x3fff ||
      0xffffffffffffc001 < (*(long *)(lVar4 + 0x90) - *plVar9 >> 7) * -0x5555555555555555 - 0x3ffdU)
  {
    FUN_10a8ffa20();
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    FUN_10a9768e0(plVar9,lVar4,param_3,&lStack_40);
    FUN_10a9b1fd4(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),plVar9);
    FUN_10a979a20(&lStack_40,param_2);
    plVar9 = plStack_38;
    uVar5 = *param_1;
    lVar4 = lStack_40;
    FUN_10a978280(uVar5,lStack_40,plStack_38);
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 1;
      do {
        lVar8 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
code_r0x00010bdbd2cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
        auVar14._8_8_ = lVar4;
        auVar14._0_8_ = plVar9;
        return auVar14;
      }
    }
    auVar11._8_8_ = lVar4;
    auVar11._0_8_ = uVar5;
    return auVar11;
  }
  puVar6 = &UNK_10f686839;
  FUN_10a00946c();
  FUN_10a9ae92c(&lStack_40);
  FUN_10a9b09dc(param_1);
  __Unwind_Resume();
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar4 = *(long *)(puVar6 + 0x18);
    plVar9 = (long *)(lVar4 + 0x88);
    if (*(short *)(lVar4 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar4 + 0x90) - *plVar9 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar7 = param_3;
      FUN_10a8ffa20();
      plVar10 = (long *)param_3[1];
      plStack_88 = (long *)param_3[1];
      lStack_90 = *param_3;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar9,lVar4,plVar7,&lStack_90);
      FUN_10a9b1fd4(extraout_x8,*(undefined8 *)(puVar6 + 0x18),*(undefined8 *)(puVar6 + 0x20),plVar9
                   );
      if (plVar10 != (long *)0x0) {
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      FUN_10a979a20(&lStack_90,puVar6);
      plVar9 = plStack_88;
      uVar5 = *extraout_x8;
      lVar4 = lStack_90;
      FUN_10a978280(uVar5,lStack_90,plStack_88);
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          goto code_r0x00010bdbd2cc;
        }
      }
      auVar12._8_8_ = lVar4;
      auVar12._0_8_ = uVar5;
      return auVar12;
    }
  }
  puVar6 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_90);
  FUN_10a9b09dc(extraout_x8);
  __Unwind_Resume(puVar6);
  auVar13._8_8_ = 0x11;
  auVar13._0_8_ = &UNK_10f687501;
  return auVar13;
}



/* Entry: 10a979ce4; end: 10a979e9f;  */

undefined1  [16] FUN_10a979ce4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_50;
  long *plStack_48;
  
  if (*param_3 == 0) {
    FUN_10a00946c(&UNK_10f686861);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    plVar10 = (long *)(lVar4 + 0x88);
    if (*(short *)(lVar4 + 0xa0) != 0x3fff ||
        0xffffffffffffc001 <
        (*(long *)(lVar4 + 0x90) - *plVar10 >> 7) * -0x5555555555555555 - 0x3ffdU) {
      plVar7 = param_3;
      FUN_10a8ffa20();
      plVar9 = (long *)param_3[1];
      plStack_48 = (long *)param_3[1];
      lStack_50 = *param_3;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a9768e0(plVar10,lVar4,plVar7,&lStack_50);
      FUN_10a9b1fd4(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),plVar10)
      ;
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar4 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      FUN_10a979a20(&lStack_50,param_2);
      plVar10 = plStack_48;
      uVar5 = *param_1;
      lVar4 = lStack_50;
      FUN_10a978280(uVar5,lStack_50,plStack_48);
      if (plVar10 != (long *)0x0) {
        plVar7 = plVar10 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar10);
          auVar13._8_8_ = lVar4;
          auVar13._0_8_ = plVar10;
          return auVar13;
        }
      }
      auVar11._8_8_ = lVar4;
      auVar11._0_8_ = uVar5;
      return auVar11;
    }
  }
  puVar6 = &UNK_10f686839;
  FUN_10a00946c(&UNK_10f686839);
  FUN_10a9ae92c(&lStack_50);
  FUN_10a9b09dc(param_1);
  __Unwind_Resume(puVar6);
  auVar12._8_8_ = 0x11;
  auVar12._0_8_ = &UNK_10f687501;
  return auVar12;
}



/* Entry: 10a979ea0; end: 10a97a16b;  */

undefined1  [16] FUN_10a979ea0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f687501;
  return auVar1;
}



/* Entry: 10a97a16c; end: 10a97a4bf;  */

void FUN_10a97a16c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f687501,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33600;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x12400000130;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33600;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97a4a0;
    FUN_10a054dac(param_1,&UNK_10f6863a1,FUN_10a9b2150,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a9b22b0,FUN_10a9b23bc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6863bc,FUN_10a9b24ec,FUN_10a9b25f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638b84,FUN_10a9b26b8,FUN_10a9b27bc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f64bfb3,FUN_10a9b28d8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bfc5,FUN_10a9b299c,FUN_10a9b2ab0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f687501,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a97a4a0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97a4a4);
  (*pcVar6)();
}



/* Entry: 10a97a4c0; end: 10a97a553;  */

void FUN_10a97a4c0(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a97a554(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6868a6;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a9b2cc8();
  FUN_10a9b2fac(param_1);
  return;
}



/* Entry: 10a97a554; end: 10a97a62b;  */

/* WARNING: Removing unreachable block (ram,0x00010a97a5ec) */

undefined1  [16] FUN_10a97a554(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f687513,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b2bcc(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97a62c; end: 10a97a6bf;  */

void FUN_10a97a62c(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a97a6c0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6864d7;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a9b3164();
  FUN_10a9b3470(param_1);
  return;
}



/* Entry: 10a97a6c0; end: 10a97a797;  */

/* WARNING: Removing unreachable block (ram,0x00010a97a758) */

undefined1  [16] FUN_10a97a6c0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f687531,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b3068(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97a798; end: 10a97a7e3;  */

void FUN_10a97a798(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a97a7e4(param_1,&uStack_58);
  FUN_10a9b3628();
  return;
}



/* Entry: 10a97a7e4; end: 10a97a8bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a97a87c) */

undefined1  [16] FUN_10a97a7e4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f687548,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b352c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97a8bc; end: 10a97a94f;  */

void FUN_10a97a8bc(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a97a950(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686518;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a9b37e0();
  FUN_10a9b3b4c(param_1);
  return;
}



/* Entry: 10a97a950; end: 10a97aa27;  */

/* WARNING: Removing unreachable block (ram,0x00010a97a9e8) */

undefined1  [16] FUN_10a97a950(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f687563,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b36e4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97aa28; end: 10a97aabb;  */

void FUN_10a97aa28(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a97aabc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6868b2;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a9b3d04();
  FUN_10a9b3fbc(param_1);
  return;
}



/* Entry: 10a97aabc; end: 10a97ab93;  */

/* WARNING: Removing unreachable block (ram,0x00010a97ab54) */

undefined1  [16] FUN_10a97aabc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68757c,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9b3c08(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97ab94; end: 10a97abf7;  */

void FUN_10a97ab94(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = (ulong)(param_1 & 0x3fff);
  uVar6 = (param_3 - param_2 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if ((((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
       (pcVar5 = (char *)(param_2 + uVar4 * 0xd0), *(uint *)(pcVar5 + 4) == param_1)) &&
      (param_1 != 0)) && (*pcVar5 != '\x02')) {
    return;
  }
  puVar3 = &UNK_10f687594;
  FUN_10a00946c();
  lVar7 = *(long *)(puVar3 + 0x20);
  uVar1 = *(uint *)(puVar3 + 0x18);
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar6 = (*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
    *(byte *)(*(long *)(lVar7 + 0x40) + uVar4 * 0xd0) = (byte)param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97ac70);
  (*pcVar2)();
}



/* Entry: 10a97abf8; end: 10a97ad83;  */

void FUN_10a97abf8(long param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a97ab94((ulong)uVar1,*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x48));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(byte *)(*(long *)(lVar5 + 0x40) + uVar3 * 0xd0) = param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97ac70);
  (*pcVar2)();
}



/* Entry: 10a97ad84; end: 10a97af2b;  */

long * FUN_10a97ad84(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10a97ab94(param_1,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  uVar6 = (ulong)((uint)param_1 & 0x3fff);
  uVar7 = (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a97af18);
    (*pcVar4)();
  }
  lVar9 = *(long *)(param_2 + 0x40) + uVar6 * 0xd0;
  plVar8 = (long *)(lVar9 + 0x58);
  if (*plVar8 == 0) {
    if (*(char *)(lVar9 + 200) == '\x02') {
      plVar5 = *(long **)(lVar9 + 0x20);
      if (plVar5 == (long *)0x0) {
        return plVar8;
      }
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 == (long *)0x0) {
        return plVar8;
      }
      lVar9 = *(long *)(lVar9 + 0x18);
      lStack_48 = lVar9;
      plStack_40 = plVar5;
      if ((lVar9 != 0) &&
         (___dynamic_cast(lVar9,&PTR_DAT_110c07c30,&PTR_DAT_110bd9df0,0), lVar9 != 0)) {
        FUN_10a447fd4(auStack_58,&uStack_31);
        func_0x00010a448354(plVar8,auStack_58);
        if (plStack_50 != (long *)0x0) {
          plVar1 = plStack_50 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
          }
        }
        plVar5 = plStack_40;
        if (plStack_40 == (long *)0x0) {
          return plVar8;
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a447fd4(&lStack_48,auStack_58);
      func_0x00010a448354(plVar8,&lStack_48);
      if (plStack_40 == (long *)0x0) {
        return plVar8;
      }
      plVar1 = plStack_40 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar5 = plStack_40;
      } while (cVar2 != '\0');
    }
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return plVar8;
}



/* Entry: 10a97af2c; end: 10a97b0cf;  */

void FUN_10a97af2c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x18);
  FUN_10a97ad84(puVar4,*(undefined8 *)(param_2 + 0x20));
  plVar3 = (long *)*puVar4;
  FUN_10acabcd4(plVar3,0);
  puVar4 = (undefined8 *)*plVar3;
  FUN_10acab67c(puVar4,0);
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  *(undefined8 *)(param_1 + 0x10) = puVar4[1];
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10a97b0d0; end: 10a97b3b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a977bec) */
/* WARNING: Removing unreachable block (ram,0x00010a977bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a977bf8) */

void FUN_10a97b0d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x18);
  FUN_10a97ab94(uVar2,*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x48));
  plVar6 = (long *)param_2[1];
  if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0))
  {
    uVar8 = (ulong)(uVar2 & 0x3fff);
    uVar9 = (*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a977c18);
      (*pcVar5)();
    }
    lVar10 = *(long *)(lVar10 + 0x40) + uVar8 * 0xd0;
    plVar6 = *(long **)(lVar10 + 0x10);
    *(undefined8 *)(lVar10 + 8) = 0;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    uVar7 = *param_2;
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_10a977bb8(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x48),uVar2,uVar7,plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    plVar1 = plVar6 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 != 0) {
      return;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
  return;
}



/* Entry: 10a97b3b4; end: 10a97b43f;  */

undefined1  [16] FUN_10a97b3b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6875c1;
  return auVar1;
}



/* Entry: 10a97b440; end: 10a97b753;  */

void FUN_10a97b440(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6875c1,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c334f0;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c334f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97b734;
    FUN_10a054dac(param_1,&UNK_10f6863a1,FUN_10a9b4078,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a9b41b8,FUN_10a9b42bc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657acd,FUN_10a9b43ec,FUN_10a9b44b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657b2a,FUN_10a9b45d0,FUN_10a9b46cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f636fd0,FUN_10a9b480c,FUN_10a9b4970);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6875c1,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a97b734:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97b738);
  (*pcVar6)();
}



/* Entry: 10a97b754; end: 10a97b7c3;  */

void FUN_10a97b754(long param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar5 + 0x68),*(undefined8 *)(lVar5 + 0x70));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x70) - *(long *)(lVar5 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(byte *)(*(long *)(lVar5 + 0x68) + uVar3 * 0x30) = param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97b7c4);
  (*pcVar2)();
}



/* Entry: 10a97b7c4; end: 10a97b823;  */

long FUN_10a97b7c4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a978384((ulong)uVar1,*(undefined8 *)(lVar5 + 0x68),*(undefined8 *)(lVar5 + 0x70));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x70) - *(long *)(lVar5 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(long *)(lVar5 + 0x68) + uVar3 * 0x30 + 8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97b824);
  (*pcVar2)();
}



/* Entry: 10a97b824; end: 10a97b97f;  */

undefined1  [16] FUN_10a97b824(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long lStack_a0;
  long *plStack_98;
  
  plVar17 = (long *)*param_2;
  if (((long *)param_2[1] == plVar17) || (0x40 < (ulong)(param_2[1] - (long)plVar17))) {
    FUN_10a00946c(&UNK_10f686993);
  }
  else if (*plVar17 != 0) {
    lVar18 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x18);
    FUN_10a978384(uVar3,*(long *)(lVar18 + 0x68),*(undefined8 *)(lVar18 + 0x70));
    uVar12 = (ulong)(uVar3 & 0x3fff);
    lVar13 = *(long *)(lVar18 + 0x68);
    uVar15 = (*(long *)(lVar18 + 0x70) - lVar13 >> 4) * -0x5555555555555555;
    if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8ffb80);
      (*pcVar6)();
    }
    lVar13 = lVar13 + uVar12 * 0x30;
    plVar17 = (long *)(lVar13 + 8);
    if (plVar17 == param_2) {
      auVar21._8_4_ = uVar3;
      auVar21._0_8_ = plVar17;
      auVar21._12_4_ = 0;
      return auVar21;
    }
    plVar8 = (long *)*param_2;
    plVar2 = (long *)param_2[1];
    plVar11 = (long *)((long)plVar2 - (long)plVar8 >> 4);
    plVar19 = (long *)*plVar17;
    if ((long *)(*(long *)(lVar13 + 0x18) - (long)plVar19 >> 4) < plVar11) {
      plVar19 = plVar17;
      plVar9 = plVar8;
      FUN_10a438e74();
      if ((ulong)plVar11 >> 0x3c != 0) {
        FUN_10a438bb0();
        lVar18 = plVar9[1];
        lVar13 = *plVar9;
        if (plVar9[1] != 0) {
          plVar17 = (long *)(plVar9[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = *plVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar17 = (long *)plVar19[1];
        plVar19[1] = lVar18;
        *plVar19 = lVar13;
        if (plVar17 != (long *)0x0) {
          plVar8 = plVar17 + 1;
          do {
            lVar13 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        auVar23._8_8_ = plVar9;
        auVar23._0_8_ = plVar19;
        return auVar23;
      }
      uVar12 = *(long *)(lVar13 + 0x18) - *plVar17;
      plVar14 = (long *)((long)uVar12 >> 3);
      if (plVar14 <= plVar11) {
        plVar14 = plVar11;
      }
      if (0x7fffffffffffffef < uVar12) {
        plVar14 = (long *)0xfffffffffffffff;
      }
      FUN_10a5e7214(plVar17,plVar14);
      plVar11 = *(long **)(lVar13 + 0x10);
      for (; plVar8 != plVar2; plVar8 = plVar8 + 2) {
        lVar18 = plVar8[1];
        lVar20 = *plVar8;
        plVar11[1] = plVar8[1];
        *plVar11 = lVar20;
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *plVar19 = *plVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar11 = plVar11 + 2;
      }
    }
    else {
      plVar17 = *(long **)(lVar13 + 0x10);
      lVar18 = (long)plVar17 - (long)plVar19;
      if (plVar11 <= (long *)(lVar18 >> 4)) {
        plVar11 = plVar8;
        if (plVar8 != plVar2) {
          do {
            plVar8 = plVar11;
            FUN_10a910248(plVar19,plVar11);
            plVar11 = plVar11 + 2;
            plVar19 = plVar19 + 2;
          } while (plVar11 != plVar2);
          plVar17 = *(long **)(lVar13 + 0x10);
        }
        while (plVar17 != plVar19) {
          plVar17 = plVar17 + -2;
          FUN_10a3f90e8();
        }
        *(long **)(lVar13 + 0x10) = plVar19;
        goto LAB_10a910230;
      }
      plVar9 = (long *)((long)plVar8 + lVar18);
      plVar11 = plVar17;
      plVar14 = plVar8;
      if (plVar17 != plVar19) {
        do {
          plVar14 = plVar8;
          FUN_10a910248(plVar19,plVar8);
          plVar8 = plVar8 + 2;
          plVar19 = plVar19 + 2;
          lVar18 = lVar18 + -0x10;
        } while (lVar18 != 0);
        plVar11 = *(long **)(lVar13 + 0x10);
        plVar17 = plVar11;
      }
      for (; plVar9 != plVar2; plVar9 = plVar9 + 2) {
        lVar18 = plVar9[1];
        lVar20 = *plVar9;
        plVar11[1] = plVar9[1];
        *plVar11 = lVar20;
        if (lVar18 != 0) {
          plVar8 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar11 = plVar11 + 2;
      }
    }
    *(long **)(lVar13 + 0x10) = plVar11;
    plVar8 = plVar14;
LAB_10a910230:
    auVar22._8_8_ = plVar8;
    auVar22._0_8_ = plVar17;
    return auVar22;
  }
  puVar7 = &UNK_10f6869d9;
  FUN_10a00946c();
  if (*param_2 != 0) {
    lVar13 = *(long *)(puVar7 + 0x20);
    uVar15 = (ulong)*(uint *)(puVar7 + 0x18);
    uVar10 = *(undefined8 *)(lVar13 + 0x68);
    uVar12 = uVar15;
    FUN_10a978384(uVar15,uVar10,*(undefined8 *)(lVar13 + 0x70));
    uVar15 = uVar15 & 0x3fff;
    uVar16 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
    if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97b974);
      (*pcVar6)();
    }
    lVar13 = *(long *)(lVar13 + 0x68) + uVar15 * 0x30;
    lVar20 = param_2[1];
    lVar18 = *param_2;
    if (param_2[1] != 0) {
      plVar17 = (long *)(param_2[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar17 = *(long **)(lVar13 + 0x28);
    *(long *)(lVar13 + 0x28) = lVar20;
    *(long *)(lVar13 + 0x20) = lVar18;
    if (plVar17 != (long *)0x0) {
      plVar8 = plVar17 + 1;
      do {
        lVar13 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar17);
        auVar27._8_8_ = uVar10;
        auVar27._0_8_ = plVar17;
        return auVar27;
      }
    }
    auVar24._8_8_ = uVar10;
    auVar24._0_8_ = uVar12;
    return auVar24;
  }
  puVar7 = &UNK_10f686a1b;
  FUN_10a00946c();
  plVar17 = &lStack_a0;
  if (*param_2 == 0) {
    FUN_10a00946c(&UNK_10f686a8d);
LAB_10a97bad0:
    puVar7 = &UNK_10f686a5c;
    FUN_10a00946c(&UNK_10f686a5c);
    func_0x00010a05248c(&lStack_a0);
    __Unwind_Resume(puVar7);
    auVar26._8_8_ = 0x12;
    auVar26._0_8_ = &UNK_10f6875d3;
    return auVar26;
  }
  lVar13 = *(long *)(puVar7 + 0x20);
  uVar3 = *(uint *)(puVar7 + 0x18);
  FUN_10a978384((ulong)uVar3,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
  uVar12 = (ulong)uVar3 & 0x3fff;
  uVar15 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar12 <= uVar15 && uVar15 - uVar12 != 0) {
    lVar13 = *(long *)(lVar13 + 0x68) + uVar12 * 0x30;
    if (*(long *)(lVar13 + 8) == *(long *)(lVar13 + 0x10)) goto LAB_10a97bad0;
    lVar13 = *(long *)(puVar7 + 0x20);
    uVar3 = *(uint *)(puVar7 + 0x18);
    FUN_10a978384((ulong)uVar3,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
    uVar12 = (ulong)uVar3 & 0x3fff;
    uVar15 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
    if ((uVar12 <= uVar15 && uVar15 - uVar12 != 0) &&
       (lVar13 = *(long *)(lVar13 + 0x68) + uVar12 * 0x30, puVar1 = *(undefined8 **)(lVar13 + 8),
       *(undefined8 **)(lVar13 + 0x10) != puVar1)) {
      plStack_98 = (long *)param_2[1];
      lStack_a0 = *param_2;
      plVar8 = (long *)*puVar1;
      if (param_2[1] != 0) {
        plVar19 = (long *)(param_2[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = *plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plVar8 + 0x48))(plVar8,&lStack_a0);
      plVar19 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar2 = plStack_98 + 1;
        do {
          lVar13 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          plVar8 = plVar19;
        }
      }
      auVar25._8_8_ = plVar17;
      auVar25._0_8_ = plVar8;
      return auVar25;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97bac4);
  (*pcVar6)();
}



/* Entry: 10a97b980; end: 10a97baef;  */

undefined1  [16] FUN_10a97b980(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lStack_40;
  long *plStack_38;
  
  plVar10 = &lStack_40;
  if (*param_2 != 0) {
    lVar13 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x18);
    FUN_10a978384((ulong)uVar3,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
    uVar11 = (ulong)uVar3 & 0x3fff;
    uVar12 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
    if (uVar11 <= uVar12 && uVar12 - uVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x68) + uVar11 * 0x30;
      if (*(long *)(lVar13 + 8) == *(long *)(lVar13 + 0x10)) goto LAB_10a97bad0;
      lVar13 = *(long *)(param_1 + 0x20);
      uVar3 = *(uint *)(param_1 + 0x18);
      FUN_10a978384((ulong)uVar3,*(undefined8 *)(lVar13 + 0x68),*(undefined8 *)(lVar13 + 0x70));
      uVar11 = (ulong)uVar3 & 0x3fff;
      uVar12 = (*(long *)(lVar13 + 0x70) - *(long *)(lVar13 + 0x68) >> 4) * -0x5555555555555555;
      if ((uVar11 <= uVar12 && uVar12 - uVar11 != 0) &&
         (lVar13 = *(long *)(lVar13 + 0x68) + uVar11 * 0x30, puVar2 = *(undefined8 **)(lVar13 + 8),
         *(undefined8 **)(lVar13 + 0x10) != puVar2)) {
        plStack_38 = (long *)param_2[1];
        lStack_40 = *param_2;
        plVar7 = (long *)*puVar2;
        if (param_2[1] != 0) {
          plVar8 = (long *)(param_2[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        (**(code **)(*plVar7 + 0x48))(plVar7,&lStack_40);
        plVar8 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            lVar13 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            plVar7 = plVar8;
          }
        }
        auVar14._8_8_ = plVar10;
        auVar14._0_8_ = plVar7;
        return auVar14;
      }
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97bac4);
    (*pcVar6)();
  }
  FUN_10a00946c(&UNK_10f686a8d);
LAB_10a97bad0:
  puVar9 = &UNK_10f686a5c;
  FUN_10a00946c(&UNK_10f686a5c);
  func_0x00010a05248c(&lStack_40);
  __Unwind_Resume(puVar9);
  auVar15._8_8_ = 0x12;
  auVar15._0_8_ = &UNK_10f6875d3;
  return auVar15;
}



/* Entry: 10a97baf0; end: 10a97bb7b;  */

undefined1  [16] FUN_10a97baf0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f6875d3;
  return auVar1;
}



/* Entry: 10a97bb7c; end: 10a97bf1b;  */

void FUN_10a97bb7c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6875d3,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33940;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33940;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97befc;
    FUN_10a054dac(param_1,&UNK_10f6863a1,FUN_10a9b4a8c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97befc;
    FUN_10a054dac(param_1,&UNK_10f686ac0,FUN_10a9b4bcc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97befc;
    FUN_10a054dac(param_1,&UNK_10f686ac9,FUN_10a9b4e40,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a9b4ef8,FUN_10a9b5004);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"camera",FUN_10a9b5134,FUN_10a9b5248);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"groups",FUN_10a9b580c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f686ad5,FUN_10a9b5a18,FUN_10a9b5ad0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6875d3,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a97befc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97bf00);
  (*pcVar6)();
}



/* Entry: 10a97bf1c; end: 10a97bf7f;  */

void FUN_10a97bf1c(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar4 = (ulong)(param_1 & 0x3fff);
  uVar6 = (param_3 - param_2 >> 3) * -0x71c71c71c71c71c7;
  if ((((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
       (pcVar5 = (char *)(param_2 + uVar4 * 0x48), *(uint *)(pcVar5 + 4) == param_1)) &&
      (param_1 != 0)) && (*pcVar5 != '\x02')) {
    return;
  }
  puVar3 = &UNK_10f6875e6;
  FUN_10a00946c();
  plVar7 = *(long **)(puVar3 + 0x20);
  uVar1 = *(uint *)(puVar3 + 0x18);
  FUN_10a97bf1c((ulong)uVar1,*plVar7,plVar7[1]);
  uVar4 = (ulong)uVar1 & 0x3fff;
  uVar6 = (plVar7[1] - *plVar7 >> 3) * -0x71c71c71c71c71c7;
  if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
    *(byte *)(*plVar7 + uVar4 * 0x48) = (byte)param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97bff8);
  (*pcVar2)();
}



/* Entry: 10a97bf80; end: 10a97c0c7;  */

void FUN_10a97bf80(long param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a97bf1c((ulong)uVar1,*plVar5,plVar5[1]);
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (plVar5[1] - *plVar5 >> 3) * -0x71c71c71c71c71c7;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(byte *)(*plVar5 + uVar3 * 0x48) = param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97bff8);
  (*pcVar2)();
}



/* Entry: 10a97c0c8; end: 10a97c13b;  */

undefined8 * FUN_10a97c0c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a97c13c; end: 10a97c2a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a97c3f4) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4cc) */

void FUN_10a97c13c(long param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long unaff_x22;
  long *plVar19;
  long *plVar20;
  ulong unaff_x23;
  long unaff_x24;
  undefined4 auStack_e8 [4];
  undefined4 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (*param_2 == 0) {
    uVar8 = 0xf686b60;
    FUN_10a00946c();
    plVar19 = param_2;
LAB_10a97c2a0:
    FUN_10a98a264();
  }
  else {
    puVar15 = *(undefined8 **)(param_1 + 0x20);
    plVar19 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    FUN_10a97bf1c(plVar19,*puVar15,puVar15[1]);
    unaff_x23 = (ulong)*(uint *)(*param_2 + 0x18);
    lVar11 = *(long *)(*param_2 + 0x20);
    FUN_10a97c2a8(unaff_x23,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
    param_3 = unaff_x23;
    FUN_10a97765c();
    uVar8 = (uint)puVar15;
    lVar11 = *param_2;
    unaff_x24 = param_2[1];
    plVar18 = *(long **)(param_1 + 0x38);
    if (plVar18 < *(long **)(param_1 + 0x40)) {
      *plVar18 = lVar11;
      plVar18[1] = unaff_x24;
      if (unaff_x24 != 0) {
        plVar19 = (long *)(unaff_x24 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = *plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar18 = plVar18 + 2;
LAB_10a97c278:
      *(long **)(param_1 + 0x38) = plVar18;
      return;
    }
    unaff_x20 = *(long *)(param_1 + 0x30);
    unaff_x21 = (long)plVar18 - unaff_x20;
    unaff_x22 = unaff_x21 >> 4;
    uVar12 = unaff_x22 + 1;
    unaff_x19 = param_1;
    if (uVar12 >> 0x3c != 0) goto LAB_10a97c2a0;
    uVar13 = (long)*(long **)(param_1 + 0x40) - unaff_x20;
    unaff_x23 = (long)uVar13 >> 3;
    if (unaff_x23 <= uVar12) {
      unaff_x23 = uVar12;
    }
    if (0x7fffffffffffffef < uVar13) {
      unaff_x23 = 0xfffffffffffffff;
    }
    if (unaff_x23 >> 0x3c == 0) {
      lVar9 = unaff_x23 << 4;
      __Znwm();
      plVar19 = (long *)(lVar9 + unaff_x21);
      *plVar19 = lVar11;
      plVar19[1] = unaff_x24;
      if (unaff_x24 != 0) {
        plVar18 = (long *)(unaff_x24 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = *plVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        unaff_x20 = *(long *)(param_1 + 0x30);
        unaff_x21 = *(long *)(param_1 + 0x38) - unaff_x20;
        unaff_x22 = unaff_x21 >> 4;
      }
      plVar18 = plVar19 + 2;
      _memcpy(plVar19 + unaff_x22 * -2,unaff_x20,unaff_x21);
      *(long **)(param_1 + 0x30) = plVar19 + unaff_x22 * -2;
      *(long **)(param_1 + 0x38) = plVar18;
      *(ulong *)(param_1 + 0x40) = lVar9 + unaff_x23 * 0x10;
      if (unaff_x20 != 0) {
        __ZdlPv(unaff_x20);
      }
      goto LAB_10a97c278;
    }
  }
  func_0x000109ffded8();
  uVar12 = (ulong)(uVar8 & 0x3fff);
  uVar13 = ((long)(param_3 - (long)plVar19) >> 3) * -0x3333333333333333;
  if ((((uVar12 <= uVar13 && uVar13 - uVar12 != 0) &&
       (*(uint *)((long)(plVar19 + uVar12 * 5) + 4) == uVar8)) && (uVar8 != 0)) &&
     ((char)plVar19[uVar12 * 5] != '\x02')) {
    return;
  }
  pcStack_58 = FUN_10a97c2a8;
  puVar10 = &UNK_10f687614;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  pcStack_68 = FUN_10a97c304;
  lVar11 = *plVar19;
  lStack_a0 = unaff_x24;
  uStack_98 = unaff_x23;
  lStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  lStack_80 = unaff_x20;
  lStack_78 = unaff_x19;
  if (lVar11 != 0) {
    plVar19 = *(long **)(puVar10 + 0x20);
    iVar2 = *(int *)(lVar11 + 0x18);
    puStack_70 = (undefined1 *)&puStack_60;
    FUN_10a97c2a8(iVar2,*(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x20),
                  *(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x28));
    uVar8 = *(uint *)(puVar10 + 0x18);
    FUN_10a97bf1c((ulong)uVar8,**(undefined8 **)(puVar10 + 0x20),
                  (*(undefined8 **)(puVar10 + 0x20))[1]);
    lVar11 = *plVar19;
    uVar12 = (ulong)uVar8 & 0x3fff;
    uVar13 = (plVar19[1] - lVar11 >> 3) * -0x71c71c71c71c71c7;
    if (uVar12 <= uVar13 && uVar13 - uVar12 != 0) {
      lVar11 = lVar11 + uVar12 * 0x48;
      piVar16 = *(int **)(lVar11 + 0x18);
      piVar1 = *(int **)(lVar11 + 0x20);
      if (piVar16 == piVar1) {
LAB_10a97c3d8:
        if (piVar1 < piVar16) goto LAB_10a97c500;
        if (piVar16 != piVar1) {
          *(int **)(lVar11 + 0x20) = piVar16;
        }
      }
      else {
        do {
          if (*piVar16 == iVar2) {
            piVar14 = piVar16;
            if (piVar16 != piVar1) {
              while (piVar14 = piVar14 + 1, piVar14 != piVar1) {
                if (*piVar14 != iVar2) {
                  *piVar16 = *piVar14;
                  piVar16 = piVar16 + 1;
                }
              }
            }
            goto LAB_10a97c3d8;
          }
          piVar16 = piVar16 + 1;
        } while (piVar16 != piVar1);
      }
      plVar18 = *(long **)(puVar10 + 0x38);
      plVar19 = *(long **)(puVar10 + 0x30);
      plVar17 = plVar19;
      for (; plVar19 != plVar18; plVar19 = plVar19 + 2) {
        iVar3 = *(int *)(*plVar19 + 0x18);
        lVar11 = *(long *)(*plVar19 + 0x20);
        FUN_10a97c2a8(iVar3,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
        if (iVar3 == iVar2) {
          plVar17 = plVar19;
          plVar20 = plVar19;
          if (plVar19 != plVar18) {
            while (plVar20 = plVar20 + 2, plVar17 = plVar19, plVar20 != plVar18) {
              iVar3 = *(int *)(*plVar20 + 0x18);
              lVar11 = *(long *)(*plVar20 + 0x20);
              FUN_10a97c2a8(iVar3,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
              if (iVar3 != iVar2) {
                func_0x00010a98a2d0(plVar19,plVar20);
                plVar19 = plVar19 + 2;
              }
            }
          }
          break;
        }
        plVar17 = plVar18;
      }
      plVar19 = *(long **)(puVar10 + 0x38);
      if (plVar17 < plVar19 || plVar17 == plVar19) {
        if (plVar17 != plVar19) {
          while (plVar19 != plVar17) {
            plVar19 = plVar19 + -2;
            func_0x00010a98a278(plVar19);
          }
          *(long **)(puVar10 + 0x38) = plVar17;
        }
        return;
      }
    }
LAB_10a97c500:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c504);
    (*pcVar7)();
  }
  puVar10 = &UNK_10f686b9b;
  puStack_70 = (undefined1 *)&puStack_60;
  FUN_10a00946c();
  pcStack_a8 = FUN_10a97c510;
  lStack_d0 = unaff_x22;
  lStack_c8 = unaff_x21;
  lStack_c0 = unaff_x20;
  lStack_b8 = unaff_x19;
  ppuStack_b0 = &puStack_70;
  FUN_10a97c0c8(puVar10 + 0x48,*plVar19,plVar19[1]);
  lVar11 = *plVar19;
  plVar18 = *(long **)(puVar10 + 0x20);
  uVar8 = *(uint *)(puVar10 + 0x18);
  FUN_10a97bf1c((ulong)uVar8,*plVar18,plVar18[1]);
  if (lVar11 == 0) {
    auStack_e8[0] = 0;
    uStack_d8 = 0;
    uVar12 = (ulong)(uVar8 & 0x3fff);
    uVar13 = (plVar18[1] - *plVar18 >> 3) * -0x71c71c71c71c71c7;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) goto LAB_10a97c620;
    FUN_10a90fda4(*plVar18 + uVar12 * 0x48 + 0x30,auStack_e8);
  }
  else {
    uVar4 = *(undefined4 *)(*plVar19 + 0x18);
    lVar11 = *(long *)(*plVar19 + 0x20);
    FUN_10a9781b4(uVar4,*(undefined8 *)(lVar11 + 0x88),*(undefined8 *)(lVar11 + 0x90));
    uStack_d8 = 0;
    uVar12 = (ulong)uVar8 & 0x3fff;
    uVar13 = (plVar18[1] - *plVar18 >> 3) * -0x71c71c71c71c71c7;
    auStack_e8[0] = uVar4;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
LAB_10a97c620:
      uStack_d8 = 0;
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c624);
      (*pcVar7)();
    }
    FUN_10a90fda4(*plVar18 + uVar12 * 0x48 + 0x30,auStack_e8);
  }
  FUN_10a3f9220(auStack_e8);
  return;
}



/* Entry: 10a97c2a8; end: 10a97c303;  */

/* WARNING: Removing unreachable block (ram,0x00010a97c3f4) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4cc) */

void FUN_10a97c2a8(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 auStack_98 [4];
  undefined4 uStack_88;
  
  uVar9 = (ulong)(param_1 & 0x3fff);
  uVar11 = (param_3 - (long)param_2 >> 3) * -0x3333333333333333;
  if ((((uVar9 <= uVar11 && uVar11 - uVar9 != 0) &&
       (*(uint *)((long)(param_2 + uVar9 * 5) + 4) == param_1)) && (param_1 != 0)) &&
     ((char)param_2[uVar9 * 5] != '\x02')) {
    return;
  }
  puVar8 = &UNK_10f687614;
  FUN_10a00946c();
  lVar10 = *param_2;
  if (lVar10 != 0) {
    plVar15 = *(long **)(puVar8 + 0x20);
    iVar3 = *(int *)(lVar10 + 0x18);
    FUN_10a97c2a8(iVar3,*(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x20),
                  *(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x28));
    uVar4 = *(uint *)(puVar8 + 0x18);
    FUN_10a97bf1c((ulong)uVar4,**(undefined8 **)(puVar8 + 0x20),(*(undefined8 **)(puVar8 + 0x20))[1]
                 );
    lVar10 = *plVar15;
    uVar9 = (ulong)uVar4 & 0x3fff;
    uVar11 = (plVar15[1] - lVar10 >> 3) * -0x71c71c71c71c71c7;
    if (uVar9 <= uVar11 && uVar11 - uVar9 != 0) {
      lVar10 = lVar10 + uVar9 * 0x48;
      piVar13 = *(int **)(lVar10 + 0x18);
      piVar1 = *(int **)(lVar10 + 0x20);
      if (piVar13 == piVar1) {
LAB_10a97c3d8:
        if (piVar1 < piVar13) goto LAB_10a97c500;
        if (piVar13 != piVar1) {
          *(int **)(lVar10 + 0x20) = piVar13;
        }
      }
      else {
        do {
          if (*piVar13 == iVar3) {
            piVar12 = piVar13;
            if (piVar13 != piVar1) {
              while (piVar12 = piVar12 + 1, piVar12 != piVar1) {
                if (*piVar12 != iVar3) {
                  *piVar13 = *piVar12;
                  piVar13 = piVar13 + 1;
                }
              }
            }
            goto LAB_10a97c3d8;
          }
          piVar13 = piVar13 + 1;
        } while (piVar13 != piVar1);
      }
      plVar2 = *(long **)(puVar8 + 0x38);
      plVar15 = *(long **)(puVar8 + 0x30);
      plVar14 = plVar15;
      for (; plVar15 != plVar2; plVar15 = plVar15 + 2) {
        iVar5 = *(int *)(*plVar15 + 0x18);
        lVar10 = *(long *)(*plVar15 + 0x20);
        FUN_10a97c2a8(iVar5,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28));
        if (iVar5 == iVar3) {
          plVar14 = plVar15;
          plVar16 = plVar15;
          if (plVar15 != plVar2) {
            while (plVar16 = plVar16 + 2, plVar14 = plVar15, plVar16 != plVar2) {
              iVar5 = *(int *)(*plVar16 + 0x18);
              lVar10 = *(long *)(*plVar16 + 0x20);
              FUN_10a97c2a8(iVar5,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28));
              if (iVar5 != iVar3) {
                func_0x00010a98a2d0(plVar15,plVar16);
                plVar15 = plVar15 + 2;
              }
            }
          }
          break;
        }
        plVar14 = plVar2;
      }
      plVar15 = *(long **)(puVar8 + 0x38);
      if (plVar14 < plVar15 || plVar14 == plVar15) {
        if (plVar14 != plVar15) {
          while (plVar15 != plVar14) {
            plVar15 = plVar15 + -2;
            func_0x00010a98a278(plVar15);
          }
          *(long **)(puVar8 + 0x38) = plVar14;
        }
        return;
      }
    }
LAB_10a97c500:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c504);
    (*pcVar7)();
  }
  puVar8 = &UNK_10f686b9b;
  FUN_10a00946c();
  FUN_10a97c0c8(puVar8 + 0x48,*param_2,param_2[1]);
  lVar10 = *param_2;
  plVar15 = *(long **)(puVar8 + 0x20);
  uVar4 = *(uint *)(puVar8 + 0x18);
  FUN_10a97bf1c((ulong)uVar4,*plVar15,plVar15[1]);
  if (lVar10 == 0) {
    auStack_98[0] = 0;
    uStack_88 = 0;
    uVar9 = (ulong)(uVar4 & 0x3fff);
    uVar11 = (plVar15[1] - *plVar15 >> 3) * -0x71c71c71c71c71c7;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) goto LAB_10a97c620;
    FUN_10a90fda4(*plVar15 + uVar9 * 0x48 + 0x30,auStack_98);
  }
  else {
    uVar6 = *(undefined4 *)(*param_2 + 0x18);
    lVar10 = *(long *)(*param_2 + 0x20);
    FUN_10a9781b4(uVar6,*(undefined8 *)(lVar10 + 0x88),*(undefined8 *)(lVar10 + 0x90));
    uStack_88 = 0;
    uVar9 = (ulong)uVar4 & 0x3fff;
    uVar11 = (plVar15[1] - *plVar15 >> 3) * -0x71c71c71c71c71c7;
    auStack_98[0] = uVar6;
    if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
LAB_10a97c620:
      uStack_88 = 0;
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c624);
      (*pcVar7)();
    }
    FUN_10a90fda4(*plVar15 + uVar9 * 0x48 + 0x30,auStack_98);
  }
  FUN_10a3f9220(auStack_98);
  return;
}



/* Entry: 10a97c304; end: 10a97c50f;  */

/* WARNING: Removing unreachable block (ram,0x00010a97c3f4) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010a97c4cc) */

void FUN_10a97c304(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 auStack_88 [4];
  undefined4 uStack_78;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    plVar15 = *(long **)(param_1 + 0x20);
    iVar3 = *(int *)(lVar9 + 0x18);
    FUN_10a97c2a8(iVar3,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x20),
                  *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x28));
    uVar4 = *(uint *)(param_1 + 0x18);
    FUN_10a97bf1c((ulong)uVar4,**(undefined8 **)(param_1 + 0x20),
                  (*(undefined8 **)(param_1 + 0x20))[1]);
    lVar9 = *plVar15;
    uVar10 = (ulong)uVar4 & 0x3fff;
    uVar12 = (plVar15[1] - lVar9 >> 3) * -0x71c71c71c71c71c7;
    if (uVar10 <= uVar12 && uVar12 - uVar10 != 0) {
      lVar9 = lVar9 + uVar10 * 0x48;
      piVar13 = *(int **)(lVar9 + 0x18);
      piVar1 = *(int **)(lVar9 + 0x20);
      if (piVar13 == piVar1) {
LAB_10a97c3d8:
        if (piVar1 < piVar13) goto LAB_10a97c500;
        if (piVar13 != piVar1) {
          *(int **)(lVar9 + 0x20) = piVar13;
        }
      }
      else {
        do {
          if (*piVar13 == iVar3) {
            piVar11 = piVar13;
            if (piVar13 != piVar1) {
              while (piVar11 = piVar11 + 1, piVar11 != piVar1) {
                if (*piVar11 != iVar3) {
                  *piVar13 = *piVar11;
                  piVar13 = piVar13 + 1;
                }
              }
            }
            goto LAB_10a97c3d8;
          }
          piVar13 = piVar13 + 1;
        } while (piVar13 != piVar1);
      }
      plVar2 = *(long **)(param_1 + 0x38);
      plVar15 = *(long **)(param_1 + 0x30);
      plVar14 = plVar15;
      for (; plVar15 != plVar2; plVar15 = plVar15 + 2) {
        iVar5 = *(int *)(*plVar15 + 0x18);
        lVar9 = *(long *)(*plVar15 + 0x20);
        FUN_10a97c2a8(iVar5,*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28));
        if (iVar5 == iVar3) {
          plVar14 = plVar15;
          plVar16 = plVar15;
          if (plVar15 != plVar2) {
            while (plVar16 = plVar16 + 2, plVar14 = plVar15, plVar16 != plVar2) {
              iVar5 = *(int *)(*plVar16 + 0x18);
              lVar9 = *(long *)(*plVar16 + 0x20);
              FUN_10a97c2a8(iVar5,*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28));
              if (iVar5 != iVar3) {
                func_0x00010a98a2d0(plVar15,plVar16);
                plVar15 = plVar15 + 2;
              }
            }
          }
          break;
        }
        plVar14 = plVar2;
      }
      plVar15 = *(long **)(param_1 + 0x38);
      if (plVar14 < plVar15 || plVar14 == plVar15) {
        if (plVar14 != plVar15) {
          while (plVar15 != plVar14) {
            plVar15 = plVar15 + -2;
            func_0x00010a98a278(plVar15);
          }
          *(long **)(param_1 + 0x38) = plVar14;
        }
        return;
      }
    }
LAB_10a97c500:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c504);
    (*pcVar7)();
  }
  puVar8 = &UNK_10f686b9b;
  FUN_10a00946c();
  FUN_10a97c0c8(puVar8 + 0x48,*param_2,param_2[1]);
  lVar9 = *param_2;
  plVar15 = *(long **)(puVar8 + 0x20);
  uVar4 = *(uint *)(puVar8 + 0x18);
  FUN_10a97bf1c((ulong)uVar4,*plVar15,plVar15[1]);
  if (lVar9 == 0) {
    auStack_88[0] = 0;
    uStack_78 = 0;
    uVar10 = (ulong)(uVar4 & 0x3fff);
    uVar12 = (plVar15[1] - *plVar15 >> 3) * -0x71c71c71c71c71c7;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) goto LAB_10a97c620;
    FUN_10a90fda4(*plVar15 + uVar10 * 0x48 + 0x30,auStack_88);
  }
  else {
    uVar6 = *(undefined4 *)(*param_2 + 0x18);
    lVar9 = *(long *)(*param_2 + 0x20);
    FUN_10a9781b4(uVar6,*(undefined8 *)(lVar9 + 0x88),*(undefined8 *)(lVar9 + 0x90));
    uStack_78 = 0;
    uVar10 = (ulong)uVar4 & 0x3fff;
    uVar12 = (plVar15[1] - *plVar15 >> 3) * -0x71c71c71c71c71c7;
    auStack_88[0] = uVar6;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
LAB_10a97c620:
      uStack_78 = 0;
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97c624);
      (*pcVar7)();
    }
    FUN_10a90fda4(*plVar15 + uVar10 * 0x48 + 0x30,auStack_88);
  }
  FUN_10a3f9220(auStack_88);
  return;
}



/* Entry: 10a97c510; end: 10a97c63b;  */

void FUN_10a97c510(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 auStack_48 [4];
  undefined4 uStack_38;
  
  FUN_10a97c0c8(param_1 + 0x48,*param_2,param_2[1]);
  lVar7 = *param_2;
  plVar6 = *(long **)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a97bf1c((ulong)uVar1,*plVar6,plVar6[1]);
  if (lVar7 == 0) {
    auStack_48[0] = 0;
    uStack_38 = 0;
    uVar4 = (ulong)(uVar1 & 0x3fff);
    uVar5 = (plVar6[1] - *plVar6 >> 3) * -0x71c71c71c71c71c7;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) goto LAB_10a97c620;
    FUN_10a90fda4(*plVar6 + uVar4 * 0x48 + 0x30,auStack_48);
  }
  else {
    uVar2 = *(undefined4 *)(*param_2 + 0x18);
    lVar7 = *(long *)(*param_2 + 0x20);
    FUN_10a9781b4(uVar2,*(undefined8 *)(lVar7 + 0x88),*(undefined8 *)(lVar7 + 0x90));
    uStack_38 = 0;
    uVar4 = (ulong)uVar1 & 0x3fff;
    uVar5 = (plVar6[1] - *plVar6 >> 3) * -0x71c71c71c71c71c7;
    auStack_48[0] = uVar2;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
LAB_10a97c620:
      uStack_38 = 0;
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a97c624);
      (*pcVar3)();
    }
    FUN_10a90fda4(*plVar6 + uVar4 * 0x48 + 0x30,auStack_48);
  }
  FUN_10a3f9220(auStack_48);
  return;
}



/* Entry: 10a97c63c; end: 10a97c6bf;  */

undefined1  [16] FUN_10a97c63c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f68763d;
  return auVar1;
}



/* Entry: 10a97c6c0; end: 10a97c9df;  */

void FUN_10a97c6c0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68763d,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c338b8;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c338b8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97c9c0;
    FUN_10a054dac(param_1,&UNK_10f6863a1,FUN_10a9b5c10,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97c9c0;
    FUN_10a054dac(param_1,&UNK_10f686bd9,FUN_10a9b5d58,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a97c9c0;
    FUN_10a054dac(param_1,&UNK_10f686be3,FUN_10a9b5fcc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a9b6084,FUN_10a9b6188);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f4905a9,FUN_10a9b62b8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68763d,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a97c9c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97c9c4);
  (*pcVar6)();
}



/* Entry: 10a97c9e0; end: 10a97ca4f;  */

void FUN_10a97c9e0(long param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_10a97c2a8((ulong)uVar1,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28));
  uVar3 = (ulong)uVar1 & 0x3fff;
  uVar4 = (*(long *)(lVar5 + 0x28) - *(long *)(lVar5 + 0x20) >> 3) * -0x3333333333333333;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(byte *)(*(long *)(lVar5 + 0x20) + uVar3 * 0x28) = param_2 ^ 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97ca50);
  (*pcVar2)();
}



/* Entry: 10a97ca50; end: 10a97cbbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a97cca4) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd5c) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd60) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd7c) */

void FUN_10a97ca50(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar15;
  int *piVar16;
  long *plVar17;
  long unaff_x22;
  long *plVar18;
  long *plVar19;
  ulong unaff_x23;
  long *plVar20;
  long unaff_x24;
  char *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (*param_2 == 0) {
    puVar15 = (undefined8 *)&UNK_10f686bf0;
    FUN_10a00946c();
    plVar18 = param_2;
LAB_10a97cbb4:
    FUN_10a98a334();
  }
  else {
    plVar18 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    puVar15 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    FUN_10a97c2a8(plVar18,*puVar15,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    unaff_x23 = (ulong)*(uint *)(*param_2 + 0x18);
    lVar11 = *(long *)(*param_2 + 0x20);
    FUN_10a97ab94(unaff_x23,*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
    FUN_10a8fe160(puVar15,plVar18,unaff_x23);
    lVar11 = *param_2;
    unaff_x24 = param_2[1];
    plVar20 = *(long **)(param_1 + 0x38);
    if (plVar20 < *(long **)(param_1 + 0x40)) {
      *plVar20 = lVar11;
      plVar20[1] = unaff_x24;
      if (unaff_x24 != 0) {
        plVar18 = (long *)(unaff_x24 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = *plVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar20 = plVar20 + 2;
LAB_10a97cb8c:
      *(long **)(param_1 + 0x38) = plVar20;
      return;
    }
    unaff_x20 = *(long *)(param_1 + 0x30);
    unaff_x21 = (long)plVar20 - unaff_x20;
    unaff_x22 = unaff_x21 >> 4;
    uVar13 = unaff_x22 + 1;
    unaff_x19 = param_1;
    if (uVar13 >> 0x3c != 0) goto LAB_10a97cbb4;
    uVar12 = (long)*(long **)(param_1 + 0x40) - unaff_x20;
    unaff_x23 = (long)uVar12 >> 3;
    if (unaff_x23 <= uVar13) {
      unaff_x23 = uVar13;
    }
    if (0x7fffffffffffffef < uVar12) {
      unaff_x23 = 0xfffffffffffffff;
    }
    if (unaff_x23 >> 0x3c == 0) {
      lVar8 = unaff_x23 << 4;
      __Znwm();
      plVar18 = (long *)(lVar8 + unaff_x21);
      *plVar18 = lVar11;
      plVar18[1] = unaff_x24;
      if (unaff_x24 != 0) {
        plVar20 = (long *)(unaff_x24 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = *plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        unaff_x20 = *(long *)(param_1 + 0x30);
        unaff_x21 = *(long *)(param_1 + 0x38) - unaff_x20;
        unaff_x22 = unaff_x21 >> 4;
      }
      plVar20 = plVar18 + 2;
      _memcpy(plVar18 + unaff_x22 * -2,unaff_x20,unaff_x21);
      *(long **)(param_1 + 0x30) = plVar18 + unaff_x22 * -2;
      *(long **)(param_1 + 0x38) = plVar20;
      *(ulong *)(param_1 + 0x40) = lVar8 + unaff_x23 * 0x10;
      if (unaff_x20 != 0) {
        __ZdlPv(unaff_x20);
      }
      goto LAB_10a97cb8c;
    }
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10a97cbbc;
  ppuStack_a0 = &puStack_60;
  lVar11 = *plVar18;
  lStack_90 = unaff_x24;
  uStack_88 = unaff_x23;
  lStack_80 = unaff_x22;
  lStack_78 = unaff_x21;
  lStack_70 = unaff_x20;
  lStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if (lVar11 == 0) {
    puVar9 = &UNK_10f686c27;
    FUN_10a00946c();
    pcStack_98 = FUN_10a97cdc0;
    uStack_110 = 0;
    uStack_108 = 0;
    pcStack_118 = "CameraInsertionOrdering";
    uStack_f8 = 0xffffffffffffffff;
    uStack_100 = 0x100000019;
    puStack_f0 = &UNK_10f68581c;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0xffffffff;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puVar9[0x1ac] = 1;
    lStack_b0 = unaff_x20;
    lStack_a8 = unaff_x19;
    FUN_10a0050a8(puVar9 + 0x168,&pcStack_118);
    puVar10 = puVar9;
    FUN_10a0051e8(puVar9,uStack_100 & 0xffffffff,uStack_100._4_4_,uStack_c8,uStack_f8 & 0xffffffff,
                  uStack_f8._4_4_);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x0001098946ac(puVar9,pcStack_118);
    }
    uStack_110 = 0;
    uStack_108 = 0;
    pcStack_118 = "Explicit";
    uStack_f8 = 0xffffffffffffffff;
    uStack_100 = 0x100000019;
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10a97cf48(puVar9,&pcStack_118,0);
    uStack_110 = 0;
    uStack_108 = 0;
    pcStack_118 = "Front";
    uStack_f8 = 0xffffffffffffffff;
    uStack_100 = 0x100000019;
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10a97cf48();
    uStack_110 = 0;
    uStack_108 = 0;
    pcStack_118 = "Back";
    uStack_f8 = 0xffffffffffffffff;
    uStack_100 = 0x100000019;
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10a97cf48();
    uStack_110 = 0;
    uStack_108 = 0;
    pcStack_118 = "All";
    uStack_f8 = 0xffffffffffffffff;
    uStack_100 = 0x100000019;
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    uStack_c0 = 0;
    uStack_b8 = 0;
    FUN_10a97cf48();
    FUN_10a003ff4();
    return;
  }
  lVar8 = puVar15[4];
  iVar2 = *(int *)(lVar11 + 0x18);
  FUN_10a97ab94(iVar2,*(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x40),
                *(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x48));
  uVar3 = *(uint *)(puVar15 + 3);
  FUN_10a97c2a8((ulong)uVar3,*(undefined8 *)(puVar15[4] + 0x20),*(undefined8 *)(puVar15[4] + 0x28));
  lVar11 = *(long *)(lVar8 + 0x20);
  uVar13 = (ulong)uVar3 & 0x3fff;
  uVar12 = (*(long *)(lVar8 + 0x28) - lVar11 >> 3) * -0x3333333333333333;
  if (uVar13 <= uVar12 && uVar12 - uVar13 != 0) {
    lVar11 = lVar11 + uVar13 * 0x28;
    piVar16 = *(int **)(lVar11 + 8);
    piVar1 = *(int **)(lVar11 + 0x10);
    if (piVar16 == piVar1) {
LAB_10a97cc88:
      if (piVar1 < piVar16) goto LAB_10a97cdb0;
      if (piVar16 != piVar1) {
        *(int **)(lVar11 + 0x10) = piVar16;
      }
    }
    else {
      do {
        if (iVar2 == *piVar16) {
          piVar14 = piVar16;
          if (piVar16 != piVar1) {
            while (piVar14 = piVar14 + 1, piVar14 != piVar1) {
              if (iVar2 != *piVar14) {
                *piVar16 = *piVar14;
                piVar16 = piVar16 + 1;
              }
            }
          }
          goto LAB_10a97cc88;
        }
        piVar16 = piVar16 + 1;
      } while (piVar16 != piVar1);
    }
    plVar20 = (long *)puVar15[7];
    plVar18 = (long *)puVar15[6];
    plVar17 = plVar18;
    for (; plVar18 != plVar20; plVar18 = plVar18 + 2) {
      iVar4 = *(int *)(*plVar18 + 0x18);
      lVar11 = *(long *)(*plVar18 + 0x20);
      FUN_10a97ab94(iVar4,*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
      if (iVar4 == iVar2) {
        plVar17 = plVar18;
        plVar19 = plVar18;
        if (plVar18 != plVar20) {
          while (plVar19 = plVar19 + 2, plVar17 = plVar18, plVar19 != plVar20) {
            iVar4 = *(int *)(*plVar19 + 0x18);
            lVar11 = *(long *)(*plVar19 + 0x20);
            FUN_10a97ab94(iVar4,*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x48));
            if (iVar4 != iVar2) {
              func_0x00010a98a3a0(plVar18,plVar19);
              plVar18 = plVar18 + 2;
            }
          }
        }
        break;
      }
      plVar17 = plVar20;
    }
    plVar18 = (long *)puVar15[7];
    if (plVar17 < plVar18 || plVar17 == plVar18) {
      if (plVar17 != plVar18) {
        while (plVar18 != plVar17) {
          plVar18 = plVar18 + -2;
          func_0x00010a98a348(plVar18);
        }
        puVar15[7] = plVar17;
      }
      return;
    }
  }
LAB_10a97cdb0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a97cdb4);
  (*pcVar7)();
}



/* Entry: 10a97cbbc; end: 10a97cdbf;  */

/* WARNING: Removing unreachable block (ram,0x00010a97cca4) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd5c) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd60) */
/* WARNING: Removing unreachable block (ram,0x00010a97cd7c) */

void FUN_10a97cbbc(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    puVar7 = &UNK_10f686c27;
    FUN_10a00946c();
    uStack_c0 = 0;
    uStack_b8 = 0;
    pcStack_c8 = "CameraInsertionOrdering";
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0x100000019;
    puStack_a0 = &UNK_10f68581c;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    puVar7[0x1ac] = 1;
    FUN_10a0050a8(puVar7 + 0x168,&pcStack_c8);
    puVar8 = puVar7;
    FUN_10a0051e8(puVar7,uStack_b0 & 0xffffffff,uStack_b0._4_4_,uStack_78,uStack_a8 & 0xffffffff,
                  uStack_a8._4_4_);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x0001098946ac(puVar7,pcStack_c8);
    }
    uStack_c0 = 0;
    uStack_b8 = 0;
    pcStack_c8 = "Explicit";
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0x100000019;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10a97cf48(puVar7,&pcStack_c8,0);
    uStack_c0 = 0;
    uStack_b8 = 0;
    pcStack_c8 = "Front";
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0x100000019;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10a97cf48();
    uStack_c0 = 0;
    uStack_b8 = 0;
    pcStack_c8 = "Back";
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0x100000019;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10a97cf48();
    uStack_c0 = 0;
    uStack_b8 = 0;
    pcStack_c8 = "All";
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0x100000019;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10a97cf48();
    FUN_10a003ff4();
    return;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  iVar3 = *(int *)(lVar9 + 0x18);
  FUN_10a97ab94(iVar3,*(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x40),
                *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x48));
  uVar4 = *(uint *)(param_1 + 0x18);
  FUN_10a97c2a8((ulong)uVar4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  lVar9 = *(long *)(lVar16 + 0x20);
  uVar10 = (ulong)uVar4 & 0x3fff;
  uVar12 = (*(long *)(lVar16 + 0x28) - lVar9 >> 3) * -0x3333333333333333;
  if (uVar10 <= uVar12 && uVar12 - uVar10 != 0) {
    lVar9 = lVar9 + uVar10 * 0x28;
    piVar14 = *(int **)(lVar9 + 8);
    piVar1 = *(int **)(lVar9 + 0x10);
    if (piVar14 == piVar1) {
LAB_10a97cc88:
      if (piVar1 < piVar14) goto LAB_10a97cdb0;
      if (piVar14 != piVar1) {
        *(int **)(lVar9 + 0x10) = piVar14;
      }
    }
    else {
      do {
        if (iVar3 == *piVar14) {
          piVar11 = piVar14;
          if (piVar14 != piVar1) {
            while (piVar11 = piVar11 + 1, piVar11 != piVar1) {
              if (iVar3 != *piVar11) {
                *piVar14 = *piVar11;
                piVar14 = piVar14 + 1;
              }
            }
          }
          goto LAB_10a97cc88;
        }
        piVar14 = piVar14 + 1;
      } while (piVar14 != piVar1);
    }
    plVar2 = *(long **)(param_1 + 0x38);
    plVar13 = *(long **)(param_1 + 0x30);
    plVar15 = plVar13;
    for (; plVar13 != plVar2; plVar13 = plVar13 + 2) {
      iVar5 = *(int *)(*plVar13 + 0x18);
      lVar9 = *(long *)(*plVar13 + 0x20);
      FUN_10a97ab94(iVar5,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
      if (iVar5 == iVar3) {
        plVar15 = plVar13;
        plVar17 = plVar13;
        if (plVar13 != plVar2) {
          while (plVar17 = plVar17 + 2, plVar15 = plVar13, plVar17 != plVar2) {
            iVar5 = *(int *)(*plVar17 + 0x18);
            lVar9 = *(long *)(*plVar17 + 0x20);
            FUN_10a97ab94(iVar5,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
            if (iVar5 != iVar3) {
              func_0x00010a98a3a0(plVar13,plVar17);
              plVar13 = plVar13 + 2;
            }
          }
        }
        break;
      }
      plVar15 = plVar2;
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar15 < plVar13 || plVar15 == plVar13) {
      if (plVar15 != plVar13) {
        while (plVar13 != plVar15) {
          plVar13 = plVar13 + -2;
          func_0x00010a98a348(plVar13);
        }
        *(long **)(param_1 + 0x38) = plVar15;
      }
      return;
    }
  }
LAB_10a97cdb0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97cdb4);
  (*pcVar6)();
}



/* Entry: 10a97cdc0; end: 10a97cf47;  */

void FUN_10a97cdc0(ulong param_1)

{
  ulong uVar1;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "CameraInsertionOrdering";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  puStack_60 = &UNK_10f68581c;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Explicit";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a97cf48(param_1,&pcStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Front";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a97cf48();
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "Back";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a97cf48();
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_88 = "All";
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a97cf48();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a97cf48; end: 10a97cfef;  */

undefined8 * FUN_10a97cf48(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a97cff0);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a97cff0; end: 10a97d187;  */

void FUN_10a97cff0(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686c82;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  puStack_60 = &UNK_10f68581c;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a97d130(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686c9e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a97d188(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686ca6;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a97d188(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686caf;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 2;
  FUN_10a97d188(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a97d188; end: 10a97d1df;  */

ulong FUN_10a97d188(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a9b64c4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a97d1e0; end: 10a97d333;  */

void FUN_10a97d1e0(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686cb7;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  puStack_60 = &UNK_10f68581c;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a97d2dc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686c9e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10a97d334(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f686ccd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10a97d334(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a97d334; end: 10a97d38b;  */

ulong FUN_10a97d334(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a9b6538(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a97d38c; end: 10a97d403;  */

undefined4 FUN_10a97d38c(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (uVar1 == 0x3fff) {
    FUN_10a9b65ac(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar4 = (undefined1 *)(*param_1 + uVar3 * 0x30);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar4 + 2);
    *puVar4 = 0;
    return *(undefined4 *)(puVar4 + 4);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a97d404);
  (*pcVar2)();
}



/* Entry: 10a97d404; end: 10a97d5df;  */

void FUN_10a97d404(long *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  long *plStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (ulong)(param_2 & 0x3fff);
  uVar12 = (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
  if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97d5c0);
    (*pcVar6)();
  }
  lVar15 = *param_1 + uVar10 * 0x30;
  plVar7 = (long *)0x90;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110bd9c58;
  *(undefined1 *)(plVar7 + 4) = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xe] = 0;
  plVar7[5] = (long)&PTR_DAT_110bd6d28;
  *(undefined1 *)(plVar7 + 0xf) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *(undefined1 *)((long)plVar7 + 0x8c) = 0;
  plStack_38 = plVar7 + 3;
  *plStack_38 = (long)&PTR_DAT_110bd6cc8;
  plStack_30 = plVar7;
  FUN_10a98a404(lVar15 + 8,&plStack_38,&lStack_28,1);
  plVar7 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    plVar8 = plStack_30 + 1;
    do {
      lVar11 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar8 = (long *)0x88;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bd9bb8;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xe] = 0;
  plStack_38 = plVar8 + 3;
  *plStack_38 = (long)&PTR_DAT_110bd6d80;
  plVar8[5] = (long)&PTR_DAT_110bd6de0;
  *(undefined2 *)(plVar8 + 0xf) = 0;
  *(undefined8 *)((long)plVar8 + 0x7c) = 0x3f800000;
  plVar7 = (long *)(lVar15 + 0x20);
  pplVar9 = &plStack_38;
  plStack_30 = plVar8;
  FUN_10a42efb4();
  plVar8 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
    do {
      lVar15 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar12 = (ulong)pplVar9 & 0x3fff;
  lVar15 = *plVar7;
  uVar10 = (plVar7[1] - lVar15 >> 4) * -0x5555555555555555;
  if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) {
    uVar4 = (ushort)pplVar9 & 0x3fff;
    puVar13 = (undefined1 *)(lVar15 + uVar12 * 0x30);
    uVar5 = *(uint *)(puVar13 + 4) >> 0xe & 0x7fff;
    iVar14 = 1;
    if (uVar5 != 0x7fff) {
      iVar14 = uVar5 + 1;
    }
    *(uint *)(puVar13 + 4) = (uint)pplVar9 & 0xe0003fff | iVar14 << 0xe;
    *(undefined2 *)(puVar13 + 2) = 0x3fff;
    *puVar13 = 2;
    if ((short)plVar7[3] == 0x3fff) {
      *(ushort *)(plVar7 + 3) = uVar4;
    }
    else {
      uVar12 = (ulong)*(ushort *)((long)plVar7 + 0x1a);
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) goto LAB_10a97d67c;
      *(ushort *)(lVar15 + uVar12 * 0x30 + 2) = uVar4;
    }
    *(ushort *)((long)plVar7 + 0x1a) = uVar4;
    return;
  }
LAB_10a97d67c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a97d680);
  (*pcVar6)();
}



/* Entry: 10a97d5e0; end: 10a97d6eb;  */

void FUN_10a97d5e0(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar6 = (ulong)param_2 & 0x3fff;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 4) * -0x5555555555555555;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    uVar2 = (ushort)param_2 & 0x3fff;
    puVar7 = (undefined1 *)(lVar1 + uVar6 * 0x30);
    uVar3 = *(uint *)(puVar7 + 4) >> 0xe & 0x7fff;
    iVar8 = 1;
    if (uVar3 != 0x7fff) {
      iVar8 = uVar3 + 1;
    }
    *(uint *)(puVar7 + 4) = param_2 & 0xe0003fff | iVar8 << 0xe;
    *(undefined2 *)(puVar7 + 2) = 0x3fff;
    *puVar7 = 2;
    if ((short)param_1[3] == 0x3fff) {
      *(ushort *)(param_1 + 3) = uVar2;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)param_1 + 0x1a);
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_10a97d67c;
      *(ushort *)(lVar1 + uVar6 * 0x30 + 2) = uVar2;
    }
    *(ushort *)((long)param_1 + 0x1a) = uVar2;
    return;
  }
LAB_10a97d67c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a97d680);
  (*pcVar4)();
}


