/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b581b14; end: 10b581b33;  */

void FUN_10b581b14(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b581b34; end: 10b581b57;  */

undefined8 FUN_10b581b34(undefined8 param_1)

{
  func_0x00010b5832f4();
  return param_1;
}



/* Entry: 10b581b58; end: 10b581b5b;  */

undefined8 FUN_10b581b58(undefined8 param_1)

{
  func_0x00010b5832f4();
  return param_1;
}



/* Entry: 10b581b5c; end: 10b581b6f;  */

void FUN_10b581b5c(void)

{
  FUN_10b581b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b581b70; end: 10b581b8f;  */

undefined ** FUN_10b581b70(void)

{
  return &PTR_DAT_110d0e048;
}



/* Entry: 10b581b90; end: 10b581beb;  */

long * FUN_10b581b90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b583470();
  if ((bool)in_ZR) {
    func_0x00010b5834cc();
    func_0x00010b583430();
    func_0x00010b5832a8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5833c0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b581bec; end: 10b581c3b;  */

long FUN_10b581bec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b581c3c; end: 10b581c5f;  */

undefined8 FUN_10b581c3c(undefined8 param_1)

{
  func_0x00010b5832f4();
  return param_1;
}



/* Entry: 10b581c60; end: 10b581c63;  */

undefined8 FUN_10b581c60(undefined8 param_1)

{
  func_0x00010b5832f4();
  return param_1;
}



/* Entry: 10b581c64; end: 10b581c77;  */

void FUN_10b581c64(void)

{
  FUN_10b581c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b581c78; end: 10b581c97;  */

undefined ** FUN_10b581c78(void)

{
  return &PTR_DAT_110d0e098;
}



/* Entry: 10b581c98; end: 10b581cf3;  */

long * FUN_10b581c98(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b583470();
  if ((bool)in_ZR) {
    func_0x00010b5834cc();
    func_0x00010b583430();
    func_0x00010b5832a8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5833c0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b581cf4; end: 10b581d23;  */

long FUN_10b581cf4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b581d24; end: 10b581e37;  */

undefined8 * FUN_10b581d24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0dec8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5832c0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b58265c(param_1 + 3,param_3 + 0x18);
  func_0x00010598fd00(param_1 + 6,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x00010b5833cc();
  param_1[9] = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x00010b5833cc();
  param_1[10] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b582f5c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b583030(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b583090(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x78);
  param_1[0xe] = uVar3;
  return param_1;
}



/* Entry: 10b581e38; end: 10b581e63;  */

undefined8 FUN_10b581e38(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b581e64(param_1);
  return param_1;
}



/* Entry: 10b581e64; end: 10b581ec3;  */

long FUN_10b581e64(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5827c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b581b34();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b581c3c();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b582b94(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b581ec4; end: 10b581ec7;  */

undefined8 FUN_10b581ec4(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b581e64(param_1);
  return param_1;
}



/* Entry: 10b581ec8; end: 10b581edb;  */

void FUN_10b581ec8(void)

{
  FUN_10b581e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b581edc; end: 10b581ee7;  */

undefined ** FUN_10b581edc(void)

{
  return &PTR_DAT_110d0e0e8;
}



/* Entry: 10b581ee8; end: 10b581feb;  */

void FUN_10b581ee8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10b582e64(param_1 + 0x18);
  func_0x000107c282c0(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b581f78(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b581b7c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b581c84(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b581fec; end: 10b5822ff;  */

long * FUN_10b581fec(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long *plVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar5 = param_1;
  plVar8 = param_3;
  plVar11 = param_2;
  if ((uVar3 & 1) != 0) {
    param_2 = (long *)param_1[0xb];
    plVar8 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar5 = (long *)0x1;
    func_0x00010b58329c();
    plVar11 = plVar5;
  }
  lVar15 = param_1[4];
  plVar13 = (long *)0x0;
  while (iVar12 = (int)plVar13, (int)lVar15 != iVar12) {
    uVar9 = param_1[3];
    puVar2 = (ulong *)(param_1 + 3);
    if ((uVar9 & 1) != 0) {
      puVar2 = (ulong *)(uVar9 + (long)iVar12 * 8 + 7);
    }
    param_2 = (long *)*puVar2;
    plVar8 = (long *)(ulong)*(uint *)(param_2 + 7);
    plVar5 = (long *)0x2;
    func_0x00010b58329c();
    plVar11 = plVar5;
    plVar13 = (long *)(ulong)(iVar12 + 1);
  }
  func_0x00010b583394(param_1[9]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (plVar13[1] != 0) {
      plVar6 = (long *)*plVar13;
      goto LAB_10b5820a0;
    }
  }
  else {
    plVar6 = plVar13;
    if ((int)param_2 != 0) {
LAB_10b5820a0:
      func_0x00010b5832ec(plVar6);
      param_2 = (long *)0x3;
      plVar5 = param_3;
      func_0x00010b583494();
      plVar8 = plVar13;
      plVar11 = plVar5;
    }
  }
  lVar15 = 8;
  for (uVar9 = (ulong)(*(uint *)(param_1 + 7) & ((int)*(uint *)(param_1 + 7) >> 0x1f ^ 0xffffffffU))
      ; uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar10 = param_1[6];
    puVar2 = (ulong *)(param_1 + 6);
    if ((uVar10 & 1) != 0) {
      puVar2 = (ulong *)(uVar10 + lVar15 + -1);
    }
    plVar8 = (long *)*puVar2;
    lVar7 = (long)*(char *)((long)plVar8 + 0x17);
    plVar5 = plVar8;
    if (lVar7 < 0) {
      lVar7 = plVar8[1];
      plVar5 = (long *)*plVar8;
    }
    func_0x00010b58325c(plVar5,lVar7);
    plVar13 = (long *)(long)*(char *)((long)plVar8 + 0x17);
    if ((((long)plVar13 < 0) && (plVar13 = (long *)plVar8[1], 0x7f < (long)plVar13)) ||
       ((*param_3 - (long)plVar11) + 0xe < (long)plVar13)) {
      param_2 = (long *)0x4;
      plVar5 = param_3;
      func_0x00010b4d5120();
      plVar11 = plVar5;
    }
    else {
      *(undefined1 *)plVar11 = 0x22;
      *(char *)((long)plVar11 + 1) = (char)plVar13;
      param_2 = plVar8;
      if (*(char *)((long)plVar8 + 0x17) < '\0') {
        param_2 = (long *)*plVar8;
      }
      plVar5 = (long *)((long)plVar11 + 2);
      plVar8 = plVar13;
      _memcpy();
      plVar11 = (long *)((long)plVar11 + 2 + (long)plVar13);
    }
    lVar15 = lVar15 + 8;
  }
  plVar13 = plVar5;
  if ((int)param_1[0xe] != 0) {
    func_0x00010b583274();
    lVar15 = param_1[0xe];
    plVar13 = (long *)0x2d;
    func_0x000107c280a8();
    plVar11 = (long *)((long)plVar13 + 4);
    *(int *)plVar13 = (int)lVar15;
    param_2 = plVar5;
  }
  plVar5 = plVar13;
  if (*(int *)((long)param_1 + 0x74) != 0) {
    func_0x00010b583274();
    uVar4 = *(undefined4 *)((long)param_1 + 0x74);
    plVar5 = (long *)0x35;
    func_0x000107c280a8();
    plVar11 = (long *)((long)plVar5 + 4);
    *(undefined4 *)plVar5 = uVar4;
    param_2 = plVar13;
  }
  plVar13 = plVar5;
  if ((int)param_1[0xf] != 0) {
    func_0x00010b583274();
    lVar15 = param_1[0xf];
    plVar13 = (long *)0x3d;
    func_0x000107c280a8();
    plVar11 = (long *)((long)plVar13 + 4);
    *(int *)plVar13 = (int)lVar15;
    param_2 = plVar5;
  }
  plVar5 = (long *)(ulong)uVar3;
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    func_0x00010b583274();
    plVar11 = (long *)0x40;
    func_0x000107c280a8();
    func_0x00010b5834c0();
    param_2 = plVar13;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    param_2 = (long *)param_1[0xc];
    plVar8 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar11 = (long *)0x9;
    func_0x00010b58329c();
  }
  if ((uVar3 >> 2 & 1) != 0) {
    param_2 = (long *)param_1[0xd];
    plVar8 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar11 = (long *)0xa;
    func_0x00010b58329c();
  }
  func_0x00010b583394(param_1[10]);
  if ((long)param_2 < 0) {
    if (plVar5[1] == 0) goto LAB_10b582298;
    plVar13 = (long *)*plVar5;
  }
  else {
    plVar13 = plVar5;
    if ((int)param_2 == 0) goto LAB_10b582298;
  }
  func_0x00010b5832ec(plVar13);
  plVar11 = param_3;
  func_0x00010b583494(param_3,500);
  plVar8 = plVar5;
LAB_10b582298:
  if ((param_1[1] & 1U) == 0) {
    return plVar11;
  }
  func_0x00010b5833c0();
  if ((long)plVar8 < 0) {
    lVar15 = *(long *)(extraout_x8 + 8);
    plVar8 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar15 = extraout_x8 + 8;
  }
  if ((long)(int)plVar8 <= *param_3 - (long)plVar11) {
    _memcpy(plVar11,lVar15,(ulong)plVar8 & 0xffffffff);
    return (long *)((long)plVar11 + (long)(int)plVar8);
  }
  while( true ) {
    iVar14 = ((int)*param_3 - (int)plVar11) + 0x10;
    iVar12 = (int)plVar8;
    plVar8 = (long *)(ulong)(uint)(iVar12 - iVar14);
    if (iVar12 - iVar14 == 0 || iVar12 < iVar14) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)plVar11 + (long)iVar14);
    plVar11 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar11 + (long)iVar12);
}



/* Entry: 10b582300; end: 10b58249f;  */

void FUN_10b582300(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  long extraout_x9;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar5 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b5824a0();
    lVar5 = uVar4 + lVar5;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar5 = lVar5 + (ulong)uVar2;
  iVar3 = (int)lVar5;
  lVar6 = 8;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    puVar1 = (ulong *)(param_1 + 0x30);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar6 + -1);
    }
    uVar4 = *puVar1;
    func_0x000107c282a0();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    lVar6 = lVar6 + 8;
  }
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x48));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b583370();
  }
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x50));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    iVar3 = iVar3 + (int)uVar4 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010b5824bc(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b583370();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b581bec(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b583228();
      func_0x00010b58337c();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b581cf4(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b583228();
      func_0x00010b58337c();
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x7c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5833f4();
    lVar5 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar5 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b5824a0; end: 10b5824d7;  */

long FUN_10b5824a0(long param_1)

{
  long extraout_x8;
  
  FUN_10b581960();
  FUN_10b583228();
  return param_1 + extraout_x8;
}



/* Entry: 10b5824d8; end: 10b5824db;  */

void FUN_10b5824d8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b5833e8();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b58265c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010598fce8(unaff_x21 + 0x30);
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b582f5c(uVar5,*(undefined8 *)(unaff_x20 + 0x58));
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10b58266c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar2 = uVar5;
        FUN_10b583030(uVar5,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        FUN_10b581b14();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        FUN_10b583090(uVar5,*(undefined8 *)(unaff_x20 + 0x68));
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        func_0x00010b581c1c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  func_0x00010b583514();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5824dc; end: 10b58265b;  */

void FUN_10b5824dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b5833e8();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b58265c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010598fce8(unaff_x21 + 0x30);
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b582f5c(uVar5,*(undefined8 *)(unaff_x20 + 0x58));
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10b58266c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar2 = uVar5;
        FUN_10b583030(uVar5,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        FUN_10b581b14();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        FUN_10b583090(uVar5,*(undefined8 *)(unaff_x20 + 0x68));
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        func_0x00010b581c1c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  func_0x00010b583514();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b58265c; end: 10b58266b;  */

void FUN_10b58265c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b58266c; end: 10b5827bf;  */

void FUN_10b58266c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5833e8();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar3 = uVar2;
        FUN_10b5830f0(uVar2,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar3;
      }
      else {
        FUN_10b581714();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        FUN_10b58318c(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        FUN_10b580fe8();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  func_0x00010b583514();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5827c0; end: 10b5827eb;  */

undefined8 FUN_10b5827c0(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b5827ec(param_1);
  return param_1;
}



/* Entry: 10b5827ec; end: 10b58283b;  */

void FUN_10b5827ec(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b581398();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b580cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58283c; end: 10b58283f;  */

undefined8 FUN_10b58283c(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b5827ec(param_1);
  return param_1;
}



/* Entry: 10b582840; end: 10b582853;  */

void FUN_10b582840(void)

{
  FUN_10b5827c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b582854; end: 10b58285f;  */

undefined ** FUN_10b582854(void)

{
  return &PTR_DAT_110d0e140;
}



/* Entry: 10b582860; end: 10b582b0b;  */

long * FUN_10b582860(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  plVar3 = param_3;
  func_0x00010b5833e8();
  func_0x00010b583394(param_1[3]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b58289c;
  }
  else if ((int)param_2 != 0) {
LAB_10b58289c:
    func_0x00010b5832ec();
    param_2 = 1;
    param_1 = param_3;
    func_0x00010b583268();
    unaff_x20 = param_1;
  }
  func_0x00010b583394(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5828dc;
  }
  else if ((int)param_2 != 0) {
LAB_10b5828dc:
    func_0x00010b5832ec();
    param_2 = 2;
    param_1 = param_3;
    func_0x00010b583268();
    unaff_x20 = param_1;
  }
  func_0x00010b583394(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b582938;
  }
  else if ((int)param_2 == 0) goto LAB_10b582938;
  func_0x00010b5832ec();
  param_1 = param_3;
  func_0x00010b583268(param_3,3);
  unaff_x20 = param_1;
LAB_10b582938:
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x30);
    param_1 = (long *)0x4;
    func_0x00010b5834a8();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    func_0x00010b583488();
    func_0x000107c282c4();
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    func_0x00010b583488();
    func_0x000106af68d0();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x50) != 0) {
    func_0x00010b583488();
    func_0x00010598f468();
    unaff_x20 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    param_1 = (long *)0x8;
    func_0x00010b5834a8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x54) != 0) {
    func_0x00010b583488();
    func_0x000108b3207c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b5833c0();
    if ((long)plVar3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      plVar3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
        iVar4 = (int)plVar3;
        plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        lVar2 = (long)unaff_x20 + (long)iVar5;
        unaff_x20 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x20 + (long)iVar4);
    }
    _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)unaff_x20 + (long)(int)plVar3);
  }
  return unaff_x20;
}



/* Entry: 10b582b0c; end: 10b582b4f;  */

void FUN_10b582b0c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5833e8();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        uVar3 = uVar2;
        FUN_10b5830f0(uVar2,*(undefined8 *)(unaff_x20 + 0x30));
        *(ulong *)(unaff_x21 + 0x30) = uVar3;
      }
      else {
        FUN_10b581714();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        FUN_10b58318c(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        FUN_10b580fe8();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  func_0x00010b583514();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b582b50; end: 10b582b93;  */

long FUN_10b582b50(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500600020,0);
  }
  return param_1;
}



/* Entry: 10b582b94; end: 10b582bc3;  */

long * FUN_10b582b94(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b582bc4; end: 10b582e63;  */

long FUN_10b582bc4(long param_1)

{
  func_0x000107c282b4(param_1 + 0x20);
  FUN_10b582b94(param_1 + 8);
  return param_1;
}



/* Entry: 10b582e64; end: 10b582e77;  */

void FUN_10b582e64(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b582e78; end: 10b58302f;  */

void FUN_10b582e78(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piStack_48;
  
  func_0x00010b5833a0();
  while (piStack_48 != (int *)0x0) {
    piVar1 = piStack_48 + 2;
    func_0x000107c28188();
    func_0x00010b583320();
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)(ulong)(*param_1 + 1);
      piVar1 = param_1;
      func_0x000107c27d60(param_1,piVar2);
      if ((int)piVar1 != 0) {
        func_0x000107c28188(piStack_48 + 2);
        func_0x00010b583320();
        param_2 = piVar2;
      }
      piVar1 = param_1;
      func_0x000107c27d64(param_1,0x60);
      func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_1 + 6),piStack_48 + 2);
      FUN_10b58106c(piVar1 + 8,*(undefined8 *)(param_1 + 6));
      func_0x000107c27d68(param_1,param_2,piVar1);
      *param_1 = *param_1 + 1;
    }
    if (piStack_48 != piVar1) {
      FUN_10b5810fc(piVar1 + 8);
      param_2 = piStack_48 + 8;
      FUN_10b581340(piVar1 + 8);
    }
    func_0x00010b5833a8();
  }
  return;
}



/* Entry: 10b583030; end: 10b58308f;  */

undefined8 * FUN_10b583030(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b583508();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b583400();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b583428();
  }
  *param_1 = &PTR_FUN_110d0dd38;
  param_1[1] = unaff_x21;
  func_0x00010b5834fc();
  FUN_10b581b14();
  return param_1;
}



/* Entry: 10b583090; end: 10b5830ef;  */

undefined8 * FUN_10b583090(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b583508();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b583400();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b583428();
  }
  *param_1 = &PTR_FUN_110d0dc98;
  param_1[1] = unaff_x21;
  func_0x00010b5834fc();
  func_0x00010b581c1c();
  return param_1;
}



/* Entry: 10b5830f0; end: 10b58318b;  */

undefined8 * FUN_10b5830f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0de28;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5832c0();
  }
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  FUN_10b582e78(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 10b58318c; end: 10b583227;  */

undefined8 * FUN_10b58318c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0ddd8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5832c0();
  }
  func_0x000105991a48(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x30;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[6] = lVar2;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10b583228; end: 10b58353b;  */

void FUN_10b583228(void)

{
  return;
}



/* Entry: 10b58353c; end: 10b583563;  */

undefined8 FUN_10b58353c(undefined8 param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  return param_1;
}



/* Entry: 10b583564; end: 10b583567;  */

undefined8 FUN_10b583564(undefined8 param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  return param_1;
}



/* Entry: 10b583568; end: 10b58357b;  */

void FUN_10b583568(void)

{
  FUN_10b58353c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58357c; end: 10b583587;  */

undefined ** FUN_10b58357c(void)

{
  return &PTR_DAT_110d0e610;
}



/* Entry: 10b583588; end: 10b5835b7;  */

void FUN_10b583588(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b585fd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5835b8; end: 10b58367f;  */

long * FUN_10b5835b8(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  func_0x00010b586034();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar1 = param_3;
    func_0x000107c28094(param_3);
    unaff_x20 = (long *)(ulong)*(byte *)(unaff_x21 + 0x18);
    param_2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8();
  }
  func_0x00010b586014(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b583648;
  }
  else if ((int)param_2 == 0) goto LAB_10b583648;
  func_0x00010b585ee8();
  unaff_x20 = param_3;
  func_0x00010b585e6c(param_3,2);
LAB_10b583648:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b585ecc();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)unaff_x20 + (long)iVar5;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar4);
}



/* Entry: 10b583680; end: 10b5836d3;  */

void FUN_10b583680(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b585f9c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x18) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585f14();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5836d4; end: 10b5836d7;  */

void FUN_10b5836d4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b585eb4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    func_0x00010b586180();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5836d8; end: 10b58372f;  */

void FUN_10b5836d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b585eb4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b585ff0();
    }
    func_0x00010b586180();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b583730; end: 10b58375b;  */

undefined8 FUN_10b583730(undefined8 param_1)

{
  func_0x00010b585eac();
  FUN_10b58375c(param_1);
  return param_1;
}



/* Entry: 10b58375c; end: 10b5837ab;  */

undefined8 FUN_10b58375c(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b585480();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b574ae0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b58353c();
  }
  __ZdlPv();
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b5837ac; end: 10b5837af;  */

undefined8 FUN_10b5837ac(undefined8 param_1)

{
  func_0x00010b585eac();
  FUN_10b58375c(param_1);
  return param_1;
}



/* Entry: 10b5837b0; end: 10b5837c3;  */

void FUN_10b5837b0(void)

{
  FUN_10b583730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5837c4; end: 10b5837cf;  */

undefined ** FUN_10b5837c4(void)

{
  return &PTR_DAT_110d0e658;
}



/* Entry: 10b5837d0; end: 10b583843;  */

void FUN_10b5837d0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b583844(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b574b68(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b583588(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b583844; end: 10b58385b;  */

void FUN_10b583844(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b58385c; end: 10b583a37;  */

long * FUN_10b58385c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b585de0();
  uVar2 = *(uint *)(param_1 + 5);
  if (uVar2 != 0) {
    func_0x00010b585e00();
    puVar4 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar2) {
      func_0x00010b5861b0();
    }
    puVar4[-1] = (char)uVar2;
    piVar6 = *(int **)(unaff_x20 + 0x20);
    piVar1 = piVar6 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x00010b585e00();
      uVar5 = (ulong)*piVar6;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010b58619c();
        uVar5 = extraout_x8;
      }
      piVar6 = piVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (piVar6 < piVar1);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x1c);
    param_1 = (long *)0x2;
    func_0x00010b585e84();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    func_0x00010b585e00();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b586150();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b585e84();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x1c);
    param_4 = (long *)0x5;
    func_0x00010b585e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b585ecc();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar3 = extraout_x8_00 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar7 = (int)param_3;
    uVar2 = iVar7 - iVar8;
    param_3 = (ulong)uVar2;
    if (uVar2 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar7);
}



/* Entry: 10b583a38; end: 10b583b17;  */

void FUN_10b583a38(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b585f54();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x00010b586190();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b585954();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b583b18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b575908();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10b574cc0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5859b8();
        *(ulong **)(unaff_x21 + 0x40) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5836d8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  func_0x00010b585f88();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5860fc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b583b18; end: 10b583b4b;  */

void FUN_10b583b18(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b583b4c; end: 10b583b77;  */

long FUN_10b583b4c(long param_1)

{
  func_0x00010b585eac();
  FUN_10b585630(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b583b78; end: 10b583b7b;  */

long FUN_10b583b78(long param_1)

{
  func_0x00010b585eac();
  FUN_10b585630(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b583b7c; end: 10b583b8f;  */

void FUN_10b583b7c(void)

{
  FUN_10b583b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b583b90; end: 10b583b9b;  */

undefined ** FUN_10b583b90(void)

{
  return &PTR_DAT_110d0e6b0;
}



/* Entry: 10b583b9c; end: 10b583bdb;  */

void FUN_10b583b9c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b583bdc; end: 10b583caf;  */

long * FUN_10b583bdc(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  iVar4 = *(int *)(param_1 + 0x18);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010b5860ac();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x1;
    func_0x00010b585e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b583cb0; end: 10b583ce7;  */

void FUN_10b583cb0(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010b586020();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b586174();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b583ce8; end: 10b583d8b;  */

long FUN_10b583ce8(long param_1)

{
  func_0x00010b585eac();
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b584ee0();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x50);
  if (*(int *)(param_1 + 0x34) != 1) {
    func_0x00010b586124();
  }
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b583d8c; end: 10b583d8f;  */

long FUN_10b583d8c(long param_1)

{
  func_0x00010b585eac();
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b57423c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b584ee0();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x50);
  if (*(int *)(param_1 + 0x34) != 1) {
    func_0x00010b586124();
  }
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b583d90; end: 10b583da3;  */

void FUN_10b583d90(void)

{
  FUN_10b583ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b583da4; end: 10b583dcb;  */

undefined ** FUN_10b583da4(void)

{
  return &PTR_DAT_110d0e708;
}



/* Entry: 10b583dcc; end: 10b583efb;  */

void FUN_10b583dcc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x34) != 1) {
    func_0x00010b586124(param_1,0x10500500020);
  }
  func_0x000107c282c0(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  func_0x000107c3025c(param_1 + 0x80);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5742d0(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b583e80(*(undefined8 *)(param_1 + 0x98));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b583efc; end: 10b584333;  */

byte * FUN_10b583efc(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long extraout_x8;
  byte *pbVar9;
  ulong *puVar10;
  uint *puVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  byte *pbStack_80;
  long alStack_78 [3];
  
  puVar10 = (ulong *)(ulong)*(uint *)(param_1 + 0x28);
  pbVar4 = param_1;
  pbVar7 = param_3;
  pbVar9 = param_2;
  if (*(uint *)(param_1 + 0x28) != 0) {
    func_0x00010b58615c();
    pbVar9 = pbVar4 + 2;
    *pbVar4 = 10;
    while( true ) {
      if ((uint)puVar10 < 0x80) break;
      pbVar9[-1] = (byte)puVar10 | 0x80;
      puVar10 = (ulong *)(ulong)((uint)puVar10 >> 7);
      pbVar9 = pbVar9 + 1;
    }
    pbVar9[-1] = (byte)puVar10;
    puVar10 = *(ulong **)(param_1 + 0x20);
    puVar3 = (ulong *)((long)puVar10 + (long)*(int *)(param_1 + 0x18) * 4);
    do {
      func_0x00010b58615c();
      uVar8 = (ulong)*(int *)puVar10;
      pbVar12 = pbVar4;
      while( true ) {
        pbVar9 = pbVar12 + 1;
        if (uVar8 < 0x80) break;
        *pbVar12 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        pbVar12 = pbVar9;
      }
      puVar10 = (ulong *)((long)puVar10 + 4);
      *pbVar12 = (byte)uVar8;
    } while (puVar10 < puVar3);
  }
  func_0x00010b586014(*(long *)(param_1 + 0x68));
  if ((long)param_2 < 0) {
    param_2 = (byte *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (ulong *)*puVar10;
      goto LAB_10b583fc8;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)param_2 != 0) {
LAB_10b583fc8:
      func_0x00010b585ee8(puVar3);
      param_2 = (byte *)0x2;
      pbVar4 = param_3;
      func_0x00010b585e78();
      pbVar9 = pbVar4;
    }
  }
  func_0x00010b586014(*(long *)(param_1 + 0x70));
  if ((long)param_2 < 0) {
    param_2 = (byte *)0x0;
    if (puVar10[1] != 0) {
      puVar3 = (ulong *)*puVar10;
      goto LAB_10b584008;
    }
  }
  else {
    puVar3 = puVar10;
    if ((int)param_2 != 0) {
LAB_10b584008:
      func_0x00010b585ee8(puVar3);
      param_2 = (byte *)0x3;
      pbVar4 = param_3;
      func_0x00010b585e78();
      pbVar9 = pbVar4;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(byte **)(param_1 + 0x88);
    pbVar7 = (byte *)(ulong)*(uint *)(param_2 + 0x20);
    pbVar4 = (byte *)0x4;
    func_0x00010b585e84();
    pbVar9 = pbVar4;
  }
  func_0x00010b586014(*(long *)(param_1 + 0x78));
  if ((long)param_2 < 0) {
    param_2 = (byte *)0x0;
    if (puVar10[1] != 0) {
      puVar10 = (ulong *)*puVar10;
      goto LAB_10b584068;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10b584068:
    func_0x00010b585ee8(puVar10);
    param_2 = (byte *)0x5;
    pbVar4 = param_3;
    func_0x00010b585e78();
    pbVar9 = pbVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(byte **)(param_1 + 0x90);
    pbVar7 = (byte *)(ulong)*(uint *)(param_2 + 0x14);
    pbVar4 = (byte *)0x6;
    func_0x00010b585e84();
    pbVar9 = pbVar4;
  }
  puVar11 = (uint *)(param_1 + 0x30);
  uVar2 = *puVar11;
  uVar8 = (ulong)uVar2;
  if (uVar2 != 0) {
    if ((uVar2 == 1) || ((param_3[0x3a] & 1) == 0)) {
      func_0x00010b586144();
      puVar11 = (uint *)&UNK_10f77c8f9;
      while (pbVar12 = pbVar4, lVar14 = alStack_78[0], alStack_78[0] != 0) {
        lVar6 = alStack_78[0] + 8;
        func_0x00010b58609c();
        param_2 = (byte *)(long)*(char *)(lVar14 + 0x1f);
        if ((long)param_2 < 0) {
          lVar6 = *(long *)(lVar14 + 8);
          param_2 = *(byte **)(lVar14 + 0x10);
        }
        func_0x00010b585f48(lVar6);
        pbVar4 = (byte *)alStack_78;
        func_0x000107c27d54();
        pbVar9 = pbVar12;
      }
    }
    else {
      pbVar4 = (byte *)(uVar8 << 3);
      __Znam();
      pbStack_80 = pbVar4;
      func_0x00010b586144();
      while (alStack_78[0] != 0) {
        *(long *)pbVar4 = alStack_78[0] + 8;
        func_0x000107c27d54(alStack_78);
        pbVar4 = pbVar4 + 8;
      }
      param_2 = pbStack_80 + uVar8 * 8;
      pbVar12 = pbStack_80;
      func_0x000105991c2c();
      uVar13 = uVar8 << 3;
      puVar11 = (uint *)&UNK_10f77c8f9;
      pbVar4 = pbStack_80;
      while (pbVar5 = pbVar12, uVar8 != 0) {
        pbVar9 = *(byte **)pbVar4;
        func_0x00010b58609c();
        param_2 = (byte *)(long)(char)pbVar9[0x17];
        pbVar12 = pbVar9;
        if ((long)param_2 < 0) {
          pbVar12 = *(byte **)pbVar9;
          param_2 = *(byte **)(pbVar9 + 8);
        }
        func_0x00010b585f48();
        pbVar4 = pbVar4 + 8;
        uVar13 = uVar13 - 8;
        pbVar9 = pbVar5;
        uVar8 = uVar13;
      }
      func_0x000105991ac8(&pbStack_80);
    }
  }
  func_0x00010b586014(*(long *)(param_1 + 0x80));
  if ((long)param_2 < 0) {
    if (*(long *)(puVar11 + 2) == 0) goto LAB_10b5841d4;
    puVar11 = *(uint **)puVar11;
  }
  else if ((int)param_2 == 0) goto LAB_10b5841d4;
  func_0x00010b585ee8(puVar11);
  pbVar9 = param_3;
  func_0x00010b585e78(param_3,8);
LAB_10b5841d4:
  lVar14 = 8;
  for (uVar8 = (ulong)(*(uint *)(param_1 + 0x58) &
                      ((int)*(uint *)(param_1 + 0x58) >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    uVar13 = *(ulong *)(param_1 + 0x50);
    puVar10 = (ulong *)(param_1 + 0x50);
    if ((uVar13 & 1) != 0) {
      puVar10 = (ulong *)(uVar13 + lVar14 + -1);
    }
    pbVar7 = (byte *)*puVar10;
    lVar6 = (long)(char)pbVar7[0x17];
    pbVar4 = pbVar7;
    if (lVar6 < 0) {
      lVar6 = *(long *)(pbVar7 + 8);
      pbVar4 = *(byte **)pbVar7;
    }
    func_0x00010b585f48(pbVar4,lVar6);
    pbVar4 = (byte *)(long)(char)pbVar7[0x17];
    if ((((long)pbVar4 < 0) && (pbVar4 = *(byte **)(pbVar7 + 8), 0x7f < (long)pbVar4)) ||
       ((*(long *)param_3 - (long)pbVar9) + 0xe < (long)pbVar4)) {
      pbVar4 = param_3;
      func_0x00010b4d5120(param_3,9,pbVar7,pbVar9);
    }
    else {
      *pbVar9 = 0x4a;
      pbVar9[1] = (byte)pbVar4;
      pbVar12 = pbVar7;
      if ((char)pbVar7[0x17] < '\0') {
        pbVar12 = *(byte **)pbVar7;
      }
      pbVar7 = pbVar4;
      _memcpy(pbVar9 + 2,pbVar12);
      pbVar4 = pbVar9 + 2 + (long)pbVar4;
    }
    lVar14 = lVar14 + 8;
    pbVar9 = pbVar4;
  }
  pbVar4 = pbVar9;
  if ((uVar1 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x14);
    pbVar4 = (byte *)0xa;
    func_0x00010b585e84(10,*(long *)(param_1 + 0x98),pbVar7,pbVar9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b585ecc();
    if ((long)pbVar7 < 0) {
      lVar14 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar14 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar14);
    pbVar4 = param_3;
  }
  return pbVar4;
}



/* Entry: 10b584334; end: 10b5843db;  */

void FUN_10b584334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  int unaff_w21;
  
  uVar2 = param_4;
  func_0x00010b586034();
  func_0x000107c28094(uVar2,param_3);
  uVar3 = 0x3a;
  func_0x000107c280a8(0x3a,uVar2);
  func_0x000107c282a0();
  func_0x000107c280a8(unaff_w21 + (int)unaff_x20[5] +
                      ((int)LZCOUNT((int)unaff_x20[5]) * -9 + 0x160U >> 6) + 2,uVar3);
  uVar3 = 1;
  func_0x0001059928f0(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  lVar1 = unaff_x20[5];
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0((int)lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b5843dc; end: 10b584847;  */

long FUN_10b5843dc(void)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined4 extraout_w8;
  undefined4 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  long lVar7;
  long extraout_x9_00;
  long extraout_x11;
  long extraout_x11_00;
  long unaff_x19;
  ulong uVar8;
  long lVar9;
  long alStack_58 [3];
  
  func_0x00010b586040();
  lVar7 = extraout_x8;
  lVar9 = extraout_x11;
  while (lVar9 != 0) {
    func_0x00010b585f20();
    lVar7 = extraout_x8_00;
    lVar9 = extraout_x11_00;
  }
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar5 = 0;
  }
  else {
    func_0x00010b586080();
    lVar7 = extraout_x9 + 1;
    uVar5 = extraout_w8;
  }
  *(undefined4 *)(unaff_x19 + 0x28) = uVar5;
  lVar7 = lVar7 + (ulong)*(uint *)(unaff_x19 + 0x30);
  plVar4 = alStack_58;
  func_0x00010564c19c();
  while (lVar9 = alStack_58[0], alStack_58[0] != 0) {
    iVar3 = (int)alStack_58[0] + 8;
    func_0x000107c282a0();
    lVar9 = lVar9 + 0x20;
    func_0x00010b5851fc();
    lVar9 = lVar9 + (iVar3 + 2) + (ulong)((int)LZCOUNT((int)lVar9) * -9 + 0x160U >> 6);
    lVar7 = lVar9 + lVar7 + (ulong)((int)LZCOUNT((int)lVar9) * -9 + 0x160U >> 6);
    plVar4 = alStack_58;
    func_0x000107c27d54();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x58);
  lVar7 = lVar7 + (ulong)uVar2;
  lVar9 = 8;
  for (uVar8 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1) {
    uVar6 = *(ulong *)(unaff_x19 + 0x50);
    puVar1 = (ulong *)(unaff_x19 + 0x50);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar9 + -1);
    }
    plVar4 = (long *)*puVar1;
    func_0x000107c282a0();
    lVar7 = (long)plVar4 + lVar7;
    lVar9 = lVar9 + 8;
  }
  func_0x00010b586008(*(undefined8 *)(unaff_x19 + 0x68));
  lVar9 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar9 = plVar4[1];
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b585fe4();
  }
  func_0x00010b586008(*(undefined8 *)(unaff_x19 + 0x70));
  lVar9 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar9 = plVar4[1];
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b585fe4();
  }
  func_0x00010b586008(*(undefined8 *)(unaff_x19 + 0x78));
  lVar9 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar9 = plVar4[1];
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b585fe4();
  }
  func_0x00010b586008(*(undefined8 *)(unaff_x19 + 0x80));
  lVar9 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar9 = plVar4[1];
  }
  if (lVar9 != 0) {
    func_0x000107c282a0();
    func_0x00010b585fe4();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b5744fc(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x00010b585fe4();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x00010b585fe4();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00010b585024(*(undefined8 *)(unaff_x19 + 0x98));
      func_0x00010b585db0();
      func_0x00010b585e14();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b585f14();
    lVar9 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar9 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar7 = lVar9 + lVar7;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar7;
  return lVar7;
}



/* Entry: 10b584848; end: 10b584873;  */

long FUN_10b584848(long param_1)

{
  func_0x00010b585eac();
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b584874; end: 10b584877;  */

long FUN_10b584874(long param_1)

{
  func_0x00010b585eac();
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b584878; end: 10b58488b;  */

void FUN_10b584878(void)

{
  FUN_10b584848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58488c; end: 10b5848af;  */

undefined ** FUN_10b58488c(void)

{
  return &PTR_DAT_110d0e758;
}



/* Entry: 10b5848b0; end: 10b584973;  */

long * FUN_10b5848b0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010b585de0();
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5860d8();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x20);
  if (0 < (int)uVar2) {
    func_0x00010b585e00();
    puVar4 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010b5861b0();
    }
    puVar4[-1] = (char)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b585e00();
      uVar5 = *puVar6;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar5) {
        func_0x00010b58619c();
        uVar5 = extraout_x8;
      }
      puVar6 = puVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (puVar6 < puVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b584974; end: 10b5849ff;  */

void FUN_10b584974(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3eb0();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b585f14();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}



/* Entry: 10b584a00; end: 10b584a03;  */

void FUN_10b584a00(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b586020();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598be78();
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b584a04; end: 10b584a47;  */

void FUN_10b584a04(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b586020();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598be78();
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585e24();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b584a48; end: 10b584a63;  */

void FUN_10b584a48(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b584a64; end: 10b584a87;  */

undefined8 FUN_10b584a64(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b584a88; end: 10b584a8b;  */

undefined8 FUN_10b584a88(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b584a8c; end: 10b584a9f;  */

void FUN_10b584a8c(void)

{
  FUN_10b584a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b584aa0; end: 10b584abf;  */

undefined ** FUN_10b584aa0(void)

{
  return &PTR_DAT_110d0e7b8;
}



/* Entry: 10b584ac0; end: 10b584b1b;  */

long * FUN_10b584ac0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  if (param_1[2] != 0) {
    func_0x00010b5860d8();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b585ecc();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b584b1c; end: 10b584b7f;  */

long FUN_10b584b1c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5861c4();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b584b80; end: 10b584ba3;  */

undefined8 FUN_10b584b80(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b584ba4; end: 10b584ba7;  */

undefined8 FUN_10b584ba4(undefined8 param_1)

{
  func_0x00010b585eac();
  return param_1;
}



/* Entry: 10b584ba8; end: 10b584bbb;  */

void FUN_10b584ba8(void)

{
  FUN_10b584b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b584bbc; end: 10b584bdf;  */

undefined ** FUN_10b584bbc(void)

{
  return &PTR_DAT_110d0e820;
}



/* Entry: 10b584be0; end: 10b584c63;  */

long * FUN_10b584be0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b585de0();
  if (param_1[2] != 0) {
    func_0x00010b5860d8();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x00010b585e00();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b586150();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b585ecc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b584c64; end: 10b584c9b;  */

long FUN_10b584c64(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long lVar2;
  
  func_0x00010b5861c4();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((extraout_x9 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b584c9c; end: 10b584ccb;  */

long FUN_10b584c9c(long param_1)

{
  func_0x00010b585eac();
  func_0x00010b586188();
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}


