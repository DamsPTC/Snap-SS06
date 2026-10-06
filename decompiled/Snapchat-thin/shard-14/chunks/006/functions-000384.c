/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4e871c; end: 10b4e8847;  */

long * FUN_10b4e871c(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  plVar2 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4e8788;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4e8788;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f775061);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_10b4e8788:
  uVar5 = param_1[3] & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,uVar5,param_2);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[4] != 0) {
    FUN_10b4e8a30();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b4e8a3c();
    param_2 = plVar3;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_10b4e8a30();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b4e8a3c();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b4e8848; end: 10b4e89d3;  */

long FUN_10b4e8848(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4e8880;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4e8880:
    lVar3 = 0;
    goto LAB_10b4e8884;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4e8884:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4e89d4; end: 10b4e89db;  */

void FUN_10b4e89d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2bf8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e89dc; end: 10b4e8a2f;  */

void FUN_10b4e89dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2bf8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e8a30; end: 10b4e8a4f;  */

ulong * FUN_10b4e8a30(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b4e8a50; end: 10b4e8a87;  */

long FUN_10b4e8a50(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4e8a88; end: 10b4e8a8b;  */

long FUN_10b4e8a88(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4e8a8c; end: 10b4e8a9f;  */

void FUN_10b4e8a8c(void)

{
  FUN_10b4e8a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e8aa0; end: 10b4e8aab;  */

undefined ** FUN_10b4e8aa0(void)

{
  return &PTR_DAT_110cf2ce8;
}



/* Entry: 10b4e8aac; end: 10b4e8af3;  */

void FUN_10b4e8aac(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b4e8af4; end: 10b4e8c03;  */

long * FUN_10b4e8af4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b4e8b38;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b4e8b38:
    func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f775093);
    param_2 = param_3;
    FUN_10b4e8db8(param_3,1);
  }
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b4e8bb8;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b4e8bb8;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f7750c6);
  plVar1 = param_3;
  FUN_10b4e8db8(param_3,3);
LAB_10b4e8bb8:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b4e8c04; end: 10b4e8d5f;  */

long FUN_10b4e8c04(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4e8c3c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4e8c3c:
    lVar3 = 0;
    goto LAB_10b4e8c40;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b4e8c40:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4e8d60; end: 10b4e8d67;  */

void FUN_10b4e8d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2ca8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e8d68; end: 10b4e8db7;  */

void FUN_10b4e8d68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2ca8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4e8db8; end: 10b4e8dcb;  */

long * FUN_10b4e8db8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b4e8dcc; end: 10b4e90db;  */

undefined8 * FUN_10b4e8dcc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2d60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b4e6a58(param_1 + 3,param_2,param_3 + 0x18);
  FUN_10b4e6a58(param_1 + 6,param_2,param_3 + 0x30);
  func_0x00010b4ea59c(param_1 + 9);
  func_0x00010b4ea59c(param_1 + 0xc);
  func_0x000105991a48(param_1 + 0xf,param_2,param_3 + 0x78);
  func_0x00010b4ea59c(param_1 + 0x13);
  func_0x00010b4ea59c(param_1 + 0x16);
  func_0x00010b4ea59c(param_1 + 0x19);
  func_0x00010b4e6a98(param_1 + 0x1c,param_2,param_3 + 0xe0);
  func_0x00010b4e6a98(param_1 + 0x1f,param_2,param_3 + 0xf8);
  func_0x00010b4e6ab8(param_1 + 0x22,param_2,param_3 + 0x110);
  func_0x00010b4e6ab8(param_1 + 0x25,param_2,param_3 + 0x128);
  lVar2 = param_3 + 0x140;
  func_0x00010b4ea4f4();
  param_1[0x28] = lVar2;
  lVar2 = param_3 + 0x148;
  func_0x00010b4ea4f4();
  param_1[0x29] = lVar2;
  lVar2 = param_3 + 0x150;
  func_0x00010b4ea4f4();
  param_1[0x2a] = lVar2;
  lVar2 = param_3 + 0x158;
  func_0x00010b4ea4f4();
  param_1[0x2b] = lVar2;
  lVar2 = param_3 + 0x160;
  func_0x00010b4ea4f4();
  param_1[0x2c] = lVar2;
  lVar2 = param_3 + 0x168;
  func_0x00010b4ea4f4();
  param_1[0x2d] = lVar2;
  lVar2 = param_3 + 0x170;
  func_0x00010b4ea4f4();
  param_1[0x2e] = lVar2;
  lVar2 = param_3 + 0x178;
  func_0x00010b4ea4f4();
  param_1[0x2f] = lVar2;
  lVar2 = param_3 + 0x180;
  func_0x00010b4ea4f4();
  param_1[0x30] = lVar2;
  lVar2 = param_3 + 0x188;
  func_0x00010b4ea4f4();
  param_1[0x31] = lVar2;
  lVar2 = param_3 + 400;
  func_0x00010b4ea4f4();
  param_1[0x32] = lVar2;
  lVar2 = param_3 + 0x198;
  func_0x00010b4ea4f4();
  param_1[0x33] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6cf0(param_2,*(undefined8 *)(param_3 + 0x1a0));
  }
  param_1[0x34] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d94(param_2,*(undefined8 *)(param_3 + 0x1a8));
  }
  param_1[0x35] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d24(param_2,*(undefined8 *)(param_3 + 0x1b0));
  }
  param_1[0x36] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d24(param_2,*(undefined8 *)(param_3 + 0x1b8));
  }
  param_1[0x37] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e6d58(param_2,*(undefined8 *)(param_3 + 0x1c0));
  }
  param_1[0x38] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b4e6d58(param_2,*(undefined8 *)(param_3 + 0x1c8));
  }
  param_1[0x39] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x1d0);
  param_1[0x3b] = *(undefined8 *)(param_3 + 0x1d8);
  param_1[0x3a] = uVar3;
  return param_1;
}



/* Entry: 10b4e90dc; end: 10b4e910f;  */

long FUN_10b4e90dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e9110(param_1);
  return param_1;
}



/* Entry: 10b4e9110; end: 10b4e9247;  */

undefined8 FUN_10b4e9110(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x140);
  func_0x000107c30258(param_1 + 0x148);
  func_0x000107c30258(param_1 + 0x150);
  func_0x000107c30258(param_1 + 0x158);
  func_0x000107c30258(param_1 + 0x160);
  func_0x000107c30258(param_1 + 0x168);
  func_0x000107c30258(param_1 + 0x170);
  func_0x000107c30258(param_1 + 0x178);
  func_0x000107c30258(param_1 + 0x180);
  func_0x000107c30258(param_1 + 0x188);
  func_0x000107c30258(param_1 + 400);
  func_0x000107c30258(param_1 + 0x198);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_10b4ee178();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_10b4e702c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_10b4e702c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_10b4e7484();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_10b4e7484();
  }
  __ZdlPv();
  FUN_10b4e6ad8(param_1 + 0x128);
  FUN_10b4e6ad8(param_1 + 0x110);
  FUN_10b4e6b00(param_1 + 0xf8);
  FUN_10b4e6b00(param_1 + 0xe0);
  FUN_10b4e6b28(param_1 + 200);
  FUN_10b4e6b28(param_1 + 0xb0);
  FUN_10b4e6b28(param_1 + 0x98);
  func_0x000105991a90(param_1 + 0x78);
  FUN_10b4e6b28(param_1 + 0x60);
  FUN_10b4e6b28(param_1 + 0x48);
  FUN_10b4e6b50(param_1 + 0x30);
  func_0x00010b4e6f78(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010b4e6f10();
  }
  return unaff_x19;
}



/* Entry: 10b4e9248; end: 10b4e924b;  */

long FUN_10b4e9248(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4e9110(param_1);
  return param_1;
}



/* Entry: 10b4e924c; end: 10b4e925f;  */

void FUN_10b4e924c(void)

{
  FUN_10b4e90dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e9260; end: 10b4e926b;  */

undefined ** FUN_10b4e9260(void)

{
  return &PTR_DAT_110cf2da0;
}



/* Entry: 10b4e926c; end: 10b4e93d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e926c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x00010b4e6cb4(param_1 + 0x18);
  func_0x00010b4e6cb4(param_1 + 0x30);
  func_0x00010b4e6cc8(param_1 + 0x48);
  func_0x00010b4e6cc8(param_1 + 0x60);
  func_0x000105991b74(param_1 + 0x78);
  func_0x00010b4e6cc8(param_1 + 0x98);
  func_0x00010b4e6cc8(param_1 + 0xb0);
  func_0x00010b4e6cc8(param_1 + 200);
  func_0x00010b4e6ca0(param_1 + 0xe0);
  func_0x00010b4e6ca0(param_1 + 0xf8);
  func_0x00010b4e6cdc(param_1 + 0x110);
  func_0x00010b4e6cdc(param_1 + 0x128);
  func_0x000107c3025c(param_1 + 0x140);
  func_0x000107c3025c(param_1 + 0x148);
  func_0x000107c3025c(param_1 + 0x150);
  func_0x000107c3025c(param_1 + 0x158);
  func_0x000107c3025c(param_1 + 0x160);
  func_0x000107c3025c(param_1 + 0x168);
  func_0x000107c3025c(param_1 + 0x170);
  func_0x000107c3025c(param_1 + 0x178);
  func_0x000107c3025c(param_1 + 0x180);
  func_0x000107c3025c(param_1 + 0x188);
  func_0x000107c3025c(param_1 + 400);
  func_0x000107c3025c(param_1 + 0x198);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0x1a0));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4ee210(*(undefined8 *)(param_1 + 0x1a8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b4e70cc(*(undefined8 *)(param_1 + 0x1b0));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b4e70cc(*(undefined8 *)(param_1 + 0x1b8));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4e7508(*(undefined8 *)(param_1 + 0x1c0));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b4e7508(*(undefined8 *)(param_1 + 0x1c8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
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



/* Entry: 10b4e93d4; end: 10b4e9b67;  */

undefined8 ** FUN_10b4e93d4(undefined8 **param_1,undefined8 **param_2,undefined8 **param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  ppuVar6 = param_1;
  ppuVar8 = param_2;
  func_0x00010b4ea540(param_1[0x28]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e9424;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e9424:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x1;
    ppuVar6 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar6;
  }
  func_0x00010b4ea540(param_1[0x29]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e9464;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e9464:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x2;
    ppuVar6 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar6;
  }
  func_0x00010b4ea540(param_1[0x2a]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e94a4;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e94a4:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x3;
    ppuVar6 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar6;
  }
  func_0x00010b4ea540(param_1[0x2b]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e94e4;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e94e4:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x4;
    ppuVar6 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar6;
  }
  func_0x00010b4ea540(param_1[0x2c]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e9524;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e9524:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x5;
    ppuVar6 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar6;
  }
  ppuVar4 = ppuVar6;
  if (*(int *)(param_1 + 0x3a) != 0) {
    func_0x00010b4ea4e8();
    ppuVar4 = (undefined8 **)0x30;
    func_0x000107c280a8();
    func_0x00010b4ea4dc();
    ppuVar8 = ppuVar6;
    param_2 = ppuVar4;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x34];
    ppuVar4 = (undefined8 **)0x7;
    func_0x00010b4ea4c4(7,ppuVar8,*(int *)((long)ppuVar8 + 0x2c));
    param_2 = ppuVar4;
  }
  func_0x00010b4ea540(param_1[0x2d]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e95a4;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e95a4:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x8;
    ppuVar4 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar4;
  }
  func_0x00010b4ea540(param_1[0x2e]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e95e4;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e95e4:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0x9;
    ppuVar4 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar4;
  }
  func_0x00010b4ea540(param_1[0x2f]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e9624;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e9624:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0xa;
    ppuVar4 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar4;
  }
  func_0x00010b4ea540(param_1[0x30]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e9664;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e9664:
    func_0x00010b4ea508();
    ppuVar8 = (undefined8 **)0xb;
    ppuVar4 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar4;
  }
  func_0x00010b4ea540(param_1[0x31]);
  if ((long)ppuVar8 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e96a4;
  }
  else if ((int)ppuVar8 != 0) {
LAB_10b4e96a4:
    func_0x00010b4ea508();
    ppuVar4 = param_3;
    func_0x00010b4ea4d0();
    param_2 = ppuVar4;
  }
  if (*(int *)((long)param_1 + 0x1d4) != 0) {
    func_0x00010b4ea4e8();
    ppuVar4 = (undefined8 **)0x70;
    func_0x000107c280a8();
    func_0x00010b4ea4dc();
    param_2 = ppuVar4;
  }
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    ppuVar4 = (undefined8 **)0xf;
    func_0x00010b4ea4c4();
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 7);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    ppuVar4 = (undefined8 **)0x10;
    func_0x00010b4ea4c4();
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 10);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    ppuVar4 = (undefined8 **)0x11;
    func_0x00010b4ea4c4();
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0xd);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    ppuVar4 = (undefined8 **)0x12;
    func_0x00010b4ea4c4();
    func_0x00010b4ea564();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    ppuVar4 = (undefined8 **)0x13;
    func_0x00010b4ea4c4(0x13,param_1[0x35],*(undefined4 *)((long)param_1[0x35] + 0x14));
    param_2 = ppuVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    ppuVar4 = (undefined8 **)0x14;
    func_0x00010b4ea4c4(0x14,param_1[0x36],*(undefined4 *)((long)param_1[0x36] + 0x14));
    param_2 = ppuVar4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    ppuVar4 = (undefined8 **)0x15;
    func_0x00010b4ea4c4(0x15,param_1[0x37],*(undefined4 *)((long)param_1[0x37] + 0x14));
    param_2 = ppuVar4;
  }
  ppuVar8 = param_1 + 0xf;
  if (*(int *)ppuVar8 != 0) {
    if ((*(int *)ppuVar8 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      ppuVar6 = &puStack_78;
      func_0x00010564c19c();
      while (ppuVar4 = ppuVar6, puVar3 = puStack_78, puStack_78 != (undefined8 *)0x0) {
        puVar5 = puStack_78 + 1;
        puVar11 = puStack_78 + 4;
        func_0x00010b4ea57c();
        lVar12 = (long)*(char *)((long)puVar3 + 0x1f);
        if (lVar12 < 0) {
          puVar5 = (undefined8 *)puVar3[1];
          lVar12 = puVar3[2];
        }
        func_0x00010b4ea4fc(puVar5,lVar12);
        ppuVar8 = (undefined8 **)(long)*(char *)((long)puVar3 + 0x37);
        if ((long)ppuVar8 < 0) {
          puVar11 = (undefined8 *)puVar3[4];
          ppuVar8 = (undefined8 **)puVar3[5];
        }
        func_0x00010b4ea4fc(puVar11);
        ppuVar6 = &puStack_78;
        func_0x000107c27d54();
        param_2 = ppuVar4;
      }
    }
    else {
      ppuVar6 = &puStack_78;
      func_0x000105991b98(ppuVar6);
      puVar3 = apuStack_70[0];
      for (lVar12 = (long)puStack_78 << 3; ppuVar4 = ppuVar6, lVar12 != 0; lVar12 = lVar12 + -8) {
        puVar11 = (undefined8 *)*puVar3;
        ppuVar6 = (undefined8 **)(puVar11 + 3);
        func_0x00010b4ea57c();
        lVar9 = (long)*(char *)((long)puVar11 + 0x17);
        puVar5 = puVar11;
        if (lVar9 < 0) {
          lVar9 = puVar11[1];
          puVar5 = (undefined8 *)*puVar11;
        }
        func_0x00010b4ea4fc(puVar5,lVar9);
        ppuVar8 = (undefined8 **)(long)*(char *)((long)puVar11 + 0x2f);
        if ((long)ppuVar8 < 0) {
          ppuVar6 = (undefined8 **)puVar11[3];
          ppuVar8 = (undefined8 **)puVar11[4];
        }
        func_0x00010b4ea4fc(ppuVar6);
        puVar3 = puVar3 + 1;
        param_2 = ppuVar4;
      }
      ppuVar4 = apuStack_70;
      func_0x000105991ac8();
    }
  }
  ppuVar6 = ppuVar4;
  if (*(int *)(param_1 + 0x3b) != 0) {
    func_0x00010b4ea4e8();
    ppuVar6 = (undefined8 **)0xb8;
    func_0x000107c280a8();
    func_0x00010b4ea4dc();
    ppuVar8 = ppuVar4;
    param_2 = ppuVar6;
  }
  if (*(int *)((long)param_1 + 0x1dc) != 0) {
    func_0x00010b4ea4e8();
    param_2 = (undefined8 **)0xc0;
    func_0x000107c280a8(0xc0);
    func_0x00010b4ea4dc();
    ppuVar8 = ppuVar6;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x19);
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0x17);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x1a);
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0x1a);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x1b);
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0x1d);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x1c);
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x1d);
    func_0x00010b4ea564();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x38];
    param_2 = (undefined8 **)0x1e;
    func_0x00010b4ea4c4(0x1e,ppuVar8,*(int *)((long)ppuVar8 + 0x14));
  }
  if ((uVar1 >> 5 & 1) != 0) {
    ppuVar8 = (undefined8 **)param_1[0x39];
    param_2 = (undefined8 **)0x1f;
    func_0x00010b4ea4c4(0x1f,ppuVar8,*(int *)((long)ppuVar8 + 0x14));
  }
  func_0x00010b4ea540(param_1[0x32]);
  if ((long)ppuVar8 < 0) {
    ppuVar8 = (undefined8 **)0x0;
    uVar7 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10b4e99ec;
  }
  else if ((int)ppuVar8 != 0) {
    uVar7 = 0;
LAB_10b4e99ec:
    func_0x00010b4ea508(uVar7);
    ppuVar8 = (undefined8 **)0x20;
    param_2 = param_3;
    func_0x00010b4ea4d0(param_3);
  }
  func_0x00010b4ea540(param_1[0x33]);
  if ((long)ppuVar8 < 0) {
    uVar7 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10b4e9a48;
  }
  else {
    if ((int)ppuVar8 == 0) goto LAB_10b4e9a48;
    uVar7 = 0;
  }
  func_0x00010b4ea508(uVar7);
  param_2 = param_3;
  func_0x00010b4ea4d0(param_3);
LAB_10b4e9a48:
  iVar2 = *(int *)(param_1 + 0x23);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x22);
    func_0x00010b4ea564();
  }
  iVar2 = *(int *)(param_1 + 0x26);
  while (iVar2 != 0) {
    func_0x00010b4ea48c();
    func_0x00010b4ea4c4(0x23);
    func_0x00010b4ea564();
  }
  if (((ulong)param_1[1] & 1) != 0) {
    uVar10 = (ulong)param_1[1] & 0xfffffffffffffffe;
    lVar12 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar12 < 0) {
      lVar9 = *(long *)(uVar10 + 8);
      lVar12 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar9 = uVar10 + 8;
    }
    func_0x0001053930c4(param_3,lVar9,lVar12,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b4e9b68; end: 10b4e9f87;  */

/* WARNING: Removing unreachable block (ram,0x00010b4e9cec) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9ca4) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9c6c) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9bfc) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9bc0) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9be0) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9c50) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9c88) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9cc4) */
/* WARNING: Removing unreachable block (ram,0x00010b4e9d14) */
/* WARNING: Type propagation algorithm not settling */

long FUN_10b4e9b68(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar6;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  long alStack_48 [3];
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  while (((long)iVar4 & 0x1fffffffffffffffU) != 0) {
    FUN_10b4e6350(*puVar1);
    func_0x00010b4ea558();
    puVar1 = puVar1 + 1;
  }
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  lVar7 = (long)iVar4 + (ulong)*(uint *)(param_1 + 0x78) * 2;
  plVar3 = alStack_48;
  func_0x00010564c19c();
  while (alStack_48[0] != 0) {
    lVar5 = alStack_48[0] + 8;
    func_0x000105990b3c(lVar5,alStack_48[0] + 0x20);
    lVar7 = lVar5 + lVar7;
    plVar3 = alStack_48;
    func_0x000107c27d54();
  }
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  func_0x00010b4ea4a8();
  iVar4 = *(int *)(param_1 + 0x118);
  func_0x00010b4ea5b0();
  lVar7 = lVar7 + (long)iVar4 * 2 + (long)*(int *)(param_1 + 0x130) * 2;
  func_0x00010b4ea5b0();
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x140));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x148));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x150));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x158));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x160));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x168));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x170));
  lVar5 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x178));
  lVar5 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x180));
  lVar5 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x188));
  lVar5 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea570();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 400));
  lVar5 = extraout_x8_09;
  if (extraout_x8_09 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea5a4();
  }
  func_0x00010b4ea534(*(undefined8 *)(param_1 + 0x198));
  lVar5 = extraout_x8_10;
  if (extraout_x8_10 < 0) {
    lVar5 = plVar3[1];
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ea5a4();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b4e6350(*(undefined8 *)(param_1 + 0x1a0));
      func_0x00010b4ea570();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010b4e63e0(*(undefined8 *)(param_1 + 0x1a8));
      func_0x00010b4ea5a4();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00010b4e63b0(*(undefined8 *)(param_1 + 0x1b0));
      func_0x00010b4ea5a4();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x00010b4e63b0(*(undefined8 *)(param_1 + 0x1b8));
      func_0x00010b4ea5a4();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x00010b4e63c8(*(undefined8 *)(param_1 + 0x1c0));
      func_0x00010b4ea5a4();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x00010b4e63c8(*(undefined8 *)(param_1 + 0x1c8));
      func_0x00010b4ea5a4();
    }
  }
  iVar4 = -9;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    func_0x00010b4ea510();
    lVar7 = extraout_x9 + 1;
    iVar4 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    func_0x00010b4ea510();
    lVar7 = extraout_x9_00 + 1;
    iVar4 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    func_0x00010b4ea510();
    lVar7 = extraout_x9_01 + 2;
    iVar4 = extraout_w8_01;
  }
  if (*(int *)(param_1 + 0x1dc) != 0) {
    lVar7 = lVar7 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1dc)) * iVar4 + 0x280U >> 6) + 2
    ;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar7 = lVar5 + lVar7;
  }
  *(int *)(param_1 + 0x14) = (int)lVar7;
  return lVar7;
}



/* Entry: 10b4e9f88; end: 10b4e9f8b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e9f88(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b4e677c(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4e677c(param_1 + 0x30,param_2 + 0x30);
  func_0x00010b4e678c(param_1 + 0x48,param_2 + 0x48);
  func_0x00010b4e678c(param_1 + 0x60,param_2 + 0x60);
  func_0x0001059929d4(param_1 + 0x78,param_2 + 0x78);
  func_0x00010b4e678c(param_1 + 0x98,param_2 + 0x98);
  func_0x00010b4e678c(param_1 + 0xb0,param_2 + 0xb0);
  func_0x00010b4e678c(param_1 + 200,param_2 + 200);
  func_0x00010b4e679c(param_1 + 0xe0,param_2 + 0xe0);
  func_0x00010b4e679c(param_1 + 0xf8,param_2 + 0xf8);
  func_0x00010b4e67ac(param_1 + 0x110,param_2 + 0x110);
  lVar3 = param_2 + 0x128;
  func_0x00010b4e67ac(param_1 + 0x128);
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x140));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x140);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x148));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x148);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x150));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x150);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x158));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x158);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x160));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x160);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x168));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x168);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x170));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x170);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x178));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x178);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x180));
  lVar4 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x180);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x188));
  lVar4 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x188);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 400));
  lVar4 = extraout_x8_09;
  if (extraout_x8_09 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 400);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x198));
  lVar4 = extraout_x8_10;
  if (extraout_x8_10 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x198);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6cf0(uVar5,*(undefined8 *)(param_2 + 0x1a0));
        *(ulong *)(param_1 + 0x1a0) = uVar2;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a8) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d94(uVar5,*(undefined8 *)(param_2 + 0x1a8));
        *(ulong *)(param_1 + 0x1a8) = uVar2;
      }
      else {
        FUN_10b4ee4e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x1b0));
        *(ulong *)(param_1 + 0x1b0) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x1b8));
        *(ulong *)(param_1 + 0x1b8) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x1c0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1c0));
        *(ulong *)(param_1 + 0x1c0) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x1c8) == 0) {
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1c8));
        *(ulong *)(param_1 + 0x1c8) = uVar5;
      }
      else {
        FUN_10b4e76b4();
      }
    }
  }
  if (*(int *)(param_2 + 0x1d0) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_2 + 0x1d0);
  }
  if (*(int *)(param_2 + 0x1d4) != 0) {
    *(int *)(param_1 + 0x1d4) = *(int *)(param_2 + 0x1d4);
  }
  if (*(int *)(param_2 + 0x1d8) != 0) {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_2 + 0x1d8);
  }
  if (*(int *)(param_2 + 0x1dc) != 0) {
    *(int *)(param_1 + 0x1dc) = *(int *)(param_2 + 0x1dc);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
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



/* Entry: 10b4e9f8c; end: 10b4ea3b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4e9f8c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b4e677c(param_1 + 0x18,param_2 + 0x18);
  FUN_10b4e677c(param_1 + 0x30,param_2 + 0x30);
  func_0x00010b4e678c(param_1 + 0x48,param_2 + 0x48);
  func_0x00010b4e678c(param_1 + 0x60,param_2 + 0x60);
  func_0x0001059929d4(param_1 + 0x78,param_2 + 0x78);
  func_0x00010b4e678c(param_1 + 0x98,param_2 + 0x98);
  func_0x00010b4e678c(param_1 + 0xb0,param_2 + 0xb0);
  func_0x00010b4e678c(param_1 + 200,param_2 + 200);
  func_0x00010b4e679c(param_1 + 0xe0,param_2 + 0xe0);
  func_0x00010b4e679c(param_1 + 0xf8,param_2 + 0xf8);
  func_0x00010b4e67ac(param_1 + 0x110,param_2 + 0x110);
  lVar3 = param_2 + 0x128;
  func_0x00010b4e67ac(param_1 + 0x128);
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x140));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x140);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x148));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x148);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x150));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x150);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x158));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x158);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x160));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x160);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x168));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x168);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x170));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x170);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x178));
  lVar4 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x178);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x180));
  lVar4 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x180);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x188));
  lVar4 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x188);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 400));
  lVar4 = extraout_x8_09;
  if (extraout_x8_09 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 400);
  }
  func_0x00010b4ea528(*(undefined8 *)(param_2 + 0x198));
  lVar4 = extraout_x8_10;
  if (extraout_x8_10 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4ea54c();
    }
    func_0x000107c30248(param_1 + 0x198);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6cf0(uVar5,*(undefined8 *)(param_2 + 0x1a0));
        *(ulong *)(param_1 + 0x1a0) = uVar2;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x1a8) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d94(uVar5,*(undefined8 *)(param_2 + 0x1a8));
        *(ulong *)(param_1 + 0x1a8) = uVar2;
      }
      else {
        FUN_10b4ee4e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x1b0));
        *(ulong *)(param_1 + 0x1b0) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d24(uVar5,*(undefined8 *)(param_2 + 0x1b8));
        *(ulong *)(param_1 + 0x1b8) = uVar2;
      }
      else {
        FUN_10b4e7294();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x1c0) == 0) {
        uVar2 = uVar5;
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1c0));
        *(ulong *)(param_1 + 0x1c0) = uVar2;
      }
      else {
        FUN_10b4e76b4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x1c8) == 0) {
        func_0x00010b4e6d58(uVar5,*(undefined8 *)(param_2 + 0x1c8));
        *(ulong *)(param_1 + 0x1c8) = uVar5;
      }
      else {
        FUN_10b4e76b4();
      }
    }
  }
  if (*(int *)(param_2 + 0x1d0) != 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_2 + 0x1d0);
  }
  if (*(int *)(param_2 + 0x1d4) != 0) {
    *(int *)(param_1 + 0x1d4) = *(int *)(param_2 + 0x1d4);
  }
  if (*(int *)(param_2 + 0x1d8) != 0) {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_2 + 0x1d8);
  }
  if (*(int *)(param_2 + 0x1dc) != 0) {
    *(int *)(param_1 + 0x1dc) = *(int *)(param_2 + 0x1dc);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
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



/* Entry: 10b4ea3b4; end: 10b4ea3bb;  */

void FUN_10b4ea3b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x1e0;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x1e0);
  }
  *puVar1 = &PTR_FUN_110cf2d60;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_2;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_2;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = param_2;
  puVar1[0x10] = 0x100000000;
  puVar1[0xf] = 0x100000000;
  puVar1[0x11] = &DAT_10e5b4a18;
  puVar1[0x12] = param_2;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = param_2;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = param_2;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = param_2;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = param_2;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = param_2;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = param_2;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = param_2;
  puVar1[0x28] = &DAT_11383d918;
  puVar1[0x29] = &DAT_11383d918;
  puVar1[0x2a] = &DAT_11383d918;
  puVar1[0x2b] = &DAT_11383d918;
  puVar1[0x2c] = &DAT_11383d918;
  puVar1[0x2d] = &DAT_11383d918;
  puVar1[0x2e] = &DAT_11383d918;
  puVar1[0x2f] = &DAT_11383d918;
  puVar1[0x30] = &DAT_11383d918;
  puVar1[0x31] = &DAT_11383d918;
  puVar1[0x32] = &DAT_11383d918;
  puVar1[0x33] = &DAT_11383d918;
  puVar1[0x39] = 0;
  puVar1[0x38] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  puVar1[0x37] = 0;
  puVar1[0x36] = 0;
  return;
}



/* Entry: 10b4ea3bc; end: 10b4ea48b;  */

void FUN_10b4ea3bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x1e0;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x1e0);
  }
  *puVar1 = &PTR_FUN_110cf2d60;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_1;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = param_1;
  puVar1[0x10] = 0x100000000;
  puVar1[0xf] = 0x100000000;
  puVar1[0x11] = &DAT_10e5b4a18;
  puVar1[0x12] = param_1;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = param_1;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = param_1;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = param_1;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = param_1;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = param_1;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = param_1;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = param_1;
  puVar1[0x28] = &DAT_11383d918;
  puVar1[0x29] = &DAT_11383d918;
  puVar1[0x2a] = &DAT_11383d918;
  puVar1[0x2b] = &DAT_11383d918;
  puVar1[0x2c] = &DAT_11383d918;
  puVar1[0x2d] = &DAT_11383d918;
  puVar1[0x2e] = &DAT_11383d918;
  puVar1[0x2f] = &DAT_11383d918;
  puVar1[0x30] = &DAT_11383d918;
  puVar1[0x31] = &DAT_11383d918;
  puVar1[0x32] = &DAT_11383d918;
  puVar1[0x33] = &DAT_11383d918;
  puVar1[0x39] = 0;
  puVar1[0x38] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  puVar1[0x37] = 0;
  puVar1[0x36] = 0;
  return;
}



/* Entry: 10b4ea48c; end: 10b4ea62f;  */

void FUN_10b4ea48c(void)

{
  return;
}



/* Entry: 10b4ea630; end: 10b4ea657;  */

long FUN_10b4ea630(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4ea658; end: 10b4ea6a7;  */

undefined8 * FUN_10b4ea658(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf2e10;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  func_0x00010b4ea5c4(param_1,param_3);
  return param_1;
}



/* Entry: 10b4ea6a8; end: 10b4ea6ab;  */

long FUN_10b4ea6a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b4ea6ac; end: 10b4ea6bf;  */

void FUN_10b4ea6ac(void)

{
  FUN_10b4ea630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ea6c0; end: 10b4ea6e3;  */

undefined ** FUN_10b4ea6c0(void)

{
  return &PTR_DAT_110cf2e50;
}



/* Entry: 10b4ea6e4; end: 10b4ea80f;  */

long * FUN_10b4ea6e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    func_0x00010b4ea8bc();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b4ea8b0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x00010b4ea8bc();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b4ea8b0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    func_0x00010b4ea8bc();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b4ea8b0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x13) == '\x01') {
    func_0x00010b4ea8bc();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b4ea8b0();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    func_0x00010b4ea8bc();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b4ea8b0();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b4ea810; end: 10b4ea863;  */

long FUN_10b4ea810(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar2 = ((ulong)((uint)(ushort)((ushort)(byte)uVar1 + (ushort)(byte)((uint)uVar1 >> 8) +
                                  (ushort)(byte)((uint)uVar1 >> 0x10) +
                                 (ushort)(byte)((uint)uVar1 >> 0x18)) +
                  (uint)*(byte *)(param_1 + 0x14)) & 0x7f) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b4ea864; end: 10b4ea8af;  */

void FUN_10b4ea864(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cf2e10;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  return;
}



/* Entry: 10b4ea8b0; end: 10b4ea8cf;  */

void FUN_10b4ea8b0(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b4ea8d0; end: 10b4ea907;  */

long FUN_10b4ea8d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4ea908; end: 10b4ea90b;  */

long FUN_10b4ea908(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b4ea90c; end: 10b4ea91f;  */

void FUN_10b4ea90c(void)

{
  FUN_10b4ea8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ea920; end: 10b4ea92b;  */

undefined ** FUN_10b4ea920(void)

{
  return &PTR_DAT_110cf2f10;
}



/* Entry: 10b4ea92c; end: 10b4ea973;  */

void FUN_10b4ea92c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b4ea974; end: 10b4eaa5b;  */

long * FUN_10b4ea974(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,2);
  }
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b4eaa5c; end: 10b4eabbb;  */

long FUN_10b4eaa5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b4eaa94;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b4eaa94:
    lVar3 = 0;
    goto LAB_10b4eaa98;
  }
  func_0x000107c28098();
  lVar3 = uVar1 + 1;
LAB_10b4eaa98:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4eabbc; end: 10b4eabc3;  */

void FUN_10b4eabbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2ed0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4eabc4; end: 10b4eac13;  */

void FUN_10b4eabc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf2ed0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4eac14; end: 10b4eac1b;  */

void FUN_10b4eac14(void)

{
  return;
}



/* Entry: 10b4eac1c; end: 10b4eac83;  */

undefined8 * FUN_10b4eac1c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf2f88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b4eaf4c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b4eac84; end: 10b4eacb3;  */

long FUN_10b4eac84(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4eaf78(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eacb4; end: 10b4eacb7;  */

long FUN_10b4eacb4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4eaf78(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eacb8; end: 10b4eaccb;  */

void FUN_10b4eacb8(void)

{
  FUN_10b4eac84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eaccc; end: 10b4eacd7;  */

undefined ** FUN_10b4eaccc(void)

{
  return &PTR_DAT_110cf2fc8;
}



/* Entry: 10b4eacd8; end: 10b4ead23;  */

void FUN_10b4eacd8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b4ead24; end: 10b4eae0f;  */

long * FUN_10b4ead24(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8(param_2,uVar2);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x24),param_2,param_3);
    param_2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b4eae10; end: 10b4eaeab;  */

long FUN_10b4eae10(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b4eaeac();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b4eaeac; end: 10b4eaed7;  */

long FUN_10b4eaeac(long param_1)

{
  FUN_10b4eaa5c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4eaed8; end: 10b4eaedb;  */

void FUN_10b4eaed8(long param_1,long param_2)

{
  FUN_10b4eaf34(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b4eaedc; end: 10b4eaf33;  */

void FUN_10b4eaedc(long param_1,long param_2)

{
  FUN_10b4eaf34(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b4eaf34; end: 10b4eaf4b;  */

void FUN_10b4eaf34(long *param_1,long param_2)

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



/* Entry: 10b4eaf4c; end: 10b4eaf77;  */

undefined8 * FUN_10b4eaf4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b4eaf34(param_1,param_3);
  return param_1;
}



/* Entry: 10b4eaf78; end: 10b4eafa7;  */

long * FUN_10b4eaf78(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4eafa8; end: 10b4eafef;  */

void FUN_10b4eafa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cf2f88;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b4eaff0; end: 10b4eb003;  */

void FUN_10b4eaff0(void)

{
  return;
}



/* Entry: 10b4eb004; end: 10b4eb077;  */

void FUN_10b4eb004(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b4ed9fc();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110cf32c0;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b4ed8a8();
  }
  FUN_10b4ed124(unaff_x19 + 2);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c();
  unaff_x19[5] = param_3;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  return;
}



/* Entry: 10b4eb078; end: 10b4eb0a3;  */

undefined8 FUN_10b4eb078(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  FUN_10b4eb0a4(param_1);
  return param_1;
}



/* Entry: 10b4eb0a4; end: 10b4eb0cb;  */

undefined8 FUN_10b4eb0a4(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x00010b4edae0(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return unaff_x19;
}



/* Entry: 10b4eb0cc; end: 10b4eb0cf;  */

undefined8 FUN_10b4eb0cc(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  FUN_10b4eb0a4(param_1);
  return param_1;
}



/* Entry: 10b4eb0d0; end: 10b4eb0e3;  */

void FUN_10b4eb0d0(void)

{
  FUN_10b4eb078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eb0e4; end: 10b4eb0ef;  */

undefined ** FUN_10b4eb0e4(void)

{
  return &PTR_DAT_110cf3350;
}



/* Entry: 10b4eb0f0; end: 10b4eb123;  */

void FUN_10b4eb0f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4ed9d0();
  FUN_10b4ed510();
  func_0x00010b4edac4();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b4eb124; end: 10b4eb1e3;  */

long * FUN_10b4eb124(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x18);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + (long)iVar4 * 8 + 7);
    }
    param_2 = (long *)0x1;
    func_0x00010b4ed868(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14));
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)uVar2;
        uVar2 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar5;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar2);
  }
  return param_2;
}



/* Entry: 10b4eb1e4; end: 10b4eb257;  */

long FUN_10b4eb1e4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b4ed7bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_10b4eb258();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b4ed8c0(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010b4ed8b4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4ed9b8();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b4eb258; end: 10b4eb273;  */

long FUN_10b4eb258(long param_1)

{
  long extraout_x8;
  
  FUN_10b4ec1e0();
  func_0x00010b4ed904();
  return param_1 + extraout_x8;
}



/* Entry: 10b4eb274; end: 10b4eb277;  */

void FUN_10b4eb274(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9a4();
  FUN_10b4eb2cc();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    func_0x00010b4edacc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eb278; end: 10b4eb2cb;  */

void FUN_10b4eb278(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9a4();
  FUN_10b4eb2cc();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    func_0x00010b4edacc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eb2cc; end: 10b4eb2db;  */

void FUN_10b4eb2cc(long *param_1,long param_2)

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



/* Entry: 10b4eb2dc; end: 10b4eb30f;  */

long FUN_10b4eb2dc(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b4ed144(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eb310; end: 10b4eb313;  */

long FUN_10b4eb310(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b4ed144(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eb314; end: 10b4eb327;  */

void FUN_10b4eb314(void)

{
  FUN_10b4eb2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eb328; end: 10b4eb333;  */

undefined ** FUN_10b4eb328(void)

{
  return &PTR_DAT_110cf33b8;
}



/* Entry: 10b4eb334; end: 10b4eb367;  */

void FUN_10b4eb334(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4ed9d0();
  FUN_10b4ed510();
  func_0x00010b4edac4();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b4eb368; end: 10b4eb413;  */

long * FUN_10b4eb368(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int unaff_w23;
  int iVar4;
  
  func_0x00010b4ed848();
  func_0x00010b4ed91c(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_10b4eb3bc;
    plVar2 = (long *)*unaff_x22;
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 == 0) goto LAB_10b4eb3bc;
  }
  param_4 = (long *)&UNK_10f775389;
  func_0x00010b4ed860();
  func_0x00010b4eda64();
  func_0x00010b4ed7f8();
  param_1 = plVar2;
  unaff_x20 = plVar2;
LAB_10b4eb3bc:
  func_0x00010b4eda38();
  while (unaff_w23 != (int)unaff_x22) {
    func_0x00010b4ed7a0();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b4ed7ec();
    func_0x00010b4eda58();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b4ed938();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b4eda10();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b4eb414; end: 10b4eb487;  */

long FUN_10b4eb414(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b4ed7bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_10b4eb258();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b4ed8c0(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b4ed8b4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4ed9b8();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b4eb488; end: 10b4eb4db;  */

void FUN_10b4eb488(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9a4();
  FUN_10b4eb2cc();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    func_0x00010b4edacc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eb4dc; end: 10b4eb58f;  */

undefined8 * FUN_10b4eb4dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf3310;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4ed8a8();
  }
  FUN_10b4ed16c(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010b4ed18c(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x40;
  func_0x00010b4ed930();
  param_1[8] = lVar1;
  lVar1 = param_3 + 0x48;
  func_0x00010b4ed930();
  param_1[9] = lVar1;
  lVar1 = param_3 + 0x50;
  func_0x00010b4ed930();
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_3 + 0x60);
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 10b4eb590; end: 10b4eb5bb;  */

undefined8 FUN_10b4eb590(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  FUN_10b4eb5bc(param_1);
  return param_1;
}



/* Entry: 10b4eb5bc; end: 10b4eb5f3;  */

undefined8 FUN_10b4eb5bc(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  FUN_10b4ed1ac(param_1 + 0x28);
  func_0x00010b4edae0(param_1 + 0x10);
  if (extraout_x8 != 0) {
    func_0x00010b4eda08();
  }
  return unaff_x19;
}



/* Entry: 10b4eb5f4; end: 10b4eb5f7;  */

undefined8 FUN_10b4eb5f4(undefined8 param_1)

{
  func_0x00010b4ed8e4();
  FUN_10b4eb5bc(param_1);
  return param_1;
}



/* Entry: 10b4eb5f8; end: 10b4eb60b;  */

void FUN_10b4eb5f8(void)

{
  FUN_10b4eb590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eb60c; end: 10b4eb617;  */

undefined ** FUN_10b4eb60c(void)

{
  return &PTR_DAT_110cf3408;
}



/* Entry: 10b4eb618; end: 10b4eb687;  */

void FUN_10b4eb618(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
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



/* Entry: 10b4eb688; end: 10b4eb8d3;  */

long * FUN_10b4eb688(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar6;
  long *unaff_x22;
  int unaff_w23;
  int iVar7;
  
  func_0x00010b4ed848();
  func_0x00010b4ed91c(param_1[8]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b4eb6c4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b4eb6c4:
      param_4 = (long *)&UNK_10f7753be;
      func_0x00010b4ed860();
      func_0x00010b4eda64();
      func_0x00010b4ed7f8();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b4eda38();
  while (unaff_w23 != (int)unaff_x22) {
    func_0x00010b4ed7a0();
    param_1 = (long *)0x2;
    func_0x00010b4ed7ec();
    func_0x00010b4eda58();
  }
  uVar4 = *(ulong *)(unaff_x21 + 0x48) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x00010b4edad4();
    func_0x000107c280a0();
    param_4 = unaff_x20;
    unaff_x20 = param_1;
  }
  iVar6 = *(int *)(unaff_x21 + 0x30);
  while (iVar6 != 0) {
    func_0x00010b4ed7a0();
    uVar4 = (ulong)*(uint *)(param_2 + 0x30);
    param_1 = (long *)0x4;
    func_0x00010b4ed7ec();
    func_0x00010b4eda58();
  }
  if (*(long *)(unaff_x21 + 0x58) != 0) {
    func_0x00010b4edab0();
    unaff_x20 = param_1;
  }
  lVar5 = *(long *)(unaff_x21 + 0x60);
  if (lVar5 != 0) {
    func_0x00010b4ed978();
    unaff_x20 = param_1;
  }
  func_0x00010b4ed91c(*(undefined8 *)(unaff_x21 + 0x50));
  if (lVar5 < 0) {
    uVar3 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10b4eb7b4;
  }
  else {
    if ((int)lVar5 == 0) goto LAB_10b4eb7b4;
    uVar3 = 0;
  }
  param_4 = (long *)&UNK_10f775411;
  func_0x00010b4ed860(uVar3);
  func_0x00010b4ed7f8();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b4eb7b4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b4ed938();
  if ((long)uVar4 < 0) {
    uVar4 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b4eda10();
  if (*param_1 - (long)param_4 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar7);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)uVar4);
}



/* Entry: 10b4eb8d4; end: 10b4eb8d7;  */

void FUN_10b4eb8d4(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9a4();
  FUN_10b4eb9a4();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b4eb9b4();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x50);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eb8d8; end: 10b4eb9a3;  */

void FUN_10b4eb8d8(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4ed9a4();
  FUN_10b4eb9a4();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b4eb9b4();
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b4ed8d8(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4ed8cc();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x50);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x19 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4ed838();
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



/* Entry: 10b4eb9a4; end: 10b4eb9c3;  */

void FUN_10b4eb9a4(long *param_1,long param_2)

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



/* Entry: 10b4eb9c4; end: 10b4eb9ef;  */

long FUN_10b4eb9c4(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eb9f0; end: 10b4eb9f3;  */

long FUN_10b4eb9f0(long param_1)

{
  func_0x00010b4ed8e4();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4eb9f4; end: 10b4eba07;  */

void FUN_10b4eb9f4(void)

{
  FUN_10b4eb9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eba08; end: 10b4eba13;  */

undefined ** FUN_10b4eba08(void)

{
  return &PTR_DAT_110cf3460;
}


